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

// Function: sub_002F5398
// Address: 0x2f5398 - 0x2f6028
void sub_002F5398_0x2f5398(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F5398_0x2f5398");
#endif

    switch (ctx->pc) {
        case 0x2f5398u: goto label_2f5398;
        case 0x2f539cu: goto label_2f539c;
        case 0x2f53a0u: goto label_2f53a0;
        case 0x2f53a4u: goto label_2f53a4;
        case 0x2f53a8u: goto label_2f53a8;
        case 0x2f53acu: goto label_2f53ac;
        case 0x2f53b0u: goto label_2f53b0;
        case 0x2f53b4u: goto label_2f53b4;
        case 0x2f53b8u: goto label_2f53b8;
        case 0x2f53bcu: goto label_2f53bc;
        case 0x2f53c0u: goto label_2f53c0;
        case 0x2f53c4u: goto label_2f53c4;
        case 0x2f53c8u: goto label_2f53c8;
        case 0x2f53ccu: goto label_2f53cc;
        case 0x2f53d0u: goto label_2f53d0;
        case 0x2f53d4u: goto label_2f53d4;
        case 0x2f53d8u: goto label_2f53d8;
        case 0x2f53dcu: goto label_2f53dc;
        case 0x2f53e0u: goto label_2f53e0;
        case 0x2f53e4u: goto label_2f53e4;
        case 0x2f53e8u: goto label_2f53e8;
        case 0x2f53ecu: goto label_2f53ec;
        case 0x2f53f0u: goto label_2f53f0;
        case 0x2f53f4u: goto label_2f53f4;
        case 0x2f53f8u: goto label_2f53f8;
        case 0x2f53fcu: goto label_2f53fc;
        case 0x2f5400u: goto label_2f5400;
        case 0x2f5404u: goto label_2f5404;
        case 0x2f5408u: goto label_2f5408;
        case 0x2f540cu: goto label_2f540c;
        case 0x2f5410u: goto label_2f5410;
        case 0x2f5414u: goto label_2f5414;
        case 0x2f5418u: goto label_2f5418;
        case 0x2f541cu: goto label_2f541c;
        case 0x2f5420u: goto label_2f5420;
        case 0x2f5424u: goto label_2f5424;
        case 0x2f5428u: goto label_2f5428;
        case 0x2f542cu: goto label_2f542c;
        case 0x2f5430u: goto label_2f5430;
        case 0x2f5434u: goto label_2f5434;
        case 0x2f5438u: goto label_2f5438;
        case 0x2f543cu: goto label_2f543c;
        case 0x2f5440u: goto label_2f5440;
        case 0x2f5444u: goto label_2f5444;
        case 0x2f5448u: goto label_2f5448;
        case 0x2f544cu: goto label_2f544c;
        case 0x2f5450u: goto label_2f5450;
        case 0x2f5454u: goto label_2f5454;
        case 0x2f5458u: goto label_2f5458;
        case 0x2f545cu: goto label_2f545c;
        case 0x2f5460u: goto label_2f5460;
        case 0x2f5464u: goto label_2f5464;
        case 0x2f5468u: goto label_2f5468;
        case 0x2f546cu: goto label_2f546c;
        case 0x2f5470u: goto label_2f5470;
        case 0x2f5474u: goto label_2f5474;
        case 0x2f5478u: goto label_2f5478;
        case 0x2f547cu: goto label_2f547c;
        case 0x2f5480u: goto label_2f5480;
        case 0x2f5484u: goto label_2f5484;
        case 0x2f5488u: goto label_2f5488;
        case 0x2f548cu: goto label_2f548c;
        case 0x2f5490u: goto label_2f5490;
        case 0x2f5494u: goto label_2f5494;
        case 0x2f5498u: goto label_2f5498;
        case 0x2f549cu: goto label_2f549c;
        case 0x2f54a0u: goto label_2f54a0;
        case 0x2f54a4u: goto label_2f54a4;
        case 0x2f54a8u: goto label_2f54a8;
        case 0x2f54acu: goto label_2f54ac;
        case 0x2f54b0u: goto label_2f54b0;
        case 0x2f54b4u: goto label_2f54b4;
        case 0x2f54b8u: goto label_2f54b8;
        case 0x2f54bcu: goto label_2f54bc;
        case 0x2f54c0u: goto label_2f54c0;
        case 0x2f54c4u: goto label_2f54c4;
        case 0x2f54c8u: goto label_2f54c8;
        case 0x2f54ccu: goto label_2f54cc;
        case 0x2f54d0u: goto label_2f54d0;
        case 0x2f54d4u: goto label_2f54d4;
        case 0x2f54d8u: goto label_2f54d8;
        case 0x2f54dcu: goto label_2f54dc;
        case 0x2f54e0u: goto label_2f54e0;
        case 0x2f54e4u: goto label_2f54e4;
        case 0x2f54e8u: goto label_2f54e8;
        case 0x2f54ecu: goto label_2f54ec;
        case 0x2f54f0u: goto label_2f54f0;
        case 0x2f54f4u: goto label_2f54f4;
        case 0x2f54f8u: goto label_2f54f8;
        case 0x2f54fcu: goto label_2f54fc;
        case 0x2f5500u: goto label_2f5500;
        case 0x2f5504u: goto label_2f5504;
        case 0x2f5508u: goto label_2f5508;
        case 0x2f550cu: goto label_2f550c;
        case 0x2f5510u: goto label_2f5510;
        case 0x2f5514u: goto label_2f5514;
        case 0x2f5518u: goto label_2f5518;
        case 0x2f551cu: goto label_2f551c;
        case 0x2f5520u: goto label_2f5520;
        case 0x2f5524u: goto label_2f5524;
        case 0x2f5528u: goto label_2f5528;
        case 0x2f552cu: goto label_2f552c;
        case 0x2f5530u: goto label_2f5530;
        case 0x2f5534u: goto label_2f5534;
        case 0x2f5538u: goto label_2f5538;
        case 0x2f553cu: goto label_2f553c;
        case 0x2f5540u: goto label_2f5540;
        case 0x2f5544u: goto label_2f5544;
        case 0x2f5548u: goto label_2f5548;
        case 0x2f554cu: goto label_2f554c;
        case 0x2f5550u: goto label_2f5550;
        case 0x2f5554u: goto label_2f5554;
        case 0x2f5558u: goto label_2f5558;
        case 0x2f555cu: goto label_2f555c;
        case 0x2f5560u: goto label_2f5560;
        case 0x2f5564u: goto label_2f5564;
        case 0x2f5568u: goto label_2f5568;
        case 0x2f556cu: goto label_2f556c;
        case 0x2f5570u: goto label_2f5570;
        case 0x2f5574u: goto label_2f5574;
        case 0x2f5578u: goto label_2f5578;
        case 0x2f557cu: goto label_2f557c;
        case 0x2f5580u: goto label_2f5580;
        case 0x2f5584u: goto label_2f5584;
        case 0x2f5588u: goto label_2f5588;
        case 0x2f558cu: goto label_2f558c;
        case 0x2f5590u: goto label_2f5590;
        case 0x2f5594u: goto label_2f5594;
        case 0x2f5598u: goto label_2f5598;
        case 0x2f559cu: goto label_2f559c;
        case 0x2f55a0u: goto label_2f55a0;
        case 0x2f55a4u: goto label_2f55a4;
        case 0x2f55a8u: goto label_2f55a8;
        case 0x2f55acu: goto label_2f55ac;
        case 0x2f55b0u: goto label_2f55b0;
        case 0x2f55b4u: goto label_2f55b4;
        case 0x2f55b8u: goto label_2f55b8;
        case 0x2f55bcu: goto label_2f55bc;
        case 0x2f55c0u: goto label_2f55c0;
        case 0x2f55c4u: goto label_2f55c4;
        case 0x2f55c8u: goto label_2f55c8;
        case 0x2f55ccu: goto label_2f55cc;
        case 0x2f55d0u: goto label_2f55d0;
        case 0x2f55d4u: goto label_2f55d4;
        case 0x2f55d8u: goto label_2f55d8;
        case 0x2f55dcu: goto label_2f55dc;
        case 0x2f55e0u: goto label_2f55e0;
        case 0x2f55e4u: goto label_2f55e4;
        case 0x2f55e8u: goto label_2f55e8;
        case 0x2f55ecu: goto label_2f55ec;
        case 0x2f55f0u: goto label_2f55f0;
        case 0x2f55f4u: goto label_2f55f4;
        case 0x2f55f8u: goto label_2f55f8;
        case 0x2f55fcu: goto label_2f55fc;
        case 0x2f5600u: goto label_2f5600;
        case 0x2f5604u: goto label_2f5604;
        case 0x2f5608u: goto label_2f5608;
        case 0x2f560cu: goto label_2f560c;
        case 0x2f5610u: goto label_2f5610;
        case 0x2f5614u: goto label_2f5614;
        case 0x2f5618u: goto label_2f5618;
        case 0x2f561cu: goto label_2f561c;
        case 0x2f5620u: goto label_2f5620;
        case 0x2f5624u: goto label_2f5624;
        case 0x2f5628u: goto label_2f5628;
        case 0x2f562cu: goto label_2f562c;
        case 0x2f5630u: goto label_2f5630;
        case 0x2f5634u: goto label_2f5634;
        case 0x2f5638u: goto label_2f5638;
        case 0x2f563cu: goto label_2f563c;
        case 0x2f5640u: goto label_2f5640;
        case 0x2f5644u: goto label_2f5644;
        case 0x2f5648u: goto label_2f5648;
        case 0x2f564cu: goto label_2f564c;
        case 0x2f5650u: goto label_2f5650;
        case 0x2f5654u: goto label_2f5654;
        case 0x2f5658u: goto label_2f5658;
        case 0x2f565cu: goto label_2f565c;
        case 0x2f5660u: goto label_2f5660;
        case 0x2f5664u: goto label_2f5664;
        case 0x2f5668u: goto label_2f5668;
        case 0x2f566cu: goto label_2f566c;
        case 0x2f5670u: goto label_2f5670;
        case 0x2f5674u: goto label_2f5674;
        case 0x2f5678u: goto label_2f5678;
        case 0x2f567cu: goto label_2f567c;
        case 0x2f5680u: goto label_2f5680;
        case 0x2f5684u: goto label_2f5684;
        case 0x2f5688u: goto label_2f5688;
        case 0x2f568cu: goto label_2f568c;
        case 0x2f5690u: goto label_2f5690;
        case 0x2f5694u: goto label_2f5694;
        case 0x2f5698u: goto label_2f5698;
        case 0x2f569cu: goto label_2f569c;
        case 0x2f56a0u: goto label_2f56a0;
        case 0x2f56a4u: goto label_2f56a4;
        case 0x2f56a8u: goto label_2f56a8;
        case 0x2f56acu: goto label_2f56ac;
        case 0x2f56b0u: goto label_2f56b0;
        case 0x2f56b4u: goto label_2f56b4;
        case 0x2f56b8u: goto label_2f56b8;
        case 0x2f56bcu: goto label_2f56bc;
        case 0x2f56c0u: goto label_2f56c0;
        case 0x2f56c4u: goto label_2f56c4;
        case 0x2f56c8u: goto label_2f56c8;
        case 0x2f56ccu: goto label_2f56cc;
        case 0x2f56d0u: goto label_2f56d0;
        case 0x2f56d4u: goto label_2f56d4;
        case 0x2f56d8u: goto label_2f56d8;
        case 0x2f56dcu: goto label_2f56dc;
        case 0x2f56e0u: goto label_2f56e0;
        case 0x2f56e4u: goto label_2f56e4;
        case 0x2f56e8u: goto label_2f56e8;
        case 0x2f56ecu: goto label_2f56ec;
        case 0x2f56f0u: goto label_2f56f0;
        case 0x2f56f4u: goto label_2f56f4;
        case 0x2f56f8u: goto label_2f56f8;
        case 0x2f56fcu: goto label_2f56fc;
        case 0x2f5700u: goto label_2f5700;
        case 0x2f5704u: goto label_2f5704;
        case 0x2f5708u: goto label_2f5708;
        case 0x2f570cu: goto label_2f570c;
        case 0x2f5710u: goto label_2f5710;
        case 0x2f5714u: goto label_2f5714;
        case 0x2f5718u: goto label_2f5718;
        case 0x2f571cu: goto label_2f571c;
        case 0x2f5720u: goto label_2f5720;
        case 0x2f5724u: goto label_2f5724;
        case 0x2f5728u: goto label_2f5728;
        case 0x2f572cu: goto label_2f572c;
        case 0x2f5730u: goto label_2f5730;
        case 0x2f5734u: goto label_2f5734;
        case 0x2f5738u: goto label_2f5738;
        case 0x2f573cu: goto label_2f573c;
        case 0x2f5740u: goto label_2f5740;
        case 0x2f5744u: goto label_2f5744;
        case 0x2f5748u: goto label_2f5748;
        case 0x2f574cu: goto label_2f574c;
        case 0x2f5750u: goto label_2f5750;
        case 0x2f5754u: goto label_2f5754;
        case 0x2f5758u: goto label_2f5758;
        case 0x2f575cu: goto label_2f575c;
        case 0x2f5760u: goto label_2f5760;
        case 0x2f5764u: goto label_2f5764;
        case 0x2f5768u: goto label_2f5768;
        case 0x2f576cu: goto label_2f576c;
        case 0x2f5770u: goto label_2f5770;
        case 0x2f5774u: goto label_2f5774;
        case 0x2f5778u: goto label_2f5778;
        case 0x2f577cu: goto label_2f577c;
        case 0x2f5780u: goto label_2f5780;
        case 0x2f5784u: goto label_2f5784;
        case 0x2f5788u: goto label_2f5788;
        case 0x2f578cu: goto label_2f578c;
        case 0x2f5790u: goto label_2f5790;
        case 0x2f5794u: goto label_2f5794;
        case 0x2f5798u: goto label_2f5798;
        case 0x2f579cu: goto label_2f579c;
        case 0x2f57a0u: goto label_2f57a0;
        case 0x2f57a4u: goto label_2f57a4;
        case 0x2f57a8u: goto label_2f57a8;
        case 0x2f57acu: goto label_2f57ac;
        case 0x2f57b0u: goto label_2f57b0;
        case 0x2f57b4u: goto label_2f57b4;
        case 0x2f57b8u: goto label_2f57b8;
        case 0x2f57bcu: goto label_2f57bc;
        case 0x2f57c0u: goto label_2f57c0;
        case 0x2f57c4u: goto label_2f57c4;
        case 0x2f57c8u: goto label_2f57c8;
        case 0x2f57ccu: goto label_2f57cc;
        case 0x2f57d0u: goto label_2f57d0;
        case 0x2f57d4u: goto label_2f57d4;
        case 0x2f57d8u: goto label_2f57d8;
        case 0x2f57dcu: goto label_2f57dc;
        case 0x2f57e0u: goto label_2f57e0;
        case 0x2f57e4u: goto label_2f57e4;
        case 0x2f57e8u: goto label_2f57e8;
        case 0x2f57ecu: goto label_2f57ec;
        case 0x2f57f0u: goto label_2f57f0;
        case 0x2f57f4u: goto label_2f57f4;
        case 0x2f57f8u: goto label_2f57f8;
        case 0x2f57fcu: goto label_2f57fc;
        case 0x2f5800u: goto label_2f5800;
        case 0x2f5804u: goto label_2f5804;
        case 0x2f5808u: goto label_2f5808;
        case 0x2f580cu: goto label_2f580c;
        case 0x2f5810u: goto label_2f5810;
        case 0x2f5814u: goto label_2f5814;
        case 0x2f5818u: goto label_2f5818;
        case 0x2f581cu: goto label_2f581c;
        case 0x2f5820u: goto label_2f5820;
        case 0x2f5824u: goto label_2f5824;
        case 0x2f5828u: goto label_2f5828;
        case 0x2f582cu: goto label_2f582c;
        case 0x2f5830u: goto label_2f5830;
        case 0x2f5834u: goto label_2f5834;
        case 0x2f5838u: goto label_2f5838;
        case 0x2f583cu: goto label_2f583c;
        case 0x2f5840u: goto label_2f5840;
        case 0x2f5844u: goto label_2f5844;
        case 0x2f5848u: goto label_2f5848;
        case 0x2f584cu: goto label_2f584c;
        case 0x2f5850u: goto label_2f5850;
        case 0x2f5854u: goto label_2f5854;
        case 0x2f5858u: goto label_2f5858;
        case 0x2f585cu: goto label_2f585c;
        case 0x2f5860u: goto label_2f5860;
        case 0x2f5864u: goto label_2f5864;
        case 0x2f5868u: goto label_2f5868;
        case 0x2f586cu: goto label_2f586c;
        case 0x2f5870u: goto label_2f5870;
        case 0x2f5874u: goto label_2f5874;
        case 0x2f5878u: goto label_2f5878;
        case 0x2f587cu: goto label_2f587c;
        case 0x2f5880u: goto label_2f5880;
        case 0x2f5884u: goto label_2f5884;
        case 0x2f5888u: goto label_2f5888;
        case 0x2f588cu: goto label_2f588c;
        case 0x2f5890u: goto label_2f5890;
        case 0x2f5894u: goto label_2f5894;
        case 0x2f5898u: goto label_2f5898;
        case 0x2f589cu: goto label_2f589c;
        case 0x2f58a0u: goto label_2f58a0;
        case 0x2f58a4u: goto label_2f58a4;
        case 0x2f58a8u: goto label_2f58a8;
        case 0x2f58acu: goto label_2f58ac;
        case 0x2f58b0u: goto label_2f58b0;
        case 0x2f58b4u: goto label_2f58b4;
        case 0x2f58b8u: goto label_2f58b8;
        case 0x2f58bcu: goto label_2f58bc;
        case 0x2f58c0u: goto label_2f58c0;
        case 0x2f58c4u: goto label_2f58c4;
        case 0x2f58c8u: goto label_2f58c8;
        case 0x2f58ccu: goto label_2f58cc;
        case 0x2f58d0u: goto label_2f58d0;
        case 0x2f58d4u: goto label_2f58d4;
        case 0x2f58d8u: goto label_2f58d8;
        case 0x2f58dcu: goto label_2f58dc;
        case 0x2f58e0u: goto label_2f58e0;
        case 0x2f58e4u: goto label_2f58e4;
        case 0x2f58e8u: goto label_2f58e8;
        case 0x2f58ecu: goto label_2f58ec;
        case 0x2f58f0u: goto label_2f58f0;
        case 0x2f58f4u: goto label_2f58f4;
        case 0x2f58f8u: goto label_2f58f8;
        case 0x2f58fcu: goto label_2f58fc;
        case 0x2f5900u: goto label_2f5900;
        case 0x2f5904u: goto label_2f5904;
        case 0x2f5908u: goto label_2f5908;
        case 0x2f590cu: goto label_2f590c;
        case 0x2f5910u: goto label_2f5910;
        case 0x2f5914u: goto label_2f5914;
        case 0x2f5918u: goto label_2f5918;
        case 0x2f591cu: goto label_2f591c;
        case 0x2f5920u: goto label_2f5920;
        case 0x2f5924u: goto label_2f5924;
        case 0x2f5928u: goto label_2f5928;
        case 0x2f592cu: goto label_2f592c;
        case 0x2f5930u: goto label_2f5930;
        case 0x2f5934u: goto label_2f5934;
        case 0x2f5938u: goto label_2f5938;
        case 0x2f593cu: goto label_2f593c;
        case 0x2f5940u: goto label_2f5940;
        case 0x2f5944u: goto label_2f5944;
        case 0x2f5948u: goto label_2f5948;
        case 0x2f594cu: goto label_2f594c;
        case 0x2f5950u: goto label_2f5950;
        case 0x2f5954u: goto label_2f5954;
        case 0x2f5958u: goto label_2f5958;
        case 0x2f595cu: goto label_2f595c;
        case 0x2f5960u: goto label_2f5960;
        case 0x2f5964u: goto label_2f5964;
        case 0x2f5968u: goto label_2f5968;
        case 0x2f596cu: goto label_2f596c;
        case 0x2f5970u: goto label_2f5970;
        case 0x2f5974u: goto label_2f5974;
        case 0x2f5978u: goto label_2f5978;
        case 0x2f597cu: goto label_2f597c;
        case 0x2f5980u: goto label_2f5980;
        case 0x2f5984u: goto label_2f5984;
        case 0x2f5988u: goto label_2f5988;
        case 0x2f598cu: goto label_2f598c;
        case 0x2f5990u: goto label_2f5990;
        case 0x2f5994u: goto label_2f5994;
        case 0x2f5998u: goto label_2f5998;
        case 0x2f599cu: goto label_2f599c;
        case 0x2f59a0u: goto label_2f59a0;
        case 0x2f59a4u: goto label_2f59a4;
        case 0x2f59a8u: goto label_2f59a8;
        case 0x2f59acu: goto label_2f59ac;
        case 0x2f59b0u: goto label_2f59b0;
        case 0x2f59b4u: goto label_2f59b4;
        case 0x2f59b8u: goto label_2f59b8;
        case 0x2f59bcu: goto label_2f59bc;
        case 0x2f59c0u: goto label_2f59c0;
        case 0x2f59c4u: goto label_2f59c4;
        case 0x2f59c8u: goto label_2f59c8;
        case 0x2f59ccu: goto label_2f59cc;
        case 0x2f59d0u: goto label_2f59d0;
        case 0x2f59d4u: goto label_2f59d4;
        case 0x2f59d8u: goto label_2f59d8;
        case 0x2f59dcu: goto label_2f59dc;
        case 0x2f59e0u: goto label_2f59e0;
        case 0x2f59e4u: goto label_2f59e4;
        case 0x2f59e8u: goto label_2f59e8;
        case 0x2f59ecu: goto label_2f59ec;
        case 0x2f59f0u: goto label_2f59f0;
        case 0x2f59f4u: goto label_2f59f4;
        case 0x2f59f8u: goto label_2f59f8;
        case 0x2f59fcu: goto label_2f59fc;
        case 0x2f5a00u: goto label_2f5a00;
        case 0x2f5a04u: goto label_2f5a04;
        case 0x2f5a08u: goto label_2f5a08;
        case 0x2f5a0cu: goto label_2f5a0c;
        case 0x2f5a10u: goto label_2f5a10;
        case 0x2f5a14u: goto label_2f5a14;
        case 0x2f5a18u: goto label_2f5a18;
        case 0x2f5a1cu: goto label_2f5a1c;
        case 0x2f5a20u: goto label_2f5a20;
        case 0x2f5a24u: goto label_2f5a24;
        case 0x2f5a28u: goto label_2f5a28;
        case 0x2f5a2cu: goto label_2f5a2c;
        case 0x2f5a30u: goto label_2f5a30;
        case 0x2f5a34u: goto label_2f5a34;
        case 0x2f5a38u: goto label_2f5a38;
        case 0x2f5a3cu: goto label_2f5a3c;
        case 0x2f5a40u: goto label_2f5a40;
        case 0x2f5a44u: goto label_2f5a44;
        case 0x2f5a48u: goto label_2f5a48;
        case 0x2f5a4cu: goto label_2f5a4c;
        case 0x2f5a50u: goto label_2f5a50;
        case 0x2f5a54u: goto label_2f5a54;
        case 0x2f5a58u: goto label_2f5a58;
        case 0x2f5a5cu: goto label_2f5a5c;
        case 0x2f5a60u: goto label_2f5a60;
        case 0x2f5a64u: goto label_2f5a64;
        case 0x2f5a68u: goto label_2f5a68;
        case 0x2f5a6cu: goto label_2f5a6c;
        case 0x2f5a70u: goto label_2f5a70;
        case 0x2f5a74u: goto label_2f5a74;
        case 0x2f5a78u: goto label_2f5a78;
        case 0x2f5a7cu: goto label_2f5a7c;
        case 0x2f5a80u: goto label_2f5a80;
        case 0x2f5a84u: goto label_2f5a84;
        case 0x2f5a88u: goto label_2f5a88;
        case 0x2f5a8cu: goto label_2f5a8c;
        case 0x2f5a90u: goto label_2f5a90;
        case 0x2f5a94u: goto label_2f5a94;
        case 0x2f5a98u: goto label_2f5a98;
        case 0x2f5a9cu: goto label_2f5a9c;
        case 0x2f5aa0u: goto label_2f5aa0;
        case 0x2f5aa4u: goto label_2f5aa4;
        case 0x2f5aa8u: goto label_2f5aa8;
        case 0x2f5aacu: goto label_2f5aac;
        case 0x2f5ab0u: goto label_2f5ab0;
        case 0x2f5ab4u: goto label_2f5ab4;
        case 0x2f5ab8u: goto label_2f5ab8;
        case 0x2f5abcu: goto label_2f5abc;
        case 0x2f5ac0u: goto label_2f5ac0;
        case 0x2f5ac4u: goto label_2f5ac4;
        case 0x2f5ac8u: goto label_2f5ac8;
        case 0x2f5accu: goto label_2f5acc;
        case 0x2f5ad0u: goto label_2f5ad0;
        case 0x2f5ad4u: goto label_2f5ad4;
        case 0x2f5ad8u: goto label_2f5ad8;
        case 0x2f5adcu: goto label_2f5adc;
        case 0x2f5ae0u: goto label_2f5ae0;
        case 0x2f5ae4u: goto label_2f5ae4;
        case 0x2f5ae8u: goto label_2f5ae8;
        case 0x2f5aecu: goto label_2f5aec;
        case 0x2f5af0u: goto label_2f5af0;
        case 0x2f5af4u: goto label_2f5af4;
        case 0x2f5af8u: goto label_2f5af8;
        case 0x2f5afcu: goto label_2f5afc;
        case 0x2f5b00u: goto label_2f5b00;
        case 0x2f5b04u: goto label_2f5b04;
        case 0x2f5b08u: goto label_2f5b08;
        case 0x2f5b0cu: goto label_2f5b0c;
        case 0x2f5b10u: goto label_2f5b10;
        case 0x2f5b14u: goto label_2f5b14;
        case 0x2f5b18u: goto label_2f5b18;
        case 0x2f5b1cu: goto label_2f5b1c;
        case 0x2f5b20u: goto label_2f5b20;
        case 0x2f5b24u: goto label_2f5b24;
        case 0x2f5b28u: goto label_2f5b28;
        case 0x2f5b2cu: goto label_2f5b2c;
        case 0x2f5b30u: goto label_2f5b30;
        case 0x2f5b34u: goto label_2f5b34;
        case 0x2f5b38u: goto label_2f5b38;
        case 0x2f5b3cu: goto label_2f5b3c;
        case 0x2f5b40u: goto label_2f5b40;
        case 0x2f5b44u: goto label_2f5b44;
        case 0x2f5b48u: goto label_2f5b48;
        case 0x2f5b4cu: goto label_2f5b4c;
        case 0x2f5b50u: goto label_2f5b50;
        case 0x2f5b54u: goto label_2f5b54;
        case 0x2f5b58u: goto label_2f5b58;
        case 0x2f5b5cu: goto label_2f5b5c;
        case 0x2f5b60u: goto label_2f5b60;
        case 0x2f5b64u: goto label_2f5b64;
        case 0x2f5b68u: goto label_2f5b68;
        case 0x2f5b6cu: goto label_2f5b6c;
        case 0x2f5b70u: goto label_2f5b70;
        case 0x2f5b74u: goto label_2f5b74;
        case 0x2f5b78u: goto label_2f5b78;
        case 0x2f5b7cu: goto label_2f5b7c;
        case 0x2f5b80u: goto label_2f5b80;
        case 0x2f5b84u: goto label_2f5b84;
        case 0x2f5b88u: goto label_2f5b88;
        case 0x2f5b8cu: goto label_2f5b8c;
        case 0x2f5b90u: goto label_2f5b90;
        case 0x2f5b94u: goto label_2f5b94;
        case 0x2f5b98u: goto label_2f5b98;
        case 0x2f5b9cu: goto label_2f5b9c;
        case 0x2f5ba0u: goto label_2f5ba0;
        case 0x2f5ba4u: goto label_2f5ba4;
        case 0x2f5ba8u: goto label_2f5ba8;
        case 0x2f5bacu: goto label_2f5bac;
        case 0x2f5bb0u: goto label_2f5bb0;
        case 0x2f5bb4u: goto label_2f5bb4;
        case 0x2f5bb8u: goto label_2f5bb8;
        case 0x2f5bbcu: goto label_2f5bbc;
        case 0x2f5bc0u: goto label_2f5bc0;
        case 0x2f5bc4u: goto label_2f5bc4;
        case 0x2f5bc8u: goto label_2f5bc8;
        case 0x2f5bccu: goto label_2f5bcc;
        case 0x2f5bd0u: goto label_2f5bd0;
        case 0x2f5bd4u: goto label_2f5bd4;
        case 0x2f5bd8u: goto label_2f5bd8;
        case 0x2f5bdcu: goto label_2f5bdc;
        case 0x2f5be0u: goto label_2f5be0;
        case 0x2f5be4u: goto label_2f5be4;
        case 0x2f5be8u: goto label_2f5be8;
        case 0x2f5becu: goto label_2f5bec;
        case 0x2f5bf0u: goto label_2f5bf0;
        case 0x2f5bf4u: goto label_2f5bf4;
        case 0x2f5bf8u: goto label_2f5bf8;
        case 0x2f5bfcu: goto label_2f5bfc;
        case 0x2f5c00u: goto label_2f5c00;
        case 0x2f5c04u: goto label_2f5c04;
        case 0x2f5c08u: goto label_2f5c08;
        case 0x2f5c0cu: goto label_2f5c0c;
        case 0x2f5c10u: goto label_2f5c10;
        case 0x2f5c14u: goto label_2f5c14;
        case 0x2f5c18u: goto label_2f5c18;
        case 0x2f5c1cu: goto label_2f5c1c;
        case 0x2f5c20u: goto label_2f5c20;
        case 0x2f5c24u: goto label_2f5c24;
        case 0x2f5c28u: goto label_2f5c28;
        case 0x2f5c2cu: goto label_2f5c2c;
        case 0x2f5c30u: goto label_2f5c30;
        case 0x2f5c34u: goto label_2f5c34;
        case 0x2f5c38u: goto label_2f5c38;
        case 0x2f5c3cu: goto label_2f5c3c;
        case 0x2f5c40u: goto label_2f5c40;
        case 0x2f5c44u: goto label_2f5c44;
        case 0x2f5c48u: goto label_2f5c48;
        case 0x2f5c4cu: goto label_2f5c4c;
        case 0x2f5c50u: goto label_2f5c50;
        case 0x2f5c54u: goto label_2f5c54;
        case 0x2f5c58u: goto label_2f5c58;
        case 0x2f5c5cu: goto label_2f5c5c;
        case 0x2f5c60u: goto label_2f5c60;
        case 0x2f5c64u: goto label_2f5c64;
        case 0x2f5c68u: goto label_2f5c68;
        case 0x2f5c6cu: goto label_2f5c6c;
        case 0x2f5c70u: goto label_2f5c70;
        case 0x2f5c74u: goto label_2f5c74;
        case 0x2f5c78u: goto label_2f5c78;
        case 0x2f5c7cu: goto label_2f5c7c;
        case 0x2f5c80u: goto label_2f5c80;
        case 0x2f5c84u: goto label_2f5c84;
        case 0x2f5c88u: goto label_2f5c88;
        case 0x2f5c8cu: goto label_2f5c8c;
        case 0x2f5c90u: goto label_2f5c90;
        case 0x2f5c94u: goto label_2f5c94;
        case 0x2f5c98u: goto label_2f5c98;
        case 0x2f5c9cu: goto label_2f5c9c;
        case 0x2f5ca0u: goto label_2f5ca0;
        case 0x2f5ca4u: goto label_2f5ca4;
        case 0x2f5ca8u: goto label_2f5ca8;
        case 0x2f5cacu: goto label_2f5cac;
        case 0x2f5cb0u: goto label_2f5cb0;
        case 0x2f5cb4u: goto label_2f5cb4;
        case 0x2f5cb8u: goto label_2f5cb8;
        case 0x2f5cbcu: goto label_2f5cbc;
        case 0x2f5cc0u: goto label_2f5cc0;
        case 0x2f5cc4u: goto label_2f5cc4;
        case 0x2f5cc8u: goto label_2f5cc8;
        case 0x2f5cccu: goto label_2f5ccc;
        case 0x2f5cd0u: goto label_2f5cd0;
        case 0x2f5cd4u: goto label_2f5cd4;
        case 0x2f5cd8u: goto label_2f5cd8;
        case 0x2f5cdcu: goto label_2f5cdc;
        case 0x2f5ce0u: goto label_2f5ce0;
        case 0x2f5ce4u: goto label_2f5ce4;
        case 0x2f5ce8u: goto label_2f5ce8;
        case 0x2f5cecu: goto label_2f5cec;
        case 0x2f5cf0u: goto label_2f5cf0;
        case 0x2f5cf4u: goto label_2f5cf4;
        case 0x2f5cf8u: goto label_2f5cf8;
        case 0x2f5cfcu: goto label_2f5cfc;
        case 0x2f5d00u: goto label_2f5d00;
        case 0x2f5d04u: goto label_2f5d04;
        case 0x2f5d08u: goto label_2f5d08;
        case 0x2f5d0cu: goto label_2f5d0c;
        case 0x2f5d10u: goto label_2f5d10;
        case 0x2f5d14u: goto label_2f5d14;
        case 0x2f5d18u: goto label_2f5d18;
        case 0x2f5d1cu: goto label_2f5d1c;
        case 0x2f5d20u: goto label_2f5d20;
        case 0x2f5d24u: goto label_2f5d24;
        case 0x2f5d28u: goto label_2f5d28;
        case 0x2f5d2cu: goto label_2f5d2c;
        case 0x2f5d30u: goto label_2f5d30;
        case 0x2f5d34u: goto label_2f5d34;
        case 0x2f5d38u: goto label_2f5d38;
        case 0x2f5d3cu: goto label_2f5d3c;
        case 0x2f5d40u: goto label_2f5d40;
        case 0x2f5d44u: goto label_2f5d44;
        case 0x2f5d48u: goto label_2f5d48;
        case 0x2f5d4cu: goto label_2f5d4c;
        case 0x2f5d50u: goto label_2f5d50;
        case 0x2f5d54u: goto label_2f5d54;
        case 0x2f5d58u: goto label_2f5d58;
        case 0x2f5d5cu: goto label_2f5d5c;
        case 0x2f5d60u: goto label_2f5d60;
        case 0x2f5d64u: goto label_2f5d64;
        case 0x2f5d68u: goto label_2f5d68;
        case 0x2f5d6cu: goto label_2f5d6c;
        case 0x2f5d70u: goto label_2f5d70;
        case 0x2f5d74u: goto label_2f5d74;
        case 0x2f5d78u: goto label_2f5d78;
        case 0x2f5d7cu: goto label_2f5d7c;
        case 0x2f5d80u: goto label_2f5d80;
        case 0x2f5d84u: goto label_2f5d84;
        case 0x2f5d88u: goto label_2f5d88;
        case 0x2f5d8cu: goto label_2f5d8c;
        case 0x2f5d90u: goto label_2f5d90;
        case 0x2f5d94u: goto label_2f5d94;
        case 0x2f5d98u: goto label_2f5d98;
        case 0x2f5d9cu: goto label_2f5d9c;
        case 0x2f5da0u: goto label_2f5da0;
        case 0x2f5da4u: goto label_2f5da4;
        case 0x2f5da8u: goto label_2f5da8;
        case 0x2f5dacu: goto label_2f5dac;
        case 0x2f5db0u: goto label_2f5db0;
        case 0x2f5db4u: goto label_2f5db4;
        case 0x2f5db8u: goto label_2f5db8;
        case 0x2f5dbcu: goto label_2f5dbc;
        case 0x2f5dc0u: goto label_2f5dc0;
        case 0x2f5dc4u: goto label_2f5dc4;
        case 0x2f5dc8u: goto label_2f5dc8;
        case 0x2f5dccu: goto label_2f5dcc;
        case 0x2f5dd0u: goto label_2f5dd0;
        case 0x2f5dd4u: goto label_2f5dd4;
        case 0x2f5dd8u: goto label_2f5dd8;
        case 0x2f5ddcu: goto label_2f5ddc;
        case 0x2f5de0u: goto label_2f5de0;
        case 0x2f5de4u: goto label_2f5de4;
        case 0x2f5de8u: goto label_2f5de8;
        case 0x2f5decu: goto label_2f5dec;
        case 0x2f5df0u: goto label_2f5df0;
        case 0x2f5df4u: goto label_2f5df4;
        case 0x2f5df8u: goto label_2f5df8;
        case 0x2f5dfcu: goto label_2f5dfc;
        case 0x2f5e00u: goto label_2f5e00;
        case 0x2f5e04u: goto label_2f5e04;
        case 0x2f5e08u: goto label_2f5e08;
        case 0x2f5e0cu: goto label_2f5e0c;
        case 0x2f5e10u: goto label_2f5e10;
        case 0x2f5e14u: goto label_2f5e14;
        case 0x2f5e18u: goto label_2f5e18;
        case 0x2f5e1cu: goto label_2f5e1c;
        case 0x2f5e20u: goto label_2f5e20;
        case 0x2f5e24u: goto label_2f5e24;
        case 0x2f5e28u: goto label_2f5e28;
        case 0x2f5e2cu: goto label_2f5e2c;
        case 0x2f5e30u: goto label_2f5e30;
        case 0x2f5e34u: goto label_2f5e34;
        case 0x2f5e38u: goto label_2f5e38;
        case 0x2f5e3cu: goto label_2f5e3c;
        case 0x2f5e40u: goto label_2f5e40;
        case 0x2f5e44u: goto label_2f5e44;
        case 0x2f5e48u: goto label_2f5e48;
        case 0x2f5e4cu: goto label_2f5e4c;
        case 0x2f5e50u: goto label_2f5e50;
        case 0x2f5e54u: goto label_2f5e54;
        case 0x2f5e58u: goto label_2f5e58;
        case 0x2f5e5cu: goto label_2f5e5c;
        case 0x2f5e60u: goto label_2f5e60;
        case 0x2f5e64u: goto label_2f5e64;
        case 0x2f5e68u: goto label_2f5e68;
        case 0x2f5e6cu: goto label_2f5e6c;
        case 0x2f5e70u: goto label_2f5e70;
        case 0x2f5e74u: goto label_2f5e74;
        case 0x2f5e78u: goto label_2f5e78;
        case 0x2f5e7cu: goto label_2f5e7c;
        case 0x2f5e80u: goto label_2f5e80;
        case 0x2f5e84u: goto label_2f5e84;
        case 0x2f5e88u: goto label_2f5e88;
        case 0x2f5e8cu: goto label_2f5e8c;
        case 0x2f5e90u: goto label_2f5e90;
        case 0x2f5e94u: goto label_2f5e94;
        case 0x2f5e98u: goto label_2f5e98;
        case 0x2f5e9cu: goto label_2f5e9c;
        case 0x2f5ea0u: goto label_2f5ea0;
        case 0x2f5ea4u: goto label_2f5ea4;
        case 0x2f5ea8u: goto label_2f5ea8;
        case 0x2f5eacu: goto label_2f5eac;
        case 0x2f5eb0u: goto label_2f5eb0;
        case 0x2f5eb4u: goto label_2f5eb4;
        case 0x2f5eb8u: goto label_2f5eb8;
        case 0x2f5ebcu: goto label_2f5ebc;
        case 0x2f5ec0u: goto label_2f5ec0;
        case 0x2f5ec4u: goto label_2f5ec4;
        case 0x2f5ec8u: goto label_2f5ec8;
        case 0x2f5eccu: goto label_2f5ecc;
        case 0x2f5ed0u: goto label_2f5ed0;
        case 0x2f5ed4u: goto label_2f5ed4;
        case 0x2f5ed8u: goto label_2f5ed8;
        case 0x2f5edcu: goto label_2f5edc;
        case 0x2f5ee0u: goto label_2f5ee0;
        case 0x2f5ee4u: goto label_2f5ee4;
        case 0x2f5ee8u: goto label_2f5ee8;
        case 0x2f5eecu: goto label_2f5eec;
        case 0x2f5ef0u: goto label_2f5ef0;
        case 0x2f5ef4u: goto label_2f5ef4;
        case 0x2f5ef8u: goto label_2f5ef8;
        case 0x2f5efcu: goto label_2f5efc;
        case 0x2f5f00u: goto label_2f5f00;
        case 0x2f5f04u: goto label_2f5f04;
        case 0x2f5f08u: goto label_2f5f08;
        case 0x2f5f0cu: goto label_2f5f0c;
        case 0x2f5f10u: goto label_2f5f10;
        case 0x2f5f14u: goto label_2f5f14;
        case 0x2f5f18u: goto label_2f5f18;
        case 0x2f5f1cu: goto label_2f5f1c;
        case 0x2f5f20u: goto label_2f5f20;
        case 0x2f5f24u: goto label_2f5f24;
        case 0x2f5f28u: goto label_2f5f28;
        case 0x2f5f2cu: goto label_2f5f2c;
        case 0x2f5f30u: goto label_2f5f30;
        case 0x2f5f34u: goto label_2f5f34;
        case 0x2f5f38u: goto label_2f5f38;
        case 0x2f5f3cu: goto label_2f5f3c;
        case 0x2f5f40u: goto label_2f5f40;
        case 0x2f5f44u: goto label_2f5f44;
        case 0x2f5f48u: goto label_2f5f48;
        case 0x2f5f4cu: goto label_2f5f4c;
        case 0x2f5f50u: goto label_2f5f50;
        case 0x2f5f54u: goto label_2f5f54;
        case 0x2f5f58u: goto label_2f5f58;
        case 0x2f5f5cu: goto label_2f5f5c;
        case 0x2f5f60u: goto label_2f5f60;
        case 0x2f5f64u: goto label_2f5f64;
        case 0x2f5f68u: goto label_2f5f68;
        case 0x2f5f6cu: goto label_2f5f6c;
        case 0x2f5f70u: goto label_2f5f70;
        case 0x2f5f74u: goto label_2f5f74;
        case 0x2f5f78u: goto label_2f5f78;
        case 0x2f5f7cu: goto label_2f5f7c;
        case 0x2f5f80u: goto label_2f5f80;
        case 0x2f5f84u: goto label_2f5f84;
        case 0x2f5f88u: goto label_2f5f88;
        case 0x2f5f8cu: goto label_2f5f8c;
        case 0x2f5f90u: goto label_2f5f90;
        case 0x2f5f94u: goto label_2f5f94;
        case 0x2f5f98u: goto label_2f5f98;
        case 0x2f5f9cu: goto label_2f5f9c;
        case 0x2f5fa0u: goto label_2f5fa0;
        case 0x2f5fa4u: goto label_2f5fa4;
        case 0x2f5fa8u: goto label_2f5fa8;
        case 0x2f5facu: goto label_2f5fac;
        case 0x2f5fb0u: goto label_2f5fb0;
        case 0x2f5fb4u: goto label_2f5fb4;
        case 0x2f5fb8u: goto label_2f5fb8;
        case 0x2f5fbcu: goto label_2f5fbc;
        case 0x2f5fc0u: goto label_2f5fc0;
        case 0x2f5fc4u: goto label_2f5fc4;
        case 0x2f5fc8u: goto label_2f5fc8;
        case 0x2f5fccu: goto label_2f5fcc;
        case 0x2f5fd0u: goto label_2f5fd0;
        case 0x2f5fd4u: goto label_2f5fd4;
        case 0x2f5fd8u: goto label_2f5fd8;
        case 0x2f5fdcu: goto label_2f5fdc;
        case 0x2f5fe0u: goto label_2f5fe0;
        case 0x2f5fe4u: goto label_2f5fe4;
        case 0x2f5fe8u: goto label_2f5fe8;
        case 0x2f5fecu: goto label_2f5fec;
        case 0x2f5ff0u: goto label_2f5ff0;
        case 0x2f5ff4u: goto label_2f5ff4;
        case 0x2f5ff8u: goto label_2f5ff8;
        case 0x2f5ffcu: goto label_2f5ffc;
        case 0x2f6000u: goto label_2f6000;
        case 0x2f6004u: goto label_2f6004;
        case 0x2f6008u: goto label_2f6008;
        case 0x2f600cu: goto label_2f600c;
        case 0x2f6010u: goto label_2f6010;
        case 0x2f6014u: goto label_2f6014;
        case 0x2f6018u: goto label_2f6018;
        case 0x2f601cu: goto label_2f601c;
        case 0x2f6020u: goto label_2f6020;
        case 0x2f6024u: goto label_2f6024;
        default: break;
    }

    ctx->pc = 0x2f5398u;

label_2f5398:
    // 0x2f5398: 0x27bdfd10  addiu       $sp, $sp, -0x2F0
    ctx->pc = 0x2f5398u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966544));
label_2f539c:
    // 0x2f539c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2f539cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f53a0:
    // 0x2f53a0: 0xffb002a0  sd          $s0, 0x2A0($sp)
    ctx->pc = 0x2f53a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 672), GPR_U64(ctx, 16));
label_2f53a4:
    // 0x2f53a4: 0xffb102a8  sd          $s1, 0x2A8($sp)
    ctx->pc = 0x2f53a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 680), GPR_U64(ctx, 17));
label_2f53a8:
    // 0x2f53a8: 0xffb302b8  sd          $s3, 0x2B8($sp)
    ctx->pc = 0x2f53a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 696), GPR_U64(ctx, 19));
label_2f53ac:
    // 0x2f53ac: 0xffb402c0  sd          $s4, 0x2C0($sp)
    ctx->pc = 0x2f53acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 704), GPR_U64(ctx, 20));
label_2f53b0:
    // 0x2f53b0: 0xffb602d0  sd          $s6, 0x2D0($sp)
    ctx->pc = 0x2f53b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 720), GPR_U64(ctx, 22));
label_2f53b4:
    // 0x2f53b4: 0xffbf02e8  sd          $ra, 0x2E8($sp)
    ctx->pc = 0x2f53b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 744), GPR_U64(ctx, 31));
label_2f53b8:
    // 0x2f53b8: 0xafa00264  sw          $zero, 0x264($sp)
    ctx->pc = 0x2f53b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 612), GPR_U32(ctx, 0));
label_2f53bc:
    // 0x2f53bc: 0xafa00260  sw          $zero, 0x260($sp)
    ctx->pc = 0x2f53bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 608), GPR_U32(ctx, 0));
label_2f53c0:
    // 0x2f53c0: 0xffb202b0  sd          $s2, 0x2B0($sp)
    ctx->pc = 0x2f53c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 688), GPR_U64(ctx, 18));
label_2f53c4:
    // 0x2f53c4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2f53c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2f53c8:
    // 0x2f53c8: 0xffb502c8  sd          $s5, 0x2C8($sp)
    ctx->pc = 0x2f53c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 712), GPR_U64(ctx, 21));
label_2f53cc:
    // 0x2f53cc: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x2f53ccu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2f53d0:
    // 0x2f53d0: 0xffb702d8  sd          $s7, 0x2D8($sp)
    ctx->pc = 0x2f53d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 728), GPR_U64(ctx, 23));
label_2f53d4:
    // 0x2f53d4: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x2f53d4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2f53d8:
    // 0x2f53d8: 0xffbe02e0  sd          $fp, 0x2E0($sp)
    ctx->pc = 0x2f53d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 736), GPR_U64(ctx, 30));
label_2f53dc:
    // 0x2f53dc: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x2f53dcu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f53e0:
    // 0x2f53e0: 0x82a30000  lb          $v1, 0x0($s5)
    ctx->pc = 0x2f53e0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
label_2f53e4:
    // 0x2f53e4: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x2f53e4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_2f53e8:
    // 0x2f53e8: 0x10600302  beqz        $v1, . + 4 + (0x302 << 2)
label_2f53ec:
    if (ctx->pc == 0x2F53ECu) {
        ctx->pc = 0x2F53ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F53E8u;
        // 0x2f53ec: 0x8fa20260  lw          $v0, 0x260($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F53F0u;
        goto label_2f53f0;
    }
    ctx->pc = 0x2F53E8u;
    {
        const bool branch_taken_0x2f53e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F53ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F53E8u;
        // 0x2f53ec: 0x8fa20260  lw          $v0, 0x260($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f53e8) {
            ctx->pc = 0x2F5FF4u;
            goto label_2f5ff4;
        }
    }
    ctx->pc = 0x2F53F0u;
label_2f53f0:
    // 0x2f53f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f53f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f53f4:
    // 0x2f53f4: 0x14420022  bne         $v0, $v0, . + 4 + (0x22 << 2)
label_2f53f8:
    if (ctx->pc == 0x2F53F8u) {
        ctx->pc = 0x2F53F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F53F4u;
        // 0x2f53f8: 0x24020025  addiu       $v0, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F53FCu;
        goto label_2f53fc;
    }
    ctx->pc = 0x2F53F4u;
    {
        const bool branch_taken_0x2f53f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 2));
        ctx->pc = 0x2F53F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F53F4u;
        // 0x2f53f8: 0x24020025  addiu       $v0, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f53f4) {
            ctx->pc = 0x2F5480u;
            goto label_2f5480;
        }
    }
    ctx->pc = 0x2F53FCu;
label_2f53fc:
    // 0x2f53fc: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2f53fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_2f5400:
    // 0x2f5400: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f5400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2f5404:
    // 0x2f5404: 0x90428f81  lbu         $v0, -0x707F($v0)
    ctx->pc = 0x2f5404u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294938497)));
label_2f5408:
    // 0x2f5408: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x2f5408u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_2f540c:
    // 0x2f540c: 0x5040001c  beql        $v0, $zero, . + 4 + (0x1C << 2)
label_2f5410:
    if (ctx->pc == 0x2F5410u) {
        ctx->pc = 0x2F5410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F540Cu;
        // 0x2f5410: 0x24020025  addiu       $v0, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5414u;
        goto label_2f5414;
    }
    ctx->pc = 0x2F540Cu;
    {
        const bool branch_taken_0x2f540c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f540c) {
            ctx->pc = 0x2F5410u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F540Cu;
            // 0x2f5410: 0x24020025  addiu       $v0, $zero, 0x25 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F5480u;
            goto label_2f5480;
        }
    }
    ctx->pc = 0x2F5414u;
label_2f5414:
    // 0x2f5414: 0x10000008  b           . + 4 + (0x8 << 2)
label_2f5418:
    if (ctx->pc == 0x2F5418u) {
        ctx->pc = 0x2F5418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5414u;
        // 0x2f5418: 0x8e420004  lw          $v0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F541Cu;
        goto label_2f541c;
    }
    ctx->pc = 0x2F5414u;
    {
        const bool branch_taken_0x2f5414 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5414u;
        // 0x2f5418: 0x8e420004  lw          $v0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5414) {
            ctx->pc = 0x2F5438u;
            goto label_2f5438;
        }
    }
    ctx->pc = 0x2F541Cu;
label_2f541c:
    // 0x2f541c: 0x0  nop
    ctx->pc = 0x2f541cu;
    // NOP
label_2f5420:
    // 0x2f5420: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x2f5420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_2f5424:
    // 0x2f5424: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x2f5424u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_2f5428:
    // 0x2f5428: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x2f5428u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_2f542c:
    // 0x2f542c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2f542cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_2f5430:
    // 0x2f5430: 0xae430004  sw          $v1, 0x4($s2)
    ctx->pc = 0x2f5430u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
label_2f5434:
    // 0x2f5434: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x2f5434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_2f5438:
    // 0x2f5438: 0x5c400007  bgtzl       $v0, . + 4 + (0x7 << 2)
label_2f543c:
    if (ctx->pc == 0x2F543Cu) {
        ctx->pc = 0x2F543Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5438u;
        // 0x2f543c: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5440u;
        goto label_2f5440;
    }
    ctx->pc = 0x2F5438u;
    {
        const bool branch_taken_0x2f5438 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x2f5438) {
            ctx->pc = 0x2F543Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F5438u;
            // 0x2f543c: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F5458u;
            goto label_2f5458;
        }
    }
    ctx->pc = 0x2F5440u;
label_2f5440:
    // 0x2f5440: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2f5440u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2f5444:
    // 0x2f5444: 0xc0bc0e0  jal         func_2F0380
label_2f5448:
    if (ctx->pc == 0x2F5448u) {
        ctx->pc = 0x2F5448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5444u;
        // 0x2f5448: 0x7fa80290  sq          $t0, 0x290($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 656), GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F544Cu;
        goto label_2f544c;
    }
    ctx->pc = 0x2F5444u;
    SET_GPR_U32(ctx, 31, 0x2F544Cu);
    ctx->pc = 0x2F5448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5444u;
    // 0x2f5448: 0x7fa80290  sq          $t0, 0x290($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 656), GPR_VEC(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F0380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0380u, 0x2F5444u, 0x2F544Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F544Cu;
label_2f544c:
    // 0x2f544c: 0x144002e8  bnez        $v0, . + 4 + (0x2E8 << 2)
label_2f5450:
    if (ctx->pc == 0x2F5450u) {
        ctx->pc = 0x2F5450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F544Cu;
        // 0x2f5450: 0x7ba80290  lq          $t0, 0x290($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 656)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5454u;
        goto label_2f5454;
    }
    ctx->pc = 0x2F544Cu;
    {
        const bool branch_taken_0x2f544c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F5450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F544Cu;
        // 0x2f5450: 0x7ba80290  lq          $t0, 0x290($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 656)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f544c) {
            ctx->pc = 0x2F5FF0u;
            goto label_2f5ff0;
        }
    }
    ctx->pc = 0x2F5454u;
label_2f5454:
    // 0x2f5454: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2f5454u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2f5458:
    // 0x2f5458: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x2f5458u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_2f545c:
    // 0x2f545c: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2f545cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_2f5460:
    // 0x2f5460: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f5460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2f5464:
    // 0x2f5464: 0x90428f81  lbu         $v0, -0x707F($v0)
    ctx->pc = 0x2f5464u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294938497)));
label_2f5468:
    // 0x2f5468: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x2f5468u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_2f546c:
    // 0x2f546c: 0x5440ffec  bnel        $v0, $zero, . + 4 + (-0x14 << 2)
label_2f5470:
    if (ctx->pc == 0x2F5470u) {
        ctx->pc = 0x2F5470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F546Cu;
        // 0x2f5470: 0x8e430004  lw          $v1, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5474u;
        goto label_2f5474;
    }
    ctx->pc = 0x2F546Cu;
    {
        const bool branch_taken_0x2f546c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f546c) {
            ctx->pc = 0x2F5470u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F546Cu;
            // 0x2f5470: 0x8e430004  lw          $v1, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F5420u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f5420;
        }
    }
    ctx->pc = 0x2F5474u;
label_2f5474:
    // 0x2f5474: 0x1000ffdb  b           . + 4 + (-0x25 << 2)
label_2f5478:
    if (ctx->pc == 0x2F5478u) {
        ctx->pc = 0x2F5478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5474u;
        // 0x2f5478: 0x82a30000  lb          $v1, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F547Cu;
        goto label_2f547c;
    }
    ctx->pc = 0x2F5474u;
    {
        const bool branch_taken_0x2f5474 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5474u;
        // 0x2f5478: 0x82a30000  lb          $v1, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5474) {
            ctx->pc = 0x2F53E4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f53e4;
        }
    }
    ctx->pc = 0x2F547Cu;
label_2f547c:
    // 0x2f547c: 0x0  nop
    ctx->pc = 0x2f547cu;
    // NOP
label_2f5480:
    // 0x2f5480: 0x1462000e  bne         $v1, $v0, . + 4 + (0xE << 2)
label_2f5484:
    if (ctx->pc == 0x2F5484u) {
        ctx->pc = 0x2F5484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5480u;
        // 0x2f5484: 0x26b1ffff  addiu       $s1, $s5, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5488u;
        goto label_2f5488;
    }
    ctx->pc = 0x2F5480u;
    {
        const bool branch_taken_0x2f5480 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2F5484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5480u;
        // 0x2f5484: 0x26b1ffff  addiu       $s1, $s5, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5480) {
            ctx->pc = 0x2F54BCu;
            goto label_2f54bc;
        }
    }
    ctx->pc = 0x2F5488u;
label_2f5488:
    // 0x2f5488: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2f5488u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f548c:
    // 0x2f548c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2f548cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f5490:
    // 0x2f5490: 0x82b00000  lb          $s0, 0x0($s5)
    ctx->pc = 0x2f5490u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
label_2f5494:
    // 0x2f5494: 0x2e020079  sltiu       $v0, $s0, 0x79
    ctx->pc = 0x2f5494u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)121) ? 1 : 0);
label_2f5498:
    // 0x2f5498: 0x1040007f  beqz        $v0, . + 4 + (0x7F << 2)
label_2f549c:
    if (ctx->pc == 0x2F549Cu) {
        ctx->pc = 0x2F549Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5498u;
        // 0x2f549c: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F54A0u;
        goto label_2f54a0;
    }
    ctx->pc = 0x2F5498u;
    {
        const bool branch_taken_0x2f5498 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F549Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5498u;
        // 0x2f549c: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5498) {
            ctx->pc = 0x2F5698u;
            goto label_2f5698;
        }
    }
    ctx->pc = 0x2F54A0u;
label_2f54a0:
    // 0x2f54a0: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x2f54a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_2f54a4:
    // 0x2f54a4: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x2f54a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_2f54a8:
    // 0x2f54a8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2f54a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2f54ac:
    // 0x2f54ac: 0x8c6395b0  lw          $v1, -0x6A50($v1)
    ctx->pc = 0x2f54acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294940080)));
label_2f54b0:
    // 0x2f54b0: 0x600008  jr          $v1
label_2f54b4:
    if (ctx->pc == 0x2F54B4u) {
        ctx->pc = 0x2F54B8u;
        goto label_2f54b8;
    }
    ctx->pc = 0x2F54B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2F54B8u: goto label_2f54b8;
            case 0x2F5520u: goto label_2f5520;
            case 0x2F5528u: goto label_2f5528;
            case 0x2F5530u: goto label_2f5530;
            case 0x2F5538u: goto label_2f5538;
            case 0x2F5540u: goto label_2f5540;
            case 0x2F5558u: goto label_2f5558;
            case 0x2F555Cu: goto label_2f555c;
            case 0x2F5570u: goto label_2f5570;
            case 0x2F5588u: goto label_2f5588;
            case 0x2F558Cu: goto label_2f558c;
            case 0x2F55A8u: goto label_2f55a8;
            case 0x2F55C0u: goto label_2f55c0;
            case 0x2F55D0u: goto label_2f55d0;
            case 0x2F55D8u: goto label_2f55d8;
            case 0x2F55E0u: goto label_2f55e0;
            case 0x2F5608u: goto label_2f5608;
            case 0x2F5618u: goto label_2f5618;
            case 0x2F5638u: goto label_2f5638;
            case 0x2F5690u: goto label_2f5690;
            case 0x2F5698u: goto label_2f5698;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F54B0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2F54B8u;
label_2f54b8:
    // 0x2f54b8: 0x26b1ffff  addiu       $s1, $s5, -0x1
    ctx->pc = 0x2f54b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
label_2f54bc:
    // 0x2f54bc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2f54bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f54c0:
    // 0x2f54c0: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x2f54c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_2f54c4:
    // 0x2f54c4: 0x5c400007  bgtzl       $v0, . + 4 + (0x7 << 2)
label_2f54c8:
    if (ctx->pc == 0x2F54C8u) {
        ctx->pc = 0x2F54C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F54C4u;
        // 0x2f54c8: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F54CCu;
        goto label_2f54cc;
    }
    ctx->pc = 0x2F54C4u;
    {
        const bool branch_taken_0x2f54c4 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x2f54c4) {
            ctx->pc = 0x2F54C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F54C4u;
            // 0x2f54c8: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F54E4u;
            goto label_2f54e4;
        }
    }
    ctx->pc = 0x2F54CCu;
label_2f54cc:
    // 0x2f54cc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2f54ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2f54d0:
    // 0x2f54d0: 0xc0bc0e0  jal         func_2F0380
label_2f54d4:
    if (ctx->pc == 0x2F54D4u) {
        ctx->pc = 0x2F54D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F54D0u;
        // 0x2f54d4: 0x7fa80290  sq          $t0, 0x290($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 656), GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F54D8u;
        goto label_2f54d8;
    }
    ctx->pc = 0x2F54D0u;
    SET_GPR_U32(ctx, 31, 0x2F54D8u);
    ctx->pc = 0x2F54D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F54D0u;
    // 0x2f54d4: 0x7fa80290  sq          $t0, 0x290($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 656), GPR_VEC(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F0380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0380u, 0x2F54D0u, 0x2F54D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F54D8u;
label_2f54d8:
    // 0x2f54d8: 0x144002c1  bnez        $v0, . + 4 + (0x2C1 << 2)
label_2f54dc:
    if (ctx->pc == 0x2F54DCu) {
        ctx->pc = 0x2F54DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F54D8u;
        // 0x2f54dc: 0x7ba80290  lq          $t0, 0x290($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 656)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F54E0u;
        goto label_2f54e0;
    }
    ctx->pc = 0x2F54D8u;
    {
        const bool branch_taken_0x2f54d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F54DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F54D8u;
        // 0x2f54dc: 0x7ba80290  lq          $t0, 0x290($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 656)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f54d8) {
            ctx->pc = 0x2F5FE0u;
            goto label_2f5fe0;
        }
    }
    ctx->pc = 0x2F54E0u;
label_2f54e0:
    // 0x2f54e0: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2f54e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2f54e4:
    // 0x2f54e4: 0x82230000  lb          $v1, 0x0($s1)
    ctx->pc = 0x2f54e4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_2f54e8:
    // 0x2f54e8: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x2f54e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_2f54ec:
    // 0x2f54ec: 0x144302c1  bne         $v0, $v1, . + 4 + (0x2C1 << 2)
label_2f54f0:
    if (ctx->pc == 0x2F54F0u) {
        ctx->pc = 0x2F54F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F54ECu;
        // 0x2f54f0: 0x8fa20260  lw          $v0, 0x260($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F54F4u;
        goto label_2f54f4;
    }
    ctx->pc = 0x2F54ECu;
    {
        const bool branch_taken_0x2f54ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2F54F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F54ECu;
        // 0x2f54f0: 0x8fa20260  lw          $v0, 0x260($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f54ec) {
            ctx->pc = 0x2F5FF4u;
            goto label_2f5ff4;
        }
    }
    ctx->pc = 0x2F54F4u;
label_2f54f4:
    // 0x2f54f4: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x2f54f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_2f54f8:
    // 0x2f54f8: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x2f54f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_2f54fc:
    // 0x2f54fc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2f54fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2f5500:
    // 0x2f5500: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x2f5500u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_2f5504:
    // 0x2f5504: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2f5504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_2f5508:
    // 0x2f5508: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x2f5508u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_2f550c:
    // 0x2f550c: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x2f550cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
label_2f5510:
    // 0x2f5510: 0x1a00ffeb  blez        $s0, . + 4 + (-0x15 << 2)
label_2f5514:
    if (ctx->pc == 0x2F5514u) {
        ctx->pc = 0x2F5514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5510u;
        // 0x2f5514: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5518u;
        goto label_2f5518;
    }
    ctx->pc = 0x2F5510u;
    {
        const bool branch_taken_0x2f5510 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x2F5514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5510u;
        // 0x2f5514: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5510) {
            ctx->pc = 0x2F54C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f54c0;
        }
    }
    ctx->pc = 0x2F5518u;
label_2f5518:
    // 0x2f5518: 0x1000ffb2  b           . + 4 + (-0x4E << 2)
label_2f551c:
    if (ctx->pc == 0x2F551Cu) {
        ctx->pc = 0x2F551Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5518u;
        // 0x2f551c: 0x82a30000  lb          $v1, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5520u;
        goto label_2f5520;
    }
    ctx->pc = 0x2F5518u;
    {
        const bool branch_taken_0x2f5518 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F551Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5518u;
        // 0x2f551c: 0x82a30000  lb          $v1, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5518) {
            ctx->pc = 0x2F53E4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f53e4;
        }
    }
    ctx->pc = 0x2F5520u;
label_2f5520:
    // 0x2f5520: 0x1000ffdb  b           . + 4 + (-0x25 << 2)
label_2f5524:
    if (ctx->pc == 0x2F5524u) {
        ctx->pc = 0x2F5524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5520u;
        // 0x2f5524: 0x36310008  ori         $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5528u;
        goto label_2f5528;
    }
    ctx->pc = 0x2F5520u;
    {
        const bool branch_taken_0x2f5520 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5520u;
        // 0x2f5524: 0x36310008  ori         $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5520) {
            ctx->pc = 0x2F5490u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f5490;
        }
    }
    ctx->pc = 0x2F5528u;
label_2f5528:
    // 0x2f5528: 0x1000ffd9  b           . + 4 + (-0x27 << 2)
label_2f552c:
    if (ctx->pc == 0x2F552Cu) {
        ctx->pc = 0x2F552Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5528u;
        // 0x2f552c: 0x36310001  ori         $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5530u;
        goto label_2f5530;
    }
    ctx->pc = 0x2F5528u;
    {
        const bool branch_taken_0x2f5528 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F552Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5528u;
        // 0x2f552c: 0x36310001  ori         $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5528) {
            ctx->pc = 0x2F5490u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f5490;
        }
    }
    ctx->pc = 0x2F5530u;
label_2f5530:
    // 0x2f5530: 0x1000ffd7  b           . + 4 + (-0x29 << 2)
label_2f5534:
    if (ctx->pc == 0x2F5534u) {
        ctx->pc = 0x2F5534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5530u;
        // 0x2f5534: 0x36310002  ori         $s1, $s1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5538u;
        goto label_2f5538;
    }
    ctx->pc = 0x2F5530u;
    {
        const bool branch_taken_0x2f5530 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5530u;
        // 0x2f5534: 0x36310002  ori         $s1, $s1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5530) {
            ctx->pc = 0x2F5490u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f5490;
        }
    }
    ctx->pc = 0x2F5538u;
label_2f5538:
    // 0x2f5538: 0x1000ffd5  b           . + 4 + (-0x2B << 2)
label_2f553c:
    if (ctx->pc == 0x2F553Cu) {
        ctx->pc = 0x2F553Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5538u;
        // 0x2f553c: 0x36310004  ori         $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5540u;
        goto label_2f5540;
    }
    ctx->pc = 0x2F5538u;
    {
        const bool branch_taken_0x2f5538 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F553Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5538u;
        // 0x2f553c: 0x36310004  ori         $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5538) {
            ctx->pc = 0x2F5490u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f5490;
        }
    }
    ctx->pc = 0x2F5540u;
label_2f5540:
    // 0x2f5540: 0x141080  sll         $v0, $s4, 2
    ctx->pc = 0x2f5540u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
label_2f5544:
    // 0x2f5544: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x2f5544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_2f5548:
    // 0x2f5548: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2f5548u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_2f554c:
    // 0x2f554c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2f554cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_2f5550:
    // 0x2f5550: 0x1000ffcf  b           . + 4 + (-0x31 << 2)
label_2f5554:
    if (ctx->pc == 0x2F5554u) {
        ctx->pc = 0x2F5554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5550u;
        // 0x2f5554: 0x2454ffd0  addiu       $s4, $v0, -0x30 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967248));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5558u;
        goto label_2f5558;
    }
    ctx->pc = 0x2F5550u;
    {
        const bool branch_taken_0x2f5550 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5550u;
        // 0x2f5554: 0x2454ffd0  addiu       $s4, $v0, -0x30 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967248));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5550) {
            ctx->pc = 0x2F5490u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f5490;
        }
    }
    ctx->pc = 0x2F5558u;
label_2f5558:
    // 0x2f5558: 0x36310001  ori         $s1, $s1, 0x1
    ctx->pc = 0x2f5558u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)1);
label_2f555c:
    // 0x2f555c: 0x3c02002f  lui         $v0, 0x2F
    ctx->pc = 0x2f555cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)47 << 16));
label_2f5560:
    // 0x2f5560: 0x24100003  addiu       $s0, $zero, 0x3
    ctx->pc = 0x2f5560u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2f5564:
    // 0x2f5564: 0x10000013  b           . + 4 + (0x13 << 2)
label_2f5568:
    if (ctx->pc == 0x2F5568u) {
        ctx->pc = 0x2F5568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5564u;
        // 0x2f5568: 0x244233a0  addiu       $v0, $v0, 0x33A0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13216));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F556Cu;
        goto label_2f556c;
    }
    ctx->pc = 0x2F5564u;
    {
        const bool branch_taken_0x2f5564 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5564u;
        // 0x2f5568: 0x244233a0  addiu       $v0, $v0, 0x33A0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13216));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5564) {
            ctx->pc = 0x2F55B4u;
            goto label_2f55b4;
        }
    }
    ctx->pc = 0x2F556Cu;
label_2f556c:
    // 0x2f556c: 0x0  nop
    ctx->pc = 0x2f556cu;
    // NOP
label_2f5570:
    // 0x2f5570: 0x3c02002f  lui         $v0, 0x2F
    ctx->pc = 0x2f5570u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)47 << 16));
label_2f5574:
    // 0x2f5574: 0x24100003  addiu       $s0, $zero, 0x3
    ctx->pc = 0x2f5574u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2f5578:
    // 0x2f5578: 0x244233a0  addiu       $v0, $v0, 0x33A0
    ctx->pc = 0x2f5578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13216));
label_2f557c:
    // 0x2f557c: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x2f557cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f5580:
    // 0x2f5580: 0x1000004f  b           . + 4 + (0x4F << 2)
label_2f5584:
    if (ctx->pc == 0x2F5584u) {
        ctx->pc = 0x2F5584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5580u;
        // 0x2f5584: 0xafa20264  sw          $v0, 0x264($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 612), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5588u;
        goto label_2f5588;
    }
    ctx->pc = 0x2F5580u;
    {
        const bool branch_taken_0x2f5580 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5580u;
        // 0x2f5584: 0xafa20264  sw          $v0, 0x264($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 612), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5580) {
            ctx->pc = 0x2F56C0u;
            goto label_2f56c0;
        }
    }
    ctx->pc = 0x2F5588u;
label_2f5588:
    // 0x2f5588: 0x36310001  ori         $s1, $s1, 0x1
    ctx->pc = 0x2f5588u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)1);
label_2f558c:
    // 0x2f558c: 0x3c02002f  lui         $v0, 0x2F
    ctx->pc = 0x2f558cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)47 << 16));
label_2f5590:
    // 0x2f5590: 0x24100003  addiu       $s0, $zero, 0x3
    ctx->pc = 0x2f5590u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2f5594:
    // 0x2f5594: 0x24423600  addiu       $v0, $v0, 0x3600
    ctx->pc = 0x2f5594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13824));
label_2f5598:
    // 0x2f5598: 0x241e0008  addiu       $fp, $zero, 0x8
    ctx->pc = 0x2f5598u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_2f559c:
    // 0x2f559c: 0x10000048  b           . + 4 + (0x48 << 2)
label_2f55a0:
    if (ctx->pc == 0x2F55A0u) {
        ctx->pc = 0x2F55A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F559Cu;
        // 0x2f55a0: 0xafa20264  sw          $v0, 0x264($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 612), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F55A4u;
        goto label_2f55a4;
    }
    ctx->pc = 0x2F559Cu;
    {
        const bool branch_taken_0x2f559c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F55A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F559Cu;
        // 0x2f55a0: 0xafa20264  sw          $v0, 0x264($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 612), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f559c) {
            ctx->pc = 0x2F56C0u;
            goto label_2f56c0;
        }
    }
    ctx->pc = 0x2F55A4u;
label_2f55a4:
    // 0x2f55a4: 0x0  nop
    ctx->pc = 0x2f55a4u;
    // NOP
label_2f55a8:
    // 0x2f55a8: 0x3c02002f  lui         $v0, 0x2F
    ctx->pc = 0x2f55a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)47 << 16));
label_2f55ac:
    // 0x2f55ac: 0x24100003  addiu       $s0, $zero, 0x3
    ctx->pc = 0x2f55acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2f55b0:
    // 0x2f55b0: 0x24423600  addiu       $v0, $v0, 0x3600
    ctx->pc = 0x2f55b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13824));
label_2f55b4:
    // 0x2f55b4: 0x241e000a  addiu       $fp, $zero, 0xA
    ctx->pc = 0x2f55b4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_2f55b8:
    // 0x2f55b8: 0x10000041  b           . + 4 + (0x41 << 2)
label_2f55bc:
    if (ctx->pc == 0x2F55BCu) {
        ctx->pc = 0x2F55BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F55B8u;
        // 0x2f55bc: 0xafa20264  sw          $v0, 0x264($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 612), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F55C0u;
        goto label_2f55c0;
    }
    ctx->pc = 0x2F55B8u;
    {
        const bool branch_taken_0x2f55b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F55BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F55B8u;
        // 0x2f55bc: 0xafa20264  sw          $v0, 0x264($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 612), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f55b8) {
            ctx->pc = 0x2F56C0u;
            goto label_2f56c0;
        }
    }
    ctx->pc = 0x2F55C0u;
label_2f55c0:
    // 0x2f55c0: 0x3c02002f  lui         $v0, 0x2F
    ctx->pc = 0x2f55c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)47 << 16));
label_2f55c4:
    // 0x2f55c4: 0x10000016  b           . + 4 + (0x16 << 2)
label_2f55c8:
    if (ctx->pc == 0x2F55C8u) {
        ctx->pc = 0x2F55C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F55C4u;
        // 0x2f55c8: 0x36310100  ori         $s1, $s1, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)256);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F55CCu;
        goto label_2f55cc;
    }
    ctx->pc = 0x2F55C4u;
    {
        const bool branch_taken_0x2f55c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F55C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F55C4u;
        // 0x2f55c8: 0x36310100  ori         $s1, $s1, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)256);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f55c4) {
            ctx->pc = 0x2F5620u;
            goto label_2f5620;
        }
    }
    ctx->pc = 0x2F55CCu;
label_2f55cc:
    // 0x2f55cc: 0x0  nop
    ctx->pc = 0x2f55ccu;
    // NOP
label_2f55d0:
    // 0x2f55d0: 0x1000003b  b           . + 4 + (0x3B << 2)
label_2f55d4:
    if (ctx->pc == 0x2F55D4u) {
        ctx->pc = 0x2F55D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F55D0u;
        // 0x2f55d4: 0x24100004  addiu       $s0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F55D8u;
        goto label_2f55d8;
    }
    ctx->pc = 0x2F55D0u;
    {
        const bool branch_taken_0x2f55d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F55D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F55D0u;
        // 0x2f55d4: 0x24100004  addiu       $s0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f55d0) {
            ctx->pc = 0x2F56C0u;
            goto label_2f56c0;
        }
    }
    ctx->pc = 0x2F55D8u;
label_2f55d8:
    // 0x2f55d8: 0x10000039  b           . + 4 + (0x39 << 2)
label_2f55dc:
    if (ctx->pc == 0x2F55DCu) {
        ctx->pc = 0x2F55DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F55D8u;
        // 0x2f55dc: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F55E0u;
        goto label_2f55e0;
    }
    ctx->pc = 0x2F55D8u;
    {
        const bool branch_taken_0x2f55d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F55DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F55D8u;
        // 0x2f55dc: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f55d8) {
            ctx->pc = 0x2F56C0u;
            goto label_2f56c0;
        }
    }
    ctx->pc = 0x2F55E0u;
label_2f55e0:
    // 0x2f55e0: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2f55e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2f55e4:
    // 0x2f55e4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2f55e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2f55e8:
    // 0x2f55e8: 0xc0bd80a  jal         func_2F6028
label_2f55ec:
    if (ctx->pc == 0x2F55ECu) {
        ctx->pc = 0x2F55ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F55E8u;
        // 0x2f55ec: 0x7fa80290  sq          $t0, 0x290($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 656), GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F55F0u;
        goto label_2f55f0;
    }
    ctx->pc = 0x2F55E8u;
    SET_GPR_U32(ctx, 31, 0x2F55F0u);
    ctx->pc = 0x2F55ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F55E8u;
    // 0x2f55ec: 0x7fa80290  sq          $t0, 0x290($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 656), GPR_VEC(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F6028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F6028u, 0x2F55E8u, 0x2F55F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F55F0u;
label_2f55f0:
    // 0x2f55f0: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x2f55f0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f55f4:
    // 0x2f55f4: 0x36310020  ori         $s1, $s1, 0x20
    ctx->pc = 0x2f55f4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)32);
label_2f55f8:
    // 0x2f55f8: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x2f55f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f55fc:
    // 0x2f55fc: 0x10000030  b           . + 4 + (0x30 << 2)
label_2f5600:
    if (ctx->pc == 0x2F5600u) {
        ctx->pc = 0x2F5600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F55FCu;
        // 0x2f5600: 0x7ba80290  lq          $t0, 0x290($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 656)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5604u;
        goto label_2f5604;
    }
    ctx->pc = 0x2F55FCu;
    {
        const bool branch_taken_0x2f55fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F55FCu;
        // 0x2f5600: 0x7ba80290  lq          $t0, 0x290($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 656)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f55fc) {
            ctx->pc = 0x2F56C0u;
            goto label_2f56c0;
        }
    }
    ctx->pc = 0x2F5604u;
label_2f5604:
    // 0x2f5604: 0x0  nop
    ctx->pc = 0x2f5604u;
    // NOP
label_2f5608:
    // 0x2f5608: 0x36310020  ori         $s1, $s1, 0x20
    ctx->pc = 0x2f5608u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)32);
label_2f560c:
    // 0x2f560c: 0x1000002c  b           . + 4 + (0x2C << 2)
label_2f5610:
    if (ctx->pc == 0x2F5610u) {
        ctx->pc = 0x2F5610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F560Cu;
        // 0x2f5610: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5614u;
        goto label_2f5614;
    }
    ctx->pc = 0x2F560Cu;
    {
        const bool branch_taken_0x2f560c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F560Cu;
        // 0x2f5610: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f560c) {
            ctx->pc = 0x2F56C0u;
            goto label_2f56c0;
        }
    }
    ctx->pc = 0x2F5614u;
label_2f5614:
    // 0x2f5614: 0x0  nop
    ctx->pc = 0x2f5614u;
    // NOP
label_2f5618:
    // 0x2f5618: 0x3c02002f  lui         $v0, 0x2F
    ctx->pc = 0x2f5618u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)47 << 16));
label_2f561c:
    // 0x2f561c: 0x36310110  ori         $s1, $s1, 0x110
    ctx->pc = 0x2f561cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)272);
label_2f5620:
    // 0x2f5620: 0x24423600  addiu       $v0, $v0, 0x3600
    ctx->pc = 0x2f5620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13824));
label_2f5624:
    // 0x2f5624: 0x24100003  addiu       $s0, $zero, 0x3
    ctx->pc = 0x2f5624u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2f5628:
    // 0x2f5628: 0xafa20264  sw          $v0, 0x264($sp)
    ctx->pc = 0x2f5628u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 612), GPR_U32(ctx, 2));
label_2f562c:
    // 0x2f562c: 0x10000024  b           . + 4 + (0x24 << 2)
label_2f5630:
    if (ctx->pc == 0x2F5630u) {
        ctx->pc = 0x2F5630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F562Cu;
        // 0x2f5630: 0x241e0010  addiu       $fp, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5634u;
        goto label_2f5634;
    }
    ctx->pc = 0x2F562Cu;
    {
        const bool branch_taken_0x2f562c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F562Cu;
        // 0x2f5630: 0x241e0010  addiu       $fp, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f562c) {
            ctx->pc = 0x2F56C0u;
            goto label_2f56c0;
        }
    }
    ctx->pc = 0x2F5634u;
label_2f5634:
    // 0x2f5634: 0x0  nop
    ctx->pc = 0x2f5634u;
    // NOP
label_2f5638:
    // 0x2f5638: 0x32220008  andi        $v0, $s1, 0x8
    ctx->pc = 0x2f5638u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)8);
label_2f563c:
    // 0x2f563c: 0x5440ff69  bnel        $v0, $zero, . + 4 + (-0x97 << 2)
label_2f5640:
    if (ctx->pc == 0x2F5640u) {
        ctx->pc = 0x2F5640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F563Cu;
        // 0x2f5640: 0x82a30000  lb          $v1, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5644u;
        goto label_2f5644;
    }
    ctx->pc = 0x2F563Cu;
    {
        const bool branch_taken_0x2f563c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f563c) {
            ctx->pc = 0x2F5640u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F563Cu;
            // 0x2f5640: 0x82a30000  lb          $v1, 0x0($s5) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F53E4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f53e4;
        }
    }
    ctx->pc = 0x2F5644u;
label_2f5644:
    // 0x2f5644: 0x32220004  andi        $v0, $s1, 0x4
    ctx->pc = 0x2f5644u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)4);
label_2f5648:
    // 0x2f5648: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_2f564c:
    if (ctx->pc == 0x2F564Cu) {
        ctx->pc = 0x2F564Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5648u;
        // 0x2f564c: 0x32220001  andi        $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5650u;
        goto label_2f5650;
    }
    ctx->pc = 0x2F5648u;
    {
        const bool branch_taken_0x2f5648 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f5648) {
            ctx->pc = 0x2F564Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F5648u;
            // 0x2f564c: 0x32220001  andi        $v0, $s1, 0x1 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F5668u;
            goto label_2f5668;
        }
    }
    ctx->pc = 0x2F5650u;
label_2f5650:
    // 0x2f5650: 0x2e0102d  daddu       $v0, $s7, $zero
    ctx->pc = 0x2f5650u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_2f5654:
    // 0x2f5654: 0x26f70008  addiu       $s7, $s7, 0x8
    ctx->pc = 0x2f5654u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 8));
label_2f5658:
    // 0x2f5658: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2f5658u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2f565c:
    // 0x2f565c: 0x1000ff60  b           . + 4 + (-0xA0 << 2)
label_2f5660:
    if (ctx->pc == 0x2F5660u) {
        ctx->pc = 0x2F5660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F565Cu;
        // 0x2f5660: 0xa4680000  sh          $t0, 0x0($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5664u;
        goto label_2f5664;
    }
    ctx->pc = 0x2F565Cu;
    {
        const bool branch_taken_0x2f565c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F565Cu;
        // 0x2f5660: 0xa4680000  sh          $t0, 0x0($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f565c) {
            ctx->pc = 0x2F53E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f53e0;
        }
    }
    ctx->pc = 0x2F5664u;
label_2f5664:
    // 0x2f5664: 0x0  nop
    ctx->pc = 0x2f5664u;
    // NOP
label_2f5668:
    // 0x2f5668: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2f566c:
    if (ctx->pc == 0x2F566Cu) {
        ctx->pc = 0x2F566Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5668u;
        // 0x2f566c: 0x2e0102d  daddu       $v0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5670u;
        goto label_2f5670;
    }
    ctx->pc = 0x2F5668u;
    {
        const bool branch_taken_0x2f5668 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F566Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5668u;
        // 0x2f566c: 0x2e0102d  daddu       $v0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5668) {
            ctx->pc = 0x2F5680u;
            goto label_2f5680;
        }
    }
    ctx->pc = 0x2F5670u;
label_2f5670:
    // 0x2f5670: 0x26f70008  addiu       $s7, $s7, 0x8
    ctx->pc = 0x2f5670u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 8));
label_2f5674:
    // 0x2f5674: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2f5674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2f5678:
    // 0x2f5678: 0x1000ff59  b           . + 4 + (-0xA7 << 2)
label_2f567c:
    if (ctx->pc == 0x2F567Cu) {
        ctx->pc = 0x2F567Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5678u;
        // 0x2f567c: 0xfc480000  sd          $t0, 0x0($v0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5680u;
        goto label_2f5680;
    }
    ctx->pc = 0x2F5678u;
    {
        const bool branch_taken_0x2f5678 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F567Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5678u;
        // 0x2f567c: 0xfc480000  sd          $t0, 0x0($v0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5678) {
            ctx->pc = 0x2F53E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f53e0;
        }
    }
    ctx->pc = 0x2F5680u;
label_2f5680:
    // 0x2f5680: 0x26f70008  addiu       $s7, $s7, 0x8
    ctx->pc = 0x2f5680u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 8));
label_2f5684:
    // 0x2f5684: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2f5684u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2f5688:
    // 0x2f5688: 0x1000ff55  b           . + 4 + (-0xAB << 2)
label_2f568c:
    if (ctx->pc == 0x2F568Cu) {
        ctx->pc = 0x2F568Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5688u;
        // 0x2f568c: 0xac680000  sw          $t0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5690u;
        goto label_2f5690;
    }
    ctx->pc = 0x2F5688u;
    {
        const bool branch_taken_0x2f5688 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F568Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5688u;
        // 0x2f568c: 0xac680000  sw          $t0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5688) {
            ctx->pc = 0x2F53E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f53e0;
        }
    }
    ctx->pc = 0x2F5690u;
label_2f5690:
    // 0x2f5690: 0x10000258  b           . + 4 + (0x258 << 2)
label_2f5694:
    if (ctx->pc == 0x2F5694u) {
        ctx->pc = 0x2F5694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5690u;
        // 0x2f5694: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5698u;
        goto label_2f5698;
    }
    ctx->pc = 0x2F5690u;
    {
        const bool branch_taken_0x2f5690 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5690u;
        // 0x2f5694: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5690) {
            ctx->pc = 0x2F5FF4u;
            goto label_2f5ff4;
        }
    }
    ctx->pc = 0x2F5698u;
label_2f5698:
    // 0x2f5698: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2f5698u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_2f569c:
    // 0x2f569c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2f569cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_2f56a0:
    // 0x2f56a0: 0x90428f81  lbu         $v0, -0x707F($v0)
    ctx->pc = 0x2f56a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294938497)));
label_2f56a4:
    // 0x2f56a4: 0x24100003  addiu       $s0, $zero, 0x3
    ctx->pc = 0x2f56a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2f56a8:
    // 0x2f56a8: 0x3c03002f  lui         $v1, 0x2F
    ctx->pc = 0x2f56a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)47 << 16));
label_2f56ac:
    // 0x2f56ac: 0x241e000a  addiu       $fp, $zero, 0xA
    ctx->pc = 0x2f56acu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_2f56b0:
    // 0x2f56b0: 0x246333a0  addiu       $v1, $v1, 0x33A0
    ctx->pc = 0x2f56b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 13216));
label_2f56b4:
    // 0x2f56b4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2f56b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_2f56b8:
    // 0x2f56b8: 0xafa30264  sw          $v1, 0x264($sp)
    ctx->pc = 0x2f56b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 612), GPR_U32(ctx, 3));
label_2f56bc:
    // 0x2f56bc: 0x2228825  or          $s1, $s1, $v0
    ctx->pc = 0x2f56bcu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
label_2f56c0:
    // 0x2f56c0: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x2f56c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_2f56c4:
    // 0x2f56c4: 0x5c400007  bgtzl       $v0, . + 4 + (0x7 << 2)
label_2f56c8:
    if (ctx->pc == 0x2F56C8u) {
        ctx->pc = 0x2F56C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F56C4u;
        // 0x2f56c8: 0x32220020  andi        $v0, $s1, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F56CCu;
        goto label_2f56cc;
    }
    ctx->pc = 0x2F56C4u;
    {
        const bool branch_taken_0x2f56c4 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x2f56c4) {
            ctx->pc = 0x2F56C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F56C4u;
            // 0x2f56c8: 0x32220020  andi        $v0, $s1, 0x20 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)32);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F56E4u;
            goto label_2f56e4;
        }
    }
    ctx->pc = 0x2F56CCu;
label_2f56cc:
    // 0x2f56cc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2f56ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2f56d0:
    // 0x2f56d0: 0xc0bc0e0  jal         func_2F0380
label_2f56d4:
    if (ctx->pc == 0x2F56D4u) {
        ctx->pc = 0x2F56D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F56D0u;
        // 0x2f56d4: 0x7fa80290  sq          $t0, 0x290($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 656), GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F56D8u;
        goto label_2f56d8;
    }
    ctx->pc = 0x2F56D0u;
    SET_GPR_U32(ctx, 31, 0x2F56D8u);
    ctx->pc = 0x2F56D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F56D0u;
    // 0x2f56d4: 0x7fa80290  sq          $t0, 0x290($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 656), GPR_VEC(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F0380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0380u, 0x2F56D0u, 0x2F56D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F56D8u;
label_2f56d8:
    // 0x2f56d8: 0x14400241  bnez        $v0, . + 4 + (0x241 << 2)
label_2f56dc:
    if (ctx->pc == 0x2F56DCu) {
        ctx->pc = 0x2F56DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F56D8u;
        // 0x2f56dc: 0x7ba80290  lq          $t0, 0x290($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 656)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F56E0u;
        goto label_2f56e0;
    }
    ctx->pc = 0x2F56D8u;
    {
        const bool branch_taken_0x2f56d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F56DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F56D8u;
        // 0x2f56dc: 0x7ba80290  lq          $t0, 0x290($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 656)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f56d8) {
            ctx->pc = 0x2F5FE0u;
            goto label_2f5fe0;
        }
    }
    ctx->pc = 0x2F56E0u;
label_2f56e0:
    // 0x2f56e0: 0x32220020  andi        $v0, $s1, 0x20
    ctx->pc = 0x2f56e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)32);
label_2f56e4:
    // 0x2f56e4: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
label_2f56e8:
    if (ctx->pc == 0x2F56E8u) {
        ctx->pc = 0x2F56E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F56E4u;
        // 0x2f56e8: 0x2e020005  sltiu       $v0, $s0, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F56ECu;
        goto label_2f56ec;
    }
    ctx->pc = 0x2F56E4u;
    {
        const bool branch_taken_0x2f56e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F56E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F56E4u;
        // 0x2f56e8: 0x2e020005  sltiu       $v0, $s0, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f56e4) {
            ctx->pc = 0x2F5750u;
            goto label_2f5750;
        }
    }
    ctx->pc = 0x2F56ECu;
label_2f56ec:
    // 0x2f56ec: 0x10000010  b           . + 4 + (0x10 << 2)
label_2f56f0:
    if (ctx->pc == 0x2F56F0u) {
        ctx->pc = 0x2F56F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F56ECu;
        // 0x2f56f0: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F56F4u;
        goto label_2f56f4;
    }
    ctx->pc = 0x2F56ECu;
    {
        const bool branch_taken_0x2f56ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F56F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F56ECu;
        // 0x2f56f0: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f56ec) {
            ctx->pc = 0x2F5730u;
            goto label_2f5730;
        }
    }
    ctx->pc = 0x2F56F4u;
label_2f56f4:
    // 0x2f56f4: 0x0  nop
    ctx->pc = 0x2f56f4u;
    // NOP
label_2f56f8:
    // 0x2f56f8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x2f56f8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_2f56fc:
    // 0x2f56fc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2f56fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_2f5700:
    // 0x2f5700: 0x18400005  blez        $v0, . + 4 + (0x5 << 2)
label_2f5704:
    if (ctx->pc == 0x2F5704u) {
        ctx->pc = 0x2F5704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5700u;
        // 0x2f5704: 0xae420004  sw          $v0, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5708u;
        goto label_2f5708;
    }
    ctx->pc = 0x2F5700u;
    {
        const bool branch_taken_0x2f5700 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2F5704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5700u;
        // 0x2f5704: 0xae420004  sw          $v0, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5700) {
            ctx->pc = 0x2F5718u;
            goto label_2f5718;
        }
    }
    ctx->pc = 0x2F5708u;
label_2f5708:
    // 0x2f5708: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x2f5708u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_2f570c:
    // 0x2f570c: 0x10000007  b           . + 4 + (0x7 << 2)
label_2f5710:
    if (ctx->pc == 0x2F5710u) {
        ctx->pc = 0x2F5710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F570Cu;
        // 0x2f5710: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5714u;
        goto label_2f5714;
    }
    ctx->pc = 0x2F570Cu;
    {
        const bool branch_taken_0x2f570c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F570Cu;
        // 0x2f5710: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f570c) {
            ctx->pc = 0x2F572Cu;
            goto label_2f572c;
        }
    }
    ctx->pc = 0x2F5714u;
label_2f5714:
    // 0x2f5714: 0x0  nop
    ctx->pc = 0x2f5714u;
    // NOP
label_2f5718:
    // 0x2f5718: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2f5718u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2f571c:
    // 0x2f571c: 0xc0bc0e0  jal         func_2F0380
label_2f5720:
    if (ctx->pc == 0x2F5720u) {
        ctx->pc = 0x2F5720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F571Cu;
        // 0x2f5720: 0x7fa80290  sq          $t0, 0x290($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 656), GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5724u;
        goto label_2f5724;
    }
    ctx->pc = 0x2F571Cu;
    SET_GPR_U32(ctx, 31, 0x2F5724u);
    ctx->pc = 0x2F5720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F571Cu;
    // 0x2f5720: 0x7fa80290  sq          $t0, 0x290($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 656), GPR_VEC(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F0380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0380u, 0x2F571Cu, 0x2F5724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5724u;
label_2f5724:
    // 0x2f5724: 0x1440022e  bnez        $v0, . + 4 + (0x22E << 2)
label_2f5728:
    if (ctx->pc == 0x2F5728u) {
        ctx->pc = 0x2F5728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5724u;
        // 0x2f5728: 0x7ba80290  lq          $t0, 0x290($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 656)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F572Cu;
        goto label_2f572c;
    }
    ctx->pc = 0x2F5724u;
    {
        const bool branch_taken_0x2f5724 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F5728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5724u;
        // 0x2f5728: 0x7ba80290  lq          $t0, 0x290($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 656)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5724) {
            ctx->pc = 0x2F5FE0u;
            goto label_2f5fe0;
        }
    }
    ctx->pc = 0x2F572Cu;
label_2f572c:
    // 0x2f572c: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2f572cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2f5730:
    // 0x2f5730: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x2f5730u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_2f5734:
    // 0x2f5734: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2f5734u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_2f5738:
    // 0x2f5738: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f5738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2f573c:
    // 0x2f573c: 0x90428f81  lbu         $v0, -0x707F($v0)
    ctx->pc = 0x2f573cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294938497)));
label_2f5740:
    // 0x2f5740: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x2f5740u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_2f5744:
    // 0x2f5744: 0x5440ffec  bnel        $v0, $zero, . + 4 + (-0x14 << 2)
label_2f5748:
    if (ctx->pc == 0x2F5748u) {
        ctx->pc = 0x2F5748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5744u;
        // 0x2f5748: 0x8e420004  lw          $v0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F574Cu;
        goto label_2f574c;
    }
    ctx->pc = 0x2F5744u;
    {
        const bool branch_taken_0x2f5744 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f5744) {
            ctx->pc = 0x2F5748u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F5744u;
            // 0x2f5748: 0x8e420004  lw          $v0, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F56F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f56f8;
        }
    }
    ctx->pc = 0x2F574Cu;
label_2f574c:
    // 0x2f574c: 0x2e020005  sltiu       $v0, $s0, 0x5
    ctx->pc = 0x2f574cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
label_2f5750:
    // 0x2f5750: 0x5040ff24  beql        $v0, $zero, . + 4 + (-0xDC << 2)
label_2f5754:
    if (ctx->pc == 0x2F5754u) {
        ctx->pc = 0x2F5754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5750u;
        // 0x2f5754: 0x82a30000  lb          $v1, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5758u;
        goto label_2f5758;
    }
    ctx->pc = 0x2F5750u;
    {
        const bool branch_taken_0x2f5750 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f5750) {
            ctx->pc = 0x2F5754u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F5750u;
            // 0x2f5754: 0x82a30000  lb          $v1, 0x0($s5) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F53E4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f53e4;
        }
    }
    ctx->pc = 0x2F5758u;
label_2f5758:
    // 0x2f5758: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x2f5758u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_2f575c:
    // 0x2f575c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x2f575cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_2f5760:
    // 0x2f5760: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2f5760u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2f5764:
    // 0x2f5764: 0x8c6397a0  lw          $v1, -0x6860($v1)
    ctx->pc = 0x2f5764u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294940576)));
label_2f5768:
    // 0x2f5768: 0x600008  jr          $v1
label_2f576c:
    if (ctx->pc == 0x2F576Cu) {
        ctx->pc = 0x2F5770u;
        goto label_2f5770;
    }
    ctx->pc = 0x2F5768u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2F5770u: goto label_2f5770;
            case 0x2F5830u: goto label_2f5830;
            case 0x2F5948u: goto label_2f5948;
            case 0x2F5A60u: goto label_2f5a60;
            case 0x2F5CE8u: goto label_2f5ce8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F5768u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2F5770u;
label_2f5770:
    // 0x2f5770: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f5770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f5774:
    // 0x2f5774: 0x32230008  andi        $v1, $s1, 0x8
    ctx->pc = 0x2f5774u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)8);
label_2f5778:
    // 0x2f5778: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
label_2f577c:
    if (ctx->pc == 0x2F577Cu) {
        ctx->pc = 0x2F577Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5778u;
        // 0x2f577c: 0x54a00a  movz        $s4, $v0, $s4 (Delay Slot)
        if (GPR_U64(ctx, 20) == 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5780u;
        goto label_2f5780;
    }
    ctx->pc = 0x2F5778u;
    {
        const bool branch_taken_0x2f5778 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F577Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5778u;
        // 0x2f577c: 0x54a00a  movz        $s4, $v0, $s4 (Delay Slot)
        if (GPR_U64(ctx, 20) == 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5778) {
            ctx->pc = 0x2F57F0u;
            goto label_2f57f0;
        }
    }
    ctx->pc = 0x2F5780u;
label_2f5780:
    // 0x2f5780: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2f5780u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f5784:
    // 0x2f5784: 0x0  nop
    ctx->pc = 0x2f5784u;
    // NOP
label_2f5788:
    // 0x2f5788: 0x8e500004  lw          $s0, 0x4($s2)
    ctx->pc = 0x2f5788u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_2f578c:
    // 0x2f578c: 0x214102b  sltu        $v0, $s0, $s4
    ctx->pc = 0x2f578cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
label_2f5790:
    // 0x2f5790: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
label_2f5794:
    if (ctx->pc == 0x2F5794u) {
        ctx->pc = 0x2F5794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5790u;
        // 0x2f5794: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5798u;
        goto label_2f5798;
    }
    ctx->pc = 0x2F5790u;
    {
        const bool branch_taken_0x2f5790 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f5790) {
            ctx->pc = 0x2F5794u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F5790u;
            // 0x2f5794: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F57D0u;
            goto label_2f57d0;
        }
    }
    ctx->pc = 0x2F5798u;
label_2f5798:
    // 0x2f5798: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2f5798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2f579c:
    // 0x2f579c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2f579cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2f57a0:
    // 0x2f57a0: 0x7fa80290  sq          $t0, 0x290($sp)
    ctx->pc = 0x2f57a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 656), GPR_VEC(ctx, 8));
label_2f57a4:
    // 0x2f57a4: 0x2308821  addu        $s1, $s1, $s0
    ctx->pc = 0x2f57a4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
label_2f57a8:
    // 0x2f57a8: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2f57a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_2f57ac:
    // 0x2f57ac: 0x290a023  subu        $s4, $s4, $s0
    ctx->pc = 0x2f57acu;
    SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
label_2f57b0:
    // 0x2f57b0: 0xc0bc0e0  jal         func_2F0380
label_2f57b4:
    if (ctx->pc == 0x2F57B4u) {
        ctx->pc = 0x2F57B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F57B0u;
        // 0x2f57b4: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F57B8u;
        goto label_2f57b8;
    }
    ctx->pc = 0x2F57B0u;
    SET_GPR_U32(ctx, 31, 0x2F57B8u);
    ctx->pc = 0x2F57B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F57B0u;
    // 0x2f57b4: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F0380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0380u, 0x2F57B0u, 0x2F57B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F57B8u;
label_2f57b8:
    // 0x2f57b8: 0x1040fff3  beqz        $v0, . + 4 + (-0xD << 2)
label_2f57bc:
    if (ctx->pc == 0x2F57BCu) {
        ctx->pc = 0x2F57BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F57B8u;
        // 0x2f57bc: 0x7ba80290  lq          $t0, 0x290($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 656)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F57C0u;
        goto label_2f57c0;
    }
    ctx->pc = 0x2F57B8u;
    {
        const bool branch_taken_0x2f57b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F57BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F57B8u;
        // 0x2f57bc: 0x7ba80290  lq          $t0, 0x290($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 656)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f57b8) {
            ctx->pc = 0x2F5788u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f5788;
        }
    }
    ctx->pc = 0x2F57C0u;
label_2f57c0:
    // 0x2f57c0: 0x5620ff07  bnel        $s1, $zero, . + 4 + (-0xF9 << 2)
label_2f57c4:
    if (ctx->pc == 0x2F57C4u) {
        ctx->pc = 0x2F57C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F57C0u;
        // 0x2f57c4: 0x1114021  addu        $t0, $t0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F57C8u;
        goto label_2f57c8;
    }
    ctx->pc = 0x2F57C0u;
    {
        const bool branch_taken_0x2f57c0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f57c0) {
            ctx->pc = 0x2F57C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F57C0u;
            // 0x2f57c4: 0x1114021  addu        $t0, $t0, $s1 (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 17)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F53E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f53e0;
        }
    }
    ctx->pc = 0x2F57C8u;
label_2f57c8:
    // 0x2f57c8: 0x10000206  b           . + 4 + (0x206 << 2)
label_2f57cc:
    if (ctx->pc == 0x2F57CCu) {
        ctx->pc = 0x2F57CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F57C8u;
        // 0x2f57cc: 0x8fa40260  lw          $a0, 0x260($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F57D0u;
        goto label_2f57d0;
    }
    ctx->pc = 0x2F57C8u;
    {
        const bool branch_taken_0x2f57c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F57CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F57C8u;
        // 0x2f57cc: 0x8fa40260  lw          $a0, 0x260($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f57c8) {
            ctx->pc = 0x2F5FE4u;
            goto label_2f5fe4;
        }
    }
    ctx->pc = 0x2F57D0u;
label_2f57d0:
    // 0x2f57d0: 0x2141023  subu        $v0, $s0, $s4
    ctx->pc = 0x2f57d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
label_2f57d4:
    // 0x2f57d4: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x2f57d4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
label_2f57d8:
    // 0x2f57d8: 0x2348821  addu        $s1, $s1, $s4
    ctx->pc = 0x2f57d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
label_2f57dc:
    // 0x2f57dc: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x2f57dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
label_2f57e0:
    // 0x2f57e0: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x2f57e0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_2f57e4:
    // 0x2f57e4: 0x1000fefe  b           . + 4 + (-0x102 << 2)
label_2f57e8:
    if (ctx->pc == 0x2F57E8u) {
        ctx->pc = 0x2F57E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F57E4u;
        // 0x2f57e8: 0x1114021  addu        $t0, $t0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F57ECu;
        goto label_2f57ec;
    }
    ctx->pc = 0x2F57E4u;
    {
        const bool branch_taken_0x2f57e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F57E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F57E4u;
        // 0x2f57e8: 0x1114021  addu        $t0, $t0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f57e4) {
            ctx->pc = 0x2F53E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f53e0;
        }
    }
    ctx->pc = 0x2F57ECu;
label_2f57ec:
    // 0x2f57ec: 0x0  nop
    ctx->pc = 0x2f57ecu;
    // NOP
label_2f57f0:
    // 0x2f57f0: 0x2e0102d  daddu       $v0, $s7, $zero
    ctx->pc = 0x2f57f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_2f57f4:
    // 0x2f57f4: 0x26f70008  addiu       $s7, $s7, 0x8
    ctx->pc = 0x2f57f4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 8));
label_2f57f8:
    // 0x2f57f8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2f57f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2f57fc:
    // 0x2f57fc: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2f57fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2f5800:
    // 0x2f5800: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2f5800u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f5804:
    // 0x2f5804: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x2f5804u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2f5808:
    // 0x2f5808: 0xc0bb018  jal         func_2EC060
label_2f580c:
    if (ctx->pc == 0x2F580Cu) {
        ctx->pc = 0x2F580Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5808u;
        // 0x2f580c: 0x7fa80290  sq          $t0, 0x290($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 656), GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5810u;
        goto label_2f5810;
    }
    ctx->pc = 0x2F5808u;
    SET_GPR_U32(ctx, 31, 0x2F5810u);
    ctx->pc = 0x2F580Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5808u;
    // 0x2f580c: 0x7fa80290  sq          $t0, 0x290($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 656), GPR_VEC(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EC060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EC060u, 0x2F5808u, 0x2F5810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5810u;
label_2f5810:
    // 0x2f5810: 0x104001f3  beqz        $v0, . + 4 + (0x1F3 << 2)
label_2f5814:
    if (ctx->pc == 0x2F5814u) {
        ctx->pc = 0x2F5814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5810u;
        // 0x2f5814: 0x7ba80290  lq          $t0, 0x290($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 656)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5818u;
        goto label_2f5818;
    }
    ctx->pc = 0x2F5810u;
    {
        const bool branch_taken_0x2f5810 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5810u;
        // 0x2f5814: 0x7ba80290  lq          $t0, 0x290($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 656)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5810) {
            ctx->pc = 0x2F5FE0u;
            goto label_2f5fe0;
        }
    }
    ctx->pc = 0x2F5818u;
label_2f5818:
    // 0x2f5818: 0x1024021  addu        $t0, $t0, $v0
    ctx->pc = 0x2f5818u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
label_2f581c:
    // 0x2f581c: 0x8fa20260  lw          $v0, 0x260($sp)
    ctx->pc = 0x2f581cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
label_2f5820:
    // 0x2f5820: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2f5820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2f5824:
    // 0x2f5824: 0x1000feee  b           . + 4 + (-0x112 << 2)
label_2f5828:
    if (ctx->pc == 0x2F5828u) {
        ctx->pc = 0x2F5828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5824u;
        // 0x2f5828: 0xafa20260  sw          $v0, 0x260($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 608), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F582Cu;
        goto label_2f582c;
    }
    ctx->pc = 0x2F5824u;
    {
        const bool branch_taken_0x2f5824 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5824u;
        // 0x2f5828: 0xafa20260  sw          $v0, 0x260($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 608), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5824) {
            ctx->pc = 0x2F53E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f53e0;
        }
    }
    ctx->pc = 0x2F582Cu;
label_2f582c:
    // 0x2f582c: 0x0  nop
    ctx->pc = 0x2f582cu;
    // NOP
label_2f5830:
    // 0x2f5830: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2f5830u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2f5834:
    // 0x2f5834: 0x32230008  andi        $v1, $s1, 0x8
    ctx->pc = 0x2f5834u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)8);
label_2f5838:
    // 0x2f5838: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
label_2f583c:
    if (ctx->pc == 0x2F583Cu) {
        ctx->pc = 0x2F583Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5838u;
        // 0x2f583c: 0x54a00a  movz        $s4, $v0, $s4 (Delay Slot)
        if (GPR_U64(ctx, 20) == 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5840u;
        goto label_2f5840;
    }
    ctx->pc = 0x2F5838u;
    {
        const bool branch_taken_0x2f5838 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F583Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5838u;
        // 0x2f583c: 0x54a00a  movz        $s4, $v0, $s4 (Delay Slot)
        if (GPR_U64(ctx, 20) == 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5838) {
            ctx->pc = 0x2F58B0u;
            goto label_2f58b0;
        }
    }
    ctx->pc = 0x2F5840u;
label_2f5840:
    // 0x2f5840: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2f5840u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f5844:
    // 0x2f5844: 0x0  nop
    ctx->pc = 0x2f5844u;
    // NOP
label_2f5848:
    // 0x2f5848: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x2f5848u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2f584c:
    // 0x2f584c: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x2f584cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_2f5850:
    // 0x2f5850: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x2f5850u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
label_2f5854:
    // 0x2f5854: 0x80640000  lb          $a0, 0x0($v1)
    ctx->pc = 0x2f5854u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_2f5858:
    // 0x2f5858: 0x10800011  beqz        $a0, . + 4 + (0x11 << 2)
label_2f585c:
    if (ctx->pc == 0x2F585Cu) {
        ctx->pc = 0x2F585Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5858u;
        // 0x2f585c: 0x24a20001  addiu       $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5860u;
        goto label_2f5860;
    }
    ctx->pc = 0x2F5858u;
    {
        const bool branch_taken_0x2f5858 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F585Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5858u;
        // 0x2f585c: 0x24a20001  addiu       $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5858) {
            ctx->pc = 0x2F58A0u;
            goto label_2f58a0;
        }
    }
    ctx->pc = 0x2F5860u;
label_2f5860:
    // 0x2f5860: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x2f5860u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_2f5864:
    // 0x2f5864: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x2f5864u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
label_2f5868:
    // 0x2f5868: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x2f5868u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_2f586c:
    // 0x2f586c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2f586cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_2f5870:
    // 0x2f5870: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2f5870u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2f5874:
    // 0x2f5874: 0x1280000a  beqz        $s4, . + 4 + (0xA << 2)
label_2f5878:
    if (ctx->pc == 0x2F5878u) {
        ctx->pc = 0x2F5878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5874u;
        // 0x2f5878: 0xae430004  sw          $v1, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F587Cu;
        goto label_2f587c;
    }
    ctx->pc = 0x2F5874u;
    {
        const bool branch_taken_0x2f5874 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5874u;
        // 0x2f5878: 0xae430004  sw          $v1, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5874) {
            ctx->pc = 0x2F58A0u;
            goto label_2f58a0;
        }
    }
    ctx->pc = 0x2F587Cu;
label_2f587c:
    // 0x2f587c: 0x5c60fff3  bgtzl       $v1, . + 4 + (-0xD << 2)
label_2f5880:
    if (ctx->pc == 0x2F5880u) {
        ctx->pc = 0x2F5880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F587Cu;
        // 0x2f5880: 0x8e450000  lw          $a1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5884u;
        goto label_2f5884;
    }
    ctx->pc = 0x2F587Cu;
    {
        const bool branch_taken_0x2f587c = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x2f587c) {
            ctx->pc = 0x2F5880u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F587Cu;
            // 0x2f5880: 0x8e450000  lw          $a1, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F584Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f584c;
        }
    }
    ctx->pc = 0x2F5884u;
label_2f5884:
    // 0x2f5884: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2f5884u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2f5888:
    // 0x2f5888: 0xc0bc0e0  jal         func_2F0380
label_2f588c:
    if (ctx->pc == 0x2F588Cu) {
        ctx->pc = 0x2F588Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5888u;
        // 0x2f588c: 0x7fa80290  sq          $t0, 0x290($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 656), GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5890u;
        goto label_2f5890;
    }
    ctx->pc = 0x2F5888u;
    SET_GPR_U32(ctx, 31, 0x2F5890u);
    ctx->pc = 0x2F588Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5888u;
    // 0x2f588c: 0x7fa80290  sq          $t0, 0x290($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 656), GPR_VEC(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F0380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0380u, 0x2F5888u, 0x2F5890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5890u;
label_2f5890:
    // 0x2f5890: 0x1040ffed  beqz        $v0, . + 4 + (-0x13 << 2)
label_2f5894:
    if (ctx->pc == 0x2F5894u) {
        ctx->pc = 0x2F5894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5890u;
        // 0x2f5894: 0x7ba80290  lq          $t0, 0x290($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 656)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5898u;
        goto label_2f5898;
    }
    ctx->pc = 0x2F5890u;
    {
        const bool branch_taken_0x2f5890 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5890u;
        // 0x2f5894: 0x7ba80290  lq          $t0, 0x290($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 656)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5890) {
            ctx->pc = 0x2F5848u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f5848;
        }
    }
    ctx->pc = 0x2F5898u;
label_2f5898:
    // 0x2f5898: 0x120001d2  beqz        $s0, . + 4 + (0x1D2 << 2)
label_2f589c:
    if (ctx->pc == 0x2F589Cu) {
        ctx->pc = 0x2F589Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5898u;
        // 0x2f589c: 0x8fa40260  lw          $a0, 0x260($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F58A0u;
        goto label_2f58a0;
    }
    ctx->pc = 0x2F5898u;
    {
        const bool branch_taken_0x2f5898 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F589Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5898u;
        // 0x2f589c: 0x8fa40260  lw          $a0, 0x260($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5898) {
            ctx->pc = 0x2F5FE4u;
            goto label_2f5fe4;
        }
    }
    ctx->pc = 0x2F58A0u;
label_2f58a0:
    // 0x2f58a0: 0x5600fecf  bnel        $s0, $zero, . + 4 + (-0x131 << 2)
label_2f58a4:
    if (ctx->pc == 0x2F58A4u) {
        ctx->pc = 0x2F58A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F58A0u;
        // 0x2f58a4: 0x1104021  addu        $t0, $t0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F58A8u;
        goto label_2f58a8;
    }
    ctx->pc = 0x2F58A0u;
    {
        const bool branch_taken_0x2f58a0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f58a0) {
            ctx->pc = 0x2F58A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F58A0u;
            // 0x2f58a4: 0x1104021  addu        $t0, $t0, $s0 (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F53E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f53e0;
        }
    }
    ctx->pc = 0x2F58A8u;
label_2f58a8:
    // 0x2f58a8: 0x100001d2  b           . + 4 + (0x1D2 << 2)
label_2f58ac:
    if (ctx->pc == 0x2F58ACu) {
        ctx->pc = 0x2F58ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F58A8u;
        // 0x2f58ac: 0x8fa20260  lw          $v0, 0x260($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F58B0u;
        goto label_2f58b0;
    }
    ctx->pc = 0x2F58A8u;
    {
        const bool branch_taken_0x2f58a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F58ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F58A8u;
        // 0x2f58ac: 0x8fa20260  lw          $v0, 0x260($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f58a8) {
            ctx->pc = 0x2F5FF4u;
            goto label_2f5ff4;
        }
    }
    ctx->pc = 0x2F58B0u;
label_2f58b0:
    // 0x2f58b0: 0x2e0102d  daddu       $v0, $s7, $zero
    ctx->pc = 0x2f58b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_2f58b4:
    // 0x2f58b4: 0x26f70008  addiu       $s7, $s7, 0x8
    ctx->pc = 0x2f58b4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 8));
label_2f58b8:
    // 0x2f58b8: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x2f58b8u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2f58bc:
    // 0x2f58bc: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x2f58bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2f58c0:
    // 0x2f58c0: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x2f58c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2f58c4:
    // 0x2f58c4: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x2f58c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_2f58c8:
    // 0x2f58c8: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x2f58c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
label_2f58cc:
    // 0x2f58cc: 0x80640000  lb          $a0, 0x0($v1)
    ctx->pc = 0x2f58ccu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_2f58d0:
    // 0x2f58d0: 0x10800014  beqz        $a0, . + 4 + (0x14 << 2)
label_2f58d4:
    if (ctx->pc == 0x2F58D4u) {
        ctx->pc = 0x2F58D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F58D0u;
        // 0x2f58d4: 0x24a40001  addiu       $a0, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F58D8u;
        goto label_2f58d8;
    }
    ctx->pc = 0x2F58D0u;
    {
        const bool branch_taken_0x2f58d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F58D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F58D0u;
        // 0x2f58d4: 0x24a40001  addiu       $a0, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f58d0) {
            ctx->pc = 0x2F5924u;
            goto label_2f5924;
        }
    }
    ctx->pc = 0x2F58D8u;
label_2f58d8:
    // 0x2f58d8: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x2f58d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_2f58dc:
    // 0x2f58dc: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x2f58dcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
label_2f58e0:
    // 0x2f58e0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2f58e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_2f58e4:
    // 0x2f58e4: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x2f58e4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
label_2f58e8:
    // 0x2f58e8: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x2f58e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_2f58ec:
    // 0x2f58ec: 0xa2630000  sb          $v1, 0x0($s3)
    ctx->pc = 0x2f58ecu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 3));
label_2f58f0:
    // 0x2f58f0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2f58f0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_2f58f4:
    // 0x2f58f4: 0x1280000b  beqz        $s4, . + 4 + (0xB << 2)
label_2f58f8:
    if (ctx->pc == 0x2F58F8u) {
        ctx->pc = 0x2F58F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F58F4u;
        // 0x2f58f8: 0xae440000  sw          $a0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F58FCu;
        goto label_2f58fc;
    }
    ctx->pc = 0x2F58F4u;
    {
        const bool branch_taken_0x2f58f4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F58F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F58F4u;
        // 0x2f58f8: 0xae440000  sw          $a0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f58f4) {
            ctx->pc = 0x2F5924u;
            goto label_2f5924;
        }
    }
    ctx->pc = 0x2F58FCu;
label_2f58fc:
    // 0x2f58fc: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x2f58fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_2f5900:
    // 0x2f5900: 0x5c40fff0  bgtzl       $v0, . + 4 + (-0x10 << 2)
label_2f5904:
    if (ctx->pc == 0x2F5904u) {
        ctx->pc = 0x2F5904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5900u;
        // 0x2f5904: 0x8e450000  lw          $a1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5908u;
        goto label_2f5908;
    }
    ctx->pc = 0x2F5900u;
    {
        const bool branch_taken_0x2f5900 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x2f5900) {
            ctx->pc = 0x2F5904u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F5900u;
            // 0x2f5904: 0x8e450000  lw          $a1, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F58C4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f58c4;
        }
    }
    ctx->pc = 0x2F5908u;
label_2f5908:
    // 0x2f5908: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2f5908u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2f590c:
    // 0x2f590c: 0xc0bc0e0  jal         func_2F0380
label_2f5910:
    if (ctx->pc == 0x2F5910u) {
        ctx->pc = 0x2F5910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F590Cu;
        // 0x2f5910: 0x7fa80290  sq          $t0, 0x290($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 656), GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5914u;
        goto label_2f5914;
    }
    ctx->pc = 0x2F590Cu;
    SET_GPR_U32(ctx, 31, 0x2F5914u);
    ctx->pc = 0x2F5910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F590Cu;
    // 0x2f5910: 0x7fa80290  sq          $t0, 0x290($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 656), GPR_VEC(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F0380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0380u, 0x2F590Cu, 0x2F5914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5914u;
label_2f5914:
    // 0x2f5914: 0x1040ffea  beqz        $v0, . + 4 + (-0x16 << 2)
label_2f5918:
    if (ctx->pc == 0x2F5918u) {
        ctx->pc = 0x2F5918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5914u;
        // 0x2f5918: 0x7ba80290  lq          $t0, 0x290($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 656)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F591Cu;
        goto label_2f591c;
    }
    ctx->pc = 0x2F5914u;
    {
        const bool branch_taken_0x2f5914 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5914u;
        // 0x2f5918: 0x7ba80290  lq          $t0, 0x290($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 656)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5914) {
            ctx->pc = 0x2F58C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f58c0;
        }
    }
    ctx->pc = 0x2F591Cu;
label_2f591c:
    // 0x2f591c: 0x127001b1  beq         $s3, $s0, . + 4 + (0x1B1 << 2)
label_2f5920:
    if (ctx->pc == 0x2F5920u) {
        ctx->pc = 0x2F5920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F591Cu;
        // 0x2f5920: 0x8fa40260  lw          $a0, 0x260($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5924u;
        goto label_2f5924;
    }
    ctx->pc = 0x2F591Cu;
    {
        const bool branch_taken_0x2f591c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 16));
        ctx->pc = 0x2F5920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F591Cu;
        // 0x2f5920: 0x8fa40260  lw          $a0, 0x260($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f591c) {
            ctx->pc = 0x2F5FE4u;
            goto label_2f5fe4;
        }
    }
    ctx->pc = 0x2F5924u;
label_2f5924:
    // 0x2f5924: 0x2708023  subu        $s0, $s3, $s0
    ctx->pc = 0x2f5924u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
label_2f5928:
    // 0x2f5928: 0x120001b2  beqz        $s0, . + 4 + (0x1B2 << 2)
label_2f592c:
    if (ctx->pc == 0x2F592Cu) {
        ctx->pc = 0x2F592Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5928u;
        // 0x2f592c: 0x8fa20260  lw          $v0, 0x260($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5930u;
        goto label_2f5930;
    }
    ctx->pc = 0x2F5928u;
    {
        const bool branch_taken_0x2f5928 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F592Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5928u;
        // 0x2f592c: 0x8fa20260  lw          $v0, 0x260($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5928) {
            ctx->pc = 0x2F5FF4u;
            goto label_2f5ff4;
        }
    }
    ctx->pc = 0x2F5930u;
label_2f5930:
    // 0x2f5930: 0xa2600000  sb          $zero, 0x0($s3)
    ctx->pc = 0x2f5930u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 0));
label_2f5934:
    // 0x2f5934: 0x8fa30260  lw          $v1, 0x260($sp)
    ctx->pc = 0x2f5934u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
label_2f5938:
    // 0x2f5938: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2f5938u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2f593c:
    // 0x2f593c: 0x1000001f  b           . + 4 + (0x1F << 2)
label_2f5940:
    if (ctx->pc == 0x2F5940u) {
        ctx->pc = 0x2F5940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F593Cu;
        // 0x2f5940: 0xafa30260  sw          $v1, 0x260($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 608), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5944u;
        goto label_2f5944;
    }
    ctx->pc = 0x2F593Cu;
    {
        const bool branch_taken_0x2f593c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F593Cu;
        // 0x2f5940: 0xafa30260  sw          $v1, 0x260($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 608), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f593c) {
            ctx->pc = 0x2F59BCu;
            goto label_2f59bc;
        }
    }
    ctx->pc = 0x2F5944u;
label_2f5944:
    // 0x2f5944: 0x0  nop
    ctx->pc = 0x2f5944u;
    // NOP
label_2f5948:
    // 0x2f5948: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2f5948u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2f594c:
    // 0x2f594c: 0x32230008  andi        $v1, $s1, 0x8
    ctx->pc = 0x2f594cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)8);
label_2f5950:
    // 0x2f5950: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
label_2f5954:
    if (ctx->pc == 0x2F5954u) {
        ctx->pc = 0x2F5954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5950u;
        // 0x2f5954: 0x54a00a  movz        $s4, $v0, $s4 (Delay Slot)
        if (GPR_U64(ctx, 20) == 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5958u;
        goto label_2f5958;
    }
    ctx->pc = 0x2F5950u;
    {
        const bool branch_taken_0x2f5950 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5950u;
        // 0x2f5954: 0x54a00a  movz        $s4, $v0, $s4 (Delay Slot)
        if (GPR_U64(ctx, 20) == 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5950) {
            ctx->pc = 0x2F59C8u;
            goto label_2f59c8;
        }
    }
    ctx->pc = 0x2F5958u;
label_2f5958:
    // 0x2f5958: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2f5958u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f595c:
    // 0x2f595c: 0x0  nop
    ctx->pc = 0x2f595cu;
    // NOP
label_2f5960:
    // 0x2f5960: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2f5960u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2f5964:
    // 0x2f5964: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x2f5964u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_2f5968:
    // 0x2f5968: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2f5968u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_2f596c:
    // 0x2f596c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f596cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2f5970:
    // 0x2f5970: 0x90428f81  lbu         $v0, -0x707F($v0)
    ctx->pc = 0x2f5970u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294938497)));
label_2f5974:
    // 0x2f5974: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x2f5974u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_2f5978:
    // 0x2f5978: 0x5440fe99  bnel        $v0, $zero, . + 4 + (-0x167 << 2)
label_2f597c:
    if (ctx->pc == 0x2F597Cu) {
        ctx->pc = 0x2F597Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5978u;
        // 0x2f597c: 0x1104021  addu        $t0, $t0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5980u;
        goto label_2f5980;
    }
    ctx->pc = 0x2F5978u;
    {
        const bool branch_taken_0x2f5978 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f5978) {
            ctx->pc = 0x2F597Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F5978u;
            // 0x2f597c: 0x1104021  addu        $t0, $t0, $s0 (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F53E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f53e0;
        }
    }
    ctx->pc = 0x2F5980u;
label_2f5980:
    // 0x2f5980: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x2f5980u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_2f5984:
    // 0x2f5984: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x2f5984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_2f5988:
    // 0x2f5988: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x2f5988u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
label_2f598c:
    // 0x2f598c: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x2f598cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_2f5990:
    // 0x2f5990: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2f5990u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_2f5994:
    // 0x2f5994: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2f5994u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2f5998:
    // 0x2f5998: 0x12800008  beqz        $s4, . + 4 + (0x8 << 2)
label_2f599c:
    if (ctx->pc == 0x2F599Cu) {
        ctx->pc = 0x2F599Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5998u;
        // 0x2f599c: 0xae430004  sw          $v1, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F59A0u;
        goto label_2f59a0;
    }
    ctx->pc = 0x2F5998u;
    {
        const bool branch_taken_0x2f5998 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F599Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5998u;
        // 0x2f599c: 0xae430004  sw          $v1, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5998) {
            ctx->pc = 0x2F59BCu;
            goto label_2f59bc;
        }
    }
    ctx->pc = 0x2F59A0u;
label_2f59a0:
    // 0x2f59a0: 0x5c60fff0  bgtzl       $v1, . + 4 + (-0x10 << 2)
label_2f59a4:
    if (ctx->pc == 0x2F59A4u) {
        ctx->pc = 0x2F59A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F59A0u;
        // 0x2f59a4: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F59A8u;
        goto label_2f59a8;
    }
    ctx->pc = 0x2F59A0u;
    {
        const bool branch_taken_0x2f59a0 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x2f59a0) {
            ctx->pc = 0x2F59A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F59A0u;
            // 0x2f59a4: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F5964u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f5964;
        }
    }
    ctx->pc = 0x2F59A8u;
label_2f59a8:
    // 0x2f59a8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2f59a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2f59ac:
    // 0x2f59ac: 0xc0bc0e0  jal         func_2F0380
label_2f59b0:
    if (ctx->pc == 0x2F59B0u) {
        ctx->pc = 0x2F59B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F59ACu;
        // 0x2f59b0: 0x7fa80290  sq          $t0, 0x290($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 656), GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F59B4u;
        goto label_2f59b4;
    }
    ctx->pc = 0x2F59ACu;
    SET_GPR_U32(ctx, 31, 0x2F59B4u);
    ctx->pc = 0x2F59B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F59ACu;
    // 0x2f59b0: 0x7fa80290  sq          $t0, 0x290($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 656), GPR_VEC(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F0380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0380u, 0x2F59ACu, 0x2F59B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F59B4u;
label_2f59b4:
    // 0x2f59b4: 0x1040ffea  beqz        $v0, . + 4 + (-0x16 << 2)
label_2f59b8:
    if (ctx->pc == 0x2F59B8u) {
        ctx->pc = 0x2F59B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F59B4u;
        // 0x2f59b8: 0x7ba80290  lq          $t0, 0x290($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 656)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F59BCu;
        goto label_2f59bc;
    }
    ctx->pc = 0x2F59B4u;
    {
        const bool branch_taken_0x2f59b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F59B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F59B4u;
        // 0x2f59b8: 0x7ba80290  lq          $t0, 0x290($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 656)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f59b4) {
            ctx->pc = 0x2F5960u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f5960;
        }
    }
    ctx->pc = 0x2F59BCu;
label_2f59bc:
    // 0x2f59bc: 0x1000fe88  b           . + 4 + (-0x178 << 2)
label_2f59c0:
    if (ctx->pc == 0x2F59C0u) {
        ctx->pc = 0x2F59C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F59BCu;
        // 0x2f59c0: 0x1104021  addu        $t0, $t0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F59C4u;
        goto label_2f59c4;
    }
    ctx->pc = 0x2F59BCu;
    {
        const bool branch_taken_0x2f59bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F59C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F59BCu;
        // 0x2f59c0: 0x1104021  addu        $t0, $t0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f59bc) {
            ctx->pc = 0x2F53E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f53e0;
        }
    }
    ctx->pc = 0x2F59C4u;
label_2f59c4:
    // 0x2f59c4: 0x0  nop
    ctx->pc = 0x2f59c4u;
    // NOP
label_2f59c8:
    // 0x2f59c8: 0x2e0102d  daddu       $v0, $s7, $zero
    ctx->pc = 0x2f59c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_2f59cc:
    // 0x2f59cc: 0x26f70008  addiu       $s7, $s7, 0x8
    ctx->pc = 0x2f59ccu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 8));
label_2f59d0:
    // 0x2f59d0: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x2f59d0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2f59d4:
    // 0x2f59d4: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x2f59d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2f59d8:
    // 0x2f59d8: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x2f59d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2f59dc:
    // 0x2f59dc: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x2f59dcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_2f59e0:
    // 0x2f59e0: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2f59e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_2f59e4:
    // 0x2f59e4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f59e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2f59e8:
    // 0x2f59e8: 0x90428f81  lbu         $v0, -0x707F($v0)
    ctx->pc = 0x2f59e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294938497)));
label_2f59ec:
    // 0x2f59ec: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x2f59ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_2f59f0:
    // 0x2f59f0: 0x54400014  bnel        $v0, $zero, . + 4 + (0x14 << 2)
label_2f59f4:
    if (ctx->pc == 0x2F59F4u) {
        ctx->pc = 0x2F59F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F59F0u;
        // 0x2f59f4: 0xa2600000  sb          $zero, 0x0($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F59F8u;
        goto label_2f59f8;
    }
    ctx->pc = 0x2F59F0u;
    {
        const bool branch_taken_0x2f59f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f59f0) {
            ctx->pc = 0x2F59F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F59F0u;
            // 0x2f59f4: 0xa2600000  sb          $zero, 0x0($s3) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F5A44u;
            goto label_2f5a44;
        }
    }
    ctx->pc = 0x2F59F8u;
label_2f59f8:
    // 0x2f59f8: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x2f59f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_2f59fc:
    // 0x2f59fc: 0x24a40001  addiu       $a0, $a1, 0x1
    ctx->pc = 0x2f59fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_2f5a00:
    // 0x2f5a00: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x2f5a00u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
label_2f5a04:
    // 0x2f5a04: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2f5a04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_2f5a08:
    // 0x2f5a08: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x2f5a08u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
label_2f5a0c:
    // 0x2f5a0c: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x2f5a0cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_2f5a10:
    // 0x2f5a10: 0xa2630000  sb          $v1, 0x0($s3)
    ctx->pc = 0x2f5a10u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 3));
label_2f5a14:
    // 0x2f5a14: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2f5a14u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_2f5a18:
    // 0x2f5a18: 0x12800009  beqz        $s4, . + 4 + (0x9 << 2)
label_2f5a1c:
    if (ctx->pc == 0x2F5A1Cu) {
        ctx->pc = 0x2F5A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5A18u;
        // 0x2f5a1c: 0xae440000  sw          $a0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5A20u;
        goto label_2f5a20;
    }
    ctx->pc = 0x2F5A18u;
    {
        const bool branch_taken_0x2f5a18 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5A18u;
        // 0x2f5a1c: 0xae440000  sw          $a0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5a18) {
            ctx->pc = 0x2F5A40u;
            goto label_2f5a40;
        }
    }
    ctx->pc = 0x2F5A20u;
label_2f5a20:
    // 0x2f5a20: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x2f5a20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_2f5a24:
    // 0x2f5a24: 0x5c40ffed  bgtzl       $v0, . + 4 + (-0x13 << 2)
label_2f5a28:
    if (ctx->pc == 0x2F5A28u) {
        ctx->pc = 0x2F5A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5A24u;
        // 0x2f5a28: 0x8e450000  lw          $a1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5A2Cu;
        goto label_2f5a2c;
    }
    ctx->pc = 0x2F5A24u;
    {
        const bool branch_taken_0x2f5a24 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x2f5a24) {
            ctx->pc = 0x2F5A28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F5A24u;
            // 0x2f5a28: 0x8e450000  lw          $a1, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F59DCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f59dc;
        }
    }
    ctx->pc = 0x2F5A2Cu;
label_2f5a2c:
    // 0x2f5a2c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2f5a2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2f5a30:
    // 0x2f5a30: 0xc0bc0e0  jal         func_2F0380
label_2f5a34:
    if (ctx->pc == 0x2F5A34u) {
        ctx->pc = 0x2F5A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5A30u;
        // 0x2f5a34: 0x7fa80290  sq          $t0, 0x290($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 656), GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5A38u;
        goto label_2f5a38;
    }
    ctx->pc = 0x2F5A30u;
    SET_GPR_U32(ctx, 31, 0x2F5A38u);
    ctx->pc = 0x2F5A34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5A30u;
    // 0x2f5a34: 0x7fa80290  sq          $t0, 0x290($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 656), GPR_VEC(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F0380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0380u, 0x2F5A30u, 0x2F5A38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5A38u;
label_2f5a38:
    // 0x2f5a38: 0x1040ffe7  beqz        $v0, . + 4 + (-0x19 << 2)
label_2f5a3c:
    if (ctx->pc == 0x2F5A3Cu) {
        ctx->pc = 0x2F5A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5A38u;
        // 0x2f5a3c: 0x7ba80290  lq          $t0, 0x290($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 656)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5A40u;
        goto label_2f5a40;
    }
    ctx->pc = 0x2F5A38u;
    {
        const bool branch_taken_0x2f5a38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5A38u;
        // 0x2f5a3c: 0x7ba80290  lq          $t0, 0x290($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 656)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5a38) {
            ctx->pc = 0x2F59D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f59d8;
        }
    }
    ctx->pc = 0x2F5A40u;
label_2f5a40:
    // 0x2f5a40: 0xa2600000  sb          $zero, 0x0($s3)
    ctx->pc = 0x2f5a40u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 0));
label_2f5a44:
    // 0x2f5a44: 0x2701023  subu        $v0, $s3, $s0
    ctx->pc = 0x2f5a44u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
label_2f5a48:
    // 0x2f5a48: 0x1024021  addu        $t0, $t0, $v0
    ctx->pc = 0x2f5a48u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
label_2f5a4c:
    // 0x2f5a4c: 0x8fa40260  lw          $a0, 0x260($sp)
    ctx->pc = 0x2f5a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
label_2f5a50:
    // 0x2f5a50: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2f5a50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_2f5a54:
    // 0x2f5a54: 0x1000fe62  b           . + 4 + (-0x19E << 2)
label_2f5a58:
    if (ctx->pc == 0x2F5A58u) {
        ctx->pc = 0x2F5A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5A54u;
        // 0x2f5a58: 0xafa40260  sw          $a0, 0x260($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 608), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5A5Cu;
        goto label_2f5a5c;
    }
    ctx->pc = 0x2F5A54u;
    {
        const bool branch_taken_0x2f5a54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5A54u;
        // 0x2f5a58: 0xafa40260  sw          $a0, 0x260($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 608), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5a54) {
            ctx->pc = 0x2F53E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f53e0;
        }
    }
    ctx->pc = 0x2F5A5Cu;
label_2f5a5c:
    // 0x2f5a5c: 0x0  nop
    ctx->pc = 0x2f5a5cu;
    // NOP
label_2f5a60:
    // 0x2f5a60: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x2f5a60u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
label_2f5a64:
    // 0x2f5a64: 0x2403015c  addiu       $v1, $zero, 0x15C
    ctx->pc = 0x2f5a64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 348));
label_2f5a68:
    // 0x2f5a68: 0x2e82015d  sltiu       $v0, $s4, 0x15D
    ctx->pc = 0x2f5a68u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)349) ? 1 : 0);
label_2f5a6c:
    // 0x2f5a6c: 0x363102c0  ori         $s1, $s1, 0x2C0
    ctx->pc = 0x2f5a6cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)704);
label_2f5a70:
    // 0x2f5a70: 0x62a00a  movz        $s4, $v1, $v0
    ctx->pc = 0x2f5a70u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 3));
label_2f5a74:
    // 0x2f5a74: 0x27a20100  addiu       $v0, $sp, 0x100
    ctx->pc = 0x2f5a74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_2f5a78:
    // 0x2f5a78: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x2f5a78u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_2f5a7c:
    // 0x2f5a7c: 0x12800050  beqz        $s4, . + 4 + (0x50 << 2)
label_2f5a80:
    if (ctx->pc == 0x2F5A80u) {
        ctx->pc = 0x2F5A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5A7Cu;
        // 0x2f5a80: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5A84u;
        goto label_2f5a84;
    }
    ctx->pc = 0x2F5A7Cu;
    {
        const bool branch_taken_0x2f5a7c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5A7Cu;
        // 0x2f5a80: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5a7c) {
            ctx->pc = 0x2F5BC0u;
            goto label_2f5bc0;
        }
    }
    ctx->pc = 0x2F5A84u;
label_2f5a84:
    // 0x2f5a84: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2f5a84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2f5a88:
    // 0x2f5a88: 0x90500000  lbu         $s0, 0x0($v0)
    ctx->pc = 0x2f5a88u;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_2f5a8c:
    // 0x2f5a8c: 0x2603ffd5  addiu       $v1, $s0, -0x2B
    ctx->pc = 0x2f5a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967253));
label_2f5a90:
    // 0x2f5a90: 0x2c62004e  sltiu       $v0, $v1, 0x4E
    ctx->pc = 0x2f5a90u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)78) ? 1 : 0);
label_2f5a94:
    // 0x2f5a94: 0x1040004b  beqz        $v0, . + 4 + (0x4B << 2)
label_2f5a98:
    if (ctx->pc == 0x2F5A98u) {
        ctx->pc = 0x2F5A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5A94u;
        // 0x2f5a98: 0x32220080  andi        $v0, $s1, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5A9Cu;
        goto label_2f5a9c;
    }
    ctx->pc = 0x2F5A94u;
    {
        const bool branch_taken_0x2f5a94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5A94u;
        // 0x2f5a98: 0x32220080  andi        $v0, $s1, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5a94) {
            ctx->pc = 0x2F5BC4u;
            goto label_2f5bc4;
        }
    }
    ctx->pc = 0x2F5A9Cu;
label_2f5a9c:
    // 0x2f5a9c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2f5a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2f5aa0:
    // 0x2f5aa0: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x2f5aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_2f5aa4:
    // 0x2f5aa4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2f5aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2f5aa8:
    // 0x2f5aa8: 0x8c6397c0  lw          $v1, -0x6840($v1)
    ctx->pc = 0x2f5aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294940608)));
label_2f5aac:
    // 0x2f5aac: 0x600008  jr          $v1
label_2f5ab0:
    if (ctx->pc == 0x2F5AB0u) {
        ctx->pc = 0x2F5AB4u;
        goto label_2f5ab4;
    }
    ctx->pc = 0x2F5AACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2F5AB8u: goto label_2f5ab8;
            case 0x2F5AE0u: goto label_2f5ae0;
            case 0x2F5B00u: goto label_2f5b00;
            case 0x2F5B28u: goto label_2f5b28;
            case 0x2F5B40u: goto label_2f5b40;
            case 0x2F5B58u: goto label_2f5b58;
            case 0x2F5BC0u: goto label_2f5bc0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F5AACu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2F5AB4u;
label_2f5ab4:
    // 0x2f5ab4: 0x0  nop
    ctx->pc = 0x2f5ab4u;
    // NOP
label_2f5ab8:
    // 0x2f5ab8: 0x17c00004  bnez        $fp, . + 4 + (0x4 << 2)
label_2f5abc:
    if (ctx->pc == 0x2F5ABCu) {
        ctx->pc = 0x2F5ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5AB8u;
        // 0x2f5abc: 0x32220200  andi        $v0, $s1, 0x200 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)512);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5AC0u;
        goto label_2f5ac0;
    }
    ctx->pc = 0x2F5AB8u;
    {
        const bool branch_taken_0x2f5ab8 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F5ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5AB8u;
        // 0x2f5abc: 0x32220200  andi        $v0, $s1, 0x200 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)512);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5ab8) {
            ctx->pc = 0x2F5ACCu;
            goto label_2f5acc;
        }
    }
    ctx->pc = 0x2F5AC0u;
label_2f5ac0:
    // 0x2f5ac0: 0x241e0008  addiu       $fp, $zero, 0x8
    ctx->pc = 0x2f5ac0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_2f5ac4:
    // 0x2f5ac4: 0x36310100  ori         $s1, $s1, 0x100
    ctx->pc = 0x2f5ac4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)256);
label_2f5ac8:
    // 0x2f5ac8: 0x32220200  andi        $v0, $s1, 0x200
    ctx->pc = 0x2f5ac8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)512);
label_2f5acc:
    // 0x2f5acc: 0x50400029  beql        $v0, $zero, . + 4 + (0x29 << 2)
label_2f5ad0:
    if (ctx->pc == 0x2F5AD0u) {
        ctx->pc = 0x2F5AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5ACCu;
        // 0x2f5ad0: 0x2402fe3f  addiu       $v0, $zero, -0x1C1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966847));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5AD4u;
        goto label_2f5ad4;
    }
    ctx->pc = 0x2F5ACCu;
    {
        const bool branch_taken_0x2f5acc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f5acc) {
            ctx->pc = 0x2F5AD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F5ACCu;
            // 0x2f5ad0: 0x2402fe3f  addiu       $v0, $zero, -0x1C1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966847));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F5B74u;
            goto label_2f5b74;
        }
    }
    ctx->pc = 0x2F5AD4u;
label_2f5ad4:
    // 0x2f5ad4: 0x10000027  b           . + 4 + (0x27 << 2)
label_2f5ad8:
    if (ctx->pc == 0x2F5AD8u) {
        ctx->pc = 0x2F5AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5AD4u;
        // 0x2f5ad8: 0x2402fd3f  addiu       $v0, $zero, -0x2C1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966591));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5ADCu;
        goto label_2f5adc;
    }
    ctx->pc = 0x2F5AD4u;
    {
        const bool branch_taken_0x2f5ad4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5AD4u;
        // 0x2f5ad8: 0x2402fd3f  addiu       $v0, $zero, -0x2C1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966591));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5ad4) {
            ctx->pc = 0x2F5B74u;
            goto label_2f5b74;
        }
    }
    ctx->pc = 0x2F5ADCu;
label_2f5adc:
    // 0x2f5adc: 0x0  nop
    ctx->pc = 0x2f5adcu;
    // NOP
label_2f5ae0:
    // 0x2f5ae0: 0x1e1040  sll         $v0, $fp, 1
    ctx->pc = 0x2f5ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 30), 1));
label_2f5ae4:
    // 0x2f5ae4: 0x2403fe3f  addiu       $v1, $zero, -0x1C1
    ctx->pc = 0x2f5ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966847));
label_2f5ae8:
    // 0x2f5ae8: 0x3c1e0060  lui         $fp, 0x60
    ctx->pc = 0x2f5ae8u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)96 << 16));
label_2f5aec:
    // 0x2f5aec: 0x3c2f021  addu        $fp, $fp, $v0
    ctx->pc = 0x2f5aecu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
label_2f5af0:
    // 0x2f5af0: 0x87de9580  lh          $fp, -0x6A80($fp)
    ctx->pc = 0x2f5af0u;
    SET_GPR_S32(ctx, 30, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 4294940032)));
label_2f5af4:
    // 0x2f5af4: 0x10000020  b           . + 4 + (0x20 << 2)
label_2f5af8:
    if (ctx->pc == 0x2F5AF8u) {
        ctx->pc = 0x2F5AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5AF4u;
        // 0x2f5af8: 0x2238824  and         $s1, $s1, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5AFCu;
        goto label_2f5afc;
    }
    ctx->pc = 0x2F5AF4u;
    {
        const bool branch_taken_0x2f5af4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5AF4u;
        // 0x2f5af8: 0x2238824  and         $s1, $s1, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5af4) {
            ctx->pc = 0x2F5B78u;
            goto label_2f5b78;
        }
    }
    ctx->pc = 0x2F5AFCu;
label_2f5afc:
    // 0x2f5afc: 0x0  nop
    ctx->pc = 0x2f5afcu;
    // NOP
label_2f5b00:
    // 0x2f5b00: 0x1e1040  sll         $v0, $fp, 1
    ctx->pc = 0x2f5b00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 30), 1));
label_2f5b04:
    // 0x2f5b04: 0x3c1e0060  lui         $fp, 0x60
    ctx->pc = 0x2f5b04u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)96 << 16));
label_2f5b08:
    // 0x2f5b08: 0x3c2f021  addu        $fp, $fp, $v0
    ctx->pc = 0x2f5b08u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
label_2f5b0c:
    // 0x2f5b0c: 0x87de9580  lh          $fp, -0x6A80($fp)
    ctx->pc = 0x2f5b0cu;
    SET_GPR_S32(ctx, 30, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 4294940032)));
label_2f5b10:
    // 0x2f5b10: 0x2bc30009  slti        $v1, $fp, 0x9
    ctx->pc = 0x2f5b10u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 30) < (int64_t)(int32_t)9) ? 1 : 0);
label_2f5b14:
    // 0x2f5b14: 0x5460002b  bnel        $v1, $zero, . + 4 + (0x2B << 2)
label_2f5b18:
    if (ctx->pc == 0x2F5B18u) {
        ctx->pc = 0x2F5B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5B14u;
        // 0x2f5b18: 0x32220080  andi        $v0, $s1, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5B1Cu;
        goto label_2f5b1c;
    }
    ctx->pc = 0x2F5B14u;
    {
        const bool branch_taken_0x2f5b14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f5b14) {
            ctx->pc = 0x2F5B18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F5B14u;
            // 0x2f5b18: 0x32220080  andi        $v0, $s1, 0x80 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)128);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F5BC4u;
            goto label_2f5bc4;
        }
    }
    ctx->pc = 0x2F5B1Cu;
label_2f5b1c:
    // 0x2f5b1c: 0x10000015  b           . + 4 + (0x15 << 2)
label_2f5b20:
    if (ctx->pc == 0x2F5B20u) {
        ctx->pc = 0x2F5B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5B1Cu;
        // 0x2f5b20: 0x2402fe3f  addiu       $v0, $zero, -0x1C1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966847));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5B24u;
        goto label_2f5b24;
    }
    ctx->pc = 0x2F5B1Cu;
    {
        const bool branch_taken_0x2f5b1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5B1Cu;
        // 0x2f5b20: 0x2402fe3f  addiu       $v0, $zero, -0x1C1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966847));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5b1c) {
            ctx->pc = 0x2F5B74u;
            goto label_2f5b74;
        }
    }
    ctx->pc = 0x2F5B24u;
label_2f5b24:
    // 0x2f5b24: 0x0  nop
    ctx->pc = 0x2f5b24u;
    // NOP
label_2f5b28:
    // 0x2f5b28: 0x2bc2000b  slti        $v0, $fp, 0xB
    ctx->pc = 0x2f5b28u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 30) < (int64_t)(int32_t)11) ? 1 : 0);
label_2f5b2c:
    // 0x2f5b2c: 0x54400025  bnel        $v0, $zero, . + 4 + (0x25 << 2)
label_2f5b30:
    if (ctx->pc == 0x2F5B30u) {
        ctx->pc = 0x2F5B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5B2Cu;
        // 0x2f5b30: 0x32220080  andi        $v0, $s1, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5B34u;
        goto label_2f5b34;
    }
    ctx->pc = 0x2F5B2Cu;
    {
        const bool branch_taken_0x2f5b2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f5b2c) {
            ctx->pc = 0x2F5B30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F5B2Cu;
            // 0x2f5b30: 0x32220080  andi        $v0, $s1, 0x80 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)128);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F5BC4u;
            goto label_2f5bc4;
        }
    }
    ctx->pc = 0x2F5B34u;
label_2f5b34:
    // 0x2f5b34: 0x1000000f  b           . + 4 + (0xF << 2)
label_2f5b38:
    if (ctx->pc == 0x2F5B38u) {
        ctx->pc = 0x2F5B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5B34u;
        // 0x2f5b38: 0x2402fe3f  addiu       $v0, $zero, -0x1C1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966847));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5B3Cu;
        goto label_2f5b3c;
    }
    ctx->pc = 0x2F5B34u;
    {
        const bool branch_taken_0x2f5b34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5B34u;
        // 0x2f5b38: 0x2402fe3f  addiu       $v0, $zero, -0x1C1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966847));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5b34) {
            ctx->pc = 0x2F5B74u;
            goto label_2f5b74;
        }
    }
    ctx->pc = 0x2F5B3Cu;
label_2f5b3c:
    // 0x2f5b3c: 0x0  nop
    ctx->pc = 0x2f5b3cu;
    // NOP
label_2f5b40:
    // 0x2f5b40: 0x32220040  andi        $v0, $s1, 0x40
    ctx->pc = 0x2f5b40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)64);
label_2f5b44:
    // 0x2f5b44: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_2f5b48:
    if (ctx->pc == 0x2F5B48u) {
        ctx->pc = 0x2F5B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5B44u;
        // 0x2f5b48: 0x2402ffbf  addiu       $v0, $zero, -0x41 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5B4Cu;
        goto label_2f5b4c;
    }
    ctx->pc = 0x2F5B44u;
    {
        const bool branch_taken_0x2f5b44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5B44u;
        // 0x2f5b48: 0x2402ffbf  addiu       $v0, $zero, -0x41 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5b44) {
            ctx->pc = 0x2F5BC0u;
            goto label_2f5bc0;
        }
    }
    ctx->pc = 0x2F5B4Cu;
label_2f5b4c:
    // 0x2f5b4c: 0x1000000a  b           . + 4 + (0xA << 2)
label_2f5b50:
    if (ctx->pc == 0x2F5B50u) {
        ctx->pc = 0x2F5B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5B4Cu;
        // 0x2f5b50: 0x2228824  and         $s1, $s1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5B54u;
        goto label_2f5b54;
    }
    ctx->pc = 0x2F5B4Cu;
    {
        const bool branch_taken_0x2f5b4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5B4Cu;
        // 0x2f5b50: 0x2228824  and         $s1, $s1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5b4c) {
            ctx->pc = 0x2F5B78u;
            goto label_2f5b78;
        }
    }
    ctx->pc = 0x2F5B54u;
label_2f5b54:
    // 0x2f5b54: 0x0  nop
    ctx->pc = 0x2f5b54u;
    // NOP
label_2f5b58:
    // 0x2f5b58: 0x32220100  andi        $v0, $s1, 0x100
    ctx->pc = 0x2f5b58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)256);
label_2f5b5c:
    // 0x2f5b5c: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_2f5b60:
    if (ctx->pc == 0x2F5B60u) {
        ctx->pc = 0x2F5B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5B5Cu;
        // 0x2f5b60: 0x27a20101  addiu       $v0, $sp, 0x101 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 257));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5B64u;
        goto label_2f5b64;
    }
    ctx->pc = 0x2F5B5Cu;
    {
        const bool branch_taken_0x2f5b5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5B5Cu;
        // 0x2f5b60: 0x27a20101  addiu       $v0, $sp, 0x101 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 257));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5b5c) {
            ctx->pc = 0x2F5BC0u;
            goto label_2f5bc0;
        }
    }
    ctx->pc = 0x2F5B64u;
label_2f5b64:
    // 0x2f5b64: 0x16620017  bne         $s3, $v0, . + 4 + (0x17 << 2)
label_2f5b68:
    if (ctx->pc == 0x2F5B68u) {
        ctx->pc = 0x2F5B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5B64u;
        // 0x2f5b68: 0x32220080  andi        $v0, $s1, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5B6Cu;
        goto label_2f5b6c;
    }
    ctx->pc = 0x2F5B64u;
    {
        const bool branch_taken_0x2f5b64 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x2F5B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5B64u;
        // 0x2f5b68: 0x32220080  andi        $v0, $s1, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5b64) {
            ctx->pc = 0x2F5BC4u;
            goto label_2f5bc4;
        }
    }
    ctx->pc = 0x2F5B6Cu;
label_2f5b6c:
    // 0x2f5b6c: 0x2402feff  addiu       $v0, $zero, -0x101
    ctx->pc = 0x2f5b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967039));
label_2f5b70:
    // 0x2f5b70: 0x241e0010  addiu       $fp, $zero, 0x10
    ctx->pc = 0x2f5b70u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_2f5b74:
    // 0x2f5b74: 0x2228824  and         $s1, $s1, $v0
    ctx->pc = 0x2f5b74u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
label_2f5b78:
    // 0x2f5b78: 0xa2700000  sb          $s0, 0x0($s3)
    ctx->pc = 0x2f5b78u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 16));
label_2f5b7c:
    // 0x2f5b7c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2f5b7cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_2f5b80:
    // 0x2f5b80: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x2f5b80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_2f5b84:
    // 0x2f5b84: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2f5b84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_2f5b88:
    // 0x2f5b88: 0x18400005  blez        $v0, . + 4 + (0x5 << 2)
label_2f5b8c:
    if (ctx->pc == 0x2F5B8Cu) {
        ctx->pc = 0x2F5B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5B88u;
        // 0x2f5b8c: 0xae420004  sw          $v0, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5B90u;
        goto label_2f5b90;
    }
    ctx->pc = 0x2F5B88u;
    {
        const bool branch_taken_0x2f5b88 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2F5B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5B88u;
        // 0x2f5b8c: 0xae420004  sw          $v0, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5b88) {
            ctx->pc = 0x2F5BA0u;
            goto label_2f5ba0;
        }
    }
    ctx->pc = 0x2F5B90u;
label_2f5b90:
    // 0x2f5b90: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2f5b90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2f5b94:
    // 0x2f5b94: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2f5b94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2f5b98:
    // 0x2f5b98: 0x10000006  b           . + 4 + (0x6 << 2)
label_2f5b9c:
    if (ctx->pc == 0x2F5B9Cu) {
        ctx->pc = 0x2F5B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5B98u;
        // 0x2f5b9c: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5BA0u;
        goto label_2f5ba0;
    }
    ctx->pc = 0x2F5B98u;
    {
        const bool branch_taken_0x2f5b98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5B98u;
        // 0x2f5b9c: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5b98) {
            ctx->pc = 0x2F5BB4u;
            goto label_2f5bb4;
        }
    }
    ctx->pc = 0x2F5BA0u;
label_2f5ba0:
    // 0x2f5ba0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2f5ba0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2f5ba4:
    // 0x2f5ba4: 0xc0bc0e0  jal         func_2F0380
label_2f5ba8:
    if (ctx->pc == 0x2F5BA8u) {
        ctx->pc = 0x2F5BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5BA4u;
        // 0x2f5ba8: 0x7fa80290  sq          $t0, 0x290($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 656), GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5BACu;
        goto label_2f5bac;
    }
    ctx->pc = 0x2F5BA4u;
    SET_GPR_U32(ctx, 31, 0x2F5BACu);
    ctx->pc = 0x2F5BA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5BA4u;
    // 0x2f5ba8: 0x7fa80290  sq          $t0, 0x290($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 656), GPR_VEC(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F0380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0380u, 0x2F5BA4u, 0x2F5BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5BACu;
label_2f5bac:
    // 0x2f5bac: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_2f5bb0:
    if (ctx->pc == 0x2F5BB0u) {
        ctx->pc = 0x2F5BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5BACu;
        // 0x2f5bb0: 0x7ba80290  lq          $t0, 0x290($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 656)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5BB4u;
        goto label_2f5bb4;
    }
    ctx->pc = 0x2F5BACu;
    {
        const bool branch_taken_0x2f5bac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F5BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5BACu;
        // 0x2f5bb0: 0x7ba80290  lq          $t0, 0x290($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 656)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5bac) {
            ctx->pc = 0x2F5BC0u;
            goto label_2f5bc0;
        }
    }
    ctx->pc = 0x2F5BB4u;
label_2f5bb4:
    // 0x2f5bb4: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x2f5bb4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
label_2f5bb8:
    // 0x2f5bb8: 0x5680ffb3  bnel        $s4, $zero, . + 4 + (-0x4D << 2)
label_2f5bbc:
    if (ctx->pc == 0x2F5BBCu) {
        ctx->pc = 0x2F5BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5BB8u;
        // 0x2f5bbc: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5BC0u;
        goto label_2f5bc0;
    }
    ctx->pc = 0x2F5BB8u;
    {
        const bool branch_taken_0x2f5bb8 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f5bb8) {
            ctx->pc = 0x2F5BBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F5BB8u;
            // 0x2f5bbc: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F5A88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f5a88;
        }
    }
    ctx->pc = 0x2F5BC0u;
label_2f5bc0:
    // 0x2f5bc0: 0x32220080  andi        $v0, $s1, 0x80
    ctx->pc = 0x2f5bc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)128);
label_2f5bc4:
    // 0x2f5bc4: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
label_2f5bc8:
    if (ctx->pc == 0x2F5BC8u) {
        ctx->pc = 0x2F5BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5BC4u;
        // 0x2f5bc8: 0x8270ffff  lb          $s0, -0x1($s3) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 4294967295)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5BCCu;
        goto label_2f5bcc;
    }
    ctx->pc = 0x2F5BC4u;
    {
        const bool branch_taken_0x2f5bc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f5bc4) {
            ctx->pc = 0x2F5BC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F5BC4u;
            // 0x2f5bc8: 0x8270ffff  lb          $s0, -0x1($s3) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 4294967295)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F5BF0u;
            goto label_2f5bf0;
        }
    }
    ctx->pc = 0x2F5BCCu;
label_2f5bcc:
    // 0x2f5bcc: 0x27a30100  addiu       $v1, $sp, 0x100
    ctx->pc = 0x2f5bccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_2f5bd0:
    // 0x2f5bd0: 0x73102b  sltu        $v0, $v1, $s3
    ctx->pc = 0x2f5bd0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
label_2f5bd4:
    // 0x2f5bd4: 0x50400107  beql        $v0, $zero, . + 4 + (0x107 << 2)
label_2f5bd8:
    if (ctx->pc == 0x2F5BD8u) {
        ctx->pc = 0x2F5BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5BD4u;
        // 0x2f5bd8: 0x8fa20260  lw          $v0, 0x260($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5BDCu;
        goto label_2f5bdc;
    }
    ctx->pc = 0x2F5BD4u;
    {
        const bool branch_taken_0x2f5bd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f5bd4) {
            ctx->pc = 0x2F5BD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F5BD4u;
            // 0x2f5bd8: 0x8fa20260  lw          $v0, 0x260($sp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F5FF4u;
            goto label_2f5ff4;
        }
    }
    ctx->pc = 0x2F5BDCu;
label_2f5bdc:
    // 0x2f5bdc: 0x8264ffff  lb          $a0, -0x1($s3)
    ctx->pc = 0x2f5bdcu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 4294967295)));
label_2f5be0:
    // 0x2f5be0: 0xc0bcde2  jal         func_2F3788
label_2f5be4:
    if (ctx->pc == 0x2F5BE4u) {
        ctx->pc = 0x2F5BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5BE0u;
        // 0x2f5be4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5BE8u;
        goto label_2f5be8;
    }
    ctx->pc = 0x2F5BE0u;
    SET_GPR_U32(ctx, 31, 0x2F5BE8u);
    ctx->pc = 0x2F5BE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5BE0u;
    // 0x2f5be4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F3788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F3788u, 0x2F5BE0u, 0x2F5BE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5BE8u;
label_2f5be8:
    // 0x2f5be8: 0x10000102  b           . + 4 + (0x102 << 2)
label_2f5bec:
    if (ctx->pc == 0x2F5BECu) {
        ctx->pc = 0x2F5BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5BE8u;
        // 0x2f5bec: 0x8fa20260  lw          $v0, 0x260($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5BF0u;
        goto label_2f5bf0;
    }
    ctx->pc = 0x2F5BE8u;
    {
        const bool branch_taken_0x2f5be8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5BE8u;
        // 0x2f5bec: 0x8fa20260  lw          $v0, 0x260($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5be8) {
            ctx->pc = 0x2F5FF4u;
            goto label_2f5ff4;
        }
    }
    ctx->pc = 0x2F5BF0u;
label_2f5bf0:
    // 0x2f5bf0: 0x24020078  addiu       $v0, $zero, 0x78
    ctx->pc = 0x2f5bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
label_2f5bf4:
    // 0x2f5bf4: 0x12020003  beq         $s0, $v0, . + 4 + (0x3 << 2)
label_2f5bf8:
    if (ctx->pc == 0x2F5BF8u) {
        ctx->pc = 0x2F5BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5BF4u;
        // 0x2f5bf8: 0x24020058  addiu       $v0, $zero, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5BFCu;
        goto label_2f5bfc;
    }
    ctx->pc = 0x2F5BF4u;
    {
        const bool branch_taken_0x2f5bf4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F5BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5BF4u;
        // 0x2f5bf8: 0x24020058  addiu       $v0, $zero, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5bf4) {
            ctx->pc = 0x2F5C04u;
            goto label_2f5c04;
        }
    }
    ctx->pc = 0x2F5BFCu;
label_2f5bfc:
    // 0x2f5bfc: 0x16020008  bne         $s0, $v0, . + 4 + (0x8 << 2)
label_2f5c00:
    if (ctx->pc == 0x2F5C00u) {
        ctx->pc = 0x2F5C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5BFCu;
        // 0x2f5c00: 0x32220008  andi        $v0, $s1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5C04u;
        goto label_2f5c04;
    }
    ctx->pc = 0x2F5BFCu;
    {
        const bool branch_taken_0x2f5bfc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x2F5C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5BFCu;
        // 0x2f5c00: 0x32220008  andi        $v0, $s1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5bfc) {
            ctx->pc = 0x2F5C20u;
            goto label_2f5c20;
        }
    }
    ctx->pc = 0x2F5C04u;
label_2f5c04:
    // 0x2f5c04: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f5c04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f5c08:
    // 0x2f5c08: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2f5c08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2f5c0c:
    // 0x2f5c0c: 0xc0bcde2  jal         func_2F3788
label_2f5c10:
    if (ctx->pc == 0x2F5C10u) {
        ctx->pc = 0x2F5C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5C0Cu;
        // 0x2f5c10: 0x7fa80290  sq          $t0, 0x290($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 656), GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5C14u;
        goto label_2f5c14;
    }
    ctx->pc = 0x2F5C0Cu;
    SET_GPR_U32(ctx, 31, 0x2F5C14u);
    ctx->pc = 0x2F5C10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5C0Cu;
    // 0x2f5c10: 0x7fa80290  sq          $t0, 0x290($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 656), GPR_VEC(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F3788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F3788u, 0x2F5C0Cu, 0x2F5C14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5C14u;
label_2f5c14:
    // 0x2f5c14: 0x7ba80290  lq          $t0, 0x290($sp)
    ctx->pc = 0x2f5c14u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 656)));
label_2f5c18:
    // 0x2f5c18: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x2f5c18u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_2f5c1c:
    // 0x2f5c1c: 0x32220008  andi        $v0, $s1, 0x8
    ctx->pc = 0x2f5c1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)8);
label_2f5c20:
    // 0x2f5c20: 0x1440002d  bnez        $v0, . + 4 + (0x2D << 2)
label_2f5c24:
    if (ctx->pc == 0x2F5C24u) {
        ctx->pc = 0x2F5C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5C20u;
        // 0x2f5c24: 0x27a30100  addiu       $v1, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5C28u;
        goto label_2f5c28;
    }
    ctx->pc = 0x2F5C20u;
    {
        const bool branch_taken_0x2f5c20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F5C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5C20u;
        // 0x2f5c24: 0x27a30100  addiu       $v1, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5c20) {
            ctx->pc = 0x2F5CD8u;
            goto label_2f5cd8;
        }
    }
    ctx->pc = 0x2F5C28u;
label_2f5c28:
    // 0x2f5c28: 0xa2600000  sb          $zero, 0x0($s3)
    ctx->pc = 0x2f5c28u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 0));
label_2f5c2c:
    // 0x2f5c2c: 0x27a20100  addiu       $v0, $sp, 0x100
    ctx->pc = 0x2f5c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_2f5c30:
    // 0x2f5c30: 0x7fa80290  sq          $t0, 0x290($sp)
    ctx->pc = 0x2f5c30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 656), GPR_VEC(ctx, 8));
label_2f5c34:
    // 0x2f5c34: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f5c34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f5c38:
    // 0x2f5c38: 0x8fa30264  lw          $v1, 0x264($sp)
    ctx->pc = 0x2f5c38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
label_2f5c3c:
    // 0x2f5c3c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2f5c3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f5c40:
    // 0x2f5c40: 0x60f809  jalr        $v1
label_2f5c44:
    if (ctx->pc == 0x2F5C44u) {
        ctx->pc = 0x2F5C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5C40u;
        // 0x2f5c44: 0x3c0302d  daddu       $a2, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5C48u;
        goto label_2f5c48;
    }
    ctx->pc = 0x2F5C40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2F5C48u);
        ctx->pc = 0x2F5C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5C40u;
        // 0x2f5c44: 0x3c0302d  daddu       $a2, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F5C40u, 0x2F5C48u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2F5C48u;
label_2f5c48:
    // 0x2f5c48: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2f5c48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f5c4c:
    // 0x2f5c4c: 0x32220010  andi        $v0, $s1, 0x10
    ctx->pc = 0x2f5c4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)16);
label_2f5c50:
    // 0x2f5c50: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_2f5c54:
    if (ctx->pc == 0x2F5C54u) {
        ctx->pc = 0x2F5C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5C50u;
        // 0x2f5c54: 0x7ba80290  lq          $t0, 0x290($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 656)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5C58u;
        goto label_2f5c58;
    }
    ctx->pc = 0x2F5C50u;
    {
        const bool branch_taken_0x2f5c50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5C50u;
        // 0x2f5c54: 0x7ba80290  lq          $t0, 0x290($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 656)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5c50) {
            ctx->pc = 0x2F5C78u;
            goto label_2f5c78;
        }
    }
    ctx->pc = 0x2F5C58u;
label_2f5c58:
    // 0x2f5c58: 0x2e0102d  daddu       $v0, $s7, $zero
    ctx->pc = 0x2f5c58u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_2f5c5c:
    // 0x2f5c5c: 0x26f70008  addiu       $s7, $s7, 0x8
    ctx->pc = 0x2f5c5cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 8));
label_2f5c60:
    // 0x2f5c60: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2f5c60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2f5c64:
    // 0x2f5c64: 0x5183c  dsll32      $v1, $a1, 0
    ctx->pc = 0x2f5c64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 0));
label_2f5c68:
    // 0x2f5c68: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x2f5c68u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
label_2f5c6c:
    // 0x2f5c6c: 0x10000016  b           . + 4 + (0x16 << 2)
label_2f5c70:
    if (ctx->pc == 0x2F5C70u) {
        ctx->pc = 0x2F5C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5C6Cu;
        // 0x2f5c70: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5C74u;
        goto label_2f5c74;
    }
    ctx->pc = 0x2F5C6Cu;
    {
        const bool branch_taken_0x2f5c6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5C6Cu;
        // 0x2f5c70: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5c6c) {
            ctx->pc = 0x2F5CC8u;
            goto label_2f5cc8;
        }
    }
    ctx->pc = 0x2F5C74u;
label_2f5c74:
    // 0x2f5c74: 0x0  nop
    ctx->pc = 0x2f5c74u;
    // NOP
label_2f5c78:
    // 0x2f5c78: 0x32220004  andi        $v0, $s1, 0x4
    ctx->pc = 0x2f5c78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)4);
label_2f5c7c:
    // 0x2f5c7c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2f5c80:
    if (ctx->pc == 0x2F5C80u) {
        ctx->pc = 0x2F5C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5C7Cu;
        // 0x2f5c80: 0x2e0182d  daddu       $v1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5C84u;
        goto label_2f5c84;
    }
    ctx->pc = 0x2F5C7Cu;
    {
        const bool branch_taken_0x2f5c7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5C7Cu;
        // 0x2f5c80: 0x2e0182d  daddu       $v1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5c7c) {
            ctx->pc = 0x2F5C98u;
            goto label_2f5c98;
        }
    }
    ctx->pc = 0x2F5C84u;
label_2f5c84:
    // 0x2f5c84: 0x26f70008  addiu       $s7, $s7, 0x8
    ctx->pc = 0x2f5c84u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 8));
label_2f5c88:
    // 0x2f5c88: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2f5c88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2f5c8c:
    // 0x2f5c8c: 0x30a2ffff  andi        $v0, $a1, 0xFFFF
    ctx->pc = 0x2f5c8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
label_2f5c90:
    // 0x2f5c90: 0x1000000d  b           . + 4 + (0xD << 2)
label_2f5c94:
    if (ctx->pc == 0x2F5C94u) {
        ctx->pc = 0x2F5C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5C90u;
        // 0x2f5c94: 0xa4620000  sh          $v0, 0x0($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5C98u;
        goto label_2f5c98;
    }
    ctx->pc = 0x2F5C90u;
    {
        const bool branch_taken_0x2f5c90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5C90u;
        // 0x2f5c94: 0xa4620000  sh          $v0, 0x0($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5c90) {
            ctx->pc = 0x2F5CC8u;
            goto label_2f5cc8;
        }
    }
    ctx->pc = 0x2F5C98u;
label_2f5c98:
    // 0x2f5c98: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x2f5c98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_2f5c9c:
    // 0x2f5c9c: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_2f5ca0:
    if (ctx->pc == 0x2F5CA0u) {
        ctx->pc = 0x2F5CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5C9Cu;
        // 0x2f5ca0: 0x26f70008  addiu       $s7, $s7, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5CA4u;
        goto label_2f5ca4;
    }
    ctx->pc = 0x2F5C9Cu;
    {
        const bool branch_taken_0x2f5c9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f5c9c) {
            ctx->pc = 0x2F5CA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F5C9Cu;
            // 0x2f5ca0: 0x26f70008  addiu       $s7, $s7, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F5CB8u;
            goto label_2f5cb8;
        }
    }
    ctx->pc = 0x2F5CA4u;
label_2f5ca4:
    // 0x2f5ca4: 0x2e0102d  daddu       $v0, $s7, $zero
    ctx->pc = 0x2f5ca4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_2f5ca8:
    // 0x2f5ca8: 0x26f70008  addiu       $s7, $s7, 0x8
    ctx->pc = 0x2f5ca8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 8));
label_2f5cac:
    // 0x2f5cac: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2f5cacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2f5cb0:
    // 0x2f5cb0: 0x10000005  b           . + 4 + (0x5 << 2)
label_2f5cb4:
    if (ctx->pc == 0x2F5CB4u) {
        ctx->pc = 0x2F5CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5CB0u;
        // 0x2f5cb4: 0xfc450000  sd          $a1, 0x0($v0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5CB8u;
        goto label_2f5cb8;
    }
    ctx->pc = 0x2F5CB0u;
    {
        const bool branch_taken_0x2f5cb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5CB0u;
        // 0x2f5cb4: 0xfc450000  sd          $a1, 0x0($v0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5cb0) {
            ctx->pc = 0x2F5CC8u;
            goto label_2f5cc8;
        }
    }
    ctx->pc = 0x2F5CB8u;
label_2f5cb8:
    // 0x2f5cb8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2f5cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2f5cbc:
    // 0x2f5cbc: 0x5103c  dsll32      $v0, $a1, 0
    ctx->pc = 0x2f5cbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 0));
label_2f5cc0:
    // 0x2f5cc0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2f5cc0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_2f5cc4:
    // 0x2f5cc4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2f5cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_2f5cc8:
    // 0x2f5cc8: 0x8fa40260  lw          $a0, 0x260($sp)
    ctx->pc = 0x2f5cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
label_2f5ccc:
    // 0x2f5ccc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2f5cccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_2f5cd0:
    // 0x2f5cd0: 0xafa40260  sw          $a0, 0x260($sp)
    ctx->pc = 0x2f5cd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 608), GPR_U32(ctx, 4));
label_2f5cd4:
    // 0x2f5cd4: 0x27a30100  addiu       $v1, $sp, 0x100
    ctx->pc = 0x2f5cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_2f5cd8:
    // 0x2f5cd8: 0x2631023  subu        $v0, $s3, $v1
    ctx->pc = 0x2f5cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
label_2f5cdc:
    // 0x2f5cdc: 0x1000fdc0  b           . + 4 + (-0x240 << 2)
label_2f5ce0:
    if (ctx->pc == 0x2F5CE0u) {
        ctx->pc = 0x2F5CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5CDCu;
        // 0x2f5ce0: 0x1024021  addu        $t0, $t0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5CE4u;
        goto label_2f5ce4;
    }
    ctx->pc = 0x2F5CDCu;
    {
        const bool branch_taken_0x2f5cdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5CDCu;
        // 0x2f5ce0: 0x1024021  addu        $t0, $t0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5cdc) {
            ctx->pc = 0x2F53E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f53e0;
        }
    }
    ctx->pc = 0x2F5CE4u;
label_2f5ce4:
    // 0x2f5ce4: 0x0  nop
    ctx->pc = 0x2f5ce4u;
    // NOP
label_2f5ce8:
    // 0x2f5ce8: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x2f5ce8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
label_2f5cec:
    // 0x2f5cec: 0x2403015c  addiu       $v1, $zero, 0x15C
    ctx->pc = 0x2f5cecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 348));
label_2f5cf0:
    // 0x2f5cf0: 0x2e82015d  sltiu       $v0, $s4, 0x15D
    ctx->pc = 0x2f5cf0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)349) ? 1 : 0);
label_2f5cf4:
    // 0x2f5cf4: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x2f5cf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_2f5cf8:
    // 0x2f5cf8: 0x62a00a  movz        $s4, $v1, $v0
    ctx->pc = 0x2f5cf8u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 3));
label_2f5cfc:
    // 0x2f5cfc: 0x363103c0  ori         $s1, $s1, 0x3C0
    ctx->pc = 0x2f5cfcu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)960);
label_2f5d00:
    // 0x2f5d00: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x2f5d00u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_2f5d04:
    // 0x2f5d04: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x2f5d04u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f5d08:
    // 0x2f5d08: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2f5d08u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f5d0c:
    // 0x2f5d0c: 0x12800049  beqz        $s4, . + 4 + (0x49 << 2)
label_2f5d10:
    if (ctx->pc == 0x2F5D10u) {
        ctx->pc = 0x2F5D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5D0Cu;
        // 0x2f5d10: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5D14u;
        goto label_2f5d14;
    }
    ctx->pc = 0x2F5D0Cu;
    {
        const bool branch_taken_0x2f5d0c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5D0Cu;
        // 0x2f5d10: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5d0c) {
            ctx->pc = 0x2F5E34u;
            goto label_2f5e34;
        }
    }
    ctx->pc = 0x2F5D14u;
label_2f5d14:
    // 0x2f5d14: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2f5d14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2f5d18:
    // 0x2f5d18: 0x90500000  lbu         $s0, 0x0($v0)
    ctx->pc = 0x2f5d18u;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_2f5d1c:
    // 0x2f5d1c: 0x2603ffd5  addiu       $v1, $s0, -0x2B
    ctx->pc = 0x2f5d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967253));
label_2f5d20:
    // 0x2f5d20: 0x2c62003b  sltiu       $v0, $v1, 0x3B
    ctx->pc = 0x2f5d20u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)59) ? 1 : 0);
label_2f5d24:
    // 0x2f5d24: 0x10400043  beqz        $v0, . + 4 + (0x43 << 2)
label_2f5d28:
    if (ctx->pc == 0x2F5D28u) {
        ctx->pc = 0x2F5D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5D24u;
        // 0x2f5d28: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5D2Cu;
        goto label_2f5d2c;
    }
    ctx->pc = 0x2F5D24u;
    {
        const bool branch_taken_0x2f5d24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5D24u;
        // 0x2f5d28: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5d24) {
            ctx->pc = 0x2F5E34u;
            goto label_2f5e34;
        }
    }
    ctx->pc = 0x2F5D2Cu;
label_2f5d2c:
    // 0x2f5d2c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x2f5d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_2f5d30:
    // 0x2f5d30: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2f5d30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2f5d34:
    // 0x2f5d34: 0x8c639900  lw          $v1, -0x6700($v1)
    ctx->pc = 0x2f5d34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294940928)));
label_2f5d38:
    // 0x2f5d38: 0x600008  jr          $v1
label_2f5d3c:
    if (ctx->pc == 0x2F5D3Cu) {
        ctx->pc = 0x2F5D40u;
        goto label_2f5d40;
    }
    ctx->pc = 0x2F5D38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2F5D40u: goto label_2f5d40;
            case 0x2F5D58u: goto label_2f5d58;
            case 0x2F5D68u: goto label_2f5d68;
            case 0x2F5D80u: goto label_2f5d80;
            case 0x2F5D98u: goto label_2f5d98;
            case 0x2F5E34u: goto label_2f5e34;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F5D38u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2F5D40u;
label_2f5d40:
    // 0x2f5d40: 0x32220080  andi        $v0, $s1, 0x80
    ctx->pc = 0x2f5d40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)128);
label_2f5d44:
    // 0x2f5d44: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_2f5d48:
    if (ctx->pc == 0x2F5D48u) {
        ctx->pc = 0x2F5D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5D44u;
        // 0x2f5d48: 0x2402ffbf  addiu       $v0, $zero, -0x41 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5D4Cu;
        goto label_2f5d4c;
    }
    ctx->pc = 0x2F5D44u;
    {
        const bool branch_taken_0x2f5d44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5D44u;
        // 0x2f5d48: 0x2402ffbf  addiu       $v0, $zero, -0x41 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5d44) {
            ctx->pc = 0x2F5D58u;
            goto label_2f5d58;
        }
    }
    ctx->pc = 0x2F5D4Cu;
label_2f5d4c:
    // 0x2f5d4c: 0x66d60001  daddiu      $s6, $s6, 0x1
    ctx->pc = 0x2f5d4cu;
    SET_GPR_S64(ctx, 22, (int64_t)GPR_S64(ctx, 22) + (int64_t)(int32_t)1);
label_2f5d50:
    // 0x2f5d50: 0x10000026  b           . + 4 + (0x26 << 2)
label_2f5d54:
    if (ctx->pc == 0x2F5D54u) {
        ctx->pc = 0x2F5D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5D50u;
        // 0x2f5d54: 0x2228824  and         $s1, $s1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5D58u;
        goto label_2f5d58;
    }
    ctx->pc = 0x2F5D50u;
    {
        const bool branch_taken_0x2f5d50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5D50u;
        // 0x2f5d54: 0x2228824  and         $s1, $s1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5d50) {
            ctx->pc = 0x2F5DECu;
            goto label_2f5dec;
        }
    }
    ctx->pc = 0x2F5D58u;
label_2f5d58:
    // 0x2f5d58: 0x2402ff3f  addiu       $v0, $zero, -0xC1
    ctx->pc = 0x2f5d58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967103));
label_2f5d5c:
    // 0x2f5d5c: 0x10000020  b           . + 4 + (0x20 << 2)
label_2f5d60:
    if (ctx->pc == 0x2F5D60u) {
        ctx->pc = 0x2F5D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5D5Cu;
        // 0x2f5d60: 0x2228824  and         $s1, $s1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5D64u;
        goto label_2f5d64;
    }
    ctx->pc = 0x2F5D5Cu;
    {
        const bool branch_taken_0x2f5d5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5D5Cu;
        // 0x2f5d60: 0x2228824  and         $s1, $s1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5d5c) {
            ctx->pc = 0x2F5DE0u;
            goto label_2f5de0;
        }
    }
    ctx->pc = 0x2F5D64u;
label_2f5d64:
    // 0x2f5d64: 0x0  nop
    ctx->pc = 0x2f5d64u;
    // NOP
label_2f5d68:
    // 0x2f5d68: 0x32220040  andi        $v0, $s1, 0x40
    ctx->pc = 0x2f5d68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)64);
label_2f5d6c:
    // 0x2f5d6c: 0x10400031  beqz        $v0, . + 4 + (0x31 << 2)
label_2f5d70:
    if (ctx->pc == 0x2F5D70u) {
        ctx->pc = 0x2F5D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5D6Cu;
        // 0x2f5d70: 0x2402ffbf  addiu       $v0, $zero, -0x41 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5D74u;
        goto label_2f5d74;
    }
    ctx->pc = 0x2F5D6Cu;
    {
        const bool branch_taken_0x2f5d6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5D6Cu;
        // 0x2f5d70: 0x2402ffbf  addiu       $v0, $zero, -0x41 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5d6c) {
            ctx->pc = 0x2F5E34u;
            goto label_2f5e34;
        }
    }
    ctx->pc = 0x2F5D74u;
label_2f5d74:
    // 0x2f5d74: 0x1000001a  b           . + 4 + (0x1A << 2)
label_2f5d78:
    if (ctx->pc == 0x2F5D78u) {
        ctx->pc = 0x2F5D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5D74u;
        // 0x2f5d78: 0x2228824  and         $s1, $s1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5D7Cu;
        goto label_2f5d7c;
    }
    ctx->pc = 0x2F5D74u;
    {
        const bool branch_taken_0x2f5d74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5D74u;
        // 0x2f5d78: 0x2228824  and         $s1, $s1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5d74) {
            ctx->pc = 0x2F5DE0u;
            goto label_2f5de0;
        }
    }
    ctx->pc = 0x2F5D7Cu;
label_2f5d7c:
    // 0x2f5d7c: 0x0  nop
    ctx->pc = 0x2f5d7cu;
    // NOP
label_2f5d80:
    // 0x2f5d80: 0x32220100  andi        $v0, $s1, 0x100
    ctx->pc = 0x2f5d80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)256);
label_2f5d84:
    // 0x2f5d84: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
label_2f5d88:
    if (ctx->pc == 0x2F5D88u) {
        ctx->pc = 0x2F5D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5D84u;
        // 0x2f5d88: 0x2402febf  addiu       $v0, $zero, -0x141 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966975));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5D8Cu;
        goto label_2f5d8c;
    }
    ctx->pc = 0x2F5D84u;
    {
        const bool branch_taken_0x2f5d84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5D84u;
        // 0x2f5d88: 0x2402febf  addiu       $v0, $zero, -0x141 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966975));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5d84) {
            ctx->pc = 0x2F5E34u;
            goto label_2f5e34;
        }
    }
    ctx->pc = 0x2F5D8Cu;
label_2f5d8c:
    // 0x2f5d8c: 0xffb60268  sd          $s6, 0x268($sp)
    ctx->pc = 0x2f5d8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 616), GPR_U64(ctx, 22));
label_2f5d90:
    // 0x2f5d90: 0x10000013  b           . + 4 + (0x13 << 2)
label_2f5d94:
    if (ctx->pc == 0x2F5D94u) {
        ctx->pc = 0x2F5D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5D90u;
        // 0x2f5d94: 0x2228824  and         $s1, $s1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5D98u;
        goto label_2f5d98;
    }
    ctx->pc = 0x2F5D90u;
    {
        const bool branch_taken_0x2f5d90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5D90u;
        // 0x2f5d94: 0x2228824  and         $s1, $s1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5d90) {
            ctx->pc = 0x2F5DE0u;
            goto label_2f5de0;
        }
    }
    ctx->pc = 0x2F5D98u;
label_2f5d98:
    // 0x2f5d98: 0x32230280  andi        $v1, $s1, 0x280
    ctx->pc = 0x2f5d98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)640);
label_2f5d9c:
    // 0x2f5d9c: 0x24020200  addiu       $v0, $zero, 0x200
    ctx->pc = 0x2f5d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
label_2f5da0:
    // 0x2f5da0: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_2f5da4:
    if (ctx->pc == 0x2F5DA4u) {
        ctx->pc = 0x2F5DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5DA0u;
        // 0x2f5da4: 0x32220200  andi        $v0, $s1, 0x200 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)512);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5DA8u;
        goto label_2f5da8;
    }
    ctx->pc = 0x2F5DA0u;
    {
        const bool branch_taken_0x2f5da0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F5DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5DA0u;
        // 0x2f5da4: 0x32220200  andi        $v0, $s1, 0x200 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)512);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5da0) {
            ctx->pc = 0x2F5DB8u;
            goto label_2f5db8;
        }
    }
    ctx->pc = 0x2F5DA8u;
label_2f5da8:
    // 0x2f5da8: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
label_2f5dac:
    if (ctx->pc == 0x2F5DACu) {
        ctx->pc = 0x2F5DB0u;
        goto label_2f5db0;
    }
    ctx->pc = 0x2F5DA8u;
    {
        const bool branch_taken_0x2f5da8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f5da8) {
            ctx->pc = 0x2F5E34u;
            goto label_2f5e34;
        }
    }
    ctx->pc = 0x2F5DB0u;
label_2f5db0:
    // 0x2f5db0: 0x12c00024  beqz        $s6, . + 4 + (0x24 << 2)
label_2f5db4:
    if (ctx->pc == 0x2F5DB4u) {
        ctx->pc = 0x2F5DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5DB0u;
        // 0x2f5db4: 0x32220080  andi        $v0, $s1, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5DB8u;
        goto label_2f5db8;
    }
    ctx->pc = 0x2F5DB0u;
    {
        const bool branch_taken_0x2f5db0 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5DB0u;
        // 0x2f5db4: 0x32220080  andi        $v0, $s1, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5db0) {
            ctx->pc = 0x2F5E44u;
            goto label_2f5e44;
        }
    }
    ctx->pc = 0x2F5DB8u;
label_2f5db8:
    // 0x2f5db8: 0x32220100  andi        $v0, $s1, 0x100
    ctx->pc = 0x2f5db8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)256);
label_2f5dbc:
    // 0x2f5dbc: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_2f5dc0:
    if (ctx->pc == 0x2F5DC0u) {
        ctx->pc = 0x2F5DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5DBCu;
        // 0x2f5dc0: 0x2402fcff  addiu       $v0, $zero, -0x301 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966527));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5DC4u;
        goto label_2f5dc4;
    }
    ctx->pc = 0x2F5DBCu;
    {
        const bool branch_taken_0x2f5dbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F5DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5DBCu;
        // 0x2f5dc0: 0x2402fcff  addiu       $v0, $zero, -0x301 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966527));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5dbc) {
            ctx->pc = 0x2F5DD4u;
            goto label_2f5dd4;
        }
    }
    ctx->pc = 0x2F5DC4u;
label_2f5dc4:
    // 0x2f5dc4: 0xdfa20268  ld          $v0, 0x268($sp)
    ctx->pc = 0x2f5dc4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 616)));
label_2f5dc8:
    // 0x2f5dc8: 0xafb30270  sw          $s3, 0x270($sp)
    ctx->pc = 0x2f5dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 624), GPR_U32(ctx, 19));
label_2f5dcc:
    // 0x2f5dcc: 0x2c2382f  dsubu       $a3, $s6, $v0
    ctx->pc = 0x2f5dccu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 22) - GPR_U64(ctx, 2));
label_2f5dd0:
    // 0x2f5dd0: 0x2402fcff  addiu       $v0, $zero, -0x301
    ctx->pc = 0x2f5dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966527));
label_2f5dd4:
    // 0x2f5dd4: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x2f5dd4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f5dd8:
    // 0x2f5dd8: 0x2221024  and         $v0, $s1, $v0
    ctx->pc = 0x2f5dd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
label_2f5ddc:
    // 0x2f5ddc: 0x345100c0  ori         $s1, $v0, 0xC0
    ctx->pc = 0x2f5ddcu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)192);
label_2f5de0:
    // 0x2f5de0: 0xa2700000  sb          $s0, 0x0($s3)
    ctx->pc = 0x2f5de0u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 16));
label_2f5de4:
    // 0x2f5de4: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2f5de4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_2f5de8:
    // 0x2f5de8: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x2f5de8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
label_2f5dec:
    // 0x2f5dec: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x2f5decu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_2f5df0:
    // 0x2f5df0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x2f5df0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_2f5df4:
    // 0x2f5df4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2f5df4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_2f5df8:
    // 0x2f5df8: 0x18400005  blez        $v0, . + 4 + (0x5 << 2)
label_2f5dfc:
    if (ctx->pc == 0x2F5DFCu) {
        ctx->pc = 0x2F5DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5DF8u;
        // 0x2f5dfc: 0xae420004  sw          $v0, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5E00u;
        goto label_2f5e00;
    }
    ctx->pc = 0x2F5DF8u;
    {
        const bool branch_taken_0x2f5df8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2F5DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5DF8u;
        // 0x2f5dfc: 0xae420004  sw          $v0, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5df8) {
            ctx->pc = 0x2F5E10u;
            goto label_2f5e10;
        }
    }
    ctx->pc = 0x2F5E00u;
label_2f5e00:
    // 0x2f5e00: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2f5e00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2f5e04:
    // 0x2f5e04: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2f5e04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2f5e08:
    // 0x2f5e08: 0x10000008  b           . + 4 + (0x8 << 2)
label_2f5e0c:
    if (ctx->pc == 0x2F5E0Cu) {
        ctx->pc = 0x2F5E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5E08u;
        // 0x2f5e0c: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5E10u;
        goto label_2f5e10;
    }
    ctx->pc = 0x2F5E08u;
    {
        const bool branch_taken_0x2f5e08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5E08u;
        // 0x2f5e0c: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5e08) {
            ctx->pc = 0x2F5E2Cu;
            goto label_2f5e2c;
        }
    }
    ctx->pc = 0x2F5E10u;
label_2f5e10:
    // 0x2f5e10: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2f5e10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2f5e14:
    // 0x2f5e14: 0x7fa70280  sq          $a3, 0x280($sp)
    ctx->pc = 0x2f5e14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 640), GPR_VEC(ctx, 7));
label_2f5e18:
    // 0x2f5e18: 0xc0bc0e0  jal         func_2F0380
label_2f5e1c:
    if (ctx->pc == 0x2F5E1Cu) {
        ctx->pc = 0x2F5E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5E18u;
        // 0x2f5e1c: 0x7fa80290  sq          $t0, 0x290($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 656), GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5E20u;
        goto label_2f5e20;
    }
    ctx->pc = 0x2F5E18u;
    SET_GPR_U32(ctx, 31, 0x2F5E20u);
    ctx->pc = 0x2F5E1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5E18u;
    // 0x2f5e1c: 0x7fa80290  sq          $t0, 0x290($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 656), GPR_VEC(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F0380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0380u, 0x2F5E18u, 0x2F5E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5E20u;
label_2f5e20:
    // 0x2f5e20: 0x7ba70280  lq          $a3, 0x280($sp)
    ctx->pc = 0x2f5e20u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 640)));
label_2f5e24:
    // 0x2f5e24: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_2f5e28:
    if (ctx->pc == 0x2F5E28u) {
        ctx->pc = 0x2F5E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5E24u;
        // 0x2f5e28: 0x7ba80290  lq          $t0, 0x290($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 656)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5E2Cu;
        goto label_2f5e2c;
    }
    ctx->pc = 0x2F5E24u;
    {
        const bool branch_taken_0x2f5e24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F5E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5E24u;
        // 0x2f5e28: 0x7ba80290  lq          $t0, 0x290($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 656)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5e24) {
            ctx->pc = 0x2F5E34u;
            goto label_2f5e34;
        }
    }
    ctx->pc = 0x2F5E2Cu;
label_2f5e2c:
    // 0x2f5e2c: 0x5680ffba  bnel        $s4, $zero, . + 4 + (-0x46 << 2)
label_2f5e30:
    if (ctx->pc == 0x2F5E30u) {
        ctx->pc = 0x2F5E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5E2Cu;
        // 0x2f5e30: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5E34u;
        goto label_2f5e34;
    }
    ctx->pc = 0x2F5E2Cu;
    {
        const bool branch_taken_0x2f5e2c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f5e2c) {
            ctx->pc = 0x2F5E30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F5E2Cu;
            // 0x2f5e30: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F5D18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f5d18;
        }
    }
    ctx->pc = 0x2F5E34u;
label_2f5e34:
    // 0x2f5e34: 0x12c00002  beqz        $s6, . + 4 + (0x2 << 2)
label_2f5e38:
    if (ctx->pc == 0x2F5E38u) {
        ctx->pc = 0x2F5E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5E34u;
        // 0x2f5e38: 0x2402ff7f  addiu       $v0, $zero, -0x81 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5E3Cu;
        goto label_2f5e3c;
    }
    ctx->pc = 0x2F5E34u;
    {
        const bool branch_taken_0x2f5e34 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5E34u;
        // 0x2f5e38: 0x2402ff7f  addiu       $v0, $zero, -0x81 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5e34) {
            ctx->pc = 0x2F5E40u;
            goto label_2f5e40;
        }
    }
    ctx->pc = 0x2F5E3Cu;
label_2f5e3c:
    // 0x2f5e3c: 0x2228824  and         $s1, $s1, $v0
    ctx->pc = 0x2f5e3cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
label_2f5e40:
    // 0x2f5e40: 0x32220080  andi        $v0, $s1, 0x80
    ctx->pc = 0x2f5e40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)128);
label_2f5e44:
    // 0x2f5e44: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
label_2f5e48:
    if (ctx->pc == 0x2F5E48u) {
        ctx->pc = 0x2F5E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5E44u;
        // 0x2f5e48: 0x32220200  andi        $v0, $s1, 0x200 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)512);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5E4Cu;
        goto label_2f5e4c;
    }
    ctx->pc = 0x2F5E44u;
    {
        const bool branch_taken_0x2f5e44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5E44u;
        // 0x2f5e48: 0x32220200  andi        $v0, $s1, 0x200 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)512);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5e44) {
            ctx->pc = 0x2F5EECu;
            goto label_2f5eec;
        }
    }
    ctx->pc = 0x2F5E4Cu;
label_2f5e4c:
    // 0x2f5e4c: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
label_2f5e50:
    if (ctx->pc == 0x2F5E50u) {
        ctx->pc = 0x2F5E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5E4Cu;
        // 0x2f5e50: 0x2673ffff  addiu       $s3, $s3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5E54u;
        goto label_2f5e54;
    }
    ctx->pc = 0x2F5E4Cu;
    {
        const bool branch_taken_0x2f5e4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f5e4c) {
            ctx->pc = 0x2F5E50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F5E4Cu;
            // 0x2f5e50: 0x2673ffff  addiu       $s3, $s3, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F5E90u;
            goto label_2f5e90;
        }
    }
    ctx->pc = 0x2F5E54u;
label_2f5e54:
    // 0x2f5e54: 0x27a30100  addiu       $v1, $sp, 0x100
    ctx->pc = 0x2f5e54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_2f5e58:
    // 0x2f5e58: 0x73102b  sltu        $v0, $v1, $s3
    ctx->pc = 0x2f5e58u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
label_2f5e5c:
    // 0x2f5e5c: 0x10400065  beqz        $v0, . + 4 + (0x65 << 2)
label_2f5e60:
    if (ctx->pc == 0x2F5E60u) {
        ctx->pc = 0x2F5E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5E5Cu;
        // 0x2f5e60: 0x8fa20260  lw          $v0, 0x260($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5E64u;
        goto label_2f5e64;
    }
    ctx->pc = 0x2F5E5Cu;
    {
        const bool branch_taken_0x2f5e5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5E5Cu;
        // 0x2f5e60: 0x8fa20260  lw          $v0, 0x260($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5e5c) {
            ctx->pc = 0x2F5FF4u;
            goto label_2f5ff4;
        }
    }
    ctx->pc = 0x2F5E64u;
label_2f5e64:
    // 0x2f5e64: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x2f5e64u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_2f5e68:
    // 0x2f5e68: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2f5e68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2f5e6c:
    // 0x2f5e6c: 0xc0bcde2  jal         func_2F3788
label_2f5e70:
    if (ctx->pc == 0x2F5E70u) {
        ctx->pc = 0x2F5E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5E6Cu;
        // 0x2f5e70: 0x82640000  lb          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5E74u;
        goto label_2f5e74;
    }
    ctx->pc = 0x2F5E6Cu;
    SET_GPR_U32(ctx, 31, 0x2F5E74u);
    ctx->pc = 0x2F5E70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5E6Cu;
    // 0x2f5e70: 0x82640000  lb          $a0, 0x0($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F3788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F3788u, 0x2F5E6Cu, 0x2F5E74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5E74u;
label_2f5e74:
    // 0x2f5e74: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x2f5e74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_2f5e78:
    // 0x2f5e78: 0x93182b  sltu        $v1, $a0, $s3
    ctx->pc = 0x2f5e78u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
label_2f5e7c:
    // 0x2f5e7c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
label_2f5e80:
    if (ctx->pc == 0x2F5E80u) {
        ctx->pc = 0x2F5E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5E7Cu;
        // 0x2f5e80: 0x2673ffff  addiu       $s3, $s3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5E84u;
        goto label_2f5e84;
    }
    ctx->pc = 0x2F5E7Cu;
    {
        const bool branch_taken_0x2f5e7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F5E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5E7Cu;
        // 0x2f5e80: 0x2673ffff  addiu       $s3, $s3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5e7c) {
            ctx->pc = 0x2F5E68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f5e68;
        }
    }
    ctx->pc = 0x2F5E84u;
label_2f5e84:
    // 0x2f5e84: 0x1000005b  b           . + 4 + (0x5B << 2)
label_2f5e88:
    if (ctx->pc == 0x2F5E88u) {
        ctx->pc = 0x2F5E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5E84u;
        // 0x2f5e88: 0x8fa20260  lw          $v0, 0x260($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5E8Cu;
        goto label_2f5e8c;
    }
    ctx->pc = 0x2F5E84u;
    {
        const bool branch_taken_0x2f5e84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5E84u;
        // 0x2f5e88: 0x8fa20260  lw          $v0, 0x260($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5e84) {
            ctx->pc = 0x2F5FF4u;
            goto label_2f5ff4;
        }
    }
    ctx->pc = 0x2F5E8Cu;
label_2f5e8c:
    // 0x2f5e8c: 0x0  nop
    ctx->pc = 0x2f5e8cu;
    // NOP
label_2f5e90:
    // 0x2f5e90: 0x24020065  addiu       $v0, $zero, 0x65
    ctx->pc = 0x2f5e90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
label_2f5e94:
    // 0x2f5e94: 0x82700000  lb          $s0, 0x0($s3)
    ctx->pc = 0x2f5e94u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_2f5e98:
    // 0x2f5e98: 0x1202000d  beq         $s0, $v0, . + 4 + (0xD << 2)
label_2f5e9c:
    if (ctx->pc == 0x2F5E9Cu) {
        ctx->pc = 0x2F5E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5E98u;
        // 0x2f5e9c: 0x2508ffff  addiu       $t0, $t0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5EA0u;
        goto label_2f5ea0;
    }
    ctx->pc = 0x2F5E98u;
    {
        const bool branch_taken_0x2f5e98 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F5E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5E98u;
        // 0x2f5e9c: 0x2508ffff  addiu       $t0, $t0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5e98) {
            ctx->pc = 0x2F5ED0u;
            goto label_2f5ed0;
        }
    }
    ctx->pc = 0x2F5EA0u;
label_2f5ea0:
    // 0x2f5ea0: 0x24020045  addiu       $v0, $zero, 0x45
    ctx->pc = 0x2f5ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
label_2f5ea4:
    // 0x2f5ea4: 0x1202000a  beq         $s0, $v0, . + 4 + (0xA << 2)
label_2f5ea8:
    if (ctx->pc == 0x2F5EA8u) {
        ctx->pc = 0x2F5EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5EA4u;
        // 0x2f5ea8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5EACu;
        goto label_2f5eac;
    }
    ctx->pc = 0x2F5EA4u;
    {
        const bool branch_taken_0x2f5ea4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F5EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5EA4u;
        // 0x2f5ea8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5ea4) {
            ctx->pc = 0x2F5ED0u;
            goto label_2f5ed0;
        }
    }
    ctx->pc = 0x2F5EACu;
label_2f5eac:
    // 0x2f5eac: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2f5eacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2f5eb0:
    // 0x2f5eb0: 0x7fa70280  sq          $a3, 0x280($sp)
    ctx->pc = 0x2f5eb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 640), GPR_VEC(ctx, 7));
label_2f5eb4:
    // 0x2f5eb4: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x2f5eb4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_2f5eb8:
    // 0x2f5eb8: 0xc0bcde2  jal         func_2F3788
label_2f5ebc:
    if (ctx->pc == 0x2F5EBCu) {
        ctx->pc = 0x2F5EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5EB8u;
        // 0x2f5ebc: 0x7fa80290  sq          $t0, 0x290($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 656), GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5EC0u;
        goto label_2f5ec0;
    }
    ctx->pc = 0x2F5EB8u;
    SET_GPR_U32(ctx, 31, 0x2F5EC0u);
    ctx->pc = 0x2F5EBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5EB8u;
    // 0x2f5ebc: 0x7fa80290  sq          $t0, 0x290($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 656), GPR_VEC(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F3788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F3788u, 0x2F5EB8u, 0x2F5EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5EC0u;
label_2f5ec0:
    // 0x2f5ec0: 0x7ba80290  lq          $t0, 0x290($sp)
    ctx->pc = 0x2f5ec0u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 656)));
label_2f5ec4:
    // 0x2f5ec4: 0x82700000  lb          $s0, 0x0($s3)
    ctx->pc = 0x2f5ec4u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_2f5ec8:
    // 0x2f5ec8: 0x7ba70280  lq          $a3, 0x280($sp)
    ctx->pc = 0x2f5ec8u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 640)));
label_2f5ecc:
    // 0x2f5ecc: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x2f5eccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
label_2f5ed0:
    // 0x2f5ed0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f5ed0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f5ed4:
    // 0x2f5ed4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2f5ed4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2f5ed8:
    // 0x2f5ed8: 0x7fa70280  sq          $a3, 0x280($sp)
    ctx->pc = 0x2f5ed8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 640), GPR_VEC(ctx, 7));
label_2f5edc:
    // 0x2f5edc: 0xc0bcde2  jal         func_2F3788
label_2f5ee0:
    if (ctx->pc == 0x2F5EE0u) {
        ctx->pc = 0x2F5EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5EDCu;
        // 0x2f5ee0: 0x7fa80290  sq          $t0, 0x290($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 656), GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5EE4u;
        goto label_2f5ee4;
    }
    ctx->pc = 0x2F5EDCu;
    SET_GPR_U32(ctx, 31, 0x2F5EE4u);
    ctx->pc = 0x2F5EE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5EDCu;
    // 0x2f5ee0: 0x7fa80290  sq          $t0, 0x290($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 656), GPR_VEC(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F3788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F3788u, 0x2F5EDCu, 0x2F5EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5EE4u;
label_2f5ee4:
    // 0x2f5ee4: 0x7ba80290  lq          $t0, 0x290($sp)
    ctx->pc = 0x2f5ee4u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 656)));
label_2f5ee8:
    // 0x2f5ee8: 0x7ba70280  lq          $a3, 0x280($sp)
    ctx->pc = 0x2f5ee8u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 640)));
label_2f5eec:
    // 0x2f5eec: 0x32220008  andi        $v0, $s1, 0x8
    ctx->pc = 0x2f5eecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)8);
label_2f5ef0:
    // 0x2f5ef0: 0x5440fd3c  bnel        $v0, $zero, . + 4 + (-0x2C4 << 2)
label_2f5ef4:
    if (ctx->pc == 0x2F5EF4u) {
        ctx->pc = 0x2F5EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5EF0u;
        // 0x2f5ef4: 0x82a30000  lb          $v1, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5EF8u;
        goto label_2f5ef8;
    }
    ctx->pc = 0x2F5EF0u;
    {
        const bool branch_taken_0x2f5ef0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f5ef0) {
            ctx->pc = 0x2F5EF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F5EF0u;
            // 0x2f5ef4: 0x82a30000  lb          $v1, 0x0($s5) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F53E4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f53e4;
        }
    }
    ctx->pc = 0x2F5EF8u;
label_2f5ef8:
    // 0x2f5ef8: 0x32230300  andi        $v1, $s1, 0x300
    ctx->pc = 0x2f5ef8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)768);
label_2f5efc:
    // 0x2f5efc: 0x24020200  addiu       $v0, $zero, 0x200
    ctx->pc = 0x2f5efcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
label_2f5f00:
    // 0x2f5f00: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
label_2f5f04:
    if (ctx->pc == 0x2F5F04u) {
        ctx->pc = 0x2F5F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5F00u;
        // 0x2f5f04: 0xa2600000  sb          $zero, 0x0($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5F08u;
        goto label_2f5f08;
    }
    ctx->pc = 0x2F5F00u;
    {
        const bool branch_taken_0x2f5f00 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2F5F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5F00u;
        // 0x2f5f04: 0xa2600000  sb          $zero, 0x0($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5f00) {
            ctx->pc = 0x2F5F20u;
            goto label_2f5f20;
        }
    }
    ctx->pc = 0x2F5F08u;
label_2f5f08:
    // 0x2f5f08: 0xdfa20268  ld          $v0, 0x268($sp)
    ctx->pc = 0x2f5f08u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 616)));
label_2f5f0c:
    // 0x2f5f0c: 0xafb30270  sw          $s3, 0x270($sp)
    ctx->pc = 0x2f5f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 624), GPR_U32(ctx, 19));
label_2f5f10:
    // 0x2f5f10: 0x2c2382f  dsubu       $a3, $s6, $v0
    ctx->pc = 0x2f5f10u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 22) - GPR_U64(ctx, 2));
label_2f5f14:
    // 0x2f5f14: 0x1000000b  b           . + 4 + (0xB << 2)
label_2f5f18:
    if (ctx->pc == 0x2F5F18u) {
        ctx->pc = 0x2F5F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5F14u;
        // 0x2f5f18: 0x7302f  dsubu       $a2, $zero, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) - GPR_U64(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5F1Cu;
        goto label_2f5f1c;
    }
    ctx->pc = 0x2F5F14u;
    {
        const bool branch_taken_0x2f5f14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5F14u;
        // 0x2f5f18: 0x7302f  dsubu       $a2, $zero, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) - GPR_U64(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5f14) {
            ctx->pc = 0x2F5F44u;
            goto label_2f5f44;
        }
    }
    ctx->pc = 0x2F5F1Cu;
label_2f5f1c:
    // 0x2f5f1c: 0x0  nop
    ctx->pc = 0x2f5f1cu;
    // NOP
label_2f5f20:
    // 0x2f5f20: 0x10e00014  beqz        $a3, . + 4 + (0x14 << 2)
label_2f5f24:
    if (ctx->pc == 0x2F5F24u) {
        ctx->pc = 0x2F5F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5F20u;
        // 0x2f5f24: 0x8fa30270  lw          $v1, 0x270($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5F28u;
        goto label_2f5f28;
    }
    ctx->pc = 0x2F5F20u;
    {
        const bool branch_taken_0x2f5f20 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5F20u;
        // 0x2f5f24: 0x8fa30270  lw          $v1, 0x270($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5f20) {
            ctx->pc = 0x2F5F74u;
            goto label_2f5f74;
        }
    }
    ctx->pc = 0x2F5F28u;
label_2f5f28:
    // 0x2f5f28: 0x7fa70280  sq          $a3, 0x280($sp)
    ctx->pc = 0x2f5f28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 640), GPR_VEC(ctx, 7));
label_2f5f2c:
    // 0x2f5f2c: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x2f5f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2f5f30:
    // 0x2f5f30: 0xc0ba8a8  jal         func_2EA2A0
label_2f5f34:
    if (ctx->pc == 0x2F5F34u) {
        ctx->pc = 0x2F5F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5F30u;
        // 0x2f5f34: 0x7fa80290  sq          $t0, 0x290($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 656), GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5F38u;
        goto label_2f5f38;
    }
    ctx->pc = 0x2F5F30u;
    SET_GPR_U32(ctx, 31, 0x2F5F38u);
    ctx->pc = 0x2F5F34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5F30u;
    // 0x2f5f34: 0x7fa80290  sq          $t0, 0x290($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 656), GPR_VEC(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EA2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA2A0u, 0x2F5F30u, 0x2F5F38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5F38u;
label_2f5f38:
    // 0x2f5f38: 0x7ba70280  lq          $a3, 0x280($sp)
    ctx->pc = 0x2f5f38u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 640)));
label_2f5f3c:
    // 0x2f5f3c: 0x7ba80290  lq          $t0, 0x290($sp)
    ctx->pc = 0x2f5f3cu;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 656)));
label_2f5f40:
    // 0x2f5f40: 0x47302f  dsubu       $a2, $v0, $a3
    ctx->pc = 0x2f5f40u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) - GPR_U64(ctx, 7));
label_2f5f44:
    // 0x2f5f44: 0x10e0000b  beqz        $a3, . + 4 + (0xB << 2)
label_2f5f48:
    if (ctx->pc == 0x2F5F48u) {
        ctx->pc = 0x2F5F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5F44u;
        // 0x2f5f48: 0x27a20249  addiu       $v0, $sp, 0x249 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 585));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5F4Cu;
        goto label_2f5f4c;
    }
    ctx->pc = 0x2F5F44u;
    {
        const bool branch_taken_0x2f5f44 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5F44u;
        // 0x2f5f48: 0x27a20249  addiu       $v0, $sp, 0x249 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 585));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5f44) {
            ctx->pc = 0x2F5F74u;
            goto label_2f5f74;
        }
    }
    ctx->pc = 0x2F5F4Cu;
label_2f5f4c:
    // 0x2f5f4c: 0x8fa40270  lw          $a0, 0x270($sp)
    ctx->pc = 0x2f5f4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
label_2f5f50:
    // 0x2f5f50: 0x27a30248  addiu       $v1, $sp, 0x248
    ctx->pc = 0x2f5f50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 584));
label_2f5f54:
    // 0x2f5f54: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x2f5f54u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
label_2f5f58:
    // 0x2f5f58: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x2f5f58u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2f5f5c:
    // 0x2f5f5c: 0x24a595a8  addiu       $a1, $a1, -0x6A58
    ctx->pc = 0x2f5f5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940072));
label_2f5f60:
    // 0x2f5f60: 0x62200a  movz        $a0, $v1, $v0
    ctx->pc = 0x2f5f60u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
label_2f5f64:
    // 0x2f5f64: 0x7fa80290  sq          $t0, 0x290($sp)
    ctx->pc = 0x2f5f64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 656), GPR_VEC(ctx, 8));
label_2f5f68:
    // 0x2f5f68: 0xc0bc3e2  jal         func_2F0F88
label_2f5f6c:
    if (ctx->pc == 0x2F5F6Cu) {
        ctx->pc = 0x2F5F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5F68u;
        // 0x2f5f6c: 0xafa40270  sw          $a0, 0x270($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 624), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5F70u;
        goto label_2f5f70;
    }
    ctx->pc = 0x2F5F68u;
    SET_GPR_U32(ctx, 31, 0x2F5F70u);
    ctx->pc = 0x2F5F6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5F68u;
    // 0x2f5f6c: 0xafa40270  sw          $a0, 0x270($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 624), GPR_U32(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F0F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0F88u, 0x2F5F68u, 0x2F5F70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5F70u;
label_2f5f70:
    // 0x2f5f70: 0x7ba80290  lq          $t0, 0x290($sp)
    ctx->pc = 0x2f5f70u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 656)));
label_2f5f74:
    // 0x2f5f74: 0x27a20100  addiu       $v0, $sp, 0x100
    ctx->pc = 0x2f5f74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_2f5f78:
    // 0x2f5f78: 0x7fa80290  sq          $t0, 0x290($sp)
    ctx->pc = 0x2f5f78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 656), GPR_VEC(ctx, 8));
label_2f5f7c:
    // 0x2f5f7c: 0xc0ba898  jal         func_2EA260
label_2f5f80:
    if (ctx->pc == 0x2F5F80u) {
        ctx->pc = 0x2F5F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5F7Cu;
        // 0x2f5f80: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5F84u;
        goto label_2f5f84;
    }
    ctx->pc = 0x2F5F7Cu;
    SET_GPR_U32(ctx, 31, 0x2F5F84u);
    ctx->pc = 0x2F5F80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5F7Cu;
    // 0x2f5f80: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EA260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA260u, 0x2F5F7Cu, 0x2F5F84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5F84u;
label_2f5f84:
    // 0x2f5f84: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2f5f84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f5f88:
    // 0x2f5f88: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x2f5f88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_2f5f8c:
    // 0x2f5f8c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_2f5f90:
    if (ctx->pc == 0x2F5F90u) {
        ctx->pc = 0x2F5F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5F8Cu;
        // 0x2f5f90: 0x7ba80290  lq          $t0, 0x290($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 656)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5F94u;
        goto label_2f5f94;
    }
    ctx->pc = 0x2F5F8Cu;
    {
        const bool branch_taken_0x2f5f8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F5F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5F8Cu;
        // 0x2f5f90: 0x7ba80290  lq          $t0, 0x290($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 656)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5f8c) {
            ctx->pc = 0x2F5FA0u;
            goto label_2f5fa0;
        }
    }
    ctx->pc = 0x2F5F94u;
label_2f5f94:
    // 0x2f5f94: 0x32220002  andi        $v0, $s1, 0x2
    ctx->pc = 0x2f5f94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)2);
label_2f5f98:
    // 0x2f5f98: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_2f5f9c:
    if (ctx->pc == 0x2F5F9Cu) {
        ctx->pc = 0x2F5F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5F98u;
        // 0x2f5f9c: 0x2e0102d  daddu       $v0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5FA0u;
        goto label_2f5fa0;
    }
    ctx->pc = 0x2F5F98u;
    {
        const bool branch_taken_0x2f5f98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f5f98) {
            ctx->pc = 0x2F5F9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F5F98u;
            // 0x2f5f9c: 0x2e0102d  daddu       $v0, $s7, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F5FB8u;
            goto label_2f5fb8;
        }
    }
    ctx->pc = 0x2F5FA0u;
label_2f5fa0:
    // 0x2f5fa0: 0x2e0182d  daddu       $v1, $s7, $zero
    ctx->pc = 0x2f5fa0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_2f5fa4:
    // 0x2f5fa4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2f5fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2f5fa8:
    // 0x2f5fa8: 0xfc440000  sd          $a0, 0x0($v0)
    ctx->pc = 0x2f5fa8u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 4));
label_2f5fac:
    // 0x2f5fac: 0x10000008  b           . + 4 + (0x8 << 2)
label_2f5fb0:
    if (ctx->pc == 0x2F5FB0u) {
        ctx->pc = 0x2F5FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5FACu;
        // 0x2f5fb0: 0x26f70008  addiu       $s7, $s7, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5FB4u;
        goto label_2f5fb4;
    }
    ctx->pc = 0x2F5FACu;
    {
        const bool branch_taken_0x2f5fac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5FACu;
        // 0x2f5fb0: 0x26f70008  addiu       $s7, $s7, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5fac) {
            ctx->pc = 0x2F5FD0u;
            goto label_2f5fd0;
        }
    }
    ctx->pc = 0x2F5FB4u;
label_2f5fb4:
    // 0x2f5fb4: 0x0  nop
    ctx->pc = 0x2f5fb4u;
    // NOP
label_2f5fb8:
    // 0x2f5fb8: 0x26f70008  addiu       $s7, $s7, 0x8
    ctx->pc = 0x2f5fb8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 8));
label_2f5fbc:
    // 0x2f5fbc: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x2f5fbcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2f5fc0:
    // 0x2f5fc0: 0xc0bef4c  jal         func_2FBD30
label_2f5fc4:
    if (ctx->pc == 0x2F5FC4u) {
        ctx->pc = 0x2F5FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5FC0u;
        // 0x2f5fc4: 0x7fa80290  sq          $t0, 0x290($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 656), GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5FC8u;
        goto label_2f5fc8;
    }
    ctx->pc = 0x2F5FC0u;
    SET_GPR_U32(ctx, 31, 0x2F5FC8u);
    ctx->pc = 0x2F5FC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5FC0u;
    // 0x2f5fc4: 0x7fa80290  sq          $t0, 0x290($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 656), GPR_VEC(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD30u, 0x2F5FC0u, 0x2F5FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5FC8u;
label_2f5fc8:
    // 0x2f5fc8: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x2f5fc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_2f5fcc:
    // 0x2f5fcc: 0x7ba80290  lq          $t0, 0x290($sp)
    ctx->pc = 0x2f5fccu;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 656)));
label_2f5fd0:
    // 0x2f5fd0: 0x8fa30260  lw          $v1, 0x260($sp)
    ctx->pc = 0x2f5fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
label_2f5fd4:
    // 0x2f5fd4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2f5fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2f5fd8:
    // 0x2f5fd8: 0x1000fd01  b           . + 4 + (-0x2FF << 2)
label_2f5fdc:
    if (ctx->pc == 0x2F5FDCu) {
        ctx->pc = 0x2F5FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5FD8u;
        // 0x2f5fdc: 0xafa30260  sw          $v1, 0x260($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 608), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5FE0u;
        goto label_2f5fe0;
    }
    ctx->pc = 0x2F5FD8u;
    {
        const bool branch_taken_0x2f5fd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5FD8u;
        // 0x2f5fdc: 0xafa30260  sw          $v1, 0x260($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 608), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5fd8) {
            ctx->pc = 0x2F53E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f53e0;
        }
    }
    ctx->pc = 0x2F5FE0u;
label_2f5fe0:
    // 0x2f5fe0: 0x8fa40260  lw          $a0, 0x260($sp)
    ctx->pc = 0x2f5fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
label_2f5fe4:
    // 0x2f5fe4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2f5fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2f5fe8:
    // 0x2f5fe8: 0x10000002  b           . + 4 + (0x2 << 2)
label_2f5fec:
    if (ctx->pc == 0x2F5FECu) {
        ctx->pc = 0x2F5FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5FE8u;
        // 0x2f5fec: 0x84100b  movn        $v0, $a0, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5FF0u;
        goto label_2f5ff0;
    }
    ctx->pc = 0x2F5FE8u;
    {
        const bool branch_taken_0x2f5fe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5FE8u;
        // 0x2f5fec: 0x84100b  movn        $v0, $a0, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5fe8) {
            ctx->pc = 0x2F5FF4u;
            goto label_2f5ff4;
        }
    }
    ctx->pc = 0x2F5FF0u;
label_2f5ff0:
    // 0x2f5ff0: 0x8fa20260  lw          $v0, 0x260($sp)
    ctx->pc = 0x2f5ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
label_2f5ff4:
    // 0x2f5ff4: 0xdfb002a0  ld          $s0, 0x2A0($sp)
    ctx->pc = 0x2f5ff4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 672)));
label_2f5ff8:
    // 0x2f5ff8: 0xdfb102a8  ld          $s1, 0x2A8($sp)
    ctx->pc = 0x2f5ff8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 680)));
label_2f5ffc:
    // 0x2f5ffc: 0xdfb202b0  ld          $s2, 0x2B0($sp)
    ctx->pc = 0x2f5ffcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 688)));
label_2f6000:
    // 0x2f6000: 0xdfb302b8  ld          $s3, 0x2B8($sp)
    ctx->pc = 0x2f6000u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 696)));
label_2f6004:
    // 0x2f6004: 0xdfb402c0  ld          $s4, 0x2C0($sp)
    ctx->pc = 0x2f6004u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 704)));
label_2f6008:
    // 0x2f6008: 0xdfb502c8  ld          $s5, 0x2C8($sp)
    ctx->pc = 0x2f6008u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 712)));
label_2f600c:
    // 0x2f600c: 0xdfb602d0  ld          $s6, 0x2D0($sp)
    ctx->pc = 0x2f600cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 720)));
label_2f6010:
    // 0x2f6010: 0xdfb702d8  ld          $s7, 0x2D8($sp)
    ctx->pc = 0x2f6010u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 728)));
label_2f6014:
    // 0x2f6014: 0xdfbe02e0  ld          $fp, 0x2E0($sp)
    ctx->pc = 0x2f6014u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 736)));
label_2f6018:
    // 0x2f6018: 0xdfbf02e8  ld          $ra, 0x2E8($sp)
    ctx->pc = 0x2f6018u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 744)));
label_2f601c:
    // 0x2f601c: 0x3e00008  jr          $ra
label_2f6020:
    if (ctx->pc == 0x2F6020u) {
        ctx->pc = 0x2F6020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F601Cu;
        // 0x2f6020: 0x27bd02f0  addiu       $sp, $sp, 0x2F0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 752));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F6024u;
        goto label_2f6024;
    }
    ctx->pc = 0x2F601Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F6020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F601Cu;
        // 0x2f6020: 0x27bd02f0  addiu       $sp, $sp, 0x2F0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 752));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F601Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F6024u;
label_2f6024:
    // 0x2f6024: 0x0  nop
    ctx->pc = 0x2f6024u;
    // NOP
    ctx->pc = 0x2f6028u;
}
