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

// Function: sub_003AAC98
// Address: 0x3aac98 - 0x3ab320
void sub_003AAC98_0x3aac98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AAC98_0x3aac98");
#endif

    switch (ctx->pc) {
        case 0x3aac98u: goto label_3aac98;
        case 0x3aac9cu: goto label_3aac9c;
        case 0x3aaca0u: goto label_3aaca0;
        case 0x3aaca4u: goto label_3aaca4;
        case 0x3aaca8u: goto label_3aaca8;
        case 0x3aacacu: goto label_3aacac;
        case 0x3aacb0u: goto label_3aacb0;
        case 0x3aacb4u: goto label_3aacb4;
        case 0x3aacb8u: goto label_3aacb8;
        case 0x3aacbcu: goto label_3aacbc;
        case 0x3aacc0u: goto label_3aacc0;
        case 0x3aacc4u: goto label_3aacc4;
        case 0x3aacc8u: goto label_3aacc8;
        case 0x3aacccu: goto label_3aaccc;
        case 0x3aacd0u: goto label_3aacd0;
        case 0x3aacd4u: goto label_3aacd4;
        case 0x3aacd8u: goto label_3aacd8;
        case 0x3aacdcu: goto label_3aacdc;
        case 0x3aace0u: goto label_3aace0;
        case 0x3aace4u: goto label_3aace4;
        case 0x3aace8u: goto label_3aace8;
        case 0x3aacecu: goto label_3aacec;
        case 0x3aacf0u: goto label_3aacf0;
        case 0x3aacf4u: goto label_3aacf4;
        case 0x3aacf8u: goto label_3aacf8;
        case 0x3aacfcu: goto label_3aacfc;
        case 0x3aad00u: goto label_3aad00;
        case 0x3aad04u: goto label_3aad04;
        case 0x3aad08u: goto label_3aad08;
        case 0x3aad0cu: goto label_3aad0c;
        case 0x3aad10u: goto label_3aad10;
        case 0x3aad14u: goto label_3aad14;
        case 0x3aad18u: goto label_3aad18;
        case 0x3aad1cu: goto label_3aad1c;
        case 0x3aad20u: goto label_3aad20;
        case 0x3aad24u: goto label_3aad24;
        case 0x3aad28u: goto label_3aad28;
        case 0x3aad2cu: goto label_3aad2c;
        case 0x3aad30u: goto label_3aad30;
        case 0x3aad34u: goto label_3aad34;
        case 0x3aad38u: goto label_3aad38;
        case 0x3aad3cu: goto label_3aad3c;
        case 0x3aad40u: goto label_3aad40;
        case 0x3aad44u: goto label_3aad44;
        case 0x3aad48u: goto label_3aad48;
        case 0x3aad4cu: goto label_3aad4c;
        case 0x3aad50u: goto label_3aad50;
        case 0x3aad54u: goto label_3aad54;
        case 0x3aad58u: goto label_3aad58;
        case 0x3aad5cu: goto label_3aad5c;
        case 0x3aad60u: goto label_3aad60;
        case 0x3aad64u: goto label_3aad64;
        case 0x3aad68u: goto label_3aad68;
        case 0x3aad6cu: goto label_3aad6c;
        case 0x3aad70u: goto label_3aad70;
        case 0x3aad74u: goto label_3aad74;
        case 0x3aad78u: goto label_3aad78;
        case 0x3aad7cu: goto label_3aad7c;
        case 0x3aad80u: goto label_3aad80;
        case 0x3aad84u: goto label_3aad84;
        case 0x3aad88u: goto label_3aad88;
        case 0x3aad8cu: goto label_3aad8c;
        case 0x3aad90u: goto label_3aad90;
        case 0x3aad94u: goto label_3aad94;
        case 0x3aad98u: goto label_3aad98;
        case 0x3aad9cu: goto label_3aad9c;
        case 0x3aada0u: goto label_3aada0;
        case 0x3aada4u: goto label_3aada4;
        case 0x3aada8u: goto label_3aada8;
        case 0x3aadacu: goto label_3aadac;
        case 0x3aadb0u: goto label_3aadb0;
        case 0x3aadb4u: goto label_3aadb4;
        case 0x3aadb8u: goto label_3aadb8;
        case 0x3aadbcu: goto label_3aadbc;
        case 0x3aadc0u: goto label_3aadc0;
        case 0x3aadc4u: goto label_3aadc4;
        case 0x3aadc8u: goto label_3aadc8;
        case 0x3aadccu: goto label_3aadcc;
        case 0x3aadd0u: goto label_3aadd0;
        case 0x3aadd4u: goto label_3aadd4;
        case 0x3aadd8u: goto label_3aadd8;
        case 0x3aaddcu: goto label_3aaddc;
        case 0x3aade0u: goto label_3aade0;
        case 0x3aade4u: goto label_3aade4;
        case 0x3aade8u: goto label_3aade8;
        case 0x3aadecu: goto label_3aadec;
        case 0x3aadf0u: goto label_3aadf0;
        case 0x3aadf4u: goto label_3aadf4;
        case 0x3aadf8u: goto label_3aadf8;
        case 0x3aadfcu: goto label_3aadfc;
        case 0x3aae00u: goto label_3aae00;
        case 0x3aae04u: goto label_3aae04;
        case 0x3aae08u: goto label_3aae08;
        case 0x3aae0cu: goto label_3aae0c;
        case 0x3aae10u: goto label_3aae10;
        case 0x3aae14u: goto label_3aae14;
        case 0x3aae18u: goto label_3aae18;
        case 0x3aae1cu: goto label_3aae1c;
        case 0x3aae20u: goto label_3aae20;
        case 0x3aae24u: goto label_3aae24;
        case 0x3aae28u: goto label_3aae28;
        case 0x3aae2cu: goto label_3aae2c;
        case 0x3aae30u: goto label_3aae30;
        case 0x3aae34u: goto label_3aae34;
        case 0x3aae38u: goto label_3aae38;
        case 0x3aae3cu: goto label_3aae3c;
        case 0x3aae40u: goto label_3aae40;
        case 0x3aae44u: goto label_3aae44;
        case 0x3aae48u: goto label_3aae48;
        case 0x3aae4cu: goto label_3aae4c;
        case 0x3aae50u: goto label_3aae50;
        case 0x3aae54u: goto label_3aae54;
        case 0x3aae58u: goto label_3aae58;
        case 0x3aae5cu: goto label_3aae5c;
        case 0x3aae60u: goto label_3aae60;
        case 0x3aae64u: goto label_3aae64;
        case 0x3aae68u: goto label_3aae68;
        case 0x3aae6cu: goto label_3aae6c;
        case 0x3aae70u: goto label_3aae70;
        case 0x3aae74u: goto label_3aae74;
        case 0x3aae78u: goto label_3aae78;
        case 0x3aae7cu: goto label_3aae7c;
        case 0x3aae80u: goto label_3aae80;
        case 0x3aae84u: goto label_3aae84;
        case 0x3aae88u: goto label_3aae88;
        case 0x3aae8cu: goto label_3aae8c;
        case 0x3aae90u: goto label_3aae90;
        case 0x3aae94u: goto label_3aae94;
        case 0x3aae98u: goto label_3aae98;
        case 0x3aae9cu: goto label_3aae9c;
        case 0x3aaea0u: goto label_3aaea0;
        case 0x3aaea4u: goto label_3aaea4;
        case 0x3aaea8u: goto label_3aaea8;
        case 0x3aaeacu: goto label_3aaeac;
        case 0x3aaeb0u: goto label_3aaeb0;
        case 0x3aaeb4u: goto label_3aaeb4;
        case 0x3aaeb8u: goto label_3aaeb8;
        case 0x3aaebcu: goto label_3aaebc;
        case 0x3aaec0u: goto label_3aaec0;
        case 0x3aaec4u: goto label_3aaec4;
        case 0x3aaec8u: goto label_3aaec8;
        case 0x3aaeccu: goto label_3aaecc;
        case 0x3aaed0u: goto label_3aaed0;
        case 0x3aaed4u: goto label_3aaed4;
        case 0x3aaed8u: goto label_3aaed8;
        case 0x3aaedcu: goto label_3aaedc;
        case 0x3aaee0u: goto label_3aaee0;
        case 0x3aaee4u: goto label_3aaee4;
        case 0x3aaee8u: goto label_3aaee8;
        case 0x3aaeecu: goto label_3aaeec;
        case 0x3aaef0u: goto label_3aaef0;
        case 0x3aaef4u: goto label_3aaef4;
        case 0x3aaef8u: goto label_3aaef8;
        case 0x3aaefcu: goto label_3aaefc;
        case 0x3aaf00u: goto label_3aaf00;
        case 0x3aaf04u: goto label_3aaf04;
        case 0x3aaf08u: goto label_3aaf08;
        case 0x3aaf0cu: goto label_3aaf0c;
        case 0x3aaf10u: goto label_3aaf10;
        case 0x3aaf14u: goto label_3aaf14;
        case 0x3aaf18u: goto label_3aaf18;
        case 0x3aaf1cu: goto label_3aaf1c;
        case 0x3aaf20u: goto label_3aaf20;
        case 0x3aaf24u: goto label_3aaf24;
        case 0x3aaf28u: goto label_3aaf28;
        case 0x3aaf2cu: goto label_3aaf2c;
        case 0x3aaf30u: goto label_3aaf30;
        case 0x3aaf34u: goto label_3aaf34;
        case 0x3aaf38u: goto label_3aaf38;
        case 0x3aaf3cu: goto label_3aaf3c;
        case 0x3aaf40u: goto label_3aaf40;
        case 0x3aaf44u: goto label_3aaf44;
        case 0x3aaf48u: goto label_3aaf48;
        case 0x3aaf4cu: goto label_3aaf4c;
        case 0x3aaf50u: goto label_3aaf50;
        case 0x3aaf54u: goto label_3aaf54;
        case 0x3aaf58u: goto label_3aaf58;
        case 0x3aaf5cu: goto label_3aaf5c;
        case 0x3aaf60u: goto label_3aaf60;
        case 0x3aaf64u: goto label_3aaf64;
        case 0x3aaf68u: goto label_3aaf68;
        case 0x3aaf6cu: goto label_3aaf6c;
        case 0x3aaf70u: goto label_3aaf70;
        case 0x3aaf74u: goto label_3aaf74;
        case 0x3aaf78u: goto label_3aaf78;
        case 0x3aaf7cu: goto label_3aaf7c;
        case 0x3aaf80u: goto label_3aaf80;
        case 0x3aaf84u: goto label_3aaf84;
        case 0x3aaf88u: goto label_3aaf88;
        case 0x3aaf8cu: goto label_3aaf8c;
        case 0x3aaf90u: goto label_3aaf90;
        case 0x3aaf94u: goto label_3aaf94;
        case 0x3aaf98u: goto label_3aaf98;
        case 0x3aaf9cu: goto label_3aaf9c;
        case 0x3aafa0u: goto label_3aafa0;
        case 0x3aafa4u: goto label_3aafa4;
        case 0x3aafa8u: goto label_3aafa8;
        case 0x3aafacu: goto label_3aafac;
        case 0x3aafb0u: goto label_3aafb0;
        case 0x3aafb4u: goto label_3aafb4;
        case 0x3aafb8u: goto label_3aafb8;
        case 0x3aafbcu: goto label_3aafbc;
        case 0x3aafc0u: goto label_3aafc0;
        case 0x3aafc4u: goto label_3aafc4;
        case 0x3aafc8u: goto label_3aafc8;
        case 0x3aafccu: goto label_3aafcc;
        case 0x3aafd0u: goto label_3aafd0;
        case 0x3aafd4u: goto label_3aafd4;
        case 0x3aafd8u: goto label_3aafd8;
        case 0x3aafdcu: goto label_3aafdc;
        case 0x3aafe0u: goto label_3aafe0;
        case 0x3aafe4u: goto label_3aafe4;
        case 0x3aafe8u: goto label_3aafe8;
        case 0x3aafecu: goto label_3aafec;
        case 0x3aaff0u: goto label_3aaff0;
        case 0x3aaff4u: goto label_3aaff4;
        case 0x3aaff8u: goto label_3aaff8;
        case 0x3aaffcu: goto label_3aaffc;
        case 0x3ab000u: goto label_3ab000;
        case 0x3ab004u: goto label_3ab004;
        case 0x3ab008u: goto label_3ab008;
        case 0x3ab00cu: goto label_3ab00c;
        case 0x3ab010u: goto label_3ab010;
        case 0x3ab014u: goto label_3ab014;
        case 0x3ab018u: goto label_3ab018;
        case 0x3ab01cu: goto label_3ab01c;
        case 0x3ab020u: goto label_3ab020;
        case 0x3ab024u: goto label_3ab024;
        case 0x3ab028u: goto label_3ab028;
        case 0x3ab02cu: goto label_3ab02c;
        case 0x3ab030u: goto label_3ab030;
        case 0x3ab034u: goto label_3ab034;
        case 0x3ab038u: goto label_3ab038;
        case 0x3ab03cu: goto label_3ab03c;
        case 0x3ab040u: goto label_3ab040;
        case 0x3ab044u: goto label_3ab044;
        case 0x3ab048u: goto label_3ab048;
        case 0x3ab04cu: goto label_3ab04c;
        case 0x3ab050u: goto label_3ab050;
        case 0x3ab054u: goto label_3ab054;
        case 0x3ab058u: goto label_3ab058;
        case 0x3ab05cu: goto label_3ab05c;
        case 0x3ab060u: goto label_3ab060;
        case 0x3ab064u: goto label_3ab064;
        case 0x3ab068u: goto label_3ab068;
        case 0x3ab06cu: goto label_3ab06c;
        case 0x3ab070u: goto label_3ab070;
        case 0x3ab074u: goto label_3ab074;
        case 0x3ab078u: goto label_3ab078;
        case 0x3ab07cu: goto label_3ab07c;
        case 0x3ab080u: goto label_3ab080;
        case 0x3ab084u: goto label_3ab084;
        case 0x3ab088u: goto label_3ab088;
        case 0x3ab08cu: goto label_3ab08c;
        case 0x3ab090u: goto label_3ab090;
        case 0x3ab094u: goto label_3ab094;
        case 0x3ab098u: goto label_3ab098;
        case 0x3ab09cu: goto label_3ab09c;
        case 0x3ab0a0u: goto label_3ab0a0;
        case 0x3ab0a4u: goto label_3ab0a4;
        case 0x3ab0a8u: goto label_3ab0a8;
        case 0x3ab0acu: goto label_3ab0ac;
        case 0x3ab0b0u: goto label_3ab0b0;
        case 0x3ab0b4u: goto label_3ab0b4;
        case 0x3ab0b8u: goto label_3ab0b8;
        case 0x3ab0bcu: goto label_3ab0bc;
        case 0x3ab0c0u: goto label_3ab0c0;
        case 0x3ab0c4u: goto label_3ab0c4;
        case 0x3ab0c8u: goto label_3ab0c8;
        case 0x3ab0ccu: goto label_3ab0cc;
        case 0x3ab0d0u: goto label_3ab0d0;
        case 0x3ab0d4u: goto label_3ab0d4;
        case 0x3ab0d8u: goto label_3ab0d8;
        case 0x3ab0dcu: goto label_3ab0dc;
        case 0x3ab0e0u: goto label_3ab0e0;
        case 0x3ab0e4u: goto label_3ab0e4;
        case 0x3ab0e8u: goto label_3ab0e8;
        case 0x3ab0ecu: goto label_3ab0ec;
        case 0x3ab0f0u: goto label_3ab0f0;
        case 0x3ab0f4u: goto label_3ab0f4;
        case 0x3ab0f8u: goto label_3ab0f8;
        case 0x3ab0fcu: goto label_3ab0fc;
        case 0x3ab100u: goto label_3ab100;
        case 0x3ab104u: goto label_3ab104;
        case 0x3ab108u: goto label_3ab108;
        case 0x3ab10cu: goto label_3ab10c;
        case 0x3ab110u: goto label_3ab110;
        case 0x3ab114u: goto label_3ab114;
        case 0x3ab118u: goto label_3ab118;
        case 0x3ab11cu: goto label_3ab11c;
        case 0x3ab120u: goto label_3ab120;
        case 0x3ab124u: goto label_3ab124;
        case 0x3ab128u: goto label_3ab128;
        case 0x3ab12cu: goto label_3ab12c;
        case 0x3ab130u: goto label_3ab130;
        case 0x3ab134u: goto label_3ab134;
        case 0x3ab138u: goto label_3ab138;
        case 0x3ab13cu: goto label_3ab13c;
        case 0x3ab140u: goto label_3ab140;
        case 0x3ab144u: goto label_3ab144;
        case 0x3ab148u: goto label_3ab148;
        case 0x3ab14cu: goto label_3ab14c;
        case 0x3ab150u: goto label_3ab150;
        case 0x3ab154u: goto label_3ab154;
        case 0x3ab158u: goto label_3ab158;
        case 0x3ab15cu: goto label_3ab15c;
        case 0x3ab160u: goto label_3ab160;
        case 0x3ab164u: goto label_3ab164;
        case 0x3ab168u: goto label_3ab168;
        case 0x3ab16cu: goto label_3ab16c;
        case 0x3ab170u: goto label_3ab170;
        case 0x3ab174u: goto label_3ab174;
        case 0x3ab178u: goto label_3ab178;
        case 0x3ab17cu: goto label_3ab17c;
        case 0x3ab180u: goto label_3ab180;
        case 0x3ab184u: goto label_3ab184;
        case 0x3ab188u: goto label_3ab188;
        case 0x3ab18cu: goto label_3ab18c;
        case 0x3ab190u: goto label_3ab190;
        case 0x3ab194u: goto label_3ab194;
        case 0x3ab198u: goto label_3ab198;
        case 0x3ab19cu: goto label_3ab19c;
        case 0x3ab1a0u: goto label_3ab1a0;
        case 0x3ab1a4u: goto label_3ab1a4;
        case 0x3ab1a8u: goto label_3ab1a8;
        case 0x3ab1acu: goto label_3ab1ac;
        case 0x3ab1b0u: goto label_3ab1b0;
        case 0x3ab1b4u: goto label_3ab1b4;
        case 0x3ab1b8u: goto label_3ab1b8;
        case 0x3ab1bcu: goto label_3ab1bc;
        case 0x3ab1c0u: goto label_3ab1c0;
        case 0x3ab1c4u: goto label_3ab1c4;
        case 0x3ab1c8u: goto label_3ab1c8;
        case 0x3ab1ccu: goto label_3ab1cc;
        case 0x3ab1d0u: goto label_3ab1d0;
        case 0x3ab1d4u: goto label_3ab1d4;
        case 0x3ab1d8u: goto label_3ab1d8;
        case 0x3ab1dcu: goto label_3ab1dc;
        case 0x3ab1e0u: goto label_3ab1e0;
        case 0x3ab1e4u: goto label_3ab1e4;
        case 0x3ab1e8u: goto label_3ab1e8;
        case 0x3ab1ecu: goto label_3ab1ec;
        case 0x3ab1f0u: goto label_3ab1f0;
        case 0x3ab1f4u: goto label_3ab1f4;
        case 0x3ab1f8u: goto label_3ab1f8;
        case 0x3ab1fcu: goto label_3ab1fc;
        case 0x3ab200u: goto label_3ab200;
        case 0x3ab204u: goto label_3ab204;
        case 0x3ab208u: goto label_3ab208;
        case 0x3ab20cu: goto label_3ab20c;
        case 0x3ab210u: goto label_3ab210;
        case 0x3ab214u: goto label_3ab214;
        case 0x3ab218u: goto label_3ab218;
        case 0x3ab21cu: goto label_3ab21c;
        case 0x3ab220u: goto label_3ab220;
        case 0x3ab224u: goto label_3ab224;
        case 0x3ab228u: goto label_3ab228;
        case 0x3ab22cu: goto label_3ab22c;
        case 0x3ab230u: goto label_3ab230;
        case 0x3ab234u: goto label_3ab234;
        case 0x3ab238u: goto label_3ab238;
        case 0x3ab23cu: goto label_3ab23c;
        case 0x3ab240u: goto label_3ab240;
        case 0x3ab244u: goto label_3ab244;
        case 0x3ab248u: goto label_3ab248;
        case 0x3ab24cu: goto label_3ab24c;
        case 0x3ab250u: goto label_3ab250;
        case 0x3ab254u: goto label_3ab254;
        case 0x3ab258u: goto label_3ab258;
        case 0x3ab25cu: goto label_3ab25c;
        case 0x3ab260u: goto label_3ab260;
        case 0x3ab264u: goto label_3ab264;
        case 0x3ab268u: goto label_3ab268;
        case 0x3ab26cu: goto label_3ab26c;
        case 0x3ab270u: goto label_3ab270;
        case 0x3ab274u: goto label_3ab274;
        case 0x3ab278u: goto label_3ab278;
        case 0x3ab27cu: goto label_3ab27c;
        case 0x3ab280u: goto label_3ab280;
        case 0x3ab284u: goto label_3ab284;
        case 0x3ab288u: goto label_3ab288;
        case 0x3ab28cu: goto label_3ab28c;
        case 0x3ab290u: goto label_3ab290;
        case 0x3ab294u: goto label_3ab294;
        case 0x3ab298u: goto label_3ab298;
        case 0x3ab29cu: goto label_3ab29c;
        case 0x3ab2a0u: goto label_3ab2a0;
        case 0x3ab2a4u: goto label_3ab2a4;
        case 0x3ab2a8u: goto label_3ab2a8;
        case 0x3ab2acu: goto label_3ab2ac;
        case 0x3ab2b0u: goto label_3ab2b0;
        case 0x3ab2b4u: goto label_3ab2b4;
        case 0x3ab2b8u: goto label_3ab2b8;
        case 0x3ab2bcu: goto label_3ab2bc;
        case 0x3ab2c0u: goto label_3ab2c0;
        case 0x3ab2c4u: goto label_3ab2c4;
        case 0x3ab2c8u: goto label_3ab2c8;
        case 0x3ab2ccu: goto label_3ab2cc;
        case 0x3ab2d0u: goto label_3ab2d0;
        case 0x3ab2d4u: goto label_3ab2d4;
        case 0x3ab2d8u: goto label_3ab2d8;
        case 0x3ab2dcu: goto label_3ab2dc;
        case 0x3ab2e0u: goto label_3ab2e0;
        case 0x3ab2e4u: goto label_3ab2e4;
        case 0x3ab2e8u: goto label_3ab2e8;
        case 0x3ab2ecu: goto label_3ab2ec;
        case 0x3ab2f0u: goto label_3ab2f0;
        case 0x3ab2f4u: goto label_3ab2f4;
        case 0x3ab2f8u: goto label_3ab2f8;
        case 0x3ab2fcu: goto label_3ab2fc;
        case 0x3ab300u: goto label_3ab300;
        case 0x3ab304u: goto label_3ab304;
        case 0x3ab308u: goto label_3ab308;
        case 0x3ab30cu: goto label_3ab30c;
        case 0x3ab310u: goto label_3ab310;
        case 0x3ab314u: goto label_3ab314;
        case 0x3ab318u: goto label_3ab318;
        case 0x3ab31cu: goto label_3ab31c;
        default: break;
    }

    ctx->pc = 0x3aac98u;

label_3aac98:
    // 0x3aac98: 0x27bdfea0  addiu       $sp, $sp, -0x160
    ctx->pc = 0x3aac98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966944));
label_3aac9c:
    // 0x3aac9c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3aac9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3aaca0:
    // 0x3aaca0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3aaca0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3aaca4:
    // 0x3aaca4: 0xafa400a0  sw          $a0, 0xA0($sp)
    ctx->pc = 0x3aaca4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 4));
label_3aaca8:
    // 0x3aaca8: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x3aaca8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_3aacac:
    // 0x3aacac: 0x7fb600f0  sq          $s6, 0xF0($sp)
    ctx->pc = 0x3aacacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 22));
label_3aacb0:
    // 0x3aacb0: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x3aacb0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3aacb4:
    // 0x3aacb4: 0x7fb00150  sq          $s0, 0x150($sp)
    ctx->pc = 0x3aacb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 16));
label_3aacb8:
    // 0x3aacb8: 0x26c20024  addiu       $v0, $s6, 0x24
    ctx->pc = 0x3aacb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 36));
label_3aacbc:
    // 0x3aacbc: 0xafa600a4  sw          $a2, 0xA4($sp)
    ctx->pc = 0x3aacbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 6));
label_3aacc0:
    // 0x3aacc0: 0x7fb10140  sq          $s1, 0x140($sp)
    ctx->pc = 0x3aacc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 17));
label_3aacc4:
    // 0x3aacc4: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x3aacc4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3aacc8:
    // 0x3aacc8: 0x7fb20130  sq          $s2, 0x130($sp)
    ctx->pc = 0x3aacc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 18));
label_3aaccc:
    // 0x3aaccc: 0x7fb30120  sq          $s3, 0x120($sp)
    ctx->pc = 0x3aacccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 19));
label_3aacd0:
    // 0x3aacd0: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x3aacd0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_3aacd4:
    // 0x3aacd4: 0x7fb700e0  sq          $s7, 0xE0($sp)
    ctx->pc = 0x3aacd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 23));
label_3aacd8:
    // 0x3aacd8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3aacd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3aacdc:
    // 0x3aacdc: 0x7fbe00d0  sq          $fp, 0xD0($sp)
    ctx->pc = 0x3aacdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 30));
label_3aace0:
    // 0x3aace0: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x3aace0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3aace4:
    // 0x3aace4: 0x7fb40110  sq          $s4, 0x110($sp)
    ctx->pc = 0x3aace4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 20));
label_3aace8:
    // 0x3aace8: 0x7fb50100  sq          $s5, 0x100($sp)
    ctx->pc = 0x3aace8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 21));
label_3aacec:
    // 0x3aacec: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x3aacecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
label_3aacf0:
    // 0x3aacf0: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x3aacf0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
label_3aacf4:
    // 0x3aacf4: 0xe6c00004  swc1        $f0, 0x4($s6)
    ctx->pc = 0x3aacf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 4), bits); }
label_3aacf8:
    // 0x3aacf8: 0xaed00000  sw          $s0, 0x0($s6)
    ctx->pc = 0x3aacf8u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 16));
label_3aacfc:
    // 0x3aacfc: 0xaec00008  sw          $zero, 0x8($s6)
    ctx->pc = 0x3aacfcu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 8), GPR_U32(ctx, 0));
label_3aad00:
    // 0x3aad00: 0xaec0000c  sw          $zero, 0xC($s6)
    ctx->pc = 0x3aad00u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 12), GPR_U32(ctx, 0));
label_3aad04:
    // 0x3aad04: 0xc0f0a5a  jal         func_3C2968
label_3aad08:
    if (ctx->pc == 0x3AAD08u) {
        ctx->pc = 0x3AAD08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AAD04u;
        // 0x3aad08: 0x8fa600a4  lw          $a2, 0xA4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AAD0Cu;
        goto label_3aad0c;
    }
    ctx->pc = 0x3AAD04u;
    SET_GPR_U32(ctx, 31, 0x3AAD0Cu);
    ctx->pc = 0x3AAD08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AAD04u;
    // 0x3aad08: 0x8fa600a4  lw          $a2, 0xA4($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C2968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2968u, 0x3AAD04u, 0x3AAD0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AAD0Cu;
label_3aad0c:
    // 0x3aad0c: 0x8ec40130  lw          $a0, 0x130($s6)
    ctx->pc = 0x3aad0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 304)));
label_3aad10:
    // 0x3aad10: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x3aad10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_3aad14:
    // 0x3aad14: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x3aad14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_3aad18:
    // 0x3aad18: 0x3c060003  lui         $a2, 0x3
    ctx->pc = 0x3aad18u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)3 << 16));
label_3aad1c:
    // 0x3aad1c: 0x44200a  movz        $a0, $v0, $a0
    ctx->pc = 0x3aad1cu;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
label_3aad20:
    // 0x3aad20: 0x2473ce80  addiu       $s3, $v1, -0x3180
    ctx->pc = 0x3aad20u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954624));
label_3aad24:
    // 0x3aad24: 0xafa400a8  sw          $a0, 0xA8($sp)
    ctx->pc = 0x3aad24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 4));
label_3aad28:
    // 0x3aad28: 0x34c60190  ori         $a2, $a2, 0x190
    ctx->pc = 0x3aad28u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)400);
label_3aad2c:
    // 0x3aad2c: 0x8ec40134  lw          $a0, 0x134($s6)
    ctx->pc = 0x3aad2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 308)));
label_3aad30:
    // 0x3aad30: 0x8fa500a8  lw          $a1, 0xA8($sp)
    ctx->pc = 0x3aad30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_3aad34:
    // 0x3aad34: 0xc103722  jal         func_40DC88
label_3aad38:
    if (ctx->pc == 0x3AAD38u) {
        ctx->pc = 0x3AAD38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AAD34u;
        // 0x3aad38: 0x8e7e0d74  lw          $fp, 0xD74($s3) (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3444)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AAD3Cu;
        goto label_3aad3c;
    }
    ctx->pc = 0x3AAD34u;
    SET_GPR_U32(ctx, 31, 0x3AAD3Cu);
    ctx->pc = 0x3AAD38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AAD34u;
    // 0x3aad38: 0x8e7e0d74  lw          $fp, 0xD74($s3) (Delay Slot)
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3444)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DC88u, 0x3AAD34u, 0x3AAD3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AAD3Cu;
label_3aad3c:
    // 0x3aad3c: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x3aad3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_3aad40:
    // 0x3aad40: 0x8ec40134  lw          $a0, 0x134($s6)
    ctx->pc = 0x3aad40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 308)));
label_3aad44:
    // 0x3aad44: 0xc1036d2  jal         func_40DB48
label_3aad48:
    if (ctx->pc == 0x3AAD48u) {
        ctx->pc = 0x3AAD48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AAD44u;
        // 0x3aad48: 0x2471e880  addiu       $s1, $v1, -0x1780 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961280));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AAD4Cu;
        goto label_3aad4c;
    }
    ctx->pc = 0x3AAD44u;
    SET_GPR_U32(ctx, 31, 0x3AAD4Cu);
    ctx->pc = 0x3AAD48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AAD44u;
    // 0x3aad48: 0x2471e880  addiu       $s1, $v1, -0x1780 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB48u, 0x3AAD44u, 0x3AAD4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AAD4Cu;
label_3aad4c:
    // 0x3aad4c: 0xafa200b4  sw          $v0, 0xB4($sp)
    ctx->pc = 0x3aad4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 2));
label_3aad50:
    // 0x3aad50: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3aad50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3aad54:
    // 0x3aad54: 0xafa000ac  sw          $zero, 0xAC($sp)
    ctx->pc = 0x3aad54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 0));
label_3aad58:
    // 0x3aad58: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3aad58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3aad5c:
    // 0x3aad5c: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x3aad5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_3aad60:
    // 0x3aad60: 0xc0bb7e6  jal         func_2EDF98
label_3aad64:
    if (ctx->pc == 0x3AAD64u) {
        ctx->pc = 0x3AAD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AAD60u;
        // 0x3aad64: 0x23140  sll         $a2, $v0, 5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AAD68u;
        goto label_3aad68;
    }
    ctx->pc = 0x3AAD60u;
    SET_GPR_U32(ctx, 31, 0x3AAD68u);
    ctx->pc = 0x3AAD64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AAD60u;
    // 0x3aad64: 0x23140  sll         $a2, $v0, 5 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF98u, 0x3AAD60u, 0x3AAD68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AAD68u;
label_3aad68:
    // 0x3aad68: 0x3c050061  lui         $a1, 0x61
    ctx->pc = 0x3aad68u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)97 << 16));
label_3aad6c:
    // 0x3aad6c: 0x8e220104  lw          $v0, 0x104($s1)
    ctx->pc = 0x3aad6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
label_3aad70:
    // 0x3aad70: 0x24a59a50  addiu       $a1, $a1, -0x65B0
    ctx->pc = 0x3aad70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941264));
label_3aad74:
    // 0x3aad74: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3aad74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3aad78:
    // 0x3aad78: 0x40f809  jalr        $v0
label_3aad7c:
    if (ctx->pc == 0x3AAD7Cu) {
        ctx->pc = 0x3AAD7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AAD78u;
        // 0x3aad7c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AAD80u;
        goto label_3aad80;
    }
    ctx->pc = 0x3AAD78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3AAD80u);
        ctx->pc = 0x3AAD7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AAD78u;
        // 0x3aad7c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AAD78u, 0x3AAD80u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3AAD80u;
label_3aad80:
    // 0x3aad80: 0x14500149  bne         $v0, $s0, . + 4 + (0x149 << 2)
label_3aad84:
    if (ctx->pc == 0x3AAD84u) {
        ctx->pc = 0x3AAD84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AAD80u;
        // 0x3aad84: 0x8fa500a0  lw          $a1, 0xA0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AAD88u;
        goto label_3aad88;
    }
    ctx->pc = 0x3AAD80u;
    {
        const bool branch_taken_0x3aad80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x3AAD84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AAD80u;
        // 0x3aad84: 0x8fa500a0  lw          $a1, 0xA0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aad80) {
            ctx->pc = 0x3AB2A8u;
            goto label_3ab2a8;
        }
    }
    ctx->pc = 0x3AAD88u;
label_3aad88:
    // 0x3aad88: 0x1000013f  b           . + 4 + (0x13F << 2)
label_3aad8c:
    if (ctx->pc == 0x3AAD8Cu) {
        ctx->pc = 0x3AAD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AAD88u;
        // 0x3aad8c: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AAD90u;
        goto label_3aad90;
    }
    ctx->pc = 0x3AAD88u;
    {
        const bool branch_taken_0x3aad88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AAD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AAD88u;
        // 0x3aad8c: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aad88) {
            ctx->pc = 0x3AB288u;
            goto label_3ab288;
        }
    }
    ctx->pc = 0x3AAD90u;
label_3aad90:
    // 0x3aad90: 0x16a00069  bnez        $s5, . + 4 + (0x69 << 2)
label_3aad94:
    if (ctx->pc == 0x3AAD94u) {
        ctx->pc = 0x3AAD94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AAD90u;
        // 0x3aad94: 0x3c050062  lui         $a1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AAD98u;
        goto label_3aad98;
    }
    ctx->pc = 0x3AAD90u;
    {
        const bool branch_taken_0x3aad90 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AAD94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AAD90u;
        // 0x3aad94: 0x3c050062  lui         $a1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aad90) {
            ctx->pc = 0x3AAF38u;
            goto label_3aaf38;
        }
    }
    ctx->pc = 0x3AAD98u;
label_3aad98:
    // 0x3aad98: 0x82430001  lb          $v1, 0x1($s2)
    ctx->pc = 0x3aad98u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
label_3aad9c:
    // 0x3aad9c: 0x30620080  andi        $v0, $v1, 0x80
    ctx->pc = 0x3aad9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
label_3aada0:
    // 0x3aada0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_3aada4:
    if (ctx->pc == 0x3AADA4u) {
        ctx->pc = 0x3AADA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AADA0u;
        // 0x3aada4: 0x92440001  lbu         $a0, 0x1($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AADA8u;
        goto label_3aada8;
    }
    ctx->pc = 0x3AADA0u;
    {
        const bool branch_taken_0x3aada0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AADA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AADA0u;
        // 0x3aada4: 0x92440001  lbu         $a0, 0x1($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aada0) {
            ctx->pc = 0x3AADB4u;
            goto label_3aadb4;
        }
    }
    ctx->pc = 0x3AADA8u;
label_3aada8:
    // 0x3aada8: 0x60a82d  daddu       $s5, $v1, $zero
    ctx->pc = 0x3aada8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_3aadac:
    // 0x3aadac: 0x1000005b  b           . + 4 + (0x5B << 2)
label_3aadb0:
    if (ctx->pc == 0x3AADB0u) {
        ctx->pc = 0x3AADB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AADACu;
        // 0x3aadb0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AADB4u;
        goto label_3aadb4;
    }
    ctx->pc = 0x3AADACu;
    {
        const bool branch_taken_0x3aadac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AADB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AADACu;
        // 0x3aadb0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aadac) {
            ctx->pc = 0x3AAF1Cu;
            goto label_3aaf1c;
        }
    }
    ctx->pc = 0x3AADB4u;
label_3aadb4:
    // 0x3aadb4: 0x306200e0  andi        $v0, $v1, 0xE0
    ctx->pc = 0x3aadb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)224);
label_3aadb8:
    // 0x3aadb8: 0x240500c0  addiu       $a1, $zero, 0xC0
    ctx->pc = 0x3aadb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
label_3aadbc:
    // 0x3aadbc: 0x14450008  bne         $v0, $a1, . + 4 + (0x8 << 2)
label_3aadc0:
    if (ctx->pc == 0x3AADC0u) {
        ctx->pc = 0x3AADC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AADBCu;
        // 0x3aadc0: 0x306200f0  andi        $v0, $v1, 0xF0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)240);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AADC4u;
        goto label_3aadc4;
    }
    ctx->pc = 0x3AADBCu;
    {
        const bool branch_taken_0x3aadbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x3AADC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AADBCu;
        // 0x3aadc0: 0x306200f0  andi        $v0, $v1, 0xF0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)240);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aadbc) {
            ctx->pc = 0x3AADE0u;
            goto label_3aade0;
        }
    }
    ctx->pc = 0x3AADC4u;
label_3aadc4:
    // 0x3aadc4: 0x92430002  lbu         $v1, 0x2($s2)
    ctx->pc = 0x3aadc4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
label_3aadc8:
    // 0x3aadc8: 0x3082001f  andi        $v0, $a0, 0x1F
    ctx->pc = 0x3aadc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31);
label_3aadcc:
    // 0x3aadcc: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x3aadccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_3aadd0:
    // 0x3aadd0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3aadd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3aadd4:
    // 0x3aadd4: 0x3063003f  andi        $v1, $v1, 0x3F
    ctx->pc = 0x3aadd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
label_3aadd8:
    // 0x3aadd8: 0x10000050  b           . + 4 + (0x50 << 2)
label_3aaddc:
    if (ctx->pc == 0x3AADDCu) {
        ctx->pc = 0x3AADDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AADD8u;
        // 0x3aaddc: 0x43a825  or          $s5, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AADE0u;
        goto label_3aade0;
    }
    ctx->pc = 0x3AADD8u;
    {
        const bool branch_taken_0x3aadd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AADDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AADD8u;
        // 0x3aaddc: 0x43a825  or          $s5, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aadd8) {
            ctx->pc = 0x3AAF1Cu;
            goto label_3aaf1c;
        }
    }
    ctx->pc = 0x3AADE0u;
label_3aade0:
    // 0x3aade0: 0x240500e0  addiu       $a1, $zero, 0xE0
    ctx->pc = 0x3aade0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
label_3aade4:
    // 0x3aade4: 0x1445000c  bne         $v0, $a1, . + 4 + (0xC << 2)
label_3aade8:
    if (ctx->pc == 0x3AADE8u) {
        ctx->pc = 0x3AADE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AADE4u;
        // 0x3aade8: 0x306200f8  andi        $v0, $v1, 0xF8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)248);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AADECu;
        goto label_3aadec;
    }
    ctx->pc = 0x3AADE4u;
    {
        const bool branch_taken_0x3aade4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x3AADE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AADE4u;
        // 0x3aade8: 0x306200f8  andi        $v0, $v1, 0xF8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)248);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aade4) {
            ctx->pc = 0x3AAE18u;
            goto label_3aae18;
        }
    }
    ctx->pc = 0x3AADECu;
label_3aadec:
    // 0x3aadec: 0x92420002  lbu         $v0, 0x2($s2)
    ctx->pc = 0x3aadecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
label_3aadf0:
    // 0x3aadf0: 0x3083000f  andi        $v1, $a0, 0xF
    ctx->pc = 0x3aadf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
label_3aadf4:
    // 0x3aadf4: 0x92440003  lbu         $a0, 0x3($s2)
    ctx->pc = 0x3aadf4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
label_3aadf8:
    // 0x3aadf8: 0x31b00  sll         $v1, $v1, 12
    ctx->pc = 0x3aadf8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 12));
label_3aadfc:
    // 0x3aadfc: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x3aadfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
label_3aae00:
    // 0x3aae00: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x3aae00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3aae04:
    // 0x3aae04: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x3aae04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_3aae08:
    // 0x3aae08: 0x3084003f  andi        $a0, $a0, 0x3F
    ctx->pc = 0x3aae08u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)63);
label_3aae0c:
    // 0x3aae0c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3aae0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_3aae10:
    // 0x3aae10: 0x10000042  b           . + 4 + (0x42 << 2)
label_3aae14:
    if (ctx->pc == 0x3AAE14u) {
        ctx->pc = 0x3AAE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AAE10u;
        // 0x3aae14: 0x64a825  or          $s5, $v1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AAE18u;
        goto label_3aae18;
    }
    ctx->pc = 0x3AAE10u;
    {
        const bool branch_taken_0x3aae10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AAE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AAE10u;
        // 0x3aae14: 0x64a825  or          $s5, $v1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aae10) {
            ctx->pc = 0x3AAF1Cu;
            goto label_3aaf1c;
        }
    }
    ctx->pc = 0x3AAE18u;
label_3aae18:
    // 0x3aae18: 0x240500f0  addiu       $a1, $zero, 0xF0
    ctx->pc = 0x3aae18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
label_3aae1c:
    // 0x3aae1c: 0x14450010  bne         $v0, $a1, . + 4 + (0x10 << 2)
label_3aae20:
    if (ctx->pc == 0x3AAE20u) {
        ctx->pc = 0x3AAE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AAE1Cu;
        // 0x3aae20: 0x306200fc  andi        $v0, $v1, 0xFC (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)252);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AAE24u;
        goto label_3aae24;
    }
    ctx->pc = 0x3AAE1Cu;
    {
        const bool branch_taken_0x3aae1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x3AAE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AAE1Cu;
        // 0x3aae20: 0x306200fc  andi        $v0, $v1, 0xFC (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)252);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aae1c) {
            ctx->pc = 0x3AAE60u;
            goto label_3aae60;
        }
    }
    ctx->pc = 0x3AAE24u;
label_3aae24:
    // 0x3aae24: 0x30820007  andi        $v0, $a0, 0x7
    ctx->pc = 0x3aae24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)7);
label_3aae28:
    // 0x3aae28: 0x92430002  lbu         $v1, 0x2($s2)
    ctx->pc = 0x3aae28u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
label_3aae2c:
    // 0x3aae2c: 0x92440003  lbu         $a0, 0x3($s2)
    ctx->pc = 0x3aae2cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
label_3aae30:
    // 0x3aae30: 0x21480  sll         $v0, $v0, 18
    ctx->pc = 0x3aae30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 18));
label_3aae34:
    // 0x3aae34: 0x3063003f  andi        $v1, $v1, 0x3F
    ctx->pc = 0x3aae34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
label_3aae38:
    // 0x3aae38: 0x92450004  lbu         $a1, 0x4($s2)
    ctx->pc = 0x3aae38u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 4)));
label_3aae3c:
    // 0x3aae3c: 0x31b00  sll         $v1, $v1, 12
    ctx->pc = 0x3aae3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 12));
label_3aae40:
    // 0x3aae40: 0x3084003f  andi        $a0, $a0, 0x3F
    ctx->pc = 0x3aae40u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)63);
label_3aae44:
    // 0x3aae44: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3aae44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_3aae48:
    // 0x3aae48: 0x42180  sll         $a0, $a0, 6
    ctx->pc = 0x3aae48u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
label_3aae4c:
    // 0x3aae4c: 0x30a5003f  andi        $a1, $a1, 0x3F
    ctx->pc = 0x3aae4cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)63);
label_3aae50:
    // 0x3aae50: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x3aae50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_3aae54:
    // 0x3aae54: 0x45a825  or          $s5, $v0, $a1
    ctx->pc = 0x3aae54u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
label_3aae58:
    // 0x3aae58: 0x10000030  b           . + 4 + (0x30 << 2)
label_3aae5c:
    if (ctx->pc == 0x3AAE5Cu) {
        ctx->pc = 0x3AAE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AAE58u;
        // 0x3aae5c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AAE60u;
        goto label_3aae60;
    }
    ctx->pc = 0x3AAE58u;
    {
        const bool branch_taken_0x3aae58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AAE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AAE58u;
        // 0x3aae5c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aae58) {
            ctx->pc = 0x3AAF1Cu;
            goto label_3aaf1c;
        }
    }
    ctx->pc = 0x3AAE60u;
label_3aae60:
    // 0x3aae60: 0x240500f8  addiu       $a1, $zero, 0xF8
    ctx->pc = 0x3aae60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 248));
label_3aae64:
    // 0x3aae64: 0x14450014  bne         $v0, $a1, . + 4 + (0x14 << 2)
label_3aae68:
    if (ctx->pc == 0x3AAE68u) {
        ctx->pc = 0x3AAE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AAE64u;
        // 0x3aae68: 0x306200fe  andi        $v0, $v1, 0xFE (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)254);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AAE6Cu;
        goto label_3aae6c;
    }
    ctx->pc = 0x3AAE64u;
    {
        const bool branch_taken_0x3aae64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x3AAE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AAE64u;
        // 0x3aae68: 0x306200fe  andi        $v0, $v1, 0xFE (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)254);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aae64) {
            ctx->pc = 0x3AAEB8u;
            goto label_3aaeb8;
        }
    }
    ctx->pc = 0x3AAE6Cu;
label_3aae6c:
    // 0x3aae6c: 0x92430002  lbu         $v1, 0x2($s2)
    ctx->pc = 0x3aae6cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
label_3aae70:
    // 0x3aae70: 0x30820003  andi        $v0, $a0, 0x3
    ctx->pc = 0x3aae70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
label_3aae74:
    // 0x3aae74: 0x92450003  lbu         $a1, 0x3($s2)
    ctx->pc = 0x3aae74u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
label_3aae78:
    // 0x3aae78: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x3aae78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
label_3aae7c:
    // 0x3aae7c: 0x3063003f  andi        $v1, $v1, 0x3F
    ctx->pc = 0x3aae7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
label_3aae80:
    // 0x3aae80: 0x92440004  lbu         $a0, 0x4($s2)
    ctx->pc = 0x3aae80u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 4)));
label_3aae84:
    // 0x3aae84: 0x31c80  sll         $v1, $v1, 18
    ctx->pc = 0x3aae84u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 18));
label_3aae88:
    // 0x3aae88: 0x30a5003f  andi        $a1, $a1, 0x3F
    ctx->pc = 0x3aae88u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)63);
label_3aae8c:
    // 0x3aae8c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3aae8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_3aae90:
    // 0x3aae90: 0x52b00  sll         $a1, $a1, 12
    ctx->pc = 0x3aae90u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 12));
label_3aae94:
    // 0x3aae94: 0x3084003f  andi        $a0, $a0, 0x3F
    ctx->pc = 0x3aae94u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)63);
label_3aae98:
    // 0x3aae98: 0x92430005  lbu         $v1, 0x5($s2)
    ctx->pc = 0x3aae98u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 5)));
label_3aae9c:
    // 0x3aae9c: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x3aae9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
label_3aaea0:
    // 0x3aaea0: 0x42180  sll         $a0, $a0, 6
    ctx->pc = 0x3aaea0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
label_3aaea4:
    // 0x3aaea4: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x3aaea4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_3aaea8:
    // 0x3aaea8: 0x3063003f  andi        $v1, $v1, 0x3F
    ctx->pc = 0x3aaea8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
label_3aaeac:
    // 0x3aaeac: 0x43a825  or          $s5, $v0, $v1
    ctx->pc = 0x3aaeacu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_3aaeb0:
    // 0x3aaeb0: 0x1000001a  b           . + 4 + (0x1A << 2)
label_3aaeb4:
    if (ctx->pc == 0x3AAEB4u) {
        ctx->pc = 0x3AAEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AAEB0u;
        // 0x3aaeb4: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AAEB8u;
        goto label_3aaeb8;
    }
    ctx->pc = 0x3AAEB0u;
    {
        const bool branch_taken_0x3aaeb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AAEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AAEB0u;
        // 0x3aaeb4: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aaeb0) {
            ctx->pc = 0x3AAF1Cu;
            goto label_3aaf1c;
        }
    }
    ctx->pc = 0x3AAEB8u;
label_3aaeb8:
    // 0x3aaeb8: 0x240300fc  addiu       $v1, $zero, 0xFC
    ctx->pc = 0x3aaeb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 252));
label_3aaebc:
    // 0x3aaebc: 0x54430017  bnel        $v0, $v1, . + 4 + (0x17 << 2)
label_3aaec0:
    if (ctx->pc == 0x3AAEC0u) {
        ctx->pc = 0x3AAEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AAEBCu;
        // 0x3aaec0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AAEC4u;
        goto label_3aaec4;
    }
    ctx->pc = 0x3AAEBCu;
    {
        const bool branch_taken_0x3aaebc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x3aaebc) {
            ctx->pc = 0x3AAEC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AAEBCu;
            // 0x3aaec0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AAF1Cu;
            goto label_3aaf1c;
        }
    }
    ctx->pc = 0x3AAEC4u;
label_3aaec4:
    // 0x3aaec4: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x3aaec4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_3aaec8:
    // 0x3aaec8: 0x92430002  lbu         $v1, 0x2($s2)
    ctx->pc = 0x3aaec8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
label_3aaecc:
    // 0x3aaecc: 0x92440003  lbu         $a0, 0x3($s2)
    ctx->pc = 0x3aaeccu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
label_3aaed0:
    // 0x3aaed0: 0x21780  sll         $v0, $v0, 30
    ctx->pc = 0x3aaed0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 30));
label_3aaed4:
    // 0x3aaed4: 0x3063003f  andi        $v1, $v1, 0x3F
    ctx->pc = 0x3aaed4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
label_3aaed8:
    // 0x3aaed8: 0x92460004  lbu         $a2, 0x4($s2)
    ctx->pc = 0x3aaed8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 4)));
label_3aaedc:
    // 0x3aaedc: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x3aaedcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
label_3aaee0:
    // 0x3aaee0: 0x3084003f  andi        $a0, $a0, 0x3F
    ctx->pc = 0x3aaee0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)63);
label_3aaee4:
    // 0x3aaee4: 0x92450005  lbu         $a1, 0x5($s2)
    ctx->pc = 0x3aaee4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 5)));
label_3aaee8:
    // 0x3aaee8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3aaee8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_3aaeec:
    // 0x3aaeec: 0x42480  sll         $a0, $a0, 18
    ctx->pc = 0x3aaeecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 18));
label_3aaef0:
    // 0x3aaef0: 0x30c6003f  andi        $a2, $a2, 0x3F
    ctx->pc = 0x3aaef0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)63);
label_3aaef4:
    // 0x3aaef4: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x3aaef4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_3aaef8:
    // 0x3aaef8: 0x63300  sll         $a2, $a2, 12
    ctx->pc = 0x3aaef8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 12));
label_3aaefc:
    // 0x3aaefc: 0x30a5003f  andi        $a1, $a1, 0x3F
    ctx->pc = 0x3aaefcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)63);
label_3aaf00:
    // 0x3aaf00: 0x92430006  lbu         $v1, 0x6($s2)
    ctx->pc = 0x3aaf00u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 6)));
label_3aaf04:
    // 0x3aaf04: 0x52980  sll         $a1, $a1, 6
    ctx->pc = 0x3aaf04u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
label_3aaf08:
    // 0x3aaf08: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x3aaf08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
label_3aaf0c:
    // 0x3aaf0c: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x3aaf0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
label_3aaf10:
    // 0x3aaf10: 0x3063003f  andi        $v1, $v1, 0x3F
    ctx->pc = 0x3aaf10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
label_3aaf14:
    // 0x3aaf14: 0x43a825  or          $s5, $v0, $v1
    ctx->pc = 0x3aaf14u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_3aaf18:
    // 0x3aaf18: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x3aaf18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_3aaf1c:
    // 0x3aaf1c: 0x4a00004  bltz        $a1, . + 4 + (0x4 << 2)
label_3aaf20:
    if (ctx->pc == 0x3AAF20u) {
        ctx->pc = 0x3AAF20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AAF1Cu;
        // 0x3aaf20: 0x3404ffff  ori         $a0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AAF24u;
        goto label_3aaf24;
    }
    ctx->pc = 0x3AAF1Cu;
    {
        const bool branch_taken_0x3aaf1c = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x3AAF20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AAF1Cu;
        // 0x3aaf20: 0x3404ffff  ori         $a0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aaf1c) {
            ctx->pc = 0x3AAF30u;
            goto label_3aaf30;
        }
    }
    ctx->pc = 0x3AAF24u;
label_3aaf24:
    // 0x3aaf24: 0x95102a  slt         $v0, $a0, $s5
    ctx->pc = 0x3aaf24u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
label_3aaf28:
    // 0x3aaf28: 0x104000d8  beqz        $v0, . + 4 + (0xD8 << 2)
label_3aaf2c:
    if (ctx->pc == 0x3AAF2Cu) {
        ctx->pc = 0x3AAF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AAF28u;
        // 0x3aaf2c: 0x8fa400a0  lw          $a0, 0xA0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AAF30u;
        goto label_3aaf30;
    }
    ctx->pc = 0x3AAF28u;
    {
        const bool branch_taken_0x3aaf28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AAF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AAF28u;
        // 0x3aaf2c: 0x8fa400a0  lw          $a0, 0xA0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aaf28) {
            ctx->pc = 0x3AB28Cu;
            goto label_3ab28c;
        }
    }
    ctx->pc = 0x3AAF30u;
label_3aaf30:
    // 0x3aaf30: 0x100000d5  b           . + 4 + (0xD5 << 2)
label_3aaf34:
    if (ctx->pc == 0x3AAF34u) {
        ctx->pc = 0x3AAF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AAF30u;
        // 0x3aaf34: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AAF38u;
        goto label_3aaf38;
    }
    ctx->pc = 0x3AAF30u;
    {
        const bool branch_taken_0x3aaf30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AAF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AAF30u;
        // 0x3aaf34: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aaf30) {
            ctx->pc = 0x3AB288u;
            goto label_3ab288;
        }
    }
    ctx->pc = 0x3AAF38u;
label_3aaf38:
    // 0x3aaf38: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x3aaf38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
label_3aaf3c:
    // 0x3aaf3c: 0x24b4e880  addiu       $s4, $a1, -0x1780
    ctx->pc = 0x3aaf3cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961280));
label_3aaf40:
    // 0x3aaf40: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3aaf40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3aaf44:
    // 0x3aaf44: 0x8e8200e8  lw          $v0, 0xE8($s4)
    ctx->pc = 0x3aaf44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 232)));
label_3aaf48:
    // 0x3aaf48: 0x40f809  jalr        $v0
label_3aaf4c:
    if (ctx->pc == 0x3AAF4Cu) {
        ctx->pc = 0x3AAF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AAF48u;
        // 0x3aaf4c: 0x24659a58  addiu       $a1, $v1, -0x65A8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941272));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AAF50u;
        goto label_3aaf50;
    }
    ctx->pc = 0x3AAF48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3AAF50u);
        ctx->pc = 0x3AAF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AAF48u;
        // 0x3aaf4c: 0x24659a58  addiu       $a1, $v1, -0x65A8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AAF48u, 0x3AAF50u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3AAF50u;
label_3aaf50:
    // 0x3aaf50: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_3aaf54:
    if (ctx->pc == 0x3AAF54u) {
        ctx->pc = 0x3AAF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AAF50u;
        // 0x3aaf54: 0x3c030061  lui         $v1, 0x61 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AAF58u;
        goto label_3aaf58;
    }
    ctx->pc = 0x3AAF50u;
    {
        const bool branch_taken_0x3aaf50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AAF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AAF50u;
        // 0x3aaf54: 0x3c030061  lui         $v1, 0x61 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aaf50) {
            ctx->pc = 0x3AAF74u;
            goto label_3aaf74;
        }
    }
    ctx->pc = 0x3AAF58u;
label_3aaf58:
    // 0x3aaf58: 0xc0ec604  jal         func_3B1810
label_3aaf5c:
    if (ctx->pc == 0x3AAF5Cu) {
        ctx->pc = 0x3AAF60u;
        goto label_3aaf60;
    }
    ctx->pc = 0x3AAF58u;
    SET_GPR_U32(ctx, 31, 0x3AAF60u);
    ctx->pc = 0x3B1810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1810u, 0x3AAF58u, 0x3AAF60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AAF60u;
label_3aaf60:
    // 0x3aaf60: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x3aaf60u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3aaf64:
    // 0x3aaf64: 0xc0ec64a  jal         func_3B1928
label_3aaf68:
    if (ctx->pc == 0x3AAF68u) {
        ctx->pc = 0x3AAF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AAF64u;
        // 0x3aaf68: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AAF6Cu;
        goto label_3aaf6c;
    }
    ctx->pc = 0x3AAF64u;
    SET_GPR_U32(ctx, 31, 0x3AAF6Cu);
    ctx->pc = 0x3AAF68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AAF64u;
    // 0x3aaf68: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B1928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1928u, 0x3AAF64u, 0x3AAF6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AAF6Cu;
label_3aaf6c:
    // 0x3aaf6c: 0x100000c7  b           . + 4 + (0xC7 << 2)
label_3aaf70:
    if (ctx->pc == 0x3AAF70u) {
        ctx->pc = 0x3AAF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AAF6Cu;
        // 0x3aaf70: 0x8fa400a0  lw          $a0, 0xA0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AAF74u;
        goto label_3aaf74;
    }
    ctx->pc = 0x3AAF6Cu;
    {
        const bool branch_taken_0x3aaf6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AAF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AAF6Cu;
        // 0x3aaf70: 0x8fa400a0  lw          $a0, 0xA0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aaf6c) {
            ctx->pc = 0x3AB28Cu;
            goto label_3ab28c;
        }
    }
    ctx->pc = 0x3AAF74u;
label_3aaf74:
    // 0x3aaf74: 0x8e8200e8  lw          $v0, 0xE8($s4)
    ctx->pc = 0x3aaf74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 232)));
label_3aaf78:
    // 0x3aaf78: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3aaf78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3aaf7c:
    // 0x3aaf7c: 0x40f809  jalr        $v0
label_3aaf80:
    if (ctx->pc == 0x3AAF80u) {
        ctx->pc = 0x3AAF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AAF7Cu;
        // 0x3aaf80: 0x24659a60  addiu       $a1, $v1, -0x65A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941280));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AAF84u;
        goto label_3aaf84;
    }
    ctx->pc = 0x3AAF7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3AAF84u);
        ctx->pc = 0x3AAF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AAF7Cu;
        // 0x3aaf80: 0x24659a60  addiu       $a1, $v1, -0x65A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941280));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AAF7Cu, 0x3AAF84u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3AAF84u;
label_3aaf84:
    // 0x3aaf84: 0x14400080  bnez        $v0, . + 4 + (0x80 << 2)
label_3aaf88:
    if (ctx->pc == 0x3AAF88u) {
        ctx->pc = 0x3AAF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AAF84u;
        // 0x3aaf88: 0x3c050062  lui         $a1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AAF8Cu;
        goto label_3aaf8c;
    }
    ctx->pc = 0x3AAF84u;
    {
        const bool branch_taken_0x3aaf84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AAF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AAF84u;
        // 0x3aaf88: 0x3c050062  lui         $a1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aaf84) {
            ctx->pc = 0x3AB188u;
            goto label_3ab188;
        }
    }
    ctx->pc = 0x3AAF8Cu;
label_3aaf8c:
    // 0x3aaf8c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x3aaf8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3aaf90:
    // 0x3aaf90: 0xc0ec8dc  jal         func_3B2370
label_3aaf94:
    if (ctx->pc == 0x3AAF94u) {
        ctx->pc = 0x3AAF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AAF90u;
        // 0x3aaf94: 0x24b3ce80  addiu       $s3, $a1, -0x3180 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954624));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AAF98u;
        goto label_3aaf98;
    }
    ctx->pc = 0x3AAF90u;
    SET_GPR_U32(ctx, 31, 0x3AAF98u);
    ctx->pc = 0x3AAF94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AAF90u;
    // 0x3aaf94: 0x24b3ce80  addiu       $s3, $a1, -0x3180 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954624));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B2370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B2370u, 0x3AAF90u, 0x3AAF98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AAF98u;
label_3aaf98:
    // 0x3aaf98: 0x8fa400ac  lw          $a0, 0xAC($sp)
    ctx->pc = 0x3aaf98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
label_3aaf9c:
    // 0x3aaf9c: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x3aaf9cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3aafa0:
    // 0x3aafa0: 0x8fa300ac  lw          $v1, 0xAC($sp)
    ctx->pc = 0x3aafa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
label_3aafa4:
    // 0x3aafa4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3aafa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_3aafa8:
    // 0x3aafa8: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x3aafa8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_3aafac:
    // 0x3aafac: 0xafa400b8  sw          $a0, 0xB8($sp)
    ctx->pc = 0x3aafacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 4));
label_3aafb0:
    // 0x3aafb0: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x3aafb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3aafb4:
    // 0x3aafb4: 0xc0ec68a  jal         func_3B1A28
label_3aafb8:
    if (ctx->pc == 0x3AAFB8u) {
        ctx->pc = 0x3AAFB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AAFB4u;
        // 0x3aafb8: 0xafa300bc  sw          $v1, 0xBC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AAFBCu;
        goto label_3aafbc;
    }
    ctx->pc = 0x3AAFB4u;
    SET_GPR_U32(ctx, 31, 0x3AAFBCu);
    ctx->pc = 0x3AAFB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AAFB4u;
    // 0x3aafb8: 0xafa300bc  sw          $v1, 0xBC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B1A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1A28u, 0x3AAFB4u, 0x3AAFBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AAFBCu;
label_3aafbc:
    // 0x3aafbc: 0x8e640d78  lw          $a0, 0xD78($s3)
    ctx->pc = 0x3aafbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3448)));
label_3aafc0:
    // 0x3aafc0: 0x8fa500ac  lw          $a1, 0xAC($sp)
    ctx->pc = 0x3aafc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
label_3aafc4:
    // 0x3aafc4: 0xa4102a  slt         $v0, $a1, $a0
    ctx->pc = 0x3aafc4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_3aafc8:
    // 0x3aafc8: 0x1440003c  bnez        $v0, . + 4 + (0x3C << 2)
label_3aafcc:
    if (ctx->pc == 0x3AAFCCu) {
        ctx->pc = 0x3AAFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AAFC8u;
        // 0x3aafcc: 0x2aa20080  slti        $v0, $s5, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)128) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AAFD0u;
        goto label_3aafd0;
    }
    ctx->pc = 0x3AAFC8u;
    {
        const bool branch_taken_0x3aafc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AAFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AAFC8u;
        // 0x3aafcc: 0x2aa20080  slti        $v0, $s5, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)128) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aafc8) {
            ctx->pc = 0x3AB0BCu;
            goto label_3ab0bc;
        }
    }
    ctx->pc = 0x3AAFD0u;
label_3aafd0:
    // 0x3aafd0: 0x24900020  addiu       $s0, $a0, 0x20
    ctx->pc = 0x3aafd0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
label_3aafd4:
    // 0x3aafd4: 0x8e820108  lw          $v0, 0x108($s4)
    ctx->pc = 0x3aafd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 264)));
label_3aafd8:
    // 0x3aafd8: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x3aafd8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_3aafdc:
    // 0x3aafdc: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x3aafdcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_3aafe0:
    // 0x3aafe0: 0x40f809  jalr        $v0
label_3aafe4:
    if (ctx->pc == 0x3AAFE4u) {
        ctx->pc = 0x3AAFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AAFE0u;
        // 0x3aafe4: 0x34a50190  ori         $a1, $a1, 0x190 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)400);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AAFE8u;
        goto label_3aafe8;
    }
    ctx->pc = 0x3AAFE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3AAFE8u);
        ctx->pc = 0x3AAFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AAFE0u;
        // 0x3aafe4: 0x34a50190  ori         $a1, $a1, 0x190 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)400);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AAFE0u, 0x3AAFE8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3AAFE8u;
label_3aafe8:
    // 0x3aafe8: 0x8e660d78  lw          $a2, 0xD78($s3)
    ctx->pc = 0x3aafe8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3448)));
label_3aafec:
    // 0x3aafec: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3aafecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3aaff0:
    // 0x3aaff0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3aaff0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3aaff4:
    // 0x3aaff4: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x3aaff4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_3aaff8:
    // 0x3aaff8: 0xc0bb778  jal         func_2EDDE0
label_3aaffc:
    if (ctx->pc == 0x3AAFFCu) {
        ctx->pc = 0x3AAFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AAFF8u;
        // 0x3aaffc: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AB000u;
        goto label_3ab000;
    }
    ctx->pc = 0x3AAFF8u;
    SET_GPR_U32(ctx, 31, 0x3AB000u);
    ctx->pc = 0x3AAFFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AAFF8u;
    // 0x3aaffc: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDDE0u, 0x3AAFF8u, 0x3AB000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AB000u;
label_3ab000:
    // 0x3ab000: 0x8e640d78  lw          $a0, 0xD78($s3)
    ctx->pc = 0x3ab000u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3448)));
label_3ab004:
    // 0x3ab004: 0x90102a  slt         $v0, $a0, $s0
    ctx->pc = 0x3ab004u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_3ab008:
    // 0x3ab008: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_3ab00c:
    if (ctx->pc == 0x3AB00Cu) {
        ctx->pc = 0x3AB00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB008u;
        // 0x3ab00c: 0x41880  sll         $v1, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AB010u;
        goto label_3ab010;
    }
    ctx->pc = 0x3AB008u;
    {
        const bool branch_taken_0x3ab008 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AB00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB008u;
        // 0x3ab00c: 0x41880  sll         $v1, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab008) {
            ctx->pc = 0x3AB08Cu;
            goto label_3ab08c;
        }
    }
    ctx->pc = 0x3AB010u;
label_3ab010:
    // 0x3ab010: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x3ab010u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3ab014:
    // 0x3ab014: 0x2042023  subu        $a0, $s0, $a0
    ctx->pc = 0x3ab014u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
label_3ab018:
    // 0x3ab018: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x3ab018u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_3ab01c:
    // 0x3ab01c: 0x41023  negu        $v0, $a0
    ctx->pc = 0x3ab01cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
label_3ab020:
    // 0x3ab020: 0x30450003  andi        $a1, $v0, 0x3
    ctx->pc = 0x3ab020u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_3ab024:
    // 0x3ab024: 0x10a00010  beqz        $a1, . + 4 + (0x10 << 2)
label_3ab028:
    if (ctx->pc == 0x3AB028u) {
        ctx->pc = 0x3AB028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB024u;
        // 0x3ab028: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AB02Cu;
        goto label_3ab02c;
    }
    ctx->pc = 0x3AB024u;
    {
        const bool branch_taken_0x3ab024 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AB028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB024u;
        // 0x3ab028: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab024) {
            ctx->pc = 0x3AB068u;
            goto label_3ab068;
        }
    }
    ctx->pc = 0x3AB02Cu;
label_3ab02c:
    // 0x3ab02c: 0x28a20003  slti        $v0, $a1, 0x3
    ctx->pc = 0x3ab02cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
label_3ab030:
    // 0x3ab030: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_3ab034:
    if (ctx->pc == 0x3AB034u) {
        ctx->pc = 0x3AB034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB030u;
        // 0x3ab034: 0x28a20002  slti        $v0, $a1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AB038u;
        goto label_3ab038;
    }
    ctx->pc = 0x3AB030u;
    {
        const bool branch_taken_0x3ab030 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AB034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB030u;
        // 0x3ab034: 0x28a20002  slti        $v0, $a1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab030) {
            ctx->pc = 0x3AB058u;
            goto label_3ab058;
        }
    }
    ctx->pc = 0x3AB038u;
label_3ab038:
    // 0x3ab038: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_3ab03c:
    if (ctx->pc == 0x3AB03Cu) {
        ctx->pc = 0x3AB03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB038u;
        // 0x3ab03c: 0xacc70000  sw          $a3, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AB040u;
        goto label_3ab040;
    }
    ctx->pc = 0x3AB038u;
    {
        const bool branch_taken_0x3ab038 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ab038) {
            ctx->pc = 0x3AB03Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AB038u;
            // 0x3ab03c: 0xacc70000  sw          $a3, 0x0($a2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AB050u;
            goto label_3ab050;
        }
    }
    ctx->pc = 0x3AB040u;
label_3ab040:
    // 0x3ab040: 0xac670000  sw          $a3, 0x0($v1)
    ctx->pc = 0x3ab040u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 7));
label_3ab044:
    // 0x3ab044: 0x24660004  addiu       $a2, $v1, 0x4
    ctx->pc = 0x3ab044u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_3ab048:
    // 0x3ab048: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x3ab048u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_3ab04c:
    // 0x3ab04c: 0xacc70000  sw          $a3, 0x0($a2)
    ctx->pc = 0x3ab04cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 7));
label_3ab050:
    // 0x3ab050: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x3ab050u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_3ab054:
    // 0x3ab054: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x3ab054u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_3ab058:
    // 0x3ab058: 0xacc70000  sw          $a3, 0x0($a2)
    ctx->pc = 0x3ab058u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 7));
label_3ab05c:
    // 0x3ab05c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x3ab05cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_3ab060:
    // 0x3ab060: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
label_3ab064:
    if (ctx->pc == 0x3AB064u) {
        ctx->pc = 0x3AB064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB060u;
        // 0x3ab064: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AB068u;
        goto label_3ab068;
    }
    ctx->pc = 0x3AB060u;
    {
        const bool branch_taken_0x3ab060 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AB064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB060u;
        // 0x3ab064: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab060) {
            ctx->pc = 0x3AB08Cu;
            goto label_3ab08c;
        }
    }
    ctx->pc = 0x3AB068u;
label_3ab068:
    // 0x3ab068: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x3ab068u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3ab06c:
    // 0x3ab06c: 0x0  nop
    ctx->pc = 0x3ab06cu;
    // NOP
label_3ab070:
    // 0x3ab070: 0xac470000  sw          $a3, 0x0($v0)
    ctx->pc = 0x3ab070u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 7));
label_3ab074:
    // 0x3ab074: 0x2484fffc  addiu       $a0, $a0, -0x4
    ctx->pc = 0x3ab074u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
label_3ab078:
    // 0x3ab078: 0xac470004  sw          $a3, 0x4($v0)
    ctx->pc = 0x3ab078u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 7));
label_3ab07c:
    // 0x3ab07c: 0xac470008  sw          $a3, 0x8($v0)
    ctx->pc = 0x3ab07cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 7));
label_3ab080:
    // 0x3ab080: 0xac47000c  sw          $a3, 0xC($v0)
    ctx->pc = 0x3ab080u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 7));
label_3ab084:
    // 0x3ab084: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
label_3ab088:
    if (ctx->pc == 0x3AB088u) {
        ctx->pc = 0x3AB088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB084u;
        // 0x3ab088: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AB08Cu;
        goto label_3ab08c;
    }
    ctx->pc = 0x3AB084u;
    {
        const bool branch_taken_0x3ab084 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AB088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB084u;
        // 0x3ab088: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab084) {
            ctx->pc = 0x3AB070u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ab070;
        }
    }
    ctx->pc = 0x3AB08Cu;
label_3ab08c:
    // 0x3ab08c: 0x13c00005  beqz        $fp, . + 4 + (0x5 << 2)
label_3ab090:
    if (ctx->pc == 0x3AB090u) {
        ctx->pc = 0x3AB090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB08Cu;
        // 0x3ab090: 0x3c030062  lui         $v1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AB094u;
        goto label_3ab094;
    }
    ctx->pc = 0x3AB08Cu;
    {
        const bool branch_taken_0x3ab08c = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AB090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB08Cu;
        // 0x3ab090: 0x3c030062  lui         $v1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab08c) {
            ctx->pc = 0x3AB0A4u;
            goto label_3ab0a4;
        }
    }
    ctx->pc = 0x3AB094u;
label_3ab094:
    // 0x3ab094: 0x2463e880  addiu       $v1, $v1, -0x1780
    ctx->pc = 0x3ab094u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961280));
label_3ab098:
    // 0x3ab098: 0x8c62010c  lw          $v0, 0x10C($v1)
    ctx->pc = 0x3ab098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
label_3ab09c:
    // 0x3ab09c: 0x40f809  jalr        $v0
label_3ab0a0:
    if (ctx->pc == 0x3AB0A0u) {
        ctx->pc = 0x3AB0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB09Cu;
        // 0x3ab0a0: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AB0A4u;
        goto label_3ab0a4;
    }
    ctx->pc = 0x3AB09Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3AB0A4u);
        ctx->pc = 0x3AB0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB09Cu;
        // 0x3ab0a0: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AB09Cu, 0x3AB0A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3AB0A4u;
label_3ab0a4:
    // 0x3ab0a4: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x3ab0a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
label_3ab0a8:
    // 0x3ab0a8: 0x220f02d  daddu       $fp, $s1, $zero
    ctx->pc = 0x3ab0a8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3ab0ac:
    // 0x3ab0ac: 0x2484ce80  addiu       $a0, $a0, -0x3180
    ctx->pc = 0x3ab0acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954624));
label_3ab0b0:
    // 0x3ab0b0: 0xac900d78  sw          $s0, 0xD78($a0)
    ctx->pc = 0x3ab0b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3448), GPR_U32(ctx, 16));
label_3ab0b4:
    // 0x3ab0b4: 0xac9e0d74  sw          $fp, 0xD74($a0)
    ctx->pc = 0x3ab0b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3444), GPR_U32(ctx, 30));
label_3ab0b8:
    // 0x3ab0b8: 0x2aa20080  slti        $v0, $s5, 0x80
    ctx->pc = 0x3ab0b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)128) ? 1 : 0);
label_3ab0bc:
    // 0x3ab0bc: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_3ab0c0:
    if (ctx->pc == 0x3AB0C0u) {
        ctx->pc = 0x3AB0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB0BCu;
        // 0x3ab0c0: 0x8fa500b0  lw          $a1, 0xB0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AB0C4u;
        goto label_3ab0c4;
    }
    ctx->pc = 0x3AB0BCu;
    {
        const bool branch_taken_0x3ab0bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AB0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB0BCu;
        // 0x3ab0c0: 0x8fa500b0  lw          $a1, 0xB0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab0bc) {
            ctx->pc = 0x3AB0E8u;
            goto label_3ab0e8;
        }
    }
    ctx->pc = 0x3AB0C4u;
label_3ab0c4:
    // 0x3ab0c4: 0x8fa500a0  lw          $a1, 0xA0($sp)
    ctx->pc = 0x3ab0c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_3ab0c8:
    // 0x3ab0c8: 0x8fa400ac  lw          $a0, 0xAC($sp)
    ctx->pc = 0x3ab0c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
label_3ab0cc:
    // 0x3ab0cc: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x3ab0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
label_3ab0d0:
    // 0x3ab0d0: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x3ab0d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_3ab0d4:
    // 0x3ab0d4: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x3ab0d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
label_3ab0d8:
    // 0x3ab0d8: 0x7e1821  addu        $v1, $v1, $fp
    ctx->pc = 0x3ab0d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 30)));
label_3ab0dc:
    // 0x3ab0dc: 0xaca20010  sw          $v0, 0x10($a1)
    ctx->pc = 0x3ab0dcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 2));
label_3ab0e0:
    // 0x3ab0e0: 0x10000005  b           . + 4 + (0x5 << 2)
label_3ab0e4:
    if (ctx->pc == 0x3AB0E4u) {
        ctx->pc = 0x3AB0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB0E0u;
        // 0x3ab0e4: 0xac750000  sw          $s5, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AB0E8u;
        goto label_3ab0e8;
    }
    ctx->pc = 0x3AB0E0u;
    {
        const bool branch_taken_0x3ab0e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AB0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB0E0u;
        // 0x3ab0e4: 0xac750000  sw          $s5, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab0e0) {
            ctx->pc = 0x3AB0F8u;
            goto label_3ab0f8;
        }
    }
    ctx->pc = 0x3AB0E8u;
label_3ab0e8:
    // 0x3ab0e8: 0x151040  sll         $v0, $s5, 1
    ctx->pc = 0x3ab0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 1));
label_3ab0ec:
    // 0x3ab0ec: 0x8fa300ac  lw          $v1, 0xAC($sp)
    ctx->pc = 0x3ab0ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
label_3ab0f0:
    // 0x3ab0f0: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x3ab0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_3ab0f4:
    // 0x3ab0f4: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x3ab0f4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
label_3ab0f8:
    // 0x3ab0f8: 0x8fa400b4  lw          $a0, 0xB4($sp)
    ctx->pc = 0x3ab0f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
label_3ab0fc:
    // 0x3ab0fc: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x3ab0fcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ab100:
    // 0x3ab100: 0x8fa500bc  lw          $a1, 0xBC($sp)
    ctx->pc = 0x3ab100u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
label_3ab104:
    // 0x3ab104: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x3ab104u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3ab108:
    // 0x3ab108: 0x851021  addu        $v0, $a0, $a1
    ctx->pc = 0x3ab108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_3ab10c:
    // 0x3ab10c: 0xac570018  sw          $s7, 0x18($v0)
    ctx->pc = 0x3ab10cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 23));
label_3ab110:
    // 0x3ab110: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x3ab110u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_3ab114:
    // 0x3ab114: 0xafa300ac  sw          $v1, 0xAC($sp)
    ctx->pc = 0x3ab114u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 3));
label_3ab118:
    // 0x3ab118: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x3ab118u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_3ab11c:
    // 0x3ab11c: 0x8fa400ac  lw          $a0, 0xAC($sp)
    ctx->pc = 0x3ab11cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
label_3ab120:
    // 0x3ab120: 0x8fa500a8  lw          $a1, 0xA8($sp)
    ctx->pc = 0x3ab120u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_3ab124:
    // 0x3ab124: 0x85102a  slt         $v0, $a0, $a1
    ctx->pc = 0x3ab124u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_3ab128:
    // 0x3ab128: 0x14400057  bnez        $v0, . + 4 + (0x57 << 2)
label_3ab12c:
    if (ctx->pc == 0x3AB12Cu) {
        ctx->pc = 0x3AB12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB128u;
        // 0x3ab12c: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AB130u;
        goto label_3ab130;
    }
    ctx->pc = 0x3AB128u;
    {
        const bool branch_taken_0x3ab128 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AB12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB128u;
        // 0x3ab12c: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab128) {
            ctx->pc = 0x3AB288u;
            goto label_3ab288;
        }
    }
    ctx->pc = 0x3AB130u;
label_3ab130:
    // 0x3ab130: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x3ab130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_3ab134:
    // 0x3ab134: 0x3c060003  lui         $a2, 0x3
    ctx->pc = 0x3ab134u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)3 << 16));
label_3ab138:
    // 0x3ab138: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x3ab138u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_3ab13c:
    // 0x3ab13c: 0x34c60190  ori         $a2, $a2, 0x190
    ctx->pc = 0x3ab13cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)400);
label_3ab140:
    // 0x3ab140: 0xc103722  jal         func_40DC88
label_3ab144:
    if (ctx->pc == 0x3AB144u) {
        ctx->pc = 0x3AB144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB140u;
        // 0x3ab144: 0x8c440134  lw          $a0, 0x134($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 308)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AB148u;
        goto label_3ab148;
    }
    ctx->pc = 0x3AB140u;
    SET_GPR_U32(ctx, 31, 0x3AB148u);
    ctx->pc = 0x3AB144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AB140u;
    // 0x3ab144: 0x8c440134  lw          $a0, 0x134($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 308)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DC88u, 0x3AB140u, 0x3AB148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AB148u;
label_3ab148:
    // 0x3ab148: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x3ab148u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_3ab14c:
    // 0x3ab14c: 0x8fa500a0  lw          $a1, 0xA0($sp)
    ctx->pc = 0x3ab14cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_3ab150:
    // 0x3ab150: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x3ab150u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
label_3ab154:
    // 0x3ab154: 0xafa300a8  sw          $v1, 0xA8($sp)
    ctx->pc = 0x3ab154u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 3));
label_3ab158:
    // 0x3ab158: 0xc1036d2  jal         func_40DB48
label_3ab15c:
    if (ctx->pc == 0x3AB15Cu) {
        ctx->pc = 0x3AB15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB158u;
        // 0x3ab15c: 0x8ca40134  lw          $a0, 0x134($a1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 308)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AB160u;
        goto label_3ab160;
    }
    ctx->pc = 0x3AB158u;
    SET_GPR_U32(ctx, 31, 0x3AB160u);
    ctx->pc = 0x3AB15Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AB158u;
    // 0x3ab15c: 0x8ca40134  lw          $a0, 0x134($a1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 308)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB48u, 0x3AB158u, 0x3AB160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AB160u;
label_3ab160:
    // 0x3ab160: 0xafa200b4  sw          $v0, 0xB4($sp)
    ctx->pc = 0x3ab160u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 2));
label_3ab164:
    // 0x3ab164: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3ab164u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ab168:
    // 0x3ab168: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x3ab168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
label_3ab16c:
    // 0x3ab16c: 0x24060400  addiu       $a2, $zero, 0x400
    ctx->pc = 0x3ab16cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_3ab170:
    // 0x3ab170: 0x8fa300b4  lw          $v1, 0xB4($sp)
    ctx->pc = 0x3ab170u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
label_3ab174:
    // 0x3ab174: 0x22140  sll         $a0, $v0, 5
    ctx->pc = 0x3ab174u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_3ab178:
    // 0x3ab178: 0xc0bb7e6  jal         func_2EDF98
label_3ab17c:
    if (ctx->pc == 0x3AB17Cu) {
        ctx->pc = 0x3AB17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB178u;
        // 0x3ab17c: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AB180u;
        goto label_3ab180;
    }
    ctx->pc = 0x3AB178u;
    SET_GPR_U32(ctx, 31, 0x3AB180u);
    ctx->pc = 0x3AB17Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AB178u;
    // 0x3ab17c: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF98u, 0x3AB178u, 0x3AB180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AB180u;
label_3ab180:
    // 0x3ab180: 0x10000042  b           . + 4 + (0x42 << 2)
label_3ab184:
    if (ctx->pc == 0x3AB184u) {
        ctx->pc = 0x3AB184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB180u;
        // 0x3ab184: 0x8fa400a0  lw          $a0, 0xA0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AB188u;
        goto label_3ab188;
    }
    ctx->pc = 0x3AB180u;
    {
        const bool branch_taken_0x3ab180 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AB184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB180u;
        // 0x3ab184: 0x8fa400a0  lw          $a0, 0xA0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab180) {
            ctx->pc = 0x3AB28Cu;
            goto label_3ab28c;
        }
    }
    ctx->pc = 0x3AB188u;
label_3ab188:
    // 0x3ab188: 0x12e0003f  beqz        $s7, . + 4 + (0x3F << 2)
label_3ab18c:
    if (ctx->pc == 0x3AB18Cu) {
        ctx->pc = 0x3AB18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB188u;
        // 0x3ab18c: 0x27b00080  addiu       $s0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AB190u;
        goto label_3ab190;
    }
    ctx->pc = 0x3AB188u;
    {
        const bool branch_taken_0x3ab188 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AB18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB188u;
        // 0x3ab18c: 0x27b00080  addiu       $s0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab188) {
            ctx->pc = 0x3AB288u;
            goto label_3ab288;
        }
    }
    ctx->pc = 0x3AB190u;
label_3ab190:
    // 0x3ab190: 0x27b10090  addiu       $s1, $sp, 0x90
    ctx->pc = 0x3ab190u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_3ab194:
    // 0x3ab194: 0x8e820104  lw          $v0, 0x104($s4)
    ctx->pc = 0x3ab194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 260)));
label_3ab198:
    // 0x3ab198: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x3ab198u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_3ab19c:
    // 0x3ab19c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3ab19cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3ab1a0:
    // 0x3ab1a0: 0x2465bfe8  addiu       $a1, $v1, -0x4018
    ctx->pc = 0x3ab1a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950888));
label_3ab1a4:
    // 0x3ab1a4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3ab1a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3ab1a8:
    // 0x3ab1a8: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x3ab1a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3ab1ac:
    // 0x3ab1ac: 0x40f809  jalr        $v0
label_3ab1b0:
    if (ctx->pc == 0x3AB1B0u) {
        ctx->pc = 0x3AB1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB1ACu;
        // 0x3ab1b0: 0x24130002  addiu       $s3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AB1B4u;
        goto label_3ab1b4;
    }
    ctx->pc = 0x3AB1ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3AB1B4u);
        ctx->pc = 0x3AB1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB1ACu;
        // 0x3ab1b0: 0x24130002  addiu       $s3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AB1ACu, 0x3AB1B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3AB1B4u;
label_3ab1b4:
    // 0x3ab1b4: 0x14530007  bne         $v0, $s3, . + 4 + (0x7 << 2)
label_3ab1b8:
    if (ctx->pc == 0x3AB1B8u) {
        ctx->pc = 0x3AB1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB1B4u;
        // 0x3ab1b8: 0x3c030060  lui         $v1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AB1BCu;
        goto label_3ab1bc;
    }
    ctx->pc = 0x3AB1B4u;
    {
        const bool branch_taken_0x3ab1b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        ctx->pc = 0x3AB1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB1B4u;
        // 0x3ab1b8: 0x3c030060  lui         $v1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab1b4) {
            ctx->pc = 0x3AB1D4u;
            goto label_3ab1d4;
        }
    }
    ctx->pc = 0x3AB1BCu;
label_3ab1bc:
    // 0x3ab1bc: 0xc7ac0080  lwc1        $f12, 0x80($sp)
    ctx->pc = 0x3ab1bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_3ab1c0:
    // 0x3ab1c0: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x3ab1c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3ab1c4:
    // 0x3ab1c4: 0xc0ec6d6  jal         func_3B1B58
label_3ab1c8:
    if (ctx->pc == 0x3AB1C8u) {
        ctx->pc = 0x3AB1C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB1C4u;
        // 0x3ab1c8: 0xc7ad0090  lwc1        $f13, 0x90($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AB1CCu;
        goto label_3ab1cc;
    }
    ctx->pc = 0x3AB1C4u;
    SET_GPR_U32(ctx, 31, 0x3AB1CCu);
    ctx->pc = 0x3AB1C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AB1C4u;
    // 0x3ab1c8: 0xc7ad0090  lwc1        $f13, 0x90($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B1B58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1B58u, 0x3AB1C4u, 0x3AB1CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AB1CCu;
label_3ab1cc:
    // 0x3ab1cc: 0x1000002f  b           . + 4 + (0x2F << 2)
label_3ab1d0:
    if (ctx->pc == 0x3AB1D0u) {
        ctx->pc = 0x3AB1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB1CCu;
        // 0x3ab1d0: 0x8fa400a0  lw          $a0, 0xA0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AB1D4u;
        goto label_3ab1d4;
    }
    ctx->pc = 0x3AB1CCu;
    {
        const bool branch_taken_0x3ab1cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AB1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB1CCu;
        // 0x3ab1d0: 0x8fa400a0  lw          $a0, 0xA0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab1cc) {
            ctx->pc = 0x3AB28Cu;
            goto label_3ab28c;
        }
    }
    ctx->pc = 0x3AB1D4u;
label_3ab1d4:
    // 0x3ab1d4: 0x8e820104  lw          $v0, 0x104($s4)
    ctx->pc = 0x3ab1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 260)));
label_3ab1d8:
    // 0x3ab1d8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3ab1d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3ab1dc:
    // 0x3ab1dc: 0x2465bff8  addiu       $a1, $v1, -0x4008
    ctx->pc = 0x3ab1dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950904));
label_3ab1e0:
    // 0x3ab1e0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3ab1e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3ab1e4:
    // 0x3ab1e4: 0x40f809  jalr        $v0
label_3ab1e8:
    if (ctx->pc == 0x3AB1E8u) {
        ctx->pc = 0x3AB1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB1E4u;
        // 0x3ab1e8: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AB1ECu;
        goto label_3ab1ec;
    }
    ctx->pc = 0x3AB1E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3AB1ECu);
        ctx->pc = 0x3AB1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB1E4u;
        // 0x3ab1e8: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AB1E4u, 0x3AB1ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3AB1ECu;
label_3ab1ec:
    // 0x3ab1ec: 0x14530007  bne         $v0, $s3, . + 4 + (0x7 << 2)
label_3ab1f0:
    if (ctx->pc == 0x3AB1F0u) {
        ctx->pc = 0x3AB1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB1ECu;
        // 0x3ab1f0: 0x3c030060  lui         $v1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AB1F4u;
        goto label_3ab1f4;
    }
    ctx->pc = 0x3AB1ECu;
    {
        const bool branch_taken_0x3ab1ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        ctx->pc = 0x3AB1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB1ECu;
        // 0x3ab1f0: 0x3c030060  lui         $v1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab1ec) {
            ctx->pc = 0x3AB20Cu;
            goto label_3ab20c;
        }
    }
    ctx->pc = 0x3AB1F4u;
label_3ab1f4:
    // 0x3ab1f4: 0xc7ac0080  lwc1        $f12, 0x80($sp)
    ctx->pc = 0x3ab1f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_3ab1f8:
    // 0x3ab1f8: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x3ab1f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3ab1fc:
    // 0x3ab1fc: 0xc0ebb40  jal         func_3AED00
label_3ab200:
    if (ctx->pc == 0x3AB200u) {
        ctx->pc = 0x3AB200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB1FCu;
        // 0x3ab200: 0xc7ad0090  lwc1        $f13, 0x90($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AB204u;
        goto label_3ab204;
    }
    ctx->pc = 0x3AB1FCu;
    SET_GPR_U32(ctx, 31, 0x3AB204u);
    ctx->pc = 0x3AB200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AB1FCu;
    // 0x3ab200: 0xc7ad0090  lwc1        $f13, 0x90($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AED00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AED00u, 0x3AB1FCu, 0x3AB204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AB204u;
label_3ab204:
    // 0x3ab204: 0x10000021  b           . + 4 + (0x21 << 2)
label_3ab208:
    if (ctx->pc == 0x3AB208u) {
        ctx->pc = 0x3AB208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB204u;
        // 0x3ab208: 0x8fa400a0  lw          $a0, 0xA0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AB20Cu;
        goto label_3ab20c;
    }
    ctx->pc = 0x3AB204u;
    {
        const bool branch_taken_0x3ab204 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AB208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB204u;
        // 0x3ab208: 0x8fa400a0  lw          $a0, 0xA0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab204) {
            ctx->pc = 0x3AB28Cu;
            goto label_3ab28c;
        }
    }
    ctx->pc = 0x3AB20Cu;
label_3ab20c:
    // 0x3ab20c: 0x8e820104  lw          $v0, 0x104($s4)
    ctx->pc = 0x3ab20cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 260)));
label_3ab210:
    // 0x3ab210: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3ab210u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3ab214:
    // 0x3ab214: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3ab214u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3ab218:
    // 0x3ab218: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x3ab218u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3ab21c:
    // 0x3ab21c: 0x2465c008  addiu       $a1, $v1, -0x3FF8
    ctx->pc = 0x3ab21cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950920));
label_3ab220:
    // 0x3ab220: 0x27a80084  addiu       $t0, $sp, 0x84
    ctx->pc = 0x3ab220u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 132));
label_3ab224:
    // 0x3ab224: 0x27a90094  addiu       $t1, $sp, 0x94
    ctx->pc = 0x3ab224u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 148));
label_3ab228:
    // 0x3ab228: 0x27aa0088  addiu       $t2, $sp, 0x88
    ctx->pc = 0x3ab228u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
label_3ab22c:
    // 0x3ab22c: 0x40f809  jalr        $v0
label_3ab230:
    if (ctx->pc == 0x3AB230u) {
        ctx->pc = 0x3AB230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB22Cu;
        // 0x3ab230: 0x27ab0098  addiu       $t3, $sp, 0x98 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AB234u;
        goto label_3ab234;
    }
    ctx->pc = 0x3AB22Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3AB234u);
        ctx->pc = 0x3AB230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB22Cu;
        // 0x3ab230: 0x27ab0098  addiu       $t3, $sp, 0x98 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AB22Cu, 0x3AB234u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3AB234u;
label_3ab234:
    // 0x3ab234: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x3ab234u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_3ab238:
    // 0x3ab238: 0x1444000b  bne         $v0, $a0, . + 4 + (0xB << 2)
label_3ab23c:
    if (ctx->pc == 0x3AB23Cu) {
        ctx->pc = 0x3AB23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB238u;
        // 0x3ab23c: 0x3c030060  lui         $v1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AB240u;
        goto label_3ab240;
    }
    ctx->pc = 0x3AB238u;
    {
        const bool branch_taken_0x3ab238 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x3AB23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB238u;
        // 0x3ab23c: 0x3c030060  lui         $v1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab238) {
            ctx->pc = 0x3AB268u;
            goto label_3ab268;
        }
    }
    ctx->pc = 0x3AB240u;
label_3ab240:
    // 0x3ab240: 0xc7ac0080  lwc1        $f12, 0x80($sp)
    ctx->pc = 0x3ab240u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_3ab244:
    // 0x3ab244: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x3ab244u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3ab248:
    // 0x3ab248: 0xc7ad0090  lwc1        $f13, 0x90($sp)
    ctx->pc = 0x3ab248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_3ab24c:
    // 0x3ab24c: 0xc7ae0084  lwc1        $f14, 0x84($sp)
    ctx->pc = 0x3ab24cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_3ab250:
    // 0x3ab250: 0xc7af0094  lwc1        $f15, 0x94($sp)
    ctx->pc = 0x3ab250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
label_3ab254:
    // 0x3ab254: 0xc7b00088  lwc1        $f16, 0x88($sp)
    ctx->pc = 0x3ab254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
label_3ab258:
    // 0x3ab258: 0xc0ebb98  jal         func_3AEE60
label_3ab25c:
    if (ctx->pc == 0x3AB25Cu) {
        ctx->pc = 0x3AB25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB258u;
        // 0x3ab25c: 0xc7b10098  lwc1        $f17, 0x98($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[17] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AB260u;
        goto label_3ab260;
    }
    ctx->pc = 0x3AB258u;
    SET_GPR_U32(ctx, 31, 0x3AB260u);
    ctx->pc = 0x3AB25Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AB258u;
    // 0x3ab25c: 0xc7b10098  lwc1        $f17, 0x98($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[17] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AEE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AEE60u, 0x3AB258u, 0x3AB260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AB260u;
label_3ab260:
    // 0x3ab260: 0x1000000a  b           . + 4 + (0xA << 2)
label_3ab264:
    if (ctx->pc == 0x3AB264u) {
        ctx->pc = 0x3AB264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB260u;
        // 0x3ab264: 0x8fa400a0  lw          $a0, 0xA0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AB268u;
        goto label_3ab268;
    }
    ctx->pc = 0x3AB260u;
    {
        const bool branch_taken_0x3ab260 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AB264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB260u;
        // 0x3ab264: 0x8fa400a0  lw          $a0, 0xA0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab260) {
            ctx->pc = 0x3AB28Cu;
            goto label_3ab28c;
        }
    }
    ctx->pc = 0x3AB268u;
label_3ab268:
    // 0x3ab268: 0x8e8200e8  lw          $v0, 0xE8($s4)
    ctx->pc = 0x3ab268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 232)));
label_3ab26c:
    // 0x3ab26c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3ab26cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3ab270:
    // 0x3ab270: 0x40f809  jalr        $v0
label_3ab274:
    if (ctx->pc == 0x3AB274u) {
        ctx->pc = 0x3AB274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB270u;
        // 0x3ab274: 0x2465c028  addiu       $a1, $v1, -0x3FD8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950952));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AB278u;
        goto label_3ab278;
    }
    ctx->pc = 0x3AB270u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3AB278u);
        ctx->pc = 0x3AB274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB270u;
        // 0x3ab274: 0x2465c028  addiu       $a1, $v1, -0x3FD8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950952));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AB270u, 0x3AB278u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3AB278u;
label_3ab278:
    // 0x3ab278: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_3ab27c:
    if (ctx->pc == 0x3AB27Cu) {
        ctx->pc = 0x3AB27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB278u;
        // 0x3ab27c: 0x8fa400a0  lw          $a0, 0xA0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AB280u;
        goto label_3ab280;
    }
    ctx->pc = 0x3AB278u;
    {
        const bool branch_taken_0x3ab278 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AB27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB278u;
        // 0x3ab27c: 0x8fa400a0  lw          $a0, 0xA0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab278) {
            ctx->pc = 0x3AB28Cu;
            goto label_3ab28c;
        }
    }
    ctx->pc = 0x3AB280u;
label_3ab280:
    // 0x3ab280: 0xc0ebc42  jal         func_3AF108
label_3ab284:
    if (ctx->pc == 0x3AB284u) {
        ctx->pc = 0x3AB284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB280u;
        // 0x3ab284: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AB288u;
        goto label_3ab288;
    }
    ctx->pc = 0x3AB280u;
    SET_GPR_U32(ctx, 31, 0x3AB288u);
    ctx->pc = 0x3AB284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AB280u;
    // 0x3ab284: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AF108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AF108u, 0x3AB280u, 0x3AB288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AB288u;
label_3ab288:
    // 0x3ab288: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x3ab288u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_3ab28c:
    // 0x3ab28c: 0x16c40017  bne         $s6, $a0, . + 4 + (0x17 << 2)
label_3ab290:
    if (ctx->pc == 0x3AB290u) {
        ctx->pc = 0x3AB290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB28Cu;
        // 0x3ab290: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AB294u;
        goto label_3ab294;
    }
    ctx->pc = 0x3AB28Cu;
    {
        const bool branch_taken_0x3ab28c = (GPR_U64(ctx, 22) != GPR_U64(ctx, 4));
        ctx->pc = 0x3AB290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB28Cu;
        // 0x3ab290: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab28c) {
            ctx->pc = 0x3AB2ECu;
            goto label_3ab2ec;
        }
    }
    ctx->pc = 0x3AB294u;
label_3ab294:
    // 0x3ab294: 0x8fa600a4  lw          $a2, 0xA4($sp)
    ctx->pc = 0x3ab294u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
label_3ab298:
    // 0x3ab298: 0xc0f0a5a  jal         func_3C2968
label_3ab29c:
    if (ctx->pc == 0x3AB29Cu) {
        ctx->pc = 0x3AB29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB298u;
        // 0x3ab29c: 0x24050100  addiu       $a1, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AB2A0u;
        goto label_3ab2a0;
    }
    ctx->pc = 0x3AB298u;
    SET_GPR_U32(ctx, 31, 0x3AB2A0u);
    ctx->pc = 0x3AB29Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AB298u;
    // 0x3ab29c: 0x24050100  addiu       $a1, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C2968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2968u, 0x3AB298u, 0x3AB2A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AB2A0u;
label_3ab2a0:
    // 0x3ab2a0: 0x1440febb  bnez        $v0, . + 4 + (-0x145 << 2)
label_3ab2a4:
    if (ctx->pc == 0x3AB2A4u) {
        ctx->pc = 0x3AB2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB2A0u;
        // 0x3ab2a4: 0x8fa500a0  lw          $a1, 0xA0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AB2A8u;
        goto label_3ab2a8;
    }
    ctx->pc = 0x3AB2A0u;
    {
        const bool branch_taken_0x3ab2a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AB2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB2A0u;
        // 0x3ab2a4: 0x8fa500a0  lw          $a1, 0xA0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab2a0) {
            ctx->pc = 0x3AAD90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3aad90;
        }
    }
    ctx->pc = 0x3AB2A8u;
label_3ab2a8:
    // 0x3ab2a8: 0x16c50011  bne         $s6, $a1, . + 4 + (0x11 << 2)
label_3ab2ac:
    if (ctx->pc == 0x3AB2ACu) {
        ctx->pc = 0x3AB2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB2A8u;
        // 0x3ab2ac: 0x2c0102d  daddu       $v0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AB2B0u;
        goto label_3ab2b0;
    }
    ctx->pc = 0x3AB2A8u;
    {
        const bool branch_taken_0x3ab2a8 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 5));
        ctx->pc = 0x3AB2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB2A8u;
        // 0x3ab2ac: 0x2c0102d  daddu       $v0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab2a8) {
            ctx->pc = 0x3AB2F0u;
            goto label_3ab2f0;
        }
    }
    ctx->pc = 0x3AB2B0u;
label_3ab2b0:
    // 0x3ab2b0: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x3ab2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
label_3ab2b4:
    // 0x3ab2b4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x3ab2b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3ab2b8:
    // 0x3ab2b8: 0xc0ea696  jal         func_3A9A58
label_3ab2bc:
    if (ctx->pc == 0x3AB2BCu) {
        ctx->pc = 0x3AB2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB2B8u;
        // 0x3ab2bc: 0xaec20130  sw          $v0, 0x130($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 304), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AB2C0u;
        goto label_3ab2c0;
    }
    ctx->pc = 0x3AB2B8u;
    SET_GPR_U32(ctx, 31, 0x3AB2C0u);
    ctx->pc = 0x3AB2BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AB2B8u;
    // 0x3ab2bc: 0xaec20130  sw          $v0, 0x130($s6) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 22), 304), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A9A58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A9A58u, 0x3AB2B8u, 0x3AB2C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AB2C0u;
label_3ab2c0:
    // 0x3ab2c0: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x3ab2c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
label_3ab2c4:
    // 0x3ab2c4: 0x2483ce80  addiu       $v1, $a0, -0x3180
    ctx->pc = 0x3ab2c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954624));
label_3ab2c8:
    // 0x3ab2c8: 0x8c640d74  lw          $a0, 0xD74($v1)
    ctx->pc = 0x3ab2c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3444)));
label_3ab2cc:
    // 0x3ab2cc: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_3ab2d0:
    if (ctx->pc == 0x3AB2D0u) {
        ctx->pc = 0x3AB2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB2CCu;
        // 0x3ab2d0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AB2D4u;
        goto label_3ab2d4;
    }
    ctx->pc = 0x3AB2CCu;
    {
        const bool branch_taken_0x3ab2cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AB2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB2CCu;
        // 0x3ab2d0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab2cc) {
            ctx->pc = 0x3AB2E0u;
            goto label_3ab2e0;
        }
    }
    ctx->pc = 0x3AB2D4u;
label_3ab2d4:
    // 0x3ab2d4: 0x8c660d78  lw          $a2, 0xD78($v1)
    ctx->pc = 0x3ab2d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3448)));
label_3ab2d8:
    // 0x3ab2d8: 0xc0bb7e6  jal         func_2EDF98
label_3ab2dc:
    if (ctx->pc == 0x3AB2DCu) {
        ctx->pc = 0x3AB2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB2D8u;
        // 0x3ab2dc: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AB2E0u;
        goto label_3ab2e0;
    }
    ctx->pc = 0x3AB2D8u;
    SET_GPR_U32(ctx, 31, 0x3AB2E0u);
    ctx->pc = 0x3AB2DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AB2D8u;
    // 0x3ab2dc: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF98u, 0x3AB2D8u, 0x3AB2E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AB2E0u;
label_3ab2e0:
    // 0x3ab2e0: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x3ab2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_3ab2e4:
    // 0x3ab2e4: 0x2442d508  addiu       $v0, $v0, -0x2AF8
    ctx->pc = 0x3ab2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956296));
label_3ab2e8:
    // 0x3ab2e8: 0xaec20138  sw          $v0, 0x138($s6)
    ctx->pc = 0x3ab2e8u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 312), GPR_U32(ctx, 2));
label_3ab2ec:
    // 0x3ab2ec: 0x2c0102d  daddu       $v0, $s6, $zero
    ctx->pc = 0x3ab2ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3ab2f0:
    // 0x3ab2f0: 0x7bb00150  lq          $s0, 0x150($sp)
    ctx->pc = 0x3ab2f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 336)));
label_3ab2f4:
    // 0x3ab2f4: 0x7bb10140  lq          $s1, 0x140($sp)
    ctx->pc = 0x3ab2f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 320)));
label_3ab2f8:
    // 0x3ab2f8: 0x7bb20130  lq          $s2, 0x130($sp)
    ctx->pc = 0x3ab2f8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 304)));
label_3ab2fc:
    // 0x3ab2fc: 0x7bb30120  lq          $s3, 0x120($sp)
    ctx->pc = 0x3ab2fcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 288)));
label_3ab300:
    // 0x3ab300: 0x7bb40110  lq          $s4, 0x110($sp)
    ctx->pc = 0x3ab300u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_3ab304:
    // 0x3ab304: 0x7bb50100  lq          $s5, 0x100($sp)
    ctx->pc = 0x3ab304u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_3ab308:
    // 0x3ab308: 0x7bb600f0  lq          $s6, 0xF0($sp)
    ctx->pc = 0x3ab308u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_3ab30c:
    // 0x3ab30c: 0x7bb700e0  lq          $s7, 0xE0($sp)
    ctx->pc = 0x3ab30cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_3ab310:
    // 0x3ab310: 0x7bbe00d0  lq          $fp, 0xD0($sp)
    ctx->pc = 0x3ab310u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_3ab314:
    // 0x3ab314: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x3ab314u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
label_3ab318:
    // 0x3ab318: 0x3e00008  jr          $ra
label_3ab31c:
    if (ctx->pc == 0x3AB31Cu) {
        ctx->pc = 0x3AB31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB318u;
        // 0x3ab31c: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AB320u;
        goto label_fallthrough_0x3ab318;
    }
    ctx->pc = 0x3AB318u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AB31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB318u;
        // 0x3ab31c: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AB318u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3ab318:
    ctx->pc = 0x3AB320u;
}
