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

// Function: sub_00300000
// Address: 0x300000 - 0x300660
void sub_00300000_0x300000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00300000_0x300000");
#endif

    switch (ctx->pc) {
        case 0x300000u: goto label_300000;
        case 0x300004u: goto label_300004;
        case 0x300008u: goto label_300008;
        case 0x30000cu: goto label_30000c;
        case 0x300010u: goto label_300010;
        case 0x300014u: goto label_300014;
        case 0x300018u: goto label_300018;
        case 0x30001cu: goto label_30001c;
        case 0x300020u: goto label_300020;
        case 0x300024u: goto label_300024;
        case 0x300028u: goto label_300028;
        case 0x30002cu: goto label_30002c;
        case 0x300030u: goto label_300030;
        case 0x300034u: goto label_300034;
        case 0x300038u: goto label_300038;
        case 0x30003cu: goto label_30003c;
        case 0x300040u: goto label_300040;
        case 0x300044u: goto label_300044;
        case 0x300048u: goto label_300048;
        case 0x30004cu: goto label_30004c;
        case 0x300050u: goto label_300050;
        case 0x300054u: goto label_300054;
        case 0x300058u: goto label_300058;
        case 0x30005cu: goto label_30005c;
        case 0x300060u: goto label_300060;
        case 0x300064u: goto label_300064;
        case 0x300068u: goto label_300068;
        case 0x30006cu: goto label_30006c;
        case 0x300070u: goto label_300070;
        case 0x300074u: goto label_300074;
        case 0x300078u: goto label_300078;
        case 0x30007cu: goto label_30007c;
        case 0x300080u: goto label_300080;
        case 0x300084u: goto label_300084;
        case 0x300088u: goto label_300088;
        case 0x30008cu: goto label_30008c;
        case 0x300090u: goto label_300090;
        case 0x300094u: goto label_300094;
        case 0x300098u: goto label_300098;
        case 0x30009cu: goto label_30009c;
        case 0x3000a0u: goto label_3000a0;
        case 0x3000a4u: goto label_3000a4;
        case 0x3000a8u: goto label_3000a8;
        case 0x3000acu: goto label_3000ac;
        case 0x3000b0u: goto label_3000b0;
        case 0x3000b4u: goto label_3000b4;
        case 0x3000b8u: goto label_3000b8;
        case 0x3000bcu: goto label_3000bc;
        case 0x3000c0u: goto label_3000c0;
        case 0x3000c4u: goto label_3000c4;
        case 0x3000c8u: goto label_3000c8;
        case 0x3000ccu: goto label_3000cc;
        case 0x3000d0u: goto label_3000d0;
        case 0x3000d4u: goto label_3000d4;
        case 0x3000d8u: goto label_3000d8;
        case 0x3000dcu: goto label_3000dc;
        case 0x3000e0u: goto label_3000e0;
        case 0x3000e4u: goto label_3000e4;
        case 0x3000e8u: goto label_3000e8;
        case 0x3000ecu: goto label_3000ec;
        case 0x3000f0u: goto label_3000f0;
        case 0x3000f4u: goto label_3000f4;
        case 0x3000f8u: goto label_3000f8;
        case 0x3000fcu: goto label_3000fc;
        case 0x300100u: goto label_300100;
        case 0x300104u: goto label_300104;
        case 0x300108u: goto label_300108;
        case 0x30010cu: goto label_30010c;
        case 0x300110u: goto label_300110;
        case 0x300114u: goto label_300114;
        case 0x300118u: goto label_300118;
        case 0x30011cu: goto label_30011c;
        case 0x300120u: goto label_300120;
        case 0x300124u: goto label_300124;
        case 0x300128u: goto label_300128;
        case 0x30012cu: goto label_30012c;
        case 0x300130u: goto label_300130;
        case 0x300134u: goto label_300134;
        case 0x300138u: goto label_300138;
        case 0x30013cu: goto label_30013c;
        case 0x300140u: goto label_300140;
        case 0x300144u: goto label_300144;
        case 0x300148u: goto label_300148;
        case 0x30014cu: goto label_30014c;
        case 0x300150u: goto label_300150;
        case 0x300154u: goto label_300154;
        case 0x300158u: goto label_300158;
        case 0x30015cu: goto label_30015c;
        case 0x300160u: goto label_300160;
        case 0x300164u: goto label_300164;
        case 0x300168u: goto label_300168;
        case 0x30016cu: goto label_30016c;
        case 0x300170u: goto label_300170;
        case 0x300174u: goto label_300174;
        case 0x300178u: goto label_300178;
        case 0x30017cu: goto label_30017c;
        case 0x300180u: goto label_300180;
        case 0x300184u: goto label_300184;
        case 0x300188u: goto label_300188;
        case 0x30018cu: goto label_30018c;
        case 0x300190u: goto label_300190;
        case 0x300194u: goto label_300194;
        case 0x300198u: goto label_300198;
        case 0x30019cu: goto label_30019c;
        case 0x3001a0u: goto label_3001a0;
        case 0x3001a4u: goto label_3001a4;
        case 0x3001a8u: goto label_3001a8;
        case 0x3001acu: goto label_3001ac;
        case 0x3001b0u: goto label_3001b0;
        case 0x3001b4u: goto label_3001b4;
        case 0x3001b8u: goto label_3001b8;
        case 0x3001bcu: goto label_3001bc;
        case 0x3001c0u: goto label_3001c0;
        case 0x3001c4u: goto label_3001c4;
        case 0x3001c8u: goto label_3001c8;
        case 0x3001ccu: goto label_3001cc;
        case 0x3001d0u: goto label_3001d0;
        case 0x3001d4u: goto label_3001d4;
        case 0x3001d8u: goto label_3001d8;
        case 0x3001dcu: goto label_3001dc;
        case 0x3001e0u: goto label_3001e0;
        case 0x3001e4u: goto label_3001e4;
        case 0x3001e8u: goto label_3001e8;
        case 0x3001ecu: goto label_3001ec;
        case 0x3001f0u: goto label_3001f0;
        case 0x3001f4u: goto label_3001f4;
        case 0x3001f8u: goto label_3001f8;
        case 0x3001fcu: goto label_3001fc;
        case 0x300200u: goto label_300200;
        case 0x300204u: goto label_300204;
        case 0x300208u: goto label_300208;
        case 0x30020cu: goto label_30020c;
        case 0x300210u: goto label_300210;
        case 0x300214u: goto label_300214;
        case 0x300218u: goto label_300218;
        case 0x30021cu: goto label_30021c;
        case 0x300220u: goto label_300220;
        case 0x300224u: goto label_300224;
        case 0x300228u: goto label_300228;
        case 0x30022cu: goto label_30022c;
        case 0x300230u: goto label_300230;
        case 0x300234u: goto label_300234;
        case 0x300238u: goto label_300238;
        case 0x30023cu: goto label_30023c;
        case 0x300240u: goto label_300240;
        case 0x300244u: goto label_300244;
        case 0x300248u: goto label_300248;
        case 0x30024cu: goto label_30024c;
        case 0x300250u: goto label_300250;
        case 0x300254u: goto label_300254;
        case 0x300258u: goto label_300258;
        case 0x30025cu: goto label_30025c;
        case 0x300260u: goto label_300260;
        case 0x300264u: goto label_300264;
        case 0x300268u: goto label_300268;
        case 0x30026cu: goto label_30026c;
        case 0x300270u: goto label_300270;
        case 0x300274u: goto label_300274;
        case 0x300278u: goto label_300278;
        case 0x30027cu: goto label_30027c;
        case 0x300280u: goto label_300280;
        case 0x300284u: goto label_300284;
        case 0x300288u: goto label_300288;
        case 0x30028cu: goto label_30028c;
        case 0x300290u: goto label_300290;
        case 0x300294u: goto label_300294;
        case 0x300298u: goto label_300298;
        case 0x30029cu: goto label_30029c;
        case 0x3002a0u: goto label_3002a0;
        case 0x3002a4u: goto label_3002a4;
        case 0x3002a8u: goto label_3002a8;
        case 0x3002acu: goto label_3002ac;
        case 0x3002b0u: goto label_3002b0;
        case 0x3002b4u: goto label_3002b4;
        case 0x3002b8u: goto label_3002b8;
        case 0x3002bcu: goto label_3002bc;
        case 0x3002c0u: goto label_3002c0;
        case 0x3002c4u: goto label_3002c4;
        case 0x3002c8u: goto label_3002c8;
        case 0x3002ccu: goto label_3002cc;
        case 0x3002d0u: goto label_3002d0;
        case 0x3002d4u: goto label_3002d4;
        case 0x3002d8u: goto label_3002d8;
        case 0x3002dcu: goto label_3002dc;
        case 0x3002e0u: goto label_3002e0;
        case 0x3002e4u: goto label_3002e4;
        case 0x3002e8u: goto label_3002e8;
        case 0x3002ecu: goto label_3002ec;
        case 0x3002f0u: goto label_3002f0;
        case 0x3002f4u: goto label_3002f4;
        case 0x3002f8u: goto label_3002f8;
        case 0x3002fcu: goto label_3002fc;
        case 0x300300u: goto label_300300;
        case 0x300304u: goto label_300304;
        case 0x300308u: goto label_300308;
        case 0x30030cu: goto label_30030c;
        case 0x300310u: goto label_300310;
        case 0x300314u: goto label_300314;
        case 0x300318u: goto label_300318;
        case 0x30031cu: goto label_30031c;
        case 0x300320u: goto label_300320;
        case 0x300324u: goto label_300324;
        case 0x300328u: goto label_300328;
        case 0x30032cu: goto label_30032c;
        case 0x300330u: goto label_300330;
        case 0x300334u: goto label_300334;
        case 0x300338u: goto label_300338;
        case 0x30033cu: goto label_30033c;
        case 0x300340u: goto label_300340;
        case 0x300344u: goto label_300344;
        case 0x300348u: goto label_300348;
        case 0x30034cu: goto label_30034c;
        case 0x300350u: goto label_300350;
        case 0x300354u: goto label_300354;
        case 0x300358u: goto label_300358;
        case 0x30035cu: goto label_30035c;
        case 0x300360u: goto label_300360;
        case 0x300364u: goto label_300364;
        case 0x300368u: goto label_300368;
        case 0x30036cu: goto label_30036c;
        case 0x300370u: goto label_300370;
        case 0x300374u: goto label_300374;
        case 0x300378u: goto label_300378;
        case 0x30037cu: goto label_30037c;
        case 0x300380u: goto label_300380;
        case 0x300384u: goto label_300384;
        case 0x300388u: goto label_300388;
        case 0x30038cu: goto label_30038c;
        case 0x300390u: goto label_300390;
        case 0x300394u: goto label_300394;
        case 0x300398u: goto label_300398;
        case 0x30039cu: goto label_30039c;
        case 0x3003a0u: goto label_3003a0;
        case 0x3003a4u: goto label_3003a4;
        case 0x3003a8u: goto label_3003a8;
        case 0x3003acu: goto label_3003ac;
        case 0x3003b0u: goto label_3003b0;
        case 0x3003b4u: goto label_3003b4;
        case 0x3003b8u: goto label_3003b8;
        case 0x3003bcu: goto label_3003bc;
        case 0x3003c0u: goto label_3003c0;
        case 0x3003c4u: goto label_3003c4;
        case 0x3003c8u: goto label_3003c8;
        case 0x3003ccu: goto label_3003cc;
        case 0x3003d0u: goto label_3003d0;
        case 0x3003d4u: goto label_3003d4;
        case 0x3003d8u: goto label_3003d8;
        case 0x3003dcu: goto label_3003dc;
        case 0x3003e0u: goto label_3003e0;
        case 0x3003e4u: goto label_3003e4;
        case 0x3003e8u: goto label_3003e8;
        case 0x3003ecu: goto label_3003ec;
        case 0x3003f0u: goto label_3003f0;
        case 0x3003f4u: goto label_3003f4;
        case 0x3003f8u: goto label_3003f8;
        case 0x3003fcu: goto label_3003fc;
        case 0x300400u: goto label_300400;
        case 0x300404u: goto label_300404;
        case 0x300408u: goto label_300408;
        case 0x30040cu: goto label_30040c;
        case 0x300410u: goto label_300410;
        case 0x300414u: goto label_300414;
        case 0x300418u: goto label_300418;
        case 0x30041cu: goto label_30041c;
        case 0x300420u: goto label_300420;
        case 0x300424u: goto label_300424;
        case 0x300428u: goto label_300428;
        case 0x30042cu: goto label_30042c;
        case 0x300430u: goto label_300430;
        case 0x300434u: goto label_300434;
        case 0x300438u: goto label_300438;
        case 0x30043cu: goto label_30043c;
        case 0x300440u: goto label_300440;
        case 0x300444u: goto label_300444;
        case 0x300448u: goto label_300448;
        case 0x30044cu: goto label_30044c;
        case 0x300450u: goto label_300450;
        case 0x300454u: goto label_300454;
        case 0x300458u: goto label_300458;
        case 0x30045cu: goto label_30045c;
        case 0x300460u: goto label_300460;
        case 0x300464u: goto label_300464;
        case 0x300468u: goto label_300468;
        case 0x30046cu: goto label_30046c;
        case 0x300470u: goto label_300470;
        case 0x300474u: goto label_300474;
        case 0x300478u: goto label_300478;
        case 0x30047cu: goto label_30047c;
        case 0x300480u: goto label_300480;
        case 0x300484u: goto label_300484;
        case 0x300488u: goto label_300488;
        case 0x30048cu: goto label_30048c;
        case 0x300490u: goto label_300490;
        case 0x300494u: goto label_300494;
        case 0x300498u: goto label_300498;
        case 0x30049cu: goto label_30049c;
        case 0x3004a0u: goto label_3004a0;
        case 0x3004a4u: goto label_3004a4;
        case 0x3004a8u: goto label_3004a8;
        case 0x3004acu: goto label_3004ac;
        case 0x3004b0u: goto label_3004b0;
        case 0x3004b4u: goto label_3004b4;
        case 0x3004b8u: goto label_3004b8;
        case 0x3004bcu: goto label_3004bc;
        case 0x3004c0u: goto label_3004c0;
        case 0x3004c4u: goto label_3004c4;
        case 0x3004c8u: goto label_3004c8;
        case 0x3004ccu: goto label_3004cc;
        case 0x3004d0u: goto label_3004d0;
        case 0x3004d4u: goto label_3004d4;
        case 0x3004d8u: goto label_3004d8;
        case 0x3004dcu: goto label_3004dc;
        case 0x3004e0u: goto label_3004e0;
        case 0x3004e4u: goto label_3004e4;
        case 0x3004e8u: goto label_3004e8;
        case 0x3004ecu: goto label_3004ec;
        case 0x3004f0u: goto label_3004f0;
        case 0x3004f4u: goto label_3004f4;
        case 0x3004f8u: goto label_3004f8;
        case 0x3004fcu: goto label_3004fc;
        case 0x300500u: goto label_300500;
        case 0x300504u: goto label_300504;
        case 0x300508u: goto label_300508;
        case 0x30050cu: goto label_30050c;
        case 0x300510u: goto label_300510;
        case 0x300514u: goto label_300514;
        case 0x300518u: goto label_300518;
        case 0x30051cu: goto label_30051c;
        case 0x300520u: goto label_300520;
        case 0x300524u: goto label_300524;
        case 0x300528u: goto label_300528;
        case 0x30052cu: goto label_30052c;
        case 0x300530u: goto label_300530;
        case 0x300534u: goto label_300534;
        case 0x300538u: goto label_300538;
        case 0x30053cu: goto label_30053c;
        case 0x300540u: goto label_300540;
        case 0x300544u: goto label_300544;
        case 0x300548u: goto label_300548;
        case 0x30054cu: goto label_30054c;
        case 0x300550u: goto label_300550;
        case 0x300554u: goto label_300554;
        case 0x300558u: goto label_300558;
        case 0x30055cu: goto label_30055c;
        case 0x300560u: goto label_300560;
        case 0x300564u: goto label_300564;
        case 0x300568u: goto label_300568;
        case 0x30056cu: goto label_30056c;
        case 0x300570u: goto label_300570;
        case 0x300574u: goto label_300574;
        case 0x300578u: goto label_300578;
        case 0x30057cu: goto label_30057c;
        case 0x300580u: goto label_300580;
        case 0x300584u: goto label_300584;
        case 0x300588u: goto label_300588;
        case 0x30058cu: goto label_30058c;
        case 0x300590u: goto label_300590;
        case 0x300594u: goto label_300594;
        case 0x300598u: goto label_300598;
        case 0x30059cu: goto label_30059c;
        case 0x3005a0u: goto label_3005a0;
        case 0x3005a4u: goto label_3005a4;
        case 0x3005a8u: goto label_3005a8;
        case 0x3005acu: goto label_3005ac;
        case 0x3005b0u: goto label_3005b0;
        case 0x3005b4u: goto label_3005b4;
        case 0x3005b8u: goto label_3005b8;
        case 0x3005bcu: goto label_3005bc;
        case 0x3005c0u: goto label_3005c0;
        case 0x3005c4u: goto label_3005c4;
        case 0x3005c8u: goto label_3005c8;
        case 0x3005ccu: goto label_3005cc;
        case 0x3005d0u: goto label_3005d0;
        case 0x3005d4u: goto label_3005d4;
        case 0x3005d8u: goto label_3005d8;
        case 0x3005dcu: goto label_3005dc;
        case 0x3005e0u: goto label_3005e0;
        case 0x3005e4u: goto label_3005e4;
        case 0x3005e8u: goto label_3005e8;
        case 0x3005ecu: goto label_3005ec;
        case 0x3005f0u: goto label_3005f0;
        case 0x3005f4u: goto label_3005f4;
        case 0x3005f8u: goto label_3005f8;
        case 0x3005fcu: goto label_3005fc;
        case 0x300600u: goto label_300600;
        case 0x300604u: goto label_300604;
        case 0x300608u: goto label_300608;
        case 0x30060cu: goto label_30060c;
        case 0x300610u: goto label_300610;
        case 0x300614u: goto label_300614;
        case 0x300618u: goto label_300618;
        case 0x30061cu: goto label_30061c;
        case 0x300620u: goto label_300620;
        case 0x300624u: goto label_300624;
        case 0x300628u: goto label_300628;
        case 0x30062cu: goto label_30062c;
        case 0x300630u: goto label_300630;
        case 0x300634u: goto label_300634;
        case 0x300638u: goto label_300638;
        case 0x30063cu: goto label_30063c;
        case 0x300640u: goto label_300640;
        case 0x300644u: goto label_300644;
        case 0x300648u: goto label_300648;
        case 0x30064cu: goto label_30064c;
        case 0x300650u: goto label_300650;
        case 0x300654u: goto label_300654;
        case 0x300658u: goto label_300658;
        case 0x30065cu: goto label_30065c;
        default: break;
    }

    ctx->pc = 0x300000u;

label_300000:
    // 0x300000: 0x82220000  lb          $v0, 0x0($s1)
    ctx->pc = 0x300000u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_300004:
    // 0x300004: 0x0  nop
    ctx->pc = 0x300004u;
    // NOP
label_300008:
    // 0x300008: 0x0  nop
    ctx->pc = 0x300008u;
    // NOP
label_30000c:
    // 0x30000c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_300010:
    if (ctx->pc == 0x300010u) {
        ctx->pc = 0x300014u;
        goto label_300014;
    }
    ctx->pc = 0x30000Cu;
    {
        const bool branch_taken_0x30000c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30000c) {
            ctx->pc = 0x2FFFF8u;
            return;
        }
    }
    ctx->pc = 0x300014u;
label_300014:
    // 0x300014: 0x1000004c  b           . + 4 + (0x4C << 2)
label_300018:
    if (ctx->pc == 0x300018u) {
        ctx->pc = 0x300018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300014u;
        // 0x300018: 0x60902d  daddu       $s2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30001Cu;
        goto label_30001c;
    }
    ctx->pc = 0x300014u;
    {
        const bool branch_taken_0x300014 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x300018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300014u;
        // 0x300018: 0x60902d  daddu       $s2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300014) {
            ctx->pc = 0x300148u;
            goto label_300148;
        }
    }
    ctx->pc = 0x30001Cu;
label_30001c:
    // 0x30001c: 0x26d70001  addiu       $s7, $s6, 0x1
    ctx->pc = 0x30001cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_300020:
    // 0x300020: 0x32b40100  andi        $s4, $s5, 0x100
    ctx->pc = 0x300020u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)256);
label_300024:
    // 0x300024: 0x32b30001  andi        $s3, $s5, 0x1
    ctx->pc = 0x300024u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
label_300028:
    // 0x300028: 0x10000047  b           . + 4 + (0x47 << 2)
label_30002c:
    if (ctx->pc == 0x30002Cu) {
        ctx->pc = 0x30002Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300028u;
        // 0x30002c: 0x60902d  daddu       $s2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x300030u;
        goto label_300030;
    }
    ctx->pc = 0x300028u;
    {
        const bool branch_taken_0x300028 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30002Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300028u;
        // 0x30002c: 0x60902d  daddu       $s2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300028) {
            ctx->pc = 0x300148u;
            goto label_300148;
        }
    }
    ctx->pc = 0x300030u;
label_300030:
    // 0x300030: 0x27de0008  addiu       $fp, $fp, 0x8
    ctx->pc = 0x300030u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
label_300034:
    // 0x300034: 0x8fb1004c  lw          $s1, 0x4C($sp)
    ctx->pc = 0x300034u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_300038:
    // 0x300038: 0x83d0fff8  lb          $s0, -0x8($fp)
    ctx->pc = 0x300038u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 30), 4294967288)));
label_30003c:
    // 0x30003c: 0x36b50100  ori         $s5, $s5, 0x100
    ctx->pc = 0x30003cu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)256);
label_300040:
    // 0x300040: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x300040u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_300044:
    // 0x300044: 0x26d70001  addiu       $s7, $s6, 0x1
    ctx->pc = 0x300044u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_300048:
    // 0x300048: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x300048u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_30004c:
    // 0x30004c: 0x32b40100  andi        $s4, $s5, 0x100
    ctx->pc = 0x30004cu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)256);
label_300050:
    // 0x300050: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x300050u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
label_300054:
    // 0x300054: 0x32b30001  andi        $s3, $s5, 0x1
    ctx->pc = 0x300054u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
label_300058:
    // 0x300058: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x300058u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_30005c:
    // 0x30005c: 0x8fa5004c  lw          $a1, 0x4C($sp)
    ctx->pc = 0x30005cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_300060:
    // 0x300060: 0x10000038  b           . + 4 + (0x38 << 2)
label_300064:
    if (ctx->pc == 0x300064u) {
        ctx->pc = 0x300064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300060u;
        // 0x300064: 0x26320001  addiu       $s2, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x300068u;
        goto label_300068;
    }
    ctx->pc = 0x300060u;
    {
        const bool branch_taken_0x300060 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x300064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300060u;
        // 0x300064: 0x26320001  addiu       $s2, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300060) {
            ctx->pc = 0x300144u;
            goto label_300144;
        }
    }
    ctx->pc = 0x300068u;
label_300068:
    // 0x300068: 0x27de0008  addiu       $fp, $fp, 0x8
    ctx->pc = 0x300068u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
label_30006c:
    // 0x30006c: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x30006cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_300070:
    // 0x300070: 0x9fd0fff8  lwu         $s0, -0x8($fp)
    ctx->pc = 0x300070u;
    SET_GPR_ZE32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 30), 4294967288)));
label_300074:
    // 0x300074: 0x2444a850  addiu       $a0, $v0, -0x57B0
    ctx->pc = 0x300074u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944848));
label_300078:
    // 0x300078: 0x1600000b  bnez        $s0, . + 4 + (0xB << 2)
label_30007c:
    if (ctx->pc == 0x30007Cu) {
        ctx->pc = 0x30007Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300078u;
        // 0x30007c: 0x8fb1004c  lw          $s1, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x300080u;
        goto label_300080;
    }
    ctx->pc = 0x300078u;
    {
        const bool branch_taken_0x300078 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x30007Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300078u;
        // 0x30007c: 0x8fb1004c  lw          $s1, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300078) {
            ctx->pc = 0x3000A8u;
            goto label_3000a8;
        }
    }
    ctx->pc = 0x300080u;
label_300080:
    // 0x300080: 0x32a20020  andi        $v0, $s5, 0x20
    ctx->pc = 0x300080u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)32);
label_300084:
    // 0x300084: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_300088:
    if (ctx->pc == 0x300088u) {
        ctx->pc = 0x300088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300084u;
        // 0x300088: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30008Cu;
        goto label_30008c;
    }
    ctx->pc = 0x300084u;
    {
        const bool branch_taken_0x300084 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x300088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300084u;
        // 0x300088: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300084) {
            ctx->pc = 0x300094u;
            goto label_300094;
        }
    }
    ctx->pc = 0x30008Cu;
label_30008c:
    // 0x30008c: 0x11000015  beqz        $t0, . + 4 + (0x15 << 2)
label_300090:
    if (ctx->pc == 0x300090u) {
        ctx->pc = 0x300090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30008Cu;
        // 0x300090: 0x26d70001  addiu       $s7, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x300094u;
        goto label_300094;
    }
    ctx->pc = 0x30008Cu;
    {
        const bool branch_taken_0x30008c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x300090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30008Cu;
        // 0x300090: 0x26d70001  addiu       $s7, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30008c) {
            ctx->pc = 0x3000E4u;
            goto label_3000e4;
        }
    }
    ctx->pc = 0x300094u;
label_300094:
    // 0x300094: 0x26d70001  addiu       $s7, $s6, 0x1
    ctx->pc = 0x300094u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_300098:
    // 0x300098: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x300098u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
label_30009c:
    // 0x30009c: 0x32b40100  andi        $s4, $s5, 0x100
    ctx->pc = 0x30009cu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)256);
label_3000a0:
    // 0x3000a0: 0x10000011  b           . + 4 + (0x11 << 2)
label_3000a4:
    if (ctx->pc == 0x3000A4u) {
        ctx->pc = 0x3000A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3000A0u;
        // 0x3000a4: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3000A8u;
        goto label_3000a8;
    }
    ctx->pc = 0x3000A0u;
    {
        const bool branch_taken_0x3000a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3000A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3000A0u;
        // 0x3000a4: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3000a0) {
            ctx->pc = 0x3000E8u;
            goto label_3000e8;
        }
    }
    ctx->pc = 0x3000A8u;
label_3000a8:
    // 0x3000a8: 0x26d70001  addiu       $s7, $s6, 0x1
    ctx->pc = 0x3000a8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_3000ac:
    // 0x3000ac: 0x32b40100  andi        $s4, $s5, 0x100
    ctx->pc = 0x3000acu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)256);
label_3000b0:
    // 0x3000b0: 0x32b30001  andi        $s3, $s5, 0x1
    ctx->pc = 0x3000b0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
label_3000b4:
    // 0x3000b4: 0x0  nop
    ctx->pc = 0x3000b4u;
    // NOP
label_3000b8:
    // 0x3000b8: 0x3202000f  andi        $v0, $s0, 0xF
    ctx->pc = 0x3000b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)15);
label_3000bc:
    // 0x3000bc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3000bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_3000c0:
    // 0x3000c0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3000c0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_3000c4:
    // 0x3000c4: 0x10813a  dsrl        $s0, $s0, 4
    ctx->pc = 0x3000c4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> 4);
label_3000c8:
    // 0x3000c8: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x3000c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_3000cc:
    // 0x3000cc: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x3000ccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_3000d0:
    // 0x3000d0: 0xa2230000  sb          $v1, 0x0($s1)
    ctx->pc = 0x3000d0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 3));
label_3000d4:
    // 0x3000d4: 0x1600fff8  bnez        $s0, . + 4 + (-0x8 << 2)
label_3000d8:
    if (ctx->pc == 0x3000D8u) {
        ctx->pc = 0x3000D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3000D4u;
        // 0x3000d8: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3000DCu;
        goto label_3000dc;
    }
    ctx->pc = 0x3000D4u;
    {
        const bool branch_taken_0x3000d4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3000D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3000D4u;
        // 0x3000d8: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3000d4) {
            ctx->pc = 0x3000B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3000b8;
        }
    }
    ctx->pc = 0x3000DCu;
label_3000dc:
    // 0x3000dc: 0x10000004  b           . + 4 + (0x4 << 2)
label_3000e0:
    if (ctx->pc == 0x3000E0u) {
        ctx->pc = 0x3000E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3000DCu;
        // 0x3000e0: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3000E4u;
        goto label_3000e4;
    }
    ctx->pc = 0x3000DCu;
    {
        const bool branch_taken_0x3000dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3000E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3000DCu;
        // 0x3000e0: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3000dc) {
            ctx->pc = 0x3000F0u;
            goto label_3000f0;
        }
    }
    ctx->pc = 0x3000E4u;
label_3000e4:
    // 0x3000e4: 0x32b40100  andi        $s4, $s5, 0x100
    ctx->pc = 0x3000e4u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)256);
label_3000e8:
    // 0x3000e8: 0x32b30001  andi        $s3, $s5, 0x1
    ctx->pc = 0x3000e8u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
label_3000ec:
    // 0x3000ec: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x3000ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_3000f0:
    // 0x3000f0: 0x24030078  addiu       $v1, $zero, 0x78
    ctx->pc = 0x3000f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
label_3000f4:
    // 0x3000f4: 0xa3a20020  sb          $v0, 0x20($sp)
    ctx->pc = 0x3000f4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 2));
label_3000f8:
    // 0x3000f8: 0x26320001  addiu       $s2, $s1, 0x1
    ctx->pc = 0x3000f8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_3000fc:
    // 0x3000fc: 0x8fa2004c  lw          $v0, 0x4C($sp)
    ctx->pc = 0x3000fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_300100:
    // 0x300100: 0xa3a30021  sb          $v1, 0x21($sp)
    ctx->pc = 0x300100u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 33), (uint8_t)GPR_U32(ctx, 3));
label_300104:
    // 0x300104: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x300104u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_300108:
    // 0x300108: 0x512023  subu        $a0, $v0, $s1
    ctx->pc = 0x300108u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_30010c:
    // 0x30010c: 0x1000000e  b           . + 4 + (0xE << 2)
label_300110:
    if (ctx->pc == 0x300110u) {
        ctx->pc = 0x300110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30010Cu;
        // 0x300110: 0xafa30054  sw          $v1, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x300114u;
        goto label_300114;
    }
    ctx->pc = 0x30010Cu;
    {
        const bool branch_taken_0x30010c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x300110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30010Cu;
        // 0x300110: 0xafa30054  sw          $v1, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30010c) {
            ctx->pc = 0x300148u;
            goto label_300148;
        }
    }
    ctx->pc = 0x300114u;
label_300114:
    // 0x300114: 0x61600  sll         $v0, $a2, 24
    ctx->pc = 0x300114u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 24));
label_300118:
    // 0x300118: 0x10400135  beqz        $v0, . + 4 + (0x135 << 2)
label_30011c:
    if (ctx->pc == 0x30011Cu) {
        ctx->pc = 0x30011Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300118u;
        // 0x30011c: 0x8fb1004c  lw          $s1, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x300120u;
        goto label_300120;
    }
    ctx->pc = 0x300118u;
    {
        const bool branch_taken_0x300118 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30011Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300118u;
        // 0x30011c: 0x8fb1004c  lw          $s1, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300118) {
            ctx->pc = 0x3005F0u;
            goto label_3005f0;
        }
    }
    ctx->pc = 0x300120u;
label_300120:
    // 0x300120: 0x36b50100  ori         $s5, $s5, 0x100
    ctx->pc = 0x300120u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)256);
label_300124:
    // 0x300124: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x300124u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_300128:
    // 0x300128: 0x26d70001  addiu       $s7, $s6, 0x1
    ctx->pc = 0x300128u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_30012c:
    // 0x30012c: 0xa2250000  sb          $a1, 0x0($s1)
    ctx->pc = 0x30012cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 5));
label_300130:
    // 0x300130: 0x32b40100  andi        $s4, $s5, 0x100
    ctx->pc = 0x300130u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)256);
label_300134:
    // 0x300134: 0x8fa5004c  lw          $a1, 0x4C($sp)
    ctx->pc = 0x300134u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_300138:
    // 0x300138: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x300138u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_30013c:
    // 0x30013c: 0x26320001  addiu       $s2, $s1, 0x1
    ctx->pc = 0x30013cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_300140:
    // 0x300140: 0x32b30001  andi        $s3, $s5, 0x1
    ctx->pc = 0x300140u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
label_300144:
    // 0x300144: 0xb12023  subu        $a0, $a1, $s1
    ctx->pc = 0x300144u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
label_300148:
    // 0x300148: 0x100102d  daddu       $v0, $t0, $zero
    ctx->pc = 0x300148u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_30014c:
    // 0x30014c: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x30014cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_300150:
    // 0x300150: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x300150u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_300154:
    // 0x300154: 0x1044023  subu        $t0, $t0, $a0
    ctx->pc = 0x300154u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
label_300158:
    // 0x300158: 0x2400a  movz        $t0, $zero, $v0
    ctx->pc = 0x300158u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 0));
label_30015c:
    // 0x30015c: 0xa41823  subu        $v1, $a1, $a0
    ctx->pc = 0x30015cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_300160:
    // 0x300160: 0x8fa20054  lw          $v0, 0x54($sp)
    ctx->pc = 0x300160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
label_300164:
    // 0x300164: 0x2448821  addu        $s1, $s2, $a0
    ctx->pc = 0x300164u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
label_300168:
    // 0x300168: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x300168u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_30016c:
    // 0x30016c: 0x681823  subu        $v1, $v1, $t0
    ctx->pc = 0x30016cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
label_300170:
    // 0x300170: 0x12800008  beqz        $s4, . + 4 + (0x8 << 2)
label_300174:
    if (ctx->pc == 0x300174u) {
        ctx->pc = 0x300174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300170u;
        // 0x300174: 0xafa30050  sw          $v1, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x300178u;
        goto label_300178;
    }
    ctx->pc = 0x300170u;
    {
        const bool branch_taken_0x300170 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x300174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300170u;
        // 0x300174: 0xafa30050  sw          $v1, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300170) {
            ctx->pc = 0x300194u;
            goto label_300194;
        }
    }
    ctx->pc = 0x300178u;
label_300178:
    // 0x300178: 0x32a20004  andi        $v0, $s5, 0x4
    ctx->pc = 0x300178u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)4);
label_30017c:
    // 0x30017c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_300180:
    if (ctx->pc == 0x300180u) {
        ctx->pc = 0x300180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30017Cu;
        // 0x300180: 0x24070020  addiu       $a3, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x300184u;
        goto label_300184;
    }
    ctx->pc = 0x30017Cu;
    {
        const bool branch_taken_0x30017c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x300180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30017Cu;
        // 0x300180: 0x24070020  addiu       $a3, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30017c) {
            ctx->pc = 0x3001B4u;
            goto label_3001b4;
        }
    }
    ctx->pc = 0x300184u;
label_300184:
    // 0x300184: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x300184u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_300188:
    // 0x300188: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x300188u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_30018c:
    // 0x30018c: 0x10000008  b           . + 4 + (0x8 << 2)
label_300190:
    if (ctx->pc == 0x300190u) {
        ctx->pc = 0x300190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30018Cu;
        // 0x300190: 0x28820001  slti        $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x300194u;
        goto label_300194;
    }
    ctx->pc = 0x30018Cu;
    {
        const bool branch_taken_0x30018c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x300190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30018Cu;
        // 0x300190: 0x28820001  slti        $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30018c) {
            ctx->pc = 0x3001B0u;
            goto label_3001b0;
        }
    }
    ctx->pc = 0x300194u;
label_300194:
    // 0x300194: 0x32a30024  andi        $v1, $s5, 0x24
    ctx->pc = 0x300194u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)36);
label_300198:
    // 0x300198: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x300198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_30019c:
    // 0x30019c: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_3001a0:
    if (ctx->pc == 0x3001A0u) {
        ctx->pc = 0x3001A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30019Cu;
        // 0x3001a0: 0x24070020  addiu       $a3, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3001A4u;
        goto label_3001a4;
    }
    ctx->pc = 0x30019Cu;
    {
        const bool branch_taken_0x30019c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3001A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30019Cu;
        // 0x3001a0: 0x24070020  addiu       $a3, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30019c) {
            ctx->pc = 0x3001B4u;
            goto label_3001b4;
        }
    }
    ctx->pc = 0x3001A4u;
label_3001a4:
    // 0x3001a4: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x3001a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_3001a8:
    // 0x3001a8: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x3001a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_3001ac:
    // 0x3001ac: 0x28a20001  slti        $v0, $a1, 0x1
    ctx->pc = 0x3001acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)1) ? 1 : 0);
label_3001b0:
    // 0x3001b0: 0x62380a  movz        $a3, $v1, $v0
    ctx->pc = 0x3001b0u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 3));
label_3001b4:
    // 0x3001b4: 0x12600042  beqz        $s3, . + 4 + (0x42 << 2)
label_3001b8:
    if (ctx->pc == 0x3001B8u) {
        ctx->pc = 0x3001B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3001B4u;
        // 0x3001b8: 0x8fa20054  lw          $v0, 0x54($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3001BCu;
        goto label_3001bc;
    }
    ctx->pc = 0x3001B4u;
    {
        const bool branch_taken_0x3001b4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x3001B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3001B4u;
        // 0x3001b8: 0x8fa20054  lw          $v0, 0x54($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3001b4) {
            ctx->pc = 0x3002C0u;
            goto label_3002c0;
        }
    }
    ctx->pc = 0x3001BCu;
label_3001bc:
    // 0x3001bc: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_3001c0:
    if (ctx->pc == 0x3001C0u) {
        ctx->pc = 0x3001C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3001BCu;
        // 0x3001c0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3001C4u;
        goto label_3001c4;
    }
    ctx->pc = 0x3001BCu;
    {
        const bool branch_taken_0x3001bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3001C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3001BCu;
        // 0x3001c0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3001bc) {
            ctx->pc = 0x300214u;
            goto label_300214;
        }
    }
    ctx->pc = 0x3001C4u;
label_3001c4:
    // 0x3001c4: 0x27b30020  addiu       $s3, $sp, 0x20
    ctx->pc = 0x3001c4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3001c8:
    // 0x3001c8: 0x251a02b  sltu        $s4, $s2, $s1
    ctx->pc = 0x3001c8u;
    SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_3001cc:
    // 0x3001cc: 0x0  nop
    ctx->pc = 0x3001ccu;
    // NOP
label_3001d0:
    // 0x3001d0: 0x2701021  addu        $v0, $s3, $s0
    ctx->pc = 0x3001d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
label_3001d4:
    // 0x3001d4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x3001d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_3001d8:
    // 0x3001d8: 0x80460000  lb          $a2, 0x0($v0)
    ctx->pc = 0x3001d8u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_3001dc:
    // 0x3001dc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3001dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_3001e0:
    // 0x3001e0: 0x8fa5005c  lw          $a1, 0x5C($sp)
    ctx->pc = 0x3001e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_3001e4:
    // 0x3001e4: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x3001e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_3001e8:
    // 0x3001e8: 0x60f809  jalr        $v1
label_3001ec:
    if (ctx->pc == 0x3001ECu) {
        ctx->pc = 0x3001ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3001E8u;
        // 0x3001ec: 0x7fa80070  sq          $t0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3001F0u;
        goto label_3001f0;
    }
    ctx->pc = 0x3001E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3001F0u);
        ctx->pc = 0x3001ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3001E8u;
        // 0x3001ec: 0x7fa80070  sq          $t0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3001E8u, 0x3001F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3001F0u;
label_3001f0:
    // 0x3001f0: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x3001f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_3001f4:
    // 0x3001f4: 0x8fa50054  lw          $a1, 0x54($sp)
    ctx->pc = 0x3001f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
label_3001f8:
    // 0x3001f8: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x3001f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_3001fc:
    // 0x3001fc: 0x7ba80070  lq          $t0, 0x70($sp)
    ctx->pc = 0x3001fcu;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_300200:
    // 0x300200: 0x205102a  slt         $v0, $s0, $a1
    ctx->pc = 0x300200u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_300204:
    // 0x300204: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
label_300208:
    if (ctx->pc == 0x300208u) {
        ctx->pc = 0x300208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300204u;
        // 0x300208: 0xafa40058  sw          $a0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30020Cu;
        goto label_30020c;
    }
    ctx->pc = 0x300204u;
    {
        const bool branch_taken_0x300204 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x300208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300204u;
        // 0x300208: 0xafa40058  sw          $a0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300204) {
            ctx->pc = 0x3001D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3001d0;
        }
    }
    ctx->pc = 0x30020Cu;
label_30020c:
    // 0x30020c: 0x10000002  b           . + 4 + (0x2 << 2)
label_300210:
    if (ctx->pc == 0x300210u) {
        ctx->pc = 0x300214u;
        goto label_300214;
    }
    ctx->pc = 0x30020Cu;
    {
        const bool branch_taken_0x30020c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30020c) {
            ctx->pc = 0x300218u;
            goto label_300218;
        }
    }
    ctx->pc = 0x300214u;
label_300214:
    // 0x300214: 0x251a02b  sltu        $s4, $s2, $s1
    ctx->pc = 0x300214u;
    SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_300218:
    // 0x300218: 0x1900000d  blez        $t0, . + 4 + (0xD << 2)
label_30021c:
    if (ctx->pc == 0x30021Cu) {
        ctx->pc = 0x300220u;
        goto label_300220;
    }
    ctx->pc = 0x300218u;
    {
        const bool branch_taken_0x300218 = (GPR_S32(ctx, 8) <= 0);
        if (branch_taken_0x300218) {
            ctx->pc = 0x300250u;
            goto label_300250;
        }
    }
    ctx->pc = 0x300220u;
label_300220:
    // 0x300220: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x300220u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_300224:
    // 0x300224: 0x0  nop
    ctx->pc = 0x300224u;
    // NOP
label_300228:
    // 0x300228: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x300228u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_30022c:
    // 0x30022c: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x30022cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_300230:
    // 0x300230: 0x8fa5005c  lw          $a1, 0x5C($sp)
    ctx->pc = 0x300230u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_300234:
    // 0x300234: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x300234u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_300238:
    // 0x300238: 0x60f809  jalr        $v1
label_30023c:
    if (ctx->pc == 0x30023Cu) {
        ctx->pc = 0x30023Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300238u;
        // 0x30023c: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x300240u;
        goto label_300240;
    }
    ctx->pc = 0x300238u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x300240u);
        ctx->pc = 0x30023Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300238u;
        // 0x30023c: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x300238u, 0x300240u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x300240u;
label_300240:
    // 0x300240: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x300240u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_300244:
    // 0x300244: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x300244u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_300248:
    // 0x300248: 0x1600fff7  bnez        $s0, . + 4 + (-0x9 << 2)
label_30024c:
    if (ctx->pc == 0x30024Cu) {
        ctx->pc = 0x30024Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300248u;
        // 0x30024c: 0xafa40058  sw          $a0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x300250u;
        goto label_300250;
    }
    ctx->pc = 0x300248u;
    {
        const bool branch_taken_0x300248 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x30024Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300248u;
        // 0x30024c: 0xafa40058  sw          $a0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300248) {
            ctx->pc = 0x300228u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_300228;
        }
    }
    ctx->pc = 0x300250u;
label_300250:
    // 0x300250: 0x1280000d  beqz        $s4, . + 4 + (0xD << 2)
label_300254:
    if (ctx->pc == 0x300254u) {
        ctx->pc = 0x300254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300250u;
        // 0x300254: 0x8fa50050  lw          $a1, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x300258u;
        goto label_300258;
    }
    ctx->pc = 0x300250u;
    {
        const bool branch_taken_0x300250 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x300254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300250u;
        // 0x300254: 0x8fa50050  lw          $a1, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300250) {
            ctx->pc = 0x300288u;
            goto label_300288;
        }
    }
    ctx->pc = 0x300258u;
label_300258:
    // 0x300258: 0x82460000  lb          $a2, 0x0($s2)
    ctx->pc = 0x300258u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
label_30025c:
    // 0x30025c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x30025cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_300260:
    // 0x300260: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x300260u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_300264:
    // 0x300264: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x300264u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_300268:
    // 0x300268: 0x60f809  jalr        $v1
label_30026c:
    if (ctx->pc == 0x30026Cu) {
        ctx->pc = 0x30026Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300268u;
        // 0x30026c: 0x8fa5005c  lw          $a1, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x300270u;
        goto label_300270;
    }
    ctx->pc = 0x300268u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x300270u);
        ctx->pc = 0x30026Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300268u;
        // 0x30026c: 0x8fa5005c  lw          $a1, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x300268u, 0x300270u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x300270u;
label_300270:
    // 0x300270: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x300270u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_300274:
    // 0x300274: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x300274u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_300278:
    // 0x300278: 0x251102b  sltu        $v0, $s2, $s1
    ctx->pc = 0x300278u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_30027c:
    // 0x30027c: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
label_300280:
    if (ctx->pc == 0x300280u) {
        ctx->pc = 0x300280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30027Cu;
        // 0x300280: 0xafa40058  sw          $a0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x300284u;
        goto label_300284;
    }
    ctx->pc = 0x30027Cu;
    {
        const bool branch_taken_0x30027c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x300280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30027Cu;
        // 0x300280: 0xafa40058  sw          $a0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30027c) {
            ctx->pc = 0x300258u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_300258;
        }
    }
    ctx->pc = 0x300284u;
label_300284:
    // 0x300284: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x300284u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_300288:
    // 0x300288: 0x18a0ff16  blez        $a1, . + 4 + (-0xEA << 2)
label_30028c:
    if (ctx->pc == 0x30028Cu) {
        ctx->pc = 0x30028Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300288u;
        // 0x30028c: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x300290u;
        goto label_300290;
    }
    ctx->pc = 0x300288u;
    {
        const bool branch_taken_0x300288 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x30028Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300288u;
        // 0x30028c: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300288) {
            ctx->pc = 0x2FFEE4u;
            return;
        }
    }
    ctx->pc = 0x300290u;
label_300290:
    // 0x300290: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x300290u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_300294:
    // 0x300294: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x300294u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_300298:
    // 0x300298: 0x8fa5005c  lw          $a1, 0x5C($sp)
    ctx->pc = 0x300298u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_30029c:
    // 0x30029c: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x30029cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_3002a0:
    // 0x3002a0: 0x60f809  jalr        $v1
label_3002a4:
    if (ctx->pc == 0x3002A4u) {
        ctx->pc = 0x3002A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3002A0u;
        // 0x3002a4: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3002A8u;
        goto label_3002a8;
    }
    ctx->pc = 0x3002A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3002A8u);
        ctx->pc = 0x3002A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3002A0u;
        // 0x3002a4: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3002A0u, 0x3002A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3002A8u;
label_3002a8:
    // 0x3002a8: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x3002a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_3002ac:
    // 0x3002ac: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x3002acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_3002b0:
    // 0x3002b0: 0x1600fff7  bnez        $s0, . + 4 + (-0x9 << 2)
label_3002b4:
    if (ctx->pc == 0x3002B4u) {
        ctx->pc = 0x3002B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3002B0u;
        // 0x3002b4: 0xafa40058  sw          $a0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3002B8u;
        goto label_3002b8;
    }
    ctx->pc = 0x3002B0u;
    {
        const bool branch_taken_0x3002b0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3002B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3002B0u;
        // 0x3002b4: 0xafa40058  sw          $a0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3002b0) {
            ctx->pc = 0x300290u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_300290;
        }
    }
    ctx->pc = 0x3002B8u;
label_3002b8:
    // 0x3002b8: 0x100000ce  b           . + 4 + (0xCE << 2)
label_3002bc:
    if (ctx->pc == 0x3002BCu) {
        ctx->pc = 0x3002BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3002B8u;
        // 0x3002bc: 0x92c50000  lbu         $a1, 0x0($s6) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3002C0u;
        goto label_3002c0;
    }
    ctx->pc = 0x3002B8u;
    {
        const bool branch_taken_0x3002b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3002BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3002B8u;
        // 0x3002bc: 0x92c50000  lbu         $a1, 0x0($s6) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3002b8) {
            ctx->pc = 0x3005F4u;
            goto label_3005f4;
        }
    }
    ctx->pc = 0x3002C0u;
label_3002c0:
    // 0x3002c0: 0x32a20004  andi        $v0, $s5, 0x4
    ctx->pc = 0x3002c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)4);
label_3002c4:
    // 0x3002c4: 0x10400077  beqz        $v0, . + 4 + (0x77 << 2)
label_3002c8:
    if (ctx->pc == 0x3002C8u) {
        ctx->pc = 0x3002C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3002C4u;
        // 0x3002c8: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3002CCu;
        goto label_3002cc;
    }
    ctx->pc = 0x3002C4u;
    {
        const bool branch_taken_0x3002c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3002C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3002C4u;
        // 0x3002c8: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3002c4) {
            ctx->pc = 0x3004A4u;
            goto label_3004a4;
        }
    }
    ctx->pc = 0x3002CCu;
label_3002cc:
    // 0x3002cc: 0x14e2002e  bne         $a3, $v0, . + 4 + (0x2E << 2)
label_3002d0:
    if (ctx->pc == 0x3002D0u) {
        ctx->pc = 0x3002D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3002CCu;
        // 0x3002d0: 0x8fa50050  lw          $a1, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3002D4u;
        goto label_3002d4;
    }
    ctx->pc = 0x3002CCu;
    {
        const bool branch_taken_0x3002cc = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x3002D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3002CCu;
        // 0x3002d0: 0x8fa50050  lw          $a1, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3002cc) {
            ctx->pc = 0x300388u;
            goto label_300388;
        }
    }
    ctx->pc = 0x3002D4u;
label_3002d4:
    // 0x3002d4: 0x8fa50054  lw          $a1, 0x54($sp)
    ctx->pc = 0x3002d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
label_3002d8:
    // 0x3002d8: 0x10a00016  beqz        $a1, . + 4 + (0x16 << 2)
label_3002dc:
    if (ctx->pc == 0x3002DCu) {
        ctx->pc = 0x3002DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3002D8u;
        // 0x3002dc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3002E0u;
        goto label_3002e0;
    }
    ctx->pc = 0x3002D8u;
    {
        const bool branch_taken_0x3002d8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3002DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3002D8u;
        // 0x3002dc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3002d8) {
            ctx->pc = 0x300334u;
            goto label_300334;
        }
    }
    ctx->pc = 0x3002E0u;
label_3002e0:
    // 0x3002e0: 0x27b30020  addiu       $s3, $sp, 0x20
    ctx->pc = 0x3002e0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3002e4:
    // 0x3002e4: 0x251a02b  sltu        $s4, $s2, $s1
    ctx->pc = 0x3002e4u;
    SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_3002e8:
    // 0x3002e8: 0x2701021  addu        $v0, $s3, $s0
    ctx->pc = 0x3002e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
label_3002ec:
    // 0x3002ec: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x3002ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_3002f0:
    // 0x3002f0: 0x80460000  lb          $a2, 0x0($v0)
    ctx->pc = 0x3002f0u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_3002f4:
    // 0x3002f4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3002f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_3002f8:
    // 0x3002f8: 0x8fa5005c  lw          $a1, 0x5C($sp)
    ctx->pc = 0x3002f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_3002fc:
    // 0x3002fc: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x3002fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_300300:
    // 0x300300: 0x7fa70060  sq          $a3, 0x60($sp)
    ctx->pc = 0x300300u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 7));
label_300304:
    // 0x300304: 0x60f809  jalr        $v1
label_300308:
    if (ctx->pc == 0x300308u) {
        ctx->pc = 0x300308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300304u;
        // 0x300308: 0x7fa80070  sq          $t0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30030Cu;
        goto label_30030c;
    }
    ctx->pc = 0x300304u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x30030Cu);
        ctx->pc = 0x300308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300304u;
        // 0x300308: 0x7fa80070  sq          $t0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x300304u, 0x30030Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x30030Cu;
label_30030c:
    // 0x30030c: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x30030cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_300310:
    // 0x300310: 0x8fa50054  lw          $a1, 0x54($sp)
    ctx->pc = 0x300310u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
label_300314:
    // 0x300314: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x300314u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_300318:
    // 0x300318: 0x7ba70060  lq          $a3, 0x60($sp)
    ctx->pc = 0x300318u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_30031c:
    // 0x30031c: 0xafa40058  sw          $a0, 0x58($sp)
    ctx->pc = 0x30031cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
label_300320:
    // 0x300320: 0x205102a  slt         $v0, $s0, $a1
    ctx->pc = 0x300320u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_300324:
    // 0x300324: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
label_300328:
    if (ctx->pc == 0x300328u) {
        ctx->pc = 0x300328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300324u;
        // 0x300328: 0x7ba80070  lq          $t0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30032Cu;
        goto label_30032c;
    }
    ctx->pc = 0x300324u;
    {
        const bool branch_taken_0x300324 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x300328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300324u;
        // 0x300328: 0x7ba80070  lq          $t0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300324) {
            ctx->pc = 0x3002E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3002e8;
        }
    }
    ctx->pc = 0x30032Cu;
label_30032c:
    // 0x30032c: 0x10000003  b           . + 4 + (0x3 << 2)
label_300330:
    if (ctx->pc == 0x300330u) {
        ctx->pc = 0x300330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30032Cu;
        // 0x300330: 0x8fa20050  lw          $v0, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x300334u;
        goto label_300334;
    }
    ctx->pc = 0x30032Cu;
    {
        const bool branch_taken_0x30032c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x300330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30032Cu;
        // 0x300330: 0x8fa20050  lw          $v0, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30032c) {
            ctx->pc = 0x30033Cu;
            goto label_30033c;
        }
    }
    ctx->pc = 0x300334u;
label_300334:
    // 0x300334: 0x251a02b  sltu        $s4, $s2, $s1
    ctx->pc = 0x300334u;
    SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_300338:
    // 0x300338: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x300338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_30033c:
    // 0x30033c: 0x1840003d  blez        $v0, . + 4 + (0x3D << 2)
label_300340:
    if (ctx->pc == 0x300340u) {
        ctx->pc = 0x300344u;
        goto label_300344;
    }
    ctx->pc = 0x30033Cu;
    {
        const bool branch_taken_0x30033c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x30033c) {
            ctx->pc = 0x300434u;
            goto label_300434;
        }
    }
    ctx->pc = 0x300344u;
label_300344:
    // 0x300344: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x300344u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_300348:
    // 0x300348: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x300348u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_30034c:
    // 0x30034c: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x30034cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_300350:
    // 0x300350: 0x8fa5005c  lw          $a1, 0x5C($sp)
    ctx->pc = 0x300350u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_300354:
    // 0x300354: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x300354u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_300358:
    // 0x300358: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x300358u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_30035c:
    // 0x30035c: 0x7fa70060  sq          $a3, 0x60($sp)
    ctx->pc = 0x30035cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 7));
label_300360:
    // 0x300360: 0x60f809  jalr        $v1
label_300364:
    if (ctx->pc == 0x300364u) {
        ctx->pc = 0x300364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300360u;
        // 0x300364: 0x7fa80070  sq          $t0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x300368u;
        goto label_300368;
    }
    ctx->pc = 0x300360u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x300368u);
        ctx->pc = 0x300364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300360u;
        // 0x300364: 0x7fa80070  sq          $t0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x300360u, 0x300368u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x300368u;
label_300368:
    // 0x300368: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x300368u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_30036c:
    // 0x30036c: 0x7ba70060  lq          $a3, 0x60($sp)
    ctx->pc = 0x30036cu;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_300370:
    // 0x300370: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x300370u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_300374:
    // 0x300374: 0x7ba80070  lq          $t0, 0x70($sp)
    ctx->pc = 0x300374u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_300378:
    // 0x300378: 0x1600fff3  bnez        $s0, . + 4 + (-0xD << 2)
label_30037c:
    if (ctx->pc == 0x30037Cu) {
        ctx->pc = 0x30037Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300378u;
        // 0x30037c: 0xafa40058  sw          $a0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x300380u;
        goto label_300380;
    }
    ctx->pc = 0x300378u;
    {
        const bool branch_taken_0x300378 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x30037Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300378u;
        // 0x30037c: 0xafa40058  sw          $a0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300378) {
            ctx->pc = 0x300348u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_300348;
        }
    }
    ctx->pc = 0x300380u;
label_300380:
    // 0x300380: 0x1000002c  b           . + 4 + (0x2C << 2)
label_300384:
    if (ctx->pc == 0x300384u) {
        ctx->pc = 0x300388u;
        goto label_300388;
    }
    ctx->pc = 0x300380u;
    {
        const bool branch_taken_0x300380 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x300380) {
            ctx->pc = 0x300434u;
            goto label_300434;
        }
    }
    ctx->pc = 0x300388u;
label_300388:
    // 0x300388: 0x18a00015  blez        $a1, . + 4 + (0x15 << 2)
label_30038c:
    if (ctx->pc == 0x30038Cu) {
        ctx->pc = 0x30038Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300388u;
        // 0x30038c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x300390u;
        goto label_300390;
    }
    ctx->pc = 0x300388u;
    {
        const bool branch_taken_0x300388 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x30038Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300388u;
        // 0x30038c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300388) {
            ctx->pc = 0x3003E0u;
            goto label_3003e0;
        }
    }
    ctx->pc = 0x300390u;
label_300390:
    // 0x300390: 0x251a02b  sltu        $s4, $s2, $s1
    ctx->pc = 0x300390u;
    SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_300394:
    // 0x300394: 0x0  nop
    ctx->pc = 0x300394u;
    // NOP
label_300398:
    // 0x300398: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x300398u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_30039c:
    // 0x30039c: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x30039cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_3003a0:
    // 0x3003a0: 0x8fa5005c  lw          $a1, 0x5C($sp)
    ctx->pc = 0x3003a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_3003a4:
    // 0x3003a4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3003a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_3003a8:
    // 0x3003a8: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x3003a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_3003ac:
    // 0x3003ac: 0x7fa70060  sq          $a3, 0x60($sp)
    ctx->pc = 0x3003acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 7));
label_3003b0:
    // 0x3003b0: 0x60f809  jalr        $v1
label_3003b4:
    if (ctx->pc == 0x3003B4u) {
        ctx->pc = 0x3003B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3003B0u;
        // 0x3003b4: 0x7fa80070  sq          $t0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3003B8u;
        goto label_3003b8;
    }
    ctx->pc = 0x3003B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3003B8u);
        ctx->pc = 0x3003B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3003B0u;
        // 0x3003b4: 0x7fa80070  sq          $t0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3003B0u, 0x3003B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3003B8u;
label_3003b8:
    // 0x3003b8: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x3003b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_3003bc:
    // 0x3003bc: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x3003bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_3003c0:
    // 0x3003c0: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x3003c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_3003c4:
    // 0x3003c4: 0x7ba70060  lq          $a3, 0x60($sp)
    ctx->pc = 0x3003c4u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3003c8:
    // 0x3003c8: 0xafa40058  sw          $a0, 0x58($sp)
    ctx->pc = 0x3003c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
label_3003cc:
    // 0x3003cc: 0x205102a  slt         $v0, $s0, $a1
    ctx->pc = 0x3003ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_3003d0:
    // 0x3003d0: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
label_3003d4:
    if (ctx->pc == 0x3003D4u) {
        ctx->pc = 0x3003D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3003D0u;
        // 0x3003d4: 0x7ba80070  lq          $t0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3003D8u;
        goto label_3003d8;
    }
    ctx->pc = 0x3003D0u;
    {
        const bool branch_taken_0x3003d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3003D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3003D0u;
        // 0x3003d4: 0x7ba80070  lq          $t0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3003d0) {
            ctx->pc = 0x300398u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_300398;
        }
    }
    ctx->pc = 0x3003D8u;
label_3003d8:
    // 0x3003d8: 0x10000003  b           . + 4 + (0x3 << 2)
label_3003dc:
    if (ctx->pc == 0x3003DCu) {
        ctx->pc = 0x3003DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3003D8u;
        // 0x3003dc: 0x8fa20054  lw          $v0, 0x54($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3003E0u;
        goto label_3003e0;
    }
    ctx->pc = 0x3003D8u;
    {
        const bool branch_taken_0x3003d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3003DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3003D8u;
        // 0x3003dc: 0x8fa20054  lw          $v0, 0x54($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3003d8) {
            ctx->pc = 0x3003E8u;
            goto label_3003e8;
        }
    }
    ctx->pc = 0x3003E0u;
label_3003e0:
    // 0x3003e0: 0x251a02b  sltu        $s4, $s2, $s1
    ctx->pc = 0x3003e0u;
    SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_3003e4:
    // 0x3003e4: 0x8fa20054  lw          $v0, 0x54($sp)
    ctx->pc = 0x3003e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
label_3003e8:
    // 0x3003e8: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_3003ec:
    if (ctx->pc == 0x3003ECu) {
        ctx->pc = 0x3003ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3003E8u;
        // 0x3003ec: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3003F0u;
        goto label_3003f0;
    }
    ctx->pc = 0x3003E8u;
    {
        const bool branch_taken_0x3003e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3003ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3003E8u;
        // 0x3003ec: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3003e8) {
            ctx->pc = 0x300434u;
            goto label_300434;
        }
    }
    ctx->pc = 0x3003F0u;
label_3003f0:
    // 0x3003f0: 0x27b30020  addiu       $s3, $sp, 0x20
    ctx->pc = 0x3003f0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3003f4:
    // 0x3003f4: 0x0  nop
    ctx->pc = 0x3003f4u;
    // NOP
label_3003f8:
    // 0x3003f8: 0x2701021  addu        $v0, $s3, $s0
    ctx->pc = 0x3003f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
label_3003fc:
    // 0x3003fc: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x3003fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_300400:
    // 0x300400: 0x80460000  lb          $a2, 0x0($v0)
    ctx->pc = 0x300400u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_300404:
    // 0x300404: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x300404u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_300408:
    // 0x300408: 0x8fa5005c  lw          $a1, 0x5C($sp)
    ctx->pc = 0x300408u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_30040c:
    // 0x30040c: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x30040cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_300410:
    // 0x300410: 0x60f809  jalr        $v1
label_300414:
    if (ctx->pc == 0x300414u) {
        ctx->pc = 0x300414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300410u;
        // 0x300414: 0x7fa80070  sq          $t0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x300418u;
        goto label_300418;
    }
    ctx->pc = 0x300410u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x300418u);
        ctx->pc = 0x300414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300410u;
        // 0x300414: 0x7fa80070  sq          $t0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x300410u, 0x300418u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x300418u;
label_300418:
    // 0x300418: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x300418u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_30041c:
    // 0x30041c: 0x8fa50054  lw          $a1, 0x54($sp)
    ctx->pc = 0x30041cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
label_300420:
    // 0x300420: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x300420u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_300424:
    // 0x300424: 0x7ba80070  lq          $t0, 0x70($sp)
    ctx->pc = 0x300424u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_300428:
    // 0x300428: 0x205102a  slt         $v0, $s0, $a1
    ctx->pc = 0x300428u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_30042c:
    // 0x30042c: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
label_300430:
    if (ctx->pc == 0x300430u) {
        ctx->pc = 0x300430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30042Cu;
        // 0x300430: 0xafa40058  sw          $a0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x300434u;
        goto label_300434;
    }
    ctx->pc = 0x30042Cu;
    {
        const bool branch_taken_0x30042c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x300430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30042Cu;
        // 0x300430: 0xafa40058  sw          $a0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30042c) {
            ctx->pc = 0x3003F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3003f8;
        }
    }
    ctx->pc = 0x300434u;
label_300434:
    // 0x300434: 0x1900000c  blez        $t0, . + 4 + (0xC << 2)
label_300438:
    if (ctx->pc == 0x300438u) {
        ctx->pc = 0x30043Cu;
        goto label_30043c;
    }
    ctx->pc = 0x300434u;
    {
        const bool branch_taken_0x300434 = (GPR_S32(ctx, 8) <= 0);
        if (branch_taken_0x300434) {
            ctx->pc = 0x300468u;
            goto label_300468;
        }
    }
    ctx->pc = 0x30043Cu;
label_30043c:
    // 0x30043c: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x30043cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_300440:
    // 0x300440: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x300440u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_300444:
    // 0x300444: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x300444u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_300448:
    // 0x300448: 0x8fa5005c  lw          $a1, 0x5C($sp)
    ctx->pc = 0x300448u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_30044c:
    // 0x30044c: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x30044cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_300450:
    // 0x300450: 0x60f809  jalr        $v1
label_300454:
    if (ctx->pc == 0x300454u) {
        ctx->pc = 0x300454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300450u;
        // 0x300454: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x300458u;
        goto label_300458;
    }
    ctx->pc = 0x300450u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x300458u);
        ctx->pc = 0x300454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300450u;
        // 0x300454: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x300450u, 0x300458u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x300458u;
label_300458:
    // 0x300458: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x300458u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_30045c:
    // 0x30045c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x30045cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_300460:
    // 0x300460: 0x1600fff7  bnez        $s0, . + 4 + (-0x9 << 2)
label_300464:
    if (ctx->pc == 0x300464u) {
        ctx->pc = 0x300464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300460u;
        // 0x300464: 0xafa40058  sw          $a0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x300468u;
        goto label_300468;
    }
    ctx->pc = 0x300460u;
    {
        const bool branch_taken_0x300460 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x300464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300460u;
        // 0x300464: 0xafa40058  sw          $a0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300460) {
            ctx->pc = 0x300440u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_300440;
        }
    }
    ctx->pc = 0x300468u;
label_300468:
    // 0x300468: 0x52800062  beql        $s4, $zero, . + 4 + (0x62 << 2)
label_30046c:
    if (ctx->pc == 0x30046Cu) {
        ctx->pc = 0x30046Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300468u;
        // 0x30046c: 0x92c50000  lbu         $a1, 0x0($s6) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x300470u;
        goto label_300470;
    }
    ctx->pc = 0x300468u;
    {
        const bool branch_taken_0x300468 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x300468) {
            ctx->pc = 0x30046Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x300468u;
            // 0x30046c: 0x92c50000  lbu         $a1, 0x0($s6) (Delay Slot)
            SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3005F4u;
            goto label_3005f4;
        }
    }
    ctx->pc = 0x300470u;
label_300470:
    // 0x300470: 0x82460000  lb          $a2, 0x0($s2)
    ctx->pc = 0x300470u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
label_300474:
    // 0x300474: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x300474u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_300478:
    // 0x300478: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x300478u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_30047c:
    // 0x30047c: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x30047cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_300480:
    // 0x300480: 0x60f809  jalr        $v1
label_300484:
    if (ctx->pc == 0x300484u) {
        ctx->pc = 0x300484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300480u;
        // 0x300484: 0x8fa5005c  lw          $a1, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x300488u;
        goto label_300488;
    }
    ctx->pc = 0x300480u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x300488u);
        ctx->pc = 0x300484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300480u;
        // 0x300484: 0x8fa5005c  lw          $a1, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x300480u, 0x300488u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x300488u;
label_300488:
    // 0x300488: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x300488u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_30048c:
    // 0x30048c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x30048cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_300490:
    // 0x300490: 0x251102b  sltu        $v0, $s2, $s1
    ctx->pc = 0x300490u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_300494:
    // 0x300494: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
label_300498:
    if (ctx->pc == 0x300498u) {
        ctx->pc = 0x300498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300494u;
        // 0x300498: 0xafa40058  sw          $a0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30049Cu;
        goto label_30049c;
    }
    ctx->pc = 0x300494u;
    {
        const bool branch_taken_0x300494 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x300498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300494u;
        // 0x300498: 0xafa40058  sw          $a0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300494) {
            ctx->pc = 0x300470u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_300470;
        }
    }
    ctx->pc = 0x30049Cu;
label_30049c:
    // 0x30049c: 0x10000055  b           . + 4 + (0x55 << 2)
label_3004a0:
    if (ctx->pc == 0x3004A0u) {
        ctx->pc = 0x3004A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30049Cu;
        // 0x3004a0: 0x92c50000  lbu         $a1, 0x0($s6) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3004A4u;
        goto label_3004a4;
    }
    ctx->pc = 0x30049Cu;
    {
        const bool branch_taken_0x30049c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3004A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30049Cu;
        // 0x3004a0: 0x92c50000  lbu         $a1, 0x0($s6) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30049c) {
            ctx->pc = 0x3005F4u;
            goto label_3005f4;
        }
    }
    ctx->pc = 0x3004A4u;
label_3004a4:
    // 0x3004a4: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x3004a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_3004a8:
    // 0x3004a8: 0x18a00015  blez        $a1, . + 4 + (0x15 << 2)
label_3004ac:
    if (ctx->pc == 0x3004ACu) {
        ctx->pc = 0x3004ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3004A8u;
        // 0x3004ac: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3004B0u;
        goto label_3004b0;
    }
    ctx->pc = 0x3004A8u;
    {
        const bool branch_taken_0x3004a8 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x3004ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3004A8u;
        // 0x3004ac: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3004a8) {
            ctx->pc = 0x300500u;
            goto label_300500;
        }
    }
    ctx->pc = 0x3004B0u;
label_3004b0:
    // 0x3004b0: 0x251a02b  sltu        $s4, $s2, $s1
    ctx->pc = 0x3004b0u;
    SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_3004b4:
    // 0x3004b4: 0x0  nop
    ctx->pc = 0x3004b4u;
    // NOP
label_3004b8:
    // 0x3004b8: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x3004b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_3004bc:
    // 0x3004bc: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x3004bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_3004c0:
    // 0x3004c0: 0x8fa5005c  lw          $a1, 0x5C($sp)
    ctx->pc = 0x3004c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_3004c4:
    // 0x3004c4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3004c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_3004c8:
    // 0x3004c8: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x3004c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_3004cc:
    // 0x3004cc: 0x7fa70060  sq          $a3, 0x60($sp)
    ctx->pc = 0x3004ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 7));
label_3004d0:
    // 0x3004d0: 0x60f809  jalr        $v1
label_3004d4:
    if (ctx->pc == 0x3004D4u) {
        ctx->pc = 0x3004D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3004D0u;
        // 0x3004d4: 0x7fa80070  sq          $t0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3004D8u;
        goto label_3004d8;
    }
    ctx->pc = 0x3004D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3004D8u);
        ctx->pc = 0x3004D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3004D0u;
        // 0x3004d4: 0x7fa80070  sq          $t0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3004D0u, 0x3004D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3004D8u;
label_3004d8:
    // 0x3004d8: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x3004d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_3004dc:
    // 0x3004dc: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x3004dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_3004e0:
    // 0x3004e0: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x3004e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_3004e4:
    // 0x3004e4: 0x7ba70060  lq          $a3, 0x60($sp)
    ctx->pc = 0x3004e4u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3004e8:
    // 0x3004e8: 0xafa40058  sw          $a0, 0x58($sp)
    ctx->pc = 0x3004e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
label_3004ec:
    // 0x3004ec: 0x205102a  slt         $v0, $s0, $a1
    ctx->pc = 0x3004ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_3004f0:
    // 0x3004f0: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
label_3004f4:
    if (ctx->pc == 0x3004F4u) {
        ctx->pc = 0x3004F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3004F0u;
        // 0x3004f4: 0x7ba80070  lq          $t0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3004F8u;
        goto label_3004f8;
    }
    ctx->pc = 0x3004F0u;
    {
        const bool branch_taken_0x3004f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3004F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3004F0u;
        // 0x3004f4: 0x7ba80070  lq          $t0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3004f0) {
            ctx->pc = 0x3004B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3004b8;
        }
    }
    ctx->pc = 0x3004F8u;
label_3004f8:
    // 0x3004f8: 0x10000003  b           . + 4 + (0x3 << 2)
label_3004fc:
    if (ctx->pc == 0x3004FCu) {
        ctx->pc = 0x3004FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3004F8u;
        // 0x3004fc: 0x8fa20054  lw          $v0, 0x54($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x300500u;
        goto label_300500;
    }
    ctx->pc = 0x3004F8u;
    {
        const bool branch_taken_0x3004f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3004FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3004F8u;
        // 0x3004fc: 0x8fa20054  lw          $v0, 0x54($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3004f8) {
            ctx->pc = 0x300508u;
            goto label_300508;
        }
    }
    ctx->pc = 0x300500u;
label_300500:
    // 0x300500: 0x251a02b  sltu        $s4, $s2, $s1
    ctx->pc = 0x300500u;
    SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_300504:
    // 0x300504: 0x8fa20054  lw          $v0, 0x54($sp)
    ctx->pc = 0x300504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
label_300508:
    // 0x300508: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_30050c:
    if (ctx->pc == 0x30050Cu) {
        ctx->pc = 0x30050Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300508u;
        // 0x30050c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x300510u;
        goto label_300510;
    }
    ctx->pc = 0x300508u;
    {
        const bool branch_taken_0x300508 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30050Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300508u;
        // 0x30050c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300508) {
            ctx->pc = 0x300554u;
            goto label_300554;
        }
    }
    ctx->pc = 0x300510u;
label_300510:
    // 0x300510: 0x27b30020  addiu       $s3, $sp, 0x20
    ctx->pc = 0x300510u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_300514:
    // 0x300514: 0x0  nop
    ctx->pc = 0x300514u;
    // NOP
label_300518:
    // 0x300518: 0x2701021  addu        $v0, $s3, $s0
    ctx->pc = 0x300518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
label_30051c:
    // 0x30051c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x30051cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_300520:
    // 0x300520: 0x80460000  lb          $a2, 0x0($v0)
    ctx->pc = 0x300520u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_300524:
    // 0x300524: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x300524u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_300528:
    // 0x300528: 0x8fa5005c  lw          $a1, 0x5C($sp)
    ctx->pc = 0x300528u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_30052c:
    // 0x30052c: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x30052cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_300530:
    // 0x300530: 0x60f809  jalr        $v1
label_300534:
    if (ctx->pc == 0x300534u) {
        ctx->pc = 0x300534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300530u;
        // 0x300534: 0x7fa80070  sq          $t0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x300538u;
        goto label_300538;
    }
    ctx->pc = 0x300530u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x300538u);
        ctx->pc = 0x300534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300530u;
        // 0x300534: 0x7fa80070  sq          $t0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x300530u, 0x300538u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x300538u;
label_300538:
    // 0x300538: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x300538u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_30053c:
    // 0x30053c: 0x8fa50054  lw          $a1, 0x54($sp)
    ctx->pc = 0x30053cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
label_300540:
    // 0x300540: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x300540u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_300544:
    // 0x300544: 0x7ba80070  lq          $t0, 0x70($sp)
    ctx->pc = 0x300544u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_300548:
    // 0x300548: 0x205102a  slt         $v0, $s0, $a1
    ctx->pc = 0x300548u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_30054c:
    // 0x30054c: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
label_300550:
    if (ctx->pc == 0x300550u) {
        ctx->pc = 0x300550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30054Cu;
        // 0x300550: 0xafa40058  sw          $a0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x300554u;
        goto label_300554;
    }
    ctx->pc = 0x30054Cu;
    {
        const bool branch_taken_0x30054c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x300550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30054Cu;
        // 0x300550: 0xafa40058  sw          $a0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30054c) {
            ctx->pc = 0x300518u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_300518;
        }
    }
    ctx->pc = 0x300554u;
label_300554:
    // 0x300554: 0x1900000c  blez        $t0, . + 4 + (0xC << 2)
label_300558:
    if (ctx->pc == 0x300558u) {
        ctx->pc = 0x30055Cu;
        goto label_30055c;
    }
    ctx->pc = 0x300554u;
    {
        const bool branch_taken_0x300554 = (GPR_S32(ctx, 8) <= 0);
        if (branch_taken_0x300554) {
            ctx->pc = 0x300588u;
            goto label_300588;
        }
    }
    ctx->pc = 0x30055Cu;
label_30055c:
    // 0x30055c: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x30055cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_300560:
    // 0x300560: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x300560u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_300564:
    // 0x300564: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x300564u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_300568:
    // 0x300568: 0x8fa5005c  lw          $a1, 0x5C($sp)
    ctx->pc = 0x300568u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_30056c:
    // 0x30056c: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x30056cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_300570:
    // 0x300570: 0x60f809  jalr        $v1
label_300574:
    if (ctx->pc == 0x300574u) {
        ctx->pc = 0x300574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300570u;
        // 0x300574: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x300578u;
        goto label_300578;
    }
    ctx->pc = 0x300570u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x300578u);
        ctx->pc = 0x300574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300570u;
        // 0x300574: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x300570u, 0x300578u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x300578u;
label_300578:
    // 0x300578: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x300578u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_30057c:
    // 0x30057c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x30057cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_300580:
    // 0x300580: 0x1600fff7  bnez        $s0, . + 4 + (-0x9 << 2)
label_300584:
    if (ctx->pc == 0x300584u) {
        ctx->pc = 0x300584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300580u;
        // 0x300584: 0xafa40058  sw          $a0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x300588u;
        goto label_300588;
    }
    ctx->pc = 0x300580u;
    {
        const bool branch_taken_0x300580 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x300584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300580u;
        // 0x300584: 0xafa40058  sw          $a0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300580) {
            ctx->pc = 0x300560u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_300560;
        }
    }
    ctx->pc = 0x300588u;
label_300588:
    // 0x300588: 0x5280001a  beql        $s4, $zero, . + 4 + (0x1A << 2)
label_30058c:
    if (ctx->pc == 0x30058Cu) {
        ctx->pc = 0x30058Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300588u;
        // 0x30058c: 0x92c50000  lbu         $a1, 0x0($s6) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x300590u;
        goto label_300590;
    }
    ctx->pc = 0x300588u;
    {
        const bool branch_taken_0x300588 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x300588) {
            ctx->pc = 0x30058Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x300588u;
            // 0x30058c: 0x92c50000  lbu         $a1, 0x0($s6) (Delay Slot)
            SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3005F4u;
            goto label_3005f4;
        }
    }
    ctx->pc = 0x300590u;
label_300590:
    // 0x300590: 0x82460000  lb          $a2, 0x0($s2)
    ctx->pc = 0x300590u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
label_300594:
    // 0x300594: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x300594u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_300598:
    // 0x300598: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x300598u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_30059c:
    // 0x30059c: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x30059cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_3005a0:
    // 0x3005a0: 0x60f809  jalr        $v1
label_3005a4:
    if (ctx->pc == 0x3005A4u) {
        ctx->pc = 0x3005A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3005A0u;
        // 0x3005a4: 0x8fa5005c  lw          $a1, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3005A8u;
        goto label_3005a8;
    }
    ctx->pc = 0x3005A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3005A8u);
        ctx->pc = 0x3005A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3005A0u;
        // 0x3005a4: 0x8fa5005c  lw          $a1, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3005A0u, 0x3005A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3005A8u;
label_3005a8:
    // 0x3005a8: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x3005a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_3005ac:
    // 0x3005ac: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x3005acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_3005b0:
    // 0x3005b0: 0x251102b  sltu        $v0, $s2, $s1
    ctx->pc = 0x3005b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_3005b4:
    // 0x3005b4: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
label_3005b8:
    if (ctx->pc == 0x3005B8u) {
        ctx->pc = 0x3005B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3005B4u;
        // 0x3005b8: 0xafa40058  sw          $a0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3005BCu;
        goto label_3005bc;
    }
    ctx->pc = 0x3005B4u;
    {
        const bool branch_taken_0x3005b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3005B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3005B4u;
        // 0x3005b8: 0xafa40058  sw          $a0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3005b4) {
            ctx->pc = 0x300590u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_300590;
        }
    }
    ctx->pc = 0x3005BCu;
label_3005bc:
    // 0x3005bc: 0x1000000d  b           . + 4 + (0xD << 2)
label_3005c0:
    if (ctx->pc == 0x3005C0u) {
        ctx->pc = 0x3005C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3005BCu;
        // 0x3005c0: 0x92c50000  lbu         $a1, 0x0($s6) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3005C4u;
        goto label_3005c4;
    }
    ctx->pc = 0x3005BCu;
    {
        const bool branch_taken_0x3005bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3005C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3005BCu;
        // 0x3005c0: 0x92c50000  lbu         $a1, 0x0($s6) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3005bc) {
            ctx->pc = 0x3005F4u;
            goto label_3005f4;
        }
    }
    ctx->pc = 0x3005C4u;
label_3005c4:
    // 0x3005c4: 0x10c0000a  beqz        $a2, . + 4 + (0xA << 2)
label_3005c8:
    if (ctx->pc == 0x3005C8u) {
        ctx->pc = 0x3005C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3005C4u;
        // 0x3005c8: 0x8fa40048  lw          $a0, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3005CCu;
        goto label_3005cc;
    }
    ctx->pc = 0x3005C4u;
    {
        const bool branch_taken_0x3005c4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x3005C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3005C4u;
        // 0x3005c8: 0x8fa40048  lw          $a0, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3005c4) {
            ctx->pc = 0x3005F0u;
            goto label_3005f0;
        }
    }
    ctx->pc = 0x3005CCu;
label_3005cc:
    // 0x3005cc: 0x26d70001  addiu       $s7, $s6, 0x1
    ctx->pc = 0x3005ccu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_3005d0:
    // 0x3005d0: 0x8fa5005c  lw          $a1, 0x5C($sp)
    ctx->pc = 0x3005d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_3005d4:
    // 0x3005d4: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x3005d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_3005d8:
    // 0x3005d8: 0x60f809  jalr        $v1
label_3005dc:
    if (ctx->pc == 0x3005DCu) {
        ctx->pc = 0x3005E0u;
        goto label_3005e0;
    }
    ctx->pc = 0x3005D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3005E0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3005D8u, 0x3005E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3005E0u;
label_3005e0:
    // 0x3005e0: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x3005e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_3005e4:
    // 0x3005e4: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x3005e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_3005e8:
    // 0x3005e8: 0x1000fe3e  b           . + 4 + (-0x1C2 << 2)
label_3005ec:
    if (ctx->pc == 0x3005ECu) {
        ctx->pc = 0x3005ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3005E8u;
        // 0x3005ec: 0xafa40058  sw          $a0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3005F0u;
        goto label_3005f0;
    }
    ctx->pc = 0x3005E8u;
    {
        const bool branch_taken_0x3005e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3005ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3005E8u;
        // 0x3005ec: 0xafa40058  sw          $a0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3005e8) {
            ctx->pc = 0x2FFEE4u;
            return;
        }
    }
    ctx->pc = 0x3005F0u;
label_3005f0:
    // 0x3005f0: 0x26d70001  addiu       $s7, $s6, 0x1
    ctx->pc = 0x3005f0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_3005f4:
    // 0x3005f4: 0x2e5b00b  movn        $s6, $s7, $a1
    ctx->pc = 0x3005f4u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 22, GPR_VEC(ctx, 23));
label_3005f8:
    // 0x3005f8: 0x92c20000  lbu         $v0, 0x0($s6)
    ctx->pc = 0x3005f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
label_3005fc:
    // 0x3005fc: 0x1440fcea  bnez        $v0, . + 4 + (-0x316 << 2)
label_300600:
    if (ctx->pc == 0x300600u) {
        ctx->pc = 0x300600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3005FCu;
        // 0x300600: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x300604u;
        goto label_300604;
    }
    ctx->pc = 0x3005FCu;
    {
        const bool branch_taken_0x3005fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x300600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3005FCu;
        // 0x300600: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3005fc) {
            ctx->pc = 0x2FF9A8u;
            return;
        }
    }
    ctx->pc = 0x300604u;
label_300604:
    // 0x300604: 0x10000004  b           . + 4 + (0x4 << 2)
label_300608:
    if (ctx->pc == 0x300608u) {
        ctx->pc = 0x300608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300604u;
        // 0x300608: 0x8fa40048  lw          $a0, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30060Cu;
        goto label_30060c;
    }
    ctx->pc = 0x300604u;
    {
        const bool branch_taken_0x300604 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x300608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300604u;
        // 0x300608: 0x8fa40048  lw          $a0, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300604) {
            ctx->pc = 0x300618u;
            goto label_300618;
        }
    }
    ctx->pc = 0x30060Cu;
label_30060c:
    // 0x30060c: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x30060cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_300610:
    // 0x300610: 0xafa5005c  sw          $a1, 0x5C($sp)
    ctx->pc = 0x300610u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 5));
label_300614:
    // 0x300614: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x300614u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_300618:
    // 0x300618: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x300618u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30061c:
    // 0x30061c: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x30061cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_300620:
    // 0x300620: 0x60f809  jalr        $v1
label_300624:
    if (ctx->pc == 0x300624u) {
        ctx->pc = 0x300624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300620u;
        // 0x300624: 0x8fa5005c  lw          $a1, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x300628u;
        goto label_300628;
    }
    ctx->pc = 0x300620u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x300628u);
        ctx->pc = 0x300624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300620u;
        // 0x300624: 0x8fa5005c  lw          $a1, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x300620u, 0x300628u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x300628u;
label_300628:
    // 0x300628: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x300628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_30062c:
    // 0x30062c: 0xdfbf0110  ld          $ra, 0x110($sp)
    ctx->pc = 0x30062cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 272)));
label_300630:
    // 0x300630: 0xdfbe0100  ld          $fp, 0x100($sp)
    ctx->pc = 0x300630u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 256)));
label_300634:
    // 0x300634: 0xdfb700f0  ld          $s7, 0xF0($sp)
    ctx->pc = 0x300634u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 240)));
label_300638:
    // 0x300638: 0xdfb600e0  ld          $s6, 0xE0($sp)
    ctx->pc = 0x300638u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 224)));
label_30063c:
    // 0x30063c: 0xdfb500d0  ld          $s5, 0xD0($sp)
    ctx->pc = 0x30063cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 208)));
label_300640:
    // 0x300640: 0xdfb400c0  ld          $s4, 0xC0($sp)
    ctx->pc = 0x300640u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 192)));
label_300644:
    // 0x300644: 0xdfb300b0  ld          $s3, 0xB0($sp)
    ctx->pc = 0x300644u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_300648:
    // 0x300648: 0xdfb200a0  ld          $s2, 0xA0($sp)
    ctx->pc = 0x300648u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_30064c:
    // 0x30064c: 0xdfb10090  ld          $s1, 0x90($sp)
    ctx->pc = 0x30064cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_300650:
    // 0x300650: 0xdfb00080  ld          $s0, 0x80($sp)
    ctx->pc = 0x300650u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_300654:
    // 0x300654: 0x3e00008  jr          $ra
label_300658:
    if (ctx->pc == 0x300658u) {
        ctx->pc = 0x300658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300654u;
        // 0x300658: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30065Cu;
        goto label_30065c;
    }
    ctx->pc = 0x300654u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x300658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300654u;
        // 0x300658: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x300654u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30065Cu;
label_30065c:
    // 0x30065c: 0x0  nop
    ctx->pc = 0x30065cu;
    // NOP
    ctx->pc = 0x300660u;
}
