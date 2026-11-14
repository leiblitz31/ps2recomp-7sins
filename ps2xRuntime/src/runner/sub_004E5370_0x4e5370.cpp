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

// Function: sub_004E5370
// Address: 0x4e5370 - 0x4e5c90
void sub_004E5370_0x4e5370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E5370_0x4e5370");
#endif

    switch (ctx->pc) {
        case 0x4e5370u: goto label_4e5370;
        case 0x4e5374u: goto label_4e5374;
        case 0x4e5378u: goto label_4e5378;
        case 0x4e537cu: goto label_4e537c;
        case 0x4e5380u: goto label_4e5380;
        case 0x4e5384u: goto label_4e5384;
        case 0x4e5388u: goto label_4e5388;
        case 0x4e538cu: goto label_4e538c;
        case 0x4e5390u: goto label_4e5390;
        case 0x4e5394u: goto label_4e5394;
        case 0x4e5398u: goto label_4e5398;
        case 0x4e539cu: goto label_4e539c;
        case 0x4e53a0u: goto label_4e53a0;
        case 0x4e53a4u: goto label_4e53a4;
        case 0x4e53a8u: goto label_4e53a8;
        case 0x4e53acu: goto label_4e53ac;
        case 0x4e53b0u: goto label_4e53b0;
        case 0x4e53b4u: goto label_4e53b4;
        case 0x4e53b8u: goto label_4e53b8;
        case 0x4e53bcu: goto label_4e53bc;
        case 0x4e53c0u: goto label_4e53c0;
        case 0x4e53c4u: goto label_4e53c4;
        case 0x4e53c8u: goto label_4e53c8;
        case 0x4e53ccu: goto label_4e53cc;
        case 0x4e53d0u: goto label_4e53d0;
        case 0x4e53d4u: goto label_4e53d4;
        case 0x4e53d8u: goto label_4e53d8;
        case 0x4e53dcu: goto label_4e53dc;
        case 0x4e53e0u: goto label_4e53e0;
        case 0x4e53e4u: goto label_4e53e4;
        case 0x4e53e8u: goto label_4e53e8;
        case 0x4e53ecu: goto label_4e53ec;
        case 0x4e53f0u: goto label_4e53f0;
        case 0x4e53f4u: goto label_4e53f4;
        case 0x4e53f8u: goto label_4e53f8;
        case 0x4e53fcu: goto label_4e53fc;
        case 0x4e5400u: goto label_4e5400;
        case 0x4e5404u: goto label_4e5404;
        case 0x4e5408u: goto label_4e5408;
        case 0x4e540cu: goto label_4e540c;
        case 0x4e5410u: goto label_4e5410;
        case 0x4e5414u: goto label_4e5414;
        case 0x4e5418u: goto label_4e5418;
        case 0x4e541cu: goto label_4e541c;
        case 0x4e5420u: goto label_4e5420;
        case 0x4e5424u: goto label_4e5424;
        case 0x4e5428u: goto label_4e5428;
        case 0x4e542cu: goto label_4e542c;
        case 0x4e5430u: goto label_4e5430;
        case 0x4e5434u: goto label_4e5434;
        case 0x4e5438u: goto label_4e5438;
        case 0x4e543cu: goto label_4e543c;
        case 0x4e5440u: goto label_4e5440;
        case 0x4e5444u: goto label_4e5444;
        case 0x4e5448u: goto label_4e5448;
        case 0x4e544cu: goto label_4e544c;
        case 0x4e5450u: goto label_4e5450;
        case 0x4e5454u: goto label_4e5454;
        case 0x4e5458u: goto label_4e5458;
        case 0x4e545cu: goto label_4e545c;
        case 0x4e5460u: goto label_4e5460;
        case 0x4e5464u: goto label_4e5464;
        case 0x4e5468u: goto label_4e5468;
        case 0x4e546cu: goto label_4e546c;
        case 0x4e5470u: goto label_4e5470;
        case 0x4e5474u: goto label_4e5474;
        case 0x4e5478u: goto label_4e5478;
        case 0x4e547cu: goto label_4e547c;
        case 0x4e5480u: goto label_4e5480;
        case 0x4e5484u: goto label_4e5484;
        case 0x4e5488u: goto label_4e5488;
        case 0x4e548cu: goto label_4e548c;
        case 0x4e5490u: goto label_4e5490;
        case 0x4e5494u: goto label_4e5494;
        case 0x4e5498u: goto label_4e5498;
        case 0x4e549cu: goto label_4e549c;
        case 0x4e54a0u: goto label_4e54a0;
        case 0x4e54a4u: goto label_4e54a4;
        case 0x4e54a8u: goto label_4e54a8;
        case 0x4e54acu: goto label_4e54ac;
        case 0x4e54b0u: goto label_4e54b0;
        case 0x4e54b4u: goto label_4e54b4;
        case 0x4e54b8u: goto label_4e54b8;
        case 0x4e54bcu: goto label_4e54bc;
        case 0x4e54c0u: goto label_4e54c0;
        case 0x4e54c4u: goto label_4e54c4;
        case 0x4e54c8u: goto label_4e54c8;
        case 0x4e54ccu: goto label_4e54cc;
        case 0x4e54d0u: goto label_4e54d0;
        case 0x4e54d4u: goto label_4e54d4;
        case 0x4e54d8u: goto label_4e54d8;
        case 0x4e54dcu: goto label_4e54dc;
        case 0x4e54e0u: goto label_4e54e0;
        case 0x4e54e4u: goto label_4e54e4;
        case 0x4e54e8u: goto label_4e54e8;
        case 0x4e54ecu: goto label_4e54ec;
        case 0x4e54f0u: goto label_4e54f0;
        case 0x4e54f4u: goto label_4e54f4;
        case 0x4e54f8u: goto label_4e54f8;
        case 0x4e54fcu: goto label_4e54fc;
        case 0x4e5500u: goto label_4e5500;
        case 0x4e5504u: goto label_4e5504;
        case 0x4e5508u: goto label_4e5508;
        case 0x4e550cu: goto label_4e550c;
        case 0x4e5510u: goto label_4e5510;
        case 0x4e5514u: goto label_4e5514;
        case 0x4e5518u: goto label_4e5518;
        case 0x4e551cu: goto label_4e551c;
        case 0x4e5520u: goto label_4e5520;
        case 0x4e5524u: goto label_4e5524;
        case 0x4e5528u: goto label_4e5528;
        case 0x4e552cu: goto label_4e552c;
        case 0x4e5530u: goto label_4e5530;
        case 0x4e5534u: goto label_4e5534;
        case 0x4e5538u: goto label_4e5538;
        case 0x4e553cu: goto label_4e553c;
        case 0x4e5540u: goto label_4e5540;
        case 0x4e5544u: goto label_4e5544;
        case 0x4e5548u: goto label_4e5548;
        case 0x4e554cu: goto label_4e554c;
        case 0x4e5550u: goto label_4e5550;
        case 0x4e5554u: goto label_4e5554;
        case 0x4e5558u: goto label_4e5558;
        case 0x4e555cu: goto label_4e555c;
        case 0x4e5560u: goto label_4e5560;
        case 0x4e5564u: goto label_4e5564;
        case 0x4e5568u: goto label_4e5568;
        case 0x4e556cu: goto label_4e556c;
        case 0x4e5570u: goto label_4e5570;
        case 0x4e5574u: goto label_4e5574;
        case 0x4e5578u: goto label_4e5578;
        case 0x4e557cu: goto label_4e557c;
        case 0x4e5580u: goto label_4e5580;
        case 0x4e5584u: goto label_4e5584;
        case 0x4e5588u: goto label_4e5588;
        case 0x4e558cu: goto label_4e558c;
        case 0x4e5590u: goto label_4e5590;
        case 0x4e5594u: goto label_4e5594;
        case 0x4e5598u: goto label_4e5598;
        case 0x4e559cu: goto label_4e559c;
        case 0x4e55a0u: goto label_4e55a0;
        case 0x4e55a4u: goto label_4e55a4;
        case 0x4e55a8u: goto label_4e55a8;
        case 0x4e55acu: goto label_4e55ac;
        case 0x4e55b0u: goto label_4e55b0;
        case 0x4e55b4u: goto label_4e55b4;
        case 0x4e55b8u: goto label_4e55b8;
        case 0x4e55bcu: goto label_4e55bc;
        case 0x4e55c0u: goto label_4e55c0;
        case 0x4e55c4u: goto label_4e55c4;
        case 0x4e55c8u: goto label_4e55c8;
        case 0x4e55ccu: goto label_4e55cc;
        case 0x4e55d0u: goto label_4e55d0;
        case 0x4e55d4u: goto label_4e55d4;
        case 0x4e55d8u: goto label_4e55d8;
        case 0x4e55dcu: goto label_4e55dc;
        case 0x4e55e0u: goto label_4e55e0;
        case 0x4e55e4u: goto label_4e55e4;
        case 0x4e55e8u: goto label_4e55e8;
        case 0x4e55ecu: goto label_4e55ec;
        case 0x4e55f0u: goto label_4e55f0;
        case 0x4e55f4u: goto label_4e55f4;
        case 0x4e55f8u: goto label_4e55f8;
        case 0x4e55fcu: goto label_4e55fc;
        case 0x4e5600u: goto label_4e5600;
        case 0x4e5604u: goto label_4e5604;
        case 0x4e5608u: goto label_4e5608;
        case 0x4e560cu: goto label_4e560c;
        case 0x4e5610u: goto label_4e5610;
        case 0x4e5614u: goto label_4e5614;
        case 0x4e5618u: goto label_4e5618;
        case 0x4e561cu: goto label_4e561c;
        case 0x4e5620u: goto label_4e5620;
        case 0x4e5624u: goto label_4e5624;
        case 0x4e5628u: goto label_4e5628;
        case 0x4e562cu: goto label_4e562c;
        case 0x4e5630u: goto label_4e5630;
        case 0x4e5634u: goto label_4e5634;
        case 0x4e5638u: goto label_4e5638;
        case 0x4e563cu: goto label_4e563c;
        case 0x4e5640u: goto label_4e5640;
        case 0x4e5644u: goto label_4e5644;
        case 0x4e5648u: goto label_4e5648;
        case 0x4e564cu: goto label_4e564c;
        case 0x4e5650u: goto label_4e5650;
        case 0x4e5654u: goto label_4e5654;
        case 0x4e5658u: goto label_4e5658;
        case 0x4e565cu: goto label_4e565c;
        case 0x4e5660u: goto label_4e5660;
        case 0x4e5664u: goto label_4e5664;
        case 0x4e5668u: goto label_4e5668;
        case 0x4e566cu: goto label_4e566c;
        case 0x4e5670u: goto label_4e5670;
        case 0x4e5674u: goto label_4e5674;
        case 0x4e5678u: goto label_4e5678;
        case 0x4e567cu: goto label_4e567c;
        case 0x4e5680u: goto label_4e5680;
        case 0x4e5684u: goto label_4e5684;
        case 0x4e5688u: goto label_4e5688;
        case 0x4e568cu: goto label_4e568c;
        case 0x4e5690u: goto label_4e5690;
        case 0x4e5694u: goto label_4e5694;
        case 0x4e5698u: goto label_4e5698;
        case 0x4e569cu: goto label_4e569c;
        case 0x4e56a0u: goto label_4e56a0;
        case 0x4e56a4u: goto label_4e56a4;
        case 0x4e56a8u: goto label_4e56a8;
        case 0x4e56acu: goto label_4e56ac;
        case 0x4e56b0u: goto label_4e56b0;
        case 0x4e56b4u: goto label_4e56b4;
        case 0x4e56b8u: goto label_4e56b8;
        case 0x4e56bcu: goto label_4e56bc;
        case 0x4e56c0u: goto label_4e56c0;
        case 0x4e56c4u: goto label_4e56c4;
        case 0x4e56c8u: goto label_4e56c8;
        case 0x4e56ccu: goto label_4e56cc;
        case 0x4e56d0u: goto label_4e56d0;
        case 0x4e56d4u: goto label_4e56d4;
        case 0x4e56d8u: goto label_4e56d8;
        case 0x4e56dcu: goto label_4e56dc;
        case 0x4e56e0u: goto label_4e56e0;
        case 0x4e56e4u: goto label_4e56e4;
        case 0x4e56e8u: goto label_4e56e8;
        case 0x4e56ecu: goto label_4e56ec;
        case 0x4e56f0u: goto label_4e56f0;
        case 0x4e56f4u: goto label_4e56f4;
        case 0x4e56f8u: goto label_4e56f8;
        case 0x4e56fcu: goto label_4e56fc;
        case 0x4e5700u: goto label_4e5700;
        case 0x4e5704u: goto label_4e5704;
        case 0x4e5708u: goto label_4e5708;
        case 0x4e570cu: goto label_4e570c;
        case 0x4e5710u: goto label_4e5710;
        case 0x4e5714u: goto label_4e5714;
        case 0x4e5718u: goto label_4e5718;
        case 0x4e571cu: goto label_4e571c;
        case 0x4e5720u: goto label_4e5720;
        case 0x4e5724u: goto label_4e5724;
        case 0x4e5728u: goto label_4e5728;
        case 0x4e572cu: goto label_4e572c;
        case 0x4e5730u: goto label_4e5730;
        case 0x4e5734u: goto label_4e5734;
        case 0x4e5738u: goto label_4e5738;
        case 0x4e573cu: goto label_4e573c;
        case 0x4e5740u: goto label_4e5740;
        case 0x4e5744u: goto label_4e5744;
        case 0x4e5748u: goto label_4e5748;
        case 0x4e574cu: goto label_4e574c;
        case 0x4e5750u: goto label_4e5750;
        case 0x4e5754u: goto label_4e5754;
        case 0x4e5758u: goto label_4e5758;
        case 0x4e575cu: goto label_4e575c;
        case 0x4e5760u: goto label_4e5760;
        case 0x4e5764u: goto label_4e5764;
        case 0x4e5768u: goto label_4e5768;
        case 0x4e576cu: goto label_4e576c;
        case 0x4e5770u: goto label_4e5770;
        case 0x4e5774u: goto label_4e5774;
        case 0x4e5778u: goto label_4e5778;
        case 0x4e577cu: goto label_4e577c;
        case 0x4e5780u: goto label_4e5780;
        case 0x4e5784u: goto label_4e5784;
        case 0x4e5788u: goto label_4e5788;
        case 0x4e578cu: goto label_4e578c;
        case 0x4e5790u: goto label_4e5790;
        case 0x4e5794u: goto label_4e5794;
        case 0x4e5798u: goto label_4e5798;
        case 0x4e579cu: goto label_4e579c;
        case 0x4e57a0u: goto label_4e57a0;
        case 0x4e57a4u: goto label_4e57a4;
        case 0x4e57a8u: goto label_4e57a8;
        case 0x4e57acu: goto label_4e57ac;
        case 0x4e57b0u: goto label_4e57b0;
        case 0x4e57b4u: goto label_4e57b4;
        case 0x4e57b8u: goto label_4e57b8;
        case 0x4e57bcu: goto label_4e57bc;
        case 0x4e57c0u: goto label_4e57c0;
        case 0x4e57c4u: goto label_4e57c4;
        case 0x4e57c8u: goto label_4e57c8;
        case 0x4e57ccu: goto label_4e57cc;
        case 0x4e57d0u: goto label_4e57d0;
        case 0x4e57d4u: goto label_4e57d4;
        case 0x4e57d8u: goto label_4e57d8;
        case 0x4e57dcu: goto label_4e57dc;
        case 0x4e57e0u: goto label_4e57e0;
        case 0x4e57e4u: goto label_4e57e4;
        case 0x4e57e8u: goto label_4e57e8;
        case 0x4e57ecu: goto label_4e57ec;
        case 0x4e57f0u: goto label_4e57f0;
        case 0x4e57f4u: goto label_4e57f4;
        case 0x4e57f8u: goto label_4e57f8;
        case 0x4e57fcu: goto label_4e57fc;
        case 0x4e5800u: goto label_4e5800;
        case 0x4e5804u: goto label_4e5804;
        case 0x4e5808u: goto label_4e5808;
        case 0x4e580cu: goto label_4e580c;
        case 0x4e5810u: goto label_4e5810;
        case 0x4e5814u: goto label_4e5814;
        case 0x4e5818u: goto label_4e5818;
        case 0x4e581cu: goto label_4e581c;
        case 0x4e5820u: goto label_4e5820;
        case 0x4e5824u: goto label_4e5824;
        case 0x4e5828u: goto label_4e5828;
        case 0x4e582cu: goto label_4e582c;
        case 0x4e5830u: goto label_4e5830;
        case 0x4e5834u: goto label_4e5834;
        case 0x4e5838u: goto label_4e5838;
        case 0x4e583cu: goto label_4e583c;
        case 0x4e5840u: goto label_4e5840;
        case 0x4e5844u: goto label_4e5844;
        case 0x4e5848u: goto label_4e5848;
        case 0x4e584cu: goto label_4e584c;
        case 0x4e5850u: goto label_4e5850;
        case 0x4e5854u: goto label_4e5854;
        case 0x4e5858u: goto label_4e5858;
        case 0x4e585cu: goto label_4e585c;
        case 0x4e5860u: goto label_4e5860;
        case 0x4e5864u: goto label_4e5864;
        case 0x4e5868u: goto label_4e5868;
        case 0x4e586cu: goto label_4e586c;
        case 0x4e5870u: goto label_4e5870;
        case 0x4e5874u: goto label_4e5874;
        case 0x4e5878u: goto label_4e5878;
        case 0x4e587cu: goto label_4e587c;
        case 0x4e5880u: goto label_4e5880;
        case 0x4e5884u: goto label_4e5884;
        case 0x4e5888u: goto label_4e5888;
        case 0x4e588cu: goto label_4e588c;
        case 0x4e5890u: goto label_4e5890;
        case 0x4e5894u: goto label_4e5894;
        case 0x4e5898u: goto label_4e5898;
        case 0x4e589cu: goto label_4e589c;
        case 0x4e58a0u: goto label_4e58a0;
        case 0x4e58a4u: goto label_4e58a4;
        case 0x4e58a8u: goto label_4e58a8;
        case 0x4e58acu: goto label_4e58ac;
        case 0x4e58b0u: goto label_4e58b0;
        case 0x4e58b4u: goto label_4e58b4;
        case 0x4e58b8u: goto label_4e58b8;
        case 0x4e58bcu: goto label_4e58bc;
        case 0x4e58c0u: goto label_4e58c0;
        case 0x4e58c4u: goto label_4e58c4;
        case 0x4e58c8u: goto label_4e58c8;
        case 0x4e58ccu: goto label_4e58cc;
        case 0x4e58d0u: goto label_4e58d0;
        case 0x4e58d4u: goto label_4e58d4;
        case 0x4e58d8u: goto label_4e58d8;
        case 0x4e58dcu: goto label_4e58dc;
        case 0x4e58e0u: goto label_4e58e0;
        case 0x4e58e4u: goto label_4e58e4;
        case 0x4e58e8u: goto label_4e58e8;
        case 0x4e58ecu: goto label_4e58ec;
        case 0x4e58f0u: goto label_4e58f0;
        case 0x4e58f4u: goto label_4e58f4;
        case 0x4e58f8u: goto label_4e58f8;
        case 0x4e58fcu: goto label_4e58fc;
        case 0x4e5900u: goto label_4e5900;
        case 0x4e5904u: goto label_4e5904;
        case 0x4e5908u: goto label_4e5908;
        case 0x4e590cu: goto label_4e590c;
        case 0x4e5910u: goto label_4e5910;
        case 0x4e5914u: goto label_4e5914;
        case 0x4e5918u: goto label_4e5918;
        case 0x4e591cu: goto label_4e591c;
        case 0x4e5920u: goto label_4e5920;
        case 0x4e5924u: goto label_4e5924;
        case 0x4e5928u: goto label_4e5928;
        case 0x4e592cu: goto label_4e592c;
        case 0x4e5930u: goto label_4e5930;
        case 0x4e5934u: goto label_4e5934;
        case 0x4e5938u: goto label_4e5938;
        case 0x4e593cu: goto label_4e593c;
        case 0x4e5940u: goto label_4e5940;
        case 0x4e5944u: goto label_4e5944;
        case 0x4e5948u: goto label_4e5948;
        case 0x4e594cu: goto label_4e594c;
        case 0x4e5950u: goto label_4e5950;
        case 0x4e5954u: goto label_4e5954;
        case 0x4e5958u: goto label_4e5958;
        case 0x4e595cu: goto label_4e595c;
        case 0x4e5960u: goto label_4e5960;
        case 0x4e5964u: goto label_4e5964;
        case 0x4e5968u: goto label_4e5968;
        case 0x4e596cu: goto label_4e596c;
        case 0x4e5970u: goto label_4e5970;
        case 0x4e5974u: goto label_4e5974;
        case 0x4e5978u: goto label_4e5978;
        case 0x4e597cu: goto label_4e597c;
        case 0x4e5980u: goto label_4e5980;
        case 0x4e5984u: goto label_4e5984;
        case 0x4e5988u: goto label_4e5988;
        case 0x4e598cu: goto label_4e598c;
        case 0x4e5990u: goto label_4e5990;
        case 0x4e5994u: goto label_4e5994;
        case 0x4e5998u: goto label_4e5998;
        case 0x4e599cu: goto label_4e599c;
        case 0x4e59a0u: goto label_4e59a0;
        case 0x4e59a4u: goto label_4e59a4;
        case 0x4e59a8u: goto label_4e59a8;
        case 0x4e59acu: goto label_4e59ac;
        case 0x4e59b0u: goto label_4e59b0;
        case 0x4e59b4u: goto label_4e59b4;
        case 0x4e59b8u: goto label_4e59b8;
        case 0x4e59bcu: goto label_4e59bc;
        case 0x4e59c0u: goto label_4e59c0;
        case 0x4e59c4u: goto label_4e59c4;
        case 0x4e59c8u: goto label_4e59c8;
        case 0x4e59ccu: goto label_4e59cc;
        case 0x4e59d0u: goto label_4e59d0;
        case 0x4e59d4u: goto label_4e59d4;
        case 0x4e59d8u: goto label_4e59d8;
        case 0x4e59dcu: goto label_4e59dc;
        case 0x4e59e0u: goto label_4e59e0;
        case 0x4e59e4u: goto label_4e59e4;
        case 0x4e59e8u: goto label_4e59e8;
        case 0x4e59ecu: goto label_4e59ec;
        case 0x4e59f0u: goto label_4e59f0;
        case 0x4e59f4u: goto label_4e59f4;
        case 0x4e59f8u: goto label_4e59f8;
        case 0x4e59fcu: goto label_4e59fc;
        case 0x4e5a00u: goto label_4e5a00;
        case 0x4e5a04u: goto label_4e5a04;
        case 0x4e5a08u: goto label_4e5a08;
        case 0x4e5a0cu: goto label_4e5a0c;
        case 0x4e5a10u: goto label_4e5a10;
        case 0x4e5a14u: goto label_4e5a14;
        case 0x4e5a18u: goto label_4e5a18;
        case 0x4e5a1cu: goto label_4e5a1c;
        case 0x4e5a20u: goto label_4e5a20;
        case 0x4e5a24u: goto label_4e5a24;
        case 0x4e5a28u: goto label_4e5a28;
        case 0x4e5a2cu: goto label_4e5a2c;
        case 0x4e5a30u: goto label_4e5a30;
        case 0x4e5a34u: goto label_4e5a34;
        case 0x4e5a38u: goto label_4e5a38;
        case 0x4e5a3cu: goto label_4e5a3c;
        case 0x4e5a40u: goto label_4e5a40;
        case 0x4e5a44u: goto label_4e5a44;
        case 0x4e5a48u: goto label_4e5a48;
        case 0x4e5a4cu: goto label_4e5a4c;
        case 0x4e5a50u: goto label_4e5a50;
        case 0x4e5a54u: goto label_4e5a54;
        case 0x4e5a58u: goto label_4e5a58;
        case 0x4e5a5cu: goto label_4e5a5c;
        case 0x4e5a60u: goto label_4e5a60;
        case 0x4e5a64u: goto label_4e5a64;
        case 0x4e5a68u: goto label_4e5a68;
        case 0x4e5a6cu: goto label_4e5a6c;
        case 0x4e5a70u: goto label_4e5a70;
        case 0x4e5a74u: goto label_4e5a74;
        case 0x4e5a78u: goto label_4e5a78;
        case 0x4e5a7cu: goto label_4e5a7c;
        case 0x4e5a80u: goto label_4e5a80;
        case 0x4e5a84u: goto label_4e5a84;
        case 0x4e5a88u: goto label_4e5a88;
        case 0x4e5a8cu: goto label_4e5a8c;
        case 0x4e5a90u: goto label_4e5a90;
        case 0x4e5a94u: goto label_4e5a94;
        case 0x4e5a98u: goto label_4e5a98;
        case 0x4e5a9cu: goto label_4e5a9c;
        case 0x4e5aa0u: goto label_4e5aa0;
        case 0x4e5aa4u: goto label_4e5aa4;
        case 0x4e5aa8u: goto label_4e5aa8;
        case 0x4e5aacu: goto label_4e5aac;
        case 0x4e5ab0u: goto label_4e5ab0;
        case 0x4e5ab4u: goto label_4e5ab4;
        case 0x4e5ab8u: goto label_4e5ab8;
        case 0x4e5abcu: goto label_4e5abc;
        case 0x4e5ac0u: goto label_4e5ac0;
        case 0x4e5ac4u: goto label_4e5ac4;
        case 0x4e5ac8u: goto label_4e5ac8;
        case 0x4e5accu: goto label_4e5acc;
        case 0x4e5ad0u: goto label_4e5ad0;
        case 0x4e5ad4u: goto label_4e5ad4;
        case 0x4e5ad8u: goto label_4e5ad8;
        case 0x4e5adcu: goto label_4e5adc;
        case 0x4e5ae0u: goto label_4e5ae0;
        case 0x4e5ae4u: goto label_4e5ae4;
        case 0x4e5ae8u: goto label_4e5ae8;
        case 0x4e5aecu: goto label_4e5aec;
        case 0x4e5af0u: goto label_4e5af0;
        case 0x4e5af4u: goto label_4e5af4;
        case 0x4e5af8u: goto label_4e5af8;
        case 0x4e5afcu: goto label_4e5afc;
        case 0x4e5b00u: goto label_4e5b00;
        case 0x4e5b04u: goto label_4e5b04;
        case 0x4e5b08u: goto label_4e5b08;
        case 0x4e5b0cu: goto label_4e5b0c;
        case 0x4e5b10u: goto label_4e5b10;
        case 0x4e5b14u: goto label_4e5b14;
        case 0x4e5b18u: goto label_4e5b18;
        case 0x4e5b1cu: goto label_4e5b1c;
        case 0x4e5b20u: goto label_4e5b20;
        case 0x4e5b24u: goto label_4e5b24;
        case 0x4e5b28u: goto label_4e5b28;
        case 0x4e5b2cu: goto label_4e5b2c;
        case 0x4e5b30u: goto label_4e5b30;
        case 0x4e5b34u: goto label_4e5b34;
        case 0x4e5b38u: goto label_4e5b38;
        case 0x4e5b3cu: goto label_4e5b3c;
        case 0x4e5b40u: goto label_4e5b40;
        case 0x4e5b44u: goto label_4e5b44;
        case 0x4e5b48u: goto label_4e5b48;
        case 0x4e5b4cu: goto label_4e5b4c;
        case 0x4e5b50u: goto label_4e5b50;
        case 0x4e5b54u: goto label_4e5b54;
        case 0x4e5b58u: goto label_4e5b58;
        case 0x4e5b5cu: goto label_4e5b5c;
        case 0x4e5b60u: goto label_4e5b60;
        case 0x4e5b64u: goto label_4e5b64;
        case 0x4e5b68u: goto label_4e5b68;
        case 0x4e5b6cu: goto label_4e5b6c;
        case 0x4e5b70u: goto label_4e5b70;
        case 0x4e5b74u: goto label_4e5b74;
        case 0x4e5b78u: goto label_4e5b78;
        case 0x4e5b7cu: goto label_4e5b7c;
        case 0x4e5b80u: goto label_4e5b80;
        case 0x4e5b84u: goto label_4e5b84;
        case 0x4e5b88u: goto label_4e5b88;
        case 0x4e5b8cu: goto label_4e5b8c;
        case 0x4e5b90u: goto label_4e5b90;
        case 0x4e5b94u: goto label_4e5b94;
        case 0x4e5b98u: goto label_4e5b98;
        case 0x4e5b9cu: goto label_4e5b9c;
        case 0x4e5ba0u: goto label_4e5ba0;
        case 0x4e5ba4u: goto label_4e5ba4;
        case 0x4e5ba8u: goto label_4e5ba8;
        case 0x4e5bacu: goto label_4e5bac;
        case 0x4e5bb0u: goto label_4e5bb0;
        case 0x4e5bb4u: goto label_4e5bb4;
        case 0x4e5bb8u: goto label_4e5bb8;
        case 0x4e5bbcu: goto label_4e5bbc;
        case 0x4e5bc0u: goto label_4e5bc0;
        case 0x4e5bc4u: goto label_4e5bc4;
        case 0x4e5bc8u: goto label_4e5bc8;
        case 0x4e5bccu: goto label_4e5bcc;
        case 0x4e5bd0u: goto label_4e5bd0;
        case 0x4e5bd4u: goto label_4e5bd4;
        case 0x4e5bd8u: goto label_4e5bd8;
        case 0x4e5bdcu: goto label_4e5bdc;
        case 0x4e5be0u: goto label_4e5be0;
        case 0x4e5be4u: goto label_4e5be4;
        case 0x4e5be8u: goto label_4e5be8;
        case 0x4e5becu: goto label_4e5bec;
        case 0x4e5bf0u: goto label_4e5bf0;
        case 0x4e5bf4u: goto label_4e5bf4;
        case 0x4e5bf8u: goto label_4e5bf8;
        case 0x4e5bfcu: goto label_4e5bfc;
        case 0x4e5c00u: goto label_4e5c00;
        case 0x4e5c04u: goto label_4e5c04;
        case 0x4e5c08u: goto label_4e5c08;
        case 0x4e5c0cu: goto label_4e5c0c;
        case 0x4e5c10u: goto label_4e5c10;
        case 0x4e5c14u: goto label_4e5c14;
        case 0x4e5c18u: goto label_4e5c18;
        case 0x4e5c1cu: goto label_4e5c1c;
        case 0x4e5c20u: goto label_4e5c20;
        case 0x4e5c24u: goto label_4e5c24;
        case 0x4e5c28u: goto label_4e5c28;
        case 0x4e5c2cu: goto label_4e5c2c;
        case 0x4e5c30u: goto label_4e5c30;
        case 0x4e5c34u: goto label_4e5c34;
        case 0x4e5c38u: goto label_4e5c38;
        case 0x4e5c3cu: goto label_4e5c3c;
        case 0x4e5c40u: goto label_4e5c40;
        case 0x4e5c44u: goto label_4e5c44;
        case 0x4e5c48u: goto label_4e5c48;
        case 0x4e5c4cu: goto label_4e5c4c;
        case 0x4e5c50u: goto label_4e5c50;
        case 0x4e5c54u: goto label_4e5c54;
        case 0x4e5c58u: goto label_4e5c58;
        case 0x4e5c5cu: goto label_4e5c5c;
        case 0x4e5c60u: goto label_4e5c60;
        case 0x4e5c64u: goto label_4e5c64;
        case 0x4e5c68u: goto label_4e5c68;
        case 0x4e5c6cu: goto label_4e5c6c;
        case 0x4e5c70u: goto label_4e5c70;
        case 0x4e5c74u: goto label_4e5c74;
        case 0x4e5c78u: goto label_4e5c78;
        case 0x4e5c7cu: goto label_4e5c7c;
        case 0x4e5c80u: goto label_4e5c80;
        case 0x4e5c84u: goto label_4e5c84;
        case 0x4e5c88u: goto label_4e5c88;
        case 0x4e5c8cu: goto label_4e5c8c;
        default: break;
    }

    ctx->pc = 0x4e5370u;

label_4e5370:
    // 0x4e5370: 0x3a6b6170  xori        $t3, $s3, 0x6170
    ctx->pc = 0x4e5370u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)24944);
label_4e5374:
    // 0x4e5374: 0x61746164  daddi       $s4, $t3, 0x6164
    ctx->pc = 0x4e5374u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)24932; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 20, res); }
label_4e5378:
    // 0x4e5378: 0x6e61705c  ldr         $at, 0x705C($s3)
    ctx->pc = 0x4e5378u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 28764); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
label_4e537c:
    // 0x4e537c: 0x5c736c65  .word       0x5C736C65                   # bgtzl       $v1, . + 4 + (0x6C65 << 2) # 00130000 <InstrIdType: CPU_NORMAL>
label_4e5380:
    if (ctx->pc == 0x4E5380u) {
        ctx->pc = 0x4E5380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E537Cu;
        // 0x4e5380: 0x5f6c6e70  .word       0x5F6C6E70                   # bgtzl       $k1, . + 4 + (0x6E70 << 2) # 000C0000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x4E5380 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E5384u;
        goto label_4e5384;
    }
    ctx->pc = 0x4E537Cu;
    {
        const bool branch_taken_0x4e537c = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x4e537c) {
            ctx->pc = 0x4E5380u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E537Cu;
            // 0x4e5380: 0x5f6c6e70  .word       0x5F6C6E70                   # bgtzl       $k1, . + 4 + (0x6E70 << 2) # 000C0000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            // Likely branch instruction at 0x4E5380 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x500514u;
            return;
        }
    }
    ctx->pc = 0x4E5384u;
label_4e5384:
    // 0x4e5384: 0x31627274  andi        $v0, $t3, 0x7274
    ctx->pc = 0x4e5384u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)29300);
label_4e5388:
    // 0x4e5388: 0x7478742e  .word       0x7478742E                   # INVALID     $v1, $t8, 0x742E # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e5388u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E5388 raw=0x7478742E");
label_4e538c:
    // 0x4e538c: 0x0  nop
    ctx->pc = 0x4e538cu;
    // NOP
label_4e5390:
    // 0x4e5390: 0x437  .word       0x00000437                   # INVALID     $zero, $zero, 0x437 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e5390u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x4E5390 raw=0x00000437");
label_4e5394:
    // 0x4e5394: 0x438  dsll        $zero, $zero, 16
    ctx->pc = 0x4e5394u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << 16);
label_4e5398:
    // 0x4e5398: 0x439  .word       0x00000439                   # INVALID     $zero, $zero, 0x439 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e5398u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x4E5398 raw=0x00000439");
label_4e539c:
    // 0x4e539c: 0x43a  dsrl        $zero, $zero, 16
    ctx->pc = 0x4e539cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> 16);
label_4e53a0:
    // 0x4e53a0: 0x43b  dsra        $zero, $zero, 16
    ctx->pc = 0x4e53a0u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> 16);
label_4e53a4:
    // 0x4e53a4: 0x43c  dsll32      $zero, $zero, 16
    ctx->pc = 0x4e53a4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (32 + 16));
label_4e53a8:
    // 0x4e53a8: 0x43d  .word       0x0000043D                   # INVALID     $zero, $zero, 0x43D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e53a8u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x4E53A8 raw=0x0000043D");
label_4e53ac:
    // 0x4e53ac: 0x43e  dsrl32      $zero, $zero, 16
    ctx->pc = 0x4e53acu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (32 + 16));
label_4e53b0:
    // 0x4e53b0: 0x43f  dsra32      $zero, $zero, 16
    ctx->pc = 0x4e53b0u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 16));
label_4e53b4:
    // 0x4e53b4: 0x440  sll         $zero, $zero, 17
    ctx->pc = 0x4e53b4u;
    
label_4e53b8:
    // 0x4e53b8: 0x441  .word       0x00000441                   # INVALID     $zero, $zero, 0x441 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e53b8u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x4E53B8 raw=0x00000441");
label_4e53bc:
    // 0x4e53bc: 0x0  nop
    ctx->pc = 0x4e53bcu;
    // NOP
label_4e53c0:
    // 0x4e53c0: 0x6e696f63  ldr         $t1, 0x6F63($s3)
    ctx->pc = 0x4e53c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 28515); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_4e53c4:
    // 0x4e53c4: 0x5f6b735f  .word       0x5F6B735F                   # bgtzl       $k1, . + 4 + (0x735F << 2) # 000B0000 <InstrIdType: CPU_NORMAL>
label_4e53c8:
    if (ctx->pc == 0x4E53C8u) {
        ctx->pc = 0x4E53C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E53C4u;
        // 0x4e53c8: 0x67617266  daddiu      $at, $k1, 0x7266 (Delay Slot)
        SET_GPR_S64(ctx, 1, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)29286);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E53CCu;
        goto label_4e53cc;
    }
    ctx->pc = 0x4E53C4u;
    {
        const bool branch_taken_0x4e53c4 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e53c4) {
            ctx->pc = 0x4E53C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E53C4u;
            // 0x4e53c8: 0x67617266  daddiu      $at, $k1, 0x7266 (Delay Slot)
            SET_GPR_S64(ctx, 1, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)29286);
            ctx->in_delay_slot = false;
            ctx->pc = 0x502144u;
            return;
        }
    }
    ctx->pc = 0x4E53CCu;
label_4e53cc:
    // 0x4e53cc: 0x74696c69  .word       0x74696C69                   # INVALID     $v1, $t1, 0x6C69 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e53ccu;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E53CC raw=0x74696C69");
label_4e53d0:
    // 0x4e53d0: 0x65  .word       0x00000065                   # move        $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e53d0u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_4e53d4:
    // 0x4e53d4: 0x0  nop
    ctx->pc = 0x4e53d4u;
    // NOP
label_4e53d8:
    // 0x4e53d8: 0x6e696f63  ldr         $t1, 0x6F63($s3)
    ctx->pc = 0x4e53d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 28515); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_4e53dc:
    // 0x4e53dc: 0x5f6b735f  .word       0x5F6B735F                   # bgtzl       $k1, . + 4 + (0x735F << 2) # 000B0000 <InstrIdType: CPU_NORMAL>
label_4e53e0:
    if (ctx->pc == 0x4E53E0u) {
        ctx->pc = 0x4E53E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E53DCu;
        // 0x4e53e0: 0x6863616d  ldl         $v1, 0x616D($v1) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24941); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E53E4u;
        goto label_4e53e4;
    }
    ctx->pc = 0x4E53DCu;
    {
        const bool branch_taken_0x4e53dc = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e53dc) {
            ctx->pc = 0x4E53E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E53DCu;
            // 0x4e53e0: 0x6863616d  ldl         $v1, 0x616D($v1) (Delay Slot)
            { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24941); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x50215Cu;
            return;
        }
    }
    ctx->pc = 0x4E53E4u;
label_4e53e4:
    // 0x4e53e4: 0x6f  .word       0x0000006F                   # dsubu       $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e53e4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_4e53e8:
    // 0x4e53e8: 0x0  nop
    ctx->pc = 0x4e53e8u;
    // NOP
label_4e53ec:
    // 0x4e53ec: 0x0  nop
    ctx->pc = 0x4e53ecu;
    // NOP
label_4e53f0:
    // 0x4e53f0: 0x6e696f63  ldr         $t1, 0x6F63($s3)
    ctx->pc = 0x4e53f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 28515); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_4e53f4:
    // 0x4e53f4: 0x5f6b735f  .word       0x5F6B735F                   # bgtzl       $k1, . + 4 + (0x735F << 2) # 000B0000 <InstrIdType: CPU_NORMAL>
label_4e53f8:
    if (ctx->pc == 0x4E53F8u) {
        ctx->pc = 0x4E53F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E53F4u;
        // 0x4e53f8: 0x69726573  ldl         $s2, 0x6573($t3) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 11), 25971); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 18, (GPR_U64(ctx, 18) & keepMask) | (mem << shift)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E53FCu;
        goto label_4e53fc;
    }
    ctx->pc = 0x4E53F4u;
    {
        const bool branch_taken_0x4e53f4 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e53f4) {
            ctx->pc = 0x4E53F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E53F4u;
            // 0x4e53f8: 0x69726573  ldl         $s2, 0x6573($t3) (Delay Slot)
            { uint32_t addr = ADD32(GPR_U32(ctx, 11), 25971); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 18, (GPR_U64(ctx, 18) & keepMask) | (mem << shift)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x502174u;
            return;
        }
    }
    ctx->pc = 0x4E53FCu;
label_4e53fc:
    // 0x4e53fc: 0x787565  .word       0x00787565                   # or          $t6, $v1, $t8 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e53fcu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 3) | GPR_U64(ctx, 24));
label_4e5400:
    // 0x4e5400: 0x6e696f63  ldr         $t1, 0x6F63($s3)
    ctx->pc = 0x4e5400u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 28515); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_4e5404:
    // 0x4e5404: 0x5f6b735f  .word       0x5F6B735F                   # bgtzl       $k1, . + 4 + (0x735F << 2) # 000B0000 <InstrIdType: CPU_NORMAL>
label_4e5408:
    if (ctx->pc == 0x4E5408u) {
        ctx->pc = 0x4E5408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E5404u;
        // 0x4e5408: 0x746c7563  .word       0x746C7563                   # INVALID     $v1, $t4, 0x7563 # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E5408 raw=0x746C7563");
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E540Cu;
        goto label_4e540c;
    }
    ctx->pc = 0x4E5404u;
    {
        const bool branch_taken_0x4e5404 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e5404) {
            ctx->pc = 0x4E5408u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E5404u;
            // 0x4e5408: 0x746c7563  .word       0x746C7563                   # INVALID     $v1, $t4, 0x7563 # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E5408 raw=0x746C7563");
            ctx->in_delay_slot = false;
            ctx->pc = 0x502184u;
            return;
        }
    }
    ctx->pc = 0x4E540Cu;
label_4e540c:
    // 0x4e540c: 0x657275  .word       0x00657275                   # INVALID     $v1, $a1, 0x7275 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e540cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x4E540C raw=0x00657275");
label_4e5410:
    // 0x4e5410: 0x6e696f63  ldr         $t1, 0x6F63($s3)
    ctx->pc = 0x4e5410u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 28515); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_4e5414:
    // 0x4e5414: 0x5f6b735f  .word       0x5F6B735F                   # bgtzl       $k1, . + 4 + (0x735F << 2) # 000B0000 <InstrIdType: CPU_NORMAL>
label_4e5418:
    if (ctx->pc == 0x4E5418u) {
        ctx->pc = 0x4E5418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E5414u;
        // 0x4e5418: 0x65786573  daddiu      $t8, $t3, 0x6573 (Delay Slot)
        SET_GPR_S64(ctx, 24, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)25971);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E541Cu;
        goto label_4e541c;
    }
    ctx->pc = 0x4E5414u;
    {
        const bool branch_taken_0x4e5414 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e5414) {
            ctx->pc = 0x4E5418u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E5414u;
            // 0x4e5418: 0x65786573  daddiu      $t8, $t3, 0x6573 (Delay Slot)
            SET_GPR_S64(ctx, 24, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)25971);
            ctx->in_delay_slot = false;
            ctx->pc = 0x502194u;
            return;
        }
    }
    ctx->pc = 0x4E541Cu;
label_4e541c:
    // 0x4e541c: 0x0  nop
    ctx->pc = 0x4e541cu;
    // NOP
label_4e5420:
    // 0x4e5420: 0x6e696f63  ldr         $t1, 0x6F63($s3)
    ctx->pc = 0x4e5420u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 28515); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_4e5424:
    // 0x4e5424: 0x5f6b735f  .word       0x5F6B735F                   # bgtzl       $k1, . + 4 + (0x735F << 2) # 000B0000 <InstrIdType: CPU_NORMAL>
label_4e5428:
    if (ctx->pc == 0x4E5428u) {
        ctx->pc = 0x4E5428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E5424u;
        // 0x4e5428: 0x6f6d7568  ldr         $t5, 0x7568($k1) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 27), 30056); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem >> shift)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E542Cu;
        goto label_4e542c;
    }
    ctx->pc = 0x4E5424u;
    {
        const bool branch_taken_0x4e5424 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e5424) {
            ctx->pc = 0x4E5428u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E5424u;
            // 0x4e5428: 0x6f6d7568  ldr         $t5, 0x7568($k1) (Delay Slot)
            { uint32_t addr = ADD32(GPR_U32(ctx, 27), 30056); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem >> shift)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x5021A4u;
            return;
        }
    }
    ctx->pc = 0x4E542Cu;
label_4e542c:
    // 0x4e542c: 0x7275  .word       0x00007275                   # INVALID     $zero, $zero, 0x7275 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e542cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x4E542C raw=0x00007275");
label_4e5430:
    // 0x4e5430: 0x6e696f63  ldr         $t1, 0x6F63($s3)
    ctx->pc = 0x4e5430u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 28515); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_4e5434:
    // 0x4e5434: 0x5f6b735f  .word       0x5F6B735F                   # bgtzl       $k1, . + 4 + (0x735F << 2) # 000B0000 <InstrIdType: CPU_NORMAL>
label_4e5438:
    if (ctx->pc == 0x4E5438u) {
        ctx->pc = 0x4E5438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E5434u;
        // 0x4e5438: 0x74616c66  .word       0x74616C66                   # INVALID     $v1, $at, 0x6C66 # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E5438 raw=0x74616C66");
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E543Cu;
        goto label_4e543c;
    }
    ctx->pc = 0x4E5434u;
    {
        const bool branch_taken_0x4e5434 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e5434) {
            ctx->pc = 0x4E5438u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E5434u;
            // 0x4e5438: 0x74616c66  .word       0x74616C66                   # INVALID     $v1, $at, 0x6C66 # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E5438 raw=0x74616C66");
            ctx->in_delay_slot = false;
            ctx->pc = 0x5021B4u;
            return;
        }
    }
    ctx->pc = 0x4E543Cu;
label_4e543c:
    // 0x4e543c: 0x69726574  ldl         $s2, 0x6574($t3)
    ctx->pc = 0x4e543cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 25972); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 18, (GPR_U64(ctx, 18) & keepMask) | (mem << shift)); }
label_4e5440:
    // 0x4e5440: 0x65  .word       0x00000065                   # move        $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e5440u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_4e5444:
    // 0x4e5444: 0x0  nop
    ctx->pc = 0x4e5444u;
    // NOP
label_4e5448:
    // 0x4e5448: 0x0  nop
    ctx->pc = 0x4e5448u;
    // NOP
label_4e544c:
    // 0x4e544c: 0x0  nop
    ctx->pc = 0x4e544cu;
    // NOP
label_4e5450:
    // 0x4e5450: 0x6e696f63  ldr         $t1, 0x6F63($s3)
    ctx->pc = 0x4e5450u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 28515); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_4e5454:
    // 0x4e5454: 0x5f6b735f  .word       0x5F6B735F                   # bgtzl       $k1, . + 4 + (0x735F << 2) # 000B0000 <InstrIdType: CPU_NORMAL>
label_4e5458:
    if (ctx->pc == 0x4E5458u) {
        ctx->pc = 0x4E5458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E5454u;
        // 0x4e5458: 0x5f77656e  .word       0x5F77656E                   # bgtzl       $k1, . + 4 + (0x656E << 2) # 00170000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x4E5458 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E545Cu;
        goto label_4e545c;
    }
    ctx->pc = 0x4E5454u;
    {
        const bool branch_taken_0x4e5454 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e5454) {
            ctx->pc = 0x4E5458u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E5454u;
            // 0x4e5458: 0x5f77656e  .word       0x5F77656E                   # bgtzl       $k1, . + 4 + (0x656E << 2) # 00170000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            // Likely branch instruction at 0x4E5458 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x5021D4u;
            return;
        }
    }
    ctx->pc = 0x4E545Cu;
label_4e545c:
    // 0x4e545c: 0x656761  .word       0x00656761                   # addu        $t4, $v1, $a1 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e545cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_4e5460:
    // 0x4e5460: 0x6e696f63  ldr         $t1, 0x6F63($s3)
    ctx->pc = 0x4e5460u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 28515); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_4e5464:
    // 0x4e5464: 0x5f6b735f  .word       0x5F6B735F                   # bgtzl       $k1, . + 4 + (0x735F << 2) # 000B0000 <InstrIdType: CPU_NORMAL>
label_4e5468:
    if (ctx->pc == 0x4E5468u) {
        ctx->pc = 0x4E5468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E5464u;
        // 0x4e5468: 0x65677261  daddiu      $a3, $t3, 0x7261 (Delay Slot)
        SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)29281);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E546Cu;
        goto label_4e546c;
    }
    ctx->pc = 0x4E5464u;
    {
        const bool branch_taken_0x4e5464 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e5464) {
            ctx->pc = 0x4E5468u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E5464u;
            // 0x4e5468: 0x65677261  daddiu      $a3, $t3, 0x7261 (Delay Slot)
            SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)29281);
            ctx->in_delay_slot = false;
            ctx->pc = 0x5021E4u;
            return;
        }
    }
    ctx->pc = 0x4E546Cu;
label_4e546c:
    // 0x4e546c: 0x746e  .word       0x0000746E                   # dsub        $t6, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e546cu;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 14, r); }
label_4e5470:
    // 0x4e5470: 0x6e696f63  ldr         $t1, 0x6F63($s3)
    ctx->pc = 0x4e5470u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 28515); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_4e5474:
    // 0x4e5474: 0x5f6b735f  .word       0x5F6B735F                   # bgtzl       $k1, . + 4 + (0x735F << 2) # 000B0000 <InstrIdType: CPU_NORMAL>
label_4e5478:
    if (ctx->pc == 0x4E5478u) {
        ctx->pc = 0x4E5478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E5474u;
        // 0x4e5478: 0x676f7264  daddiu      $t7, $k1, 0x7264 (Delay Slot)
        SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)29284);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E547Cu;
        goto label_4e547c;
    }
    ctx->pc = 0x4E5474u;
    {
        const bool branch_taken_0x4e5474 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e5474) {
            ctx->pc = 0x4E5478u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E5474u;
            // 0x4e5478: 0x676f7264  daddiu      $t7, $k1, 0x7264 (Delay Slot)
            SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)29284);
            ctx->in_delay_slot = false;
            ctx->pc = 0x5021F4u;
            return;
        }
    }
    ctx->pc = 0x4E547Cu;
label_4e547c:
    // 0x4e547c: 0x6575  .word       0x00006575                   # INVALID     $zero, $zero, 0x6575 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e547cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x4E547C raw=0x00006575");
label_4e5480:
    // 0x4e5480: 0x6e696f63  ldr         $t1, 0x6F63($s3)
    ctx->pc = 0x4e5480u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 28515); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_4e5484:
    // 0x4e5484: 0x5f6b735f  .word       0x5F6B735F                   # bgtzl       $k1, . + 4 + (0x735F << 2) # 000B0000 <InstrIdType: CPU_NORMAL>
label_4e5488:
    if (ctx->pc == 0x4E5488u) {
        ctx->pc = 0x4E5488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E5484u;
        // 0x4e5488: 0x5f74656a  .word       0x5F74656A                   # bgtzl       $k1, . + 4 + (0x656A << 2) # 00140000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x4E5488 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E548Cu;
        goto label_4e548c;
    }
    ctx->pc = 0x4E5484u;
    {
        const bool branch_taken_0x4e5484 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e5484) {
            ctx->pc = 0x4E5488u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E5484u;
            // 0x4e5488: 0x5f74656a  .word       0x5F74656A                   # bgtzl       $k1, . + 4 + (0x656A << 2) # 00140000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            // Likely branch instruction at 0x4E5488 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x502204u;
            return;
        }
    }
    ctx->pc = 0x4E548Cu;
label_4e548c:
    // 0x4e548c: 0x746573  tltu        $v1, $s4, 405
    ctx->pc = 0x4e548cu;
    if (GPR_U64(ctx, 3) < GPR_U64(ctx, 20)) { runtime->handleTrap(rdram, ctx); }
label_4e5490:
    // 0x4e5490: 0x4e53c0  .word       0x004E53C0                   # sll         $t2, $t6, 15 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e5490u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 14), 15));
label_4e5494:
    // 0x4e5494: 0x4e53d8  .word       0x004E53D8                   # mult        $t2, $v0, $t6 # 000003C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x4e5494u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
label_4e5498:
    // 0x4e5498: 0x4e53f0  tge         $v0, $t6, 335
    ctx->pc = 0x4e5498u;
    if (GPR_S64(ctx, 2) >= GPR_S64(ctx, 14)) { runtime->handleTrap(rdram, ctx); }
label_4e549c:
    // 0x4e549c: 0x4e5400  .word       0x004E5400                   # sll         $t2, $t6, 16 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e549cu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 14), 16));
label_4e54a0:
    // 0x4e54a0: 0x4e5410  .word       0x004E5410                   # mfhi        $t2 # 004E0400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e54a0u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_4e54a4:
    // 0x4e54a4: 0x4e5420  .word       0x004E5420                   # add         $t2, $v0, $t6 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e54a4u;
    {     int32_t rs_val = GPR_S32(ctx, 2);     int32_t rt_val = GPR_S32(ctx, 14);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
label_4e54a8:
    // 0x4e54a8: 0x4e5430  tge         $v0, $t6, 336
    ctx->pc = 0x4e54a8u;
    if (GPR_S64(ctx, 2) >= GPR_S64(ctx, 14)) { runtime->handleTrap(rdram, ctx); }
label_4e54ac:
    // 0x4e54ac: 0x4e5450  .word       0x004E5450                   # mfhi        $t2 # 004E0440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e54acu;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_4e54b0:
    // 0x4e54b0: 0x4e5460  .word       0x004E5460                   # add         $t2, $v0, $t6 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e54b0u;
    {     int32_t rs_val = GPR_S32(ctx, 2);     int32_t rt_val = GPR_S32(ctx, 14);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
label_4e54b4:
    // 0x4e54b4: 0x4e5470  tge         $v0, $t6, 337
    ctx->pc = 0x4e54b4u;
    if (GPR_S64(ctx, 2) >= GPR_S64(ctx, 14)) { runtime->handleTrap(rdram, ctx); }
label_4e54b8:
    // 0x4e54b8: 0x4e5480  .word       0x004E5480                   # sll         $t2, $t6, 18 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e54b8u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 14), 18));
label_4e54bc:
    // 0x4e54bc: 0x0  nop
    ctx->pc = 0x4e54bcu;
    // NOP
label_4e54c0:
    // 0x4e54c0: 0x6c696b73  ldr         $t1, 0x6B73($v1)
    ctx->pc = 0x4e54c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 27507); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_4e54c4:
    // 0x4e54c4: 0x72662e6c  .word       0x72662E6C                   # INVALID     $s3, $a2, 0x2E6C # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4e54c4u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2C at 0x4E54C4 raw=0x72662E6C");
label_4e54c8:
    // 0x4e54c8: 0x6c696761  ldr         $t1, 0x6761($v1)
    ctx->pc = 0x4e54c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 26465); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_4e54cc:
    // 0x4e54cc: 0x2e657469  sltiu       $a1, $s3, 0x7469
    ctx->pc = 0x4e54ccu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)29801) ? 1 : 0);
label_4e54d0:
    // 0x4e54d0: 0x6e756f66  ldr         $s5, 0x6F66($s3)
    ctx->pc = 0x4e54d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 28518); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 21, (GPR_U64(ctx, 21) & keepMask) | (mem >> shift)); }
label_4e54d4:
    // 0x4e54d4: 0x64  .word       0x00000064                   # and         $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e54d4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_4e54d8:
    // 0x4e54d8: 0x0  nop
    ctx->pc = 0x4e54d8u;
    // NOP
label_4e54dc:
    // 0x4e54dc: 0x0  nop
    ctx->pc = 0x4e54dcu;
    // NOP
label_4e54e0:
    // 0x4e54e0: 0x6c696b73  ldr         $t1, 0x6B73($v1)
    ctx->pc = 0x4e54e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 27507); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_4e54e4:
    // 0x4e54e4: 0x616d2e6c  daddi       $t5, $t3, 0x2E6C
    ctx->pc = 0x4e54e4u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)11884; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 13, res); }
label_4e54e8:
    // 0x4e54e8: 0x2e6f6863  sltiu       $t7, $s3, 0x6863
    ctx->pc = 0x4e54e8u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)26723) ? 1 : 0);
label_4e54ec:
    // 0x4e54ec: 0x6e756f66  ldr         $s5, 0x6F66($s3)
    ctx->pc = 0x4e54ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 28518); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 21, (GPR_U64(ctx, 21) & keepMask) | (mem >> shift)); }
label_4e54f0:
    // 0x4e54f0: 0x64  .word       0x00000064                   # and         $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e54f0u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_4e54f4:
    // 0x4e54f4: 0x0  nop
    ctx->pc = 0x4e54f4u;
    // NOP
label_4e54f8:
    // 0x4e54f8: 0x0  nop
    ctx->pc = 0x4e54f8u;
    // NOP
label_4e54fc:
    // 0x4e54fc: 0x0  nop
    ctx->pc = 0x4e54fcu;
    // NOP
label_4e5500:
    // 0x4e5500: 0x6c696b73  ldr         $t1, 0x6B73($v1)
    ctx->pc = 0x4e5500u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 27507); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_4e5504:
    // 0x4e5504: 0x65732e6c  daddiu      $s3, $t3, 0x2E6C
    ctx->pc = 0x4e5504u;
    SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)11884);
label_4e5508:
    // 0x4e5508: 0x75656972  .word       0x75656972                   # INVALID     $t3, $a1, 0x6972 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e5508u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E5508 raw=0x75656972");
label_4e550c:
    // 0x4e550c: 0x6f662e78  ldr         $a2, 0x2E78($k1)
    ctx->pc = 0x4e550cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 11896); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_4e5510:
    // 0x4e5510: 0x646e75  .word       0x00646E75                   # INVALID     $v1, $a0, 0x6E75 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e5510u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x4E5510 raw=0x00646E75");
label_4e5514:
    // 0x4e5514: 0x0  nop
    ctx->pc = 0x4e5514u;
    // NOP
label_4e5518:
    // 0x4e5518: 0x0  nop
    ctx->pc = 0x4e5518u;
    // NOP
label_4e551c:
    // 0x4e551c: 0x0  nop
    ctx->pc = 0x4e551cu;
    // NOP
label_4e5520:
    // 0x4e5520: 0x6c696b73  ldr         $t1, 0x6B73($v1)
    ctx->pc = 0x4e5520u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 27507); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_4e5524:
    // 0x4e5524: 0x75632e6c  .word       0x75632E6C                   # INVALID     $t3, $v1, 0x2E6C # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e5524u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E5524 raw=0x75632E6C");
label_4e5528:
    // 0x4e5528: 0x7275746c  .word       0x7275746C                   # INVALID     $s3, $s5, 0x746C # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4e5528u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2C at 0x4E5528 raw=0x7275746C");
label_4e552c:
    // 0x4e552c: 0x6f662e65  ldr         $a2, 0x2E65($k1)
    ctx->pc = 0x4e552cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 11877); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_4e5530:
    // 0x4e5530: 0x646e75  .word       0x00646E75                   # INVALID     $v1, $a0, 0x6E75 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e5530u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x4E5530 raw=0x00646E75");
label_4e5534:
    // 0x4e5534: 0x0  nop
    ctx->pc = 0x4e5534u;
    // NOP
label_4e5538:
    // 0x4e5538: 0x0  nop
    ctx->pc = 0x4e5538u;
    // NOP
label_4e553c:
    // 0x4e553c: 0x0  nop
    ctx->pc = 0x4e553cu;
    // NOP
label_4e5540:
    // 0x4e5540: 0x6c696b73  ldr         $t1, 0x6B73($v1)
    ctx->pc = 0x4e5540u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 27507); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_4e5544:
    // 0x4e5544: 0x65732e6c  daddiu      $s3, $t3, 0x2E6C
    ctx->pc = 0x4e5544u;
    SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)11884);
label_4e5548:
    // 0x4e5548: 0x662e6578  daddiu      $t6, $s1, 0x6578
    ctx->pc = 0x4e5548u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 17) + (int64_t)(int32_t)25976);
label_4e554c:
    // 0x4e554c: 0x646e756f  daddiu      $t6, $v1, 0x756F
    ctx->pc = 0x4e554cu;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)30063);
label_4e5550:
    // 0x4e5550: 0x0  nop
    ctx->pc = 0x4e5550u;
    // NOP
label_4e5554:
    // 0x4e5554: 0x0  nop
    ctx->pc = 0x4e5554u;
    // NOP
label_4e5558:
    // 0x4e5558: 0x0  nop
    ctx->pc = 0x4e5558u;
    // NOP
label_4e555c:
    // 0x4e555c: 0x0  nop
    ctx->pc = 0x4e555cu;
    // NOP
label_4e5560:
    // 0x4e5560: 0x6c696b73  ldr         $t1, 0x6B73($v1)
    ctx->pc = 0x4e5560u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 27507); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_4e5564:
    // 0x4e5564: 0x75682e6c  .word       0x75682E6C                   # INVALID     $t3, $t0, 0x2E6C # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e5564u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E5564 raw=0x75682E6C");
label_4e5568:
    // 0x4e5568: 0x72756f6d  .word       0x72756F6D                   # INVALID     $s3, $s5, 0x6F6D # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4e5568u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2D at 0x4E5568 raw=0x72756F6D");
label_4e556c:
    // 0x4e556c: 0x756f662e  .word       0x756F662E                   # INVALID     $t3, $t7, 0x662E # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e556cu;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E556C raw=0x756F662E");
label_4e5570:
    // 0x4e5570: 0x646e  .word       0x0000646E                   # dsub        $t4, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e5570u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 12, r); }
label_4e5574:
    // 0x4e5574: 0x0  nop
    ctx->pc = 0x4e5574u;
    // NOP
label_4e5578:
    // 0x4e5578: 0x0  nop
    ctx->pc = 0x4e5578u;
    // NOP
label_4e557c:
    // 0x4e557c: 0x0  nop
    ctx->pc = 0x4e557cu;
    // NOP
label_4e5580:
    // 0x4e5580: 0x6c696b73  ldr         $t1, 0x6B73($v1)
    ctx->pc = 0x4e5580u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 27507); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_4e5584:
    // 0x4e5584: 0x6c662e6c  ldr         $a2, 0x2E6C($v1)
    ctx->pc = 0x4e5584u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 11884); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_4e5588:
    // 0x4e5588: 0x72657461  .word       0x72657461                   # maddu1      $t6, $s3, $a1 # 00000440 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4e5588u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); uint64_t prod = (uint64_t)GPR_U32(ctx, 19) * (uint64_t)GPR_U32(ctx, 5); uint64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 14, (int32_t)result); }
label_4e558c:
    // 0x4e558c: 0x2e656972  sltiu       $a1, $s3, 0x6972
    ctx->pc = 0x4e558cu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)26994) ? 1 : 0);
label_4e5590:
    // 0x4e5590: 0x6e756f66  ldr         $s5, 0x6F66($s3)
    ctx->pc = 0x4e5590u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 28518); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 21, (GPR_U64(ctx, 21) & keepMask) | (mem >> shift)); }
label_4e5594:
    // 0x4e5594: 0x64  .word       0x00000064                   # and         $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e5594u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_4e5598:
    // 0x4e5598: 0x0  nop
    ctx->pc = 0x4e5598u;
    // NOP
label_4e559c:
    // 0x4e559c: 0x0  nop
    ctx->pc = 0x4e559cu;
    // NOP
label_4e55a0:
    // 0x4e55a0: 0x6c696b73  ldr         $t1, 0x6B73($v1)
    ctx->pc = 0x4e55a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 27507); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_4e55a4:
    // 0x4e55a4: 0x656e2e6c  daddiu      $t6, $t3, 0x2E6C
    ctx->pc = 0x4e55a4u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)11884);
label_4e55a8:
    // 0x4e55a8: 0x67612d77  daddiu      $at, $k1, 0x2D77
    ctx->pc = 0x4e55a8u;
    SET_GPR_S64(ctx, 1, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)11639);
label_4e55ac:
    // 0x4e55ac: 0x6f662e65  ldr         $a2, 0x2E65($k1)
    ctx->pc = 0x4e55acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 11877); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_4e55b0:
    // 0x4e55b0: 0x646e75  .word       0x00646E75                   # INVALID     $v1, $a0, 0x6E75 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e55b0u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x4E55B0 raw=0x00646E75");
label_4e55b4:
    // 0x4e55b4: 0x0  nop
    ctx->pc = 0x4e55b4u;
    // NOP
label_4e55b8:
    // 0x4e55b8: 0x0  nop
    ctx->pc = 0x4e55b8u;
    // NOP
label_4e55bc:
    // 0x4e55bc: 0x0  nop
    ctx->pc = 0x4e55bcu;
    // NOP
label_4e55c0:
    // 0x4e55c0: 0x6c696b73  ldr         $t1, 0x6B73($v1)
    ctx->pc = 0x4e55c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 27507); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_4e55c4:
    // 0x4e55c4: 0x72612e6c  .word       0x72612E6C                   # INVALID     $s3, $at, 0x2E6C # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4e55c4u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2C at 0x4E55C4 raw=0x72612E6C");
label_4e55c8:
    // 0x4e55c8: 0x746e6567  .word       0x746E6567                   # INVALID     $v1, $t6, 0x6567 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e55c8u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E55C8 raw=0x746E6567");
label_4e55cc:
    // 0x4e55cc: 0x756f662e  .word       0x756F662E                   # INVALID     $t3, $t7, 0x662E # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e55ccu;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E55CC raw=0x756F662E");
label_4e55d0:
    // 0x4e55d0: 0x646e  .word       0x0000646E                   # dsub        $t4, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e55d0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 12, r); }
label_4e55d4:
    // 0x4e55d4: 0x0  nop
    ctx->pc = 0x4e55d4u;
    // NOP
label_4e55d8:
    // 0x4e55d8: 0x0  nop
    ctx->pc = 0x4e55d8u;
    // NOP
label_4e55dc:
    // 0x4e55dc: 0x0  nop
    ctx->pc = 0x4e55dcu;
    // NOP
label_4e55e0:
    // 0x4e55e0: 0x6c696b73  ldr         $t1, 0x6B73($v1)
    ctx->pc = 0x4e55e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 27507); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_4e55e4:
    // 0x4e55e4: 0x72642e6c  .word       0x72642E6C                   # INVALID     $s3, $a0, 0x2E6C # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4e55e4u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2C at 0x4E55E4 raw=0x72642E6C");
label_4e55e8:
    // 0x4e55e8: 0x6575676f  daddiu      $s5, $t3, 0x676F
    ctx->pc = 0x4e55e8u;
    SET_GPR_S64(ctx, 21, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)26479);
label_4e55ec:
    // 0x4e55ec: 0x756f662e  .word       0x756F662E                   # INVALID     $t3, $t7, 0x662E # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e55ecu;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E55EC raw=0x756F662E");
label_4e55f0:
    // 0x4e55f0: 0x646e  .word       0x0000646E                   # dsub        $t4, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e55f0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 12, r); }
label_4e55f4:
    // 0x4e55f4: 0x0  nop
    ctx->pc = 0x4e55f4u;
    // NOP
label_4e55f8:
    // 0x4e55f8: 0x0  nop
    ctx->pc = 0x4e55f8u;
    // NOP
label_4e55fc:
    // 0x4e55fc: 0x0  nop
    ctx->pc = 0x4e55fcu;
    // NOP
label_4e5600:
    // 0x4e5600: 0x6c696b73  ldr         $t1, 0x6B73($v1)
    ctx->pc = 0x4e5600u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 27507); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_4e5604:
    // 0x4e5604: 0x656a2e6c  daddiu      $t2, $t3, 0x2E6C
    ctx->pc = 0x4e5604u;
    SET_GPR_S64(ctx, 10, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)11884);
label_4e5608:
    // 0x4e5608: 0x65732d74  daddiu      $s3, $t3, 0x2D74
    ctx->pc = 0x4e5608u;
    SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)11636);
label_4e560c:
    // 0x4e560c: 0x6f662e74  ldr         $a2, 0x2E74($k1)
    ctx->pc = 0x4e560cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 11892); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_4e5610:
    // 0x4e5610: 0x646e75  .word       0x00646E75                   # INVALID     $v1, $a0, 0x6E75 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e5610u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x4E5610 raw=0x00646E75");
label_4e5614:
    // 0x4e5614: 0x0  nop
    ctx->pc = 0x4e5614u;
    // NOP
label_4e5618:
    // 0x4e5618: 0x0  nop
    ctx->pc = 0x4e5618u;
    // NOP
label_4e561c:
    // 0x4e561c: 0x0  nop
    ctx->pc = 0x4e561cu;
    // NOP
label_4e5620:
    // 0x4e5620: 0x4e54c0  .word       0x004E54C0                   # sll         $t2, $t6, 19 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e5620u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 14), 19));
label_4e5624:
    // 0x4e5624: 0x4e54e0  .word       0x004E54E0                   # add         $t2, $v0, $t6 # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e5624u;
    {     int32_t rs_val = GPR_S32(ctx, 2);     int32_t rt_val = GPR_S32(ctx, 14);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
label_4e5628:
    // 0x4e5628: 0x4e5500  .word       0x004E5500                   # sll         $t2, $t6, 20 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e5628u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 14), 20));
label_4e562c:
    // 0x4e562c: 0x4e5520  .word       0x004E5520                   # add         $t2, $v0, $t6 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e562cu;
    {     int32_t rs_val = GPR_S32(ctx, 2);     int32_t rt_val = GPR_S32(ctx, 14);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
label_4e5630:
    // 0x4e5630: 0x4e5540  .word       0x004E5540                   # sll         $t2, $t6, 21 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e5630u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 14), 21));
label_4e5634:
    // 0x4e5634: 0x4e5560  .word       0x004E5560                   # add         $t2, $v0, $t6 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e5634u;
    {     int32_t rs_val = GPR_S32(ctx, 2);     int32_t rt_val = GPR_S32(ctx, 14);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
label_4e5638:
    // 0x4e5638: 0x4e5580  .word       0x004E5580                   # sll         $t2, $t6, 22 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e5638u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 14), 22));
label_4e563c:
    // 0x4e563c: 0x4e55a0  .word       0x004E55A0                   # add         $t2, $v0, $t6 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e563cu;
    {     int32_t rs_val = GPR_S32(ctx, 2);     int32_t rt_val = GPR_S32(ctx, 14);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
label_4e5640:
    // 0x4e5640: 0x4e55c0  .word       0x004E55C0                   # sll         $t2, $t6, 23 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e5640u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 14), 23));
label_4e5644:
    // 0x4e5644: 0x4e55e0  .word       0x004E55E0                   # add         $t2, $v0, $t6 # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e5644u;
    {     int32_t rs_val = GPR_S32(ctx, 2);     int32_t rt_val = GPR_S32(ctx, 14);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
label_4e5648:
    // 0x4e5648: 0x4e5600  .word       0x004E5600                   # sll         $t2, $t6, 24 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e5648u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 14), 24));
label_4e564c:
    // 0x4e564c: 0x0  nop
    ctx->pc = 0x4e564cu;
    // NOP
label_4e5650:
    // 0x4e5650: 0x7  srav        $zero, $zero, $zero
    ctx->pc = 0x4e5650u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_4e5654:
    // 0x4e5654: 0x8  jr          $zero
label_4e5658:
    if (ctx->pc == 0x4E5658u) {
        ctx->pc = 0x4E5658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E5654u;
        // 0x4e5658: 0xd  break       0 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E565Cu;
        goto label_4e565c;
    }
    ctx->pc = 0x4E5654u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x4E5658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E5654u;
        // 0x4e5658: 0xd  break       0 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E5654u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x4E565Cu;
label_4e565c:
    // 0x4e565c: 0xa  movz        $zero, $zero, $zero
    ctx->pc = 0x4e565cu;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_4e5660:
    // 0x4e5660: 0xb  movn        $zero, $zero, $zero
    ctx->pc = 0x4e5660u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_4e5664:
    // 0x4e5664: 0x9  jalr        $zero, $zero
label_4e5668:
    if (ctx->pc == 0x4E5668u) {
        ctx->pc = 0x4E5668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E5664u;
        // 0x4e5668: 0xc  syscall     0 (Delay Slot)
        ctx->pc = 0x4E566Cu;
        runtime->handleSyscall(rdram, ctx, 0x0u);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E566Cu;
        goto label_4e566c;
    }
    ctx->pc = 0x4E5664u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x4E5668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E5664u;
        // 0x4e5668: 0xc  syscall     0 (Delay Slot)
        ctx->pc = 0x4E566Cu;
        runtime->handleSyscall(rdram, ctx, 0x0u);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E5664u, 0x4E566Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4E566Cu;
label_4e566c:
    // 0x4e566c: 0xe  .word       0x0000000E                   # INVALID     $zero, $zero, 0xE # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e566cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x4E566C raw=0x0000000E");
label_4e5670:
    // 0x4e5670: 0xf  sync
    ctx->pc = 0x4e5670u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_4e5674:
    // 0x4e5674: 0x10  mfhi        $zero
    ctx->pc = 0x4e5674u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_4e5678:
    // 0x4e5678: 0x11  mthi        $zero
    ctx->pc = 0x4e5678u;
    ctx->hi = GPR_U64(ctx, 0);
label_4e567c:
    // 0x4e567c: 0x0  nop
    ctx->pc = 0x4e567cu;
    // NOP
label_4e5680:
    // 0x4e5680: 0x5f4e5026  .word       0x5F4E5026                   # bgtzl       $k0, . + 4 + (0x5026 << 2) # 000E0000 <InstrIdType: CPU_NORMAL>
label_4e5684:
    if (ctx->pc == 0x4E5684u) {
        ctx->pc = 0x4E5684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E5680u;
        // 0x4e5684: 0x72746f6e  .word       0x72746F6E                   # INVALID     $s3, $s4, 0x6F6E # 00000000 <InstrIdType: R5900_MMI> (Delay Slot)
        throw std::runtime_error("Unhandled MMI instruction: function 0x2E at 0x4E5684 raw=0x72746F6E");
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E5688u;
        goto label_4e5688;
    }
    ctx->pc = 0x4E5680u;
    {
        const bool branch_taken_0x4e5680 = (GPR_S32(ctx, 26) > 0);
        if (branch_taken_0x4e5680) {
            ctx->pc = 0x4E5684u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E5680u;
            // 0x4e5684: 0x72746f6e  .word       0x72746F6E                   # INVALID     $s3, $s4, 0x6F6E # 00000000 <InstrIdType: R5900_MMI> (Delay Slot)
            throw std::runtime_error("Unhandled MMI instruction: function 0x2E at 0x4E5684 raw=0x72746F6E");
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F971Cu;
            return;
        }
    }
    ctx->pc = 0x4E5688u;
label_4e5688:
    // 0x4e5688: 0x69626d6f  ldl         $v0, 0x6D6F($t3)
    ctx->pc = 0x4e5688u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 28015); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_4e568c:
    // 0x4e568c: 0x0  nop
    ctx->pc = 0x4e568cu;
    // NOP
label_4e5690:
    // 0x4e5690: 0x3a6b6170  xori        $t3, $s3, 0x6170
    ctx->pc = 0x4e5690u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)24944);
label_4e5694:
    // 0x4e5694: 0x61746164  daddi       $s4, $t3, 0x6164
    ctx->pc = 0x4e5694u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)24932; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 20, res); }
label_4e5698:
    // 0x4e5698: 0x6e61705c  ldr         $at, 0x705C($s3)
    ctx->pc = 0x4e5698u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 28764); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
label_4e569c:
    // 0x4e569c: 0x5c736c65  .word       0x5C736C65                   # bgtzl       $v1, . + 4 + (0x6C65 << 2) # 00130000 <InstrIdType: CPU_NORMAL>
label_4e56a0:
    if (ctx->pc == 0x4E56A0u) {
        ctx->pc = 0x4E56A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E569Cu;
        // 0x4e56a0: 0x5f6c6e70  .word       0x5F6C6E70                   # bgtzl       $k1, . + 4 + (0x6E70 << 2) # 000C0000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x4E56A0 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E56A4u;
        goto label_4e56a4;
    }
    ctx->pc = 0x4E569Cu;
    {
        const bool branch_taken_0x4e569c = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x4e569c) {
            ctx->pc = 0x4E56A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E569Cu;
            // 0x4e56a0: 0x5f6c6e70  .word       0x5F6C6E70                   # bgtzl       $k1, . + 4 + (0x6E70 << 2) # 000C0000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            // Likely branch instruction at 0x4E56A0 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x500834u;
            return;
        }
    }
    ctx->pc = 0x4E56A4u;
label_4e56a4:
    // 0x4e56a4: 0x32627274  andi        $v0, $s3, 0x7274
    ctx->pc = 0x4e56a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)29300);
label_4e56a8:
    // 0x4e56a8: 0x7478742e  .word       0x7478742E                   # INVALID     $v1, $t8, 0x742E # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e56a8u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E56A8 raw=0x7478742E");
label_4e56ac:
    // 0x4e56ac: 0x0  nop
    ctx->pc = 0x4e56acu;
    // NOP
label_4e56b0:
    // 0x4e56b0: 0x25746c65  addiu       $s4, $t3, 0x6C65
    ctx->pc = 0x4e56b0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 11), 27749));
label_4e56b4:
    // 0x4e56b4: 0x25643230  addiu       $a0, $t3, 0x3230
    ctx->pc = 0x4e56b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), 12848));
label_4e56b8:
    // 0x4e56b8: 0x63  .word       0x00000063                   # negu        $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e56b8u;
    SET_GPR_S32(ctx, 0, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_4e56bc:
    // 0x4e56bc: 0x0  nop
    ctx->pc = 0x4e56bcu;
    // NOP
label_4e56c0:
    // 0x4e56c0: 0x685f3177  ldl         $ra, 0x3177($v0)
    ctx->pc = 0x4e56c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 12663); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 31, (GPR_U64(ctx, 31) & keepMask) | (mem << shift)); }
label_4e56c4:
    // 0x4e56c4: 0x6968775f  ldl         $t0, 0x775F($t3)
    ctx->pc = 0x4e56c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 30559); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
label_4e56c8:
    // 0x4e56c8: 0x30306574  andi        $s0, $at, 0x6574
    ctx->pc = 0x4e56c8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 1) & (uint64_t)(uint16_t)25972);
label_4e56cc:
    // 0x4e56cc: 0x315f  .word       0x0000315F                   # ddivu       $a2, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e56ccu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x4E56CC raw=0x0000315F");
label_4e56d0:
    // 0x4e56d0: 0x6f746361  ldr         $s4, 0x6361($k1)
    ctx->pc = 0x4e56d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 25441); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem >> shift)); }
label_4e56d4:
    // 0x4e56d4: 0x616e2e72  daddi       $t6, $t3, 0x2E72
    ctx->pc = 0x4e56d4u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)11890; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 14, res); }
label_4e56d8:
    // 0x4e56d8: 0x656d  .word       0x0000656D                   # daddu       $t4, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e56d8u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4e56dc:
    // 0x4e56dc: 0x0  nop
    ctx->pc = 0x4e56dcu;
    // NOP
label_4e56e0:
    // 0x4e56e0: 0x67756167  daddiu      $s5, $k1, 0x6167
    ctx->pc = 0x4e56e0u;
    SET_GPR_S64(ctx, 21, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)24935);
label_4e56e4:
    // 0x4e56e4: 0x72662e65  .word       0x72662E65                   # INVALID     $s3, $a2, 0x2E65 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4e56e4u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x25 at 0x4E56E4 raw=0x72662E65");
label_4e56e8:
    // 0x4e56e8: 0x646e6569  daddiu      $t6, $v1, 0x6569
    ctx->pc = 0x4e56e8u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)25961);
label_4e56ec:
    // 0x4e56ec: 0x70696873  .word       0x70696873                   # INVALID     $v1, $t1, 0x6873 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4e56ecu;
    throw std::runtime_error("Unhandled MMI instruction: function 0x33 at 0x4E56EC raw=0x70696873");
label_4e56f0:
    // 0x4e56f0: 0x0  nop
    ctx->pc = 0x4e56f0u;
    // NOP
label_4e56f4:
    // 0x4e56f4: 0x0  nop
    ctx->pc = 0x4e56f4u;
    // NOP
label_4e56f8:
    // 0x4e56f8: 0x0  nop
    ctx->pc = 0x4e56f8u;
    // NOP
label_4e56fc:
    // 0x4e56fc: 0x0  nop
    ctx->pc = 0x4e56fcu;
    // NOP
label_4e5700:
    // 0x4e5700: 0x736e6573  .word       0x736E6573                   # INVALID     $k1, $t6, 0x6573 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4e5700u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x33 at 0x4E5700 raw=0x736E6573");
label_4e5704:
    // 0x4e5704: 0x6c696269  ldr         $t1, 0x6269($v1)
    ctx->pc = 0x4e5704u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 25193); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_4e5708:
    // 0x4e5708: 0x2e797469  sltiu       $t9, $s3, 0x7469
    ctx->pc = 0x4e5708u;
    SET_GPR_U64(ctx, 25, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)29801) ? 1 : 0);
label_4e570c:
    // 0x4e570c: 0x65697266  daddiu      $t1, $t3, 0x7266
    ctx->pc = 0x4e570cu;
    SET_GPR_S64(ctx, 9, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)29286);
label_4e5710:
    // 0x4e5710: 0x6873646e  ldl         $s3, 0x646E($v1)
    ctx->pc = 0x4e5710u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 25710); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 19, (GPR_U64(ctx, 19) & keepMask) | (mem << shift)); }
label_4e5714:
    // 0x4e5714: 0x7069  .word       0x00007069                   # mtsa        $zero # 00007040 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x4e5714u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_4e5718:
    // 0x4e5718: 0x0  nop
    ctx->pc = 0x4e5718u;
    // NOP
label_4e571c:
    // 0x4e571c: 0x0  nop
    ctx->pc = 0x4e571cu;
    // NOP
label_4e5720:
    // 0x4e5720: 0x67756167  daddiu      $s5, $k1, 0x6167
    ctx->pc = 0x4e5720u;
    SET_GPR_S64(ctx, 21, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)24935);
label_4e5724:
    // 0x4e5724: 0x65722e65  daddiu      $s2, $t3, 0x2E65
    ctx->pc = 0x4e5724u;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)11877);
label_4e5728:
    // 0x4e5728: 0x6974616c  ldl         $s4, 0x616C($t3)
    ctx->pc = 0x4e5728u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 24940); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem << shift)); }
label_4e572c:
    // 0x4e572c: 0x6c2e6e6f  ldr         $t6, 0x6E6F($at)
    ctx->pc = 0x4e572cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 1), 28271); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem >> shift)); }
label_4e5730:
    // 0x4e5730: 0x6c76  tne         $zero, $zero, 433
    ctx->pc = 0x4e5730u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_4e5734:
    // 0x4e5734: 0x0  nop
    ctx->pc = 0x4e5734u;
    // NOP
label_4e5738:
    // 0x4e5738: 0x25746c65  addiu       $s4, $t3, 0x6C65
    ctx->pc = 0x4e5738u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 11), 27749));
label_4e573c:
    // 0x4e573c: 0x25643230  addiu       $a0, $t3, 0x3230
    ctx->pc = 0x4e573cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), 12848));
label_4e5740:
    // 0x4e5740: 0x642563  .word       0x00642563                   # subu        $a0, $v1, $a0 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e5740u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_4e5744:
    // 0x4e5744: 0x0  nop
    ctx->pc = 0x4e5744u;
    // NOP
label_4e5748:
    // 0x4e5748: 0x25746c65  addiu       $s4, $t3, 0x6C65
    ctx->pc = 0x4e5748u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 11), 27749));
label_4e574c:
    // 0x4e574c: 0x63643230  daddi       $a0, $k1, 0x3230
    ctx->pc = 0x4e574cu;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)12848; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 4, res); }
label_4e5750:
    // 0x4e5750: 0x6425  .word       0x00006425                   # move        $t4, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e5750u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_4e5754:
    // 0x4e5754: 0x0  nop
    ctx->pc = 0x4e5754u;
    // NOP
label_4e5758:
    // 0x4e5758: 0x25746c65  addiu       $s4, $t3, 0x6C65
    ctx->pc = 0x4e5758u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 11), 27749));
label_4e575c:
    // 0x4e575c: 0x64643230  daddiu      $a0, $v1, 0x3230
    ctx->pc = 0x4e575cu;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)12848);
label_4e5760:
    // 0x4e5760: 0x6425  .word       0x00006425                   # move        $t4, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e5760u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_4e5764:
    // 0x4e5764: 0x0  nop
    ctx->pc = 0x4e5764u;
    // NOP
label_4e5768:
    // 0x4e5768: 0x0  nop
    ctx->pc = 0x4e5768u;
    // NOP
label_4e576c:
    // 0x4e576c: 0x0  nop
    ctx->pc = 0x4e576cu;
    // NOP
label_4e5770:
    // 0x4e5770: 0x3a6b6170  xori        $t3, $s3, 0x6170
    ctx->pc = 0x4e5770u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)24944);
label_4e5774:
    // 0x4e5774: 0x61746164  daddi       $s4, $t3, 0x6164
    ctx->pc = 0x4e5774u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)24932; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 20, res); }
label_4e5778:
    // 0x4e5778: 0x6e61705c  ldr         $at, 0x705C($s3)
    ctx->pc = 0x4e5778u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 28764); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
label_4e577c:
    // 0x4e577c: 0x5c736c65  .word       0x5C736C65                   # bgtzl       $v1, . + 4 + (0x6C65 << 2) # 00130000 <InstrIdType: CPU_NORMAL>
label_4e5780:
    if (ctx->pc == 0x4E5780u) {
        ctx->pc = 0x4E5780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E577Cu;
        // 0x4e5780: 0x5f6c6e70  .word       0x5F6C6E70                   # bgtzl       $k1, . + 4 + (0x6E70 << 2) # 000C0000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x4E5780 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E5784u;
        goto label_4e5784;
    }
    ctx->pc = 0x4E577Cu;
    {
        const bool branch_taken_0x4e577c = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x4e577c) {
            ctx->pc = 0x4E5780u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E577Cu;
            // 0x4e5780: 0x5f6c6e70  .word       0x5F6C6E70                   # bgtzl       $k1, . + 4 + (0x6E70 << 2) # 000C0000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            // Likely branch instruction at 0x4E5780 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x500914u;
            return;
        }
    }
    ctx->pc = 0x4E5784u;
label_4e5784:
    // 0x4e5784: 0x726b7774  .word       0x726B7774                   # psllh       $t6, $t3, 29 # 02600000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4e5784u;
    SET_GPR_VEC(ctx, 14, _mm_slli_epi16(GPR_VEC(ctx, 11), 29));
label_4e5788:
    // 0x4e5788: 0x7478742e  .word       0x7478742E                   # INVALID     $v1, $t8, 0x742E # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e5788u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E5788 raw=0x7478742E");
label_4e578c:
    // 0x4e578c: 0x0  nop
    ctx->pc = 0x4e578cu;
    // NOP
label_4e5790:
    // 0x4e5790: 0x5f747874  .word       0x5F747874                   # bgtzl       $k1, . + 4 + (0x7874 << 2) # 00140000 <InstrIdType: CPU_NORMAL>
label_4e5794:
    if (ctx->pc == 0x4E5794u) {
        ctx->pc = 0x4E5794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E5790u;
        // 0x4e5794: 0x6c656966  ldr         $a1, 0x6966($v1) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 3), 26982); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E5798u;
        goto label_4e5798;
    }
    ctx->pc = 0x4E5790u;
    {
        const bool branch_taken_0x4e5790 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e5790) {
            ctx->pc = 0x4E5794u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E5790u;
            // 0x4e5794: 0x6c656966  ldr         $a1, 0x6966($v1) (Delay Slot)
            { uint32_t addr = ADD32(GPR_U32(ctx, 3), 26982); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x503964u;
            return;
        }
    }
    ctx->pc = 0x4E5798u;
label_4e5798:
    // 0x4e5798: 0x32302564  andi        $s0, $s1, 0x2564
    ctx->pc = 0x4e5798u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)9572);
label_4e579c:
    // 0x4e579c: 0x64  .word       0x00000064                   # and         $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e579cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_4e57a0:
    // 0x4e57a0: 0x5f747874  .word       0x5F747874                   # bgtzl       $k1, . + 4 + (0x7874 << 2) # 00140000 <InstrIdType: CPU_NORMAL>
label_4e57a4:
    if (ctx->pc == 0x4E57A4u) {
        ctx->pc = 0x4E57A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E57A0u;
        // 0x4e57a4: 0x756c6176  .word       0x756C6176                   # INVALID     $t3, $t4, 0x6176 # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E57A4 raw=0x756C6176");
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E57A8u;
        goto label_4e57a8;
    }
    ctx->pc = 0x4E57A0u;
    {
        const bool branch_taken_0x4e57a0 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e57a0) {
            ctx->pc = 0x4E57A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E57A0u;
            // 0x4e57a4: 0x756c6176  .word       0x756C6176                   # INVALID     $t3, $t4, 0x6176 # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E57A4 raw=0x756C6176");
            ctx->in_delay_slot = false;
            ctx->pc = 0x503974u;
            return;
        }
    }
    ctx->pc = 0x4E57A8u;
label_4e57a8:
    // 0x4e57a8: 0x32302565  andi        $s0, $s1, 0x2565
    ctx->pc = 0x4e57a8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)9573);
label_4e57ac:
    // 0x4e57ac: 0x64  .word       0x00000064                   # and         $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e57acu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_4e57b0:
    // 0x4e57b0: 0x6e75616c  ldr         $s5, 0x616C($s3)
    ctx->pc = 0x4e57b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 24940); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 21, (GPR_U64(ctx, 21) & keepMask) | (mem >> shift)); }
label_4e57b4:
    // 0x4e57b4: 0x64656863  daddiu      $a1, $v1, 0x6863
    ctx->pc = 0x4e57b4u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)26723);
label_4e57b8:
    // 0x4e57b8: 0x7463615f  .word       0x7463615F                   # INVALID     $v1, $v1, 0x615F # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e57b8u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E57B8 raw=0x7463615F");
label_4e57bc:
    // 0x4e57bc: 0x6e6f69  .word       0x006E6F69                   # mtsa        $v1 # 000E6F40 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x4e57bcu;
    ctx->sa = GPR_U32(ctx, 3) & 0x7F;
label_4e57c0:
    // 0x4e57c0: 0x5f746361  .word       0x5F746361                   # bgtzl       $k1, . + 4 + (0x6361 << 2) # 00140000 <InstrIdType: CPU_NORMAL>
label_4e57c4:
    if (ctx->pc == 0x4E57C4u) {
        ctx->pc = 0x4E57C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E57C0u;
        // 0x4e57c4: 0x625f7866  daddi       $ra, $s2, 0x7866 (Delay Slot)
        { int64_t src = (int64_t)GPR_S64(ctx, 18); int64_t imm = (int64_t)(int32_t)30822; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 31, res); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E57C8u;
        goto label_4e57c8;
    }
    ctx->pc = 0x4E57C0u;
    {
        const bool branch_taken_0x4e57c0 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e57c0) {
            ctx->pc = 0x4E57C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E57C0u;
            // 0x4e57c4: 0x625f7866  daddi       $ra, $s2, 0x7866 (Delay Slot)
            { int64_t src = (int64_t)GPR_S64(ctx, 18); int64_t imm = (int64_t)(int32_t)30822; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 31, res); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x4FE548u;
            return;
        }
    }
    ctx->pc = 0x4E57C8u;
label_4e57c8:
    // 0x4e57c8: 0x6769  .word       0x00006769                   # mtsa        $zero # 00006740 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x4e57c8u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_4e57cc:
    // 0x4e57cc: 0x0  nop
    ctx->pc = 0x4e57ccu;
    // NOP
label_4e57d0:
    // 0x4e57d0: 0x5f676d69  .word       0x5F676D69                   # bgtzl       $k1, . + 4 + (0x6D69 << 2) # 00070000 <InstrIdType: CPU_NORMAL>
label_4e57d4:
    if (ctx->pc == 0x4E57D4u) {
        ctx->pc = 0x4E57D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E57D0u;
        // 0x4e57d4: 0x4b434142  vaddz.xz    $vf5, $vf8, $vf3z (Delay Slot)
        { __m128 res = PS2_VADD(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E57D8u;
        goto label_4e57d8;
    }
    ctx->pc = 0x4E57D0u;
    {
        const bool branch_taken_0x4e57d0 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e57d0) {
            ctx->pc = 0x4E57D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E57D0u;
            // 0x4e57d4: 0x4b434142  vaddz.xz    $vf5, $vf8, $vf3z (Delay Slot)
            { __m128 res = PS2_VADD(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x500D78u;
            return;
        }
    }
    ctx->pc = 0x4E57D8u;
label_4e57d8:
    // 0x4e57d8: 0x4e41505f  .word       0x4E41505F                   # INVALID     $s2, $at, 0x505F # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e57d8u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x4E57D8 raw=0x4E41505F");
label_4e57dc:
    // 0x4e57dc: 0x5f4c454e  .word       0x5F4C454E                   # bgtzl       $k0, . + 4 + (0x454E << 2) # 000C0000 <InstrIdType: CPU_NORMAL>
label_4e57e0:
    if (ctx->pc == 0x4E57E0u) {
        ctx->pc = 0x4E57E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E57DCu;
        // 0x4e57e0: 0x53445f53  beql        $k0, $a0, . + 4 + (0x5F53 << 2) (Delay Slot)
        // Likely branch instruction at 0x4E57E0 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E57E4u;
        goto label_4e57e4;
    }
    ctx->pc = 0x4E57DCu;
    {
        const bool branch_taken_0x4e57dc = (GPR_S32(ctx, 26) > 0);
        if (branch_taken_0x4e57dc) {
            ctx->pc = 0x4E57E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E57DCu;
            // 0x4e57e0: 0x53445f53  beql        $k0, $a0, . + 4 + (0x5F53 << 2) (Delay Slot)
            // Likely branch instruction at 0x4E57E0 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F6D18u;
            return;
        }
    }
    ctx->pc = 0x4E57E4u;
label_4e57e4:
    // 0x4e57e4: 0x0  nop
    ctx->pc = 0x4e57e4u;
    // NOP
label_4e57e8:
    // 0x4e57e8: 0x0  nop
    ctx->pc = 0x4e57e8u;
    // NOP
label_4e57ec:
    // 0x4e57ec: 0x0  nop
    ctx->pc = 0x4e57ecu;
    // NOP
label_4e57f0:
    // 0x4e57f0: 0x5f676d69  .word       0x5F676D69                   # bgtzl       $k1, . + 4 + (0x6D69 << 2) # 00070000 <InstrIdType: CPU_NORMAL>
label_4e57f4:
    if (ctx->pc == 0x4E57F4u) {
        ctx->pc = 0x4E57F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E57F0u;
        // 0x4e57f4: 0x4b434142  vaddz.xz    $vf5, $vf8, $vf3z (Delay Slot)
        { __m128 res = PS2_VADD(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E57F8u;
        goto label_4e57f8;
    }
    ctx->pc = 0x4E57F0u;
    {
        const bool branch_taken_0x4e57f0 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e57f0) {
            ctx->pc = 0x4E57F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E57F0u;
            // 0x4e57f4: 0x4b434142  vaddz.xz    $vf5, $vf8, $vf3z (Delay Slot)
            { __m128 res = PS2_VADD(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x500D98u;
            return;
        }
    }
    ctx->pc = 0x4E57F8u;
label_4e57f8:
    // 0x4e57f8: 0x4e41505f  .word       0x4E41505F                   # INVALID     $s2, $at, 0x505F # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e57f8u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x4E57F8 raw=0x4E41505F");
label_4e57fc:
    // 0x4e57fc: 0x5f4c454e  .word       0x5F4C454E                   # bgtzl       $k0, . + 4 + (0x454E << 2) # 000C0000 <InstrIdType: CPU_NORMAL>
label_4e5800:
    if (ctx->pc == 0x4E5800u) {
        ctx->pc = 0x4E5800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E57FCu;
        // 0x4e5800: 0x53445f4d  beql        $k0, $a0, . + 4 + (0x5F4D << 2) (Delay Slot)
        // Likely branch instruction at 0x4E5800 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E5804u;
        goto label_4e5804;
    }
    ctx->pc = 0x4E57FCu;
    {
        const bool branch_taken_0x4e57fc = (GPR_S32(ctx, 26) > 0);
        if (branch_taken_0x4e57fc) {
            ctx->pc = 0x4E5800u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E57FCu;
            // 0x4e5800: 0x53445f4d  beql        $k0, $a0, . + 4 + (0x5F4D << 2) (Delay Slot)
            // Likely branch instruction at 0x4E5800 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F6D38u;
            return;
        }
    }
    ctx->pc = 0x4E5804u;
label_4e5804:
    // 0x4e5804: 0x0  nop
    ctx->pc = 0x4e5804u;
    // NOP
label_4e5808:
    // 0x4e5808: 0x0  nop
    ctx->pc = 0x4e5808u;
    // NOP
label_4e580c:
    // 0x4e580c: 0x0  nop
    ctx->pc = 0x4e580cu;
    // NOP
label_4e5810:
    // 0x4e5810: 0x5f676d69  .word       0x5F676D69                   # bgtzl       $k1, . + 4 + (0x6D69 << 2) # 00070000 <InstrIdType: CPU_NORMAL>
label_4e5814:
    if (ctx->pc == 0x4E5814u) {
        ctx->pc = 0x4E5814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E5810u;
        // 0x4e5814: 0x4b434142  vaddz.xz    $vf5, $vf8, $vf3z (Delay Slot)
        { __m128 res = PS2_VADD(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E5818u;
        goto label_4e5818;
    }
    ctx->pc = 0x4E5810u;
    {
        const bool branch_taken_0x4e5810 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e5810) {
            ctx->pc = 0x4E5814u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E5810u;
            // 0x4e5814: 0x4b434142  vaddz.xz    $vf5, $vf8, $vf3z (Delay Slot)
            { __m128 res = PS2_VADD(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x500DB8u;
            return;
        }
    }
    ctx->pc = 0x4E5818u;
label_4e5818:
    // 0x4e5818: 0x4e41505f  .word       0x4E41505F                   # INVALID     $s2, $at, 0x505F # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e5818u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x4E5818 raw=0x4E41505F");
label_4e581c:
    // 0x4e581c: 0x5f4c454e  .word       0x5F4C454E                   # bgtzl       $k0, . + 4 + (0x454E << 2) # 000C0000 <InstrIdType: CPU_NORMAL>
label_4e5820:
    if (ctx->pc == 0x4E5820u) {
        ctx->pc = 0x4E5820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E581Cu;
        // 0x4e5820: 0x53445f45  beql        $k0, $a0, . + 4 + (0x5F45 << 2) (Delay Slot)
        // Likely branch instruction at 0x4E5820 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E5824u;
        goto label_4e5824;
    }
    ctx->pc = 0x4E581Cu;
    {
        const bool branch_taken_0x4e581c = (GPR_S32(ctx, 26) > 0);
        if (branch_taken_0x4e581c) {
            ctx->pc = 0x4E5820u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E581Cu;
            // 0x4e5820: 0x53445f45  beql        $k0, $a0, . + 4 + (0x5F45 << 2) (Delay Slot)
            // Likely branch instruction at 0x4E5820 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F6D58u;
            return;
        }
    }
    ctx->pc = 0x4E5824u;
label_4e5824:
    // 0x4e5824: 0x0  nop
    ctx->pc = 0x4e5824u;
    // NOP
label_4e5828:
    // 0x4e5828: 0x0  nop
    ctx->pc = 0x4e5828u;
    // NOP
label_4e582c:
    // 0x4e582c: 0x0  nop
    ctx->pc = 0x4e582cu;
    // NOP
label_4e5830:
    // 0x4e5830: 0x5f676d69  .word       0x5F676D69                   # bgtzl       $k1, . + 4 + (0x6D69 << 2) # 00070000 <InstrIdType: CPU_NORMAL>
label_4e5834:
    if (ctx->pc == 0x4E5834u) {
        ctx->pc = 0x4E5834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E5830u;
        // 0x4e5834: 0x4b434142  vaddz.xz    $vf5, $vf8, $vf3z (Delay Slot)
        { __m128 res = PS2_VADD(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E5838u;
        goto label_4e5838;
    }
    ctx->pc = 0x4E5830u;
    {
        const bool branch_taken_0x4e5830 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e5830) {
            ctx->pc = 0x4E5834u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E5830u;
            // 0x4e5834: 0x4b434142  vaddz.xz    $vf5, $vf8, $vf3z (Delay Slot)
            { __m128 res = PS2_VADD(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x500DD8u;
            return;
        }
    }
    ctx->pc = 0x4E5838u;
label_4e5838:
    // 0x4e5838: 0x4e41505f  .word       0x4E41505F                   # INVALID     $s2, $at, 0x505F # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e5838u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x4E5838 raw=0x4E41505F");
label_4e583c:
    // 0x4e583c: 0x5f4c454e  .word       0x5F4C454E                   # bgtzl       $k0, . + 4 + (0x454E << 2) # 000C0000 <InstrIdType: CPU_NORMAL>
label_4e5840:
    if (ctx->pc == 0x4E5840u) {
        ctx->pc = 0x4E5840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E583Cu;
        // 0x4e5840: 0x534d5f53  beql        $k0, $t5, . + 4 + (0x5F53 << 2) (Delay Slot)
        // Likely branch instruction at 0x4E5840 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E5844u;
        goto label_4e5844;
    }
    ctx->pc = 0x4E583Cu;
    {
        const bool branch_taken_0x4e583c = (GPR_S32(ctx, 26) > 0);
        if (branch_taken_0x4e583c) {
            ctx->pc = 0x4E5840u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E583Cu;
            // 0x4e5840: 0x534d5f53  beql        $k0, $t5, . + 4 + (0x5F53 << 2) (Delay Slot)
            // Likely branch instruction at 0x4E5840 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F6D78u;
            return;
        }
    }
    ctx->pc = 0x4E5844u;
label_4e5844:
    // 0x4e5844: 0x0  nop
    ctx->pc = 0x4e5844u;
    // NOP
label_4e5848:
    // 0x4e5848: 0x0  nop
    ctx->pc = 0x4e5848u;
    // NOP
label_4e584c:
    // 0x4e584c: 0x0  nop
    ctx->pc = 0x4e584cu;
    // NOP
label_4e5850:
    // 0x4e5850: 0x5f676d69  .word       0x5F676D69                   # bgtzl       $k1, . + 4 + (0x6D69 << 2) # 00070000 <InstrIdType: CPU_NORMAL>
label_4e5854:
    if (ctx->pc == 0x4E5854u) {
        ctx->pc = 0x4E5854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E5850u;
        // 0x4e5854: 0x4b434142  vaddz.xz    $vf5, $vf8, $vf3z (Delay Slot)
        { __m128 res = PS2_VADD(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E5858u;
        goto label_4e5858;
    }
    ctx->pc = 0x4E5850u;
    {
        const bool branch_taken_0x4e5850 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e5850) {
            ctx->pc = 0x4E5854u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E5850u;
            // 0x4e5854: 0x4b434142  vaddz.xz    $vf5, $vf8, $vf3z (Delay Slot)
            { __m128 res = PS2_VADD(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x500DF8u;
            return;
        }
    }
    ctx->pc = 0x4E5858u;
label_4e5858:
    // 0x4e5858: 0x4e41505f  .word       0x4E41505F                   # INVALID     $s2, $at, 0x505F # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e5858u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x4E5858 raw=0x4E41505F");
label_4e585c:
    // 0x4e585c: 0x5f4c454e  .word       0x5F4C454E                   # bgtzl       $k0, . + 4 + (0x454E << 2) # 000C0000 <InstrIdType: CPU_NORMAL>
label_4e5860:
    if (ctx->pc == 0x4E5860u) {
        ctx->pc = 0x4E5860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E585Cu;
        // 0x4e5860: 0x534d5f4d  beql        $k0, $t5, . + 4 + (0x5F4D << 2) (Delay Slot)
        // Likely branch instruction at 0x4E5860 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E5864u;
        goto label_4e5864;
    }
    ctx->pc = 0x4E585Cu;
    {
        const bool branch_taken_0x4e585c = (GPR_S32(ctx, 26) > 0);
        if (branch_taken_0x4e585c) {
            ctx->pc = 0x4E5860u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E585Cu;
            // 0x4e5860: 0x534d5f4d  beql        $k0, $t5, . + 4 + (0x5F4D << 2) (Delay Slot)
            // Likely branch instruction at 0x4E5860 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F6D98u;
            return;
        }
    }
    ctx->pc = 0x4E5864u;
label_4e5864:
    // 0x4e5864: 0x0  nop
    ctx->pc = 0x4e5864u;
    // NOP
label_4e5868:
    // 0x4e5868: 0x0  nop
    ctx->pc = 0x4e5868u;
    // NOP
label_4e586c:
    // 0x4e586c: 0x0  nop
    ctx->pc = 0x4e586cu;
    // NOP
label_4e5870:
    // 0x4e5870: 0x5f676d69  .word       0x5F676D69                   # bgtzl       $k1, . + 4 + (0x6D69 << 2) # 00070000 <InstrIdType: CPU_NORMAL>
label_4e5874:
    if (ctx->pc == 0x4E5874u) {
        ctx->pc = 0x4E5874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E5870u;
        // 0x4e5874: 0x4b434142  vaddz.xz    $vf5, $vf8, $vf3z (Delay Slot)
        { __m128 res = PS2_VADD(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E5878u;
        goto label_4e5878;
    }
    ctx->pc = 0x4E5870u;
    {
        const bool branch_taken_0x4e5870 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e5870) {
            ctx->pc = 0x4E5874u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E5870u;
            // 0x4e5874: 0x4b434142  vaddz.xz    $vf5, $vf8, $vf3z (Delay Slot)
            { __m128 res = PS2_VADD(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x500E18u;
            return;
        }
    }
    ctx->pc = 0x4E5878u;
label_4e5878:
    // 0x4e5878: 0x4e41505f  .word       0x4E41505F                   # INVALID     $s2, $at, 0x505F # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e5878u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x4E5878 raw=0x4E41505F");
label_4e587c:
    // 0x4e587c: 0x5f4c454e  .word       0x5F4C454E                   # bgtzl       $k0, . + 4 + (0x454E << 2) # 000C0000 <InstrIdType: CPU_NORMAL>
label_4e5880:
    if (ctx->pc == 0x4E5880u) {
        ctx->pc = 0x4E5880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E587Cu;
        // 0x4e5880: 0x534d5f45  beql        $k0, $t5, . + 4 + (0x5F45 << 2) (Delay Slot)
        // Likely branch instruction at 0x4E5880 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E5884u;
        goto label_4e5884;
    }
    ctx->pc = 0x4E587Cu;
    {
        const bool branch_taken_0x4e587c = (GPR_S32(ctx, 26) > 0);
        if (branch_taken_0x4e587c) {
            ctx->pc = 0x4E5880u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E587Cu;
            // 0x4e5880: 0x534d5f45  beql        $k0, $t5, . + 4 + (0x5F45 << 2) (Delay Slot)
            // Likely branch instruction at 0x4E5880 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F6DB8u;
            return;
        }
    }
    ctx->pc = 0x4E5884u;
label_4e5884:
    // 0x4e5884: 0x0  nop
    ctx->pc = 0x4e5884u;
    // NOP
label_4e5888:
    // 0x4e5888: 0x0  nop
    ctx->pc = 0x4e5888u;
    // NOP
label_4e588c:
    // 0x4e588c: 0x0  nop
    ctx->pc = 0x4e588cu;
    // NOP
label_4e5890:
    // 0x4e5890: 0x5f676d69  .word       0x5F676D69                   # bgtzl       $k1, . + 4 + (0x6D69 << 2) # 00070000 <InstrIdType: CPU_NORMAL>
label_4e5894:
    if (ctx->pc == 0x4E5894u) {
        ctx->pc = 0x4E5894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E5890u;
        // 0x4e5894: 0x4b434142  vaddz.xz    $vf5, $vf8, $vf3z (Delay Slot)
        { __m128 res = PS2_VADD(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E5898u;
        goto label_4e5898;
    }
    ctx->pc = 0x4E5890u;
    {
        const bool branch_taken_0x4e5890 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e5890) {
            ctx->pc = 0x4E5894u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E5890u;
            // 0x4e5894: 0x4b434142  vaddz.xz    $vf5, $vf8, $vf3z (Delay Slot)
            { __m128 res = PS2_VADD(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x500E38u;
            return;
        }
    }
    ctx->pc = 0x4E5898u;
label_4e5898:
    // 0x4e5898: 0x4e41505f  .word       0x4E41505F                   # INVALID     $s2, $at, 0x505F # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e5898u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x4E5898 raw=0x4E41505F");
label_4e589c:
    // 0x4e589c: 0x5f4c454e  .word       0x5F4C454E                   # bgtzl       $k0, . + 4 + (0x454E << 2) # 000C0000 <InstrIdType: CPU_NORMAL>
label_4e58a0:
    if (ctx->pc == 0x4E58A0u) {
        ctx->pc = 0x4E58A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E589Cu;
        // 0x4e58a0: 0x53555f53  beql        $k0, $s5, . + 4 + (0x5F53 << 2) (Delay Slot)
        // Likely branch instruction at 0x4E58A0 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E58A4u;
        goto label_4e58a4;
    }
    ctx->pc = 0x4E589Cu;
    {
        const bool branch_taken_0x4e589c = (GPR_S32(ctx, 26) > 0);
        if (branch_taken_0x4e589c) {
            ctx->pc = 0x4E58A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E589Cu;
            // 0x4e58a0: 0x53555f53  beql        $k0, $s5, . + 4 + (0x5F53 << 2) (Delay Slot)
            // Likely branch instruction at 0x4E58A0 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F6DD8u;
            return;
        }
    }
    ctx->pc = 0x4E58A4u;
label_4e58a4:
    // 0x4e58a4: 0x0  nop
    ctx->pc = 0x4e58a4u;
    // NOP
label_4e58a8:
    // 0x4e58a8: 0x0  nop
    ctx->pc = 0x4e58a8u;
    // NOP
label_4e58ac:
    // 0x4e58ac: 0x0  nop
    ctx->pc = 0x4e58acu;
    // NOP
label_4e58b0:
    // 0x4e58b0: 0x5f676d69  .word       0x5F676D69                   # bgtzl       $k1, . + 4 + (0x6D69 << 2) # 00070000 <InstrIdType: CPU_NORMAL>
label_4e58b4:
    if (ctx->pc == 0x4E58B4u) {
        ctx->pc = 0x4E58B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E58B0u;
        // 0x4e58b4: 0x4b434142  vaddz.xz    $vf5, $vf8, $vf3z (Delay Slot)
        { __m128 res = PS2_VADD(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E58B8u;
        goto label_4e58b8;
    }
    ctx->pc = 0x4E58B0u;
    {
        const bool branch_taken_0x4e58b0 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e58b0) {
            ctx->pc = 0x4E58B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E58B0u;
            // 0x4e58b4: 0x4b434142  vaddz.xz    $vf5, $vf8, $vf3z (Delay Slot)
            { __m128 res = PS2_VADD(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x500E58u;
            return;
        }
    }
    ctx->pc = 0x4E58B8u;
label_4e58b8:
    // 0x4e58b8: 0x4e41505f  .word       0x4E41505F                   # INVALID     $s2, $at, 0x505F # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e58b8u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x4E58B8 raw=0x4E41505F");
label_4e58bc:
    // 0x4e58bc: 0x5f4c454e  .word       0x5F4C454E                   # bgtzl       $k0, . + 4 + (0x454E << 2) # 000C0000 <InstrIdType: CPU_NORMAL>
label_4e58c0:
    if (ctx->pc == 0x4E58C0u) {
        ctx->pc = 0x4E58C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E58BCu;
        // 0x4e58c0: 0x53555f4d  beql        $k0, $s5, . + 4 + (0x5F4D << 2) (Delay Slot)
        // Likely branch instruction at 0x4E58C0 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E58C4u;
        goto label_4e58c4;
    }
    ctx->pc = 0x4E58BCu;
    {
        const bool branch_taken_0x4e58bc = (GPR_S32(ctx, 26) > 0);
        if (branch_taken_0x4e58bc) {
            ctx->pc = 0x4E58C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E58BCu;
            // 0x4e58c0: 0x53555f4d  beql        $k0, $s5, . + 4 + (0x5F4D << 2) (Delay Slot)
            // Likely branch instruction at 0x4E58C0 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F6DF8u;
            return;
        }
    }
    ctx->pc = 0x4E58C4u;
label_4e58c4:
    // 0x4e58c4: 0x0  nop
    ctx->pc = 0x4e58c4u;
    // NOP
label_4e58c8:
    // 0x4e58c8: 0x0  nop
    ctx->pc = 0x4e58c8u;
    // NOP
label_4e58cc:
    // 0x4e58cc: 0x0  nop
    ctx->pc = 0x4e58ccu;
    // NOP
label_4e58d0:
    // 0x4e58d0: 0x5f676d69  .word       0x5F676D69                   # bgtzl       $k1, . + 4 + (0x6D69 << 2) # 00070000 <InstrIdType: CPU_NORMAL>
label_4e58d4:
    if (ctx->pc == 0x4E58D4u) {
        ctx->pc = 0x4E58D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E58D0u;
        // 0x4e58d4: 0x4b434142  vaddz.xz    $vf5, $vf8, $vf3z (Delay Slot)
        { __m128 res = PS2_VADD(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E58D8u;
        goto label_4e58d8;
    }
    ctx->pc = 0x4E58D0u;
    {
        const bool branch_taken_0x4e58d0 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e58d0) {
            ctx->pc = 0x4E58D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E58D0u;
            // 0x4e58d4: 0x4b434142  vaddz.xz    $vf5, $vf8, $vf3z (Delay Slot)
            { __m128 res = PS2_VADD(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x500E78u;
            return;
        }
    }
    ctx->pc = 0x4E58D8u;
label_4e58d8:
    // 0x4e58d8: 0x4e41505f  .word       0x4E41505F                   # INVALID     $s2, $at, 0x505F # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e58d8u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x4E58D8 raw=0x4E41505F");
label_4e58dc:
    // 0x4e58dc: 0x5f4c454e  .word       0x5F4C454E                   # bgtzl       $k0, . + 4 + (0x454E << 2) # 000C0000 <InstrIdType: CPU_NORMAL>
label_4e58e0:
    if (ctx->pc == 0x4E58E0u) {
        ctx->pc = 0x4E58E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E58DCu;
        // 0x4e58e0: 0x53555f45  beql        $k0, $s5, . + 4 + (0x5F45 << 2) (Delay Slot)
        // Likely branch instruction at 0x4E58E0 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E58E4u;
        goto label_4e58e4;
    }
    ctx->pc = 0x4E58DCu;
    {
        const bool branch_taken_0x4e58dc = (GPR_S32(ctx, 26) > 0);
        if (branch_taken_0x4e58dc) {
            ctx->pc = 0x4E58E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E58DCu;
            // 0x4e58e0: 0x53555f45  beql        $k0, $s5, . + 4 + (0x5F45 << 2) (Delay Slot)
            // Likely branch instruction at 0x4E58E0 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F6E18u;
            return;
        }
    }
    ctx->pc = 0x4E58E4u;
label_4e58e4:
    // 0x4e58e4: 0x0  nop
    ctx->pc = 0x4e58e4u;
    // NOP
label_4e58e8:
    // 0x4e58e8: 0x0  nop
    ctx->pc = 0x4e58e8u;
    // NOP
label_4e58ec:
    // 0x4e58ec: 0x0  nop
    ctx->pc = 0x4e58ecu;
    // NOP
label_4e58f0:
    // 0x4e58f0: 0x5f4e5026  .word       0x5F4E5026                   # bgtzl       $k0, . + 4 + (0x5026 << 2) # 000E0000 <InstrIdType: CPU_NORMAL>
label_4e58f4:
    if (ctx->pc == 0x4E58F4u) {
        ctx->pc = 0x4E58F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E58F0u;
        // 0x4e58f4: 0x6f73706f  ldr         $s3, 0x706F($k1) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 27), 28783); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 19, (GPR_U64(ctx, 19) & keepMask) | (mem >> shift)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E58F8u;
        goto label_4e58f8;
    }
    ctx->pc = 0x4E58F0u;
    {
        const bool branch_taken_0x4e58f0 = (GPR_S32(ctx, 26) > 0);
        if (branch_taken_0x4e58f0) {
            ctx->pc = 0x4E58F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E58F0u;
            // 0x4e58f4: 0x6f73706f  ldr         $s3, 0x706F($k1) (Delay Slot)
            { uint32_t addr = ADD32(GPR_U32(ctx, 27), 28783); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 19, (GPR_U64(ctx, 19) & keepMask) | (mem >> shift)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F998Cu;
            return;
        }
    }
    ctx->pc = 0x4E58F8u;
label_4e58f8:
    // 0x4e58f8: 0x66646e75  daddiu      $a0, $s3, 0x6E75
    ctx->pc = 0x4e58f8u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 19) + (int64_t)(int32_t)28277);
label_4e58fc:
    // 0x4e58fc: 0x78  dsll        $zero, $zero, 1
    ctx->pc = 0x4e58fcu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << 1);
label_4e5900:
    // 0x4e5900: 0x2e646e73  sltiu       $a0, $s3, 0x6E73
    ctx->pc = 0x4e5900u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)28275) ? 1 : 0);
label_4e5904:
    // 0x4e5904: 0x63696f76  daddi       $t1, $k1, 0x6F76
    ctx->pc = 0x4e5904u;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)28534; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 9, res); }
label_4e5908:
    // 0x4e5908: 0x65  .word       0x00000065                   # move        $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e5908u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_4e590c:
    // 0x4e590c: 0x0  nop
    ctx->pc = 0x4e590cu;
    // NOP
label_4e5910:
    // 0x4e5910: 0x5f4e5026  .word       0x5F4E5026                   # bgtzl       $k0, . + 4 + (0x5026 << 2) # 000E0000 <InstrIdType: CPU_NORMAL>
label_4e5914:
    if (ctx->pc == 0x4E5914u) {
        ctx->pc = 0x4E5914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E5910u;
        // 0x4e5914: 0x6f73706f  ldr         $s3, 0x706F($k1) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 27), 28783); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 19, (GPR_U64(ctx, 19) & keepMask) | (mem >> shift)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E5918u;
        goto label_4e5918;
    }
    ctx->pc = 0x4E5910u;
    {
        const bool branch_taken_0x4e5910 = (GPR_S32(ctx, 26) > 0);
        if (branch_taken_0x4e5910) {
            ctx->pc = 0x4E5914u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E5910u;
            // 0x4e5914: 0x6f73706f  ldr         $s3, 0x706F($k1) (Delay Slot)
            { uint32_t addr = ADD32(GPR_U32(ctx, 27), 28783); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 19, (GPR_U64(ctx, 19) & keepMask) | (mem >> shift)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F99ACu;
            return;
        }
    }
    ctx->pc = 0x4E5918u;
label_4e5918:
    // 0x4e5918: 0x76646e75  .word       0x76646E75                   # INVALID     $s3, $a0, 0x6E75 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e5918u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E5918 raw=0x76646E75");
label_4e591c:
    // 0x4e591c: 0x6563696f  daddiu      $v1, $t3, 0x696F
    ctx->pc = 0x4e591cu;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)26991);
label_4e5920:
    // 0x4e5920: 0x0  nop
    ctx->pc = 0x4e5920u;
    // NOP
label_4e5924:
    // 0x4e5924: 0x0  nop
    ctx->pc = 0x4e5924u;
    // NOP
label_4e5928:
    // 0x4e5928: 0x2e646e73  sltiu       $a0, $s3, 0x6E73
    ctx->pc = 0x4e5928u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)28275) ? 1 : 0);
label_4e592c:
    // 0x4e592c: 0x6973756d  ldl         $s3, 0x756D($t3)
    ctx->pc = 0x4e592cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 30061); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 19, (GPR_U64(ctx, 19) & keepMask) | (mem << shift)); }
label_4e5930:
    // 0x4e5930: 0x63  .word       0x00000063                   # negu        $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e5930u;
    SET_GPR_S32(ctx, 0, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_4e5934:
    // 0x4e5934: 0x0  nop
    ctx->pc = 0x4e5934u;
    // NOP
label_4e5938:
    // 0x4e5938: 0x0  nop
    ctx->pc = 0x4e5938u;
    // NOP
label_4e593c:
    // 0x4e593c: 0x0  nop
    ctx->pc = 0x4e593cu;
    // NOP
label_4e5940:
    // 0x4e5940: 0x5f4e5026  .word       0x5F4E5026                   # bgtzl       $k0, . + 4 + (0x5026 << 2) # 000E0000 <InstrIdType: CPU_NORMAL>
label_4e5944:
    if (ctx->pc == 0x4E5944u) {
        ctx->pc = 0x4E5944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E5940u;
        // 0x4e5944: 0x6f73706f  ldr         $s3, 0x706F($k1) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 27), 28783); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 19, (GPR_U64(ctx, 19) & keepMask) | (mem >> shift)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E5948u;
        goto label_4e5948;
    }
    ctx->pc = 0x4E5940u;
    {
        const bool branch_taken_0x4e5940 = (GPR_S32(ctx, 26) > 0);
        if (branch_taken_0x4e5940) {
            ctx->pc = 0x4E5944u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E5940u;
            // 0x4e5944: 0x6f73706f  ldr         $s3, 0x706F($k1) (Delay Slot)
            { uint32_t addr = ADD32(GPR_U32(ctx, 27), 28783); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 19, (GPR_U64(ctx, 19) & keepMask) | (mem >> shift)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F99DCu;
            return;
        }
    }
    ctx->pc = 0x4E5948u;
label_4e5948:
    // 0x4e5948: 0x6d646e75  ldr         $a0, 0x6E75($t3)
    ctx->pc = 0x4e5948u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 28277); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_4e594c:
    // 0x4e594c: 0x63697375  daddi       $t1, $k1, 0x7375
    ctx->pc = 0x4e594cu;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)29557; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 9, res); }
label_4e5950:
    // 0x4e5950: 0x0  nop
    ctx->pc = 0x4e5950u;
    // NOP
label_4e5954:
    // 0x4e5954: 0x0  nop
    ctx->pc = 0x4e5954u;
    // NOP
label_4e5958:
    // 0x4e5958: 0x746e6f63  .word       0x746E6F63                   # INVALID     $v1, $t6, 0x6F63 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e5958u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E5958 raw=0x746E6F63");
label_4e595c:
    // 0x4e595c: 0x6269762e  daddi       $t1, $s3, 0x762E
    ctx->pc = 0x4e595cu;
    { int64_t src = (int64_t)GPR_S64(ctx, 19); int64_t imm = (int64_t)(int32_t)30254; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 9, res); }
label_4e5960:
    // 0x4e5960: 0x0  nop
    ctx->pc = 0x4e5960u;
    // NOP
label_4e5964:
    // 0x4e5964: 0x0  nop
    ctx->pc = 0x4e5964u;
    // NOP
label_4e5968:
    // 0x4e5968: 0x0  nop
    ctx->pc = 0x4e5968u;
    // NOP
label_4e596c:
    // 0x4e596c: 0x0  nop
    ctx->pc = 0x4e596cu;
    // NOP
label_4e5970:
    // 0x4e5970: 0x5f4e5026  .word       0x5F4E5026                   # bgtzl       $k0, . + 4 + (0x5026 << 2) # 000E0000 <InstrIdType: CPU_NORMAL>
label_4e5974:
    if (ctx->pc == 0x4E5974u) {
        ctx->pc = 0x4E5974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E5970u;
        // 0x4e5974: 0x6f63706f  ldr         $v1, 0x706F($k1) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 27), 28783); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E5978u;
        goto label_4e5978;
    }
    ctx->pc = 0x4E5970u;
    {
        const bool branch_taken_0x4e5970 = (GPR_S32(ctx, 26) > 0);
        if (branch_taken_0x4e5970) {
            ctx->pc = 0x4E5974u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E5970u;
            // 0x4e5974: 0x6f63706f  ldr         $v1, 0x706F($k1) (Delay Slot)
            { uint32_t addr = ADD32(GPR_U32(ctx, 27), 28783); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F9A0Cu;
            return;
        }
    }
    ctx->pc = 0x4E5978u;
label_4e5978:
    // 0x4e5978: 0x6f72746e  ldr         $s2, 0x746E($k1)
    ctx->pc = 0x4e5978u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 29806); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 18, (GPR_U64(ctx, 18) & keepMask) | (mem >> shift)); }
label_4e597c:
    // 0x4e597c: 0x72656c6c  .word       0x72656C6C                   # INVALID     $s3, $a1, 0x6C6C # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4e597cu;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2C at 0x4E597C raw=0x72656C6C");
label_4e5980:
    // 0x4e5980: 0x626976  tne         $v1, $v0, 421
    ctx->pc = 0x4e5980u;
    if (GPR_U64(ctx, 3) != GPR_U64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
label_4e5984:
    // 0x4e5984: 0x0  nop
    ctx->pc = 0x4e5984u;
    // NOP
label_4e5988:
    // 0x4e5988: 0x5f747874  .word       0x5F747874                   # bgtzl       $k1, . + 4 + (0x7874 << 2) # 00140000 <InstrIdType: CPU_NORMAL>
label_4e598c:
    if (ctx->pc == 0x4E598Cu) {
        ctx->pc = 0x4E598Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E5988u;
        // 0x4e598c: 0x6b636162  ldl         $v1, 0x6162($k1) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 27), 24930); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E5990u;
        goto label_4e5990;
    }
    ctx->pc = 0x4E5988u;
    {
        const bool branch_taken_0x4e5988 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e5988) {
            ctx->pc = 0x4E598Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E5988u;
            // 0x4e598c: 0x6b636162  ldl         $v1, 0x6162($k1) (Delay Slot)
            { uint32_t addr = ADD32(GPR_U32(ctx, 27), 24930); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x503B5Cu;
            return;
        }
    }
    ctx->pc = 0x4E5990u;
label_4e5990:
    // 0x4e5990: 0x0  nop
    ctx->pc = 0x4e5990u;
    // NOP
label_4e5994:
    // 0x4e5994: 0x0  nop
    ctx->pc = 0x4e5994u;
    // NOP
label_4e5998:
    // 0x4e5998: 0x0  nop
    ctx->pc = 0x4e5998u;
    // NOP
label_4e599c:
    // 0x4e599c: 0x0  nop
    ctx->pc = 0x4e599cu;
    // NOP
label_4e59a0:
    // 0x4e59a0: 0x6f5f6975  ldr         $ra, 0x6975($k0)
    ctx->pc = 0x4e59a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 26), 26997); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 31, (GPR_U64(ctx, 31) & keepMask) | (mem >> shift)); }
label_4e59a4:
    // 0x4e59a4: 0x61677475  daddi       $a3, $t3, 0x7475
    ctx->pc = 0x4e59a4u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)29813; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 7, res); }
label_4e59a8:
    // 0x4e59a8: 0x735f656d  .word       0x735F656D                   # INVALID     $k0, $ra, 0x656D # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4e59a8u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2D at 0x4E59A8 raw=0x735F656D");
label_4e59ac:
    // 0x4e59ac: 0x63656c65  daddi       $a1, $k1, 0x6C65
    ctx->pc = 0x4e59acu;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)27749; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 5, res); }
label_4e59b0:
    // 0x4e59b0: 0x74  teq         $zero, $zero, 1
    ctx->pc = 0x4e59b0u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_4e59b4:
    // 0x4e59b4: 0x0  nop
    ctx->pc = 0x4e59b4u;
    // NOP
label_4e59b8:
    // 0x4e59b8: 0x0  nop
    ctx->pc = 0x4e59b8u;
    // NOP
label_4e59bc:
    // 0x4e59bc: 0x0  nop
    ctx->pc = 0x4e59bcu;
    // NOP
label_4e59c0:
    // 0x4e59c0: 0x6f5f6975  ldr         $ra, 0x6975($k0)
    ctx->pc = 0x4e59c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 26), 26997); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 31, (GPR_U64(ctx, 31) & keepMask) | (mem >> shift)); }
label_4e59c4:
    // 0x4e59c4: 0x61677475  daddi       $a3, $t3, 0x7475
    ctx->pc = 0x4e59c4u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)29813; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 7, res); }
label_4e59c8:
    // 0x4e59c8: 0x625f656d  daddi       $ra, $s2, 0x656D
    ctx->pc = 0x4e59c8u;
    { int64_t src = (int64_t)GPR_S64(ctx, 18); int64_t imm = (int64_t)(int32_t)25965; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 31, res); }
label_4e59cc:
    // 0x4e59cc: 0x6b6361  .word       0x006B6361                   # addu        $t4, $v1, $t3 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e59ccu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
label_4e59d0:
    // 0x4e59d0: 0x5f4e5026  .word       0x5F4E5026                   # bgtzl       $k0, . + 4 + (0x5026 << 2) # 000E0000 <InstrIdType: CPU_NORMAL>
label_4e59d4:
    if (ctx->pc == 0x4E59D4u) {
        ctx->pc = 0x4E59D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E59D0u;
        // 0x4e59d4: 0x6176706f  daddi       $s6, $t3, 0x706F (Delay Slot)
        { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)28783; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 22, res); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E59D8u;
        goto label_4e59d8;
    }
    ctx->pc = 0x4E59D0u;
    {
        const bool branch_taken_0x4e59d0 = (GPR_S32(ctx, 26) > 0);
        if (branch_taken_0x4e59d0) {
            ctx->pc = 0x4E59D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E59D0u;
            // 0x4e59d4: 0x6176706f  daddi       $s6, $t3, 0x706F (Delay Slot)
            { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)28783; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 22, res); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F9A6Cu;
            return;
        }
    }
    ctx->pc = 0x4E59D8u;
label_4e59d8:
    // 0x4e59d8: 0x7572746c  .word       0x7572746C                   # INVALID     $t3, $s2, 0x746C # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e59d8u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E59D8 raw=0x7572746C");
label_4e59dc:
    // 0x4e59dc: 0x65  .word       0x00000065                   # move        $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e59dcu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_4e59e0:
    // 0x4e59e0: 0x5f4e5026  .word       0x5F4E5026                   # bgtzl       $k0, . + 4 + (0x5026 << 2) # 000E0000 <InstrIdType: CPU_NORMAL>
label_4e59e4:
    if (ctx->pc == 0x4E59E4u) {
        ctx->pc = 0x4E59E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E59E0u;
        // 0x4e59e4: 0x6176706f  daddi       $s6, $t3, 0x706F (Delay Slot)
        { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)28783; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 22, res); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E59E8u;
        goto label_4e59e8;
    }
    ctx->pc = 0x4E59E0u;
    {
        const bool branch_taken_0x4e59e0 = (GPR_S32(ctx, 26) > 0);
        if (branch_taken_0x4e59e0) {
            ctx->pc = 0x4E59E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E59E0u;
            // 0x4e59e4: 0x6176706f  daddi       $s6, $t3, 0x706F (Delay Slot)
            { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)28783; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 22, res); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F9A7Cu;
            return;
        }
    }
    ctx->pc = 0x4E59E8u;
label_4e59e8:
    // 0x4e59e8: 0x6c61666c  ldr         $at, 0x666C($v1)
    ctx->pc = 0x4e59e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 26220); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
label_4e59ec:
    // 0x4e59ec: 0x6573  tltu        $zero, $zero, 405
    ctx->pc = 0x4e59ecu;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_4e59f0:
    // 0x4e59f0: 0x2e786667  sltiu       $t8, $s3, 0x6667
    ctx->pc = 0x4e59f0u;
    SET_GPR_U64(ctx, 24, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)26215) ? 1 : 0);
label_4e59f4:
    // 0x4e59f4: 0x65726373  daddiu      $s2, $t3, 0x6373
    ctx->pc = 0x4e59f4u;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)25459);
label_4e59f8:
    // 0x4e59f8: 0x65726e65  daddiu      $s2, $t3, 0x6E65
    ctx->pc = 0x4e59f8u;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)28261);
label_4e59fc:
    // 0x4e59fc: 0x73  tltu        $zero, $zero, 1
    ctx->pc = 0x4e59fcu;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_4e5a00:
    // 0x4e5a00: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e5a00u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_4e5a04:
    // 0x4e5a04: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e5a04u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_4e5a08:
    // 0x4e5a08: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e5a08u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_4e5a0c:
    // 0x4e5a0c: 0x3f4ccccd  .word       0x3F4CCCCD                   # lui         $t4, 0xCCCD # 03400000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e5a0cu;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)52429 << 16));
label_4e5a10:
    // 0x4e5a10: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e5a10u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_4e5a14:
    // 0x4e5a14: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e5a14u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_4e5a18:
    // 0x4e5a18: 0x0  nop
    ctx->pc = 0x4e5a18u;
    // NOP
label_4e5a1c:
    // 0x4e5a1c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e5a1cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_4e5a20:
    // 0x4e5a20: 0x6f5f6975  ldr         $ra, 0x6975($k0)
    ctx->pc = 0x4e5a20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 26), 26997); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 31, (GPR_U64(ctx, 31) & keepMask) | (mem >> shift)); }
label_4e5a24:
    // 0x4e5a24: 0x6f697470  ldr         $t1, 0x7470($k1)
    ctx->pc = 0x4e5a24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 29808); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_4e5a28:
    // 0x4e5a28: 0x315f6e  .word       0x00315F6E                   # dsub        $t3, $at, $s1 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e5a28u;
    { int64_t a = (int64_t)GPR_S64(ctx, 1); int64_t b = (int64_t)GPR_S64(ctx, 17); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 11, r); }
label_4e5a2c:
    // 0x4e5a2c: 0x0  nop
    ctx->pc = 0x4e5a2cu;
    // NOP
label_4e5a30:
    // 0x4e5a30: 0x5f424726  .word       0x5F424726                   # bgtzl       $k0, . + 4 + (0x4726 << 2) # 00020000 <InstrIdType: CPU_NORMAL>
label_4e5a34:
    if (ctx->pc == 0x4E5A34u) {
        ctx->pc = 0x4E5A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E5A30u;
        // 0x4e5a34: 0x65746f6e  daddiu      $s4, $t3, 0x6F6E (Delay Slot)
        SET_GPR_S64(ctx, 20, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)28526);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E5A38u;
        goto label_4e5a38;
    }
    ctx->pc = 0x4E5A30u;
    {
        const bool branch_taken_0x4e5a30 = (GPR_S32(ctx, 26) > 0);
        if (branch_taken_0x4e5a30) {
            ctx->pc = 0x4E5A34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E5A30u;
            // 0x4e5a34: 0x65746f6e  daddiu      $s4, $t3, 0x6F6E (Delay Slot)
            SET_GPR_S64(ctx, 20, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)28526);
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F76CCu;
            return;
        }
    }
    ctx->pc = 0x4E5A38u;
label_4e5a38:
    // 0x4e5a38: 0x7478  dsll        $t6, $zero, 17
    ctx->pc = 0x4e5a38u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) << 17);
label_4e5a3c:
    // 0x4e5a3c: 0x0  nop
    ctx->pc = 0x4e5a3cu;
    // NOP
label_4e5a40:
    // 0x4e5a40: 0x53747874  beql        $k1, $s4, . + 4 + (0x7874 << 2)
label_4e5a44:
    if (ctx->pc == 0x4E5A44u) {
        ctx->pc = 0x4E5A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E5A40u;
        // 0x4e5a44: 0x65726f63  daddiu      $s2, $t3, 0x6F63 (Delay Slot)
        SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)28515);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E5A48u;
        goto label_4e5a48;
    }
    ctx->pc = 0x4E5A40u;
    {
        const bool branch_taken_0x4e5a40 = (GPR_U64(ctx, 27) == GPR_U64(ctx, 20));
        if (branch_taken_0x4e5a40) {
            ctx->pc = 0x4E5A44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E5A40u;
            // 0x4e5a44: 0x65726f63  daddiu      $s2, $t3, 0x6F63 (Delay Slot)
            SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)28515);
            ctx->in_delay_slot = false;
            ctx->pc = 0x503C14u;
            return;
        }
    }
    ctx->pc = 0x4E5A48u;
label_4e5a48:
    // 0x4e5a48: 0x0  nop
    ctx->pc = 0x4e5a48u;
    // NOP
label_4e5a4c:
    // 0x4e5a4c: 0x0  nop
    ctx->pc = 0x4e5a4cu;
    // NOP
label_4e5a50:
    // 0x4e5a50: 0x4d747874  .word       0x4D747874                   # INVALID     $t3, $s4, 0x7874 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e5a50u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x4E5A50 raw=0x4D747874");
label_4e5a54:
    // 0x4e5a54: 0x61737365  daddi       $s3, $t3, 0x7365
    ctx->pc = 0x4e5a54u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)29541; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 19, res); }
label_4e5a58:
    // 0x4e5a58: 0x6567  .word       0x00006567                   # not         $t4, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e5a58u;
    SET_GPR_U64(ctx, 12, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_4e5a5c:
    // 0x4e5a5c: 0x0  nop
    ctx->pc = 0x4e5a5cu;
    // NOP
label_4e5a60:
    // 0x4e5a60: 0x43676d69  .word       0x43676D69                   # INVALID     $k1, $a3, 0x6D69 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x4e5a60u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1B at 0x4E5A60 raw=0x43676D69");
label_4e5a64:
    // 0x4e5a64: 0x6f737275  ldr         $s3, 0x7275($k1)
    ctx->pc = 0x4e5a64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 29301); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 19, (GPR_U64(ctx, 19) & keepMask) | (mem >> shift)); }
label_4e5a68:
    // 0x4e5a68: 0x72  tlt         $zero, $zero, 1
    ctx->pc = 0x4e5a68u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_4e5a6c:
    // 0x4e5a6c: 0x0  nop
    ctx->pc = 0x4e5a6cu;
    // NOP
label_4e5a70:
    // 0x4e5a70: 0x3a6b6170  xori        $t3, $s3, 0x6170
    ctx->pc = 0x4e5a70u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)24944);
label_4e5a74:
    // 0x4e5a74: 0x61746164  daddi       $s4, $t3, 0x6164
    ctx->pc = 0x4e5a74u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)24932; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 20, res); }
label_4e5a78:
    // 0x4e5a78: 0x756f735c  .word       0x756F735C                   # INVALID     $t3, $t7, 0x735C # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e5a78u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E5A78 raw=0x756F735C");
label_4e5a7c:
    // 0x4e5a7c: 0x5c73646e  .word       0x5C73646E                   # bgtzl       $v1, . + 4 + (0x646E << 2) # 00130000 <InstrIdType: CPU_NORMAL>
label_4e5a80:
    if (ctx->pc == 0x4E5A80u) {
        ctx->pc = 0x4E5A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E5A7Cu;
        // 0x4e5a80: 0x5c327370  .word       0x5C327370                   # bgtzl       $at, . + 4 + (0x7370 << 2) # 00120000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x4E5A80 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E5A84u;
        goto label_4e5a84;
    }
    ctx->pc = 0x4E5A7Cu;
    {
        const bool branch_taken_0x4e5a7c = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x4e5a7c) {
            ctx->pc = 0x4E5A80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E5A7Cu;
            // 0x4e5a80: 0x5c327370  .word       0x5C327370                   # bgtzl       $at, . + 4 + (0x7370 << 2) # 00120000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            // Likely branch instruction at 0x4E5A80 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x4FEC38u;
            return;
        }
    }
    ctx->pc = 0x4E5A84u;
label_4e5a84:
    // 0x4e5a84: 0x6b6e6162  ldl         $t6, 0x6162($k1)
    ctx->pc = 0x4e5a84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 24930); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem << shift)); }
label_4e5a88:
    // 0x4e5a88: 0x7463415c  .word       0x7463415C                   # INVALID     $v1, $v1, 0x415C # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e5a88u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E5A88 raw=0x7463415C");
label_4e5a8c:
    // 0x4e5a8c: 0x6f53726f  ldr         $s3, 0x726F($k0)
    ctx->pc = 0x4e5a8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 26), 29295); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 19, (GPR_U64(ctx, 19) & keepMask) | (mem >> shift)); }
label_4e5a90:
    // 0x4e5a90: 0x73646e75  .word       0x73646E75                   # INVALID     $k1, $a0, 0x6E75 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4e5a90u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x35 at 0x4E5A90 raw=0x73646E75");
label_4e5a94:
    // 0x4e5a94: 0x7377722e  .word       0x7377722E                   # INVALID     $k1, $s7, 0x722E # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4e5a94u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2E at 0x4E5A94 raw=0x7377722E");
label_4e5a98:
    // 0x4e5a98: 0x0  nop
    ctx->pc = 0x4e5a98u;
    // NOP
label_4e5a9c:
    // 0x4e5a9c: 0x0  nop
    ctx->pc = 0x4e5a9cu;
    // NOP
label_4e5aa0:
    // 0x4e5aa0: 0x656d6974  daddiu      $t5, $t3, 0x6974
    ctx->pc = 0x4e5aa0u;
    SET_GPR_S64(ctx, 13, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)26996);
label_4e5aa4:
    // 0x4e5aa4: 0x75616a5f  .word       0x75616A5F                   # INVALID     $t3, $at, 0x6A5F # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e5aa4u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E5AA4 raw=0x75616A5F");
label_4e5aa8:
    // 0x4e5aa8: 0x6567  .word       0x00006567                   # not         $t4, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e5aa8u;
    SET_GPR_U64(ctx, 12, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_4e5aac:
    // 0x4e5aac: 0x0  nop
    ctx->pc = 0x4e5aacu;
    // NOP
label_4e5ab0:
    // 0x4e5ab0: 0x72626d6f  .word       0x72626D6F                   # INVALID     $s3, $v0, 0x6D6F # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4e5ab0u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2F at 0x4E5AB0 raw=0x72626D6F");
label_4e5ab4:
    // 0x4e5ab4: 0x63735f65  daddi       $s3, $k1, 0x5F65
    ctx->pc = 0x4e5ab4u;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)24421; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 19, res); }
label_4e5ab8:
    // 0x4e5ab8: 0x65726f  .word       0x0065726F                   # dsubu       $t6, $v1, $a1 # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e5ab8u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 3) - GPR_U64(ctx, 5));
label_4e5abc:
    // 0x4e5abc: 0x0  nop
    ctx->pc = 0x4e5abcu;
    // NOP
label_4e5ac0:
    // 0x4e5ac0: 0x4d747874  .word       0x4D747874                   # INVALID     $t3, $s4, 0x7874 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e5ac0u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x4E5AC0 raw=0x4D747874");
label_4e5ac4:
    // 0x4e5ac4: 0x47696e69  .word       0x47696E69                   # INVALID     $k1, $t1, 0x6E69 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x4e5ac4u;
    throw std::runtime_error("Unhandled FPU instruction: format 0x1B, function 0x29 at 0x4E5AC4 raw=0x47696E69");
label_4e5ac8:
    // 0x4e5ac8: 0x53656d61  beql        $k1, $a1, . + 4 + (0x6D61 << 2)
label_4e5acc:
    if (ctx->pc == 0x4E5ACCu) {
        ctx->pc = 0x4E5ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E5AC8u;
        // 0x4e5acc: 0x65726f63  daddiu      $s2, $t3, 0x6F63 (Delay Slot)
        SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)28515);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E5AD0u;
        goto label_4e5ad0;
    }
    ctx->pc = 0x4E5AC8u;
    {
        const bool branch_taken_0x4e5ac8 = (GPR_U64(ctx, 27) == GPR_U64(ctx, 5));
        if (branch_taken_0x4e5ac8) {
            ctx->pc = 0x4E5ACCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E5AC8u;
            // 0x4e5acc: 0x65726f63  daddiu      $s2, $t3, 0x6F63 (Delay Slot)
            SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)28515);
            ctx->in_delay_slot = false;
            ctx->pc = 0x501050u;
            return;
        }
    }
    ctx->pc = 0x4E5AD0u;
label_4e5ad0:
    // 0x4e5ad0: 0x0  nop
    ctx->pc = 0x4e5ad0u;
    // NOP
label_4e5ad4:
    // 0x4e5ad4: 0x0  nop
    ctx->pc = 0x4e5ad4u;
    // NOP
label_4e5ad8:
    // 0x4e5ad8: 0x0  nop
    ctx->pc = 0x4e5ad8u;
    // NOP
label_4e5adc:
    // 0x4e5adc: 0x0  nop
    ctx->pc = 0x4e5adcu;
    // NOP
label_4e5ae0:
    // 0x4e5ae0: 0x3a6b6170  xori        $t3, $s3, 0x6170
    ctx->pc = 0x4e5ae0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)24944);
label_4e5ae4:
    // 0x4e5ae4: 0x61746164  daddi       $s4, $t3, 0x6164
    ctx->pc = 0x4e5ae4u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)24932; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 20, res); }
label_4e5ae8:
    // 0x4e5ae8: 0x6e61705c  ldr         $at, 0x705C($s3)
    ctx->pc = 0x4e5ae8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 28764); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
label_4e5aec:
    // 0x4e5aec: 0x5c736c65  .word       0x5C736C65                   # bgtzl       $v1, . + 4 + (0x6C65 << 2) # 00130000 <InstrIdType: CPU_NORMAL>
label_4e5af0:
    if (ctx->pc == 0x4E5AF0u) {
        ctx->pc = 0x4E5AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E5AECu;
        // 0x4e5af0: 0x696e696d  ldl         $t6, 0x696D($t3) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 11), 26989); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem << shift)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E5AF4u;
        goto label_4e5af4;
    }
    ctx->pc = 0x4E5AECu;
    {
        const bool branch_taken_0x4e5aec = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x4e5aec) {
            ctx->pc = 0x4E5AF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E5AECu;
            // 0x4e5af0: 0x696e696d  ldl         $t6, 0x696D($t3) (Delay Slot)
            { uint32_t addr = ADD32(GPR_U32(ctx, 11), 26989); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem << shift)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x500C84u;
            return;
        }
    }
    ctx->pc = 0x4E5AF4u;
label_4e5af4:
    // 0x4e5af4: 0x656d6167  daddiu      $t5, $t3, 0x6167
    ctx->pc = 0x4e5af4u;
    SET_GPR_S64(ctx, 13, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)24935);
label_4e5af8:
    // 0x4e5af8: 0x6e705c73  ldr         $s0, 0x5C73($s3)
    ctx->pc = 0x4e5af8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 23667); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 16, (GPR_U64(ctx, 16) & keepMask) | (mem >> shift)); }
label_4e5afc:
    // 0x4e5afc: 0x73685f6c  .word       0x73685F6C                   # INVALID     $k1, $t0, 0x5F6C # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4e5afcu;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2C at 0x4E5AFC raw=0x73685F6C");
label_4e5b00:
    // 0x4e5b00: 0x656c7572  daddiu      $t4, $t3, 0x7572
    ctx->pc = 0x4e5b00u;
    SET_GPR_S64(ctx, 12, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)30066);
label_4e5b04:
    // 0x4e5b04: 0x78742e73  lq          $s4, 0x2E73($v1)
    ctx->pc = 0x4e5b04u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 3), 11891)));
label_4e5b08:
    // 0x4e5b08: 0x74  teq         $zero, $zero, 1
    ctx->pc = 0x4e5b08u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_4e5b0c:
    // 0x4e5b0c: 0x0  nop
    ctx->pc = 0x4e5b0cu;
    // NOP
label_4e5b10:
    // 0x4e5b10: 0x5f474d26  .word       0x5F474D26                   # bgtzl       $k0, . + 4 + (0x4D26 << 2) # 00070000 <InstrIdType: CPU_NORMAL>
label_4e5b14:
    if (ctx->pc == 0x4E5B14u) {
        ctx->pc = 0x4E5B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E5B10u;
        // 0x4e5b14: 0x656c7572  daddiu      $t4, $t3, 0x7572 (Delay Slot)
        SET_GPR_S64(ctx, 12, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)30066);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E5B18u;
        goto label_4e5b18;
    }
    ctx->pc = 0x4E5B10u;
    {
        const bool branch_taken_0x4e5b10 = (GPR_S32(ctx, 26) > 0);
        if (branch_taken_0x4e5b10) {
            ctx->pc = 0x4E5B14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E5B10u;
            // 0x4e5b14: 0x656c7572  daddiu      $t4, $t3, 0x7572 (Delay Slot)
            SET_GPR_S64(ctx, 12, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)30066);
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F8FACu;
            return;
        }
    }
    ctx->pc = 0x4E5B18u;
label_4e5b18:
    // 0x4e5b18: 0x32302573  andi        $s0, $s1, 0x2573
    ctx->pc = 0x4e5b18u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)9587);
label_4e5b1c:
    // 0x4e5b1c: 0x64  .word       0x00000064                   # and         $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e5b1cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_4e5b20:
    // 0x4e5b20: 0x5f747874  .word       0x5F747874                   # bgtzl       $k1, . + 4 + (0x7874 << 2) # 00140000 <InstrIdType: CPU_NORMAL>
label_4e5b24:
    if (ctx->pc == 0x4E5B24u) {
        ctx->pc = 0x4E5B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E5B20u;
        // 0x4e5b24: 0x30256c72  andi        $a1, $at, 0x6C72 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 1) & (uint64_t)(uint16_t)27762);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E5B28u;
        goto label_4e5b28;
    }
    ctx->pc = 0x4E5B20u;
    {
        const bool branch_taken_0x4e5b20 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e5b20) {
            ctx->pc = 0x4E5B24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E5B20u;
            // 0x4e5b24: 0x30256c72  andi        $a1, $at, 0x6C72 (Delay Slot)
            SET_GPR_U64(ctx, 5, GPR_U64(ctx, 1) & (uint64_t)(uint16_t)27762);
            ctx->in_delay_slot = false;
            ctx->pc = 0x503CF4u;
            return;
        }
    }
    ctx->pc = 0x4E5B28u;
label_4e5b28:
    // 0x4e5b28: 0x6432  tlt         $zero, $zero, 400
    ctx->pc = 0x4e5b28u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_4e5b2c:
    // 0x4e5b2c: 0x0  nop
    ctx->pc = 0x4e5b2cu;
    // NOP
label_4e5b30:
    // 0x4e5b30: 0x3a6b6170  xori        $t3, $s3, 0x6170
    ctx->pc = 0x4e5b30u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)24944);
label_4e5b34:
    // 0x4e5b34: 0x61746164  daddi       $s4, $t3, 0x6164
    ctx->pc = 0x4e5b34u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)24932; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 20, res); }
label_4e5b38:
    // 0x4e5b38: 0x6e61705c  ldr         $at, 0x705C($s3)
    ctx->pc = 0x4e5b38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 28764); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
label_4e5b3c:
    // 0x4e5b3c: 0x5c736c65  .word       0x5C736C65                   # bgtzl       $v1, . + 4 + (0x6C65 << 2) # 00130000 <InstrIdType: CPU_NORMAL>
label_4e5b40:
    if (ctx->pc == 0x4E5B40u) {
        ctx->pc = 0x4E5B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E5B3Cu;
        // 0x4e5b40: 0x696e696d  ldl         $t6, 0x696D($t3) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 11), 26989); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem << shift)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E5B44u;
        goto label_4e5b44;
    }
    ctx->pc = 0x4E5B3Cu;
    {
        const bool branch_taken_0x4e5b3c = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x4e5b3c) {
            ctx->pc = 0x4E5B40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E5B3Cu;
            // 0x4e5b40: 0x696e696d  ldl         $t6, 0x696D($t3) (Delay Slot)
            { uint32_t addr = ADD32(GPR_U32(ctx, 11), 26989); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem << shift)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x500CD4u;
            return;
        }
    }
    ctx->pc = 0x4E5B44u;
label_4e5b44:
    // 0x4e5b44: 0x656d6167  daddiu      $t5, $t3, 0x6167
    ctx->pc = 0x4e5b44u;
    SET_GPR_S64(ctx, 13, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)24935);
label_4e5b48:
    // 0x4e5b48: 0x6e705c73  ldr         $s0, 0x5C73($s3)
    ctx->pc = 0x4e5b48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 23667); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 16, (GPR_U64(ctx, 16) & keepMask) | (mem >> shift)); }
label_4e5b4c:
    // 0x4e5b4c: 0x73685f6c  .word       0x73685F6C                   # INVALID     $k1, $t0, 0x5F6C # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4e5b4cu;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2C at 0x4E5B4C raw=0x73685F6C");
label_4e5b50:
    // 0x4e5b50: 0x656a626f  daddiu      $t2, $t3, 0x626F
    ctx->pc = 0x4e5b50u;
    SET_GPR_S64(ctx, 10, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)25199);
label_4e5b54:
    // 0x4e5b54: 0x76697463  .word       0x76697463                   # INVALID     $s3, $t1, 0x7463 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e5b54u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E5B54 raw=0x76697463");
label_4e5b58:
    // 0x4e5b58: 0x742e7365  .word       0x742E7365                   # INVALID     $at, $t6, 0x7365 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e5b58u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E5B58 raw=0x742E7365");
label_4e5b5c:
    // 0x4e5b5c: 0x7478  dsll        $t6, $zero, 17
    ctx->pc = 0x4e5b5cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) << 17);
label_4e5b60:
    // 0x4e5b60: 0x5f474d26  .word       0x5F474D26                   # bgtzl       $k0, . + 4 + (0x4D26 << 2) # 00070000 <InstrIdType: CPU_NORMAL>
label_4e5b64:
    if (ctx->pc == 0x4E5B64u) {
        ctx->pc = 0x4E5B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E5B60u;
        // 0x4e5b64: 0x656a626f  daddiu      $t2, $t3, 0x626F (Delay Slot)
        SET_GPR_S64(ctx, 10, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)25199);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E5B68u;
        goto label_4e5b68;
    }
    ctx->pc = 0x4E5B60u;
    {
        const bool branch_taken_0x4e5b60 = (GPR_S32(ctx, 26) > 0);
        if (branch_taken_0x4e5b60) {
            ctx->pc = 0x4E5B64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E5B60u;
            // 0x4e5b64: 0x656a626f  daddiu      $t2, $t3, 0x626F (Delay Slot)
            SET_GPR_S64(ctx, 10, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)25199);
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F8FFCu;
            return;
        }
    }
    ctx->pc = 0x4E5B68u;
label_4e5b68:
    // 0x4e5b68: 0x76697463  .word       0x76697463                   # INVALID     $s3, $t1, 0x7463 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e5b68u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E5B68 raw=0x76697463");
label_4e5b6c:
    // 0x4e5b6c: 0x30257365  andi        $a1, $at, 0x7365
    ctx->pc = 0x4e5b6cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 1) & (uint64_t)(uint16_t)29541);
label_4e5b70:
    // 0x4e5b70: 0x6432  tlt         $zero, $zero, 400
    ctx->pc = 0x4e5b70u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_4e5b74:
    // 0x4e5b74: 0x0  nop
    ctx->pc = 0x4e5b74u;
    // NOP
label_4e5b78:
    // 0x4e5b78: 0x5f747874  .word       0x5F747874                   # bgtzl       $k1, . + 4 + (0x7874 << 2) # 00140000 <InstrIdType: CPU_NORMAL>
label_4e5b7c:
    if (ctx->pc == 0x4E5B7Cu) {
        ctx->pc = 0x4E5B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E5B78u;
        // 0x4e5b7c: 0x3025626f  andi        $a1, $at, 0x626F (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 1) & (uint64_t)(uint16_t)25199);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E5B80u;
        goto label_4e5b80;
    }
    ctx->pc = 0x4E5B78u;
    {
        const bool branch_taken_0x4e5b78 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e5b78) {
            ctx->pc = 0x4E5B7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E5B78u;
            // 0x4e5b7c: 0x3025626f  andi        $a1, $at, 0x626F (Delay Slot)
            SET_GPR_U64(ctx, 5, GPR_U64(ctx, 1) & (uint64_t)(uint16_t)25199);
            ctx->in_delay_slot = false;
            ctx->pc = 0x503D4Cu;
            return;
        }
    }
    ctx->pc = 0x4E5B80u;
label_4e5b80:
    // 0x4e5b80: 0x6432  tlt         $zero, $zero, 400
    ctx->pc = 0x4e5b80u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_4e5b84:
    // 0x4e5b84: 0x0  nop
    ctx->pc = 0x4e5b84u;
    // NOP
label_4e5b88:
    // 0x4e5b88: 0x0  nop
    ctx->pc = 0x4e5b88u;
    // NOP
label_4e5b8c:
    // 0x4e5b8c: 0x0  nop
    ctx->pc = 0x4e5b8cu;
    // NOP
label_4e5b90:
    // 0x4e5b90: 0x3a6b6170  xori        $t3, $s3, 0x6170
    ctx->pc = 0x4e5b90u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)24944);
label_4e5b94:
    // 0x4e5b94: 0x61746164  daddi       $s4, $t3, 0x6164
    ctx->pc = 0x4e5b94u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)24932; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 20, res); }
label_4e5b98:
    // 0x4e5b98: 0x6e61705c  ldr         $at, 0x705C($s3)
    ctx->pc = 0x4e5b98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 28764); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
label_4e5b9c:
    // 0x4e5b9c: 0x5c736c65  .word       0x5C736C65                   # bgtzl       $v1, . + 4 + (0x6C65 << 2) # 00130000 <InstrIdType: CPU_NORMAL>
label_4e5ba0:
    if (ctx->pc == 0x4E5BA0u) {
        ctx->pc = 0x4E5BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E5B9Cu;
        // 0x4e5ba0: 0x696e696d  ldl         $t6, 0x696D($t3) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 11), 26989); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem << shift)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E5BA4u;
        goto label_4e5ba4;
    }
    ctx->pc = 0x4E5B9Cu;
    {
        const bool branch_taken_0x4e5b9c = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x4e5b9c) {
            ctx->pc = 0x4E5BA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E5B9Cu;
            // 0x4e5ba0: 0x696e696d  ldl         $t6, 0x696D($t3) (Delay Slot)
            { uint32_t addr = ADD32(GPR_U32(ctx, 11), 26989); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem << shift)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x500D34u;
            return;
        }
    }
    ctx->pc = 0x4E5BA4u;
label_4e5ba4:
    // 0x4e5ba4: 0x656d6167  daddiu      $t5, $t3, 0x6167
    ctx->pc = 0x4e5ba4u;
    SET_GPR_S64(ctx, 13, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)24935);
label_4e5ba8:
    // 0x4e5ba8: 0x6e705c73  ldr         $s0, 0x5C73($s3)
    ctx->pc = 0x4e5ba8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 23667); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 16, (GPR_U64(ctx, 16) & keepMask) | (mem >> shift)); }
label_4e5bac:
    // 0x4e5bac: 0x73685f6c  .word       0x73685F6C                   # INVALID     $k1, $t0, 0x5F6C # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4e5bacu;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2C at 0x4E5BAC raw=0x73685F6C");
label_4e5bb0:
    // 0x4e5bb0: 0x75736572  .word       0x75736572                   # INVALID     $t3, $s3, 0x6572 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e5bb0u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E5BB0 raw=0x75736572");
label_4e5bb4:
    // 0x4e5bb4: 0x2e73746c  sltiu       $s3, $s3, 0x746C
    ctx->pc = 0x4e5bb4u;
    SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)29804) ? 1 : 0);
label_4e5bb8:
    // 0x4e5bb8: 0x747874  teq         $v1, $s4, 481
    ctx->pc = 0x4e5bb8u;
    if (GPR_U64(ctx, 3) == GPR_U64(ctx, 20)) { runtime->handleTrap(rdram, ctx); }
label_4e5bbc:
    // 0x4e5bbc: 0x0  nop
    ctx->pc = 0x4e5bbcu;
    // NOP
label_4e5bc0:
    // 0x4e5bc0: 0x5f474d26  .word       0x5F474D26                   # bgtzl       $k0, . + 4 + (0x4D26 << 2) # 00070000 <InstrIdType: CPU_NORMAL>
label_4e5bc4:
    if (ctx->pc == 0x4E5BC4u) {
        ctx->pc = 0x4E5BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E5BC0u;
        // 0x4e5bc4: 0x75736572  .word       0x75736572                   # INVALID     $t3, $s3, 0x6572 # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E5BC4 raw=0x75736572");
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E5BC8u;
        goto label_4e5bc8;
    }
    ctx->pc = 0x4E5BC0u;
    {
        const bool branch_taken_0x4e5bc0 = (GPR_S32(ctx, 26) > 0);
        if (branch_taken_0x4e5bc0) {
            ctx->pc = 0x4E5BC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E5BC0u;
            // 0x4e5bc4: 0x75736572  .word       0x75736572                   # INVALID     $t3, $s3, 0x6572 # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E5BC4 raw=0x75736572");
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F905Cu;
            return;
        }
    }
    ctx->pc = 0x4E5BC8u;
label_4e5bc8:
    // 0x4e5bc8: 0x2573746c  addiu       $s3, $t3, 0x746C
    ctx->pc = 0x4e5bc8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 11), 29804));
label_4e5bcc:
    // 0x4e5bcc: 0x41643230  .word       0x41643230                   # INVALID     $t3, $a0, 0x3230 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x4e5bccu;
    throw std::runtime_error("Unhandled COP0 instruction format: 0xB at 0x4E5BCC raw=0x41643230");
label_4e5bd0:
    // 0x4e5bd0: 0x0  nop
    ctx->pc = 0x4e5bd0u;
    // NOP
label_4e5bd4:
    // 0x4e5bd4: 0x0  nop
    ctx->pc = 0x4e5bd4u;
    // NOP
label_4e5bd8:
    // 0x4e5bd8: 0x0  nop
    ctx->pc = 0x4e5bd8u;
    // NOP
label_4e5bdc:
    // 0x4e5bdc: 0x0  nop
    ctx->pc = 0x4e5bdcu;
    // NOP
label_4e5be0:
    // 0x4e5be0: 0x5f474d26  .word       0x5F474D26                   # bgtzl       $k0, . + 4 + (0x4D26 << 2) # 00070000 <InstrIdType: CPU_NORMAL>
label_4e5be4:
    if (ctx->pc == 0x4E5BE4u) {
        ctx->pc = 0x4E5BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E5BE0u;
        // 0x4e5be4: 0x75736572  .word       0x75736572                   # INVALID     $t3, $s3, 0x6572 # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E5BE4 raw=0x75736572");
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E5BE8u;
        goto label_4e5be8;
    }
    ctx->pc = 0x4E5BE0u;
    {
        const bool branch_taken_0x4e5be0 = (GPR_S32(ctx, 26) > 0);
        if (branch_taken_0x4e5be0) {
            ctx->pc = 0x4E5BE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E5BE0u;
            // 0x4e5be4: 0x75736572  .word       0x75736572                   # INVALID     $t3, $s3, 0x6572 # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E5BE4 raw=0x75736572");
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F907Cu;
            return;
        }
    }
    ctx->pc = 0x4E5BE8u;
label_4e5be8:
    // 0x4e5be8: 0x2573746c  addiu       $s3, $t3, 0x746C
    ctx->pc = 0x4e5be8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 11), 29804));
label_4e5bec:
    // 0x4e5bec: 0x42643230  .word       0x42643230                   # INVALID     $s3, $a0, 0x3230 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x4e5becu;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x13 at 0x4E5BEC raw=0x42643230");
label_4e5bf0:
    // 0x4e5bf0: 0x0  nop
    ctx->pc = 0x4e5bf0u;
    // NOP
label_4e5bf4:
    // 0x4e5bf4: 0x0  nop
    ctx->pc = 0x4e5bf4u;
    // NOP
label_4e5bf8:
    // 0x4e5bf8: 0x0  nop
    ctx->pc = 0x4e5bf8u;
    // NOP
label_4e5bfc:
    // 0x4e5bfc: 0x0  nop
    ctx->pc = 0x4e5bfcu;
    // NOP
label_4e5c00:
    // 0x4e5c00: 0x5f474d26  .word       0x5F474D26                   # bgtzl       $k0, . + 4 + (0x4D26 << 2) # 00070000 <InstrIdType: CPU_NORMAL>
label_4e5c04:
    if (ctx->pc == 0x4E5C04u) {
        ctx->pc = 0x4E5C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E5C00u;
        // 0x4e5c04: 0x75736572  .word       0x75736572                   # INVALID     $t3, $s3, 0x6572 # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E5C04 raw=0x75736572");
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E5C08u;
        goto label_4e5c08;
    }
    ctx->pc = 0x4E5C00u;
    {
        const bool branch_taken_0x4e5c00 = (GPR_S32(ctx, 26) > 0);
        if (branch_taken_0x4e5c00) {
            ctx->pc = 0x4E5C04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E5C00u;
            // 0x4e5c04: 0x75736572  .word       0x75736572                   # INVALID     $t3, $s3, 0x6572 # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E5C04 raw=0x75736572");
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F909Cu;
            return;
        }
    }
    ctx->pc = 0x4E5C08u;
label_4e5c08:
    // 0x4e5c08: 0x2573746c  addiu       $s3, $t3, 0x746C
    ctx->pc = 0x4e5c08u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 11), 29804));
label_4e5c0c:
    // 0x4e5c0c: 0x43643230  .word       0x43643230                   # INVALID     $k1, $a0, 0x3230 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x4e5c0cu;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1B at 0x4E5C0C raw=0x43643230");
label_4e5c10:
    // 0x4e5c10: 0x0  nop
    ctx->pc = 0x4e5c10u;
    // NOP
label_4e5c14:
    // 0x4e5c14: 0x0  nop
    ctx->pc = 0x4e5c14u;
    // NOP
label_4e5c18:
    // 0x4e5c18: 0x5f747874  .word       0x5F747874                   # bgtzl       $k1, . + 4 + (0x7874 << 2) # 00140000 <InstrIdType: CPU_NORMAL>
label_4e5c1c:
    if (ctx->pc == 0x4E5C1Cu) {
        ctx->pc = 0x4E5C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E5C18u;
        // 0x4e5c1c: 0x30257372  andi        $a1, $at, 0x7372 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 1) & (uint64_t)(uint16_t)29554);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E5C20u;
        goto label_4e5c20;
    }
    ctx->pc = 0x4E5C18u;
    {
        const bool branch_taken_0x4e5c18 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e5c18) {
            ctx->pc = 0x4E5C1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E5C18u;
            // 0x4e5c1c: 0x30257372  andi        $a1, $at, 0x7372 (Delay Slot)
            SET_GPR_U64(ctx, 5, GPR_U64(ctx, 1) & (uint64_t)(uint16_t)29554);
            ctx->in_delay_slot = false;
            ctx->pc = 0x503DECu;
            return;
        }
    }
    ctx->pc = 0x4E5C20u;
label_4e5c20:
    // 0x4e5c20: 0x6432  tlt         $zero, $zero, 400
    ctx->pc = 0x4e5c20u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_4e5c24:
    // 0x4e5c24: 0x0  nop
    ctx->pc = 0x4e5c24u;
    // NOP
label_4e5c28:
    // 0x4e5c28: 0x0  nop
    ctx->pc = 0x4e5c28u;
    // NOP
label_4e5c2c:
    // 0x4e5c2c: 0x0  nop
    ctx->pc = 0x4e5c2cu;
    // NOP
label_4e5c30:
    // 0x4e5c30: 0x3a6b6170  xori        $t3, $s3, 0x6170
    ctx->pc = 0x4e5c30u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)24944);
label_4e5c34:
    // 0x4e5c34: 0x61746164  daddi       $s4, $t3, 0x6164
    ctx->pc = 0x4e5c34u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)24932; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 20, res); }
label_4e5c38:
    // 0x4e5c38: 0x6e61705c  ldr         $at, 0x705C($s3)
    ctx->pc = 0x4e5c38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 28764); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
label_4e5c3c:
    // 0x4e5c3c: 0x5c736c65  .word       0x5C736C65                   # bgtzl       $v1, . + 4 + (0x6C65 << 2) # 00130000 <InstrIdType: CPU_NORMAL>
label_4e5c40:
    if (ctx->pc == 0x4E5C40u) {
        ctx->pc = 0x4E5C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E5C3Cu;
        // 0x4e5c40: 0x696e696d  ldl         $t6, 0x696D($t3) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 11), 26989); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem << shift)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E5C44u;
        goto label_4e5c44;
    }
    ctx->pc = 0x4E5C3Cu;
    {
        const bool branch_taken_0x4e5c3c = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x4e5c3c) {
            ctx->pc = 0x4E5C40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E5C3Cu;
            // 0x4e5c40: 0x696e696d  ldl         $t6, 0x696D($t3) (Delay Slot)
            { uint32_t addr = ADD32(GPR_U32(ctx, 11), 26989); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem << shift)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x500DD4u;
            return;
        }
    }
    ctx->pc = 0x4E5C44u;
label_4e5c44:
    // 0x4e5c44: 0x656d6167  daddiu      $t5, $t3, 0x6167
    ctx->pc = 0x4e5c44u;
    SET_GPR_S64(ctx, 13, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)24935);
label_4e5c48:
    // 0x4e5c48: 0x6e705c73  ldr         $s0, 0x5C73($s3)
    ctx->pc = 0x4e5c48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 23667); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 16, (GPR_U64(ctx, 16) & keepMask) | (mem >> shift)); }
label_4e5c4c:
    // 0x4e5c4c: 0x6f625f6c  ldr         $v0, 0x5F6C($k1)
    ctx->pc = 0x4e5c4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 24428); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_4e5c50:
    // 0x4e5c50: 0x61656e6e  daddi       $a1, $t3, 0x6E6E
    ctx->pc = 0x4e5c50u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)28270; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 5, res); }
label_4e5c54:
    // 0x4e5c54: 0x6f697463  ldr         $t1, 0x7463($k1)
    ctx->pc = 0x4e5c54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 29795); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_4e5c58:
    // 0x4e5c58: 0x2e315f6e  sltiu       $s1, $s1, 0x5F6E
    ctx->pc = 0x4e5c58u;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)24430) ? 1 : 0);
label_4e5c5c:
    // 0x4e5c5c: 0x747874  teq         $v1, $s4, 481
    ctx->pc = 0x4e5c5cu;
    if (GPR_U64(ctx, 3) == GPR_U64(ctx, 20)) { runtime->handleTrap(rdram, ctx); }
label_4e5c60:
    // 0x4e5c60: 0x6081e8  .word       0x006081E8                   # mfsa        $s0 # 006001C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x4e5c60u;
    SET_GPR_U32(ctx, 16, ctx->sa);
label_4e5c64:
    // 0x4e5c64: 0x6081ec  .word       0x006081EC                   # dadd        $s0, $v1, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e5c64u;
    { int64_t a = (int64_t)GPR_S64(ctx, 3); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 16, r); }
label_4e5c68:
    // 0x4e5c68: 0x6081f0  tge         $v1, $zero, 519
    ctx->pc = 0x4e5c68u;
    if (GPR_S64(ctx, 3) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_4e5c6c:
    // 0x4e5c6c: 0x6081f4  teq         $v1, $zero, 519
    ctx->pc = 0x4e5c6cu;
    if (GPR_U64(ctx, 3) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_4e5c70:
    // 0x4e5c70: 0x6081f8  .word       0x006081F8                   # dsll        $s0, $zero, 7 # 00600000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e5c70u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) << 7);
label_4e5c74:
    // 0x4e5c74: 0x6081fc  .word       0x006081FC                   # dsll32      $s0, $zero, 7 # 00600000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e5c74u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) << (32 + 7));
label_4e5c78:
    // 0x4e5c78: 0x608200  .word       0x00608200                   # sll         $s0, $zero, 8 # 00600000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e5c78u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 0), 8));
label_4e5c7c:
    // 0x4e5c7c: 0x608204  .word       0x00608204                   # sllv        $s0, $zero, $v1 # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e5c7cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 3) & 0x1F));
label_4e5c80:
    // 0x4e5c80: 0x608208  .word       0x00608208                   # jr          $v1 # 00008200 <InstrIdType: CPU_SPECIAL>
label_4e5c84:
    if (ctx->pc == 0x4E5C84u) {
        ctx->pc = 0x4E5C88u;
        goto label_4e5c88;
    }
    ctx->pc = 0x4E5C80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E5C80u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x4E5C88u;
label_4e5c88:
    // 0x4e5c88: 0x0  nop
    ctx->pc = 0x4e5c88u;
    // NOP
label_4e5c8c:
    // 0x4e5c8c: 0x0  nop
    ctx->pc = 0x4e5c8cu;
    // NOP
    ctx->pc = 0x4e5c90u;
}
