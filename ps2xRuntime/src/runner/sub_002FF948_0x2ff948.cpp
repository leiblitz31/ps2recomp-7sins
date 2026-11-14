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

// Function: sub_002FF948
// Address: 0x2ff948 - 0x300000
void sub_002FF948_0x2ff948(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FF948_0x2ff948");
#endif

    switch (ctx->pc) {
        case 0x2ff948u: goto label_2ff948;
        case 0x2ff94cu: goto label_2ff94c;
        case 0x2ff950u: goto label_2ff950;
        case 0x2ff954u: goto label_2ff954;
        case 0x2ff958u: goto label_2ff958;
        case 0x2ff95cu: goto label_2ff95c;
        case 0x2ff960u: goto label_2ff960;
        case 0x2ff964u: goto label_2ff964;
        case 0x2ff968u: goto label_2ff968;
        case 0x2ff96cu: goto label_2ff96c;
        case 0x2ff970u: goto label_2ff970;
        case 0x2ff974u: goto label_2ff974;
        case 0x2ff978u: goto label_2ff978;
        case 0x2ff97cu: goto label_2ff97c;
        case 0x2ff980u: goto label_2ff980;
        case 0x2ff984u: goto label_2ff984;
        case 0x2ff988u: goto label_2ff988;
        case 0x2ff98cu: goto label_2ff98c;
        case 0x2ff990u: goto label_2ff990;
        case 0x2ff994u: goto label_2ff994;
        case 0x2ff998u: goto label_2ff998;
        case 0x2ff99cu: goto label_2ff99c;
        case 0x2ff9a0u: goto label_2ff9a0;
        case 0x2ff9a4u: goto label_2ff9a4;
        case 0x2ff9a8u: goto label_2ff9a8;
        case 0x2ff9acu: goto label_2ff9ac;
        case 0x2ff9b0u: goto label_2ff9b0;
        case 0x2ff9b4u: goto label_2ff9b4;
        case 0x2ff9b8u: goto label_2ff9b8;
        case 0x2ff9bcu: goto label_2ff9bc;
        case 0x2ff9c0u: goto label_2ff9c0;
        case 0x2ff9c4u: goto label_2ff9c4;
        case 0x2ff9c8u: goto label_2ff9c8;
        case 0x2ff9ccu: goto label_2ff9cc;
        case 0x2ff9d0u: goto label_2ff9d0;
        case 0x2ff9d4u: goto label_2ff9d4;
        case 0x2ff9d8u: goto label_2ff9d8;
        case 0x2ff9dcu: goto label_2ff9dc;
        case 0x2ff9e0u: goto label_2ff9e0;
        case 0x2ff9e4u: goto label_2ff9e4;
        case 0x2ff9e8u: goto label_2ff9e8;
        case 0x2ff9ecu: goto label_2ff9ec;
        case 0x2ff9f0u: goto label_2ff9f0;
        case 0x2ff9f4u: goto label_2ff9f4;
        case 0x2ff9f8u: goto label_2ff9f8;
        case 0x2ff9fcu: goto label_2ff9fc;
        case 0x2ffa00u: goto label_2ffa00;
        case 0x2ffa04u: goto label_2ffa04;
        case 0x2ffa08u: goto label_2ffa08;
        case 0x2ffa0cu: goto label_2ffa0c;
        case 0x2ffa10u: goto label_2ffa10;
        case 0x2ffa14u: goto label_2ffa14;
        case 0x2ffa18u: goto label_2ffa18;
        case 0x2ffa1cu: goto label_2ffa1c;
        case 0x2ffa20u: goto label_2ffa20;
        case 0x2ffa24u: goto label_2ffa24;
        case 0x2ffa28u: goto label_2ffa28;
        case 0x2ffa2cu: goto label_2ffa2c;
        case 0x2ffa30u: goto label_2ffa30;
        case 0x2ffa34u: goto label_2ffa34;
        case 0x2ffa38u: goto label_2ffa38;
        case 0x2ffa3cu: goto label_2ffa3c;
        case 0x2ffa40u: goto label_2ffa40;
        case 0x2ffa44u: goto label_2ffa44;
        case 0x2ffa48u: goto label_2ffa48;
        case 0x2ffa4cu: goto label_2ffa4c;
        case 0x2ffa50u: goto label_2ffa50;
        case 0x2ffa54u: goto label_2ffa54;
        case 0x2ffa58u: goto label_2ffa58;
        case 0x2ffa5cu: goto label_2ffa5c;
        case 0x2ffa60u: goto label_2ffa60;
        case 0x2ffa64u: goto label_2ffa64;
        case 0x2ffa68u: goto label_2ffa68;
        case 0x2ffa6cu: goto label_2ffa6c;
        case 0x2ffa70u: goto label_2ffa70;
        case 0x2ffa74u: goto label_2ffa74;
        case 0x2ffa78u: goto label_2ffa78;
        case 0x2ffa7cu: goto label_2ffa7c;
        case 0x2ffa80u: goto label_2ffa80;
        case 0x2ffa84u: goto label_2ffa84;
        case 0x2ffa88u: goto label_2ffa88;
        case 0x2ffa8cu: goto label_2ffa8c;
        case 0x2ffa90u: goto label_2ffa90;
        case 0x2ffa94u: goto label_2ffa94;
        case 0x2ffa98u: goto label_2ffa98;
        case 0x2ffa9cu: goto label_2ffa9c;
        case 0x2ffaa0u: goto label_2ffaa0;
        case 0x2ffaa4u: goto label_2ffaa4;
        case 0x2ffaa8u: goto label_2ffaa8;
        case 0x2ffaacu: goto label_2ffaac;
        case 0x2ffab0u: goto label_2ffab0;
        case 0x2ffab4u: goto label_2ffab4;
        case 0x2ffab8u: goto label_2ffab8;
        case 0x2ffabcu: goto label_2ffabc;
        case 0x2ffac0u: goto label_2ffac0;
        case 0x2ffac4u: goto label_2ffac4;
        case 0x2ffac8u: goto label_2ffac8;
        case 0x2ffaccu: goto label_2ffacc;
        case 0x2ffad0u: goto label_2ffad0;
        case 0x2ffad4u: goto label_2ffad4;
        case 0x2ffad8u: goto label_2ffad8;
        case 0x2ffadcu: goto label_2ffadc;
        case 0x2ffae0u: goto label_2ffae0;
        case 0x2ffae4u: goto label_2ffae4;
        case 0x2ffae8u: goto label_2ffae8;
        case 0x2ffaecu: goto label_2ffaec;
        case 0x2ffaf0u: goto label_2ffaf0;
        case 0x2ffaf4u: goto label_2ffaf4;
        case 0x2ffaf8u: goto label_2ffaf8;
        case 0x2ffafcu: goto label_2ffafc;
        case 0x2ffb00u: goto label_2ffb00;
        case 0x2ffb04u: goto label_2ffb04;
        case 0x2ffb08u: goto label_2ffb08;
        case 0x2ffb0cu: goto label_2ffb0c;
        case 0x2ffb10u: goto label_2ffb10;
        case 0x2ffb14u: goto label_2ffb14;
        case 0x2ffb18u: goto label_2ffb18;
        case 0x2ffb1cu: goto label_2ffb1c;
        case 0x2ffb20u: goto label_2ffb20;
        case 0x2ffb24u: goto label_2ffb24;
        case 0x2ffb28u: goto label_2ffb28;
        case 0x2ffb2cu: goto label_2ffb2c;
        case 0x2ffb30u: goto label_2ffb30;
        case 0x2ffb34u: goto label_2ffb34;
        case 0x2ffb38u: goto label_2ffb38;
        case 0x2ffb3cu: goto label_2ffb3c;
        case 0x2ffb40u: goto label_2ffb40;
        case 0x2ffb44u: goto label_2ffb44;
        case 0x2ffb48u: goto label_2ffb48;
        case 0x2ffb4cu: goto label_2ffb4c;
        case 0x2ffb50u: goto label_2ffb50;
        case 0x2ffb54u: goto label_2ffb54;
        case 0x2ffb58u: goto label_2ffb58;
        case 0x2ffb5cu: goto label_2ffb5c;
        case 0x2ffb60u: goto label_2ffb60;
        case 0x2ffb64u: goto label_2ffb64;
        case 0x2ffb68u: goto label_2ffb68;
        case 0x2ffb6cu: goto label_2ffb6c;
        case 0x2ffb70u: goto label_2ffb70;
        case 0x2ffb74u: goto label_2ffb74;
        case 0x2ffb78u: goto label_2ffb78;
        case 0x2ffb7cu: goto label_2ffb7c;
        case 0x2ffb80u: goto label_2ffb80;
        case 0x2ffb84u: goto label_2ffb84;
        case 0x2ffb88u: goto label_2ffb88;
        case 0x2ffb8cu: goto label_2ffb8c;
        case 0x2ffb90u: goto label_2ffb90;
        case 0x2ffb94u: goto label_2ffb94;
        case 0x2ffb98u: goto label_2ffb98;
        case 0x2ffb9cu: goto label_2ffb9c;
        case 0x2ffba0u: goto label_2ffba0;
        case 0x2ffba4u: goto label_2ffba4;
        case 0x2ffba8u: goto label_2ffba8;
        case 0x2ffbacu: goto label_2ffbac;
        case 0x2ffbb0u: goto label_2ffbb0;
        case 0x2ffbb4u: goto label_2ffbb4;
        case 0x2ffbb8u: goto label_2ffbb8;
        case 0x2ffbbcu: goto label_2ffbbc;
        case 0x2ffbc0u: goto label_2ffbc0;
        case 0x2ffbc4u: goto label_2ffbc4;
        case 0x2ffbc8u: goto label_2ffbc8;
        case 0x2ffbccu: goto label_2ffbcc;
        case 0x2ffbd0u: goto label_2ffbd0;
        case 0x2ffbd4u: goto label_2ffbd4;
        case 0x2ffbd8u: goto label_2ffbd8;
        case 0x2ffbdcu: goto label_2ffbdc;
        case 0x2ffbe0u: goto label_2ffbe0;
        case 0x2ffbe4u: goto label_2ffbe4;
        case 0x2ffbe8u: goto label_2ffbe8;
        case 0x2ffbecu: goto label_2ffbec;
        case 0x2ffbf0u: goto label_2ffbf0;
        case 0x2ffbf4u: goto label_2ffbf4;
        case 0x2ffbf8u: goto label_2ffbf8;
        case 0x2ffbfcu: goto label_2ffbfc;
        case 0x2ffc00u: goto label_2ffc00;
        case 0x2ffc04u: goto label_2ffc04;
        case 0x2ffc08u: goto label_2ffc08;
        case 0x2ffc0cu: goto label_2ffc0c;
        case 0x2ffc10u: goto label_2ffc10;
        case 0x2ffc14u: goto label_2ffc14;
        case 0x2ffc18u: goto label_2ffc18;
        case 0x2ffc1cu: goto label_2ffc1c;
        case 0x2ffc20u: goto label_2ffc20;
        case 0x2ffc24u: goto label_2ffc24;
        case 0x2ffc28u: goto label_2ffc28;
        case 0x2ffc2cu: goto label_2ffc2c;
        case 0x2ffc30u: goto label_2ffc30;
        case 0x2ffc34u: goto label_2ffc34;
        case 0x2ffc38u: goto label_2ffc38;
        case 0x2ffc3cu: goto label_2ffc3c;
        case 0x2ffc40u: goto label_2ffc40;
        case 0x2ffc44u: goto label_2ffc44;
        case 0x2ffc48u: goto label_2ffc48;
        case 0x2ffc4cu: goto label_2ffc4c;
        case 0x2ffc50u: goto label_2ffc50;
        case 0x2ffc54u: goto label_2ffc54;
        case 0x2ffc58u: goto label_2ffc58;
        case 0x2ffc5cu: goto label_2ffc5c;
        case 0x2ffc60u: goto label_2ffc60;
        case 0x2ffc64u: goto label_2ffc64;
        case 0x2ffc68u: goto label_2ffc68;
        case 0x2ffc6cu: goto label_2ffc6c;
        case 0x2ffc70u: goto label_2ffc70;
        case 0x2ffc74u: goto label_2ffc74;
        case 0x2ffc78u: goto label_2ffc78;
        case 0x2ffc7cu: goto label_2ffc7c;
        case 0x2ffc80u: goto label_2ffc80;
        case 0x2ffc84u: goto label_2ffc84;
        case 0x2ffc88u: goto label_2ffc88;
        case 0x2ffc8cu: goto label_2ffc8c;
        case 0x2ffc90u: goto label_2ffc90;
        case 0x2ffc94u: goto label_2ffc94;
        case 0x2ffc98u: goto label_2ffc98;
        case 0x2ffc9cu: goto label_2ffc9c;
        case 0x2ffca0u: goto label_2ffca0;
        case 0x2ffca4u: goto label_2ffca4;
        case 0x2ffca8u: goto label_2ffca8;
        case 0x2ffcacu: goto label_2ffcac;
        case 0x2ffcb0u: goto label_2ffcb0;
        case 0x2ffcb4u: goto label_2ffcb4;
        case 0x2ffcb8u: goto label_2ffcb8;
        case 0x2ffcbcu: goto label_2ffcbc;
        case 0x2ffcc0u: goto label_2ffcc0;
        case 0x2ffcc4u: goto label_2ffcc4;
        case 0x2ffcc8u: goto label_2ffcc8;
        case 0x2ffcccu: goto label_2ffccc;
        case 0x2ffcd0u: goto label_2ffcd0;
        case 0x2ffcd4u: goto label_2ffcd4;
        case 0x2ffcd8u: goto label_2ffcd8;
        case 0x2ffcdcu: goto label_2ffcdc;
        case 0x2ffce0u: goto label_2ffce0;
        case 0x2ffce4u: goto label_2ffce4;
        case 0x2ffce8u: goto label_2ffce8;
        case 0x2ffcecu: goto label_2ffcec;
        case 0x2ffcf0u: goto label_2ffcf0;
        case 0x2ffcf4u: goto label_2ffcf4;
        case 0x2ffcf8u: goto label_2ffcf8;
        case 0x2ffcfcu: goto label_2ffcfc;
        case 0x2ffd00u: goto label_2ffd00;
        case 0x2ffd04u: goto label_2ffd04;
        case 0x2ffd08u: goto label_2ffd08;
        case 0x2ffd0cu: goto label_2ffd0c;
        case 0x2ffd10u: goto label_2ffd10;
        case 0x2ffd14u: goto label_2ffd14;
        case 0x2ffd18u: goto label_2ffd18;
        case 0x2ffd1cu: goto label_2ffd1c;
        case 0x2ffd20u: goto label_2ffd20;
        case 0x2ffd24u: goto label_2ffd24;
        case 0x2ffd28u: goto label_2ffd28;
        case 0x2ffd2cu: goto label_2ffd2c;
        case 0x2ffd30u: goto label_2ffd30;
        case 0x2ffd34u: goto label_2ffd34;
        case 0x2ffd38u: goto label_2ffd38;
        case 0x2ffd3cu: goto label_2ffd3c;
        case 0x2ffd40u: goto label_2ffd40;
        case 0x2ffd44u: goto label_2ffd44;
        case 0x2ffd48u: goto label_2ffd48;
        case 0x2ffd4cu: goto label_2ffd4c;
        case 0x2ffd50u: goto label_2ffd50;
        case 0x2ffd54u: goto label_2ffd54;
        case 0x2ffd58u: goto label_2ffd58;
        case 0x2ffd5cu: goto label_2ffd5c;
        case 0x2ffd60u: goto label_2ffd60;
        case 0x2ffd64u: goto label_2ffd64;
        case 0x2ffd68u: goto label_2ffd68;
        case 0x2ffd6cu: goto label_2ffd6c;
        case 0x2ffd70u: goto label_2ffd70;
        case 0x2ffd74u: goto label_2ffd74;
        case 0x2ffd78u: goto label_2ffd78;
        case 0x2ffd7cu: goto label_2ffd7c;
        case 0x2ffd80u: goto label_2ffd80;
        case 0x2ffd84u: goto label_2ffd84;
        case 0x2ffd88u: goto label_2ffd88;
        case 0x2ffd8cu: goto label_2ffd8c;
        case 0x2ffd90u: goto label_2ffd90;
        case 0x2ffd94u: goto label_2ffd94;
        case 0x2ffd98u: goto label_2ffd98;
        case 0x2ffd9cu: goto label_2ffd9c;
        case 0x2ffda0u: goto label_2ffda0;
        case 0x2ffda4u: goto label_2ffda4;
        case 0x2ffda8u: goto label_2ffda8;
        case 0x2ffdacu: goto label_2ffdac;
        case 0x2ffdb0u: goto label_2ffdb0;
        case 0x2ffdb4u: goto label_2ffdb4;
        case 0x2ffdb8u: goto label_2ffdb8;
        case 0x2ffdbcu: goto label_2ffdbc;
        case 0x2ffdc0u: goto label_2ffdc0;
        case 0x2ffdc4u: goto label_2ffdc4;
        case 0x2ffdc8u: goto label_2ffdc8;
        case 0x2ffdccu: goto label_2ffdcc;
        case 0x2ffdd0u: goto label_2ffdd0;
        case 0x2ffdd4u: goto label_2ffdd4;
        case 0x2ffdd8u: goto label_2ffdd8;
        case 0x2ffddcu: goto label_2ffddc;
        case 0x2ffde0u: goto label_2ffde0;
        case 0x2ffde4u: goto label_2ffde4;
        case 0x2ffde8u: goto label_2ffde8;
        case 0x2ffdecu: goto label_2ffdec;
        case 0x2ffdf0u: goto label_2ffdf0;
        case 0x2ffdf4u: goto label_2ffdf4;
        case 0x2ffdf8u: goto label_2ffdf8;
        case 0x2ffdfcu: goto label_2ffdfc;
        case 0x2ffe00u: goto label_2ffe00;
        case 0x2ffe04u: goto label_2ffe04;
        case 0x2ffe08u: goto label_2ffe08;
        case 0x2ffe0cu: goto label_2ffe0c;
        case 0x2ffe10u: goto label_2ffe10;
        case 0x2ffe14u: goto label_2ffe14;
        case 0x2ffe18u: goto label_2ffe18;
        case 0x2ffe1cu: goto label_2ffe1c;
        case 0x2ffe20u: goto label_2ffe20;
        case 0x2ffe24u: goto label_2ffe24;
        case 0x2ffe28u: goto label_2ffe28;
        case 0x2ffe2cu: goto label_2ffe2c;
        case 0x2ffe30u: goto label_2ffe30;
        case 0x2ffe34u: goto label_2ffe34;
        case 0x2ffe38u: goto label_2ffe38;
        case 0x2ffe3cu: goto label_2ffe3c;
        case 0x2ffe40u: goto label_2ffe40;
        case 0x2ffe44u: goto label_2ffe44;
        case 0x2ffe48u: goto label_2ffe48;
        case 0x2ffe4cu: goto label_2ffe4c;
        case 0x2ffe50u: goto label_2ffe50;
        case 0x2ffe54u: goto label_2ffe54;
        case 0x2ffe58u: goto label_2ffe58;
        case 0x2ffe5cu: goto label_2ffe5c;
        case 0x2ffe60u: goto label_2ffe60;
        case 0x2ffe64u: goto label_2ffe64;
        case 0x2ffe68u: goto label_2ffe68;
        case 0x2ffe6cu: goto label_2ffe6c;
        case 0x2ffe70u: goto label_2ffe70;
        case 0x2ffe74u: goto label_2ffe74;
        case 0x2ffe78u: goto label_2ffe78;
        case 0x2ffe7cu: goto label_2ffe7c;
        case 0x2ffe80u: goto label_2ffe80;
        case 0x2ffe84u: goto label_2ffe84;
        case 0x2ffe88u: goto label_2ffe88;
        case 0x2ffe8cu: goto label_2ffe8c;
        case 0x2ffe90u: goto label_2ffe90;
        case 0x2ffe94u: goto label_2ffe94;
        case 0x2ffe98u: goto label_2ffe98;
        case 0x2ffe9cu: goto label_2ffe9c;
        case 0x2ffea0u: goto label_2ffea0;
        case 0x2ffea4u: goto label_2ffea4;
        case 0x2ffea8u: goto label_2ffea8;
        case 0x2ffeacu: goto label_2ffeac;
        case 0x2ffeb0u: goto label_2ffeb0;
        case 0x2ffeb4u: goto label_2ffeb4;
        case 0x2ffeb8u: goto label_2ffeb8;
        case 0x2ffebcu: goto label_2ffebc;
        case 0x2ffec0u: goto label_2ffec0;
        case 0x2ffec4u: goto label_2ffec4;
        case 0x2ffec8u: goto label_2ffec8;
        case 0x2ffeccu: goto label_2ffecc;
        case 0x2ffed0u: goto label_2ffed0;
        case 0x2ffed4u: goto label_2ffed4;
        case 0x2ffed8u: goto label_2ffed8;
        case 0x2ffedcu: goto label_2ffedc;
        case 0x2ffee0u: goto label_2ffee0;
        case 0x2ffee4u: goto label_2ffee4;
        case 0x2ffee8u: goto label_2ffee8;
        case 0x2ffeecu: goto label_2ffeec;
        case 0x2ffef0u: goto label_2ffef0;
        case 0x2ffef4u: goto label_2ffef4;
        case 0x2ffef8u: goto label_2ffef8;
        case 0x2ffefcu: goto label_2ffefc;
        case 0x2fff00u: goto label_2fff00;
        case 0x2fff04u: goto label_2fff04;
        case 0x2fff08u: goto label_2fff08;
        case 0x2fff0cu: goto label_2fff0c;
        case 0x2fff10u: goto label_2fff10;
        case 0x2fff14u: goto label_2fff14;
        case 0x2fff18u: goto label_2fff18;
        case 0x2fff1cu: goto label_2fff1c;
        case 0x2fff20u: goto label_2fff20;
        case 0x2fff24u: goto label_2fff24;
        case 0x2fff28u: goto label_2fff28;
        case 0x2fff2cu: goto label_2fff2c;
        case 0x2fff30u: goto label_2fff30;
        case 0x2fff34u: goto label_2fff34;
        case 0x2fff38u: goto label_2fff38;
        case 0x2fff3cu: goto label_2fff3c;
        case 0x2fff40u: goto label_2fff40;
        case 0x2fff44u: goto label_2fff44;
        case 0x2fff48u: goto label_2fff48;
        case 0x2fff4cu: goto label_2fff4c;
        case 0x2fff50u: goto label_2fff50;
        case 0x2fff54u: goto label_2fff54;
        case 0x2fff58u: goto label_2fff58;
        case 0x2fff5cu: goto label_2fff5c;
        case 0x2fff60u: goto label_2fff60;
        case 0x2fff64u: goto label_2fff64;
        case 0x2fff68u: goto label_2fff68;
        case 0x2fff6cu: goto label_2fff6c;
        case 0x2fff70u: goto label_2fff70;
        case 0x2fff74u: goto label_2fff74;
        case 0x2fff78u: goto label_2fff78;
        case 0x2fff7cu: goto label_2fff7c;
        case 0x2fff80u: goto label_2fff80;
        case 0x2fff84u: goto label_2fff84;
        case 0x2fff88u: goto label_2fff88;
        case 0x2fff8cu: goto label_2fff8c;
        case 0x2fff90u: goto label_2fff90;
        case 0x2fff94u: goto label_2fff94;
        case 0x2fff98u: goto label_2fff98;
        case 0x2fff9cu: goto label_2fff9c;
        case 0x2fffa0u: goto label_2fffa0;
        case 0x2fffa4u: goto label_2fffa4;
        case 0x2fffa8u: goto label_2fffa8;
        case 0x2fffacu: goto label_2fffac;
        case 0x2fffb0u: goto label_2fffb0;
        case 0x2fffb4u: goto label_2fffb4;
        case 0x2fffb8u: goto label_2fffb8;
        case 0x2fffbcu: goto label_2fffbc;
        case 0x2fffc0u: goto label_2fffc0;
        case 0x2fffc4u: goto label_2fffc4;
        case 0x2fffc8u: goto label_2fffc8;
        case 0x2fffccu: goto label_2fffcc;
        case 0x2fffd0u: goto label_2fffd0;
        case 0x2fffd4u: goto label_2fffd4;
        case 0x2fffd8u: goto label_2fffd8;
        case 0x2fffdcu: goto label_2fffdc;
        case 0x2fffe0u: goto label_2fffe0;
        case 0x2fffe4u: goto label_2fffe4;
        case 0x2fffe8u: goto label_2fffe8;
        case 0x2fffecu: goto label_2fffec;
        case 0x2ffff0u: goto label_2ffff0;
        case 0x2ffff4u: goto label_2ffff4;
        case 0x2ffff8u: goto label_2ffff8;
        case 0x2ffffcu: goto label_2ffffc;
        default: break;
    }

    ctx->pc = 0x2ff948u;

label_2ff948:
    // 0x2ff948: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x2ff948u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
label_2ff94c:
    // 0x2ff94c: 0xffbe0100  sd          $fp, 0x100($sp)
    ctx->pc = 0x2ff94cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 30));
label_2ff950:
    // 0x2ff950: 0x27a2001f  addiu       $v0, $sp, 0x1F
    ctx->pc = 0x2ff950u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 31));
label_2ff954:
    // 0x2ff954: 0xffb600e0  sd          $s6, 0xE0($sp)
    ctx->pc = 0x2ff954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 22));
label_2ff958:
    // 0x2ff958: 0x100f02d  daddu       $fp, $t0, $zero
    ctx->pc = 0x2ff958u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_2ff95c:
    // 0x2ff95c: 0xffbf0110  sd          $ra, 0x110($sp)
    ctx->pc = 0x2ff95cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 31));
label_2ff960:
    // 0x2ff960: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x2ff960u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2ff964:
    // 0x2ff964: 0xffb700f0  sd          $s7, 0xF0($sp)
    ctx->pc = 0x2ff964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 23));
label_2ff968:
    // 0x2ff968: 0xffb500d0  sd          $s5, 0xD0($sp)
    ctx->pc = 0x2ff968u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 21));
label_2ff96c:
    // 0x2ff96c: 0xffb400c0  sd          $s4, 0xC0($sp)
    ctx->pc = 0x2ff96cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 20));
label_2ff970:
    // 0x2ff970: 0xffb300b0  sd          $s3, 0xB0($sp)
    ctx->pc = 0x2ff970u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 19));
label_2ff974:
    // 0x2ff974: 0xffb200a0  sd          $s2, 0xA0($sp)
    ctx->pc = 0x2ff974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 18));
label_2ff978:
    // 0x2ff978: 0xffb10090  sd          $s1, 0x90($sp)
    ctx->pc = 0x2ff978u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 17));
label_2ff97c:
    // 0x2ff97c: 0xffb00080  sd          $s0, 0x80($sp)
    ctx->pc = 0x2ff97cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 16));
label_2ff980:
    // 0x2ff980: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x2ff980u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
label_2ff984:
    // 0x2ff984: 0xafa40044  sw          $a0, 0x44($sp)
    ctx->pc = 0x2ff984u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 4));
label_2ff988:
    // 0x2ff988: 0xafa50048  sw          $a1, 0x48($sp)
    ctx->pc = 0x2ff988u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 5));
label_2ff98c:
    // 0x2ff98c: 0x92c50000  lbu         $a1, 0x0($s6)
    ctx->pc = 0x2ff98cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
label_2ff990:
    // 0x2ff990: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x2ff990u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
label_2ff994:
    // 0x2ff994: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x2ff994u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2ff998:
    // 0x2ff998: 0x1040031c  beqz        $v0, . + 4 + (0x31C << 2)
label_2ff99c:
    if (ctx->pc == 0x2FF99Cu) {
        ctx->pc = 0x2FF99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF998u;
        // 0x2ff99c: 0xafa00058  sw          $zero, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FF9A0u;
        goto label_2ff9a0;
    }
    ctx->pc = 0x2FF998u;
    {
        const bool branch_taken_0x2ff998 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FF99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF998u;
        // 0x2ff99c: 0xafa00058  sw          $zero, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff998) {
            ctx->pc = 0x30060Cu;
            return;
        }
    }
    ctx->pc = 0x2FF9A0u;
label_2ff9a0:
    // 0x2ff9a0: 0x27a30040  addiu       $v1, $sp, 0x40
    ctx->pc = 0x2ff9a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_2ff9a4:
    // 0x2ff9a4: 0xafa3005c  sw          $v1, 0x5C($sp)
    ctx->pc = 0x2ff9a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 3));
label_2ff9a8:
    // 0x2ff9a8: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x2ff9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
label_2ff9ac:
    // 0x2ff9ac: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x2ff9acu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ff9b0:
    // 0x2ff9b0: 0x23603  sra         $a2, $v0, 24
    ctx->pc = 0x2ff9b0u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 24));
label_2ff9b4:
    // 0x2ff9b4: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x2ff9b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
label_2ff9b8:
    // 0x2ff9b8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2ff9b8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ff9bc:
    // 0x2ff9bc: 0x24020025  addiu       $v0, $zero, 0x25
    ctx->pc = 0x2ff9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
label_2ff9c0:
    // 0x2ff9c0: 0x14c20300  bne         $a2, $v0, . + 4 + (0x300 << 2)
label_2ff9c4:
    if (ctx->pc == 0x2FF9C4u) {
        ctx->pc = 0x2FF9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF9C0u;
        // 0x2ff9c4: 0xafa00054  sw          $zero, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FF9C8u;
        goto label_2ff9c8;
    }
    ctx->pc = 0x2FF9C0u;
    {
        const bool branch_taken_0x2ff9c0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x2FF9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF9C0u;
        // 0x2ff9c4: 0xafa00054  sw          $zero, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff9c0) {
            ctx->pc = 0x3005C4u;
            return;
        }
    }
    ctx->pc = 0x2FF9C8u;
label_2ff9c8:
    // 0x2ff9c8: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x2ff9c8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_2ff9cc:
    // 0x2ff9cc: 0x92c50000  lbu         $a1, 0x0($s6)
    ctx->pc = 0x2ff9ccu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
label_2ff9d0:
    // 0x2ff9d0: 0x24a2ffe0  addiu       $v0, $a1, -0x20
    ctx->pc = 0x2ff9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967264));
label_2ff9d4:
    // 0x2ff9d4: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x2ff9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
label_2ff9d8:
    // 0x2ff9d8: 0x22603  sra         $a0, $v0, 24
    ctx->pc = 0x2ff9d8u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 24));
label_2ff9dc:
    // 0x2ff9dc: 0x2c830059  sltiu       $v1, $a0, 0x59
    ctx->pc = 0x2ff9dcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)89) ? 1 : 0);
label_2ff9e0:
    // 0x2ff9e0: 0x106001cc  beqz        $v1, . + 4 + (0x1CC << 2)
label_2ff9e4:
    if (ctx->pc == 0x2FF9E4u) {
        ctx->pc = 0x2FF9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF9E0u;
        // 0x2ff9e4: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FF9E8u;
        goto label_2ff9e8;
    }
    ctx->pc = 0x2FF9E0u;
    {
        const bool branch_taken_0x2ff9e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FF9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF9E0u;
        // 0x2ff9e4: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff9e0) {
            ctx->pc = 0x300114u;
            return;
        }
    }
    ctx->pc = 0x2FF9E8u;
label_2ff9e8:
    // 0x2ff9e8: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2ff9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_2ff9ec:
    // 0x2ff9ec: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2ff9ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_2ff9f0:
    // 0x2ff9f0: 0x2442a880  addiu       $v0, $v0, -0x5780
    ctx->pc = 0x2ff9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944896));
label_2ff9f4:
    // 0x2ff9f4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2ff9f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2ff9f8:
    // 0x2ff9f8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2ff9f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2ff9fc:
    // 0x2ff9fc: 0x800008  jr          $a0
label_2ffa00:
    if (ctx->pc == 0x2FFA00u) {
        ctx->pc = 0x2FFA04u;
        goto label_2ffa04;
    }
    ctx->pc = 0x2FF9FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2FFA04u: goto label_2ffa04;
            case 0x2FFA0Cu: goto label_2ffa0c;
            case 0x2FFA14u: goto label_2ffa14;
            case 0x2FFA1Cu: goto label_2ffa1c;
            case 0x2FFA64u: goto label_2ffa64;
            case 0x2FFAECu: goto label_2ffaec;
            case 0x2FFAF4u: goto label_2ffaf4;
            case 0x2FFAFCu: goto label_2ffafc;
            case 0x2FFB04u: goto label_2ffb04;
            case 0x2FFB0Cu: goto label_2ffb0c;
            case 0x2FFBC0u: goto label_2ffbc0;
            case 0x2FFBECu: goto label_2ffbec;
            case 0x2FFCACu: goto label_2ffcac;
            case 0x2FFDC4u: goto label_2ffdc4;
            case 0x2FFE88u: goto label_2ffe88;
            case 0x2FFEECu: goto label_2ffeec;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FF9FCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2FFA04u;
label_2ffa04:
    // 0x2ffa04: 0x1000fff0  b           . + 4 + (-0x10 << 2)
label_2ffa08:
    if (ctx->pc == 0x2FFA08u) {
        ctx->pc = 0x2FFA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFA04u;
        // 0x2ffa08: 0x36b50001  ori         $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FFA0Cu;
        goto label_2ffa0c;
    }
    ctx->pc = 0x2FFA04u;
    {
        const bool branch_taken_0x2ffa04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FFA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFA04u;
        // 0x2ffa08: 0x36b50001  ori         $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ffa04) {
            ctx->pc = 0x2FF9C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ff9c8;
        }
    }
    ctx->pc = 0x2FFA0Cu;
label_2ffa0c:
    // 0x2ffa0c: 0x1000ffee  b           . + 4 + (-0x12 << 2)
label_2ffa10:
    if (ctx->pc == 0x2FFA10u) {
        ctx->pc = 0x2FFA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFA0Cu;
        // 0x2ffa10: 0x36b50002  ori         $s5, $s5, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FFA14u;
        goto label_2ffa14;
    }
    ctx->pc = 0x2FFA0Cu;
    {
        const bool branch_taken_0x2ffa0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FFA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFA0Cu;
        // 0x2ffa10: 0x36b50002  ori         $s5, $s5, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ffa0c) {
            ctx->pc = 0x2FF9C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ff9c8;
        }
    }
    ctx->pc = 0x2FFA14u;
label_2ffa14:
    // 0x2ffa14: 0x1000ffec  b           . + 4 + (-0x14 << 2)
label_2ffa18:
    if (ctx->pc == 0x2FFA18u) {
        ctx->pc = 0x2FFA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFA14u;
        // 0x2ffa18: 0x36b50004  ori         $s5, $s5, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FFA1Cu;
        goto label_2ffa1c;
    }
    ctx->pc = 0x2FFA14u;
    {
        const bool branch_taken_0x2ffa14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FFA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFA14u;
        // 0x2ffa18: 0x36b50004  ori         $s5, $s5, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ffa14) {
            ctx->pc = 0x2FF9C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ff9c8;
        }
    }
    ctx->pc = 0x2FFA1Cu;
label_2ffa1c:
    // 0x2ffa1c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2ffa1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ffa20:
    // 0x2ffa20: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x2ffa20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_2ffa24:
    // 0x2ffa24: 0x0  nop
    ctx->pc = 0x2ffa24u;
    // NOP
label_2ffa28:
    // 0x2ffa28: 0x2062018  mult        $a0, $s0, $a2
    ctx->pc = 0x2ffa28u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_2ffa2c:
    // 0x2ffa2c: 0x51e00  sll         $v1, $a1, 24
    ctx->pc = 0x2ffa2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
label_2ffa30:
    // 0x2ffa30: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x2ffa30u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_2ffa34:
    // 0x2ffa34: 0x31e03  sra         $v1, $v1, 24
    ctx->pc = 0x2ffa34u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 24));
label_2ffa38:
    // 0x2ffa38: 0x92c50000  lbu         $a1, 0x0($s6)
    ctx->pc = 0x2ffa38u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
label_2ffa3c:
    // 0x2ffa3c: 0x2484ffd0  addiu       $a0, $a0, -0x30
    ctx->pc = 0x2ffa3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967248));
label_2ffa40:
    // 0x2ffa40: 0x24a2ffd0  addiu       $v0, $a1, -0x30
    ctx->pc = 0x2ffa40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967248));
label_2ffa44:
    // 0x2ffa44: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x2ffa44u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
label_2ffa48:
    // 0x2ffa48: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
label_2ffa4c:
    if (ctx->pc == 0x2FFA4Cu) {
        ctx->pc = 0x2FFA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFA48u;
        // 0x2ffa4c: 0x838021  addu        $s0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FFA50u;
        goto label_2ffa50;
    }
    ctx->pc = 0x2FFA48u;
    {
        const bool branch_taken_0x2ffa48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FFA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFA48u;
        // 0x2ffa4c: 0x838021  addu        $s0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ffa48) {
            ctx->pc = 0x2FFA28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ffa28;
        }
    }
    ctx->pc = 0x2FFA50u;
label_2ffa50:
    // 0x2ffa50: 0xafb00050  sw          $s0, 0x50($sp)
    ctx->pc = 0x2ffa50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 16));
label_2ffa54:
    // 0x2ffa54: 0x10a002e7  beqz        $a1, . + 4 + (0x2E7 << 2)
label_2ffa58:
    if (ctx->pc == 0x2FFA58u) {
        ctx->pc = 0x2FFA58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFA54u;
        // 0x2ffa58: 0x26d70001  addiu       $s7, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FFA5Cu;
        goto label_2ffa5c;
    }
    ctx->pc = 0x2FFA54u;
    {
        const bool branch_taken_0x2ffa54 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FFA58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFA54u;
        // 0x2ffa58: 0x26d70001  addiu       $s7, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ffa54) {
            ctx->pc = 0x3005F4u;
            return;
        }
    }
    ctx->pc = 0x2FFA5Cu;
label_2ffa5c:
    // 0x2ffa5c: 0x1000ffda  b           . + 4 + (-0x26 << 2)
label_2ffa60:
    if (ctx->pc == 0x2FFA60u) {
        ctx->pc = 0x2FFA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFA5Cu;
        // 0x2ffa60: 0x26d6ffff  addiu       $s6, $s6, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FFA64u;
        goto label_2ffa64;
    }
    ctx->pc = 0x2FFA5Cu;
    {
        const bool branch_taken_0x2ffa5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FFA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFA5Cu;
        // 0x2ffa60: 0x26d6ffff  addiu       $s6, $s6, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ffa5c) {
            ctx->pc = 0x2FF9C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ff9c8;
        }
    }
    ctx->pc = 0x2FFA64u;
label_2ffa64:
    // 0x2ffa64: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x2ffa64u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_2ffa68:
    // 0x2ffa68: 0x36b50020  ori         $s5, $s5, 0x20
    ctx->pc = 0x2ffa68u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)32);
label_2ffa6c:
    // 0x2ffa6c: 0x82c30000  lb          $v1, 0x0($s6)
    ctx->pc = 0x2ffa6cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
label_2ffa70:
    // 0x2ffa70: 0x2402002a  addiu       $v0, $zero, 0x2A
    ctx->pc = 0x2ffa70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
label_2ffa74:
    // 0x2ffa74: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
label_2ffa78:
    if (ctx->pc == 0x2FFA78u) {
        ctx->pc = 0x2FFA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFA74u;
        // 0x2ffa78: 0x92c50000  lbu         $a1, 0x0($s6) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FFA7Cu;
        goto label_2ffa7c;
    }
    ctx->pc = 0x2FFA74u;
    {
        const bool branch_taken_0x2ffa74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2FFA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFA74u;
        // 0x2ffa78: 0x92c50000  lbu         $a1, 0x0($s6) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ffa74) {
            ctx->pc = 0x2FFA98u;
            goto label_2ffa98;
        }
    }
    ctx->pc = 0x2FFA7Cu;
label_2ffa7c:
    // 0x2ffa7c: 0x27de0008  addiu       $fp, $fp, 0x8
    ctx->pc = 0x2ffa7cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
label_2ffa80:
    // 0x2ffa80: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x2ffa80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_2ffa84:
    // 0x2ffa84: 0x8fd0fff8  lw          $s0, -0x8($fp)
    ctx->pc = 0x2ffa84u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294967288)));
label_2ffa88:
    // 0x2ffa88: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x2ffa88u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2ffa8c:
    // 0x2ffa8c: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x2ffa8cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_2ffa90:
    // 0x2ffa90: 0x1000ffcd  b           . + 4 + (-0x33 << 2)
label_2ffa94:
    if (ctx->pc == 0x2FFA94u) {
        ctx->pc = 0x2FFA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFA90u;
        // 0x2ffa94: 0x202400b  movn        $t0, $s0, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FFA98u;
        goto label_2ffa98;
    }
    ctx->pc = 0x2FFA90u;
    {
        const bool branch_taken_0x2ffa90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FFA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFA90u;
        // 0x2ffa94: 0x202400b  movn        $t0, $s0, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ffa90) {
            ctx->pc = 0x2FF9C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ff9c8;
        }
    }
    ctx->pc = 0x2FFA98u;
label_2ffa98:
    // 0x2ffa98: 0x24a2ffd0  addiu       $v0, $a1, -0x30
    ctx->pc = 0x2ffa98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967248));
label_2ffa9c:
    // 0x2ffa9c: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x2ffa9cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
label_2ffaa0:
    // 0x2ffaa0: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_2ffaa4:
    if (ctx->pc == 0x2FFAA4u) {
        ctx->pc = 0x2FFAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFAA0u;
        // 0x2ffaa4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FFAA8u;
        goto label_2ffaa8;
    }
    ctx->pc = 0x2FFAA0u;
    {
        const bool branch_taken_0x2ffaa0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FFAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFAA0u;
        // 0x2ffaa4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ffaa0) {
            ctx->pc = 0x2FFAD8u;
            goto label_2ffad8;
        }
    }
    ctx->pc = 0x2FFAA8u;
label_2ffaa8:
    // 0x2ffaa8: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x2ffaa8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_2ffaac:
    // 0x2ffaac: 0x0  nop
    ctx->pc = 0x2ffaacu;
    // NOP
label_2ffab0:
    // 0x2ffab0: 0x2062018  mult        $a0, $s0, $a2
    ctx->pc = 0x2ffab0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_2ffab4:
    // 0x2ffab4: 0x51e00  sll         $v1, $a1, 24
    ctx->pc = 0x2ffab4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
label_2ffab8:
    // 0x2ffab8: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x2ffab8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_2ffabc:
    // 0x2ffabc: 0x31e03  sra         $v1, $v1, 24
    ctx->pc = 0x2ffabcu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 24));
label_2ffac0:
    // 0x2ffac0: 0x92c50000  lbu         $a1, 0x0($s6)
    ctx->pc = 0x2ffac0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
label_2ffac4:
    // 0x2ffac4: 0x2484ffd0  addiu       $a0, $a0, -0x30
    ctx->pc = 0x2ffac4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967248));
label_2ffac8:
    // 0x2ffac8: 0x24a2ffd0  addiu       $v0, $a1, -0x30
    ctx->pc = 0x2ffac8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967248));
label_2ffacc:
    // 0x2ffacc: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x2ffaccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
label_2ffad0:
    // 0x2ffad0: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
label_2ffad4:
    if (ctx->pc == 0x2FFAD4u) {
        ctx->pc = 0x2FFAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFAD0u;
        // 0x2ffad4: 0x838021  addu        $s0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FFAD8u;
        goto label_2ffad8;
    }
    ctx->pc = 0x2FFAD0u;
    {
        const bool branch_taken_0x2ffad0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FFAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFAD0u;
        // 0x2ffad4: 0x838021  addu        $s0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ffad0) {
            ctx->pc = 0x2FFAB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ffab0;
        }
    }
    ctx->pc = 0x2FFAD8u;
label_2ffad8:
    // 0x2ffad8: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x2ffad8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_2ffadc:
    // 0x2ffadc: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x2ffadcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2ffae0:
    // 0x2ffae0: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x2ffae0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_2ffae4:
    // 0x2ffae4: 0x1000ffdb  b           . + 4 + (-0x25 << 2)
label_2ffae8:
    if (ctx->pc == 0x2FFAE8u) {
        ctx->pc = 0x2FFAE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFAE4u;
        // 0x2ffae8: 0x202400b  movn        $t0, $s0, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FFAECu;
        goto label_2ffaec;
    }
    ctx->pc = 0x2FFAE4u;
    {
        const bool branch_taken_0x2ffae4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FFAE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFAE4u;
        // 0x2ffae8: 0x202400b  movn        $t0, $s0, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ffae4) {
            ctx->pc = 0x2FFA54u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ffa54;
        }
    }
    ctx->pc = 0x2FFAECu;
label_2ffaec:
    // 0x2ffaec: 0x1000ffb6  b           . + 4 + (-0x4A << 2)
label_2ffaf0:
    if (ctx->pc == 0x2FFAF0u) {
        ctx->pc = 0x2FFAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFAECu;
        // 0x2ffaf0: 0x36b50008  ori         $s5, $s5, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FFAF4u;
        goto label_2ffaf4;
    }
    ctx->pc = 0x2FFAECu;
    {
        const bool branch_taken_0x2ffaec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FFAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFAECu;
        // 0x2ffaf0: 0x36b50008  ori         $s5, $s5, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ffaec) {
            ctx->pc = 0x2FF9C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ff9c8;
        }
    }
    ctx->pc = 0x2FFAF4u;
label_2ffaf4:
    // 0x2ffaf4: 0x1000ffb4  b           . + 4 + (-0x4C << 2)
label_2ffaf8:
    if (ctx->pc == 0x2FFAF8u) {
        ctx->pc = 0x2FFAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFAF4u;
        // 0x2ffaf8: 0x36b50010  ori         $s5, $s5, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FFAFCu;
        goto label_2ffafc;
    }
    ctx->pc = 0x2FFAF4u;
    {
        const bool branch_taken_0x2ffaf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FFAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFAF4u;
        // 0x2ffaf8: 0x36b50010  ori         $s5, $s5, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ffaf4) {
            ctx->pc = 0x2FF9C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ff9c8;
        }
    }
    ctx->pc = 0x2FFAFCu;
label_2ffafc:
    // 0x2ffafc: 0x1000ffb2  b           . + 4 + (-0x4E << 2)
label_2ffb00:
    if (ctx->pc == 0x2FFB00u) {
        ctx->pc = 0x2FFB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFAFCu;
        // 0x2ffb00: 0x36b50040  ori         $s5, $s5, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FFB04u;
        goto label_2ffb04;
    }
    ctx->pc = 0x2FFAFCu;
    {
        const bool branch_taken_0x2ffafc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FFB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFAFCu;
        // 0x2ffb00: 0x36b50040  ori         $s5, $s5, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ffafc) {
            ctx->pc = 0x2FF9C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ff9c8;
        }
    }
    ctx->pc = 0x2FFB04u;
label_2ffb04:
    // 0x2ffb04: 0x1000ffb0  b           . + 4 + (-0x50 << 2)
label_2ffb08:
    if (ctx->pc == 0x2FFB08u) {
        ctx->pc = 0x2FFB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFB04u;
        // 0x2ffb08: 0x36b50080  ori         $s5, $s5, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FFB0Cu;
        goto label_2ffb0c;
    }
    ctx->pc = 0x2FFB04u;
    {
        const bool branch_taken_0x2ffb04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FFB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFB04u;
        // 0x2ffb08: 0x36b50080  ori         $s5, $s5, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ffb04) {
            ctx->pc = 0x2FF9C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ff9c8;
        }
    }
    ctx->pc = 0x2FFB0Cu;
label_2ffb0c:
    // 0x2ffb0c: 0x32a20040  andi        $v0, $s5, 0x40
    ctx->pc = 0x2ffb0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)64);
label_2ffb10:
    // 0x2ffb10: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_2ffb14:
    if (ctx->pc == 0x2FFB14u) {
        ctx->pc = 0x2FFB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFB10u;
        // 0x2ffb14: 0x32a20080  andi        $v0, $s5, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FFB18u;
        goto label_2ffb18;
    }
    ctx->pc = 0x2FFB10u;
    {
        const bool branch_taken_0x2ffb10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FFB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFB10u;
        // 0x2ffb14: 0x32a20080  andi        $v0, $s5, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ffb10) {
            ctx->pc = 0x2FFB24u;
            goto label_2ffb24;
        }
    }
    ctx->pc = 0x2FFB18u;
label_2ffb18:
    // 0x2ffb18: 0x27de0008  addiu       $fp, $fp, 0x8
    ctx->pc = 0x2ffb18u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
label_2ffb1c:
    // 0x2ffb1c: 0x10000006  b           . + 4 + (0x6 << 2)
label_2ffb20:
    if (ctx->pc == 0x2FFB20u) {
        ctx->pc = 0x2FFB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFB1Cu;
        // 0x2ffb20: 0xdfd0fff8  ld          $s0, -0x8($fp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 30), 4294967288)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FFB24u;
        goto label_2ffb24;
    }
    ctx->pc = 0x2FFB1Cu;
    {
        const bool branch_taken_0x2ffb1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FFB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFB1Cu;
        // 0x2ffb20: 0xdfd0fff8  ld          $s0, -0x8($fp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 30), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ffb1c) {
            ctx->pc = 0x2FFB38u;
            goto label_2ffb38;
        }
    }
    ctx->pc = 0x2FFB24u;
label_2ffb24:
    // 0x2ffb24: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2ffb28:
    if (ctx->pc == 0x2FFB28u) {
        ctx->pc = 0x2FFB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFB24u;
        // 0x2ffb28: 0x27de0008  addiu       $fp, $fp, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FFB2Cu;
        goto label_2ffb2c;
    }
    ctx->pc = 0x2FFB24u;
    {
        const bool branch_taken_0x2ffb24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FFB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFB24u;
        // 0x2ffb28: 0x27de0008  addiu       $fp, $fp, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ffb24) {
            ctx->pc = 0x2FFB34u;
            goto label_2ffb34;
        }
    }
    ctx->pc = 0x2FFB2Cu;
label_2ffb2c:
    // 0x2ffb2c: 0x10000002  b           . + 4 + (0x2 << 2)
label_2ffb30:
    if (ctx->pc == 0x2FFB30u) {
        ctx->pc = 0x2FFB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFB2Cu;
        // 0x2ffb30: 0x97d0fff8  lhu         $s0, -0x8($fp) (Delay Slot)
        SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 4294967288)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FFB34u;
        goto label_2ffb34;
    }
    ctx->pc = 0x2FFB2Cu;
    {
        const bool branch_taken_0x2ffb2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FFB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFB2Cu;
        // 0x2ffb30: 0x97d0fff8  lhu         $s0, -0x8($fp) (Delay Slot)
        SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ffb2c) {
            ctx->pc = 0x2FFB38u;
            goto label_2ffb38;
        }
    }
    ctx->pc = 0x2FFB34u;
label_2ffb34:
    // 0x2ffb34: 0x9fd0fff8  lwu         $s0, -0x8($fp)
    ctx->pc = 0x2ffb34u;
    SET_GPR_ZE32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 30), 4294967288)));
label_2ffb38:
    // 0x2ffb38: 0x1600000b  bnez        $s0, . + 4 + (0xB << 2)
label_2ffb3c:
    if (ctx->pc == 0x2FFB3Cu) {
        ctx->pc = 0x2FFB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFB38u;
        // 0x2ffb3c: 0x8fb1004c  lw          $s1, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FFB40u;
        goto label_2ffb40;
    }
    ctx->pc = 0x2FFB38u;
    {
        const bool branch_taken_0x2ffb38 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FFB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFB38u;
        // 0x2ffb3c: 0x8fb1004c  lw          $s1, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ffb38) {
            ctx->pc = 0x2FFB68u;
            goto label_2ffb68;
        }
    }
    ctx->pc = 0x2FFB40u;
label_2ffb40:
    // 0x2ffb40: 0x32a20020  andi        $v0, $s5, 0x20
    ctx->pc = 0x2ffb40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)32);
label_2ffb44:
    // 0x2ffb44: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2ffb48:
    if (ctx->pc == 0x2FFB48u) {
        ctx->pc = 0x2FFB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFB44u;
        // 0x2ffb48: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FFB4Cu;
        goto label_2ffb4c;
    }
    ctx->pc = 0x2FFB44u;
    {
        const bool branch_taken_0x2ffb44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FFB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFB44u;
        // 0x2ffb48: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ffb44) {
            ctx->pc = 0x2FFB54u;
            goto label_2ffb54;
        }
    }
    ctx->pc = 0x2FFB4Cu;
label_2ffb4c:
    // 0x2ffb4c: 0x11000017  beqz        $t0, . + 4 + (0x17 << 2)
label_2ffb50:
    if (ctx->pc == 0x2FFB50u) {
        ctx->pc = 0x2FFB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFB4Cu;
        // 0x2ffb50: 0x26d70001  addiu       $s7, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FFB54u;
        goto label_2ffb54;
    }
    ctx->pc = 0x2FFB4Cu;
    {
        const bool branch_taken_0x2ffb4c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FFB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFB4Cu;
        // 0x2ffb50: 0x26d70001  addiu       $s7, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ffb4c) {
            ctx->pc = 0x2FFBACu;
            goto label_2ffbac;
        }
    }
    ctx->pc = 0x2FFB54u;
label_2ffb54:
    // 0x2ffb54: 0x26d70001  addiu       $s7, $s6, 0x1
    ctx->pc = 0x2ffb54u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_2ffb58:
    // 0x2ffb58: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x2ffb58u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
label_2ffb5c:
    // 0x2ffb5c: 0x32b40100  andi        $s4, $s5, 0x100
    ctx->pc = 0x2ffb5cu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)256);
label_2ffb60:
    // 0x2ffb60: 0x10000013  b           . + 4 + (0x13 << 2)
label_2ffb64:
    if (ctx->pc == 0x2FFB64u) {
        ctx->pc = 0x2FFB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFB60u;
        // 0x2ffb64: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FFB68u;
        goto label_2ffb68;
    }
    ctx->pc = 0x2FFB60u;
    {
        const bool branch_taken_0x2ffb60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FFB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFB60u;
        // 0x2ffb64: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ffb60) {
            ctx->pc = 0x2FFBB0u;
            goto label_2ffbb0;
        }
    }
    ctx->pc = 0x2FFB68u;
label_2ffb68:
    // 0x2ffb68: 0x26d70001  addiu       $s7, $s6, 0x1
    ctx->pc = 0x2ffb68u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_2ffb6c:
    // 0x2ffb6c: 0x32a30010  andi        $v1, $s5, 0x10
    ctx->pc = 0x2ffb6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)16);
label_2ffb70:
    // 0x2ffb70: 0x32b40100  andi        $s4, $s5, 0x100
    ctx->pc = 0x2ffb70u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)256);
label_2ffb74:
    // 0x2ffb74: 0x32b30001  andi        $s3, $s5, 0x1
    ctx->pc = 0x2ffb74u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
label_2ffb78:
    // 0x2ffb78: 0x32020007  andi        $v0, $s0, 0x7
    ctx->pc = 0x2ffb78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)7);
label_2ffb7c:
    // 0x2ffb7c: 0x64420030  daddiu      $v0, $v0, 0x30
    ctx->pc = 0x2ffb7cu;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)48);
label_2ffb80:
    // 0x2ffb80: 0x1080fa  dsrl        $s0, $s0, 3
    ctx->pc = 0x2ffb80u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> 3);
label_2ffb84:
    // 0x2ffb84: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2ffb84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2ffb88:
    // 0x2ffb88: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x2ffb88u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
label_2ffb8c:
    // 0x2ffb8c: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x2ffb8cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_2ffb90:
    // 0x2ffb90: 0x1600fff9  bnez        $s0, . + 4 + (-0x7 << 2)
label_2ffb94:
    if (ctx->pc == 0x2FFB94u) {
        ctx->pc = 0x2FFB98u;
        goto label_2ffb98;
    }
    ctx->pc = 0x2FFB90u;
    {
        const bool branch_taken_0x2ffb90 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ffb90) {
            ctx->pc = 0x2FFB78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ffb78;
        }
    }
    ctx->pc = 0x2FFB98u;
label_2ffb98:
    // 0x2ffb98: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_2ffb9c:
    if (ctx->pc == 0x2FFB9Cu) {
        ctx->pc = 0x2FFB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFB98u;
        // 0x2ffb9c: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FFBA0u;
        goto label_2ffba0;
    }
    ctx->pc = 0x2FFB98u;
    {
        const bool branch_taken_0x2ffb98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FFB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFB98u;
        // 0x2ffb9c: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ffb98) {
            ctx->pc = 0x2FFBB4u;
            goto label_2ffbb4;
        }
    }
    ctx->pc = 0x2FFBA0u;
label_2ffba0:
    // 0x2ffba0: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x2ffba0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
label_2ffba4:
    // 0x2ffba4: 0x10000003  b           . + 4 + (0x3 << 2)
label_2ffba8:
    if (ctx->pc == 0x2FFBA8u) {
        ctx->pc = 0x2FFBA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFBA4u;
        // 0x2ffba8: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FFBACu;
        goto label_2ffbac;
    }
    ctx->pc = 0x2FFBA4u;
    {
        const bool branch_taken_0x2ffba4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FFBA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFBA4u;
        // 0x2ffba8: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ffba4) {
            ctx->pc = 0x2FFBB4u;
            goto label_2ffbb4;
        }
    }
    ctx->pc = 0x2FFBACu;
label_2ffbac:
    // 0x2ffbac: 0x32b40100  andi        $s4, $s5, 0x100
    ctx->pc = 0x2ffbacu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)256);
label_2ffbb0:
    // 0x2ffbb0: 0x32b30001  andi        $s3, $s5, 0x1
    ctx->pc = 0x2ffbb0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
label_2ffbb4:
    // 0x2ffbb4: 0x8fa5004c  lw          $a1, 0x4C($sp)
    ctx->pc = 0x2ffbb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_2ffbb8:
    // 0x2ffbb8: 0x10000162  b           . + 4 + (0x162 << 2)
label_2ffbbc:
    if (ctx->pc == 0x2FFBBCu) {
        ctx->pc = 0x2FFBBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFBB8u;
        // 0x2ffbbc: 0x26320001  addiu       $s2, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FFBC0u;
        goto label_2ffbc0;
    }
    ctx->pc = 0x2FFBB8u;
    {
        const bool branch_taken_0x2ffbb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FFBBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFBB8u;
        // 0x2ffbbc: 0x26320001  addiu       $s2, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ffbb8) {
            ctx->pc = 0x300144u;
            return;
        }
    }
    ctx->pc = 0x2FFBC0u;
label_2ffbc0:
    // 0x2ffbc0: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2ffbc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_2ffbc4:
    // 0x2ffbc4: 0x32a30010  andi        $v1, $s5, 0x10
    ctx->pc = 0x2ffbc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)16);
label_2ffbc8:
    // 0x2ffbc8: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
label_2ffbcc:
    if (ctx->pc == 0x2FFBCCu) {
        ctx->pc = 0x2FFBCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFBC8u;
        // 0x2ffbcc: 0x2444a850  addiu       $a0, $v0, -0x57B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944848));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FFBD0u;
        goto label_2ffbd0;
    }
    ctx->pc = 0x2FFBC8u;
    {
        const bool branch_taken_0x2ffbc8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FFBCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFBC8u;
        // 0x2ffbcc: 0x2444a850  addiu       $a0, $v0, -0x57B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944848));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ffbc8) {
            ctx->pc = 0x2FFC14u;
            goto label_2ffc14;
        }
    }
    ctx->pc = 0x2FFBD0u;
label_2ffbd0:
    // 0x2ffbd0: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x2ffbd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_2ffbd4:
    // 0x2ffbd4: 0x24030078  addiu       $v1, $zero, 0x78
    ctx->pc = 0x2ffbd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
label_2ffbd8:
    // 0x2ffbd8: 0xa3a20020  sb          $v0, 0x20($sp)
    ctx->pc = 0x2ffbd8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 2));
label_2ffbdc:
    // 0x2ffbdc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2ffbdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2ffbe0:
    // 0x2ffbe0: 0xa3a30021  sb          $v1, 0x21($sp)
    ctx->pc = 0x2ffbe0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 33), (uint8_t)GPR_U32(ctx, 3));
label_2ffbe4:
    // 0x2ffbe4: 0x1000000b  b           . + 4 + (0xB << 2)
label_2ffbe8:
    if (ctx->pc == 0x2FFBE8u) {
        ctx->pc = 0x2FFBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFBE4u;
        // 0x2ffbe8: 0xafa20054  sw          $v0, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FFBECu;
        goto label_2ffbec;
    }
    ctx->pc = 0x2FFBE4u;
    {
        const bool branch_taken_0x2ffbe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FFBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFBE4u;
        // 0x2ffbe8: 0xafa20054  sw          $v0, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ffbe4) {
            ctx->pc = 0x2FFC14u;
            goto label_2ffc14;
        }
    }
    ctx->pc = 0x2FFBECu;
label_2ffbec:
    // 0x2ffbec: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2ffbecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_2ffbf0:
    // 0x2ffbf0: 0x32a30010  andi        $v1, $s5, 0x10
    ctx->pc = 0x2ffbf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)16);
label_2ffbf4:
    // 0x2ffbf4: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_2ffbf8:
    if (ctx->pc == 0x2FFBF8u) {
        ctx->pc = 0x2FFBF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFBF4u;
        // 0x2ffbf8: 0x2444a868  addiu       $a0, $v0, -0x5798 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944872));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FFBFCu;
        goto label_2ffbfc;
    }
    ctx->pc = 0x2FFBF4u;
    {
        const bool branch_taken_0x2ffbf4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FFBF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFBF4u;
        // 0x2ffbf8: 0x2444a868  addiu       $a0, $v0, -0x5798 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944872));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ffbf4) {
            ctx->pc = 0x2FFC14u;
            goto label_2ffc14;
        }
    }
    ctx->pc = 0x2FFBFCu;
label_2ffbfc:
    // 0x2ffbfc: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x2ffbfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_2ffc00:
    // 0x2ffc00: 0x24030058  addiu       $v1, $zero, 0x58
    ctx->pc = 0x2ffc00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
label_2ffc04:
    // 0x2ffc04: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2ffc04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2ffc08:
    // 0x2ffc08: 0xa3a20020  sb          $v0, 0x20($sp)
    ctx->pc = 0x2ffc08u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 2));
label_2ffc0c:
    // 0x2ffc0c: 0xafa50054  sw          $a1, 0x54($sp)
    ctx->pc = 0x2ffc0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 5));
label_2ffc10:
    // 0x2ffc10: 0xa3a30021  sb          $v1, 0x21($sp)
    ctx->pc = 0x2ffc10u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 33), (uint8_t)GPR_U32(ctx, 3));
label_2ffc14:
    // 0x2ffc14: 0x32a20040  andi        $v0, $s5, 0x40
    ctx->pc = 0x2ffc14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)64);
label_2ffc18:
    // 0x2ffc18: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_2ffc1c:
    if (ctx->pc == 0x2FFC1Cu) {
        ctx->pc = 0x2FFC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFC18u;
        // 0x2ffc1c: 0x32a20080  andi        $v0, $s5, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FFC20u;
        goto label_2ffc20;
    }
    ctx->pc = 0x2FFC18u;
    {
        const bool branch_taken_0x2ffc18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FFC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFC18u;
        // 0x2ffc1c: 0x32a20080  andi        $v0, $s5, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ffc18) {
            ctx->pc = 0x2FFC2Cu;
            goto label_2ffc2c;
        }
    }
    ctx->pc = 0x2FFC20u;
label_2ffc20:
    // 0x2ffc20: 0x27de0008  addiu       $fp, $fp, 0x8
    ctx->pc = 0x2ffc20u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
label_2ffc24:
    // 0x2ffc24: 0x10000006  b           . + 4 + (0x6 << 2)
label_2ffc28:
    if (ctx->pc == 0x2FFC28u) {
        ctx->pc = 0x2FFC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFC24u;
        // 0x2ffc28: 0xdfd0fff8  ld          $s0, -0x8($fp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 30), 4294967288)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FFC2Cu;
        goto label_2ffc2c;
    }
    ctx->pc = 0x2FFC24u;
    {
        const bool branch_taken_0x2ffc24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FFC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFC24u;
        // 0x2ffc28: 0xdfd0fff8  ld          $s0, -0x8($fp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 30), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ffc24) {
            ctx->pc = 0x2FFC40u;
            goto label_2ffc40;
        }
    }
    ctx->pc = 0x2FFC2Cu;
label_2ffc2c:
    // 0x2ffc2c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2ffc30:
    if (ctx->pc == 0x2FFC30u) {
        ctx->pc = 0x2FFC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFC2Cu;
        // 0x2ffc30: 0x27de0008  addiu       $fp, $fp, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FFC34u;
        goto label_2ffc34;
    }
    ctx->pc = 0x2FFC2Cu;
    {
        const bool branch_taken_0x2ffc2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FFC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFC2Cu;
        // 0x2ffc30: 0x27de0008  addiu       $fp, $fp, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ffc2c) {
            ctx->pc = 0x2FFC3Cu;
            goto label_2ffc3c;
        }
    }
    ctx->pc = 0x2FFC34u;
label_2ffc34:
    // 0x2ffc34: 0x10000002  b           . + 4 + (0x2 << 2)
label_2ffc38:
    if (ctx->pc == 0x2FFC38u) {
        ctx->pc = 0x2FFC38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFC34u;
        // 0x2ffc38: 0x97d0fff8  lhu         $s0, -0x8($fp) (Delay Slot)
        SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 4294967288)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FFC3Cu;
        goto label_2ffc3c;
    }
    ctx->pc = 0x2FFC34u;
    {
        const bool branch_taken_0x2ffc34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FFC38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFC34u;
        // 0x2ffc38: 0x97d0fff8  lhu         $s0, -0x8($fp) (Delay Slot)
        SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ffc34) {
            ctx->pc = 0x2FFC40u;
            goto label_2ffc40;
        }
    }
    ctx->pc = 0x2FFC3Cu;
label_2ffc3c:
    // 0x2ffc3c: 0x9fd0fff8  lwu         $s0, -0x8($fp)
    ctx->pc = 0x2ffc3cu;
    SET_GPR_ZE32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 30), 4294967288)));
label_2ffc40:
    // 0x2ffc40: 0x1600000c  bnez        $s0, . + 4 + (0xC << 2)
label_2ffc44:
    if (ctx->pc == 0x2FFC44u) {
        ctx->pc = 0x2FFC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFC40u;
        // 0x2ffc44: 0x8fb1004c  lw          $s1, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FFC48u;
        goto label_2ffc48;
    }
    ctx->pc = 0x2FFC40u;
    {
        const bool branch_taken_0x2ffc40 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FFC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFC40u;
        // 0x2ffc44: 0x8fb1004c  lw          $s1, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ffc40) {
            ctx->pc = 0x2FFC74u;
            goto label_2ffc74;
        }
    }
    ctx->pc = 0x2FFC48u;
label_2ffc48:
    // 0x2ffc48: 0x32a20020  andi        $v0, $s5, 0x20
    ctx->pc = 0x2ffc48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)32);
label_2ffc4c:
    // 0x2ffc4c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2ffc50:
    if (ctx->pc == 0x2FFC50u) {
        ctx->pc = 0x2FFC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFC4Cu;
        // 0x2ffc50: 0xafa00054  sw          $zero, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FFC54u;
        goto label_2ffc54;
    }
    ctx->pc = 0x2FFC4Cu;
    {
        const bool branch_taken_0x2ffc4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FFC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFC4Cu;
        // 0x2ffc50: 0xafa00054  sw          $zero, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ffc4c) {
            ctx->pc = 0x2FFC5Cu;
            goto label_2ffc5c;
        }
    }
    ctx->pc = 0x2FFC54u;
label_2ffc54:
    // 0x2ffc54: 0x11000086  beqz        $t0, . + 4 + (0x86 << 2)
label_2ffc58:
    if (ctx->pc == 0x2FFC58u) {
        ctx->pc = 0x2FFC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFC54u;
        // 0x2ffc58: 0x26d70001  addiu       $s7, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FFC5Cu;
        goto label_2ffc5c;
    }
    ctx->pc = 0x2FFC54u;
    {
        const bool branch_taken_0x2ffc54 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FFC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFC54u;
        // 0x2ffc58: 0x26d70001  addiu       $s7, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ffc54) {
            ctx->pc = 0x2FFE70u;
            goto label_2ffe70;
        }
    }
    ctx->pc = 0x2FFC5Cu;
label_2ffc5c:
    // 0x2ffc5c: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x2ffc5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_2ffc60:
    // 0x2ffc60: 0x26d70001  addiu       $s7, $s6, 0x1
    ctx->pc = 0x2ffc60u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_2ffc64:
    // 0x2ffc64: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x2ffc64u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
label_2ffc68:
    // 0x2ffc68: 0x32b40100  andi        $s4, $s5, 0x100
    ctx->pc = 0x2ffc68u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)256);
label_2ffc6c:
    // 0x2ffc6c: 0x10000081  b           . + 4 + (0x81 << 2)
label_2ffc70:
    if (ctx->pc == 0x2FFC70u) {
        ctx->pc = 0x2FFC70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFC6Cu;
        // 0x2ffc70: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FFC74u;
        goto label_2ffc74;
    }
    ctx->pc = 0x2FFC6Cu;
    {
        const bool branch_taken_0x2ffc6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FFC70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFC6Cu;
        // 0x2ffc70: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ffc6c) {
            ctx->pc = 0x2FFE74u;
            goto label_2ffe74;
        }
    }
    ctx->pc = 0x2FFC74u;
label_2ffc74:
    // 0x2ffc74: 0x26d70001  addiu       $s7, $s6, 0x1
    ctx->pc = 0x2ffc74u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_2ffc78:
    // 0x2ffc78: 0x32b40100  andi        $s4, $s5, 0x100
    ctx->pc = 0x2ffc78u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)256);
label_2ffc7c:
    // 0x2ffc7c: 0x32b30001  andi        $s3, $s5, 0x1
    ctx->pc = 0x2ffc7cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
label_2ffc80:
    // 0x2ffc80: 0x3202000f  andi        $v0, $s0, 0xF
    ctx->pc = 0x2ffc80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)15);
label_2ffc84:
    // 0x2ffc84: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2ffc84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_2ffc88:
    // 0x2ffc88: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2ffc88u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_2ffc8c:
    // 0x2ffc8c: 0x10813a  dsrl        $s0, $s0, 4
    ctx->pc = 0x2ffc8cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> 4);
label_2ffc90:
    // 0x2ffc90: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2ffc90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_2ffc94:
    // 0x2ffc94: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x2ffc94u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_2ffc98:
    // 0x2ffc98: 0xa2230000  sb          $v1, 0x0($s1)
    ctx->pc = 0x2ffc98u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 3));
label_2ffc9c:
    // 0x2ffc9c: 0x1600fff8  bnez        $s0, . + 4 + (-0x8 << 2)
label_2ffca0:
    if (ctx->pc == 0x2FFCA0u) {
        ctx->pc = 0x2FFCA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFC9Cu;
        // 0x2ffca0: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FFCA4u;
        goto label_2ffca4;
    }
    ctx->pc = 0x2FFC9Cu;
    {
        const bool branch_taken_0x2ffc9c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FFCA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFC9Cu;
        // 0x2ffca0: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ffc9c) {
            ctx->pc = 0x2FFC80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ffc80;
        }
    }
    ctx->pc = 0x2FFCA4u;
label_2ffca4:
    // 0x2ffca4: 0x10000075  b           . + 4 + (0x75 << 2)
label_2ffca8:
    if (ctx->pc == 0x2FFCA8u) {
        ctx->pc = 0x2FFCA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFCA4u;
        // 0x2ffca8: 0x8fa2004c  lw          $v0, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FFCACu;
        goto label_2ffcac;
    }
    ctx->pc = 0x2FFCA4u;
    {
        const bool branch_taken_0x2ffca4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FFCA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFCA4u;
        // 0x2ffca8: 0x8fa2004c  lw          $v0, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ffca4) {
            ctx->pc = 0x2FFE7Cu;
            goto label_2ffe7c;
        }
    }
    ctx->pc = 0x2FFCACu;
label_2ffcac:
    // 0x2ffcac: 0x32a20040  andi        $v0, $s5, 0x40
    ctx->pc = 0x2ffcacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)64);
label_2ffcb0:
    // 0x2ffcb0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_2ffcb4:
    if (ctx->pc == 0x2FFCB4u) {
        ctx->pc = 0x2FFCB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFCB0u;
        // 0x2ffcb4: 0x32a20080  andi        $v0, $s5, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FFCB8u;
        goto label_2ffcb8;
    }
    ctx->pc = 0x2FFCB0u;
    {
        const bool branch_taken_0x2ffcb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FFCB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFCB0u;
        // 0x2ffcb4: 0x32a20080  andi        $v0, $s5, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ffcb0) {
            ctx->pc = 0x2FFCC4u;
            goto label_2ffcc4;
        }
    }
    ctx->pc = 0x2FFCB8u;
label_2ffcb8:
    // 0x2ffcb8: 0x27de0008  addiu       $fp, $fp, 0x8
    ctx->pc = 0x2ffcb8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
label_2ffcbc:
    // 0x2ffcbc: 0x10000006  b           . + 4 + (0x6 << 2)
label_2ffcc0:
    if (ctx->pc == 0x2FFCC0u) {
        ctx->pc = 0x2FFCC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFCBCu;
        // 0x2ffcc0: 0xdfd0fff8  ld          $s0, -0x8($fp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 30), 4294967288)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FFCC4u;
        goto label_2ffcc4;
    }
    ctx->pc = 0x2FFCBCu;
    {
        const bool branch_taken_0x2ffcbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FFCC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFCBCu;
        // 0x2ffcc0: 0xdfd0fff8  ld          $s0, -0x8($fp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 30), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ffcbc) {
            ctx->pc = 0x2FFCD8u;
            goto label_2ffcd8;
        }
    }
    ctx->pc = 0x2FFCC4u;
label_2ffcc4:
    // 0x2ffcc4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2ffcc8:
    if (ctx->pc == 0x2FFCC8u) {
        ctx->pc = 0x2FFCC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFCC4u;
        // 0x2ffcc8: 0x27de0008  addiu       $fp, $fp, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FFCCCu;
        goto label_2ffccc;
    }
    ctx->pc = 0x2FFCC4u;
    {
        const bool branch_taken_0x2ffcc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FFCC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFCC4u;
        // 0x2ffcc8: 0x27de0008  addiu       $fp, $fp, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ffcc4) {
            ctx->pc = 0x2FFCD4u;
            goto label_2ffcd4;
        }
    }
    ctx->pc = 0x2FFCCCu;
label_2ffccc:
    // 0x2ffccc: 0x10000002  b           . + 4 + (0x2 << 2)
label_2ffcd0:
    if (ctx->pc == 0x2FFCD0u) {
        ctx->pc = 0x2FFCD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFCCCu;
        // 0x2ffcd0: 0x87d0fff8  lh          $s0, -0x8($fp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 4294967288)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FFCD4u;
        goto label_2ffcd4;
    }
    ctx->pc = 0x2FFCCCu;
    {
        const bool branch_taken_0x2ffccc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FFCD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFCCCu;
        // 0x2ffcd0: 0x87d0fff8  lh          $s0, -0x8($fp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ffccc) {
            ctx->pc = 0x2FFCD8u;
            goto label_2ffcd8;
        }
    }
    ctx->pc = 0x2FFCD4u;
label_2ffcd4:
    // 0x2ffcd4: 0x8fd0fff8  lw          $s0, -0x8($fp)
    ctx->pc = 0x2ffcd4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294967288)));
label_2ffcd8:
    // 0x2ffcd8: 0x600000d  bltz        $s0, . + 4 + (0xD << 2)
label_2ffcdc:
    if (ctx->pc == 0x2FFCDCu) {
        ctx->pc = 0x2FFCDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFCD8u;
        // 0x2ffcdc: 0x8fb1004c  lw          $s1, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FFCE0u;
        goto label_2ffce0;
    }
    ctx->pc = 0x2FFCD8u;
    {
        const bool branch_taken_0x2ffcd8 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x2FFCDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFCD8u;
        // 0x2ffcdc: 0x8fb1004c  lw          $s1, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ffcd8) {
            ctx->pc = 0x2FFD10u;
            goto label_2ffd10;
        }
    }
    ctx->pc = 0x2FFCE0u;
label_2ffce0:
    // 0x2ffce0: 0x32a20002  andi        $v0, $s5, 0x2
    ctx->pc = 0x2ffce0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)2);
label_2ffce4:
    // 0x2ffce4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_2ffce8:
    if (ctx->pc == 0x2FFCE8u) {
        ctx->pc = 0x2FFCE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFCE4u;
        // 0x2ffce8: 0x2402002b  addiu       $v0, $zero, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FFCECu;
        goto label_2ffcec;
    }
    ctx->pc = 0x2FFCE4u;
    {
        const bool branch_taken_0x2ffce4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FFCE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFCE4u;
        // 0x2ffce8: 0x2402002b  addiu       $v0, $zero, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ffce4) {
            ctx->pc = 0x2FFCF8u;
            goto label_2ffcf8;
        }
    }
    ctx->pc = 0x2FFCECu;
label_2ffcec:
    // 0x2ffcec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2ffcecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ffcf0:
    // 0x2ffcf0: 0x1000000a  b           . + 4 + (0xA << 2)
label_2ffcf4:
    if (ctx->pc == 0x2FFCF4u) {
        ctx->pc = 0x2FFCF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFCF0u;
        // 0x2ffcf4: 0xafa30054  sw          $v1, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FFCF8u;
        goto label_2ffcf8;
    }
    ctx->pc = 0x2FFCF0u;
    {
        const bool branch_taken_0x2ffcf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FFCF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFCF0u;
        // 0x2ffcf4: 0xafa30054  sw          $v1, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ffcf0) {
            ctx->pc = 0x2FFD1Cu;
            goto label_2ffd1c;
        }
    }
    ctx->pc = 0x2FFCF8u;
label_2ffcf8:
    // 0x2ffcf8: 0x32a20008  andi        $v0, $s5, 0x8
    ctx->pc = 0x2ffcf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)8);
label_2ffcfc:
    // 0x2ffcfc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_2ffd00:
    if (ctx->pc == 0x2FFD00u) {
        ctx->pc = 0x2FFD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFCFCu;
        // 0x2ffd00: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FFD04u;
        goto label_2ffd04;
    }
    ctx->pc = 0x2FFCFCu;
    {
        const bool branch_taken_0x2ffcfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FFD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFCFCu;
        // 0x2ffd00: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ffcfc) {
            ctx->pc = 0x2FFD20u;
            goto label_2ffd20;
        }
    }
    ctx->pc = 0x2FFD04u;
label_2ffd04:
    // 0x2ffd04: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2ffd04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ffd08:
    // 0x2ffd08: 0x10000004  b           . + 4 + (0x4 << 2)
label_2ffd0c:
    if (ctx->pc == 0x2FFD0Cu) {
        ctx->pc = 0x2FFD0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFD08u;
        // 0x2ffd0c: 0xafa40054  sw          $a0, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FFD10u;
        goto label_2ffd10;
    }
    ctx->pc = 0x2FFD08u;
    {
        const bool branch_taken_0x2ffd08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FFD0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFD08u;
        // 0x2ffd0c: 0xafa40054  sw          $a0, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ffd08) {
            ctx->pc = 0x2FFD1Cu;
            goto label_2ffd1c;
        }
    }
    ctx->pc = 0x2FFD10u;
label_2ffd10:
    // 0x2ffd10: 0x2402002d  addiu       $v0, $zero, 0x2D
    ctx->pc = 0x2ffd10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
label_2ffd14:
    // 0x2ffd14: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2ffd14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ffd18:
    // 0x2ffd18: 0xafa50054  sw          $a1, 0x54($sp)
    ctx->pc = 0x2ffd18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 5));
label_2ffd1c:
    // 0x2ffd1c: 0xa3a20020  sb          $v0, 0x20($sp)
    ctx->pc = 0x2ffd1cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 2));
label_2ffd20:
    // 0x2ffd20: 0x1600000c  bnez        $s0, . + 4 + (0xC << 2)
label_2ffd24:
    if (ctx->pc == 0x2FFD24u) {
        ctx->pc = 0x2FFD24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFD20u;
        // 0x2ffd24: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FFD28u;
        goto label_2ffd28;
    }
    ctx->pc = 0x2FFD20u;
    {
        const bool branch_taken_0x2ffd20 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FFD24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFD20u;
        // 0x2ffd24: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ffd20) {
            ctx->pc = 0x2FFD54u;
            goto label_2ffd54;
        }
    }
    ctx->pc = 0x2FFD28u;
label_2ffd28:
    // 0x2ffd28: 0x32a20020  andi        $v0, $s5, 0x20
    ctx->pc = 0x2ffd28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)32);
label_2ffd2c:
    // 0x2ffd2c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2ffd30:
    if (ctx->pc == 0x2FFD30u) {
        ctx->pc = 0x2FFD30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFD2Cu;
        // 0x2ffd30: 0x8fa3004c  lw          $v1, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FFD34u;
        goto label_2ffd34;
    }
    ctx->pc = 0x2FFD2Cu;
    {
        const bool branch_taken_0x2ffd2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FFD30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFD2Cu;
        // 0x2ffd30: 0x8fa3004c  lw          $v1, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ffd2c) {
            ctx->pc = 0x2FFD3Cu;
            goto label_2ffd3c;
        }
    }
    ctx->pc = 0x2FFD34u;
label_2ffd34:
    // 0x2ffd34: 0x1100001e  beqz        $t0, . + 4 + (0x1E << 2)
label_2ffd38:
    if (ctx->pc == 0x2FFD38u) {
        ctx->pc = 0x2FFD38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFD34u;
        // 0x2ffd38: 0x26d70001  addiu       $s7, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FFD3Cu;
        goto label_2ffd3c;
    }
    ctx->pc = 0x2FFD34u;
    {
        const bool branch_taken_0x2ffd34 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FFD38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFD34u;
        // 0x2ffd38: 0x26d70001  addiu       $s7, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ffd34) {
            ctx->pc = 0x2FFDB0u;
            goto label_2ffdb0;
        }
    }
    ctx->pc = 0x2FFD3Cu;
label_2ffd3c:
    // 0x2ffd3c: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x2ffd3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_2ffd40:
    // 0x2ffd40: 0x26d70001  addiu       $s7, $s6, 0x1
    ctx->pc = 0x2ffd40u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_2ffd44:
    // 0x2ffd44: 0x32b40100  andi        $s4, $s5, 0x100
    ctx->pc = 0x2ffd44u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)256);
label_2ffd48:
    // 0x2ffd48: 0x2471ffff  addiu       $s1, $v1, -0x1
    ctx->pc = 0x2ffd48u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_2ffd4c:
    // 0x2ffd4c: 0x10000019  b           . + 4 + (0x19 << 2)
label_2ffd50:
    if (ctx->pc == 0x2FFD50u) {
        ctx->pc = 0x2FFD50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFD4Cu;
        // 0x2ffd50: 0xa0620000  sb          $v0, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FFD54u;
        goto label_2ffd54;
    }
    ctx->pc = 0x2FFD4Cu;
    {
        const bool branch_taken_0x2ffd4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FFD50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFD4Cu;
        // 0x2ffd50: 0xa0620000  sb          $v0, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ffd4c) {
            ctx->pc = 0x2FFDB4u;
            goto label_2ffdb4;
        }
    }
    ctx->pc = 0x2FFD54u;
label_2ffd54:
    // 0x2ffd54: 0x10182f  dsubu       $v1, $zero, $s0
    ctx->pc = 0x2ffd54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) - GPR_U64(ctx, 16));
label_2ffd58:
    // 0x2ffd58: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x2ffd58u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_2ffd5c:
    // 0x2ffd5c: 0x62800a  movz        $s0, $v1, $v0
    ctx->pc = 0x2ffd5cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
label_2ffd60:
    // 0x2ffd60: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
label_2ffd64:
    if (ctx->pc == 0x2FFD64u) {
        ctx->pc = 0x2FFD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFD60u;
        // 0x2ffd64: 0x26d70001  addiu       $s7, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FFD68u;
        goto label_2ffd68;
    }
    ctx->pc = 0x2FFD60u;
    {
        const bool branch_taken_0x2ffd60 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FFD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFD60u;
        // 0x2ffd64: 0x26d70001  addiu       $s7, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ffd60) {
            ctx->pc = 0x2FFDB0u;
            goto label_2ffdb0;
        }
    }
    ctx->pc = 0x2FFD68u;
label_2ffd68:
    // 0x2ffd68: 0x32b40100  andi        $s4, $s5, 0x100
    ctx->pc = 0x2ffd68u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)256);
label_2ffd6c:
    // 0x2ffd6c: 0x32b30001  andi        $s3, $s5, 0x1
    ctx->pc = 0x2ffd6cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
label_2ffd70:
    // 0x2ffd70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ffd70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2ffd74:
    // 0x2ffd74: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x2ffd74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_2ffd78:
    // 0x2ffd78: 0xc0be67c  jal         func_2F99F0
label_2ffd7c:
    if (ctx->pc == 0x2FFD7Cu) {
        ctx->pc = 0x2FFD7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFD78u;
        // 0x2ffd7c: 0x7fa80070  sq          $t0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FFD80u;
        goto label_2ffd80;
    }
    ctx->pc = 0x2FFD78u;
    SET_GPR_U32(ctx, 31, 0x2FFD80u);
    ctx->pc = 0x2FFD7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FFD78u;
    // 0x2ffd7c: 0x7fa80070  sq          $t0, 0x70($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F99F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F99F0u, 0x2FFD78u, 0x2FFD80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FFD80u;
label_2ffd80:
    // 0x2ffd80: 0x64420030  daddiu      $v0, $v0, 0x30
    ctx->pc = 0x2ffd80u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)48);
label_2ffd84:
    // 0x2ffd84: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ffd84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2ffd88:
    // 0x2ffd88: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2ffd88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2ffd8c:
    // 0x2ffd8c: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x2ffd8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_2ffd90:
    // 0x2ffd90: 0xc0be4d6  jal         func_2F9358
label_2ffd94:
    if (ctx->pc == 0x2FFD94u) {
        ctx->pc = 0x2FFD94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFD90u;
        // 0x2ffd94: 0xa2220000  sb          $v0, 0x0($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FFD98u;
        goto label_2ffd98;
    }
    ctx->pc = 0x2FFD90u;
    SET_GPR_U32(ctx, 31, 0x2FFD98u);
    ctx->pc = 0x2FFD94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FFD90u;
    // 0x2ffd94: 0xa2220000  sb          $v0, 0x0($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F9358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F9358u, 0x2FFD90u, 0x2FFD98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FFD98u;
label_2ffd98:
    // 0x2ffd98: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x2ffd98u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_2ffd9c:
    // 0x2ffd9c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2ffd9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ffda0:
    // 0x2ffda0: 0x1600fff3  bnez        $s0, . + 4 + (-0xD << 2)
label_2ffda4:
    if (ctx->pc == 0x2FFDA4u) {
        ctx->pc = 0x2FFDA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFDA0u;
        // 0x2ffda4: 0x7ba80070  lq          $t0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FFDA8u;
        goto label_2ffda8;
    }
    ctx->pc = 0x2FFDA0u;
    {
        const bool branch_taken_0x2ffda0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FFDA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFDA0u;
        // 0x2ffda4: 0x7ba80070  lq          $t0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ffda0) {
            ctx->pc = 0x2FFD70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ffd70;
        }
    }
    ctx->pc = 0x2FFDA8u;
label_2ffda8:
    // 0x2ffda8: 0x10000004  b           . + 4 + (0x4 << 2)
label_2ffdac:
    if (ctx->pc == 0x2FFDACu) {
        ctx->pc = 0x2FFDACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFDA8u;
        // 0x2ffdac: 0x8fa5004c  lw          $a1, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FFDB0u;
        goto label_2ffdb0;
    }
    ctx->pc = 0x2FFDA8u;
    {
        const bool branch_taken_0x2ffda8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FFDACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFDA8u;
        // 0x2ffdac: 0x8fa5004c  lw          $a1, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ffda8) {
            ctx->pc = 0x2FFDBCu;
            goto label_2ffdbc;
        }
    }
    ctx->pc = 0x2FFDB0u;
label_2ffdb0:
    // 0x2ffdb0: 0x32b40100  andi        $s4, $s5, 0x100
    ctx->pc = 0x2ffdb0u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)256);
label_2ffdb4:
    // 0x2ffdb4: 0x32b30001  andi        $s3, $s5, 0x1
    ctx->pc = 0x2ffdb4u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
label_2ffdb8:
    // 0x2ffdb8: 0x8fa5004c  lw          $a1, 0x4C($sp)
    ctx->pc = 0x2ffdb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_2ffdbc:
    // 0x2ffdbc: 0x100000e1  b           . + 4 + (0xE1 << 2)
label_2ffdc0:
    if (ctx->pc == 0x2FFDC0u) {
        ctx->pc = 0x2FFDC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFDBCu;
        // 0x2ffdc0: 0x26320001  addiu       $s2, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FFDC4u;
        goto label_2ffdc4;
    }
    ctx->pc = 0x2FFDBCu;
    {
        const bool branch_taken_0x2ffdbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FFDC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFDBCu;
        // 0x2ffdc0: 0x26320001  addiu       $s2, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ffdbc) {
            ctx->pc = 0x300144u;
            return;
        }
    }
    ctx->pc = 0x2FFDC4u;
label_2ffdc4:
    // 0x2ffdc4: 0x32a20040  andi        $v0, $s5, 0x40
    ctx->pc = 0x2ffdc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)64);
label_2ffdc8:
    // 0x2ffdc8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_2ffdcc:
    if (ctx->pc == 0x2FFDCCu) {
        ctx->pc = 0x2FFDCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFDC8u;
        // 0x2ffdcc: 0x32a20080  andi        $v0, $s5, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FFDD0u;
        goto label_2ffdd0;
    }
    ctx->pc = 0x2FFDC8u;
    {
        const bool branch_taken_0x2ffdc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FFDCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFDC8u;
        // 0x2ffdcc: 0x32a20080  andi        $v0, $s5, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ffdc8) {
            ctx->pc = 0x2FFDDCu;
            goto label_2ffddc;
        }
    }
    ctx->pc = 0x2FFDD0u;
label_2ffdd0:
    // 0x2ffdd0: 0x27de0008  addiu       $fp, $fp, 0x8
    ctx->pc = 0x2ffdd0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
label_2ffdd4:
    // 0x2ffdd4: 0x10000006  b           . + 4 + (0x6 << 2)
label_2ffdd8:
    if (ctx->pc == 0x2FFDD8u) {
        ctx->pc = 0x2FFDD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFDD4u;
        // 0x2ffdd8: 0xdfd0fff8  ld          $s0, -0x8($fp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 30), 4294967288)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FFDDCu;
        goto label_2ffddc;
    }
    ctx->pc = 0x2FFDD4u;
    {
        const bool branch_taken_0x2ffdd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FFDD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFDD4u;
        // 0x2ffdd8: 0xdfd0fff8  ld          $s0, -0x8($fp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 30), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ffdd4) {
            ctx->pc = 0x2FFDF0u;
            goto label_2ffdf0;
        }
    }
    ctx->pc = 0x2FFDDCu;
label_2ffddc:
    // 0x2ffddc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2ffde0:
    if (ctx->pc == 0x2FFDE0u) {
        ctx->pc = 0x2FFDE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFDDCu;
        // 0x2ffde0: 0x27de0008  addiu       $fp, $fp, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FFDE4u;
        goto label_2ffde4;
    }
    ctx->pc = 0x2FFDDCu;
    {
        const bool branch_taken_0x2ffddc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FFDE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFDDCu;
        // 0x2ffde0: 0x27de0008  addiu       $fp, $fp, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ffddc) {
            ctx->pc = 0x2FFDECu;
            goto label_2ffdec;
        }
    }
    ctx->pc = 0x2FFDE4u;
label_2ffde4:
    // 0x2ffde4: 0x10000002  b           . + 4 + (0x2 << 2)
label_2ffde8:
    if (ctx->pc == 0x2FFDE8u) {
        ctx->pc = 0x2FFDE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFDE4u;
        // 0x2ffde8: 0x97d0fff8  lhu         $s0, -0x8($fp) (Delay Slot)
        SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 4294967288)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FFDECu;
        goto label_2ffdec;
    }
    ctx->pc = 0x2FFDE4u;
    {
        const bool branch_taken_0x2ffde4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FFDE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFDE4u;
        // 0x2ffde8: 0x97d0fff8  lhu         $s0, -0x8($fp) (Delay Slot)
        SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ffde4) {
            ctx->pc = 0x2FFDF0u;
            goto label_2ffdf0;
        }
    }
    ctx->pc = 0x2FFDECu;
label_2ffdec:
    // 0x2ffdec: 0x9fd0fff8  lwu         $s0, -0x8($fp)
    ctx->pc = 0x2ffdecu;
    SET_GPR_ZE32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 30), 4294967288)));
label_2ffdf0:
    // 0x2ffdf0: 0x1600000b  bnez        $s0, . + 4 + (0xB << 2)
label_2ffdf4:
    if (ctx->pc == 0x2FFDF4u) {
        ctx->pc = 0x2FFDF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFDF0u;
        // 0x2ffdf4: 0x8fb1004c  lw          $s1, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FFDF8u;
        goto label_2ffdf8;
    }
    ctx->pc = 0x2FFDF0u;
    {
        const bool branch_taken_0x2ffdf0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FFDF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFDF0u;
        // 0x2ffdf4: 0x8fb1004c  lw          $s1, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ffdf0) {
            ctx->pc = 0x2FFE20u;
            goto label_2ffe20;
        }
    }
    ctx->pc = 0x2FFDF8u;
label_2ffdf8:
    // 0x2ffdf8: 0x32a20020  andi        $v0, $s5, 0x20
    ctx->pc = 0x2ffdf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)32);
label_2ffdfc:
    // 0x2ffdfc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2ffe00:
    if (ctx->pc == 0x2FFE00u) {
        ctx->pc = 0x2FFE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFDFCu;
        // 0x2ffe00: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FFE04u;
        goto label_2ffe04;
    }
    ctx->pc = 0x2FFDFCu;
    {
        const bool branch_taken_0x2ffdfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FFE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFDFCu;
        // 0x2ffe00: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ffdfc) {
            ctx->pc = 0x2FFE0Cu;
            goto label_2ffe0c;
        }
    }
    ctx->pc = 0x2FFE04u;
label_2ffe04:
    // 0x2ffe04: 0x1100001a  beqz        $t0, . + 4 + (0x1A << 2)
label_2ffe08:
    if (ctx->pc == 0x2FFE08u) {
        ctx->pc = 0x2FFE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFE04u;
        // 0x2ffe08: 0x26d70001  addiu       $s7, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FFE0Cu;
        goto label_2ffe0c;
    }
    ctx->pc = 0x2FFE04u;
    {
        const bool branch_taken_0x2ffe04 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FFE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFE04u;
        // 0x2ffe08: 0x26d70001  addiu       $s7, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ffe04) {
            ctx->pc = 0x2FFE70u;
            goto label_2ffe70;
        }
    }
    ctx->pc = 0x2FFE0Cu;
label_2ffe0c:
    // 0x2ffe0c: 0x26d70001  addiu       $s7, $s6, 0x1
    ctx->pc = 0x2ffe0cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_2ffe10:
    // 0x2ffe10: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x2ffe10u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
label_2ffe14:
    // 0x2ffe14: 0x32b40100  andi        $s4, $s5, 0x100
    ctx->pc = 0x2ffe14u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)256);
label_2ffe18:
    // 0x2ffe18: 0x10000016  b           . + 4 + (0x16 << 2)
label_2ffe1c:
    if (ctx->pc == 0x2FFE1Cu) {
        ctx->pc = 0x2FFE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFE18u;
        // 0x2ffe1c: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FFE20u;
        goto label_2ffe20;
    }
    ctx->pc = 0x2FFE18u;
    {
        const bool branch_taken_0x2ffe18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FFE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFE18u;
        // 0x2ffe1c: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ffe18) {
            ctx->pc = 0x2FFE74u;
            goto label_2ffe74;
        }
    }
    ctx->pc = 0x2FFE20u;
label_2ffe20:
    // 0x2ffe20: 0x26d70001  addiu       $s7, $s6, 0x1
    ctx->pc = 0x2ffe20u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_2ffe24:
    // 0x2ffe24: 0x32b40100  andi        $s4, $s5, 0x100
    ctx->pc = 0x2ffe24u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)256);
label_2ffe28:
    // 0x2ffe28: 0x32b30001  andi        $s3, $s5, 0x1
    ctx->pc = 0x2ffe28u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
label_2ffe2c:
    // 0x2ffe2c: 0x0  nop
    ctx->pc = 0x2ffe2cu;
    // NOP
label_2ffe30:
    // 0x2ffe30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ffe30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2ffe34:
    // 0x2ffe34: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x2ffe34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_2ffe38:
    // 0x2ffe38: 0xc0be980  jal         func_2FA600
label_2ffe3c:
    if (ctx->pc == 0x2FFE3Cu) {
        ctx->pc = 0x2FFE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFE38u;
        // 0x2ffe3c: 0x7fa80070  sq          $t0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FFE40u;
        goto label_2ffe40;
    }
    ctx->pc = 0x2FFE38u;
    SET_GPR_U32(ctx, 31, 0x2FFE40u);
    ctx->pc = 0x2FFE3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FFE38u;
    // 0x2ffe3c: 0x7fa80070  sq          $t0, 0x70($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA600u, 0x2FFE38u, 0x2FFE40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FFE40u;
label_2ffe40:
    // 0x2ffe40: 0x64420030  daddiu      $v0, $v0, 0x30
    ctx->pc = 0x2ffe40u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)48);
label_2ffe44:
    // 0x2ffe44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ffe44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2ffe48:
    // 0x2ffe48: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2ffe48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2ffe4c:
    // 0x2ffe4c: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x2ffe4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_2ffe50:
    // 0x2ffe50: 0xc0be820  jal         func_2FA080
label_2ffe54:
    if (ctx->pc == 0x2FFE54u) {
        ctx->pc = 0x2FFE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFE50u;
        // 0x2ffe54: 0xa2220000  sb          $v0, 0x0($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FFE58u;
        goto label_2ffe58;
    }
    ctx->pc = 0x2FFE50u;
    SET_GPR_U32(ctx, 31, 0x2FFE58u);
    ctx->pc = 0x2FFE54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FFE50u;
    // 0x2ffe54: 0xa2220000  sb          $v0, 0x0($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA080u, 0x2FFE50u, 0x2FFE58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FFE58u;
label_2ffe58:
    // 0x2ffe58: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x2ffe58u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_2ffe5c:
    // 0x2ffe5c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2ffe5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ffe60:
    // 0x2ffe60: 0x1600fff3  bnez        $s0, . + 4 + (-0xD << 2)
label_2ffe64:
    if (ctx->pc == 0x2FFE64u) {
        ctx->pc = 0x2FFE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFE60u;
        // 0x2ffe64: 0x7ba80070  lq          $t0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FFE68u;
        goto label_2ffe68;
    }
    ctx->pc = 0x2FFE60u;
    {
        const bool branch_taken_0x2ffe60 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FFE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFE60u;
        // 0x2ffe64: 0x7ba80070  lq          $t0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ffe60) {
            ctx->pc = 0x2FFE30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ffe30;
        }
    }
    ctx->pc = 0x2FFE68u;
label_2ffe68:
    // 0x2ffe68: 0x10000004  b           . + 4 + (0x4 << 2)
label_2ffe6c:
    if (ctx->pc == 0x2FFE6Cu) {
        ctx->pc = 0x2FFE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFE68u;
        // 0x2ffe6c: 0x8fa2004c  lw          $v0, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FFE70u;
        goto label_2ffe70;
    }
    ctx->pc = 0x2FFE68u;
    {
        const bool branch_taken_0x2ffe68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FFE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFE68u;
        // 0x2ffe6c: 0x8fa2004c  lw          $v0, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ffe68) {
            ctx->pc = 0x2FFE7Cu;
            goto label_2ffe7c;
        }
    }
    ctx->pc = 0x2FFE70u;
label_2ffe70:
    // 0x2ffe70: 0x32b40100  andi        $s4, $s5, 0x100
    ctx->pc = 0x2ffe70u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)256);
label_2ffe74:
    // 0x2ffe74: 0x32b30001  andi        $s3, $s5, 0x1
    ctx->pc = 0x2ffe74u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
label_2ffe78:
    // 0x2ffe78: 0x8fa2004c  lw          $v0, 0x4C($sp)
    ctx->pc = 0x2ffe78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_2ffe7c:
    // 0x2ffe7c: 0x26320001  addiu       $s2, $s1, 0x1
    ctx->pc = 0x2ffe7cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2ffe80:
    // 0x2ffe80: 0x100000b1  b           . + 4 + (0xB1 << 2)
label_2ffe84:
    if (ctx->pc == 0x2FFE84u) {
        ctx->pc = 0x2FFE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFE80u;
        // 0x2ffe84: 0x512023  subu        $a0, $v0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FFE88u;
        goto label_2ffe88;
    }
    ctx->pc = 0x2FFE80u;
    {
        const bool branch_taken_0x2ffe80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FFE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFE80u;
        // 0x2ffe84: 0x512023  subu        $a0, $v0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ffe80) {
            ctx->pc = 0x300148u;
            return;
        }
    }
    ctx->pc = 0x2FFE88u;
label_2ffe88:
    // 0x2ffe88: 0x27de0008  addiu       $fp, $fp, 0x8
    ctx->pc = 0x2ffe88u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
label_2ffe8c:
    // 0x2ffe8c: 0xc0bef4c  jal         func_2FBD30
label_2ffe90:
    if (ctx->pc == 0x2FFE90u) {
        ctx->pc = 0x2FFE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFE8Cu;
        // 0x2ffe90: 0xdfc4fff8  ld          $a0, -0x8($fp) (Delay Slot)
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 30), 4294967288)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FFE94u;
        goto label_2ffe94;
    }
    ctx->pc = 0x2FFE8Cu;
    SET_GPR_U32(ctx, 31, 0x2FFE94u);
    ctx->pc = 0x2FFE90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FFE8Cu;
    // 0x2ffe90: 0xdfc4fff8  ld          $a0, -0x8($fp) (Delay Slot)
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 30), 4294967288)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD30u, 0x2FFE8Cu, 0x2FFE94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FFE94u;
label_2ffe94:
    // 0x2ffe94: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2ffe94u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_2ffe98:
    // 0x2ffe98: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2ffe98u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2ffe9c:
    // 0x2ffe9c: 0x46006032  c.eq.s      $f12, $f0
    ctx->pc = 0x2ffe9cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2ffea0:
    // 0x2ffea0: 0x0  nop
    ctx->pc = 0x2ffea0u;
    // NOP
label_2ffea4:
    // 0x2ffea4: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_2ffea8:
    if (ctx->pc == 0x2FFEA8u) {
        ctx->pc = 0x2FFEA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFEA4u;
        // 0x2ffea8: 0x8fa40048  lw          $a0, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FFEACu;
        goto label_2ffeac;
    }
    ctx->pc = 0x2FFEA4u;
    {
        const bool branch_taken_0x2ffea4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2FFEA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFEA4u;
        // 0x2ffea8: 0x8fa40048  lw          $a0, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ffea4) {
            ctx->pc = 0x2FFEBCu;
            goto label_2ffebc;
        }
    }
    ctx->pc = 0x2FFEACu;
label_2ffeac:
    // 0x2ffeac: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x2ffeacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_2ffeb0:
    // 0x2ffeb0: 0x8fa5005c  lw          $a1, 0x5C($sp)
    ctx->pc = 0x2ffeb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_2ffeb4:
    // 0x2ffeb4: 0x100001c7  b           . + 4 + (0x1C7 << 2)
label_2ffeb8:
    if (ctx->pc == 0x2FFEB8u) {
        ctx->pc = 0x2FFEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFEB4u;
        // 0x2ffeb8: 0x26d70001  addiu       $s7, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FFEBCu;
        goto label_2ffebc;
    }
    ctx->pc = 0x2FFEB4u;
    {
        const bool branch_taken_0x2ffeb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FFEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFEB4u;
        // 0x2ffeb8: 0x26d70001  addiu       $s7, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ffeb4) {
            ctx->pc = 0x3005D4u;
            return;
        }
    }
    ctx->pc = 0x2FFEBCu;
label_2ffebc:
    // 0x2ffebc: 0xc0bec3e  jal         func_2FB0F8
label_2ffec0:
    if (ctx->pc == 0x2FFEC0u) {
        ctx->pc = 0x2FFEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFEBCu;
        // 0x2ffec0: 0x26d70001  addiu       $s7, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FFEC4u;
        goto label_2ffec4;
    }
    ctx->pc = 0x2FFEBCu;
    SET_GPR_U32(ctx, 31, 0x2FFEC4u);
    ctx->pc = 0x2FFEC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FFEBCu;
    // 0x2ffec0: 0x26d70001  addiu       $s7, $s6, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB0F8u, 0x2FFEBCu, 0x2FFEC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FFEC4u;
label_2ffec4:
    // 0x2ffec4: 0x8fa40044  lw          $a0, 0x44($sp)
    ctx->pc = 0x2ffec4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_2ffec8:
    // 0x2ffec8: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2ffec8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ffecc:
    // 0x2ffecc: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x2ffeccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2ffed0:
    // 0x2ffed0: 0xc0bfddc  jal         func_2FF770
label_2ffed4:
    if (ctx->pc == 0x2FFED4u) {
        ctx->pc = 0x2FFED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFED0u;
        // 0x2ffed4: 0x8fa6005c  lw          $a2, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FFED8u;
        goto label_2ffed8;
    }
    ctx->pc = 0x2FFED0u;
    SET_GPR_U32(ctx, 31, 0x2FFED8u);
    ctx->pc = 0x2FFED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FFED0u;
    // 0x2ffed4: 0x8fa6005c  lw          $a2, 0x5C($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FF770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FF770u, 0x2FFED0u, 0x2FFED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FFED8u;
label_2ffed8:
    // 0x2ffed8: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x2ffed8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_2ffedc:
    // 0x2ffedc: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x2ffedcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_2ffee0:
    // 0x2ffee0: 0xafa50058  sw          $a1, 0x58($sp)
    ctx->pc = 0x2ffee0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 5));
label_2ffee4:
    // 0x2ffee4: 0x100001c3  b           . + 4 + (0x1C3 << 2)
label_2ffee8:
    if (ctx->pc == 0x2FFEE8u) {
        ctx->pc = 0x2FFEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFEE4u;
        // 0x2ffee8: 0x92c50000  lbu         $a1, 0x0($s6) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FFEECu;
        goto label_2ffeec;
    }
    ctx->pc = 0x2FFEE4u;
    {
        const bool branch_taken_0x2ffee4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FFEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFEE4u;
        // 0x2ffee8: 0x92c50000  lbu         $a1, 0x0($s6) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ffee4) {
            ctx->pc = 0x3005F4u;
            return;
        }
    }
    ctx->pc = 0x2FFEECu;
label_2ffeec:
    // 0x2ffeec: 0x27de0008  addiu       $fp, $fp, 0x8
    ctx->pc = 0x2ffeecu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
label_2ffef0:
    // 0x2ffef0: 0x8fc3fff8  lw          $v1, -0x8($fp)
    ctx->pc = 0x2ffef0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294967288)));
label_2ffef4:
    // 0x2ffef4: 0x14600022  bnez        $v1, . + 4 + (0x22 << 2)
label_2ffef8:
    if (ctx->pc == 0x2FFEF8u) {
        ctx->pc = 0x2FFEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFEF4u;
        // 0x2ffef8: 0x32a20020  andi        $v0, $s5, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FFEFCu;
        goto label_2ffefc;
    }
    ctx->pc = 0x2FFEF4u;
    {
        const bool branch_taken_0x2ffef4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FFEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFEF4u;
        // 0x2ffef8: 0x32a20020  andi        $v0, $s5, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ffef4) {
            ctx->pc = 0x2FFF80u;
            goto label_2fff80;
        }
    }
    ctx->pc = 0x2FFEFCu;
label_2ffefc:
    // 0x2ffefc: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2ffefcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2fff00:
    // 0x2fff00: 0x24060028  addiu       $a2, $zero, 0x28
    ctx->pc = 0x2fff00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_2fff04:
    // 0x2fff04: 0x8fa5005c  lw          $a1, 0x5C($sp)
    ctx->pc = 0x2fff04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_2fff08:
    // 0x2fff08: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x2fff08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_2fff0c:
    // 0x2fff0c: 0x60f809  jalr        $v1
label_2fff10:
    if (ctx->pc == 0x2FFF10u) {
        ctx->pc = 0x2FFF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFF0Cu;
        // 0x2fff10: 0x26d70001  addiu       $s7, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FFF14u;
        goto label_2fff14;
    }
    ctx->pc = 0x2FFF0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2FFF14u);
        ctx->pc = 0x2FFF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFF0Cu;
        // 0x2fff10: 0x26d70001  addiu       $s7, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FFF0Cu, 0x2FFF14u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2FFF14u;
label_2fff14:
    // 0x2fff14: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2fff14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2fff18:
    // 0x2fff18: 0x2406006e  addiu       $a2, $zero, 0x6E
    ctx->pc = 0x2fff18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
label_2fff1c:
    // 0x2fff1c: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x2fff1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_2fff20:
    // 0x2fff20: 0x60f809  jalr        $v1
label_2fff24:
    if (ctx->pc == 0x2FFF24u) {
        ctx->pc = 0x2FFF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFF20u;
        // 0x2fff24: 0x8fa5005c  lw          $a1, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FFF28u;
        goto label_2fff28;
    }
    ctx->pc = 0x2FFF20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2FFF28u);
        ctx->pc = 0x2FFF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFF20u;
        // 0x2fff24: 0x8fa5005c  lw          $a1, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FFF20u, 0x2FFF28u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2FFF28u;
label_2fff28:
    // 0x2fff28: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2fff28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2fff2c:
    // 0x2fff2c: 0x24060075  addiu       $a2, $zero, 0x75
    ctx->pc = 0x2fff2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 117));
label_2fff30:
    // 0x2fff30: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x2fff30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_2fff34:
    // 0x2fff34: 0x60f809  jalr        $v1
label_2fff38:
    if (ctx->pc == 0x2FFF38u) {
        ctx->pc = 0x2FFF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFF34u;
        // 0x2fff38: 0x8fa5005c  lw          $a1, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FFF3Cu;
        goto label_2fff3c;
    }
    ctx->pc = 0x2FFF34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2FFF3Cu);
        ctx->pc = 0x2FFF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFF34u;
        // 0x2fff38: 0x8fa5005c  lw          $a1, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FFF34u, 0x2FFF3Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2FFF3Cu;
label_2fff3c:
    // 0x2fff3c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2fff3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2fff40:
    // 0x2fff40: 0x2406006c  addiu       $a2, $zero, 0x6C
    ctx->pc = 0x2fff40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
label_2fff44:
    // 0x2fff44: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x2fff44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_2fff48:
    // 0x2fff48: 0x60f809  jalr        $v1
label_2fff4c:
    if (ctx->pc == 0x2FFF4Cu) {
        ctx->pc = 0x2FFF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFF48u;
        // 0x2fff4c: 0x8fa5005c  lw          $a1, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FFF50u;
        goto label_2fff50;
    }
    ctx->pc = 0x2FFF48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2FFF50u);
        ctx->pc = 0x2FFF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFF48u;
        // 0x2fff4c: 0x8fa5005c  lw          $a1, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FFF48u, 0x2FFF50u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2FFF50u;
label_2fff50:
    // 0x2fff50: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2fff50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2fff54:
    // 0x2fff54: 0x2406006c  addiu       $a2, $zero, 0x6C
    ctx->pc = 0x2fff54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
label_2fff58:
    // 0x2fff58: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x2fff58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_2fff5c:
    // 0x2fff5c: 0x60f809  jalr        $v1
label_2fff60:
    if (ctx->pc == 0x2FFF60u) {
        ctx->pc = 0x2FFF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFF5Cu;
        // 0x2fff60: 0x8fa5005c  lw          $a1, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FFF64u;
        goto label_2fff64;
    }
    ctx->pc = 0x2FFF5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2FFF64u);
        ctx->pc = 0x2FFF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFF5Cu;
        // 0x2fff60: 0x8fa5005c  lw          $a1, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FFF5Cu, 0x2FFF64u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2FFF64u;
label_2fff64:
    // 0x2fff64: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2fff64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2fff68:
    // 0x2fff68: 0x24060029  addiu       $a2, $zero, 0x29
    ctx->pc = 0x2fff68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
label_2fff6c:
    // 0x2fff6c: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x2fff6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_2fff70:
    // 0x2fff70: 0x60f809  jalr        $v1
label_2fff74:
    if (ctx->pc == 0x2FFF74u) {
        ctx->pc = 0x2FFF74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFF70u;
        // 0x2fff74: 0x8fa5005c  lw          $a1, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FFF78u;
        goto label_2fff78;
    }
    ctx->pc = 0x2FFF70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2FFF78u);
        ctx->pc = 0x2FFF74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFF70u;
        // 0x2fff74: 0x8fa5005c  lw          $a1, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FFF70u, 0x2FFF78u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2FFF78u;
label_2fff78:
    // 0x2fff78: 0x1000019e  b           . + 4 + (0x19E << 2)
label_2fff7c:
    if (ctx->pc == 0x2FFF7Cu) {
        ctx->pc = 0x2FFF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFF78u;
        // 0x2fff7c: 0x92c50000  lbu         $a1, 0x0($s6) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FFF80u;
        goto label_2fff80;
    }
    ctx->pc = 0x2FFF78u;
    {
        const bool branch_taken_0x2fff78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FFF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFF78u;
        // 0x2fff7c: 0x92c50000  lbu         $a1, 0x0($s6) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fff78) {
            ctx->pc = 0x3005F4u;
            return;
        }
    }
    ctx->pc = 0x2FFF80u;
label_2fff80:
    // 0x2fff80: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
label_2fff84:
    if (ctx->pc == 0x2FFF84u) {
        ctx->pc = 0x2FFF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFF80u;
        // 0x2fff84: 0x60882d  daddu       $s1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FFF88u;
        goto label_2fff88;
    }
    ctx->pc = 0x2FFF80u;
    {
        const bool branch_taken_0x2fff80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FFF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFF80u;
        // 0x2fff84: 0x60882d  daddu       $s1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fff80) {
            ctx->pc = 0x2FFFE0u;
            goto label_2fffe0;
        }
    }
    ctx->pc = 0x2FFF88u;
label_2fff88:
    // 0x2fff88: 0x19000010  blez        $t0, . + 4 + (0x10 << 2)
label_2fff8c:
    if (ctx->pc == 0x2FFF8Cu) {
        ctx->pc = 0x2FFF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFF88u;
        // 0x2fff8c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FFF90u;
        goto label_2fff90;
    }
    ctx->pc = 0x2FFF88u;
    {
        const bool branch_taken_0x2fff88 = (GPR_S32(ctx, 8) <= 0);
        ctx->pc = 0x2FFF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFF88u;
        // 0x2fff8c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fff88) {
            ctx->pc = 0x2FFFCCu;
            goto label_2fffcc;
        }
    }
    ctx->pc = 0x2FFF90u;
label_2fff90:
    // 0x2fff90: 0x82220000  lb          $v0, 0x0($s1)
    ctx->pc = 0x2fff90u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_2fff94:
    // 0x2fff94: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_2fff98:
    if (ctx->pc == 0x2FFF98u) {
        ctx->pc = 0x2FFF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFF94u;
        // 0x2fff98: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FFF9Cu;
        goto label_2fff9c;
    }
    ctx->pc = 0x2FFF94u;
    {
        const bool branch_taken_0x2fff94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FFF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFF94u;
        // 0x2fff98: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fff94) {
            ctx->pc = 0x2FFFCCu;
            goto label_2fffcc;
        }
    }
    ctx->pc = 0x2FFF9Cu;
label_2fff9c:
    // 0x2fff9c: 0x26d70001  addiu       $s7, $s6, 0x1
    ctx->pc = 0x2fff9cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_2fffa0:
    // 0x2fffa0: 0x32b40100  andi        $s4, $s5, 0x100
    ctx->pc = 0x2fffa0u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)256);
label_2fffa4:
    // 0x2fffa4: 0x32b30001  andi        $s3, $s5, 0x1
    ctx->pc = 0x2fffa4u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
label_2fffa8:
    // 0x2fffa8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2fffa8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2fffac:
    // 0x2fffac: 0x208102a  slt         $v0, $s0, $t0
    ctx->pc = 0x2fffacu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
label_2fffb0:
    // 0x2fffb0: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
label_2fffb4:
    if (ctx->pc == 0x2FFFB4u) {
        ctx->pc = 0x2FFFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFFB0u;
        // 0x2fffb4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FFFB8u;
        goto label_2fffb8;
    }
    ctx->pc = 0x2FFFB0u;
    {
        const bool branch_taken_0x2fffb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FFFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFFB0u;
        // 0x2fffb4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fffb0) {
            ctx->pc = 0x300028u;
            return;
        }
    }
    ctx->pc = 0x2FFFB8u;
label_2fffb8:
    // 0x2fffb8: 0x82220000  lb          $v0, 0x0($s1)
    ctx->pc = 0x2fffb8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_2fffbc:
    // 0x2fffbc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_2fffc0:
    if (ctx->pc == 0x2FFFC0u) {
        ctx->pc = 0x2FFFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFFBCu;
        // 0x2fffc0: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FFFC4u;
        goto label_2fffc4;
    }
    ctx->pc = 0x2FFFBCu;
    {
        const bool branch_taken_0x2fffbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FFFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFFBCu;
        // 0x2fffc0: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fffbc) {
            ctx->pc = 0x2FFFA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2fffa8;
        }
    }
    ctx->pc = 0x2FFFC4u;
label_2fffc4:
    // 0x2fffc4: 0x10000060  b           . + 4 + (0x60 << 2)
label_2fffc8:
    if (ctx->pc == 0x2FFFC8u) {
        ctx->pc = 0x2FFFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFFC4u;
        // 0x2fffc8: 0x60902d  daddu       $s2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FFFCCu;
        goto label_2fffcc;
    }
    ctx->pc = 0x2FFFC4u;
    {
        const bool branch_taken_0x2fffc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FFFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFFC4u;
        // 0x2fffc8: 0x60902d  daddu       $s2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fffc4) {
            ctx->pc = 0x300148u;
            return;
        }
    }
    ctx->pc = 0x2FFFCCu;
label_2fffcc:
    // 0x2fffcc: 0x26d70001  addiu       $s7, $s6, 0x1
    ctx->pc = 0x2fffccu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_2fffd0:
    // 0x2fffd0: 0x32b40100  andi        $s4, $s5, 0x100
    ctx->pc = 0x2fffd0u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)256);
label_2fffd4:
    // 0x2fffd4: 0x32b30001  andi        $s3, $s5, 0x1
    ctx->pc = 0x2fffd4u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
label_2fffd8:
    // 0x2fffd8: 0x10000013  b           . + 4 + (0x13 << 2)
label_2fffdc:
    if (ctx->pc == 0x2FFFDCu) {
        ctx->pc = 0x2FFFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFFD8u;
        // 0x2fffdc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FFFE0u;
        goto label_2fffe0;
    }
    ctx->pc = 0x2FFFD8u;
    {
        const bool branch_taken_0x2fffd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FFFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFFD8u;
        // 0x2fffdc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fffd8) {
            ctx->pc = 0x300028u;
            return;
        }
    }
    ctx->pc = 0x2FFFE0u;
label_2fffe0:
    // 0x2fffe0: 0x82220000  lb          $v0, 0x0($s1)
    ctx->pc = 0x2fffe0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_2fffe4:
    // 0x2fffe4: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_2fffe8:
    if (ctx->pc == 0x2FFFE8u) {
        ctx->pc = 0x2FFFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFFE4u;
        // 0x2fffe8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FFFECu;
        goto label_2fffec;
    }
    ctx->pc = 0x2FFFE4u;
    {
        const bool branch_taken_0x2fffe4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FFFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFFE4u;
        // 0x2fffe8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fffe4) {
            ctx->pc = 0x30001Cu;
            return;
        }
    }
    ctx->pc = 0x2FFFECu;
label_2fffec:
    // 0x2fffec: 0x26d70001  addiu       $s7, $s6, 0x1
    ctx->pc = 0x2fffecu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_2ffff0:
    // 0x2ffff0: 0x32b40100  andi        $s4, $s5, 0x100
    ctx->pc = 0x2ffff0u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)256);
label_2ffff4:
    // 0x2ffff4: 0x32b30001  andi        $s3, $s5, 0x1
    ctx->pc = 0x2ffff4u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
label_2ffff8:
    // 0x2ffff8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2ffff8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2ffffc:
    // 0x2ffffc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2ffffcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    ctx->pc = 0x300000u;
}
