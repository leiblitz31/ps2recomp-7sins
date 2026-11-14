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

// Function: sub_0031FD70
// Address: 0x31fd70 - 0x320500
void sub_0031FD70_0x31fd70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031FD70_0x31fd70");
#endif

    switch (ctx->pc) {
        case 0x31fd70u: goto label_31fd70;
        case 0x31fd74u: goto label_31fd74;
        case 0x31fd78u: goto label_31fd78;
        case 0x31fd7cu: goto label_31fd7c;
        case 0x31fd80u: goto label_31fd80;
        case 0x31fd84u: goto label_31fd84;
        case 0x31fd88u: goto label_31fd88;
        case 0x31fd8cu: goto label_31fd8c;
        case 0x31fd90u: goto label_31fd90;
        case 0x31fd94u: goto label_31fd94;
        case 0x31fd98u: goto label_31fd98;
        case 0x31fd9cu: goto label_31fd9c;
        case 0x31fda0u: goto label_31fda0;
        case 0x31fda4u: goto label_31fda4;
        case 0x31fda8u: goto label_31fda8;
        case 0x31fdacu: goto label_31fdac;
        case 0x31fdb0u: goto label_31fdb0;
        case 0x31fdb4u: goto label_31fdb4;
        case 0x31fdb8u: goto label_31fdb8;
        case 0x31fdbcu: goto label_31fdbc;
        case 0x31fdc0u: goto label_31fdc0;
        case 0x31fdc4u: goto label_31fdc4;
        case 0x31fdc8u: goto label_31fdc8;
        case 0x31fdccu: goto label_31fdcc;
        case 0x31fdd0u: goto label_31fdd0;
        case 0x31fdd4u: goto label_31fdd4;
        case 0x31fdd8u: goto label_31fdd8;
        case 0x31fddcu: goto label_31fddc;
        case 0x31fde0u: goto label_31fde0;
        case 0x31fde4u: goto label_31fde4;
        case 0x31fde8u: goto label_31fde8;
        case 0x31fdecu: goto label_31fdec;
        case 0x31fdf0u: goto label_31fdf0;
        case 0x31fdf4u: goto label_31fdf4;
        case 0x31fdf8u: goto label_31fdf8;
        case 0x31fdfcu: goto label_31fdfc;
        case 0x31fe00u: goto label_31fe00;
        case 0x31fe04u: goto label_31fe04;
        case 0x31fe08u: goto label_31fe08;
        case 0x31fe0cu: goto label_31fe0c;
        case 0x31fe10u: goto label_31fe10;
        case 0x31fe14u: goto label_31fe14;
        case 0x31fe18u: goto label_31fe18;
        case 0x31fe1cu: goto label_31fe1c;
        case 0x31fe20u: goto label_31fe20;
        case 0x31fe24u: goto label_31fe24;
        case 0x31fe28u: goto label_31fe28;
        case 0x31fe2cu: goto label_31fe2c;
        case 0x31fe30u: goto label_31fe30;
        case 0x31fe34u: goto label_31fe34;
        case 0x31fe38u: goto label_31fe38;
        case 0x31fe3cu: goto label_31fe3c;
        case 0x31fe40u: goto label_31fe40;
        case 0x31fe44u: goto label_31fe44;
        case 0x31fe48u: goto label_31fe48;
        case 0x31fe4cu: goto label_31fe4c;
        case 0x31fe50u: goto label_31fe50;
        case 0x31fe54u: goto label_31fe54;
        case 0x31fe58u: goto label_31fe58;
        case 0x31fe5cu: goto label_31fe5c;
        case 0x31fe60u: goto label_31fe60;
        case 0x31fe64u: goto label_31fe64;
        case 0x31fe68u: goto label_31fe68;
        case 0x31fe6cu: goto label_31fe6c;
        case 0x31fe70u: goto label_31fe70;
        case 0x31fe74u: goto label_31fe74;
        case 0x31fe78u: goto label_31fe78;
        case 0x31fe7cu: goto label_31fe7c;
        case 0x31fe80u: goto label_31fe80;
        case 0x31fe84u: goto label_31fe84;
        case 0x31fe88u: goto label_31fe88;
        case 0x31fe8cu: goto label_31fe8c;
        case 0x31fe90u: goto label_31fe90;
        case 0x31fe94u: goto label_31fe94;
        case 0x31fe98u: goto label_31fe98;
        case 0x31fe9cu: goto label_31fe9c;
        case 0x31fea0u: goto label_31fea0;
        case 0x31fea4u: goto label_31fea4;
        case 0x31fea8u: goto label_31fea8;
        case 0x31feacu: goto label_31feac;
        case 0x31feb0u: goto label_31feb0;
        case 0x31feb4u: goto label_31feb4;
        case 0x31feb8u: goto label_31feb8;
        case 0x31febcu: goto label_31febc;
        case 0x31fec0u: goto label_31fec0;
        case 0x31fec4u: goto label_31fec4;
        case 0x31fec8u: goto label_31fec8;
        case 0x31feccu: goto label_31fecc;
        case 0x31fed0u: goto label_31fed0;
        case 0x31fed4u: goto label_31fed4;
        case 0x31fed8u: goto label_31fed8;
        case 0x31fedcu: goto label_31fedc;
        case 0x31fee0u: goto label_31fee0;
        case 0x31fee4u: goto label_31fee4;
        case 0x31fee8u: goto label_31fee8;
        case 0x31feecu: goto label_31feec;
        case 0x31fef0u: goto label_31fef0;
        case 0x31fef4u: goto label_31fef4;
        case 0x31fef8u: goto label_31fef8;
        case 0x31fefcu: goto label_31fefc;
        case 0x31ff00u: goto label_31ff00;
        case 0x31ff04u: goto label_31ff04;
        case 0x31ff08u: goto label_31ff08;
        case 0x31ff0cu: goto label_31ff0c;
        case 0x31ff10u: goto label_31ff10;
        case 0x31ff14u: goto label_31ff14;
        case 0x31ff18u: goto label_31ff18;
        case 0x31ff1cu: goto label_31ff1c;
        case 0x31ff20u: goto label_31ff20;
        case 0x31ff24u: goto label_31ff24;
        case 0x31ff28u: goto label_31ff28;
        case 0x31ff2cu: goto label_31ff2c;
        case 0x31ff30u: goto label_31ff30;
        case 0x31ff34u: goto label_31ff34;
        case 0x31ff38u: goto label_31ff38;
        case 0x31ff3cu: goto label_31ff3c;
        case 0x31ff40u: goto label_31ff40;
        case 0x31ff44u: goto label_31ff44;
        case 0x31ff48u: goto label_31ff48;
        case 0x31ff4cu: goto label_31ff4c;
        case 0x31ff50u: goto label_31ff50;
        case 0x31ff54u: goto label_31ff54;
        case 0x31ff58u: goto label_31ff58;
        case 0x31ff5cu: goto label_31ff5c;
        case 0x31ff60u: goto label_31ff60;
        case 0x31ff64u: goto label_31ff64;
        case 0x31ff68u: goto label_31ff68;
        case 0x31ff6cu: goto label_31ff6c;
        case 0x31ff70u: goto label_31ff70;
        case 0x31ff74u: goto label_31ff74;
        case 0x31ff78u: goto label_31ff78;
        case 0x31ff7cu: goto label_31ff7c;
        case 0x31ff80u: goto label_31ff80;
        case 0x31ff84u: goto label_31ff84;
        case 0x31ff88u: goto label_31ff88;
        case 0x31ff8cu: goto label_31ff8c;
        case 0x31ff90u: goto label_31ff90;
        case 0x31ff94u: goto label_31ff94;
        case 0x31ff98u: goto label_31ff98;
        case 0x31ff9cu: goto label_31ff9c;
        case 0x31ffa0u: goto label_31ffa0;
        case 0x31ffa4u: goto label_31ffa4;
        case 0x31ffa8u: goto label_31ffa8;
        case 0x31ffacu: goto label_31ffac;
        case 0x31ffb0u: goto label_31ffb0;
        case 0x31ffb4u: goto label_31ffb4;
        case 0x31ffb8u: goto label_31ffb8;
        case 0x31ffbcu: goto label_31ffbc;
        case 0x31ffc0u: goto label_31ffc0;
        case 0x31ffc4u: goto label_31ffc4;
        case 0x31ffc8u: goto label_31ffc8;
        case 0x31ffccu: goto label_31ffcc;
        case 0x31ffd0u: goto label_31ffd0;
        case 0x31ffd4u: goto label_31ffd4;
        case 0x31ffd8u: goto label_31ffd8;
        case 0x31ffdcu: goto label_31ffdc;
        case 0x31ffe0u: goto label_31ffe0;
        case 0x31ffe4u: goto label_31ffe4;
        case 0x31ffe8u: goto label_31ffe8;
        case 0x31ffecu: goto label_31ffec;
        case 0x31fff0u: goto label_31fff0;
        case 0x31fff4u: goto label_31fff4;
        case 0x31fff8u: goto label_31fff8;
        case 0x31fffcu: goto label_31fffc;
        case 0x320000u: goto label_320000;
        case 0x320004u: goto label_320004;
        case 0x320008u: goto label_320008;
        case 0x32000cu: goto label_32000c;
        case 0x320010u: goto label_320010;
        case 0x320014u: goto label_320014;
        case 0x320018u: goto label_320018;
        case 0x32001cu: goto label_32001c;
        case 0x320020u: goto label_320020;
        case 0x320024u: goto label_320024;
        case 0x320028u: goto label_320028;
        case 0x32002cu: goto label_32002c;
        case 0x320030u: goto label_320030;
        case 0x320034u: goto label_320034;
        case 0x320038u: goto label_320038;
        case 0x32003cu: goto label_32003c;
        case 0x320040u: goto label_320040;
        case 0x320044u: goto label_320044;
        case 0x320048u: goto label_320048;
        case 0x32004cu: goto label_32004c;
        case 0x320050u: goto label_320050;
        case 0x320054u: goto label_320054;
        case 0x320058u: goto label_320058;
        case 0x32005cu: goto label_32005c;
        case 0x320060u: goto label_320060;
        case 0x320064u: goto label_320064;
        case 0x320068u: goto label_320068;
        case 0x32006cu: goto label_32006c;
        case 0x320070u: goto label_320070;
        case 0x320074u: goto label_320074;
        case 0x320078u: goto label_320078;
        case 0x32007cu: goto label_32007c;
        case 0x320080u: goto label_320080;
        case 0x320084u: goto label_320084;
        case 0x320088u: goto label_320088;
        case 0x32008cu: goto label_32008c;
        case 0x320090u: goto label_320090;
        case 0x320094u: goto label_320094;
        case 0x320098u: goto label_320098;
        case 0x32009cu: goto label_32009c;
        case 0x3200a0u: goto label_3200a0;
        case 0x3200a4u: goto label_3200a4;
        case 0x3200a8u: goto label_3200a8;
        case 0x3200acu: goto label_3200ac;
        case 0x3200b0u: goto label_3200b0;
        case 0x3200b4u: goto label_3200b4;
        case 0x3200b8u: goto label_3200b8;
        case 0x3200bcu: goto label_3200bc;
        case 0x3200c0u: goto label_3200c0;
        case 0x3200c4u: goto label_3200c4;
        case 0x3200c8u: goto label_3200c8;
        case 0x3200ccu: goto label_3200cc;
        case 0x3200d0u: goto label_3200d0;
        case 0x3200d4u: goto label_3200d4;
        case 0x3200d8u: goto label_3200d8;
        case 0x3200dcu: goto label_3200dc;
        case 0x3200e0u: goto label_3200e0;
        case 0x3200e4u: goto label_3200e4;
        case 0x3200e8u: goto label_3200e8;
        case 0x3200ecu: goto label_3200ec;
        case 0x3200f0u: goto label_3200f0;
        case 0x3200f4u: goto label_3200f4;
        case 0x3200f8u: goto label_3200f8;
        case 0x3200fcu: goto label_3200fc;
        case 0x320100u: goto label_320100;
        case 0x320104u: goto label_320104;
        case 0x320108u: goto label_320108;
        case 0x32010cu: goto label_32010c;
        case 0x320110u: goto label_320110;
        case 0x320114u: goto label_320114;
        case 0x320118u: goto label_320118;
        case 0x32011cu: goto label_32011c;
        case 0x320120u: goto label_320120;
        case 0x320124u: goto label_320124;
        case 0x320128u: goto label_320128;
        case 0x32012cu: goto label_32012c;
        case 0x320130u: goto label_320130;
        case 0x320134u: goto label_320134;
        case 0x320138u: goto label_320138;
        case 0x32013cu: goto label_32013c;
        case 0x320140u: goto label_320140;
        case 0x320144u: goto label_320144;
        case 0x320148u: goto label_320148;
        case 0x32014cu: goto label_32014c;
        case 0x320150u: goto label_320150;
        case 0x320154u: goto label_320154;
        case 0x320158u: goto label_320158;
        case 0x32015cu: goto label_32015c;
        case 0x320160u: goto label_320160;
        case 0x320164u: goto label_320164;
        case 0x320168u: goto label_320168;
        case 0x32016cu: goto label_32016c;
        case 0x320170u: goto label_320170;
        case 0x320174u: goto label_320174;
        case 0x320178u: goto label_320178;
        case 0x32017cu: goto label_32017c;
        case 0x320180u: goto label_320180;
        case 0x320184u: goto label_320184;
        case 0x320188u: goto label_320188;
        case 0x32018cu: goto label_32018c;
        case 0x320190u: goto label_320190;
        case 0x320194u: goto label_320194;
        case 0x320198u: goto label_320198;
        case 0x32019cu: goto label_32019c;
        case 0x3201a0u: goto label_3201a0;
        case 0x3201a4u: goto label_3201a4;
        case 0x3201a8u: goto label_3201a8;
        case 0x3201acu: goto label_3201ac;
        case 0x3201b0u: goto label_3201b0;
        case 0x3201b4u: goto label_3201b4;
        case 0x3201b8u: goto label_3201b8;
        case 0x3201bcu: goto label_3201bc;
        case 0x3201c0u: goto label_3201c0;
        case 0x3201c4u: goto label_3201c4;
        case 0x3201c8u: goto label_3201c8;
        case 0x3201ccu: goto label_3201cc;
        case 0x3201d0u: goto label_3201d0;
        case 0x3201d4u: goto label_3201d4;
        case 0x3201d8u: goto label_3201d8;
        case 0x3201dcu: goto label_3201dc;
        case 0x3201e0u: goto label_3201e0;
        case 0x3201e4u: goto label_3201e4;
        case 0x3201e8u: goto label_3201e8;
        case 0x3201ecu: goto label_3201ec;
        case 0x3201f0u: goto label_3201f0;
        case 0x3201f4u: goto label_3201f4;
        case 0x3201f8u: goto label_3201f8;
        case 0x3201fcu: goto label_3201fc;
        case 0x320200u: goto label_320200;
        case 0x320204u: goto label_320204;
        case 0x320208u: goto label_320208;
        case 0x32020cu: goto label_32020c;
        case 0x320210u: goto label_320210;
        case 0x320214u: goto label_320214;
        case 0x320218u: goto label_320218;
        case 0x32021cu: goto label_32021c;
        case 0x320220u: goto label_320220;
        case 0x320224u: goto label_320224;
        case 0x320228u: goto label_320228;
        case 0x32022cu: goto label_32022c;
        case 0x320230u: goto label_320230;
        case 0x320234u: goto label_320234;
        case 0x320238u: goto label_320238;
        case 0x32023cu: goto label_32023c;
        case 0x320240u: goto label_320240;
        case 0x320244u: goto label_320244;
        case 0x320248u: goto label_320248;
        case 0x32024cu: goto label_32024c;
        case 0x320250u: goto label_320250;
        case 0x320254u: goto label_320254;
        case 0x320258u: goto label_320258;
        case 0x32025cu: goto label_32025c;
        case 0x320260u: goto label_320260;
        case 0x320264u: goto label_320264;
        case 0x320268u: goto label_320268;
        case 0x32026cu: goto label_32026c;
        case 0x320270u: goto label_320270;
        case 0x320274u: goto label_320274;
        case 0x320278u: goto label_320278;
        case 0x32027cu: goto label_32027c;
        case 0x320280u: goto label_320280;
        case 0x320284u: goto label_320284;
        case 0x320288u: goto label_320288;
        case 0x32028cu: goto label_32028c;
        case 0x320290u: goto label_320290;
        case 0x320294u: goto label_320294;
        case 0x320298u: goto label_320298;
        case 0x32029cu: goto label_32029c;
        case 0x3202a0u: goto label_3202a0;
        case 0x3202a4u: goto label_3202a4;
        case 0x3202a8u: goto label_3202a8;
        case 0x3202acu: goto label_3202ac;
        case 0x3202b0u: goto label_3202b0;
        case 0x3202b4u: goto label_3202b4;
        case 0x3202b8u: goto label_3202b8;
        case 0x3202bcu: goto label_3202bc;
        case 0x3202c0u: goto label_3202c0;
        case 0x3202c4u: goto label_3202c4;
        case 0x3202c8u: goto label_3202c8;
        case 0x3202ccu: goto label_3202cc;
        case 0x3202d0u: goto label_3202d0;
        case 0x3202d4u: goto label_3202d4;
        case 0x3202d8u: goto label_3202d8;
        case 0x3202dcu: goto label_3202dc;
        case 0x3202e0u: goto label_3202e0;
        case 0x3202e4u: goto label_3202e4;
        case 0x3202e8u: goto label_3202e8;
        case 0x3202ecu: goto label_3202ec;
        case 0x3202f0u: goto label_3202f0;
        case 0x3202f4u: goto label_3202f4;
        case 0x3202f8u: goto label_3202f8;
        case 0x3202fcu: goto label_3202fc;
        case 0x320300u: goto label_320300;
        case 0x320304u: goto label_320304;
        case 0x320308u: goto label_320308;
        case 0x32030cu: goto label_32030c;
        case 0x320310u: goto label_320310;
        case 0x320314u: goto label_320314;
        case 0x320318u: goto label_320318;
        case 0x32031cu: goto label_32031c;
        case 0x320320u: goto label_320320;
        case 0x320324u: goto label_320324;
        case 0x320328u: goto label_320328;
        case 0x32032cu: goto label_32032c;
        case 0x320330u: goto label_320330;
        case 0x320334u: goto label_320334;
        case 0x320338u: goto label_320338;
        case 0x32033cu: goto label_32033c;
        case 0x320340u: goto label_320340;
        case 0x320344u: goto label_320344;
        case 0x320348u: goto label_320348;
        case 0x32034cu: goto label_32034c;
        case 0x320350u: goto label_320350;
        case 0x320354u: goto label_320354;
        case 0x320358u: goto label_320358;
        case 0x32035cu: goto label_32035c;
        case 0x320360u: goto label_320360;
        case 0x320364u: goto label_320364;
        case 0x320368u: goto label_320368;
        case 0x32036cu: goto label_32036c;
        case 0x320370u: goto label_320370;
        case 0x320374u: goto label_320374;
        case 0x320378u: goto label_320378;
        case 0x32037cu: goto label_32037c;
        case 0x320380u: goto label_320380;
        case 0x320384u: goto label_320384;
        case 0x320388u: goto label_320388;
        case 0x32038cu: goto label_32038c;
        case 0x320390u: goto label_320390;
        case 0x320394u: goto label_320394;
        case 0x320398u: goto label_320398;
        case 0x32039cu: goto label_32039c;
        case 0x3203a0u: goto label_3203a0;
        case 0x3203a4u: goto label_3203a4;
        case 0x3203a8u: goto label_3203a8;
        case 0x3203acu: goto label_3203ac;
        case 0x3203b0u: goto label_3203b0;
        case 0x3203b4u: goto label_3203b4;
        case 0x3203b8u: goto label_3203b8;
        case 0x3203bcu: goto label_3203bc;
        case 0x3203c0u: goto label_3203c0;
        case 0x3203c4u: goto label_3203c4;
        case 0x3203c8u: goto label_3203c8;
        case 0x3203ccu: goto label_3203cc;
        case 0x3203d0u: goto label_3203d0;
        case 0x3203d4u: goto label_3203d4;
        case 0x3203d8u: goto label_3203d8;
        case 0x3203dcu: goto label_3203dc;
        case 0x3203e0u: goto label_3203e0;
        case 0x3203e4u: goto label_3203e4;
        case 0x3203e8u: goto label_3203e8;
        case 0x3203ecu: goto label_3203ec;
        case 0x3203f0u: goto label_3203f0;
        case 0x3203f4u: goto label_3203f4;
        case 0x3203f8u: goto label_3203f8;
        case 0x3203fcu: goto label_3203fc;
        case 0x320400u: goto label_320400;
        case 0x320404u: goto label_320404;
        case 0x320408u: goto label_320408;
        case 0x32040cu: goto label_32040c;
        case 0x320410u: goto label_320410;
        case 0x320414u: goto label_320414;
        case 0x320418u: goto label_320418;
        case 0x32041cu: goto label_32041c;
        case 0x320420u: goto label_320420;
        case 0x320424u: goto label_320424;
        case 0x320428u: goto label_320428;
        case 0x32042cu: goto label_32042c;
        case 0x320430u: goto label_320430;
        case 0x320434u: goto label_320434;
        case 0x320438u: goto label_320438;
        case 0x32043cu: goto label_32043c;
        case 0x320440u: goto label_320440;
        case 0x320444u: goto label_320444;
        case 0x320448u: goto label_320448;
        case 0x32044cu: goto label_32044c;
        case 0x320450u: goto label_320450;
        case 0x320454u: goto label_320454;
        case 0x320458u: goto label_320458;
        case 0x32045cu: goto label_32045c;
        case 0x320460u: goto label_320460;
        case 0x320464u: goto label_320464;
        case 0x320468u: goto label_320468;
        case 0x32046cu: goto label_32046c;
        case 0x320470u: goto label_320470;
        case 0x320474u: goto label_320474;
        case 0x320478u: goto label_320478;
        case 0x32047cu: goto label_32047c;
        case 0x320480u: goto label_320480;
        case 0x320484u: goto label_320484;
        case 0x320488u: goto label_320488;
        case 0x32048cu: goto label_32048c;
        case 0x320490u: goto label_320490;
        case 0x320494u: goto label_320494;
        case 0x320498u: goto label_320498;
        case 0x32049cu: goto label_32049c;
        case 0x3204a0u: goto label_3204a0;
        case 0x3204a4u: goto label_3204a4;
        case 0x3204a8u: goto label_3204a8;
        case 0x3204acu: goto label_3204ac;
        case 0x3204b0u: goto label_3204b0;
        case 0x3204b4u: goto label_3204b4;
        case 0x3204b8u: goto label_3204b8;
        case 0x3204bcu: goto label_3204bc;
        case 0x3204c0u: goto label_3204c0;
        case 0x3204c4u: goto label_3204c4;
        case 0x3204c8u: goto label_3204c8;
        case 0x3204ccu: goto label_3204cc;
        case 0x3204d0u: goto label_3204d0;
        case 0x3204d4u: goto label_3204d4;
        case 0x3204d8u: goto label_3204d8;
        case 0x3204dcu: goto label_3204dc;
        case 0x3204e0u: goto label_3204e0;
        case 0x3204e4u: goto label_3204e4;
        case 0x3204e8u: goto label_3204e8;
        case 0x3204ecu: goto label_3204ec;
        case 0x3204f0u: goto label_3204f0;
        case 0x3204f4u: goto label_3204f4;
        case 0x3204f8u: goto label_3204f8;
        case 0x3204fcu: goto label_3204fc;
        default: break;
    }

    ctx->pc = 0x31fd70u;

label_31fd70:
    // 0x31fd70: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x31fd70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_31fd74:
    // 0x31fd74: 0x8f82bce0  lw          $v0, -0x4320($gp)
    ctx->pc = 0x31fd74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950112)));
label_31fd78:
    // 0x31fd78: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x31fd78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
label_31fd7c:
    // 0x31fd7c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x31fd7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_31fd80:
    // 0x31fd80: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x31fd80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
label_31fd84:
    // 0x31fd84: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x31fd84u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_31fd88:
    // 0x31fd88: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x31fd88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
label_31fd8c:
    // 0x31fd8c: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x31fd8cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_31fd90:
    // 0x31fd90: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x31fd90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
label_31fd94:
    // 0x31fd94: 0x242b821  addu        $s7, $s2, $v0
    ctx->pc = 0x31fd94u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_31fd98:
    // 0x31fd98: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x31fd98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
label_31fd9c:
    // 0x31fd9c: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x31fd9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_31fda0:
    // 0x31fda0: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x31fda0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_31fda4:
    // 0x31fda4: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x31fda4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
label_31fda8:
    // 0x31fda8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x31fda8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_31fdac:
    // 0x31fdac: 0xc103468  jal         func_40D1A0
label_31fdb0:
    if (ctx->pc == 0x31FDB0u) {
        ctx->pc = 0x31FDB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FDACu;
        // 0x31fdb0: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31FDB4u;
        goto label_31fdb4;
    }
    ctx->pc = 0x31FDACu;
    SET_GPR_U32(ctx, 31, 0x31FDB4u);
    ctx->pc = 0x31FDB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31FDACu;
    // 0x31fdb0: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D1A0u, 0x31FDACu, 0x31FDB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31FDB4u;
label_31fdb4:
    // 0x31fdb4: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_31fdb8:
    if (ctx->pc == 0x31FDB8u) {
        ctx->pc = 0x31FDB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FDB4u;
        // 0x31fdb8: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31FDBCu;
        goto label_31fdbc;
    }
    ctx->pc = 0x31FDB4u;
    {
        const bool branch_taken_0x31fdb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31FDB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FDB4u;
        // 0x31fdb8: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31fdb4) {
            ctx->pc = 0x31FDF4u;
            goto label_31fdf4;
        }
    }
    ctx->pc = 0x31FDBCu;
label_31fdbc:
    // 0x31fdbc: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x31fdbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_31fdc0:
    // 0x31fdc0: 0x1462006d  bne         $v1, $v0, . + 4 + (0x6D << 2)
label_31fdc4:
    if (ctx->pc == 0x31FDC4u) {
        ctx->pc = 0x31FDC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FDC0u;
        // 0x31fdc4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31FDC8u;
        goto label_31fdc8;
    }
    ctx->pc = 0x31FDC0u;
    {
        const bool branch_taken_0x31fdc0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x31FDC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FDC0u;
        // 0x31fdc4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31fdc0) {
            ctx->pc = 0x31FF78u;
            goto label_31ff78;
        }
    }
    ctx->pc = 0x31FDC8u;
label_31fdc8:
    // 0x31fdc8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x31fdc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_31fdcc:
    // 0x31fdcc: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x31fdccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_31fdd0:
    // 0x31fdd0: 0xc103468  jal         func_40D1A0
label_31fdd4:
    if (ctx->pc == 0x31FDD4u) {
        ctx->pc = 0x31FDD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FDD0u;
        // 0x31fdd4: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31FDD8u;
        goto label_31fdd8;
    }
    ctx->pc = 0x31FDD0u;
    SET_GPR_U32(ctx, 31, 0x31FDD8u);
    ctx->pc = 0x31FDD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31FDD0u;
    // 0x31fdd4: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D1A0u, 0x31FDD0u, 0x31FDD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31FDD8u;
label_31fdd8:
    // 0x31fdd8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_31fddc:
    if (ctx->pc == 0x31FDDCu) {
        ctx->pc = 0x31FDDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FDD8u;
        // 0x31fddc: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31FDE0u;
        goto label_31fde0;
    }
    ctx->pc = 0x31FDD8u;
    {
        const bool branch_taken_0x31fdd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31FDDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FDD8u;
        // 0x31fddc: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31fdd8) {
            ctx->pc = 0x31FDF4u;
            goto label_31fdf4;
        }
    }
    ctx->pc = 0x31FDE0u;
label_31fde0:
    // 0x31fde0: 0x37a50004  ori         $a1, $sp, 0x4
    ctx->pc = 0x31fde0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
label_31fde4:
    // 0x31fde4: 0xc103468  jal         func_40D1A0
label_31fde8:
    if (ctx->pc == 0x31FDE8u) {
        ctx->pc = 0x31FDE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FDE4u;
        // 0x31fde8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31FDECu;
        goto label_31fdec;
    }
    ctx->pc = 0x31FDE4u;
    SET_GPR_U32(ctx, 31, 0x31FDECu);
    ctx->pc = 0x31FDE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31FDE4u;
    // 0x31fde8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D1A0u, 0x31FDE4u, 0x31FDECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31FDECu;
label_31fdec:
    // 0x31fdec: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_31fdf0:
    if (ctx->pc == 0x31FDF0u) {
        ctx->pc = 0x31FDF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FDECu;
        // 0x31fdf0: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31FDF4u;
        goto label_31fdf4;
    }
    ctx->pc = 0x31FDECu;
    {
        const bool branch_taken_0x31fdec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31FDF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FDECu;
        // 0x31fdf0: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31fdec) {
            ctx->pc = 0x31FDFCu;
            goto label_31fdfc;
        }
    }
    ctx->pc = 0x31FDF4u;
label_31fdf4:
    // 0x31fdf4: 0x10000060  b           . + 4 + (0x60 << 2)
label_31fdf8:
    if (ctx->pc == 0x31FDF8u) {
        ctx->pc = 0x31FDF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FDF4u;
        // 0x31fdf8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31FDFCu;
        goto label_31fdfc;
    }
    ctx->pc = 0x31FDF4u;
    {
        const bool branch_taken_0x31fdf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31FDF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FDF4u;
        // 0x31fdf8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31fdf4) {
            ctx->pc = 0x31FF78u;
            goto label_31ff78;
        }
    }
    ctx->pc = 0x31FDFCu;
label_31fdfc:
    // 0x31fdfc: 0x1840005d  blez        $v0, . + 4 + (0x5D << 2)
label_31fe00:
    if (ctx->pc == 0x31FE00u) {
        ctx->pc = 0x31FE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FDFCu;
        // 0x31fe00: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31FE04u;
        goto label_31fe04;
    }
    ctx->pc = 0x31FDFCu;
    {
        const bool branch_taken_0x31fdfc = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x31FE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FDFCu;
        // 0x31fe00: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31fdfc) {
            ctx->pc = 0x31FF74u;
            goto label_31ff74;
        }
    }
    ctx->pc = 0x31FE04u;
label_31fe04:
    // 0x31fe04: 0x37a50008  ori         $a1, $sp, 0x8
    ctx->pc = 0x31fe04u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)8);
label_31fe08:
    // 0x31fe08: 0xc103468  jal         func_40D1A0
label_31fe0c:
    if (ctx->pc == 0x31FE0Cu) {
        ctx->pc = 0x31FE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FE08u;
        // 0x31fe0c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31FE10u;
        goto label_31fe10;
    }
    ctx->pc = 0x31FE08u;
    SET_GPR_U32(ctx, 31, 0x31FE10u);
    ctx->pc = 0x31FE0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31FE08u;
    // 0x31fe0c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D1A0u, 0x31FE08u, 0x31FE10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31FE10u;
label_31fe10:
    // 0x31fe10: 0x1040fff8  beqz        $v0, . + 4 + (-0x8 << 2)
label_31fe14:
    if (ctx->pc == 0x31FE14u) {
        ctx->pc = 0x31FE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FE10u;
        // 0x31fe14: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31FE18u;
        goto label_31fe18;
    }
    ctx->pc = 0x31FE10u;
    {
        const bool branch_taken_0x31fe10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31FE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FE10u;
        // 0x31fe14: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31fe10) {
            ctx->pc = 0x31FDF4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31fdf4;
        }
    }
    ctx->pc = 0x31FE18u;
label_31fe18:
    // 0x31fe18: 0x37a5000c  ori         $a1, $sp, 0xC
    ctx->pc = 0x31fe18u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)12);
label_31fe1c:
    // 0x31fe1c: 0xc103468  jal         func_40D1A0
label_31fe20:
    if (ctx->pc == 0x31FE20u) {
        ctx->pc = 0x31FE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FE1Cu;
        // 0x31fe20: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31FE24u;
        goto label_31fe24;
    }
    ctx->pc = 0x31FE1Cu;
    SET_GPR_U32(ctx, 31, 0x31FE24u);
    ctx->pc = 0x31FE20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31FE1Cu;
    // 0x31fe20: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D1A0u, 0x31FE1Cu, 0x31FE24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31FE24u;
label_31fe24:
    // 0x31fe24: 0x1040fff3  beqz        $v0, . + 4 + (-0xD << 2)
label_31fe28:
    if (ctx->pc == 0x31FE28u) {
        ctx->pc = 0x31FE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FE24u;
        // 0x31fe28: 0x3c020062  lui         $v0, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31FE2Cu;
        goto label_31fe2c;
    }
    ctx->pc = 0x31FE24u;
    {
        const bool branch_taken_0x31fe24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31FE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FE24u;
        // 0x31fe28: 0x3c020062  lui         $v0, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31fe24) {
            ctx->pc = 0x31FDF4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31fdf4;
        }
    }
    ctx->pc = 0x31FE2Cu;
label_31fe2c:
    // 0x31fe2c: 0x8f84bce4  lw          $a0, -0x431C($gp)
    ctx->pc = 0x31fe2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950116)));
label_31fe30:
    // 0x31fe30: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x31fe30u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_31fe34:
    // 0x31fe34: 0x2450e880  addiu       $s0, $v0, -0x1780
    ctx->pc = 0x31fe34u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
label_31fe38:
    // 0x31fe38: 0x8e020118  lw          $v0, 0x118($s0)
    ctx->pc = 0x31fe38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 280)));
label_31fe3c:
    // 0x31fe3c: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x31fe3cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_31fe40:
    // 0x31fe40: 0x40f809  jalr        $v0
label_31fe44:
    if (ctx->pc == 0x31FE44u) {
        ctx->pc = 0x31FE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FE40u;
        // 0x31fe44: 0x34a5011e  ori         $a1, $a1, 0x11E (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)286);
        ctx->in_delay_slot = false;
        ctx->pc = 0x31FE48u;
        goto label_31fe48;
    }
    ctx->pc = 0x31FE40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x31FE48u);
        ctx->pc = 0x31FE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FE40u;
        // 0x31fe44: 0x34a5011e  ori         $a1, $a1, 0x11E (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)286);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31FE40u, 0x31FE48u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x31FE48u;
label_31fe48:
    // 0x31fe48: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x31fe48u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_31fe4c:
    // 0x31fe4c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x31fe4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31fe50:
    // 0x31fe50: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x31fe50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_31fe54:
    // 0x31fe54: 0xc0bb7e6  jal         func_2EDF98
label_31fe58:
    if (ctx->pc == 0x31FE58u) {
        ctx->pc = 0x31FE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FE54u;
        // 0x31fe58: 0x24060024  addiu       $a2, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31FE5Cu;
        goto label_31fe5c;
    }
    ctx->pc = 0x31FE54u;
    SET_GPR_U32(ctx, 31, 0x31FE5Cu);
    ctx->pc = 0x31FE58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31FE54u;
    // 0x31fe58: 0x24060024  addiu       $a2, $zero, 0x24 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF98u, 0x31FE54u, 0x31FE5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31FE5Cu;
label_31fe5c:
    // 0x31fe5c: 0x12200044  beqz        $s1, . + 4 + (0x44 << 2)
label_31fe60:
    if (ctx->pc == 0x31FE60u) {
        ctx->pc = 0x31FE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FE5Cu;
        // 0x31fe60: 0x8fa40004  lw          $a0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31FE64u;
        goto label_31fe64;
    }
    ctx->pc = 0x31FE5Cu;
    {
        const bool branch_taken_0x31fe5c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x31FE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FE5Cu;
        // 0x31fe60: 0x8fa40004  lw          $a0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31fe5c) {
            ctx->pc = 0x31FF70u;
            goto label_31ff70;
        }
    }
    ctx->pc = 0x31FE64u;
label_31fe64:
    // 0x31fe64: 0xc0ef372  jal         func_3BCDC8
label_31fe68:
    if (ctx->pc == 0x31FE68u) {
        ctx->pc = 0x31FE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FE64u;
        // 0x31fe68: 0x8fa5000c  lw          $a1, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31FE6Cu;
        goto label_31fe6c;
    }
    ctx->pc = 0x31FE64u;
    SET_GPR_U32(ctx, 31, 0x31FE6Cu);
    ctx->pc = 0x31FE68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31FE64u;
    // 0x31fe68: 0x8fa5000c  lw          $a1, 0xC($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BCDC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BCDC8u, 0x31FE64u, 0x31FE6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31FE6Cu;
label_31fe6c:
    // 0x31fe6c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x31fe6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_31fe70:
    // 0x31fe70: 0xae320014  sw          $s2, 0x14($s1)
    ctx->pc = 0x31fe70u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 18));
label_31fe74:
    // 0x31fe74: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x31fe74u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_31fe78:
    // 0x31fe78: 0xae220020  sw          $v0, 0x20($s1)
    ctx->pc = 0x31fe78u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
label_31fe7c:
    // 0x31fe7c: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x31fe7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_31fe80:
    // 0x31fe80: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x31fe80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_31fe84:
    // 0x31fe84: 0xae310018  sw          $s1, 0x18($s1)
    ctx->pc = 0x31fe84u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 17));
label_31fe88:
    // 0x31fe88: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_31fe8c:
    if (ctx->pc == 0x31FE8Cu) {
        ctx->pc = 0x31FE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FE88u;
        // 0x31fe8c: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31FE90u;
        goto label_31fe90;
    }
    ctx->pc = 0x31FE88u;
    {
        const bool branch_taken_0x31fe88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x31FE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FE88u;
        // 0x31fe8c: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31fe88) {
            ctx->pc = 0x31FE9Cu;
            goto label_31fe9c;
        }
    }
    ctx->pc = 0x31FE90u;
label_31fe90:
    // 0x31fe90: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x31fe90u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
label_31fe94:
    // 0x31fe94: 0x1000000e  b           . + 4 + (0xE << 2)
label_31fe98:
    if (ctx->pc == 0x31FE98u) {
        ctx->pc = 0x31FE98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FE94u;
        // 0x31fe98: 0xae20000c  sw          $zero, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31FE9Cu;
        goto label_31fe9c;
    }
    ctx->pc = 0x31FE94u;
    {
        const bool branch_taken_0x31fe94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31FE98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FE94u;
        // 0x31fe98: 0xae20000c  sw          $zero, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31fe94) {
            ctx->pc = 0x31FED0u;
            goto label_31fed0;
        }
    }
    ctx->pc = 0x31FE9Cu;
label_31fe9c:
    // 0x31fe9c: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x31fe9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_31fea0:
    // 0x31fea0: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x31fea0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_31fea4:
    // 0x31fea4: 0x8e020108  lw          $v0, 0x108($s0)
    ctx->pc = 0x31fea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
label_31fea8:
    // 0x31fea8: 0x34a5011e  ori         $a1, $a1, 0x11E
    ctx->pc = 0x31fea8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)286);
label_31feac:
    // 0x31feac: 0x42180  sll         $a0, $a0, 6
    ctx->pc = 0x31feacu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
label_31feb0:
    // 0x31feb0: 0x40f809  jalr        $v0
label_31feb4:
    if (ctx->pc == 0x31FEB4u) {
        ctx->pc = 0x31FEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FEB0u;
        // 0x31feb4: 0x3484000f  ori         $a0, $a0, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        ctx->pc = 0x31FEB8u;
        goto label_31feb8;
    }
    ctx->pc = 0x31FEB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x31FEB8u);
        ctx->pc = 0x31FEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FEB0u;
        // 0x31feb4: 0x3484000f  ori         $a0, $a0, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31FEB0u, 0x31FEB8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x31FEB8u;
label_31feb8:
    // 0x31feb8: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x31feb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_31febc:
    // 0x31febc: 0x2444000f  addiu       $a0, $v0, 0xF
    ctx->pc = 0x31febcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
label_31fec0:
    // 0x31fec0: 0x3463fff0  ori         $v1, $v1, 0xFFF0
    ctx->pc = 0x31fec0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65520);
label_31fec4:
    // 0x31fec4: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x31fec4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
label_31fec8:
    // 0x31fec8: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x31fec8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_31fecc:
    // 0x31fecc: 0xae240008  sw          $a0, 0x8($s1)
    ctx->pc = 0x31feccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 4));
label_31fed0:
    // 0x31fed0: 0x2663e880  addiu       $v1, $s3, -0x1780
    ctx->pc = 0x31fed0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294961280));
label_31fed4:
    // 0x31fed4: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x31fed4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_31fed8:
    // 0x31fed8: 0x8c620108  lw          $v0, 0x108($v1)
    ctx->pc = 0x31fed8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 264)));
label_31fedc:
    // 0x31fedc: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x31fedcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_31fee0:
    // 0x31fee0: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x31fee0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_31fee4:
    // 0x31fee4: 0x40f809  jalr        $v0
label_31fee8:
    if (ctx->pc == 0x31FEE8u) {
        ctx->pc = 0x31FEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FEE4u;
        // 0x31fee8: 0x34a5011e  ori         $a1, $a1, 0x11E (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)286);
        ctx->in_delay_slot = false;
        ctx->pc = 0x31FEECu;
        goto label_31feec;
    }
    ctx->pc = 0x31FEE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x31FEECu);
        ctx->pc = 0x31FEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FEE4u;
        // 0x31fee8: 0x34a5011e  ori         $a1, $a1, 0x11E (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)286);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31FEE4u, 0x31FEECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x31FEECu;
label_31feec:
    // 0x31feec: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x31feecu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31fef0:
    // 0x31fef0: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x31fef0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_31fef4:
    // 0x31fef4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x31fef4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_31fef8:
    // 0x31fef8: 0x1860001d  blez        $v1, . + 4 + (0x1D << 2)
label_31fefc:
    if (ctx->pc == 0x31FEFCu) {
        ctx->pc = 0x31FEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FEF8u;
        // 0x31fefc: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31FF00u;
        goto label_31ff00;
    }
    ctx->pc = 0x31FEF8u;
    {
        const bool branch_taken_0x31fef8 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x31FEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FEF8u;
        // 0x31fefc: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31fef8) {
            ctx->pc = 0x31FF70u;
            goto label_31ff70;
        }
    }
    ctx->pc = 0x31FF00u;
label_31ff00:
    // 0x31ff00: 0x26140008  addiu       $s4, $s0, 0x8
    ctx->pc = 0x31ff00u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_31ff04:
    // 0x31ff04: 0x26130004  addiu       $s3, $s0, 0x4
    ctx->pc = 0x31ff04u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_31ff08:
    // 0x31ff08: 0x2612000c  addiu       $s2, $s0, 0xC
    ctx->pc = 0x31ff08u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_31ff0c:
    // 0x31ff0c: 0x0  nop
    ctx->pc = 0x31ff0cu;
    // NOP
label_31ff10:
    // 0x31ff10: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x31ff10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_31ff14:
    // 0x31ff14: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x31ff14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_31ff18:
    // 0x31ff18: 0xc103468  jal         func_40D1A0
label_31ff1c:
    if (ctx->pc == 0x31FF1Cu) {
        ctx->pc = 0x31FF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FF18u;
        // 0x31ff1c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31FF20u;
        goto label_31ff20;
    }
    ctx->pc = 0x31FF18u;
    SET_GPR_U32(ctx, 31, 0x31FF20u);
    ctx->pc = 0x31FF1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31FF18u;
    // 0x31ff1c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D1A0u, 0x31FF18u, 0x31FF20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31FF20u;
label_31ff20:
    // 0x31ff20: 0x1040ffb4  beqz        $v0, . + 4 + (-0x4C << 2)
label_31ff24:
    if (ctx->pc == 0x31FF24u) {
        ctx->pc = 0x31FF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FF20u;
        // 0x31ff24: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31FF28u;
        goto label_31ff28;
    }
    ctx->pc = 0x31FF20u;
    {
        const bool branch_taken_0x31ff20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31FF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FF20u;
        // 0x31ff24: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ff20) {
            ctx->pc = 0x31FDF4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31fdf4;
        }
    }
    ctx->pc = 0x31FF28u;
label_31ff28:
    // 0x31ff28: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x31ff28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_31ff2c:
    // 0x31ff2c: 0xc103468  jal         func_40D1A0
label_31ff30:
    if (ctx->pc == 0x31FF30u) {
        ctx->pc = 0x31FF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FF2Cu;
        // 0x31ff30: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31FF34u;
        goto label_31ff34;
    }
    ctx->pc = 0x31FF2Cu;
    SET_GPR_U32(ctx, 31, 0x31FF34u);
    ctx->pc = 0x31FF30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31FF2Cu;
    // 0x31ff30: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D1A0u, 0x31FF2Cu, 0x31FF34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31FF34u;
label_31ff34:
    // 0x31ff34: 0x1040ffaf  beqz        $v0, . + 4 + (-0x51 << 2)
label_31ff38:
    if (ctx->pc == 0x31FF38u) {
        ctx->pc = 0x31FF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FF34u;
        // 0x31ff38: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31FF3Cu;
        goto label_31ff3c;
    }
    ctx->pc = 0x31FF34u;
    {
        const bool branch_taken_0x31ff34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31FF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FF34u;
        // 0x31ff38: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ff34) {
            ctx->pc = 0x31FDF4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31fdf4;
        }
    }
    ctx->pc = 0x31FF3Cu;
label_31ff3c:
    // 0x31ff3c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x31ff3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_31ff40:
    // 0x31ff40: 0xc103468  jal         func_40D1A0
label_31ff44:
    if (ctx->pc == 0x31FF44u) {
        ctx->pc = 0x31FF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FF40u;
        // 0x31ff44: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31FF48u;
        goto label_31ff48;
    }
    ctx->pc = 0x31FF40u;
    SET_GPR_U32(ctx, 31, 0x31FF48u);
    ctx->pc = 0x31FF44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31FF40u;
    // 0x31ff44: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D1A0u, 0x31FF40u, 0x31FF48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31FF48u;
label_31ff48:
    // 0x31ff48: 0x1040ffaa  beqz        $v0, . + 4 + (-0x56 << 2)
label_31ff4c:
    if (ctx->pc == 0x31FF4Cu) {
        ctx->pc = 0x31FF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FF48u;
        // 0x31ff4c: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31FF50u;
        goto label_31ff50;
    }
    ctx->pc = 0x31FF48u;
    {
        const bool branch_taken_0x31ff48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31FF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FF48u;
        // 0x31ff4c: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ff48) {
            ctx->pc = 0x31FDF4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31fdf4;
        }
    }
    ctx->pc = 0x31FF50u;
label_31ff50:
    // 0x31ff50: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x31ff50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_31ff54:
    // 0x31ff54: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x31ff54u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_31ff58:
    // 0x31ff58: 0x26940010  addiu       $s4, $s4, 0x10
    ctx->pc = 0x31ff58u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
label_31ff5c:
    // 0x31ff5c: 0x2a2102a  slt         $v0, $s5, $v0
    ctx->pc = 0x31ff5cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_31ff60:
    // 0x31ff60: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x31ff60u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_31ff64:
    // 0x31ff64: 0x26730010  addiu       $s3, $s3, 0x10
    ctx->pc = 0x31ff64u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
label_31ff68:
    // 0x31ff68: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
label_31ff6c:
    if (ctx->pc == 0x31FF6Cu) {
        ctx->pc = 0x31FF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FF68u;
        // 0x31ff6c: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31FF70u;
        goto label_31ff70;
    }
    ctx->pc = 0x31FF68u;
    {
        const bool branch_taken_0x31ff68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31FF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FF68u;
        // 0x31ff6c: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ff68) {
            ctx->pc = 0x31FF10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31ff10;
        }
    }
    ctx->pc = 0x31FF70u;
label_31ff70:
    // 0x31ff70: 0xaef10004  sw          $s1, 0x4($s7)
    ctx->pc = 0x31ff70u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 4), GPR_U32(ctx, 17));
label_31ff74:
    // 0x31ff74: 0x2c0102d  daddu       $v0, $s6, $zero
    ctx->pc = 0x31ff74u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_31ff78:
    // 0x31ff78: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x31ff78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_31ff7c:
    // 0x31ff7c: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x31ff7cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_31ff80:
    // 0x31ff80: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x31ff80u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_31ff84:
    // 0x31ff84: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x31ff84u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_31ff88:
    // 0x31ff88: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x31ff88u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_31ff8c:
    // 0x31ff8c: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x31ff8cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_31ff90:
    // 0x31ff90: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x31ff90u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_31ff94:
    // 0x31ff94: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x31ff94u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_31ff98:
    // 0x31ff98: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x31ff98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_31ff9c:
    // 0x31ff9c: 0x3e00008  jr          $ra
label_31ffa0:
    if (ctx->pc == 0x31FFA0u) {
        ctx->pc = 0x31FFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FF9Cu;
        // 0x31ffa0: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31FFA4u;
        goto label_31ffa4;
    }
    ctx->pc = 0x31FF9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31FFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FF9Cu;
        // 0x31ffa0: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31FF9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31FFA4u;
label_31ffa4:
    // 0x31ffa4: 0x0  nop
    ctx->pc = 0x31ffa4u;
    // NOP
label_31ffa8:
    // 0x31ffa8: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x31ffa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
label_31ffac:
    // 0x31ffac: 0x7fb00100  sq          $s0, 0x100($sp)
    ctx->pc = 0x31ffacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 16));
label_31ffb0:
    // 0x31ffb0: 0x7fb200e0  sq          $s2, 0xE0($sp)
    ctx->pc = 0x31ffb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 18));
label_31ffb4:
    // 0x31ffb4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x31ffb4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_31ffb8:
    // 0x31ffb8: 0x7fb300d0  sq          $s3, 0xD0($sp)
    ctx->pc = 0x31ffb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 19));
label_31ffbc:
    // 0x31ffbc: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x31ffbcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_31ffc0:
    // 0x31ffc0: 0x7fb500b0  sq          $s5, 0xB0($sp)
    ctx->pc = 0x31ffc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 21));
label_31ffc4:
    // 0x31ffc4: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x31ffc4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_31ffc8:
    // 0x31ffc8: 0x7fb100f0  sq          $s1, 0xF0($sp)
    ctx->pc = 0x31ffc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 17));
label_31ffcc:
    // 0x31ffcc: 0x131900  sll         $v1, $s3, 4
    ctx->pc = 0x31ffccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
label_31ffd0:
    // 0x31ffd0: 0x7fb400c0  sq          $s4, 0xC0($sp)
    ctx->pc = 0x31ffd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 20));
label_31ffd4:
    // 0x31ffd4: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x31ffd4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_31ffd8:
    // 0x31ffd8: 0x7fb600a0  sq          $s6, 0xA0($sp)
    ctx->pc = 0x31ffd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 22));
label_31ffdc:
    // 0x31ffdc: 0x7fb70090  sq          $s7, 0x90($sp)
    ctx->pc = 0x31ffdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 23));
label_31ffe0:
    // 0x31ffe0: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x31ffe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_31ffe4:
    // 0x31ffe4: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x31ffe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_31ffe8:
    // 0x31ffe8: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x31ffe8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_31ffec:
    // 0x31ffec: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x31ffecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_31fff0:
    // 0x31fff0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x31fff0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_31fff4:
    // 0x31fff4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_31fff8:
    if (ctx->pc == 0x31FFF8u) {
        ctx->pc = 0x31FFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FFF4u;
        // 0x31fff8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31FFFCu;
        goto label_31fffc;
    }
    ctx->pc = 0x31FFF4u;
    {
        const bool branch_taken_0x31fff4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31FFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FFF4u;
        // 0x31fff8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31fff4) {
            ctx->pc = 0x320004u;
            goto label_320004;
        }
    }
    ctx->pc = 0x31FFFCu;
label_31fffc:
    // 0x31fffc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x31fffcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_320000:
    // 0x320000: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x320000u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_320004:
    // 0x320004: 0x60b02d  daddu       $s6, $v1, $zero
    ctx->pc = 0x320004u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_320008:
    // 0x320008: 0x34d40001  ori         $s4, $a2, 0x1
    ctx->pc = 0x320008u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)1);
label_32000c:
    // 0x32000c: 0x10e0000b  beqz        $a3, . + 4 + (0xB << 2)
label_320010:
    if (ctx->pc == 0x320010u) {
        ctx->pc = 0x320010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32000Cu;
        // 0x320010: 0x13b980  sll         $s7, $s3, 6 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 19), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x320014u;
        goto label_320014;
    }
    ctx->pc = 0x32000Cu;
    {
        const bool branch_taken_0x32000c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x320010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32000Cu;
        // 0x320010: 0x13b980  sll         $s7, $s3, 6 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 19), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32000c) {
            ctx->pc = 0x32003Cu;
            goto label_32003c;
        }
    }
    ctx->pc = 0x320014u;
label_320014:
    // 0x320014: 0x24850008  addiu       $a1, $a0, 0x8
    ctx->pc = 0x320014u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_320018:
    // 0x320018: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x320018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_32001c:
    // 0x32001c: 0x24e40001  addiu       $a0, $a3, 0x1
    ctx->pc = 0x32001cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_320020:
    // 0x320020: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x320020u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_320024:
    // 0x320024: 0x30430002  andi        $v1, $v0, 0x2
    ctx->pc = 0x320024u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_320028:
    // 0x320028: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x320028u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_32002c:
    // 0x32002c: 0x83380b  movn        $a3, $a0, $v1
    ctx->pc = 0x32002cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 4));
label_320030:
    // 0x320030: 0xe23823  subu        $a3, $a3, $v0
    ctx->pc = 0x320030u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
label_320034:
    // 0x320034: 0x14e0fff8  bnez        $a3, . + 4 + (-0x8 << 2)
label_320038:
    if (ctx->pc == 0x320038u) {
        ctx->pc = 0x320038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320034u;
        // 0x320038: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32003Cu;
        goto label_32003c;
    }
    ctx->pc = 0x320034u;
    {
        const bool branch_taken_0x320034 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x320038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320034u;
        // 0x320038: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320034) {
            ctx->pc = 0x320018u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_320018;
        }
    }
    ctx->pc = 0x32003Cu;
label_32003c:
    // 0x32003c: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x32003cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_320040:
    // 0x320040: 0x8f84bce4  lw          $a0, -0x431C($gp)
    ctx->pc = 0x320040u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950116)));
label_320044:
    // 0x320044: 0x2463e880  addiu       $v1, $v1, -0x1780
    ctx->pc = 0x320044u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961280));
label_320048:
    // 0x320048: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x320048u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_32004c:
    // 0x32004c: 0x8c620118  lw          $v0, 0x118($v1)
    ctx->pc = 0x32004cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 280)));
label_320050:
    // 0x320050: 0x40f809  jalr        $v0
label_320054:
    if (ctx->pc == 0x320054u) {
        ctx->pc = 0x320054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320050u;
        // 0x320054: 0x34a5011e  ori         $a1, $a1, 0x11E (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)286);
        ctx->in_delay_slot = false;
        ctx->pc = 0x320058u;
        goto label_320058;
    }
    ctx->pc = 0x320050u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x320058u);
        ctx->pc = 0x320054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320050u;
        // 0x320054: 0x34a5011e  ori         $a1, $a1, 0x11E (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)286);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x320050u, 0x320058u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x320058u;
label_320058:
    // 0x320058: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x320058u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32005c:
    // 0x32005c: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x32005cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_320060:
    // 0x320060: 0xae340000  sw          $s4, 0x0($s1)
    ctx->pc = 0x320060u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 20));
label_320064:
    // 0x320064: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x320064u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_320068:
    // 0x320068: 0xae320004  sw          $s2, 0x4($s1)
    ctx->pc = 0x320068u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 18));
label_32006c:
    // 0x32006c: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x32006cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_320070:
    // 0x320070: 0xc0ef478  jal         func_3BD1E0
label_320074:
    if (ctx->pc == 0x320074u) {
        ctx->pc = 0x320074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320070u;
        // 0x320074: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x320078u;
        goto label_320078;
    }
    ctx->pc = 0x320070u;
    SET_GPR_U32(ctx, 31, 0x320078u);
    ctx->pc = 0x320074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x320070u;
    // 0x320074: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BD1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BD1E0u, 0x320070u, 0x320078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x320078u;
label_320078:
    // 0x320078: 0x16600004  bnez        $s3, . + 4 + (0x4 << 2)
label_32007c:
    if (ctx->pc == 0x32007Cu) {
        ctx->pc = 0x32007Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320078u;
        // 0x32007c: 0xae220020  sw          $v0, 0x20($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x320080u;
        goto label_320080;
    }
    ctx->pc = 0x320078u;
    {
        const bool branch_taken_0x320078 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x32007Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320078u;
        // 0x32007c: 0xae220020  sw          $v0, 0x20($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320078) {
            ctx->pc = 0x32008Cu;
            goto label_32008c;
        }
    }
    ctx->pc = 0x320080u;
label_320080:
    // 0x320080: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x320080u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_320084:
    // 0x320084: 0x10000087  b           . + 4 + (0x87 << 2)
label_320088:
    if (ctx->pc == 0x320088u) {
        ctx->pc = 0x320088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320084u;
        // 0x320088: 0xae22001c  sw          $v0, 0x1C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32008Cu;
        goto label_32008c;
    }
    ctx->pc = 0x320084u;
    {
        const bool branch_taken_0x320084 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x320088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320084u;
        // 0x320088: 0xae22001c  sw          $v0, 0x1C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320084) {
            ctx->pc = 0x3202A4u;
            goto label_3202a4;
        }
    }
    ctx->pc = 0x32008Cu;
label_32008c:
    // 0x32008c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x32008cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_320090:
    // 0x320090: 0x1a600083  blez        $s3, . + 4 + (0x83 << 2)
label_320094:
    if (ctx->pc == 0x320094u) {
        ctx->pc = 0x320094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320090u;
        // 0x320094: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x320098u;
        goto label_320098;
    }
    ctx->pc = 0x320090u;
    {
        const bool branch_taken_0x320090 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x320094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320090u;
        // 0x320094: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320090) {
            ctx->pc = 0x3202A0u;
            goto label_3202a0;
        }
    }
    ctx->pc = 0x320098u;
label_320098:
    // 0x320098: 0x8e080010  lw          $t0, 0x10($s0)
    ctx->pc = 0x320098u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_32009c:
    // 0x32009c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x32009cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3200a0:
    // 0x3200a0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3200a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3200a4:
    // 0x3200a4: 0x32630003  andi        $v1, $s3, 0x3
    ctx->pc = 0x3200a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)3);
label_3200a8:
    // 0x3200a8: 0x1a600028  blez        $s3, . + 4 + (0x28 << 2)
label_3200ac:
    if (ctx->pc == 0x3200ACu) {
        ctx->pc = 0x3200ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3200A8u;
        // 0x3200ac: 0x25070008  addiu       $a3, $t0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3200B0u;
        goto label_3200b0;
    }
    ctx->pc = 0x3200A8u;
    {
        const bool branch_taken_0x3200a8 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x3200ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3200A8u;
        // 0x3200ac: 0x25070008  addiu       $a3, $t0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3200a8) {
            ctx->pc = 0x32014Cu;
            goto label_32014c;
        }
    }
    ctx->pc = 0x3200B0u;
label_3200b0:
    // 0x3200b0: 0x10600039  beqz        $v1, . + 4 + (0x39 << 2)
label_3200b4:
    if (ctx->pc == 0x3200B4u) {
        ctx->pc = 0x3200B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3200B0u;
        // 0x3200b4: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3200B8u;
        goto label_3200b8;
    }
    ctx->pc = 0x3200B0u;
    {
        const bool branch_taken_0x3200b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3200B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3200B0u;
        // 0x3200b4: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3200b0) {
            ctx->pc = 0x320198u;
            goto label_320198;
        }
    }
    ctx->pc = 0x3200B8u;
label_3200b8:
    // 0x3200b8: 0x54400025  bnel        $v0, $zero, . + 4 + (0x25 << 2)
label_3200bc:
    if (ctx->pc == 0x3200BCu) {
        ctx->pc = 0x3200BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3200B8u;
        // 0x3200bc: 0x8ce20000  lw          $v0, 0x0($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3200C0u;
        goto label_3200c0;
    }
    ctx->pc = 0x3200B8u;
    {
        const bool branch_taken_0x3200b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3200b8) {
            ctx->pc = 0x3200BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3200B8u;
            // 0x3200bc: 0x8ce20000  lw          $v0, 0x0($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x320150u;
            goto label_320150;
        }
    }
    ctx->pc = 0x3200C0u;
label_3200c0:
    // 0x3200c0: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x3200c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_3200c4:
    // 0x3200c4: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
label_3200c8:
    if (ctx->pc == 0x3200C8u) {
        ctx->pc = 0x3200C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3200C4u;
        // 0x3200c8: 0x8ce20000  lw          $v0, 0x0($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3200CCu;
        goto label_3200cc;
    }
    ctx->pc = 0x3200C4u;
    {
        const bool branch_taken_0x3200c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3200c4) {
            ctx->pc = 0x3200C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3200C4u;
            // 0x3200c8: 0x8ce20000  lw          $v0, 0x0($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32010Cu;
            goto label_32010c;
        }
    }
    ctx->pc = 0x3200CCu;
label_3200cc:
    // 0x3200cc: 0x8d020008  lw          $v0, 0x8($t0)
    ctx->pc = 0x3200ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
label_3200d0:
    // 0x3200d0: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x3200d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_3200d4:
    // 0x3200d4: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_3200d8:
    if (ctx->pc == 0x3200D8u) {
        ctx->pc = 0x3200D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3200D4u;
        // 0x3200d8: 0x8d020008  lw          $v0, 0x8($t0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3200DCu;
        goto label_3200dc;
    }
    ctx->pc = 0x3200D4u;
    {
        const bool branch_taken_0x3200d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3200d4) {
            ctx->pc = 0x3200D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3200D4u;
            // 0x3200d8: 0x8d020008  lw          $v0, 0x8($t0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3200E8u;
            goto label_3200e8;
        }
    }
    ctx->pc = 0x3200DCu;
label_3200dc:
    // 0x3200dc: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x3200dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
label_3200e0:
    // 0x3200e0: 0x27a40004  addiu       $a0, $sp, 0x4
    ctx->pc = 0x3200e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
label_3200e4:
    // 0x3200e4: 0x8d020008  lw          $v0, 0x8($t0)
    ctx->pc = 0x3200e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
label_3200e8:
    // 0x3200e8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3200e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_3200ec:
    // 0x3200ec: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_3200f0:
    if (ctx->pc == 0x3200F0u) {
        ctx->pc = 0x3200F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3200ECu;
        // 0x3200f0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3200F4u;
        goto label_3200f4;
    }
    ctx->pc = 0x3200ECu;
    {
        const bool branch_taken_0x3200ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3200F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3200ECu;
        // 0x3200f0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3200ec) {
            ctx->pc = 0x3200FCu;
            goto label_3200fc;
        }
    }
    ctx->pc = 0x3200F4u;
label_3200f4:
    // 0x3200f4: 0x2484fffc  addiu       $a0, $a0, -0x4
    ctx->pc = 0x3200f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
label_3200f8:
    // 0x3200f8: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x3200f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3200fc:
    // 0x3200fc: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x3200fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
label_320100:
    // 0x320100: 0x25290010  addiu       $t1, $t1, 0x10
    ctx->pc = 0x320100u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
label_320104:
    // 0x320104: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x320104u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_320108:
    // 0x320108: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x320108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_32010c:
    // 0x32010c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x32010cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_320110:
    // 0x320110: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_320114:
    if (ctx->pc == 0x320114u) {
        ctx->pc = 0x320114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320110u;
        // 0x320114: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x320118u;
        goto label_320118;
    }
    ctx->pc = 0x320110u;
    {
        const bool branch_taken_0x320110 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x320110) {
            ctx->pc = 0x320114u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x320110u;
            // 0x320114: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x320124u;
            goto label_320124;
        }
    }
    ctx->pc = 0x320118u;
label_320118:
    // 0x320118: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x320118u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
label_32011c:
    // 0x32011c: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x32011cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_320120:
    // 0x320120: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x320120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_320124:
    // 0x320124: 0x1221021  addu        $v0, $t1, $v0
    ctx->pc = 0x320124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
label_320128:
    // 0x320128: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x320128u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_32012c:
    // 0x32012c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x32012cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_320130:
    // 0x320130: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_320134:
    if (ctx->pc == 0x320134u) {
        ctx->pc = 0x320134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320130u;
        // 0x320134: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x320138u;
        goto label_320138;
    }
    ctx->pc = 0x320130u;
    {
        const bool branch_taken_0x320130 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x320134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320130u;
        // 0x320134: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320130) {
            ctx->pc = 0x320140u;
            goto label_320140;
        }
    }
    ctx->pc = 0x320138u;
label_320138:
    // 0x320138: 0x2484fffc  addiu       $a0, $a0, -0x4
    ctx->pc = 0x320138u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
label_32013c:
    // 0x32013c: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x32013cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_320140:
    // 0x320140: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x320140u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
label_320144:
    // 0x320144: 0x25290010  addiu       $t1, $t1, 0x10
    ctx->pc = 0x320144u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
label_320148:
    // 0x320148: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x320148u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_32014c:
    // 0x32014c: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x32014cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_320150:
    // 0x320150: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x320150u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_320154:
    // 0x320154: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_320158:
    if (ctx->pc == 0x320158u) {
        ctx->pc = 0x320158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320154u;
        // 0x320158: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32015Cu;
        goto label_32015c;
    }
    ctx->pc = 0x320154u;
    {
        const bool branch_taken_0x320154 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x320154) {
            ctx->pc = 0x320158u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x320154u;
            // 0x320158: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x320168u;
            goto label_320168;
        }
    }
    ctx->pc = 0x32015Cu;
label_32015c:
    // 0x32015c: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x32015cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
label_320160:
    // 0x320160: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x320160u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_320164:
    // 0x320164: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x320164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_320168:
    // 0x320168: 0x1221021  addu        $v0, $t1, $v0
    ctx->pc = 0x320168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
label_32016c:
    // 0x32016c: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x32016cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_320170:
    // 0x320170: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x320170u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_320174:
    // 0x320174: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_320178:
    if (ctx->pc == 0x320178u) {
        ctx->pc = 0x320178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320174u;
        // 0x320178: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32017Cu;
        goto label_32017c;
    }
    ctx->pc = 0x320174u;
    {
        const bool branch_taken_0x320174 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x320178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320174u;
        // 0x320178: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320174) {
            ctx->pc = 0x320184u;
            goto label_320184;
        }
    }
    ctx->pc = 0x32017Cu;
label_32017c:
    // 0x32017c: 0x2484fffc  addiu       $a0, $a0, -0x4
    ctx->pc = 0x32017cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
label_320180:
    // 0x320180: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x320180u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_320184:
    // 0x320184: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x320184u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_320188:
    // 0x320188: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x320188u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
label_32018c:
    // 0x32018c: 0xd3102a  slt         $v0, $a2, $s3
    ctx->pc = 0x32018cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
label_320190:
    // 0x320190: 0x10400043  beqz        $v0, . + 4 + (0x43 << 2)
label_320194:
    if (ctx->pc == 0x320194u) {
        ctx->pc = 0x320194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320190u;
        // 0x320194: 0x25290010  addiu       $t1, $t1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x320198u;
        goto label_320198;
    }
    ctx->pc = 0x320190u;
    {
        const bool branch_taken_0x320190 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x320194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320190u;
        // 0x320194: 0x25290010  addiu       $t1, $t1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320190) {
            ctx->pc = 0x3202A0u;
            goto label_3202a0;
        }
    }
    ctx->pc = 0x320198u;
label_320198:
    // 0x320198: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x320198u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_32019c:
    // 0x32019c: 0x0  nop
    ctx->pc = 0x32019cu;
    // NOP
label_3201a0:
    // 0x3201a0: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x3201a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_3201a4:
    // 0x3201a4: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x3201a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_3201a8:
    // 0x3201a8: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_3201ac:
    if (ctx->pc == 0x3201ACu) {
        ctx->pc = 0x3201ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3201A8u;
        // 0x3201ac: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3201B0u;
        goto label_3201b0;
    }
    ctx->pc = 0x3201A8u;
    {
        const bool branch_taken_0x3201a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3201a8) {
            ctx->pc = 0x3201ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3201A8u;
            // 0x3201ac: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3201BCu;
            goto label_3201bc;
        }
    }
    ctx->pc = 0x3201B0u;
label_3201b0:
    // 0x3201b0: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x3201b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
label_3201b4:
    // 0x3201b4: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x3201b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_3201b8:
    // 0x3201b8: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x3201b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_3201bc:
    // 0x3201bc: 0x1221021  addu        $v0, $t1, $v0
    ctx->pc = 0x3201bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
label_3201c0:
    // 0x3201c0: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x3201c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_3201c4:
    // 0x3201c4: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x3201c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_3201c8:
    // 0x3201c8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_3201cc:
    if (ctx->pc == 0x3201CCu) {
        ctx->pc = 0x3201CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3201C8u;
        // 0x3201cc: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3201D0u;
        goto label_3201d0;
    }
    ctx->pc = 0x3201C8u;
    {
        const bool branch_taken_0x3201c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3201CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3201C8u;
        // 0x3201cc: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3201c8) {
            ctx->pc = 0x3201D8u;
            goto label_3201d8;
        }
    }
    ctx->pc = 0x3201D0u;
label_3201d0:
    // 0x3201d0: 0x2484fffc  addiu       $a0, $a0, -0x4
    ctx->pc = 0x3201d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
label_3201d4:
    // 0x3201d4: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x3201d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3201d8:
    // 0x3201d8: 0x8d020010  lw          $v0, 0x10($t0)
    ctx->pc = 0x3201d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 16)));
label_3201dc:
    // 0x3201dc: 0x25230010  addiu       $v1, $t1, 0x10
    ctx->pc = 0x3201dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
label_3201e0:
    // 0x3201e0: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x3201e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_3201e4:
    // 0x3201e4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_3201e8:
    if (ctx->pc == 0x3201E8u) {
        ctx->pc = 0x3201E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3201E4u;
        // 0x3201e8: 0x24c70001  addiu       $a3, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3201ECu;
        goto label_3201ec;
    }
    ctx->pc = 0x3201E4u;
    {
        const bool branch_taken_0x3201e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3201E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3201E4u;
        // 0x3201e8: 0x24c70001  addiu       $a3, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3201e4) {
            ctx->pc = 0x3201F4u;
            goto label_3201f4;
        }
    }
    ctx->pc = 0x3201ECu;
label_3201ec:
    // 0x3201ec: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x3201ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
label_3201f0:
    // 0x3201f0: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x3201f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_3201f4:
    // 0x3201f4: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x3201f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_3201f8:
    // 0x3201f8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x3201f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3201fc:
    // 0x3201fc: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x3201fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_320200:
    // 0x320200: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x320200u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_320204:
    // 0x320204: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_320208:
    if (ctx->pc == 0x320208u) {
        ctx->pc = 0x320208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320204u;
        // 0x320208: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32020Cu;
        goto label_32020c;
    }
    ctx->pc = 0x320204u;
    {
        const bool branch_taken_0x320204 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x320208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320204u;
        // 0x320208: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320204) {
            ctx->pc = 0x320214u;
            goto label_320214;
        }
    }
    ctx->pc = 0x32020Cu;
label_32020c:
    // 0x32020c: 0x2484fffc  addiu       $a0, $a0, -0x4
    ctx->pc = 0x32020cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
label_320210:
    // 0x320210: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x320210u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_320214:
    // 0x320214: 0x8d020020  lw          $v0, 0x20($t0)
    ctx->pc = 0x320214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 32)));
label_320218:
    // 0x320218: 0x25230020  addiu       $v1, $t1, 0x20
    ctx->pc = 0x320218u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), 32));
label_32021c:
    // 0x32021c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x32021cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_320220:
    // 0x320220: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_320224:
    if (ctx->pc == 0x320224u) {
        ctx->pc = 0x320224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320220u;
        // 0x320224: 0x24c70002  addiu       $a3, $a2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x320228u;
        goto label_320228;
    }
    ctx->pc = 0x320220u;
    {
        const bool branch_taken_0x320220 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x320224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320220u;
        // 0x320224: 0x24c70002  addiu       $a3, $a2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320220) {
            ctx->pc = 0x320230u;
            goto label_320230;
        }
    }
    ctx->pc = 0x320228u;
label_320228:
    // 0x320228: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x320228u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
label_32022c:
    // 0x32022c: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x32022cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_320230:
    // 0x320230: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x320230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_320234:
    // 0x320234: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x320234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_320238:
    // 0x320238: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x320238u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_32023c:
    // 0x32023c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x32023cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_320240:
    // 0x320240: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_320244:
    if (ctx->pc == 0x320244u) {
        ctx->pc = 0x320244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320240u;
        // 0x320244: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x320248u;
        goto label_320248;
    }
    ctx->pc = 0x320240u;
    {
        const bool branch_taken_0x320240 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x320244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320240u;
        // 0x320244: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320240) {
            ctx->pc = 0x320250u;
            goto label_320250;
        }
    }
    ctx->pc = 0x320248u;
label_320248:
    // 0x320248: 0x2484fffc  addiu       $a0, $a0, -0x4
    ctx->pc = 0x320248u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
label_32024c:
    // 0x32024c: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x32024cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_320250:
    // 0x320250: 0x8d020030  lw          $v0, 0x30($t0)
    ctx->pc = 0x320250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 48)));
label_320254:
    // 0x320254: 0x25230030  addiu       $v1, $t1, 0x30
    ctx->pc = 0x320254u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), 48));
label_320258:
    // 0x320258: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x320258u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_32025c:
    // 0x32025c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_320260:
    if (ctx->pc == 0x320260u) {
        ctx->pc = 0x320260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32025Cu;
        // 0x320260: 0x24c70003  addiu       $a3, $a2, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x320264u;
        goto label_320264;
    }
    ctx->pc = 0x32025Cu;
    {
        const bool branch_taken_0x32025c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x320260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32025Cu;
        // 0x320260: 0x24c70003  addiu       $a3, $a2, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32025c) {
            ctx->pc = 0x32026Cu;
            goto label_32026c;
        }
    }
    ctx->pc = 0x320264u;
label_320264:
    // 0x320264: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x320264u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
label_320268:
    // 0x320268: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x320268u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_32026c:
    // 0x32026c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x32026cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_320270:
    // 0x320270: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x320270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_320274:
    // 0x320274: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x320274u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_320278:
    // 0x320278: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x320278u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_32027c:
    // 0x32027c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_320280:
    if (ctx->pc == 0x320280u) {
        ctx->pc = 0x320280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32027Cu;
        // 0x320280: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x320284u;
        goto label_320284;
    }
    ctx->pc = 0x32027Cu;
    {
        const bool branch_taken_0x32027c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x320280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32027Cu;
        // 0x320280: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32027c) {
            ctx->pc = 0x32028Cu;
            goto label_32028c;
        }
    }
    ctx->pc = 0x320284u;
label_320284:
    // 0x320284: 0x2484fffc  addiu       $a0, $a0, -0x4
    ctx->pc = 0x320284u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
label_320288:
    // 0x320288: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x320288u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_32028c:
    // 0x32028c: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x32028cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_320290:
    // 0x320290: 0x25080040  addiu       $t0, $t0, 0x40
    ctx->pc = 0x320290u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 64));
label_320294:
    // 0x320294: 0xd3102a  slt         $v0, $a2, $s3
    ctx->pc = 0x320294u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
label_320298:
    // 0x320298: 0x1440ffc1  bnez        $v0, . + 4 + (-0x3F << 2)
label_32029c:
    if (ctx->pc == 0x32029Cu) {
        ctx->pc = 0x32029Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320298u;
        // 0x32029c: 0x25290040  addiu       $t1, $t1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3202A0u;
        goto label_3202a0;
    }
    ctx->pc = 0x320298u;
    {
        const bool branch_taken_0x320298 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x32029Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320298u;
        // 0x32029c: 0x25290040  addiu       $t1, $t1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320298) {
            ctx->pc = 0x3201A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3201a0;
        }
    }
    ctx->pc = 0x3202A0u;
label_3202a0:
    // 0x3202a0: 0xae25001c  sw          $a1, 0x1C($s1)
    ctx->pc = 0x3202a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 5));
label_3202a4:
    // 0x3202a4: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x3202a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_3202a8:
    // 0x3202a8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3202a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3202ac:
    // 0x3202ac: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x3202acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_3202b0:
    // 0x3202b0: 0x2c31821  addu        $v1, $s6, $v1
    ctx->pc = 0x3202b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
label_3202b4:
    // 0x3202b4: 0xae300018  sw          $s0, 0x18($s1)
    ctx->pc = 0x3202b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 16));
label_3202b8:
    // 0x3202b8: 0x8c65000c  lw          $a1, 0xC($v1)
    ctx->pc = 0x3202b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_3202bc:
    // 0x3202bc: 0x972021  addu        $a0, $a0, $s7
    ctx->pc = 0x3202bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 23)));
label_3202c0:
    // 0x3202c0: 0xae240008  sw          $a0, 0x8($s1)
    ctx->pc = 0x3202c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 4));
label_3202c4:
    // 0x3202c4: 0xae250014  sw          $a1, 0x14($s1)
    ctx->pc = 0x3202c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 5));
label_3202c8:
    // 0x3202c8: 0xae230010  sw          $v1, 0x10($s1)
    ctx->pc = 0x3202c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
label_3202cc:
    // 0x3202cc: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x3202ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
label_3202d0:
    // 0x3202d0: 0x7bb00100  lq          $s0, 0x100($sp)
    ctx->pc = 0x3202d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_3202d4:
    // 0x3202d4: 0x7bb100f0  lq          $s1, 0xF0($sp)
    ctx->pc = 0x3202d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_3202d8:
    // 0x3202d8: 0x7bb200e0  lq          $s2, 0xE0($sp)
    ctx->pc = 0x3202d8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_3202dc:
    // 0x3202dc: 0x7bb300d0  lq          $s3, 0xD0($sp)
    ctx->pc = 0x3202dcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_3202e0:
    // 0x3202e0: 0x7bb400c0  lq          $s4, 0xC0($sp)
    ctx->pc = 0x3202e0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_3202e4:
    // 0x3202e4: 0x7bb500b0  lq          $s5, 0xB0($sp)
    ctx->pc = 0x3202e4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_3202e8:
    // 0x3202e8: 0x7bb600a0  lq          $s6, 0xA0($sp)
    ctx->pc = 0x3202e8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_3202ec:
    // 0x3202ec: 0x7bb70090  lq          $s7, 0x90($sp)
    ctx->pc = 0x3202ecu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3202f0:
    // 0x3202f0: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x3202f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_3202f4:
    // 0x3202f4: 0x3e00008  jr          $ra
label_3202f8:
    if (ctx->pc == 0x3202F8u) {
        ctx->pc = 0x3202F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3202F4u;
        // 0x3202f8: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3202FCu;
        goto label_3202fc;
    }
    ctx->pc = 0x3202F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3202F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3202F4u;
        // 0x3202f8: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3202F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3202FCu;
label_3202fc:
    // 0x3202fc: 0x0  nop
    ctx->pc = 0x3202fcu;
    // NOP
label_320300:
    // 0x320300: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x320300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_320304:
    // 0x320304: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x320304u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_320308:
    // 0x320308: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x320308u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_32030c:
    // 0x32030c: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x32030cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_320310:
    // 0x320310: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x320310u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_320314:
    // 0x320314: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x320314u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_320318:
    // 0x320318: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x320318u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_32031c:
    // 0x32031c: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x32031cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
label_320320:
    // 0x320320: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x320320u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_320324:
    // 0x320324: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x320324u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
label_320328:
    // 0x320328: 0x2454e880  addiu       $s4, $v0, -0x1780
    ctx->pc = 0x320328u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
label_32032c:
    // 0x32032c: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x32032cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
label_320330:
    // 0x320330: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x320330u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_320334:
    // 0x320334: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x320334u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_320338:
    // 0x320338: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x320338u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32033c:
    // 0x32033c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x32033cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_320340:
    // 0x320340: 0x34a5011e  ori         $a1, $a1, 0x11E
    ctx->pc = 0x320340u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)286);
label_320344:
    // 0x320344: 0x8f84bce4  lw          $a0, -0x431C($gp)
    ctx->pc = 0x320344u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950116)));
label_320348:
    // 0x320348: 0x8e820118  lw          $v0, 0x118($s4)
    ctx->pc = 0x320348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 280)));
label_32034c:
    // 0x32034c: 0x40f809  jalr        $v0
label_320350:
    if (ctx->pc == 0x320350u) {
        ctx->pc = 0x320350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32034Cu;
        // 0x320350: 0x8eb30004  lw          $s3, 0x4($s5) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x320354u;
        goto label_320354;
    }
    ctx->pc = 0x32034Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x320354u);
        ctx->pc = 0x320350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32034Cu;
        // 0x320350: 0x8eb30004  lw          $s3, 0x4($s5) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32034Cu, 0x320354u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x320354u;
label_320354:
    // 0x320354: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x320354u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_320358:
    // 0x320358: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x320358u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_32035c:
    // 0x32035c: 0xc0ef372  jal         func_3BCDC8
label_320360:
    if (ctx->pc == 0x320360u) {
        ctx->pc = 0x320360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32035Cu;
        // 0x320360: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x320364u;
        goto label_320364;
    }
    ctx->pc = 0x32035Cu;
    SET_GPR_U32(ctx, 31, 0x320364u);
    ctx->pc = 0x320360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32035Cu;
    // 0x320360: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BCDC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BCDC8u, 0x32035Cu, 0x320364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x320364u;
label_320364:
    // 0x320364: 0xae420020  sw          $v0, 0x20($s2)
    ctx->pc = 0x320364u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 2));
label_320368:
    // 0x320368: 0x32220002  andi        $v0, $s1, 0x2
    ctx->pc = 0x320368u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)2);
label_32036c:
    // 0x32036c: 0xae510000  sw          $s1, 0x0($s2)
    ctx->pc = 0x32036cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 17));
label_320370:
    // 0x320370: 0xae530004  sw          $s3, 0x4($s2)
    ctx->pc = 0x320370u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 19));
label_320374:
    // 0x320374: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
label_320378:
    if (ctx->pc == 0x320378u) {
        ctx->pc = 0x320378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320374u;
        // 0x320378: 0xae400014  sw          $zero, 0x14($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32037Cu;
        goto label_32037c;
    }
    ctx->pc = 0x320374u;
    {
        const bool branch_taken_0x320374 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x320378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320374u;
        // 0x320378: 0xae400014  sw          $zero, 0x14($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320374) {
            ctx->pc = 0x3203B0u;
            goto label_3203b0;
        }
    }
    ctx->pc = 0x32037Cu;
label_32037c:
    // 0x32037c: 0x8e820108  lw          $v0, 0x108($s4)
    ctx->pc = 0x32037cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 264)));
label_320380:
    // 0x320380: 0x132180  sll         $a0, $s3, 6
    ctx->pc = 0x320380u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 6));
label_320384:
    // 0x320384: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x320384u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_320388:
    // 0x320388: 0x3484000f  ori         $a0, $a0, 0xF
    ctx->pc = 0x320388u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)15);
label_32038c:
    // 0x32038c: 0x40f809  jalr        $v0
label_320390:
    if (ctx->pc == 0x320390u) {
        ctx->pc = 0x320390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32038Cu;
        // 0x320390: 0x34a5011e  ori         $a1, $a1, 0x11E (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)286);
        ctx->in_delay_slot = false;
        ctx->pc = 0x320394u;
        goto label_320394;
    }
    ctx->pc = 0x32038Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x320394u);
        ctx->pc = 0x320390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32038Cu;
        // 0x320390: 0x34a5011e  ori         $a1, $a1, 0x11E (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)286);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32038Cu, 0x320394u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x320394u;
label_320394:
    // 0x320394: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x320394u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_320398:
    // 0x320398: 0x2444000f  addiu       $a0, $v0, 0xF
    ctx->pc = 0x320398u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
label_32039c:
    // 0x32039c: 0x3463fff0  ori         $v1, $v1, 0xFFF0
    ctx->pc = 0x32039cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65520);
label_3203a0:
    // 0x3203a0: 0xae42000c  sw          $v0, 0xC($s2)
    ctx->pc = 0x3203a0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
label_3203a4:
    // 0x3203a4: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x3203a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_3203a8:
    // 0x3203a8: 0x10000003  b           . + 4 + (0x3 << 2)
label_3203ac:
    if (ctx->pc == 0x3203ACu) {
        ctx->pc = 0x3203ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3203A8u;
        // 0x3203ac: 0xae440008  sw          $a0, 0x8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3203B0u;
        goto label_3203b0;
    }
    ctx->pc = 0x3203A8u;
    {
        const bool branch_taken_0x3203a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3203ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3203A8u;
        // 0x3203ac: 0xae440008  sw          $a0, 0x8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3203a8) {
            ctx->pc = 0x3203B8u;
            goto label_3203b8;
        }
    }
    ctx->pc = 0x3203B0u;
label_3203b0:
    // 0x3203b0: 0xae400008  sw          $zero, 0x8($s2)
    ctx->pc = 0x3203b0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
label_3203b4:
    // 0x3203b4: 0xae40000c  sw          $zero, 0xC($s2)
    ctx->pc = 0x3203b4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 0));
label_3203b8:
    // 0x3203b8: 0x26c3e880  addiu       $v1, $s6, -0x1780
    ctx->pc = 0x3203b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 4294961280));
label_3203bc:
    // 0x3203bc: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x3203bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_3203c0:
    // 0x3203c0: 0x8c620108  lw          $v0, 0x108($v1)
    ctx->pc = 0x3203c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 264)));
label_3203c4:
    // 0x3203c4: 0x132100  sll         $a0, $s3, 4
    ctx->pc = 0x3203c4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
label_3203c8:
    // 0x3203c8: 0x40f809  jalr        $v0
label_3203cc:
    if (ctx->pc == 0x3203CCu) {
        ctx->pc = 0x3203CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3203C8u;
        // 0x3203cc: 0x34a5011e  ori         $a1, $a1, 0x11E (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)286);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3203D0u;
        goto label_3203d0;
    }
    ctx->pc = 0x3203C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3203D0u);
        ctx->pc = 0x3203CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3203C8u;
        // 0x3203cc: 0x34a5011e  ori         $a1, $a1, 0x11E (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)286);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3203C8u, 0x3203D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3203D0u;
label_3203d0:
    // 0x3203d0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3203d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3203d4:
    // 0x3203d4: 0x1a60002c  blez        $s3, . + 4 + (0x2C << 2)
label_3203d8:
    if (ctx->pc == 0x3203D8u) {
        ctx->pc = 0x3203D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3203D4u;
        // 0x3203d8: 0xae420010  sw          $v0, 0x10($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3203DCu;
        goto label_3203dc;
    }
    ctx->pc = 0x3203D4u;
    {
        const bool branch_taken_0x3203d4 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x3203D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3203D4u;
        // 0x3203d8: 0xae420010  sw          $v0, 0x10($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3203d4) {
            ctx->pc = 0x320488u;
            goto label_320488;
        }
    }
    ctx->pc = 0x3203DCu;
label_3203dc:
    // 0x3203dc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3203dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3203e0:
    // 0x3203e0: 0x32640003  andi        $a0, $s3, 0x3
    ctx->pc = 0x3203e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)3);
label_3203e4:
    // 0x3203e4: 0x1a600010  blez        $s3, . + 4 + (0x10 << 2)
label_3203e8:
    if (ctx->pc == 0x3203E8u) {
        ctx->pc = 0x3203E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3203E4u;
        // 0x3203e8: 0x24a30004  addiu       $v1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3203ECu;
        goto label_3203ec;
    }
    ctx->pc = 0x3203E4u;
    {
        const bool branch_taken_0x3203e4 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x3203E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3203E4u;
        // 0x3203e8: 0x24a30004  addiu       $v1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3203e4) {
            ctx->pc = 0x320428u;
            goto label_320428;
        }
    }
    ctx->pc = 0x3203ECu;
label_3203ec:
    // 0x3203ec: 0x10800014  beqz        $a0, . + 4 + (0x14 << 2)
label_3203f0:
    if (ctx->pc == 0x3203F0u) {
        ctx->pc = 0x3203F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3203ECu;
        // 0x3203f0: 0x28820002  slti        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3203F4u;
        goto label_3203f4;
    }
    ctx->pc = 0x3203ECu;
    {
        const bool branch_taken_0x3203ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3203F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3203ECu;
        // 0x3203f0: 0x28820002  slti        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3203ec) {
            ctx->pc = 0x320440u;
            goto label_320440;
        }
    }
    ctx->pc = 0x3203F4u;
label_3203f4:
    // 0x3203f4: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
label_3203f8:
    if (ctx->pc == 0x3203F8u) {
        ctx->pc = 0x3203F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3203F4u;
        // 0x3203f8: 0xac670000  sw          $a3, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3203FCu;
        goto label_3203fc;
    }
    ctx->pc = 0x3203F4u;
    {
        const bool branch_taken_0x3203f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3203f4) {
            ctx->pc = 0x3203F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3203F4u;
            // 0x3203f8: 0xac670000  sw          $a3, 0x0($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32042Cu;
            goto label_32042c;
        }
    }
    ctx->pc = 0x3203FCu;
label_3203fc:
    // 0x3203fc: 0x28820003  slti        $v0, $a0, 0x3
    ctx->pc = 0x3203fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
label_320400:
    // 0x320400: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_320404:
    if (ctx->pc == 0x320404u) {
        ctx->pc = 0x320404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320400u;
        // 0x320404: 0xac670000  sw          $a3, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x320408u;
        goto label_320408;
    }
    ctx->pc = 0x320400u;
    {
        const bool branch_taken_0x320400 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x320400) {
            ctx->pc = 0x320404u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x320400u;
            // 0x320404: 0xac670000  sw          $a3, 0x0($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32041Cu;
            goto label_32041c;
        }
    }
    ctx->pc = 0x320408u;
label_320408:
    // 0x320408: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x320408u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
label_32040c:
    // 0x32040c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x32040cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_320410:
    // 0x320410: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x320410u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_320414:
    // 0x320414: 0x24a30014  addiu       $v1, $a1, 0x14
    ctx->pc = 0x320414u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 20));
label_320418:
    // 0x320418: 0xac670000  sw          $a3, 0x0($v1)
    ctx->pc = 0x320418u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 7));
label_32041c:
    // 0x32041c: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x32041cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
label_320420:
    // 0x320420: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x320420u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_320424:
    // 0x320424: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x320424u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_320428:
    // 0x320428: 0xac670000  sw          $a3, 0x0($v1)
    ctx->pc = 0x320428u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 7));
label_32042c:
    // 0x32042c: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x32042cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
label_320430:
    // 0x320430: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x320430u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_320434:
    // 0x320434: 0xf3102a  slt         $v0, $a3, $s3
    ctx->pc = 0x320434u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
label_320438:
    // 0x320438: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_32043c:
    if (ctx->pc == 0x32043Cu) {
        ctx->pc = 0x32043Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320438u;
        // 0x32043c: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x320440u;
        goto label_320440;
    }
    ctx->pc = 0x320438u;
    {
        const bool branch_taken_0x320438 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32043Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320438u;
        // 0x32043c: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320438) {
            ctx->pc = 0x320488u;
            goto label_320488;
        }
    }
    ctx->pc = 0x320440u;
label_320440:
    // 0x320440: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x320440u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_320444:
    // 0x320444: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x320444u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_320448:
    // 0x320448: 0x24e20001  addiu       $v0, $a3, 0x1
    ctx->pc = 0x320448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_32044c:
    // 0x32044c: 0xaca70000  sw          $a3, 0x0($a1)
    ctx->pc = 0x32044cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 7));
label_320450:
    // 0x320450: 0x24e30002  addiu       $v1, $a3, 0x2
    ctx->pc = 0x320450u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
label_320454:
    // 0x320454: 0x24e40003  addiu       $a0, $a3, 0x3
    ctx->pc = 0x320454u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 3));
label_320458:
    // 0x320458: 0xaca20010  sw          $v0, 0x10($a1)
    ctx->pc = 0x320458u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 2));
label_32045c:
    // 0x32045c: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x32045cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
label_320460:
    // 0x320460: 0xaca30020  sw          $v1, 0x20($a1)
    ctx->pc = 0x320460u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 3));
label_320464:
    // 0x320464: 0xf3102a  slt         $v0, $a3, $s3
    ctx->pc = 0x320464u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
label_320468:
    // 0x320468: 0xaca40030  sw          $a0, 0x30($a1)
    ctx->pc = 0x320468u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 4));
label_32046c:
    // 0x32046c: 0xacc00008  sw          $zero, 0x8($a2)
    ctx->pc = 0x32046cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 0));
label_320470:
    // 0x320470: 0x24a50040  addiu       $a1, $a1, 0x40
    ctx->pc = 0x320470u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
label_320474:
    // 0x320474: 0xacc00018  sw          $zero, 0x18($a2)
    ctx->pc = 0x320474u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 0));
label_320478:
    // 0x320478: 0xacc00028  sw          $zero, 0x28($a2)
    ctx->pc = 0x320478u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 40), GPR_U32(ctx, 0));
label_32047c:
    // 0x32047c: 0xacc00038  sw          $zero, 0x38($a2)
    ctx->pc = 0x32047cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 56), GPR_U32(ctx, 0));
label_320480:
    // 0x320480: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
label_320484:
    if (ctx->pc == 0x320484u) {
        ctx->pc = 0x320484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320480u;
        // 0x320484: 0x24c60040  addiu       $a2, $a2, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x320488u;
        goto label_320488;
    }
    ctx->pc = 0x320480u;
    {
        const bool branch_taken_0x320480 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x320484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320480u;
        // 0x320484: 0x24c60040  addiu       $a2, $a2, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320480) {
            ctx->pc = 0x320448u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_320448;
        }
    }
    ctx->pc = 0x320488u;
label_320488:
    // 0x320488: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x320488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_32048c:
    // 0x32048c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x32048cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_320490:
    // 0x320490: 0x18400010  blez        $v0, . + 4 + (0x10 << 2)
label_320494:
    if (ctx->pc == 0x320494u) {
        ctx->pc = 0x320494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320490u;
        // 0x320494: 0xae520018  sw          $s2, 0x18($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x320498u;
        goto label_320498;
    }
    ctx->pc = 0x320490u;
    {
        const bool branch_taken_0x320490 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x320494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320490u;
        // 0x320494: 0xae520018  sw          $s2, 0x18($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320490) {
            ctx->pc = 0x3204D4u;
            goto label_3204d4;
        }
    }
    ctx->pc = 0x320498u;
label_320498:
    // 0x320498: 0x8ea40010  lw          $a0, 0x10($s5)
    ctx->pc = 0x320498u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
label_32049c:
    // 0x32049c: 0x8e450010  lw          $a1, 0x10($s2)
    ctx->pc = 0x32049cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_3204a0:
    // 0x3204a0: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x3204a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_3204a4:
    // 0x3204a4: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x3204a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_3204a8:
    // 0x3204a8: 0xaca0000c  sw          $zero, 0xC($a1)
    ctx->pc = 0x3204a8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
label_3204ac:
    // 0x3204ac: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x3204acu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
label_3204b0:
    // 0x3204b0: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x3204b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_3204b4:
    // 0x3204b4: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x3204b4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
label_3204b8:
    // 0x3204b8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3204b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3204bc:
    // 0x3204bc: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x3204bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_3204c0:
    // 0x3204c0: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x3204c0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_3204c4:
    // 0x3204c4: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x3204c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_3204c8:
    // 0x3204c8: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x3204c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_3204cc:
    // 0x3204cc: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
label_3204d0:
    if (ctx->pc == 0x3204D0u) {
        ctx->pc = 0x3204D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3204CCu;
        // 0x3204d0: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3204D4u;
        goto label_3204d4;
    }
    ctx->pc = 0x3204CCu;
    {
        const bool branch_taken_0x3204cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3204D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3204CCu;
        // 0x3204d0: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3204cc) {
            ctx->pc = 0x3204A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3204a0;
        }
    }
    ctx->pc = 0x3204D4u;
label_3204d4:
    // 0x3204d4: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x3204d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3204d8:
    // 0x3204d8: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x3204d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3204dc:
    // 0x3204dc: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x3204dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3204e0:
    // 0x3204e0: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x3204e0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3204e4:
    // 0x3204e4: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x3204e4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3204e8:
    // 0x3204e8: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x3204e8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3204ec:
    // 0x3204ec: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x3204ecu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3204f0:
    // 0x3204f0: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x3204f0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3204f4:
    // 0x3204f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3204f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3204f8:
    // 0x3204f8: 0x3e00008  jr          $ra
label_3204fc:
    if (ctx->pc == 0x3204FCu) {
        ctx->pc = 0x3204FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3204F8u;
        // 0x3204fc: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x320500u;
        goto label_fallthrough_0x3204f8;
    }
    ctx->pc = 0x3204F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3204FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3204F8u;
        // 0x3204fc: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3204F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3204f8:
    ctx->pc = 0x320500u;
}
