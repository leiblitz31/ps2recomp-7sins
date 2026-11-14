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

// Function: sub_003B80A0
// Address: 0x3b80a0 - 0x3b87d8
void sub_003B80A0_0x3b80a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B80A0_0x3b80a0");
#endif

    switch (ctx->pc) {
        case 0x3b80a0u: goto label_3b80a0;
        case 0x3b80a4u: goto label_3b80a4;
        case 0x3b80a8u: goto label_3b80a8;
        case 0x3b80acu: goto label_3b80ac;
        case 0x3b80b0u: goto label_3b80b0;
        case 0x3b80b4u: goto label_3b80b4;
        case 0x3b80b8u: goto label_3b80b8;
        case 0x3b80bcu: goto label_3b80bc;
        case 0x3b80c0u: goto label_3b80c0;
        case 0x3b80c4u: goto label_3b80c4;
        case 0x3b80c8u: goto label_3b80c8;
        case 0x3b80ccu: goto label_3b80cc;
        case 0x3b80d0u: goto label_3b80d0;
        case 0x3b80d4u: goto label_3b80d4;
        case 0x3b80d8u: goto label_3b80d8;
        case 0x3b80dcu: goto label_3b80dc;
        case 0x3b80e0u: goto label_3b80e0;
        case 0x3b80e4u: goto label_3b80e4;
        case 0x3b80e8u: goto label_3b80e8;
        case 0x3b80ecu: goto label_3b80ec;
        case 0x3b80f0u: goto label_3b80f0;
        case 0x3b80f4u: goto label_3b80f4;
        case 0x3b80f8u: goto label_3b80f8;
        case 0x3b80fcu: goto label_3b80fc;
        case 0x3b8100u: goto label_3b8100;
        case 0x3b8104u: goto label_3b8104;
        case 0x3b8108u: goto label_3b8108;
        case 0x3b810cu: goto label_3b810c;
        case 0x3b8110u: goto label_3b8110;
        case 0x3b8114u: goto label_3b8114;
        case 0x3b8118u: goto label_3b8118;
        case 0x3b811cu: goto label_3b811c;
        case 0x3b8120u: goto label_3b8120;
        case 0x3b8124u: goto label_3b8124;
        case 0x3b8128u: goto label_3b8128;
        case 0x3b812cu: goto label_3b812c;
        case 0x3b8130u: goto label_3b8130;
        case 0x3b8134u: goto label_3b8134;
        case 0x3b8138u: goto label_3b8138;
        case 0x3b813cu: goto label_3b813c;
        case 0x3b8140u: goto label_3b8140;
        case 0x3b8144u: goto label_3b8144;
        case 0x3b8148u: goto label_3b8148;
        case 0x3b814cu: goto label_3b814c;
        case 0x3b8150u: goto label_3b8150;
        case 0x3b8154u: goto label_3b8154;
        case 0x3b8158u: goto label_3b8158;
        case 0x3b815cu: goto label_3b815c;
        case 0x3b8160u: goto label_3b8160;
        case 0x3b8164u: goto label_3b8164;
        case 0x3b8168u: goto label_3b8168;
        case 0x3b816cu: goto label_3b816c;
        case 0x3b8170u: goto label_3b8170;
        case 0x3b8174u: goto label_3b8174;
        case 0x3b8178u: goto label_3b8178;
        case 0x3b817cu: goto label_3b817c;
        case 0x3b8180u: goto label_3b8180;
        case 0x3b8184u: goto label_3b8184;
        case 0x3b8188u: goto label_3b8188;
        case 0x3b818cu: goto label_3b818c;
        case 0x3b8190u: goto label_3b8190;
        case 0x3b8194u: goto label_3b8194;
        case 0x3b8198u: goto label_3b8198;
        case 0x3b819cu: goto label_3b819c;
        case 0x3b81a0u: goto label_3b81a0;
        case 0x3b81a4u: goto label_3b81a4;
        case 0x3b81a8u: goto label_3b81a8;
        case 0x3b81acu: goto label_3b81ac;
        case 0x3b81b0u: goto label_3b81b0;
        case 0x3b81b4u: goto label_3b81b4;
        case 0x3b81b8u: goto label_3b81b8;
        case 0x3b81bcu: goto label_3b81bc;
        case 0x3b81c0u: goto label_3b81c0;
        case 0x3b81c4u: goto label_3b81c4;
        case 0x3b81c8u: goto label_3b81c8;
        case 0x3b81ccu: goto label_3b81cc;
        case 0x3b81d0u: goto label_3b81d0;
        case 0x3b81d4u: goto label_3b81d4;
        case 0x3b81d8u: goto label_3b81d8;
        case 0x3b81dcu: goto label_3b81dc;
        case 0x3b81e0u: goto label_3b81e0;
        case 0x3b81e4u: goto label_3b81e4;
        case 0x3b81e8u: goto label_3b81e8;
        case 0x3b81ecu: goto label_3b81ec;
        case 0x3b81f0u: goto label_3b81f0;
        case 0x3b81f4u: goto label_3b81f4;
        case 0x3b81f8u: goto label_3b81f8;
        case 0x3b81fcu: goto label_3b81fc;
        case 0x3b8200u: goto label_3b8200;
        case 0x3b8204u: goto label_3b8204;
        case 0x3b8208u: goto label_3b8208;
        case 0x3b820cu: goto label_3b820c;
        case 0x3b8210u: goto label_3b8210;
        case 0x3b8214u: goto label_3b8214;
        case 0x3b8218u: goto label_3b8218;
        case 0x3b821cu: goto label_3b821c;
        case 0x3b8220u: goto label_3b8220;
        case 0x3b8224u: goto label_3b8224;
        case 0x3b8228u: goto label_3b8228;
        case 0x3b822cu: goto label_3b822c;
        case 0x3b8230u: goto label_3b8230;
        case 0x3b8234u: goto label_3b8234;
        case 0x3b8238u: goto label_3b8238;
        case 0x3b823cu: goto label_3b823c;
        case 0x3b8240u: goto label_3b8240;
        case 0x3b8244u: goto label_3b8244;
        case 0x3b8248u: goto label_3b8248;
        case 0x3b824cu: goto label_3b824c;
        case 0x3b8250u: goto label_3b8250;
        case 0x3b8254u: goto label_3b8254;
        case 0x3b8258u: goto label_3b8258;
        case 0x3b825cu: goto label_3b825c;
        case 0x3b8260u: goto label_3b8260;
        case 0x3b8264u: goto label_3b8264;
        case 0x3b8268u: goto label_3b8268;
        case 0x3b826cu: goto label_3b826c;
        case 0x3b8270u: goto label_3b8270;
        case 0x3b8274u: goto label_3b8274;
        case 0x3b8278u: goto label_3b8278;
        case 0x3b827cu: goto label_3b827c;
        case 0x3b8280u: goto label_3b8280;
        case 0x3b8284u: goto label_3b8284;
        case 0x3b8288u: goto label_3b8288;
        case 0x3b828cu: goto label_3b828c;
        case 0x3b8290u: goto label_3b8290;
        case 0x3b8294u: goto label_3b8294;
        case 0x3b8298u: goto label_3b8298;
        case 0x3b829cu: goto label_3b829c;
        case 0x3b82a0u: goto label_3b82a0;
        case 0x3b82a4u: goto label_3b82a4;
        case 0x3b82a8u: goto label_3b82a8;
        case 0x3b82acu: goto label_3b82ac;
        case 0x3b82b0u: goto label_3b82b0;
        case 0x3b82b4u: goto label_3b82b4;
        case 0x3b82b8u: goto label_3b82b8;
        case 0x3b82bcu: goto label_3b82bc;
        case 0x3b82c0u: goto label_3b82c0;
        case 0x3b82c4u: goto label_3b82c4;
        case 0x3b82c8u: goto label_3b82c8;
        case 0x3b82ccu: goto label_3b82cc;
        case 0x3b82d0u: goto label_3b82d0;
        case 0x3b82d4u: goto label_3b82d4;
        case 0x3b82d8u: goto label_3b82d8;
        case 0x3b82dcu: goto label_3b82dc;
        case 0x3b82e0u: goto label_3b82e0;
        case 0x3b82e4u: goto label_3b82e4;
        case 0x3b82e8u: goto label_3b82e8;
        case 0x3b82ecu: goto label_3b82ec;
        case 0x3b82f0u: goto label_3b82f0;
        case 0x3b82f4u: goto label_3b82f4;
        case 0x3b82f8u: goto label_3b82f8;
        case 0x3b82fcu: goto label_3b82fc;
        case 0x3b8300u: goto label_3b8300;
        case 0x3b8304u: goto label_3b8304;
        case 0x3b8308u: goto label_3b8308;
        case 0x3b830cu: goto label_3b830c;
        case 0x3b8310u: goto label_3b8310;
        case 0x3b8314u: goto label_3b8314;
        case 0x3b8318u: goto label_3b8318;
        case 0x3b831cu: goto label_3b831c;
        case 0x3b8320u: goto label_3b8320;
        case 0x3b8324u: goto label_3b8324;
        case 0x3b8328u: goto label_3b8328;
        case 0x3b832cu: goto label_3b832c;
        case 0x3b8330u: goto label_3b8330;
        case 0x3b8334u: goto label_3b8334;
        case 0x3b8338u: goto label_3b8338;
        case 0x3b833cu: goto label_3b833c;
        case 0x3b8340u: goto label_3b8340;
        case 0x3b8344u: goto label_3b8344;
        case 0x3b8348u: goto label_3b8348;
        case 0x3b834cu: goto label_3b834c;
        case 0x3b8350u: goto label_3b8350;
        case 0x3b8354u: goto label_3b8354;
        case 0x3b8358u: goto label_3b8358;
        case 0x3b835cu: goto label_3b835c;
        case 0x3b8360u: goto label_3b8360;
        case 0x3b8364u: goto label_3b8364;
        case 0x3b8368u: goto label_3b8368;
        case 0x3b836cu: goto label_3b836c;
        case 0x3b8370u: goto label_3b8370;
        case 0x3b8374u: goto label_3b8374;
        case 0x3b8378u: goto label_3b8378;
        case 0x3b837cu: goto label_3b837c;
        case 0x3b8380u: goto label_3b8380;
        case 0x3b8384u: goto label_3b8384;
        case 0x3b8388u: goto label_3b8388;
        case 0x3b838cu: goto label_3b838c;
        case 0x3b8390u: goto label_3b8390;
        case 0x3b8394u: goto label_3b8394;
        case 0x3b8398u: goto label_3b8398;
        case 0x3b839cu: goto label_3b839c;
        case 0x3b83a0u: goto label_3b83a0;
        case 0x3b83a4u: goto label_3b83a4;
        case 0x3b83a8u: goto label_3b83a8;
        case 0x3b83acu: goto label_3b83ac;
        case 0x3b83b0u: goto label_3b83b0;
        case 0x3b83b4u: goto label_3b83b4;
        case 0x3b83b8u: goto label_3b83b8;
        case 0x3b83bcu: goto label_3b83bc;
        case 0x3b83c0u: goto label_3b83c0;
        case 0x3b83c4u: goto label_3b83c4;
        case 0x3b83c8u: goto label_3b83c8;
        case 0x3b83ccu: goto label_3b83cc;
        case 0x3b83d0u: goto label_3b83d0;
        case 0x3b83d4u: goto label_3b83d4;
        case 0x3b83d8u: goto label_3b83d8;
        case 0x3b83dcu: goto label_3b83dc;
        case 0x3b83e0u: goto label_3b83e0;
        case 0x3b83e4u: goto label_3b83e4;
        case 0x3b83e8u: goto label_3b83e8;
        case 0x3b83ecu: goto label_3b83ec;
        case 0x3b83f0u: goto label_3b83f0;
        case 0x3b83f4u: goto label_3b83f4;
        case 0x3b83f8u: goto label_3b83f8;
        case 0x3b83fcu: goto label_3b83fc;
        case 0x3b8400u: goto label_3b8400;
        case 0x3b8404u: goto label_3b8404;
        case 0x3b8408u: goto label_3b8408;
        case 0x3b840cu: goto label_3b840c;
        case 0x3b8410u: goto label_3b8410;
        case 0x3b8414u: goto label_3b8414;
        case 0x3b8418u: goto label_3b8418;
        case 0x3b841cu: goto label_3b841c;
        case 0x3b8420u: goto label_3b8420;
        case 0x3b8424u: goto label_3b8424;
        case 0x3b8428u: goto label_3b8428;
        case 0x3b842cu: goto label_3b842c;
        case 0x3b8430u: goto label_3b8430;
        case 0x3b8434u: goto label_3b8434;
        case 0x3b8438u: goto label_3b8438;
        case 0x3b843cu: goto label_3b843c;
        case 0x3b8440u: goto label_3b8440;
        case 0x3b8444u: goto label_3b8444;
        case 0x3b8448u: goto label_3b8448;
        case 0x3b844cu: goto label_3b844c;
        case 0x3b8450u: goto label_3b8450;
        case 0x3b8454u: goto label_3b8454;
        case 0x3b8458u: goto label_3b8458;
        case 0x3b845cu: goto label_3b845c;
        case 0x3b8460u: goto label_3b8460;
        case 0x3b8464u: goto label_3b8464;
        case 0x3b8468u: goto label_3b8468;
        case 0x3b846cu: goto label_3b846c;
        case 0x3b8470u: goto label_3b8470;
        case 0x3b8474u: goto label_3b8474;
        case 0x3b8478u: goto label_3b8478;
        case 0x3b847cu: goto label_3b847c;
        case 0x3b8480u: goto label_3b8480;
        case 0x3b8484u: goto label_3b8484;
        case 0x3b8488u: goto label_3b8488;
        case 0x3b848cu: goto label_3b848c;
        case 0x3b8490u: goto label_3b8490;
        case 0x3b8494u: goto label_3b8494;
        case 0x3b8498u: goto label_3b8498;
        case 0x3b849cu: goto label_3b849c;
        case 0x3b84a0u: goto label_3b84a0;
        case 0x3b84a4u: goto label_3b84a4;
        case 0x3b84a8u: goto label_3b84a8;
        case 0x3b84acu: goto label_3b84ac;
        case 0x3b84b0u: goto label_3b84b0;
        case 0x3b84b4u: goto label_3b84b4;
        case 0x3b84b8u: goto label_3b84b8;
        case 0x3b84bcu: goto label_3b84bc;
        case 0x3b84c0u: goto label_3b84c0;
        case 0x3b84c4u: goto label_3b84c4;
        case 0x3b84c8u: goto label_3b84c8;
        case 0x3b84ccu: goto label_3b84cc;
        case 0x3b84d0u: goto label_3b84d0;
        case 0x3b84d4u: goto label_3b84d4;
        case 0x3b84d8u: goto label_3b84d8;
        case 0x3b84dcu: goto label_3b84dc;
        case 0x3b84e0u: goto label_3b84e0;
        case 0x3b84e4u: goto label_3b84e4;
        case 0x3b84e8u: goto label_3b84e8;
        case 0x3b84ecu: goto label_3b84ec;
        case 0x3b84f0u: goto label_3b84f0;
        case 0x3b84f4u: goto label_3b84f4;
        case 0x3b84f8u: goto label_3b84f8;
        case 0x3b84fcu: goto label_3b84fc;
        case 0x3b8500u: goto label_3b8500;
        case 0x3b8504u: goto label_3b8504;
        case 0x3b8508u: goto label_3b8508;
        case 0x3b850cu: goto label_3b850c;
        case 0x3b8510u: goto label_3b8510;
        case 0x3b8514u: goto label_3b8514;
        case 0x3b8518u: goto label_3b8518;
        case 0x3b851cu: goto label_3b851c;
        case 0x3b8520u: goto label_3b8520;
        case 0x3b8524u: goto label_3b8524;
        case 0x3b8528u: goto label_3b8528;
        case 0x3b852cu: goto label_3b852c;
        case 0x3b8530u: goto label_3b8530;
        case 0x3b8534u: goto label_3b8534;
        case 0x3b8538u: goto label_3b8538;
        case 0x3b853cu: goto label_3b853c;
        case 0x3b8540u: goto label_3b8540;
        case 0x3b8544u: goto label_3b8544;
        case 0x3b8548u: goto label_3b8548;
        case 0x3b854cu: goto label_3b854c;
        case 0x3b8550u: goto label_3b8550;
        case 0x3b8554u: goto label_3b8554;
        case 0x3b8558u: goto label_3b8558;
        case 0x3b855cu: goto label_3b855c;
        case 0x3b8560u: goto label_3b8560;
        case 0x3b8564u: goto label_3b8564;
        case 0x3b8568u: goto label_3b8568;
        case 0x3b856cu: goto label_3b856c;
        case 0x3b8570u: goto label_3b8570;
        case 0x3b8574u: goto label_3b8574;
        case 0x3b8578u: goto label_3b8578;
        case 0x3b857cu: goto label_3b857c;
        case 0x3b8580u: goto label_3b8580;
        case 0x3b8584u: goto label_3b8584;
        case 0x3b8588u: goto label_3b8588;
        case 0x3b858cu: goto label_3b858c;
        case 0x3b8590u: goto label_3b8590;
        case 0x3b8594u: goto label_3b8594;
        case 0x3b8598u: goto label_3b8598;
        case 0x3b859cu: goto label_3b859c;
        case 0x3b85a0u: goto label_3b85a0;
        case 0x3b85a4u: goto label_3b85a4;
        case 0x3b85a8u: goto label_3b85a8;
        case 0x3b85acu: goto label_3b85ac;
        case 0x3b85b0u: goto label_3b85b0;
        case 0x3b85b4u: goto label_3b85b4;
        case 0x3b85b8u: goto label_3b85b8;
        case 0x3b85bcu: goto label_3b85bc;
        case 0x3b85c0u: goto label_3b85c0;
        case 0x3b85c4u: goto label_3b85c4;
        case 0x3b85c8u: goto label_3b85c8;
        case 0x3b85ccu: goto label_3b85cc;
        case 0x3b85d0u: goto label_3b85d0;
        case 0x3b85d4u: goto label_3b85d4;
        case 0x3b85d8u: goto label_3b85d8;
        case 0x3b85dcu: goto label_3b85dc;
        case 0x3b85e0u: goto label_3b85e0;
        case 0x3b85e4u: goto label_3b85e4;
        case 0x3b85e8u: goto label_3b85e8;
        case 0x3b85ecu: goto label_3b85ec;
        case 0x3b85f0u: goto label_3b85f0;
        case 0x3b85f4u: goto label_3b85f4;
        case 0x3b85f8u: goto label_3b85f8;
        case 0x3b85fcu: goto label_3b85fc;
        case 0x3b8600u: goto label_3b8600;
        case 0x3b8604u: goto label_3b8604;
        case 0x3b8608u: goto label_3b8608;
        case 0x3b860cu: goto label_3b860c;
        case 0x3b8610u: goto label_3b8610;
        case 0x3b8614u: goto label_3b8614;
        case 0x3b8618u: goto label_3b8618;
        case 0x3b861cu: goto label_3b861c;
        case 0x3b8620u: goto label_3b8620;
        case 0x3b8624u: goto label_3b8624;
        case 0x3b8628u: goto label_3b8628;
        case 0x3b862cu: goto label_3b862c;
        case 0x3b8630u: goto label_3b8630;
        case 0x3b8634u: goto label_3b8634;
        case 0x3b8638u: goto label_3b8638;
        case 0x3b863cu: goto label_3b863c;
        case 0x3b8640u: goto label_3b8640;
        case 0x3b8644u: goto label_3b8644;
        case 0x3b8648u: goto label_3b8648;
        case 0x3b864cu: goto label_3b864c;
        case 0x3b8650u: goto label_3b8650;
        case 0x3b8654u: goto label_3b8654;
        case 0x3b8658u: goto label_3b8658;
        case 0x3b865cu: goto label_3b865c;
        case 0x3b8660u: goto label_3b8660;
        case 0x3b8664u: goto label_3b8664;
        case 0x3b8668u: goto label_3b8668;
        case 0x3b866cu: goto label_3b866c;
        case 0x3b8670u: goto label_3b8670;
        case 0x3b8674u: goto label_3b8674;
        case 0x3b8678u: goto label_3b8678;
        case 0x3b867cu: goto label_3b867c;
        case 0x3b8680u: goto label_3b8680;
        case 0x3b8684u: goto label_3b8684;
        case 0x3b8688u: goto label_3b8688;
        case 0x3b868cu: goto label_3b868c;
        case 0x3b8690u: goto label_3b8690;
        case 0x3b8694u: goto label_3b8694;
        case 0x3b8698u: goto label_3b8698;
        case 0x3b869cu: goto label_3b869c;
        case 0x3b86a0u: goto label_3b86a0;
        case 0x3b86a4u: goto label_3b86a4;
        case 0x3b86a8u: goto label_3b86a8;
        case 0x3b86acu: goto label_3b86ac;
        case 0x3b86b0u: goto label_3b86b0;
        case 0x3b86b4u: goto label_3b86b4;
        case 0x3b86b8u: goto label_3b86b8;
        case 0x3b86bcu: goto label_3b86bc;
        case 0x3b86c0u: goto label_3b86c0;
        case 0x3b86c4u: goto label_3b86c4;
        case 0x3b86c8u: goto label_3b86c8;
        case 0x3b86ccu: goto label_3b86cc;
        case 0x3b86d0u: goto label_3b86d0;
        case 0x3b86d4u: goto label_3b86d4;
        case 0x3b86d8u: goto label_3b86d8;
        case 0x3b86dcu: goto label_3b86dc;
        case 0x3b86e0u: goto label_3b86e0;
        case 0x3b86e4u: goto label_3b86e4;
        case 0x3b86e8u: goto label_3b86e8;
        case 0x3b86ecu: goto label_3b86ec;
        case 0x3b86f0u: goto label_3b86f0;
        case 0x3b86f4u: goto label_3b86f4;
        case 0x3b86f8u: goto label_3b86f8;
        case 0x3b86fcu: goto label_3b86fc;
        case 0x3b8700u: goto label_3b8700;
        case 0x3b8704u: goto label_3b8704;
        case 0x3b8708u: goto label_3b8708;
        case 0x3b870cu: goto label_3b870c;
        case 0x3b8710u: goto label_3b8710;
        case 0x3b8714u: goto label_3b8714;
        case 0x3b8718u: goto label_3b8718;
        case 0x3b871cu: goto label_3b871c;
        case 0x3b8720u: goto label_3b8720;
        case 0x3b8724u: goto label_3b8724;
        case 0x3b8728u: goto label_3b8728;
        case 0x3b872cu: goto label_3b872c;
        case 0x3b8730u: goto label_3b8730;
        case 0x3b8734u: goto label_3b8734;
        case 0x3b8738u: goto label_3b8738;
        case 0x3b873cu: goto label_3b873c;
        case 0x3b8740u: goto label_3b8740;
        case 0x3b8744u: goto label_3b8744;
        case 0x3b8748u: goto label_3b8748;
        case 0x3b874cu: goto label_3b874c;
        case 0x3b8750u: goto label_3b8750;
        case 0x3b8754u: goto label_3b8754;
        case 0x3b8758u: goto label_3b8758;
        case 0x3b875cu: goto label_3b875c;
        case 0x3b8760u: goto label_3b8760;
        case 0x3b8764u: goto label_3b8764;
        case 0x3b8768u: goto label_3b8768;
        case 0x3b876cu: goto label_3b876c;
        case 0x3b8770u: goto label_3b8770;
        case 0x3b8774u: goto label_3b8774;
        case 0x3b8778u: goto label_3b8778;
        case 0x3b877cu: goto label_3b877c;
        case 0x3b8780u: goto label_3b8780;
        case 0x3b8784u: goto label_3b8784;
        case 0x3b8788u: goto label_3b8788;
        case 0x3b878cu: goto label_3b878c;
        case 0x3b8790u: goto label_3b8790;
        case 0x3b8794u: goto label_3b8794;
        case 0x3b8798u: goto label_3b8798;
        case 0x3b879cu: goto label_3b879c;
        case 0x3b87a0u: goto label_3b87a0;
        case 0x3b87a4u: goto label_3b87a4;
        case 0x3b87a8u: goto label_3b87a8;
        case 0x3b87acu: goto label_3b87ac;
        case 0x3b87b0u: goto label_3b87b0;
        case 0x3b87b4u: goto label_3b87b4;
        case 0x3b87b8u: goto label_3b87b8;
        case 0x3b87bcu: goto label_3b87bc;
        case 0x3b87c0u: goto label_3b87c0;
        case 0x3b87c4u: goto label_3b87c4;
        case 0x3b87c8u: goto label_3b87c8;
        case 0x3b87ccu: goto label_3b87cc;
        case 0x3b87d0u: goto label_3b87d0;
        case 0x3b87d4u: goto label_3b87d4;
        default: break;
    }

    ctx->pc = 0x3b80a0u;

label_3b80a0:
    // 0x3b80a0: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x3b80a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
label_3b80a4:
    // 0x3b80a4: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x3b80a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
label_3b80a8:
    // 0x3b80a8: 0x27a50034  addiu       $a1, $sp, 0x34
    ctx->pc = 0x3b80a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
label_3b80ac:
    // 0x3b80ac: 0x7fb000e0  sq          $s0, 0xE0($sp)
    ctx->pc = 0x3b80acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 16));
label_3b80b0:
    // 0x3b80b0: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x3b80b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3b80b4:
    // 0x3b80b4: 0x7fb200c0  sq          $s2, 0xC0($sp)
    ctx->pc = 0x3b80b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 18));
label_3b80b8:
    // 0x3b80b8: 0x3c100062  lui         $s0, 0x62
    ctx->pc = 0x3b80b8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)98 << 16));
label_3b80bc:
    // 0x3b80bc: 0x7fb300b0  sq          $s3, 0xB0($sp)
    ctx->pc = 0x3b80bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 19));
label_3b80c0:
    // 0x3b80c0: 0x7fb50090  sq          $s5, 0x90($sp)
    ctx->pc = 0x3b80c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 21));
label_3b80c4:
    // 0x3b80c4: 0x7fb100d0  sq          $s1, 0xD0($sp)
    ctx->pc = 0x3b80c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 17));
label_3b80c8:
    // 0x3b80c8: 0x7fb400a0  sq          $s4, 0xA0($sp)
    ctx->pc = 0x3b80c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 20));
label_3b80cc:
    // 0x3b80cc: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x3b80ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
label_3b80d0:
    // 0x3b80d0: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x3b80d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_3b80d4:
    // 0x3b80d4: 0x7fbe0060  sq          $fp, 0x60($sp)
    ctx->pc = 0x3b80d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 30));
label_3b80d8:
    // 0x3b80d8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x3b80d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_3b80dc:
    // 0x3b80dc: 0xc0e6348  jal         func_398D20
label_3b80e0:
    if (ctx->pc == 0x3B80E0u) {
        ctx->pc = 0x3B80E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B80DCu;
        // 0x3b80e0: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B80E4u;
        goto label_3b80e4;
    }
    ctx->pc = 0x3B80DCu;
    SET_GPR_U32(ctx, 31, 0x3B80E4u);
    ctx->pc = 0x3B80E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B80DCu;
    // 0x3b80e0: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x398D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x398D20u, 0x3B80DCu, 0x3B80E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B80E4u;
label_3b80e4:
    // 0x3b80e4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x3b80e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_3b80e8:
    // 0x3b80e8: 0xc10376a  jal         func_40DDA8
label_3b80ec:
    if (ctx->pc == 0x3B80ECu) {
        ctx->pc = 0x3B80ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B80E8u;
        // 0x3b80ec: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B80F0u;
        goto label_3b80f0;
    }
    ctx->pc = 0x3B80E8u;
    SET_GPR_U32(ctx, 31, 0x3B80F0u);
    ctx->pc = 0x3B80ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B80E8u;
    // 0x3b80ec: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DDA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DDA8u, 0x3B80E8u, 0x3B80F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B80F0u;
label_3b80f0:
    // 0x3b80f0: 0xafa20044  sw          $v0, 0x44($sp)
    ctx->pc = 0x3b80f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
label_3b80f4:
    // 0x3b80f4: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x3b80f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_3b80f8:
    // 0x3b80f8: 0xc1036d2  jal         func_40DB48
label_3b80fc:
    if (ctx->pc == 0x3B80FCu) {
        ctx->pc = 0x3B80FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B80F8u;
        // 0x3b80fc: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B8100u;
        goto label_3b8100;
    }
    ctx->pc = 0x3B80F8u;
    SET_GPR_U32(ctx, 31, 0x3B8100u);
    ctx->pc = 0x3B80FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B80F8u;
    // 0x3b80fc: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB48u, 0x3B80F8u, 0x3B8100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B8100u;
label_3b8100:
    // 0x3b8100: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x3b8100u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_3b8104:
    // 0x3b8104: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x3b8104u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_3b8108:
    // 0x3b8108: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3b8108u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b810c:
    // 0x3b810c: 0x8fa60044  lw          $a2, 0x44($sp)
    ctx->pc = 0x3b810cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_3b8110:
    // 0x3b8110: 0x640018  mult        $zero, $v1, $a0
    ctx->pc = 0x3b8110u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_3b8114:
    // 0x3b8114: 0x2610e880  addiu       $s0, $s0, -0x1780
    ctx->pc = 0x3b8114u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961280));
label_3b8118:
    // 0x3b8118: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x3b8118u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_3b811c:
    // 0x3b811c: 0x8e020108  lw          $v0, 0x108($s0)
    ctx->pc = 0x3b811cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
label_3b8120:
    // 0x3b8120: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x3b8120u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_3b8124:
    // 0x3b8124: 0x34a50190  ori         $a1, $a1, 0x190
    ctx->pc = 0x3b8124u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)400);
label_3b8128:
    // 0x3b8128: 0x2012  mflo        $a0
    ctx->pc = 0x3b8128u;
    SET_GPR_U64(ctx, 4, ctx->lo);
label_3b812c:
    // 0x3b812c: 0x2400013  mtlo        $s2
    ctx->pc = 0x3b812cu;
    ctx->lo = GPR_U64(ctx, 18);
label_3b8130:
    // 0x3b8130: 0x70c30000  madd        $zero, $a2, $v1
    ctx->pc = 0x3b8130u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); }
label_3b8134:
    // 0x3b8134: 0x3012  mflo        $a2
    ctx->pc = 0x3b8134u;
    SET_GPR_U64(ctx, 6, ctx->lo);
label_3b8138:
    // 0x3b8138: 0x40f809  jalr        $v0
label_3b813c:
    if (ctx->pc == 0x3B813Cu) {
        ctx->pc = 0x3B813Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8138u;
        // 0x3b813c: 0xafa60048  sw          $a2, 0x48($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B8140u;
        goto label_3b8140;
    }
    ctx->pc = 0x3B8138u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3B8140u);
        ctx->pc = 0x3B813Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8138u;
        // 0x3b813c: 0xafa60048  sw          $a2, 0x48($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B8138u, 0x3B8140u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3B8140u;
label_3b8140:
    // 0x3b8140: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x3b8140u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b8144:
    // 0x3b8144: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3b8144u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_3b8148:
    // 0x3b8148: 0x8fa20044  lw          $v0, 0x44($sp)
    ctx->pc = 0x3b8148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_3b814c:
    // 0x3b814c: 0xafb50000  sw          $s5, 0x0($sp)
    ctx->pc = 0x3b814cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 21));
label_3b8150:
    // 0x3b8150: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x3b8150u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
label_3b8154:
    // 0x3b8154: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x3b8154u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
label_3b8158:
    // 0x3b8158: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x3b8158u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
label_3b815c:
    // 0x3b815c: 0x124300ab  beq         $s2, $v1, . + 4 + (0xAB << 2)
label_3b8160:
    if (ctx->pc == 0x3B8160u) {
        ctx->pc = 0x3B8160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B815Cu;
        // 0x3b8160: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B8164u;
        goto label_3b8164;
    }
    ctx->pc = 0x3B815Cu;
    {
        const bool branch_taken_0x3b815c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 3));
        ctx->pc = 0x3B8160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B815Cu;
        // 0x3b8160: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b815c) {
            ctx->pc = 0x3B840Cu;
            goto label_3b840c;
        }
    }
    ctx->pc = 0x3B8164u;
label_3b8164:
    // 0x3b8164: 0x0  nop
    ctx->pc = 0x3b8164u;
    // NOP
label_3b8168:
    // 0x3b8168: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x3b8168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_3b816c:
    // 0x3b816c: 0x8e510004  lw          $s1, 0x4($s2)
    ctx->pc = 0x3b816cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_3b8170:
    // 0x3b8170: 0x2621018  mult        $v0, $s3, $v0
    ctx->pc = 0x3b8170u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_3b8174:
    // 0x3b8174: 0x551821  addu        $v1, $v0, $s5
    ctx->pc = 0x3b8174u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_3b8178:
    // 0x3b8178: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x3b8178u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
label_3b817c:
    // 0x3b817c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x3b817cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_3b8180:
    // 0x3b8180: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x3b8180u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
label_3b8184:
    // 0x3b8184: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x3b8184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_3b8188:
    // 0x3b8188: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x3b8188u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3b818c:
    // 0x3b818c: 0xac620014  sw          $v0, 0x14($v1)
    ctx->pc = 0x3b818cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
label_3b8190:
    // 0x3b8190: 0xac640010  sw          $a0, 0x10($v1)
    ctx->pc = 0x3b8190u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 4));
label_3b8194:
    // 0x3b8194: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x3b8194u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_3b8198:
    // 0x3b8198: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x3b8198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3b819c:
    // 0x3b819c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3b819cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_3b81a0:
    // 0x3b81a0: 0x10400046  beqz        $v0, . + 4 + (0x46 << 2)
label_3b81a4:
    if (ctx->pc == 0x3B81A4u) {
        ctx->pc = 0x3B81A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B81A0u;
        // 0x3b81a4: 0x265e000c  addiu       $fp, $s2, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B81A8u;
        goto label_3b81a8;
    }
    ctx->pc = 0x3B81A0u;
    {
        const bool branch_taken_0x3b81a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B81A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B81A0u;
        // 0x3b81a4: 0x265e000c  addiu       $fp, $s2, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b81a0) {
            ctx->pc = 0x3B82BCu;
            goto label_3b82bc;
        }
    }
    ctx->pc = 0x3B81A8u;
label_3b81a8:
    // 0x3b81a8: 0x12200085  beqz        $s1, . + 4 + (0x85 << 2)
label_3b81ac:
    if (ctx->pc == 0x3B81ACu) {
        ctx->pc = 0x3B81ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B81A8u;
        // 0x3b81ac: 0x26760001  addiu       $s6, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B81B0u;
        goto label_3b81b0;
    }
    ctx->pc = 0x3B81A8u;
    {
        const bool branch_taken_0x3b81a8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B81ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B81A8u;
        // 0x3b81ac: 0x26760001  addiu       $s6, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b81a8) {
            ctx->pc = 0x3B83C0u;
            goto label_3b83c0;
        }
    }
    ctx->pc = 0x3B81B0u;
label_3b81b0:
    // 0x3b81b0: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x3b81b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_3b81b4:
    // 0x3b81b4: 0x2414ffff  addiu       $s4, $zero, -0x1
    ctx->pc = 0x3b81b4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3b81b8:
    // 0x3b81b8: 0x2639018  mult        $s2, $s3, $v1
    ctx->pc = 0x3b81b8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 18, (int32_t)result); }
label_3b81bc:
    // 0x3b81bc: 0x255b821  addu        $s7, $s2, $s5
    ctx->pc = 0x3b81bcu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 21)));
label_3b81c0:
    // 0x3b81c0: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x3b81c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_3b81c4:
    // 0x3b81c4: 0x0  nop
    ctx->pc = 0x3b81c4u;
    // NOP
label_3b81c8:
    // 0x3b81c8: 0x50400038  beql        $v0, $zero, . + 4 + (0x38 << 2)
label_3b81cc:
    if (ctx->pc == 0x3B81CCu) {
        ctx->pc = 0x3B81CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B81C8u;
        // 0x3b81cc: 0x8e310014  lw          $s1, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B81D0u;
        goto label_3b81d0;
    }
    ctx->pc = 0x3B81C8u;
    {
        const bool branch_taken_0x3b81c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b81c8) {
            ctx->pc = 0x3B81CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B81C8u;
            // 0x3b81cc: 0x8e310014  lw          $s1, 0x14($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B82ACu;
            goto label_3b82ac;
        }
    }
    ctx->pc = 0x3B81D0u;
label_3b81d0:
    // 0x3b81d0: 0xc0ec604  jal         func_3B1810
label_3b81d4:
    if (ctx->pc == 0x3B81D4u) {
        ctx->pc = 0x3B81D8u;
        goto label_3b81d8;
    }
    ctx->pc = 0x3B81D0u;
    SET_GPR_U32(ctx, 31, 0x3B81D8u);
    ctx->pc = 0x3B1810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1810u, 0x3B81D0u, 0x3B81D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B81D8u;
label_3b81d8:
    // 0x3b81d8: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x3b81d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_3b81dc:
    // 0x3b81dc: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
label_3b81e0:
    if (ctx->pc == 0x3B81E0u) {
        ctx->pc = 0x3B81E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B81DCu;
        // 0x3b81e0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B81E4u;
        goto label_3b81e4;
    }
    ctx->pc = 0x3B81DCu;
    {
        const bool branch_taken_0x3b81dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B81E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B81DCu;
        // 0x3b81e0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b81dc) {
            ctx->pc = 0x3B8204u;
            goto label_3b8204;
        }
    }
    ctx->pc = 0x3B81E4u;
label_3b81e4:
    // 0x3b81e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3b81e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3b81e8:
    // 0x3b81e8: 0xc0ebf52  jal         func_3AFD48
label_3b81ec:
    if (ctx->pc == 0x3B81ECu) {
        ctx->pc = 0x3B81ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B81E8u;
        // 0x3b81ec: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B81F0u;
        goto label_3b81f0;
    }
    ctx->pc = 0x3B81E8u;
    SET_GPR_U32(ctx, 31, 0x3B81F0u);
    ctx->pc = 0x3B81ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B81E8u;
    // 0x3b81ec: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFD48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFD48u, 0x3B81E8u, 0x3B81F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B81F0u;
label_3b81f0:
    // 0x3b81f0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x3b81f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3b81f4:
    // 0x3b81f4: 0x14540013  bne         $v0, $s4, . + 4 + (0x13 << 2)
label_3b81f8:
    if (ctx->pc == 0x3B81F8u) {
        ctx->pc = 0x3B81F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B81F4u;
        // 0x3b81f8: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B81FCu;
        goto label_3b81fc;
    }
    ctx->pc = 0x3B81F4u;
    {
        const bool branch_taken_0x3b81f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        ctx->pc = 0x3B81F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B81F4u;
        // 0x3b81f8: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b81f4) {
            ctx->pc = 0x3B8244u;
            goto label_3b8244;
        }
    }
    ctx->pc = 0x3B81FCu;
label_3b81fc:
    // 0x3b81fc: 0x1000000e  b           . + 4 + (0xE << 2)
label_3b8200:
    if (ctx->pc == 0x3B8200u) {
        ctx->pc = 0x3B8200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B81FCu;
        // 0x3b8200: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B8204u;
        goto label_3b8204;
    }
    ctx->pc = 0x3B81FCu;
    {
        const bool branch_taken_0x3b81fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B8200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B81FCu;
        // 0x3b8200: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b81fc) {
            ctx->pc = 0x3B8238u;
            goto label_3b8238;
        }
    }
    ctx->pc = 0x3B8204u;
label_3b8204:
    // 0x3b8204: 0xc103684  jal         func_40DA10
label_3b8208:
    if (ctx->pc == 0x3B8208u) {
        ctx->pc = 0x3B8208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8204u;
        // 0x3b8208: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B820Cu;
        goto label_3b820c;
    }
    ctx->pc = 0x3B8204u;
    SET_GPR_U32(ctx, 31, 0x3B820Cu);
    ctx->pc = 0x3B8208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B8204u;
    // 0x3b8208: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DA10u, 0x3B8204u, 0x3B820Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B820Cu;
label_3b820c:
    // 0x3b820c: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x3b820cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3b8210:
    // 0x3b8210: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3b8210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3b8214:
    // 0x3b8214: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x3b8214u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
label_3b8218:
    // 0x3b8218: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x3b8218u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_3b821c:
    // 0x3b821c: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x3b821cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_3b8220:
    // 0x3b8220: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x3b8220u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_3b8224:
    // 0x3b8224: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x3b8224u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
label_3b8228:
    // 0x3b8228: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3b8228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3b822c:
    // 0x3b822c: 0x14540005  bne         $v0, $s4, . + 4 + (0x5 << 2)
label_3b8230:
    if (ctx->pc == 0x3B8230u) {
        ctx->pc = 0x3B8230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B822Cu;
        // 0x3b8230: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B8234u;
        goto label_3b8234;
    }
    ctx->pc = 0x3B822Cu;
    {
        const bool branch_taken_0x3b822c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        ctx->pc = 0x3B8230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B822Cu;
        // 0x3b8230: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b822c) {
            ctx->pc = 0x3B8244u;
            goto label_3b8244;
        }
    }
    ctx->pc = 0x3B8234u;
label_3b8234:
    // 0x3b8234: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x3b8234u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3b8238:
    // 0x3b8238: 0xc10376a  jal         func_40DDA8
label_3b823c:
    if (ctx->pc == 0x3B823Cu) {
        ctx->pc = 0x3B8240u;
        goto label_3b8240;
    }
    ctx->pc = 0x3B8238u;
    SET_GPR_U32(ctx, 31, 0x3B8240u);
    ctx->pc = 0x40DDA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DDA8u, 0x3B8238u, 0x3B8240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B8240u;
label_3b8240:
    // 0x3b8240: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x3b8240u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b8244:
    // 0x3b8244: 0x24e2fffd  addiu       $v0, $a3, -0x3
    ctx->pc = 0x3b8244u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967293));
label_3b8248:
    // 0x3b8248: 0x2553021  addu        $a2, $s2, $s5
    ctx->pc = 0x3b8248u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 21)));
label_3b824c:
    // 0x3b824c: 0x22040  sll         $a0, $v0, 1
    ctx->pc = 0x3b824cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_3b8250:
    // 0x3b8250: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x3b8250u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_3b8254:
    // 0x3b8254: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x3b8254u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_3b8258:
    // 0x3b8258: 0x8cc50008  lw          $a1, 0x8($a2)
    ctx->pc = 0x3b8258u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_3b825c:
    // 0x3b825c: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x3b825cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_3b8260:
    // 0x3b8260: 0x2463fffd  addiu       $v1, $v1, -0x3
    ctx->pc = 0x3b8260u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967293));
label_3b8264:
    // 0x3b8264: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x3b8264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3b8268:
    // 0x3b8268: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x3b8268u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
label_3b826c:
    // 0x3b826c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3b826cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_3b8270:
    // 0x3b8270: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x3b8270u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_3b8274:
    // 0x3b8274: 0x8cc80000  lw          $t0, 0x0($a2)
    ctx->pc = 0x3b8274u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_3b8278:
    // 0x3b8278: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x3b8278u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
label_3b827c:
    // 0x3b827c: 0xacc50008  sw          $a1, 0x8($a2)
    ctx->pc = 0x3b827cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 5));
label_3b8280:
    // 0x3b8280: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x3b8280u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
label_3b8284:
    // 0x3b8284: 0x15000003  bnez        $t0, . + 4 + (0x3 << 2)
label_3b8288:
    if (ctx->pc == 0x3B8288u) {
        ctx->pc = 0x3B8288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8284u;
        // 0x3b8288: 0xacc2000c  sw          $v0, 0xC($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B828Cu;
        goto label_3b828c;
    }
    ctx->pc = 0x3B8284u;
    {
        const bool branch_taken_0x3b8284 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B8288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8284u;
        // 0x3b8288: 0xacc2000c  sw          $v0, 0xC($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b8284) {
            ctx->pc = 0x3B8294u;
            goto label_3b8294;
        }
    }
    ctx->pc = 0x3B828Cu;
label_3b828c:
    // 0x3b828c: 0x10000005  b           . + 4 + (0x5 << 2)
label_3b8290:
    if (ctx->pc == 0x3B8290u) {
        ctx->pc = 0x3B8290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B828Cu;
        // 0x3b8290: 0xae100014  sw          $s0, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B8294u;
        goto label_3b8294;
    }
    ctx->pc = 0x3B828Cu;
    {
        const bool branch_taken_0x3b828c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B8290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B828Cu;
        // 0x3b8290: 0xae100014  sw          $s0, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b828c) {
            ctx->pc = 0x3B82A4u;
            goto label_3b82a4;
        }
    }
    ctx->pc = 0x3B8294u;
label_3b8294:
    // 0x3b8294: 0x8d020014  lw          $v0, 0x14($t0)
    ctx->pc = 0x3b8294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 20)));
label_3b8298:
    // 0x3b8298: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x3b8298u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
label_3b829c:
    // 0x3b829c: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x3b829cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_3b82a0:
    // 0x3b82a0: 0xac700014  sw          $s0, 0x14($v1)
    ctx->pc = 0x3b82a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 16));
label_3b82a4:
    // 0x3b82a4: 0xaef00000  sw          $s0, 0x0($s7)
    ctx->pc = 0x3b82a4u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 16));
label_3b82a8:
    // 0x3b82a8: 0x8e310014  lw          $s1, 0x14($s1)
    ctx->pc = 0x3b82a8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_3b82ac:
    // 0x3b82ac: 0x5620ffc6  bnel        $s1, $zero, . + 4 + (-0x3A << 2)
label_3b82b0:
    if (ctx->pc == 0x3B82B0u) {
        ctx->pc = 0x3B82B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B82ACu;
        // 0x3b82b0: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B82B4u;
        goto label_3b82b4;
    }
    ctx->pc = 0x3B82ACu;
    {
        const bool branch_taken_0x3b82ac = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b82ac) {
            ctx->pc = 0x3B82B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B82ACu;
            // 0x3b82b0: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B81C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b81c8;
        }
    }
    ctx->pc = 0x3B82B4u;
label_3b82b4:
    // 0x3b82b4: 0x10000043  b           . + 4 + (0x43 << 2)
label_3b82b8:
    if (ctx->pc == 0x3B82B8u) {
        ctx->pc = 0x3B82B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B82B4u;
        // 0x3b82b8: 0x24020018  addiu       $v0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B82BCu;
        goto label_3b82bc;
    }
    ctx->pc = 0x3B82B4u;
    {
        const bool branch_taken_0x3b82b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B82B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B82B4u;
        // 0x3b82b8: 0x24020018  addiu       $v0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b82b4) {
            ctx->pc = 0x3B83C4u;
            goto label_3b83c4;
        }
    }
    ctx->pc = 0x3B82BCu;
label_3b82bc:
    // 0x3b82bc: 0x12200040  beqz        $s1, . + 4 + (0x40 << 2)
label_3b82c0:
    if (ctx->pc == 0x3B82C0u) {
        ctx->pc = 0x3B82C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B82BCu;
        // 0x3b82c0: 0x26760001  addiu       $s6, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B82C4u;
        goto label_3b82c4;
    }
    ctx->pc = 0x3B82BCu;
    {
        const bool branch_taken_0x3b82bc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B82C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B82BCu;
        // 0x3b82c0: 0x26760001  addiu       $s6, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b82bc) {
            ctx->pc = 0x3B83C0u;
            goto label_3b83c0;
        }
    }
    ctx->pc = 0x3B82C4u;
label_3b82c4:
    // 0x3b82c4: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x3b82c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_3b82c8:
    // 0x3b82c8: 0x2414ffff  addiu       $s4, $zero, -0x1
    ctx->pc = 0x3b82c8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3b82cc:
    // 0x3b82cc: 0x2659018  mult        $s2, $s3, $a1
    ctx->pc = 0x3b82ccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 18, (int32_t)result); }
label_3b82d0:
    // 0x3b82d0: 0x255b821  addu        $s7, $s2, $s5
    ctx->pc = 0x3b82d0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 21)));
label_3b82d4:
    // 0x3b82d4: 0x0  nop
    ctx->pc = 0x3b82d4u;
    // NOP
label_3b82d8:
    // 0x3b82d8: 0xc0ec604  jal         func_3B1810
label_3b82dc:
    if (ctx->pc == 0x3B82DCu) {
        ctx->pc = 0x3B82E0u;
        goto label_3b82e0;
    }
    ctx->pc = 0x3B82D8u;
    SET_GPR_U32(ctx, 31, 0x3B82E0u);
    ctx->pc = 0x3B1810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1810u, 0x3B82D8u, 0x3B82E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B82E0u;
label_3b82e0:
    // 0x3b82e0: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x3b82e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_3b82e4:
    // 0x3b82e4: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
label_3b82e8:
    if (ctx->pc == 0x3B82E8u) {
        ctx->pc = 0x3B82E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B82E4u;
        // 0x3b82e8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B82ECu;
        goto label_3b82ec;
    }
    ctx->pc = 0x3B82E4u;
    {
        const bool branch_taken_0x3b82e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B82E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B82E4u;
        // 0x3b82e8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b82e4) {
            ctx->pc = 0x3B830Cu;
            goto label_3b830c;
        }
    }
    ctx->pc = 0x3B82ECu;
label_3b82ec:
    // 0x3b82ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3b82ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3b82f0:
    // 0x3b82f0: 0xc0ebf52  jal         func_3AFD48
label_3b82f4:
    if (ctx->pc == 0x3B82F4u) {
        ctx->pc = 0x3B82F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B82F0u;
        // 0x3b82f4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B82F8u;
        goto label_3b82f8;
    }
    ctx->pc = 0x3B82F0u;
    SET_GPR_U32(ctx, 31, 0x3B82F8u);
    ctx->pc = 0x3B82F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B82F0u;
    // 0x3b82f4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFD48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFD48u, 0x3B82F0u, 0x3B82F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B82F8u;
label_3b82f8:
    // 0x3b82f8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x3b82f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3b82fc:
    // 0x3b82fc: 0x14540013  bne         $v0, $s4, . + 4 + (0x13 << 2)
label_3b8300:
    if (ctx->pc == 0x3B8300u) {
        ctx->pc = 0x3B8300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B82FCu;
        // 0x3b8300: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B8304u;
        goto label_3b8304;
    }
    ctx->pc = 0x3B82FCu;
    {
        const bool branch_taken_0x3b82fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        ctx->pc = 0x3B8300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B82FCu;
        // 0x3b8300: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b82fc) {
            ctx->pc = 0x3B834Cu;
            goto label_3b834c;
        }
    }
    ctx->pc = 0x3B8304u;
label_3b8304:
    // 0x3b8304: 0x1000000e  b           . + 4 + (0xE << 2)
label_3b8308:
    if (ctx->pc == 0x3B8308u) {
        ctx->pc = 0x3B8308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8304u;
        // 0x3b8308: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B830Cu;
        goto label_3b830c;
    }
    ctx->pc = 0x3B8304u;
    {
        const bool branch_taken_0x3b8304 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B8308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8304u;
        // 0x3b8308: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b8304) {
            ctx->pc = 0x3B8340u;
            goto label_3b8340;
        }
    }
    ctx->pc = 0x3B830Cu;
label_3b830c:
    // 0x3b830c: 0xc103684  jal         func_40DA10
label_3b8310:
    if (ctx->pc == 0x3B8310u) {
        ctx->pc = 0x3B8310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B830Cu;
        // 0x3b8310: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B8314u;
        goto label_3b8314;
    }
    ctx->pc = 0x3B830Cu;
    SET_GPR_U32(ctx, 31, 0x3B8314u);
    ctx->pc = 0x3B8310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B830Cu;
    // 0x3b8310: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DA10u, 0x3B830Cu, 0x3B8314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B8314u;
label_3b8314:
    // 0x3b8314: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x3b8314u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3b8318:
    // 0x3b8318: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3b8318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3b831c:
    // 0x3b831c: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x3b831cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
label_3b8320:
    // 0x3b8320: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x3b8320u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_3b8324:
    // 0x3b8324: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x3b8324u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_3b8328:
    // 0x3b8328: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x3b8328u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_3b832c:
    // 0x3b832c: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x3b832cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
label_3b8330:
    // 0x3b8330: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3b8330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3b8334:
    // 0x3b8334: 0x14540005  bne         $v0, $s4, . + 4 + (0x5 << 2)
label_3b8338:
    if (ctx->pc == 0x3B8338u) {
        ctx->pc = 0x3B8338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8334u;
        // 0x3b8338: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B833Cu;
        goto label_3b833c;
    }
    ctx->pc = 0x3B8334u;
    {
        const bool branch_taken_0x3b8334 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        ctx->pc = 0x3B8338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8334u;
        // 0x3b8338: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b8334) {
            ctx->pc = 0x3B834Cu;
            goto label_3b834c;
        }
    }
    ctx->pc = 0x3B833Cu;
label_3b833c:
    // 0x3b833c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x3b833cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3b8340:
    // 0x3b8340: 0xc10376a  jal         func_40DDA8
label_3b8344:
    if (ctx->pc == 0x3B8344u) {
        ctx->pc = 0x3B8348u;
        goto label_3b8348;
    }
    ctx->pc = 0x3B8340u;
    SET_GPR_U32(ctx, 31, 0x3B8348u);
    ctx->pc = 0x40DDA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DDA8u, 0x3B8340u, 0x3B8348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B8348u;
label_3b8348:
    // 0x3b8348: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x3b8348u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b834c:
    // 0x3b834c: 0x2554021  addu        $t0, $s2, $s5
    ctx->pc = 0x3b834cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 21)));
label_3b8350:
    // 0x3b8350: 0x73840  sll         $a3, $a3, 1
    ctx->pc = 0x3b8350u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
label_3b8354:
    // 0x3b8354: 0x24e2fffe  addiu       $v0, $a3, -0x2
    ctx->pc = 0x3b8354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967294));
label_3b8358:
    // 0x3b8358: 0x8d030004  lw          $v1, 0x4($t0)
    ctx->pc = 0x3b8358u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_3b835c:
    // 0x3b835c: 0x8d050008  lw          $a1, 0x8($t0)
    ctx->pc = 0x3b835cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
label_3b8360:
    // 0x3b8360: 0x22040  sll         $a0, $v0, 1
    ctx->pc = 0x3b8360u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_3b8364:
    // 0x3b8364: 0x8d06000c  lw          $a2, 0xC($t0)
    ctx->pc = 0x3b8364u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
label_3b8368:
    // 0x3b8368: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x3b8368u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_3b836c:
    // 0x3b836c: 0x2463fffe  addiu       $v1, $v1, -0x2
    ctx->pc = 0x3b836cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
label_3b8370:
    // 0x3b8370: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x3b8370u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3b8374:
    // 0x3b8374: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x3b8374u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
label_3b8378:
    // 0x3b8378: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x3b8378u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_3b837c:
    // 0x3b837c: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x3b837cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_3b8380:
    // 0x3b8380: 0x8d090000  lw          $t1, 0x0($t0)
    ctx->pc = 0x3b8380u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_3b8384:
    // 0x3b8384: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x3b8384u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
label_3b8388:
    // 0x3b8388: 0xad050008  sw          $a1, 0x8($t0)
    ctx->pc = 0x3b8388u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 5));
label_3b838c:
    // 0x3b838c: 0xad030004  sw          $v1, 0x4($t0)
    ctx->pc = 0x3b838cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 3));
label_3b8390:
    // 0x3b8390: 0x15200003  bnez        $t1, . + 4 + (0x3 << 2)
label_3b8394:
    if (ctx->pc == 0x3B8394u) {
        ctx->pc = 0x3B8394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8390u;
        // 0x3b8394: 0xad06000c  sw          $a2, 0xC($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B8398u;
        goto label_3b8398;
    }
    ctx->pc = 0x3B8390u;
    {
        const bool branch_taken_0x3b8390 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B8394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8390u;
        // 0x3b8394: 0xad06000c  sw          $a2, 0xC($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b8390) {
            ctx->pc = 0x3B83A0u;
            goto label_3b83a0;
        }
    }
    ctx->pc = 0x3B8398u;
label_3b8398:
    // 0x3b8398: 0x10000005  b           . + 4 + (0x5 << 2)
label_3b839c:
    if (ctx->pc == 0x3B839Cu) {
        ctx->pc = 0x3B839Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8398u;
        // 0x3b839c: 0xae100014  sw          $s0, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B83A0u;
        goto label_3b83a0;
    }
    ctx->pc = 0x3B8398u;
    {
        const bool branch_taken_0x3b8398 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B839Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8398u;
        // 0x3b839c: 0xae100014  sw          $s0, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b8398) {
            ctx->pc = 0x3B83B0u;
            goto label_3b83b0;
        }
    }
    ctx->pc = 0x3B83A0u;
label_3b83a0:
    // 0x3b83a0: 0x8d220014  lw          $v0, 0x14($t1)
    ctx->pc = 0x3b83a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 20)));
label_3b83a4:
    // 0x3b83a4: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x3b83a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
label_3b83a8:
    // 0x3b83a8: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x3b83a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_3b83ac:
    // 0x3b83ac: 0xac700014  sw          $s0, 0x14($v1)
    ctx->pc = 0x3b83acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 16));
label_3b83b0:
    // 0x3b83b0: 0xaef00000  sw          $s0, 0x0($s7)
    ctx->pc = 0x3b83b0u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 16));
label_3b83b4:
    // 0x3b83b4: 0x8e310014  lw          $s1, 0x14($s1)
    ctx->pc = 0x3b83b4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_3b83b8:
    // 0x3b83b8: 0x1620ffc7  bnez        $s1, . + 4 + (-0x39 << 2)
label_3b83bc:
    if (ctx->pc == 0x3B83BCu) {
        ctx->pc = 0x3B83C0u;
        goto label_3b83c0;
    }
    ctx->pc = 0x3B83B8u;
    {
        const bool branch_taken_0x3b83b8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b83b8) {
            ctx->pc = 0x3B82D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b82d8;
        }
    }
    ctx->pc = 0x3B83C0u;
label_3b83c0:
    // 0x3b83c0: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x3b83c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_3b83c4:
    // 0x3b83c4: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x3b83c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_3b83c8:
    // 0x3b83c8: 0x2621018  mult        $v0, $s3, $v0
    ctx->pc = 0x3b83c8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_3b83cc:
    // 0x3b83cc: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x3b83ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_3b83d0:
    // 0x3b83d0: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x3b83d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_3b83d4:
    // 0x3b83d4: 0x3c0902d  daddu       $s2, $fp, $zero
    ctx->pc = 0x3b83d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_3b83d8:
    // 0x3b83d8: 0x2c0982d  daddu       $s3, $s6, $zero
    ctx->pc = 0x3b83d8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3b83dc:
    // 0x3b83dc: 0x553021  addu        $a2, $v0, $s5
    ctx->pc = 0x3b83dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_3b83e0:
    // 0x3b83e0: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x3b83e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_3b83e4:
    // 0x3b83e4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3b83e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3b83e8:
    // 0x3b83e8: 0xafa3000c  sw          $v1, 0xC($sp)
    ctx->pc = 0x3b83e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 3));
label_3b83ec:
    // 0x3b83ec: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3b83ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_3b83f0:
    // 0x3b83f0: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x3b83f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_3b83f4:
    // 0x3b83f4: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x3b83f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_3b83f8:
    // 0x3b83f8: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x3b83f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
label_3b83fc:
    // 0x3b83fc: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x3b83fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_3b8400:
    // 0x3b8400: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x3b8400u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_3b8404:
    // 0x3b8404: 0x1643ff58  bne         $s2, $v1, . + 4 + (-0xA8 << 2)
label_3b8408:
    if (ctx->pc == 0x3B8408u) {
        ctx->pc = 0x3B8408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8404u;
        // 0x3b8408: 0xafa50010  sw          $a1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B840Cu;
        goto label_3b840c;
    }
    ctx->pc = 0x3B8404u;
    {
        const bool branch_taken_0x3b8404 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 3));
        ctx->pc = 0x3B8408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8404u;
        // 0x3b8408: 0xafa50010  sw          $a1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b8404) {
            ctx->pc = 0x3B8168u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b8168;
        }
    }
    ctx->pc = 0x3B840Cu;
label_3b840c:
    // 0x3b840c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x3b840cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_3b8410:
    // 0x3b8410: 0x104000af  beqz        $v0, . + 4 + (0xAF << 2)
label_3b8414:
    if (ctx->pc == 0x3B8414u) {
        ctx->pc = 0x3B8414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8410u;
        // 0x3b8414: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B8418u;
        goto label_3b8418;
    }
    ctx->pc = 0x3B8410u;
    {
        const bool branch_taken_0x3b8410 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B8414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8410u;
        // 0x3b8414: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b8410) {
            ctx->pc = 0x3B86D0u;
            goto label_3b86d0;
        }
    }
    ctx->pc = 0x3B8418u;
label_3b8418:
    // 0x3b8418: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x3b8418u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_3b841c:
    // 0x3b841c: 0x2406006f  addiu       $a2, $zero, 0x6F
    ctx->pc = 0x3b841cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 111));
label_3b8420:
    // 0x3b8420: 0x8fa4000c  lw          $a0, 0xC($sp)
    ctx->pc = 0x3b8420u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_3b8424:
    // 0x3b8424: 0xc0e2dbc  jal         func_38B6F0
label_3b8428:
    if (ctx->pc == 0x3B8428u) {
        ctx->pc = 0x3B8428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8424u;
        // 0x3b8428: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B842Cu;
        goto label_3b842c;
    }
    ctx->pc = 0x3B8424u;
    SET_GPR_U32(ctx, 31, 0x3B842Cu);
    ctx->pc = 0x3B8428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B8424u;
    // 0x3b8428: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38B6F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38B6F0u, 0x3B8424u, 0x3B842Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B842Cu;
label_3b842c:
    // 0x3b842c: 0x8fa50044  lw          $a1, 0x44($sp)
    ctx->pc = 0x3b842cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_3b8430:
    // 0x3b8430: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x3b8430u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b8434:
    // 0x3b8434: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x3b8434u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
label_3b8438:
    // 0x3b8438: 0x10a000a5  beqz        $a1, . + 4 + (0xA5 << 2)
label_3b843c:
    if (ctx->pc == 0x3B843Cu) {
        ctx->pc = 0x3B843Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8438u;
        // 0x3b843c: 0xafa0003c  sw          $zero, 0x3C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B8440u;
        goto label_3b8440;
    }
    ctx->pc = 0x3B8438u;
    {
        const bool branch_taken_0x3b8438 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B843Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8438u;
        // 0x3b843c: 0xafa0003c  sw          $zero, 0x3C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b8438) {
            ctx->pc = 0x3B86D0u;
            goto label_3b86d0;
        }
    }
    ctx->pc = 0x3B8440u;
label_3b8440:
    // 0x3b8440: 0x2a0802d  daddu       $s0, $s5, $zero
    ctx->pc = 0x3b8440u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3b8444:
    // 0x3b8444: 0x18a00032  blez        $a1, . + 4 + (0x32 << 2)
label_3b8448:
    if (ctx->pc == 0x3B8448u) {
        ctx->pc = 0x3B8448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8444u;
        // 0x3b8448: 0x30a30003  andi        $v1, $a1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B844Cu;
        goto label_3b844c;
    }
    ctx->pc = 0x3B8444u;
    {
        const bool branch_taken_0x3b8444 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x3B8448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8444u;
        // 0x3b8448: 0x30a30003  andi        $v1, $a1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b8444) {
            ctx->pc = 0x3B8510u;
            goto label_3b8510;
        }
    }
    ctx->pc = 0x3B844Cu;
label_3b844c:
    // 0x3b844c: 0x10600048  beqz        $v1, . + 4 + (0x48 << 2)
label_3b8450:
    if (ctx->pc == 0x3B8450u) {
        ctx->pc = 0x3B8450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B844Cu;
        // 0x3b8450: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B8454u;
        goto label_3b8454;
    }
    ctx->pc = 0x3B844Cu;
    {
        const bool branch_taken_0x3b844c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B8450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B844Cu;
        // 0x3b8450: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b844c) {
            ctx->pc = 0x3B8570u;
            goto label_3b8570;
        }
    }
    ctx->pc = 0x3B8454u;
label_3b8454:
    // 0x3b8454: 0x5440002f  bnel        $v0, $zero, . + 4 + (0x2F << 2)
label_3b8458:
    if (ctx->pc == 0x3B8458u) {
        ctx->pc = 0x3B8458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8454u;
        // 0x3b8458: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B845Cu;
        goto label_3b845c;
    }
    ctx->pc = 0x3B8454u;
    {
        const bool branch_taken_0x3b8454 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b8454) {
            ctx->pc = 0x3B8458u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B8454u;
            // 0x3b8458: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B8514u;
            goto label_3b8514;
        }
    }
    ctx->pc = 0x3B845Cu;
label_3b845c:
    // 0x3b845c: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x3b845cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_3b8460:
    // 0x3b8460: 0x54400017  bnel        $v0, $zero, . + 4 + (0x17 << 2)
label_3b8464:
    if (ctx->pc == 0x3B8464u) {
        ctx->pc = 0x3B8464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8460u;
        // 0x3b8464: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B8468u;
        goto label_3b8468;
    }
    ctx->pc = 0x3B8460u;
    {
        const bool branch_taken_0x3b8460 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b8460) {
            ctx->pc = 0x3B8464u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B8460u;
            // 0x3b8464: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B84C0u;
            goto label_3b84c0;
        }
    }
    ctx->pc = 0x3B8468u;
label_3b8468:
    // 0x3b8468: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x3b8468u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_3b846c:
    // 0x3b846c: 0x50800012  beql        $a0, $zero, . + 4 + (0x12 << 2)
label_3b8470:
    if (ctx->pc == 0x3B8470u) {
        ctx->pc = 0x3B8470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B846Cu;
        // 0x3b8470: 0x26100018  addiu       $s0, $s0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B8474u;
        goto label_3b8474;
    }
    ctx->pc = 0x3B846Cu;
    {
        const bool branch_taken_0x3b846c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b846c) {
            ctx->pc = 0x3B8470u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B846Cu;
            // 0x3b8470: 0x26100018  addiu       $s0, $s0, 0x18 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B84B8u;
            goto label_3b84b8;
        }
    }
    ctx->pc = 0x3B8474u;
label_3b8474:
    // 0x3b8474: 0x8ea20010  lw          $v0, 0x10($s5)
    ctx->pc = 0x3b8474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
label_3b8478:
    // 0x3b8478: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3b8478u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_3b847c:
    // 0x3b847c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_3b8480:
    if (ctx->pc == 0x3B8480u) {
        ctx->pc = 0x3B8480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B847Cu;
        // 0x3b8480: 0x8c840014  lw          $a0, 0x14($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B8484u;
        goto label_3b8484;
    }
    ctx->pc = 0x3B847Cu;
    {
        const bool branch_taken_0x3b847c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B8480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B847Cu;
        // 0x3b8480: 0x8c840014  lw          $a0, 0x14($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b847c) {
            ctx->pc = 0x3B84A0u;
            goto label_3b84a0;
        }
    }
    ctx->pc = 0x3B8484u;
label_3b8484:
    // 0x3b8484: 0x8ea50014  lw          $a1, 0x14($s5)
    ctx->pc = 0x3b8484u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
label_3b8488:
    // 0x3b8488: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x3b8488u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3b848c:
    // 0x3b848c: 0x27a70038  addiu       $a3, $sp, 0x38
    ctx->pc = 0x3b848cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
label_3b8490:
    // 0x3b8490: 0xc0ea2a4  jal         func_3A8A90
label_3b8494:
    if (ctx->pc == 0x3B8494u) {
        ctx->pc = 0x3B8494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8490u;
        // 0x3b8494: 0x27a8003c  addiu       $t0, $sp, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B8498u;
        goto label_3b8498;
    }
    ctx->pc = 0x3B8490u;
    SET_GPR_U32(ctx, 31, 0x3B8498u);
    ctx->pc = 0x3B8494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B8490u;
    // 0x3b8494: 0x27a8003c  addiu       $t0, $sp, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8A90u, 0x3B8490u, 0x3B8498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B8498u;
label_3b8498:
    // 0x3b8498: 0x10000007  b           . + 4 + (0x7 << 2)
label_3b849c:
    if (ctx->pc == 0x3B849Cu) {
        ctx->pc = 0x3B849Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8498u;
        // 0x3b849c: 0x26100018  addiu       $s0, $s0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B84A0u;
        goto label_3b84a0;
    }
    ctx->pc = 0x3B8498u;
    {
        const bool branch_taken_0x3b8498 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B849Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8498u;
        // 0x3b849c: 0x26100018  addiu       $s0, $s0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b8498) {
            ctx->pc = 0x3B84B8u;
            goto label_3b84b8;
        }
    }
    ctx->pc = 0x3B84A0u;
label_3b84a0:
    // 0x3b84a0: 0x8ea50014  lw          $a1, 0x14($s5)
    ctx->pc = 0x3b84a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
label_3b84a4:
    // 0x3b84a4: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x3b84a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3b84a8:
    // 0x3b84a8: 0x27a70038  addiu       $a3, $sp, 0x38
    ctx->pc = 0x3b84a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
label_3b84ac:
    // 0x3b84ac: 0xc0ecb04  jal         func_3B2C10
label_3b84b0:
    if (ctx->pc == 0x3B84B0u) {
        ctx->pc = 0x3B84B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B84ACu;
        // 0x3b84b0: 0x27a8003c  addiu       $t0, $sp, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B84B4u;
        goto label_3b84b4;
    }
    ctx->pc = 0x3B84ACu;
    SET_GPR_U32(ctx, 31, 0x3B84B4u);
    ctx->pc = 0x3B84B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B84ACu;
    // 0x3b84b0: 0x27a8003c  addiu       $t0, $sp, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B2C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B2C10u, 0x3B84ACu, 0x3B84B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B84B4u;
label_3b84b4:
    // 0x3b84b4: 0x26100018  addiu       $s0, $s0, 0x18
    ctx->pc = 0x3b84b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
label_3b84b8:
    // 0x3b84b8: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x3b84b8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_3b84bc:
    // 0x3b84bc: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x3b84bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3b84c0:
    // 0x3b84c0: 0x50800012  beql        $a0, $zero, . + 4 + (0x12 << 2)
label_3b84c4:
    if (ctx->pc == 0x3B84C4u) {
        ctx->pc = 0x3B84C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B84C0u;
        // 0x3b84c4: 0x26100018  addiu       $s0, $s0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B84C8u;
        goto label_3b84c8;
    }
    ctx->pc = 0x3B84C0u;
    {
        const bool branch_taken_0x3b84c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b84c0) {
            ctx->pc = 0x3B84C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B84C0u;
            // 0x3b84c4: 0x26100018  addiu       $s0, $s0, 0x18 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B850Cu;
            goto label_3b850c;
        }
    }
    ctx->pc = 0x3B84C8u;
label_3b84c8:
    // 0x3b84c8: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x3b84c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_3b84cc:
    // 0x3b84cc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3b84ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_3b84d0:
    // 0x3b84d0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_3b84d4:
    if (ctx->pc == 0x3B84D4u) {
        ctx->pc = 0x3B84D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B84D0u;
        // 0x3b84d4: 0x8c840014  lw          $a0, 0x14($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B84D8u;
        goto label_3b84d8;
    }
    ctx->pc = 0x3B84D0u;
    {
        const bool branch_taken_0x3b84d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B84D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B84D0u;
        // 0x3b84d4: 0x8c840014  lw          $a0, 0x14($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b84d0) {
            ctx->pc = 0x3B84F4u;
            goto label_3b84f4;
        }
    }
    ctx->pc = 0x3B84D8u;
label_3b84d8:
    // 0x3b84d8: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x3b84d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_3b84dc:
    // 0x3b84dc: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x3b84dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3b84e0:
    // 0x3b84e0: 0x27a70038  addiu       $a3, $sp, 0x38
    ctx->pc = 0x3b84e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
label_3b84e4:
    // 0x3b84e4: 0xc0ea2a4  jal         func_3A8A90
label_3b84e8:
    if (ctx->pc == 0x3B84E8u) {
        ctx->pc = 0x3B84E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B84E4u;
        // 0x3b84e8: 0x27a8003c  addiu       $t0, $sp, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B84ECu;
        goto label_3b84ec;
    }
    ctx->pc = 0x3B84E4u;
    SET_GPR_U32(ctx, 31, 0x3B84ECu);
    ctx->pc = 0x3B84E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B84E4u;
    // 0x3b84e8: 0x27a8003c  addiu       $t0, $sp, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8A90u, 0x3B84E4u, 0x3B84ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B84ECu;
label_3b84ec:
    // 0x3b84ec: 0x10000007  b           . + 4 + (0x7 << 2)
label_3b84f0:
    if (ctx->pc == 0x3B84F0u) {
        ctx->pc = 0x3B84F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B84ECu;
        // 0x3b84f0: 0x26100018  addiu       $s0, $s0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B84F4u;
        goto label_3b84f4;
    }
    ctx->pc = 0x3B84ECu;
    {
        const bool branch_taken_0x3b84ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B84F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B84ECu;
        // 0x3b84f0: 0x26100018  addiu       $s0, $s0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b84ec) {
            ctx->pc = 0x3B850Cu;
            goto label_3b850c;
        }
    }
    ctx->pc = 0x3B84F4u;
label_3b84f4:
    // 0x3b84f4: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x3b84f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_3b84f8:
    // 0x3b84f8: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x3b84f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3b84fc:
    // 0x3b84fc: 0x27a70038  addiu       $a3, $sp, 0x38
    ctx->pc = 0x3b84fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
label_3b8500:
    // 0x3b8500: 0xc0ecb04  jal         func_3B2C10
label_3b8504:
    if (ctx->pc == 0x3B8504u) {
        ctx->pc = 0x3B8504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8500u;
        // 0x3b8504: 0x27a8003c  addiu       $t0, $sp, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B8508u;
        goto label_3b8508;
    }
    ctx->pc = 0x3B8500u;
    SET_GPR_U32(ctx, 31, 0x3B8508u);
    ctx->pc = 0x3B8504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B8500u;
    // 0x3b8504: 0x27a8003c  addiu       $t0, $sp, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B2C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B2C10u, 0x3B8500u, 0x3B8508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B8508u;
label_3b8508:
    // 0x3b8508: 0x26100018  addiu       $s0, $s0, 0x18
    ctx->pc = 0x3b8508u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
label_3b850c:
    // 0x3b850c: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x3b850cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_3b8510:
    // 0x3b8510: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x3b8510u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3b8514:
    // 0x3b8514: 0x10800012  beqz        $a0, . + 4 + (0x12 << 2)
label_3b8518:
    if (ctx->pc == 0x3B8518u) {
        ctx->pc = 0x3B8518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8514u;
        // 0x3b8518: 0x8fa60044  lw          $a2, 0x44($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B851Cu;
        goto label_3b851c;
    }
    ctx->pc = 0x3B8514u;
    {
        const bool branch_taken_0x3b8514 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B8518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8514u;
        // 0x3b8518: 0x8fa60044  lw          $a2, 0x44($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b8514) {
            ctx->pc = 0x3B8560u;
            goto label_3b8560;
        }
    }
    ctx->pc = 0x3B851Cu;
label_3b851c:
    // 0x3b851c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x3b851cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_3b8520:
    // 0x3b8520: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3b8520u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_3b8524:
    // 0x3b8524: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_3b8528:
    if (ctx->pc == 0x3B8528u) {
        ctx->pc = 0x3B8528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8524u;
        // 0x3b8528: 0x8c840014  lw          $a0, 0x14($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B852Cu;
        goto label_3b852c;
    }
    ctx->pc = 0x3B8524u;
    {
        const bool branch_taken_0x3b8524 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B8528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8524u;
        // 0x3b8528: 0x8c840014  lw          $a0, 0x14($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b8524) {
            ctx->pc = 0x3B8548u;
            goto label_3b8548;
        }
    }
    ctx->pc = 0x3B852Cu;
label_3b852c:
    // 0x3b852c: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x3b852cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_3b8530:
    // 0x3b8530: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x3b8530u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3b8534:
    // 0x3b8534: 0x27a70038  addiu       $a3, $sp, 0x38
    ctx->pc = 0x3b8534u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
label_3b8538:
    // 0x3b8538: 0xc0ea2a4  jal         func_3A8A90
label_3b853c:
    if (ctx->pc == 0x3B853Cu) {
        ctx->pc = 0x3B853Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8538u;
        // 0x3b853c: 0x27a8003c  addiu       $t0, $sp, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B8540u;
        goto label_3b8540;
    }
    ctx->pc = 0x3B8538u;
    SET_GPR_U32(ctx, 31, 0x3B8540u);
    ctx->pc = 0x3B853Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B8538u;
    // 0x3b853c: 0x27a8003c  addiu       $t0, $sp, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8A90u, 0x3B8538u, 0x3B8540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B8540u;
label_3b8540:
    // 0x3b8540: 0x10000007  b           . + 4 + (0x7 << 2)
label_3b8544:
    if (ctx->pc == 0x3B8544u) {
        ctx->pc = 0x3B8544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8540u;
        // 0x3b8544: 0x8fa60044  lw          $a2, 0x44($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B8548u;
        goto label_3b8548;
    }
    ctx->pc = 0x3B8540u;
    {
        const bool branch_taken_0x3b8540 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B8544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8540u;
        // 0x3b8544: 0x8fa60044  lw          $a2, 0x44($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b8540) {
            ctx->pc = 0x3B8560u;
            goto label_3b8560;
        }
    }
    ctx->pc = 0x3B8548u;
label_3b8548:
    // 0x3b8548: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x3b8548u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_3b854c:
    // 0x3b854c: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x3b854cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3b8550:
    // 0x3b8550: 0x27a70038  addiu       $a3, $sp, 0x38
    ctx->pc = 0x3b8550u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
label_3b8554:
    // 0x3b8554: 0xc0ecb04  jal         func_3B2C10
label_3b8558:
    if (ctx->pc == 0x3B8558u) {
        ctx->pc = 0x3B8558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8554u;
        // 0x3b8558: 0x27a8003c  addiu       $t0, $sp, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B855Cu;
        goto label_3b855c;
    }
    ctx->pc = 0x3B8554u;
    SET_GPR_U32(ctx, 31, 0x3B855Cu);
    ctx->pc = 0x3B8558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B8554u;
    // 0x3b8558: 0x27a8003c  addiu       $t0, $sp, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B2C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B2C10u, 0x3B8554u, 0x3B855Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B855Cu;
label_3b855c:
    // 0x3b855c: 0x8fa60044  lw          $a2, 0x44($sp)
    ctx->pc = 0x3b855cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_3b8560:
    // 0x3b8560: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x3b8560u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_3b8564:
    // 0x3b8564: 0x2c6102b  sltu        $v0, $s6, $a2
    ctx->pc = 0x3b8564u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_3b8568:
    // 0x3b8568: 0x10400059  beqz        $v0, . + 4 + (0x59 << 2)
label_3b856c:
    if (ctx->pc == 0x3B856Cu) {
        ctx->pc = 0x3B856Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8568u;
        // 0x3b856c: 0x26100018  addiu       $s0, $s0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B8570u;
        goto label_3b8570;
    }
    ctx->pc = 0x3B8568u;
    {
        const bool branch_taken_0x3b8568 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B856Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8568u;
        // 0x3b856c: 0x26100018  addiu       $s0, $s0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b8568) {
            ctx->pc = 0x3B86D0u;
            goto label_3b86d0;
        }
    }
    ctx->pc = 0x3B8570u;
label_3b8570:
    // 0x3b8570: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x3b8570u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3b8574:
    // 0x3b8574: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x3b8574u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3b8578:
    // 0x3b8578: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x3b8578u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3b857c:
    // 0x3b857c: 0x0  nop
    ctx->pc = 0x3b857cu;
    // NOP
label_3b8580:
    // 0x3b8580: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x3b8580u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3b8584:
    // 0x3b8584: 0x50800012  beql        $a0, $zero, . + 4 + (0x12 << 2)
label_3b8588:
    if (ctx->pc == 0x3B8588u) {
        ctx->pc = 0x3B8588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8584u;
        // 0x3b8588: 0x8e240018  lw          $a0, 0x18($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B858Cu;
        goto label_3b858c;
    }
    ctx->pc = 0x3B8584u;
    {
        const bool branch_taken_0x3b8584 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b8584) {
            ctx->pc = 0x3B8588u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B8584u;
            // 0x3b8588: 0x8e240018  lw          $a0, 0x18($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B85D0u;
            goto label_3b85d0;
        }
    }
    ctx->pc = 0x3B858Cu;
label_3b858c:
    // 0x3b858c: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x3b858cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_3b8590:
    // 0x3b8590: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3b8590u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_3b8594:
    // 0x3b8594: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_3b8598:
    if (ctx->pc == 0x3B8598u) {
        ctx->pc = 0x3B8598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8594u;
        // 0x3b8598: 0x8c840014  lw          $a0, 0x14($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B859Cu;
        goto label_3b859c;
    }
    ctx->pc = 0x3B8594u;
    {
        const bool branch_taken_0x3b8594 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B8598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8594u;
        // 0x3b8598: 0x8c840014  lw          $a0, 0x14($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b8594) {
            ctx->pc = 0x3B85B8u;
            goto label_3b85b8;
        }
    }
    ctx->pc = 0x3B859Cu;
label_3b859c:
    // 0x3b859c: 0x8e650014  lw          $a1, 0x14($s3)
    ctx->pc = 0x3b859cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_3b85a0:
    // 0x3b85a0: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x3b85a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3b85a4:
    // 0x3b85a4: 0x27a70038  addiu       $a3, $sp, 0x38
    ctx->pc = 0x3b85a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
label_3b85a8:
    // 0x3b85a8: 0xc0ea2a4  jal         func_3A8A90
label_3b85ac:
    if (ctx->pc == 0x3B85ACu) {
        ctx->pc = 0x3B85ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B85A8u;
        // 0x3b85ac: 0x27a8003c  addiu       $t0, $sp, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B85B0u;
        goto label_3b85b0;
    }
    ctx->pc = 0x3B85A8u;
    SET_GPR_U32(ctx, 31, 0x3B85B0u);
    ctx->pc = 0x3B85ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B85A8u;
    // 0x3b85ac: 0x27a8003c  addiu       $t0, $sp, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8A90u, 0x3B85A8u, 0x3B85B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B85B0u;
label_3b85b0:
    // 0x3b85b0: 0x10000007  b           . + 4 + (0x7 << 2)
label_3b85b4:
    if (ctx->pc == 0x3B85B4u) {
        ctx->pc = 0x3B85B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B85B0u;
        // 0x3b85b4: 0x8e240018  lw          $a0, 0x18($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B85B8u;
        goto label_3b85b8;
    }
    ctx->pc = 0x3B85B0u;
    {
        const bool branch_taken_0x3b85b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B85B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B85B0u;
        // 0x3b85b4: 0x8e240018  lw          $a0, 0x18($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b85b0) {
            ctx->pc = 0x3B85D0u;
            goto label_3b85d0;
        }
    }
    ctx->pc = 0x3B85B8u;
label_3b85b8:
    // 0x3b85b8: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x3b85b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_3b85bc:
    // 0x3b85bc: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x3b85bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3b85c0:
    // 0x3b85c0: 0x27a70038  addiu       $a3, $sp, 0x38
    ctx->pc = 0x3b85c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
label_3b85c4:
    // 0x3b85c4: 0xc0ecb04  jal         func_3B2C10
label_3b85c8:
    if (ctx->pc == 0x3B85C8u) {
        ctx->pc = 0x3B85C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B85C4u;
        // 0x3b85c8: 0x27a8003c  addiu       $t0, $sp, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B85CCu;
        goto label_3b85cc;
    }
    ctx->pc = 0x3B85C4u;
    SET_GPR_U32(ctx, 31, 0x3B85CCu);
    ctx->pc = 0x3B85C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B85C4u;
    // 0x3b85c8: 0x27a8003c  addiu       $t0, $sp, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B2C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B2C10u, 0x3B85C4u, 0x3B85CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B85CCu;
label_3b85cc:
    // 0x3b85cc: 0x8e240018  lw          $a0, 0x18($s1)
    ctx->pc = 0x3b85ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_3b85d0:
    // 0x3b85d0: 0x50800012  beql        $a0, $zero, . + 4 + (0x12 << 2)
label_3b85d4:
    if (ctx->pc == 0x3B85D4u) {
        ctx->pc = 0x3B85D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B85D0u;
        // 0x3b85d4: 0x8e240030  lw          $a0, 0x30($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B85D8u;
        goto label_3b85d8;
    }
    ctx->pc = 0x3B85D0u;
    {
        const bool branch_taken_0x3b85d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b85d0) {
            ctx->pc = 0x3B85D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B85D0u;
            // 0x3b85d4: 0x8e240030  lw          $a0, 0x30($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B861Cu;
            goto label_3b861c;
        }
    }
    ctx->pc = 0x3B85D8u;
label_3b85d8:
    // 0x3b85d8: 0x8e420028  lw          $v0, 0x28($s2)
    ctx->pc = 0x3b85d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
label_3b85dc:
    // 0x3b85dc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3b85dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_3b85e0:
    // 0x3b85e0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_3b85e4:
    if (ctx->pc == 0x3B85E4u) {
        ctx->pc = 0x3B85E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B85E0u;
        // 0x3b85e4: 0x8c840014  lw          $a0, 0x14($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B85E8u;
        goto label_3b85e8;
    }
    ctx->pc = 0x3B85E0u;
    {
        const bool branch_taken_0x3b85e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B85E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B85E0u;
        // 0x3b85e4: 0x8c840014  lw          $a0, 0x14($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b85e0) {
            ctx->pc = 0x3B8604u;
            goto label_3b8604;
        }
    }
    ctx->pc = 0x3B85E8u;
label_3b85e8:
    // 0x3b85e8: 0x8e65002c  lw          $a1, 0x2C($s3)
    ctx->pc = 0x3b85e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 44)));
label_3b85ec:
    // 0x3b85ec: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x3b85ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3b85f0:
    // 0x3b85f0: 0x27a70038  addiu       $a3, $sp, 0x38
    ctx->pc = 0x3b85f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
label_3b85f4:
    // 0x3b85f4: 0xc0ea2a4  jal         func_3A8A90
label_3b85f8:
    if (ctx->pc == 0x3B85F8u) {
        ctx->pc = 0x3B85F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B85F4u;
        // 0x3b85f8: 0x27a8003c  addiu       $t0, $sp, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B85FCu;
        goto label_3b85fc;
    }
    ctx->pc = 0x3B85F4u;
    SET_GPR_U32(ctx, 31, 0x3B85FCu);
    ctx->pc = 0x3B85F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B85F4u;
    // 0x3b85f8: 0x27a8003c  addiu       $t0, $sp, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8A90u, 0x3B85F4u, 0x3B85FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B85FCu;
label_3b85fc:
    // 0x3b85fc: 0x10000007  b           . + 4 + (0x7 << 2)
label_3b8600:
    if (ctx->pc == 0x3B8600u) {
        ctx->pc = 0x3B8600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B85FCu;
        // 0x3b8600: 0x8e240030  lw          $a0, 0x30($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B8604u;
        goto label_3b8604;
    }
    ctx->pc = 0x3B85FCu;
    {
        const bool branch_taken_0x3b85fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B8600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B85FCu;
        // 0x3b8600: 0x8e240030  lw          $a0, 0x30($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b85fc) {
            ctx->pc = 0x3B861Cu;
            goto label_3b861c;
        }
    }
    ctx->pc = 0x3B8604u;
label_3b8604:
    // 0x3b8604: 0x8e05002c  lw          $a1, 0x2C($s0)
    ctx->pc = 0x3b8604u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_3b8608:
    // 0x3b8608: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x3b8608u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3b860c:
    // 0x3b860c: 0x27a70038  addiu       $a3, $sp, 0x38
    ctx->pc = 0x3b860cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
label_3b8610:
    // 0x3b8610: 0xc0ecb04  jal         func_3B2C10
label_3b8614:
    if (ctx->pc == 0x3B8614u) {
        ctx->pc = 0x3B8614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8610u;
        // 0x3b8614: 0x27a8003c  addiu       $t0, $sp, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B8618u;
        goto label_3b8618;
    }
    ctx->pc = 0x3B8610u;
    SET_GPR_U32(ctx, 31, 0x3B8618u);
    ctx->pc = 0x3B8614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B8610u;
    // 0x3b8614: 0x27a8003c  addiu       $t0, $sp, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B2C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B2C10u, 0x3B8610u, 0x3B8618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B8618u;
label_3b8618:
    // 0x3b8618: 0x8e240030  lw          $a0, 0x30($s1)
    ctx->pc = 0x3b8618u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_3b861c:
    // 0x3b861c: 0x50800012  beql        $a0, $zero, . + 4 + (0x12 << 2)
label_3b8620:
    if (ctx->pc == 0x3B8620u) {
        ctx->pc = 0x3B8620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B861Cu;
        // 0x3b8620: 0x8e240048  lw          $a0, 0x48($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B8624u;
        goto label_3b8624;
    }
    ctx->pc = 0x3B861Cu;
    {
        const bool branch_taken_0x3b861c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b861c) {
            ctx->pc = 0x3B8620u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B861Cu;
            // 0x3b8620: 0x8e240048  lw          $a0, 0x48($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B8668u;
            goto label_3b8668;
        }
    }
    ctx->pc = 0x3B8624u;
label_3b8624:
    // 0x3b8624: 0x8e420040  lw          $v0, 0x40($s2)
    ctx->pc = 0x3b8624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
label_3b8628:
    // 0x3b8628: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3b8628u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_3b862c:
    // 0x3b862c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_3b8630:
    if (ctx->pc == 0x3B8630u) {
        ctx->pc = 0x3B8630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B862Cu;
        // 0x3b8630: 0x8c840014  lw          $a0, 0x14($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B8634u;
        goto label_3b8634;
    }
    ctx->pc = 0x3B862Cu;
    {
        const bool branch_taken_0x3b862c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B8630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B862Cu;
        // 0x3b8630: 0x8c840014  lw          $a0, 0x14($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b862c) {
            ctx->pc = 0x3B8650u;
            goto label_3b8650;
        }
    }
    ctx->pc = 0x3B8634u;
label_3b8634:
    // 0x3b8634: 0x8e650044  lw          $a1, 0x44($s3)
    ctx->pc = 0x3b8634u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 68)));
label_3b8638:
    // 0x3b8638: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x3b8638u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3b863c:
    // 0x3b863c: 0x27a70038  addiu       $a3, $sp, 0x38
    ctx->pc = 0x3b863cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
label_3b8640:
    // 0x3b8640: 0xc0ea2a4  jal         func_3A8A90
label_3b8644:
    if (ctx->pc == 0x3B8644u) {
        ctx->pc = 0x3B8644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8640u;
        // 0x3b8644: 0x27a8003c  addiu       $t0, $sp, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B8648u;
        goto label_3b8648;
    }
    ctx->pc = 0x3B8640u;
    SET_GPR_U32(ctx, 31, 0x3B8648u);
    ctx->pc = 0x3B8644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B8640u;
    // 0x3b8644: 0x27a8003c  addiu       $t0, $sp, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8A90u, 0x3B8640u, 0x3B8648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B8648u;
label_3b8648:
    // 0x3b8648: 0x10000007  b           . + 4 + (0x7 << 2)
label_3b864c:
    if (ctx->pc == 0x3B864Cu) {
        ctx->pc = 0x3B864Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8648u;
        // 0x3b864c: 0x8e240048  lw          $a0, 0x48($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B8650u;
        goto label_3b8650;
    }
    ctx->pc = 0x3B8648u;
    {
        const bool branch_taken_0x3b8648 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B864Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8648u;
        // 0x3b864c: 0x8e240048  lw          $a0, 0x48($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b8648) {
            ctx->pc = 0x3B8668u;
            goto label_3b8668;
        }
    }
    ctx->pc = 0x3B8650u;
label_3b8650:
    // 0x3b8650: 0x8e050044  lw          $a1, 0x44($s0)
    ctx->pc = 0x3b8650u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
label_3b8654:
    // 0x3b8654: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x3b8654u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3b8658:
    // 0x3b8658: 0x27a70038  addiu       $a3, $sp, 0x38
    ctx->pc = 0x3b8658u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
label_3b865c:
    // 0x3b865c: 0xc0ecb04  jal         func_3B2C10
label_3b8660:
    if (ctx->pc == 0x3B8660u) {
        ctx->pc = 0x3B8660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B865Cu;
        // 0x3b8660: 0x27a8003c  addiu       $t0, $sp, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B8664u;
        goto label_3b8664;
    }
    ctx->pc = 0x3B865Cu;
    SET_GPR_U32(ctx, 31, 0x3B8664u);
    ctx->pc = 0x3B8660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B865Cu;
    // 0x3b8660: 0x27a8003c  addiu       $t0, $sp, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B2C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B2C10u, 0x3B865Cu, 0x3B8664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B8664u;
label_3b8664:
    // 0x3b8664: 0x8e240048  lw          $a0, 0x48($s1)
    ctx->pc = 0x3b8664u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
label_3b8668:
    // 0x3b8668: 0x10800012  beqz        $a0, . + 4 + (0x12 << 2)
label_3b866c:
    if (ctx->pc == 0x3B866Cu) {
        ctx->pc = 0x3B866Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8668u;
        // 0x3b866c: 0x8fa30044  lw          $v1, 0x44($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B8670u;
        goto label_3b8670;
    }
    ctx->pc = 0x3B8668u;
    {
        const bool branch_taken_0x3b8668 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B866Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8668u;
        // 0x3b866c: 0x8fa30044  lw          $v1, 0x44($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b8668) {
            ctx->pc = 0x3B86B4u;
            goto label_3b86b4;
        }
    }
    ctx->pc = 0x3B8670u;
label_3b8670:
    // 0x3b8670: 0x8e420058  lw          $v0, 0x58($s2)
    ctx->pc = 0x3b8670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
label_3b8674:
    // 0x3b8674: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3b8674u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_3b8678:
    // 0x3b8678: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_3b867c:
    if (ctx->pc == 0x3B867Cu) {
        ctx->pc = 0x3B867Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8678u;
        // 0x3b867c: 0x8c840014  lw          $a0, 0x14($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B8680u;
        goto label_3b8680;
    }
    ctx->pc = 0x3B8678u;
    {
        const bool branch_taken_0x3b8678 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B867Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8678u;
        // 0x3b867c: 0x8c840014  lw          $a0, 0x14($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b8678) {
            ctx->pc = 0x3B869Cu;
            goto label_3b869c;
        }
    }
    ctx->pc = 0x3B8680u;
label_3b8680:
    // 0x3b8680: 0x8e65005c  lw          $a1, 0x5C($s3)
    ctx->pc = 0x3b8680u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 92)));
label_3b8684:
    // 0x3b8684: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x3b8684u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3b8688:
    // 0x3b8688: 0x27a70038  addiu       $a3, $sp, 0x38
    ctx->pc = 0x3b8688u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
label_3b868c:
    // 0x3b868c: 0xc0ea2a4  jal         func_3A8A90
label_3b8690:
    if (ctx->pc == 0x3B8690u) {
        ctx->pc = 0x3B8690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B868Cu;
        // 0x3b8690: 0x27a8003c  addiu       $t0, $sp, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B8694u;
        goto label_3b8694;
    }
    ctx->pc = 0x3B868Cu;
    SET_GPR_U32(ctx, 31, 0x3B8694u);
    ctx->pc = 0x3B8690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B868Cu;
    // 0x3b8690: 0x27a8003c  addiu       $t0, $sp, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8A90u, 0x3B868Cu, 0x3B8694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B8694u;
label_3b8694:
    // 0x3b8694: 0x10000007  b           . + 4 + (0x7 << 2)
label_3b8698:
    if (ctx->pc == 0x3B8698u) {
        ctx->pc = 0x3B8698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8694u;
        // 0x3b8698: 0x8fa30044  lw          $v1, 0x44($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B869Cu;
        goto label_3b869c;
    }
    ctx->pc = 0x3B8694u;
    {
        const bool branch_taken_0x3b8694 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B8698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8694u;
        // 0x3b8698: 0x8fa30044  lw          $v1, 0x44($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b8694) {
            ctx->pc = 0x3B86B4u;
            goto label_3b86b4;
        }
    }
    ctx->pc = 0x3B869Cu;
label_3b869c:
    // 0x3b869c: 0x8e05005c  lw          $a1, 0x5C($s0)
    ctx->pc = 0x3b869cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
label_3b86a0:
    // 0x3b86a0: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x3b86a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3b86a4:
    // 0x3b86a4: 0x27a70038  addiu       $a3, $sp, 0x38
    ctx->pc = 0x3b86a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
label_3b86a8:
    // 0x3b86a8: 0xc0ecb04  jal         func_3B2C10
label_3b86ac:
    if (ctx->pc == 0x3B86ACu) {
        ctx->pc = 0x3B86ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B86A8u;
        // 0x3b86ac: 0x27a8003c  addiu       $t0, $sp, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B86B0u;
        goto label_3b86b0;
    }
    ctx->pc = 0x3B86A8u;
    SET_GPR_U32(ctx, 31, 0x3B86B0u);
    ctx->pc = 0x3B86ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B86A8u;
    // 0x3b86ac: 0x27a8003c  addiu       $t0, $sp, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B2C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B2C10u, 0x3B86A8u, 0x3B86B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B86B0u;
label_3b86b0:
    // 0x3b86b0: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x3b86b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_3b86b4:
    // 0x3b86b4: 0x26d60004  addiu       $s6, $s6, 0x4
    ctx->pc = 0x3b86b4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
label_3b86b8:
    // 0x3b86b8: 0x26100060  addiu       $s0, $s0, 0x60
    ctx->pc = 0x3b86b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
label_3b86bc:
    // 0x3b86bc: 0x26730060  addiu       $s3, $s3, 0x60
    ctx->pc = 0x3b86bcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 96));
label_3b86c0:
    // 0x3b86c0: 0x26520060  addiu       $s2, $s2, 0x60
    ctx->pc = 0x3b86c0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
label_3b86c4:
    // 0x3b86c4: 0x2c3102b  sltu        $v0, $s6, $v1
    ctx->pc = 0x3b86c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_3b86c8:
    // 0x3b86c8: 0x1440ffad  bnez        $v0, . + 4 + (-0x53 << 2)
label_3b86cc:
    if (ctx->pc == 0x3B86CCu) {
        ctx->pc = 0x3B86CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B86C8u;
        // 0x3b86cc: 0x26310060  addiu       $s1, $s1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B86D0u;
        goto label_3b86d0;
    }
    ctx->pc = 0x3B86C8u;
    {
        const bool branch_taken_0x3b86c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B86CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B86C8u;
        // 0x3b86cc: 0x26310060  addiu       $s1, $s1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b86c8) {
            ctx->pc = 0x3B8580u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b8580;
        }
    }
    ctx->pc = 0x3B86D0u;
label_3b86d0:
    // 0x3b86d0: 0x1280000e  beqz        $s4, . + 4 + (0xE << 2)
label_3b86d4:
    if (ctx->pc == 0x3B86D4u) {
        ctx->pc = 0x3B86D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B86D0u;
        // 0x3b86d4: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B86D8u;
        goto label_3b86d8;
    }
    ctx->pc = 0x3B86D0u;
    {
        const bool branch_taken_0x3b86d0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B86D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B86D0u;
        // 0x3b86d4: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b86d0) {
            ctx->pc = 0x3B870Cu;
            goto label_3b870c;
        }
    }
    ctx->pc = 0x3B86D8u;
label_3b86d8:
    // 0x3b86d8: 0x8e90005c  lw          $s0, 0x5C($s4)
    ctx->pc = 0x3b86d8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 92)));
label_3b86dc:
    // 0x3b86dc: 0xc0e2ab0  jal         func_38AAC0
label_3b86e0:
    if (ctx->pc == 0x3B86E0u) {
        ctx->pc = 0x3B86E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B86DCu;
        // 0x3b86e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B86E4u;
        goto label_3b86e4;
    }
    ctx->pc = 0x3B86DCu;
    SET_GPR_U32(ctx, 31, 0x3B86E4u);
    ctx->pc = 0x3B86E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B86DCu;
    // 0x3b86e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38AAC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38AAC0u, 0x3B86DCu, 0x3B86E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B86E4u;
label_3b86e4:
    // 0x3b86e4: 0x6ba50027  ldl         $a1, 0x27($sp)
    ctx->pc = 0x3b86e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_3b86e8:
    // 0x3b86e8: 0x6fa50020  ldr         $a1, 0x20($sp)
    ctx->pc = 0x3b86e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_3b86ec:
    // 0x3b86ec: 0x6ba6002f  ldl         $a2, 0x2F($sp)
    ctx->pc = 0x3b86ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_3b86f0:
    // 0x3b86f0: 0x6fa60028  ldr         $a2, 0x28($sp)
    ctx->pc = 0x3b86f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_3b86f4:
    // 0x3b86f4: 0xb205000b  sdl         $a1, 0xB($s0)
    ctx->pc = 0x3b86f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 11); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3b86f8:
    // 0x3b86f8: 0xb6050004  sdr         $a1, 0x4($s0)
    ctx->pc = 0x3b86f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 4); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3b86fc:
    // 0x3b86fc: 0xb2060013  sdl         $a2, 0x13($s0)
    ctx->pc = 0x3b86fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3b8700:
    // 0x3b8700: 0xb606000c  sdr         $a2, 0xC($s0)
    ctx->pc = 0x3b8700u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3b8704:
    // 0x3b8704: 0xc0e2d08  jal         func_38B420
label_3b8708:
    if (ctx->pc == 0x3B8708u) {
        ctx->pc = 0x3B8708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8704u;
        // 0x3b8708: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B870Cu;
        goto label_3b870c;
    }
    ctx->pc = 0x3B8704u;
    SET_GPR_U32(ctx, 31, 0x3B870Cu);
    ctx->pc = 0x3B8708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B8704u;
    // 0x3b8708: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38B420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38B420u, 0x3B8704u, 0x3B870Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B870Cu;
label_3b870c:
    // 0x3b870c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x3b870cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_3b8710:
    // 0x3b8710: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
label_3b8714:
    if (ctx->pc == 0x3B8714u) {
        ctx->pc = 0x3B8714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8710u;
        // 0x3b8714: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B8718u;
        goto label_3b8718;
    }
    ctx->pc = 0x3B8710u;
    {
        const bool branch_taken_0x3b8710 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B8714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8710u;
        // 0x3b8714: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b8710) {
            ctx->pc = 0x3B879Cu;
            goto label_3b879c;
        }
    }
    ctx->pc = 0x3B8718u;
label_3b8718:
    // 0x3b8718: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
label_3b871c:
    if (ctx->pc == 0x3B871Cu) {
        ctx->pc = 0x3B871Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8718u;
        // 0x3b871c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B8720u;
        goto label_3b8720;
    }
    ctx->pc = 0x3B8718u;
    {
        const bool branch_taken_0x3b8718 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B871Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8718u;
        // 0x3b871c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b8718) {
            ctx->pc = 0x3B8788u;
            goto label_3b8788;
        }
    }
    ctx->pc = 0x3B8720u;
label_3b8720:
    // 0x3b8720: 0x24100018  addiu       $s0, $zero, 0x18
    ctx->pc = 0x3b8720u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_3b8724:
    // 0x3b8724: 0x2701018  mult        $v0, $s3, $s0
    ctx->pc = 0x3b8724u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_3b8728:
    // 0x3b8728: 0x26760001  addiu       $s6, $s3, 0x1
    ctx->pc = 0x3b8728u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_3b872c:
    // 0x3b872c: 0x551821  addu        $v1, $v0, $s5
    ctx->pc = 0x3b872cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_3b8730:
    // 0x3b8730: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3b8730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3b8734:
    // 0x3b8734: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x3b8734u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_3b8738:
    // 0x3b8738: 0x8c510014  lw          $s1, 0x14($v0)
    ctx->pc = 0x3b8738u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_3b873c:
    // 0x3b873c: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x3b873cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_3b8740:
    // 0x3b8740: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_3b8744:
    if (ctx->pc == 0x3B8744u) {
        ctx->pc = 0x3B8744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8740u;
        // 0x3b8744: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B8748u;
        goto label_3b8748;
    }
    ctx->pc = 0x3B8740u;
    {
        const bool branch_taken_0x3b8740 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b8740) {
            ctx->pc = 0x3B8744u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B8740u;
            // 0x3b8744: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B8748u;
            goto label_3b8748;
        }
    }
    ctx->pc = 0x3B8748u;
label_3b8748:
    // 0x3b8748: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3b8748u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3b874c:
    // 0x3b874c: 0x8e310014  lw          $s1, 0x14($s1)
    ctx->pc = 0x3b874cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_3b8750:
    // 0x3b8750: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x3b8750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_3b8754:
    // 0x3b8754: 0x5622fffa  bnel        $s1, $v0, . + 4 + (-0x6 << 2)
label_3b8758:
    if (ctx->pc == 0x3B8758u) {
        ctx->pc = 0x3B8758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8754u;
        // 0x3b8758: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B875Cu;
        goto label_3b875c;
    }
    ctx->pc = 0x3B8754u;
    {
        const bool branch_taken_0x3b8754 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x3b8754) {
            ctx->pc = 0x3B8758u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B8754u;
            // 0x3b8758: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B8740u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b8740;
        }
    }
    ctx->pc = 0x3B875Cu;
label_3b875c:
    // 0x3b875c: 0x2701018  mult        $v0, $s3, $s0
    ctx->pc = 0x3b875cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_3b8760:
    // 0x3b8760: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3b8760u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3b8764:
    // 0x3b8764: 0x2c0982d  daddu       $s3, $s6, $zero
    ctx->pc = 0x3b8764u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3b8768:
    // 0x3b8768: 0x551821  addu        $v1, $v0, $s5
    ctx->pc = 0x3b8768u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_3b876c:
    // 0x3b876c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3b876cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3b8770:
    // 0x3b8770: 0xc0ec620  jal         func_3B1880
label_3b8774:
    if (ctx->pc == 0x3B8774u) {
        ctx->pc = 0x3B8774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8770u;
        // 0x3b8774: 0xac400014  sw          $zero, 0x14($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B8778u;
        goto label_3b8778;
    }
    ctx->pc = 0x3B8770u;
    SET_GPR_U32(ctx, 31, 0x3B8778u);
    ctx->pc = 0x3B8774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B8770u;
    // 0x3b8774: 0xac400014  sw          $zero, 0x14($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B1880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1880u, 0x3B8770u, 0x3B8778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B8778u;
label_3b8778:
    // 0x3b8778: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x3b8778u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_3b877c:
    // 0x3b877c: 0x263182b  sltu        $v1, $s3, $v1
    ctx->pc = 0x3b877cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_3b8780:
    // 0x3b8780: 0x1460ffe9  bnez        $v1, . + 4 + (-0x17 << 2)
label_3b8784:
    if (ctx->pc == 0x3B8784u) {
        ctx->pc = 0x3B8784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8780u;
        // 0x3b8784: 0x2701018  mult        $v0, $s3, $s0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B8788u;
        goto label_3b8788;
    }
    ctx->pc = 0x3B8780u;
    {
        const bool branch_taken_0x3b8780 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B8784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8780u;
        // 0x3b8784: 0x2701018  mult        $v0, $s3, $s0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b8780) {
            ctx->pc = 0x3B8728u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b8728;
        }
    }
    ctx->pc = 0x3B8788u;
label_3b8788:
    // 0x3b8788: 0x3c050062  lui         $a1, 0x62
    ctx->pc = 0x3b8788u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)98 << 16));
label_3b878c:
    // 0x3b878c: 0x24a3e880  addiu       $v1, $a1, -0x1780
    ctx->pc = 0x3b878cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961280));
label_3b8790:
    // 0x3b8790: 0x8c62010c  lw          $v0, 0x10C($v1)
    ctx->pc = 0x3b8790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
label_3b8794:
    // 0x3b8794: 0x40f809  jalr        $v0
label_3b8798:
    if (ctx->pc == 0x3B8798u) {
        ctx->pc = 0x3B8798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8794u;
        // 0x3b8798: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B879Cu;
        goto label_3b879c;
    }
    ctx->pc = 0x3B8794u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3B879Cu);
        ctx->pc = 0x3B8798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8794u;
        // 0x3b8798: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B8794u, 0x3B879Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3B879Cu;
label_3b879c:
    // 0x3b879c: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x3b879cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_3b87a0:
    // 0x3b87a0: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x3b87a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3b87a4:
    // 0x3b87a4: 0x7bb000e0  lq          $s0, 0xE0($sp)
    ctx->pc = 0x3b87a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_3b87a8:
    // 0x3b87a8: 0xacd40008  sw          $s4, 0x8($a2)
    ctx->pc = 0x3b87a8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 20));
label_3b87ac:
    // 0x3b87ac: 0x7bb100d0  lq          $s1, 0xD0($sp)
    ctx->pc = 0x3b87acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_3b87b0:
    // 0x3b87b0: 0x7bb200c0  lq          $s2, 0xC0($sp)
    ctx->pc = 0x3b87b0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_3b87b4:
    // 0x3b87b4: 0x7bb300b0  lq          $s3, 0xB0($sp)
    ctx->pc = 0x3b87b4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_3b87b8:
    // 0x3b87b8: 0x7bb400a0  lq          $s4, 0xA0($sp)
    ctx->pc = 0x3b87b8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_3b87bc:
    // 0x3b87bc: 0x7bb50090  lq          $s5, 0x90($sp)
    ctx->pc = 0x3b87bcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3b87c0:
    // 0x3b87c0: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x3b87c0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3b87c4:
    // 0x3b87c4: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x3b87c4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3b87c8:
    // 0x3b87c8: 0x7bbe0060  lq          $fp, 0x60($sp)
    ctx->pc = 0x3b87c8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3b87cc:
    // 0x3b87cc: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x3b87ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_3b87d0:
    // 0x3b87d0: 0x3e00008  jr          $ra
label_3b87d4:
    if (ctx->pc == 0x3B87D4u) {
        ctx->pc = 0x3B87D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B87D0u;
        // 0x3b87d4: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B87D8u;
        goto label_fallthrough_0x3b87d0;
    }
    ctx->pc = 0x3B87D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B87D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B87D0u;
        // 0x3b87d4: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B87D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3b87d0:
    ctx->pc = 0x3B87D8u;
}
