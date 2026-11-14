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

// Function: sub_003E5368
// Address: 0x3e5368 - 0x3e6760
void sub_003E5368_0x3e5368(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E5368_0x3e5368");
#endif

    switch (ctx->pc) {
        case 0x3e5368u: goto label_3e5368;
        case 0x3e536cu: goto label_3e536c;
        case 0x3e5370u: goto label_3e5370;
        case 0x3e5374u: goto label_3e5374;
        case 0x3e5378u: goto label_3e5378;
        case 0x3e537cu: goto label_3e537c;
        case 0x3e5380u: goto label_3e5380;
        case 0x3e5384u: goto label_3e5384;
        case 0x3e5388u: goto label_3e5388;
        case 0x3e538cu: goto label_3e538c;
        case 0x3e5390u: goto label_3e5390;
        case 0x3e5394u: goto label_3e5394;
        case 0x3e5398u: goto label_3e5398;
        case 0x3e539cu: goto label_3e539c;
        case 0x3e53a0u: goto label_3e53a0;
        case 0x3e53a4u: goto label_3e53a4;
        case 0x3e53a8u: goto label_3e53a8;
        case 0x3e53acu: goto label_3e53ac;
        case 0x3e53b0u: goto label_3e53b0;
        case 0x3e53b4u: goto label_3e53b4;
        case 0x3e53b8u: goto label_3e53b8;
        case 0x3e53bcu: goto label_3e53bc;
        case 0x3e53c0u: goto label_3e53c0;
        case 0x3e53c4u: goto label_3e53c4;
        case 0x3e53c8u: goto label_3e53c8;
        case 0x3e53ccu: goto label_3e53cc;
        case 0x3e53d0u: goto label_3e53d0;
        case 0x3e53d4u: goto label_3e53d4;
        case 0x3e53d8u: goto label_3e53d8;
        case 0x3e53dcu: goto label_3e53dc;
        case 0x3e53e0u: goto label_3e53e0;
        case 0x3e53e4u: goto label_3e53e4;
        case 0x3e53e8u: goto label_3e53e8;
        case 0x3e53ecu: goto label_3e53ec;
        case 0x3e53f0u: goto label_3e53f0;
        case 0x3e53f4u: goto label_3e53f4;
        case 0x3e53f8u: goto label_3e53f8;
        case 0x3e53fcu: goto label_3e53fc;
        case 0x3e5400u: goto label_3e5400;
        case 0x3e5404u: goto label_3e5404;
        case 0x3e5408u: goto label_3e5408;
        case 0x3e540cu: goto label_3e540c;
        case 0x3e5410u: goto label_3e5410;
        case 0x3e5414u: goto label_3e5414;
        case 0x3e5418u: goto label_3e5418;
        case 0x3e541cu: goto label_3e541c;
        case 0x3e5420u: goto label_3e5420;
        case 0x3e5424u: goto label_3e5424;
        case 0x3e5428u: goto label_3e5428;
        case 0x3e542cu: goto label_3e542c;
        case 0x3e5430u: goto label_3e5430;
        case 0x3e5434u: goto label_3e5434;
        case 0x3e5438u: goto label_3e5438;
        case 0x3e543cu: goto label_3e543c;
        case 0x3e5440u: goto label_3e5440;
        case 0x3e5444u: goto label_3e5444;
        case 0x3e5448u: goto label_3e5448;
        case 0x3e544cu: goto label_3e544c;
        case 0x3e5450u: goto label_3e5450;
        case 0x3e5454u: goto label_3e5454;
        case 0x3e5458u: goto label_3e5458;
        case 0x3e545cu: goto label_3e545c;
        case 0x3e5460u: goto label_3e5460;
        case 0x3e5464u: goto label_3e5464;
        case 0x3e5468u: goto label_3e5468;
        case 0x3e546cu: goto label_3e546c;
        case 0x3e5470u: goto label_3e5470;
        case 0x3e5474u: goto label_3e5474;
        case 0x3e5478u: goto label_3e5478;
        case 0x3e547cu: goto label_3e547c;
        case 0x3e5480u: goto label_3e5480;
        case 0x3e5484u: goto label_3e5484;
        case 0x3e5488u: goto label_3e5488;
        case 0x3e548cu: goto label_3e548c;
        case 0x3e5490u: goto label_3e5490;
        case 0x3e5494u: goto label_3e5494;
        case 0x3e5498u: goto label_3e5498;
        case 0x3e549cu: goto label_3e549c;
        case 0x3e54a0u: goto label_3e54a0;
        case 0x3e54a4u: goto label_3e54a4;
        case 0x3e54a8u: goto label_3e54a8;
        case 0x3e54acu: goto label_3e54ac;
        case 0x3e54b0u: goto label_3e54b0;
        case 0x3e54b4u: goto label_3e54b4;
        case 0x3e54b8u: goto label_3e54b8;
        case 0x3e54bcu: goto label_3e54bc;
        case 0x3e54c0u: goto label_3e54c0;
        case 0x3e54c4u: goto label_3e54c4;
        case 0x3e54c8u: goto label_3e54c8;
        case 0x3e54ccu: goto label_3e54cc;
        case 0x3e54d0u: goto label_3e54d0;
        case 0x3e54d4u: goto label_3e54d4;
        case 0x3e54d8u: goto label_3e54d8;
        case 0x3e54dcu: goto label_3e54dc;
        case 0x3e54e0u: goto label_3e54e0;
        case 0x3e54e4u: goto label_3e54e4;
        case 0x3e54e8u: goto label_3e54e8;
        case 0x3e54ecu: goto label_3e54ec;
        case 0x3e54f0u: goto label_3e54f0;
        case 0x3e54f4u: goto label_3e54f4;
        case 0x3e54f8u: goto label_3e54f8;
        case 0x3e54fcu: goto label_3e54fc;
        case 0x3e5500u: goto label_3e5500;
        case 0x3e5504u: goto label_3e5504;
        case 0x3e5508u: goto label_3e5508;
        case 0x3e550cu: goto label_3e550c;
        case 0x3e5510u: goto label_3e5510;
        case 0x3e5514u: goto label_3e5514;
        case 0x3e5518u: goto label_3e5518;
        case 0x3e551cu: goto label_3e551c;
        case 0x3e5520u: goto label_3e5520;
        case 0x3e5524u: goto label_3e5524;
        case 0x3e5528u: goto label_3e5528;
        case 0x3e552cu: goto label_3e552c;
        case 0x3e5530u: goto label_3e5530;
        case 0x3e5534u: goto label_3e5534;
        case 0x3e5538u: goto label_3e5538;
        case 0x3e553cu: goto label_3e553c;
        case 0x3e5540u: goto label_3e5540;
        case 0x3e5544u: goto label_3e5544;
        case 0x3e5548u: goto label_3e5548;
        case 0x3e554cu: goto label_3e554c;
        case 0x3e5550u: goto label_3e5550;
        case 0x3e5554u: goto label_3e5554;
        case 0x3e5558u: goto label_3e5558;
        case 0x3e555cu: goto label_3e555c;
        case 0x3e5560u: goto label_3e5560;
        case 0x3e5564u: goto label_3e5564;
        case 0x3e5568u: goto label_3e5568;
        case 0x3e556cu: goto label_3e556c;
        case 0x3e5570u: goto label_3e5570;
        case 0x3e5574u: goto label_3e5574;
        case 0x3e5578u: goto label_3e5578;
        case 0x3e557cu: goto label_3e557c;
        case 0x3e5580u: goto label_3e5580;
        case 0x3e5584u: goto label_3e5584;
        case 0x3e5588u: goto label_3e5588;
        case 0x3e558cu: goto label_3e558c;
        case 0x3e5590u: goto label_3e5590;
        case 0x3e5594u: goto label_3e5594;
        case 0x3e5598u: goto label_3e5598;
        case 0x3e559cu: goto label_3e559c;
        case 0x3e55a0u: goto label_3e55a0;
        case 0x3e55a4u: goto label_3e55a4;
        case 0x3e55a8u: goto label_3e55a8;
        case 0x3e55acu: goto label_3e55ac;
        case 0x3e55b0u: goto label_3e55b0;
        case 0x3e55b4u: goto label_3e55b4;
        case 0x3e55b8u: goto label_3e55b8;
        case 0x3e55bcu: goto label_3e55bc;
        case 0x3e55c0u: goto label_3e55c0;
        case 0x3e55c4u: goto label_3e55c4;
        case 0x3e55c8u: goto label_3e55c8;
        case 0x3e55ccu: goto label_3e55cc;
        case 0x3e55d0u: goto label_3e55d0;
        case 0x3e55d4u: goto label_3e55d4;
        case 0x3e55d8u: goto label_3e55d8;
        case 0x3e55dcu: goto label_3e55dc;
        case 0x3e55e0u: goto label_3e55e0;
        case 0x3e55e4u: goto label_3e55e4;
        case 0x3e55e8u: goto label_3e55e8;
        case 0x3e55ecu: goto label_3e55ec;
        case 0x3e55f0u: goto label_3e55f0;
        case 0x3e55f4u: goto label_3e55f4;
        case 0x3e55f8u: goto label_3e55f8;
        case 0x3e55fcu: goto label_3e55fc;
        case 0x3e5600u: goto label_3e5600;
        case 0x3e5604u: goto label_3e5604;
        case 0x3e5608u: goto label_3e5608;
        case 0x3e560cu: goto label_3e560c;
        case 0x3e5610u: goto label_3e5610;
        case 0x3e5614u: goto label_3e5614;
        case 0x3e5618u: goto label_3e5618;
        case 0x3e561cu: goto label_3e561c;
        case 0x3e5620u: goto label_3e5620;
        case 0x3e5624u: goto label_3e5624;
        case 0x3e5628u: goto label_3e5628;
        case 0x3e562cu: goto label_3e562c;
        case 0x3e5630u: goto label_3e5630;
        case 0x3e5634u: goto label_3e5634;
        case 0x3e5638u: goto label_3e5638;
        case 0x3e563cu: goto label_3e563c;
        case 0x3e5640u: goto label_3e5640;
        case 0x3e5644u: goto label_3e5644;
        case 0x3e5648u: goto label_3e5648;
        case 0x3e564cu: goto label_3e564c;
        case 0x3e5650u: goto label_3e5650;
        case 0x3e5654u: goto label_3e5654;
        case 0x3e5658u: goto label_3e5658;
        case 0x3e565cu: goto label_3e565c;
        case 0x3e5660u: goto label_3e5660;
        case 0x3e5664u: goto label_3e5664;
        case 0x3e5668u: goto label_3e5668;
        case 0x3e566cu: goto label_3e566c;
        case 0x3e5670u: goto label_3e5670;
        case 0x3e5674u: goto label_3e5674;
        case 0x3e5678u: goto label_3e5678;
        case 0x3e567cu: goto label_3e567c;
        case 0x3e5680u: goto label_3e5680;
        case 0x3e5684u: goto label_3e5684;
        case 0x3e5688u: goto label_3e5688;
        case 0x3e568cu: goto label_3e568c;
        case 0x3e5690u: goto label_3e5690;
        case 0x3e5694u: goto label_3e5694;
        case 0x3e5698u: goto label_3e5698;
        case 0x3e569cu: goto label_3e569c;
        case 0x3e56a0u: goto label_3e56a0;
        case 0x3e56a4u: goto label_3e56a4;
        case 0x3e56a8u: goto label_3e56a8;
        case 0x3e56acu: goto label_3e56ac;
        case 0x3e56b0u: goto label_3e56b0;
        case 0x3e56b4u: goto label_3e56b4;
        case 0x3e56b8u: goto label_3e56b8;
        case 0x3e56bcu: goto label_3e56bc;
        case 0x3e56c0u: goto label_3e56c0;
        case 0x3e56c4u: goto label_3e56c4;
        case 0x3e56c8u: goto label_3e56c8;
        case 0x3e56ccu: goto label_3e56cc;
        case 0x3e56d0u: goto label_3e56d0;
        case 0x3e56d4u: goto label_3e56d4;
        case 0x3e56d8u: goto label_3e56d8;
        case 0x3e56dcu: goto label_3e56dc;
        case 0x3e56e0u: goto label_3e56e0;
        case 0x3e56e4u: goto label_3e56e4;
        case 0x3e56e8u: goto label_3e56e8;
        case 0x3e56ecu: goto label_3e56ec;
        case 0x3e56f0u: goto label_3e56f0;
        case 0x3e56f4u: goto label_3e56f4;
        case 0x3e56f8u: goto label_3e56f8;
        case 0x3e56fcu: goto label_3e56fc;
        case 0x3e5700u: goto label_3e5700;
        case 0x3e5704u: goto label_3e5704;
        case 0x3e5708u: goto label_3e5708;
        case 0x3e570cu: goto label_3e570c;
        case 0x3e5710u: goto label_3e5710;
        case 0x3e5714u: goto label_3e5714;
        case 0x3e5718u: goto label_3e5718;
        case 0x3e571cu: goto label_3e571c;
        case 0x3e5720u: goto label_3e5720;
        case 0x3e5724u: goto label_3e5724;
        case 0x3e5728u: goto label_3e5728;
        case 0x3e572cu: goto label_3e572c;
        case 0x3e5730u: goto label_3e5730;
        case 0x3e5734u: goto label_3e5734;
        case 0x3e5738u: goto label_3e5738;
        case 0x3e573cu: goto label_3e573c;
        case 0x3e5740u: goto label_3e5740;
        case 0x3e5744u: goto label_3e5744;
        case 0x3e5748u: goto label_3e5748;
        case 0x3e574cu: goto label_3e574c;
        case 0x3e5750u: goto label_3e5750;
        case 0x3e5754u: goto label_3e5754;
        case 0x3e5758u: goto label_3e5758;
        case 0x3e575cu: goto label_3e575c;
        case 0x3e5760u: goto label_3e5760;
        case 0x3e5764u: goto label_3e5764;
        case 0x3e5768u: goto label_3e5768;
        case 0x3e576cu: goto label_3e576c;
        case 0x3e5770u: goto label_3e5770;
        case 0x3e5774u: goto label_3e5774;
        case 0x3e5778u: goto label_3e5778;
        case 0x3e577cu: goto label_3e577c;
        case 0x3e5780u: goto label_3e5780;
        case 0x3e5784u: goto label_3e5784;
        case 0x3e5788u: goto label_3e5788;
        case 0x3e578cu: goto label_3e578c;
        case 0x3e5790u: goto label_3e5790;
        case 0x3e5794u: goto label_3e5794;
        case 0x3e5798u: goto label_3e5798;
        case 0x3e579cu: goto label_3e579c;
        case 0x3e57a0u: goto label_3e57a0;
        case 0x3e57a4u: goto label_3e57a4;
        case 0x3e57a8u: goto label_3e57a8;
        case 0x3e57acu: goto label_3e57ac;
        case 0x3e57b0u: goto label_3e57b0;
        case 0x3e57b4u: goto label_3e57b4;
        case 0x3e57b8u: goto label_3e57b8;
        case 0x3e57bcu: goto label_3e57bc;
        case 0x3e57c0u: goto label_3e57c0;
        case 0x3e57c4u: goto label_3e57c4;
        case 0x3e57c8u: goto label_3e57c8;
        case 0x3e57ccu: goto label_3e57cc;
        case 0x3e57d0u: goto label_3e57d0;
        case 0x3e57d4u: goto label_3e57d4;
        case 0x3e57d8u: goto label_3e57d8;
        case 0x3e57dcu: goto label_3e57dc;
        case 0x3e57e0u: goto label_3e57e0;
        case 0x3e57e4u: goto label_3e57e4;
        case 0x3e57e8u: goto label_3e57e8;
        case 0x3e57ecu: goto label_3e57ec;
        case 0x3e57f0u: goto label_3e57f0;
        case 0x3e57f4u: goto label_3e57f4;
        case 0x3e57f8u: goto label_3e57f8;
        case 0x3e57fcu: goto label_3e57fc;
        case 0x3e5800u: goto label_3e5800;
        case 0x3e5804u: goto label_3e5804;
        case 0x3e5808u: goto label_3e5808;
        case 0x3e580cu: goto label_3e580c;
        case 0x3e5810u: goto label_3e5810;
        case 0x3e5814u: goto label_3e5814;
        case 0x3e5818u: goto label_3e5818;
        case 0x3e581cu: goto label_3e581c;
        case 0x3e5820u: goto label_3e5820;
        case 0x3e5824u: goto label_3e5824;
        case 0x3e5828u: goto label_3e5828;
        case 0x3e582cu: goto label_3e582c;
        case 0x3e5830u: goto label_3e5830;
        case 0x3e5834u: goto label_3e5834;
        case 0x3e5838u: goto label_3e5838;
        case 0x3e583cu: goto label_3e583c;
        case 0x3e5840u: goto label_3e5840;
        case 0x3e5844u: goto label_3e5844;
        case 0x3e5848u: goto label_3e5848;
        case 0x3e584cu: goto label_3e584c;
        case 0x3e5850u: goto label_3e5850;
        case 0x3e5854u: goto label_3e5854;
        case 0x3e5858u: goto label_3e5858;
        case 0x3e585cu: goto label_3e585c;
        case 0x3e5860u: goto label_3e5860;
        case 0x3e5864u: goto label_3e5864;
        case 0x3e5868u: goto label_3e5868;
        case 0x3e586cu: goto label_3e586c;
        case 0x3e5870u: goto label_3e5870;
        case 0x3e5874u: goto label_3e5874;
        case 0x3e5878u: goto label_3e5878;
        case 0x3e587cu: goto label_3e587c;
        case 0x3e5880u: goto label_3e5880;
        case 0x3e5884u: goto label_3e5884;
        case 0x3e5888u: goto label_3e5888;
        case 0x3e588cu: goto label_3e588c;
        case 0x3e5890u: goto label_3e5890;
        case 0x3e5894u: goto label_3e5894;
        case 0x3e5898u: goto label_3e5898;
        case 0x3e589cu: goto label_3e589c;
        case 0x3e58a0u: goto label_3e58a0;
        case 0x3e58a4u: goto label_3e58a4;
        case 0x3e58a8u: goto label_3e58a8;
        case 0x3e58acu: goto label_3e58ac;
        case 0x3e58b0u: goto label_3e58b0;
        case 0x3e58b4u: goto label_3e58b4;
        case 0x3e58b8u: goto label_3e58b8;
        case 0x3e58bcu: goto label_3e58bc;
        case 0x3e58c0u: goto label_3e58c0;
        case 0x3e58c4u: goto label_3e58c4;
        case 0x3e58c8u: goto label_3e58c8;
        case 0x3e58ccu: goto label_3e58cc;
        case 0x3e58d0u: goto label_3e58d0;
        case 0x3e58d4u: goto label_3e58d4;
        case 0x3e58d8u: goto label_3e58d8;
        case 0x3e58dcu: goto label_3e58dc;
        case 0x3e58e0u: goto label_3e58e0;
        case 0x3e58e4u: goto label_3e58e4;
        case 0x3e58e8u: goto label_3e58e8;
        case 0x3e58ecu: goto label_3e58ec;
        case 0x3e58f0u: goto label_3e58f0;
        case 0x3e58f4u: goto label_3e58f4;
        case 0x3e58f8u: goto label_3e58f8;
        case 0x3e58fcu: goto label_3e58fc;
        case 0x3e5900u: goto label_3e5900;
        case 0x3e5904u: goto label_3e5904;
        case 0x3e5908u: goto label_3e5908;
        case 0x3e590cu: goto label_3e590c;
        case 0x3e5910u: goto label_3e5910;
        case 0x3e5914u: goto label_3e5914;
        case 0x3e5918u: goto label_3e5918;
        case 0x3e591cu: goto label_3e591c;
        case 0x3e5920u: goto label_3e5920;
        case 0x3e5924u: goto label_3e5924;
        case 0x3e5928u: goto label_3e5928;
        case 0x3e592cu: goto label_3e592c;
        case 0x3e5930u: goto label_3e5930;
        case 0x3e5934u: goto label_3e5934;
        case 0x3e5938u: goto label_3e5938;
        case 0x3e593cu: goto label_3e593c;
        case 0x3e5940u: goto label_3e5940;
        case 0x3e5944u: goto label_3e5944;
        case 0x3e5948u: goto label_3e5948;
        case 0x3e594cu: goto label_3e594c;
        case 0x3e5950u: goto label_3e5950;
        case 0x3e5954u: goto label_3e5954;
        case 0x3e5958u: goto label_3e5958;
        case 0x3e595cu: goto label_3e595c;
        case 0x3e5960u: goto label_3e5960;
        case 0x3e5964u: goto label_3e5964;
        case 0x3e5968u: goto label_3e5968;
        case 0x3e596cu: goto label_3e596c;
        case 0x3e5970u: goto label_3e5970;
        case 0x3e5974u: goto label_3e5974;
        case 0x3e5978u: goto label_3e5978;
        case 0x3e597cu: goto label_3e597c;
        case 0x3e5980u: goto label_3e5980;
        case 0x3e5984u: goto label_3e5984;
        case 0x3e5988u: goto label_3e5988;
        case 0x3e598cu: goto label_3e598c;
        case 0x3e5990u: goto label_3e5990;
        case 0x3e5994u: goto label_3e5994;
        case 0x3e5998u: goto label_3e5998;
        case 0x3e599cu: goto label_3e599c;
        case 0x3e59a0u: goto label_3e59a0;
        case 0x3e59a4u: goto label_3e59a4;
        case 0x3e59a8u: goto label_3e59a8;
        case 0x3e59acu: goto label_3e59ac;
        case 0x3e59b0u: goto label_3e59b0;
        case 0x3e59b4u: goto label_3e59b4;
        case 0x3e59b8u: goto label_3e59b8;
        case 0x3e59bcu: goto label_3e59bc;
        case 0x3e59c0u: goto label_3e59c0;
        case 0x3e59c4u: goto label_3e59c4;
        case 0x3e59c8u: goto label_3e59c8;
        case 0x3e59ccu: goto label_3e59cc;
        case 0x3e59d0u: goto label_3e59d0;
        case 0x3e59d4u: goto label_3e59d4;
        case 0x3e59d8u: goto label_3e59d8;
        case 0x3e59dcu: goto label_3e59dc;
        case 0x3e59e0u: goto label_3e59e0;
        case 0x3e59e4u: goto label_3e59e4;
        case 0x3e59e8u: goto label_3e59e8;
        case 0x3e59ecu: goto label_3e59ec;
        case 0x3e59f0u: goto label_3e59f0;
        case 0x3e59f4u: goto label_3e59f4;
        case 0x3e59f8u: goto label_3e59f8;
        case 0x3e59fcu: goto label_3e59fc;
        case 0x3e5a00u: goto label_3e5a00;
        case 0x3e5a04u: goto label_3e5a04;
        case 0x3e5a08u: goto label_3e5a08;
        case 0x3e5a0cu: goto label_3e5a0c;
        case 0x3e5a10u: goto label_3e5a10;
        case 0x3e5a14u: goto label_3e5a14;
        case 0x3e5a18u: goto label_3e5a18;
        case 0x3e5a1cu: goto label_3e5a1c;
        case 0x3e5a20u: goto label_3e5a20;
        case 0x3e5a24u: goto label_3e5a24;
        case 0x3e5a28u: goto label_3e5a28;
        case 0x3e5a2cu: goto label_3e5a2c;
        case 0x3e5a30u: goto label_3e5a30;
        case 0x3e5a34u: goto label_3e5a34;
        case 0x3e5a38u: goto label_3e5a38;
        case 0x3e5a3cu: goto label_3e5a3c;
        case 0x3e5a40u: goto label_3e5a40;
        case 0x3e5a44u: goto label_3e5a44;
        case 0x3e5a48u: goto label_3e5a48;
        case 0x3e5a4cu: goto label_3e5a4c;
        case 0x3e5a50u: goto label_3e5a50;
        case 0x3e5a54u: goto label_3e5a54;
        case 0x3e5a58u: goto label_3e5a58;
        case 0x3e5a5cu: goto label_3e5a5c;
        case 0x3e5a60u: goto label_3e5a60;
        case 0x3e5a64u: goto label_3e5a64;
        case 0x3e5a68u: goto label_3e5a68;
        case 0x3e5a6cu: goto label_3e5a6c;
        case 0x3e5a70u: goto label_3e5a70;
        case 0x3e5a74u: goto label_3e5a74;
        case 0x3e5a78u: goto label_3e5a78;
        case 0x3e5a7cu: goto label_3e5a7c;
        case 0x3e5a80u: goto label_3e5a80;
        case 0x3e5a84u: goto label_3e5a84;
        case 0x3e5a88u: goto label_3e5a88;
        case 0x3e5a8cu: goto label_3e5a8c;
        case 0x3e5a90u: goto label_3e5a90;
        case 0x3e5a94u: goto label_3e5a94;
        case 0x3e5a98u: goto label_3e5a98;
        case 0x3e5a9cu: goto label_3e5a9c;
        case 0x3e5aa0u: goto label_3e5aa0;
        case 0x3e5aa4u: goto label_3e5aa4;
        case 0x3e5aa8u: goto label_3e5aa8;
        case 0x3e5aacu: goto label_3e5aac;
        case 0x3e5ab0u: goto label_3e5ab0;
        case 0x3e5ab4u: goto label_3e5ab4;
        case 0x3e5ab8u: goto label_3e5ab8;
        case 0x3e5abcu: goto label_3e5abc;
        case 0x3e5ac0u: goto label_3e5ac0;
        case 0x3e5ac4u: goto label_3e5ac4;
        case 0x3e5ac8u: goto label_3e5ac8;
        case 0x3e5accu: goto label_3e5acc;
        case 0x3e5ad0u: goto label_3e5ad0;
        case 0x3e5ad4u: goto label_3e5ad4;
        case 0x3e5ad8u: goto label_3e5ad8;
        case 0x3e5adcu: goto label_3e5adc;
        case 0x3e5ae0u: goto label_3e5ae0;
        case 0x3e5ae4u: goto label_3e5ae4;
        case 0x3e5ae8u: goto label_3e5ae8;
        case 0x3e5aecu: goto label_3e5aec;
        case 0x3e5af0u: goto label_3e5af0;
        case 0x3e5af4u: goto label_3e5af4;
        case 0x3e5af8u: goto label_3e5af8;
        case 0x3e5afcu: goto label_3e5afc;
        case 0x3e5b00u: goto label_3e5b00;
        case 0x3e5b04u: goto label_3e5b04;
        case 0x3e5b08u: goto label_3e5b08;
        case 0x3e5b0cu: goto label_3e5b0c;
        case 0x3e5b10u: goto label_3e5b10;
        case 0x3e5b14u: goto label_3e5b14;
        case 0x3e5b18u: goto label_3e5b18;
        case 0x3e5b1cu: goto label_3e5b1c;
        case 0x3e5b20u: goto label_3e5b20;
        case 0x3e5b24u: goto label_3e5b24;
        case 0x3e5b28u: goto label_3e5b28;
        case 0x3e5b2cu: goto label_3e5b2c;
        case 0x3e5b30u: goto label_3e5b30;
        case 0x3e5b34u: goto label_3e5b34;
        case 0x3e5b38u: goto label_3e5b38;
        case 0x3e5b3cu: goto label_3e5b3c;
        case 0x3e5b40u: goto label_3e5b40;
        case 0x3e5b44u: goto label_3e5b44;
        case 0x3e5b48u: goto label_3e5b48;
        case 0x3e5b4cu: goto label_3e5b4c;
        case 0x3e5b50u: goto label_3e5b50;
        case 0x3e5b54u: goto label_3e5b54;
        case 0x3e5b58u: goto label_3e5b58;
        case 0x3e5b5cu: goto label_3e5b5c;
        case 0x3e5b60u: goto label_3e5b60;
        case 0x3e5b64u: goto label_3e5b64;
        case 0x3e5b68u: goto label_3e5b68;
        case 0x3e5b6cu: goto label_3e5b6c;
        case 0x3e5b70u: goto label_3e5b70;
        case 0x3e5b74u: goto label_3e5b74;
        case 0x3e5b78u: goto label_3e5b78;
        case 0x3e5b7cu: goto label_3e5b7c;
        case 0x3e5b80u: goto label_3e5b80;
        case 0x3e5b84u: goto label_3e5b84;
        case 0x3e5b88u: goto label_3e5b88;
        case 0x3e5b8cu: goto label_3e5b8c;
        case 0x3e5b90u: goto label_3e5b90;
        case 0x3e5b94u: goto label_3e5b94;
        case 0x3e5b98u: goto label_3e5b98;
        case 0x3e5b9cu: goto label_3e5b9c;
        case 0x3e5ba0u: goto label_3e5ba0;
        case 0x3e5ba4u: goto label_3e5ba4;
        case 0x3e5ba8u: goto label_3e5ba8;
        case 0x3e5bacu: goto label_3e5bac;
        case 0x3e5bb0u: goto label_3e5bb0;
        case 0x3e5bb4u: goto label_3e5bb4;
        case 0x3e5bb8u: goto label_3e5bb8;
        case 0x3e5bbcu: goto label_3e5bbc;
        case 0x3e5bc0u: goto label_3e5bc0;
        case 0x3e5bc4u: goto label_3e5bc4;
        case 0x3e5bc8u: goto label_3e5bc8;
        case 0x3e5bccu: goto label_3e5bcc;
        case 0x3e5bd0u: goto label_3e5bd0;
        case 0x3e5bd4u: goto label_3e5bd4;
        case 0x3e5bd8u: goto label_3e5bd8;
        case 0x3e5bdcu: goto label_3e5bdc;
        case 0x3e5be0u: goto label_3e5be0;
        case 0x3e5be4u: goto label_3e5be4;
        case 0x3e5be8u: goto label_3e5be8;
        case 0x3e5becu: goto label_3e5bec;
        case 0x3e5bf0u: goto label_3e5bf0;
        case 0x3e5bf4u: goto label_3e5bf4;
        case 0x3e5bf8u: goto label_3e5bf8;
        case 0x3e5bfcu: goto label_3e5bfc;
        case 0x3e5c00u: goto label_3e5c00;
        case 0x3e5c04u: goto label_3e5c04;
        case 0x3e5c08u: goto label_3e5c08;
        case 0x3e5c0cu: goto label_3e5c0c;
        case 0x3e5c10u: goto label_3e5c10;
        case 0x3e5c14u: goto label_3e5c14;
        case 0x3e5c18u: goto label_3e5c18;
        case 0x3e5c1cu: goto label_3e5c1c;
        case 0x3e5c20u: goto label_3e5c20;
        case 0x3e5c24u: goto label_3e5c24;
        case 0x3e5c28u: goto label_3e5c28;
        case 0x3e5c2cu: goto label_3e5c2c;
        case 0x3e5c30u: goto label_3e5c30;
        case 0x3e5c34u: goto label_3e5c34;
        case 0x3e5c38u: goto label_3e5c38;
        case 0x3e5c3cu: goto label_3e5c3c;
        case 0x3e5c40u: goto label_3e5c40;
        case 0x3e5c44u: goto label_3e5c44;
        case 0x3e5c48u: goto label_3e5c48;
        case 0x3e5c4cu: goto label_3e5c4c;
        case 0x3e5c50u: goto label_3e5c50;
        case 0x3e5c54u: goto label_3e5c54;
        case 0x3e5c58u: goto label_3e5c58;
        case 0x3e5c5cu: goto label_3e5c5c;
        case 0x3e5c60u: goto label_3e5c60;
        case 0x3e5c64u: goto label_3e5c64;
        case 0x3e5c68u: goto label_3e5c68;
        case 0x3e5c6cu: goto label_3e5c6c;
        case 0x3e5c70u: goto label_3e5c70;
        case 0x3e5c74u: goto label_3e5c74;
        case 0x3e5c78u: goto label_3e5c78;
        case 0x3e5c7cu: goto label_3e5c7c;
        case 0x3e5c80u: goto label_3e5c80;
        case 0x3e5c84u: goto label_3e5c84;
        case 0x3e5c88u: goto label_3e5c88;
        case 0x3e5c8cu: goto label_3e5c8c;
        case 0x3e5c90u: goto label_3e5c90;
        case 0x3e5c94u: goto label_3e5c94;
        case 0x3e5c98u: goto label_3e5c98;
        case 0x3e5c9cu: goto label_3e5c9c;
        case 0x3e5ca0u: goto label_3e5ca0;
        case 0x3e5ca4u: goto label_3e5ca4;
        case 0x3e5ca8u: goto label_3e5ca8;
        case 0x3e5cacu: goto label_3e5cac;
        case 0x3e5cb0u: goto label_3e5cb0;
        case 0x3e5cb4u: goto label_3e5cb4;
        case 0x3e5cb8u: goto label_3e5cb8;
        case 0x3e5cbcu: goto label_3e5cbc;
        case 0x3e5cc0u: goto label_3e5cc0;
        case 0x3e5cc4u: goto label_3e5cc4;
        case 0x3e5cc8u: goto label_3e5cc8;
        case 0x3e5cccu: goto label_3e5ccc;
        case 0x3e5cd0u: goto label_3e5cd0;
        case 0x3e5cd4u: goto label_3e5cd4;
        case 0x3e5cd8u: goto label_3e5cd8;
        case 0x3e5cdcu: goto label_3e5cdc;
        case 0x3e5ce0u: goto label_3e5ce0;
        case 0x3e5ce4u: goto label_3e5ce4;
        case 0x3e5ce8u: goto label_3e5ce8;
        case 0x3e5cecu: goto label_3e5cec;
        case 0x3e5cf0u: goto label_3e5cf0;
        case 0x3e5cf4u: goto label_3e5cf4;
        case 0x3e5cf8u: goto label_3e5cf8;
        case 0x3e5cfcu: goto label_3e5cfc;
        case 0x3e5d00u: goto label_3e5d00;
        case 0x3e5d04u: goto label_3e5d04;
        case 0x3e5d08u: goto label_3e5d08;
        case 0x3e5d0cu: goto label_3e5d0c;
        case 0x3e5d10u: goto label_3e5d10;
        case 0x3e5d14u: goto label_3e5d14;
        case 0x3e5d18u: goto label_3e5d18;
        case 0x3e5d1cu: goto label_3e5d1c;
        case 0x3e5d20u: goto label_3e5d20;
        case 0x3e5d24u: goto label_3e5d24;
        case 0x3e5d28u: goto label_3e5d28;
        case 0x3e5d2cu: goto label_3e5d2c;
        case 0x3e5d30u: goto label_3e5d30;
        case 0x3e5d34u: goto label_3e5d34;
        case 0x3e5d38u: goto label_3e5d38;
        case 0x3e5d3cu: goto label_3e5d3c;
        case 0x3e5d40u: goto label_3e5d40;
        case 0x3e5d44u: goto label_3e5d44;
        case 0x3e5d48u: goto label_3e5d48;
        case 0x3e5d4cu: goto label_3e5d4c;
        case 0x3e5d50u: goto label_3e5d50;
        case 0x3e5d54u: goto label_3e5d54;
        case 0x3e5d58u: goto label_3e5d58;
        case 0x3e5d5cu: goto label_3e5d5c;
        case 0x3e5d60u: goto label_3e5d60;
        case 0x3e5d64u: goto label_3e5d64;
        case 0x3e5d68u: goto label_3e5d68;
        case 0x3e5d6cu: goto label_3e5d6c;
        case 0x3e5d70u: goto label_3e5d70;
        case 0x3e5d74u: goto label_3e5d74;
        case 0x3e5d78u: goto label_3e5d78;
        case 0x3e5d7cu: goto label_3e5d7c;
        case 0x3e5d80u: goto label_3e5d80;
        case 0x3e5d84u: goto label_3e5d84;
        case 0x3e5d88u: goto label_3e5d88;
        case 0x3e5d8cu: goto label_3e5d8c;
        case 0x3e5d90u: goto label_3e5d90;
        case 0x3e5d94u: goto label_3e5d94;
        case 0x3e5d98u: goto label_3e5d98;
        case 0x3e5d9cu: goto label_3e5d9c;
        case 0x3e5da0u: goto label_3e5da0;
        case 0x3e5da4u: goto label_3e5da4;
        case 0x3e5da8u: goto label_3e5da8;
        case 0x3e5dacu: goto label_3e5dac;
        case 0x3e5db0u: goto label_3e5db0;
        case 0x3e5db4u: goto label_3e5db4;
        case 0x3e5db8u: goto label_3e5db8;
        case 0x3e5dbcu: goto label_3e5dbc;
        case 0x3e5dc0u: goto label_3e5dc0;
        case 0x3e5dc4u: goto label_3e5dc4;
        case 0x3e5dc8u: goto label_3e5dc8;
        case 0x3e5dccu: goto label_3e5dcc;
        case 0x3e5dd0u: goto label_3e5dd0;
        case 0x3e5dd4u: goto label_3e5dd4;
        case 0x3e5dd8u: goto label_3e5dd8;
        case 0x3e5ddcu: goto label_3e5ddc;
        case 0x3e5de0u: goto label_3e5de0;
        case 0x3e5de4u: goto label_3e5de4;
        case 0x3e5de8u: goto label_3e5de8;
        case 0x3e5decu: goto label_3e5dec;
        case 0x3e5df0u: goto label_3e5df0;
        case 0x3e5df4u: goto label_3e5df4;
        case 0x3e5df8u: goto label_3e5df8;
        case 0x3e5dfcu: goto label_3e5dfc;
        case 0x3e5e00u: goto label_3e5e00;
        case 0x3e5e04u: goto label_3e5e04;
        case 0x3e5e08u: goto label_3e5e08;
        case 0x3e5e0cu: goto label_3e5e0c;
        case 0x3e5e10u: goto label_3e5e10;
        case 0x3e5e14u: goto label_3e5e14;
        case 0x3e5e18u: goto label_3e5e18;
        case 0x3e5e1cu: goto label_3e5e1c;
        case 0x3e5e20u: goto label_3e5e20;
        case 0x3e5e24u: goto label_3e5e24;
        case 0x3e5e28u: goto label_3e5e28;
        case 0x3e5e2cu: goto label_3e5e2c;
        case 0x3e5e30u: goto label_3e5e30;
        case 0x3e5e34u: goto label_3e5e34;
        case 0x3e5e38u: goto label_3e5e38;
        case 0x3e5e3cu: goto label_3e5e3c;
        case 0x3e5e40u: goto label_3e5e40;
        case 0x3e5e44u: goto label_3e5e44;
        case 0x3e5e48u: goto label_3e5e48;
        case 0x3e5e4cu: goto label_3e5e4c;
        case 0x3e5e50u: goto label_3e5e50;
        case 0x3e5e54u: goto label_3e5e54;
        case 0x3e5e58u: goto label_3e5e58;
        case 0x3e5e5cu: goto label_3e5e5c;
        case 0x3e5e60u: goto label_3e5e60;
        case 0x3e5e64u: goto label_3e5e64;
        case 0x3e5e68u: goto label_3e5e68;
        case 0x3e5e6cu: goto label_3e5e6c;
        case 0x3e5e70u: goto label_3e5e70;
        case 0x3e5e74u: goto label_3e5e74;
        case 0x3e5e78u: goto label_3e5e78;
        case 0x3e5e7cu: goto label_3e5e7c;
        case 0x3e5e80u: goto label_3e5e80;
        case 0x3e5e84u: goto label_3e5e84;
        case 0x3e5e88u: goto label_3e5e88;
        case 0x3e5e8cu: goto label_3e5e8c;
        case 0x3e5e90u: goto label_3e5e90;
        case 0x3e5e94u: goto label_3e5e94;
        case 0x3e5e98u: goto label_3e5e98;
        case 0x3e5e9cu: goto label_3e5e9c;
        case 0x3e5ea0u: goto label_3e5ea0;
        case 0x3e5ea4u: goto label_3e5ea4;
        case 0x3e5ea8u: goto label_3e5ea8;
        case 0x3e5eacu: goto label_3e5eac;
        case 0x3e5eb0u: goto label_3e5eb0;
        case 0x3e5eb4u: goto label_3e5eb4;
        case 0x3e5eb8u: goto label_3e5eb8;
        case 0x3e5ebcu: goto label_3e5ebc;
        case 0x3e5ec0u: goto label_3e5ec0;
        case 0x3e5ec4u: goto label_3e5ec4;
        case 0x3e5ec8u: goto label_3e5ec8;
        case 0x3e5eccu: goto label_3e5ecc;
        case 0x3e5ed0u: goto label_3e5ed0;
        case 0x3e5ed4u: goto label_3e5ed4;
        case 0x3e5ed8u: goto label_3e5ed8;
        case 0x3e5edcu: goto label_3e5edc;
        case 0x3e5ee0u: goto label_3e5ee0;
        case 0x3e5ee4u: goto label_3e5ee4;
        case 0x3e5ee8u: goto label_3e5ee8;
        case 0x3e5eecu: goto label_3e5eec;
        case 0x3e5ef0u: goto label_3e5ef0;
        case 0x3e5ef4u: goto label_3e5ef4;
        case 0x3e5ef8u: goto label_3e5ef8;
        case 0x3e5efcu: goto label_3e5efc;
        case 0x3e5f00u: goto label_3e5f00;
        case 0x3e5f04u: goto label_3e5f04;
        case 0x3e5f08u: goto label_3e5f08;
        case 0x3e5f0cu: goto label_3e5f0c;
        case 0x3e5f10u: goto label_3e5f10;
        case 0x3e5f14u: goto label_3e5f14;
        case 0x3e5f18u: goto label_3e5f18;
        case 0x3e5f1cu: goto label_3e5f1c;
        case 0x3e5f20u: goto label_3e5f20;
        case 0x3e5f24u: goto label_3e5f24;
        case 0x3e5f28u: goto label_3e5f28;
        case 0x3e5f2cu: goto label_3e5f2c;
        case 0x3e5f30u: goto label_3e5f30;
        case 0x3e5f34u: goto label_3e5f34;
        case 0x3e5f38u: goto label_3e5f38;
        case 0x3e5f3cu: goto label_3e5f3c;
        case 0x3e5f40u: goto label_3e5f40;
        case 0x3e5f44u: goto label_3e5f44;
        case 0x3e5f48u: goto label_3e5f48;
        case 0x3e5f4cu: goto label_3e5f4c;
        case 0x3e5f50u: goto label_3e5f50;
        case 0x3e5f54u: goto label_3e5f54;
        case 0x3e5f58u: goto label_3e5f58;
        case 0x3e5f5cu: goto label_3e5f5c;
        case 0x3e5f60u: goto label_3e5f60;
        case 0x3e5f64u: goto label_3e5f64;
        case 0x3e5f68u: goto label_3e5f68;
        case 0x3e5f6cu: goto label_3e5f6c;
        case 0x3e5f70u: goto label_3e5f70;
        case 0x3e5f74u: goto label_3e5f74;
        case 0x3e5f78u: goto label_3e5f78;
        case 0x3e5f7cu: goto label_3e5f7c;
        case 0x3e5f80u: goto label_3e5f80;
        case 0x3e5f84u: goto label_3e5f84;
        case 0x3e5f88u: goto label_3e5f88;
        case 0x3e5f8cu: goto label_3e5f8c;
        case 0x3e5f90u: goto label_3e5f90;
        case 0x3e5f94u: goto label_3e5f94;
        case 0x3e5f98u: goto label_3e5f98;
        case 0x3e5f9cu: goto label_3e5f9c;
        case 0x3e5fa0u: goto label_3e5fa0;
        case 0x3e5fa4u: goto label_3e5fa4;
        case 0x3e5fa8u: goto label_3e5fa8;
        case 0x3e5facu: goto label_3e5fac;
        case 0x3e5fb0u: goto label_3e5fb0;
        case 0x3e5fb4u: goto label_3e5fb4;
        case 0x3e5fb8u: goto label_3e5fb8;
        case 0x3e5fbcu: goto label_3e5fbc;
        case 0x3e5fc0u: goto label_3e5fc0;
        case 0x3e5fc4u: goto label_3e5fc4;
        case 0x3e5fc8u: goto label_3e5fc8;
        case 0x3e5fccu: goto label_3e5fcc;
        case 0x3e5fd0u: goto label_3e5fd0;
        case 0x3e5fd4u: goto label_3e5fd4;
        case 0x3e5fd8u: goto label_3e5fd8;
        case 0x3e5fdcu: goto label_3e5fdc;
        case 0x3e5fe0u: goto label_3e5fe0;
        case 0x3e5fe4u: goto label_3e5fe4;
        case 0x3e5fe8u: goto label_3e5fe8;
        case 0x3e5fecu: goto label_3e5fec;
        case 0x3e5ff0u: goto label_3e5ff0;
        case 0x3e5ff4u: goto label_3e5ff4;
        case 0x3e5ff8u: goto label_3e5ff8;
        case 0x3e5ffcu: goto label_3e5ffc;
        case 0x3e6000u: goto label_3e6000;
        case 0x3e6004u: goto label_3e6004;
        case 0x3e6008u: goto label_3e6008;
        case 0x3e600cu: goto label_3e600c;
        case 0x3e6010u: goto label_3e6010;
        case 0x3e6014u: goto label_3e6014;
        case 0x3e6018u: goto label_3e6018;
        case 0x3e601cu: goto label_3e601c;
        case 0x3e6020u: goto label_3e6020;
        case 0x3e6024u: goto label_3e6024;
        case 0x3e6028u: goto label_3e6028;
        case 0x3e602cu: goto label_3e602c;
        case 0x3e6030u: goto label_3e6030;
        case 0x3e6034u: goto label_3e6034;
        case 0x3e6038u: goto label_3e6038;
        case 0x3e603cu: goto label_3e603c;
        case 0x3e6040u: goto label_3e6040;
        case 0x3e6044u: goto label_3e6044;
        case 0x3e6048u: goto label_3e6048;
        case 0x3e604cu: goto label_3e604c;
        case 0x3e6050u: goto label_3e6050;
        case 0x3e6054u: goto label_3e6054;
        case 0x3e6058u: goto label_3e6058;
        case 0x3e605cu: goto label_3e605c;
        case 0x3e6060u: goto label_3e6060;
        case 0x3e6064u: goto label_3e6064;
        case 0x3e6068u: goto label_3e6068;
        case 0x3e606cu: goto label_3e606c;
        case 0x3e6070u: goto label_3e6070;
        case 0x3e6074u: goto label_3e6074;
        case 0x3e6078u: goto label_3e6078;
        case 0x3e607cu: goto label_3e607c;
        case 0x3e6080u: goto label_3e6080;
        case 0x3e6084u: goto label_3e6084;
        case 0x3e6088u: goto label_3e6088;
        case 0x3e608cu: goto label_3e608c;
        case 0x3e6090u: goto label_3e6090;
        case 0x3e6094u: goto label_3e6094;
        case 0x3e6098u: goto label_3e6098;
        case 0x3e609cu: goto label_3e609c;
        case 0x3e60a0u: goto label_3e60a0;
        case 0x3e60a4u: goto label_3e60a4;
        case 0x3e60a8u: goto label_3e60a8;
        case 0x3e60acu: goto label_3e60ac;
        case 0x3e60b0u: goto label_3e60b0;
        case 0x3e60b4u: goto label_3e60b4;
        case 0x3e60b8u: goto label_3e60b8;
        case 0x3e60bcu: goto label_3e60bc;
        case 0x3e60c0u: goto label_3e60c0;
        case 0x3e60c4u: goto label_3e60c4;
        case 0x3e60c8u: goto label_3e60c8;
        case 0x3e60ccu: goto label_3e60cc;
        case 0x3e60d0u: goto label_3e60d0;
        case 0x3e60d4u: goto label_3e60d4;
        case 0x3e60d8u: goto label_3e60d8;
        case 0x3e60dcu: goto label_3e60dc;
        case 0x3e60e0u: goto label_3e60e0;
        case 0x3e60e4u: goto label_3e60e4;
        case 0x3e60e8u: goto label_3e60e8;
        case 0x3e60ecu: goto label_3e60ec;
        case 0x3e60f0u: goto label_3e60f0;
        case 0x3e60f4u: goto label_3e60f4;
        case 0x3e60f8u: goto label_3e60f8;
        case 0x3e60fcu: goto label_3e60fc;
        case 0x3e6100u: goto label_3e6100;
        case 0x3e6104u: goto label_3e6104;
        case 0x3e6108u: goto label_3e6108;
        case 0x3e610cu: goto label_3e610c;
        case 0x3e6110u: goto label_3e6110;
        case 0x3e6114u: goto label_3e6114;
        case 0x3e6118u: goto label_3e6118;
        case 0x3e611cu: goto label_3e611c;
        case 0x3e6120u: goto label_3e6120;
        case 0x3e6124u: goto label_3e6124;
        case 0x3e6128u: goto label_3e6128;
        case 0x3e612cu: goto label_3e612c;
        case 0x3e6130u: goto label_3e6130;
        case 0x3e6134u: goto label_3e6134;
        case 0x3e6138u: goto label_3e6138;
        case 0x3e613cu: goto label_3e613c;
        case 0x3e6140u: goto label_3e6140;
        case 0x3e6144u: goto label_3e6144;
        case 0x3e6148u: goto label_3e6148;
        case 0x3e614cu: goto label_3e614c;
        case 0x3e6150u: goto label_3e6150;
        case 0x3e6154u: goto label_3e6154;
        case 0x3e6158u: goto label_3e6158;
        case 0x3e615cu: goto label_3e615c;
        case 0x3e6160u: goto label_3e6160;
        case 0x3e6164u: goto label_3e6164;
        case 0x3e6168u: goto label_3e6168;
        case 0x3e616cu: goto label_3e616c;
        case 0x3e6170u: goto label_3e6170;
        case 0x3e6174u: goto label_3e6174;
        case 0x3e6178u: goto label_3e6178;
        case 0x3e617cu: goto label_3e617c;
        case 0x3e6180u: goto label_3e6180;
        case 0x3e6184u: goto label_3e6184;
        case 0x3e6188u: goto label_3e6188;
        case 0x3e618cu: goto label_3e618c;
        case 0x3e6190u: goto label_3e6190;
        case 0x3e6194u: goto label_3e6194;
        case 0x3e6198u: goto label_3e6198;
        case 0x3e619cu: goto label_3e619c;
        case 0x3e61a0u: goto label_3e61a0;
        case 0x3e61a4u: goto label_3e61a4;
        case 0x3e61a8u: goto label_3e61a8;
        case 0x3e61acu: goto label_3e61ac;
        case 0x3e61b0u: goto label_3e61b0;
        case 0x3e61b4u: goto label_3e61b4;
        case 0x3e61b8u: goto label_3e61b8;
        case 0x3e61bcu: goto label_3e61bc;
        case 0x3e61c0u: goto label_3e61c0;
        case 0x3e61c4u: goto label_3e61c4;
        case 0x3e61c8u: goto label_3e61c8;
        case 0x3e61ccu: goto label_3e61cc;
        case 0x3e61d0u: goto label_3e61d0;
        case 0x3e61d4u: goto label_3e61d4;
        case 0x3e61d8u: goto label_3e61d8;
        case 0x3e61dcu: goto label_3e61dc;
        case 0x3e61e0u: goto label_3e61e0;
        case 0x3e61e4u: goto label_3e61e4;
        case 0x3e61e8u: goto label_3e61e8;
        case 0x3e61ecu: goto label_3e61ec;
        case 0x3e61f0u: goto label_3e61f0;
        case 0x3e61f4u: goto label_3e61f4;
        case 0x3e61f8u: goto label_3e61f8;
        case 0x3e61fcu: goto label_3e61fc;
        case 0x3e6200u: goto label_3e6200;
        case 0x3e6204u: goto label_3e6204;
        case 0x3e6208u: goto label_3e6208;
        case 0x3e620cu: goto label_3e620c;
        case 0x3e6210u: goto label_3e6210;
        case 0x3e6214u: goto label_3e6214;
        case 0x3e6218u: goto label_3e6218;
        case 0x3e621cu: goto label_3e621c;
        case 0x3e6220u: goto label_3e6220;
        case 0x3e6224u: goto label_3e6224;
        case 0x3e6228u: goto label_3e6228;
        case 0x3e622cu: goto label_3e622c;
        case 0x3e6230u: goto label_3e6230;
        case 0x3e6234u: goto label_3e6234;
        case 0x3e6238u: goto label_3e6238;
        case 0x3e623cu: goto label_3e623c;
        case 0x3e6240u: goto label_3e6240;
        case 0x3e6244u: goto label_3e6244;
        case 0x3e6248u: goto label_3e6248;
        case 0x3e624cu: goto label_3e624c;
        case 0x3e6250u: goto label_3e6250;
        case 0x3e6254u: goto label_3e6254;
        case 0x3e6258u: goto label_3e6258;
        case 0x3e625cu: goto label_3e625c;
        case 0x3e6260u: goto label_3e6260;
        case 0x3e6264u: goto label_3e6264;
        case 0x3e6268u: goto label_3e6268;
        case 0x3e626cu: goto label_3e626c;
        case 0x3e6270u: goto label_3e6270;
        case 0x3e6274u: goto label_3e6274;
        case 0x3e6278u: goto label_3e6278;
        case 0x3e627cu: goto label_3e627c;
        case 0x3e6280u: goto label_3e6280;
        case 0x3e6284u: goto label_3e6284;
        case 0x3e6288u: goto label_3e6288;
        case 0x3e628cu: goto label_3e628c;
        case 0x3e6290u: goto label_3e6290;
        case 0x3e6294u: goto label_3e6294;
        case 0x3e6298u: goto label_3e6298;
        case 0x3e629cu: goto label_3e629c;
        case 0x3e62a0u: goto label_3e62a0;
        case 0x3e62a4u: goto label_3e62a4;
        case 0x3e62a8u: goto label_3e62a8;
        case 0x3e62acu: goto label_3e62ac;
        case 0x3e62b0u: goto label_3e62b0;
        case 0x3e62b4u: goto label_3e62b4;
        case 0x3e62b8u: goto label_3e62b8;
        case 0x3e62bcu: goto label_3e62bc;
        case 0x3e62c0u: goto label_3e62c0;
        case 0x3e62c4u: goto label_3e62c4;
        case 0x3e62c8u: goto label_3e62c8;
        case 0x3e62ccu: goto label_3e62cc;
        case 0x3e62d0u: goto label_3e62d0;
        case 0x3e62d4u: goto label_3e62d4;
        case 0x3e62d8u: goto label_3e62d8;
        case 0x3e62dcu: goto label_3e62dc;
        case 0x3e62e0u: goto label_3e62e0;
        case 0x3e62e4u: goto label_3e62e4;
        case 0x3e62e8u: goto label_3e62e8;
        case 0x3e62ecu: goto label_3e62ec;
        case 0x3e62f0u: goto label_3e62f0;
        case 0x3e62f4u: goto label_3e62f4;
        case 0x3e62f8u: goto label_3e62f8;
        case 0x3e62fcu: goto label_3e62fc;
        case 0x3e6300u: goto label_3e6300;
        case 0x3e6304u: goto label_3e6304;
        case 0x3e6308u: goto label_3e6308;
        case 0x3e630cu: goto label_3e630c;
        case 0x3e6310u: goto label_3e6310;
        case 0x3e6314u: goto label_3e6314;
        case 0x3e6318u: goto label_3e6318;
        case 0x3e631cu: goto label_3e631c;
        case 0x3e6320u: goto label_3e6320;
        case 0x3e6324u: goto label_3e6324;
        case 0x3e6328u: goto label_3e6328;
        case 0x3e632cu: goto label_3e632c;
        case 0x3e6330u: goto label_3e6330;
        case 0x3e6334u: goto label_3e6334;
        case 0x3e6338u: goto label_3e6338;
        case 0x3e633cu: goto label_3e633c;
        case 0x3e6340u: goto label_3e6340;
        case 0x3e6344u: goto label_3e6344;
        case 0x3e6348u: goto label_3e6348;
        case 0x3e634cu: goto label_3e634c;
        case 0x3e6350u: goto label_3e6350;
        case 0x3e6354u: goto label_3e6354;
        case 0x3e6358u: goto label_3e6358;
        case 0x3e635cu: goto label_3e635c;
        case 0x3e6360u: goto label_3e6360;
        case 0x3e6364u: goto label_3e6364;
        case 0x3e6368u: goto label_3e6368;
        case 0x3e636cu: goto label_3e636c;
        case 0x3e6370u: goto label_3e6370;
        case 0x3e6374u: goto label_3e6374;
        case 0x3e6378u: goto label_3e6378;
        case 0x3e637cu: goto label_3e637c;
        case 0x3e6380u: goto label_3e6380;
        case 0x3e6384u: goto label_3e6384;
        case 0x3e6388u: goto label_3e6388;
        case 0x3e638cu: goto label_3e638c;
        case 0x3e6390u: goto label_3e6390;
        case 0x3e6394u: goto label_3e6394;
        case 0x3e6398u: goto label_3e6398;
        case 0x3e639cu: goto label_3e639c;
        case 0x3e63a0u: goto label_3e63a0;
        case 0x3e63a4u: goto label_3e63a4;
        case 0x3e63a8u: goto label_3e63a8;
        case 0x3e63acu: goto label_3e63ac;
        case 0x3e63b0u: goto label_3e63b0;
        case 0x3e63b4u: goto label_3e63b4;
        case 0x3e63b8u: goto label_3e63b8;
        case 0x3e63bcu: goto label_3e63bc;
        case 0x3e63c0u: goto label_3e63c0;
        case 0x3e63c4u: goto label_3e63c4;
        case 0x3e63c8u: goto label_3e63c8;
        case 0x3e63ccu: goto label_3e63cc;
        case 0x3e63d0u: goto label_3e63d0;
        case 0x3e63d4u: goto label_3e63d4;
        case 0x3e63d8u: goto label_3e63d8;
        case 0x3e63dcu: goto label_3e63dc;
        case 0x3e63e0u: goto label_3e63e0;
        case 0x3e63e4u: goto label_3e63e4;
        case 0x3e63e8u: goto label_3e63e8;
        case 0x3e63ecu: goto label_3e63ec;
        case 0x3e63f0u: goto label_3e63f0;
        case 0x3e63f4u: goto label_3e63f4;
        case 0x3e63f8u: goto label_3e63f8;
        case 0x3e63fcu: goto label_3e63fc;
        case 0x3e6400u: goto label_3e6400;
        case 0x3e6404u: goto label_3e6404;
        case 0x3e6408u: goto label_3e6408;
        case 0x3e640cu: goto label_3e640c;
        case 0x3e6410u: goto label_3e6410;
        case 0x3e6414u: goto label_3e6414;
        case 0x3e6418u: goto label_3e6418;
        case 0x3e641cu: goto label_3e641c;
        case 0x3e6420u: goto label_3e6420;
        case 0x3e6424u: goto label_3e6424;
        case 0x3e6428u: goto label_3e6428;
        case 0x3e642cu: goto label_3e642c;
        case 0x3e6430u: goto label_3e6430;
        case 0x3e6434u: goto label_3e6434;
        case 0x3e6438u: goto label_3e6438;
        case 0x3e643cu: goto label_3e643c;
        case 0x3e6440u: goto label_3e6440;
        case 0x3e6444u: goto label_3e6444;
        case 0x3e6448u: goto label_3e6448;
        case 0x3e644cu: goto label_3e644c;
        case 0x3e6450u: goto label_3e6450;
        case 0x3e6454u: goto label_3e6454;
        case 0x3e6458u: goto label_3e6458;
        case 0x3e645cu: goto label_3e645c;
        case 0x3e6460u: goto label_3e6460;
        case 0x3e6464u: goto label_3e6464;
        case 0x3e6468u: goto label_3e6468;
        case 0x3e646cu: goto label_3e646c;
        case 0x3e6470u: goto label_3e6470;
        case 0x3e6474u: goto label_3e6474;
        case 0x3e6478u: goto label_3e6478;
        case 0x3e647cu: goto label_3e647c;
        case 0x3e6480u: goto label_3e6480;
        case 0x3e6484u: goto label_3e6484;
        case 0x3e6488u: goto label_3e6488;
        case 0x3e648cu: goto label_3e648c;
        case 0x3e6490u: goto label_3e6490;
        case 0x3e6494u: goto label_3e6494;
        case 0x3e6498u: goto label_3e6498;
        case 0x3e649cu: goto label_3e649c;
        case 0x3e64a0u: goto label_3e64a0;
        case 0x3e64a4u: goto label_3e64a4;
        case 0x3e64a8u: goto label_3e64a8;
        case 0x3e64acu: goto label_3e64ac;
        case 0x3e64b0u: goto label_3e64b0;
        case 0x3e64b4u: goto label_3e64b4;
        case 0x3e64b8u: goto label_3e64b8;
        case 0x3e64bcu: goto label_3e64bc;
        case 0x3e64c0u: goto label_3e64c0;
        case 0x3e64c4u: goto label_3e64c4;
        case 0x3e64c8u: goto label_3e64c8;
        case 0x3e64ccu: goto label_3e64cc;
        case 0x3e64d0u: goto label_3e64d0;
        case 0x3e64d4u: goto label_3e64d4;
        case 0x3e64d8u: goto label_3e64d8;
        case 0x3e64dcu: goto label_3e64dc;
        case 0x3e64e0u: goto label_3e64e0;
        case 0x3e64e4u: goto label_3e64e4;
        case 0x3e64e8u: goto label_3e64e8;
        case 0x3e64ecu: goto label_3e64ec;
        case 0x3e64f0u: goto label_3e64f0;
        case 0x3e64f4u: goto label_3e64f4;
        case 0x3e64f8u: goto label_3e64f8;
        case 0x3e64fcu: goto label_3e64fc;
        case 0x3e6500u: goto label_3e6500;
        case 0x3e6504u: goto label_3e6504;
        case 0x3e6508u: goto label_3e6508;
        case 0x3e650cu: goto label_3e650c;
        case 0x3e6510u: goto label_3e6510;
        case 0x3e6514u: goto label_3e6514;
        case 0x3e6518u: goto label_3e6518;
        case 0x3e651cu: goto label_3e651c;
        case 0x3e6520u: goto label_3e6520;
        case 0x3e6524u: goto label_3e6524;
        case 0x3e6528u: goto label_3e6528;
        case 0x3e652cu: goto label_3e652c;
        case 0x3e6530u: goto label_3e6530;
        case 0x3e6534u: goto label_3e6534;
        case 0x3e6538u: goto label_3e6538;
        case 0x3e653cu: goto label_3e653c;
        case 0x3e6540u: goto label_3e6540;
        case 0x3e6544u: goto label_3e6544;
        case 0x3e6548u: goto label_3e6548;
        case 0x3e654cu: goto label_3e654c;
        case 0x3e6550u: goto label_3e6550;
        case 0x3e6554u: goto label_3e6554;
        case 0x3e6558u: goto label_3e6558;
        case 0x3e655cu: goto label_3e655c;
        case 0x3e6560u: goto label_3e6560;
        case 0x3e6564u: goto label_3e6564;
        case 0x3e6568u: goto label_3e6568;
        case 0x3e656cu: goto label_3e656c;
        case 0x3e6570u: goto label_3e6570;
        case 0x3e6574u: goto label_3e6574;
        case 0x3e6578u: goto label_3e6578;
        case 0x3e657cu: goto label_3e657c;
        case 0x3e6580u: goto label_3e6580;
        case 0x3e6584u: goto label_3e6584;
        case 0x3e6588u: goto label_3e6588;
        case 0x3e658cu: goto label_3e658c;
        case 0x3e6590u: goto label_3e6590;
        case 0x3e6594u: goto label_3e6594;
        case 0x3e6598u: goto label_3e6598;
        case 0x3e659cu: goto label_3e659c;
        case 0x3e65a0u: goto label_3e65a0;
        case 0x3e65a4u: goto label_3e65a4;
        case 0x3e65a8u: goto label_3e65a8;
        case 0x3e65acu: goto label_3e65ac;
        case 0x3e65b0u: goto label_3e65b0;
        case 0x3e65b4u: goto label_3e65b4;
        case 0x3e65b8u: goto label_3e65b8;
        case 0x3e65bcu: goto label_3e65bc;
        case 0x3e65c0u: goto label_3e65c0;
        case 0x3e65c4u: goto label_3e65c4;
        case 0x3e65c8u: goto label_3e65c8;
        case 0x3e65ccu: goto label_3e65cc;
        case 0x3e65d0u: goto label_3e65d0;
        case 0x3e65d4u: goto label_3e65d4;
        case 0x3e65d8u: goto label_3e65d8;
        case 0x3e65dcu: goto label_3e65dc;
        case 0x3e65e0u: goto label_3e65e0;
        case 0x3e65e4u: goto label_3e65e4;
        case 0x3e65e8u: goto label_3e65e8;
        case 0x3e65ecu: goto label_3e65ec;
        case 0x3e65f0u: goto label_3e65f0;
        case 0x3e65f4u: goto label_3e65f4;
        case 0x3e65f8u: goto label_3e65f8;
        case 0x3e65fcu: goto label_3e65fc;
        case 0x3e6600u: goto label_3e6600;
        case 0x3e6604u: goto label_3e6604;
        case 0x3e6608u: goto label_3e6608;
        case 0x3e660cu: goto label_3e660c;
        case 0x3e6610u: goto label_3e6610;
        case 0x3e6614u: goto label_3e6614;
        case 0x3e6618u: goto label_3e6618;
        case 0x3e661cu: goto label_3e661c;
        case 0x3e6620u: goto label_3e6620;
        case 0x3e6624u: goto label_3e6624;
        case 0x3e6628u: goto label_3e6628;
        case 0x3e662cu: goto label_3e662c;
        case 0x3e6630u: goto label_3e6630;
        case 0x3e6634u: goto label_3e6634;
        case 0x3e6638u: goto label_3e6638;
        case 0x3e663cu: goto label_3e663c;
        case 0x3e6640u: goto label_3e6640;
        case 0x3e6644u: goto label_3e6644;
        case 0x3e6648u: goto label_3e6648;
        case 0x3e664cu: goto label_3e664c;
        case 0x3e6650u: goto label_3e6650;
        case 0x3e6654u: goto label_3e6654;
        case 0x3e6658u: goto label_3e6658;
        case 0x3e665cu: goto label_3e665c;
        case 0x3e6660u: goto label_3e6660;
        case 0x3e6664u: goto label_3e6664;
        case 0x3e6668u: goto label_3e6668;
        case 0x3e666cu: goto label_3e666c;
        case 0x3e6670u: goto label_3e6670;
        case 0x3e6674u: goto label_3e6674;
        case 0x3e6678u: goto label_3e6678;
        case 0x3e667cu: goto label_3e667c;
        case 0x3e6680u: goto label_3e6680;
        case 0x3e6684u: goto label_3e6684;
        case 0x3e6688u: goto label_3e6688;
        case 0x3e668cu: goto label_3e668c;
        case 0x3e6690u: goto label_3e6690;
        case 0x3e6694u: goto label_3e6694;
        case 0x3e6698u: goto label_3e6698;
        case 0x3e669cu: goto label_3e669c;
        case 0x3e66a0u: goto label_3e66a0;
        case 0x3e66a4u: goto label_3e66a4;
        case 0x3e66a8u: goto label_3e66a8;
        case 0x3e66acu: goto label_3e66ac;
        case 0x3e66b0u: goto label_3e66b0;
        case 0x3e66b4u: goto label_3e66b4;
        case 0x3e66b8u: goto label_3e66b8;
        case 0x3e66bcu: goto label_3e66bc;
        case 0x3e66c0u: goto label_3e66c0;
        case 0x3e66c4u: goto label_3e66c4;
        case 0x3e66c8u: goto label_3e66c8;
        case 0x3e66ccu: goto label_3e66cc;
        case 0x3e66d0u: goto label_3e66d0;
        case 0x3e66d4u: goto label_3e66d4;
        case 0x3e66d8u: goto label_3e66d8;
        case 0x3e66dcu: goto label_3e66dc;
        case 0x3e66e0u: goto label_3e66e0;
        case 0x3e66e4u: goto label_3e66e4;
        case 0x3e66e8u: goto label_3e66e8;
        case 0x3e66ecu: goto label_3e66ec;
        case 0x3e66f0u: goto label_3e66f0;
        case 0x3e66f4u: goto label_3e66f4;
        case 0x3e66f8u: goto label_3e66f8;
        case 0x3e66fcu: goto label_3e66fc;
        case 0x3e6700u: goto label_3e6700;
        case 0x3e6704u: goto label_3e6704;
        case 0x3e6708u: goto label_3e6708;
        case 0x3e670cu: goto label_3e670c;
        case 0x3e6710u: goto label_3e6710;
        case 0x3e6714u: goto label_3e6714;
        case 0x3e6718u: goto label_3e6718;
        case 0x3e671cu: goto label_3e671c;
        case 0x3e6720u: goto label_3e6720;
        case 0x3e6724u: goto label_3e6724;
        case 0x3e6728u: goto label_3e6728;
        case 0x3e672cu: goto label_3e672c;
        case 0x3e6730u: goto label_3e6730;
        case 0x3e6734u: goto label_3e6734;
        case 0x3e6738u: goto label_3e6738;
        case 0x3e673cu: goto label_3e673c;
        case 0x3e6740u: goto label_3e6740;
        case 0x3e6744u: goto label_3e6744;
        case 0x3e6748u: goto label_3e6748;
        case 0x3e674cu: goto label_3e674c;
        case 0x3e6750u: goto label_3e6750;
        case 0x3e6754u: goto label_3e6754;
        case 0x3e6758u: goto label_3e6758;
        case 0x3e675cu: goto label_3e675c;
        default: break;
    }

    ctx->pc = 0x3e5368u;

label_3e5368:
    // 0x3e5368: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3e5368u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_3e536c:
    // 0x3e536c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3e536cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3e5370:
    // 0x3e5370: 0x8c8200e0  lw          $v0, 0xE0($a0)
    ctx->pc = 0x3e5370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 224)));
label_3e5374:
    // 0x3e5374: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_3e5378:
    if (ctx->pc == 0x3E5378u) {
        ctx->pc = 0x3E5378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5374u;
        // 0x3e5378: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E537Cu;
        goto label_3e537c;
    }
    ctx->pc = 0x3E5374u;
    {
        const bool branch_taken_0x3e5374 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e5374) {
            ctx->pc = 0x3E5378u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E5374u;
            // 0x3e5378: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E538Cu;
            goto label_3e538c;
        }
    }
    ctx->pc = 0x3E537Cu;
label_3e537c:
    // 0x3e537c: 0x40f809  jalr        $v0
label_3e5380:
    if (ctx->pc == 0x3E5380u) {
        ctx->pc = 0x3E5384u;
        goto label_3e5384;
    }
    ctx->pc = 0x3E537Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3E5384u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E537Cu, 0x3E5384u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3E5384u;
label_3e5384:
    // 0x3e5384: 0x10000004  b           . + 4 + (0x4 << 2)
label_3e5388:
    if (ctx->pc == 0x3E5388u) {
        ctx->pc = 0x3E5388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5384u;
        // 0x3e5388: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E538Cu;
        goto label_3e538c;
    }
    ctx->pc = 0x3E5384u;
    {
        const bool branch_taken_0x3e5384 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E5388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5384u;
        // 0x3e5388: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e5384) {
            ctx->pc = 0x3E5398u;
            goto label_3e5398;
        }
    }
    ctx->pc = 0x3E538Cu;
label_3e538c:
    // 0x3e538c: 0xc0f86f2  jal         func_3E1BC8
label_3e5390:
    if (ctx->pc == 0x3E5390u) {
        ctx->pc = 0x3E5390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E538Cu;
        // 0x3e5390: 0x24a5e6b8  addiu       $a1, $a1, -0x1948 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960824));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E5394u;
        goto label_3e5394;
    }
    ctx->pc = 0x3E538Cu;
    SET_GPR_U32(ctx, 31, 0x3E5394u);
    ctx->pc = 0x3E5390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E538Cu;
    // 0x3e5390: 0x24a5e6b8  addiu       $a1, $a1, -0x1948 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960824));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1BC8u, 0x3E538Cu, 0x3E5394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E5394u;
label_3e5394:
    // 0x3e5394: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3e5394u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3e5398:
    // 0x3e5398: 0x3e00008  jr          $ra
label_3e539c:
    if (ctx->pc == 0x3E539Cu) {
        ctx->pc = 0x3E539Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5398u;
        // 0x3e539c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E53A0u;
        goto label_3e53a0;
    }
    ctx->pc = 0x3E5398u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E539Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5398u;
        // 0x3e539c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E5398u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E53A0u;
label_3e53a0:
    // 0x3e53a0: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x3e53a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
label_3e53a4:
    // 0x3e53a4: 0x80702d  daddu       $t6, $a0, $zero
    ctx->pc = 0x3e53a4u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3e53a8:
    // 0x3e53a8: 0x7fb00100  sq          $s0, 0x100($sp)
    ctx->pc = 0x3e53a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 16));
label_3e53ac:
    // 0x3e53ac: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x3e53acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_3e53b0:
    // 0x3e53b0: 0x7fb100f0  sq          $s1, 0xF0($sp)
    ctx->pc = 0x3e53b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 17));
label_3e53b4:
    // 0x3e53b4: 0xc0c82d  daddu       $t9, $a2, $zero
    ctx->pc = 0x3e53b4u;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3e53b8:
    // 0x3e53b8: 0x7fb200e0  sq          $s2, 0xE0($sp)
    ctx->pc = 0x3e53b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 18));
label_3e53bc:
    // 0x3e53bc: 0x7fb300d0  sq          $s3, 0xD0($sp)
    ctx->pc = 0x3e53bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 19));
label_3e53c0:
    // 0x3e53c0: 0x7fb400c0  sq          $s4, 0xC0($sp)
    ctx->pc = 0x3e53c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 20));
label_3e53c4:
    // 0x3e53c4: 0x7fb500b0  sq          $s5, 0xB0($sp)
    ctx->pc = 0x3e53c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 21));
label_3e53c8:
    // 0x3e53c8: 0x7fb600a0  sq          $s6, 0xA0($sp)
    ctx->pc = 0x3e53c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 22));
label_3e53cc:
    // 0x3e53cc: 0x7fb70090  sq          $s7, 0x90($sp)
    ctx->pc = 0x3e53ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 23));
label_3e53d0:
    // 0x3e53d0: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x3e53d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_3e53d4:
    // 0x3e53d4: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x3e53d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_3e53d8:
    // 0x3e53d8: 0xddc20108  ld          $v0, 0x108($t6)
    ctx->pc = 0x3e53d8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 14), 264)));
label_3e53dc:
    // 0x3e53dc: 0xafa90018  sw          $t1, 0x18($sp)
    ctx->pc = 0x3e53dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 9));
label_3e53e0:
    // 0x3e53e0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3e53e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_3e53e4:
    // 0x3e53e4: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x3e53e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
label_3e53e8:
    // 0x3e53e8: 0xafa70014  sw          $a3, 0x14($sp)
    ctx->pc = 0x3e53e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 7));
label_3e53ec:
    // 0x3e53ec: 0xfdc20108  sd          $v0, 0x108($t6)
    ctx->pc = 0x3e53ecu;
    WRITE64(ADD32(GPR_U32(ctx, 14), 264), GPR_U64(ctx, 2));
label_3e53f0:
    // 0x3e53f0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x3e53f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_3e53f4:
    // 0x3e53f4: 0x14400038  bnez        $v0, . + 4 + (0x38 << 2)
label_3e53f8:
    if (ctx->pc == 0x3E53F8u) {
        ctx->pc = 0x3E53F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E53F4u;
        // 0x3e53f8: 0x100802d  daddu       $s0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E53FCu;
        goto label_3e53fc;
    }
    ctx->pc = 0x3E53F4u;
    {
        const bool branch_taken_0x3e53f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E53F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E53F4u;
        // 0x3e53f8: 0x100802d  daddu       $s0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e53f4) {
            ctx->pc = 0x3E54D8u;
            goto label_3e54d8;
        }
    }
    ctx->pc = 0x3E53FCu;
label_3e53fc:
    // 0x3e53fc: 0x19283c  dsll32      $a1, $t9, 0
    ctx->pc = 0x3e53fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 25) << (32 + 0));
label_3e5400:
    // 0x3e5400: 0x7fae0050  sq          $t6, 0x50($sp)
    ctx->pc = 0x3e5400u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 14));
label_3e5404:
    // 0x3e5404: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x3e5404u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
label_3e5408:
    // 0x3e5408: 0xc0f8ae2  jal         func_3E2B88
label_3e540c:
    if (ctx->pc == 0x3E540Cu) {
        ctx->pc = 0x3E540Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5408u;
        // 0x3e540c: 0x7fb90060  sq          $t9, 0x60($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 25));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E5410u;
        goto label_3e5410;
    }
    ctx->pc = 0x3E5408u;
    SET_GPR_U32(ctx, 31, 0x3E5410u);
    ctx->pc = 0x3E540Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E5408u;
    // 0x3e540c: 0x7fb90060  sq          $t9, 0x60($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 25));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2B88u, 0x3E5408u, 0x3E5410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E5410u;
label_3e5410:
    // 0x3e5410: 0x7bae0050  lq          $t6, 0x50($sp)
    ctx->pc = 0x3e5410u;
    SET_GPR_VEC(ctx, 14, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3e5414:
    // 0x3e5414: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3e5414u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e5418:
    // 0x3e5418: 0xadc40294  sw          $a0, 0x294($t6)
    ctx->pc = 0x3e5418u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 660), GPR_U32(ctx, 4));
label_3e541c:
    // 0x3e541c: 0x7bb90060  lq          $t9, 0x60($sp)
    ctx->pc = 0x3e541cu;
    SET_GPR_VEC(ctx, 25, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3e5420:
    // 0x3e5420: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3e5420u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_3e5424:
    // 0x3e5424: 0x79102a  slt         $v0, $v1, $t9
    ctx->pc = 0x3e5424u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 25)) ? 1 : 0);
label_3e5428:
    // 0x3e5428: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
label_3e542c:
    if (ctx->pc == 0x3E542Cu) {
        ctx->pc = 0x3E542Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5428u;
        // 0x3e542c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E5430u;
        goto label_3e5430;
    }
    ctx->pc = 0x3E5428u;
    {
        const bool branch_taken_0x3e5428 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E542Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5428u;
        // 0x3e542c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e5428) {
            ctx->pc = 0x3E54D8u;
            goto label_3e54d8;
        }
    }
    ctx->pc = 0x3E5430u;
label_3e5430:
    // 0x3e5430: 0x1b20000f  blez        $t9, . + 4 + (0xF << 2)
label_3e5434:
    if (ctx->pc == 0x3E5434u) {
        ctx->pc = 0x3E5434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5430u;
        // 0x3e5434: 0x33230003  andi        $v1, $t9, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 25) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E5438u;
        goto label_3e5438;
    }
    ctx->pc = 0x3E5430u;
    {
        const bool branch_taken_0x3e5430 = (GPR_S32(ctx, 25) <= 0);
        ctx->pc = 0x3E5434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5430u;
        // 0x3e5434: 0x33230003  andi        $v1, $t9, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 25) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e5430) {
            ctx->pc = 0x3E5470u;
            goto label_3e5470;
        }
    }
    ctx->pc = 0x3E5438u;
label_3e5438:
    // 0x3e5438: 0x50600016  beql        $v1, $zero, . + 4 + (0x16 << 2)
label_3e543c:
    if (ctx->pc == 0x3E543Cu) {
        ctx->pc = 0x3E543Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5438u;
        // 0x3e543c: 0x8dc20294  lw          $v0, 0x294($t6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 660)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E5440u;
        goto label_3e5440;
    }
    ctx->pc = 0x3E5438u;
    {
        const bool branch_taken_0x3e5438 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e5438) {
            ctx->pc = 0x3E543Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E5438u;
            // 0x3e543c: 0x8dc20294  lw          $v0, 0x294($t6) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 660)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E5494u;
            goto label_3e5494;
        }
    }
    ctx->pc = 0x3E5440u;
label_3e5440:
    // 0x3e5440: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x3e5440u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_3e5444:
    // 0x3e5444: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
label_3e5448:
    if (ctx->pc == 0x3E5448u) {
        ctx->pc = 0x3E5448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5444u;
        // 0x3e5448: 0x8dc20294  lw          $v0, 0x294($t6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 660)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E544Cu;
        goto label_3e544c;
    }
    ctx->pc = 0x3E5444u;
    {
        const bool branch_taken_0x3e5444 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e5444) {
            ctx->pc = 0x3E5448u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E5444u;
            // 0x3e5448: 0x8dc20294  lw          $v0, 0x294($t6) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 660)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E5474u;
            goto label_3e5474;
        }
    }
    ctx->pc = 0x3E544Cu;
label_3e544c:
    // 0x3e544c: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x3e544cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_3e5450:
    // 0x3e5450: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_3e5454:
    if (ctx->pc == 0x3E5454u) {
        ctx->pc = 0x3E5454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5450u;
        // 0x3e5454: 0x8dc20294  lw          $v0, 0x294($t6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 660)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E5458u;
        goto label_3e5458;
    }
    ctx->pc = 0x3E5450u;
    {
        const bool branch_taken_0x3e5450 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e5450) {
            ctx->pc = 0x3E5454u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E5450u;
            // 0x3e5454: 0x8dc20294  lw          $v0, 0x294($t6) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 660)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E5464u;
            goto label_3e5464;
        }
    }
    ctx->pc = 0x3E5458u;
label_3e5458:
    // 0x3e5458: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x3e5458u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
label_3e545c:
    // 0x3e545c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x3e545cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3e5460:
    // 0x3e5460: 0x8dc20294  lw          $v0, 0x294($t6)
    ctx->pc = 0x3e5460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 660)));
label_3e5464:
    // 0x3e5464: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x3e5464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_3e5468:
    // 0x3e5468: 0xa0470000  sb          $a3, 0x0($v0)
    ctx->pc = 0x3e5468u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 7));
label_3e546c:
    // 0x3e546c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x3e546cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_3e5470:
    // 0x3e5470: 0x8dc20294  lw          $v0, 0x294($t6)
    ctx->pc = 0x3e5470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 660)));
label_3e5474:
    // 0x3e5474: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x3e5474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_3e5478:
    // 0x3e5478: 0xa0470000  sb          $a3, 0x0($v0)
    ctx->pc = 0x3e5478u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 7));
label_3e547c:
    // 0x3e547c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x3e547cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_3e5480:
    // 0x3e5480: 0xf9402a  slt         $t0, $a3, $t9
    ctx->pc = 0x3e5480u;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 25)) ? 1 : 0);
label_3e5484:
    // 0x3e5484: 0x11000015  beqz        $t0, . + 4 + (0x15 << 2)
label_3e5488:
    if (ctx->pc == 0x3E5488u) {
        ctx->pc = 0x3E5488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5484u;
        // 0x3e5488: 0x8fa40014  lw          $a0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E548Cu;
        goto label_3e548c;
    }
    ctx->pc = 0x3E5484u;
    {
        const bool branch_taken_0x3e5484 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E5488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5484u;
        // 0x3e5488: 0x8fa40014  lw          $a0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e5484) {
            ctx->pc = 0x3E54DCu;
            goto label_3e54dc;
        }
    }
    ctx->pc = 0x3E548Cu;
label_3e548c:
    // 0x3e548c: 0x0  nop
    ctx->pc = 0x3e548cu;
    // NOP
label_3e5490:
    // 0x3e5490: 0x8dc20294  lw          $v0, 0x294($t6)
    ctx->pc = 0x3e5490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 660)));
label_3e5494:
    // 0x3e5494: 0x24e40001  addiu       $a0, $a3, 0x1
    ctx->pc = 0x3e5494u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_3e5498:
    // 0x3e5498: 0x24e50002  addiu       $a1, $a3, 0x2
    ctx->pc = 0x3e5498u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
label_3e549c:
    // 0x3e549c: 0x24e60003  addiu       $a2, $a3, 0x3
    ctx->pc = 0x3e549cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 3));
label_3e54a0:
    // 0x3e54a0: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x3e54a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_3e54a4:
    // 0x3e54a4: 0xa0470000  sb          $a3, 0x0($v0)
    ctx->pc = 0x3e54a4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 7));
label_3e54a8:
    // 0x3e54a8: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x3e54a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
label_3e54ac:
    // 0x3e54ac: 0x8dc30294  lw          $v1, 0x294($t6)
    ctx->pc = 0x3e54acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 660)));
label_3e54b0:
    // 0x3e54b0: 0xf9402a  slt         $t0, $a3, $t9
    ctx->pc = 0x3e54b0u;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 25)) ? 1 : 0);
label_3e54b4:
    // 0x3e54b4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3e54b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_3e54b8:
    // 0x3e54b8: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x3e54b8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_3e54bc:
    // 0x3e54bc: 0x8dc20294  lw          $v0, 0x294($t6)
    ctx->pc = 0x3e54bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 660)));
label_3e54c0:
    // 0x3e54c0: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x3e54c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_3e54c4:
    // 0x3e54c4: 0xa0450000  sb          $a1, 0x0($v0)
    ctx->pc = 0x3e54c4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 5));
label_3e54c8:
    // 0x3e54c8: 0x8dc30294  lw          $v1, 0x294($t6)
    ctx->pc = 0x3e54c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 660)));
label_3e54cc:
    // 0x3e54cc: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x3e54ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_3e54d0:
    // 0x3e54d0: 0x1500ffef  bnez        $t0, . + 4 + (-0x11 << 2)
label_3e54d4:
    if (ctx->pc == 0x3E54D4u) {
        ctx->pc = 0x3E54D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E54D0u;
        // 0x3e54d4: 0xa0660000  sb          $a2, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E54D8u;
        goto label_3e54d8;
    }
    ctx->pc = 0x3E54D0u;
    {
        const bool branch_taken_0x3e54d0 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E54D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E54D0u;
        // 0x3e54d4: 0xa0660000  sb          $a2, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e54d0) {
            ctx->pc = 0x3E5490u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e5490;
        }
    }
    ctx->pc = 0x3E54D8u;
label_3e54d8:
    // 0x3e54d8: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x3e54d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_3e54dc:
    // 0x3e54dc: 0x99882a  slt         $s1, $a0, $t9
    ctx->pc = 0x3e54dcu;
    SET_GPR_U64(ctx, 17, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 25)) ? 1 : 0);
label_3e54e0:
    // 0x3e54e0: 0x522003f4  beql        $s1, $zero, . + 4 + (0x3F4 << 2)
label_3e54e4:
    if (ctx->pc == 0x3E54E4u) {
        ctx->pc = 0x3E54E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E54E0u;
        // 0x3e54e4: 0x8dc201f8  lw          $v0, 0x1F8($t6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 504)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E54E8u;
        goto label_3e54e8;
    }
    ctx->pc = 0x3E54E0u;
    {
        const bool branch_taken_0x3e54e0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e54e0) {
            ctx->pc = 0x3E54E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E54E0u;
            // 0x3e54e4: 0x8dc201f8  lw          $v0, 0x1F8($t6) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 504)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E64B4u;
            goto label_3e64b4;
        }
    }
    ctx->pc = 0x3E54E8u;
label_3e54e8:
    // 0x3e54e8: 0x120001f8  beqz        $s0, . + 4 + (0x1F8 << 2)
label_3e54ec:
    if (ctx->pc == 0x3E54ECu) {
        ctx->pc = 0x3E54ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E54E8u;
        // 0x3e54ec: 0x19283c  dsll32      $a1, $t9, 0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 25) << (32 + 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E54F0u;
        goto label_3e54f0;
    }
    ctx->pc = 0x3E54E8u;
    {
        const bool branch_taken_0x3e54e8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E54ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E54E8u;
        // 0x3e54ec: 0x19283c  dsll32      $a1, $t9, 0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 25) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e54e8) {
            ctx->pc = 0x3E5CCCu;
            goto label_3e5ccc;
        }
    }
    ctx->pc = 0x3E54F0u;
label_3e54f0:
    // 0x3e54f0: 0x1c0202d  daddu       $a0, $t6, $zero
    ctx->pc = 0x3e54f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
label_3e54f4:
    // 0x3e54f4: 0x7fae0050  sq          $t6, 0x50($sp)
    ctx->pc = 0x3e54f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 14));
label_3e54f8:
    // 0x3e54f8: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x3e54f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
label_3e54fc:
    // 0x3e54fc: 0xc0f8ae2  jal         func_3E2B88
label_3e5500:
    if (ctx->pc == 0x3E5500u) {
        ctx->pc = 0x3E5500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E54FCu;
        // 0x3e5500: 0x7fb90060  sq          $t9, 0x60($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 25));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E5504u;
        goto label_3e5504;
    }
    ctx->pc = 0x3E54FCu;
    SET_GPR_U32(ctx, 31, 0x3E5504u);
    ctx->pc = 0x3E5500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E54FCu;
    // 0x3e5500: 0x7fb90060  sq          $t9, 0x60($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 25));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2B88u, 0x3E54FCu, 0x3E5504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E5504u;
label_3e5504:
    // 0x3e5504: 0x7bb90060  lq          $t9, 0x60($sp)
    ctx->pc = 0x3e5504u;
    SET_GPR_VEC(ctx, 25, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3e5508:
    // 0x3e5508: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3e5508u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e550c:
    // 0x3e550c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3e550cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3e5510:
    // 0x3e5510: 0x7bae0050  lq          $t6, 0x50($sp)
    ctx->pc = 0x3e5510u;
    SET_GPR_VEC(ctx, 14, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3e5514:
    // 0x3e5514: 0x1b200023  blez        $t9, . + 4 + (0x23 << 2)
label_3e5518:
    if (ctx->pc == 0x3E5518u) {
        ctx->pc = 0x3E5518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5514u;
        // 0x3e5518: 0x2726ffff  addiu       $a2, $t9, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 25), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E551Cu;
        goto label_3e551c;
    }
    ctx->pc = 0x3E5514u;
    {
        const bool branch_taken_0x3e5514 = (GPR_S32(ctx, 25) <= 0);
        ctx->pc = 0x3E5518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5514u;
        // 0x3e5518: 0x2726ffff  addiu       $a2, $t9, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 25), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e5514) {
            ctx->pc = 0x3E55A4u;
            goto label_3e55a4;
        }
    }
    ctx->pc = 0x3E551Cu;
label_3e551c:
    // 0x3e551c: 0x240182d  daddu       $v1, $s2, $zero
    ctx->pc = 0x3e551cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3e5520:
    // 0x3e5520: 0x1b20000e  blez        $t9, . + 4 + (0xE << 2)
label_3e5524:
    if (ctx->pc == 0x3E5524u) {
        ctx->pc = 0x3E5524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5520u;
        // 0x3e5524: 0x33240003  andi        $a0, $t9, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 25) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E5528u;
        goto label_3e5528;
    }
    ctx->pc = 0x3E5520u;
    {
        const bool branch_taken_0x3e5520 = (GPR_S32(ctx, 25) <= 0);
        ctx->pc = 0x3E5524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5520u;
        // 0x3e5524: 0x33240003  andi        $a0, $t9, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 25) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e5520) {
            ctx->pc = 0x3E555Cu;
            goto label_3e555c;
        }
    }
    ctx->pc = 0x3E5528u;
label_3e5528:
    // 0x3e5528: 0x10800011  beqz        $a0, . + 4 + (0x11 << 2)
label_3e552c:
    if (ctx->pc == 0x3E552Cu) {
        ctx->pc = 0x3E552Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5528u;
        // 0x3e552c: 0x28820002  slti        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E5530u;
        goto label_3e5530;
    }
    ctx->pc = 0x3E5528u;
    {
        const bool branch_taken_0x3e5528 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E552Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5528u;
        // 0x3e552c: 0x28820002  slti        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e5528) {
            ctx->pc = 0x3E5570u;
            goto label_3e5570;
        }
    }
    ctx->pc = 0x3E5530u;
label_3e5530:
    // 0x3e5530: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
label_3e5534:
    if (ctx->pc == 0x3E5534u) {
        ctx->pc = 0x3E5534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5530u;
        // 0x3e5534: 0xa06a0000  sb          $t2, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E5538u;
        goto label_3e5538;
    }
    ctx->pc = 0x3E5530u;
    {
        const bool branch_taken_0x3e5530 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e5530) {
            ctx->pc = 0x3E5534u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E5530u;
            // 0x3e5534: 0xa06a0000  sb          $t2, 0x0($v1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 10));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E5560u;
            goto label_3e5560;
        }
    }
    ctx->pc = 0x3E5538u;
label_3e5538:
    // 0x3e5538: 0x28820003  slti        $v0, $a0, 0x3
    ctx->pc = 0x3e5538u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
label_3e553c:
    // 0x3e553c: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_3e5540:
    if (ctx->pc == 0x3E5540u) {
        ctx->pc = 0x3E5540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E553Cu;
        // 0x3e5540: 0xa06a0000  sb          $t2, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E5544u;
        goto label_3e5544;
    }
    ctx->pc = 0x3E553Cu;
    {
        const bool branch_taken_0x3e553c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e553c) {
            ctx->pc = 0x3E5540u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E553Cu;
            // 0x3e5540: 0xa06a0000  sb          $t2, 0x0($v1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 10));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E5554u;
            goto label_3e5554;
        }
    }
    ctx->pc = 0x3E5544u;
label_3e5544:
    // 0x3e5544: 0xa2400000  sb          $zero, 0x0($s2)
    ctx->pc = 0x3e5544u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 0));
label_3e5548:
    // 0x3e5548: 0x26430001  addiu       $v1, $s2, 0x1
    ctx->pc = 0x3e5548u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_3e554c:
    // 0x3e554c: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x3e554cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3e5550:
    // 0x3e5550: 0xa06a0000  sb          $t2, 0x0($v1)
    ctx->pc = 0x3e5550u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 10));
label_3e5554:
    // 0x3e5554: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3e5554u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_3e5558:
    // 0x3e5558: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x3e5558u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_3e555c:
    // 0x3e555c: 0xa06a0000  sb          $t2, 0x0($v1)
    ctx->pc = 0x3e555cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 10));
label_3e5560:
    // 0x3e5560: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x3e5560u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_3e5564:
    // 0x3e5564: 0x159102a  slt         $v0, $t2, $t9
    ctx->pc = 0x3e5564u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 25)) ? 1 : 0);
label_3e5568:
    // 0x3e5568: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_3e556c:
    if (ctx->pc == 0x3E556Cu) {
        ctx->pc = 0x3E556Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5568u;
        // 0x3e556c: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E5570u;
        goto label_3e5570;
    }
    ctx->pc = 0x3E5568u;
    {
        const bool branch_taken_0x3e5568 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E556Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5568u;
        // 0x3e556c: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e5568) {
            ctx->pc = 0x3E55A4u;
            goto label_3e55a4;
        }
    }
    ctx->pc = 0x3E5570u;
label_3e5570:
    // 0x3e5570: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x3e5570u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_3e5574:
    // 0x3e5574: 0x0  nop
    ctx->pc = 0x3e5574u;
    // NOP
label_3e5578:
    // 0x3e5578: 0x25420001  addiu       $v0, $t2, 0x1
    ctx->pc = 0x3e5578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_3e557c:
    // 0x3e557c: 0xa0aa0000  sb          $t2, 0x0($a1)
    ctx->pc = 0x3e557cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 10));
label_3e5580:
    // 0x3e5580: 0x25430002  addiu       $v1, $t2, 0x2
    ctx->pc = 0x3e5580u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), 2));
label_3e5584:
    // 0x3e5584: 0x25440003  addiu       $a0, $t2, 0x3
    ctx->pc = 0x3e5584u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), 3));
label_3e5588:
    // 0x3e5588: 0xa0a20001  sb          $v0, 0x1($a1)
    ctx->pc = 0x3e5588u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 2));
label_3e558c:
    // 0x3e558c: 0x254a0004  addiu       $t2, $t2, 0x4
    ctx->pc = 0x3e558cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
label_3e5590:
    // 0x3e5590: 0xa0a30002  sb          $v1, 0x2($a1)
    ctx->pc = 0x3e5590u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 3));
label_3e5594:
    // 0x3e5594: 0x159102a  slt         $v0, $t2, $t9
    ctx->pc = 0x3e5594u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 25)) ? 1 : 0);
label_3e5598:
    // 0x3e5598: 0xa0a40003  sb          $a0, 0x3($a1)
    ctx->pc = 0x3e5598u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 4));
label_3e559c:
    // 0x3e559c: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
label_3e55a0:
    if (ctx->pc == 0x3E55A0u) {
        ctx->pc = 0x3E55A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E559Cu;
        // 0x3e55a0: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E55A4u;
        goto label_3e55a4;
    }
    ctx->pc = 0x3E559Cu;
    {
        const bool branch_taken_0x3e559c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E55A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E559Cu;
        // 0x3e55a0: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e559c) {
            ctx->pc = 0x3E5578u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e5578;
        }
    }
    ctx->pc = 0x3E55A4u;
label_3e55a4:
    // 0x3e55a4: 0x8fa50014  lw          $a1, 0x14($sp)
    ctx->pc = 0x3e55a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_3e55a8:
    // 0x3e55a8: 0xc0502d  daddu       $t2, $a2, $zero
    ctx->pc = 0x3e55a8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3e55ac:
    // 0x3e55ac: 0x145102a  slt         $v0, $t2, $a1
    ctx->pc = 0x3e55acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_3e55b0:
    // 0x3e55b0: 0x14400083  bnez        $v0, . + 4 + (0x83 << 2)
label_3e55b4:
    if (ctx->pc == 0x3E55B4u) {
        ctx->pc = 0x3E55B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E55B0u;
        // 0x3e55b4: 0x8fa70018  lw          $a3, 0x18($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E55B8u;
        goto label_3e55b8;
    }
    ctx->pc = 0x3E55B0u;
    {
        const bool branch_taken_0x3e55b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E55B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E55B0u;
        // 0x3e55b4: 0x8fa70018  lw          $a3, 0x18($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e55b0) {
            ctx->pc = 0x3E57C0u;
            goto label_3e57c0;
        }
    }
    ctx->pc = 0x3E55B8u;
label_3e55b8:
    // 0x3e55b8: 0x1940007a  blez        $t2, . + 4 + (0x7A << 2)
label_3e55bc:
    if (ctx->pc == 0x3E55BCu) {
        ctx->pc = 0x3E55BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E55B8u;
        // 0x3e55bc: 0x240c0001  addiu       $t4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E55C0u;
        goto label_3e55c0;
    }
    ctx->pc = 0x3E55B8u;
    {
        const bool branch_taken_0x3e55b8 = (GPR_S32(ctx, 10) <= 0);
        ctx->pc = 0x3E55BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E55B8u;
        // 0x3e55bc: 0x240c0001  addiu       $t4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e55b8) {
            ctx->pc = 0x3E57A4u;
            goto label_3e57a4;
        }
    }
    ctx->pc = 0x3E55C0u;
label_3e55c0:
    // 0x3e55c0: 0xa1023  negu        $v0, $t2
    ctx->pc = 0x3e55c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 10)));
label_3e55c4:
    // 0x3e55c4: 0x140582d  daddu       $t3, $t2, $zero
    ctx->pc = 0x3e55c4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_3e55c8:
    // 0x3e55c8: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x3e55c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_3e55cc:
    // 0x3e55cc: 0x10600035  beqz        $v1, . + 4 + (0x35 << 2)
label_3e55d0:
    if (ctx->pc == 0x3E55D0u) {
        ctx->pc = 0x3E55D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E55CCu;
        // 0x3e55d0: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E55D4u;
        goto label_3e55d4;
    }
    ctx->pc = 0x3E55CCu;
    {
        const bool branch_taken_0x3e55cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E55D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E55CCu;
        // 0x3e55d0: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e55cc) {
            ctx->pc = 0x3E56A4u;
            goto label_3e56a4;
        }
    }
    ctx->pc = 0x3E55D4u;
label_3e55d4:
    // 0x3e55d4: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x3e55d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_3e55d8:
    // 0x3e55d8: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
label_3e55dc:
    if (ctx->pc == 0x3E55DCu) {
        ctx->pc = 0x3E55DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E55D8u;
        // 0x3e55dc: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E55E0u;
        goto label_3e55e0;
    }
    ctx->pc = 0x3E55D8u;
    {
        const bool branch_taken_0x3e55d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E55DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E55D8u;
        // 0x3e55dc: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e55d8) {
            ctx->pc = 0x3E5664u;
            goto label_3e5664;
        }
    }
    ctx->pc = 0x3E55E0u;
label_3e55e0:
    // 0x3e55e0: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
label_3e55e4:
    if (ctx->pc == 0x3E55E4u) {
        ctx->pc = 0x3E55E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E55E0u;
        // 0x3e55e4: 0x90c70000  lbu         $a3, 0x0($a2) (Delay Slot)
        SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E55E8u;
        goto label_3e55e8;
    }
    ctx->pc = 0x3E55E0u;
    {
        const bool branch_taken_0x3e55e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e55e0) {
            ctx->pc = 0x3E55E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E55E0u;
            // 0x3e55e4: 0x90c70000  lbu         $a3, 0x0($a2) (Delay Slot)
            SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E5628u;
            goto label_3e5628;
        }
    }
    ctx->pc = 0x3E55E8u;
label_3e55e8:
    // 0x3e55e8: 0x92470000  lbu         $a3, 0x0($s2)
    ctx->pc = 0x3e55e8u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
label_3e55ec:
    // 0x3e55ec: 0x92450001  lbu         $a1, 0x1($s2)
    ctx->pc = 0x3e55ecu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
label_3e55f0:
    // 0x3e55f0: 0x71040  sll         $v0, $a3, 1
    ctx->pc = 0x3e55f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
label_3e55f4:
    // 0x3e55f4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x3e55f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_3e55f8:
    // 0x3e55f8: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x3e55f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_3e55fc:
    // 0x3e55fc: 0x94440000  lhu         $a0, 0x0($v0)
    ctx->pc = 0x3e55fcu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_3e5600:
    // 0x3e5600: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x3e5600u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_3e5604:
    // 0x3e5604: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x3e5604u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_3e5608:
    // 0x3e5608: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x3e5608u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_3e560c:
    // 0x3e560c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_3e5610:
    if (ctx->pc == 0x3E5610u) {
        ctx->pc = 0x3E5610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E560Cu;
        // 0x3e5610: 0x26460001  addiu       $a2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E5614u;
        goto label_3e5614;
    }
    ctx->pc = 0x3E560Cu;
    {
        const bool branch_taken_0x3e560c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E5610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E560Cu;
        // 0x3e5610: 0x26460001  addiu       $a2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e560c) {
            ctx->pc = 0x3E5620u;
            goto label_3e5620;
        }
    }
    ctx->pc = 0x3E5614u;
label_3e5614:
    // 0x3e5614: 0xa2450000  sb          $a1, 0x0($s2)
    ctx->pc = 0x3e5614u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 5));
label_3e5618:
    // 0x3e5618: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x3e5618u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3e561c:
    // 0x3e561c: 0xa2470001  sb          $a3, 0x1($s2)
    ctx->pc = 0x3e561cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1), (uint8_t)GPR_U32(ctx, 7));
label_3e5620:
    // 0x3e5620: 0x254bffff  addiu       $t3, $t2, -0x1
    ctx->pc = 0x3e5620u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
label_3e5624:
    // 0x3e5624: 0x90c70000  lbu         $a3, 0x0($a2)
    ctx->pc = 0x3e5624u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_3e5628:
    // 0x3e5628: 0x90c50001  lbu         $a1, 0x1($a2)
    ctx->pc = 0x3e5628u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
label_3e562c:
    // 0x3e562c: 0x71040  sll         $v0, $a3, 1
    ctx->pc = 0x3e562cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
label_3e5630:
    // 0x3e5630: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x3e5630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_3e5634:
    // 0x3e5634: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x3e5634u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_3e5638:
    // 0x3e5638: 0x94440000  lhu         $a0, 0x0($v0)
    ctx->pc = 0x3e5638u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_3e563c:
    // 0x3e563c: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x3e563cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_3e5640:
    // 0x3e5640: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x3e5640u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_3e5644:
    // 0x3e5644: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x3e5644u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_3e5648:
    // 0x3e5648: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_3e564c:
    if (ctx->pc == 0x3E564Cu) {
        ctx->pc = 0x3E564Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5648u;
        // 0x3e564c: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E5650u;
        goto label_3e5650;
    }
    ctx->pc = 0x3E5648u;
    {
        const bool branch_taken_0x3e5648 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e5648) {
            ctx->pc = 0x3E564Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E5648u;
            // 0x3e564c: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E5660u;
            goto label_3e5660;
        }
    }
    ctx->pc = 0x3E5650u;
label_3e5650:
    // 0x3e5650: 0xa0c50000  sb          $a1, 0x0($a2)
    ctx->pc = 0x3e5650u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 5));
label_3e5654:
    // 0x3e5654: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x3e5654u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3e5658:
    // 0x3e5658: 0xa0c70001  sb          $a3, 0x1($a2)
    ctx->pc = 0x3e5658u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1), (uint8_t)GPR_U32(ctx, 7));
label_3e565c:
    // 0x3e565c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x3e565cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_3e5660:
    // 0x3e5660: 0x256bffff  addiu       $t3, $t3, -0x1
    ctx->pc = 0x3e5660u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
label_3e5664:
    // 0x3e5664: 0x90c70000  lbu         $a3, 0x0($a2)
    ctx->pc = 0x3e5664u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_3e5668:
    // 0x3e5668: 0x90c50001  lbu         $a1, 0x1($a2)
    ctx->pc = 0x3e5668u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
label_3e566c:
    // 0x3e566c: 0x71040  sll         $v0, $a3, 1
    ctx->pc = 0x3e566cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
label_3e5670:
    // 0x3e5670: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x3e5670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_3e5674:
    // 0x3e5674: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x3e5674u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_3e5678:
    // 0x3e5678: 0x94440000  lhu         $a0, 0x0($v0)
    ctx->pc = 0x3e5678u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_3e567c:
    // 0x3e567c: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x3e567cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_3e5680:
    // 0x3e5680: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x3e5680u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_3e5684:
    // 0x3e5684: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x3e5684u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_3e5688:
    // 0x3e5688: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_3e568c:
    if (ctx->pc == 0x3E568Cu) {
        ctx->pc = 0x3E568Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5688u;
        // 0x3e568c: 0x256bffff  addiu       $t3, $t3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E5690u;
        goto label_3e5690;
    }
    ctx->pc = 0x3E5688u;
    {
        const bool branch_taken_0x3e5688 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E568Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5688u;
        // 0x3e568c: 0x256bffff  addiu       $t3, $t3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e5688) {
            ctx->pc = 0x3E569Cu;
            goto label_3e569c;
        }
    }
    ctx->pc = 0x3E5690u;
label_3e5690:
    // 0x3e5690: 0xa0c50000  sb          $a1, 0x0($a2)
    ctx->pc = 0x3e5690u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 5));
label_3e5694:
    // 0x3e5694: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x3e5694u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3e5698:
    // 0x3e5698: 0xa0c70001  sb          $a3, 0x1($a2)
    ctx->pc = 0x3e5698u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1), (uint8_t)GPR_U32(ctx, 7));
label_3e569c:
    // 0x3e569c: 0x11600041  beqz        $t3, . + 4 + (0x41 << 2)
label_3e56a0:
    if (ctx->pc == 0x3E56A0u) {
        ctx->pc = 0x3E56A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E569Cu;
        // 0x3e56a0: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E56A4u;
        goto label_3e56a4;
    }
    ctx->pc = 0x3E569Cu;
    {
        const bool branch_taken_0x3e569c = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E56A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E569Cu;
        // 0x3e56a0: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e569c) {
            ctx->pc = 0x3E57A4u;
            goto label_3e57a4;
        }
    }
    ctx->pc = 0x3E56A4u;
label_3e56a4:
    // 0x3e56a4: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x3e56a4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3e56a8:
    // 0x3e56a8: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x3e56a8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_3e56ac:
    // 0x3e56ac: 0x0  nop
    ctx->pc = 0x3e56acu;
    // NOP
label_3e56b0:
    // 0x3e56b0: 0x90c70000  lbu         $a3, 0x0($a2)
    ctx->pc = 0x3e56b0u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_3e56b4:
    // 0x3e56b4: 0x91250001  lbu         $a1, 0x1($t1)
    ctx->pc = 0x3e56b4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 1)));
label_3e56b8:
    // 0x3e56b8: 0x71040  sll         $v0, $a3, 1
    ctx->pc = 0x3e56b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
label_3e56bc:
    // 0x3e56bc: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x3e56bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_3e56c0:
    // 0x3e56c0: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x3e56c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_3e56c4:
    // 0x3e56c4: 0x94440000  lhu         $a0, 0x0($v0)
    ctx->pc = 0x3e56c4u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_3e56c8:
    // 0x3e56c8: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x3e56c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_3e56cc:
    // 0x3e56cc: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x3e56ccu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_3e56d0:
    // 0x3e56d0: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x3e56d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_3e56d4:
    // 0x3e56d4: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_3e56d8:
    if (ctx->pc == 0x3E56D8u) {
        ctx->pc = 0x3E56D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E56D4u;
        // 0x3e56d8: 0x90c70001  lbu         $a3, 0x1($a2) (Delay Slot)
        SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E56DCu;
        goto label_3e56dc;
    }
    ctx->pc = 0x3E56D4u;
    {
        const bool branch_taken_0x3e56d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e56d4) {
            ctx->pc = 0x3E56D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E56D4u;
            // 0x3e56d8: 0x90c70001  lbu         $a3, 0x1($a2) (Delay Slot)
            SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E56ECu;
            goto label_3e56ec;
        }
    }
    ctx->pc = 0x3E56DCu;
label_3e56dc:
    // 0x3e56dc: 0xa0c50000  sb          $a1, 0x0($a2)
    ctx->pc = 0x3e56dcu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 5));
label_3e56e0:
    // 0x3e56e0: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x3e56e0u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3e56e4:
    // 0x3e56e4: 0xa1070001  sb          $a3, 0x1($t0)
    ctx->pc = 0x3e56e4u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 1), (uint8_t)GPR_U32(ctx, 7));
label_3e56e8:
    // 0x3e56e8: 0x90c70001  lbu         $a3, 0x1($a2)
    ctx->pc = 0x3e56e8u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
label_3e56ec:
    // 0x3e56ec: 0x91250002  lbu         $a1, 0x2($t1)
    ctx->pc = 0x3e56ecu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 2)));
label_3e56f0:
    // 0x3e56f0: 0x71040  sll         $v0, $a3, 1
    ctx->pc = 0x3e56f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
label_3e56f4:
    // 0x3e56f4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x3e56f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_3e56f8:
    // 0x3e56f8: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x3e56f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_3e56fc:
    // 0x3e56fc: 0x94440000  lhu         $a0, 0x0($v0)
    ctx->pc = 0x3e56fcu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_3e5700:
    // 0x3e5700: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x3e5700u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_3e5704:
    // 0x3e5704: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x3e5704u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_3e5708:
    // 0x3e5708: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x3e5708u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_3e570c:
    // 0x3e570c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_3e5710:
    if (ctx->pc == 0x3E5710u) {
        ctx->pc = 0x3E5710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E570Cu;
        // 0x3e5710: 0x90c70002  lbu         $a3, 0x2($a2) (Delay Slot)
        SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E5714u;
        goto label_3e5714;
    }
    ctx->pc = 0x3E570Cu;
    {
        const bool branch_taken_0x3e570c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e570c) {
            ctx->pc = 0x3E5710u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E570Cu;
            // 0x3e5710: 0x90c70002  lbu         $a3, 0x2($a2) (Delay Slot)
            SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E5724u;
            goto label_3e5724;
        }
    }
    ctx->pc = 0x3E5714u;
label_3e5714:
    // 0x3e5714: 0xa0c50001  sb          $a1, 0x1($a2)
    ctx->pc = 0x3e5714u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1), (uint8_t)GPR_U32(ctx, 5));
label_3e5718:
    // 0x3e5718: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x3e5718u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3e571c:
    // 0x3e571c: 0xa1070002  sb          $a3, 0x2($t0)
    ctx->pc = 0x3e571cu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 2), (uint8_t)GPR_U32(ctx, 7));
label_3e5720:
    // 0x3e5720: 0x90c70002  lbu         $a3, 0x2($a2)
    ctx->pc = 0x3e5720u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 2)));
label_3e5724:
    // 0x3e5724: 0x91250003  lbu         $a1, 0x3($t1)
    ctx->pc = 0x3e5724u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 3)));
label_3e5728:
    // 0x3e5728: 0x71040  sll         $v0, $a3, 1
    ctx->pc = 0x3e5728u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
label_3e572c:
    // 0x3e572c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x3e572cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_3e5730:
    // 0x3e5730: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x3e5730u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_3e5734:
    // 0x3e5734: 0x94440000  lhu         $a0, 0x0($v0)
    ctx->pc = 0x3e5734u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_3e5738:
    // 0x3e5738: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x3e5738u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_3e573c:
    // 0x3e573c: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x3e573cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_3e5740:
    // 0x3e5740: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x3e5740u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_3e5744:
    // 0x3e5744: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_3e5748:
    if (ctx->pc == 0x3E5748u) {
        ctx->pc = 0x3E5748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5744u;
        // 0x3e5748: 0x90c70003  lbu         $a3, 0x3($a2) (Delay Slot)
        SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E574Cu;
        goto label_3e574c;
    }
    ctx->pc = 0x3E5744u;
    {
        const bool branch_taken_0x3e5744 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e5744) {
            ctx->pc = 0x3E5748u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E5744u;
            // 0x3e5748: 0x90c70003  lbu         $a3, 0x3($a2) (Delay Slot)
            SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 3)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E575Cu;
            goto label_3e575c;
        }
    }
    ctx->pc = 0x3E574Cu;
label_3e574c:
    // 0x3e574c: 0xa0c50002  sb          $a1, 0x2($a2)
    ctx->pc = 0x3e574cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 2), (uint8_t)GPR_U32(ctx, 5));
label_3e5750:
    // 0x3e5750: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x3e5750u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3e5754:
    // 0x3e5754: 0xa1070003  sb          $a3, 0x3($t0)
    ctx->pc = 0x3e5754u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 3), (uint8_t)GPR_U32(ctx, 7));
label_3e5758:
    // 0x3e5758: 0x90c70003  lbu         $a3, 0x3($a2)
    ctx->pc = 0x3e5758u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 3)));
label_3e575c:
    // 0x3e575c: 0x91250004  lbu         $a1, 0x4($t1)
    ctx->pc = 0x3e575cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 4)));
label_3e5760:
    // 0x3e5760: 0x71040  sll         $v0, $a3, 1
    ctx->pc = 0x3e5760u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
label_3e5764:
    // 0x3e5764: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x3e5764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_3e5768:
    // 0x3e5768: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x3e5768u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_3e576c:
    // 0x3e576c: 0x94440000  lhu         $a0, 0x0($v0)
    ctx->pc = 0x3e576cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_3e5770:
    // 0x3e5770: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x3e5770u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_3e5774:
    // 0x3e5774: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x3e5774u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_3e5778:
    // 0x3e5778: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x3e5778u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_3e577c:
    // 0x3e577c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_3e5780:
    if (ctx->pc == 0x3E5780u) {
        ctx->pc = 0x3E5780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E577Cu;
        // 0x3e5780: 0x25080004  addiu       $t0, $t0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E5784u;
        goto label_3e5784;
    }
    ctx->pc = 0x3E577Cu;
    {
        const bool branch_taken_0x3e577c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e577c) {
            ctx->pc = 0x3E5780u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E577Cu;
            // 0x3e5780: 0x25080004  addiu       $t0, $t0, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E5794u;
            goto label_3e5794;
        }
    }
    ctx->pc = 0x3E5784u;
label_3e5784:
    // 0x3e5784: 0xa0c50003  sb          $a1, 0x3($a2)
    ctx->pc = 0x3e5784u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3), (uint8_t)GPR_U32(ctx, 5));
label_3e5788:
    // 0x3e5788: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x3e5788u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3e578c:
    // 0x3e578c: 0xa1070004  sb          $a3, 0x4($t0)
    ctx->pc = 0x3e578cu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 4), (uint8_t)GPR_U32(ctx, 7));
label_3e5790:
    // 0x3e5790: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x3e5790u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
label_3e5794:
    // 0x3e5794: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x3e5794u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_3e5798:
    // 0x3e5798: 0x256bfffc  addiu       $t3, $t3, -0x4
    ctx->pc = 0x3e5798u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967292));
label_3e579c:
    // 0x3e579c: 0x1560ffc4  bnez        $t3, . + 4 + (-0x3C << 2)
label_3e57a0:
    if (ctx->pc == 0x3E57A0u) {
        ctx->pc = 0x3E57A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E579Cu;
        // 0x3e57a0: 0x25290004  addiu       $t1, $t1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E57A4u;
        goto label_3e57a4;
    }
    ctx->pc = 0x3E579Cu;
    {
        const bool branch_taken_0x3e579c = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E57A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E579Cu;
        // 0x3e57a0: 0x25290004  addiu       $t1, $t1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e579c) {
            ctx->pc = 0x3E56B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e56b0;
        }
    }
    ctx->pc = 0x3E57A4u;
label_3e57a4:
    // 0x3e57a4: 0x15800005  bnez        $t4, . + 4 + (0x5 << 2)
label_3e57a8:
    if (ctx->pc == 0x3E57A8u) {
        ctx->pc = 0x3E57A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E57A4u;
        // 0x3e57a8: 0x8fa60014  lw          $a2, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E57ACu;
        goto label_3e57ac;
    }
    ctx->pc = 0x3E57A4u;
    {
        const bool branch_taken_0x3e57a4 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E57A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E57A4u;
        // 0x3e57a8: 0x8fa60014  lw          $a2, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e57a4) {
            ctx->pc = 0x3E57BCu;
            goto label_3e57bc;
        }
    }
    ctx->pc = 0x3E57ACu;
label_3e57ac:
    // 0x3e57ac: 0x254affff  addiu       $t2, $t2, -0x1
    ctx->pc = 0x3e57acu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
label_3e57b0:
    // 0x3e57b0: 0x146102a  slt         $v0, $t2, $a2
    ctx->pc = 0x3e57b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_3e57b4:
    // 0x3e57b4: 0x1040ff80  beqz        $v0, . + 4 + (-0x80 << 2)
label_3e57b8:
    if (ctx->pc == 0x3E57B8u) {
        ctx->pc = 0x3E57BCu;
        goto label_3e57bc;
    }
    ctx->pc = 0x3E57B4u;
    {
        const bool branch_taken_0x3e57b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e57b4) {
            ctx->pc = 0x3E55B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e55b8;
        }
    }
    ctx->pc = 0x3E57BCu;
label_3e57bc:
    // 0x3e57bc: 0x8fa70018  lw          $a3, 0x18($sp)
    ctx->pc = 0x3e57bcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_3e57c0:
    // 0x3e57c0: 0x10e00027  beqz        $a3, . + 4 + (0x27 << 2)
label_3e57c4:
    if (ctx->pc == 0x3E57C4u) {
        ctx->pc = 0x3E57C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E57C0u;
        // 0x3e57c4: 0x8fa80014  lw          $t0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E57C8u;
        goto label_3e57c8;
    }
    ctx->pc = 0x3E57C0u;
    {
        const bool branch_taken_0x3e57c0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E57C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E57C0u;
        // 0x3e57c4: 0x8fa80014  lw          $t0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e57c0) {
            ctx->pc = 0x3E5860u;
            goto label_3e5860;
        }
    }
    ctx->pc = 0x3E57C8u;
label_3e57c8:
    // 0x3e57c8: 0x320202d  daddu       $a0, $t9, $zero
    ctx->pc = 0x3e57c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
label_3e57cc:
    // 0x3e57cc: 0x19000139  blez        $t0, . + 4 + (0x139 << 2)
label_3e57d0:
    if (ctx->pc == 0x3E57D0u) {
        ctx->pc = 0x3E57D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E57CCu;
        // 0x3e57d0: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E57D4u;
        goto label_3e57d4;
    }
    ctx->pc = 0x3E57CCu;
    {
        const bool branch_taken_0x3e57cc = (GPR_S32(ctx, 8) <= 0);
        ctx->pc = 0x3E57D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E57CCu;
        // 0x3e57d0: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e57cc) {
            ctx->pc = 0x3E5CB4u;
            goto label_3e5cb4;
        }
    }
    ctx->pc = 0x3E57D4u;
label_3e57d4:
    // 0x3e57d4: 0x191040  sll         $v0, $t9, 1
    ctx->pc = 0x3e57d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 25), 1));
label_3e57d8:
    // 0x3e57d8: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x3e57d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_3e57dc:
    // 0x3e57dc: 0x591021  addu        $v0, $v0, $t9
    ctx->pc = 0x3e57dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 25)));
label_3e57e0:
    // 0x3e57e0: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x3e57e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3e57e4:
    // 0x3e57e4: 0x24a1821  addu        $v1, $s2, $t2
    ctx->pc = 0x3e57e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 10)));
label_3e57e8:
    // 0x3e57e8: 0x8fa60014  lw          $a2, 0x14($sp)
    ctx->pc = 0x3e57e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_3e57ec:
    // 0x3e57ec: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x3e57ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_3e57f0:
    // 0x3e57f0: 0x46102a  slt         $v0, $v0, $a2
    ctx->pc = 0x3e57f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_3e57f4:
    // 0x3e57f4: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
label_3e57f8:
    if (ctx->pc == 0x3E57F8u) {
        ctx->pc = 0x3E57F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E57F4u;
        // 0x3e57f8: 0x25530001  addiu       $s3, $t2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E57FCu;
        goto label_3e57fc;
    }
    ctx->pc = 0x3E57F4u;
    {
        const bool branch_taken_0x3e57f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E57F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E57F4u;
        // 0x3e57f8: 0x25530001  addiu       $s3, $t2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e57f4) {
            ctx->pc = 0x3E5844u;
            goto label_3e5844;
        }
    }
    ctx->pc = 0x3E57FCu;
label_3e57fc:
    // 0x3e57fc: 0x921821  addu        $v1, $a0, $s2
    ctx->pc = 0x3e57fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
label_3e5800:
    // 0x3e5800: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3e5800u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_3e5804:
    // 0x3e5804: 0x8fa70014  lw          $a3, 0x14($sp)
    ctx->pc = 0x3e5804u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_3e5808:
    // 0x3e5808: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x3e5808u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_3e580c:
    // 0x3e580c: 0x24a5fffd  addiu       $a1, $a1, -0x3
    ctx->pc = 0x3e580cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967293));
label_3e5810:
    // 0x3e5810: 0x47102a  slt         $v0, $v0, $a3
    ctx->pc = 0x3e5810u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
label_3e5814:
    // 0x3e5814: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
label_3e5818:
    if (ctx->pc == 0x3E5818u) {
        ctx->pc = 0x3E5818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5814u;
        // 0x3e5818: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E581Cu;
        goto label_3e581c;
    }
    ctx->pc = 0x3E5814u;
    {
        const bool branch_taken_0x3e5814 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E5818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5814u;
        // 0x3e5818: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e5814) {
            ctx->pc = 0x3E5800u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e5800;
        }
    }
    ctx->pc = 0x3E581Cu;
label_3e581c:
    // 0x3e581c: 0x8fa80010  lw          $t0, 0x10($sp)
    ctx->pc = 0x3e581cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_3e5820:
    // 0x3e5820: 0xa1040  sll         $v0, $t2, 1
    ctx->pc = 0x3e5820u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
label_3e5824:
    // 0x3e5824: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x3e5824u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
label_3e5828:
    // 0x3e5828: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x3e5828u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
label_3e582c:
    // 0x3e582c: 0x80a30000  lb          $v1, 0x0($a1)
    ctx->pc = 0x3e582cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_3e5830:
    // 0x3e5830: 0x80a60001  lb          $a2, 0x1($a1)
    ctx->pc = 0x3e5830u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
label_3e5834:
    // 0x3e5834: 0x80a70002  lb          $a3, 0x2($a1)
    ctx->pc = 0x3e5834u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
label_3e5838:
    // 0x3e5838: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x3e5838u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
label_3e583c:
    // 0x3e583c: 0xa0460001  sb          $a2, 0x1($v0)
    ctx->pc = 0x3e583cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 6));
label_3e5840:
    // 0x3e5840: 0xa0470002  sb          $a3, 0x2($v0)
    ctx->pc = 0x3e5840u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 7));
label_3e5844:
    // 0x3e5844: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x3e5844u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_3e5848:
    // 0x3e5848: 0x260502d  daddu       $t2, $s3, $zero
    ctx->pc = 0x3e5848u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3e584c:
    // 0x3e584c: 0x143102a  slt         $v0, $t2, $v1
    ctx->pc = 0x3e584cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_3e5850:
    // 0x3e5850: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
label_3e5854:
    if (ctx->pc == 0x3E5854u) {
        ctx->pc = 0x3E5854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5850u;
        // 0x3e5854: 0x24a1821  addu        $v1, $s2, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E5858u;
        goto label_3e5858;
    }
    ctx->pc = 0x3E5850u;
    {
        const bool branch_taken_0x3e5850 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E5854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5850u;
        // 0x3e5854: 0x24a1821  addu        $v1, $s2, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e5850) {
            ctx->pc = 0x3E57E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e57e8;
        }
    }
    ctx->pc = 0x3E5858u;
label_3e5858:
    // 0x3e5858: 0x10000117  b           . + 4 + (0x117 << 2)
label_3e585c:
    if (ctx->pc == 0x3E585Cu) {
        ctx->pc = 0x3E585Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5858u;
        // 0x3e585c: 0x1c0202d  daddu       $a0, $t6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E5860u;
        goto label_3e5860;
    }
    ctx->pc = 0x3E5858u;
    {
        const bool branch_taken_0x3e5858 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E585Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5858u;
        // 0x3e585c: 0x1c0202d  daddu       $a0, $t6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e5858) {
            ctx->pc = 0x3E5CB8u;
            goto label_3e5cb8;
        }
    }
    ctx->pc = 0x3E5860u;
label_3e5860:
    // 0x3e5860: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x3e5860u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_3e5864:
    // 0x3e5864: 0x320282d  daddu       $a1, $t9, $zero
    ctx->pc = 0x3e5864u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
label_3e5868:
    // 0x3e5868: 0x8fa60014  lw          $a2, 0x14($sp)
    ctx->pc = 0x3e5868u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_3e586c:
    // 0x3e586c: 0x86102a  slt         $v0, $a0, $a2
    ctx->pc = 0x3e586cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_3e5870:
    // 0x3e5870: 0x10400035  beqz        $v0, . + 4 + (0x35 << 2)
label_3e5874:
    if (ctx->pc == 0x3E5874u) {
        ctx->pc = 0x3E5874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5870u;
        // 0x3e5874: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E5878u;
        goto label_3e5878;
    }
    ctx->pc = 0x3E5870u;
    {
        const bool branch_taken_0x3e5870 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E5874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5870u;
        // 0x3e5874: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e5870) {
            ctx->pc = 0x3E5948u;
            goto label_3e5948;
        }
    }
    ctx->pc = 0x3E5878u;
label_3e5878:
    // 0x3e5878: 0x191040  sll         $v0, $t9, 1
    ctx->pc = 0x3e5878u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 25), 1));
label_3e587c:
    // 0x3e587c: 0x8fa70010  lw          $a3, 0x10($sp)
    ctx->pc = 0x3e587cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_3e5880:
    // 0x3e5880: 0x591021  addu        $v0, $v0, $t9
    ctx->pc = 0x3e5880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 25)));
label_3e5884:
    // 0x3e5884: 0x472021  addu        $a0, $v0, $a3
    ctx->pc = 0x3e5884u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_3e5888:
    // 0x3e5888: 0x24a1821  addu        $v1, $s2, $t2
    ctx->pc = 0x3e5888u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 10)));
label_3e588c:
    // 0x3e588c: 0x8fa80014  lw          $t0, 0x14($sp)
    ctx->pc = 0x3e588cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_3e5890:
    // 0x3e5890: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x3e5890u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_3e5894:
    // 0x3e5894: 0x48102a  slt         $v0, $v0, $t0
    ctx->pc = 0x3e5894u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
label_3e5898:
    // 0x3e5898: 0x14400026  bnez        $v0, . + 4 + (0x26 << 2)
label_3e589c:
    if (ctx->pc == 0x3E589Cu) {
        ctx->pc = 0x3E589Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5898u;
        // 0x3e589c: 0x25530001  addiu       $s3, $t2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E58A0u;
        goto label_3e58a0;
    }
    ctx->pc = 0x3E5898u;
    {
        const bool branch_taken_0x3e5898 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E589Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5898u;
        // 0x3e589c: 0x25530001  addiu       $s3, $t2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e5898) {
            ctx->pc = 0x3E5934u;
            goto label_3e5934;
        }
    }
    ctx->pc = 0x3E58A0u;
label_3e58a0:
    // 0x3e58a0: 0xb21821  addu        $v1, $a1, $s2
    ctx->pc = 0x3e58a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
label_3e58a4:
    // 0x3e58a4: 0x0  nop
    ctx->pc = 0x3e58a4u;
    // NOP
label_3e58a8:
    // 0x3e58a8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3e58a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_3e58ac:
    // 0x3e58ac: 0x8fa60014  lw          $a2, 0x14($sp)
    ctx->pc = 0x3e58acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_3e58b0:
    // 0x3e58b0: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x3e58b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_3e58b4:
    // 0x3e58b4: 0x2484fffd  addiu       $a0, $a0, -0x3
    ctx->pc = 0x3e58b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967293));
label_3e58b8:
    // 0x3e58b8: 0x46102a  slt         $v0, $v0, $a2
    ctx->pc = 0x3e58b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_3e58bc:
    // 0x3e58bc: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
label_3e58c0:
    if (ctx->pc == 0x3E58C0u) {
        ctx->pc = 0x3E58C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E58BCu;
        // 0x3e58c0: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E58C4u;
        goto label_3e58c4;
    }
    ctx->pc = 0x3E58BCu;
    {
        const bool branch_taken_0x3e58bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E58C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E58BCu;
        // 0x3e58c0: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e58bc) {
            ctx->pc = 0x3E58A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e58a8;
        }
    }
    ctx->pc = 0x3E58C4u;
label_3e58c4:
    // 0x3e58c4: 0x80870000  lb          $a3, 0x0($a0)
    ctx->pc = 0x3e58c4u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_3e58c8:
    // 0x3e58c8: 0x80880001  lb          $t0, 0x1($a0)
    ctx->pc = 0x3e58c8u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
label_3e58cc:
    // 0x3e58cc: 0x80830002  lb          $v1, 0x2($a0)
    ctx->pc = 0x3e58ccu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
label_3e58d0:
    // 0x3e58d0: 0xa3a70000  sb          $a3, 0x0($sp)
    ctx->pc = 0x3e58d0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 7));
label_3e58d4:
    // 0x3e58d4: 0xa3a80001  sb          $t0, 0x1($sp)
    ctx->pc = 0x3e58d4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 8));
label_3e58d8:
    // 0x3e58d8: 0xa1040  sll         $v0, $t2, 1
    ctx->pc = 0x3e58d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
label_3e58dc:
    // 0x3e58dc: 0xa3a30002  sb          $v1, 0x2($sp)
    ctx->pc = 0x3e58dcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 2), (uint8_t)GPR_U32(ctx, 3));
label_3e58e0:
    // 0x3e58e0: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x3e58e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
label_3e58e4:
    // 0x3e58e4: 0x8fa70010  lw          $a3, 0x10($sp)
    ctx->pc = 0x3e58e4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_3e58e8:
    // 0x3e58e8: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x3e58e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_3e58ec:
    // 0x3e58ec: 0x80480000  lb          $t0, 0x0($v0)
    ctx->pc = 0x3e58ecu;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_3e58f0:
    // 0x3e58f0: 0x80430001  lb          $v1, 0x1($v0)
    ctx->pc = 0x3e58f0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_3e58f4:
    // 0x3e58f4: 0x80460002  lb          $a2, 0x2($v0)
    ctx->pc = 0x3e58f4u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
label_3e58f8:
    // 0x3e58f8: 0xa0880000  sb          $t0, 0x0($a0)
    ctx->pc = 0x3e58f8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 8));
label_3e58fc:
    // 0x3e58fc: 0xa0830001  sb          $v1, 0x1($a0)
    ctx->pc = 0x3e58fcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 3));
label_3e5900:
    // 0x3e5900: 0xa0860002  sb          $a2, 0x2($a0)
    ctx->pc = 0x3e5900u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 6));
label_3e5904:
    // 0x3e5904: 0x83a80000  lb          $t0, 0x0($sp)
    ctx->pc = 0x3e5904u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
label_3e5908:
    // 0x3e5908: 0x83a30001  lb          $v1, 0x1($sp)
    ctx->pc = 0x3e5908u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 1)));
label_3e590c:
    // 0x3e590c: 0x83a60002  lb          $a2, 0x2($sp)
    ctx->pc = 0x3e590cu;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 2)));
label_3e5910:
    // 0x3e5910: 0xa0480000  sb          $t0, 0x0($v0)
    ctx->pc = 0x3e5910u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 8));
label_3e5914:
    // 0x3e5914: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x3e5914u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
label_3e5918:
    // 0x3e5918: 0xa0460002  sb          $a2, 0x2($v0)
    ctx->pc = 0x3e5918u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 6));
label_3e591c:
    // 0x3e591c: 0x8dc30294  lw          $v1, 0x294($t6)
    ctx->pc = 0x3e591cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 660)));
label_3e5920:
    // 0x3e5920: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x3e5920u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_3e5924:
    // 0x3e5924: 0xa06a0000  sb          $t2, 0x0($v1)
    ctx->pc = 0x3e5924u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 10));
label_3e5928:
    // 0x3e5928: 0x8dc20294  lw          $v0, 0x294($t6)
    ctx->pc = 0x3e5928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 660)));
label_3e592c:
    // 0x3e592c: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x3e592cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
label_3e5930:
    // 0x3e5930: 0xa0450000  sb          $a1, 0x0($v0)
    ctx->pc = 0x3e5930u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 5));
label_3e5934:
    // 0x3e5934: 0x8fa80014  lw          $t0, 0x14($sp)
    ctx->pc = 0x3e5934u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_3e5938:
    // 0x3e5938: 0x260502d  daddu       $t2, $s3, $zero
    ctx->pc = 0x3e5938u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3e593c:
    // 0x3e593c: 0x148102a  slt         $v0, $t2, $t0
    ctx->pc = 0x3e593cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
label_3e5940:
    // 0x3e5940: 0x1440ffd3  bnez        $v0, . + 4 + (-0x2D << 2)
label_3e5944:
    if (ctx->pc == 0x3E5944u) {
        ctx->pc = 0x3E5944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5940u;
        // 0x3e5944: 0x24a1821  addu        $v1, $s2, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E5948u;
        goto label_3e5948;
    }
    ctx->pc = 0x3E5940u;
    {
        const bool branch_taken_0x3e5940 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E5944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5940u;
        // 0x3e5944: 0x24a1821  addu        $v1, $s2, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e5940) {
            ctx->pc = 0x3E5890u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e5890;
        }
    }
    ctx->pc = 0x3E5948u;
label_3e5948:
    // 0x3e5948: 0x1b2000da  blez        $t9, . + 4 + (0xDA << 2)
label_3e594c:
    if (ctx->pc == 0x3E594Cu) {
        ctx->pc = 0x3E594Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5948u;
        // 0x3e594c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E5950u;
        goto label_3e5950;
    }
    ctx->pc = 0x3E5948u;
    {
        const bool branch_taken_0x3e5948 = (GPR_S32(ctx, 25) <= 0);
        ctx->pc = 0x3E594Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5948u;
        // 0x3e594c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e5948) {
            ctx->pc = 0x3E5CB4u;
            goto label_3e5cb4;
        }
    }
    ctx->pc = 0x3E5950u;
label_3e5950:
    // 0x3e5950: 0x8dc30294  lw          $v1, 0x294($t6)
    ctx->pc = 0x3e5950u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 660)));
label_3e5954:
    // 0x3e5954: 0x0  nop
    ctx->pc = 0x3e5954u;
    // NOP
label_3e5958:
    // 0x3e5958: 0x60a02d  daddu       $s4, $v1, $zero
    ctx->pc = 0x3e5958u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_3e595c:
    // 0x3e595c: 0x6a1821  addu        $v1, $v1, $t2
    ctx->pc = 0x3e595cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
label_3e5960:
    // 0x3e5960: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x3e5960u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_3e5964:
    // 0x3e5964: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x3e5964u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_3e5968:
    // 0x3e5968: 0x83102a  slt         $v0, $a0, $v1
    ctx->pc = 0x3e5968u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_3e596c:
    // 0x3e596c: 0x144000cd  bnez        $v0, . + 4 + (0xCD << 2)
label_3e5970:
    if (ctx->pc == 0x3E5970u) {
        ctx->pc = 0x3E5970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E596Cu;
        // 0x3e5970: 0x25530001  addiu       $s3, $t2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E5974u;
        goto label_3e5974;
    }
    ctx->pc = 0x3E596Cu;
    {
        const bool branch_taken_0x3e596c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E5970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E596Cu;
        // 0x3e5970: 0x25530001  addiu       $s3, $t2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e596c) {
            ctx->pc = 0x3E5CA4u;
            goto label_3e5ca4;
        }
    }
    ctx->pc = 0x3E5974u;
label_3e5974:
    // 0x3e5974: 0x8fa60010  lw          $a2, 0x10($sp)
    ctx->pc = 0x3e5974u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_3e5978:
    // 0x3e5978: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x3e5978u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_3e597c:
    // 0x3e597c: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x3e597cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_3e5980:
    // 0x3e5980: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3e5980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_3e5984:
    // 0x3e5984: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x3e5984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_3e5988:
    // 0x3e5988: 0x90c40002  lbu         $a0, 0x2($a2)
    ctx->pc = 0x3e5988u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 2)));
label_3e598c:
    // 0x3e598c: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x3e598cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_3e5990:
    // 0x3e5990: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x3e5990u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3e5994:
    // 0x3e5994: 0x90480000  lbu         $t0, 0x0($v0)
    ctx->pc = 0x3e5994u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_3e5998:
    // 0x3e5998: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3e5998u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3e599c:
    // 0x3e599c: 0x90460001  lbu         $a2, 0x1($v0)
    ctx->pc = 0x3e599cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_3e59a0:
    // 0x3e59a0: 0x90a50001  lbu         $a1, 0x1($a1)
    ctx->pc = 0x3e59a0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
label_3e59a4:
    // 0x3e59a4: 0x1031823  subu        $v1, $t0, $v1
    ctx->pc = 0x3e59a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
label_3e59a8:
    // 0x3e59a8: 0x90490002  lbu         $t1, 0x2($v0)
    ctx->pc = 0x3e59a8u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
label_3e59ac:
    // 0x3e59ac: 0x4620001  bltzl       $v1, . + 4 + (0x1 << 2)
label_3e59b0:
    if (ctx->pc == 0x3E59B0u) {
        ctx->pc = 0x3E59B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E59ACu;
        // 0x3e59b0: 0x31823  negu        $v1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E59B4u;
        goto label_3e59b4;
    }
    ctx->pc = 0x3E59ACu;
    {
        const bool branch_taken_0x3e59ac = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x3e59ac) {
            ctx->pc = 0x3E59B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E59ACu;
            // 0x3e59b0: 0x31823  negu        $v1, $v1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E59B4u;
            goto label_3e59b4;
        }
    }
    ctx->pc = 0x3E59B4u;
label_3e59b4:
    // 0x3e59b4: 0x8fa70014  lw          $a3, 0x14($sp)
    ctx->pc = 0x3e59b4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_3e59b8:
    // 0x3e59b8: 0xc52823  subu        $a1, $a2, $a1
    ctx->pc = 0x3e59b8u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_3e59bc:
    // 0x3e59bc: 0x1242023  subu        $a0, $t1, $a0
    ctx->pc = 0x3e59bcu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
label_3e59c0:
    // 0x3e59c0: 0x4a20001  bltzl       $a1, . + 4 + (0x1 << 2)
label_3e59c4:
    if (ctx->pc == 0x3E59C4u) {
        ctx->pc = 0x3E59C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E59C0u;
        // 0x3e59c4: 0x52823  negu        $a1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E59C8u;
        goto label_3e59c8;
    }
    ctx->pc = 0x3E59C0u;
    {
        const bool branch_taken_0x3e59c0 = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x3e59c0) {
            ctx->pc = 0x3E59C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E59C0u;
            // 0x3e59c4: 0x52823  negu        $a1, $a1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 5)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E59C8u;
            goto label_3e59c8;
        }
    }
    ctx->pc = 0x3E59C8u;
label_3e59c8:
    // 0x3e59c8: 0x4820001  bltzl       $a0, . + 4 + (0x1 << 2)
label_3e59cc:
    if (ctx->pc == 0x3E59CCu) {
        ctx->pc = 0x3E59CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E59C8u;
        // 0x3e59cc: 0x42023  negu        $a0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E59D0u;
        goto label_3e59d0;
    }
    ctx->pc = 0x3E59C8u;
    {
        const bool branch_taken_0x3e59c8 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x3e59c8) {
            ctx->pc = 0x3E59CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E59C8u;
            // 0x3e59cc: 0x42023  negu        $a0, $a0 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E59D0u;
            goto label_3e59d0;
        }
    }
    ctx->pc = 0x3E59D0u;
label_3e59d0:
    // 0x3e59d0: 0x207102a  slt         $v0, $s0, $a3
    ctx->pc = 0x3e59d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
label_3e59d4:
    // 0x3e59d4: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x3e59d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_3e59d8:
    // 0x3e59d8: 0x104000b0  beqz        $v0, . + 4 + (0xB0 << 2)
label_3e59dc:
    if (ctx->pc == 0x3E59DCu) {
        ctx->pc = 0x3E59DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E59D8u;
        // 0x3e59dc: 0x643821  addu        $a3, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E59E0u;
        goto label_3e59e0;
    }
    ctx->pc = 0x3E59D8u;
    {
        const bool branch_taken_0x3e59d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E59DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E59D8u;
        // 0x3e59dc: 0x643821  addu        $a3, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e59d8) {
            ctx->pc = 0x3E5C9Cu;
            goto label_3e5c9c;
        }
    }
    ctx->pc = 0x3E59E0u;
label_3e59e0:
    // 0x3e59e0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x3e59e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_3e59e4:
    // 0x3e59e4: 0x100782d  daddu       $t7, $t0, $zero
    ctx->pc = 0x3e59e4u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_3e59e8:
    // 0x3e59e8: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x3e59e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_3e59ec:
    // 0x3e59ec: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x3e59ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3e59f0:
    // 0x3e59f0: 0x24440003  addiu       $a0, $v0, 0x3
    ctx->pc = 0x3e59f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
label_3e59f4:
    // 0x3e59f4: 0x8fa80014  lw          $t0, 0x14($sp)
    ctx->pc = 0x3e59f4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_3e59f8:
    // 0x3e59f8: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x3e59f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_3e59fc:
    // 0x3e59fc: 0x120682d  daddu       $t5, $t1, $zero
    ctx->pc = 0x3e59fcu;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_3e5a00:
    // 0x3e5a00: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x3e5a00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_3e5a04:
    // 0x3e5a04: 0x240c0001  addiu       $t4, $zero, 0x1
    ctx->pc = 0x3e5a04u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3e5a08:
    // 0x3e5a08: 0x29020002  slti        $v0, $t0, 0x2
    ctx->pc = 0x3e5a08u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)2) ? 1 : 0);
label_3e5a0c:
    // 0x3e5a0c: 0x14400036  bnez        $v0, . + 4 + (0x36 << 2)
label_3e5a10:
    if (ctx->pc == 0x3E5A10u) {
        ctx->pc = 0x3E5A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5A0Cu;
        // 0x3e5a10: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E5A14u;
        goto label_3e5a14;
    }
    ctx->pc = 0x3E5A0Cu;
    {
        const bool branch_taken_0x3e5a0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E5A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5A0Cu;
        // 0x3e5a10: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e5a0c) {
            ctx->pc = 0x3E5AE8u;
            goto label_3e5ae8;
        }
    }
    ctx->pc = 0x3E5A14u;
label_3e5a14:
    // 0x3e5a14: 0x1060004c  beqz        $v1, . + 4 + (0x4C << 2)
label_3e5a18:
    if (ctx->pc == 0x3E5A18u) {
        ctx->pc = 0x3E5A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5A14u;
        // 0x3e5a18: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E5A1Cu;
        goto label_3e5a1c;
    }
    ctx->pc = 0x3E5A14u;
    {
        const bool branch_taken_0x3e5a14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E5A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5A14u;
        // 0x3e5a18: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e5a14) {
            ctx->pc = 0x3E5B48u;
            goto label_3e5b48;
        }
    }
    ctx->pc = 0x3E5A1Cu;
label_3e5a1c:
    // 0x3e5a1c: 0x54400033  bnel        $v0, $zero, . + 4 + (0x33 << 2)
label_3e5a20:
    if (ctx->pc == 0x3E5A20u) {
        ctx->pc = 0x3E5A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5A1Cu;
        // 0x3e5a20: 0x90c30000  lbu         $v1, 0x0($a2) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E5A24u;
        goto label_3e5a24;
    }
    ctx->pc = 0x3E5A1Cu;
    {
        const bool branch_taken_0x3e5a1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e5a1c) {
            ctx->pc = 0x3E5A20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E5A1Cu;
            // 0x3e5a20: 0x90c30000  lbu         $v1, 0x0($a2) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E5AECu;
            goto label_3e5aec;
        }
    }
    ctx->pc = 0x3E5A24u;
label_3e5a24:
    // 0x3e5a24: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x3e5a24u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_3e5a28:
    // 0x3e5a28: 0x5440001a  bnel        $v0, $zero, . + 4 + (0x1A << 2)
label_3e5a2c:
    if (ctx->pc == 0x3E5A2Cu) {
        ctx->pc = 0x3E5A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5A28u;
        // 0x3e5a2c: 0x90c30000  lbu         $v1, 0x0($a2) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E5A30u;
        goto label_3e5a30;
    }
    ctx->pc = 0x3E5A28u;
    {
        const bool branch_taken_0x3e5a28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e5a28) {
            ctx->pc = 0x3E5A2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E5A28u;
            // 0x3e5a2c: 0x90c30000  lbu         $v1, 0x0($a2) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E5A94u;
            goto label_3e5a94;
        }
    }
    ctx->pc = 0x3E5A30u;
label_3e5a30:
    // 0x3e5a30: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x3e5a30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_3e5a34:
    // 0x3e5a34: 0x90430003  lbu         $v1, 0x3($v0)
    ctx->pc = 0x3e5a34u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
label_3e5a38:
    // 0x3e5a38: 0x90820001  lbu         $v0, 0x1($a0)
    ctx->pc = 0x3e5a38u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
label_3e5a3c:
    // 0x3e5a3c: 0x90840002  lbu         $a0, 0x2($a0)
    ctx->pc = 0x3e5a3cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
label_3e5a40:
    // 0x3e5a40: 0x1e31823  subu        $v1, $t7, $v1
    ctx->pc = 0x3e5a40u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 3)));
label_3e5a44:
    // 0x3e5a44: 0xa21023  subu        $v0, $a1, $v0
    ctx->pc = 0x3e5a44u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_3e5a48:
    // 0x3e5a48: 0x4620001  bltzl       $v1, . + 4 + (0x1 << 2)
label_3e5a4c:
    if (ctx->pc == 0x3E5A4Cu) {
        ctx->pc = 0x3E5A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5A48u;
        // 0x3e5a4c: 0x31823  negu        $v1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E5A50u;
        goto label_3e5a50;
    }
    ctx->pc = 0x3E5A48u;
    {
        const bool branch_taken_0x3e5a48 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x3e5a48) {
            ctx->pc = 0x3E5A4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E5A48u;
            // 0x3e5a4c: 0x31823  negu        $v1, $v1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E5A50u;
            goto label_3e5a50;
        }
    }
    ctx->pc = 0x3E5A50u;
label_3e5a50:
    // 0x3e5a50: 0x4420001  bltzl       $v0, . + 4 + (0x1 << 2)
label_3e5a54:
    if (ctx->pc == 0x3E5A54u) {
        ctx->pc = 0x3E5A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5A50u;
        // 0x3e5a54: 0x21023  negu        $v0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E5A58u;
        goto label_3e5a58;
    }
    ctx->pc = 0x3E5A50u;
    {
        const bool branch_taken_0x3e5a50 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x3e5a50) {
            ctx->pc = 0x3E5A54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E5A50u;
            // 0x3e5a54: 0x21023  negu        $v0, $v0 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E5A58u;
            goto label_3e5a58;
        }
    }
    ctx->pc = 0x3E5A58u;
label_3e5a58:
    // 0x3e5a58: 0x1a42023  subu        $a0, $t5, $a0
    ctx->pc = 0x3e5a58u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 4)));
label_3e5a5c:
    // 0x3e5a5c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3e5a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3e5a60:
    // 0x3e5a60: 0x4820001  bltzl       $a0, . + 4 + (0x1 << 2)
label_3e5a64:
    if (ctx->pc == 0x3E5A64u) {
        ctx->pc = 0x3E5A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5A60u;
        // 0x3e5a64: 0x42023  negu        $a0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E5A68u;
        goto label_3e5a68;
    }
    ctx->pc = 0x3E5A60u;
    {
        const bool branch_taken_0x3e5a60 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x3e5a60) {
            ctx->pc = 0x3E5A64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E5A60u;
            // 0x3e5a64: 0x42023  negu        $a0, $a0 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E5A68u;
            goto label_3e5a68;
        }
    }
    ctx->pc = 0x3E5A68u;
label_3e5a68:
    // 0x3e5a68: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3e5a68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_3e5a6c:
    // 0x3e5a6c: 0x67102a  slt         $v0, $v1, $a3
    ctx->pc = 0x3e5a6cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
label_3e5a70:
    // 0x3e5a70: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_3e5a74:
    if (ctx->pc == 0x3E5A74u) {
        ctx->pc = 0x3E5A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5A70u;
        // 0x3e5a74: 0x8fa30010  lw          $v1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E5A78u;
        goto label_3e5a78;
    }
    ctx->pc = 0x3E5A70u;
    {
        const bool branch_taken_0x3e5a70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e5a70) {
            ctx->pc = 0x3E5A74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E5A70u;
            // 0x3e5a74: 0x8fa30010  lw          $v1, 0x10($sp) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E5A84u;
            goto label_3e5a84;
        }
    }
    ctx->pc = 0x3E5A78u;
label_3e5a78:
    // 0x3e5a78: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x3e5a78u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_3e5a7c:
    // 0x3e5a7c: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x3e5a7cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3e5a80:
    // 0x3e5a80: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x3e5a80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_3e5a84:
    // 0x3e5a84: 0x240c0002  addiu       $t4, $zero, 0x2
    ctx->pc = 0x3e5a84u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3e5a88:
    // 0x3e5a88: 0x24100002  addiu       $s0, $zero, 0x2
    ctx->pc = 0x3e5a88u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3e5a8c:
    // 0x3e5a8c: 0x24660006  addiu       $a2, $v1, 0x6
    ctx->pc = 0x3e5a8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 6));
label_3e5a90:
    // 0x3e5a90: 0x90c30000  lbu         $v1, 0x0($a2)
    ctx->pc = 0x3e5a90u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_3e5a94:
    // 0x3e5a94: 0x90c20001  lbu         $v0, 0x1($a2)
    ctx->pc = 0x3e5a94u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
label_3e5a98:
    // 0x3e5a98: 0x90c40002  lbu         $a0, 0x2($a2)
    ctx->pc = 0x3e5a98u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 2)));
label_3e5a9c:
    // 0x3e5a9c: 0x1e31823  subu        $v1, $t7, $v1
    ctx->pc = 0x3e5a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 3)));
label_3e5aa0:
    // 0x3e5aa0: 0xa21023  subu        $v0, $a1, $v0
    ctx->pc = 0x3e5aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_3e5aa4:
    // 0x3e5aa4: 0x4620001  bltzl       $v1, . + 4 + (0x1 << 2)
label_3e5aa8:
    if (ctx->pc == 0x3E5AA8u) {
        ctx->pc = 0x3E5AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5AA4u;
        // 0x3e5aa8: 0x31823  negu        $v1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E5AACu;
        goto label_3e5aac;
    }
    ctx->pc = 0x3E5AA4u;
    {
        const bool branch_taken_0x3e5aa4 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x3e5aa4) {
            ctx->pc = 0x3E5AA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E5AA4u;
            // 0x3e5aa8: 0x31823  negu        $v1, $v1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E5AACu;
            goto label_3e5aac;
        }
    }
    ctx->pc = 0x3E5AACu;
label_3e5aac:
    // 0x3e5aac: 0x4420001  bltzl       $v0, . + 4 + (0x1 << 2)
label_3e5ab0:
    if (ctx->pc == 0x3E5AB0u) {
        ctx->pc = 0x3E5AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5AACu;
        // 0x3e5ab0: 0x21023  negu        $v0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E5AB4u;
        goto label_3e5ab4;
    }
    ctx->pc = 0x3E5AACu;
    {
        const bool branch_taken_0x3e5aac = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x3e5aac) {
            ctx->pc = 0x3E5AB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E5AACu;
            // 0x3e5ab0: 0x21023  negu        $v0, $v0 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E5AB4u;
            goto label_3e5ab4;
        }
    }
    ctx->pc = 0x3E5AB4u;
label_3e5ab4:
    // 0x3e5ab4: 0x1a42023  subu        $a0, $t5, $a0
    ctx->pc = 0x3e5ab4u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 4)));
label_3e5ab8:
    // 0x3e5ab8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3e5ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3e5abc:
    // 0x3e5abc: 0x4820001  bltzl       $a0, . + 4 + (0x1 << 2)
label_3e5ac0:
    if (ctx->pc == 0x3E5AC0u) {
        ctx->pc = 0x3E5AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5ABCu;
        // 0x3e5ac0: 0x42023  negu        $a0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E5AC4u;
        goto label_3e5ac4;
    }
    ctx->pc = 0x3E5ABCu;
    {
        const bool branch_taken_0x3e5abc = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x3e5abc) {
            ctx->pc = 0x3E5AC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E5ABCu;
            // 0x3e5ac0: 0x42023  negu        $a0, $a0 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E5AC4u;
            goto label_3e5ac4;
        }
    }
    ctx->pc = 0x3E5AC4u;
label_3e5ac4:
    // 0x3e5ac4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3e5ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_3e5ac8:
    // 0x3e5ac8: 0x67102a  slt         $v0, $v1, $a3
    ctx->pc = 0x3e5ac8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
label_3e5acc:
    // 0x3e5acc: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_3e5ad0:
    if (ctx->pc == 0x3E5AD0u) {
        ctx->pc = 0x3E5AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5ACCu;
        // 0x3e5ad0: 0x258c0001  addiu       $t4, $t4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E5AD4u;
        goto label_3e5ad4;
    }
    ctx->pc = 0x3E5ACCu;
    {
        const bool branch_taken_0x3e5acc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e5acc) {
            ctx->pc = 0x3E5AD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E5ACCu;
            // 0x3e5ad0: 0x258c0001  addiu       $t4, $t4, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E5AE0u;
            goto label_3e5ae0;
        }
    }
    ctx->pc = 0x3E5AD4u;
label_3e5ad4:
    // 0x3e5ad4: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x3e5ad4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_3e5ad8:
    // 0x3e5ad8: 0x180882d  daddu       $s1, $t4, $zero
    ctx->pc = 0x3e5ad8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
label_3e5adc:
    // 0x3e5adc: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x3e5adcu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
label_3e5ae0:
    // 0x3e5ae0: 0x24c60003  addiu       $a2, $a2, 0x3
    ctx->pc = 0x3e5ae0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3));
label_3e5ae4:
    // 0x3e5ae4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3e5ae4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_3e5ae8:
    // 0x3e5ae8: 0x90c30000  lbu         $v1, 0x0($a2)
    ctx->pc = 0x3e5ae8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_3e5aec:
    // 0x3e5aec: 0x90c20001  lbu         $v0, 0x1($a2)
    ctx->pc = 0x3e5aecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
label_3e5af0:
    // 0x3e5af0: 0x90c40002  lbu         $a0, 0x2($a2)
    ctx->pc = 0x3e5af0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 2)));
label_3e5af4:
    // 0x3e5af4: 0x1e31823  subu        $v1, $t7, $v1
    ctx->pc = 0x3e5af4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 3)));
label_3e5af8:
    // 0x3e5af8: 0xa21023  subu        $v0, $a1, $v0
    ctx->pc = 0x3e5af8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_3e5afc:
    // 0x3e5afc: 0x4620001  bltzl       $v1, . + 4 + (0x1 << 2)
label_3e5b00:
    if (ctx->pc == 0x3E5B00u) {
        ctx->pc = 0x3E5B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5AFCu;
        // 0x3e5b00: 0x31823  negu        $v1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E5B04u;
        goto label_3e5b04;
    }
    ctx->pc = 0x3E5AFCu;
    {
        const bool branch_taken_0x3e5afc = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x3e5afc) {
            ctx->pc = 0x3E5B00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E5AFCu;
            // 0x3e5b00: 0x31823  negu        $v1, $v1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E5B04u;
            goto label_3e5b04;
        }
    }
    ctx->pc = 0x3E5B04u;
label_3e5b04:
    // 0x3e5b04: 0x4420001  bltzl       $v0, . + 4 + (0x1 << 2)
label_3e5b08:
    if (ctx->pc == 0x3E5B08u) {
        ctx->pc = 0x3E5B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5B04u;
        // 0x3e5b08: 0x21023  negu        $v0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E5B0Cu;
        goto label_3e5b0c;
    }
    ctx->pc = 0x3E5B04u;
    {
        const bool branch_taken_0x3e5b04 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x3e5b04) {
            ctx->pc = 0x3E5B08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E5B04u;
            // 0x3e5b08: 0x21023  negu        $v0, $v0 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E5B0Cu;
            goto label_3e5b0c;
        }
    }
    ctx->pc = 0x3E5B0Cu;
label_3e5b0c:
    // 0x3e5b0c: 0x1a42023  subu        $a0, $t5, $a0
    ctx->pc = 0x3e5b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 4)));
label_3e5b10:
    // 0x3e5b10: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3e5b10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3e5b14:
    // 0x3e5b14: 0x4820001  bltzl       $a0, . + 4 + (0x1 << 2)
label_3e5b18:
    if (ctx->pc == 0x3E5B18u) {
        ctx->pc = 0x3E5B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5B14u;
        // 0x3e5b18: 0x42023  negu        $a0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E5B1Cu;
        goto label_3e5b1c;
    }
    ctx->pc = 0x3E5B14u;
    {
        const bool branch_taken_0x3e5b14 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x3e5b14) {
            ctx->pc = 0x3E5B18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E5B14u;
            // 0x3e5b18: 0x42023  negu        $a0, $a0 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E5B1Cu;
            goto label_3e5b1c;
        }
    }
    ctx->pc = 0x3E5B1Cu;
label_3e5b1c:
    // 0x3e5b1c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3e5b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_3e5b20:
    // 0x3e5b20: 0x67102a  slt         $v0, $v1, $a3
    ctx->pc = 0x3e5b20u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
label_3e5b24:
    // 0x3e5b24: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_3e5b28:
    if (ctx->pc == 0x3E5B28u) {
        ctx->pc = 0x3E5B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5B24u;
        // 0x3e5b28: 0x8fa40014  lw          $a0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E5B2Cu;
        goto label_3e5b2c;
    }
    ctx->pc = 0x3E5B24u;
    {
        const bool branch_taken_0x3e5b24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E5B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5B24u;
        // 0x3e5b28: 0x8fa40014  lw          $a0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e5b24) {
            ctx->pc = 0x3E5B34u;
            goto label_3e5b34;
        }
    }
    ctx->pc = 0x3E5B2Cu;
label_3e5b2c:
    // 0x3e5b2c: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x3e5b2cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_3e5b30:
    // 0x3e5b30: 0x180882d  daddu       $s1, $t4, $zero
    ctx->pc = 0x3e5b30u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
label_3e5b34:
    // 0x3e5b34: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3e5b34u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_3e5b38:
    // 0x3e5b38: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x3e5b38u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
label_3e5b3c:
    // 0x3e5b3c: 0x204102a  slt         $v0, $s0, $a0
    ctx->pc = 0x3e5b3cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_3e5b40:
    // 0x3e5b40: 0x10400056  beqz        $v0, . + 4 + (0x56 << 2)
label_3e5b44:
    if (ctx->pc == 0x3E5B44u) {
        ctx->pc = 0x3E5B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5B40u;
        // 0x3e5b44: 0x24c60003  addiu       $a2, $a2, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E5B48u;
        goto label_3e5b48;
    }
    ctx->pc = 0x3E5B40u;
    {
        const bool branch_taken_0x3e5b40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E5B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5B40u;
        // 0x3e5b44: 0x24c60003  addiu       $a2, $a2, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e5b40) {
            ctx->pc = 0x3E5C9Cu;
            goto label_3e5c9c;
        }
    }
    ctx->pc = 0x3E5B48u;
label_3e5b48:
    // 0x3e5b48: 0xc0482d  daddu       $t1, $a2, $zero
    ctx->pc = 0x3e5b48u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3e5b4c:
    // 0x3e5b4c: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x3e5b4cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3e5b50:
    // 0x3e5b50: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x3e5b50u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_3e5b54:
    // 0x3e5b54: 0x91220001  lbu         $v0, 0x1($t1)
    ctx->pc = 0x3e5b54u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 1)));
label_3e5b58:
    // 0x3e5b58: 0x90c40002  lbu         $a0, 0x2($a2)
    ctx->pc = 0x3e5b58u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 2)));
label_3e5b5c:
    // 0x3e5b5c: 0x1e31823  subu        $v1, $t7, $v1
    ctx->pc = 0x3e5b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 3)));
label_3e5b60:
    // 0x3e5b60: 0xa21023  subu        $v0, $a1, $v0
    ctx->pc = 0x3e5b60u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_3e5b64:
    // 0x3e5b64: 0x4620001  bltzl       $v1, . + 4 + (0x1 << 2)
label_3e5b68:
    if (ctx->pc == 0x3E5B68u) {
        ctx->pc = 0x3E5B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5B64u;
        // 0x3e5b68: 0x31823  negu        $v1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E5B6Cu;
        goto label_3e5b6c;
    }
    ctx->pc = 0x3E5B64u;
    {
        const bool branch_taken_0x3e5b64 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x3e5b64) {
            ctx->pc = 0x3E5B68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E5B64u;
            // 0x3e5b68: 0x31823  negu        $v1, $v1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E5B6Cu;
            goto label_3e5b6c;
        }
    }
    ctx->pc = 0x3E5B6Cu;
label_3e5b6c:
    // 0x3e5b6c: 0x4420001  bltzl       $v0, . + 4 + (0x1 << 2)
label_3e5b70:
    if (ctx->pc == 0x3E5B70u) {
        ctx->pc = 0x3E5B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5B6Cu;
        // 0x3e5b70: 0x21023  negu        $v0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E5B74u;
        goto label_3e5b74;
    }
    ctx->pc = 0x3E5B6Cu;
    {
        const bool branch_taken_0x3e5b6c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x3e5b6c) {
            ctx->pc = 0x3E5B70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E5B6Cu;
            // 0x3e5b70: 0x21023  negu        $v0, $v0 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E5B74u;
            goto label_3e5b74;
        }
    }
    ctx->pc = 0x3E5B74u;
label_3e5b74:
    // 0x3e5b74: 0x1a42023  subu        $a0, $t5, $a0
    ctx->pc = 0x3e5b74u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 4)));
label_3e5b78:
    // 0x3e5b78: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3e5b78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3e5b7c:
    // 0x3e5b7c: 0x4820001  bltzl       $a0, . + 4 + (0x1 << 2)
label_3e5b80:
    if (ctx->pc == 0x3E5B80u) {
        ctx->pc = 0x3E5B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5B7Cu;
        // 0x3e5b80: 0x42023  negu        $a0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E5B84u;
        goto label_3e5b84;
    }
    ctx->pc = 0x3E5B7Cu;
    {
        const bool branch_taken_0x3e5b7c = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x3e5b7c) {
            ctx->pc = 0x3E5B80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E5B7Cu;
            // 0x3e5b80: 0x42023  negu        $a0, $a0 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E5B84u;
            goto label_3e5b84;
        }
    }
    ctx->pc = 0x3E5B84u;
label_3e5b84:
    // 0x3e5b84: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3e5b84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_3e5b88:
    // 0x3e5b88: 0x67102a  slt         $v0, $v1, $a3
    ctx->pc = 0x3e5b88u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
label_3e5b8c:
    // 0x3e5b8c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_3e5b90:
    if (ctx->pc == 0x3E5B90u) {
        ctx->pc = 0x3E5B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5B8Cu;
        // 0x3e5b90: 0x91040003  lbu         $a0, 0x3($t0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E5B94u;
        goto label_3e5b94;
    }
    ctx->pc = 0x3E5B8Cu;
    {
        const bool branch_taken_0x3e5b8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E5B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5B8Cu;
        // 0x3e5b90: 0x91040003  lbu         $a0, 0x3($t0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e5b8c) {
            ctx->pc = 0x3E5B9Cu;
            goto label_3e5b9c;
        }
    }
    ctx->pc = 0x3E5B94u;
label_3e5b94:
    // 0x3e5b94: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x3e5b94u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_3e5b98:
    // 0x3e5b98: 0x180882d  daddu       $s1, $t4, $zero
    ctx->pc = 0x3e5b98u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
label_3e5b9c:
    // 0x3e5b9c: 0x91220004  lbu         $v0, 0x4($t1)
    ctx->pc = 0x3e5b9cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 4)));
label_3e5ba0:
    // 0x3e5ba0: 0x90c30005  lbu         $v1, 0x5($a2)
    ctx->pc = 0x3e5ba0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 5)));
label_3e5ba4:
    // 0x3e5ba4: 0x1e42023  subu        $a0, $t7, $a0
    ctx->pc = 0x3e5ba4u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 4)));
label_3e5ba8:
    // 0x3e5ba8: 0xa21023  subu        $v0, $a1, $v0
    ctx->pc = 0x3e5ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_3e5bac:
    // 0x3e5bac: 0x4820001  bltzl       $a0, . + 4 + (0x1 << 2)
label_3e5bb0:
    if (ctx->pc == 0x3E5BB0u) {
        ctx->pc = 0x3E5BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5BACu;
        // 0x3e5bb0: 0x42023  negu        $a0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E5BB4u;
        goto label_3e5bb4;
    }
    ctx->pc = 0x3E5BACu;
    {
        const bool branch_taken_0x3e5bac = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x3e5bac) {
            ctx->pc = 0x3E5BB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E5BACu;
            // 0x3e5bb0: 0x42023  negu        $a0, $a0 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E5BB4u;
            goto label_3e5bb4;
        }
    }
    ctx->pc = 0x3E5BB4u;
label_3e5bb4:
    // 0x3e5bb4: 0x4420001  bltzl       $v0, . + 4 + (0x1 << 2)
label_3e5bb8:
    if (ctx->pc == 0x3E5BB8u) {
        ctx->pc = 0x3E5BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5BB4u;
        // 0x3e5bb8: 0x21023  negu        $v0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E5BBCu;
        goto label_3e5bbc;
    }
    ctx->pc = 0x3E5BB4u;
    {
        const bool branch_taken_0x3e5bb4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x3e5bb4) {
            ctx->pc = 0x3E5BB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E5BB4u;
            // 0x3e5bb8: 0x21023  negu        $v0, $v0 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E5BBCu;
            goto label_3e5bbc;
        }
    }
    ctx->pc = 0x3E5BBCu;
label_3e5bbc:
    // 0x3e5bbc: 0x1a31823  subu        $v1, $t5, $v1
    ctx->pc = 0x3e5bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 3)));
label_3e5bc0:
    // 0x3e5bc0: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x3e5bc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_3e5bc4:
    // 0x3e5bc4: 0x4620001  bltzl       $v1, . + 4 + (0x1 << 2)
label_3e5bc8:
    if (ctx->pc == 0x3E5BC8u) {
        ctx->pc = 0x3E5BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5BC4u;
        // 0x3e5bc8: 0x31823  negu        $v1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E5BCCu;
        goto label_3e5bcc;
    }
    ctx->pc = 0x3E5BC4u;
    {
        const bool branch_taken_0x3e5bc4 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x3e5bc4) {
            ctx->pc = 0x3E5BC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E5BC4u;
            // 0x3e5bc8: 0x31823  negu        $v1, $v1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E5BCCu;
            goto label_3e5bcc;
        }
    }
    ctx->pc = 0x3E5BCCu;
label_3e5bcc:
    // 0x3e5bcc: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x3e5bccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_3e5bd0:
    // 0x3e5bd0: 0x87102a  slt         $v0, $a0, $a3
    ctx->pc = 0x3e5bd0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
label_3e5bd4:
    // 0x3e5bd4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_3e5bd8:
    if (ctx->pc == 0x3E5BD8u) {
        ctx->pc = 0x3E5BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5BD4u;
        // 0x3e5bd8: 0x258b0001  addiu       $t3, $t4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E5BDCu;
        goto label_3e5bdc;
    }
    ctx->pc = 0x3E5BD4u;
    {
        const bool branch_taken_0x3e5bd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E5BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5BD4u;
        // 0x3e5bd8: 0x258b0001  addiu       $t3, $t4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e5bd4) {
            ctx->pc = 0x3E5BE4u;
            goto label_3e5be4;
        }
    }
    ctx->pc = 0x3E5BDCu;
label_3e5bdc:
    // 0x3e5bdc: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x3e5bdcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3e5be0:
    // 0x3e5be0: 0x160882d  daddu       $s1, $t3, $zero
    ctx->pc = 0x3e5be0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_3e5be4:
    // 0x3e5be4: 0x91040006  lbu         $a0, 0x6($t0)
    ctx->pc = 0x3e5be4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 6)));
label_3e5be8:
    // 0x3e5be8: 0x91220007  lbu         $v0, 0x7($t1)
    ctx->pc = 0x3e5be8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 7)));
label_3e5bec:
    // 0x3e5bec: 0x90c30008  lbu         $v1, 0x8($a2)
    ctx->pc = 0x3e5becu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 8)));
label_3e5bf0:
    // 0x3e5bf0: 0x1e42023  subu        $a0, $t7, $a0
    ctx->pc = 0x3e5bf0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 4)));
label_3e5bf4:
    // 0x3e5bf4: 0xa21023  subu        $v0, $a1, $v0
    ctx->pc = 0x3e5bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_3e5bf8:
    // 0x3e5bf8: 0x4820001  bltzl       $a0, . + 4 + (0x1 << 2)
label_3e5bfc:
    if (ctx->pc == 0x3E5BFCu) {
        ctx->pc = 0x3E5BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5BF8u;
        // 0x3e5bfc: 0x42023  negu        $a0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E5C00u;
        goto label_3e5c00;
    }
    ctx->pc = 0x3E5BF8u;
    {
        const bool branch_taken_0x3e5bf8 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x3e5bf8) {
            ctx->pc = 0x3E5BFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E5BF8u;
            // 0x3e5bfc: 0x42023  negu        $a0, $a0 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E5C00u;
            goto label_3e5c00;
        }
    }
    ctx->pc = 0x3E5C00u;
label_3e5c00:
    // 0x3e5c00: 0x4420001  bltzl       $v0, . + 4 + (0x1 << 2)
label_3e5c04:
    if (ctx->pc == 0x3E5C04u) {
        ctx->pc = 0x3E5C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5C00u;
        // 0x3e5c04: 0x21023  negu        $v0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E5C08u;
        goto label_3e5c08;
    }
    ctx->pc = 0x3E5C00u;
    {
        const bool branch_taken_0x3e5c00 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x3e5c00) {
            ctx->pc = 0x3E5C04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E5C00u;
            // 0x3e5c04: 0x21023  negu        $v0, $v0 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E5C08u;
            goto label_3e5c08;
        }
    }
    ctx->pc = 0x3E5C08u;
label_3e5c08:
    // 0x3e5c08: 0x1a31823  subu        $v1, $t5, $v1
    ctx->pc = 0x3e5c08u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 3)));
label_3e5c0c:
    // 0x3e5c0c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x3e5c0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_3e5c10:
    // 0x3e5c10: 0x4620001  bltzl       $v1, . + 4 + (0x1 << 2)
label_3e5c14:
    if (ctx->pc == 0x3E5C14u) {
        ctx->pc = 0x3E5C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5C10u;
        // 0x3e5c14: 0x31823  negu        $v1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E5C18u;
        goto label_3e5c18;
    }
    ctx->pc = 0x3E5C10u;
    {
        const bool branch_taken_0x3e5c10 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x3e5c10) {
            ctx->pc = 0x3E5C14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E5C10u;
            // 0x3e5c14: 0x31823  negu        $v1, $v1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E5C18u;
            goto label_3e5c18;
        }
    }
    ctx->pc = 0x3E5C18u;
label_3e5c18:
    // 0x3e5c18: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x3e5c18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_3e5c1c:
    // 0x3e5c1c: 0x87102a  slt         $v0, $a0, $a3
    ctx->pc = 0x3e5c1cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
label_3e5c20:
    // 0x3e5c20: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_3e5c24:
    if (ctx->pc == 0x3E5C24u) {
        ctx->pc = 0x3E5C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5C20u;
        // 0x3e5c24: 0x258b0002  addiu       $t3, $t4, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 12), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E5C28u;
        goto label_3e5c28;
    }
    ctx->pc = 0x3E5C20u;
    {
        const bool branch_taken_0x3e5c20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E5C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5C20u;
        // 0x3e5c24: 0x258b0002  addiu       $t3, $t4, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 12), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e5c20) {
            ctx->pc = 0x3E5C30u;
            goto label_3e5c30;
        }
    }
    ctx->pc = 0x3E5C28u;
label_3e5c28:
    // 0x3e5c28: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x3e5c28u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3e5c2c:
    // 0x3e5c2c: 0x160882d  daddu       $s1, $t3, $zero
    ctx->pc = 0x3e5c2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_3e5c30:
    // 0x3e5c30: 0x91040009  lbu         $a0, 0x9($t0)
    ctx->pc = 0x3e5c30u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 9)));
label_3e5c34:
    // 0x3e5c34: 0x9122000a  lbu         $v0, 0xA($t1)
    ctx->pc = 0x3e5c34u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 10)));
label_3e5c38:
    // 0x3e5c38: 0x90c3000b  lbu         $v1, 0xB($a2)
    ctx->pc = 0x3e5c38u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 11)));
label_3e5c3c:
    // 0x3e5c3c: 0x1e42023  subu        $a0, $t7, $a0
    ctx->pc = 0x3e5c3cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 4)));
label_3e5c40:
    // 0x3e5c40: 0xa21023  subu        $v0, $a1, $v0
    ctx->pc = 0x3e5c40u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_3e5c44:
    // 0x3e5c44: 0x4820001  bltzl       $a0, . + 4 + (0x1 << 2)
label_3e5c48:
    if (ctx->pc == 0x3E5C48u) {
        ctx->pc = 0x3E5C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5C44u;
        // 0x3e5c48: 0x42023  negu        $a0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E5C4Cu;
        goto label_3e5c4c;
    }
    ctx->pc = 0x3E5C44u;
    {
        const bool branch_taken_0x3e5c44 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x3e5c44) {
            ctx->pc = 0x3E5C48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E5C44u;
            // 0x3e5c48: 0x42023  negu        $a0, $a0 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E5C4Cu;
            goto label_3e5c4c;
        }
    }
    ctx->pc = 0x3E5C4Cu;
label_3e5c4c:
    // 0x3e5c4c: 0x4420001  bltzl       $v0, . + 4 + (0x1 << 2)
label_3e5c50:
    if (ctx->pc == 0x3E5C50u) {
        ctx->pc = 0x3E5C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5C4Cu;
        // 0x3e5c50: 0x21023  negu        $v0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E5C54u;
        goto label_3e5c54;
    }
    ctx->pc = 0x3E5C4Cu;
    {
        const bool branch_taken_0x3e5c4c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x3e5c4c) {
            ctx->pc = 0x3E5C50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E5C4Cu;
            // 0x3e5c50: 0x21023  negu        $v0, $v0 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E5C54u;
            goto label_3e5c54;
        }
    }
    ctx->pc = 0x3E5C54u;
label_3e5c54:
    // 0x3e5c54: 0x1a31823  subu        $v1, $t5, $v1
    ctx->pc = 0x3e5c54u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 3)));
label_3e5c58:
    // 0x3e5c58: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x3e5c58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_3e5c5c:
    // 0x3e5c5c: 0x4620001  bltzl       $v1, . + 4 + (0x1 << 2)
label_3e5c60:
    if (ctx->pc == 0x3E5C60u) {
        ctx->pc = 0x3E5C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5C5Cu;
        // 0x3e5c60: 0x31823  negu        $v1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E5C64u;
        goto label_3e5c64;
    }
    ctx->pc = 0x3E5C5Cu;
    {
        const bool branch_taken_0x3e5c5c = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x3e5c5c) {
            ctx->pc = 0x3E5C60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E5C5Cu;
            // 0x3e5c60: 0x31823  negu        $v1, $v1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E5C64u;
            goto label_3e5c64;
        }
    }
    ctx->pc = 0x3E5C64u;
label_3e5c64:
    // 0x3e5c64: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x3e5c64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_3e5c68:
    // 0x3e5c68: 0x87102a  slt         $v0, $a0, $a3
    ctx->pc = 0x3e5c68u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
label_3e5c6c:
    // 0x3e5c6c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_3e5c70:
    if (ctx->pc == 0x3E5C70u) {
        ctx->pc = 0x3E5C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5C6Cu;
        // 0x3e5c70: 0x258b0003  addiu       $t3, $t4, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 12), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E5C74u;
        goto label_3e5c74;
    }
    ctx->pc = 0x3E5C6Cu;
    {
        const bool branch_taken_0x3e5c6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E5C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5C6Cu;
        // 0x3e5c70: 0x258b0003  addiu       $t3, $t4, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 12), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e5c6c) {
            ctx->pc = 0x3E5C7Cu;
            goto label_3e5c7c;
        }
    }
    ctx->pc = 0x3E5C74u;
label_3e5c74:
    // 0x3e5c74: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x3e5c74u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3e5c78:
    // 0x3e5c78: 0x160882d  daddu       $s1, $t3, $zero
    ctx->pc = 0x3e5c78u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_3e5c7c:
    // 0x3e5c7c: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x3e5c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_3e5c80:
    // 0x3e5c80: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x3e5c80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_3e5c84:
    // 0x3e5c84: 0x258c0004  addiu       $t4, $t4, 0x4
    ctx->pc = 0x3e5c84u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
label_3e5c88:
    // 0x3e5c88: 0x24c6000c  addiu       $a2, $a2, 0xC
    ctx->pc = 0x3e5c88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12));
label_3e5c8c:
    // 0x3e5c8c: 0x2529000c  addiu       $t1, $t1, 0xC
    ctx->pc = 0x3e5c8cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 12));
label_3e5c90:
    // 0x3e5c90: 0x203102a  slt         $v0, $s0, $v1
    ctx->pc = 0x3e5c90u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_3e5c94:
    // 0x3e5c94: 0x1440ffae  bnez        $v0, . + 4 + (-0x52 << 2)
label_3e5c98:
    if (ctx->pc == 0x3E5C98u) {
        ctx->pc = 0x3E5C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5C94u;
        // 0x3e5c98: 0x2508000c  addiu       $t0, $t0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E5C9Cu;
        goto label_3e5c9c;
    }
    ctx->pc = 0x3E5C94u;
    {
        const bool branch_taken_0x3e5c94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E5C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5C94u;
        // 0x3e5c98: 0x2508000c  addiu       $t0, $t0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e5c94) {
            ctx->pc = 0x3E5B50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e5b50;
        }
    }
    ctx->pc = 0x3E5C9Cu;
label_3e5c9c:
    // 0x3e5c9c: 0x28a1021  addu        $v0, $s4, $t2
    ctx->pc = 0x3e5c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 10)));
label_3e5ca0:
    // 0x3e5ca0: 0xa0510000  sb          $s1, 0x0($v0)
    ctx->pc = 0x3e5ca0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 17));
label_3e5ca4:
    // 0x3e5ca4: 0x260502d  daddu       $t2, $s3, $zero
    ctx->pc = 0x3e5ca4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3e5ca8:
    // 0x3e5ca8: 0x159102a  slt         $v0, $t2, $t9
    ctx->pc = 0x3e5ca8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 25)) ? 1 : 0);
label_3e5cac:
    // 0x3e5cac: 0x5440ff2a  bnel        $v0, $zero, . + 4 + (-0xD6 << 2)
label_3e5cb0:
    if (ctx->pc == 0x3E5CB0u) {
        ctx->pc = 0x3E5CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5CACu;
        // 0x3e5cb0: 0x8dc30294  lw          $v1, 0x294($t6) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 660)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E5CB4u;
        goto label_3e5cb4;
    }
    ctx->pc = 0x3E5CACu;
    {
        const bool branch_taken_0x3e5cac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e5cac) {
            ctx->pc = 0x3E5CB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E5CACu;
            // 0x3e5cb0: 0x8dc30294  lw          $v1, 0x294($t6) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 660)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E5958u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e5958;
        }
    }
    ctx->pc = 0x3E5CB4u;
label_3e5cb4:
    // 0x3e5cb4: 0x1c0202d  daddu       $a0, $t6, $zero
    ctx->pc = 0x3e5cb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
label_3e5cb8:
    // 0x3e5cb8: 0x7fae0050  sq          $t6, 0x50($sp)
    ctx->pc = 0x3e5cb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 14));
label_3e5cbc:
    // 0x3e5cbc: 0xc0f8b02  jal         func_3E2C08
label_3e5cc0:
    if (ctx->pc == 0x3E5CC0u) {
        ctx->pc = 0x3E5CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5CBCu;
        // 0x3e5cc0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E5CC4u;
        goto label_3e5cc4;
    }
    ctx->pc = 0x3E5CBCu;
    SET_GPR_U32(ctx, 31, 0x3E5CC4u);
    ctx->pc = 0x3E5CC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E5CBCu;
    // 0x3e5cc0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2C08u, 0x3E5CBCu, 0x3E5CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E5CC4u;
label_3e5cc4:
    // 0x3e5cc4: 0x100001f9  b           . + 4 + (0x1F9 << 2)
label_3e5cc8:
    if (ctx->pc == 0x3E5CC8u) {
        ctx->pc = 0x3E5CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5CC4u;
        // 0x3e5cc8: 0x7bae0050  lq          $t6, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 14, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E5CCCu;
        goto label_3e5ccc;
    }
    ctx->pc = 0x3E5CC4u;
    {
        const bool branch_taken_0x3e5cc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E5CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5CC4u;
        // 0x3e5cc8: 0x7bae0050  lq          $t6, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 14, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e5cc4) {
            ctx->pc = 0x3E64ACu;
            goto label_3e64ac;
        }
    }
    ctx->pc = 0x3E5CCCu;
label_3e5ccc:
    // 0x3e5ccc: 0x19803c  dsll32      $s0, $t9, 0
    ctx->pc = 0x3e5cccu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 25) << (32 + 0));
label_3e5cd0:
    // 0x3e5cd0: 0x1c0202d  daddu       $a0, $t6, $zero
    ctx->pc = 0x3e5cd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
label_3e5cd4:
    // 0x3e5cd4: 0x10803e  dsrl32      $s0, $s0, 0
    ctx->pc = 0x3e5cd4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> (32 + 0));
label_3e5cd8:
    // 0x3e5cd8: 0x7fae0050  sq          $t6, 0x50($sp)
    ctx->pc = 0x3e5cd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 14));
label_3e5cdc:
    // 0x3e5cdc: 0x7fb90060  sq          $t9, 0x60($sp)
    ctx->pc = 0x3e5cdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 25));
label_3e5ce0:
    // 0x3e5ce0: 0xc0f8ae2  jal         func_3E2B88
label_3e5ce4:
    if (ctx->pc == 0x3E5CE4u) {
        ctx->pc = 0x3E5CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5CE0u;
        // 0x3e5ce4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E5CE8u;
        goto label_3e5ce8;
    }
    ctx->pc = 0x3E5CE0u;
    SET_GPR_U32(ctx, 31, 0x3E5CE8u);
    ctx->pc = 0x3E5CE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E5CE0u;
    // 0x3e5ce4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2B88u, 0x3E5CE0u, 0x3E5CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E5CE8u;
label_3e5ce8:
    // 0x3e5ce8: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x3e5ce8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3e5cec:
    // 0x3e5cec: 0x7bae0050  lq          $t6, 0x50($sp)
    ctx->pc = 0x3e5cecu;
    SET_GPR_VEC(ctx, 14, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3e5cf0:
    // 0x3e5cf0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3e5cf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3e5cf4:
    // 0x3e5cf4: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x3e5cf4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
label_3e5cf8:
    // 0x3e5cf8: 0xc0f8ae2  jal         func_3E2B88
label_3e5cfc:
    if (ctx->pc == 0x3E5CFCu) {
        ctx->pc = 0x3E5CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5CF8u;
        // 0x3e5cfc: 0x1c0202d  daddu       $a0, $t6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E5D00u;
        goto label_3e5d00;
    }
    ctx->pc = 0x3E5CF8u;
    SET_GPR_U32(ctx, 31, 0x3E5D00u);
    ctx->pc = 0x3E5CFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E5CF8u;
    // 0x3e5cfc: 0x1c0202d  daddu       $a0, $t6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2B88u, 0x3E5CF8u, 0x3E5D00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E5D00u;
label_3e5d00:
    // 0x3e5d00: 0x7bb90060  lq          $t9, 0x60($sp)
    ctx->pc = 0x3e5d00u;
    SET_GPR_VEC(ctx, 25, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3e5d04:
    // 0x3e5d04: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x3e5d04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
label_3e5d08:
    // 0x3e5d08: 0x1b200031  blez        $t9, . + 4 + (0x31 << 2)
label_3e5d0c:
    if (ctx->pc == 0x3E5D0Cu) {
        ctx->pc = 0x3E5D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5D08u;
        // 0x3e5d0c: 0x7bae0050  lq          $t6, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 14, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E5D10u;
        goto label_3e5d10;
    }
    ctx->pc = 0x3E5D08u;
    {
        const bool branch_taken_0x3e5d08 = (GPR_S32(ctx, 25) <= 0);
        ctx->pc = 0x3E5D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5D08u;
        // 0x3e5d0c: 0x7bae0050  lq          $t6, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 14, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e5d08) {
            ctx->pc = 0x3E5DD0u;
            goto label_3e5dd0;
        }
    }
    ctx->pc = 0x3E5D10u;
label_3e5d10:
    // 0x3e5d10: 0x8fa40024  lw          $a0, 0x24($sp)
    ctx->pc = 0x3e5d10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_3e5d14:
    // 0x3e5d14: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3e5d14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e5d18:
    // 0x3e5d18: 0x1b200014  blez        $t9, . + 4 + (0x14 << 2)
label_3e5d1c:
    if (ctx->pc == 0x3E5D1Cu) {
        ctx->pc = 0x3E5D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5D18u;
        // 0x3e5d1c: 0x33230003  andi        $v1, $t9, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 25) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E5D20u;
        goto label_3e5d20;
    }
    ctx->pc = 0x3E5D18u;
    {
        const bool branch_taken_0x3e5d18 = (GPR_S32(ctx, 25) <= 0);
        ctx->pc = 0x3E5D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5D18u;
        // 0x3e5d1c: 0x33230003  andi        $v1, $t9, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 25) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e5d18) {
            ctx->pc = 0x3E5D6Cu;
            goto label_3e5d6c;
        }
    }
    ctx->pc = 0x3E5D20u;
label_3e5d20:
    // 0x3e5d20: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
label_3e5d24:
    if (ctx->pc == 0x3E5D24u) {
        ctx->pc = 0x3E5D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5D20u;
        // 0x3e5d24: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E5D28u;
        goto label_3e5d28;
    }
    ctx->pc = 0x3E5D20u;
    {
        const bool branch_taken_0x3e5d20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E5D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5D20u;
        // 0x3e5d24: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e5d20) {
            ctx->pc = 0x3E5D88u;
            goto label_3e5d88;
        }
    }
    ctx->pc = 0x3E5D28u;
label_3e5d28:
    // 0x3e5d28: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
label_3e5d2c:
    if (ctx->pc == 0x3E5D2Cu) {
        ctx->pc = 0x3E5D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5D28u;
        // 0x3e5d2c: 0xa0950000  sb          $s5, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E5D30u;
        goto label_3e5d30;
    }
    ctx->pc = 0x3E5D28u;
    {
        const bool branch_taken_0x3e5d28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e5d28) {
            ctx->pc = 0x3E5D2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E5D28u;
            // 0x3e5d2c: 0xa0950000  sb          $s5, 0x0($a0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 21));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E5D70u;
            goto label_3e5d70;
        }
    }
    ctx->pc = 0x3E5D30u;
label_3e5d30:
    // 0x3e5d30: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x3e5d30u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_3e5d34:
    // 0x3e5d34: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
label_3e5d38:
    if (ctx->pc == 0x3E5D38u) {
        ctx->pc = 0x3E5D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5D34u;
        // 0x3e5d38: 0xa0950000  sb          $s5, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E5D3Cu;
        goto label_3e5d3c;
    }
    ctx->pc = 0x3E5D34u;
    {
        const bool branch_taken_0x3e5d34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e5d34) {
            ctx->pc = 0x3E5D38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E5D34u;
            // 0x3e5d38: 0xa0950000  sb          $s5, 0x0($a0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 21));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E5D5Cu;
            goto label_3e5d5c;
        }
    }
    ctx->pc = 0x3E5D3Cu;
label_3e5d3c:
    // 0x3e5d3c: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x3e5d3cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
label_3e5d40:
    // 0x3e5d40: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x3e5d40u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3e5d44:
    // 0x3e5d44: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x3e5d44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_3e5d48:
    // 0x3e5d48: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x3e5d48u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
label_3e5d4c:
    // 0x3e5d4c: 0x24850001  addiu       $a1, $a0, 0x1
    ctx->pc = 0x3e5d4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_3e5d50:
    // 0x3e5d50: 0x8fa60024  lw          $a2, 0x24($sp)
    ctx->pc = 0x3e5d50u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_3e5d54:
    // 0x3e5d54: 0x24c40001  addiu       $a0, $a2, 0x1
    ctx->pc = 0x3e5d54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_3e5d58:
    // 0x3e5d58: 0xa0950000  sb          $s5, 0x0($a0)
    ctx->pc = 0x3e5d58u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 21));
label_3e5d5c:
    // 0x3e5d5c: 0xa0b50000  sb          $s5, 0x0($a1)
    ctx->pc = 0x3e5d5cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 21));
label_3e5d60:
    // 0x3e5d60: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3e5d60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_3e5d64:
    // 0x3e5d64: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3e5d64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_3e5d68:
    // 0x3e5d68: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x3e5d68u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_3e5d6c:
    // 0x3e5d6c: 0xa0950000  sb          $s5, 0x0($a0)
    ctx->pc = 0x3e5d6cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 21));
label_3e5d70:
    // 0x3e5d70: 0xa0b50000  sb          $s5, 0x0($a1)
    ctx->pc = 0x3e5d70u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 21));
label_3e5d74:
    // 0x3e5d74: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3e5d74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_3e5d78:
    // 0x3e5d78: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x3e5d78u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_3e5d7c:
    // 0x3e5d7c: 0x2b9102a  slt         $v0, $s5, $t9
    ctx->pc = 0x3e5d7cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 25)) ? 1 : 0);
label_3e5d80:
    // 0x3e5d80: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_3e5d84:
    if (ctx->pc == 0x3E5D84u) {
        ctx->pc = 0x3E5D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5D80u;
        // 0x3e5d84: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E5D88u;
        goto label_3e5d88;
    }
    ctx->pc = 0x3E5D80u;
    {
        const bool branch_taken_0x3e5d80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E5D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5D80u;
        // 0x3e5d84: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e5d80) {
            ctx->pc = 0x3E5DD0u;
            goto label_3e5dd0;
        }
    }
    ctx->pc = 0x3E5D88u;
label_3e5d88:
    // 0x3e5d88: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x3e5d88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3e5d8c:
    // 0x3e5d8c: 0x0  nop
    ctx->pc = 0x3e5d8cu;
    // NOP
label_3e5d90:
    // 0x3e5d90: 0xa0d50000  sb          $s5, 0x0($a2)
    ctx->pc = 0x3e5d90u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 21));
label_3e5d94:
    // 0x3e5d94: 0x26a20001  addiu       $v0, $s5, 0x1
    ctx->pc = 0x3e5d94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_3e5d98:
    // 0x3e5d98: 0xa0b50000  sb          $s5, 0x0($a1)
    ctx->pc = 0x3e5d98u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 21));
label_3e5d9c:
    // 0x3e5d9c: 0x26a30002  addiu       $v1, $s5, 0x2
    ctx->pc = 0x3e5d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 2));
label_3e5da0:
    // 0x3e5da0: 0xa0c20001  sb          $v0, 0x1($a2)
    ctx->pc = 0x3e5da0u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1), (uint8_t)GPR_U32(ctx, 2));
label_3e5da4:
    // 0x3e5da4: 0x26a40003  addiu       $a0, $s5, 0x3
    ctx->pc = 0x3e5da4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 3));
label_3e5da8:
    // 0x3e5da8: 0xa0a20001  sb          $v0, 0x1($a1)
    ctx->pc = 0x3e5da8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 2));
label_3e5dac:
    // 0x3e5dac: 0x26b50004  addiu       $s5, $s5, 0x4
    ctx->pc = 0x3e5dacu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
label_3e5db0:
    // 0x3e5db0: 0xa0c30002  sb          $v1, 0x2($a2)
    ctx->pc = 0x3e5db0u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 2), (uint8_t)GPR_U32(ctx, 3));
label_3e5db4:
    // 0x3e5db4: 0x2b9102a  slt         $v0, $s5, $t9
    ctx->pc = 0x3e5db4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 25)) ? 1 : 0);
label_3e5db8:
    // 0x3e5db8: 0xa0a30002  sb          $v1, 0x2($a1)
    ctx->pc = 0x3e5db8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 3));
label_3e5dbc:
    // 0x3e5dbc: 0xa0c40003  sb          $a0, 0x3($a2)
    ctx->pc = 0x3e5dbcu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3), (uint8_t)GPR_U32(ctx, 4));
label_3e5dc0:
    // 0x3e5dc0: 0xa0a40003  sb          $a0, 0x3($a1)
    ctx->pc = 0x3e5dc0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 4));
label_3e5dc4:
    // 0x3e5dc4: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x3e5dc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_3e5dc8:
    // 0x3e5dc8: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
label_3e5dcc:
    if (ctx->pc == 0x3E5DCCu) {
        ctx->pc = 0x3E5DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5DC8u;
        // 0x3e5dcc: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E5DD0u;
        goto label_3e5dd0;
    }
    ctx->pc = 0x3E5DC8u;
    {
        const bool branch_taken_0x3e5dc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E5DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5DC8u;
        // 0x3e5dcc: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e5dc8) {
            ctx->pc = 0x3E5D90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e5d90;
        }
    }
    ctx->pc = 0x3E5DD0u;
label_3e5dd0:
    // 0x3e5dd0: 0x1c0202d  daddu       $a0, $t6, $zero
    ctx->pc = 0x3e5dd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
label_3e5dd4:
    // 0x3e5dd4: 0x7fae0050  sq          $t6, 0x50($sp)
    ctx->pc = 0x3e5dd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 14));
label_3e5dd8:
    // 0x3e5dd8: 0x7fb90060  sq          $t9, 0x60($sp)
    ctx->pc = 0x3e5dd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 25));
label_3e5ddc:
    // 0x3e5ddc: 0xc0f8ae2  jal         func_3E2B88
label_3e5de0:
    if (ctx->pc == 0x3E5DE0u) {
        ctx->pc = 0x3E5DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5DDCu;
        // 0x3e5de0: 0x24050c04  addiu       $a1, $zero, 0xC04 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3076));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E5DE4u;
        goto label_3e5de4;
    }
    ctx->pc = 0x3E5DDCu;
    SET_GPR_U32(ctx, 31, 0x3E5DE4u);
    ctx->pc = 0x3E5DE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E5DDCu;
    // 0x3e5de0: 0x24050c04  addiu       $a1, $zero, 0xC04 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3076));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2B88u, 0x3E5DDCu, 0x3E5DE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E5DE4u;
label_3e5de4:
    // 0x3e5de4: 0x241502ff  addiu       $s5, $zero, 0x2FF
    ctx->pc = 0x3e5de4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 767));
label_3e5de8:
    // 0x3e5de8: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x3e5de8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
label_3e5dec:
    // 0x3e5dec: 0xac400c00  sw          $zero, 0xC00($v0)
    ctx->pc = 0x3e5decu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 3072), GPR_U32(ctx, 0));
label_3e5df0:
    // 0x3e5df0: 0x8fa70020  lw          $a3, 0x20($sp)
    ctx->pc = 0x3e5df0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_3e5df4:
    // 0x3e5df4: 0x7bb90060  lq          $t9, 0x60($sp)
    ctx->pc = 0x3e5df4u;
    SET_GPR_VEC(ctx, 25, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3e5df8:
    // 0x3e5df8: 0x7bae0050  lq          $t6, 0x50($sp)
    ctx->pc = 0x3e5df8u;
    SET_GPR_VEC(ctx, 14, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3e5dfc:
    // 0x3e5dfc: 0x24e20bfc  addiu       $v0, $a3, 0xBFC
    ctx->pc = 0x3e5dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 3068));
label_3e5e00:
    // 0x3e5e00: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x3e5e00u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_3e5e04:
    // 0x3e5e04: 0x26b5fffc  addiu       $s5, $s5, -0x4
    ctx->pc = 0x3e5e04u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967292));
label_3e5e08:
    // 0x3e5e08: 0xac40fffc  sw          $zero, -0x4($v0)
    ctx->pc = 0x3e5e08u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967292), GPR_U32(ctx, 0));
label_3e5e0c:
    // 0x3e5e0c: 0xac40fff8  sw          $zero, -0x8($v0)
    ctx->pc = 0x3e5e0cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967288), GPR_U32(ctx, 0));
label_3e5e10:
    // 0x3e5e10: 0xac40fff4  sw          $zero, -0xC($v0)
    ctx->pc = 0x3e5e10u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967284), GPR_U32(ctx, 0));
label_3e5e14:
    // 0x3e5e14: 0x6a1fffa  bgez        $s5, . + 4 + (-0x6 << 2)
label_3e5e18:
    if (ctx->pc == 0x3E5E18u) {
        ctx->pc = 0x3E5E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5E14u;
        // 0x3e5e18: 0x2442fff0  addiu       $v0, $v0, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E5E1Cu;
        goto label_3e5e1c;
    }
    ctx->pc = 0x3E5E14u;
    {
        const bool branch_taken_0x3e5e14 = (GPR_S32(ctx, 21) >= 0);
        ctx->pc = 0x3E5E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5E14u;
        // 0x3e5e18: 0x2442fff0  addiu       $v0, $v0, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e5e14) {
            ctx->pc = 0x3E5E00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e5e00;
        }
    }
    ctx->pc = 0x3E5E1Cu;
label_3e5e1c:
    // 0x3e5e1c: 0x24080060  addiu       $t0, $zero, 0x60
    ctx->pc = 0x3e5e1cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_3e5e20:
    // 0x3e5e20: 0x320a02d  daddu       $s4, $t9, $zero
    ctx->pc = 0x3e5e20u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
label_3e5e24:
    // 0x3e5e24: 0x12200194  beqz        $s1, . + 4 + (0x194 << 2)
label_3e5e28:
    if (ctx->pc == 0x3E5E28u) {
        ctx->pc = 0x3E5E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5E24u;
        // 0x3e5e28: 0xafa8001c  sw          $t0, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E5E2Cu;
        goto label_3e5e2c;
    }
    ctx->pc = 0x3E5E24u;
    {
        const bool branch_taken_0x3e5e24 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E5E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5E24u;
        // 0x3e5e28: 0xafa8001c  sw          $t0, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e5e24) {
            ctx->pc = 0x3E6478u;
            goto label_3e6478;
        }
    }
    ctx->pc = 0x3E5E2Cu;
label_3e5e2c:
    // 0x3e5e2c: 0x2722ffff  addiu       $v0, $t9, -0x1
    ctx->pc = 0x3e5e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 25), 4294967295));
label_3e5e30:
    // 0x3e5e30: 0xafa2003c  sw          $v0, 0x3C($sp)
    ctx->pc = 0x3e5e30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 2));
label_3e5e34:
    // 0x3e5e34: 0xafa20038  sw          $v0, 0x38($sp)
    ctx->pc = 0x3e5e34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
label_3e5e38:
    // 0x3e5e38: 0x8fa4001c  lw          $a0, 0x1C($sp)
    ctx->pc = 0x3e5e38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
label_3e5e3c:
    // 0x3e5e3c: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x3e5e3cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3e5e40:
    // 0x3e5e40: 0x8fa5001c  lw          $a1, 0x1C($sp)
    ctx->pc = 0x3e5e40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
label_3e5e44:
    // 0x3e5e44: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x3e5e44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_3e5e48:
    // 0x3e5e48: 0x28840000  slti        $a0, $a0, 0x0
    ctx->pc = 0x3e5e48u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)0) ? 1 : 0);
label_3e5e4c:
    // 0x3e5e4c: 0x24a50060  addiu       $a1, $a1, 0x60
    ctx->pc = 0x3e5e4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 96));
label_3e5e50:
    // 0x3e5e50: 0x8fa6003c  lw          $a2, 0x3C($sp)
    ctx->pc = 0x3e5e50u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_3e5e54:
    // 0x3e5e54: 0xafa30030  sw          $v1, 0x30($sp)
    ctx->pc = 0x3e5e54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 3));
label_3e5e58:
    // 0x3e5e58: 0xafa40034  sw          $a0, 0x34($sp)
    ctx->pc = 0x3e5e58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 4));
label_3e5e5c:
    // 0x3e5e5c: 0x18c00095  blez        $a2, . + 4 + (0x95 << 2)
label_3e5e60:
    if (ctx->pc == 0x3E5E60u) {
        ctx->pc = 0x3E5E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5E5Cu;
        // 0x3e5e60: 0xafa5002c  sw          $a1, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E5E64u;
        goto label_3e5e64;
    }
    ctx->pc = 0x3E5E5Cu;
    {
        const bool branch_taken_0x3e5e5c = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x3E5E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5E5Cu;
        // 0x3e5e60: 0xafa5002c  sw          $a1, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e5e5c) {
            ctx->pc = 0x3E60B4u;
            goto label_3e60b4;
        }
    }
    ctx->pc = 0x3E5E64u;
label_3e5e64:
    // 0x3e5e64: 0x26b10001  addiu       $s1, $s5, 0x1
    ctx->pc = 0x3e5e64u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_3e5e68:
    // 0x3e5e68: 0x234102a  slt         $v0, $s1, $s4
    ctx->pc = 0x3e5e68u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
label_3e5e6c:
    // 0x3e5e6c: 0x1040008c  beqz        $v0, . + 4 + (0x8C << 2)
label_3e5e70:
    if (ctx->pc == 0x3E5E70u) {
        ctx->pc = 0x3E5E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5E6Cu;
        // 0x3e5e70: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E5E74u;
        goto label_3e5e74;
    }
    ctx->pc = 0x3E5E6Cu;
    {
        const bool branch_taken_0x3e5e6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E5E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5E6Cu;
        // 0x3e5e70: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e5e6c) {
            ctx->pc = 0x3E60A0u;
            goto label_3e60a0;
        }
    }
    ctx->pc = 0x3E5E74u;
label_3e5e74:
    // 0x3e5e74: 0x8fa80010  lw          $t0, 0x10($sp)
    ctx->pc = 0x3e5e74u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_3e5e78:
    // 0x3e5e78: 0x71040  sll         $v0, $a3, 1
    ctx->pc = 0x3e5e78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
label_3e5e7c:
    // 0x3e5e7c: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x3e5e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_3e5e80:
    // 0x3e5e80: 0x151840  sll         $v1, $s5, 1
    ctx->pc = 0x3e5e80u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 21), 1));
label_3e5e84:
    // 0x3e5e84: 0x751821  addu        $v1, $v1, $s5
    ctx->pc = 0x3e5e84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
label_3e5e88:
    // 0x3e5e88: 0x489021  addu        $s2, $v0, $t0
    ctx->pc = 0x3e5e88u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
label_3e5e8c:
    // 0x3e5e8c: 0x689821  addu        $s3, $v1, $t0
    ctx->pc = 0x3e5e8cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
label_3e5e90:
    // 0x3e5e90: 0x2871023  subu        $v0, $s4, $a3
    ctx->pc = 0x3e5e90u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 7)));
label_3e5e94:
    // 0x3e5e94: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3e5e94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_3e5e98:
    // 0x3e5e98: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
label_3e5e9c:
    if (ctx->pc == 0x3E5E9Cu) {
        ctx->pc = 0x3E5E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5E98u;
        // 0x3e5e9c: 0x240182d  daddu       $v1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E5EA0u;
        goto label_3e5ea0;
    }
    ctx->pc = 0x3E5E98u;
    {
        const bool branch_taken_0x3e5e98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E5E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5E98u;
        // 0x3e5e9c: 0x240182d  daddu       $v1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e5e98) {
            ctx->pc = 0x3E5F48u;
            goto label_3e5f48;
        }
    }
    ctx->pc = 0x3E5EA0u;
label_3e5ea0:
    // 0x3e5ea0: 0x92450000  lbu         $a1, 0x0($s2)
    ctx->pc = 0x3e5ea0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
label_3e5ea4:
    // 0x3e5ea4: 0x92640000  lbu         $a0, 0x0($s3)
    ctx->pc = 0x3e5ea4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_3e5ea8:
    // 0x3e5ea8: 0x92620001  lbu         $v0, 0x1($s3)
    ctx->pc = 0x3e5ea8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
label_3e5eac:
    // 0x3e5eac: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x3e5eacu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_3e5eb0:
    // 0x3e5eb0: 0x92460001  lbu         $a2, 0x1($s2)
    ctx->pc = 0x3e5eb0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
label_3e5eb4:
    // 0x3e5eb4: 0x92630002  lbu         $v1, 0x2($s3)
    ctx->pc = 0x3e5eb4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 2)));
label_3e5eb8:
    // 0x3e5eb8: 0x4820001  bltzl       $a0, . + 4 + (0x1 << 2)
label_3e5ebc:
    if (ctx->pc == 0x3E5EBCu) {
        ctx->pc = 0x3E5EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5EB8u;
        // 0x3e5ebc: 0x42023  negu        $a0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E5EC0u;
        goto label_3e5ec0;
    }
    ctx->pc = 0x3E5EB8u;
    {
        const bool branch_taken_0x3e5eb8 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x3e5eb8) {
            ctx->pc = 0x3E5EBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E5EB8u;
            // 0x3e5ebc: 0x42023  negu        $a0, $a0 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E5EC0u;
            goto label_3e5ec0;
        }
    }
    ctx->pc = 0x3E5EC0u;
label_3e5ec0:
    // 0x3e5ec0: 0x92450002  lbu         $a1, 0x2($s2)
    ctx->pc = 0x3e5ec0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
label_3e5ec4:
    // 0x3e5ec4: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x3e5ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_3e5ec8:
    // 0x3e5ec8: 0x4420001  bltzl       $v0, . + 4 + (0x1 << 2)
label_3e5ecc:
    if (ctx->pc == 0x3E5ECCu) {
        ctx->pc = 0x3E5ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5EC8u;
        // 0x3e5ecc: 0x21023  negu        $v0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E5ED0u;
        goto label_3e5ed0;
    }
    ctx->pc = 0x3E5EC8u;
    {
        const bool branch_taken_0x3e5ec8 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x3e5ec8) {
            ctx->pc = 0x3E5ECCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E5EC8u;
            // 0x3e5ecc: 0x21023  negu        $v0, $v0 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E5ED0u;
            goto label_3e5ed0;
        }
    }
    ctx->pc = 0x3E5ED0u;
label_3e5ed0:
    // 0x3e5ed0: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x3e5ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_3e5ed4:
    // 0x3e5ed4: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x3e5ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_3e5ed8:
    // 0x3e5ed8: 0x4620001  bltzl       $v1, . + 4 + (0x1 << 2)
label_3e5edc:
    if (ctx->pc == 0x3E5EDCu) {
        ctx->pc = 0x3E5EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5ED8u;
        // 0x3e5edc: 0x31823  negu        $v1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E5EE0u;
        goto label_3e5ee0;
    }
    ctx->pc = 0x3E5ED8u;
    {
        const bool branch_taken_0x3e5ed8 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x3e5ed8) {
            ctx->pc = 0x3E5EDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E5ED8u;
            // 0x3e5edc: 0x31823  negu        $v1, $v1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E5EE0u;
            goto label_3e5ee0;
        }
    }
    ctx->pc = 0x3E5EE0u;
label_3e5ee0:
    // 0x3e5ee0: 0x838021  addu        $s0, $a0, $v1
    ctx->pc = 0x3e5ee0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_3e5ee4:
    // 0x3e5ee4: 0x8fa3001c  lw          $v1, 0x1C($sp)
    ctx->pc = 0x3e5ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
label_3e5ee8:
    // 0x3e5ee8: 0x70102a  slt         $v0, $v1, $s0
    ctx->pc = 0x3e5ee8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_3e5eec:
    // 0x3e5eec: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
label_3e5ef0:
    if (ctx->pc == 0x3E5EF0u) {
        ctx->pc = 0x3E5EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5EECu;
        // 0x3e5ef0: 0x26b10002  addiu       $s1, $s5, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E5EF4u;
        goto label_3e5ef4;
    }
    ctx->pc = 0x3E5EECu;
    {
        const bool branch_taken_0x3e5eec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E5EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5EECu;
        // 0x3e5ef0: 0x26b10002  addiu       $s1, $s5, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e5eec) {
            ctx->pc = 0x3E5F3Cu;
            goto label_3e5f3c;
        }
    }
    ctx->pc = 0x3E5EF4u;
label_3e5ef4:
    // 0x3e5ef4: 0x1c0202d  daddu       $a0, $t6, $zero
    ctx->pc = 0x3e5ef4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
label_3e5ef8:
    // 0x3e5ef8: 0x7fa70040  sq          $a3, 0x40($sp)
    ctx->pc = 0x3e5ef8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 7));
label_3e5efc:
    // 0x3e5efc: 0x7fae0050  sq          $t6, 0x50($sp)
    ctx->pc = 0x3e5efcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 14));
label_3e5f00:
    // 0x3e5f00: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x3e5f00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_3e5f04:
    // 0x3e5f04: 0xc0f8ae2  jal         func_3E2B88
label_3e5f08:
    if (ctx->pc == 0x3E5F08u) {
        ctx->pc = 0x3E5F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5F04u;
        // 0x3e5f08: 0x7fb90060  sq          $t9, 0x60($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 25));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E5F0Cu;
        goto label_3e5f0c;
    }
    ctx->pc = 0x3E5F04u;
    SET_GPR_U32(ctx, 31, 0x3E5F0Cu);
    ctx->pc = 0x3E5F08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E5F04u;
    // 0x3e5f08: 0x7fb90060  sq          $t9, 0x60($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 25));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2B88u, 0x3E5F04u, 0x3E5F0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E5F0Cu;
label_3e5f0c:
    // 0x3e5f0c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x3e5f0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_3e5f10:
    // 0x3e5f10: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x3e5f10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_3e5f14:
    // 0x3e5f14: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3e5f14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_3e5f18:
    // 0x3e5f18: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3e5f18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3e5f1c:
    // 0x3e5f1c: 0xa0550004  sb          $s5, 0x4($v0)
    ctx->pc = 0x3e5f1cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4), (uint8_t)GPR_U32(ctx, 21));
label_3e5f20:
    // 0x3e5f20: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x3e5f20u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_3e5f24:
    // 0x3e5f24: 0x7ba70040  lq          $a3, 0x40($sp)
    ctx->pc = 0x3e5f24u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3e5f28:
    // 0x3e5f28: 0xa0470005  sb          $a3, 0x5($v0)
    ctx->pc = 0x3e5f28u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 5), (uint8_t)GPR_U32(ctx, 7));
label_3e5f2c:
    // 0x3e5f2c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x3e5f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_3e5f30:
    // 0x3e5f30: 0x7bb90060  lq          $t9, 0x60($sp)
    ctx->pc = 0x3e5f30u;
    SET_GPR_VEC(ctx, 25, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3e5f34:
    // 0x3e5f34: 0x7bae0050  lq          $t6, 0x50($sp)
    ctx->pc = 0x3e5f34u;
    SET_GPR_VEC(ctx, 14, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3e5f38:
    // 0x3e5f38: 0x26b10002  addiu       $s1, $s5, 0x2
    ctx->pc = 0x3e5f38u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), 2));
label_3e5f3c:
    // 0x3e5f3c: 0x234102a  slt         $v0, $s1, $s4
    ctx->pc = 0x3e5f3cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
label_3e5f40:
    // 0x3e5f40: 0x10400057  beqz        $v0, . + 4 + (0x57 << 2)
label_3e5f44:
    if (ctx->pc == 0x3E5F44u) {
        ctx->pc = 0x3E5F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5F40u;
        // 0x3e5f44: 0x26430003  addiu       $v1, $s2, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E5F48u;
        goto label_3e5f48;
    }
    ctx->pc = 0x3E5F40u;
    {
        const bool branch_taken_0x3e5f40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E5F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5F40u;
        // 0x3e5f44: 0x26430003  addiu       $v1, $s2, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e5f40) {
            ctx->pc = 0x3E60A0u;
            goto label_3e60a0;
        }
    }
    ctx->pc = 0x3E5F48u;
label_3e5f48:
    // 0x3e5f48: 0x60902d  daddu       $s2, $v1, $zero
    ctx->pc = 0x3e5f48u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_3e5f4c:
    // 0x3e5f4c: 0x240b82d  daddu       $s7, $s2, $zero
    ctx->pc = 0x3e5f4cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3e5f50:
    // 0x3e5f50: 0x240b02d  daddu       $s6, $s2, $zero
    ctx->pc = 0x3e5f50u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3e5f54:
    // 0x3e5f54: 0x0  nop
    ctx->pc = 0x3e5f54u;
    // NOP
label_3e5f58:
    // 0x3e5f58: 0x92c50000  lbu         $a1, 0x0($s6)
    ctx->pc = 0x3e5f58u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
label_3e5f5c:
    // 0x3e5f5c: 0x92630000  lbu         $v1, 0x0($s3)
    ctx->pc = 0x3e5f5cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_3e5f60:
    // 0x3e5f60: 0x92620001  lbu         $v0, 0x1($s3)
    ctx->pc = 0x3e5f60u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
label_3e5f64:
    // 0x3e5f64: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x3e5f64u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_3e5f68:
    // 0x3e5f68: 0x92e60001  lbu         $a2, 0x1($s7)
    ctx->pc = 0x3e5f68u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 1)));
label_3e5f6c:
    // 0x3e5f6c: 0x92450002  lbu         $a1, 0x2($s2)
    ctx->pc = 0x3e5f6cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
label_3e5f70:
    // 0x3e5f70: 0x4620001  bltzl       $v1, . + 4 + (0x1 << 2)
label_3e5f74:
    if (ctx->pc == 0x3E5F74u) {
        ctx->pc = 0x3E5F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5F70u;
        // 0x3e5f74: 0x31823  negu        $v1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E5F78u;
        goto label_3e5f78;
    }
    ctx->pc = 0x3E5F70u;
    {
        const bool branch_taken_0x3e5f70 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x3e5f70) {
            ctx->pc = 0x3E5F74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E5F70u;
            // 0x3e5f74: 0x31823  negu        $v1, $v1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E5F78u;
            goto label_3e5f78;
        }
    }
    ctx->pc = 0x3E5F78u;
label_3e5f78:
    // 0x3e5f78: 0x92640002  lbu         $a0, 0x2($s3)
    ctx->pc = 0x3e5f78u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 2)));
label_3e5f7c:
    // 0x3e5f7c: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x3e5f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_3e5f80:
    // 0x3e5f80: 0x4420001  bltzl       $v0, . + 4 + (0x1 << 2)
label_3e5f84:
    if (ctx->pc == 0x3E5F84u) {
        ctx->pc = 0x3E5F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5F80u;
        // 0x3e5f84: 0x21023  negu        $v0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E5F88u;
        goto label_3e5f88;
    }
    ctx->pc = 0x3E5F80u;
    {
        const bool branch_taken_0x3e5f80 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x3e5f80) {
            ctx->pc = 0x3E5F84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E5F80u;
            // 0x3e5f84: 0x21023  negu        $v0, $v0 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E5F88u;
            goto label_3e5f88;
        }
    }
    ctx->pc = 0x3E5F88u;
label_3e5f88:
    // 0x3e5f88: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x3e5f88u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_3e5f8c:
    // 0x3e5f8c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3e5f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3e5f90:
    // 0x3e5f90: 0x4820001  bltzl       $a0, . + 4 + (0x1 << 2)
label_3e5f94:
    if (ctx->pc == 0x3E5F94u) {
        ctx->pc = 0x3E5F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5F90u;
        // 0x3e5f94: 0x42023  negu        $a0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E5F98u;
        goto label_3e5f98;
    }
    ctx->pc = 0x3E5F90u;
    {
        const bool branch_taken_0x3e5f90 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x3e5f90) {
            ctx->pc = 0x3E5F94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E5F90u;
            // 0x3e5f94: 0x42023  negu        $a0, $a0 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E5F98u;
            goto label_3e5f98;
        }
    }
    ctx->pc = 0x3E5F98u;
label_3e5f98:
    // 0x3e5f98: 0x8fa5001c  lw          $a1, 0x1C($sp)
    ctx->pc = 0x3e5f98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
label_3e5f9c:
    // 0x3e5f9c: 0x648021  addu        $s0, $v1, $a0
    ctx->pc = 0x3e5f9cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_3e5fa0:
    // 0x3e5fa0: 0xb0102a  slt         $v0, $a1, $s0
    ctx->pc = 0x3e5fa0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_3e5fa4:
    // 0x3e5fa4: 0x54400013  bnel        $v0, $zero, . + 4 + (0x13 << 2)
label_3e5fa8:
    if (ctx->pc == 0x3E5FA8u) {
        ctx->pc = 0x3E5FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5FA4u;
        // 0x3e5fa8: 0x92c50003  lbu         $a1, 0x3($s6) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E5FACu;
        goto label_3e5fac;
    }
    ctx->pc = 0x3E5FA4u;
    {
        const bool branch_taken_0x3e5fa4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e5fa4) {
            ctx->pc = 0x3E5FA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E5FA4u;
            // 0x3e5fa8: 0x92c50003  lbu         $a1, 0x3($s6) (Delay Slot)
            SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 3)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E5FF4u;
            goto label_3e5ff4;
        }
    }
    ctx->pc = 0x3E5FACu;
label_3e5fac:
    // 0x3e5fac: 0x1c0202d  daddu       $a0, $t6, $zero
    ctx->pc = 0x3e5facu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
label_3e5fb0:
    // 0x3e5fb0: 0x7fa70040  sq          $a3, 0x40($sp)
    ctx->pc = 0x3e5fb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 7));
label_3e5fb4:
    // 0x3e5fb4: 0x7fae0050  sq          $t6, 0x50($sp)
    ctx->pc = 0x3e5fb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 14));
label_3e5fb8:
    // 0x3e5fb8: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x3e5fb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_3e5fbc:
    // 0x3e5fbc: 0xc0f8ae2  jal         func_3E2B88
label_3e5fc0:
    if (ctx->pc == 0x3E5FC0u) {
        ctx->pc = 0x3E5FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5FBCu;
        // 0x3e5fc0: 0x7fb90060  sq          $t9, 0x60($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 25));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E5FC4u;
        goto label_3e5fc4;
    }
    ctx->pc = 0x3E5FBCu;
    SET_GPR_U32(ctx, 31, 0x3E5FC4u);
    ctx->pc = 0x3E5FC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E5FBCu;
    // 0x3e5fc0: 0x7fb90060  sq          $t9, 0x60($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 25));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2B88u, 0x3E5FBCu, 0x3E5FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E5FC4u;
label_3e5fc4:
    // 0x3e5fc4: 0x8fa60020  lw          $a2, 0x20($sp)
    ctx->pc = 0x3e5fc4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_3e5fc8:
    // 0x3e5fc8: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x3e5fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_3e5fcc:
    // 0x3e5fcc: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x3e5fccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_3e5fd0:
    // 0x3e5fd0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3e5fd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3e5fd4:
    // 0x3e5fd4: 0xa0550004  sb          $s5, 0x4($v0)
    ctx->pc = 0x3e5fd4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4), (uint8_t)GPR_U32(ctx, 21));
label_3e5fd8:
    // 0x3e5fd8: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x3e5fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_3e5fdc:
    // 0x3e5fdc: 0xa0510005  sb          $s1, 0x5($v0)
    ctx->pc = 0x3e5fdcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 5), (uint8_t)GPR_U32(ctx, 17));
label_3e5fe0:
    // 0x3e5fe0: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x3e5fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_3e5fe4:
    // 0x3e5fe4: 0x7bb90060  lq          $t9, 0x60($sp)
    ctx->pc = 0x3e5fe4u;
    SET_GPR_VEC(ctx, 25, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3e5fe8:
    // 0x3e5fe8: 0x7bae0050  lq          $t6, 0x50($sp)
    ctx->pc = 0x3e5fe8u;
    SET_GPR_VEC(ctx, 14, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3e5fec:
    // 0x3e5fec: 0x7ba70040  lq          $a3, 0x40($sp)
    ctx->pc = 0x3e5fecu;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3e5ff0:
    // 0x3e5ff0: 0x92c50003  lbu         $a1, 0x3($s6)
    ctx->pc = 0x3e5ff0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 3)));
label_3e5ff4:
    // 0x3e5ff4: 0x92640000  lbu         $a0, 0x0($s3)
    ctx->pc = 0x3e5ff4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_3e5ff8:
    // 0x3e5ff8: 0x92620001  lbu         $v0, 0x1($s3)
    ctx->pc = 0x3e5ff8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
label_3e5ffc:
    // 0x3e5ffc: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x3e5ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_3e6000:
    // 0x3e6000: 0x92e60004  lbu         $a2, 0x4($s7)
    ctx->pc = 0x3e6000u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 4)));
label_3e6004:
    // 0x3e6004: 0x92630002  lbu         $v1, 0x2($s3)
    ctx->pc = 0x3e6004u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 2)));
label_3e6008:
    // 0x3e6008: 0x4820001  bltzl       $a0, . + 4 + (0x1 << 2)
label_3e600c:
    if (ctx->pc == 0x3E600Cu) {
        ctx->pc = 0x3E600Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6008u;
        // 0x3e600c: 0x42023  negu        $a0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E6010u;
        goto label_3e6010;
    }
    ctx->pc = 0x3E6008u;
    {
        const bool branch_taken_0x3e6008 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x3e6008) {
            ctx->pc = 0x3E600Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E6008u;
            // 0x3e600c: 0x42023  negu        $a0, $a0 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E6010u;
            goto label_3e6010;
        }
    }
    ctx->pc = 0x3E6010u;
label_3e6010:
    // 0x3e6010: 0x92450005  lbu         $a1, 0x5($s2)
    ctx->pc = 0x3e6010u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 5)));
label_3e6014:
    // 0x3e6014: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x3e6014u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_3e6018:
    // 0x3e6018: 0x4420001  bltzl       $v0, . + 4 + (0x1 << 2)
label_3e601c:
    if (ctx->pc == 0x3E601Cu) {
        ctx->pc = 0x3E601Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6018u;
        // 0x3e601c: 0x21023  negu        $v0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E6020u;
        goto label_3e6020;
    }
    ctx->pc = 0x3E6018u;
    {
        const bool branch_taken_0x3e6018 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x3e6018) {
            ctx->pc = 0x3E601Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E6018u;
            // 0x3e601c: 0x21023  negu        $v0, $v0 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E6020u;
            goto label_3e6020;
        }
    }
    ctx->pc = 0x3E6020u;
label_3e6020:
    // 0x3e6020: 0x8fa8001c  lw          $t0, 0x1C($sp)
    ctx->pc = 0x3e6020u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
label_3e6024:
    // 0x3e6024: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x3e6024u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_3e6028:
    // 0x3e6028: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x3e6028u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_3e602c:
    // 0x3e602c: 0x4620001  bltzl       $v1, . + 4 + (0x1 << 2)
label_3e6030:
    if (ctx->pc == 0x3E6030u) {
        ctx->pc = 0x3E6030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E602Cu;
        // 0x3e6030: 0x31823  negu        $v1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E6034u;
        goto label_3e6034;
    }
    ctx->pc = 0x3E602Cu;
    {
        const bool branch_taken_0x3e602c = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x3e602c) {
            ctx->pc = 0x3E6030u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E602Cu;
            // 0x3e6030: 0x31823  negu        $v1, $v1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E6034u;
            goto label_3e6034;
        }
    }
    ctx->pc = 0x3E6034u;
label_3e6034:
    // 0x3e6034: 0x838021  addu        $s0, $a0, $v1
    ctx->pc = 0x3e6034u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_3e6038:
    // 0x3e6038: 0x110102a  slt         $v0, $t0, $s0
    ctx->pc = 0x3e6038u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_3e603c:
    // 0x3e603c: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
label_3e6040:
    if (ctx->pc == 0x3E6040u) {
        ctx->pc = 0x3E6040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E603Cu;
        // 0x3e6040: 0x263e0001  addiu       $fp, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E6044u;
        goto label_3e6044;
    }
    ctx->pc = 0x3E603Cu;
    {
        const bool branch_taken_0x3e603c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E6040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E603Cu;
        // 0x3e6040: 0x263e0001  addiu       $fp, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e603c) {
            ctx->pc = 0x3E6088u;
            goto label_3e6088;
        }
    }
    ctx->pc = 0x3E6044u;
label_3e6044:
    // 0x3e6044: 0x1c0202d  daddu       $a0, $t6, $zero
    ctx->pc = 0x3e6044u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
label_3e6048:
    // 0x3e6048: 0x7fa70040  sq          $a3, 0x40($sp)
    ctx->pc = 0x3e6048u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 7));
label_3e604c:
    // 0x3e604c: 0x7fae0050  sq          $t6, 0x50($sp)
    ctx->pc = 0x3e604cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 14));
label_3e6050:
    // 0x3e6050: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x3e6050u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_3e6054:
    // 0x3e6054: 0xc0f8ae2  jal         func_3E2B88
label_3e6058:
    if (ctx->pc == 0x3E6058u) {
        ctx->pc = 0x3E6058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6054u;
        // 0x3e6058: 0x7fb90060  sq          $t9, 0x60($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 25));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E605Cu;
        goto label_3e605c;
    }
    ctx->pc = 0x3E6054u;
    SET_GPR_U32(ctx, 31, 0x3E605Cu);
    ctx->pc = 0x3E6058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E6054u;
    // 0x3e6058: 0x7fb90060  sq          $t9, 0x60($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 25));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2B88u, 0x3E6054u, 0x3E605Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E605Cu;
label_3e605c:
    // 0x3e605c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x3e605cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_3e6060:
    // 0x3e6060: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x3e6060u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_3e6064:
    // 0x3e6064: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3e6064u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_3e6068:
    // 0x3e6068: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3e6068u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3e606c:
    // 0x3e606c: 0xa05e0005  sb          $fp, 0x5($v0)
    ctx->pc = 0x3e606cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 5), (uint8_t)GPR_U32(ctx, 30));
label_3e6070:
    // 0x3e6070: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x3e6070u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_3e6074:
    // 0x3e6074: 0xa0550004  sb          $s5, 0x4($v0)
    ctx->pc = 0x3e6074u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4), (uint8_t)GPR_U32(ctx, 21));
label_3e6078:
    // 0x3e6078: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x3e6078u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_3e607c:
    // 0x3e607c: 0x7bb90060  lq          $t9, 0x60($sp)
    ctx->pc = 0x3e607cu;
    SET_GPR_VEC(ctx, 25, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3e6080:
    // 0x3e6080: 0x7bae0050  lq          $t6, 0x50($sp)
    ctx->pc = 0x3e6080u;
    SET_GPR_VEC(ctx, 14, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3e6084:
    // 0x3e6084: 0x7ba70040  lq          $a3, 0x40($sp)
    ctx->pc = 0x3e6084u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3e6088:
    // 0x3e6088: 0x26310002  addiu       $s1, $s1, 0x2
    ctx->pc = 0x3e6088u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
label_3e608c:
    // 0x3e608c: 0x26520006  addiu       $s2, $s2, 0x6
    ctx->pc = 0x3e608cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 6));
label_3e6090:
    // 0x3e6090: 0x26f70006  addiu       $s7, $s7, 0x6
    ctx->pc = 0x3e6090u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 6));
label_3e6094:
    // 0x3e6094: 0x234102a  slt         $v0, $s1, $s4
    ctx->pc = 0x3e6094u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
label_3e6098:
    // 0x3e6098: 0x1440ffaf  bnez        $v0, . + 4 + (-0x51 << 2)
label_3e609c:
    if (ctx->pc == 0x3E609Cu) {
        ctx->pc = 0x3E609Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6098u;
        // 0x3e609c: 0x26d60006  addiu       $s6, $s6, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E60A0u;
        goto label_3e60a0;
    }
    ctx->pc = 0x3E6098u;
    {
        const bool branch_taken_0x3e6098 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E609Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6098u;
        // 0x3e609c: 0x26d60006  addiu       $s6, $s6, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e6098) {
            ctx->pc = 0x3E5F58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e5f58;
        }
    }
    ctx->pc = 0x3E60A0u;
label_3e60a0:
    // 0x3e60a0: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x3e60a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_3e60a4:
    // 0x3e60a4: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x3e60a4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_3e60a8:
    // 0x3e60a8: 0x2a5102a  slt         $v0, $s5, $a1
    ctx->pc = 0x3e60a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_3e60ac:
    // 0x3e60ac: 0x5440ff6e  bnel        $v0, $zero, . + 4 + (-0x92 << 2)
label_3e60b0:
    if (ctx->pc == 0x3E60B0u) {
        ctx->pc = 0x3E60B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E60ACu;
        // 0x3e60b0: 0x26b10001  addiu       $s1, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E60B4u;
        goto label_3e60b4;
    }
    ctx->pc = 0x3E60ACu;
    {
        const bool branch_taken_0x3e60ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e60ac) {
            ctx->pc = 0x3E60B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E60ACu;
            // 0x3e60b0: 0x26b10001  addiu       $s1, $s5, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E5E68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e5e68;
        }
    }
    ctx->pc = 0x3E60B4u;
label_3e60b4:
    // 0x3e60b4: 0x8fa60034  lw          $a2, 0x34($sp)
    ctx->pc = 0x3e60b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
label_3e60b8:
    // 0x3e60b8: 0x14c000d0  bnez        $a2, . + 4 + (0xD0 << 2)
label_3e60bc:
    if (ctx->pc == 0x3E60BCu) {
        ctx->pc = 0x3E60BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E60B8u;
        // 0x3e60bc: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E60C0u;
        goto label_3e60c0;
    }
    ctx->pc = 0x3E60B8u;
    {
        const bool branch_taken_0x3e60b8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E60BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E60B8u;
        // 0x3e60bc: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e60b8) {
            ctx->pc = 0x3E63FCu;
            goto label_3e63fc;
        }
    }
    ctx->pc = 0x3E60C0u;
label_3e60c0:
    // 0x3e60c0: 0x141040  sll         $v0, $s4, 1
    ctx->pc = 0x3e60c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 1));
label_3e60c4:
    // 0x3e60c4: 0x8fb20020  lw          $s2, 0x20($sp)
    ctx->pc = 0x3e60c4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_3e60c8:
    // 0x3e60c8: 0x548021  addu        $s0, $v0, $s4
    ctx->pc = 0x3e60c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_3e60cc:
    // 0x3e60cc: 0x0  nop
    ctx->pc = 0x3e60ccu;
    // NOP
label_3e60d0:
    // 0x3e60d0: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x3e60d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3e60d4:
    // 0x3e60d4: 0x104000c4  beqz        $v0, . + 4 + (0xC4 << 2)
label_3e60d8:
    if (ctx->pc == 0x3E60D8u) {
        ctx->pc = 0x3E60D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E60D4u;
        // 0x3e60d8: 0x8fa80010  lw          $t0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E60DCu;
        goto label_3e60dc;
    }
    ctx->pc = 0x3E60D4u;
    {
        const bool branch_taken_0x3e60d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E60D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E60D4u;
        // 0x3e60d8: 0x8fa80010  lw          $t0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e60d4) {
            ctx->pc = 0x3E63E8u;
            goto label_3e63e8;
        }
    }
    ctx->pc = 0x3E60DCu;
label_3e60dc:
    // 0x3e60dc: 0x40602d  daddu       $t4, $v0, $zero
    ctx->pc = 0x3e60dcu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e60e0:
    // 0x3e60e0: 0x8fa70018  lw          $a3, 0x18($sp)
    ctx->pc = 0x3e60e0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_3e60e4:
    // 0x3e60e4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x3e60e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_3e60e8:
    // 0x3e60e8: 0xf9982a  slt         $s3, $a3, $t9
    ctx->pc = 0x3e60e8u;
    SET_GPR_U64(ctx, 19, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 25)) ? 1 : 0);
label_3e60ec:
    // 0x3e60ec: 0x2087821  addu        $t7, $s0, $t0
    ctx->pc = 0x3e60ecu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 8)));
label_3e60f0:
    // 0x3e60f0: 0x2825821  addu        $t3, $s4, $v0
    ctx->pc = 0x3e60f0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_3e60f4:
    // 0x3e60f4: 0x91850004  lbu         $a1, 0x4($t4)
    ctx->pc = 0x3e60f4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 4)));
label_3e60f8:
    // 0x3e60f8: 0x8fa40024  lw          $a0, 0x24($sp)
    ctx->pc = 0x3e60f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_3e60fc:
    // 0x3e60fc: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x3e60fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_3e6100:
    // 0x3e6100: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x3e6100u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_3e6104:
    // 0x3e6104: 0x54102a  slt         $v0, $v0, $s4
    ctx->pc = 0x3e6104u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
label_3e6108:
    // 0x3e6108: 0x104000b0  beqz        $v0, . + 4 + (0xB0 << 2)
label_3e610c:
    if (ctx->pc == 0x3E610Cu) {
        ctx->pc = 0x3E610Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6108u;
        // 0x3e610c: 0x8fa60024  lw          $a2, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E6110u;
        goto label_3e6110;
    }
    ctx->pc = 0x3E6108u;
    {
        const bool branch_taken_0x3e6108 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E610Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6108u;
        // 0x3e610c: 0x8fa60024  lw          $a2, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e6108) {
            ctx->pc = 0x3E63CCu;
            goto label_3e63cc;
        }
    }
    ctx->pc = 0x3E6110u;
label_3e6110:
    // 0x3e6110: 0x91840005  lbu         $a0, 0x5($t4)
    ctx->pc = 0x3e6110u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 5)));
label_3e6114:
    // 0x3e6114: 0xc41821  addu        $v1, $a2, $a0
    ctx->pc = 0x3e6114u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_3e6118:
    // 0x3e6118: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x3e6118u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_3e611c:
    // 0x3e611c: 0x54102a  slt         $v0, $v0, $s4
    ctx->pc = 0x3e611cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
label_3e6120:
    // 0x3e6120: 0x104000aa  beqz        $v0, . + 4 + (0xAA << 2)
label_3e6124:
    if (ctx->pc == 0x3E6124u) {
        ctx->pc = 0x3E6124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6120u;
        // 0x3e6124: 0x32820001  andi        $v0, $s4, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E6128u;
        goto label_3e6128;
    }
    ctx->pc = 0x3E6120u;
    {
        const bool branch_taken_0x3e6120 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E6124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6120u;
        // 0x3e6124: 0x32820001  andi        $v0, $s4, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e6120) {
            ctx->pc = 0x3E63CCu;
            goto label_3e63cc;
        }
    }
    ctx->pc = 0x3E6128u;
label_3e6128:
    // 0x3e6128: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_3e612c:
    if (ctx->pc == 0x3E612Cu) {
        ctx->pc = 0x3E612Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6128u;
        // 0x3e612c: 0xa0682d  daddu       $t5, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E6130u;
        goto label_3e6130;
    }
    ctx->pc = 0x3E6128u;
    {
        const bool branch_taken_0x3e6128 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E612Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6128u;
        // 0x3e612c: 0xa0682d  daddu       $t5, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e6128) {
            ctx->pc = 0x3E6138u;
            goto label_3e6138;
        }
    }
    ctx->pc = 0x3E6130u;
label_3e6130:
    // 0x3e6130: 0x80682d  daddu       $t5, $a0, $zero
    ctx->pc = 0x3e6130u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3e6134:
    // 0x3e6134: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x3e6134u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3e6138:
    // 0x3e6138: 0x8fa70024  lw          $a3, 0x24($sp)
    ctx->pc = 0x3e6138u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_3e613c:
    // 0x3e613c: 0x25effffd  addiu       $t7, $t7, -0x3
    ctx->pc = 0x3e613cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294967293));
label_3e6140:
    // 0x3e6140: 0x8fa5003c  lw          $a1, 0x3C($sp)
    ctx->pc = 0x3e6140u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_3e6144:
    // 0x3e6144: 0x256bffff  addiu       $t3, $t3, -0x1
    ctx->pc = 0x3e6144u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
label_3e6148:
    // 0x3e6148: 0xed1021  addu        $v0, $a3, $t5
    ctx->pc = 0x3e6148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 13)));
label_3e614c:
    // 0x3e614c: 0x8fa60010  lw          $a2, 0x10($sp)
    ctx->pc = 0x3e614cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_3e6150:
    // 0x3e6150: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x3e6150u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_3e6154:
    // 0x3e6154: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x3e6154u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e6158:
    // 0x3e6158: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x3e6158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_3e615c:
    // 0x3e615c: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x3e615cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_3e6160:
    // 0x3e6160: 0xafa5003c  sw          $a1, 0x3C($sp)
    ctx->pc = 0x3e6160u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 5));
label_3e6164:
    // 0x3e6164: 0x2610fffd  addiu       $s0, $s0, -0x3
    ctx->pc = 0x3e6164u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967293));
label_3e6168:
    // 0x3e6168: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3e6168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_3e616c:
    // 0x3e616c: 0xafa20038  sw          $v0, 0x38($sp)
    ctx->pc = 0x3e616cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
label_3e6170:
    // 0x3e6170: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x3e6170u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_3e6174:
    // 0x3e6174: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3e6174u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3e6178:
    // 0x3e6178: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x3e6178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_3e617c:
    // 0x3e617c: 0x81e70000  lb          $a3, 0x0($t7)
    ctx->pc = 0x3e617cu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 0)));
label_3e6180:
    // 0x3e6180: 0x81e30001  lb          $v1, 0x1($t7)
    ctx->pc = 0x3e6180u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 1)));
label_3e6184:
    // 0x3e6184: 0x81e50002  lb          $a1, 0x2($t7)
    ctx->pc = 0x3e6184u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 2)));
label_3e6188:
    // 0x3e6188: 0xa0470000  sb          $a3, 0x0($v0)
    ctx->pc = 0x3e6188u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 7));
label_3e618c:
    // 0x3e618c: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x3e618cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
label_3e6190:
    // 0x3e6190: 0xa0450002  sb          $a1, 0x2($v0)
    ctx->pc = 0x3e6190u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 5));
label_3e6194:
    // 0x3e6194: 0x8fa70018  lw          $a3, 0x18($sp)
    ctx->pc = 0x3e6194u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_3e6198:
    // 0x3e6198: 0x14e00080  bnez        $a3, . + 4 + (0x80 << 2)
label_3e619c:
    if (ctx->pc == 0x3E619Cu) {
        ctx->pc = 0x3E619Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6198u;
        // 0x3e619c: 0x2694ffff  addiu       $s4, $s4, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E61A0u;
        goto label_3e61a0;
    }
    ctx->pc = 0x3E6198u;
    {
        const bool branch_taken_0x3e6198 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E619Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6198u;
        // 0x3e619c: 0x2694ffff  addiu       $s4, $s4, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e6198) {
            ctx->pc = 0x3E639Cu;
            goto label_3e639c;
        }
    }
    ctx->pc = 0x3E61A0u;
label_3e61a0:
    // 0x3e61a0: 0x1260007e  beqz        $s3, . + 4 + (0x7E << 2)
label_3e61a4:
    if (ctx->pc == 0x3E61A4u) {
        ctx->pc = 0x3E61A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E61A0u;
        // 0x3e61a4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E61A8u;
        goto label_3e61a8;
    }
    ctx->pc = 0x3E61A0u;
    {
        const bool branch_taken_0x3e61a0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E61A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E61A0u;
        // 0x3e61a4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e61a0) {
            ctx->pc = 0x3E639Cu;
            goto label_3e639c;
        }
    }
    ctx->pc = 0x3E61A8u;
label_3e61a8:
    // 0x3e61a8: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x3e61a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_3e61ac:
    // 0x3e61ac: 0x100502d  daddu       $t2, $t0, $zero
    ctx->pc = 0x3e61acu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_3e61b0:
    // 0x3e61b0: 0x33230003  andi        $v1, $t9, 0x3
    ctx->pc = 0x3e61b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 25) & (uint64_t)(uint16_t)3);
label_3e61b4:
    // 0x3e61b4: 0x1b200025  blez        $t9, . + 4 + (0x25 << 2)
label_3e61b8:
    if (ctx->pc == 0x3E61B8u) {
        ctx->pc = 0x3E61B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E61B4u;
        // 0x3e61b8: 0x444821  addu        $t1, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E61BCu;
        goto label_3e61bc;
    }
    ctx->pc = 0x3E61B4u;
    {
        const bool branch_taken_0x3e61b4 = (GPR_S32(ctx, 25) <= 0);
        ctx->pc = 0x3E61B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E61B4u;
        // 0x3e61b8: 0x444821  addu        $t1, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e61b4) {
            ctx->pc = 0x3E624Cu;
            goto label_3e624c;
        }
    }
    ctx->pc = 0x3E61BCu;
label_3e61bc:
    // 0x3e61bc: 0x50600036  beql        $v1, $zero, . + 4 + (0x36 << 2)
label_3e61c0:
    if (ctx->pc == 0x3E61C0u) {
        ctx->pc = 0x3E61C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E61BCu;
        // 0x3e61c0: 0x8dc20294  lw          $v0, 0x294($t6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 660)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E61C4u;
        goto label_3e61c4;
    }
    ctx->pc = 0x3E61BCu;
    {
        const bool branch_taken_0x3e61bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e61bc) {
            ctx->pc = 0x3E61C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E61BCu;
            // 0x3e61c0: 0x8dc20294  lw          $v0, 0x294($t6) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 660)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E6298u;
            goto label_3e6298;
        }
    }
    ctx->pc = 0x3E61C4u;
label_3e61c4:
    // 0x3e61c4: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x3e61c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_3e61c8:
    // 0x3e61c8: 0x54400021  bnel        $v0, $zero, . + 4 + (0x21 << 2)
label_3e61cc:
    if (ctx->pc == 0x3E61CCu) {
        ctx->pc = 0x3E61CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E61C8u;
        // 0x3e61cc: 0x8dc20294  lw          $v0, 0x294($t6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 660)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E61D0u;
        goto label_3e61d0;
    }
    ctx->pc = 0x3E61C8u;
    {
        const bool branch_taken_0x3e61c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e61c8) {
            ctx->pc = 0x3E61CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E61C8u;
            // 0x3e61cc: 0x8dc20294  lw          $v0, 0x294($t6) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 660)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E6250u;
            goto label_3e6250;
        }
    }
    ctx->pc = 0x3E61D0u;
label_3e61d0:
    // 0x3e61d0: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x3e61d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_3e61d4:
    // 0x3e61d4: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
label_3e61d8:
    if (ctx->pc == 0x3E61D8u) {
        ctx->pc = 0x3E61D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E61D4u;
        // 0x3e61d8: 0x8dc20294  lw          $v0, 0x294($t6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 660)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E61DCu;
        goto label_3e61dc;
    }
    ctx->pc = 0x3E61D4u;
    {
        const bool branch_taken_0x3e61d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e61d4) {
            ctx->pc = 0x3E61D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E61D4u;
            // 0x3e61d8: 0x8dc20294  lw          $v0, 0x294($t6) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 660)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E6214u;
            goto label_3e6214;
        }
    }
    ctx->pc = 0x3E61DCu;
label_3e61dc:
    // 0x3e61dc: 0x8dc40294  lw          $a0, 0x294($t6)
    ctx->pc = 0x3e61dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 660)));
label_3e61e0:
    // 0x3e61e0: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x3e61e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_3e61e4:
    // 0x3e61e4: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x3e61e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_3e61e8:
    // 0x3e61e8: 0x54430004  bnel        $v0, $v1, . + 4 + (0x4 << 2)
label_3e61ec:
    if (ctx->pc == 0x3E61ECu) {
        ctx->pc = 0x3E61ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E61E8u;
        // 0x3e61ec: 0x8dc30294  lw          $v1, 0x294($t6) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 660)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E61F0u;
        goto label_3e61f0;
    }
    ctx->pc = 0x3E61E8u;
    {
        const bool branch_taken_0x3e61e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x3e61e8) {
            ctx->pc = 0x3E61ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E61E8u;
            // 0x3e61ec: 0x8dc30294  lw          $v1, 0x294($t6) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 660)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E61FCu;
            goto label_3e61fc;
        }
    }
    ctx->pc = 0x3E61F0u;
label_3e61f0:
    // 0x3e61f0: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x3e61f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
label_3e61f4:
    // 0x3e61f4: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x3e61f4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
label_3e61f8:
    // 0x3e61f8: 0x8dc30294  lw          $v1, 0x294($t6)
    ctx->pc = 0x3e61f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 660)));
label_3e61fc:
    // 0x3e61fc: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x3e61fcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_3e6200:
    // 0x3e6200: 0x14540003  bne         $v0, $s4, . + 4 + (0x3 << 2)
label_3e6204:
    if (ctx->pc == 0x3E6204u) {
        ctx->pc = 0x3E6204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6200u;
        // 0x3e6204: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E6208u;
        goto label_3e6208;
    }
    ctx->pc = 0x3E6200u;
    {
        const bool branch_taken_0x3e6200 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        ctx->pc = 0x3E6204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6200u;
        // 0x3e6204: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e6200) {
            ctx->pc = 0x3E6210u;
            goto label_3e6210;
        }
    }
    ctx->pc = 0x3E6208u;
label_3e6208:
    // 0x3e6208: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x3e6208u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_3e620c:
    // 0x3e620c: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x3e620cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
label_3e6210:
    // 0x3e6210: 0x8dc20294  lw          $v0, 0x294($t6)
    ctx->pc = 0x3e6210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 660)));
label_3e6214:
    // 0x3e6214: 0x91440000  lbu         $a0, 0x0($t2)
    ctx->pc = 0x3e6214u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
label_3e6218:
    // 0x3e6218: 0x472821  addu        $a1, $v0, $a3
    ctx->pc = 0x3e6218u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_3e621c:
    // 0x3e621c: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x3e621cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_3e6220:
    // 0x3e6220: 0x54640004  bnel        $v1, $a0, . + 4 + (0x4 << 2)
label_3e6224:
    if (ctx->pc == 0x3E6224u) {
        ctx->pc = 0x3E6224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6220u;
        // 0x3e6224: 0x8dc20294  lw          $v0, 0x294($t6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 660)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E6228u;
        goto label_3e6228;
    }
    ctx->pc = 0x3E6220u;
    {
        const bool branch_taken_0x3e6220 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x3e6220) {
            ctx->pc = 0x3E6224u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E6220u;
            // 0x3e6224: 0x8dc20294  lw          $v0, 0x294($t6) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 660)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E6234u;
            goto label_3e6234;
        }
    }
    ctx->pc = 0x3E6228u;
label_3e6228:
    // 0x3e6228: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x3e6228u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
label_3e622c:
    // 0x3e622c: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x3e622cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
label_3e6230:
    // 0x3e6230: 0x8dc20294  lw          $v0, 0x294($t6)
    ctx->pc = 0x3e6230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 660)));
label_3e6234:
    // 0x3e6234: 0x472021  addu        $a0, $v0, $a3
    ctx->pc = 0x3e6234u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_3e6238:
    // 0x3e6238: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x3e6238u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_3e623c:
    // 0x3e623c: 0x14740003  bne         $v1, $s4, . + 4 + (0x3 << 2)
label_3e6240:
    if (ctx->pc == 0x3E6240u) {
        ctx->pc = 0x3E6240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E623Cu;
        // 0x3e6240: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E6244u;
        goto label_3e6244;
    }
    ctx->pc = 0x3E623Cu;
    {
        const bool branch_taken_0x3e623c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 20));
        ctx->pc = 0x3E6240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E623Cu;
        // 0x3e6240: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e623c) {
            ctx->pc = 0x3E624Cu;
            goto label_3e624c;
        }
    }
    ctx->pc = 0x3E6244u;
label_3e6244:
    // 0x3e6244: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x3e6244u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_3e6248:
    // 0x3e6248: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x3e6248u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
label_3e624c:
    // 0x3e624c: 0x8dc20294  lw          $v0, 0x294($t6)
    ctx->pc = 0x3e624cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 660)));
label_3e6250:
    // 0x3e6250: 0x91440000  lbu         $a0, 0x0($t2)
    ctx->pc = 0x3e6250u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
label_3e6254:
    // 0x3e6254: 0x472821  addu        $a1, $v0, $a3
    ctx->pc = 0x3e6254u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_3e6258:
    // 0x3e6258: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x3e6258u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_3e625c:
    // 0x3e625c: 0x54640004  bnel        $v1, $a0, . + 4 + (0x4 << 2)
label_3e6260:
    if (ctx->pc == 0x3E6260u) {
        ctx->pc = 0x3E6260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E625Cu;
        // 0x3e6260: 0x8dc20294  lw          $v0, 0x294($t6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 660)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E6264u;
        goto label_3e6264;
    }
    ctx->pc = 0x3E625Cu;
    {
        const bool branch_taken_0x3e625c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x3e625c) {
            ctx->pc = 0x3E6260u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E625Cu;
            // 0x3e6260: 0x8dc20294  lw          $v0, 0x294($t6) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 660)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E6270u;
            goto label_3e6270;
        }
    }
    ctx->pc = 0x3E6264u;
label_3e6264:
    // 0x3e6264: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x3e6264u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
label_3e6268:
    // 0x3e6268: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x3e6268u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
label_3e626c:
    // 0x3e626c: 0x8dc20294  lw          $v0, 0x294($t6)
    ctx->pc = 0x3e626cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 660)));
label_3e6270:
    // 0x3e6270: 0x472021  addu        $a0, $v0, $a3
    ctx->pc = 0x3e6270u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_3e6274:
    // 0x3e6274: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x3e6274u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_3e6278:
    // 0x3e6278: 0x14740003  bne         $v1, $s4, . + 4 + (0x3 << 2)
label_3e627c:
    if (ctx->pc == 0x3E627Cu) {
        ctx->pc = 0x3E627Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6278u;
        // 0x3e627c: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E6280u;
        goto label_3e6280;
    }
    ctx->pc = 0x3E6278u;
    {
        const bool branch_taken_0x3e6278 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 20));
        ctx->pc = 0x3E627Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6278u;
        // 0x3e627c: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e6278) {
            ctx->pc = 0x3E6288u;
            goto label_3e6288;
        }
    }
    ctx->pc = 0x3E6280u;
label_3e6280:
    // 0x3e6280: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x3e6280u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_3e6284:
    // 0x3e6284: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x3e6284u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
label_3e6288:
    // 0x3e6288: 0xf9102a  slt         $v0, $a3, $t9
    ctx->pc = 0x3e6288u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 25)) ? 1 : 0);
label_3e628c:
    // 0x3e628c: 0x10400044  beqz        $v0, . + 4 + (0x44 << 2)
label_3e6290:
    if (ctx->pc == 0x3E6290u) {
        ctx->pc = 0x3E6290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E628Cu;
        // 0x3e6290: 0x8fa30024  lw          $v1, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E6294u;
        goto label_3e6294;
    }
    ctx->pc = 0x3E628Cu;
    {
        const bool branch_taken_0x3e628c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E6290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E628Cu;
        // 0x3e6290: 0x8fa30024  lw          $v1, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e628c) {
            ctx->pc = 0x3E63A0u;
            goto label_3e63a0;
        }
    }
    ctx->pc = 0x3E6294u;
label_3e6294:
    // 0x3e6294: 0x8dc20294  lw          $v0, 0x294($t6)
    ctx->pc = 0x3e6294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 660)));
label_3e6298:
    // 0x3e6298: 0x91440000  lbu         $a0, 0x0($t2)
    ctx->pc = 0x3e6298u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
label_3e629c:
    // 0x3e629c: 0x472821  addu        $a1, $v0, $a3
    ctx->pc = 0x3e629cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_3e62a0:
    // 0x3e62a0: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x3e62a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_3e62a4:
    // 0x3e62a4: 0x54640004  bnel        $v1, $a0, . + 4 + (0x4 << 2)
label_3e62a8:
    if (ctx->pc == 0x3E62A8u) {
        ctx->pc = 0x3E62A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E62A4u;
        // 0x3e62a8: 0x8dc20294  lw          $v0, 0x294($t6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 660)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E62ACu;
        goto label_3e62ac;
    }
    ctx->pc = 0x3E62A4u;
    {
        const bool branch_taken_0x3e62a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x3e62a4) {
            ctx->pc = 0x3E62A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E62A4u;
            // 0x3e62a8: 0x8dc20294  lw          $v0, 0x294($t6) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 660)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E62B8u;
            goto label_3e62b8;
        }
    }
    ctx->pc = 0x3E62ACu;
label_3e62ac:
    // 0x3e62ac: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x3e62acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
label_3e62b0:
    // 0x3e62b0: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x3e62b0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
label_3e62b4:
    // 0x3e62b4: 0x8dc20294  lw          $v0, 0x294($t6)
    ctx->pc = 0x3e62b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 660)));
label_3e62b8:
    // 0x3e62b8: 0x472021  addu        $a0, $v0, $a3
    ctx->pc = 0x3e62b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_3e62bc:
    // 0x3e62bc: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x3e62bcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_3e62c0:
    // 0x3e62c0: 0x54740004  bnel        $v1, $s4, . + 4 + (0x4 << 2)
label_3e62c4:
    if (ctx->pc == 0x3E62C4u) {
        ctx->pc = 0x3E62C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E62C0u;
        // 0x3e62c4: 0x8dc20294  lw          $v0, 0x294($t6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 660)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E62C8u;
        goto label_3e62c8;
    }
    ctx->pc = 0x3E62C0u;
    {
        const bool branch_taken_0x3e62c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 20));
        if (branch_taken_0x3e62c0) {
            ctx->pc = 0x3E62C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E62C0u;
            // 0x3e62c4: 0x8dc20294  lw          $v0, 0x294($t6) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 660)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E62D4u;
            goto label_3e62d4;
        }
    }
    ctx->pc = 0x3E62C8u;
label_3e62c8:
    // 0x3e62c8: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x3e62c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_3e62cc:
    // 0x3e62cc: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x3e62ccu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
label_3e62d0:
    // 0x3e62d0: 0x8dc20294  lw          $v0, 0x294($t6)
    ctx->pc = 0x3e62d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 660)));
label_3e62d4:
    // 0x3e62d4: 0x24e60001  addiu       $a2, $a3, 0x1
    ctx->pc = 0x3e62d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_3e62d8:
    // 0x3e62d8: 0x91440000  lbu         $a0, 0x0($t2)
    ctx->pc = 0x3e62d8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
label_3e62dc:
    // 0x3e62dc: 0x462821  addu        $a1, $v0, $a2
    ctx->pc = 0x3e62dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_3e62e0:
    // 0x3e62e0: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x3e62e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_3e62e4:
    // 0x3e62e4: 0x54640004  bnel        $v1, $a0, . + 4 + (0x4 << 2)
label_3e62e8:
    if (ctx->pc == 0x3E62E8u) {
        ctx->pc = 0x3E62E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E62E4u;
        // 0x3e62e8: 0x8dc20294  lw          $v0, 0x294($t6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 660)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E62ECu;
        goto label_3e62ec;
    }
    ctx->pc = 0x3E62E4u;
    {
        const bool branch_taken_0x3e62e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x3e62e4) {
            ctx->pc = 0x3E62E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E62E4u;
            // 0x3e62e8: 0x8dc20294  lw          $v0, 0x294($t6) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 660)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E62F8u;
            goto label_3e62f8;
        }
    }
    ctx->pc = 0x3E62ECu;
label_3e62ec:
    // 0x3e62ec: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x3e62ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
label_3e62f0:
    // 0x3e62f0: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x3e62f0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
label_3e62f4:
    // 0x3e62f4: 0x8dc20294  lw          $v0, 0x294($t6)
    ctx->pc = 0x3e62f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 660)));
label_3e62f8:
    // 0x3e62f8: 0x462021  addu        $a0, $v0, $a2
    ctx->pc = 0x3e62f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_3e62fc:
    // 0x3e62fc: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x3e62fcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_3e6300:
    // 0x3e6300: 0x54740004  bnel        $v1, $s4, . + 4 + (0x4 << 2)
label_3e6304:
    if (ctx->pc == 0x3E6304u) {
        ctx->pc = 0x3E6304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6300u;
        // 0x3e6304: 0x8dc20294  lw          $v0, 0x294($t6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 660)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E6308u;
        goto label_3e6308;
    }
    ctx->pc = 0x3E6300u;
    {
        const bool branch_taken_0x3e6300 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 20));
        if (branch_taken_0x3e6300) {
            ctx->pc = 0x3E6304u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E6300u;
            // 0x3e6304: 0x8dc20294  lw          $v0, 0x294($t6) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 660)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E6314u;
            goto label_3e6314;
        }
    }
    ctx->pc = 0x3E6308u;
label_3e6308:
    // 0x3e6308: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x3e6308u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_3e630c:
    // 0x3e630c: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x3e630cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
label_3e6310:
    // 0x3e6310: 0x8dc20294  lw          $v0, 0x294($t6)
    ctx->pc = 0x3e6310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 660)));
label_3e6314:
    // 0x3e6314: 0x24e60002  addiu       $a2, $a3, 0x2
    ctx->pc = 0x3e6314u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
label_3e6318:
    // 0x3e6318: 0x91440000  lbu         $a0, 0x0($t2)
    ctx->pc = 0x3e6318u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
label_3e631c:
    // 0x3e631c: 0x462821  addu        $a1, $v0, $a2
    ctx->pc = 0x3e631cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_3e6320:
    // 0x3e6320: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x3e6320u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_3e6324:
    // 0x3e6324: 0x54640004  bnel        $v1, $a0, . + 4 + (0x4 << 2)
label_3e6328:
    if (ctx->pc == 0x3E6328u) {
        ctx->pc = 0x3E6328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6324u;
        // 0x3e6328: 0x8dc20294  lw          $v0, 0x294($t6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 660)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E632Cu;
        goto label_3e632c;
    }
    ctx->pc = 0x3E6324u;
    {
        const bool branch_taken_0x3e6324 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x3e6324) {
            ctx->pc = 0x3E6328u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E6324u;
            // 0x3e6328: 0x8dc20294  lw          $v0, 0x294($t6) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 660)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E6338u;
            goto label_3e6338;
        }
    }
    ctx->pc = 0x3E632Cu;
label_3e632c:
    // 0x3e632c: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x3e632cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
label_3e6330:
    // 0x3e6330: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x3e6330u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
label_3e6334:
    // 0x3e6334: 0x8dc20294  lw          $v0, 0x294($t6)
    ctx->pc = 0x3e6334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 660)));
label_3e6338:
    // 0x3e6338: 0x462021  addu        $a0, $v0, $a2
    ctx->pc = 0x3e6338u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_3e633c:
    // 0x3e633c: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x3e633cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_3e6340:
    // 0x3e6340: 0x54740004  bnel        $v1, $s4, . + 4 + (0x4 << 2)
label_3e6344:
    if (ctx->pc == 0x3E6344u) {
        ctx->pc = 0x3E6344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6340u;
        // 0x3e6344: 0x8dc20294  lw          $v0, 0x294($t6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 660)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E6348u;
        goto label_3e6348;
    }
    ctx->pc = 0x3E6340u;
    {
        const bool branch_taken_0x3e6340 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 20));
        if (branch_taken_0x3e6340) {
            ctx->pc = 0x3E6344u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E6340u;
            // 0x3e6344: 0x8dc20294  lw          $v0, 0x294($t6) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 660)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E6354u;
            goto label_3e6354;
        }
    }
    ctx->pc = 0x3E6348u;
label_3e6348:
    // 0x3e6348: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x3e6348u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_3e634c:
    // 0x3e634c: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x3e634cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
label_3e6350:
    // 0x3e6350: 0x8dc20294  lw          $v0, 0x294($t6)
    ctx->pc = 0x3e6350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 660)));
label_3e6354:
    // 0x3e6354: 0x24e60003  addiu       $a2, $a3, 0x3
    ctx->pc = 0x3e6354u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 3));
label_3e6358:
    // 0x3e6358: 0x91440000  lbu         $a0, 0x0($t2)
    ctx->pc = 0x3e6358u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
label_3e635c:
    // 0x3e635c: 0x462821  addu        $a1, $v0, $a2
    ctx->pc = 0x3e635cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_3e6360:
    // 0x3e6360: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x3e6360u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_3e6364:
    // 0x3e6364: 0x54640004  bnel        $v1, $a0, . + 4 + (0x4 << 2)
label_3e6368:
    if (ctx->pc == 0x3E6368u) {
        ctx->pc = 0x3E6368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6364u;
        // 0x3e6368: 0x8dc20294  lw          $v0, 0x294($t6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 660)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E636Cu;
        goto label_3e636c;
    }
    ctx->pc = 0x3E6364u;
    {
        const bool branch_taken_0x3e6364 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x3e6364) {
            ctx->pc = 0x3E6368u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E6364u;
            // 0x3e6368: 0x8dc20294  lw          $v0, 0x294($t6) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 660)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E6378u;
            goto label_3e6378;
        }
    }
    ctx->pc = 0x3E636Cu;
label_3e636c:
    // 0x3e636c: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x3e636cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
label_3e6370:
    // 0x3e6370: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x3e6370u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
label_3e6374:
    // 0x3e6374: 0x8dc20294  lw          $v0, 0x294($t6)
    ctx->pc = 0x3e6374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 660)));
label_3e6378:
    // 0x3e6378: 0x462021  addu        $a0, $v0, $a2
    ctx->pc = 0x3e6378u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_3e637c:
    // 0x3e637c: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x3e637cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_3e6380:
    // 0x3e6380: 0x14740003  bne         $v1, $s4, . + 4 + (0x3 << 2)
label_3e6384:
    if (ctx->pc == 0x3E6384u) {
        ctx->pc = 0x3E6384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6380u;
        // 0x3e6384: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E6388u;
        goto label_3e6388;
    }
    ctx->pc = 0x3E6380u;
    {
        const bool branch_taken_0x3e6380 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 20));
        ctx->pc = 0x3E6384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6380u;
        // 0x3e6384: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e6380) {
            ctx->pc = 0x3E6390u;
            goto label_3e6390;
        }
    }
    ctx->pc = 0x3E6388u;
label_3e6388:
    // 0x3e6388: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x3e6388u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_3e638c:
    // 0x3e638c: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x3e638cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
label_3e6390:
    // 0x3e6390: 0xf9102a  slt         $v0, $a3, $t9
    ctx->pc = 0x3e6390u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 25)) ? 1 : 0);
label_3e6394:
    // 0x3e6394: 0x5440ffc0  bnel        $v0, $zero, . + 4 + (-0x40 << 2)
label_3e6398:
    if (ctx->pc == 0x3E6398u) {
        ctx->pc = 0x3E6398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6394u;
        // 0x3e6398: 0x8dc20294  lw          $v0, 0x294($t6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 660)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E639Cu;
        goto label_3e639c;
    }
    ctx->pc = 0x3E6394u;
    {
        const bool branch_taken_0x3e6394 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e6394) {
            ctx->pc = 0x3E6398u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E6394u;
            // 0x3e6398: 0x8dc20294  lw          $v0, 0x294($t6) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 660)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E6298u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e6298;
        }
    }
    ctx->pc = 0x3E639Cu;
label_3e639c:
    // 0x3e639c: 0x8fa30024  lw          $v1, 0x24($sp)
    ctx->pc = 0x3e639cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_3e63a0:
    // 0x3e63a0: 0x91620000  lbu         $v0, 0x0($t3)
    ctx->pc = 0x3e63a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 0)));
label_3e63a4:
    // 0x3e63a4: 0x91040000  lbu         $a0, 0x0($t0)
    ctx->pc = 0x3e63a4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_3e63a8:
    // 0x3e63a8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x3e63a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3e63ac:
    // 0x3e63ac: 0xa0440000  sb          $a0, 0x0($v0)
    ctx->pc = 0x3e63acu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 4));
label_3e63b0:
    // 0x3e63b0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x3e63b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_3e63b4:
    // 0x3e63b4: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x3e63b4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_3e63b8:
    // 0x3e63b8: 0x91620000  lbu         $v0, 0x0($t3)
    ctx->pc = 0x3e63b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 0)));
label_3e63bc:
    // 0x3e63bc: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x3e63bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_3e63c0:
    // 0x3e63c0: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x3e63c0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
label_3e63c4:
    // 0x3e63c4: 0xa1140000  sb          $s4, 0x0($t0)
    ctx->pc = 0x3e63c4u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 20));
label_3e63c8:
    // 0x3e63c8: 0xa16d0000  sb          $t5, 0x0($t3)
    ctx->pc = 0x3e63c8u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 0), (uint8_t)GPR_U32(ctx, 13));
label_3e63cc:
    // 0x3e63cc: 0x8fa50014  lw          $a1, 0x14($sp)
    ctx->pc = 0x3e63ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_3e63d0:
    // 0x3e63d0: 0xb4882a  slt         $s1, $a1, $s4
    ctx->pc = 0x3e63d0u;
    SET_GPR_U64(ctx, 17, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
label_3e63d4:
    // 0x3e63d4: 0x5220000a  beql        $s1, $zero, . + 4 + (0xA << 2)
label_3e63d8:
    if (ctx->pc == 0x3E63D8u) {
        ctx->pc = 0x3E63D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E63D4u;
        // 0x3e63d8: 0x8fa70014  lw          $a3, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E63DCu;
        goto label_3e63dc;
    }
    ctx->pc = 0x3E63D4u;
    {
        const bool branch_taken_0x3e63d4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e63d4) {
            ctx->pc = 0x3E63D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E63D4u;
            // 0x3e63d8: 0x8fa70014  lw          $a3, 0x14($sp) (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E6400u;
            goto label_3e6400;
        }
    }
    ctx->pc = 0x3E63DCu;
label_3e63dc:
    // 0x3e63dc: 0x8d8c0000  lw          $t4, 0x0($t4)
    ctx->pc = 0x3e63dcu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_3e63e0:
    // 0x3e63e0: 0x5580ff45  bnel        $t4, $zero, . + 4 + (-0xBB << 2)
label_3e63e4:
    if (ctx->pc == 0x3E63E4u) {
        ctx->pc = 0x3E63E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E63E0u;
        // 0x3e63e4: 0x91850004  lbu         $a1, 0x4($t4) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E63E8u;
        goto label_3e63e8;
    }
    ctx->pc = 0x3E63E0u;
    {
        const bool branch_taken_0x3e63e0 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e63e0) {
            ctx->pc = 0x3E63E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E63E0u;
            // 0x3e63e4: 0x91850004  lbu         $a1, 0x4($t4) (Delay Slot)
            SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E60F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e60f8;
        }
    }
    ctx->pc = 0x3E63E8u;
label_3e63e8:
    // 0x3e63e8: 0x8fa6001c  lw          $a2, 0x1C($sp)
    ctx->pc = 0x3e63e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
label_3e63ec:
    // 0x3e63ec: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x3e63ecu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_3e63f0:
    // 0x3e63f0: 0xd5102a  slt         $v0, $a2, $s5
    ctx->pc = 0x3e63f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
label_3e63f4:
    // 0x3e63f4: 0x1040ff36  beqz        $v0, . + 4 + (-0xCA << 2)
label_3e63f8:
    if (ctx->pc == 0x3E63F8u) {
        ctx->pc = 0x3E63F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E63F4u;
        // 0x3e63f8: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E63FCu;
        goto label_3e63fc;
    }
    ctx->pc = 0x3E63F4u;
    {
        const bool branch_taken_0x3e63f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E63F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E63F4u;
        // 0x3e63f8: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e63f4) {
            ctx->pc = 0x3E60D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e60d0;
        }
    }
    ctx->pc = 0x3E63FCu;
label_3e63fc:
    // 0x3e63fc: 0x8fa70014  lw          $a3, 0x14($sp)
    ctx->pc = 0x3e63fcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_3e6400:
    // 0x3e6400: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x3e6400u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3e6404:
    // 0x3e6404: 0xf4882a  slt         $s1, $a3, $s4
    ctx->pc = 0x3e6404u;
    SET_GPR_U64(ctx, 17, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
label_3e6408:
    // 0x3e6408: 0x151080  sll         $v0, $s5, 2
    ctx->pc = 0x3e6408u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
label_3e640c:
    // 0x3e640c: 0x8fa80020  lw          $t0, 0x20($sp)
    ctx->pc = 0x3e640cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_3e6410:
    // 0x3e6410: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3e6410u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e6414:
    // 0x3e6414: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x3e6414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
label_3e6418:
    // 0x3e6418: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x3e6418u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3e641c:
    // 0x3e641c: 0x10a0000d  beqz        $a1, . + 4 + (0xD << 2)
label_3e6420:
    if (ctx->pc == 0x3E6420u) {
        ctx->pc = 0x3E6420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E641Cu;
        // 0x3e6420: 0x26a70001  addiu       $a3, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E6424u;
        goto label_3e6424;
    }
    ctx->pc = 0x3E641Cu;
    {
        const bool branch_taken_0x3e641c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E6420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E641Cu;
        // 0x3e6420: 0x26a70001  addiu       $a3, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e641c) {
            ctx->pc = 0x3E6454u;
            goto label_3e6454;
        }
    }
    ctx->pc = 0x3E6424u;
label_3e6424:
    // 0x3e6424: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3e6424u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3e6428:
    // 0x3e6428: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3e6428u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3e642c:
    // 0x3e642c: 0x1c0202d  daddu       $a0, $t6, $zero
    ctx->pc = 0x3e642cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
label_3e6430:
    // 0x3e6430: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x3e6430u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3e6434:
    // 0x3e6434: 0x7fa70040  sq          $a3, 0x40($sp)
    ctx->pc = 0x3e6434u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 7));
label_3e6438:
    // 0x3e6438: 0x7fae0050  sq          $t6, 0x50($sp)
    ctx->pc = 0x3e6438u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 14));
label_3e643c:
    // 0x3e643c: 0xc0f8b02  jal         func_3E2C08
label_3e6440:
    if (ctx->pc == 0x3E6440u) {
        ctx->pc = 0x3E6440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E643Cu;
        // 0x3e6440: 0x7fb90060  sq          $t9, 0x60($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 25));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E6444u;
        goto label_3e6444;
    }
    ctx->pc = 0x3E643Cu;
    SET_GPR_U32(ctx, 31, 0x3E6444u);
    ctx->pc = 0x3E6440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E643Cu;
    // 0x3e6440: 0x7fb90060  sq          $t9, 0x60($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 25));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2C08u, 0x3E643Cu, 0x3E6444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E6444u;
label_3e6444:
    // 0x3e6444: 0x7ba70040  lq          $a3, 0x40($sp)
    ctx->pc = 0x3e6444u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3e6448:
    // 0x3e6448: 0x7bae0050  lq          $t6, 0x50($sp)
    ctx->pc = 0x3e6448u;
    SET_GPR_VEC(ctx, 14, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3e644c:
    // 0x3e644c: 0x1600fff6  bnez        $s0, . + 4 + (-0xA << 2)
label_3e6450:
    if (ctx->pc == 0x3E6450u) {
        ctx->pc = 0x3E6450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E644Cu;
        // 0x3e6450: 0x7bb90060  lq          $t9, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 25, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E6454u;
        goto label_3e6454;
    }
    ctx->pc = 0x3E644Cu;
    {
        const bool branch_taken_0x3e644c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E6450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E644Cu;
        // 0x3e6450: 0x7bb90060  lq          $t9, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 25, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e644c) {
            ctx->pc = 0x3E6428u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e6428;
        }
    }
    ctx->pc = 0x3E6454u;
label_3e6454:
    // 0x3e6454: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x3e6454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_3e6458:
    // 0x3e6458: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x3e6458u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_3e645c:
    // 0x3e645c: 0x2421821  addu        $v1, $s2, $v0
    ctx->pc = 0x3e645cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_3e6460:
    // 0x3e6460: 0x2aa20301  slti        $v0, $s5, 0x301
    ctx->pc = 0x3e6460u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)769) ? 1 : 0);
label_3e6464:
    // 0x3e6464: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
label_3e6468:
    if (ctx->pc == 0x3E6468u) {
        ctx->pc = 0x3E6468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6464u;
        // 0x3e6468: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E646Cu;
        goto label_3e646c;
    }
    ctx->pc = 0x3E6464u;
    {
        const bool branch_taken_0x3e6464 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E6468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6464u;
        // 0x3e6468: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e6464) {
            ctx->pc = 0x3E6408u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e6408;
        }
    }
    ctx->pc = 0x3E646Cu;
label_3e646c:
    // 0x3e646c: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x3e646cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_3e6470:
    // 0x3e6470: 0x1620fe71  bnez        $s1, . + 4 + (-0x18F << 2)
label_3e6474:
    if (ctx->pc == 0x3E6474u) {
        ctx->pc = 0x3E6474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6470u;
        // 0x3e6474: 0xafa3001c  sw          $v1, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E6478u;
        goto label_3e6478;
    }
    ctx->pc = 0x3E6470u;
    {
        const bool branch_taken_0x3e6470 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E6474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6470u;
        // 0x3e6474: 0xafa3001c  sw          $v1, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e6470) {
            ctx->pc = 0x3E5E38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e5e38;
        }
    }
    ctx->pc = 0x3E6478u;
label_3e6478:
    // 0x3e6478: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x3e6478u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_3e647c:
    // 0x3e647c: 0x1c0202d  daddu       $a0, $t6, $zero
    ctx->pc = 0x3e647cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
label_3e6480:
    // 0x3e6480: 0xc0f8b02  jal         func_3E2C08
label_3e6484:
    if (ctx->pc == 0x3E6484u) {
        ctx->pc = 0x3E6484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6480u;
        // 0x3e6484: 0x7fae0050  sq          $t6, 0x50($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 14));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E6488u;
        goto label_3e6488;
    }
    ctx->pc = 0x3E6480u;
    SET_GPR_U32(ctx, 31, 0x3E6488u);
    ctx->pc = 0x3E6484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E6480u;
    // 0x3e6484: 0x7fae0050  sq          $t6, 0x50($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2C08u, 0x3E6480u, 0x3E6488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E6488u;
label_3e6488:
    // 0x3e6488: 0x7bae0050  lq          $t6, 0x50($sp)
    ctx->pc = 0x3e6488u;
    SET_GPR_VEC(ctx, 14, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3e648c:
    // 0x3e648c: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x3e648cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_3e6490:
    // 0x3e6490: 0xc0f8b02  jal         func_3E2C08
label_3e6494:
    if (ctx->pc == 0x3E6494u) {
        ctx->pc = 0x3E6494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6490u;
        // 0x3e6494: 0x1c0202d  daddu       $a0, $t6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E6498u;
        goto label_3e6498;
    }
    ctx->pc = 0x3E6490u;
    SET_GPR_U32(ctx, 31, 0x3E6498u);
    ctx->pc = 0x3E6494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E6490u;
    // 0x3e6494: 0x1c0202d  daddu       $a0, $t6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2C08u, 0x3E6490u, 0x3E6498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E6498u;
label_3e6498:
    // 0x3e6498: 0x7bae0050  lq          $t6, 0x50($sp)
    ctx->pc = 0x3e6498u;
    SET_GPR_VEC(ctx, 14, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3e649c:
    // 0x3e649c: 0x8fa50024  lw          $a1, 0x24($sp)
    ctx->pc = 0x3e649cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_3e64a0:
    // 0x3e64a0: 0xc0f8b02  jal         func_3E2C08
label_3e64a4:
    if (ctx->pc == 0x3E64A4u) {
        ctx->pc = 0x3E64A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E64A0u;
        // 0x3e64a4: 0x1c0202d  daddu       $a0, $t6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E64A8u;
        goto label_3e64a8;
    }
    ctx->pc = 0x3E64A0u;
    SET_GPR_U32(ctx, 31, 0x3E64A8u);
    ctx->pc = 0x3E64A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E64A0u;
    // 0x3e64a4: 0x1c0202d  daddu       $a0, $t6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2C08u, 0x3E64A0u, 0x3E64A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E64A8u;
label_3e64a8:
    // 0x3e64a8: 0x7bae0050  lq          $t6, 0x50($sp)
    ctx->pc = 0x3e64a8u;
    SET_GPR_VEC(ctx, 14, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3e64ac:
    // 0x3e64ac: 0x8fb90014  lw          $t9, 0x14($sp)
    ctx->pc = 0x3e64acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_3e64b0:
    // 0x3e64b0: 0x8dc201f8  lw          $v0, 0x1F8($t6)
    ctx->pc = 0x3e64b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 504)));
label_3e64b4:
    // 0x3e64b4: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_3e64b8:
    if (ctx->pc == 0x3E64B8u) {
        ctx->pc = 0x3E64B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E64B4u;
        // 0x3e64b8: 0xa5d901fc  sh          $t9, 0x1FC($t6) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 14), 508), (uint16_t)GPR_U32(ctx, 25));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E64BCu;
        goto label_3e64bc;
    }
    ctx->pc = 0x3E64B4u;
    {
        const bool branch_taken_0x3e64b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e64b4) {
            ctx->pc = 0x3E64B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E64B4u;
            // 0x3e64b8: 0xa5d901fc  sh          $t9, 0x1FC($t6) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 14), 508), (uint16_t)GPR_U32(ctx, 25));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E64C8u;
            goto label_3e64c8;
        }
    }
    ctx->pc = 0x3E64BCu;
label_3e64bc:
    // 0x3e64bc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x3e64bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_3e64c0:
    // 0x3e64c0: 0xadc401f8  sw          $a0, 0x1F8($t6)
    ctx->pc = 0x3e64c0u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 504), GPR_U32(ctx, 4));
label_3e64c4:
    // 0x3e64c4: 0xa5d901fc  sh          $t9, 0x1FC($t6)
    ctx->pc = 0x3e64c4u;
    WRITE16(ADD32(GPR_U32(ctx, 14), 508), (uint16_t)GPR_U32(ctx, 25));
label_3e64c8:
    // 0x3e64c8: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x3e64c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_3e64cc:
    // 0x3e64cc: 0x10a00097  beqz        $a1, . + 4 + (0x97 << 2)
label_3e64d0:
    if (ctx->pc == 0x3E64D0u) {
        ctx->pc = 0x3E64D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E64CCu;
        // 0x3e64d0: 0x1c0202d  daddu       $a0, $t6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E64D4u;
        goto label_3e64d4;
    }
    ctx->pc = 0x3E64CCu;
    {
        const bool branch_taken_0x3e64cc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E64D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E64CCu;
        // 0x3e64d0: 0x1c0202d  daddu       $a0, $t6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e64cc) {
            ctx->pc = 0x3E672Cu;
            goto label_3e672c;
        }
    }
    ctx->pc = 0x3E64D4u;
label_3e64d4:
    // 0x3e64d4: 0x7fae0050  sq          $t6, 0x50($sp)
    ctx->pc = 0x3e64d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 14));
label_3e64d8:
    // 0x3e64d8: 0x7fb90060  sq          $t9, 0x60($sp)
    ctx->pc = 0x3e64d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 25));
label_3e64dc:
    // 0x3e64dc: 0xc0f8ae2  jal         func_3E2B88
label_3e64e0:
    if (ctx->pc == 0x3E64E0u) {
        ctx->pc = 0x3E64E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E64DCu;
        // 0x3e64e0: 0x34058000  ori         $a1, $zero, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E64E4u;
        goto label_3e64e4;
    }
    ctx->pc = 0x3E64DCu;
    SET_GPR_U32(ctx, 31, 0x3E64E4u);
    ctx->pc = 0x3E64E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E64DCu;
    // 0x3e64e0: 0x34058000  ori         $a1, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2B88u, 0x3E64DCu, 0x3E64E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E64E4u;
label_3e64e4:
    // 0x3e64e4: 0x7bae0050  lq          $t6, 0x50($sp)
    ctx->pc = 0x3e64e4u;
    SET_GPR_VEC(ctx, 14, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3e64e8:
    // 0x3e64e8: 0x34068000  ori         $a2, $zero, 0x8000
    ctx->pc = 0x3e64e8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_3e64ec:
    // 0x3e64ec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3e64ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e64f0:
    // 0x3e64f0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3e64f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3e64f4:
    // 0x3e64f4: 0xadc20290  sw          $v0, 0x290($t6)
    ctx->pc = 0x3e64f4u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 656), GPR_U32(ctx, 2));
label_3e64f8:
    // 0x3e64f8: 0xc0bb7e6  jal         func_2EDF98
label_3e64fc:
    if (ctx->pc == 0x3E64FCu) {
        ctx->pc = 0x3E64FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E64F8u;
        // 0x3e64fc: 0x7fae0050  sq          $t6, 0x50($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 14));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E6500u;
        goto label_3e6500;
    }
    ctx->pc = 0x3E64F8u;
    SET_GPR_U32(ctx, 31, 0x3E6500u);
    ctx->pc = 0x3E64FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E64F8u;
    // 0x3e64fc: 0x7fae0050  sq          $t6, 0x50($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF98u, 0x3E64F8u, 0x3E6500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E6500u;
label_3e6500:
    // 0x3e6500: 0x7bae0050  lq          $t6, 0x50($sp)
    ctx->pc = 0x3e6500u;
    SET_GPR_VEC(ctx, 14, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3e6504:
    // 0x3e6504: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x3e6504u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_3e6508:
    // 0x3e6508: 0xc0f8ae2  jal         func_3E2B88
label_3e650c:
    if (ctx->pc == 0x3E650Cu) {
        ctx->pc = 0x3E650Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6508u;
        // 0x3e650c: 0x1c0202d  daddu       $a0, $t6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E6510u;
        goto label_3e6510;
    }
    ctx->pc = 0x3E6508u;
    SET_GPR_U32(ctx, 31, 0x3E6510u);
    ctx->pc = 0x3E650Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E6508u;
    // 0x3e650c: 0x1c0202d  daddu       $a0, $t6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2B88u, 0x3E6508u, 0x3E6510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E6510u;
label_3e6510:
    // 0x3e6510: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3e6510u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e6514:
    // 0x3e6514: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x3e6514u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_3e6518:
    // 0x3e6518: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e6518u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3e651c:
    // 0x3e651c: 0xc0bb7e6  jal         func_2EDF98
label_3e6520:
    if (ctx->pc == 0x3E6520u) {
        ctx->pc = 0x3E6520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E651Cu;
        // 0x3e6520: 0x34068000  ori         $a2, $zero, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E6524u;
        goto label_3e6524;
    }
    ctx->pc = 0x3E651Cu;
    SET_GPR_U32(ctx, 31, 0x3E6524u);
    ctx->pc = 0x3E6520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E651Cu;
    // 0x3e6520: 0x34068000  ori         $a2, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF98u, 0x3E651Cu, 0x3E6524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E6524u;
label_3e6524:
    // 0x3e6524: 0x7bb90060  lq          $t9, 0x60($sp)
    ctx->pc = 0x3e6524u;
    SET_GPR_VEC(ctx, 25, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3e6528:
    // 0x3e6528: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x3e6528u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3e652c:
    // 0x3e652c: 0x1b20007c  blez        $t9, . + 4 + (0x7C << 2)
label_3e6530:
    if (ctx->pc == 0x3E6530u) {
        ctx->pc = 0x3E6530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E652Cu;
        // 0x3e6530: 0x7bae0050  lq          $t6, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 14, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E6534u;
        goto label_3e6534;
    }
    ctx->pc = 0x3E652Cu;
    {
        const bool branch_taken_0x3e652c = (GPR_S32(ctx, 25) <= 0);
        ctx->pc = 0x3E6530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E652Cu;
        // 0x3e6530: 0x7bae0050  lq          $t6, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 14, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e652c) {
            ctx->pc = 0x3E6720u;
            goto label_3e6720;
        }
    }
    ctx->pc = 0x3E6534u;
label_3e6534:
    // 0x3e6534: 0xd1040  sll         $v0, $t5, 1
    ctx->pc = 0x3e6534u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 13), 1));
label_3e6538:
    // 0x3e6538: 0x8fa70010  lw          $a3, 0x10($sp)
    ctx->pc = 0x3e6538u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_3e653c:
    // 0x3e653c: 0x4d1021  addu        $v0, $v0, $t5
    ctx->pc = 0x3e653cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 13)));
label_3e6540:
    // 0x3e6540: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3e6540u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3e6544:
    // 0x3e6544: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x3e6544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_3e6548:
    // 0x3e6548: 0x25b80001  addiu       $t8, $t5, 0x1
    ctx->pc = 0x3e6548u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
label_3e654c:
    // 0x3e654c: 0x90430002  lbu         $v1, 0x2($v0)
    ctx->pc = 0x3e654cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
label_3e6550:
    // 0x3e6550: 0x90450000  lbu         $a1, 0x0($v0)
    ctx->pc = 0x3e6550u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_3e6554:
    // 0x3e6554: 0x90440001  lbu         $a0, 0x1($v0)
    ctx->pc = 0x3e6554u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_3e6558:
    // 0x3e6558: 0x3b8c2  srl         $s7, $v1, 3
    ctx->pc = 0x3e6558u;
    SET_GPR_S32(ctx, 23, (int32_t)SRL32(GPR_U32(ctx, 3), 3));
label_3e655c:
    // 0x3e655c: 0x5b0c2  srl         $s6, $a1, 3
    ctx->pc = 0x3e655cu;
    SET_GPR_S32(ctx, 22, (int32_t)SRL32(GPR_U32(ctx, 5), 3));
label_3e6560:
    // 0x3e6560: 0x4a8c2  srl         $s5, $a0, 3
    ctx->pc = 0x3e6560u;
    SET_GPR_S32(ctx, 21, (int32_t)SRL32(GPR_U32(ctx, 4), 3));
label_3e6564:
    // 0x3e6564: 0xd61023  subu        $v0, $a2, $s6
    ctx->pc = 0x3e6564u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 22)));
label_3e6568:
    // 0x3e6568: 0x24d40001  addiu       $s4, $a2, 0x1
    ctx->pc = 0x3e6568u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_3e656c:
    // 0x3e656c: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
label_3e6570:
    if (ctx->pc == 0x3E6570u) {
        ctx->pc = 0x3E6570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E656Cu;
        // 0x3e6570: 0x40782d  daddu       $t7, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E6574u;
        goto label_3e6574;
    }
    ctx->pc = 0x3E656Cu;
    {
        const bool branch_taken_0x3e656c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x3E6570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E656Cu;
        // 0x3e6570: 0x40782d  daddu       $t7, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e656c) {
            ctx->pc = 0x3E6578u;
            goto label_3e6578;
        }
    }
    ctx->pc = 0x3E6574u;
label_3e6574:
    // 0x3e6574: 0xf7823  negu        $t7, $t7
    ctx->pc = 0x3e6574u;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 15)));
label_3e6578:
    // 0x3e6578: 0x69a80  sll         $s3, $a2, 10
    ctx->pc = 0x3e6578u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 6), 10));
label_3e657c:
    // 0x3e657c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3e657cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3e6580:
    // 0x3e6580: 0x2e0902d  daddu       $s2, $s7, $zero
    ctx->pc = 0x3e6580u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3e6584:
    // 0x3e6584: 0x951023  subu        $v0, $a0, $s5
    ctx->pc = 0x3e6584u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 21)));
label_3e6588:
    // 0x3e6588: 0x41940  sll         $v1, $a0, 5
    ctx->pc = 0x3e6588u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_3e658c:
    // 0x3e658c: 0x4420001  bltzl       $v0, . + 4 + (0x1 << 2)
label_3e6590:
    if (ctx->pc == 0x3E6590u) {
        ctx->pc = 0x3E6590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E658Cu;
        // 0x3e6590: 0x21023  negu        $v0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E6594u;
        goto label_3e6594;
    }
    ctx->pc = 0x3E658Cu;
    {
        const bool branch_taken_0x3e658c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x3e658c) {
            ctx->pc = 0x3E6590u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E658Cu;
            // 0x3e6590: 0x21023  negu        $v0, $v0 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E6594u;
            goto label_3e6594;
        }
    }
    ctx->pc = 0x3E6594u;
label_3e6594:
    // 0x3e6594: 0x2636025  or          $t4, $s3, $v1
    ctx->pc = 0x3e6594u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 19) | GPR_U64(ctx, 3));
label_3e6598:
    // 0x3e6598: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x3e6598u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e659c:
    // 0x3e659c: 0x1e25821  addu        $t3, $t7, $v0
    ctx->pc = 0x3e659cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 2)));
label_3e65a0:
    // 0x3e65a0: 0xef182a  slt         $v1, $a3, $t7
    ctx->pc = 0x3e65a0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 15)) ? 1 : 0);
label_3e65a4:
    // 0x3e65a4: 0x24910001  addiu       $s1, $a0, 0x1
    ctx->pc = 0x3e65a4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_3e65a8:
    // 0x3e65a8: 0x1e3380b  movn        $a3, $t7, $v1
    ctx->pc = 0x3e65a8u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 15));
label_3e65ac:
    // 0x3e65ac: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3e65acu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3e65b0:
    // 0x3e65b0: 0x124823  negu        $t1, $s2
    ctx->pc = 0x3e65b0u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 18)));
label_3e65b4:
    // 0x3e65b4: 0x0  nop
    ctx->pc = 0x3e65b4u;
    // NOP
label_3e65b8:
    // 0x3e65b8: 0x5210002  bgez        $t1, . + 4 + (0x2 << 2)
label_3e65bc:
    if (ctx->pc == 0x3E65BCu) {
        ctx->pc = 0x3E65BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E65B8u;
        // 0x3e65bc: 0x120202d  daddu       $a0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E65C0u;
        goto label_3e65c0;
    }
    ctx->pc = 0x3E65B8u;
    {
        const bool branch_taken_0x3e65b8 = (GPR_S32(ctx, 9) >= 0);
        ctx->pc = 0x3E65BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E65B8u;
        // 0x3e65bc: 0x120202d  daddu       $a0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e65b8) {
            ctx->pc = 0x3E65C4u;
            goto label_3e65c4;
        }
    }
    ctx->pc = 0x3E65C0u;
label_3e65c0:
    // 0x3e65c0: 0x42023  negu        $a0, $a0
    ctx->pc = 0x3e65c0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
label_3e65c4:
    // 0x3e65c4: 0x18a3025  or          $a2, $t4, $t2
    ctx->pc = 0x3e65c4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 12) | GPR_U64(ctx, 10));
label_3e65c8:
    // 0x3e65c8: 0x87102a  slt         $v0, $a0, $a3
    ctx->pc = 0x3e65c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
label_3e65cc:
    // 0x3e65cc: 0xe0182d  daddu       $v1, $a3, $zero
    ctx->pc = 0x3e65ccu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_3e65d0:
    // 0x3e65d0: 0x82180a  movz        $v1, $a0, $v0
    ctx->pc = 0x3e65d0u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
label_3e65d4:
    // 0x3e65d4: 0x2062821  addu        $a1, $s0, $a2
    ctx->pc = 0x3e65d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
label_3e65d8:
    // 0x3e65d8: 0x6b1821  addu        $v1, $v1, $t3
    ctx->pc = 0x3e65d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
label_3e65dc:
    // 0x3e65dc: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x3e65dcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_3e65e0:
    // 0x3e65e0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3e65e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_3e65e4:
    // 0x3e65e4: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x3e65e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_3e65e8:
    // 0x3e65e8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_3e65ec:
    if (ctx->pc == 0x3E65ECu) {
        ctx->pc = 0x3E65ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E65E8u;
        // 0x3e65ec: 0x25420001  addiu       $v0, $t2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E65F0u;
        goto label_3e65f0;
    }
    ctx->pc = 0x3E65E8u;
    {
        const bool branch_taken_0x3e65e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E65ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E65E8u;
        // 0x3e65ec: 0x25420001  addiu       $v0, $t2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e65e8) {
            ctx->pc = 0x3E6604u;
            goto label_3e6604;
        }
    }
    ctx->pc = 0x3E65F0u;
label_3e65f0:
    // 0x3e65f0: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x3e65f0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
label_3e65f4:
    // 0x3e65f4: 0x8dc20290  lw          $v0, 0x290($t6)
    ctx->pc = 0x3e65f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 656)));
label_3e65f8:
    // 0x3e65f8: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x3e65f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_3e65fc:
    // 0x3e65fc: 0xa04d0000  sb          $t5, 0x0($v0)
    ctx->pc = 0x3e65fcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 13));
label_3e6600:
    // 0x3e6600: 0x25420001  addiu       $v0, $t2, 0x1
    ctx->pc = 0x3e6600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_3e6604:
    // 0x3e6604: 0x25240001  addiu       $a0, $t1, 0x1
    ctx->pc = 0x3e6604u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_3e6608:
    // 0x3e6608: 0x4820001  bltzl       $a0, . + 4 + (0x1 << 2)
label_3e660c:
    if (ctx->pc == 0x3E660Cu) {
        ctx->pc = 0x3E660Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6608u;
        // 0x3e660c: 0x42023  negu        $a0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E6610u;
        goto label_3e6610;
    }
    ctx->pc = 0x3E6608u;
    {
        const bool branch_taken_0x3e6608 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x3e6608) {
            ctx->pc = 0x3E660Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E6608u;
            // 0x3e660c: 0x42023  negu        $a0, $a0 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E6610u;
            goto label_3e6610;
        }
    }
    ctx->pc = 0x3E6610u;
label_3e6610:
    // 0x3e6610: 0x1824025  or          $t0, $t4, $v0
    ctx->pc = 0x3e6610u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 12) | GPR_U64(ctx, 2));
label_3e6614:
    // 0x3e6614: 0x87282a  slt         $a1, $a0, $a3
    ctx->pc = 0x3e6614u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
label_3e6618:
    // 0x3e6618: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x3e6618u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_3e661c:
    // 0x3e661c: 0x2083021  addu        $a2, $s0, $t0
    ctx->pc = 0x3e661cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 8)));
label_3e6620:
    // 0x3e6620: 0x85100a  movz        $v0, $a0, $a1
    ctx->pc = 0x3e6620u;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
label_3e6624:
    // 0x3e6624: 0x90c30000  lbu         $v1, 0x0($a2)
    ctx->pc = 0x3e6624u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_3e6628:
    // 0x3e6628: 0x4b1021  addu        $v0, $v0, $t3
    ctx->pc = 0x3e6628u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
label_3e662c:
    // 0x3e662c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3e662cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_3e6630:
    // 0x3e6630: 0x43182a  slt         $v1, $v0, $v1
    ctx->pc = 0x3e6630u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_3e6634:
    // 0x3e6634: 0x50600006  beql        $v1, $zero, . + 4 + (0x6 << 2)
label_3e6638:
    if (ctx->pc == 0x3E6638u) {
        ctx->pc = 0x3E6638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6634u;
        // 0x3e6638: 0x25420002  addiu       $v0, $t2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E663Cu;
        goto label_3e663c;
    }
    ctx->pc = 0x3E6634u;
    {
        const bool branch_taken_0x3e6634 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e6634) {
            ctx->pc = 0x3E6638u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E6634u;
            // 0x3e6638: 0x25420002  addiu       $v0, $t2, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E6650u;
            goto label_3e6650;
        }
    }
    ctx->pc = 0x3E663Cu;
label_3e663c:
    // 0x3e663c: 0xa0c20000  sb          $v0, 0x0($a2)
    ctx->pc = 0x3e663cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
label_3e6640:
    // 0x3e6640: 0x8dc20290  lw          $v0, 0x290($t6)
    ctx->pc = 0x3e6640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 656)));
label_3e6644:
    // 0x3e6644: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x3e6644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
label_3e6648:
    // 0x3e6648: 0xa04d0000  sb          $t5, 0x0($v0)
    ctx->pc = 0x3e6648u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 13));
label_3e664c:
    // 0x3e664c: 0x25420002  addiu       $v0, $t2, 0x2
    ctx->pc = 0x3e664cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 2));
label_3e6650:
    // 0x3e6650: 0x25240002  addiu       $a0, $t1, 0x2
    ctx->pc = 0x3e6650u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 2));
label_3e6654:
    // 0x3e6654: 0x4820001  bltzl       $a0, . + 4 + (0x1 << 2)
label_3e6658:
    if (ctx->pc == 0x3E6658u) {
        ctx->pc = 0x3E6658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6654u;
        // 0x3e6658: 0x42023  negu        $a0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E665Cu;
        goto label_3e665c;
    }
    ctx->pc = 0x3E6654u;
    {
        const bool branch_taken_0x3e6654 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x3e6654) {
            ctx->pc = 0x3E6658u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E6654u;
            // 0x3e6658: 0x42023  negu        $a0, $a0 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E665Cu;
            goto label_3e665c;
        }
    }
    ctx->pc = 0x3E665Cu;
label_3e665c:
    // 0x3e665c: 0x1824025  or          $t0, $t4, $v0
    ctx->pc = 0x3e665cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 12) | GPR_U64(ctx, 2));
label_3e6660:
    // 0x3e6660: 0x87282a  slt         $a1, $a0, $a3
    ctx->pc = 0x3e6660u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
label_3e6664:
    // 0x3e6664: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x3e6664u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_3e6668:
    // 0x3e6668: 0x2083021  addu        $a2, $s0, $t0
    ctx->pc = 0x3e6668u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 8)));
label_3e666c:
    // 0x3e666c: 0x85100a  movz        $v0, $a0, $a1
    ctx->pc = 0x3e666cu;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
label_3e6670:
    // 0x3e6670: 0x90c30000  lbu         $v1, 0x0($a2)
    ctx->pc = 0x3e6670u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_3e6674:
    // 0x3e6674: 0x4b1021  addu        $v0, $v0, $t3
    ctx->pc = 0x3e6674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
label_3e6678:
    // 0x3e6678: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3e6678u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_3e667c:
    // 0x3e667c: 0x43182a  slt         $v1, $v0, $v1
    ctx->pc = 0x3e667cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_3e6680:
    // 0x3e6680: 0x50600006  beql        $v1, $zero, . + 4 + (0x6 << 2)
label_3e6684:
    if (ctx->pc == 0x3E6684u) {
        ctx->pc = 0x3E6684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6680u;
        // 0x3e6684: 0x25420003  addiu       $v0, $t2, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E6688u;
        goto label_3e6688;
    }
    ctx->pc = 0x3E6680u;
    {
        const bool branch_taken_0x3e6680 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e6680) {
            ctx->pc = 0x3E6684u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E6680u;
            // 0x3e6684: 0x25420003  addiu       $v0, $t2, 0x3 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E669Cu;
            goto label_3e669c;
        }
    }
    ctx->pc = 0x3E6688u;
label_3e6688:
    // 0x3e6688: 0xa0c20000  sb          $v0, 0x0($a2)
    ctx->pc = 0x3e6688u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
label_3e668c:
    // 0x3e668c: 0x8dc20290  lw          $v0, 0x290($t6)
    ctx->pc = 0x3e668cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 656)));
label_3e6690:
    // 0x3e6690: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x3e6690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
label_3e6694:
    // 0x3e6694: 0xa04d0000  sb          $t5, 0x0($v0)
    ctx->pc = 0x3e6694u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 13));
label_3e6698:
    // 0x3e6698: 0x25420003  addiu       $v0, $t2, 0x3
    ctx->pc = 0x3e6698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 3));
label_3e669c:
    // 0x3e669c: 0x25240003  addiu       $a0, $t1, 0x3
    ctx->pc = 0x3e669cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 3));
label_3e66a0:
    // 0x3e66a0: 0x4820001  bltzl       $a0, . + 4 + (0x1 << 2)
label_3e66a4:
    if (ctx->pc == 0x3E66A4u) {
        ctx->pc = 0x3E66A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E66A0u;
        // 0x3e66a4: 0x42023  negu        $a0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E66A8u;
        goto label_3e66a8;
    }
    ctx->pc = 0x3E66A0u;
    {
        const bool branch_taken_0x3e66a0 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x3e66a0) {
            ctx->pc = 0x3E66A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E66A0u;
            // 0x3e66a4: 0x42023  negu        $a0, $a0 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E66A8u;
            goto label_3e66a8;
        }
    }
    ctx->pc = 0x3E66A8u;
label_3e66a8:
    // 0x3e66a8: 0x1824025  or          $t0, $t4, $v0
    ctx->pc = 0x3e66a8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 12) | GPR_U64(ctx, 2));
label_3e66ac:
    // 0x3e66ac: 0x87282a  slt         $a1, $a0, $a3
    ctx->pc = 0x3e66acu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
label_3e66b0:
    // 0x3e66b0: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x3e66b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_3e66b4:
    // 0x3e66b4: 0x2083021  addu        $a2, $s0, $t0
    ctx->pc = 0x3e66b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 8)));
label_3e66b8:
    // 0x3e66b8: 0x85100a  movz        $v0, $a0, $a1
    ctx->pc = 0x3e66b8u;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
label_3e66bc:
    // 0x3e66bc: 0x90c30000  lbu         $v1, 0x0($a2)
    ctx->pc = 0x3e66bcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_3e66c0:
    // 0x3e66c0: 0x4b1021  addu        $v0, $v0, $t3
    ctx->pc = 0x3e66c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
label_3e66c4:
    // 0x3e66c4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3e66c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_3e66c8:
    // 0x3e66c8: 0x43182a  slt         $v1, $v0, $v1
    ctx->pc = 0x3e66c8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_3e66cc:
    // 0x3e66cc: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_3e66d0:
    if (ctx->pc == 0x3E66D0u) {
        ctx->pc = 0x3E66D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E66CCu;
        // 0x3e66d0: 0x254a0004  addiu       $t2, $t2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E66D4u;
        goto label_3e66d4;
    }
    ctx->pc = 0x3E66CCu;
    {
        const bool branch_taken_0x3e66cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E66D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E66CCu;
        // 0x3e66d0: 0x254a0004  addiu       $t2, $t2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e66cc) {
            ctx->pc = 0x3E66E4u;
            goto label_3e66e4;
        }
    }
    ctx->pc = 0x3E66D4u;
label_3e66d4:
    // 0x3e66d4: 0xa0c20000  sb          $v0, 0x0($a2)
    ctx->pc = 0x3e66d4u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
label_3e66d8:
    // 0x3e66d8: 0x8dc20290  lw          $v0, 0x290($t6)
    ctx->pc = 0x3e66d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 656)));
label_3e66dc:
    // 0x3e66dc: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x3e66dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
label_3e66e0:
    // 0x3e66e0: 0xa04d0000  sb          $t5, 0x0($v0)
    ctx->pc = 0x3e66e0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 13));
label_3e66e4:
    // 0x3e66e4: 0x29420020  slti        $v0, $t2, 0x20
    ctx->pc = 0x3e66e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)32) ? 1 : 0);
label_3e66e8:
    // 0x3e66e8: 0x1440ffb3  bnez        $v0, . + 4 + (-0x4D << 2)
label_3e66ec:
    if (ctx->pc == 0x3E66ECu) {
        ctx->pc = 0x3E66ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E66E8u;
        // 0x3e66ec: 0x25290004  addiu       $t1, $t1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E66F0u;
        goto label_3e66f0;
    }
    ctx->pc = 0x3E66E8u;
    {
        const bool branch_taken_0x3e66e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E66ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E66E8u;
        // 0x3e66ec: 0x25290004  addiu       $t1, $t1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e66e8) {
            ctx->pc = 0x3E65B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e65b8;
        }
    }
    ctx->pc = 0x3E66F0u;
label_3e66f0:
    // 0x3e66f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3e66f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3e66f4:
    // 0x3e66f4: 0x28820020  slti        $v0, $a0, 0x20
    ctx->pc = 0x3e66f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)32) ? 1 : 0);
label_3e66f8:
    // 0x3e66f8: 0x1440ffa3  bnez        $v0, . + 4 + (-0x5D << 2)
label_3e66fc:
    if (ctx->pc == 0x3E66FCu) {
        ctx->pc = 0x3E66FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E66F8u;
        // 0x3e66fc: 0x951023  subu        $v0, $a0, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E6700u;
        goto label_3e6700;
    }
    ctx->pc = 0x3E66F8u;
    {
        const bool branch_taken_0x3e66f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E66FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E66F8u;
        // 0x3e66fc: 0x951023  subu        $v0, $a0, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e66f8) {
            ctx->pc = 0x3E6588u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e6588;
        }
    }
    ctx->pc = 0x3E6700u;
label_3e6700:
    // 0x3e6700: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x3e6700u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3e6704:
    // 0x3e6704: 0x28c20020  slti        $v0, $a2, 0x20
    ctx->pc = 0x3e6704u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)32) ? 1 : 0);
label_3e6708:
    // 0x3e6708: 0x1440ff97  bnez        $v0, . + 4 + (-0x69 << 2)
label_3e670c:
    if (ctx->pc == 0x3E670Cu) {
        ctx->pc = 0x3E670Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6708u;
        // 0x3e670c: 0xd61023  subu        $v0, $a2, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E6710u;
        goto label_3e6710;
    }
    ctx->pc = 0x3E6708u;
    {
        const bool branch_taken_0x3e6708 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E670Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6708u;
        // 0x3e670c: 0xd61023  subu        $v0, $a2, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e6708) {
            ctx->pc = 0x3E6568u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e6568;
        }
    }
    ctx->pc = 0x3E6710u;
label_3e6710:
    // 0x3e6710: 0x300682d  daddu       $t5, $t8, $zero
    ctx->pc = 0x3e6710u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
label_3e6714:
    // 0x3e6714: 0x1b9102a  slt         $v0, $t5, $t9
    ctx->pc = 0x3e6714u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 13) < (int64_t)GPR_S64(ctx, 25)) ? 1 : 0);
label_3e6718:
    // 0x3e6718: 0x1440ff87  bnez        $v0, . + 4 + (-0x79 << 2)
label_3e671c:
    if (ctx->pc == 0x3E671Cu) {
        ctx->pc = 0x3E671Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6718u;
        // 0x3e671c: 0xd1040  sll         $v0, $t5, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 13), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E6720u;
        goto label_3e6720;
    }
    ctx->pc = 0x3E6718u;
    {
        const bool branch_taken_0x3e6718 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E671Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6718u;
        // 0x3e671c: 0xd1040  sll         $v0, $t5, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 13), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e6718) {
            ctx->pc = 0x3E6538u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e6538;
        }
    }
    ctx->pc = 0x3E6720u;
label_3e6720:
    // 0x3e6720: 0x1c0202d  daddu       $a0, $t6, $zero
    ctx->pc = 0x3e6720u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
label_3e6724:
    // 0x3e6724: 0xc0f8b02  jal         func_3E2C08
label_3e6728:
    if (ctx->pc == 0x3E6728u) {
        ctx->pc = 0x3E6728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6724u;
        // 0x3e6728: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E672Cu;
        goto label_3e672c;
    }
    ctx->pc = 0x3E6724u;
    SET_GPR_U32(ctx, 31, 0x3E672Cu);
    ctx->pc = 0x3E6728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E6724u;
    // 0x3e6728: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2C08u, 0x3E6724u, 0x3E672Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E672Cu;
label_3e672c:
    // 0x3e672c: 0x7bb00100  lq          $s0, 0x100($sp)
    ctx->pc = 0x3e672cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_3e6730:
    // 0x3e6730: 0x7bb100f0  lq          $s1, 0xF0($sp)
    ctx->pc = 0x3e6730u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_3e6734:
    // 0x3e6734: 0x7bb200e0  lq          $s2, 0xE0($sp)
    ctx->pc = 0x3e6734u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_3e6738:
    // 0x3e6738: 0x7bb300d0  lq          $s3, 0xD0($sp)
    ctx->pc = 0x3e6738u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_3e673c:
    // 0x3e673c: 0x7bb400c0  lq          $s4, 0xC0($sp)
    ctx->pc = 0x3e673cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_3e6740:
    // 0x3e6740: 0x7bb500b0  lq          $s5, 0xB0($sp)
    ctx->pc = 0x3e6740u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_3e6744:
    // 0x3e6744: 0x7bb600a0  lq          $s6, 0xA0($sp)
    ctx->pc = 0x3e6744u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_3e6748:
    // 0x3e6748: 0x7bb70090  lq          $s7, 0x90($sp)
    ctx->pc = 0x3e6748u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3e674c:
    // 0x3e674c: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x3e674cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3e6750:
    // 0x3e6750: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x3e6750u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_3e6754:
    // 0x3e6754: 0x3e00008  jr          $ra
label_3e6758:
    if (ctx->pc == 0x3E6758u) {
        ctx->pc = 0x3E6758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6754u;
        // 0x3e6758: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E675Cu;
        goto label_3e675c;
    }
    ctx->pc = 0x3E6754u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E6758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6754u;
        // 0x3e6758: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E6754u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E675Cu;
label_3e675c:
    // 0x3e675c: 0x0  nop
    ctx->pc = 0x3e675cu;
    // NOP
    ctx->pc = 0x3e6760u;
}
