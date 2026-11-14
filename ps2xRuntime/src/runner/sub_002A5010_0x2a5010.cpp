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

// Function: sub_002A5010
// Address: 0x2a5010 - 0x2a6c60
void sub_002A5010_0x2a5010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A5010_0x2a5010");
#endif

    switch (ctx->pc) {
        case 0x2a5010u: goto label_2a5010;
        case 0x2a5014u: goto label_2a5014;
        case 0x2a5018u: goto label_2a5018;
        case 0x2a501cu: goto label_2a501c;
        case 0x2a5020u: goto label_2a5020;
        case 0x2a5024u: goto label_2a5024;
        case 0x2a5028u: goto label_2a5028;
        case 0x2a502cu: goto label_2a502c;
        case 0x2a5030u: goto label_2a5030;
        case 0x2a5034u: goto label_2a5034;
        case 0x2a5038u: goto label_2a5038;
        case 0x2a503cu: goto label_2a503c;
        case 0x2a5040u: goto label_2a5040;
        case 0x2a5044u: goto label_2a5044;
        case 0x2a5048u: goto label_2a5048;
        case 0x2a504cu: goto label_2a504c;
        case 0x2a5050u: goto label_2a5050;
        case 0x2a5054u: goto label_2a5054;
        case 0x2a5058u: goto label_2a5058;
        case 0x2a505cu: goto label_2a505c;
        case 0x2a5060u: goto label_2a5060;
        case 0x2a5064u: goto label_2a5064;
        case 0x2a5068u: goto label_2a5068;
        case 0x2a506cu: goto label_2a506c;
        case 0x2a5070u: goto label_2a5070;
        case 0x2a5074u: goto label_2a5074;
        case 0x2a5078u: goto label_2a5078;
        case 0x2a507cu: goto label_2a507c;
        case 0x2a5080u: goto label_2a5080;
        case 0x2a5084u: goto label_2a5084;
        case 0x2a5088u: goto label_2a5088;
        case 0x2a508cu: goto label_2a508c;
        case 0x2a5090u: goto label_2a5090;
        case 0x2a5094u: goto label_2a5094;
        case 0x2a5098u: goto label_2a5098;
        case 0x2a509cu: goto label_2a509c;
        case 0x2a50a0u: goto label_2a50a0;
        case 0x2a50a4u: goto label_2a50a4;
        case 0x2a50a8u: goto label_2a50a8;
        case 0x2a50acu: goto label_2a50ac;
        case 0x2a50b0u: goto label_2a50b0;
        case 0x2a50b4u: goto label_2a50b4;
        case 0x2a50b8u: goto label_2a50b8;
        case 0x2a50bcu: goto label_2a50bc;
        case 0x2a50c0u: goto label_2a50c0;
        case 0x2a50c4u: goto label_2a50c4;
        case 0x2a50c8u: goto label_2a50c8;
        case 0x2a50ccu: goto label_2a50cc;
        case 0x2a50d0u: goto label_2a50d0;
        case 0x2a50d4u: goto label_2a50d4;
        case 0x2a50d8u: goto label_2a50d8;
        case 0x2a50dcu: goto label_2a50dc;
        case 0x2a50e0u: goto label_2a50e0;
        case 0x2a50e4u: goto label_2a50e4;
        case 0x2a50e8u: goto label_2a50e8;
        case 0x2a50ecu: goto label_2a50ec;
        case 0x2a50f0u: goto label_2a50f0;
        case 0x2a50f4u: goto label_2a50f4;
        case 0x2a50f8u: goto label_2a50f8;
        case 0x2a50fcu: goto label_2a50fc;
        case 0x2a5100u: goto label_2a5100;
        case 0x2a5104u: goto label_2a5104;
        case 0x2a5108u: goto label_2a5108;
        case 0x2a510cu: goto label_2a510c;
        case 0x2a5110u: goto label_2a5110;
        case 0x2a5114u: goto label_2a5114;
        case 0x2a5118u: goto label_2a5118;
        case 0x2a511cu: goto label_2a511c;
        case 0x2a5120u: goto label_2a5120;
        case 0x2a5124u: goto label_2a5124;
        case 0x2a5128u: goto label_2a5128;
        case 0x2a512cu: goto label_2a512c;
        case 0x2a5130u: goto label_2a5130;
        case 0x2a5134u: goto label_2a5134;
        case 0x2a5138u: goto label_2a5138;
        case 0x2a513cu: goto label_2a513c;
        case 0x2a5140u: goto label_2a5140;
        case 0x2a5144u: goto label_2a5144;
        case 0x2a5148u: goto label_2a5148;
        case 0x2a514cu: goto label_2a514c;
        case 0x2a5150u: goto label_2a5150;
        case 0x2a5154u: goto label_2a5154;
        case 0x2a5158u: goto label_2a5158;
        case 0x2a515cu: goto label_2a515c;
        case 0x2a5160u: goto label_2a5160;
        case 0x2a5164u: goto label_2a5164;
        case 0x2a5168u: goto label_2a5168;
        case 0x2a516cu: goto label_2a516c;
        case 0x2a5170u: goto label_2a5170;
        case 0x2a5174u: goto label_2a5174;
        case 0x2a5178u: goto label_2a5178;
        case 0x2a517cu: goto label_2a517c;
        case 0x2a5180u: goto label_2a5180;
        case 0x2a5184u: goto label_2a5184;
        case 0x2a5188u: goto label_2a5188;
        case 0x2a518cu: goto label_2a518c;
        case 0x2a5190u: goto label_2a5190;
        case 0x2a5194u: goto label_2a5194;
        case 0x2a5198u: goto label_2a5198;
        case 0x2a519cu: goto label_2a519c;
        case 0x2a51a0u: goto label_2a51a0;
        case 0x2a51a4u: goto label_2a51a4;
        case 0x2a51a8u: goto label_2a51a8;
        case 0x2a51acu: goto label_2a51ac;
        case 0x2a51b0u: goto label_2a51b0;
        case 0x2a51b4u: goto label_2a51b4;
        case 0x2a51b8u: goto label_2a51b8;
        case 0x2a51bcu: goto label_2a51bc;
        case 0x2a51c0u: goto label_2a51c0;
        case 0x2a51c4u: goto label_2a51c4;
        case 0x2a51c8u: goto label_2a51c8;
        case 0x2a51ccu: goto label_2a51cc;
        case 0x2a51d0u: goto label_2a51d0;
        case 0x2a51d4u: goto label_2a51d4;
        case 0x2a51d8u: goto label_2a51d8;
        case 0x2a51dcu: goto label_2a51dc;
        case 0x2a51e0u: goto label_2a51e0;
        case 0x2a51e4u: goto label_2a51e4;
        case 0x2a51e8u: goto label_2a51e8;
        case 0x2a51ecu: goto label_2a51ec;
        case 0x2a51f0u: goto label_2a51f0;
        case 0x2a51f4u: goto label_2a51f4;
        case 0x2a51f8u: goto label_2a51f8;
        case 0x2a51fcu: goto label_2a51fc;
        case 0x2a5200u: goto label_2a5200;
        case 0x2a5204u: goto label_2a5204;
        case 0x2a5208u: goto label_2a5208;
        case 0x2a520cu: goto label_2a520c;
        case 0x2a5210u: goto label_2a5210;
        case 0x2a5214u: goto label_2a5214;
        case 0x2a5218u: goto label_2a5218;
        case 0x2a521cu: goto label_2a521c;
        case 0x2a5220u: goto label_2a5220;
        case 0x2a5224u: goto label_2a5224;
        case 0x2a5228u: goto label_2a5228;
        case 0x2a522cu: goto label_2a522c;
        case 0x2a5230u: goto label_2a5230;
        case 0x2a5234u: goto label_2a5234;
        case 0x2a5238u: goto label_2a5238;
        case 0x2a523cu: goto label_2a523c;
        case 0x2a5240u: goto label_2a5240;
        case 0x2a5244u: goto label_2a5244;
        case 0x2a5248u: goto label_2a5248;
        case 0x2a524cu: goto label_2a524c;
        case 0x2a5250u: goto label_2a5250;
        case 0x2a5254u: goto label_2a5254;
        case 0x2a5258u: goto label_2a5258;
        case 0x2a525cu: goto label_2a525c;
        case 0x2a5260u: goto label_2a5260;
        case 0x2a5264u: goto label_2a5264;
        case 0x2a5268u: goto label_2a5268;
        case 0x2a526cu: goto label_2a526c;
        case 0x2a5270u: goto label_2a5270;
        case 0x2a5274u: goto label_2a5274;
        case 0x2a5278u: goto label_2a5278;
        case 0x2a527cu: goto label_2a527c;
        case 0x2a5280u: goto label_2a5280;
        case 0x2a5284u: goto label_2a5284;
        case 0x2a5288u: goto label_2a5288;
        case 0x2a528cu: goto label_2a528c;
        case 0x2a5290u: goto label_2a5290;
        case 0x2a5294u: goto label_2a5294;
        case 0x2a5298u: goto label_2a5298;
        case 0x2a529cu: goto label_2a529c;
        case 0x2a52a0u: goto label_2a52a0;
        case 0x2a52a4u: goto label_2a52a4;
        case 0x2a52a8u: goto label_2a52a8;
        case 0x2a52acu: goto label_2a52ac;
        case 0x2a52b0u: goto label_2a52b0;
        case 0x2a52b4u: goto label_2a52b4;
        case 0x2a52b8u: goto label_2a52b8;
        case 0x2a52bcu: goto label_2a52bc;
        case 0x2a52c0u: goto label_2a52c0;
        case 0x2a52c4u: goto label_2a52c4;
        case 0x2a52c8u: goto label_2a52c8;
        case 0x2a52ccu: goto label_2a52cc;
        case 0x2a52d0u: goto label_2a52d0;
        case 0x2a52d4u: goto label_2a52d4;
        case 0x2a52d8u: goto label_2a52d8;
        case 0x2a52dcu: goto label_2a52dc;
        case 0x2a52e0u: goto label_2a52e0;
        case 0x2a52e4u: goto label_2a52e4;
        case 0x2a52e8u: goto label_2a52e8;
        case 0x2a52ecu: goto label_2a52ec;
        case 0x2a52f0u: goto label_2a52f0;
        case 0x2a52f4u: goto label_2a52f4;
        case 0x2a52f8u: goto label_2a52f8;
        case 0x2a52fcu: goto label_2a52fc;
        case 0x2a5300u: goto label_2a5300;
        case 0x2a5304u: goto label_2a5304;
        case 0x2a5308u: goto label_2a5308;
        case 0x2a530cu: goto label_2a530c;
        case 0x2a5310u: goto label_2a5310;
        case 0x2a5314u: goto label_2a5314;
        case 0x2a5318u: goto label_2a5318;
        case 0x2a531cu: goto label_2a531c;
        case 0x2a5320u: goto label_2a5320;
        case 0x2a5324u: goto label_2a5324;
        case 0x2a5328u: goto label_2a5328;
        case 0x2a532cu: goto label_2a532c;
        case 0x2a5330u: goto label_2a5330;
        case 0x2a5334u: goto label_2a5334;
        case 0x2a5338u: goto label_2a5338;
        case 0x2a533cu: goto label_2a533c;
        case 0x2a5340u: goto label_2a5340;
        case 0x2a5344u: goto label_2a5344;
        case 0x2a5348u: goto label_2a5348;
        case 0x2a534cu: goto label_2a534c;
        case 0x2a5350u: goto label_2a5350;
        case 0x2a5354u: goto label_2a5354;
        case 0x2a5358u: goto label_2a5358;
        case 0x2a535cu: goto label_2a535c;
        case 0x2a5360u: goto label_2a5360;
        case 0x2a5364u: goto label_2a5364;
        case 0x2a5368u: goto label_2a5368;
        case 0x2a536cu: goto label_2a536c;
        case 0x2a5370u: goto label_2a5370;
        case 0x2a5374u: goto label_2a5374;
        case 0x2a5378u: goto label_2a5378;
        case 0x2a537cu: goto label_2a537c;
        case 0x2a5380u: goto label_2a5380;
        case 0x2a5384u: goto label_2a5384;
        case 0x2a5388u: goto label_2a5388;
        case 0x2a538cu: goto label_2a538c;
        case 0x2a5390u: goto label_2a5390;
        case 0x2a5394u: goto label_2a5394;
        case 0x2a5398u: goto label_2a5398;
        case 0x2a539cu: goto label_2a539c;
        case 0x2a53a0u: goto label_2a53a0;
        case 0x2a53a4u: goto label_2a53a4;
        case 0x2a53a8u: goto label_2a53a8;
        case 0x2a53acu: goto label_2a53ac;
        case 0x2a53b0u: goto label_2a53b0;
        case 0x2a53b4u: goto label_2a53b4;
        case 0x2a53b8u: goto label_2a53b8;
        case 0x2a53bcu: goto label_2a53bc;
        case 0x2a53c0u: goto label_2a53c0;
        case 0x2a53c4u: goto label_2a53c4;
        case 0x2a53c8u: goto label_2a53c8;
        case 0x2a53ccu: goto label_2a53cc;
        case 0x2a53d0u: goto label_2a53d0;
        case 0x2a53d4u: goto label_2a53d4;
        case 0x2a53d8u: goto label_2a53d8;
        case 0x2a53dcu: goto label_2a53dc;
        case 0x2a53e0u: goto label_2a53e0;
        case 0x2a53e4u: goto label_2a53e4;
        case 0x2a53e8u: goto label_2a53e8;
        case 0x2a53ecu: goto label_2a53ec;
        case 0x2a53f0u: goto label_2a53f0;
        case 0x2a53f4u: goto label_2a53f4;
        case 0x2a53f8u: goto label_2a53f8;
        case 0x2a53fcu: goto label_2a53fc;
        case 0x2a5400u: goto label_2a5400;
        case 0x2a5404u: goto label_2a5404;
        case 0x2a5408u: goto label_2a5408;
        case 0x2a540cu: goto label_2a540c;
        case 0x2a5410u: goto label_2a5410;
        case 0x2a5414u: goto label_2a5414;
        case 0x2a5418u: goto label_2a5418;
        case 0x2a541cu: goto label_2a541c;
        case 0x2a5420u: goto label_2a5420;
        case 0x2a5424u: goto label_2a5424;
        case 0x2a5428u: goto label_2a5428;
        case 0x2a542cu: goto label_2a542c;
        case 0x2a5430u: goto label_2a5430;
        case 0x2a5434u: goto label_2a5434;
        case 0x2a5438u: goto label_2a5438;
        case 0x2a543cu: goto label_2a543c;
        case 0x2a5440u: goto label_2a5440;
        case 0x2a5444u: goto label_2a5444;
        case 0x2a5448u: goto label_2a5448;
        case 0x2a544cu: goto label_2a544c;
        case 0x2a5450u: goto label_2a5450;
        case 0x2a5454u: goto label_2a5454;
        case 0x2a5458u: goto label_2a5458;
        case 0x2a545cu: goto label_2a545c;
        case 0x2a5460u: goto label_2a5460;
        case 0x2a5464u: goto label_2a5464;
        case 0x2a5468u: goto label_2a5468;
        case 0x2a546cu: goto label_2a546c;
        case 0x2a5470u: goto label_2a5470;
        case 0x2a5474u: goto label_2a5474;
        case 0x2a5478u: goto label_2a5478;
        case 0x2a547cu: goto label_2a547c;
        case 0x2a5480u: goto label_2a5480;
        case 0x2a5484u: goto label_2a5484;
        case 0x2a5488u: goto label_2a5488;
        case 0x2a548cu: goto label_2a548c;
        case 0x2a5490u: goto label_2a5490;
        case 0x2a5494u: goto label_2a5494;
        case 0x2a5498u: goto label_2a5498;
        case 0x2a549cu: goto label_2a549c;
        case 0x2a54a0u: goto label_2a54a0;
        case 0x2a54a4u: goto label_2a54a4;
        case 0x2a54a8u: goto label_2a54a8;
        case 0x2a54acu: goto label_2a54ac;
        case 0x2a54b0u: goto label_2a54b0;
        case 0x2a54b4u: goto label_2a54b4;
        case 0x2a54b8u: goto label_2a54b8;
        case 0x2a54bcu: goto label_2a54bc;
        case 0x2a54c0u: goto label_2a54c0;
        case 0x2a54c4u: goto label_2a54c4;
        case 0x2a54c8u: goto label_2a54c8;
        case 0x2a54ccu: goto label_2a54cc;
        case 0x2a54d0u: goto label_2a54d0;
        case 0x2a54d4u: goto label_2a54d4;
        case 0x2a54d8u: goto label_2a54d8;
        case 0x2a54dcu: goto label_2a54dc;
        case 0x2a54e0u: goto label_2a54e0;
        case 0x2a54e4u: goto label_2a54e4;
        case 0x2a54e8u: goto label_2a54e8;
        case 0x2a54ecu: goto label_2a54ec;
        case 0x2a54f0u: goto label_2a54f0;
        case 0x2a54f4u: goto label_2a54f4;
        case 0x2a54f8u: goto label_2a54f8;
        case 0x2a54fcu: goto label_2a54fc;
        case 0x2a5500u: goto label_2a5500;
        case 0x2a5504u: goto label_2a5504;
        case 0x2a5508u: goto label_2a5508;
        case 0x2a550cu: goto label_2a550c;
        case 0x2a5510u: goto label_2a5510;
        case 0x2a5514u: goto label_2a5514;
        case 0x2a5518u: goto label_2a5518;
        case 0x2a551cu: goto label_2a551c;
        case 0x2a5520u: goto label_2a5520;
        case 0x2a5524u: goto label_2a5524;
        case 0x2a5528u: goto label_2a5528;
        case 0x2a552cu: goto label_2a552c;
        case 0x2a5530u: goto label_2a5530;
        case 0x2a5534u: goto label_2a5534;
        case 0x2a5538u: goto label_2a5538;
        case 0x2a553cu: goto label_2a553c;
        case 0x2a5540u: goto label_2a5540;
        case 0x2a5544u: goto label_2a5544;
        case 0x2a5548u: goto label_2a5548;
        case 0x2a554cu: goto label_2a554c;
        case 0x2a5550u: goto label_2a5550;
        case 0x2a5554u: goto label_2a5554;
        case 0x2a5558u: goto label_2a5558;
        case 0x2a555cu: goto label_2a555c;
        case 0x2a5560u: goto label_2a5560;
        case 0x2a5564u: goto label_2a5564;
        case 0x2a5568u: goto label_2a5568;
        case 0x2a556cu: goto label_2a556c;
        case 0x2a5570u: goto label_2a5570;
        case 0x2a5574u: goto label_2a5574;
        case 0x2a5578u: goto label_2a5578;
        case 0x2a557cu: goto label_2a557c;
        case 0x2a5580u: goto label_2a5580;
        case 0x2a5584u: goto label_2a5584;
        case 0x2a5588u: goto label_2a5588;
        case 0x2a558cu: goto label_2a558c;
        case 0x2a5590u: goto label_2a5590;
        case 0x2a5594u: goto label_2a5594;
        case 0x2a5598u: goto label_2a5598;
        case 0x2a559cu: goto label_2a559c;
        case 0x2a55a0u: goto label_2a55a0;
        case 0x2a55a4u: goto label_2a55a4;
        case 0x2a55a8u: goto label_2a55a8;
        case 0x2a55acu: goto label_2a55ac;
        case 0x2a55b0u: goto label_2a55b0;
        case 0x2a55b4u: goto label_2a55b4;
        case 0x2a55b8u: goto label_2a55b8;
        case 0x2a55bcu: goto label_2a55bc;
        case 0x2a55c0u: goto label_2a55c0;
        case 0x2a55c4u: goto label_2a55c4;
        case 0x2a55c8u: goto label_2a55c8;
        case 0x2a55ccu: goto label_2a55cc;
        case 0x2a55d0u: goto label_2a55d0;
        case 0x2a55d4u: goto label_2a55d4;
        case 0x2a55d8u: goto label_2a55d8;
        case 0x2a55dcu: goto label_2a55dc;
        case 0x2a55e0u: goto label_2a55e0;
        case 0x2a55e4u: goto label_2a55e4;
        case 0x2a55e8u: goto label_2a55e8;
        case 0x2a55ecu: goto label_2a55ec;
        case 0x2a55f0u: goto label_2a55f0;
        case 0x2a55f4u: goto label_2a55f4;
        case 0x2a55f8u: goto label_2a55f8;
        case 0x2a55fcu: goto label_2a55fc;
        case 0x2a5600u: goto label_2a5600;
        case 0x2a5604u: goto label_2a5604;
        case 0x2a5608u: goto label_2a5608;
        case 0x2a560cu: goto label_2a560c;
        case 0x2a5610u: goto label_2a5610;
        case 0x2a5614u: goto label_2a5614;
        case 0x2a5618u: goto label_2a5618;
        case 0x2a561cu: goto label_2a561c;
        case 0x2a5620u: goto label_2a5620;
        case 0x2a5624u: goto label_2a5624;
        case 0x2a5628u: goto label_2a5628;
        case 0x2a562cu: goto label_2a562c;
        case 0x2a5630u: goto label_2a5630;
        case 0x2a5634u: goto label_2a5634;
        case 0x2a5638u: goto label_2a5638;
        case 0x2a563cu: goto label_2a563c;
        case 0x2a5640u: goto label_2a5640;
        case 0x2a5644u: goto label_2a5644;
        case 0x2a5648u: goto label_2a5648;
        case 0x2a564cu: goto label_2a564c;
        case 0x2a5650u: goto label_2a5650;
        case 0x2a5654u: goto label_2a5654;
        case 0x2a5658u: goto label_2a5658;
        case 0x2a565cu: goto label_2a565c;
        case 0x2a5660u: goto label_2a5660;
        case 0x2a5664u: goto label_2a5664;
        case 0x2a5668u: goto label_2a5668;
        case 0x2a566cu: goto label_2a566c;
        case 0x2a5670u: goto label_2a5670;
        case 0x2a5674u: goto label_2a5674;
        case 0x2a5678u: goto label_2a5678;
        case 0x2a567cu: goto label_2a567c;
        case 0x2a5680u: goto label_2a5680;
        case 0x2a5684u: goto label_2a5684;
        case 0x2a5688u: goto label_2a5688;
        case 0x2a568cu: goto label_2a568c;
        case 0x2a5690u: goto label_2a5690;
        case 0x2a5694u: goto label_2a5694;
        case 0x2a5698u: goto label_2a5698;
        case 0x2a569cu: goto label_2a569c;
        case 0x2a56a0u: goto label_2a56a0;
        case 0x2a56a4u: goto label_2a56a4;
        case 0x2a56a8u: goto label_2a56a8;
        case 0x2a56acu: goto label_2a56ac;
        case 0x2a56b0u: goto label_2a56b0;
        case 0x2a56b4u: goto label_2a56b4;
        case 0x2a56b8u: goto label_2a56b8;
        case 0x2a56bcu: goto label_2a56bc;
        case 0x2a56c0u: goto label_2a56c0;
        case 0x2a56c4u: goto label_2a56c4;
        case 0x2a56c8u: goto label_2a56c8;
        case 0x2a56ccu: goto label_2a56cc;
        case 0x2a56d0u: goto label_2a56d0;
        case 0x2a56d4u: goto label_2a56d4;
        case 0x2a56d8u: goto label_2a56d8;
        case 0x2a56dcu: goto label_2a56dc;
        case 0x2a56e0u: goto label_2a56e0;
        case 0x2a56e4u: goto label_2a56e4;
        case 0x2a56e8u: goto label_2a56e8;
        case 0x2a56ecu: goto label_2a56ec;
        case 0x2a56f0u: goto label_2a56f0;
        case 0x2a56f4u: goto label_2a56f4;
        case 0x2a56f8u: goto label_2a56f8;
        case 0x2a56fcu: goto label_2a56fc;
        case 0x2a5700u: goto label_2a5700;
        case 0x2a5704u: goto label_2a5704;
        case 0x2a5708u: goto label_2a5708;
        case 0x2a570cu: goto label_2a570c;
        case 0x2a5710u: goto label_2a5710;
        case 0x2a5714u: goto label_2a5714;
        case 0x2a5718u: goto label_2a5718;
        case 0x2a571cu: goto label_2a571c;
        case 0x2a5720u: goto label_2a5720;
        case 0x2a5724u: goto label_2a5724;
        case 0x2a5728u: goto label_2a5728;
        case 0x2a572cu: goto label_2a572c;
        case 0x2a5730u: goto label_2a5730;
        case 0x2a5734u: goto label_2a5734;
        case 0x2a5738u: goto label_2a5738;
        case 0x2a573cu: goto label_2a573c;
        case 0x2a5740u: goto label_2a5740;
        case 0x2a5744u: goto label_2a5744;
        case 0x2a5748u: goto label_2a5748;
        case 0x2a574cu: goto label_2a574c;
        case 0x2a5750u: goto label_2a5750;
        case 0x2a5754u: goto label_2a5754;
        case 0x2a5758u: goto label_2a5758;
        case 0x2a575cu: goto label_2a575c;
        case 0x2a5760u: goto label_2a5760;
        case 0x2a5764u: goto label_2a5764;
        case 0x2a5768u: goto label_2a5768;
        case 0x2a576cu: goto label_2a576c;
        case 0x2a5770u: goto label_2a5770;
        case 0x2a5774u: goto label_2a5774;
        case 0x2a5778u: goto label_2a5778;
        case 0x2a577cu: goto label_2a577c;
        case 0x2a5780u: goto label_2a5780;
        case 0x2a5784u: goto label_2a5784;
        case 0x2a5788u: goto label_2a5788;
        case 0x2a578cu: goto label_2a578c;
        case 0x2a5790u: goto label_2a5790;
        case 0x2a5794u: goto label_2a5794;
        case 0x2a5798u: goto label_2a5798;
        case 0x2a579cu: goto label_2a579c;
        case 0x2a57a0u: goto label_2a57a0;
        case 0x2a57a4u: goto label_2a57a4;
        case 0x2a57a8u: goto label_2a57a8;
        case 0x2a57acu: goto label_2a57ac;
        case 0x2a57b0u: goto label_2a57b0;
        case 0x2a57b4u: goto label_2a57b4;
        case 0x2a57b8u: goto label_2a57b8;
        case 0x2a57bcu: goto label_2a57bc;
        case 0x2a57c0u: goto label_2a57c0;
        case 0x2a57c4u: goto label_2a57c4;
        case 0x2a57c8u: goto label_2a57c8;
        case 0x2a57ccu: goto label_2a57cc;
        case 0x2a57d0u: goto label_2a57d0;
        case 0x2a57d4u: goto label_2a57d4;
        case 0x2a57d8u: goto label_2a57d8;
        case 0x2a57dcu: goto label_2a57dc;
        case 0x2a57e0u: goto label_2a57e0;
        case 0x2a57e4u: goto label_2a57e4;
        case 0x2a57e8u: goto label_2a57e8;
        case 0x2a57ecu: goto label_2a57ec;
        case 0x2a57f0u: goto label_2a57f0;
        case 0x2a57f4u: goto label_2a57f4;
        case 0x2a57f8u: goto label_2a57f8;
        case 0x2a57fcu: goto label_2a57fc;
        case 0x2a5800u: goto label_2a5800;
        case 0x2a5804u: goto label_2a5804;
        case 0x2a5808u: goto label_2a5808;
        case 0x2a580cu: goto label_2a580c;
        case 0x2a5810u: goto label_2a5810;
        case 0x2a5814u: goto label_2a5814;
        case 0x2a5818u: goto label_2a5818;
        case 0x2a581cu: goto label_2a581c;
        case 0x2a5820u: goto label_2a5820;
        case 0x2a5824u: goto label_2a5824;
        case 0x2a5828u: goto label_2a5828;
        case 0x2a582cu: goto label_2a582c;
        case 0x2a5830u: goto label_2a5830;
        case 0x2a5834u: goto label_2a5834;
        case 0x2a5838u: goto label_2a5838;
        case 0x2a583cu: goto label_2a583c;
        case 0x2a5840u: goto label_2a5840;
        case 0x2a5844u: goto label_2a5844;
        case 0x2a5848u: goto label_2a5848;
        case 0x2a584cu: goto label_2a584c;
        case 0x2a5850u: goto label_2a5850;
        case 0x2a5854u: goto label_2a5854;
        case 0x2a5858u: goto label_2a5858;
        case 0x2a585cu: goto label_2a585c;
        case 0x2a5860u: goto label_2a5860;
        case 0x2a5864u: goto label_2a5864;
        case 0x2a5868u: goto label_2a5868;
        case 0x2a586cu: goto label_2a586c;
        case 0x2a5870u: goto label_2a5870;
        case 0x2a5874u: goto label_2a5874;
        case 0x2a5878u: goto label_2a5878;
        case 0x2a587cu: goto label_2a587c;
        case 0x2a5880u: goto label_2a5880;
        case 0x2a5884u: goto label_2a5884;
        case 0x2a5888u: goto label_2a5888;
        case 0x2a588cu: goto label_2a588c;
        case 0x2a5890u: goto label_2a5890;
        case 0x2a5894u: goto label_2a5894;
        case 0x2a5898u: goto label_2a5898;
        case 0x2a589cu: goto label_2a589c;
        case 0x2a58a0u: goto label_2a58a0;
        case 0x2a58a4u: goto label_2a58a4;
        case 0x2a58a8u: goto label_2a58a8;
        case 0x2a58acu: goto label_2a58ac;
        case 0x2a58b0u: goto label_2a58b0;
        case 0x2a58b4u: goto label_2a58b4;
        case 0x2a58b8u: goto label_2a58b8;
        case 0x2a58bcu: goto label_2a58bc;
        case 0x2a58c0u: goto label_2a58c0;
        case 0x2a58c4u: goto label_2a58c4;
        case 0x2a58c8u: goto label_2a58c8;
        case 0x2a58ccu: goto label_2a58cc;
        case 0x2a58d0u: goto label_2a58d0;
        case 0x2a58d4u: goto label_2a58d4;
        case 0x2a58d8u: goto label_2a58d8;
        case 0x2a58dcu: goto label_2a58dc;
        case 0x2a58e0u: goto label_2a58e0;
        case 0x2a58e4u: goto label_2a58e4;
        case 0x2a58e8u: goto label_2a58e8;
        case 0x2a58ecu: goto label_2a58ec;
        case 0x2a58f0u: goto label_2a58f0;
        case 0x2a58f4u: goto label_2a58f4;
        case 0x2a58f8u: goto label_2a58f8;
        case 0x2a58fcu: goto label_2a58fc;
        case 0x2a5900u: goto label_2a5900;
        case 0x2a5904u: goto label_2a5904;
        case 0x2a5908u: goto label_2a5908;
        case 0x2a590cu: goto label_2a590c;
        case 0x2a5910u: goto label_2a5910;
        case 0x2a5914u: goto label_2a5914;
        case 0x2a5918u: goto label_2a5918;
        case 0x2a591cu: goto label_2a591c;
        case 0x2a5920u: goto label_2a5920;
        case 0x2a5924u: goto label_2a5924;
        case 0x2a5928u: goto label_2a5928;
        case 0x2a592cu: goto label_2a592c;
        case 0x2a5930u: goto label_2a5930;
        case 0x2a5934u: goto label_2a5934;
        case 0x2a5938u: goto label_2a5938;
        case 0x2a593cu: goto label_2a593c;
        case 0x2a5940u: goto label_2a5940;
        case 0x2a5944u: goto label_2a5944;
        case 0x2a5948u: goto label_2a5948;
        case 0x2a594cu: goto label_2a594c;
        case 0x2a5950u: goto label_2a5950;
        case 0x2a5954u: goto label_2a5954;
        case 0x2a5958u: goto label_2a5958;
        case 0x2a595cu: goto label_2a595c;
        case 0x2a5960u: goto label_2a5960;
        case 0x2a5964u: goto label_2a5964;
        case 0x2a5968u: goto label_2a5968;
        case 0x2a596cu: goto label_2a596c;
        case 0x2a5970u: goto label_2a5970;
        case 0x2a5974u: goto label_2a5974;
        case 0x2a5978u: goto label_2a5978;
        case 0x2a597cu: goto label_2a597c;
        case 0x2a5980u: goto label_2a5980;
        case 0x2a5984u: goto label_2a5984;
        case 0x2a5988u: goto label_2a5988;
        case 0x2a598cu: goto label_2a598c;
        case 0x2a5990u: goto label_2a5990;
        case 0x2a5994u: goto label_2a5994;
        case 0x2a5998u: goto label_2a5998;
        case 0x2a599cu: goto label_2a599c;
        case 0x2a59a0u: goto label_2a59a0;
        case 0x2a59a4u: goto label_2a59a4;
        case 0x2a59a8u: goto label_2a59a8;
        case 0x2a59acu: goto label_2a59ac;
        case 0x2a59b0u: goto label_2a59b0;
        case 0x2a59b4u: goto label_2a59b4;
        case 0x2a59b8u: goto label_2a59b8;
        case 0x2a59bcu: goto label_2a59bc;
        case 0x2a59c0u: goto label_2a59c0;
        case 0x2a59c4u: goto label_2a59c4;
        case 0x2a59c8u: goto label_2a59c8;
        case 0x2a59ccu: goto label_2a59cc;
        case 0x2a59d0u: goto label_2a59d0;
        case 0x2a59d4u: goto label_2a59d4;
        case 0x2a59d8u: goto label_2a59d8;
        case 0x2a59dcu: goto label_2a59dc;
        case 0x2a59e0u: goto label_2a59e0;
        case 0x2a59e4u: goto label_2a59e4;
        case 0x2a59e8u: goto label_2a59e8;
        case 0x2a59ecu: goto label_2a59ec;
        case 0x2a59f0u: goto label_2a59f0;
        case 0x2a59f4u: goto label_2a59f4;
        case 0x2a59f8u: goto label_2a59f8;
        case 0x2a59fcu: goto label_2a59fc;
        case 0x2a5a00u: goto label_2a5a00;
        case 0x2a5a04u: goto label_2a5a04;
        case 0x2a5a08u: goto label_2a5a08;
        case 0x2a5a0cu: goto label_2a5a0c;
        case 0x2a5a10u: goto label_2a5a10;
        case 0x2a5a14u: goto label_2a5a14;
        case 0x2a5a18u: goto label_2a5a18;
        case 0x2a5a1cu: goto label_2a5a1c;
        case 0x2a5a20u: goto label_2a5a20;
        case 0x2a5a24u: goto label_2a5a24;
        case 0x2a5a28u: goto label_2a5a28;
        case 0x2a5a2cu: goto label_2a5a2c;
        case 0x2a5a30u: goto label_2a5a30;
        case 0x2a5a34u: goto label_2a5a34;
        case 0x2a5a38u: goto label_2a5a38;
        case 0x2a5a3cu: goto label_2a5a3c;
        case 0x2a5a40u: goto label_2a5a40;
        case 0x2a5a44u: goto label_2a5a44;
        case 0x2a5a48u: goto label_2a5a48;
        case 0x2a5a4cu: goto label_2a5a4c;
        case 0x2a5a50u: goto label_2a5a50;
        case 0x2a5a54u: goto label_2a5a54;
        case 0x2a5a58u: goto label_2a5a58;
        case 0x2a5a5cu: goto label_2a5a5c;
        case 0x2a5a60u: goto label_2a5a60;
        case 0x2a5a64u: goto label_2a5a64;
        case 0x2a5a68u: goto label_2a5a68;
        case 0x2a5a6cu: goto label_2a5a6c;
        case 0x2a5a70u: goto label_2a5a70;
        case 0x2a5a74u: goto label_2a5a74;
        case 0x2a5a78u: goto label_2a5a78;
        case 0x2a5a7cu: goto label_2a5a7c;
        case 0x2a5a80u: goto label_2a5a80;
        case 0x2a5a84u: goto label_2a5a84;
        case 0x2a5a88u: goto label_2a5a88;
        case 0x2a5a8cu: goto label_2a5a8c;
        case 0x2a5a90u: goto label_2a5a90;
        case 0x2a5a94u: goto label_2a5a94;
        case 0x2a5a98u: goto label_2a5a98;
        case 0x2a5a9cu: goto label_2a5a9c;
        case 0x2a5aa0u: goto label_2a5aa0;
        case 0x2a5aa4u: goto label_2a5aa4;
        case 0x2a5aa8u: goto label_2a5aa8;
        case 0x2a5aacu: goto label_2a5aac;
        case 0x2a5ab0u: goto label_2a5ab0;
        case 0x2a5ab4u: goto label_2a5ab4;
        case 0x2a5ab8u: goto label_2a5ab8;
        case 0x2a5abcu: goto label_2a5abc;
        case 0x2a5ac0u: goto label_2a5ac0;
        case 0x2a5ac4u: goto label_2a5ac4;
        case 0x2a5ac8u: goto label_2a5ac8;
        case 0x2a5accu: goto label_2a5acc;
        case 0x2a5ad0u: goto label_2a5ad0;
        case 0x2a5ad4u: goto label_2a5ad4;
        case 0x2a5ad8u: goto label_2a5ad8;
        case 0x2a5adcu: goto label_2a5adc;
        case 0x2a5ae0u: goto label_2a5ae0;
        case 0x2a5ae4u: goto label_2a5ae4;
        case 0x2a5ae8u: goto label_2a5ae8;
        case 0x2a5aecu: goto label_2a5aec;
        case 0x2a5af0u: goto label_2a5af0;
        case 0x2a5af4u: goto label_2a5af4;
        case 0x2a5af8u: goto label_2a5af8;
        case 0x2a5afcu: goto label_2a5afc;
        case 0x2a5b00u: goto label_2a5b00;
        case 0x2a5b04u: goto label_2a5b04;
        case 0x2a5b08u: goto label_2a5b08;
        case 0x2a5b0cu: goto label_2a5b0c;
        case 0x2a5b10u: goto label_2a5b10;
        case 0x2a5b14u: goto label_2a5b14;
        case 0x2a5b18u: goto label_2a5b18;
        case 0x2a5b1cu: goto label_2a5b1c;
        case 0x2a5b20u: goto label_2a5b20;
        case 0x2a5b24u: goto label_2a5b24;
        case 0x2a5b28u: goto label_2a5b28;
        case 0x2a5b2cu: goto label_2a5b2c;
        case 0x2a5b30u: goto label_2a5b30;
        case 0x2a5b34u: goto label_2a5b34;
        case 0x2a5b38u: goto label_2a5b38;
        case 0x2a5b3cu: goto label_2a5b3c;
        case 0x2a5b40u: goto label_2a5b40;
        case 0x2a5b44u: goto label_2a5b44;
        case 0x2a5b48u: goto label_2a5b48;
        case 0x2a5b4cu: goto label_2a5b4c;
        case 0x2a5b50u: goto label_2a5b50;
        case 0x2a5b54u: goto label_2a5b54;
        case 0x2a5b58u: goto label_2a5b58;
        case 0x2a5b5cu: goto label_2a5b5c;
        case 0x2a5b60u: goto label_2a5b60;
        case 0x2a5b64u: goto label_2a5b64;
        case 0x2a5b68u: goto label_2a5b68;
        case 0x2a5b6cu: goto label_2a5b6c;
        case 0x2a5b70u: goto label_2a5b70;
        case 0x2a5b74u: goto label_2a5b74;
        case 0x2a5b78u: goto label_2a5b78;
        case 0x2a5b7cu: goto label_2a5b7c;
        case 0x2a5b80u: goto label_2a5b80;
        case 0x2a5b84u: goto label_2a5b84;
        case 0x2a5b88u: goto label_2a5b88;
        case 0x2a5b8cu: goto label_2a5b8c;
        case 0x2a5b90u: goto label_2a5b90;
        case 0x2a5b94u: goto label_2a5b94;
        case 0x2a5b98u: goto label_2a5b98;
        case 0x2a5b9cu: goto label_2a5b9c;
        case 0x2a5ba0u: goto label_2a5ba0;
        case 0x2a5ba4u: goto label_2a5ba4;
        case 0x2a5ba8u: goto label_2a5ba8;
        case 0x2a5bacu: goto label_2a5bac;
        case 0x2a5bb0u: goto label_2a5bb0;
        case 0x2a5bb4u: goto label_2a5bb4;
        case 0x2a5bb8u: goto label_2a5bb8;
        case 0x2a5bbcu: goto label_2a5bbc;
        case 0x2a5bc0u: goto label_2a5bc0;
        case 0x2a5bc4u: goto label_2a5bc4;
        case 0x2a5bc8u: goto label_2a5bc8;
        case 0x2a5bccu: goto label_2a5bcc;
        case 0x2a5bd0u: goto label_2a5bd0;
        case 0x2a5bd4u: goto label_2a5bd4;
        case 0x2a5bd8u: goto label_2a5bd8;
        case 0x2a5bdcu: goto label_2a5bdc;
        case 0x2a5be0u: goto label_2a5be0;
        case 0x2a5be4u: goto label_2a5be4;
        case 0x2a5be8u: goto label_2a5be8;
        case 0x2a5becu: goto label_2a5bec;
        case 0x2a5bf0u: goto label_2a5bf0;
        case 0x2a5bf4u: goto label_2a5bf4;
        case 0x2a5bf8u: goto label_2a5bf8;
        case 0x2a5bfcu: goto label_2a5bfc;
        case 0x2a5c00u: goto label_2a5c00;
        case 0x2a5c04u: goto label_2a5c04;
        case 0x2a5c08u: goto label_2a5c08;
        case 0x2a5c0cu: goto label_2a5c0c;
        case 0x2a5c10u: goto label_2a5c10;
        case 0x2a5c14u: goto label_2a5c14;
        case 0x2a5c18u: goto label_2a5c18;
        case 0x2a5c1cu: goto label_2a5c1c;
        case 0x2a5c20u: goto label_2a5c20;
        case 0x2a5c24u: goto label_2a5c24;
        case 0x2a5c28u: goto label_2a5c28;
        case 0x2a5c2cu: goto label_2a5c2c;
        case 0x2a5c30u: goto label_2a5c30;
        case 0x2a5c34u: goto label_2a5c34;
        case 0x2a5c38u: goto label_2a5c38;
        case 0x2a5c3cu: goto label_2a5c3c;
        case 0x2a5c40u: goto label_2a5c40;
        case 0x2a5c44u: goto label_2a5c44;
        case 0x2a5c48u: goto label_2a5c48;
        case 0x2a5c4cu: goto label_2a5c4c;
        case 0x2a5c50u: goto label_2a5c50;
        case 0x2a5c54u: goto label_2a5c54;
        case 0x2a5c58u: goto label_2a5c58;
        case 0x2a5c5cu: goto label_2a5c5c;
        case 0x2a5c60u: goto label_2a5c60;
        case 0x2a5c64u: goto label_2a5c64;
        case 0x2a5c68u: goto label_2a5c68;
        case 0x2a5c6cu: goto label_2a5c6c;
        case 0x2a5c70u: goto label_2a5c70;
        case 0x2a5c74u: goto label_2a5c74;
        case 0x2a5c78u: goto label_2a5c78;
        case 0x2a5c7cu: goto label_2a5c7c;
        case 0x2a5c80u: goto label_2a5c80;
        case 0x2a5c84u: goto label_2a5c84;
        case 0x2a5c88u: goto label_2a5c88;
        case 0x2a5c8cu: goto label_2a5c8c;
        case 0x2a5c90u: goto label_2a5c90;
        case 0x2a5c94u: goto label_2a5c94;
        case 0x2a5c98u: goto label_2a5c98;
        case 0x2a5c9cu: goto label_2a5c9c;
        case 0x2a5ca0u: goto label_2a5ca0;
        case 0x2a5ca4u: goto label_2a5ca4;
        case 0x2a5ca8u: goto label_2a5ca8;
        case 0x2a5cacu: goto label_2a5cac;
        case 0x2a5cb0u: goto label_2a5cb0;
        case 0x2a5cb4u: goto label_2a5cb4;
        case 0x2a5cb8u: goto label_2a5cb8;
        case 0x2a5cbcu: goto label_2a5cbc;
        case 0x2a5cc0u: goto label_2a5cc0;
        case 0x2a5cc4u: goto label_2a5cc4;
        case 0x2a5cc8u: goto label_2a5cc8;
        case 0x2a5cccu: goto label_2a5ccc;
        case 0x2a5cd0u: goto label_2a5cd0;
        case 0x2a5cd4u: goto label_2a5cd4;
        case 0x2a5cd8u: goto label_2a5cd8;
        case 0x2a5cdcu: goto label_2a5cdc;
        case 0x2a5ce0u: goto label_2a5ce0;
        case 0x2a5ce4u: goto label_2a5ce4;
        case 0x2a5ce8u: goto label_2a5ce8;
        case 0x2a5cecu: goto label_2a5cec;
        case 0x2a5cf0u: goto label_2a5cf0;
        case 0x2a5cf4u: goto label_2a5cf4;
        case 0x2a5cf8u: goto label_2a5cf8;
        case 0x2a5cfcu: goto label_2a5cfc;
        case 0x2a5d00u: goto label_2a5d00;
        case 0x2a5d04u: goto label_2a5d04;
        case 0x2a5d08u: goto label_2a5d08;
        case 0x2a5d0cu: goto label_2a5d0c;
        case 0x2a5d10u: goto label_2a5d10;
        case 0x2a5d14u: goto label_2a5d14;
        case 0x2a5d18u: goto label_2a5d18;
        case 0x2a5d1cu: goto label_2a5d1c;
        case 0x2a5d20u: goto label_2a5d20;
        case 0x2a5d24u: goto label_2a5d24;
        case 0x2a5d28u: goto label_2a5d28;
        case 0x2a5d2cu: goto label_2a5d2c;
        case 0x2a5d30u: goto label_2a5d30;
        case 0x2a5d34u: goto label_2a5d34;
        case 0x2a5d38u: goto label_2a5d38;
        case 0x2a5d3cu: goto label_2a5d3c;
        case 0x2a5d40u: goto label_2a5d40;
        case 0x2a5d44u: goto label_2a5d44;
        case 0x2a5d48u: goto label_2a5d48;
        case 0x2a5d4cu: goto label_2a5d4c;
        case 0x2a5d50u: goto label_2a5d50;
        case 0x2a5d54u: goto label_2a5d54;
        case 0x2a5d58u: goto label_2a5d58;
        case 0x2a5d5cu: goto label_2a5d5c;
        case 0x2a5d60u: goto label_2a5d60;
        case 0x2a5d64u: goto label_2a5d64;
        case 0x2a5d68u: goto label_2a5d68;
        case 0x2a5d6cu: goto label_2a5d6c;
        case 0x2a5d70u: goto label_2a5d70;
        case 0x2a5d74u: goto label_2a5d74;
        case 0x2a5d78u: goto label_2a5d78;
        case 0x2a5d7cu: goto label_2a5d7c;
        case 0x2a5d80u: goto label_2a5d80;
        case 0x2a5d84u: goto label_2a5d84;
        case 0x2a5d88u: goto label_2a5d88;
        case 0x2a5d8cu: goto label_2a5d8c;
        case 0x2a5d90u: goto label_2a5d90;
        case 0x2a5d94u: goto label_2a5d94;
        case 0x2a5d98u: goto label_2a5d98;
        case 0x2a5d9cu: goto label_2a5d9c;
        case 0x2a5da0u: goto label_2a5da0;
        case 0x2a5da4u: goto label_2a5da4;
        case 0x2a5da8u: goto label_2a5da8;
        case 0x2a5dacu: goto label_2a5dac;
        case 0x2a5db0u: goto label_2a5db0;
        case 0x2a5db4u: goto label_2a5db4;
        case 0x2a5db8u: goto label_2a5db8;
        case 0x2a5dbcu: goto label_2a5dbc;
        case 0x2a5dc0u: goto label_2a5dc0;
        case 0x2a5dc4u: goto label_2a5dc4;
        case 0x2a5dc8u: goto label_2a5dc8;
        case 0x2a5dccu: goto label_2a5dcc;
        case 0x2a5dd0u: goto label_2a5dd0;
        case 0x2a5dd4u: goto label_2a5dd4;
        case 0x2a5dd8u: goto label_2a5dd8;
        case 0x2a5ddcu: goto label_2a5ddc;
        case 0x2a5de0u: goto label_2a5de0;
        case 0x2a5de4u: goto label_2a5de4;
        case 0x2a5de8u: goto label_2a5de8;
        case 0x2a5decu: goto label_2a5dec;
        case 0x2a5df0u: goto label_2a5df0;
        case 0x2a5df4u: goto label_2a5df4;
        case 0x2a5df8u: goto label_2a5df8;
        case 0x2a5dfcu: goto label_2a5dfc;
        case 0x2a5e00u: goto label_2a5e00;
        case 0x2a5e04u: goto label_2a5e04;
        case 0x2a5e08u: goto label_2a5e08;
        case 0x2a5e0cu: goto label_2a5e0c;
        case 0x2a5e10u: goto label_2a5e10;
        case 0x2a5e14u: goto label_2a5e14;
        case 0x2a5e18u: goto label_2a5e18;
        case 0x2a5e1cu: goto label_2a5e1c;
        case 0x2a5e20u: goto label_2a5e20;
        case 0x2a5e24u: goto label_2a5e24;
        case 0x2a5e28u: goto label_2a5e28;
        case 0x2a5e2cu: goto label_2a5e2c;
        case 0x2a5e30u: goto label_2a5e30;
        case 0x2a5e34u: goto label_2a5e34;
        case 0x2a5e38u: goto label_2a5e38;
        case 0x2a5e3cu: goto label_2a5e3c;
        case 0x2a5e40u: goto label_2a5e40;
        case 0x2a5e44u: goto label_2a5e44;
        case 0x2a5e48u: goto label_2a5e48;
        case 0x2a5e4cu: goto label_2a5e4c;
        case 0x2a5e50u: goto label_2a5e50;
        case 0x2a5e54u: goto label_2a5e54;
        case 0x2a5e58u: goto label_2a5e58;
        case 0x2a5e5cu: goto label_2a5e5c;
        case 0x2a5e60u: goto label_2a5e60;
        case 0x2a5e64u: goto label_2a5e64;
        case 0x2a5e68u: goto label_2a5e68;
        case 0x2a5e6cu: goto label_2a5e6c;
        case 0x2a5e70u: goto label_2a5e70;
        case 0x2a5e74u: goto label_2a5e74;
        case 0x2a5e78u: goto label_2a5e78;
        case 0x2a5e7cu: goto label_2a5e7c;
        case 0x2a5e80u: goto label_2a5e80;
        case 0x2a5e84u: goto label_2a5e84;
        case 0x2a5e88u: goto label_2a5e88;
        case 0x2a5e8cu: goto label_2a5e8c;
        case 0x2a5e90u: goto label_2a5e90;
        case 0x2a5e94u: goto label_2a5e94;
        case 0x2a5e98u: goto label_2a5e98;
        case 0x2a5e9cu: goto label_2a5e9c;
        case 0x2a5ea0u: goto label_2a5ea0;
        case 0x2a5ea4u: goto label_2a5ea4;
        case 0x2a5ea8u: goto label_2a5ea8;
        case 0x2a5eacu: goto label_2a5eac;
        case 0x2a5eb0u: goto label_2a5eb0;
        case 0x2a5eb4u: goto label_2a5eb4;
        case 0x2a5eb8u: goto label_2a5eb8;
        case 0x2a5ebcu: goto label_2a5ebc;
        case 0x2a5ec0u: goto label_2a5ec0;
        case 0x2a5ec4u: goto label_2a5ec4;
        case 0x2a5ec8u: goto label_2a5ec8;
        case 0x2a5eccu: goto label_2a5ecc;
        case 0x2a5ed0u: goto label_2a5ed0;
        case 0x2a5ed4u: goto label_2a5ed4;
        case 0x2a5ed8u: goto label_2a5ed8;
        case 0x2a5edcu: goto label_2a5edc;
        case 0x2a5ee0u: goto label_2a5ee0;
        case 0x2a5ee4u: goto label_2a5ee4;
        case 0x2a5ee8u: goto label_2a5ee8;
        case 0x2a5eecu: goto label_2a5eec;
        case 0x2a5ef0u: goto label_2a5ef0;
        case 0x2a5ef4u: goto label_2a5ef4;
        case 0x2a5ef8u: goto label_2a5ef8;
        case 0x2a5efcu: goto label_2a5efc;
        case 0x2a5f00u: goto label_2a5f00;
        case 0x2a5f04u: goto label_2a5f04;
        case 0x2a5f08u: goto label_2a5f08;
        case 0x2a5f0cu: goto label_2a5f0c;
        case 0x2a5f10u: goto label_2a5f10;
        case 0x2a5f14u: goto label_2a5f14;
        case 0x2a5f18u: goto label_2a5f18;
        case 0x2a5f1cu: goto label_2a5f1c;
        case 0x2a5f20u: goto label_2a5f20;
        case 0x2a5f24u: goto label_2a5f24;
        case 0x2a5f28u: goto label_2a5f28;
        case 0x2a5f2cu: goto label_2a5f2c;
        case 0x2a5f30u: goto label_2a5f30;
        case 0x2a5f34u: goto label_2a5f34;
        case 0x2a5f38u: goto label_2a5f38;
        case 0x2a5f3cu: goto label_2a5f3c;
        case 0x2a5f40u: goto label_2a5f40;
        case 0x2a5f44u: goto label_2a5f44;
        case 0x2a5f48u: goto label_2a5f48;
        case 0x2a5f4cu: goto label_2a5f4c;
        case 0x2a5f50u: goto label_2a5f50;
        case 0x2a5f54u: goto label_2a5f54;
        case 0x2a5f58u: goto label_2a5f58;
        case 0x2a5f5cu: goto label_2a5f5c;
        case 0x2a5f60u: goto label_2a5f60;
        case 0x2a5f64u: goto label_2a5f64;
        case 0x2a5f68u: goto label_2a5f68;
        case 0x2a5f6cu: goto label_2a5f6c;
        case 0x2a5f70u: goto label_2a5f70;
        case 0x2a5f74u: goto label_2a5f74;
        case 0x2a5f78u: goto label_2a5f78;
        case 0x2a5f7cu: goto label_2a5f7c;
        case 0x2a5f80u: goto label_2a5f80;
        case 0x2a5f84u: goto label_2a5f84;
        case 0x2a5f88u: goto label_2a5f88;
        case 0x2a5f8cu: goto label_2a5f8c;
        case 0x2a5f90u: goto label_2a5f90;
        case 0x2a5f94u: goto label_2a5f94;
        case 0x2a5f98u: goto label_2a5f98;
        case 0x2a5f9cu: goto label_2a5f9c;
        case 0x2a5fa0u: goto label_2a5fa0;
        case 0x2a5fa4u: goto label_2a5fa4;
        case 0x2a5fa8u: goto label_2a5fa8;
        case 0x2a5facu: goto label_2a5fac;
        case 0x2a5fb0u: goto label_2a5fb0;
        case 0x2a5fb4u: goto label_2a5fb4;
        case 0x2a5fb8u: goto label_2a5fb8;
        case 0x2a5fbcu: goto label_2a5fbc;
        case 0x2a5fc0u: goto label_2a5fc0;
        case 0x2a5fc4u: goto label_2a5fc4;
        case 0x2a5fc8u: goto label_2a5fc8;
        case 0x2a5fccu: goto label_2a5fcc;
        case 0x2a5fd0u: goto label_2a5fd0;
        case 0x2a5fd4u: goto label_2a5fd4;
        case 0x2a5fd8u: goto label_2a5fd8;
        case 0x2a5fdcu: goto label_2a5fdc;
        case 0x2a5fe0u: goto label_2a5fe0;
        case 0x2a5fe4u: goto label_2a5fe4;
        case 0x2a5fe8u: goto label_2a5fe8;
        case 0x2a5fecu: goto label_2a5fec;
        case 0x2a5ff0u: goto label_2a5ff0;
        case 0x2a5ff4u: goto label_2a5ff4;
        case 0x2a5ff8u: goto label_2a5ff8;
        case 0x2a5ffcu: goto label_2a5ffc;
        case 0x2a6000u: goto label_2a6000;
        case 0x2a6004u: goto label_2a6004;
        case 0x2a6008u: goto label_2a6008;
        case 0x2a600cu: goto label_2a600c;
        case 0x2a6010u: goto label_2a6010;
        case 0x2a6014u: goto label_2a6014;
        case 0x2a6018u: goto label_2a6018;
        case 0x2a601cu: goto label_2a601c;
        case 0x2a6020u: goto label_2a6020;
        case 0x2a6024u: goto label_2a6024;
        case 0x2a6028u: goto label_2a6028;
        case 0x2a602cu: goto label_2a602c;
        case 0x2a6030u: goto label_2a6030;
        case 0x2a6034u: goto label_2a6034;
        case 0x2a6038u: goto label_2a6038;
        case 0x2a603cu: goto label_2a603c;
        case 0x2a6040u: goto label_2a6040;
        case 0x2a6044u: goto label_2a6044;
        case 0x2a6048u: goto label_2a6048;
        case 0x2a604cu: goto label_2a604c;
        case 0x2a6050u: goto label_2a6050;
        case 0x2a6054u: goto label_2a6054;
        case 0x2a6058u: goto label_2a6058;
        case 0x2a605cu: goto label_2a605c;
        case 0x2a6060u: goto label_2a6060;
        case 0x2a6064u: goto label_2a6064;
        case 0x2a6068u: goto label_2a6068;
        case 0x2a606cu: goto label_2a606c;
        case 0x2a6070u: goto label_2a6070;
        case 0x2a6074u: goto label_2a6074;
        case 0x2a6078u: goto label_2a6078;
        case 0x2a607cu: goto label_2a607c;
        case 0x2a6080u: goto label_2a6080;
        case 0x2a6084u: goto label_2a6084;
        case 0x2a6088u: goto label_2a6088;
        case 0x2a608cu: goto label_2a608c;
        case 0x2a6090u: goto label_2a6090;
        case 0x2a6094u: goto label_2a6094;
        case 0x2a6098u: goto label_2a6098;
        case 0x2a609cu: goto label_2a609c;
        case 0x2a60a0u: goto label_2a60a0;
        case 0x2a60a4u: goto label_2a60a4;
        case 0x2a60a8u: goto label_2a60a8;
        case 0x2a60acu: goto label_2a60ac;
        case 0x2a60b0u: goto label_2a60b0;
        case 0x2a60b4u: goto label_2a60b4;
        case 0x2a60b8u: goto label_2a60b8;
        case 0x2a60bcu: goto label_2a60bc;
        case 0x2a60c0u: goto label_2a60c0;
        case 0x2a60c4u: goto label_2a60c4;
        case 0x2a60c8u: goto label_2a60c8;
        case 0x2a60ccu: goto label_2a60cc;
        case 0x2a60d0u: goto label_2a60d0;
        case 0x2a60d4u: goto label_2a60d4;
        case 0x2a60d8u: goto label_2a60d8;
        case 0x2a60dcu: goto label_2a60dc;
        case 0x2a60e0u: goto label_2a60e0;
        case 0x2a60e4u: goto label_2a60e4;
        case 0x2a60e8u: goto label_2a60e8;
        case 0x2a60ecu: goto label_2a60ec;
        case 0x2a60f0u: goto label_2a60f0;
        case 0x2a60f4u: goto label_2a60f4;
        case 0x2a60f8u: goto label_2a60f8;
        case 0x2a60fcu: goto label_2a60fc;
        case 0x2a6100u: goto label_2a6100;
        case 0x2a6104u: goto label_2a6104;
        case 0x2a6108u: goto label_2a6108;
        case 0x2a610cu: goto label_2a610c;
        case 0x2a6110u: goto label_2a6110;
        case 0x2a6114u: goto label_2a6114;
        case 0x2a6118u: goto label_2a6118;
        case 0x2a611cu: goto label_2a611c;
        case 0x2a6120u: goto label_2a6120;
        case 0x2a6124u: goto label_2a6124;
        case 0x2a6128u: goto label_2a6128;
        case 0x2a612cu: goto label_2a612c;
        case 0x2a6130u: goto label_2a6130;
        case 0x2a6134u: goto label_2a6134;
        case 0x2a6138u: goto label_2a6138;
        case 0x2a613cu: goto label_2a613c;
        case 0x2a6140u: goto label_2a6140;
        case 0x2a6144u: goto label_2a6144;
        case 0x2a6148u: goto label_2a6148;
        case 0x2a614cu: goto label_2a614c;
        case 0x2a6150u: goto label_2a6150;
        case 0x2a6154u: goto label_2a6154;
        case 0x2a6158u: goto label_2a6158;
        case 0x2a615cu: goto label_2a615c;
        case 0x2a6160u: goto label_2a6160;
        case 0x2a6164u: goto label_2a6164;
        case 0x2a6168u: goto label_2a6168;
        case 0x2a616cu: goto label_2a616c;
        case 0x2a6170u: goto label_2a6170;
        case 0x2a6174u: goto label_2a6174;
        case 0x2a6178u: goto label_2a6178;
        case 0x2a617cu: goto label_2a617c;
        case 0x2a6180u: goto label_2a6180;
        case 0x2a6184u: goto label_2a6184;
        case 0x2a6188u: goto label_2a6188;
        case 0x2a618cu: goto label_2a618c;
        case 0x2a6190u: goto label_2a6190;
        case 0x2a6194u: goto label_2a6194;
        case 0x2a6198u: goto label_2a6198;
        case 0x2a619cu: goto label_2a619c;
        case 0x2a61a0u: goto label_2a61a0;
        case 0x2a61a4u: goto label_2a61a4;
        case 0x2a61a8u: goto label_2a61a8;
        case 0x2a61acu: goto label_2a61ac;
        case 0x2a61b0u: goto label_2a61b0;
        case 0x2a61b4u: goto label_2a61b4;
        case 0x2a61b8u: goto label_2a61b8;
        case 0x2a61bcu: goto label_2a61bc;
        case 0x2a61c0u: goto label_2a61c0;
        case 0x2a61c4u: goto label_2a61c4;
        case 0x2a61c8u: goto label_2a61c8;
        case 0x2a61ccu: goto label_2a61cc;
        case 0x2a61d0u: goto label_2a61d0;
        case 0x2a61d4u: goto label_2a61d4;
        case 0x2a61d8u: goto label_2a61d8;
        case 0x2a61dcu: goto label_2a61dc;
        case 0x2a61e0u: goto label_2a61e0;
        case 0x2a61e4u: goto label_2a61e4;
        case 0x2a61e8u: goto label_2a61e8;
        case 0x2a61ecu: goto label_2a61ec;
        case 0x2a61f0u: goto label_2a61f0;
        case 0x2a61f4u: goto label_2a61f4;
        case 0x2a61f8u: goto label_2a61f8;
        case 0x2a61fcu: goto label_2a61fc;
        case 0x2a6200u: goto label_2a6200;
        case 0x2a6204u: goto label_2a6204;
        case 0x2a6208u: goto label_2a6208;
        case 0x2a620cu: goto label_2a620c;
        case 0x2a6210u: goto label_2a6210;
        case 0x2a6214u: goto label_2a6214;
        case 0x2a6218u: goto label_2a6218;
        case 0x2a621cu: goto label_2a621c;
        case 0x2a6220u: goto label_2a6220;
        case 0x2a6224u: goto label_2a6224;
        case 0x2a6228u: goto label_2a6228;
        case 0x2a622cu: goto label_2a622c;
        case 0x2a6230u: goto label_2a6230;
        case 0x2a6234u: goto label_2a6234;
        case 0x2a6238u: goto label_2a6238;
        case 0x2a623cu: goto label_2a623c;
        case 0x2a6240u: goto label_2a6240;
        case 0x2a6244u: goto label_2a6244;
        case 0x2a6248u: goto label_2a6248;
        case 0x2a624cu: goto label_2a624c;
        case 0x2a6250u: goto label_2a6250;
        case 0x2a6254u: goto label_2a6254;
        case 0x2a6258u: goto label_2a6258;
        case 0x2a625cu: goto label_2a625c;
        case 0x2a6260u: goto label_2a6260;
        case 0x2a6264u: goto label_2a6264;
        case 0x2a6268u: goto label_2a6268;
        case 0x2a626cu: goto label_2a626c;
        case 0x2a6270u: goto label_2a6270;
        case 0x2a6274u: goto label_2a6274;
        case 0x2a6278u: goto label_2a6278;
        case 0x2a627cu: goto label_2a627c;
        case 0x2a6280u: goto label_2a6280;
        case 0x2a6284u: goto label_2a6284;
        case 0x2a6288u: goto label_2a6288;
        case 0x2a628cu: goto label_2a628c;
        case 0x2a6290u: goto label_2a6290;
        case 0x2a6294u: goto label_2a6294;
        case 0x2a6298u: goto label_2a6298;
        case 0x2a629cu: goto label_2a629c;
        case 0x2a62a0u: goto label_2a62a0;
        case 0x2a62a4u: goto label_2a62a4;
        case 0x2a62a8u: goto label_2a62a8;
        case 0x2a62acu: goto label_2a62ac;
        case 0x2a62b0u: goto label_2a62b0;
        case 0x2a62b4u: goto label_2a62b4;
        case 0x2a62b8u: goto label_2a62b8;
        case 0x2a62bcu: goto label_2a62bc;
        case 0x2a62c0u: goto label_2a62c0;
        case 0x2a62c4u: goto label_2a62c4;
        case 0x2a62c8u: goto label_2a62c8;
        case 0x2a62ccu: goto label_2a62cc;
        case 0x2a62d0u: goto label_2a62d0;
        case 0x2a62d4u: goto label_2a62d4;
        case 0x2a62d8u: goto label_2a62d8;
        case 0x2a62dcu: goto label_2a62dc;
        case 0x2a62e0u: goto label_2a62e0;
        case 0x2a62e4u: goto label_2a62e4;
        case 0x2a62e8u: goto label_2a62e8;
        case 0x2a62ecu: goto label_2a62ec;
        case 0x2a62f0u: goto label_2a62f0;
        case 0x2a62f4u: goto label_2a62f4;
        case 0x2a62f8u: goto label_2a62f8;
        case 0x2a62fcu: goto label_2a62fc;
        case 0x2a6300u: goto label_2a6300;
        case 0x2a6304u: goto label_2a6304;
        case 0x2a6308u: goto label_2a6308;
        case 0x2a630cu: goto label_2a630c;
        case 0x2a6310u: goto label_2a6310;
        case 0x2a6314u: goto label_2a6314;
        case 0x2a6318u: goto label_2a6318;
        case 0x2a631cu: goto label_2a631c;
        case 0x2a6320u: goto label_2a6320;
        case 0x2a6324u: goto label_2a6324;
        case 0x2a6328u: goto label_2a6328;
        case 0x2a632cu: goto label_2a632c;
        case 0x2a6330u: goto label_2a6330;
        case 0x2a6334u: goto label_2a6334;
        case 0x2a6338u: goto label_2a6338;
        case 0x2a633cu: goto label_2a633c;
        case 0x2a6340u: goto label_2a6340;
        case 0x2a6344u: goto label_2a6344;
        case 0x2a6348u: goto label_2a6348;
        case 0x2a634cu: goto label_2a634c;
        case 0x2a6350u: goto label_2a6350;
        case 0x2a6354u: goto label_2a6354;
        case 0x2a6358u: goto label_2a6358;
        case 0x2a635cu: goto label_2a635c;
        case 0x2a6360u: goto label_2a6360;
        case 0x2a6364u: goto label_2a6364;
        case 0x2a6368u: goto label_2a6368;
        case 0x2a636cu: goto label_2a636c;
        case 0x2a6370u: goto label_2a6370;
        case 0x2a6374u: goto label_2a6374;
        case 0x2a6378u: goto label_2a6378;
        case 0x2a637cu: goto label_2a637c;
        case 0x2a6380u: goto label_2a6380;
        case 0x2a6384u: goto label_2a6384;
        case 0x2a6388u: goto label_2a6388;
        case 0x2a638cu: goto label_2a638c;
        case 0x2a6390u: goto label_2a6390;
        case 0x2a6394u: goto label_2a6394;
        case 0x2a6398u: goto label_2a6398;
        case 0x2a639cu: goto label_2a639c;
        case 0x2a63a0u: goto label_2a63a0;
        case 0x2a63a4u: goto label_2a63a4;
        case 0x2a63a8u: goto label_2a63a8;
        case 0x2a63acu: goto label_2a63ac;
        case 0x2a63b0u: goto label_2a63b0;
        case 0x2a63b4u: goto label_2a63b4;
        case 0x2a63b8u: goto label_2a63b8;
        case 0x2a63bcu: goto label_2a63bc;
        case 0x2a63c0u: goto label_2a63c0;
        case 0x2a63c4u: goto label_2a63c4;
        case 0x2a63c8u: goto label_2a63c8;
        case 0x2a63ccu: goto label_2a63cc;
        case 0x2a63d0u: goto label_2a63d0;
        case 0x2a63d4u: goto label_2a63d4;
        case 0x2a63d8u: goto label_2a63d8;
        case 0x2a63dcu: goto label_2a63dc;
        case 0x2a63e0u: goto label_2a63e0;
        case 0x2a63e4u: goto label_2a63e4;
        case 0x2a63e8u: goto label_2a63e8;
        case 0x2a63ecu: goto label_2a63ec;
        case 0x2a63f0u: goto label_2a63f0;
        case 0x2a63f4u: goto label_2a63f4;
        case 0x2a63f8u: goto label_2a63f8;
        case 0x2a63fcu: goto label_2a63fc;
        case 0x2a6400u: goto label_2a6400;
        case 0x2a6404u: goto label_2a6404;
        case 0x2a6408u: goto label_2a6408;
        case 0x2a640cu: goto label_2a640c;
        case 0x2a6410u: goto label_2a6410;
        case 0x2a6414u: goto label_2a6414;
        case 0x2a6418u: goto label_2a6418;
        case 0x2a641cu: goto label_2a641c;
        case 0x2a6420u: goto label_2a6420;
        case 0x2a6424u: goto label_2a6424;
        case 0x2a6428u: goto label_2a6428;
        case 0x2a642cu: goto label_2a642c;
        case 0x2a6430u: goto label_2a6430;
        case 0x2a6434u: goto label_2a6434;
        case 0x2a6438u: goto label_2a6438;
        case 0x2a643cu: goto label_2a643c;
        case 0x2a6440u: goto label_2a6440;
        case 0x2a6444u: goto label_2a6444;
        case 0x2a6448u: goto label_2a6448;
        case 0x2a644cu: goto label_2a644c;
        case 0x2a6450u: goto label_2a6450;
        case 0x2a6454u: goto label_2a6454;
        case 0x2a6458u: goto label_2a6458;
        case 0x2a645cu: goto label_2a645c;
        case 0x2a6460u: goto label_2a6460;
        case 0x2a6464u: goto label_2a6464;
        case 0x2a6468u: goto label_2a6468;
        case 0x2a646cu: goto label_2a646c;
        case 0x2a6470u: goto label_2a6470;
        case 0x2a6474u: goto label_2a6474;
        case 0x2a6478u: goto label_2a6478;
        case 0x2a647cu: goto label_2a647c;
        case 0x2a6480u: goto label_2a6480;
        case 0x2a6484u: goto label_2a6484;
        case 0x2a6488u: goto label_2a6488;
        case 0x2a648cu: goto label_2a648c;
        case 0x2a6490u: goto label_2a6490;
        case 0x2a6494u: goto label_2a6494;
        case 0x2a6498u: goto label_2a6498;
        case 0x2a649cu: goto label_2a649c;
        case 0x2a64a0u: goto label_2a64a0;
        case 0x2a64a4u: goto label_2a64a4;
        case 0x2a64a8u: goto label_2a64a8;
        case 0x2a64acu: goto label_2a64ac;
        case 0x2a64b0u: goto label_2a64b0;
        case 0x2a64b4u: goto label_2a64b4;
        case 0x2a64b8u: goto label_2a64b8;
        case 0x2a64bcu: goto label_2a64bc;
        case 0x2a64c0u: goto label_2a64c0;
        case 0x2a64c4u: goto label_2a64c4;
        case 0x2a64c8u: goto label_2a64c8;
        case 0x2a64ccu: goto label_2a64cc;
        case 0x2a64d0u: goto label_2a64d0;
        case 0x2a64d4u: goto label_2a64d4;
        case 0x2a64d8u: goto label_2a64d8;
        case 0x2a64dcu: goto label_2a64dc;
        case 0x2a64e0u: goto label_2a64e0;
        case 0x2a64e4u: goto label_2a64e4;
        case 0x2a64e8u: goto label_2a64e8;
        case 0x2a64ecu: goto label_2a64ec;
        case 0x2a64f0u: goto label_2a64f0;
        case 0x2a64f4u: goto label_2a64f4;
        case 0x2a64f8u: goto label_2a64f8;
        case 0x2a64fcu: goto label_2a64fc;
        case 0x2a6500u: goto label_2a6500;
        case 0x2a6504u: goto label_2a6504;
        case 0x2a6508u: goto label_2a6508;
        case 0x2a650cu: goto label_2a650c;
        case 0x2a6510u: goto label_2a6510;
        case 0x2a6514u: goto label_2a6514;
        case 0x2a6518u: goto label_2a6518;
        case 0x2a651cu: goto label_2a651c;
        case 0x2a6520u: goto label_2a6520;
        case 0x2a6524u: goto label_2a6524;
        case 0x2a6528u: goto label_2a6528;
        case 0x2a652cu: goto label_2a652c;
        case 0x2a6530u: goto label_2a6530;
        case 0x2a6534u: goto label_2a6534;
        case 0x2a6538u: goto label_2a6538;
        case 0x2a653cu: goto label_2a653c;
        case 0x2a6540u: goto label_2a6540;
        case 0x2a6544u: goto label_2a6544;
        case 0x2a6548u: goto label_2a6548;
        case 0x2a654cu: goto label_2a654c;
        case 0x2a6550u: goto label_2a6550;
        case 0x2a6554u: goto label_2a6554;
        case 0x2a6558u: goto label_2a6558;
        case 0x2a655cu: goto label_2a655c;
        case 0x2a6560u: goto label_2a6560;
        case 0x2a6564u: goto label_2a6564;
        case 0x2a6568u: goto label_2a6568;
        case 0x2a656cu: goto label_2a656c;
        case 0x2a6570u: goto label_2a6570;
        case 0x2a6574u: goto label_2a6574;
        case 0x2a6578u: goto label_2a6578;
        case 0x2a657cu: goto label_2a657c;
        case 0x2a6580u: goto label_2a6580;
        case 0x2a6584u: goto label_2a6584;
        case 0x2a6588u: goto label_2a6588;
        case 0x2a658cu: goto label_2a658c;
        case 0x2a6590u: goto label_2a6590;
        case 0x2a6594u: goto label_2a6594;
        case 0x2a6598u: goto label_2a6598;
        case 0x2a659cu: goto label_2a659c;
        case 0x2a65a0u: goto label_2a65a0;
        case 0x2a65a4u: goto label_2a65a4;
        case 0x2a65a8u: goto label_2a65a8;
        case 0x2a65acu: goto label_2a65ac;
        case 0x2a65b0u: goto label_2a65b0;
        case 0x2a65b4u: goto label_2a65b4;
        case 0x2a65b8u: goto label_2a65b8;
        case 0x2a65bcu: goto label_2a65bc;
        case 0x2a65c0u: goto label_2a65c0;
        case 0x2a65c4u: goto label_2a65c4;
        case 0x2a65c8u: goto label_2a65c8;
        case 0x2a65ccu: goto label_2a65cc;
        case 0x2a65d0u: goto label_2a65d0;
        case 0x2a65d4u: goto label_2a65d4;
        case 0x2a65d8u: goto label_2a65d8;
        case 0x2a65dcu: goto label_2a65dc;
        case 0x2a65e0u: goto label_2a65e0;
        case 0x2a65e4u: goto label_2a65e4;
        case 0x2a65e8u: goto label_2a65e8;
        case 0x2a65ecu: goto label_2a65ec;
        case 0x2a65f0u: goto label_2a65f0;
        case 0x2a65f4u: goto label_2a65f4;
        case 0x2a65f8u: goto label_2a65f8;
        case 0x2a65fcu: goto label_2a65fc;
        case 0x2a6600u: goto label_2a6600;
        case 0x2a6604u: goto label_2a6604;
        case 0x2a6608u: goto label_2a6608;
        case 0x2a660cu: goto label_2a660c;
        case 0x2a6610u: goto label_2a6610;
        case 0x2a6614u: goto label_2a6614;
        case 0x2a6618u: goto label_2a6618;
        case 0x2a661cu: goto label_2a661c;
        case 0x2a6620u: goto label_2a6620;
        case 0x2a6624u: goto label_2a6624;
        case 0x2a6628u: goto label_2a6628;
        case 0x2a662cu: goto label_2a662c;
        case 0x2a6630u: goto label_2a6630;
        case 0x2a6634u: goto label_2a6634;
        case 0x2a6638u: goto label_2a6638;
        case 0x2a663cu: goto label_2a663c;
        case 0x2a6640u: goto label_2a6640;
        case 0x2a6644u: goto label_2a6644;
        case 0x2a6648u: goto label_2a6648;
        case 0x2a664cu: goto label_2a664c;
        case 0x2a6650u: goto label_2a6650;
        case 0x2a6654u: goto label_2a6654;
        case 0x2a6658u: goto label_2a6658;
        case 0x2a665cu: goto label_2a665c;
        case 0x2a6660u: goto label_2a6660;
        case 0x2a6664u: goto label_2a6664;
        case 0x2a6668u: goto label_2a6668;
        case 0x2a666cu: goto label_2a666c;
        case 0x2a6670u: goto label_2a6670;
        case 0x2a6674u: goto label_2a6674;
        case 0x2a6678u: goto label_2a6678;
        case 0x2a667cu: goto label_2a667c;
        case 0x2a6680u: goto label_2a6680;
        case 0x2a6684u: goto label_2a6684;
        case 0x2a6688u: goto label_2a6688;
        case 0x2a668cu: goto label_2a668c;
        case 0x2a6690u: goto label_2a6690;
        case 0x2a6694u: goto label_2a6694;
        case 0x2a6698u: goto label_2a6698;
        case 0x2a669cu: goto label_2a669c;
        case 0x2a66a0u: goto label_2a66a0;
        case 0x2a66a4u: goto label_2a66a4;
        case 0x2a66a8u: goto label_2a66a8;
        case 0x2a66acu: goto label_2a66ac;
        case 0x2a66b0u: goto label_2a66b0;
        case 0x2a66b4u: goto label_2a66b4;
        case 0x2a66b8u: goto label_2a66b8;
        case 0x2a66bcu: goto label_2a66bc;
        case 0x2a66c0u: goto label_2a66c0;
        case 0x2a66c4u: goto label_2a66c4;
        case 0x2a66c8u: goto label_2a66c8;
        case 0x2a66ccu: goto label_2a66cc;
        case 0x2a66d0u: goto label_2a66d0;
        case 0x2a66d4u: goto label_2a66d4;
        case 0x2a66d8u: goto label_2a66d8;
        case 0x2a66dcu: goto label_2a66dc;
        case 0x2a66e0u: goto label_2a66e0;
        case 0x2a66e4u: goto label_2a66e4;
        case 0x2a66e8u: goto label_2a66e8;
        case 0x2a66ecu: goto label_2a66ec;
        case 0x2a66f0u: goto label_2a66f0;
        case 0x2a66f4u: goto label_2a66f4;
        case 0x2a66f8u: goto label_2a66f8;
        case 0x2a66fcu: goto label_2a66fc;
        case 0x2a6700u: goto label_2a6700;
        case 0x2a6704u: goto label_2a6704;
        case 0x2a6708u: goto label_2a6708;
        case 0x2a670cu: goto label_2a670c;
        case 0x2a6710u: goto label_2a6710;
        case 0x2a6714u: goto label_2a6714;
        case 0x2a6718u: goto label_2a6718;
        case 0x2a671cu: goto label_2a671c;
        case 0x2a6720u: goto label_2a6720;
        case 0x2a6724u: goto label_2a6724;
        case 0x2a6728u: goto label_2a6728;
        case 0x2a672cu: goto label_2a672c;
        case 0x2a6730u: goto label_2a6730;
        case 0x2a6734u: goto label_2a6734;
        case 0x2a6738u: goto label_2a6738;
        case 0x2a673cu: goto label_2a673c;
        case 0x2a6740u: goto label_2a6740;
        case 0x2a6744u: goto label_2a6744;
        case 0x2a6748u: goto label_2a6748;
        case 0x2a674cu: goto label_2a674c;
        case 0x2a6750u: goto label_2a6750;
        case 0x2a6754u: goto label_2a6754;
        case 0x2a6758u: goto label_2a6758;
        case 0x2a675cu: goto label_2a675c;
        case 0x2a6760u: goto label_2a6760;
        case 0x2a6764u: goto label_2a6764;
        case 0x2a6768u: goto label_2a6768;
        case 0x2a676cu: goto label_2a676c;
        case 0x2a6770u: goto label_2a6770;
        case 0x2a6774u: goto label_2a6774;
        case 0x2a6778u: goto label_2a6778;
        case 0x2a677cu: goto label_2a677c;
        case 0x2a6780u: goto label_2a6780;
        case 0x2a6784u: goto label_2a6784;
        case 0x2a6788u: goto label_2a6788;
        case 0x2a678cu: goto label_2a678c;
        case 0x2a6790u: goto label_2a6790;
        case 0x2a6794u: goto label_2a6794;
        case 0x2a6798u: goto label_2a6798;
        case 0x2a679cu: goto label_2a679c;
        case 0x2a67a0u: goto label_2a67a0;
        case 0x2a67a4u: goto label_2a67a4;
        case 0x2a67a8u: goto label_2a67a8;
        case 0x2a67acu: goto label_2a67ac;
        case 0x2a67b0u: goto label_2a67b0;
        case 0x2a67b4u: goto label_2a67b4;
        case 0x2a67b8u: goto label_2a67b8;
        case 0x2a67bcu: goto label_2a67bc;
        case 0x2a67c0u: goto label_2a67c0;
        case 0x2a67c4u: goto label_2a67c4;
        case 0x2a67c8u: goto label_2a67c8;
        case 0x2a67ccu: goto label_2a67cc;
        case 0x2a67d0u: goto label_2a67d0;
        case 0x2a67d4u: goto label_2a67d4;
        case 0x2a67d8u: goto label_2a67d8;
        case 0x2a67dcu: goto label_2a67dc;
        case 0x2a67e0u: goto label_2a67e0;
        case 0x2a67e4u: goto label_2a67e4;
        case 0x2a67e8u: goto label_2a67e8;
        case 0x2a67ecu: goto label_2a67ec;
        case 0x2a67f0u: goto label_2a67f0;
        case 0x2a67f4u: goto label_2a67f4;
        case 0x2a67f8u: goto label_2a67f8;
        case 0x2a67fcu: goto label_2a67fc;
        case 0x2a6800u: goto label_2a6800;
        case 0x2a6804u: goto label_2a6804;
        case 0x2a6808u: goto label_2a6808;
        case 0x2a680cu: goto label_2a680c;
        case 0x2a6810u: goto label_2a6810;
        case 0x2a6814u: goto label_2a6814;
        case 0x2a6818u: goto label_2a6818;
        case 0x2a681cu: goto label_2a681c;
        case 0x2a6820u: goto label_2a6820;
        case 0x2a6824u: goto label_2a6824;
        case 0x2a6828u: goto label_2a6828;
        case 0x2a682cu: goto label_2a682c;
        case 0x2a6830u: goto label_2a6830;
        case 0x2a6834u: goto label_2a6834;
        case 0x2a6838u: goto label_2a6838;
        case 0x2a683cu: goto label_2a683c;
        case 0x2a6840u: goto label_2a6840;
        case 0x2a6844u: goto label_2a6844;
        case 0x2a6848u: goto label_2a6848;
        case 0x2a684cu: goto label_2a684c;
        case 0x2a6850u: goto label_2a6850;
        case 0x2a6854u: goto label_2a6854;
        case 0x2a6858u: goto label_2a6858;
        case 0x2a685cu: goto label_2a685c;
        case 0x2a6860u: goto label_2a6860;
        case 0x2a6864u: goto label_2a6864;
        case 0x2a6868u: goto label_2a6868;
        case 0x2a686cu: goto label_2a686c;
        case 0x2a6870u: goto label_2a6870;
        case 0x2a6874u: goto label_2a6874;
        case 0x2a6878u: goto label_2a6878;
        case 0x2a687cu: goto label_2a687c;
        case 0x2a6880u: goto label_2a6880;
        case 0x2a6884u: goto label_2a6884;
        case 0x2a6888u: goto label_2a6888;
        case 0x2a688cu: goto label_2a688c;
        case 0x2a6890u: goto label_2a6890;
        case 0x2a6894u: goto label_2a6894;
        case 0x2a6898u: goto label_2a6898;
        case 0x2a689cu: goto label_2a689c;
        case 0x2a68a0u: goto label_2a68a0;
        case 0x2a68a4u: goto label_2a68a4;
        case 0x2a68a8u: goto label_2a68a8;
        case 0x2a68acu: goto label_2a68ac;
        case 0x2a68b0u: goto label_2a68b0;
        case 0x2a68b4u: goto label_2a68b4;
        case 0x2a68b8u: goto label_2a68b8;
        case 0x2a68bcu: goto label_2a68bc;
        case 0x2a68c0u: goto label_2a68c0;
        case 0x2a68c4u: goto label_2a68c4;
        case 0x2a68c8u: goto label_2a68c8;
        case 0x2a68ccu: goto label_2a68cc;
        case 0x2a68d0u: goto label_2a68d0;
        case 0x2a68d4u: goto label_2a68d4;
        case 0x2a68d8u: goto label_2a68d8;
        case 0x2a68dcu: goto label_2a68dc;
        case 0x2a68e0u: goto label_2a68e0;
        case 0x2a68e4u: goto label_2a68e4;
        case 0x2a68e8u: goto label_2a68e8;
        case 0x2a68ecu: goto label_2a68ec;
        case 0x2a68f0u: goto label_2a68f0;
        case 0x2a68f4u: goto label_2a68f4;
        case 0x2a68f8u: goto label_2a68f8;
        case 0x2a68fcu: goto label_2a68fc;
        case 0x2a6900u: goto label_2a6900;
        case 0x2a6904u: goto label_2a6904;
        case 0x2a6908u: goto label_2a6908;
        case 0x2a690cu: goto label_2a690c;
        case 0x2a6910u: goto label_2a6910;
        case 0x2a6914u: goto label_2a6914;
        case 0x2a6918u: goto label_2a6918;
        case 0x2a691cu: goto label_2a691c;
        case 0x2a6920u: goto label_2a6920;
        case 0x2a6924u: goto label_2a6924;
        case 0x2a6928u: goto label_2a6928;
        case 0x2a692cu: goto label_2a692c;
        case 0x2a6930u: goto label_2a6930;
        case 0x2a6934u: goto label_2a6934;
        case 0x2a6938u: goto label_2a6938;
        case 0x2a693cu: goto label_2a693c;
        case 0x2a6940u: goto label_2a6940;
        case 0x2a6944u: goto label_2a6944;
        case 0x2a6948u: goto label_2a6948;
        case 0x2a694cu: goto label_2a694c;
        case 0x2a6950u: goto label_2a6950;
        case 0x2a6954u: goto label_2a6954;
        case 0x2a6958u: goto label_2a6958;
        case 0x2a695cu: goto label_2a695c;
        case 0x2a6960u: goto label_2a6960;
        case 0x2a6964u: goto label_2a6964;
        case 0x2a6968u: goto label_2a6968;
        case 0x2a696cu: goto label_2a696c;
        case 0x2a6970u: goto label_2a6970;
        case 0x2a6974u: goto label_2a6974;
        case 0x2a6978u: goto label_2a6978;
        case 0x2a697cu: goto label_2a697c;
        case 0x2a6980u: goto label_2a6980;
        case 0x2a6984u: goto label_2a6984;
        case 0x2a6988u: goto label_2a6988;
        case 0x2a698cu: goto label_2a698c;
        case 0x2a6990u: goto label_2a6990;
        case 0x2a6994u: goto label_2a6994;
        case 0x2a6998u: goto label_2a6998;
        case 0x2a699cu: goto label_2a699c;
        case 0x2a69a0u: goto label_2a69a0;
        case 0x2a69a4u: goto label_2a69a4;
        case 0x2a69a8u: goto label_2a69a8;
        case 0x2a69acu: goto label_2a69ac;
        case 0x2a69b0u: goto label_2a69b0;
        case 0x2a69b4u: goto label_2a69b4;
        case 0x2a69b8u: goto label_2a69b8;
        case 0x2a69bcu: goto label_2a69bc;
        case 0x2a69c0u: goto label_2a69c0;
        case 0x2a69c4u: goto label_2a69c4;
        case 0x2a69c8u: goto label_2a69c8;
        case 0x2a69ccu: goto label_2a69cc;
        case 0x2a69d0u: goto label_2a69d0;
        case 0x2a69d4u: goto label_2a69d4;
        case 0x2a69d8u: goto label_2a69d8;
        case 0x2a69dcu: goto label_2a69dc;
        case 0x2a69e0u: goto label_2a69e0;
        case 0x2a69e4u: goto label_2a69e4;
        case 0x2a69e8u: goto label_2a69e8;
        case 0x2a69ecu: goto label_2a69ec;
        case 0x2a69f0u: goto label_2a69f0;
        case 0x2a69f4u: goto label_2a69f4;
        case 0x2a69f8u: goto label_2a69f8;
        case 0x2a69fcu: goto label_2a69fc;
        case 0x2a6a00u: goto label_2a6a00;
        case 0x2a6a04u: goto label_2a6a04;
        case 0x2a6a08u: goto label_2a6a08;
        case 0x2a6a0cu: goto label_2a6a0c;
        case 0x2a6a10u: goto label_2a6a10;
        case 0x2a6a14u: goto label_2a6a14;
        case 0x2a6a18u: goto label_2a6a18;
        case 0x2a6a1cu: goto label_2a6a1c;
        case 0x2a6a20u: goto label_2a6a20;
        case 0x2a6a24u: goto label_2a6a24;
        case 0x2a6a28u: goto label_2a6a28;
        case 0x2a6a2cu: goto label_2a6a2c;
        case 0x2a6a30u: goto label_2a6a30;
        case 0x2a6a34u: goto label_2a6a34;
        case 0x2a6a38u: goto label_2a6a38;
        case 0x2a6a3cu: goto label_2a6a3c;
        case 0x2a6a40u: goto label_2a6a40;
        case 0x2a6a44u: goto label_2a6a44;
        case 0x2a6a48u: goto label_2a6a48;
        case 0x2a6a4cu: goto label_2a6a4c;
        case 0x2a6a50u: goto label_2a6a50;
        case 0x2a6a54u: goto label_2a6a54;
        case 0x2a6a58u: goto label_2a6a58;
        case 0x2a6a5cu: goto label_2a6a5c;
        case 0x2a6a60u: goto label_2a6a60;
        case 0x2a6a64u: goto label_2a6a64;
        case 0x2a6a68u: goto label_2a6a68;
        case 0x2a6a6cu: goto label_2a6a6c;
        case 0x2a6a70u: goto label_2a6a70;
        case 0x2a6a74u: goto label_2a6a74;
        case 0x2a6a78u: goto label_2a6a78;
        case 0x2a6a7cu: goto label_2a6a7c;
        case 0x2a6a80u: goto label_2a6a80;
        case 0x2a6a84u: goto label_2a6a84;
        case 0x2a6a88u: goto label_2a6a88;
        case 0x2a6a8cu: goto label_2a6a8c;
        case 0x2a6a90u: goto label_2a6a90;
        case 0x2a6a94u: goto label_2a6a94;
        case 0x2a6a98u: goto label_2a6a98;
        case 0x2a6a9cu: goto label_2a6a9c;
        case 0x2a6aa0u: goto label_2a6aa0;
        case 0x2a6aa4u: goto label_2a6aa4;
        case 0x2a6aa8u: goto label_2a6aa8;
        case 0x2a6aacu: goto label_2a6aac;
        case 0x2a6ab0u: goto label_2a6ab0;
        case 0x2a6ab4u: goto label_2a6ab4;
        case 0x2a6ab8u: goto label_2a6ab8;
        case 0x2a6abcu: goto label_2a6abc;
        case 0x2a6ac0u: goto label_2a6ac0;
        case 0x2a6ac4u: goto label_2a6ac4;
        case 0x2a6ac8u: goto label_2a6ac8;
        case 0x2a6accu: goto label_2a6acc;
        case 0x2a6ad0u: goto label_2a6ad0;
        case 0x2a6ad4u: goto label_2a6ad4;
        case 0x2a6ad8u: goto label_2a6ad8;
        case 0x2a6adcu: goto label_2a6adc;
        case 0x2a6ae0u: goto label_2a6ae0;
        case 0x2a6ae4u: goto label_2a6ae4;
        case 0x2a6ae8u: goto label_2a6ae8;
        case 0x2a6aecu: goto label_2a6aec;
        case 0x2a6af0u: goto label_2a6af0;
        case 0x2a6af4u: goto label_2a6af4;
        case 0x2a6af8u: goto label_2a6af8;
        case 0x2a6afcu: goto label_2a6afc;
        case 0x2a6b00u: goto label_2a6b00;
        case 0x2a6b04u: goto label_2a6b04;
        case 0x2a6b08u: goto label_2a6b08;
        case 0x2a6b0cu: goto label_2a6b0c;
        case 0x2a6b10u: goto label_2a6b10;
        case 0x2a6b14u: goto label_2a6b14;
        case 0x2a6b18u: goto label_2a6b18;
        case 0x2a6b1cu: goto label_2a6b1c;
        case 0x2a6b20u: goto label_2a6b20;
        case 0x2a6b24u: goto label_2a6b24;
        case 0x2a6b28u: goto label_2a6b28;
        case 0x2a6b2cu: goto label_2a6b2c;
        case 0x2a6b30u: goto label_2a6b30;
        case 0x2a6b34u: goto label_2a6b34;
        case 0x2a6b38u: goto label_2a6b38;
        case 0x2a6b3cu: goto label_2a6b3c;
        case 0x2a6b40u: goto label_2a6b40;
        case 0x2a6b44u: goto label_2a6b44;
        case 0x2a6b48u: goto label_2a6b48;
        case 0x2a6b4cu: goto label_2a6b4c;
        case 0x2a6b50u: goto label_2a6b50;
        case 0x2a6b54u: goto label_2a6b54;
        case 0x2a6b58u: goto label_2a6b58;
        case 0x2a6b5cu: goto label_2a6b5c;
        case 0x2a6b60u: goto label_2a6b60;
        case 0x2a6b64u: goto label_2a6b64;
        case 0x2a6b68u: goto label_2a6b68;
        case 0x2a6b6cu: goto label_2a6b6c;
        case 0x2a6b70u: goto label_2a6b70;
        case 0x2a6b74u: goto label_2a6b74;
        case 0x2a6b78u: goto label_2a6b78;
        case 0x2a6b7cu: goto label_2a6b7c;
        case 0x2a6b80u: goto label_2a6b80;
        case 0x2a6b84u: goto label_2a6b84;
        case 0x2a6b88u: goto label_2a6b88;
        case 0x2a6b8cu: goto label_2a6b8c;
        case 0x2a6b90u: goto label_2a6b90;
        case 0x2a6b94u: goto label_2a6b94;
        case 0x2a6b98u: goto label_2a6b98;
        case 0x2a6b9cu: goto label_2a6b9c;
        case 0x2a6ba0u: goto label_2a6ba0;
        case 0x2a6ba4u: goto label_2a6ba4;
        case 0x2a6ba8u: goto label_2a6ba8;
        case 0x2a6bacu: goto label_2a6bac;
        case 0x2a6bb0u: goto label_2a6bb0;
        case 0x2a6bb4u: goto label_2a6bb4;
        case 0x2a6bb8u: goto label_2a6bb8;
        case 0x2a6bbcu: goto label_2a6bbc;
        case 0x2a6bc0u: goto label_2a6bc0;
        case 0x2a6bc4u: goto label_2a6bc4;
        case 0x2a6bc8u: goto label_2a6bc8;
        case 0x2a6bccu: goto label_2a6bcc;
        case 0x2a6bd0u: goto label_2a6bd0;
        case 0x2a6bd4u: goto label_2a6bd4;
        case 0x2a6bd8u: goto label_2a6bd8;
        case 0x2a6bdcu: goto label_2a6bdc;
        case 0x2a6be0u: goto label_2a6be0;
        case 0x2a6be4u: goto label_2a6be4;
        case 0x2a6be8u: goto label_2a6be8;
        case 0x2a6becu: goto label_2a6bec;
        case 0x2a6bf0u: goto label_2a6bf0;
        case 0x2a6bf4u: goto label_2a6bf4;
        case 0x2a6bf8u: goto label_2a6bf8;
        case 0x2a6bfcu: goto label_2a6bfc;
        case 0x2a6c00u: goto label_2a6c00;
        case 0x2a6c04u: goto label_2a6c04;
        case 0x2a6c08u: goto label_2a6c08;
        case 0x2a6c0cu: goto label_2a6c0c;
        case 0x2a6c10u: goto label_2a6c10;
        case 0x2a6c14u: goto label_2a6c14;
        case 0x2a6c18u: goto label_2a6c18;
        case 0x2a6c1cu: goto label_2a6c1c;
        case 0x2a6c20u: goto label_2a6c20;
        case 0x2a6c24u: goto label_2a6c24;
        case 0x2a6c28u: goto label_2a6c28;
        case 0x2a6c2cu: goto label_2a6c2c;
        case 0x2a6c30u: goto label_2a6c30;
        case 0x2a6c34u: goto label_2a6c34;
        case 0x2a6c38u: goto label_2a6c38;
        case 0x2a6c3cu: goto label_2a6c3c;
        case 0x2a6c40u: goto label_2a6c40;
        case 0x2a6c44u: goto label_2a6c44;
        case 0x2a6c48u: goto label_2a6c48;
        case 0x2a6c4cu: goto label_2a6c4c;
        case 0x2a6c50u: goto label_2a6c50;
        case 0x2a6c54u: goto label_2a6c54;
        case 0x2a6c58u: goto label_2a6c58;
        case 0x2a6c5cu: goto label_2a6c5c;
        default: break;
    }

    ctx->pc = 0x2a5010u;

label_2a5010:
    // 0x2a5010: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2a5010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2a5014:
    // 0x2a5014: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2a5014u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
label_2a5018:
    // 0x2a5018: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x2a5018u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
label_2a501c:
    // 0x2a501c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x2a501cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_2a5020:
    // 0x2a5020: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x2a5020u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_2a5024:
    // 0x2a5024: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2a5024u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2a5028:
    // 0x2a5028: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x2a5028u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_2a502c:
    // 0x2a502c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2a502cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2a5030:
    // 0x2a5030: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a5030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2a5034:
    // 0x2a5034: 0x244201c0  addiu       $v0, $v0, 0x1C0
    ctx->pc = 0x2a5034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 448));
label_2a5038:
    // 0x2a5038: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2a5038u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2a503c:
    // 0x2a503c: 0x3e00008  jr          $ra
label_2a5040:
    if (ctx->pc == 0x2A5040u) {
        ctx->pc = 0x2A5044u;
        goto label_2a5044;
    }
    ctx->pc = 0x2A503Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A503Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A5044u;
label_2a5044:
    // 0x2a5044: 0x0  nop
    ctx->pc = 0x2a5044u;
    // NOP
label_2a5048:
    // 0x2a5048: 0x0  nop
    ctx->pc = 0x2a5048u;
    // NOP
label_2a504c:
    // 0x2a504c: 0x0  nop
    ctx->pc = 0x2a504cu;
    // NOP
label_2a5050:
    // 0x2a5050: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2a5050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_2a5054:
    // 0x2a5054: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2a5054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_2a5058:
    // 0x2a5058: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2a5058u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2a505c:
    // 0x2a505c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2a505cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2a5060:
    // 0x2a5060: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2a5060u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2a5064:
    // 0x2a5064: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x2a5064u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
label_2a5068:
    // 0x2a5068: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2a5068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_2a506c:
    // 0x2a506c: 0x8c44003c  lw          $a0, 0x3C($v0)
    ctx->pc = 0x2a506cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_2a5070:
    // 0x2a5070: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2a5070u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_2a5074:
    // 0x2a5074: 0xc085538  jal         func_2154E0
label_2a5078:
    if (ctx->pc == 0x2A5078u) {
        ctx->pc = 0x2A507Cu;
        goto label_2a507c;
    }
    ctx->pc = 0x2A5074u;
    SET_GPR_U32(ctx, 31, 0x2A507Cu);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2A5074u, 0x2A507Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A507Cu;
label_2a507c:
    // 0x2a507c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2a507cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a5080:
    // 0x2a5080: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2a5080u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2a5084:
    // 0x2a5084: 0xc0a82cc  jal         func_2A0B30
label_2a5088:
    if (ctx->pc == 0x2A5088u) {
        ctx->pc = 0x2A508Cu;
        goto label_2a508c;
    }
    ctx->pc = 0x2A5084u;
    SET_GPR_U32(ctx, 31, 0x2A508Cu);
    ctx->pc = 0x2A0B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A0B30u, 0x2A5084u, 0x2A508Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A508Cu;
label_2a508c:
    // 0x2a508c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2a508cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a5090:
    // 0x2a5090: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2a5090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_2a5094:
    // 0x2a5094: 0x8c4201dc  lw          $v0, 0x1DC($v0)
    ctx->pc = 0x2a5094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 476)));
label_2a5098:
    // 0x2a5098: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_2a509c:
    if (ctx->pc == 0x2A509Cu) {
        ctx->pc = 0x2A50A0u;
        goto label_2a50a0;
    }
    ctx->pc = 0x2A5098u;
    {
        const bool branch_taken_0x2a5098 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a5098) {
            ctx->pc = 0x2A50C0u;
            goto label_2a50c0;
        }
    }
    ctx->pc = 0x2A50A0u;
label_2a50a0:
    // 0x2a50a0: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2a50a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_2a50a4:
    // 0x2a50a4: 0x8f84bbec  lw          $a0, -0x4414($gp)
    ctx->pc = 0x2a50a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
label_2a50a8:
    // 0x2a50a8: 0x8c4501dc  lw          $a1, 0x1DC($v0)
    ctx->pc = 0x2a50a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 476)));
label_2a50ac:
    // 0x2a50ac: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2a50acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a50b0:
    // 0x2a50b0: 0xc08f71c  jal         func_23DC70
label_2a50b4:
    if (ctx->pc == 0x2A50B4u) {
        ctx->pc = 0x2A50B8u;
        goto label_2a50b8;
    }
    ctx->pc = 0x2A50B0u;
    SET_GPR_U32(ctx, 31, 0x2A50B8u);
    ctx->pc = 0x23DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23DC70u, 0x2A50B0u, 0x2A50B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A50B8u;
label_2a50b8:
    // 0x2a50b8: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2a50b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_2a50bc:
    // 0x2a50bc: 0xac4001dc  sw          $zero, 0x1DC($v0)
    ctx->pc = 0x2a50bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 476), GPR_U32(ctx, 0));
label_2a50c0:
    // 0x2a50c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a50c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2a50c4:
    // 0x2a50c4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a50c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a50c8:
    // 0x2a50c8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2a50c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a50cc:
    // 0x2a50cc: 0xc121ce4  jal         func_487390
label_2a50d0:
    if (ctx->pc == 0x2A50D0u) {
        ctx->pc = 0x2A50D4u;
        goto label_2a50d4;
    }
    ctx->pc = 0x2A50CCu;
    SET_GPR_U32(ctx, 31, 0x2A50D4u);
    ctx->pc = 0x487390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x487390u, 0x2A50CCu, 0x2A50D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A50D4u;
label_2a50d4:
    // 0x2a50d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a50d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2a50d8:
    // 0x2a50d8: 0xc121cf4  jal         func_4873D0
label_2a50dc:
    if (ctx->pc == 0x2A50DCu) {
        ctx->pc = 0x2A50E0u;
        goto label_2a50e0;
    }
    ctx->pc = 0x2A50D8u;
    SET_GPR_U32(ctx, 31, 0x2A50E0u);
    ctx->pc = 0x4873D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4873D0u, 0x2A50D8u, 0x2A50E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A50E0u;
label_2a50e0:
    // 0x2a50e0: 0xc122430  jal         func_4890C0
label_2a50e4:
    if (ctx->pc == 0x2A50E4u) {
        ctx->pc = 0x2A50E8u;
        goto label_2a50e8;
    }
    ctx->pc = 0x2A50E0u;
    SET_GPR_U32(ctx, 31, 0x2A50E8u);
    ctx->pc = 0x4890C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4890C0u, 0x2A50E0u, 0x2A50E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A50E8u;
label_2a50e8:
    // 0x2a50e8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2a50e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a50ec:
    // 0x2a50ec: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x2a50ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_2a50f0:
    // 0x2a50f0: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x2a50f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_2a50f4:
    // 0x2a50f4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2a50f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_2a50f8:
    // 0x2a50f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a50f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2a50fc:
    // 0x2a50fc: 0x24a50055  addiu       $a1, $a1, 0x55
    ctx->pc = 0x2a50fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 85));
label_2a5100:
    // 0x2a5100: 0x8c6601a4  lw          $a2, 0x1A4($v1)
    ctx->pc = 0x2a5100u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 420)));
label_2a5104:
    // 0x2a5104: 0x8fa70040  lw          $a3, 0x40($sp)
    ctx->pc = 0x2a5104u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_2a5108:
    // 0x2a5108: 0x8c4801a8  lw          $t0, 0x1A8($v0)
    ctx->pc = 0x2a5108u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 424)));
label_2a510c:
    // 0x2a510c: 0xc121290  jal         func_484A40
label_2a5110:
    if (ctx->pc == 0x2A5110u) {
        ctx->pc = 0x2A5114u;
        goto label_2a5114;
    }
    ctx->pc = 0x2A510Cu;
    SET_GPR_U32(ctx, 31, 0x2A5114u);
    ctx->pc = 0x484A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x484A40u, 0x2A510Cu, 0x2A5114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5114u;
label_2a5114:
    // 0x2a5114: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2a5114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_2a5118:
    // 0x2a5118: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x2a5118u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_2a511c:
    // 0x2a511c: 0xc09d0b8  jal         func_2742E0
label_2a5120:
    if (ctx->pc == 0x2A5120u) {
        ctx->pc = 0x2A5124u;
        goto label_2a5124;
    }
    ctx->pc = 0x2A511Cu;
    SET_GPR_U32(ctx, 31, 0x2A5124u);
    ctx->pc = 0x2742E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2742E0u, 0x2A511Cu, 0x2A5124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5124u;
label_2a5124:
    // 0x2a5124: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x2a5124u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_2a5128:
    // 0x2a5128: 0x1443000f  bne         $v0, $v1, . + 4 + (0xF << 2)
label_2a512c:
    if (ctx->pc == 0x2A512Cu) {
        ctx->pc = 0x2A5130u;
        goto label_2a5130;
    }
    ctx->pc = 0x2A5128u;
    {
        const bool branch_taken_0x2a5128 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2a5128) {
            ctx->pc = 0x2A5168u;
            goto label_2a5168;
        }
    }
    ctx->pc = 0x2A5130u;
label_2a5130:
    // 0x2a5130: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2a5130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_2a5134:
    // 0x2a5134: 0x8c420030  lw          $v0, 0x30($v0)
    ctx->pc = 0x2a5134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_2a5138:
    // 0x2a5138: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_2a513c:
    if (ctx->pc == 0x2A513Cu) {
        ctx->pc = 0x2A5140u;
        goto label_2a5140;
    }
    ctx->pc = 0x2A5138u;
    {
        const bool branch_taken_0x2a5138 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a5138) {
            ctx->pc = 0x2A5168u;
            goto label_2a5168;
        }
    }
    ctx->pc = 0x2A5140u;
label_2a5140:
    // 0x2a5140: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2a5140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_2a5144:
    // 0x2a5144: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x2a5144u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_2a5148:
    // 0x2a5148: 0xc099928  jal         func_2664A0
label_2a514c:
    if (ctx->pc == 0x2A514Cu) {
        ctx->pc = 0x2A5150u;
        goto label_2a5150;
    }
    ctx->pc = 0x2A5148u;
    SET_GPR_U32(ctx, 31, 0x2A5150u);
    ctx->pc = 0x2664A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2664A0u, 0x2A5148u, 0x2A5150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5150u;
label_2a5150:
    // 0x2a5150: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2a5150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_2a5154:
    // 0x2a5154: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x2a5154u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_2a5158:
    // 0x2a5158: 0xc119c5c  jal         func_467170
label_2a515c:
    if (ctx->pc == 0x2A515Cu) {
        ctx->pc = 0x2A5160u;
        goto label_2a5160;
    }
    ctx->pc = 0x2A5158u;
    SET_GPR_U32(ctx, 31, 0x2A5160u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x2A5158u, 0x2A5160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5160u;
label_2a5160:
    // 0x2a5160: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2a5160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_2a5164:
    // 0x2a5164: 0xac400030  sw          $zero, 0x30($v0)
    ctx->pc = 0x2a5164u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 0));
label_2a5168:
    // 0x2a5168: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x2a5168u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_2a516c:
    // 0x2a516c: 0xc09d1d8  jal         func_274760
label_2a5170:
    if (ctx->pc == 0x2A5170u) {
        ctx->pc = 0x2A5174u;
        goto label_2a5174;
    }
    ctx->pc = 0x2A516Cu;
    SET_GPR_U32(ctx, 31, 0x2A5174u);
    ctx->pc = 0x274760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274760u, 0x2A516Cu, 0x2A5174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5174u;
label_2a5174:
    // 0x2a5174: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2a5174u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2a5178:
    // 0x2a5178: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2a5178u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2a517c:
    // 0x2a517c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2a517cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2a5180:
    // 0x2a5180: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a5180u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2a5184:
    // 0x2a5184: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x2a5184u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_2a5188:
    // 0x2a5188: 0x3e00008  jr          $ra
label_2a518c:
    if (ctx->pc == 0x2A518Cu) {
        ctx->pc = 0x2A5190u;
        goto label_2a5190;
    }
    ctx->pc = 0x2A5188u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A5188u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A5190u;
label_2a5190:
    // 0x2a5190: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2a5190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2a5194:
    // 0x2a5194: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2a5194u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2a5198:
    // 0x2a5198: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2a5198u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_2a519c:
    // 0x2a519c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x2a519cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
label_2a51a0:
    // 0x2a51a0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2a51a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_2a51a4:
    // 0x2a51a4: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x2a51a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_2a51a8:
    // 0x2a51a8: 0xc09d1e4  jal         func_274790
label_2a51ac:
    if (ctx->pc == 0x2A51ACu) {
        ctx->pc = 0x2A51B0u;
        goto label_2a51b0;
    }
    ctx->pc = 0x2A51A8u;
    SET_GPR_U32(ctx, 31, 0x2A51B0u);
    ctx->pc = 0x274790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274790u, 0x2A51A8u, 0x2A51B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A51B0u;
label_2a51b0:
    // 0x2a51b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2a51b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2a51b4:
    // 0x2a51b4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2a51b4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_2a51b8:
    // 0x2a51b8: 0x3e00008  jr          $ra
label_2a51bc:
    if (ctx->pc == 0x2A51BCu) {
        ctx->pc = 0x2A51C0u;
        goto label_2a51c0;
    }
    ctx->pc = 0x2A51B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A51B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A51C0u;
label_2a51c0:
    // 0x2a51c0: 0x27bdfd70  addiu       $sp, $sp, -0x290
    ctx->pc = 0x2a51c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966640));
label_2a51c4:
    // 0x2a51c4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2a51c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_2a51c8:
    // 0x2a51c8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x2a51c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_2a51cc:
    // 0x2a51cc: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x2a51ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_2a51d0:
    // 0x2a51d0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2a51d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_2a51d4:
    // 0x2a51d4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2a51d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_2a51d8:
    // 0x2a51d8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2a51d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_2a51dc:
    // 0x2a51dc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2a51dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2a51e0:
    // 0x2a51e0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2a51e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2a51e4:
    // 0x2a51e4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2a51e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2a51e8:
    // 0x2a51e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2a51e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2a51ec:
    // 0x2a51ec: 0xafa40280  sw          $a0, 0x280($sp)
    ctx->pc = 0x2a51ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 640), GPR_U32(ctx, 4));
label_2a51f0:
    // 0x2a51f0: 0x8fb10280  lw          $s1, 0x280($sp)
    ctx->pc = 0x2a51f0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
label_2a51f4:
    // 0x2a51f4: 0x8e24003c  lw          $a0, 0x3C($s1)
    ctx->pc = 0x2a51f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
label_2a51f8:
    // 0x2a51f8: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2a51f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_2a51fc:
    // 0x2a51fc: 0xc085538  jal         func_2154E0
label_2a5200:
    if (ctx->pc == 0x2A5200u) {
        ctx->pc = 0x2A5204u;
        goto label_2a5204;
    }
    ctx->pc = 0x2A51FCu;
    SET_GPR_U32(ctx, 31, 0x2A5204u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2A51FCu, 0x2A5204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5204u;
label_2a5204:
    // 0x2a5204: 0xafa20270  sw          $v0, 0x270($sp)
    ctx->pc = 0x2a5204u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 624), GPR_U32(ctx, 2));
label_2a5208:
    // 0x2a5208: 0x8fa30280  lw          $v1, 0x280($sp)
    ctx->pc = 0x2a5208u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
label_2a520c:
    // 0x2a520c: 0x8c64003c  lw          $a0, 0x3C($v1)
    ctx->pc = 0x2a520cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
label_2a5210:
    // 0x2a5210: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x2a5210u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_2a5214:
    // 0x2a5214: 0xc085538  jal         func_2154E0
label_2a5218:
    if (ctx->pc == 0x2A5218u) {
        ctx->pc = 0x2A521Cu;
        goto label_2a521c;
    }
    ctx->pc = 0x2A5214u;
    SET_GPR_U32(ctx, 31, 0x2A521Cu);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2A5214u, 0x2A521Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A521Cu;
label_2a521c:
    // 0x2a521c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2a521cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a5220:
    // 0x2a5220: 0x8fa40270  lw          $a0, 0x270($sp)
    ctx->pc = 0x2a5220u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
label_2a5224:
    // 0x2a5224: 0xc0a82cc  jal         func_2A0B30
label_2a5228:
    if (ctx->pc == 0x2A5228u) {
        ctx->pc = 0x2A522Cu;
        goto label_2a522c;
    }
    ctx->pc = 0x2A5224u;
    SET_GPR_U32(ctx, 31, 0x2A522Cu);
    ctx->pc = 0x2A0B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A0B30u, 0x2A5224u, 0x2A522Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A522Cu;
label_2a522c:
    // 0x2a522c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2a522cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a5230:
    // 0x2a5230: 0xa3a0027f  sb          $zero, 0x27F($sp)
    ctx->pc = 0x2a5230u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 639), (uint8_t)GPR_U32(ctx, 0));
label_2a5234:
    // 0x2a5234: 0xa3a0027e  sb          $zero, 0x27E($sp)
    ctx->pc = 0x2a5234u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 638), (uint8_t)GPR_U32(ctx, 0));
label_2a5238:
    // 0x2a5238: 0xa3a0027d  sb          $zero, 0x27D($sp)
    ctx->pc = 0x2a5238u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 637), (uint8_t)GPR_U32(ctx, 0));
label_2a523c:
    // 0x2a523c: 0x8fa40280  lw          $a0, 0x280($sp)
    ctx->pc = 0x2a523cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
label_2a5240:
    // 0x2a5240: 0xc09d248  jal         func_274920
label_2a5244:
    if (ctx->pc == 0x2A5244u) {
        ctx->pc = 0x2A5248u;
        goto label_2a5248;
    }
    ctx->pc = 0x2A5240u;
    SET_GPR_U32(ctx, 31, 0x2A5248u);
    ctx->pc = 0x274920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274920u, 0x2A5240u, 0x2A5248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5248u;
label_2a5248:
    // 0x2a5248: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x2a5248u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2a524c:
    // 0x2a524c: 0x104604d6  beq         $v0, $a2, . + 4 + (0x4D6 << 2)
label_2a5250:
    if (ctx->pc == 0x2A5250u) {
        ctx->pc = 0x2A5254u;
        goto label_2a5254;
    }
    ctx->pc = 0x2A524Cu;
    {
        const bool branch_taken_0x2a524c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        if (branch_taken_0x2a524c) {
            ctx->pc = 0x2A65A8u;
            goto label_2a65a8;
        }
    }
    ctx->pc = 0x2A5254u;
label_2a5254:
    // 0x2a5254: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2a5254u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2a5258:
    // 0x2a5258: 0x1043043f  beq         $v0, $v1, . + 4 + (0x43F << 2)
label_2a525c:
    if (ctx->pc == 0x2A525Cu) {
        ctx->pc = 0x2A5260u;
        goto label_2a5260;
    }
    ctx->pc = 0x2A5258u;
    {
        const bool branch_taken_0x2a5258 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2a5258) {
            ctx->pc = 0x2A6358u;
            goto label_2a6358;
        }
    }
    ctx->pc = 0x2A5260u;
label_2a5260:
    // 0x2a5260: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2a5260u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a5264:
    // 0x2a5264: 0x10440003  beq         $v0, $a0, . + 4 + (0x3 << 2)
label_2a5268:
    if (ctx->pc == 0x2A5268u) {
        ctx->pc = 0x2A526Cu;
        goto label_2a526c;
    }
    ctx->pc = 0x2A5264u;
    {
        const bool branch_taken_0x2a5264 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x2a5264) {
            ctx->pc = 0x2A5274u;
            goto label_2a5274;
        }
    }
    ctx->pc = 0x2A526Cu;
label_2a526c:
    // 0x2a526c: 0x10000528  b           . + 4 + (0x528 << 2)
label_2a5270:
    if (ctx->pc == 0x2A5270u) {
        ctx->pc = 0x2A5274u;
        goto label_2a5274;
    }
    ctx->pc = 0x2A526Cu;
    {
        const bool branch_taken_0x2a526c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a526c) {
            ctx->pc = 0x2A6710u;
            goto label_2a6710;
        }
    }
    ctx->pc = 0x2A5274u;
label_2a5274:
    // 0x2a5274: 0x8fa60280  lw          $a2, 0x280($sp)
    ctx->pc = 0x2a5274u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
label_2a5278:
    // 0x2a5278: 0x90c30054  lbu         $v1, 0x54($a2)
    ctx->pc = 0x2a5278u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 84)));
label_2a527c:
    // 0x2a527c: 0x1060066b  beqz        $v1, . + 4 + (0x66B << 2)
label_2a5280:
    if (ctx->pc == 0x2A5280u) {
        ctx->pc = 0x2A5284u;
        goto label_2a5284;
    }
    ctx->pc = 0x2A527Cu;
    {
        const bool branch_taken_0x2a527c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a527c) {
            ctx->pc = 0x2A6C2Cu;
            goto label_2a6c2c;
        }
    }
    ctx->pc = 0x2A5284u;
label_2a5284:
    // 0x2a5284: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2a5284u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a5288:
    // 0x2a5288: 0xa3a3027c  sb          $v1, 0x27C($sp)
    ctx->pc = 0x2a5288u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 636), (uint8_t)GPR_U32(ctx, 3));
label_2a528c:
    // 0x2a528c: 0x8fa40280  lw          $a0, 0x280($sp)
    ctx->pc = 0x2a528cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
label_2a5290:
    // 0x2a5290: 0x8c850180  lw          $a1, 0x180($a0)
    ctx->pc = 0x2a5290u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 384)));
label_2a5294:
    // 0x2a5294: 0x10a00014  beqz        $a1, . + 4 + (0x14 << 2)
label_2a5298:
    if (ctx->pc == 0x2A5298u) {
        ctx->pc = 0x2A529Cu;
        goto label_2a529c;
    }
    ctx->pc = 0x2A5294u;
    {
        const bool branch_taken_0x2a5294 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a5294) {
            ctx->pc = 0x2A52E8u;
            goto label_2a52e8;
        }
    }
    ctx->pc = 0x2A529Cu;
label_2a529c:
    // 0x2a529c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2a529cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2a52a0:
    // 0x2a52a0: 0xc0480fc  jal         func_1203F0
label_2a52a4:
    if (ctx->pc == 0x2A52A4u) {
        ctx->pc = 0x2A52A8u;
        goto label_2a52a8;
    }
    ctx->pc = 0x2A52A0u;
    SET_GPR_U32(ctx, 31, 0x2A52A8u);
    ctx->pc = 0x1203F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1203F0u, 0x2A52A0u, 0x2A52A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A52A8u;
label_2a52a8:
    // 0x2a52a8: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2a52a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2a52ac:
    // 0x2a52ac: 0x10440002  beq         $v0, $a0, . + 4 + (0x2 << 2)
label_2a52b0:
    if (ctx->pc == 0x2A52B0u) {
        ctx->pc = 0x2A52B4u;
        goto label_2a52b4;
    }
    ctx->pc = 0x2A52ACu;
    {
        const bool branch_taken_0x2a52ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x2a52ac) {
            ctx->pc = 0x2A52B8u;
            goto label_2a52b8;
        }
    }
    ctx->pc = 0x2A52B4u;
label_2a52b4:
    // 0x2a52b4: 0xa3a0027c  sb          $zero, 0x27C($sp)
    ctx->pc = 0x2a52b4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 636), (uint8_t)GPR_U32(ctx, 0));
label_2a52b8:
    // 0x2a52b8: 0x8fa50280  lw          $a1, 0x280($sp)
    ctx->pc = 0x2a52b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
label_2a52bc:
    // 0x2a52bc: 0x8ca60030  lw          $a2, 0x30($a1)
    ctx->pc = 0x2a52bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
label_2a52c0:
    // 0x2a52c0: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x2a52c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2a52c4:
    // 0x2a52c4: 0x240504af  addiu       $a1, $zero, 0x4AF
    ctx->pc = 0x2a52c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1199));
label_2a52c8:
    // 0x2a52c8: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2a52c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2a52cc:
    // 0x2a52cc: 0xc040ab0  jal         func_102AC0
label_2a52d0:
    if (ctx->pc == 0x2A52D0u) {
        ctx->pc = 0x2A52D4u;
        goto label_2a52d4;
    }
    ctx->pc = 0x2A52CCu;
    SET_GPR_U32(ctx, 31, 0x2A52D4u);
    ctx->pc = 0x102AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AC0u, 0x2A52CCu, 0x2A52D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A52D4u;
label_2a52d4:
    // 0x2a52d4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2a52d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2a52d8:
    // 0x2a52d8: 0x10450003  beq         $v0, $a1, . + 4 + (0x3 << 2)
label_2a52dc:
    if (ctx->pc == 0x2A52DCu) {
        ctx->pc = 0x2A52E0u;
        goto label_2a52e0;
    }
    ctx->pc = 0x2A52D8u;
    {
        const bool branch_taken_0x2a52d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x2a52d8) {
            ctx->pc = 0x2A52E8u;
            goto label_2a52e8;
        }
    }
    ctx->pc = 0x2A52E0u;
label_2a52e0:
    // 0x2a52e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a52e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a52e4:
    // 0x2a52e4: 0xa3a2027c  sb          $v0, 0x27C($sp)
    ctx->pc = 0x2a52e4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 636), (uint8_t)GPR_U32(ctx, 2));
label_2a52e8:
    // 0x2a52e8: 0x8fa20280  lw          $v0, 0x280($sp)
    ctx->pc = 0x2a52e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
label_2a52ec:
    // 0x2a52ec: 0x8c45012c  lw          $a1, 0x12C($v0)
    ctx->pc = 0x2a52ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 300)));
label_2a52f0:
    // 0x2a52f0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2a52f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2a52f4:
    // 0x2a52f4: 0x93a5027c  lbu         $a1, 0x27C($sp)
    ctx->pc = 0x2a52f4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 636)));
label_2a52f8:
    // 0x2a52f8: 0xc091114  jal         func_244450
label_2a52fc:
    if (ctx->pc == 0x2A52FCu) {
        ctx->pc = 0x2A5300u;
        goto label_2a5300;
    }
    ctx->pc = 0x2A52F8u;
    SET_GPR_U32(ctx, 31, 0x2A5300u);
    ctx->pc = 0x244450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244450u, 0x2A52F8u, 0x2A5300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5300u;
label_2a5300:
    // 0x2a5300: 0x8fa20280  lw          $v0, 0x280($sp)
    ctx->pc = 0x2a5300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
label_2a5304:
    // 0x2a5304: 0x8c4301b0  lw          $v1, 0x1B0($v0)
    ctx->pc = 0x2a5304u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 432)));
label_2a5308:
    // 0x2a5308: 0x10600121  beqz        $v1, . + 4 + (0x121 << 2)
label_2a530c:
    if (ctx->pc == 0x2A530Cu) {
        ctx->pc = 0x2A5310u;
        goto label_2a5310;
    }
    ctx->pc = 0x2A5308u;
    {
        const bool branch_taken_0x2a5308 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a5308) {
            ctx->pc = 0x2A5790u;
            goto label_2a5790;
        }
    }
    ctx->pc = 0x2A5310u;
label_2a5310:
    // 0x2a5310: 0x8f82ba74  lw          $v0, -0x458C($gp)
    ctx->pc = 0x2a5310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949492)));
label_2a5314:
    // 0x2a5314: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2a5318:
    if (ctx->pc == 0x2A5318u) {
        ctx->pc = 0x2A531Cu;
        goto label_2a531c;
    }
    ctx->pc = 0x2A5314u;
    {
        const bool branch_taken_0x2a5314 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a5314) {
            ctx->pc = 0x2A5330u;
            goto label_2a5330;
        }
    }
    ctx->pc = 0x2A531Cu;
label_2a531c:
    // 0x2a531c: 0x8f84ba74  lw          $a0, -0x458C($gp)
    ctx->pc = 0x2a531cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949492)));
label_2a5320:
    // 0x2a5320: 0xc04e308  jal         func_138C20
label_2a5324:
    if (ctx->pc == 0x2A5324u) {
        ctx->pc = 0x2A5328u;
        goto label_2a5328;
    }
    ctx->pc = 0x2A5320u;
    SET_GPR_U32(ctx, 31, 0x2A5328u);
    ctx->pc = 0x138C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138C20u, 0x2A5320u, 0x2A5328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5328u;
label_2a5328:
    // 0x2a5328: 0x14400119  bnez        $v0, . + 4 + (0x119 << 2)
label_2a532c:
    if (ctx->pc == 0x2A532Cu) {
        ctx->pc = 0x2A5330u;
        goto label_2a5330;
    }
    ctx->pc = 0x2A5328u;
    {
        const bool branch_taken_0x2a5328 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a5328) {
            ctx->pc = 0x2A5790u;
            goto label_2a5790;
        }
    }
    ctx->pc = 0x2A5330u;
label_2a5330:
    // 0x2a5330: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x2a5330u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a5334:
    // 0x2a5334: 0x8fa20280  lw          $v0, 0x280($sp)
    ctx->pc = 0x2a5334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
label_2a5338:
    // 0x2a5338: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x2a5338u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_2a533c:
    // 0x2a533c: 0x8f84bcc4  lw          $a0, -0x433C($gp)
    ctx->pc = 0x2a533cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
label_2a5340:
    // 0x2a5340: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2a5340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2a5344:
    // 0x2a5344: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_2a5348:
    if (ctx->pc == 0x2A5348u) {
        ctx->pc = 0x2A534Cu;
        goto label_2a534c;
    }
    ctx->pc = 0x2A5344u;
    {
        const bool branch_taken_0x2a5344 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2a5344) {
            ctx->pc = 0x2A535Cu;
            goto label_2a535c;
        }
    }
    ctx->pc = 0x2A534Cu;
label_2a534c:
    // 0x2a534c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a534cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a5350:
    // 0x2a5350: 0x305600ff  andi        $s6, $v0, 0xFF
    ctx->pc = 0x2a5350u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2a5354:
    // 0x2a5354: 0x1000000d  b           . + 4 + (0xD << 2)
label_2a5358:
    if (ctx->pc == 0x2A5358u) {
        ctx->pc = 0x2A535Cu;
        goto label_2a535c;
    }
    ctx->pc = 0x2A5354u;
    {
        const bool branch_taken_0x2a5354 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a5354) {
            ctx->pc = 0x2A538Cu;
            goto label_2a538c;
        }
    }
    ctx->pc = 0x2A535Cu;
label_2a535c:
    // 0x2a535c: 0x8fa30280  lw          $v1, 0x280($sp)
    ctx->pc = 0x2a535cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
label_2a5360:
    // 0x2a5360: 0x8c620040  lw          $v0, 0x40($v1)
    ctx->pc = 0x2a5360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
label_2a5364:
    // 0x2a5364: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_2a5368:
    if (ctx->pc == 0x2A5368u) {
        ctx->pc = 0x2A536Cu;
        goto label_2a536c;
    }
    ctx->pc = 0x2A5364u;
    {
        const bool branch_taken_0x2a5364 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a5364) {
            ctx->pc = 0x2A538Cu;
            goto label_2a538c;
        }
    }
    ctx->pc = 0x2A536Cu;
label_2a536c:
    // 0x2a536c: 0x8f84bcc4  lw          $a0, -0x433C($gp)
    ctx->pc = 0x2a536cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
label_2a5370:
    // 0x2a5370: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x2a5370u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2a5374:
    // 0x2a5374: 0x8fa20280  lw          $v0, 0x280($sp)
    ctx->pc = 0x2a5374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
label_2a5378:
    // 0x2a5378: 0x8c420040  lw          $v0, 0x40($v0)
    ctx->pc = 0x2a5378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
label_2a537c:
    // 0x2a537c: 0x14a20003  bne         $a1, $v0, . + 4 + (0x3 << 2)
label_2a5380:
    if (ctx->pc == 0x2A5380u) {
        ctx->pc = 0x2A5384u;
        goto label_2a5384;
    }
    ctx->pc = 0x2A537Cu;
    {
        const bool branch_taken_0x2a537c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x2a537c) {
            ctx->pc = 0x2A538Cu;
            goto label_2a538c;
        }
    }
    ctx->pc = 0x2A5384u;
label_2a5384:
    // 0x2a5384: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2a5384u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a5388:
    // 0x2a5388: 0x309600ff  andi        $s6, $a0, 0xFF
    ctx->pc = 0x2a5388u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_2a538c:
    // 0x2a538c: 0x12c00100  beqz        $s6, . + 4 + (0x100 << 2)
label_2a5390:
    if (ctx->pc == 0x2A5390u) {
        ctx->pc = 0x2A5394u;
        goto label_2a5394;
    }
    ctx->pc = 0x2A538Cu;
    {
        const bool branch_taken_0x2a538c = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a538c) {
            ctx->pc = 0x2A5790u;
            goto label_2a5790;
        }
    }
    ctx->pc = 0x2A5394u;
label_2a5394:
    // 0x2a5394: 0x8fa50280  lw          $a1, 0x280($sp)
    ctx->pc = 0x2a5394u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
label_2a5398:
    // 0x2a5398: 0x8ca201b0  lw          $v0, 0x1B0($a1)
    ctx->pc = 0x2a5398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 432)));
label_2a539c:
    // 0x2a539c: 0x8c550028  lw          $s5, 0x28($v0)
    ctx->pc = 0x2a539cu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_2a53a0:
    // 0x2a53a0: 0x8fa40280  lw          $a0, 0x280($sp)
    ctx->pc = 0x2a53a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
label_2a53a4:
    // 0x2a53a4: 0x8c850030  lw          $a1, 0x30($a0)
    ctx->pc = 0x2a53a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_2a53a8:
    // 0x2a53a8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2a53a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2a53ac:
    // 0x2a53ac: 0xc09d0d0  jal         func_274340
label_2a53b0:
    if (ctx->pc == 0x2A53B0u) {
        ctx->pc = 0x2A53B4u;
        goto label_2a53b4;
    }
    ctx->pc = 0x2A53ACu;
    SET_GPR_U32(ctx, 31, 0x2A53B4u);
    ctx->pc = 0x274340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274340u, 0x2A53ACu, 0x2A53B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A53B4u;
label_2a53b4:
    // 0x2a53b4: 0xafa2026c  sw          $v0, 0x26C($sp)
    ctx->pc = 0x2a53b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 620), GPR_U32(ctx, 2));
label_2a53b8:
    // 0x2a53b8: 0xafa00268  sw          $zero, 0x268($sp)
    ctx->pc = 0x2a53b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 616), GPR_U32(ctx, 0));
label_2a53bc:
    // 0x2a53bc: 0x27a401f0  addiu       $a0, $sp, 0x1F0
    ctx->pc = 0x2a53bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
label_2a53c0:
    // 0x2a53c0: 0xc048bc4  jal         func_122F10
label_2a53c4:
    if (ctx->pc == 0x2A53C4u) {
        ctx->pc = 0x2A53C8u;
        goto label_2a53c8;
    }
    ctx->pc = 0x2A53C0u;
    SET_GPR_U32(ctx, 31, 0x2A53C8u);
    ctx->pc = 0x122F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122F10u, 0x2A53C0u, 0x2A53C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A53C8u;
label_2a53c8:
    // 0x2a53c8: 0x8fa20280  lw          $v0, 0x280($sp)
    ctx->pc = 0x2a53c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
label_2a53cc:
    // 0x2a53cc: 0x90420038  lbu         $v0, 0x38($v0)
    ctx->pc = 0x2a53ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 56)));
label_2a53d0:
    // 0x2a53d0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_2a53d4:
    if (ctx->pc == 0x2A53D4u) {
        ctx->pc = 0x2A53D8u;
        goto label_2a53d8;
    }
    ctx->pc = 0x2A53D0u;
    {
        const bool branch_taken_0x2a53d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a53d0) {
            ctx->pc = 0x2A5400u;
            goto label_2a5400;
        }
    }
    ctx->pc = 0x2A53D8u;
label_2a53d8:
    // 0x2a53d8: 0x8fa20280  lw          $v0, 0x280($sp)
    ctx->pc = 0x2a53d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
label_2a53dc:
    // 0x2a53dc: 0x8c440048  lw          $a0, 0x48($v0)
    ctx->pc = 0x2a53dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
label_2a53e0:
    // 0x2a53e0: 0xc041a70  jal         func_1069C0
label_2a53e4:
    if (ctx->pc == 0x2A53E4u) {
        ctx->pc = 0x2A53E8u;
        goto label_2a53e8;
    }
    ctx->pc = 0x2A53E0u;
    SET_GPR_U32(ctx, 31, 0x2A53E8u);
    ctx->pc = 0x1069C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1069C0u, 0x2A53E0u, 0x2A53E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A53E8u;
label_2a53e8:
    // 0x2a53e8: 0x27a401f0  addiu       $a0, $sp, 0x1F0
    ctx->pc = 0x2a53e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
label_2a53ec:
    // 0x2a53ec: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2a53ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a53f0:
    // 0x2a53f0: 0xc0a9b18  jal         func_2A6C60
label_2a53f4:
    if (ctx->pc == 0x2A53F4u) {
        ctx->pc = 0x2A53F8u;
        goto label_2a53f8;
    }
    ctx->pc = 0x2A53F0u;
    SET_GPR_U32(ctx, 31, 0x2A53F8u);
    ctx->pc = 0x2A6C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A6C60u, 0x2A53F0u, 0x2A53F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A53F8u;
label_2a53f8:
    // 0x2a53f8: 0x1000000a  b           . + 4 + (0xA << 2)
label_2a53fc:
    if (ctx->pc == 0x2A53FCu) {
        ctx->pc = 0x2A5400u;
        goto label_2a5400;
    }
    ctx->pc = 0x2A53F8u;
    {
        const bool branch_taken_0x2a53f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a53f8) {
            ctx->pc = 0x2A5424u;
            goto label_2a5424;
        }
    }
    ctx->pc = 0x2A5400u;
label_2a5400:
    // 0x2a5400: 0x8fa20280  lw          $v0, 0x280($sp)
    ctx->pc = 0x2a5400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
label_2a5404:
    // 0x2a5404: 0x8c440048  lw          $a0, 0x48($v0)
    ctx->pc = 0x2a5404u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
label_2a5408:
    // 0x2a5408: 0xc041a68  jal         func_1069A0
label_2a540c:
    if (ctx->pc == 0x2A540Cu) {
        ctx->pc = 0x2A5410u;
        goto label_2a5410;
    }
    ctx->pc = 0x2A5408u;
    SET_GPR_U32(ctx, 31, 0x2A5410u);
    ctx->pc = 0x1069A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1069A0u, 0x2A5408u, 0x2A5410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5410u;
label_2a5410:
    // 0x2a5410: 0x27a501f0  addiu       $a1, $sp, 0x1F0
    ctx->pc = 0x2a5410u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
label_2a5414:
    // 0x2a5414: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2a5414u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2a5418:
    // 0x2a5418: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2a5418u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a541c:
    // 0x2a541c: 0xc0a9b18  jal         func_2A6C60
label_2a5420:
    if (ctx->pc == 0x2A5420u) {
        ctx->pc = 0x2A5424u;
        goto label_2a5424;
    }
    ctx->pc = 0x2A541Cu;
    SET_GPR_U32(ctx, 31, 0x2A5424u);
    ctx->pc = 0x2A6C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A6C60u, 0x2A541Cu, 0x2A5424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5424u;
label_2a5424:
    // 0x2a5424: 0x27a401f0  addiu       $a0, $sp, 0x1F0
    ctx->pc = 0x2a5424u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
label_2a5428:
    // 0x2a5428: 0xc041a60  jal         func_106980
label_2a542c:
    if (ctx->pc == 0x2A542Cu) {
        ctx->pc = 0x2A5430u;
        goto label_2a5430;
    }
    ctx->pc = 0x2A5428u;
    SET_GPR_U32(ctx, 31, 0x2A5430u);
    ctx->pc = 0x106980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106980u, 0x2A5428u, 0x2A5430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5430u;
label_2a5430:
    // 0x2a5430: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2a5430u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a5434:
    // 0x2a5434: 0x10000045  b           . + 4 + (0x45 << 2)
label_2a5438:
    if (ctx->pc == 0x2A5438u) {
        ctx->pc = 0x2A543Cu;
        goto label_2a543c;
    }
    ctx->pc = 0x2A5434u;
    {
        const bool branch_taken_0x2a5434 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a5434) {
            ctx->pc = 0x2A554Cu;
            goto label_2a554c;
        }
    }
    ctx->pc = 0x2A543Cu;
label_2a543c:
    // 0x2a543c: 0x8fa2026c  lw          $v0, 0x26C($sp)
    ctx->pc = 0x2a543cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 620)));
label_2a5440:
    // 0x2a5440: 0x7fa200f0  sq          $v0, 0xF0($sp)
    ctx->pc = 0x2a5440u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 2));
label_2a5444:
    // 0x2a5444: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2a5444u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2a5448:
    // 0x2a5448: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x2a5448u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2a544c:
    // 0x2a544c: 0xc09d0d0  jal         func_274340
label_2a5450:
    if (ctx->pc == 0x2A5450u) {
        ctx->pc = 0x2A5454u;
        goto label_2a5454;
    }
    ctx->pc = 0x2A544Cu;
    SET_GPR_U32(ctx, 31, 0x2A5454u);
    ctx->pc = 0x274340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274340u, 0x2A544Cu, 0x2A5454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5454u;
label_2a5454:
    // 0x2a5454: 0x7ba300f0  lq          $v1, 0xF0($sp)
    ctx->pc = 0x2a5454u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_2a5458:
    // 0x2a5458: 0x1462003b  bne         $v1, $v0, . + 4 + (0x3B << 2)
label_2a545c:
    if (ctx->pc == 0x2A545Cu) {
        ctx->pc = 0x2A5460u;
        goto label_2a5460;
    }
    ctx->pc = 0x2A5458u;
    {
        const bool branch_taken_0x2a5458 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2a5458) {
            ctx->pc = 0x2A5548u;
            goto label_2a5548;
        }
    }
    ctx->pc = 0x2A5460u;
label_2a5460:
    // 0x2a5460: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x2a5460u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2a5464:
    // 0x2a5464: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x2a5464u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2a5468:
    // 0x2a5468: 0xc09d0b8  jal         func_2742E0
label_2a546c:
    if (ctx->pc == 0x2A546Cu) {
        ctx->pc = 0x2A5470u;
        goto label_2a5470;
    }
    ctx->pc = 0x2A5468u;
    SET_GPR_U32(ctx, 31, 0x2A5470u);
    ctx->pc = 0x2742E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2742E0u, 0x2A5468u, 0x2A5470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5470u;
label_2a5470:
    // 0x2a5470: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x2a5470u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_2a5474:
    // 0x2a5474: 0x10450007  beq         $v0, $a1, . + 4 + (0x7 << 2)
label_2a5478:
    if (ctx->pc == 0x2A5478u) {
        ctx->pc = 0x2A547Cu;
        goto label_2a547c;
    }
    ctx->pc = 0x2A5474u;
    {
        const bool branch_taken_0x2a5474 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x2a5474) {
            ctx->pc = 0x2A5494u;
            goto label_2a5494;
        }
    }
    ctx->pc = 0x2A547Cu;
label_2a547c:
    // 0x2a547c: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2a547cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2a5480:
    // 0x2a5480: 0xc09d0b8  jal         func_2742E0
label_2a5484:
    if (ctx->pc == 0x2A5484u) {
        ctx->pc = 0x2A5488u;
        goto label_2a5488;
    }
    ctx->pc = 0x2A5480u;
    SET_GPR_U32(ctx, 31, 0x2A5488u);
    ctx->pc = 0x2742E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2742E0u, 0x2A5480u, 0x2A5488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5488u;
label_2a5488:
    // 0x2a5488: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x2a5488u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_2a548c:
    // 0x2a548c: 0x14430024  bne         $v0, $v1, . + 4 + (0x24 << 2)
label_2a5490:
    if (ctx->pc == 0x2A5490u) {
        ctx->pc = 0x2A5494u;
        goto label_2a5494;
    }
    ctx->pc = 0x2A548Cu;
    {
        const bool branch_taken_0x2a548c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2a548c) {
            ctx->pc = 0x2A5520u;
            goto label_2a5520;
        }
    }
    ctx->pc = 0x2A5494u;
label_2a5494:
    // 0x2a5494: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2a5494u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2a5498:
    // 0x2a5498: 0x24050483  addiu       $a1, $zero, 0x483
    ctx->pc = 0x2a5498u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1155));
label_2a549c:
    // 0x2a549c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2a549cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a54a0:
    // 0x2a54a0: 0xc04146c  jal         func_1051B0
label_2a54a4:
    if (ctx->pc == 0x2A54A4u) {
        ctx->pc = 0x2A54A8u;
        goto label_2a54a8;
    }
    ctx->pc = 0x2A54A0u;
    SET_GPR_U32(ctx, 31, 0x2A54A8u);
    ctx->pc = 0x1051B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051B0u, 0x2A54A0u, 0x2A54A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A54A8u;
label_2a54a8:
    // 0x2a54a8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2a54a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2a54ac:
    // 0x2a54ac: 0x7fa200e0  sq          $v0, 0xE0($sp)
    ctx->pc = 0x2a54acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 2));
label_2a54b0:
    // 0x2a54b0: 0x8fa40280  lw          $a0, 0x280($sp)
    ctx->pc = 0x2a54b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
label_2a54b4:
    // 0x2a54b4: 0x8c840030  lw          $a0, 0x30($a0)
    ctx->pc = 0x2a54b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_2a54b8:
    // 0x2a54b8: 0x24050483  addiu       $a1, $zero, 0x483
    ctx->pc = 0x2a54b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1155));
label_2a54bc:
    // 0x2a54bc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2a54bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a54c0:
    // 0x2a54c0: 0xc04146c  jal         func_1051B0
label_2a54c4:
    if (ctx->pc == 0x2A54C4u) {
        ctx->pc = 0x2A54C8u;
        goto label_2a54c8;
    }
    ctx->pc = 0x2A54C0u;
    SET_GPR_U32(ctx, 31, 0x2A54C8u);
    ctx->pc = 0x1051B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051B0u, 0x2A54C0u, 0x2A54C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A54C8u;
label_2a54c8:
    // 0x2a54c8: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x2a54c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2a54cc:
    // 0x2a54cc: 0x7ba200e0  lq          $v0, 0xE0($sp)
    ctx->pc = 0x2a54ccu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_2a54d0:
    // 0x2a54d0: 0x1445001d  bne         $v0, $a1, . + 4 + (0x1D << 2)
label_2a54d4:
    if (ctx->pc == 0x2A54D4u) {
        ctx->pc = 0x2A54D8u;
        goto label_2a54d8;
    }
    ctx->pc = 0x2A54D0u;
    {
        const bool branch_taken_0x2a54d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x2a54d0) {
            ctx->pc = 0x2A5548u;
            goto label_2a5548;
        }
    }
    ctx->pc = 0x2A54D8u;
label_2a54d8:
    // 0x2a54d8: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2a54d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2a54dc:
    // 0x2a54dc: 0xafa20268  sw          $v0, 0x268($sp)
    ctx->pc = 0x2a54dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 616), GPR_U32(ctx, 2));
label_2a54e0:
    // 0x2a54e0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2a54e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a54e4:
    // 0x2a54e4: 0x307600ff  andi        $s6, $v1, 0xFF
    ctx->pc = 0x2a54e4u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_2a54e8:
    // 0x2a54e8: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2a54e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2a54ec:
    // 0x2a54ec: 0xc09d0b8  jal         func_2742E0
label_2a54f0:
    if (ctx->pc == 0x2A54F0u) {
        ctx->pc = 0x2A54F4u;
        goto label_2a54f4;
    }
    ctx->pc = 0x2A54ECu;
    SET_GPR_U32(ctx, 31, 0x2A54F4u);
    ctx->pc = 0x2742E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2742E0u, 0x2A54ECu, 0x2A54F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A54F4u;
label_2a54f4:
    // 0x2a54f4: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x2a54f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_2a54f8:
    // 0x2a54f8: 0x14450005  bne         $v0, $a1, . + 4 + (0x5 << 2)
label_2a54fc:
    if (ctx->pc == 0x2A54FCu) {
        ctx->pc = 0x2A5500u;
        goto label_2a5500;
    }
    ctx->pc = 0x2A54F8u;
    {
        const bool branch_taken_0x2a54f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x2a54f8) {
            ctx->pc = 0x2A5510u;
            goto label_2a5510;
        }
    }
    ctx->pc = 0x2A5500u;
label_2a5500:
    // 0x2a5500: 0x2406056b  addiu       $a2, $zero, 0x56B
    ctx->pc = 0x2a5500u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1387));
label_2a5504:
    // 0x2a5504: 0xafa60264  sw          $a2, 0x264($sp)
    ctx->pc = 0x2a5504u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 612), GPR_U32(ctx, 6));
label_2a5508:
    // 0x2a5508: 0x10000016  b           . + 4 + (0x16 << 2)
label_2a550c:
    if (ctx->pc == 0x2A550Cu) {
        ctx->pc = 0x2A5510u;
        goto label_2a5510;
    }
    ctx->pc = 0x2A5508u;
    {
        const bool branch_taken_0x2a5508 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a5508) {
            ctx->pc = 0x2A5564u;
            goto label_2a5564;
        }
    }
    ctx->pc = 0x2A5510u;
label_2a5510:
    // 0x2a5510: 0x2402056c  addiu       $v0, $zero, 0x56C
    ctx->pc = 0x2a5510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1388));
label_2a5514:
    // 0x2a5514: 0xafa20264  sw          $v0, 0x264($sp)
    ctx->pc = 0x2a5514u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 612), GPR_U32(ctx, 2));
label_2a5518:
    // 0x2a5518: 0x10000012  b           . + 4 + (0x12 << 2)
label_2a551c:
    if (ctx->pc == 0x2A551Cu) {
        ctx->pc = 0x2A5520u;
        goto label_2a5520;
    }
    ctx->pc = 0x2A5518u;
    {
        const bool branch_taken_0x2a5518 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a5518) {
            ctx->pc = 0x2A5564u;
            goto label_2a5564;
        }
    }
    ctx->pc = 0x2A5520u;
label_2a5520:
    // 0x2a5520: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2a5520u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2a5524:
    // 0x2a5524: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x2a5524u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2a5528:
    // 0x2a5528: 0xc09d0b8  jal         func_2742E0
label_2a552c:
    if (ctx->pc == 0x2A552Cu) {
        ctx->pc = 0x2A5530u;
        goto label_2a5530;
    }
    ctx->pc = 0x2A5528u;
    SET_GPR_U32(ctx, 31, 0x2A5530u);
    ctx->pc = 0x2742E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2742E0u, 0x2A5528u, 0x2A5530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5530u;
label_2a5530:
    // 0x2a5530: 0x24060011  addiu       $a2, $zero, 0x11
    ctx->pc = 0x2a5530u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_2a5534:
    // 0x2a5534: 0x14460004  bne         $v0, $a2, . + 4 + (0x4 << 2)
label_2a5538:
    if (ctx->pc == 0x2A5538u) {
        ctx->pc = 0x2A553Cu;
        goto label_2a553c;
    }
    ctx->pc = 0x2A5534u;
    {
        const bool branch_taken_0x2a5534 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        if (branch_taken_0x2a5534) {
            ctx->pc = 0x2A5548u;
            goto label_2a5548;
        }
    }
    ctx->pc = 0x2A553Cu;
label_2a553c:
    // 0x2a553c: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x2a553cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a5540:
    // 0x2a5540: 0x10000008  b           . + 4 + (0x8 << 2)
label_2a5544:
    if (ctx->pc == 0x2A5544u) {
        ctx->pc = 0x2A5548u;
        goto label_2a5548;
    }
    ctx->pc = 0x2A5540u;
    {
        const bool branch_taken_0x2a5540 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a5540) {
            ctx->pc = 0x2A5564u;
            goto label_2a5564;
        }
    }
    ctx->pc = 0x2A5548u;
label_2a5548:
    // 0x2a5548: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x2a5548u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_2a554c:
    // 0x2a554c: 0x27a501f0  addiu       $a1, $sp, 0x1F0
    ctx->pc = 0x2a554cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
label_2a5550:
    // 0x2a5550: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2a5550u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2a5554:
    // 0x2a5554: 0xc041a14  jal         func_106850
label_2a5558:
    if (ctx->pc == 0x2A5558u) {
        ctx->pc = 0x2A555Cu;
        goto label_2a555c;
    }
    ctx->pc = 0x2A5554u;
    SET_GPR_U32(ctx, 31, 0x2A555Cu);
    ctx->pc = 0x106850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106850u, 0x2A5554u, 0x2A555Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A555Cu;
label_2a555c:
    // 0x2a555c: 0x1642ffb7  bne         $s2, $v0, . + 4 + (-0x49 << 2)
label_2a5560:
    if (ctx->pc == 0x2A5560u) {
        ctx->pc = 0x2A5564u;
        goto label_2a5564;
    }
    ctx->pc = 0x2A555Cu;
    {
        const bool branch_taken_0x2a555c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x2a555c) {
            ctx->pc = 0x2A543Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a543c;
        }
    }
    ctx->pc = 0x2A5564u;
label_2a5564:
    // 0x2a5564: 0x8fa30268  lw          $v1, 0x268($sp)
    ctx->pc = 0x2a5564u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
label_2a5568:
    // 0x2a5568: 0x10030008  beq         $zero, $v1, . + 4 + (0x8 << 2)
label_2a556c:
    if (ctx->pc == 0x2A556Cu) {
        ctx->pc = 0x2A5570u;
        goto label_2a5570;
    }
    ctx->pc = 0x2A5568u;
    {
        const bool branch_taken_0x2a5568 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 3));
        if (branch_taken_0x2a5568) {
            ctx->pc = 0x2A558Cu;
            goto label_2a558c;
        }
    }
    ctx->pc = 0x2A5570u;
label_2a5570:
    // 0x2a5570: 0x8fa50268  lw          $a1, 0x268($sp)
    ctx->pc = 0x2a5570u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
label_2a5574:
    // 0x2a5574: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2a5574u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2a5578:
    // 0x2a5578: 0x8fa50264  lw          $a1, 0x264($sp)
    ctx->pc = 0x2a5578u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
label_2a557c:
    // 0x2a557c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2a557cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a5580:
    // 0x2a5580: 0xc040ab0  jal         func_102AC0
label_2a5584:
    if (ctx->pc == 0x2A5584u) {
        ctx->pc = 0x2A5588u;
        goto label_2a5588;
    }
    ctx->pc = 0x2A5580u;
    SET_GPR_U32(ctx, 31, 0x2A5588u);
    ctx->pc = 0x102AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AC0u, 0x2A5580u, 0x2A5588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5588u;
label_2a5588:
    // 0x2a5588: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x2a5588u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a558c:
    // 0x2a558c: 0x16a00006  bnez        $s5, . + 4 + (0x6 << 2)
label_2a5590:
    if (ctx->pc == 0x2A5590u) {
        ctx->pc = 0x2A5594u;
        goto label_2a5594;
    }
    ctx->pc = 0x2A558Cu;
    {
        const bool branch_taken_0x2a558c = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a558c) {
            ctx->pc = 0x2A55A8u;
            goto label_2a55a8;
        }
    }
    ctx->pc = 0x2A5594u;
label_2a5594:
    // 0x2a5594: 0x8fa20280  lw          $v0, 0x280($sp)
    ctx->pc = 0x2a5594u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
label_2a5598:
    // 0x2a5598: 0x8c4201b0  lw          $v0, 0x1B0($v0)
    ctx->pc = 0x2a5598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 432)));
label_2a559c:
    // 0x2a559c: 0x8c550028  lw          $s5, 0x28($v0)
    ctx->pc = 0x2a559cu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_2a55a0:
    // 0x2a55a0: 0x10000005  b           . + 4 + (0x5 << 2)
label_2a55a4:
    if (ctx->pc == 0x2A55A4u) {
        ctx->pc = 0x2A55A8u;
        goto label_2a55a8;
    }
    ctx->pc = 0x2A55A0u;
    {
        const bool branch_taken_0x2a55a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a55a0) {
            ctx->pc = 0x2A55B8u;
            goto label_2a55b8;
        }
    }
    ctx->pc = 0x2A55A8u;
label_2a55a8:
    // 0x2a55a8: 0x2405001b  addiu       $a1, $zero, 0x1B
    ctx->pc = 0x2a55a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
label_2a55ac:
    // 0x2a55ac: 0x16a50002  bne         $s5, $a1, . + 4 + (0x2 << 2)
label_2a55b0:
    if (ctx->pc == 0x2A55B0u) {
        ctx->pc = 0x2A55B4u;
        goto label_2a55b4;
    }
    ctx->pc = 0x2A55ACu;
    {
        const bool branch_taken_0x2a55ac = (GPR_U64(ctx, 21) != GPR_U64(ctx, 5));
        if (branch_taken_0x2a55ac) {
            ctx->pc = 0x2A55B8u;
            goto label_2a55b8;
        }
    }
    ctx->pc = 0x2A55B4u;
label_2a55b4:
    // 0x2a55b4: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x2a55b4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a55b8:
    // 0x2a55b8: 0x27a401f0  addiu       $a0, $sp, 0x1F0
    ctx->pc = 0x2a55b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
label_2a55bc:
    // 0x2a55bc: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2a55bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2a55c0:
    // 0x2a55c0: 0xc048b2c  jal         func_122CB0
label_2a55c4:
    if (ctx->pc == 0x2A55C4u) {
        ctx->pc = 0x2A55C8u;
        goto label_2a55c8;
    }
    ctx->pc = 0x2A55C0u;
    SET_GPR_U32(ctx, 31, 0x2A55C8u);
    ctx->pc = 0x122CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122CB0u, 0x2A55C0u, 0x2A55C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A55C8u;
label_2a55c8:
    // 0x2a55c8: 0x16a00002  bnez        $s5, . + 4 + (0x2 << 2)
label_2a55cc:
    if (ctx->pc == 0x2A55CCu) {
        ctx->pc = 0x2A55D0u;
        goto label_2a55d0;
    }
    ctx->pc = 0x2A55C8u;
    {
        const bool branch_taken_0x2a55c8 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a55c8) {
            ctx->pc = 0x2A55D4u;
            goto label_2a55d4;
        }
    }
    ctx->pc = 0x2A55D0u;
label_2a55d0:
    // 0x2a55d0: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x2a55d0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a55d4:
    // 0x2a55d4: 0xc08ef50  jal         func_23BD40
label_2a55d8:
    if (ctx->pc == 0x2A55D8u) {
        ctx->pc = 0x2A55DCu;
        goto label_2a55dc;
    }
    ctx->pc = 0x2A55D4u;
    SET_GPR_U32(ctx, 31, 0x2A55DCu);
    ctx->pc = 0x23BD40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23BD40u, 0x2A55D4u, 0x2A55DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A55DCu;
label_2a55dc:
    // 0x2a55dc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a55dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a55e0:
    // 0x2a55e0: 0xc0406f0  jal         func_101BC0
label_2a55e4:
    if (ctx->pc == 0x2A55E4u) {
        ctx->pc = 0x2A55E8u;
        goto label_2a55e8;
    }
    ctx->pc = 0x2A55E0u;
    SET_GPR_U32(ctx, 31, 0x2A55E8u);
    ctx->pc = 0x101BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101BC0u, 0x2A55E0u, 0x2A55E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A55E8u;
label_2a55e8:
    // 0x2a55e8: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x2a55e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_2a55ec:
    // 0x2a55ec: 0x14440009  bne         $v0, $a0, . + 4 + (0x9 << 2)
label_2a55f0:
    if (ctx->pc == 0x2A55F0u) {
        ctx->pc = 0x2A55F4u;
        goto label_2a55f4;
    }
    ctx->pc = 0x2A55ECu;
    {
        const bool branch_taken_0x2a55ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x2a55ec) {
            ctx->pc = 0x2A5614u;
            goto label_2a5614;
        }
    }
    ctx->pc = 0x2A55F4u;
label_2a55f4:
    // 0x2a55f4: 0x8f82bb70  lw          $v0, -0x4490($gp)
    ctx->pc = 0x2a55f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
label_2a55f8:
    // 0x2a55f8: 0x7fa200d0  sq          $v0, 0xD0($sp)
    ctx->pc = 0x2a55f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 2));
label_2a55fc:
    // 0x2a55fc: 0x7ba200d0  lq          $v0, 0xD0($sp)
    ctx->pc = 0x2a55fcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_2a5600:
    // 0x2a5600: 0x8c430050  lw          $v1, 0x50($v0)
    ctx->pc = 0x2a5600u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
label_2a5604:
    // 0x2a5604: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x2a5604u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_2a5608:
    // 0x2a5608: 0x14640002  bne         $v1, $a0, . + 4 + (0x2 << 2)
label_2a560c:
    if (ctx->pc == 0x2A560Cu) {
        ctx->pc = 0x2A5610u;
        goto label_2a5610;
    }
    ctx->pc = 0x2A5608u;
    {
        const bool branch_taken_0x2a5608 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x2a5608) {
            ctx->pc = 0x2A5614u;
            goto label_2a5614;
        }
    }
    ctx->pc = 0x2A5610u;
label_2a5610:
    // 0x2a5610: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x2a5610u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a5614:
    // 0x2a5614: 0x12c0005e  beqz        $s6, . + 4 + (0x5E << 2)
label_2a5618:
    if (ctx->pc == 0x2A5618u) {
        ctx->pc = 0x2A561Cu;
        goto label_2a561c;
    }
    ctx->pc = 0x2A5614u;
    {
        const bool branch_taken_0x2a5614 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a5614) {
            ctx->pc = 0x2A5790u;
            goto label_2a5790;
        }
    }
    ctx->pc = 0x2A561Cu;
label_2a561c:
    // 0x2a561c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2a561cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2a5620:
    // 0x2a5620: 0xc097010  jal         func_25C040
label_2a5624:
    if (ctx->pc == 0x2A5624u) {
        ctx->pc = 0x2A5628u;
        goto label_2a5628;
    }
    ctx->pc = 0x2A5620u;
    SET_GPR_U32(ctx, 31, 0x2A5628u);
    ctx->pc = 0x25C040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25C040u, 0x2A5620u, 0x2A5628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5628u;
label_2a5628:
    // 0x2a5628: 0xafa20260  sw          $v0, 0x260($sp)
    ctx->pc = 0x2a5628u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 608), GPR_U32(ctx, 2));
label_2a562c:
    // 0x2a562c: 0x8fa50260  lw          $a1, 0x260($sp)
    ctx->pc = 0x2a562cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
label_2a5630:
    // 0x2a5630: 0x2ca1000a  sltiu       $at, $a1, 0xA
    ctx->pc = 0x2a5630u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
label_2a5634:
    // 0x2a5634: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
label_2a5638:
    if (ctx->pc == 0x2A5638u) {
        ctx->pc = 0x2A563Cu;
        goto label_2a563c;
    }
    ctx->pc = 0x2A5634u;
    {
        const bool branch_taken_0x2a5634 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a5634) {
            ctx->pc = 0x2A5660u;
            goto label_2a5660;
        }
    }
    ctx->pc = 0x2A563Cu;
label_2a563c:
    // 0x2a563c: 0x27a701e8  addiu       $a3, $sp, 0x1E8
    ctx->pc = 0x2a563cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 488));
label_2a5640:
    // 0x2a5640: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x2a5640u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2a5644:
    // 0x2a5644: 0x2785a418  addiu       $a1, $gp, -0x5BE8
    ctx->pc = 0x2a5644u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294943768));
label_2a5648:
    // 0x2a5648: 0x8fa60260  lw          $a2, 0x260($sp)
    ctx->pc = 0x2a5648u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
label_2a564c:
    // 0x2a564c: 0xc0bc3e2  jal         func_2F0F88
label_2a5650:
    if (ctx->pc == 0x2A5650u) {
        ctx->pc = 0x2A5654u;
        goto label_2a5654;
    }
    ctx->pc = 0x2A564Cu;
    SET_GPR_U32(ctx, 31, 0x2A5654u);
    ctx->pc = 0x2F0F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0F88u, 0x2A564Cu, 0x2A5654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5654u;
label_2a5654:
    // 0x2a5654: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x2a5654u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
label_2a5658:
    // 0x2a5658: 0x10000006  b           . + 4 + (0x6 << 2)
label_2a565c:
    if (ctx->pc == 0x2A565Cu) {
        ctx->pc = 0x2A5660u;
        goto label_2a5660;
    }
    ctx->pc = 0x2A5658u;
    {
        const bool branch_taken_0x2a5658 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a5658) {
            ctx->pc = 0x2A5674u;
            goto label_2a5674;
        }
    }
    ctx->pc = 0x2A5660u;
label_2a5660:
    // 0x2a5660: 0x27a401e8  addiu       $a0, $sp, 0x1E8
    ctx->pc = 0x2a5660u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 488));
label_2a5664:
    // 0x2a5664: 0x2785a420  addiu       $a1, $gp, -0x5BE0
    ctx->pc = 0x2a5664u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294943776));
label_2a5668:
    // 0x2a5668: 0x8fa60260  lw          $a2, 0x260($sp)
    ctx->pc = 0x2a5668u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
label_2a566c:
    // 0x2a566c: 0xc0bc3e2  jal         func_2F0F88
label_2a5670:
    if (ctx->pc == 0x2A5670u) {
        ctx->pc = 0x2A5674u;
        goto label_2a5674;
    }
    ctx->pc = 0x2A566Cu;
    SET_GPR_U32(ctx, 31, 0x2A5674u);
    ctx->pc = 0x2F0F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0F88u, 0x2A566Cu, 0x2A5674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5674u;
label_2a5674:
    // 0x2a5674: 0x2ea1000a  sltiu       $at, $s5, 0xA
    ctx->pc = 0x2a5674u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
label_2a5678:
    // 0x2a5678: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
label_2a567c:
    if (ctx->pc == 0x2A567Cu) {
        ctx->pc = 0x2A5680u;
        goto label_2a5680;
    }
    ctx->pc = 0x2A5678u;
    {
        const bool branch_taken_0x2a5678 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a5678) {
            ctx->pc = 0x2A56A0u;
            goto label_2a56a0;
        }
    }
    ctx->pc = 0x2A5680u;
label_2a5680:
    // 0x2a5680: 0x27a701e0  addiu       $a3, $sp, 0x1E0
    ctx->pc = 0x2a5680u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
label_2a5684:
    // 0x2a5684: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x2a5684u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2a5688:
    // 0x2a5688: 0x2785a428  addiu       $a1, $gp, -0x5BD8
    ctx->pc = 0x2a5688u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294943784));
label_2a568c:
    // 0x2a568c: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x2a568cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2a5690:
    // 0x2a5690: 0xc0bc3e2  jal         func_2F0F88
label_2a5694:
    if (ctx->pc == 0x2A5694u) {
        ctx->pc = 0x2A5698u;
        goto label_2a5698;
    }
    ctx->pc = 0x2A5690u;
    SET_GPR_U32(ctx, 31, 0x2A5698u);
    ctx->pc = 0x2F0F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0F88u, 0x2A5690u, 0x2A5698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5698u;
label_2a5698:
    // 0x2a5698: 0x10000008  b           . + 4 + (0x8 << 2)
label_2a569c:
    if (ctx->pc == 0x2A569Cu) {
        ctx->pc = 0x2A56A0u;
        goto label_2a56a0;
    }
    ctx->pc = 0x2A5698u;
    {
        const bool branch_taken_0x2a5698 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a5698) {
            ctx->pc = 0x2A56BCu;
            goto label_2a56bc;
        }
    }
    ctx->pc = 0x2A56A0u;
label_2a56a0:
    // 0x2a56a0: 0x27a201e0  addiu       $v0, $sp, 0x1E0
    ctx->pc = 0x2a56a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
label_2a56a4:
    // 0x2a56a4: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x2a56a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
label_2a56a8:
    // 0x2a56a8: 0x7ba400b0  lq          $a0, 0xB0($sp)
    ctx->pc = 0x2a56a8u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_2a56ac:
    // 0x2a56ac: 0x2785a42c  addiu       $a1, $gp, -0x5BD4
    ctx->pc = 0x2a56acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294943788));
label_2a56b0:
    // 0x2a56b0: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x2a56b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2a56b4:
    // 0x2a56b4: 0xc0bc3e2  jal         func_2F0F88
label_2a56b8:
    if (ctx->pc == 0x2A56B8u) {
        ctx->pc = 0x2A56BCu;
        goto label_2a56bc;
    }
    ctx->pc = 0x2A56B4u;
    SET_GPR_U32(ctx, 31, 0x2A56BCu);
    ctx->pc = 0x2F0F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0F88u, 0x2A56B4u, 0x2A56BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A56BCu;
label_2a56bc:
    // 0x2a56bc: 0xc0de0d2  jal         func_378348
label_2a56c0:
    if (ctx->pc == 0x2A56C0u) {
        ctx->pc = 0x2A56C4u;
        goto label_2a56c4;
    }
    ctx->pc = 0x2A56BCu;
    SET_GPR_U32(ctx, 31, 0x2A56C4u);
    ctx->pc = 0x378348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x378348u, 0x2A56BCu, 0x2A56C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A56C4u;
label_2a56c4:
    // 0x2a56c4: 0x26a5ffff  addiu       $a1, $s5, -0x1
    ctx->pc = 0x2a56c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
label_2a56c8:
    // 0x2a56c8: 0x53880  sll         $a3, $a1, 2
    ctx->pc = 0x2a56c8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_2a56cc:
    // 0x2a56cc: 0x3c03004f  lui         $v1, 0x4F
    ctx->pc = 0x2a56ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)79 << 16));
label_2a56d0:
    // 0x2a56d0: 0x2463de00  addiu       $v1, $v1, -0x2200
    ctx->pc = 0x2a56d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958592));
label_2a56d4:
    // 0x2a56d4: 0x672021  addu        $a0, $v1, $a3
    ctx->pc = 0x2a56d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_2a56d8:
    // 0x2a56d8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2a56d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2a56dc:
    // 0x2a56dc: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x2a56dcu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_2a56e0:
    // 0x2a56e0: 0x1810  mfhi        $v1
    ctx->pc = 0x2a56e0u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_2a56e4:
    // 0x2a56e4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2a56e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2a56e8:
    // 0x2a56e8: 0xafa3025c  sw          $v1, 0x25C($sp)
    ctx->pc = 0x2a56e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 604), GPR_U32(ctx, 3));
label_2a56ec:
    // 0x2a56ec: 0x8fa3025c  lw          $v1, 0x25C($sp)
    ctx->pc = 0x2a56ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 604)));
label_2a56f0:
    // 0x2a56f0: 0x2c61000a  sltiu       $at, $v1, 0xA
    ctx->pc = 0x2a56f0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
label_2a56f4:
    // 0x2a56f4: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
label_2a56f8:
    if (ctx->pc == 0x2A56F8u) {
        ctx->pc = 0x2A56FCu;
        goto label_2a56fc;
    }
    ctx->pc = 0x2A56F4u;
    {
        const bool branch_taken_0x2a56f4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a56f4) {
            ctx->pc = 0x2A5720u;
            goto label_2a5720;
        }
    }
    ctx->pc = 0x2A56FCu;
label_2a56fc:
    // 0x2a56fc: 0x27a301d8  addiu       $v1, $sp, 0x1D8
    ctx->pc = 0x2a56fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 472));
label_2a5700:
    // 0x2a5700: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x2a5700u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2a5704:
    // 0x2a5704: 0x2785a428  addiu       $a1, $gp, -0x5BD8
    ctx->pc = 0x2a5704u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294943784));
label_2a5708:
    // 0x2a5708: 0x8fa6025c  lw          $a2, 0x25C($sp)
    ctx->pc = 0x2a5708u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 604)));
label_2a570c:
    // 0x2a570c: 0xc0bc3e2  jal         func_2F0F88
label_2a5710:
    if (ctx->pc == 0x2A5710u) {
        ctx->pc = 0x2A5714u;
        goto label_2a5714;
    }
    ctx->pc = 0x2A570Cu;
    SET_GPR_U32(ctx, 31, 0x2A5714u);
    ctx->pc = 0x2F0F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0F88u, 0x2A570Cu, 0x2A5714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5714u;
label_2a5714:
    // 0x2a5714: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2a5714u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a5718:
    // 0x2a5718: 0x10000006  b           . + 4 + (0x6 << 2)
label_2a571c:
    if (ctx->pc == 0x2A571Cu) {
        ctx->pc = 0x2A5720u;
        goto label_2a5720;
    }
    ctx->pc = 0x2A5718u;
    {
        const bool branch_taken_0x2a5718 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a5718) {
            ctx->pc = 0x2A5734u;
            goto label_2a5734;
        }
    }
    ctx->pc = 0x2A5720u;
label_2a5720:
    // 0x2a5720: 0x27a401d8  addiu       $a0, $sp, 0x1D8
    ctx->pc = 0x2a5720u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 472));
label_2a5724:
    // 0x2a5724: 0x2785a42c  addiu       $a1, $gp, -0x5BD4
    ctx->pc = 0x2a5724u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294943788));
label_2a5728:
    // 0x2a5728: 0x8fa6025c  lw          $a2, 0x25C($sp)
    ctx->pc = 0x2a5728u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 604)));
label_2a572c:
    // 0x2a572c: 0xc0bc3e2  jal         func_2F0F88
label_2a5730:
    if (ctx->pc == 0x2A5730u) {
        ctx->pc = 0x2A5734u;
        goto label_2a5734;
    }
    ctx->pc = 0x2A572Cu;
    SET_GPR_U32(ctx, 31, 0x2A5734u);
    ctx->pc = 0x2F0F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0F88u, 0x2A572Cu, 0x2A5734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5734u;
label_2a5734:
    // 0x2a5734: 0x8fa30280  lw          $v1, 0x280($sp)
    ctx->pc = 0x2a5734u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
label_2a5738:
    // 0x2a5738: 0x246401c8  addiu       $a0, $v1, 0x1C8
    ctx->pc = 0x2a5738u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 456));
label_2a573c:
    // 0x2a573c: 0x2785a430  addiu       $a1, $gp, -0x5BD0
    ctx->pc = 0x2a573cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294943792));
label_2a5740:
    // 0x2a5740: 0x27a601e8  addiu       $a2, $sp, 0x1E8
    ctx->pc = 0x2a5740u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 488));
label_2a5744:
    // 0x2a5744: 0x27a701e0  addiu       $a3, $sp, 0x1E0
    ctx->pc = 0x2a5744u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
label_2a5748:
    // 0x2a5748: 0x27a801d8  addiu       $t0, $sp, 0x1D8
    ctx->pc = 0x2a5748u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 472));
label_2a574c:
    // 0x2a574c: 0xc0bc3e2  jal         func_2F0F88
label_2a5750:
    if (ctx->pc == 0x2A5750u) {
        ctx->pc = 0x2A5754u;
        goto label_2a5754;
    }
    ctx->pc = 0x2A574Cu;
    SET_GPR_U32(ctx, 31, 0x2A5754u);
    ctx->pc = 0x2F0F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0F88u, 0x2A574Cu, 0x2A5754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5754u;
label_2a5754:
    // 0x2a5754: 0x8fa30260  lw          $v1, 0x260($sp)
    ctx->pc = 0x2a5754u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
label_2a5758:
    // 0x2a5758: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
label_2a575c:
    if (ctx->pc == 0x2A575Cu) {
        ctx->pc = 0x2A5760u;
        goto label_2a5760;
    }
    ctx->pc = 0x2A5758u;
    {
        const bool branch_taken_0x2a5758 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a5758) {
            ctx->pc = 0x2A5790u;
            goto label_2a5790;
        }
    }
    ctx->pc = 0x2A5760u;
label_2a5760:
    // 0x2a5760: 0x8fa20280  lw          $v0, 0x280($sp)
    ctx->pc = 0x2a5760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
label_2a5764:
    // 0x2a5764: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x2a5764u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
label_2a5768:
    // 0x2a5768: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x2a5768u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2a576c:
    // 0x2a576c: 0x8f85bbec  lw          $a1, -0x4414($gp)
    ctx->pc = 0x2a576cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
label_2a5770:
    // 0x2a5770: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2a5770u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2a5774:
    // 0x2a5774: 0x244501c8  addiu       $a1, $v0, 0x1C8
    ctx->pc = 0x2a5774u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 456));
label_2a5778:
    // 0x2a5778: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2a5778u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a577c:
    // 0x2a577c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2a577cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a5780:
    // 0x2a5780: 0xc08f6a0  jal         func_23DA80
label_2a5784:
    if (ctx->pc == 0x2A5784u) {
        ctx->pc = 0x2A5788u;
        goto label_2a5788;
    }
    ctx->pc = 0x2A5780u;
    SET_GPR_U32(ctx, 31, 0x2A5788u);
    ctx->pc = 0x23DA80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23DA80u, 0x2A5780u, 0x2A5788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5788u;
label_2a5788:
    // 0x2a5788: 0x8fa40280  lw          $a0, 0x280($sp)
    ctx->pc = 0x2a5788u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
label_2a578c:
    // 0x2a578c: 0xac8201dc  sw          $v0, 0x1DC($a0)
    ctx->pc = 0x2a578cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 476), GPR_U32(ctx, 2));
label_2a5790:
    // 0x2a5790: 0x8fa50280  lw          $a1, 0x280($sp)
    ctx->pc = 0x2a5790u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
label_2a5794:
    // 0x2a5794: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2a5794u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2a5798:
    // 0x2a5798: 0x8ca501b0  lw          $a1, 0x1B0($a1)
    ctx->pc = 0x2a5798u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 432)));
label_2a579c:
    // 0x2a579c: 0xc096fcc  jal         func_25BF30
label_2a57a0:
    if (ctx->pc == 0x2A57A0u) {
        ctx->pc = 0x2A57A4u;
        goto label_2a57a4;
    }
    ctx->pc = 0x2A579Cu;
    SET_GPR_U32(ctx, 31, 0x2A57A4u);
    ctx->pc = 0x25BF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BF30u, 0x2A579Cu, 0x2A57A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A57A4u;
label_2a57a4:
    // 0x2a57a4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a57a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a57a8:
    // 0x2a57a8: 0x8fa30280  lw          $v1, 0x280($sp)
    ctx->pc = 0x2a57a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
label_2a57ac:
    // 0x2a57ac: 0x8c650180  lw          $a1, 0x180($v1)
    ctx->pc = 0x2a57acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 384)));
label_2a57b0:
    // 0x2a57b0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2a57b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2a57b4:
    // 0x2a57b4: 0x10a40032  beq         $a1, $a0, . + 4 + (0x32 << 2)
label_2a57b8:
    if (ctx->pc == 0x2A57B8u) {
        ctx->pc = 0x2A57BCu;
        goto label_2a57bc;
    }
    ctx->pc = 0x2A57B4u;
    {
        const bool branch_taken_0x2a57b4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x2a57b4) {
            ctx->pc = 0x2A5880u;
            goto label_2a5880;
        }
    }
    ctx->pc = 0x2A57BCu;
label_2a57bc:
    // 0x2a57bc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2a57bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a57c0:
    // 0x2a57c0: 0x10a30017  beq         $a1, $v1, . + 4 + (0x17 << 2)
label_2a57c4:
    if (ctx->pc == 0x2A57C4u) {
        ctx->pc = 0x2A57C8u;
        goto label_2a57c8;
    }
    ctx->pc = 0x2A57C0u;
    {
        const bool branch_taken_0x2a57c0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x2a57c0) {
            ctx->pc = 0x2A5820u;
            goto label_2a5820;
        }
    }
    ctx->pc = 0x2A57C8u;
label_2a57c8:
    // 0x2a57c8: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
label_2a57cc:
    if (ctx->pc == 0x2A57CCu) {
        ctx->pc = 0x2A57D0u;
        goto label_2a57d0;
    }
    ctx->pc = 0x2A57C8u;
    {
        const bool branch_taken_0x2a57c8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a57c8) {
            ctx->pc = 0x2A57D8u;
            goto label_2a57d8;
        }
    }
    ctx->pc = 0x2A57D0u;
label_2a57d0:
    // 0x2a57d0: 0x100000a3  b           . + 4 + (0xA3 << 2)
label_2a57d4:
    if (ctx->pc == 0x2A57D4u) {
        ctx->pc = 0x2A57D8u;
        goto label_2a57d8;
    }
    ctx->pc = 0x2A57D0u;
    {
        const bool branch_taken_0x2a57d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a57d0) {
            ctx->pc = 0x2A5A60u;
            goto label_2a5a60;
        }
    }
    ctx->pc = 0x2A57D8u;
label_2a57d8:
    // 0x2a57d8: 0x3c04004f  lui         $a0, 0x4F
    ctx->pc = 0x2a57d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)79 << 16));
label_2a57dc:
    // 0x2a57dc: 0x2484dbe0  addiu       $a0, $a0, -0x2420
    ctx->pc = 0x2a57dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958048));
label_2a57e0:
    // 0x2a57e0: 0xc0bc60c  jal         func_2F1830
label_2a57e4:
    if (ctx->pc == 0x2A57E4u) {
        ctx->pc = 0x2A57E8u;
        goto label_2a57e8;
    }
    ctx->pc = 0x2A57E0u;
    SET_GPR_U32(ctx, 31, 0x2A57E8u);
    ctx->pc = 0x2F1830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1830u, 0x2A57E0u, 0x2A57E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A57E8u;
label_2a57e8:
    // 0x2a57e8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2a57e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a57ec:
    // 0x2a57ec: 0x8fa30280  lw          $v1, 0x280($sp)
    ctx->pc = 0x2a57ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
label_2a57f0:
    // 0x2a57f0: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x2a57f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
label_2a57f4:
    // 0x2a57f4: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x2a57f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_2a57f8:
    // 0x2a57f8: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x2a57f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
label_2a57fc:
    // 0x2a57fc: 0x24a5dbe0  addiu       $a1, $a1, -0x2420
    ctx->pc = 0x2a57fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958048));
label_2a5800:
    // 0x2a5800: 0xc0bc710  jal         func_2F1C40
label_2a5804:
    if (ctx->pc == 0x2A5804u) {
        ctx->pc = 0x2A5808u;
        goto label_2a5808;
    }
    ctx->pc = 0x2A5800u;
    SET_GPR_U32(ctx, 31, 0x2A5808u);
    ctx->pc = 0x2F1C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1C40u, 0x2A5800u, 0x2A5808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5808u;
label_2a5808:
    // 0x2a5808: 0x14400095  bnez        $v0, . + 4 + (0x95 << 2)
label_2a580c:
    if (ctx->pc == 0x2A580Cu) {
        ctx->pc = 0x2A5810u;
        goto label_2a5810;
    }
    ctx->pc = 0x2A5808u;
    {
        const bool branch_taken_0x2a5808 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a5808) {
            ctx->pc = 0x2A5A60u;
            goto label_2a5a60;
        }
    }
    ctx->pc = 0x2A5810u;
label_2a5810:
    // 0x2a5810: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2a5810u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a5814:
    // 0x2a5814: 0xa3a5027d  sb          $a1, 0x27D($sp)
    ctx->pc = 0x2a5814u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 637), (uint8_t)GPR_U32(ctx, 5));
label_2a5818:
    // 0x2a5818: 0x10000091  b           . + 4 + (0x91 << 2)
label_2a581c:
    if (ctx->pc == 0x2A581Cu) {
        ctx->pc = 0x2A5820u;
        goto label_2a5820;
    }
    ctx->pc = 0x2A5818u;
    {
        const bool branch_taken_0x2a5818 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a5818) {
            ctx->pc = 0x2A5A60u;
            goto label_2a5a60;
        }
    }
    ctx->pc = 0x2A5820u;
label_2a5820:
    // 0x2a5820: 0x8fa60280  lw          $a2, 0x280($sp)
    ctx->pc = 0x2a5820u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
label_2a5824:
    // 0x2a5824: 0x8fa20280  lw          $v0, 0x280($sp)
    ctx->pc = 0x2a5824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
label_2a5828:
    // 0x2a5828: 0x8cc4003c  lw          $a0, 0x3C($a2)
    ctx->pc = 0x2a5828u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 60)));
label_2a582c:
    // 0x2a582c: 0x8c450040  lw          $a1, 0x40($v0)
    ctx->pc = 0x2a582cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
label_2a5830:
    // 0x2a5830: 0xc0a6e84  jal         func_29BA10
label_2a5834:
    if (ctx->pc == 0x2A5834u) {
        ctx->pc = 0x2A5838u;
        goto label_2a5838;
    }
    ctx->pc = 0x2A5830u;
    SET_GPR_U32(ctx, 31, 0x2A5838u);
    ctx->pc = 0x29BA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29BA10u, 0x2A5830u, 0x2A5838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5838u;
label_2a5838:
    // 0x2a5838: 0xe7a00258  swc1        $f0, 0x258($sp)
    ctx->pc = 0x2a5838u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 600), bits); }
label_2a583c:
    // 0x2a583c: 0x8fa20280  lw          $v0, 0x280($sp)
    ctx->pc = 0x2a583cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
label_2a5840:
    // 0x2a5840: 0x8c44003c  lw          $a0, 0x3C($v0)
    ctx->pc = 0x2a5840u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_2a5844:
    // 0x2a5844: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x2a5844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_2a5848:
    // 0x2a5848: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x2a5848u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
label_2a584c:
    // 0x2a584c: 0x7ba500a0  lq          $a1, 0xA0($sp)
    ctx->pc = 0x2a584cu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_2a5850:
    // 0x2a5850: 0xc085538  jal         func_2154E0
label_2a5854:
    if (ctx->pc == 0x2A5854u) {
        ctx->pc = 0x2A5858u;
        goto label_2a5858;
    }
    ctx->pc = 0x2A5850u;
    SET_GPR_U32(ctx, 31, 0x2A5858u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2A5850u, 0x2A5858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5858u;
label_2a5858:
    // 0x2a5858: 0xafa20254  sw          $v0, 0x254($sp)
    ctx->pc = 0x2a5858u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 596), GPR_U32(ctx, 2));
label_2a585c:
    // 0x2a585c: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x2a585cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
label_2a5860:
    // 0x2a5860: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x2a5860u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_2a5864:
    // 0x2a5864: 0x8fa40254  lw          $a0, 0x254($sp)
    ctx->pc = 0x2a5864u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 596)));
label_2a5868:
    // 0x2a5868: 0xc7ac0258  lwc1        $f12, 0x258($sp)
    ctx->pc = 0x2a5868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2a586c:
    // 0x2a586c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a586cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a5870:
    // 0x2a5870: 0xc090fe0  jal         func_243F80
label_2a5874:
    if (ctx->pc == 0x2A5874u) {
        ctx->pc = 0x2A5878u;
        goto label_2a5878;
    }
    ctx->pc = 0x2A5870u;
    SET_GPR_U32(ctx, 31, 0x2A5878u);
    ctx->pc = 0x243F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243F80u, 0x2A5870u, 0x2A5878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5878u;
label_2a5878:
    // 0x2a5878: 0x10000079  b           . + 4 + (0x79 << 2)
label_2a587c:
    if (ctx->pc == 0x2A587Cu) {
        ctx->pc = 0x2A5880u;
        goto label_2a5880;
    }
    ctx->pc = 0x2A5878u;
    {
        const bool branch_taken_0x2a5878 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a5878) {
            ctx->pc = 0x2A5A60u;
            goto label_2a5a60;
        }
    }
    ctx->pc = 0x2A5880u;
label_2a5880:
    // 0x2a5880: 0x8fa60280  lw          $a2, 0x280($sp)
    ctx->pc = 0x2a5880u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
label_2a5884:
    // 0x2a5884: 0x8cc40030  lw          $a0, 0x30($a2)
    ctx->pc = 0x2a5884u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 48)));
label_2a5888:
    // 0x2a5888: 0x240504af  addiu       $a1, $zero, 0x4AF
    ctx->pc = 0x2a5888u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1199));
label_2a588c:
    // 0x2a588c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2a588cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2a5890:
    // 0x2a5890: 0xc040ab0  jal         func_102AC0
label_2a5894:
    if (ctx->pc == 0x2A5894u) {
        ctx->pc = 0x2A5898u;
        goto label_2a5898;
    }
    ctx->pc = 0x2A5890u;
    SET_GPR_U32(ctx, 31, 0x2A5898u);
    ctx->pc = 0x102AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AC0u, 0x2A5890u, 0x2A5898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5898u;
label_2a5898:
    // 0x2a5898: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2a5898u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a589c:
    // 0x2a589c: 0x14430048  bne         $v0, $v1, . + 4 + (0x48 << 2)
label_2a58a0:
    if (ctx->pc == 0x2A58A0u) {
        ctx->pc = 0x2A58A4u;
        goto label_2a58a4;
    }
    ctx->pc = 0x2A589Cu;
    {
        const bool branch_taken_0x2a589c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2a589c) {
            ctx->pc = 0x2A59C0u;
            goto label_2a59c0;
        }
    }
    ctx->pc = 0x2A58A4u;
label_2a58a4:
    // 0x2a58a4: 0x8fa60280  lw          $a2, 0x280($sp)
    ctx->pc = 0x2a58a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
label_2a58a8:
    // 0x2a58a8: 0x8cc40044  lw          $a0, 0x44($a2)
    ctx->pc = 0x2a58a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 68)));
label_2a58ac:
    // 0x2a58ac: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x2a58acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_2a58b0:
    // 0x2a58b0: 0xc085538  jal         func_2154E0
label_2a58b4:
    if (ctx->pc == 0x2A58B4u) {
        ctx->pc = 0x2A58B8u;
        goto label_2a58b8;
    }
    ctx->pc = 0x2A58B0u;
    SET_GPR_U32(ctx, 31, 0x2A58B8u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2A58B0u, 0x2A58B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A58B8u;
label_2a58b8:
    // 0x2a58b8: 0xafa20250  sw          $v0, 0x250($sp)
    ctx->pc = 0x2a58b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 592), GPR_U32(ctx, 2));
label_2a58bc:
    // 0x2a58bc: 0x27a50138  addiu       $a1, $sp, 0x138
    ctx->pc = 0x2a58bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 312));
label_2a58c0:
    // 0x2a58c0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2a58c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2a58c4:
    // 0x2a58c4: 0x8fa60250  lw          $a2, 0x250($sp)
    ctx->pc = 0x2a58c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
label_2a58c8:
    // 0x2a58c8: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x2a58c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2a58cc:
    // 0x2a58cc: 0xc090f80  jal         func_243E00
label_2a58d0:
    if (ctx->pc == 0x2A58D0u) {
        ctx->pc = 0x2A58D4u;
        goto label_2a58d4;
    }
    ctx->pc = 0x2A58CCu;
    SET_GPR_U32(ctx, 31, 0x2A58D4u);
    ctx->pc = 0x243E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243E00u, 0x2A58CCu, 0x2A58D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A58D4u;
label_2a58d4:
    // 0x2a58d4: 0x27a20138  addiu       $v0, $sp, 0x138
    ctx->pc = 0x2a58d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 312));
label_2a58d8:
    // 0x2a58d8: 0x27a501c8  addiu       $a1, $sp, 0x1C8
    ctx->pc = 0x2a58d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 456));
label_2a58dc:
    // 0x2a58dc: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x2a58dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2a58e0:
    // 0x2a58e0: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2a58e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2a58e4:
    // 0x2a58e4: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2a58e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a58e8:
    // 0x2a58e8: 0xe4a20000  swc1        $f2, 0x0($a1)
    ctx->pc = 0x2a58e8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
label_2a58ec:
    // 0x2a58ec: 0xe4a10004  swc1        $f1, 0x4($a1)
    ctx->pc = 0x2a58ecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
label_2a58f0:
    // 0x2a58f0: 0xe4a00008  swc1        $f0, 0x8($a1)
    ctx->pc = 0x2a58f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
label_2a58f4:
    // 0x2a58f4: 0x8fa20250  lw          $v0, 0x250($sp)
    ctx->pc = 0x2a58f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
label_2a58f8:
    // 0x2a58f8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a58f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a58fc:
    // 0x2a58fc: 0xc091008  jal         func_244020
label_2a5900:
    if (ctx->pc == 0x2A5900u) {
        ctx->pc = 0x2A5904u;
        goto label_2a5904;
    }
    ctx->pc = 0x2A58FCu;
    SET_GPR_U32(ctx, 31, 0x2A5904u);
    ctx->pc = 0x244020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244020u, 0x2A58FCu, 0x2A5904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5904u;
label_2a5904:
    // 0x2a5904: 0xe7a0024c  swc1        $f0, 0x24C($sp)
    ctx->pc = 0x2a5904u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 588), bits); }
label_2a5908:
    // 0x2a5908: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a5908u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2a590c:
    // 0x2a590c: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x2a590cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_2a5910:
    // 0x2a5910: 0xc121e84  jal         func_487A10
label_2a5914:
    if (ctx->pc == 0x2A5914u) {
        ctx->pc = 0x2A5918u;
        goto label_2a5918;
    }
    ctx->pc = 0x2A5910u;
    SET_GPR_U32(ctx, 31, 0x2A5918u);
    ctx->pc = 0x487A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x487A10u, 0x2A5910u, 0x2A5918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5918u;
label_2a5918:
    // 0x2a5918: 0x27a301b8  addiu       $v1, $sp, 0x1B8
    ctx->pc = 0x2a5918u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 440));
label_2a591c:
    // 0x2a591c: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x2a591cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2a5920:
    // 0x2a5920: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2a5920u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2a5924:
    // 0x2a5924: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2a5924u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a5928:
    // 0x2a5928: 0xe4620000  swc1        $f2, 0x0($v1)
    ctx->pc = 0x2a5928u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_2a592c:
    // 0x2a592c: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x2a592cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_2a5930:
    // 0x2a5930: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x2a5930u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_2a5934:
    // 0x2a5934: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x2a5934u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
label_2a5938:
    // 0x2a5938: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2a5938u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2a593c:
    // 0x2a593c: 0xc7a0024c  lwc1        $f0, 0x24C($sp)
    ctx->pc = 0x2a593cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a5940:
    // 0x2a5940: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2a5940u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2a5944:
    // 0x2a5944: 0xe7a00248  swc1        $f0, 0x248($sp)
    ctx->pc = 0x2a5944u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 584), bits); }
label_2a5948:
    // 0x2a5948: 0x8fa50280  lw          $a1, 0x280($sp)
    ctx->pc = 0x2a5948u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
label_2a594c:
    // 0x2a594c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2a594cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2a5950:
    // 0x2a5950: 0x8ca60030  lw          $a2, 0x30($a1)
    ctx->pc = 0x2a5950u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
label_2a5954:
    // 0x2a5954: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x2a5954u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2a5958:
    // 0x2a5958: 0x240704b0  addiu       $a3, $zero, 0x4B0
    ctx->pc = 0x2a5958u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1200));
label_2a595c:
    // 0x2a595c: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x2a595cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2a5960:
    // 0x2a5960: 0xc042090  jal         func_108240
label_2a5964:
    if (ctx->pc == 0x2A5964u) {
        ctx->pc = 0x2A5968u;
        goto label_2a5968;
    }
    ctx->pc = 0x2A5960u;
    SET_GPR_U32(ctx, 31, 0x2A5968u);
    ctx->pc = 0x108240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108240u, 0x2A5960u, 0x2A5968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5968u;
label_2a5968:
    // 0x2a5968: 0xe7a00244  swc1        $f0, 0x244($sp)
    ctx->pc = 0x2a5968u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 580), bits); }
label_2a596c:
    // 0x2a596c: 0xc7a10248  lwc1        $f1, 0x248($sp)
    ctx->pc = 0x2a596cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2a5970:
    // 0x2a5970: 0xc7a00244  lwc1        $f0, 0x244($sp)
    ctx->pc = 0x2a5970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 580)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a5974:
    // 0x2a5974: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2a5974u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2a5978:
    // 0x2a5978: 0xe7a00248  swc1        $f0, 0x248($sp)
    ctx->pc = 0x2a5978u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 584), bits); }
label_2a597c:
    // 0x2a597c: 0x8fa80280  lw          $t0, 0x280($sp)
    ctx->pc = 0x2a597cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
label_2a5980:
    // 0x2a5980: 0x8d04003c  lw          $a0, 0x3C($t0)
    ctx->pc = 0x2a5980u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 60)));
label_2a5984:
    // 0x2a5984: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x2a5984u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_2a5988:
    // 0x2a5988: 0xc085538  jal         func_2154E0
label_2a598c:
    if (ctx->pc == 0x2A598Cu) {
        ctx->pc = 0x2A5990u;
        goto label_2a5990;
    }
    ctx->pc = 0x2A5988u;
    SET_GPR_U32(ctx, 31, 0x2A5990u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2A5988u, 0x2A5990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5990u;
label_2a5990:
    // 0x2a5990: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2a5990u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a5994:
    // 0x2a5994: 0xafa30240  sw          $v1, 0x240($sp)
    ctx->pc = 0x2a5994u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 576), GPR_U32(ctx, 3));
label_2a5998:
    // 0x2a5998: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x2a5998u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
label_2a599c:
    // 0x2a599c: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x2a599cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_2a59a0:
    // 0x2a59a0: 0x8fa40240  lw          $a0, 0x240($sp)
    ctx->pc = 0x2a59a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 576)));
label_2a59a4:
    // 0x2a59a4: 0xc7ac0248  lwc1        $f12, 0x248($sp)
    ctx->pc = 0x2a59a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2a59a8:
    // 0x2a59a8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a59a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a59ac:
    // 0x2a59ac: 0xc090fe0  jal         func_243F80
label_2a59b0:
    if (ctx->pc == 0x2A59B0u) {
        ctx->pc = 0x2A59B4u;
        goto label_2a59b4;
    }
    ctx->pc = 0x2A59ACu;
    SET_GPR_U32(ctx, 31, 0x2A59B4u);
    ctx->pc = 0x243F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243F80u, 0x2A59ACu, 0x2A59B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A59B4u;
label_2a59b4:
    // 0x2a59b4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2a59b4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a59b8:
    // 0x2a59b8: 0x1000001f  b           . + 4 + (0x1F << 2)
label_2a59bc:
    if (ctx->pc == 0x2A59BCu) {
        ctx->pc = 0x2A59C0u;
        goto label_2a59c0;
    }
    ctx->pc = 0x2A59B8u;
    {
        const bool branch_taken_0x2a59b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a59b8) {
            ctx->pc = 0x2A5A38u;
            goto label_2a5a38;
        }
    }
    ctx->pc = 0x2A59C0u;
label_2a59c0:
    // 0x2a59c0: 0x3c11004f  lui         $s1, 0x4F
    ctx->pc = 0x2a59c0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)79 << 16));
label_2a59c4:
    // 0x2a59c4: 0x2631dbd0  addiu       $s1, $s1, -0x2430
    ctx->pc = 0x2a59c4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294958032));
label_2a59c8:
    // 0x2a59c8: 0x27a401a8  addiu       $a0, $sp, 0x1A8
    ctx->pc = 0x2a59c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 424));
label_2a59cc:
    // 0x2a59cc: 0xde250000  ld          $a1, 0x0($s1)
    ctx->pc = 0x2a59ccu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 17), 0)));
label_2a59d0:
    // 0x2a59d0: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x2a59d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a59d4:
    // 0x2a59d4: 0xfc850000  sd          $a1, 0x0($a0)
    ctx->pc = 0x2a59d4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 5));
label_2a59d8:
    // 0x2a59d8: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x2a59d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
label_2a59dc:
    // 0x2a59dc: 0x8fa20280  lw          $v0, 0x280($sp)
    ctx->pc = 0x2a59dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
label_2a59e0:
    // 0x2a59e0: 0x8fa30280  lw          $v1, 0x280($sp)
    ctx->pc = 0x2a59e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
label_2a59e4:
    // 0x2a59e4: 0x24440140  addiu       $a0, $v0, 0x140
    ctx->pc = 0x2a59e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 320));
label_2a59e8:
    // 0x2a59e8: 0x27a501a8  addiu       $a1, $sp, 0x1A8
    ctx->pc = 0x2a59e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 424));
label_2a59ec:
    // 0x2a59ec: 0xc46c019c  lwc1        $f12, 0x19C($v1)
    ctx->pc = 0x2a59ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 412)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2a59f0:
    // 0x2a59f0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2a59f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a59f4:
    // 0x2a59f4: 0xc103e6c  jal         func_40F9B0
label_2a59f8:
    if (ctx->pc == 0x2A59F8u) {
        ctx->pc = 0x2A59FCu;
        goto label_2a59fc;
    }
    ctx->pc = 0x2A59F4u;
    SET_GPR_U32(ctx, 31, 0x2A59FCu);
    ctx->pc = 0x40F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40F9B0u, 0x2A59F4u, 0x2A59FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A59FCu;
label_2a59fc:
    // 0x2a59fc: 0x8fa40280  lw          $a0, 0x280($sp)
    ctx->pc = 0x2a59fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
label_2a5a00:
    // 0x2a5a00: 0x8fa20280  lw          $v0, 0x280($sp)
    ctx->pc = 0x2a5a00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
label_2a5a04:
    // 0x2a5a04: 0x24840140  addiu       $a0, $a0, 0x140
    ctx->pc = 0x2a5a04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 320));
label_2a5a08:
    // 0x2a5a08: 0x2442018c  addiu       $v0, $v0, 0x18C
    ctx->pc = 0x2a5a08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 396));
label_2a5a0c:
    // 0x2a5a0c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2a5a0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a5a10:
    // 0x2a5a10: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2a5a10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2a5a14:
    // 0x2a5a14: 0xc103d16  jal         func_40F458
label_2a5a18:
    if (ctx->pc == 0x2A5A18u) {
        ctx->pc = 0x2A5A1Cu;
        goto label_2a5a1c;
    }
    ctx->pc = 0x2A5A14u;
    SET_GPR_U32(ctx, 31, 0x2A5A1Cu);
    ctx->pc = 0x40F458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40F458u, 0x2A5A14u, 0x2A5A1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5A1Cu;
label_2a5a1c:
    // 0x2a5a1c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2a5a1cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a5a20:
    // 0x2a5a20: 0x8fa40280  lw          $a0, 0x280($sp)
    ctx->pc = 0x2a5a20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
label_2a5a24:
    // 0x2a5a24: 0x24860140  addiu       $a2, $a0, 0x140
    ctx->pc = 0x2a5a24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 320));
label_2a5a28:
    // 0x2a5a28: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x2a5a28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2a5a2c:
    // 0x2a5a2c: 0xc103eb2  jal         func_40FAC8
label_2a5a30:
    if (ctx->pc == 0x2A5A30u) {
        ctx->pc = 0x2A5A34u;
        goto label_2a5a34;
    }
    ctx->pc = 0x2A5A2Cu;
    SET_GPR_U32(ctx, 31, 0x2A5A34u);
    ctx->pc = 0x40FAC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40FAC8u, 0x2A5A2Cu, 0x2A5A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5A34u;
label_2a5a34:
    // 0x2a5a34: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2a5a34u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a5a38:
    // 0x2a5a38: 0x8fa30280  lw          $v1, 0x280($sp)
    ctx->pc = 0x2a5a38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
label_2a5a3c:
    // 0x2a5a3c: 0x8fa40280  lw          $a0, 0x280($sp)
    ctx->pc = 0x2a5a3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
label_2a5a40:
    // 0x2a5a40: 0x8c850110  lw          $a1, 0x110($a0)
    ctx->pc = 0x2a5a40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 272)));
label_2a5a44:
    // 0x2a5a44: 0x8fa20280  lw          $v0, 0x280($sp)
    ctx->pc = 0x2a5a44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
label_2a5a48:
    // 0x2a5a48: 0x8c640118  lw          $a0, 0x118($v1)
    ctx->pc = 0x2a5a48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 280)));
label_2a5a4c:
    // 0x2a5a4c: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x2a5a4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
label_2a5a50:
    // 0x2a5a50: 0x24460140  addiu       $a2, $v0, 0x140
    ctx->pc = 0x2a5a50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 320));
label_2a5a54:
    // 0x2a5a54: 0xc1030fe  jal         func_40C3F8
label_2a5a58:
    if (ctx->pc == 0x2A5A58u) {
        ctx->pc = 0x2A5A5Cu;
        goto label_2a5a5c;
    }
    ctx->pc = 0x2A5A54u;
    SET_GPR_U32(ctx, 31, 0x2A5A5Cu);
    ctx->pc = 0x40C3F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40C3F8u, 0x2A5A54u, 0x2A5A5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5A5Cu;
label_2a5a5c:
    // 0x2a5a5c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2a5a5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a5a60:
    // 0x2a5a60: 0x8fa60280  lw          $a2, 0x280($sp)
    ctx->pc = 0x2a5a60u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
label_2a5a64:
    // 0x2a5a64: 0x8cc20030  lw          $v0, 0x30($a2)
    ctx->pc = 0x2a5a64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 48)));
label_2a5a68:
    // 0x2a5a68: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a5a68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a5a6c:
    // 0x2a5a6c: 0x24050537  addiu       $a1, $zero, 0x537
    ctx->pc = 0x2a5a6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1335));
label_2a5a70:
    // 0x2a5a70: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2a5a70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a5a74:
    // 0x2a5a74: 0xc04146c  jal         func_1051B0
label_2a5a78:
    if (ctx->pc == 0x2A5A78u) {
        ctx->pc = 0x2A5A7Cu;
        goto label_2a5a7c;
    }
    ctx->pc = 0x2A5A74u;
    SET_GPR_U32(ctx, 31, 0x2A5A7Cu);
    ctx->pc = 0x1051B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051B0u, 0x2A5A74u, 0x2A5A7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5A7Cu;
label_2a5a7c:
    // 0x2a5a7c: 0xa3a2027b  sb          $v0, 0x27B($sp)
    ctx->pc = 0x2a5a7cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 635), (uint8_t)GPR_U32(ctx, 2));
label_2a5a80:
    // 0x2a5a80: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2a5a80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2a5a84:
    // 0x2a5a84: 0xc0969d4  jal         func_25A750
label_2a5a88:
    if (ctx->pc == 0x2A5A88u) {
        ctx->pc = 0x2A5A8Cu;
        goto label_2a5a8c;
    }
    ctx->pc = 0x2A5A84u;
    SET_GPR_U32(ctx, 31, 0x2A5A8Cu);
    ctx->pc = 0x25A750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A750u, 0x2A5A84u, 0x2A5A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5A8Cu;
label_2a5a8c:
    // 0x2a5a8c: 0xa3a2027a  sb          $v0, 0x27A($sp)
    ctx->pc = 0x2a5a8cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 634), (uint8_t)GPR_U32(ctx, 2));
label_2a5a90:
    // 0x2a5a90: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2a5a90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2a5a94:
    // 0x2a5a94: 0x93a5027b  lbu         $a1, 0x27B($sp)
    ctx->pc = 0x2a5a94u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 635)));
label_2a5a98:
    // 0x2a5a98: 0xc0969c8  jal         func_25A720
label_2a5a9c:
    if (ctx->pc == 0x2A5A9Cu) {
        ctx->pc = 0x2A5AA0u;
        goto label_2a5aa0;
    }
    ctx->pc = 0x2A5A98u;
    SET_GPR_U32(ctx, 31, 0x2A5AA0u);
    ctx->pc = 0x25A720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A720u, 0x2A5A98u, 0x2A5AA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5AA0u;
label_2a5aa0:
    // 0x2a5aa0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2a5aa0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a5aa4:
    // 0x2a5aa4: 0x8fa20270  lw          $v0, 0x270($sp)
    ctx->pc = 0x2a5aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
label_2a5aa8:
    // 0x2a5aa8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a5aa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a5aac:
    // 0x2a5aac: 0xc0a88a0  jal         func_2A2280
label_2a5ab0:
    if (ctx->pc == 0x2A5AB0u) {
        ctx->pc = 0x2A5AB4u;
        goto label_2a5ab4;
    }
    ctx->pc = 0x2A5AACu;
    SET_GPR_U32(ctx, 31, 0x2A5AB4u);
    ctx->pc = 0x2A2280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2280u, 0x2A5AACu, 0x2A5AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5AB4u;
label_2a5ab4:
    // 0x2a5ab4: 0xafa2023c  sw          $v0, 0x23C($sp)
    ctx->pc = 0x2a5ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 572), GPR_U32(ctx, 2));
label_2a5ab8:
    // 0x2a5ab8: 0x93a3027b  lbu         $v1, 0x27B($sp)
    ctx->pc = 0x2a5ab8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 635)));
label_2a5abc:
    // 0x2a5abc: 0x10600018  beqz        $v1, . + 4 + (0x18 << 2)
label_2a5ac0:
    if (ctx->pc == 0x2A5AC0u) {
        ctx->pc = 0x2A5AC4u;
        goto label_2a5ac4;
    }
    ctx->pc = 0x2A5ABCu;
    {
        const bool branch_taken_0x2a5abc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a5abc) {
            ctx->pc = 0x2A5B20u;
            goto label_2a5b20;
        }
    }
    ctx->pc = 0x2A5AC4u;
label_2a5ac4:
    // 0x2a5ac4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2a5ac4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2a5ac8:
    // 0x2a5ac8: 0xc0480fc  jal         func_1203F0
label_2a5acc:
    if (ctx->pc == 0x2A5ACCu) {
        ctx->pc = 0x2A5AD0u;
        goto label_2a5ad0;
    }
    ctx->pc = 0x2A5AC8u;
    SET_GPR_U32(ctx, 31, 0x2A5AD0u);
    ctx->pc = 0x1203F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1203F0u, 0x2A5AC8u, 0x2A5AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5AD0u;
label_2a5ad0:
    // 0x2a5ad0: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2a5ad0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2a5ad4:
    // 0x2a5ad4: 0x10440006  beq         $v0, $a0, . + 4 + (0x6 << 2)
label_2a5ad8:
    if (ctx->pc == 0x2A5AD8u) {
        ctx->pc = 0x2A5ADCu;
        goto label_2a5adc;
    }
    ctx->pc = 0x2A5AD4u;
    {
        const bool branch_taken_0x2a5ad4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x2a5ad4) {
            ctx->pc = 0x2A5AF0u;
            goto label_2a5af0;
        }
    }
    ctx->pc = 0x2A5ADCu;
label_2a5adc:
    // 0x2a5adc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2a5adcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2a5ae0:
    // 0x2a5ae0: 0xc0480fc  jal         func_1203F0
label_2a5ae4:
    if (ctx->pc == 0x2A5AE4u) {
        ctx->pc = 0x2A5AE8u;
        goto label_2a5ae8;
    }
    ctx->pc = 0x2A5AE0u;
    SET_GPR_U32(ctx, 31, 0x2A5AE8u);
    ctx->pc = 0x1203F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1203F0u, 0x2A5AE0u, 0x2A5AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5AE8u;
label_2a5ae8:
    // 0x2a5ae8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_2a5aec:
    if (ctx->pc == 0x2A5AECu) {
        ctx->pc = 0x2A5AF0u;
        goto label_2a5af0;
    }
    ctx->pc = 0x2A5AE8u;
    {
        const bool branch_taken_0x2a5ae8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a5ae8) {
            ctx->pc = 0x2A5B08u;
            goto label_2a5b08;
        }
    }
    ctx->pc = 0x2A5AF0u;
label_2a5af0:
    // 0x2a5af0: 0x3c023e80  lui         $v0, 0x3E80
    ctx->pc = 0x2a5af0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16000 << 16));
label_2a5af4:
    // 0x2a5af4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a5af4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a5af8:
    // 0x2a5af8: 0x8fa30280  lw          $v1, 0x280($sp)
    ctx->pc = 0x2a5af8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
label_2a5afc:
    // 0x2a5afc: 0xe46001d8  swc1        $f0, 0x1D8($v1)
    ctx->pc = 0x2a5afcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 472), bits); }
label_2a5b00:
    // 0x2a5b00: 0x10000018  b           . + 4 + (0x18 << 2)
label_2a5b04:
    if (ctx->pc == 0x2A5B04u) {
        ctx->pc = 0x2A5B08u;
        goto label_2a5b08;
    }
    ctx->pc = 0x2A5B00u;
    {
        const bool branch_taken_0x2a5b00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a5b00) {
            ctx->pc = 0x2A5B64u;
            goto label_2a5b64;
        }
    }
    ctx->pc = 0x2A5B08u;
label_2a5b08:
    // 0x2a5b08: 0x3c043f40  lui         $a0, 0x3F40
    ctx->pc = 0x2a5b08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16192 << 16));
label_2a5b0c:
    // 0x2a5b0c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2a5b0cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a5b10:
    // 0x2a5b10: 0x8fa20280  lw          $v0, 0x280($sp)
    ctx->pc = 0x2a5b10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
label_2a5b14:
    // 0x2a5b14: 0xe44001d8  swc1        $f0, 0x1D8($v0)
    ctx->pc = 0x2a5b14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 472), bits); }
label_2a5b18:
    // 0x2a5b18: 0x10000012  b           . + 4 + (0x12 << 2)
label_2a5b1c:
    if (ctx->pc == 0x2A5B1Cu) {
        ctx->pc = 0x2A5B20u;
        goto label_2a5b20;
    }
    ctx->pc = 0x2A5B18u;
    {
        const bool branch_taken_0x2a5b18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a5b18) {
            ctx->pc = 0x2A5B64u;
            goto label_2a5b64;
        }
    }
    ctx->pc = 0x2A5B20u;
label_2a5b20:
    // 0x2a5b20: 0x8fa2023c  lw          $v0, 0x23C($sp)
    ctx->pc = 0x2a5b20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 572)));
label_2a5b24:
    // 0x2a5b24: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x2a5b24u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a5b28:
    // 0x2a5b28: 0x10560005  beq         $v0, $s6, . + 4 + (0x5 << 2)
label_2a5b2c:
    if (ctx->pc == 0x2A5B2Cu) {
        ctx->pc = 0x2A5B30u;
        goto label_2a5b30;
    }
    ctx->pc = 0x2A5B28u;
    {
        const bool branch_taken_0x2a5b28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 22));
        if (branch_taken_0x2a5b28) {
            ctx->pc = 0x2A5B40u;
            goto label_2a5b40;
        }
    }
    ctx->pc = 0x2A5B30u;
label_2a5b30:
    // 0x2a5b30: 0x8fa3023c  lw          $v1, 0x23C($sp)
    ctx->pc = 0x2a5b30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 572)));
label_2a5b34:
    // 0x2a5b34: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2a5b34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2a5b38:
    // 0x2a5b38: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
label_2a5b3c:
    if (ctx->pc == 0x2A5B3Cu) {
        ctx->pc = 0x2A5B40u;
        goto label_2a5b40;
    }
    ctx->pc = 0x2A5B38u;
    {
        const bool branch_taken_0x2a5b38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2a5b38) {
            ctx->pc = 0x2A5B54u;
            goto label_2a5b54;
        }
    }
    ctx->pc = 0x2A5B40u;
label_2a5b40:
    // 0x2a5b40: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2a5b40u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a5b44:
    // 0x2a5b44: 0x8fa40280  lw          $a0, 0x280($sp)
    ctx->pc = 0x2a5b44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
label_2a5b48:
    // 0x2a5b48: 0xe48001d8  swc1        $f0, 0x1D8($a0)
    ctx->pc = 0x2a5b48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 472), bits); }
label_2a5b4c:
    // 0x2a5b4c: 0x10000005  b           . + 4 + (0x5 << 2)
label_2a5b50:
    if (ctx->pc == 0x2A5B50u) {
        ctx->pc = 0x2A5B54u;
        goto label_2a5b54;
    }
    ctx->pc = 0x2A5B4Cu;
    {
        const bool branch_taken_0x2a5b4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a5b4c) {
            ctx->pc = 0x2A5B64u;
            goto label_2a5b64;
        }
    }
    ctx->pc = 0x2A5B54u;
label_2a5b54:
    // 0x2a5b54: 0x3c053e80  lui         $a1, 0x3E80
    ctx->pc = 0x2a5b54u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16000 << 16));
label_2a5b58:
    // 0x2a5b58: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x2a5b58u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a5b5c:
    // 0x2a5b5c: 0x8fa20280  lw          $v0, 0x280($sp)
    ctx->pc = 0x2a5b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
label_2a5b60:
    // 0x2a5b60: 0xe44001d8  swc1        $f0, 0x1D8($v0)
    ctx->pc = 0x2a5b60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 472), bits); }
label_2a5b64:
    // 0x2a5b64: 0x8fa20280  lw          $v0, 0x280($sp)
    ctx->pc = 0x2a5b64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
label_2a5b68:
    // 0x2a5b68: 0x3c04bf80  lui         $a0, 0xBF80
    ctx->pc = 0x2a5b68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49024 << 16));
label_2a5b6c:
    // 0x2a5b6c: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x2a5b6cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2a5b70:
    // 0x2a5b70: 0x8c560030  lw          $s6, 0x30($v0)
    ctx->pc = 0x2a5b70u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_2a5b74:
    // 0x2a5b74: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2a5b74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2a5b78:
    // 0x2a5b78: 0x240504ad  addiu       $a1, $zero, 0x4AD
    ctx->pc = 0x2a5b78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1197));
label_2a5b7c:
    // 0x2a5b7c: 0xc042090  jal         func_108240
label_2a5b80:
    if (ctx->pc == 0x2A5B80u) {
        ctx->pc = 0x2A5B84u;
        goto label_2a5b84;
    }
    ctx->pc = 0x2A5B7Cu;
    SET_GPR_U32(ctx, 31, 0x2A5B84u);
    ctx->pc = 0x108240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108240u, 0x2A5B7Cu, 0x2A5B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5B84u;
label_2a5b84:
    // 0x2a5b84: 0xe7a00238  swc1        $f0, 0x238($sp)
    ctx->pc = 0x2a5b84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 568), bits); }
label_2a5b88:
    // 0x2a5b88: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2a5b88u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2a5b8c:
    // 0x2a5b8c: 0xc7a00238  lwc1        $f0, 0x238($sp)
    ctx->pc = 0x2a5b8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a5b90:
    // 0x2a5b90: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x2a5b90u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2a5b94:
    // 0x2a5b94: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_2a5b98:
    if (ctx->pc == 0x2A5B98u) {
        ctx->pc = 0x2A5B9Cu;
        goto label_2a5b9c;
    }
    ctx->pc = 0x2A5B94u;
    {
        const bool branch_taken_0x2a5b94 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a5b94) {
            ctx->pc = 0x2A5BA8u;
            goto label_2a5ba8;
        }
    }
    ctx->pc = 0x2A5B9Cu;
label_2a5b9c:
    // 0x2a5b9c: 0xc7a00238  lwc1        $f0, 0x238($sp)
    ctx->pc = 0x2a5b9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a5ba0:
    // 0x2a5ba0: 0x8fa20280  lw          $v0, 0x280($sp)
    ctx->pc = 0x2a5ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
label_2a5ba4:
    // 0x2a5ba4: 0xe44001d8  swc1        $f0, 0x1D8($v0)
    ctx->pc = 0x2a5ba4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 472), bits); }
label_2a5ba8:
    // 0x2a5ba8: 0x8fb50280  lw          $s5, 0x280($sp)
    ctx->pc = 0x2a5ba8u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
label_2a5bac:
    // 0x2a5bac: 0x26a40055  addiu       $a0, $s5, 0x55
    ctx->pc = 0x2a5bacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 85));
label_2a5bb0:
    // 0x2a5bb0: 0x2785a438  addiu       $a1, $gp, -0x5BC8
    ctx->pc = 0x2a5bb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294943800));
label_2a5bb4:
    // 0x2a5bb4: 0xc0bc824  jal         func_2F2090
label_2a5bb8:
    if (ctx->pc == 0x2A5BB8u) {
        ctx->pc = 0x2A5BBCu;
        goto label_2a5bbc;
    }
    ctx->pc = 0x2A5BB4u;
    SET_GPR_U32(ctx, 31, 0x2A5BBCu);
    ctx->pc = 0x2F2090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F2090u, 0x2A5BB4u, 0x2A5BBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5BBCu;
label_2a5bbc:
    // 0x2a5bbc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_2a5bc0:
    if (ctx->pc == 0x2A5BC0u) {
        ctx->pc = 0x2A5BC4u;
        goto label_2a5bc4;
    }
    ctx->pc = 0x2A5BBCu;
    {
        const bool branch_taken_0x2a5bbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a5bbc) {
            ctx->pc = 0x2A5BD0u;
            goto label_2a5bd0;
        }
    }
    ctx->pc = 0x2A5BC4u;
label_2a5bc4:
    // 0x2a5bc4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2a5bc4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a5bc8:
    // 0x2a5bc8: 0x8fa40280  lw          $a0, 0x280($sp)
    ctx->pc = 0x2a5bc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
label_2a5bcc:
    // 0x2a5bcc: 0xe48001d8  swc1        $f0, 0x1D8($a0)
    ctx->pc = 0x2a5bccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 472), bits); }
label_2a5bd0:
    // 0x2a5bd0: 0x8fa20280  lw          $v0, 0x280($sp)
    ctx->pc = 0x2a5bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
label_2a5bd4:
    // 0x2a5bd4: 0x8c420044  lw          $v0, 0x44($v0)
    ctx->pc = 0x2a5bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_2a5bd8:
    // 0x2a5bd8: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
label_2a5bdc:
    if (ctx->pc == 0x2A5BDCu) {
        ctx->pc = 0x2A5BE0u;
        goto label_2a5be0;
    }
    ctx->pc = 0x2A5BD8u;
    {
        const bool branch_taken_0x2a5bd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a5bd8) {
            ctx->pc = 0x2A5C4Cu;
            goto label_2a5c4c;
        }
    }
    ctx->pc = 0x2A5BE0u;
label_2a5be0:
    // 0x2a5be0: 0x93a2027b  lbu         $v0, 0x27B($sp)
    ctx->pc = 0x2a5be0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 635)));
label_2a5be4:
    // 0x2a5be4: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
label_2a5be8:
    if (ctx->pc == 0x2A5BE8u) {
        ctx->pc = 0x2A5BECu;
        goto label_2a5bec;
    }
    ctx->pc = 0x2A5BE4u;
    {
        const bool branch_taken_0x2a5be4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a5be4) {
            ctx->pc = 0x2A5C4Cu;
            goto label_2a5c4c;
        }
    }
    ctx->pc = 0x2A5BECu;
label_2a5bec:
    // 0x2a5bec: 0x8fa20280  lw          $v0, 0x280($sp)
    ctx->pc = 0x2a5becu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
label_2a5bf0:
    // 0x2a5bf0: 0x8c440044  lw          $a0, 0x44($v0)
    ctx->pc = 0x2a5bf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_2a5bf4:
    // 0x2a5bf4: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x2a5bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_2a5bf8:
    // 0x2a5bf8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2a5bf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a5bfc:
    // 0x2a5bfc: 0xc085538  jal         func_2154E0
label_2a5c00:
    if (ctx->pc == 0x2A5C00u) {
        ctx->pc = 0x2A5C04u;
        goto label_2a5c04;
    }
    ctx->pc = 0x2A5BFCu;
    SET_GPR_U32(ctx, 31, 0x2A5C04u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2A5BFCu, 0x2A5C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5C04u;
label_2a5c04:
    // 0x2a5c04: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a5c04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a5c08:
    // 0x2a5c08: 0xafa40234  sw          $a0, 0x234($sp)
    ctx->pc = 0x2a5c08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 564), GPR_U32(ctx, 4));
label_2a5c0c:
    // 0x2a5c0c: 0x8fa20234  lw          $v0, 0x234($sp)
    ctx->pc = 0x2a5c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 564)));
label_2a5c10:
    // 0x2a5c10: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a5c10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a5c14:
    // 0x2a5c14: 0xc0976f0  jal         func_25DBC0
label_2a5c18:
    if (ctx->pc == 0x2A5C18u) {
        ctx->pc = 0x2A5C1Cu;
        goto label_2a5c1c;
    }
    ctx->pc = 0x2A5C14u;
    SET_GPR_U32(ctx, 31, 0x2A5C1Cu);
    ctx->pc = 0x25DBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25DBC0u, 0x2A5C14u, 0x2A5C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5C1Cu;
label_2a5c1c:
    // 0x2a5c1c: 0xafa20230  sw          $v0, 0x230($sp)
    ctx->pc = 0x2a5c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 560), GPR_U32(ctx, 2));
label_2a5c20:
    // 0x2a5c20: 0x8fa40230  lw          $a0, 0x230($sp)
    ctx->pc = 0x2a5c20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 560)));
label_2a5c24:
    // 0x2a5c24: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x2a5c24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_2a5c28:
    // 0x2a5c28: 0x10820005  beq         $a0, $v0, . + 4 + (0x5 << 2)
label_2a5c2c:
    if (ctx->pc == 0x2A5C2Cu) {
        ctx->pc = 0x2A5C30u;
        goto label_2a5c30;
    }
    ctx->pc = 0x2A5C28u;
    {
        const bool branch_taken_0x2a5c28 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x2a5c28) {
            ctx->pc = 0x2A5C40u;
            goto label_2a5c40;
        }
    }
    ctx->pc = 0x2A5C30u;
label_2a5c30:
    // 0x2a5c30: 0x8fa50230  lw          $a1, 0x230($sp)
    ctx->pc = 0x2a5c30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 560)));
label_2a5c34:
    // 0x2a5c34: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x2a5c34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_2a5c38:
    // 0x2a5c38: 0x14a20004  bne         $a1, $v0, . + 4 + (0x4 << 2)
label_2a5c3c:
    if (ctx->pc == 0x2A5C3Cu) {
        ctx->pc = 0x2A5C40u;
        goto label_2a5c40;
    }
    ctx->pc = 0x2A5C38u;
    {
        const bool branch_taken_0x2a5c38 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x2a5c38) {
            ctx->pc = 0x2A5C4Cu;
            goto label_2a5c4c;
        }
    }
    ctx->pc = 0x2A5C40u;
label_2a5c40:
    // 0x2a5c40: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2a5c40u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a5c44:
    // 0x2a5c44: 0x8fa40280  lw          $a0, 0x280($sp)
    ctx->pc = 0x2a5c44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
label_2a5c48:
    // 0x2a5c48: 0xe48001d8  swc1        $f0, 0x1D8($a0)
    ctx->pc = 0x2a5c48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 472), bits); }
label_2a5c4c:
    // 0x2a5c4c: 0x8fa20280  lw          $v0, 0x280($sp)
    ctx->pc = 0x2a5c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
label_2a5c50:
    // 0x2a5c50: 0x8fa30280  lw          $v1, 0x280($sp)
    ctx->pc = 0x2a5c50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
label_2a5c54:
    // 0x2a5c54: 0x7fa300f0  sq          $v1, 0xF0($sp)
    ctx->pc = 0x2a5c54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 3));
label_2a5c58:
    // 0x2a5c58: 0x8fa30280  lw          $v1, 0x280($sp)
    ctx->pc = 0x2a5c58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
label_2a5c5c:
    // 0x2a5c5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a5c5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2a5c60:
    // 0x2a5c60: 0x24420055  addiu       $v0, $v0, 0x55
    ctx->pc = 0x2a5c60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 85));
label_2a5c64:
    // 0x2a5c64: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2a5c64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a5c68:
    // 0x2a5c68: 0x7ba200f0  lq          $v0, 0xF0($sp)
    ctx->pc = 0x2a5c68u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_2a5c6c:
    // 0x2a5c6c: 0xc44c01d8  lwc1        $f12, 0x1D8($v0)
    ctx->pc = 0x2a5c6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2a5c70:
    // 0x2a5c70: 0x906601a0  lbu         $a2, 0x1A0($v1)
    ctx->pc = 0x2a5c70u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 416)));
label_2a5c74:
    // 0x2a5c74: 0xc1217cc  jal         func_485F30
label_2a5c78:
    if (ctx->pc == 0x2A5C78u) {
        ctx->pc = 0x2A5C7Cu;
        goto label_2a5c7c;
    }
    ctx->pc = 0x2A5C74u;
    SET_GPR_U32(ctx, 31, 0x2A5C7Cu);
    ctx->pc = 0x485F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x485F30u, 0x2A5C74u, 0x2A5C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5C7Cu;
label_2a5c7c:
    // 0x2a5c7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a5c7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2a5c80:
    // 0x2a5c80: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2a5c80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a5c84:
    // 0x2a5c84: 0xc121904  jal         func_486410
label_2a5c88:
    if (ctx->pc == 0x2A5C88u) {
        ctx->pc = 0x2A5C8Cu;
        goto label_2a5c8c;
    }
    ctx->pc = 0x2A5C84u;
    SET_GPR_U32(ctx, 31, 0x2A5C8Cu);
    ctx->pc = 0x486410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x486410u, 0x2A5C84u, 0x2A5C8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5C8Cu;
label_2a5c8c:
    // 0x2a5c8c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a5c8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a5c90:
    // 0x2a5c90: 0x8fa20280  lw          $v0, 0x280($sp)
    ctx->pc = 0x2a5c90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
label_2a5c94:
    // 0x2a5c94: 0x8c4301b0  lw          $v1, 0x1B0($v0)
    ctx->pc = 0x2a5c94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 432)));
label_2a5c98:
    // 0x2a5c98: 0x100300bb  beq         $zero, $v1, . + 4 + (0xBB << 2)
label_2a5c9c:
    if (ctx->pc == 0x2A5C9Cu) {
        ctx->pc = 0x2A5CA0u;
        goto label_2a5ca0;
    }
    ctx->pc = 0x2A5C98u;
    {
        const bool branch_taken_0x2a5c98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 3));
        if (branch_taken_0x2a5c98) {
            ctx->pc = 0x2A5F88u;
            goto label_2a5f88;
        }
    }
    ctx->pc = 0x2A5CA0u;
label_2a5ca0:
    // 0x2a5ca0: 0x8fa40280  lw          $a0, 0x280($sp)
    ctx->pc = 0x2a5ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
label_2a5ca4:
    // 0x2a5ca4: 0xc09d27c  jal         func_2749F0
label_2a5ca8:
    if (ctx->pc == 0x2A5CA8u) {
        ctx->pc = 0x2A5CACu;
        goto label_2a5cac;
    }
    ctx->pc = 0x2A5CA4u;
    SET_GPR_U32(ctx, 31, 0x2A5CACu);
    ctx->pc = 0x2749F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2749F0u, 0x2A5CA4u, 0x2A5CACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5CACu;
label_2a5cac:
    // 0x2a5cac: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2a5cacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a5cb0:
    // 0x2a5cb0: 0x10a000b5  beqz        $a1, . + 4 + (0xB5 << 2)
label_2a5cb4:
    if (ctx->pc == 0x2A5CB4u) {
        ctx->pc = 0x2A5CB8u;
        goto label_2a5cb8;
    }
    ctx->pc = 0x2A5CB0u;
    {
        const bool branch_taken_0x2a5cb0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a5cb0) {
            ctx->pc = 0x2A5F88u;
            goto label_2a5f88;
        }
    }
    ctx->pc = 0x2A5CB8u;
label_2a5cb8:
    // 0x2a5cb8: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x2a5cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_2a5cbc:
    // 0x2a5cbc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a5cbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a5cc0:
    // 0x2a5cc0: 0xc119b68  jal         func_466DA0
label_2a5cc4:
    if (ctx->pc == 0x2A5CC4u) {
        ctx->pc = 0x2A5CC8u;
        goto label_2a5cc8;
    }
    ctx->pc = 0x2A5CC0u;
    SET_GPR_U32(ctx, 31, 0x2A5CC8u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x2A5CC0u, 0x2A5CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5CC8u;
label_2a5cc8:
    // 0x2a5cc8: 0x7fa200e0  sq          $v0, 0xE0($sp)
    ctx->pc = 0x2a5cc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 2));
label_2a5ccc:
    // 0x2a5ccc: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x2a5cccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_2a5cd0:
    // 0x2a5cd0: 0x7ba500e0  lq          $a1, 0xE0($sp)
    ctx->pc = 0x2a5cd0u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_2a5cd4:
    // 0x2a5cd4: 0xc0400e0  jal         func_100380
label_2a5cd8:
    if (ctx->pc == 0x2A5CD8u) {
        ctx->pc = 0x2A5CDCu;
        goto label_2a5cdc;
    }
    ctx->pc = 0x2A5CD4u;
    SET_GPR_U32(ctx, 31, 0x2A5CDCu);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x2A5CD4u, 0x2A5CDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5CDCu;
label_2a5cdc:
    // 0x2a5cdc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a5cdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a5ce0:
    // 0x2a5ce0: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x2a5ce0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2a5ce4:
    // 0x2a5ce4: 0x13c00006  beqz        $fp, . + 4 + (0x6 << 2)
label_2a5ce8:
    if (ctx->pc == 0x2A5CE8u) {
        ctx->pc = 0x2A5CECu;
        goto label_2a5cec;
    }
    ctx->pc = 0x2A5CE4u;
    {
        const bool branch_taken_0x2a5ce4 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a5ce4) {
            ctx->pc = 0x2A5D00u;
            goto label_2a5d00;
        }
    }
    ctx->pc = 0x2A5CECu;
label_2a5cec:
    // 0x2a5cec: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x2a5cecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_2a5cf0:
    // 0x2a5cf0: 0xc088560  jal         func_221580
label_2a5cf4:
    if (ctx->pc == 0x2A5CF4u) {
        ctx->pc = 0x2A5CF8u;
        goto label_2a5cf8;
    }
    ctx->pc = 0x2A5CF0u;
    SET_GPR_U32(ctx, 31, 0x2A5CF8u);
    ctx->pc = 0x221580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221580u, 0x2A5CF0u, 0x2A5CF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5CF8u;
label_2a5cf8:
    // 0x2a5cf8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2a5cf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a5cfc:
    // 0x2a5cfc: 0xa0f02d  daddu       $fp, $a1, $zero
    ctx->pc = 0x2a5cfcu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2a5d00:
    // 0x2a5d00: 0x3c0982d  daddu       $s3, $fp, $zero
    ctx->pc = 0x2a5d00u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_2a5d04:
    // 0x2a5d04: 0x8fa20280  lw          $v0, 0x280($sp)
    ctx->pc = 0x2a5d04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
label_2a5d08:
    // 0x2a5d08: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2a5d08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2a5d0c:
    // 0x2a5d0c: 0x2405052f  addiu       $a1, $zero, 0x52F
    ctx->pc = 0x2a5d0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1327));
label_2a5d10:
    // 0x2a5d10: 0xc44c01d8  lwc1        $f12, 0x1D8($v0)
    ctx->pc = 0x2a5d10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2a5d14:
    // 0x2a5d14: 0xc041bc4  jal         func_106F10
label_2a5d18:
    if (ctx->pc == 0x2A5D18u) {
        ctx->pc = 0x2A5D1Cu;
        goto label_2a5d1c;
    }
    ctx->pc = 0x2A5D14u;
    SET_GPR_U32(ctx, 31, 0x2A5D1Cu);
    ctx->pc = 0x106F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106F10u, 0x2A5D14u, 0x2A5D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5D1Cu;
label_2a5d1c:
    // 0x2a5d1c: 0x8fa30280  lw          $v1, 0x280($sp)
    ctx->pc = 0x2a5d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
label_2a5d20:
    // 0x2a5d20: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2a5d20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2a5d24:
    // 0x2a5d24: 0x24160531  addiu       $s6, $zero, 0x531
    ctx->pc = 0x2a5d24u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1329));
label_2a5d28:
    // 0x2a5d28: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x2a5d28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2a5d2c:
    // 0x2a5d2c: 0xc46c0120  lwc1        $f12, 0x120($v1)
    ctx->pc = 0x2a5d2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2a5d30:
    // 0x2a5d30: 0xc041bc4  jal         func_106F10
label_2a5d34:
    if (ctx->pc == 0x2A5D34u) {
        ctx->pc = 0x2A5D38u;
        goto label_2a5d38;
    }
    ctx->pc = 0x2A5D30u;
    SET_GPR_U32(ctx, 31, 0x2A5D38u);
    ctx->pc = 0x106F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106F10u, 0x2A5D30u, 0x2A5D38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5D38u;
label_2a5d38:
    // 0x2a5d38: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a5d38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a5d3c:
    // 0x2a5d3c: 0x8fa20280  lw          $v0, 0x280($sp)
    ctx->pc = 0x2a5d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
label_2a5d40:
    // 0x2a5d40: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2a5d40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2a5d44:
    // 0x2a5d44: 0x24050530  addiu       $a1, $zero, 0x530
    ctx->pc = 0x2a5d44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1328));
label_2a5d48:
    // 0x2a5d48: 0x24460055  addiu       $a2, $v0, 0x55
    ctx->pc = 0x2a5d48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 85));
label_2a5d4c:
    // 0x2a5d4c: 0xc0433dc  jal         func_10CF70
label_2a5d50:
    if (ctx->pc == 0x2A5D50u) {
        ctx->pc = 0x2A5D54u;
        goto label_2a5d54;
    }
    ctx->pc = 0x2A5D4Cu;
    SET_GPR_U32(ctx, 31, 0x2A5D54u);
    ctx->pc = 0x10CF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CF70u, 0x2A5D4Cu, 0x2A5D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5D54u;
label_2a5d54:
    // 0x2a5d54: 0x8fa30280  lw          $v1, 0x280($sp)
    ctx->pc = 0x2a5d54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
label_2a5d58:
    // 0x2a5d58: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2a5d58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2a5d5c:
    // 0x2a5d5c: 0x240204b2  addiu       $v0, $zero, 0x4B2
    ctx->pc = 0x2a5d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1202));
label_2a5d60:
    // 0x2a5d60: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2a5d60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a5d64:
    // 0x2a5d64: 0x906601a0  lbu         $a2, 0x1A0($v1)
    ctx->pc = 0x2a5d64u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 416)));
label_2a5d68:
    // 0x2a5d68: 0xc041b54  jal         func_106D50
label_2a5d6c:
    if (ctx->pc == 0x2A5D6Cu) {
        ctx->pc = 0x2A5D70u;
        goto label_2a5d70;
    }
    ctx->pc = 0x2A5D68u;
    SET_GPR_U32(ctx, 31, 0x2A5D70u);
    ctx->pc = 0x106D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106D50u, 0x2A5D68u, 0x2A5D70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5D70u;
label_2a5d70:
    // 0x2a5d70: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2a5d70u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a5d74:
    // 0x2a5d74: 0x8fa50280  lw          $a1, 0x280($sp)
    ctx->pc = 0x2a5d74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
label_2a5d78:
    // 0x2a5d78: 0x90a2011c  lbu         $v0, 0x11C($a1)
    ctx->pc = 0x2a5d78u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 284)));
label_2a5d7c:
    // 0x2a5d7c: 0x10400033  beqz        $v0, . + 4 + (0x33 << 2)
label_2a5d80:
    if (ctx->pc == 0x2A5D80u) {
        ctx->pc = 0x2A5D84u;
        goto label_2a5d84;
    }
    ctx->pc = 0x2A5D7Cu;
    {
        const bool branch_taken_0x2a5d7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a5d7c) {
            ctx->pc = 0x2A5E4Cu;
            goto label_2a5e4c;
        }
    }
    ctx->pc = 0x2A5D84u;
label_2a5d84:
    // 0x2a5d84: 0x8fa30280  lw          $v1, 0x280($sp)
    ctx->pc = 0x2a5d84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
label_2a5d88:
    // 0x2a5d88: 0xc4610120  lwc1        $f1, 0x120($v1)
    ctx->pc = 0x2a5d88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2a5d8c:
    // 0x2a5d8c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2a5d8cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a5d90:
    // 0x2a5d90: 0x0  nop
    ctx->pc = 0x2a5d90u;
    // NOP
label_2a5d94:
    // 0x2a5d94: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2a5d94u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2a5d98:
    // 0x2a5d98: 0x4501002c  bc1t        . + 4 + (0x2C << 2)
label_2a5d9c:
    if (ctx->pc == 0x2A5D9Cu) {
        ctx->pc = 0x2A5DA0u;
        goto label_2a5da0;
    }
    ctx->pc = 0x2A5D98u;
    {
        const bool branch_taken_0x2a5d98 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a5d98) {
            ctx->pc = 0x2A5E4Cu;
            goto label_2a5e4c;
        }
    }
    ctx->pc = 0x2A5DA0u;
label_2a5da0:
    // 0x2a5da0: 0x8fa50280  lw          $a1, 0x280($sp)
    ctx->pc = 0x2a5da0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
label_2a5da4:
    // 0x2a5da4: 0x8ca50030  lw          $a1, 0x30($a1)
    ctx->pc = 0x2a5da4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
label_2a5da8:
    // 0x2a5da8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2a5da8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2a5dac:
    // 0x2a5dac: 0x24020537  addiu       $v0, $zero, 0x537
    ctx->pc = 0x2a5dacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1335));
label_2a5db0:
    // 0x2a5db0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2a5db0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a5db4:
    // 0x2a5db4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2a5db4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a5db8:
    // 0x2a5db8: 0xc04146c  jal         func_1051B0
label_2a5dbc:
    if (ctx->pc == 0x2A5DBCu) {
        ctx->pc = 0x2A5DC0u;
        goto label_2a5dc0;
    }
    ctx->pc = 0x2A5DB8u;
    SET_GPR_U32(ctx, 31, 0x2A5DC0u);
    ctx->pc = 0x1051B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051B0u, 0x2A5DB8u, 0x2A5DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5DC0u;
label_2a5dc0:
    // 0x2a5dc0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2a5dc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2a5dc4:
    // 0x2a5dc4: 0x14400021  bnez        $v0, . + 4 + (0x21 << 2)
label_2a5dc8:
    if (ctx->pc == 0x2A5DC8u) {
        ctx->pc = 0x2A5DCCu;
        goto label_2a5dcc;
    }
    ctx->pc = 0x2A5DC4u;
    {
        const bool branch_taken_0x2a5dc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a5dc4) {
            ctx->pc = 0x2A5E4Cu;
            goto label_2a5e4c;
        }
    }
    ctx->pc = 0x2A5DCCu;
label_2a5dcc:
    // 0x2a5dcc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a5dccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2a5dd0:
    // 0x2a5dd0: 0xc1218cc  jal         func_486330
label_2a5dd4:
    if (ctx->pc == 0x2A5DD4u) {
        ctx->pc = 0x2A5DD8u;
        goto label_2a5dd8;
    }
    ctx->pc = 0x2A5DD0u;
    SET_GPR_U32(ctx, 31, 0x2A5DD8u);
    ctx->pc = 0x486330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x486330u, 0x2A5DD0u, 0x2A5DD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5DD8u;
label_2a5dd8:
    // 0x2a5dd8: 0xe7a0022c  swc1        $f0, 0x22C($sp)
    ctx->pc = 0x2a5dd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 556), bits); }
label_2a5ddc:
    // 0x2a5ddc: 0x8fb50280  lw          $s5, 0x280($sp)
    ctx->pc = 0x2a5ddcu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
label_2a5de0:
    // 0x2a5de0: 0xc6a00120  lwc1        $f0, 0x120($s5)
    ctx->pc = 0x2a5de0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a5de4:
    // 0x2a5de4: 0xe7a00228  swc1        $f0, 0x228($sp)
    ctx->pc = 0x2a5de4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 552), bits); }
label_2a5de8:
    // 0x2a5de8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2a5de8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a5dec:
    // 0x2a5dec: 0x0  nop
    ctx->pc = 0x2a5decu;
    // NOP
label_2a5df0:
    // 0x2a5df0: 0xe7a00224  swc1        $f0, 0x224($sp)
    ctx->pc = 0x2a5df0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 548), bits); }
label_2a5df4:
    // 0x2a5df4: 0x10000009  b           . + 4 + (0x9 << 2)
label_2a5df8:
    if (ctx->pc == 0x2A5DF8u) {
        ctx->pc = 0x2A5DFCu;
        goto label_2a5dfc;
    }
    ctx->pc = 0x2A5DF4u;
    {
        const bool branch_taken_0x2a5df4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a5df4) {
            ctx->pc = 0x2A5E1Cu;
            goto label_2a5e1c;
        }
    }
    ctx->pc = 0x2A5DFCu;
label_2a5dfc:
    // 0x2a5dfc: 0xc7a10224  lwc1        $f1, 0x224($sp)
    ctx->pc = 0x2a5dfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 548)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2a5e00:
    // 0x2a5e00: 0xc7a0022c  lwc1        $f0, 0x22C($sp)
    ctx->pc = 0x2a5e00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a5e04:
    // 0x2a5e04: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2a5e04u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2a5e08:
    // 0x2a5e08: 0xe7a00224  swc1        $f0, 0x224($sp)
    ctx->pc = 0x2a5e08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 548), bits); }
label_2a5e0c:
    // 0x2a5e0c: 0xc7a10228  lwc1        $f1, 0x228($sp)
    ctx->pc = 0x2a5e0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2a5e10:
    // 0x2a5e10: 0xc7a0022c  lwc1        $f0, 0x22C($sp)
    ctx->pc = 0x2a5e10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a5e14:
    // 0x2a5e14: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2a5e14u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2a5e18:
    // 0x2a5e18: 0xe7a00228  swc1        $f0, 0x228($sp)
    ctx->pc = 0x2a5e18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 552), bits); }
label_2a5e1c:
    // 0x2a5e1c: 0xc7a10228  lwc1        $f1, 0x228($sp)
    ctx->pc = 0x2a5e1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2a5e20:
    // 0x2a5e20: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2a5e20u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a5e24:
    // 0x2a5e24: 0x0  nop
    ctx->pc = 0x2a5e24u;
    // NOP
label_2a5e28:
    // 0x2a5e28: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2a5e28u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2a5e2c:
    // 0x2a5e2c: 0x4500fff3  bc1f        . + 4 + (-0xD << 2)
label_2a5e30:
    if (ctx->pc == 0x2A5E30u) {
        ctx->pc = 0x2A5E34u;
        goto label_2a5e34;
    }
    ctx->pc = 0x2A5E2Cu;
    {
        const bool branch_taken_0x2a5e2c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a5e2c) {
            ctx->pc = 0x2A5DFCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a5dfc;
        }
    }
    ctx->pc = 0x2A5E34u;
label_2a5e34:
    // 0x2a5e34: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2a5e34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2a5e38:
    // 0x2a5e38: 0x24050531  addiu       $a1, $zero, 0x531
    ctx->pc = 0x2a5e38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1329));
label_2a5e3c:
    // 0x2a5e3c: 0xc7ac0224  lwc1        $f12, 0x224($sp)
    ctx->pc = 0x2a5e3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 548)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2a5e40:
    // 0x2a5e40: 0xc041bc4  jal         func_106F10
label_2a5e44:
    if (ctx->pc == 0x2A5E44u) {
        ctx->pc = 0x2A5E48u;
        goto label_2a5e48;
    }
    ctx->pc = 0x2A5E40u;
    SET_GPR_U32(ctx, 31, 0x2A5E48u);
    ctx->pc = 0x106F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106F10u, 0x2A5E40u, 0x2A5E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5E48u;
label_2a5e48:
    // 0x2a5e48: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a5e48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a5e4c:
    // 0x2a5e4c: 0x8fa50280  lw          $a1, 0x280($sp)
    ctx->pc = 0x2a5e4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
label_2a5e50:
    // 0x2a5e50: 0x8ca20030  lw          $v0, 0x30($a1)
    ctx->pc = 0x2a5e50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
label_2a5e54:
    // 0x2a5e54: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a5e54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a5e58:
    // 0x2a5e58: 0x24020483  addiu       $v0, $zero, 0x483
    ctx->pc = 0x2a5e58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1155));
label_2a5e5c:
    // 0x2a5e5c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2a5e5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a5e60:
    // 0x2a5e60: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2a5e60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a5e64:
    // 0x2a5e64: 0xc04146c  jal         func_1051B0
label_2a5e68:
    if (ctx->pc == 0x2A5E68u) {
        ctx->pc = 0x2A5E6Cu;
        goto label_2a5e6c;
    }
    ctx->pc = 0x2A5E64u;
    SET_GPR_U32(ctx, 31, 0x2A5E6Cu);
    ctx->pc = 0x1051B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051B0u, 0x2A5E64u, 0x2A5E6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5E6Cu;
label_2a5e6c:
    // 0x2a5e6c: 0xa3a20279  sb          $v0, 0x279($sp)
    ctx->pc = 0x2a5e6cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 633), (uint8_t)GPR_U32(ctx, 2));
label_2a5e70:
    // 0x2a5e70: 0x8fa40280  lw          $a0, 0x280($sp)
    ctx->pc = 0x2a5e70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
label_2a5e74:
    // 0x2a5e74: 0xc09d27c  jal         func_2749F0
label_2a5e78:
    if (ctx->pc == 0x2A5E78u) {
        ctx->pc = 0x2A5E7Cu;
        goto label_2a5e7c;
    }
    ctx->pc = 0x2A5E74u;
    SET_GPR_U32(ctx, 31, 0x2A5E7Cu);
    ctx->pc = 0x2749F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2749F0u, 0x2A5E74u, 0x2A5E7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5E7Cu;
label_2a5e7c:
    // 0x2a5e7c: 0x7fa200d0  sq          $v0, 0xD0($sp)
    ctx->pc = 0x2a5e7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 2));
label_2a5e80:
    // 0x2a5e80: 0x8fa30280  lw          $v1, 0x280($sp)
    ctx->pc = 0x2a5e80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
label_2a5e84:
    // 0x2a5e84: 0x8c640030  lw          $a0, 0x30($v1)
    ctx->pc = 0x2a5e84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
label_2a5e88:
    // 0x2a5e88: 0xc09d0d0  jal         func_274340
label_2a5e8c:
    if (ctx->pc == 0x2A5E8Cu) {
        ctx->pc = 0x2A5E90u;
        goto label_2a5e90;
    }
    ctx->pc = 0x2A5E88u;
    SET_GPR_U32(ctx, 31, 0x2A5E90u);
    ctx->pc = 0x274340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274340u, 0x2A5E88u, 0x2A5E90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5E90u;
label_2a5e90:
    // 0x2a5e90: 0x7ba400d0  lq          $a0, 0xD0($sp)
    ctx->pc = 0x2a5e90u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_2a5e94:
    // 0x2a5e94: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x2a5e94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_2a5e98:
    // 0x2a5e98: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2a5e98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a5e9c:
    // 0x2a5e9c: 0x93a70279  lbu         $a3, 0x279($sp)
    ctx->pc = 0x2a5e9cu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 633)));
label_2a5ea0:
    // 0x2a5ea0: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x2a5ea0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2a5ea4:
    // 0x2a5ea4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2a5ea4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2a5ea8:
    // 0x2a5ea8: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x2a5ea8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_2a5eac:
    // 0x2a5eac: 0x320f809  jalr        $t9
label_2a5eb0:
    if (ctx->pc == 0x2A5EB0u) {
        ctx->pc = 0x2A5EB4u;
        goto label_2a5eb4;
    }
    ctx->pc = 0x2A5EACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2A5EB4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A5EACu, 0x2A5EB4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A5EB4u;
label_2a5eb4:
    // 0x2a5eb4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2a5eb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a5eb8:
    // 0x2a5eb8: 0x8fa60280  lw          $a2, 0x280($sp)
    ctx->pc = 0x2a5eb8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
label_2a5ebc:
    // 0x2a5ebc: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x2a5ebcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2a5ec0:
    // 0x2a5ec0: 0xc09d27c  jal         func_2749F0
label_2a5ec4:
    if (ctx->pc == 0x2A5EC4u) {
        ctx->pc = 0x2A5EC8u;
        goto label_2a5ec8;
    }
    ctx->pc = 0x2A5EC0u;
    SET_GPR_U32(ctx, 31, 0x2A5EC8u);
    ctx->pc = 0x2749F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2749F0u, 0x2A5EC0u, 0x2A5EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5EC8u;
label_2a5ec8:
    // 0x2a5ec8: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x2a5ec8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
label_2a5ecc:
    // 0x2a5ecc: 0x8fa40280  lw          $a0, 0x280($sp)
    ctx->pc = 0x2a5eccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
label_2a5ed0:
    // 0x2a5ed0: 0x8c850030  lw          $a1, 0x30($a0)
    ctx->pc = 0x2a5ed0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_2a5ed4:
    // 0x2a5ed4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2a5ed4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2a5ed8:
    // 0x2a5ed8: 0xc09d0d0  jal         func_274340
label_2a5edc:
    if (ctx->pc == 0x2A5EDCu) {
        ctx->pc = 0x2A5EE0u;
        goto label_2a5ee0;
    }
    ctx->pc = 0x2A5ED8u;
    SET_GPR_U32(ctx, 31, 0x2A5EE0u);
    ctx->pc = 0x274340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274340u, 0x2A5ED8u, 0x2A5EE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5EE0u;
label_2a5ee0:
    // 0x2a5ee0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2a5ee0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a5ee4:
    // 0x2a5ee4: 0x7ba400c0  lq          $a0, 0xC0($sp)
    ctx->pc = 0x2a5ee4u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_2a5ee8:
    // 0x2a5ee8: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x2a5ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_2a5eec:
    // 0x2a5eec: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2a5eecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a5ef0:
    // 0x2a5ef0: 0x93a70279  lbu         $a3, 0x279($sp)
    ctx->pc = 0x2a5ef0u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 633)));
label_2a5ef4:
    // 0x2a5ef4: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x2a5ef4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2a5ef8:
    // 0x2a5ef8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2a5ef8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2a5efc:
    // 0x2a5efc: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x2a5efcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_2a5f00:
    // 0x2a5f00: 0x320f809  jalr        $t9
label_2a5f04:
    if (ctx->pc == 0x2A5F04u) {
        ctx->pc = 0x2A5F08u;
        goto label_2a5f08;
    }
    ctx->pc = 0x2A5F00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2A5F08u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A5F00u, 0x2A5F08u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A5F08u;
label_2a5f08:
    // 0x2a5f08: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2a5f08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a5f0c:
    // 0x2a5f0c: 0x8fa20280  lw          $v0, 0x280($sp)
    ctx->pc = 0x2a5f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
label_2a5f10:
    // 0x2a5f10: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a5f10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a5f14:
    // 0x2a5f14: 0xc09d27c  jal         func_2749F0
label_2a5f18:
    if (ctx->pc == 0x2A5F18u) {
        ctx->pc = 0x2A5F1Cu;
        goto label_2a5f1c;
    }
    ctx->pc = 0x2A5F14u;
    SET_GPR_U32(ctx, 31, 0x2A5F1Cu);
    ctx->pc = 0x2749F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2749F0u, 0x2A5F14u, 0x2A5F1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5F1Cu;
label_2a5f1c:
    // 0x2a5f1c: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x2a5f1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
label_2a5f20:
    // 0x2a5f20: 0x8fa50280  lw          $a1, 0x280($sp)
    ctx->pc = 0x2a5f20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
label_2a5f24:
    // 0x2a5f24: 0x8ca20030  lw          $v0, 0x30($a1)
    ctx->pc = 0x2a5f24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
label_2a5f28:
    // 0x2a5f28: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a5f28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a5f2c:
    // 0x2a5f2c: 0xc09d0d0  jal         func_274340
label_2a5f30:
    if (ctx->pc == 0x2A5F30u) {
        ctx->pc = 0x2A5F34u;
        goto label_2a5f34;
    }
    ctx->pc = 0x2A5F2Cu;
    SET_GPR_U32(ctx, 31, 0x2A5F34u);
    ctx->pc = 0x274340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274340u, 0x2A5F2Cu, 0x2A5F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5F34u;
label_2a5f34:
    // 0x2a5f34: 0x7ba400b0  lq          $a0, 0xB0($sp)
    ctx->pc = 0x2a5f34u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_2a5f38:
    // 0x2a5f38: 0x24050025  addiu       $a1, $zero, 0x25
    ctx->pc = 0x2a5f38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
label_2a5f3c:
    // 0x2a5f3c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2a5f3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a5f40:
    // 0x2a5f40: 0x93a70279  lbu         $a3, 0x279($sp)
    ctx->pc = 0x2a5f40u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 633)));
label_2a5f44:
    // 0x2a5f44: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x2a5f44u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2a5f48:
    // 0x2a5f48: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2a5f48u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2a5f4c:
    // 0x2a5f4c: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x2a5f4cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_2a5f50:
    // 0x2a5f50: 0x320f809  jalr        $t9
label_2a5f54:
    if (ctx->pc == 0x2A5F54u) {
        ctx->pc = 0x2A5F58u;
        goto label_2a5f58;
    }
    ctx->pc = 0x2A5F50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2A5F58u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A5F50u, 0x2A5F58u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A5F58u;
label_2a5f58:
    // 0x2a5f58: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2a5f58u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a5f5c:
    // 0x2a5f5c: 0x1260000a  beqz        $s3, . + 4 + (0xA << 2)
label_2a5f60:
    if (ctx->pc == 0x2A5F60u) {
        ctx->pc = 0x2A5F64u;
        goto label_2a5f64;
    }
    ctx->pc = 0x2A5F5Cu;
    {
        const bool branch_taken_0x2a5f5c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a5f5c) {
            ctx->pc = 0x2A5F88u;
            goto label_2a5f88;
        }
    }
    ctx->pc = 0x2A5F64u;
label_2a5f64:
    // 0x2a5f64: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2a5f64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2a5f68:
    // 0x2a5f68: 0xc0644f8  jal         func_1913E0
label_2a5f6c:
    if (ctx->pc == 0x2A5F6Cu) {
        ctx->pc = 0x2A5F70u;
        goto label_2a5f70;
    }
    ctx->pc = 0x2A5F68u;
    SET_GPR_U32(ctx, 31, 0x2A5F70u);
    ctx->pc = 0x1913E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1913E0u, 0x2A5F68u, 0x2A5F70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5F70u;
label_2a5f70:
    // 0x2a5f70: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a5f70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a5f74:
    // 0x2a5f74: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2a5f74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2a5f78:
    // 0x2a5f78: 0xc119c5c  jal         func_467170
label_2a5f7c:
    if (ctx->pc == 0x2A5F7Cu) {
        ctx->pc = 0x2A5F80u;
        goto label_2a5f80;
    }
    ctx->pc = 0x2A5F78u;
    SET_GPR_U32(ctx, 31, 0x2A5F80u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x2A5F78u, 0x2A5F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5F80u;
label_2a5f80:
    // 0x2a5f80: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2a5f80u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a5f84:
    // 0x2a5f84: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2a5f84u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a5f88:
    // 0x2a5f88: 0x8fa30280  lw          $v1, 0x280($sp)
    ctx->pc = 0x2a5f88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
label_2a5f8c:
    // 0x2a5f8c: 0x90630188  lbu         $v1, 0x188($v1)
    ctx->pc = 0x2a5f8cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 392)));
label_2a5f90:
    // 0x2a5f90: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_2a5f94:
    if (ctx->pc == 0x2A5F94u) {
        ctx->pc = 0x2A5F98u;
        goto label_2a5f98;
    }
    ctx->pc = 0x2A5F90u;
    {
        const bool branch_taken_0x2a5f90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a5f90) {
            ctx->pc = 0x2A5FBCu;
            goto label_2a5fbc;
        }
    }
    ctx->pc = 0x2A5F98u;
label_2a5f98:
    // 0x2a5f98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a5f98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2a5f9c:
    // 0x2a5f9c: 0xc1218cc  jal         func_486330
label_2a5fa0:
    if (ctx->pc == 0x2A5FA0u) {
        ctx->pc = 0x2A5FA4u;
        goto label_2a5fa4;
    }
    ctx->pc = 0x2A5F9Cu;
    SET_GPR_U32(ctx, 31, 0x2A5FA4u);
    ctx->pc = 0x486330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x486330u, 0x2A5F9Cu, 0x2A5FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5FA4u;
label_2a5fa4:
    // 0x2a5fa4: 0xc7818208  lwc1        $f1, -0x7DF8($gp)
    ctx->pc = 0x2a5fa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935048)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2a5fa8:
    // 0x2a5fa8: 0x46010301  sub.s       $f12, $f0, $f1
    ctx->pc = 0x2a5fa8u;
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_2a5fac:
    // 0x2a5fac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a5facu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2a5fb0:
    // 0x2a5fb0: 0xc121b88  jal         func_486E20
label_2a5fb4:
    if (ctx->pc == 0x2A5FB4u) {
        ctx->pc = 0x2A5FB8u;
        goto label_2a5fb8;
    }
    ctx->pc = 0x2A5FB0u;
    SET_GPR_U32(ctx, 31, 0x2A5FB8u);
    ctx->pc = 0x486E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x486E20u, 0x2A5FB0u, 0x2A5FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5FB8u;
label_2a5fb8:
    // 0x2a5fb8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2a5fb8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a5fbc:
    // 0x2a5fbc: 0x8fa30280  lw          $v1, 0x280($sp)
    ctx->pc = 0x2a5fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
label_2a5fc0:
    // 0x2a5fc0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2a5fc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2a5fc4:
    // 0x2a5fc4: 0x906501a0  lbu         $a1, 0x1A0($v1)
    ctx->pc = 0x2a5fc4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 416)));
label_2a5fc8:
    // 0x2a5fc8: 0xc096ed0  jal         func_25BB40
label_2a5fcc:
    if (ctx->pc == 0x2A5FCCu) {
        ctx->pc = 0x2A5FD0u;
        goto label_2a5fd0;
    }
    ctx->pc = 0x2A5FC8u;
    SET_GPR_U32(ctx, 31, 0x2A5FD0u);
    ctx->pc = 0x25BB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BB40u, 0x2A5FC8u, 0x2A5FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5FD0u;
label_2a5fd0:
    // 0x2a5fd0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2a5fd0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a5fd4:
    // 0x2a5fd4: 0x8fa30280  lw          $v1, 0x280($sp)
    ctx->pc = 0x2a5fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
label_2a5fd8:
    // 0x2a5fd8: 0x8c640030  lw          $a0, 0x30($v1)
    ctx->pc = 0x2a5fd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
label_2a5fdc:
    // 0x2a5fdc: 0x240504ae  addiu       $a1, $zero, 0x4AE
    ctx->pc = 0x2a5fdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1198));
label_2a5fe0:
    // 0x2a5fe0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2a5fe0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a5fe4:
    // 0x2a5fe4: 0xc040ab0  jal         func_102AC0
label_2a5fe8:
    if (ctx->pc == 0x2A5FE8u) {
        ctx->pc = 0x2A5FECu;
        goto label_2a5fec;
    }
    ctx->pc = 0x2A5FE4u;
    SET_GPR_U32(ctx, 31, 0x2A5FECu);
    ctx->pc = 0x102AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AC0u, 0x2A5FE4u, 0x2A5FECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5FECu;
label_2a5fec:
    // 0x2a5fec: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2a5fecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2a5ff0:
    // 0x2a5ff0: 0x1043001b  beq         $v0, $v1, . + 4 + (0x1B << 2)
label_2a5ff4:
    if (ctx->pc == 0x2A5FF4u) {
        ctx->pc = 0x2A5FF8u;
        goto label_2a5ff8;
    }
    ctx->pc = 0x2A5FF0u;
    {
        const bool branch_taken_0x2a5ff0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2a5ff0) {
            ctx->pc = 0x2A6060u;
            goto label_2a6060;
        }
    }
    ctx->pc = 0x2A5FF8u;
label_2a5ff8:
    // 0x2a5ff8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2a5ff8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a5ffc:
    // 0x2a5ffc: 0x10440009  beq         $v0, $a0, . + 4 + (0x9 << 2)
label_2a6000:
    if (ctx->pc == 0x2A6000u) {
        ctx->pc = 0x2A6004u;
        goto label_2a6004;
    }
    ctx->pc = 0x2A5FFCu;
    {
        const bool branch_taken_0x2a5ffc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x2a5ffc) {
            ctx->pc = 0x2A6024u;
            goto label_2a6024;
        }
    }
    ctx->pc = 0x2A6004u;
label_2a6004:
    // 0x2a6004: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2a6008:
    if (ctx->pc == 0x2A6008u) {
        ctx->pc = 0x2A600Cu;
        goto label_2a600c;
    }
    ctx->pc = 0x2A6004u;
    {
        const bool branch_taken_0x2a6004 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a6004) {
            ctx->pc = 0x2A6014u;
            goto label_2a6014;
        }
    }
    ctx->pc = 0x2A600Cu;
label_2a600c:
    // 0x2a600c: 0x10000016  b           . + 4 + (0x16 << 2)
label_2a6010:
    if (ctx->pc == 0x2A6010u) {
        ctx->pc = 0x2A6014u;
        goto label_2a6014;
    }
    ctx->pc = 0x2A600Cu;
    {
        const bool branch_taken_0x2a600c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a600c) {
            ctx->pc = 0x2A6068u;
            goto label_2a6068;
        }
    }
    ctx->pc = 0x2A6014u;
label_2a6014:
    // 0x2a6014: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2a6014u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a6018:
    // 0x2a6018: 0xafa50220  sw          $a1, 0x220($sp)
    ctx->pc = 0x2a6018u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 544), GPR_U32(ctx, 5));
label_2a601c:
    // 0x2a601c: 0x10000012  b           . + 4 + (0x12 << 2)
label_2a6020:
    if (ctx->pc == 0x2A6020u) {
        ctx->pc = 0x2A6024u;
        goto label_2a6024;
    }
    ctx->pc = 0x2A601Cu;
    {
        const bool branch_taken_0x2a601c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a601c) {
            ctx->pc = 0x2A6068u;
            goto label_2a6068;
        }
    }
    ctx->pc = 0x2A6024u;
label_2a6024:
    // 0x2a6024: 0x8fa6023c  lw          $a2, 0x23C($sp)
    ctx->pc = 0x2a6024u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 572)));
label_2a6028:
    // 0x2a6028: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2a6028u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a602c:
    // 0x2a602c: 0x14c70009  bne         $a2, $a3, . + 4 + (0x9 << 2)
label_2a6030:
    if (ctx->pc == 0x2A6030u) {
        ctx->pc = 0x2A6034u;
        goto label_2a6034;
    }
    ctx->pc = 0x2A602Cu;
    {
        const bool branch_taken_0x2a602c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 7));
        if (branch_taken_0x2a602c) {
            ctx->pc = 0x2A6054u;
            goto label_2a6054;
        }
    }
    ctx->pc = 0x2A6034u;
label_2a6034:
    // 0x2a6034: 0x8fa80280  lw          $t0, 0x280($sp)
    ctx->pc = 0x2a6034u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
label_2a6038:
    // 0x2a6038: 0x91020039  lbu         $v0, 0x39($t0)
    ctx->pc = 0x2a6038u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 57)));
label_2a603c:
    // 0x2a603c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2a6040:
    if (ctx->pc == 0x2A6040u) {
        ctx->pc = 0x2A6044u;
        goto label_2a6044;
    }
    ctx->pc = 0x2A603Cu;
    {
        const bool branch_taken_0x2a603c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a603c) {
            ctx->pc = 0x2A6054u;
            goto label_2a6054;
        }
    }
    ctx->pc = 0x2A6044u;
label_2a6044:
    // 0x2a6044: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2a6044u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2a6048:
    // 0x2a6048: 0xafa30220  sw          $v1, 0x220($sp)
    ctx->pc = 0x2a6048u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 544), GPR_U32(ctx, 3));
label_2a604c:
    // 0x2a604c: 0x10000006  b           . + 4 + (0x6 << 2)
label_2a6050:
    if (ctx->pc == 0x2A6050u) {
        ctx->pc = 0x2A6054u;
        goto label_2a6054;
    }
    ctx->pc = 0x2A604Cu;
    {
        const bool branch_taken_0x2a604c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a604c) {
            ctx->pc = 0x2A6068u;
            goto label_2a6068;
        }
    }
    ctx->pc = 0x2A6054u;
label_2a6054:
    // 0x2a6054: 0xafa00220  sw          $zero, 0x220($sp)
    ctx->pc = 0x2a6054u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 544), GPR_U32(ctx, 0));
label_2a6058:
    // 0x2a6058: 0x10000003  b           . + 4 + (0x3 << 2)
label_2a605c:
    if (ctx->pc == 0x2A605Cu) {
        ctx->pc = 0x2A6060u;
        goto label_2a6060;
    }
    ctx->pc = 0x2A6058u;
    {
        const bool branch_taken_0x2a6058 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a6058) {
            ctx->pc = 0x2A6068u;
            goto label_2a6068;
        }
    }
    ctx->pc = 0x2A6060u;
label_2a6060:
    // 0x2a6060: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2a6060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2a6064:
    // 0x2a6064: 0xafa20220  sw          $v0, 0x220($sp)
    ctx->pc = 0x2a6064u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 544), GPR_U32(ctx, 2));
label_2a6068:
    // 0x2a6068: 0x8fa40270  lw          $a0, 0x270($sp)
    ctx->pc = 0x2a6068u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
label_2a606c:
    // 0x2a606c: 0x8fa50220  lw          $a1, 0x220($sp)
    ctx->pc = 0x2a606cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 544)));
label_2a6070:
    // 0x2a6070: 0xc0a8894  jal         func_2A2250
label_2a6074:
    if (ctx->pc == 0x2A6074u) {
        ctx->pc = 0x2A6078u;
        goto label_2a6078;
    }
    ctx->pc = 0x2A6070u;
    SET_GPR_U32(ctx, 31, 0x2A6078u);
    ctx->pc = 0x2A2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2250u, 0x2A6070u, 0x2A6078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6078u;
label_2a6078:
    // 0x2a6078: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2a6078u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a607c:
    // 0x2a607c: 0x93a7027d  lbu         $a3, 0x27D($sp)
    ctx->pc = 0x2a607cu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 637)));
label_2a6080:
    // 0x2a6080: 0x10e0002a  beqz        $a3, . + 4 + (0x2A << 2)
label_2a6084:
    if (ctx->pc == 0x2A6084u) {
        ctx->pc = 0x2A6088u;
        goto label_2a6088;
    }
    ctx->pc = 0x2A6080u;
    {
        const bool branch_taken_0x2a6080 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a6080) {
            ctx->pc = 0x2A612Cu;
            goto label_2a612c;
        }
    }
    ctx->pc = 0x2A6088u;
label_2a6088:
    // 0x2a6088: 0x8fa20280  lw          $v0, 0x280($sp)
    ctx->pc = 0x2a6088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
label_2a608c:
    // 0x2a608c: 0x8c4401b0  lw          $a0, 0x1B0($v0)
    ctx->pc = 0x2a608cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 432)));
label_2a6090:
    // 0x2a6090: 0x10040026  beq         $zero, $a0, . + 4 + (0x26 << 2)
label_2a6094:
    if (ctx->pc == 0x2A6094u) {
        ctx->pc = 0x2A6098u;
        goto label_2a6098;
    }
    ctx->pc = 0x2A6090u;
    {
        const bool branch_taken_0x2a6090 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 4));
        if (branch_taken_0x2a6090) {
            ctx->pc = 0x2A612Cu;
            goto label_2a612c;
        }
    }
    ctx->pc = 0x2A6098u;
label_2a6098:
    // 0x2a6098: 0x8fa50280  lw          $a1, 0x280($sp)
    ctx->pc = 0x2a6098u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
label_2a609c:
    // 0x2a609c: 0x8ca501b0  lw          $a1, 0x1B0($a1)
    ctx->pc = 0x2a609cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 432)));
label_2a60a0:
    // 0x2a60a0: 0x8ca40020  lw          $a0, 0x20($a1)
    ctx->pc = 0x2a60a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
label_2a60a4:
    // 0x2a60a4: 0x3c030200  lui         $v1, 0x200
    ctx->pc = 0x2a60a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)512 << 16));
label_2a60a8:
    // 0x2a60a8: 0x832824  and         $a1, $a0, $v1
    ctx->pc = 0x2a60a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_2a60ac:
    // 0x2a60ac: 0x14a0001f  bnez        $a1, . + 4 + (0x1F << 2)
label_2a60b0:
    if (ctx->pc == 0x2A60B0u) {
        ctx->pc = 0x2A60B4u;
        goto label_2a60b4;
    }
    ctx->pc = 0x2A60ACu;
    {
        const bool branch_taken_0x2a60ac = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a60ac) {
            ctx->pc = 0x2A612Cu;
            goto label_2a612c;
        }
    }
    ctx->pc = 0x2A60B4u;
label_2a60b4:
    // 0x2a60b4: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x2a60b4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a60b8:
    // 0x2a60b8: 0x10000019  b           . + 4 + (0x19 << 2)
label_2a60bc:
    if (ctx->pc == 0x2A60BCu) {
        ctx->pc = 0x2A60C0u;
        goto label_2a60c0;
    }
    ctx->pc = 0x2A60B8u;
    {
        const bool branch_taken_0x2a60b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a60b8) {
            ctx->pc = 0x2A6120u;
            goto label_2a6120;
        }
    }
    ctx->pc = 0x2A60C0u;
label_2a60c0:
    // 0x2a60c0: 0x8fa40280  lw          $a0, 0x280($sp)
    ctx->pc = 0x2a60c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
label_2a60c4:
    // 0x2a60c4: 0x171880  sll         $v1, $s7, 2
    ctx->pc = 0x2a60c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 23), 2));
label_2a60c8:
    // 0x2a60c8: 0x8c8401b0  lw          $a0, 0x1B0($a0)
    ctx->pc = 0x2a60c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 432)));
label_2a60cc:
    // 0x2a60cc: 0x833021  addu        $a2, $a0, $v1
    ctx->pc = 0x2a60ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_2a60d0:
    // 0x2a60d0: 0xc4c10080  lwc1        $f1, 0x80($a2)
    ctx->pc = 0x2a60d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2a60d4:
    // 0x2a60d4: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x2a60d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
label_2a60d8:
    // 0x2a60d8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2a60d8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a60dc:
    // 0x2a60dc: 0x0  nop
    ctx->pc = 0x2a60dcu;
    // NOP
label_2a60e0:
    // 0x2a60e0: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x2a60e0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2a60e4:
    // 0x2a60e4: 0x4501000c  bc1t        . + 4 + (0xC << 2)
label_2a60e8:
    if (ctx->pc == 0x2A60E8u) {
        ctx->pc = 0x2A60ECu;
        goto label_2a60ec;
    }
    ctx->pc = 0x2A60E4u;
    {
        const bool branch_taken_0x2a60e4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a60e4) {
            ctx->pc = 0x2A6118u;
            goto label_2a6118;
        }
    }
    ctx->pc = 0x2A60ECu;
label_2a60ec:
    // 0x2a60ec: 0x8fa20280  lw          $v0, 0x280($sp)
    ctx->pc = 0x2a60ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
label_2a60f0:
    // 0x2a60f0: 0x172080  sll         $a0, $s7, 2
    ctx->pc = 0x2a60f0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 23), 2));
label_2a60f4:
    // 0x2a60f4: 0x8c4501b0  lw          $a1, 0x1B0($v0)
    ctx->pc = 0x2a60f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 432)));
label_2a60f8:
    // 0x2a60f8: 0xa41021  addu        $v0, $a1, $a0
    ctx->pc = 0x2a60f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_2a60fc:
    // 0x2a60fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a60fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2a6100:
    // 0x2a6100: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x2a6100u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
label_2a6104:
    // 0x2a6104: 0x24a574e0  addiu       $a1, $a1, 0x74E0
    ctx->pc = 0x2a6104u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29920));
label_2a6108:
    // 0x2a6108: 0xc44c0080  lwc1        $f12, 0x80($v0)
    ctx->pc = 0x2a6108u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2a610c:
    // 0x2a610c: 0x8fa60280  lw          $a2, 0x280($sp)
    ctx->pc = 0x2a610cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
label_2a6110:
    // 0x2a6110: 0xc121c64  jal         func_487190
label_2a6114:
    if (ctx->pc == 0x2A6114u) {
        ctx->pc = 0x2A6118u;
        goto label_2a6118;
    }
    ctx->pc = 0x2A6110u;
    SET_GPR_U32(ctx, 31, 0x2A6118u);
    ctx->pc = 0x487190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x487190u, 0x2A6110u, 0x2A6118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6118u;
label_2a6118:
    // 0x2a6118: 0x26e40001  addiu       $a0, $s7, 0x1
    ctx->pc = 0x2a6118u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_2a611c:
    // 0x2a611c: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x2a611cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2a6120:
    // 0x2a6120: 0x2ee50004  sltiu       $a1, $s7, 0x4
    ctx->pc = 0x2a6120u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 23) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
label_2a6124:
    // 0x2a6124: 0x14a0ffe6  bnez        $a1, . + 4 + (-0x1A << 2)
label_2a6128:
    if (ctx->pc == 0x2A6128u) {
        ctx->pc = 0x2A612Cu;
        goto label_2a612c;
    }
    ctx->pc = 0x2A6124u;
    {
        const bool branch_taken_0x2a6124 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a6124) {
            ctx->pc = 0x2A60C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a60c0;
        }
    }
    ctx->pc = 0x2A612Cu;
label_2a612c:
    // 0x2a612c: 0x8fa20280  lw          $v0, 0x280($sp)
    ctx->pc = 0x2a612cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
label_2a6130:
    // 0x2a6130: 0x90440188  lbu         $a0, 0x188($v0)
    ctx->pc = 0x2a6130u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 392)));
label_2a6134:
    // 0x2a6134: 0x14800057  bnez        $a0, . + 4 + (0x57 << 2)
label_2a6138:
    if (ctx->pc == 0x2A6138u) {
        ctx->pc = 0x2A613Cu;
        goto label_2a613c;
    }
    ctx->pc = 0x2A6134u;
    {
        const bool branch_taken_0x2a6134 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a6134) {
            ctx->pc = 0x2A6294u;
            goto label_2a6294;
        }
    }
    ctx->pc = 0x2A613Cu;
label_2a613c:
    // 0x2a613c: 0x8fa20280  lw          $v0, 0x280($sp)
    ctx->pc = 0x2a613cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
label_2a6140:
    // 0x2a6140: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x2a6140u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
label_2a6144:
    // 0x2a6144: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x2a6144u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_2a6148:
    // 0x2a6148: 0x9042011c  lbu         $v0, 0x11C($v0)
    ctx->pc = 0x2a6148u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 284)));
label_2a614c:
    // 0x2a614c: 0x1440002a  bnez        $v0, . + 4 + (0x2A << 2)
label_2a6150:
    if (ctx->pc == 0x2A6150u) {
        ctx->pc = 0x2A6154u;
        goto label_2a6154;
    }
    ctx->pc = 0x2A614Cu;
    {
        const bool branch_taken_0x2a614c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a614c) {
            ctx->pc = 0x2A61F8u;
            goto label_2a61f8;
        }
    }
    ctx->pc = 0x2A6154u;
label_2a6154:
    // 0x2a6154: 0x8fa30280  lw          $v1, 0x280($sp)
    ctx->pc = 0x2a6154u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
label_2a6158:
    // 0x2a6158: 0x8c640184  lw          $a0, 0x184($v1)
    ctx->pc = 0x2a6158u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 388)));
label_2a615c:
    // 0x2a615c: 0x14800010  bnez        $a0, . + 4 + (0x10 << 2)
label_2a6160:
    if (ctx->pc == 0x2A6160u) {
        ctx->pc = 0x2A6164u;
        goto label_2a6164;
    }
    ctx->pc = 0x2A615Cu;
    {
        const bool branch_taken_0x2a615c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a615c) {
            ctx->pc = 0x2A61A0u;
            goto label_2a61a0;
        }
    }
    ctx->pc = 0x2A6164u;
label_2a6164:
    // 0x2a6164: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a6164u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2a6168:
    // 0x2a6168: 0xc1218cc  jal         func_486330
label_2a616c:
    if (ctx->pc == 0x2A616Cu) {
        ctx->pc = 0x2A6170u;
        goto label_2a6170;
    }
    ctx->pc = 0x2A6168u;
    SET_GPR_U32(ctx, 31, 0x2A6170u);
    ctx->pc = 0x486330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x486330u, 0x2A6168u, 0x2A6170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6170u;
label_2a6170:
    // 0x2a6170: 0xc7818208  lwc1        $f1, -0x7DF8($gp)
    ctx->pc = 0x2a6170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935048)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2a6174:
    // 0x2a6174: 0x46010301  sub.s       $f12, $f0, $f1
    ctx->pc = 0x2a6174u;
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_2a6178:
    // 0x2a6178: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a6178u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2a617c:
    // 0x2a617c: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x2a617cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
label_2a6180:
    // 0x2a6180: 0x244271d0  addiu       $v0, $v0, 0x71D0
    ctx->pc = 0x2a6180u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29136));
label_2a6184:
    // 0x2a6184: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2a6184u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a6188:
    // 0x2a6188: 0x8fa60280  lw          $a2, 0x280($sp)
    ctx->pc = 0x2a6188u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
label_2a618c:
    // 0x2a618c: 0xc121c64  jal         func_487190
label_2a6190:
    if (ctx->pc == 0x2A6190u) {
        ctx->pc = 0x2A6194u;
        goto label_2a6194;
    }
    ctx->pc = 0x2A618Cu;
    SET_GPR_U32(ctx, 31, 0x2A6194u);
    ctx->pc = 0x487190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x487190u, 0x2A618Cu, 0x2A6194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6194u;
label_2a6194:
    // 0x2a6194: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a6194u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a6198:
    // 0x2a6198: 0x1000003e  b           . + 4 + (0x3E << 2)
label_2a619c:
    if (ctx->pc == 0x2A619Cu) {
        ctx->pc = 0x2A61A0u;
        goto label_2a61a0;
    }
    ctx->pc = 0x2A6198u;
    {
        const bool branch_taken_0x2a6198 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a6198) {
            ctx->pc = 0x2A6294u;
            goto label_2a6294;
        }
    }
    ctx->pc = 0x2A61A0u;
label_2a61a0:
    // 0x2a61a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a61a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2a61a4:
    // 0x2a61a4: 0xc1218cc  jal         func_486330
label_2a61a8:
    if (ctx->pc == 0x2A61A8u) {
        ctx->pc = 0x2A61ACu;
        goto label_2a61ac;
    }
    ctx->pc = 0x2A61A4u;
    SET_GPR_U32(ctx, 31, 0x2A61ACu);
    ctx->pc = 0x486330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x486330u, 0x2A61A4u, 0x2A61ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A61ACu;
label_2a61ac:
    // 0x2a61ac: 0xc7818208  lwc1        $f1, -0x7DF8($gp)
    ctx->pc = 0x2a61acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935048)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2a61b0:
    // 0x2a61b0: 0x46010301  sub.s       $f12, $f0, $f1
    ctx->pc = 0x2a61b0u;
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_2a61b4:
    // 0x2a61b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a61b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2a61b8:
    // 0x2a61b8: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x2a61b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
label_2a61bc:
    // 0x2a61bc: 0x24a57320  addiu       $a1, $a1, 0x7320
    ctx->pc = 0x2a61bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29472));
label_2a61c0:
    // 0x2a61c0: 0x8fa60280  lw          $a2, 0x280($sp)
    ctx->pc = 0x2a61c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
label_2a61c4:
    // 0x2a61c4: 0xc121c64  jal         func_487190
label_2a61c8:
    if (ctx->pc == 0x2A61C8u) {
        ctx->pc = 0x2A61CCu;
        goto label_2a61cc;
    }
    ctx->pc = 0x2A61C4u;
    SET_GPR_U32(ctx, 31, 0x2A61CCu);
    ctx->pc = 0x487190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x487190u, 0x2A61C4u, 0x2A61CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A61CCu;
label_2a61cc:
    // 0x2a61cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a61ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2a61d0:
    // 0x2a61d0: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x2a61d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
label_2a61d4:
    // 0x2a61d4: 0x246372e0  addiu       $v1, $v1, 0x72E0
    ctx->pc = 0x2a61d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 29408));
label_2a61d8:
    // 0x2a61d8: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x2a61d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2a61dc:
    // 0x2a61dc: 0xc78c8208  lwc1        $f12, -0x7DF8($gp)
    ctx->pc = 0x2a61dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935048)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2a61e0:
    // 0x2a61e0: 0x8fa60280  lw          $a2, 0x280($sp)
    ctx->pc = 0x2a61e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
label_2a61e4:
    // 0x2a61e4: 0xc121c64  jal         func_487190
label_2a61e8:
    if (ctx->pc == 0x2A61E8u) {
        ctx->pc = 0x2A61ECu;
        goto label_2a61ec;
    }
    ctx->pc = 0x2A61E4u;
    SET_GPR_U32(ctx, 31, 0x2A61ECu);
    ctx->pc = 0x487190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x487190u, 0x2A61E4u, 0x2A61ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A61ECu;
label_2a61ec:
    // 0x2a61ec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a61ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a61f0:
    // 0x2a61f0: 0x10000028  b           . + 4 + (0x28 << 2)
label_2a61f4:
    if (ctx->pc == 0x2A61F4u) {
        ctx->pc = 0x2A61F8u;
        goto label_2a61f8;
    }
    ctx->pc = 0x2A61F0u;
    {
        const bool branch_taken_0x2a61f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a61f0) {
            ctx->pc = 0x2A6294u;
            goto label_2a6294;
        }
    }
    ctx->pc = 0x2A61F8u;
label_2a61f8:
    // 0x2a61f8: 0x8fa50280  lw          $a1, 0x280($sp)
    ctx->pc = 0x2a61f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
label_2a61fc:
    // 0x2a61fc: 0x8ca20184  lw          $v0, 0x184($a1)
    ctx->pc = 0x2a61fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 388)));
label_2a6200:
    // 0x2a6200: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
label_2a6204:
    if (ctx->pc == 0x2A6204u) {
        ctx->pc = 0x2A6208u;
        goto label_2a6208;
    }
    ctx->pc = 0x2A6200u;
    {
        const bool branch_taken_0x2a6200 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a6200) {
            ctx->pc = 0x2A623Cu;
            goto label_2a623c;
        }
    }
    ctx->pc = 0x2A6208u;
label_2a6208:
    // 0x2a6208: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a6208u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2a620c:
    // 0x2a620c: 0xc1218cc  jal         func_486330
label_2a6210:
    if (ctx->pc == 0x2A6210u) {
        ctx->pc = 0x2A6214u;
        goto label_2a6214;
    }
    ctx->pc = 0x2A620Cu;
    SET_GPR_U32(ctx, 31, 0x2A6214u);
    ctx->pc = 0x486330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x486330u, 0x2A620Cu, 0x2A6214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6214u;
label_2a6214:
    // 0x2a6214: 0xc7818208  lwc1        $f1, -0x7DF8($gp)
    ctx->pc = 0x2a6214u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935048)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2a6218:
    // 0x2a6218: 0x46010301  sub.s       $f12, $f0, $f1
    ctx->pc = 0x2a6218u;
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_2a621c:
    // 0x2a621c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a621cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2a6220:
    // 0x2a6220: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x2a6220u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
label_2a6224:
    // 0x2a6224: 0x24a57220  addiu       $a1, $a1, 0x7220
    ctx->pc = 0x2a6224u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29216));
label_2a6228:
    // 0x2a6228: 0x8fa60280  lw          $a2, 0x280($sp)
    ctx->pc = 0x2a6228u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
label_2a622c:
    // 0x2a622c: 0xc121c64  jal         func_487190
label_2a6230:
    if (ctx->pc == 0x2A6230u) {
        ctx->pc = 0x2A6234u;
        goto label_2a6234;
    }
    ctx->pc = 0x2A622Cu;
    SET_GPR_U32(ctx, 31, 0x2A6234u);
    ctx->pc = 0x487190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x487190u, 0x2A622Cu, 0x2A6234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6234u;
label_2a6234:
    // 0x2a6234: 0x10000017  b           . + 4 + (0x17 << 2)
label_2a6238:
    if (ctx->pc == 0x2A6238u) {
        ctx->pc = 0x2A623Cu;
        goto label_2a623c;
    }
    ctx->pc = 0x2A6234u;
    {
        const bool branch_taken_0x2a6234 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a6234) {
            ctx->pc = 0x2A6294u;
            goto label_2a6294;
        }
    }
    ctx->pc = 0x2A623Cu;
label_2a623c:
    // 0x2a623c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a623cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2a6240:
    // 0x2a6240: 0xc1218cc  jal         func_486330
label_2a6244:
    if (ctx->pc == 0x2A6244u) {
        ctx->pc = 0x2A6248u;
        goto label_2a6248;
    }
    ctx->pc = 0x2A6240u;
    SET_GPR_U32(ctx, 31, 0x2A6248u);
    ctx->pc = 0x486330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x486330u, 0x2A6240u, 0x2A6248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6248u;
label_2a6248:
    // 0x2a6248: 0xc7818208  lwc1        $f1, -0x7DF8($gp)
    ctx->pc = 0x2a6248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935048)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2a624c:
    // 0x2a624c: 0x46010301  sub.s       $f12, $f0, $f1
    ctx->pc = 0x2a624cu;
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_2a6250:
    // 0x2a6250: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a6250u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2a6254:
    // 0x2a6254: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x2a6254u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
label_2a6258:
    // 0x2a6258: 0x24a57320  addiu       $a1, $a1, 0x7320
    ctx->pc = 0x2a6258u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29472));
label_2a625c:
    // 0x2a625c: 0x8fa20280  lw          $v0, 0x280($sp)
    ctx->pc = 0x2a625cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
label_2a6260:
    // 0x2a6260: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2a6260u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a6264:
    // 0x2a6264: 0xc121c64  jal         func_487190
label_2a6268:
    if (ctx->pc == 0x2A6268u) {
        ctx->pc = 0x2A626Cu;
        goto label_2a626c;
    }
    ctx->pc = 0x2A6264u;
    SET_GPR_U32(ctx, 31, 0x2A626Cu);
    ctx->pc = 0x487190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x487190u, 0x2A6264u, 0x2A626Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A626Cu;
label_2a626c:
    // 0x2a626c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2a626cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a6270:
    // 0x2a6270: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a6270u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2a6274:
    // 0x2a6274: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x2a6274u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
label_2a6278:
    // 0x2a6278: 0x244272e0  addiu       $v0, $v0, 0x72E0
    ctx->pc = 0x2a6278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29408));
label_2a627c:
    // 0x2a627c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2a627cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a6280:
    // 0x2a6280: 0xc78c8208  lwc1        $f12, -0x7DF8($gp)
    ctx->pc = 0x2a6280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935048)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2a6284:
    // 0x2a6284: 0x8fa30280  lw          $v1, 0x280($sp)
    ctx->pc = 0x2a6284u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
label_2a6288:
    // 0x2a6288: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x2a6288u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2a628c:
    // 0x2a628c: 0xc121c64  jal         func_487190
label_2a6290:
    if (ctx->pc == 0x2A6290u) {
        ctx->pc = 0x2A6294u;
        goto label_2a6294;
    }
    ctx->pc = 0x2A628Cu;
    SET_GPR_U32(ctx, 31, 0x2A6294u);
    ctx->pc = 0x487190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x487190u, 0x2A628Cu, 0x2A6294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6294u;
label_2a6294:
    // 0x2a6294: 0x8fa50280  lw          $a1, 0x280($sp)
    ctx->pc = 0x2a6294u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
label_2a6298:
    // 0x2a6298: 0x90a60188  lbu         $a2, 0x188($a1)
    ctx->pc = 0x2a6298u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 392)));
label_2a629c:
    // 0x2a629c: 0x10c0000b  beqz        $a2, . + 4 + (0xB << 2)
label_2a62a0:
    if (ctx->pc == 0x2A62A0u) {
        ctx->pc = 0x2A62A4u;
        goto label_2a62a4;
    }
    ctx->pc = 0x2A629Cu;
    {
        const bool branch_taken_0x2a629c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a629c) {
            ctx->pc = 0x2A62CCu;
            goto label_2a62cc;
        }
    }
    ctx->pc = 0x2A62A4u;
label_2a62a4:
    // 0x2a62a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a62a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2a62a8:
    // 0x2a62a8: 0x3c07002a  lui         $a3, 0x2A
    ctx->pc = 0x2a62a8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)42 << 16));
label_2a62ac:
    // 0x2a62ac: 0x24e773e0  addiu       $a3, $a3, 0x73E0
    ctx->pc = 0x2a62acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 29664));
label_2a62b0:
    // 0x2a62b0: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x2a62b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2a62b4:
    // 0x2a62b4: 0xc78c8208  lwc1        $f12, -0x7DF8($gp)
    ctx->pc = 0x2a62b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935048)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2a62b8:
    // 0x2a62b8: 0x8fa80280  lw          $t0, 0x280($sp)
    ctx->pc = 0x2a62b8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
label_2a62bc:
    // 0x2a62bc: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x2a62bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_2a62c0:
    // 0x2a62c0: 0xc121c64  jal         func_487190
label_2a62c4:
    if (ctx->pc == 0x2A62C4u) {
        ctx->pc = 0x2A62C8u;
        goto label_2a62c8;
    }
    ctx->pc = 0x2A62C0u;
    SET_GPR_U32(ctx, 31, 0x2A62C8u);
    ctx->pc = 0x487190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x487190u, 0x2A62C0u, 0x2A62C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A62C8u;
label_2a62c8:
    // 0x2a62c8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a62c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a62cc:
    // 0x2a62cc: 0x8f85bb70  lw          $a1, -0x4490($gp)
    ctx->pc = 0x2a62ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
label_2a62d0:
    // 0x2a62d0: 0x24a30020  addiu       $v1, $a1, 0x20
    ctx->pc = 0x2a62d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
label_2a62d4:
    // 0x2a62d4: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x2a62d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2a62d8:
    // 0x2a62d8: 0xc0858ac  jal         func_2162B0
label_2a62dc:
    if (ctx->pc == 0x2A62DCu) {
        ctx->pc = 0x2A62E0u;
        goto label_2a62e0;
    }
    ctx->pc = 0x2A62D8u;
    SET_GPR_U32(ctx, 31, 0x2A62E0u);
    ctx->pc = 0x2162B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2162B0u, 0x2A62D8u, 0x2A62E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A62E0u;
label_2a62e0:
    // 0x2a62e0: 0x8fa30280  lw          $v1, 0x280($sp)
    ctx->pc = 0x2a62e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
label_2a62e4:
    // 0x2a62e4: 0xe460002c  swc1        $f0, 0x2C($v1)
    ctx->pc = 0x2a62e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 44), bits); }
label_2a62e8:
    // 0x2a62e8: 0x8fa40280  lw          $a0, 0x280($sp)
    ctx->pc = 0x2a62e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
label_2a62ec:
    // 0x2a62ec: 0xc480002c  lwc1        $f0, 0x2C($a0)
    ctx->pc = 0x2a62ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a62f0:
    // 0x2a62f0: 0x8fa30280  lw          $v1, 0x280($sp)
    ctx->pc = 0x2a62f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
label_2a62f4:
    // 0x2a62f4: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x2a62f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
label_2a62f8:
    // 0x2a62f8: 0xafa0021c  sw          $zero, 0x21C($sp)
    ctx->pc = 0x2a62f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 540), GPR_U32(ctx, 0));
label_2a62fc:
    // 0x2a62fc: 0x10000008  b           . + 4 + (0x8 << 2)
label_2a6300:
    if (ctx->pc == 0x2A6300u) {
        ctx->pc = 0x2A6304u;
        goto label_2a6304;
    }
    ctx->pc = 0x2A62FCu;
    {
        const bool branch_taken_0x2a62fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a62fc) {
            ctx->pc = 0x2A6320u;
            goto label_2a6320;
        }
    }
    ctx->pc = 0x2A6304u;
label_2a6304:
    // 0x2a6304: 0x8fb10280  lw          $s1, 0x280($sp)
    ctx->pc = 0x2a6304u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
label_2a6308:
    // 0x2a6308: 0x8fa4021c  lw          $a0, 0x21C($sp)
    ctx->pc = 0x2a6308u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 540)));
label_2a630c:
    // 0x2a630c: 0x2242821  addu        $a1, $s1, $a0
    ctx->pc = 0x2a630cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
label_2a6310:
    // 0x2a6310: 0xa0a00128  sb          $zero, 0x128($a1)
    ctx->pc = 0x2a6310u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 296), (uint8_t)GPR_U32(ctx, 0));
label_2a6314:
    // 0x2a6314: 0x8fa2021c  lw          $v0, 0x21C($sp)
    ctx->pc = 0x2a6314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 540)));
label_2a6318:
    // 0x2a6318: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x2a6318u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2a631c:
    // 0x2a631c: 0xafa3021c  sw          $v1, 0x21C($sp)
    ctx->pc = 0x2a631cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 540), GPR_U32(ctx, 3));
label_2a6320:
    // 0x2a6320: 0x8fa4021c  lw          $a0, 0x21C($sp)
    ctx->pc = 0x2a6320u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 540)));
label_2a6324:
    // 0x2a6324: 0x2c850004  sltiu       $a1, $a0, 0x4
    ctx->pc = 0x2a6324u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
label_2a6328:
    // 0x2a6328: 0x14a0fff6  bnez        $a1, . + 4 + (-0xA << 2)
label_2a632c:
    if (ctx->pc == 0x2A632Cu) {
        ctx->pc = 0x2A6330u;
        goto label_2a6330;
    }
    ctx->pc = 0x2A6328u;
    {
        const bool branch_taken_0x2a6328 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a6328) {
            ctx->pc = 0x2A6304u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a6304;
        }
    }
    ctx->pc = 0x2A6330u;
label_2a6330:
    // 0x2a6330: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a6330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a6334:
    // 0x2a6334: 0xa3a2027f  sb          $v0, 0x27F($sp)
    ctx->pc = 0x2a6334u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 639), (uint8_t)GPR_U32(ctx, 2));
label_2a6338:
    // 0x2a6338: 0x8fa40280  lw          $a0, 0x280($sp)
    ctx->pc = 0x2a6338u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
label_2a633c:
    // 0x2a633c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2a633cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2a6340:
    // 0x2a6340: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2a6340u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a6344:
    // 0x2a6344: 0xc09d250  jal         func_274940
label_2a6348:
    if (ctx->pc == 0x2A6348u) {
        ctx->pc = 0x2A634Cu;
        goto label_2a634c;
    }
    ctx->pc = 0x2A6344u;
    SET_GPR_U32(ctx, 31, 0x2A634Cu);
    ctx->pc = 0x274940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274940u, 0x2A6344u, 0x2A634Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A634Cu;
label_2a634c:
    // 0x2a634c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a634cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a6350:
    // 0x2a6350: 0x100000ef  b           . + 4 + (0xEF << 2)
label_2a6354:
    if (ctx->pc == 0x2A6354u) {
        ctx->pc = 0x2A6358u;
        goto label_2a6358;
    }
    ctx->pc = 0x2A6350u;
    {
        const bool branch_taken_0x2a6350 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a6350) {
            ctx->pc = 0x2A6710u;
            goto label_2a6710;
        }
    }
    ctx->pc = 0x2A6358u;
label_2a6358:
    // 0x2a6358: 0x8fa20280  lw          $v0, 0x280($sp)
    ctx->pc = 0x2a6358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
label_2a635c:
    // 0x2a635c: 0x8c460180  lw          $a2, 0x180($v0)
    ctx->pc = 0x2a635cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 384)));
label_2a6360:
    // 0x2a6360: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2a6360u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2a6364:
    // 0x2a6364: 0x10c30025  beq         $a2, $v1, . + 4 + (0x25 << 2)
label_2a6368:
    if (ctx->pc == 0x2A6368u) {
        ctx->pc = 0x2A636Cu;
        goto label_2a636c;
    }
    ctx->pc = 0x2A6364u;
    {
        const bool branch_taken_0x2a6364 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x2a6364) {
            ctx->pc = 0x2A63FCu;
            goto label_2a63fc;
        }
    }
    ctx->pc = 0x2A636Cu;
label_2a636c:
    // 0x2a636c: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
label_2a6370:
    if (ctx->pc == 0x2A6370u) {
        ctx->pc = 0x2A6374u;
        goto label_2a6374;
    }
    ctx->pc = 0x2A636Cu;
    {
        const bool branch_taken_0x2a636c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a636c) {
            ctx->pc = 0x2A637Cu;
            goto label_2a637c;
        }
    }
    ctx->pc = 0x2A6374u;
label_2a6374:
    // 0x2a6374: 0x10000055  b           . + 4 + (0x55 << 2)
label_2a6378:
    if (ctx->pc == 0x2A6378u) {
        ctx->pc = 0x2A637Cu;
        goto label_2a637c;
    }
    ctx->pc = 0x2A6374u;
    {
        const bool branch_taken_0x2a6374 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a6374) {
            ctx->pc = 0x2A64CCu;
            goto label_2a64cc;
        }
    }
    ctx->pc = 0x2A637Cu;
label_2a637c:
    // 0x2a637c: 0x3c04004f  lui         $a0, 0x4F
    ctx->pc = 0x2a637cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)79 << 16));
label_2a6380:
    // 0x2a6380: 0x2484dbe0  addiu       $a0, $a0, -0x2420
    ctx->pc = 0x2a6380u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958048));
label_2a6384:
    // 0x2a6384: 0xc0bc60c  jal         func_2F1830
label_2a6388:
    if (ctx->pc == 0x2A6388u) {
        ctx->pc = 0x2A638Cu;
        goto label_2a638c;
    }
    ctx->pc = 0x2A6384u;
    SET_GPR_U32(ctx, 31, 0x2A638Cu);
    ctx->pc = 0x2F1830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1830u, 0x2A6384u, 0x2A638Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A638Cu;
label_2a638c:
    // 0x2a638c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2a638cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a6390:
    // 0x2a6390: 0x8fa30280  lw          $v1, 0x280($sp)
    ctx->pc = 0x2a6390u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
label_2a6394:
    // 0x2a6394: 0x8c630048  lw          $v1, 0x48($v1)
    ctx->pc = 0x2a6394u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
label_2a6398:
    // 0x2a6398: 0x24640004  addiu       $a0, $v1, 0x4
    ctx->pc = 0x2a6398u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_2a639c:
    // 0x2a639c: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x2a639cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
label_2a63a0:
    // 0x2a63a0: 0x24a5dbe0  addiu       $a1, $a1, -0x2420
    ctx->pc = 0x2a63a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958048));
label_2a63a4:
    // 0x2a63a4: 0xc0bc710  jal         func_2F1C40
label_2a63a8:
    if (ctx->pc == 0x2A63A8u) {
        ctx->pc = 0x2A63ACu;
        goto label_2a63ac;
    }
    ctx->pc = 0x2A63A4u;
    SET_GPR_U32(ctx, 31, 0x2A63ACu);
    ctx->pc = 0x2F1C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1C40u, 0x2A63A4u, 0x2A63ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A63ACu;
label_2a63ac:
    // 0x2a63ac: 0x14400047  bnez        $v0, . + 4 + (0x47 << 2)
label_2a63b0:
    if (ctx->pc == 0x2A63B0u) {
        ctx->pc = 0x2A63B4u;
        goto label_2a63b4;
    }
    ctx->pc = 0x2A63ACu;
    {
        const bool branch_taken_0x2a63ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a63ac) {
            ctx->pc = 0x2A64CCu;
            goto label_2a64cc;
        }
    }
    ctx->pc = 0x2A63B4u;
label_2a63b4:
    // 0x2a63b4: 0x8fa40280  lw          $a0, 0x280($sp)
    ctx->pc = 0x2a63b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
label_2a63b8:
    // 0x2a63b8: 0x8c8501b0  lw          $a1, 0x1B0($a0)
    ctx->pc = 0x2a63b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 432)));
label_2a63bc:
    // 0x2a63bc: 0x10050043  beq         $zero, $a1, . + 4 + (0x43 << 2)
label_2a63c0:
    if (ctx->pc == 0x2A63C0u) {
        ctx->pc = 0x2A63C4u;
        goto label_2a63c4;
    }
    ctx->pc = 0x2A63BCu;
    {
        const bool branch_taken_0x2a63bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 5));
        if (branch_taken_0x2a63bc) {
            ctx->pc = 0x2A64CCu;
            goto label_2a64cc;
        }
    }
    ctx->pc = 0x2A63C4u;
label_2a63c4:
    // 0x2a63c4: 0x8fa60280  lw          $a2, 0x280($sp)
    ctx->pc = 0x2a63c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
label_2a63c8:
    // 0x2a63c8: 0x8cc501b0  lw          $a1, 0x1B0($a2)
    ctx->pc = 0x2a63c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 432)));
label_2a63cc:
    // 0x2a63cc: 0x8ca60020  lw          $a2, 0x20($a1)
    ctx->pc = 0x2a63ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
label_2a63d0:
    // 0x2a63d0: 0x3c020200  lui         $v0, 0x200
    ctx->pc = 0x2a63d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)512 << 16));
label_2a63d4:
    // 0x2a63d4: 0xc22824  and         $a1, $a2, $v0
    ctx->pc = 0x2a63d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
label_2a63d8:
    // 0x2a63d8: 0x10a0003c  beqz        $a1, . + 4 + (0x3C << 2)
label_2a63dc:
    if (ctx->pc == 0x2A63DCu) {
        ctx->pc = 0x2A63E0u;
        goto label_2a63e0;
    }
    ctx->pc = 0x2A63D8u;
    {
        const bool branch_taken_0x2a63d8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a63d8) {
            ctx->pc = 0x2A64CCu;
            goto label_2a64cc;
        }
    }
    ctx->pc = 0x2A63E0u;
label_2a63e0:
    // 0x2a63e0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2a63e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a63e4:
    // 0x2a63e4: 0x8fa20280  lw          $v0, 0x280($sp)
    ctx->pc = 0x2a63e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
label_2a63e8:
    // 0x2a63e8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2a63e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a63ec:
    // 0x2a63ec: 0xc0a9d38  jal         func_2A74E0
label_2a63f0:
    if (ctx->pc == 0x2A63F0u) {
        ctx->pc = 0x2A63F4u;
        goto label_2a63f4;
    }
    ctx->pc = 0x2A63ECu;
    SET_GPR_U32(ctx, 31, 0x2A63F4u);
    ctx->pc = 0x2A74E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A74E0u, 0x2A63ECu, 0x2A63F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A63F4u;
label_2a63f4:
    // 0x2a63f4: 0x10000035  b           . + 4 + (0x35 << 2)
label_2a63f8:
    if (ctx->pc == 0x2A63F8u) {
        ctx->pc = 0x2A63FCu;
        goto label_2a63fc;
    }
    ctx->pc = 0x2A63F4u;
    {
        const bool branch_taken_0x2a63f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a63f4) {
            ctx->pc = 0x2A64CCu;
            goto label_2a64cc;
        }
    }
    ctx->pc = 0x2A63FCu;
label_2a63fc:
    // 0x2a63fc: 0x8fa50280  lw          $a1, 0x280($sp)
    ctx->pc = 0x2a63fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
label_2a6400:
    // 0x2a6400: 0x8ca50030  lw          $a1, 0x30($a1)
    ctx->pc = 0x2a6400u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
label_2a6404:
    // 0x2a6404: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2a6404u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2a6408:
    // 0x2a6408: 0x240204af  addiu       $v0, $zero, 0x4AF
    ctx->pc = 0x2a6408u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1199));
label_2a640c:
    // 0x2a640c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2a640cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a6410:
    // 0x2a6410: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2a6410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2a6414:
    // 0x2a6414: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2a6414u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a6418:
    // 0x2a6418: 0xc040ab0  jal         func_102AC0
label_2a641c:
    if (ctx->pc == 0x2A641Cu) {
        ctx->pc = 0x2A6420u;
        goto label_2a6420;
    }
    ctx->pc = 0x2A6418u;
    SET_GPR_U32(ctx, 31, 0x2A6420u);
    ctx->pc = 0x102AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AC0u, 0x2A6418u, 0x2A6420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6420u;
label_2a6420:
    // 0x2a6420: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2a6420u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a6424:
    // 0x2a6424: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a6424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a6428:
    // 0x2a6428: 0x10620028  beq         $v1, $v0, . + 4 + (0x28 << 2)
label_2a642c:
    if (ctx->pc == 0x2A642Cu) {
        ctx->pc = 0x2A6430u;
        goto label_2a6430;
    }
    ctx->pc = 0x2A6428u;
    {
        const bool branch_taken_0x2a6428 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2a6428) {
            ctx->pc = 0x2A64CCu;
            goto label_2a64cc;
        }
    }
    ctx->pc = 0x2A6430u;
label_2a6430:
    // 0x2a6430: 0x8fa40280  lw          $a0, 0x280($sp)
    ctx->pc = 0x2a6430u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
label_2a6434:
    // 0x2a6434: 0x8c820110  lw          $v0, 0x110($a0)
    ctx->pc = 0x2a6434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 272)));
label_2a6438:
    // 0x2a6438: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x2a6438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_2a643c:
    // 0x2a643c: 0xafa20100  sw          $v0, 0x100($sp)
    ctx->pc = 0x2a643cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 2));
label_2a6440:
    // 0x2a6440: 0x8f83bb70  lw          $v1, -0x4490($gp)
    ctx->pc = 0x2a6440u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
label_2a6444:
    // 0x2a6444: 0x24640020  addiu       $a0, $v1, 0x20
    ctx->pc = 0x2a6444u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
label_2a6448:
    // 0x2a6448: 0xc0858ac  jal         func_2162B0
label_2a644c:
    if (ctx->pc == 0x2A644Cu) {
        ctx->pc = 0x2A6450u;
        goto label_2a6450;
    }
    ctx->pc = 0x2A6448u;
    SET_GPR_U32(ctx, 31, 0x2A6450u);
    ctx->pc = 0x2162B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2162B0u, 0x2A6448u, 0x2A6450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6450u;
label_2a6450:
    // 0x2a6450: 0x8fa20280  lw          $v0, 0x280($sp)
    ctx->pc = 0x2a6450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
label_2a6454:
    // 0x2a6454: 0xc441002c  lwc1        $f1, 0x2C($v0)
    ctx->pc = 0x2a6454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2a6458:
    // 0x2a6458: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2a6458u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_2a645c:
    // 0x2a645c: 0xe7a00218  swc1        $f0, 0x218($sp)
    ctx->pc = 0x2a645cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 536), bits); }
label_2a6460:
    // 0x2a6460: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x2a6460u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
label_2a6464:
    // 0x2a6464: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2a6464u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2a6468:
    // 0x2a6468: 0xc7a00218  lwc1        $f0, 0x218($sp)
    ctx->pc = 0x2a6468u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a646c:
    // 0x2a646c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2a646cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2a6470:
    // 0x2a6470: 0xe7a00218  swc1        $f0, 0x218($sp)
    ctx->pc = 0x2a6470u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 536), bits); }
label_2a6474:
    // 0x2a6474: 0xc7a10218  lwc1        $f1, 0x218($sp)
    ctx->pc = 0x2a6474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2a6478:
    // 0x2a6478: 0x3c163f80  lui         $s6, 0x3F80
    ctx->pc = 0x2a6478u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)16256 << 16));
label_2a647c:
    // 0x2a647c: 0x44960000  mtc1        $s6, $f0
    ctx->pc = 0x2a647cu;
    { uint32_t bits = GPR_U32(ctx, 22); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a6480:
    // 0x2a6480: 0x0  nop
    ctx->pc = 0x2a6480u;
    // NOP
label_2a6484:
    // 0x2a6484: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2a6484u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2a6488:
    // 0x2a6488: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_2a648c:
    if (ctx->pc == 0x2A648Cu) {
        ctx->pc = 0x2A6490u;
        goto label_2a6490;
    }
    ctx->pc = 0x2A6488u;
    {
        const bool branch_taken_0x2a6488 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a6488) {
            ctx->pc = 0x2A64A0u;
            goto label_2a64a0;
        }
    }
    ctx->pc = 0x2A6490u;
label_2a6490:
    // 0x2a6490: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2a6490u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_2a6494:
    // 0x2a6494: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2a6494u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a6498:
    // 0x2a6498: 0x0  nop
    ctx->pc = 0x2a6498u;
    // NOP
label_2a649c:
    // 0x2a649c: 0xe7a00218  swc1        $f0, 0x218($sp)
    ctx->pc = 0x2a649cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 536), bits); }
label_2a64a0:
    // 0x2a64a0: 0x8fa20280  lw          $v0, 0x280($sp)
    ctx->pc = 0x2a64a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
label_2a64a4:
    // 0x2a64a4: 0x8c440118  lw          $a0, 0x118($v0)
    ctx->pc = 0x2a64a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 280)));
label_2a64a8:
    // 0x2a64a8: 0x8fa50100  lw          $a1, 0x100($sp)
    ctx->pc = 0x2a64a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
label_2a64ac:
    // 0x2a64ac: 0xc7ac0218  lwc1        $f12, 0x218($sp)
    ctx->pc = 0x2a64acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2a64b0:
    // 0x2a64b0: 0xc102e3c  jal         func_40B8F0
label_2a64b4:
    if (ctx->pc == 0x2A64B4u) {
        ctx->pc = 0x2A64B8u;
        goto label_2a64b8;
    }
    ctx->pc = 0x2A64B0u;
    SET_GPR_U32(ctx, 31, 0x2A64B8u);
    ctx->pc = 0x40B8F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40B8F0u, 0x2A64B0u, 0x2A64B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A64B8u;
label_2a64b8:
    // 0x2a64b8: 0x8fa20280  lw          $v0, 0x280($sp)
    ctx->pc = 0x2a64b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
label_2a64bc:
    // 0x2a64bc: 0x8c440110  lw          $a0, 0x110($v0)
    ctx->pc = 0x2a64bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 272)));
label_2a64c0:
    // 0x2a64c0: 0xc106794  jal         func_419E50
label_2a64c4:
    if (ctx->pc == 0x2A64C4u) {
        ctx->pc = 0x2A64C8u;
        goto label_2a64c8;
    }
    ctx->pc = 0x2A64C0u;
    SET_GPR_U32(ctx, 31, 0x2A64C8u);
    ctx->pc = 0x419E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419E50u, 0x2A64C0u, 0x2A64C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A64C8u;
label_2a64c8:
    // 0x2a64c8: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x2a64c8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a64cc:
    // 0x2a64cc: 0x8fa50280  lw          $a1, 0x280($sp)
    ctx->pc = 0x2a64ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
label_2a64d0:
    // 0x2a64d0: 0x90a2011c  lbu         $v0, 0x11C($a1)
    ctx->pc = 0x2a64d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 284)));
label_2a64d4:
    // 0x2a64d4: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
label_2a64d8:
    if (ctx->pc == 0x2A64D8u) {
        ctx->pc = 0x2A64DCu;
        goto label_2a64dc;
    }
    ctx->pc = 0x2A64D4u;
    {
        const bool branch_taken_0x2a64d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a64d4) {
            ctx->pc = 0x2A6544u;
            goto label_2a6544;
        }
    }
    ctx->pc = 0x2A64DCu;
label_2a64dc:
    // 0x2a64dc: 0x8fb50280  lw          $s5, 0x280($sp)
    ctx->pc = 0x2a64dcu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
label_2a64e0:
    // 0x2a64e0: 0xc6a10120  lwc1        $f1, 0x120($s5)
    ctx->pc = 0x2a64e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2a64e4:
    // 0x2a64e4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2a64e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a64e8:
    // 0x2a64e8: 0x0  nop
    ctx->pc = 0x2a64e8u;
    // NOP
label_2a64ec:
    // 0x2a64ec: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2a64ecu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2a64f0:
    // 0x2a64f0: 0x45010014  bc1t        . + 4 + (0x14 << 2)
label_2a64f4:
    if (ctx->pc == 0x2A64F4u) {
        ctx->pc = 0x2A64F8u;
        goto label_2a64f8;
    }
    ctx->pc = 0x2A64F0u;
    {
        const bool branch_taken_0x2a64f0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a64f0) {
            ctx->pc = 0x2A6544u;
            goto label_2a6544;
        }
    }
    ctx->pc = 0x2A64F8u;
label_2a64f8:
    // 0x2a64f8: 0x8f84bb70  lw          $a0, -0x4490($gp)
    ctx->pc = 0x2a64f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
label_2a64fc:
    // 0x2a64fc: 0x24850020  addiu       $a1, $a0, 0x20
    ctx->pc = 0x2a64fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
label_2a6500:
    // 0x2a6500: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2a6500u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2a6504:
    // 0x2a6504: 0xc0858ac  jal         func_2162B0
label_2a6508:
    if (ctx->pc == 0x2A6508u) {
        ctx->pc = 0x2A650Cu;
        goto label_2a650c;
    }
    ctx->pc = 0x2A6504u;
    SET_GPR_U32(ctx, 31, 0x2A650Cu);
    ctx->pc = 0x2162B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2162B0u, 0x2A6504u, 0x2A650Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A650Cu;
label_2a650c:
    // 0x2a650c: 0x8fa20280  lw          $v0, 0x280($sp)
    ctx->pc = 0x2a650cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
label_2a6510:
    // 0x2a6510: 0xc441002c  lwc1        $f1, 0x2C($v0)
    ctx->pc = 0x2a6510u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2a6514:
    // 0x2a6514: 0x46010041  sub.s       $f1, $f0, $f1
    ctx->pc = 0x2a6514u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_2a6518:
    // 0x2a6518: 0x8fa40280  lw          $a0, 0x280($sp)
    ctx->pc = 0x2a6518u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
label_2a651c:
    // 0x2a651c: 0xc4800120  lwc1        $f0, 0x120($a0)
    ctx->pc = 0x2a651cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a6520:
    // 0x2a6520: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2a6520u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2a6524:
    // 0x2a6524: 0x4501007a  bc1t        . + 4 + (0x7A << 2)
label_2a6528:
    if (ctx->pc == 0x2A6528u) {
        ctx->pc = 0x2A652Cu;
        goto label_2a652c;
    }
    ctx->pc = 0x2A6524u;
    {
        const bool branch_taken_0x2a6524 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a6524) {
            ctx->pc = 0x2A6710u;
            goto label_2a6710;
        }
    }
    ctx->pc = 0x2A652Cu;
label_2a652c:
    // 0x2a652c: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x2a652cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_2a6530:
    // 0x2a6530: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a6530u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a6534:
    // 0x2a6534: 0x8fa20280  lw          $v0, 0x280($sp)
    ctx->pc = 0x2a6534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
label_2a6538:
    // 0x2a6538: 0xe4400120  swc1        $f0, 0x120($v0)
    ctx->pc = 0x2a6538u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 288), bits); }
label_2a653c:
    // 0x2a653c: 0x10000074  b           . + 4 + (0x74 << 2)
label_2a6540:
    if (ctx->pc == 0x2A6540u) {
        ctx->pc = 0x2A6544u;
        goto label_2a6544;
    }
    ctx->pc = 0x2A653Cu;
    {
        const bool branch_taken_0x2a653c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a653c) {
            ctx->pc = 0x2A6710u;
            goto label_2a6710;
        }
    }
    ctx->pc = 0x2A6544u;
label_2a6544:
    // 0x2a6544: 0x8fa20280  lw          $v0, 0x280($sp)
    ctx->pc = 0x2a6544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
label_2a6548:
    // 0x2a6548: 0x9042011c  lbu         $v0, 0x11C($v0)
    ctx->pc = 0x2a6548u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 284)));
label_2a654c:
    // 0x2a654c: 0x10400070  beqz        $v0, . + 4 + (0x70 << 2)
label_2a6550:
    if (ctx->pc == 0x2A6550u) {
        ctx->pc = 0x2A6554u;
        goto label_2a6554;
    }
    ctx->pc = 0x2A654Cu;
    {
        const bool branch_taken_0x2a654c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a654c) {
            ctx->pc = 0x2A6710u;
            goto label_2a6710;
        }
    }
    ctx->pc = 0x2A6554u;
label_2a6554:
    // 0x2a6554: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a6554u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2a6558:
    // 0x2a6558: 0xc1218cc  jal         func_486330
label_2a655c:
    if (ctx->pc == 0x2A655Cu) {
        ctx->pc = 0x2A6560u;
        goto label_2a6560;
    }
    ctx->pc = 0x2A6558u;
    SET_GPR_U32(ctx, 31, 0x2A6560u);
    ctx->pc = 0x486330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x486330u, 0x2A6558u, 0x2A6560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6560u;
label_2a6560:
    // 0x2a6560: 0x8fa40280  lw          $a0, 0x280($sp)
    ctx->pc = 0x2a6560u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
label_2a6564:
    // 0x2a6564: 0xc4810120  lwc1        $f1, 0x120($a0)
    ctx->pc = 0x2a6564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2a6568:
    // 0x2a6568: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2a6568u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2a656c:
    // 0x2a656c: 0x45000068  bc1f        . + 4 + (0x68 << 2)
label_2a6570:
    if (ctx->pc == 0x2A6570u) {
        ctx->pc = 0x2A6574u;
        goto label_2a6574;
    }
    ctx->pc = 0x2A656Cu;
    {
        const bool branch_taken_0x2a656c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a656c) {
            ctx->pc = 0x2A6710u;
            goto label_2a6710;
        }
    }
    ctx->pc = 0x2A6574u;
label_2a6574:
    // 0x2a6574: 0x8fa20280  lw          $v0, 0x280($sp)
    ctx->pc = 0x2a6574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
label_2a6578:
    // 0x2a6578: 0xc4410120  lwc1        $f1, 0x120($v0)
    ctx->pc = 0x2a6578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2a657c:
    // 0x2a657c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2a657cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a6580:
    // 0x2a6580: 0x0  nop
    ctx->pc = 0x2a6580u;
    // NOP
label_2a6584:
    // 0x2a6584: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x2a6584u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2a6588:
    // 0x2a6588: 0x45010061  bc1t        . + 4 + (0x61 << 2)
label_2a658c:
    if (ctx->pc == 0x2A658Cu) {
        ctx->pc = 0x2A6590u;
        goto label_2a6590;
    }
    ctx->pc = 0x2A6588u;
    {
        const bool branch_taken_0x2a6588 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a6588) {
            ctx->pc = 0x2A6710u;
            goto label_2a6710;
        }
    }
    ctx->pc = 0x2A6590u;
label_2a6590:
    // 0x2a6590: 0x3c04bf80  lui         $a0, 0xBF80
    ctx->pc = 0x2a6590u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49024 << 16));
label_2a6594:
    // 0x2a6594: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2a6594u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a6598:
    // 0x2a6598: 0x8fa20280  lw          $v0, 0x280($sp)
    ctx->pc = 0x2a6598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
label_2a659c:
    // 0x2a659c: 0xe4400120  swc1        $f0, 0x120($v0)
    ctx->pc = 0x2a659cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 288), bits); }
label_2a65a0:
    // 0x2a65a0: 0x1000005b  b           . + 4 + (0x5B << 2)
label_2a65a4:
    if (ctx->pc == 0x2A65A4u) {
        ctx->pc = 0x2A65A8u;
        goto label_2a65a8;
    }
    ctx->pc = 0x2A65A0u;
    {
        const bool branch_taken_0x2a65a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a65a0) {
            ctx->pc = 0x2A6710u;
            goto label_2a6710;
        }
    }
    ctx->pc = 0x2A65A8u;
label_2a65a8:
    // 0x2a65a8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2a65a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2a65ac:
    // 0x2a65ac: 0xc0480fc  jal         func_1203F0
label_2a65b0:
    if (ctx->pc == 0x2A65B0u) {
        ctx->pc = 0x2A65B4u;
        goto label_2a65b4;
    }
    ctx->pc = 0x2A65ACu;
    SET_GPR_U32(ctx, 31, 0x2A65B4u);
    ctx->pc = 0x1203F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1203F0u, 0x2A65ACu, 0x2A65B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A65B4u;
label_2a65b4:
    // 0x2a65b4: 0xafa20214  sw          $v0, 0x214($sp)
    ctx->pc = 0x2a65b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 532), GPR_U32(ctx, 2));
label_2a65b8:
    // 0x2a65b8: 0x8fa40280  lw          $a0, 0x280($sp)
    ctx->pc = 0x2a65b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
label_2a65bc:
    // 0x2a65bc: 0x24820055  addiu       $v0, $a0, 0x55
    ctx->pc = 0x2a65bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 85));
label_2a65c0:
    // 0x2a65c0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a65c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a65c4:
    // 0x2a65c4: 0x2785a440  addiu       $a1, $gp, -0x5BC0
    ctx->pc = 0x2a65c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294943808));
label_2a65c8:
    // 0x2a65c8: 0xc0bc824  jal         func_2F2090
label_2a65cc:
    if (ctx->pc == 0x2A65CCu) {
        ctx->pc = 0x2A65D0u;
        goto label_2a65d0;
    }
    ctx->pc = 0x2A65C8u;
    SET_GPR_U32(ctx, 31, 0x2A65D0u);
    ctx->pc = 0x2F2090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F2090u, 0x2A65C8u, 0x2A65D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A65D0u;
label_2a65d0:
    // 0x2a65d0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2a65d4:
    if (ctx->pc == 0x2A65D4u) {
        ctx->pc = 0x2A65D8u;
        goto label_2a65d8;
    }
    ctx->pc = 0x2A65D0u;
    {
        const bool branch_taken_0x2a65d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a65d0) {
            ctx->pc = 0x2A65E8u;
            goto label_2a65e8;
        }
    }
    ctx->pc = 0x2A65D8u;
label_2a65d8:
    // 0x2a65d8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2a65d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a65dc:
    // 0x2a65dc: 0xa3a40276  sb          $a0, 0x276($sp)
    ctx->pc = 0x2a65dcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 630), (uint8_t)GPR_U32(ctx, 4));
label_2a65e0:
    // 0x2a65e0: 0x10000002  b           . + 4 + (0x2 << 2)
label_2a65e4:
    if (ctx->pc == 0x2A65E4u) {
        ctx->pc = 0x2A65E8u;
        goto label_2a65e8;
    }
    ctx->pc = 0x2A65E0u;
    {
        const bool branch_taken_0x2a65e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a65e0) {
            ctx->pc = 0x2A65ECu;
            goto label_2a65ec;
        }
    }
    ctx->pc = 0x2A65E8u;
label_2a65e8:
    // 0x2a65e8: 0xa3a00276  sb          $zero, 0x276($sp)
    ctx->pc = 0x2a65e8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 630), (uint8_t)GPR_U32(ctx, 0));
label_2a65ec:
    // 0x2a65ec: 0x93a20276  lbu         $v0, 0x276($sp)
    ctx->pc = 0x2a65ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 630)));
label_2a65f0:
    // 0x2a65f0: 0xa3a20278  sb          $v0, 0x278($sp)
    ctx->pc = 0x2a65f0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 632), (uint8_t)GPR_U32(ctx, 2));
label_2a65f4:
    // 0x2a65f4: 0x8fa20280  lw          $v0, 0x280($sp)
    ctx->pc = 0x2a65f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
label_2a65f8:
    // 0x2a65f8: 0x7fa200f0  sq          $v0, 0xF0($sp)
    ctx->pc = 0x2a65f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 2));
label_2a65fc:
    // 0x2a65fc: 0x7ba200f0  lq          $v0, 0xF0($sp)
    ctx->pc = 0x2a65fcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_2a6600:
    // 0x2a6600: 0x24430055  addiu       $v1, $v0, 0x55
    ctx->pc = 0x2a6600u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 85));
label_2a6604:
    // 0x2a6604: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x2a6604u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2a6608:
    // 0x2a6608: 0x2782a448  addiu       $v0, $gp, -0x5BB8
    ctx->pc = 0x2a6608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294943816));
label_2a660c:
    // 0x2a660c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2a660cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a6610:
    // 0x2a6610: 0xc0bc824  jal         func_2F2090
label_2a6614:
    if (ctx->pc == 0x2A6614u) {
        ctx->pc = 0x2A6618u;
        goto label_2a6618;
    }
    ctx->pc = 0x2A6610u;
    SET_GPR_U32(ctx, 31, 0x2A6618u);
    ctx->pc = 0x2F2090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F2090u, 0x2A6610u, 0x2A6618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6618u;
label_2a6618:
    // 0x2a6618: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2a6618u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a661c:
    // 0x2a661c: 0x10c00005  beqz        $a2, . + 4 + (0x5 << 2)
label_2a6620:
    if (ctx->pc == 0x2A6620u) {
        ctx->pc = 0x2A6624u;
        goto label_2a6624;
    }
    ctx->pc = 0x2A661Cu;
    {
        const bool branch_taken_0x2a661c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a661c) {
            ctx->pc = 0x2A6634u;
            goto label_2a6634;
        }
    }
    ctx->pc = 0x2A6624u;
label_2a6624:
    // 0x2a6624: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a6624u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a6628:
    // 0x2a6628: 0xa3a20275  sb          $v0, 0x275($sp)
    ctx->pc = 0x2a6628u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 629), (uint8_t)GPR_U32(ctx, 2));
label_2a662c:
    // 0x2a662c: 0x10000002  b           . + 4 + (0x2 << 2)
label_2a6630:
    if (ctx->pc == 0x2A6630u) {
        ctx->pc = 0x2A6634u;
        goto label_2a6634;
    }
    ctx->pc = 0x2A662Cu;
    {
        const bool branch_taken_0x2a662c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a662c) {
            ctx->pc = 0x2A6638u;
            goto label_2a6638;
        }
    }
    ctx->pc = 0x2A6634u;
label_2a6634:
    // 0x2a6634: 0xa3a00275  sb          $zero, 0x275($sp)
    ctx->pc = 0x2a6634u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 629), (uint8_t)GPR_U32(ctx, 0));
label_2a6638:
    // 0x2a6638: 0x93a50278  lbu         $a1, 0x278($sp)
    ctx->pc = 0x2a6638u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 632)));
label_2a663c:
    // 0x2a663c: 0x30a400ff  andi        $a0, $a1, 0xFF
    ctx->pc = 0x2a663cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_2a6640:
    // 0x2a6640: 0x93a20275  lbu         $v0, 0x275($sp)
    ctx->pc = 0x2a6640u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 629)));
label_2a6644:
    // 0x2a6644: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2a6644u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2a6648:
    // 0x2a6648: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2a6648u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_2a664c:
    // 0x2a664c: 0x4282b  sltu        $a1, $zero, $a0
    ctx->pc = 0x2a664cu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_2a6650:
    // 0x2a6650: 0x38a20001  xori        $v0, $a1, 0x1
    ctx->pc = 0x2a6650u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)1);
label_2a6654:
    // 0x2a6654: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2a6654u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_2a6658:
    // 0x2a6658: 0x7fa200e0  sq          $v0, 0xE0($sp)
    ctx->pc = 0x2a6658u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 2));
label_2a665c:
    // 0x2a665c: 0x7ba200e0  lq          $v0, 0xE0($sp)
    ctx->pc = 0x2a665cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_2a6660:
    // 0x2a6660: 0xa3a20278  sb          $v0, 0x278($sp)
    ctx->pc = 0x2a6660u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 632), (uint8_t)GPR_U32(ctx, 2));
label_2a6664:
    // 0x2a6664: 0x8fa40214  lw          $a0, 0x214($sp)
    ctx->pc = 0x2a6664u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 532)));
label_2a6668:
    // 0x2a6668: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
label_2a666c:
    if (ctx->pc == 0x2A666Cu) {
        ctx->pc = 0x2A6670u;
        goto label_2a6670;
    }
    ctx->pc = 0x2A6668u;
    {
        const bool branch_taken_0x2a6668 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a6668) {
            ctx->pc = 0x2A668Cu;
            goto label_2a668c;
        }
    }
    ctx->pc = 0x2A6670u;
label_2a6670:
    // 0x2a6670: 0x93a40278  lbu         $a0, 0x278($sp)
    ctx->pc = 0x2a6670u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 632)));
label_2a6674:
    // 0x2a6674: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_2a6678:
    if (ctx->pc == 0x2A6678u) {
        ctx->pc = 0x2A667Cu;
        goto label_2a667c;
    }
    ctx->pc = 0x2A6674u;
    {
        const bool branch_taken_0x2a6674 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a6674) {
            ctx->pc = 0x2A668Cu;
            goto label_2a668c;
        }
    }
    ctx->pc = 0x2A667Cu;
label_2a667c:
    // 0x2a667c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2a667cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a6680:
    // 0x2a6680: 0xa3a5027e  sb          $a1, 0x27E($sp)
    ctx->pc = 0x2a6680u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 638), (uint8_t)GPR_U32(ctx, 5));
label_2a6684:
    // 0x2a6684: 0x1000001b  b           . + 4 + (0x1B << 2)
label_2a6688:
    if (ctx->pc == 0x2A6688u) {
        ctx->pc = 0x2A668Cu;
        goto label_2a668c;
    }
    ctx->pc = 0x2A6684u;
    {
        const bool branch_taken_0x2a6684 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a6684) {
            ctx->pc = 0x2A66F4u;
            goto label_2a66f4;
        }
    }
    ctx->pc = 0x2A668Cu;
label_2a668c:
    // 0x2a668c: 0x8fa20280  lw          $v0, 0x280($sp)
    ctx->pc = 0x2a668cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
label_2a6690:
    // 0x2a6690: 0x8045005a  lb          $a1, 0x5A($v0)
    ctx->pc = 0x2a6690u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 90)));
label_2a6694:
    // 0x2a6694: 0x5163c  dsll32      $v0, $a1, 24
    ctx->pc = 0x2a6694u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 24));
label_2a6698:
    // 0x2a6698: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x2a6698u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
label_2a669c:
    // 0x2a669c: 0x24030078  addiu       $v1, $zero, 0x78
    ctx->pc = 0x2a669cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
label_2a66a0:
    // 0x2a66a0: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
label_2a66a4:
    if (ctx->pc == 0x2A66A4u) {
        ctx->pc = 0x2A66A8u;
        goto label_2a66a8;
    }
    ctx->pc = 0x2A66A0u;
    {
        const bool branch_taken_0x2a66a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2a66a0) {
            ctx->pc = 0x2A66B8u;
            goto label_2a66b8;
        }
    }
    ctx->pc = 0x2A66A8u;
label_2a66a8:
    // 0x2a66a8: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x2a66a8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a66ac:
    // 0x2a66ac: 0xa3b6027e  sb          $s6, 0x27E($sp)
    ctx->pc = 0x2a66acu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 638), (uint8_t)GPR_U32(ctx, 22));
label_2a66b0:
    // 0x2a66b0: 0x10000010  b           . + 4 + (0x10 << 2)
label_2a66b4:
    if (ctx->pc == 0x2A66B4u) {
        ctx->pc = 0x2A66B8u;
        goto label_2a66b8;
    }
    ctx->pc = 0x2A66B0u;
    {
        const bool branch_taken_0x2a66b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a66b0) {
            ctx->pc = 0x2A66F4u;
            goto label_2a66f4;
        }
    }
    ctx->pc = 0x2A66B8u;
label_2a66b8:
    // 0x2a66b8: 0x8fa40280  lw          $a0, 0x280($sp)
    ctx->pc = 0x2a66b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
label_2a66bc:
    // 0x2a66bc: 0x90820039  lbu         $v0, 0x39($a0)
    ctx->pc = 0x2a66bcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 57)));
label_2a66c0:
    // 0x2a66c0: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_2a66c4:
    if (ctx->pc == 0x2A66C4u) {
        ctx->pc = 0x2A66C8u;
        goto label_2a66c8;
    }
    ctx->pc = 0x2A66C0u;
    {
        const bool branch_taken_0x2a66c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a66c0) {
            ctx->pc = 0x2A66F4u;
            goto label_2a66f4;
        }
    }
    ctx->pc = 0x2A66C8u;
label_2a66c8:
    // 0x2a66c8: 0x8fa50270  lw          $a1, 0x270($sp)
    ctx->pc = 0x2a66c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
label_2a66cc:
    // 0x2a66cc: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2a66ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2a66d0:
    // 0x2a66d0: 0xc0a88a0  jal         func_2A2280
label_2a66d4:
    if (ctx->pc == 0x2A66D4u) {
        ctx->pc = 0x2A66D8u;
        goto label_2a66d8;
    }
    ctx->pc = 0x2A66D0u;
    SET_GPR_U32(ctx, 31, 0x2A66D8u);
    ctx->pc = 0x2A2280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2280u, 0x2A66D0u, 0x2A66D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A66D8u;
label_2a66d8:
    // 0x2a66d8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2a66d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a66dc:
    // 0x2a66dc: 0xafa60210  sw          $a2, 0x210($sp)
    ctx->pc = 0x2a66dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 528), GPR_U32(ctx, 6));
label_2a66e0:
    // 0x2a66e0: 0x8fa20210  lw          $v0, 0x210($sp)
    ctx->pc = 0x2a66e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
label_2a66e4:
    // 0x2a66e4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2a66e8:
    if (ctx->pc == 0x2A66E8u) {
        ctx->pc = 0x2A66ECu;
        goto label_2a66ec;
    }
    ctx->pc = 0x2A66E4u;
    {
        const bool branch_taken_0x2a66e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a66e4) {
            ctx->pc = 0x2A66F4u;
            goto label_2a66f4;
        }
    }
    ctx->pc = 0x2A66ECu;
label_2a66ec:
    // 0x2a66ec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2a66ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a66f0:
    // 0x2a66f0: 0xa3a3027e  sb          $v1, 0x27E($sp)
    ctx->pc = 0x2a66f0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 638), (uint8_t)GPR_U32(ctx, 3));
label_2a66f4:
    // 0x2a66f4: 0x8fa20280  lw          $v0, 0x280($sp)
    ctx->pc = 0x2a66f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
label_2a66f8:
    // 0x2a66f8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a66f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a66fc:
    // 0x2a66fc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2a66fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2a6700:
    // 0x2a6700: 0x8f390038  lw          $t9, 0x38($t9)
    ctx->pc = 0x2a6700u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 56)));
label_2a6704:
    // 0x2a6704: 0x320f809  jalr        $t9
label_2a6708:
    if (ctx->pc == 0x2A6708u) {
        ctx->pc = 0x2A670Cu;
        goto label_2a670c;
    }
    ctx->pc = 0x2A6704u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2A670Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A6704u, 0x2A670Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A670Cu;
label_2a670c:
    // 0x2a670c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2a670cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a6710:
    // 0x2a6710: 0x93b2027e  lbu         $s2, 0x27E($sp)
    ctx->pc = 0x2a6710u;
    SET_GPR_ZE32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 638)));
label_2a6714:
    // 0x2a6714: 0x12400011  beqz        $s2, . + 4 + (0x11 << 2)
label_2a6718:
    if (ctx->pc == 0x2A6718u) {
        ctx->pc = 0x2A671Cu;
        goto label_2a671c;
    }
    ctx->pc = 0x2A6714u;
    {
        const bool branch_taken_0x2a6714 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a6714) {
            ctx->pc = 0x2A675Cu;
            goto label_2a675c;
        }
    }
    ctx->pc = 0x2A671Cu;
label_2a671c:
    // 0x2a671c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a671cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2a6720:
    // 0x2a6720: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x2a6720u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_2a6724:
    // 0x2a6724: 0xc121e84  jal         func_487A10
label_2a6728:
    if (ctx->pc == 0x2A6728u) {
        ctx->pc = 0x2A672Cu;
        goto label_2a672c;
    }
    ctx->pc = 0x2A6724u;
    SET_GPR_U32(ctx, 31, 0x2A672Cu);
    ctx->pc = 0x487A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x487A10u, 0x2A6724u, 0x2A672Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A672Cu;
label_2a672c:
    // 0x2a672c: 0x27a30198  addiu       $v1, $sp, 0x198
    ctx->pc = 0x2a672cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 408));
label_2a6730:
    // 0x2a6730: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x2a6730u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2a6734:
    // 0x2a6734: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2a6734u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2a6738:
    // 0x2a6738: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2a6738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a673c:
    // 0x2a673c: 0xe4620000  swc1        $f2, 0x0($v1)
    ctx->pc = 0x2a673cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_2a6740:
    // 0x2a6740: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x2a6740u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_2a6744:
    // 0x2a6744: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x2a6744u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_2a6748:
    // 0x2a6748: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2a6748u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2a674c:
    // 0x2a674c: 0x27a50198  addiu       $a1, $sp, 0x198
    ctx->pc = 0x2a674cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 408));
label_2a6750:
    // 0x2a6750: 0xc0969f0  jal         func_25A7C0
label_2a6754:
    if (ctx->pc == 0x2A6754u) {
        ctx->pc = 0x2A6758u;
        goto label_2a6758;
    }
    ctx->pc = 0x2A6750u;
    SET_GPR_U32(ctx, 31, 0x2A6758u);
    ctx->pc = 0x25A7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A7C0u, 0x2A6750u, 0x2A6758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6758u;
label_2a6758:
    // 0x2a6758: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2a6758u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a675c:
    // 0x2a675c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a675cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2a6760:
    // 0x2a6760: 0xc1218fc  jal         func_4863F0
label_2a6764:
    if (ctx->pc == 0x2A6764u) {
        ctx->pc = 0x2A6768u;
        goto label_2a6768;
    }
    ctx->pc = 0x2A6760u;
    SET_GPR_U32(ctx, 31, 0x2A6768u);
    ctx->pc = 0x4863F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4863F0u, 0x2A6760u, 0x2A6768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6768u;
label_2a6768:
    // 0x2a6768: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2a6768u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2a676c:
    // 0x2a676c: 0xa3a20277  sb          $v0, 0x277($sp)
    ctx->pc = 0x2a676cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 631), (uint8_t)GPR_U32(ctx, 2));
label_2a6770:
    // 0x2a6770: 0x93a2027f  lbu         $v0, 0x27F($sp)
    ctx->pc = 0x2a6770u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 639)));
label_2a6774:
    // 0x2a6774: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2a6778:
    if (ctx->pc == 0x2A6778u) {
        ctx->pc = 0x2A677Cu;
        goto label_2a677c;
    }
    ctx->pc = 0x2A6774u;
    {
        const bool branch_taken_0x2a6774 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a6774) {
            ctx->pc = 0x2A678Cu;
            goto label_2a678c;
        }
    }
    ctx->pc = 0x2A677Cu;
label_2a677c:
    // 0x2a677c: 0xc7808048  lwc1        $f0, -0x7FB8($gp)
    ctx->pc = 0x2a677cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a6780:
    // 0x2a6780: 0xe7a0020c  swc1        $f0, 0x20C($sp)
    ctx->pc = 0x2a6780u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 524), bits); }
label_2a6784:
    // 0x2a6784: 0x10000007  b           . + 4 + (0x7 << 2)
label_2a6788:
    if (ctx->pc == 0x2A6788u) {
        ctx->pc = 0x2A678Cu;
        goto label_2a678c;
    }
    ctx->pc = 0x2A6784u;
    {
        const bool branch_taken_0x2a6784 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a6784) {
            ctx->pc = 0x2A67A4u;
            goto label_2a67a4;
        }
    }
    ctx->pc = 0x2A678Cu;
label_2a678c:
    // 0x2a678c: 0x8f95bb70  lw          $s5, -0x4490($gp)
    ctx->pc = 0x2a678cu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
label_2a6790:
    // 0x2a6790: 0x8fa50280  lw          $a1, 0x280($sp)
    ctx->pc = 0x2a6790u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
label_2a6794:
    // 0x2a6794: 0xc6a1000c  lwc1        $f1, 0xC($s5)
    ctx->pc = 0x2a6794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2a6798:
    // 0x2a6798: 0xc4a001ac  lwc1        $f0, 0x1AC($a1)
    ctx->pc = 0x2a6798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 428)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a679c:
    // 0x2a679c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2a679cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2a67a0:
    // 0x2a67a0: 0xe7a0020c  swc1        $f0, 0x20C($sp)
    ctx->pc = 0x2a67a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 524), bits); }
label_2a67a4:
    // 0x2a67a4: 0x8fa40280  lw          $a0, 0x280($sp)
    ctx->pc = 0x2a67a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
label_2a67a8:
    // 0x2a67a8: 0x90850188  lbu         $a1, 0x188($a0)
    ctx->pc = 0x2a67a8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 392)));
label_2a67ac:
    // 0x2a67ac: 0x14a00013  bnez        $a1, . + 4 + (0x13 << 2)
label_2a67b0:
    if (ctx->pc == 0x2A67B0u) {
        ctx->pc = 0x2A67B4u;
        goto label_2a67b4;
    }
    ctx->pc = 0x2A67ACu;
    {
        const bool branch_taken_0x2a67ac = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a67ac) {
            ctx->pc = 0x2A67FCu;
            goto label_2a67fc;
        }
    }
    ctx->pc = 0x2A67B4u;
label_2a67b4:
    // 0x2a67b4: 0x8fa20280  lw          $v0, 0x280($sp)
    ctx->pc = 0x2a67b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
label_2a67b8:
    // 0x2a67b8: 0x90420189  lbu         $v0, 0x189($v0)
    ctx->pc = 0x2a67b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 393)));
label_2a67bc:
    // 0x2a67bc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_2a67c0:
    if (ctx->pc == 0x2A67C0u) {
        ctx->pc = 0x2A67C4u;
        goto label_2a67c4;
    }
    ctx->pc = 0x2A67BCu;
    {
        const bool branch_taken_0x2a67bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a67bc) {
            ctx->pc = 0x2A67DCu;
            goto label_2a67dc;
        }
    }
    ctx->pc = 0x2A67C4u;
label_2a67c4:
    // 0x2a67c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a67c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2a67c8:
    // 0x2a67c8: 0xc7ac020c  lwc1        $f12, 0x20C($sp)
    ctx->pc = 0x2a67c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 524)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2a67cc:
    // 0x2a67cc: 0xc121910  jal         func_486440
label_2a67d0:
    if (ctx->pc == 0x2A67D0u) {
        ctx->pc = 0x2A67D4u;
        goto label_2a67d4;
    }
    ctx->pc = 0x2A67CCu;
    SET_GPR_U32(ctx, 31, 0x2A67D4u);
    ctx->pc = 0x486440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x486440u, 0x2A67CCu, 0x2A67D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A67D4u;
label_2a67d4:
    // 0x2a67d4: 0x1000000f  b           . + 4 + (0xF << 2)
label_2a67d8:
    if (ctx->pc == 0x2A67D8u) {
        ctx->pc = 0x2A67DCu;
        goto label_2a67dc;
    }
    ctx->pc = 0x2A67D4u;
    {
        const bool branch_taken_0x2a67d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a67d4) {
            ctx->pc = 0x2A6814u;
            goto label_2a6814;
        }
    }
    ctx->pc = 0x2A67DCu;
label_2a67dc:
    // 0x2a67dc: 0xc7a0020c  lwc1        $f0, 0x20C($sp)
    ctx->pc = 0x2a67dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 524)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a67e0:
    // 0x2a67e0: 0x46000307  neg.s       $f12, $f0
    ctx->pc = 0x2a67e0u;
    ctx->f[12] = FPU_NEG_S(ctx->f[0]);
label_2a67e4:
    // 0x2a67e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a67e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2a67e8:
    // 0x2a67e8: 0xc121910  jal         func_486440
label_2a67ec:
    if (ctx->pc == 0x2A67ECu) {
        ctx->pc = 0x2A67F0u;
        goto label_2a67f0;
    }
    ctx->pc = 0x2A67E8u;
    SET_GPR_U32(ctx, 31, 0x2A67F0u);
    ctx->pc = 0x486440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x486440u, 0x2A67E8u, 0x2A67F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A67F0u;
label_2a67f0:
    // 0x2a67f0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a67f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a67f4:
    // 0x2a67f4: 0x10000007  b           . + 4 + (0x7 << 2)
label_2a67f8:
    if (ctx->pc == 0x2A67F8u) {
        ctx->pc = 0x2A67FCu;
        goto label_2a67fc;
    }
    ctx->pc = 0x2A67F4u;
    {
        const bool branch_taken_0x2a67f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a67f4) {
            ctx->pc = 0x2A6814u;
            goto label_2a6814;
        }
    }
    ctx->pc = 0x2A67FCu;
label_2a67fc:
    // 0x2a67fc: 0xc7a0020c  lwc1        $f0, 0x20C($sp)
    ctx->pc = 0x2a67fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 524)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a6800:
    // 0x2a6800: 0x46000307  neg.s       $f12, $f0
    ctx->pc = 0x2a6800u;
    ctx->f[12] = FPU_NEG_S(ctx->f[0]);
label_2a6804:
    // 0x2a6804: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a6804u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2a6808:
    // 0x2a6808: 0xc121910  jal         func_486440
label_2a680c:
    if (ctx->pc == 0x2A680Cu) {
        ctx->pc = 0x2A6810u;
        goto label_2a6810;
    }
    ctx->pc = 0x2A6808u;
    SET_GPR_U32(ctx, 31, 0x2A6810u);
    ctx->pc = 0x486440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x486440u, 0x2A6808u, 0x2A6810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6810u;
label_2a6810:
    // 0x2a6810: 0x7fa200d0  sq          $v0, 0xD0($sp)
    ctx->pc = 0x2a6810u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 2));
label_2a6814:
    // 0x2a6814: 0x93a3027f  lbu         $v1, 0x27F($sp)
    ctx->pc = 0x2a6814u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 639)));
label_2a6818:
    // 0x2a6818: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
label_2a681c:
    if (ctx->pc == 0x2A681Cu) {
        ctx->pc = 0x2A6820u;
        goto label_2a6820;
    }
    ctx->pc = 0x2A6818u;
    {
        const bool branch_taken_0x2a6818 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a6818) {
            ctx->pc = 0x2A682Cu;
            goto label_2a682c;
        }
    }
    ctx->pc = 0x2A6820u;
label_2a6820:
    // 0x2a6820: 0x93a40277  lbu         $a0, 0x277($sp)
    ctx->pc = 0x2a6820u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 631)));
label_2a6824:
    // 0x2a6824: 0x10800059  beqz        $a0, . + 4 + (0x59 << 2)
label_2a6828:
    if (ctx->pc == 0x2A6828u) {
        ctx->pc = 0x2A682Cu;
        goto label_2a682c;
    }
    ctx->pc = 0x2A6824u;
    {
        const bool branch_taken_0x2a6824 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a6824) {
            ctx->pc = 0x2A698Cu;
            goto label_2a698c;
        }
    }
    ctx->pc = 0x2A682Cu;
label_2a682c:
    // 0x2a682c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2a682cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2a6830:
    // 0x2a6830: 0xc0480fc  jal         func_1203F0
label_2a6834:
    if (ctx->pc == 0x2A6834u) {
        ctx->pc = 0x2A6838u;
        goto label_2a6838;
    }
    ctx->pc = 0x2A6830u;
    SET_GPR_U32(ctx, 31, 0x2A6838u);
    ctx->pc = 0x1203F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1203F0u, 0x2A6830u, 0x2A6838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6838u;
label_2a6838:
    // 0x2a6838: 0xafa20208  sw          $v0, 0x208($sp)
    ctx->pc = 0x2a6838u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 520), GPR_U32(ctx, 2));
label_2a683c:
    // 0x2a683c: 0x8fa50208  lw          $a1, 0x208($sp)
    ctx->pc = 0x2a683cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 520)));
label_2a6840:
    // 0x2a6840: 0x10a00052  beqz        $a1, . + 4 + (0x52 << 2)
label_2a6844:
    if (ctx->pc == 0x2A6844u) {
        ctx->pc = 0x2A6848u;
        goto label_2a6848;
    }
    ctx->pc = 0x2A6840u;
    {
        const bool branch_taken_0x2a6840 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a6840) {
            ctx->pc = 0x2A698Cu;
            goto label_2a698c;
        }
    }
    ctx->pc = 0x2A6848u;
label_2a6848:
    // 0x2a6848: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a6848u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2a684c:
    // 0x2a684c: 0x24070064  addiu       $a3, $zero, 0x64
    ctx->pc = 0x2a684cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_2a6850:
    // 0x2a6850: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x2a6850u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2a6854:
    // 0x2a6854: 0xc121e84  jal         func_487A10
label_2a6858:
    if (ctx->pc == 0x2A6858u) {
        ctx->pc = 0x2A685Cu;
        goto label_2a685c;
    }
    ctx->pc = 0x2A6854u;
    SET_GPR_U32(ctx, 31, 0x2A685Cu);
    ctx->pc = 0x487A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x487A10u, 0x2A6854u, 0x2A685Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A685Cu;
label_2a685c:
    // 0x2a685c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2a685cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a6860:
    // 0x2a6860: 0x27a60188  addiu       $a2, $sp, 0x188
    ctx->pc = 0x2a6860u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 392));
label_2a6864:
    // 0x2a6864: 0xc4a20000  lwc1        $f2, 0x0($a1)
    ctx->pc = 0x2a6864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2a6868:
    // 0x2a6868: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x2a6868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2a686c:
    // 0x2a686c: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x2a686cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a6870:
    // 0x2a6870: 0xe4c20000  swc1        $f2, 0x0($a2)
    ctx->pc = 0x2a6870u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
label_2a6874:
    // 0x2a6874: 0xe4c10004  swc1        $f1, 0x4($a2)
    ctx->pc = 0x2a6874u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
label_2a6878:
    // 0x2a6878: 0xe4c00008  swc1        $f0, 0x8($a2)
    ctx->pc = 0x2a6878u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
label_2a687c:
    // 0x2a687c: 0x27a20128  addiu       $v0, $sp, 0x128
    ctx->pc = 0x2a687cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 296));
label_2a6880:
    // 0x2a6880: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x2a6880u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
label_2a6884:
    // 0x2a6884: 0x7ba400c0  lq          $a0, 0xC0($sp)
    ctx->pc = 0x2a6884u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_2a6888:
    // 0x2a6888: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2a6888u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2a688c:
    // 0x2a688c: 0xc096a08  jal         func_25A820
label_2a6890:
    if (ctx->pc == 0x2A6890u) {
        ctx->pc = 0x2A6894u;
        goto label_2a6894;
    }
    ctx->pc = 0x2A688Cu;
    SET_GPR_U32(ctx, 31, 0x2A6894u);
    ctx->pc = 0x25A820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A820u, 0x2A688Cu, 0x2A6894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6894u;
label_2a6894:
    // 0x2a6894: 0x27a40128  addiu       $a0, $sp, 0x128
    ctx->pc = 0x2a6894u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 296));
label_2a6898:
    // 0x2a6898: 0x27a50168  addiu       $a1, $sp, 0x168
    ctx->pc = 0x2a6898u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 360));
label_2a689c:
    // 0x2a689c: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x2a689cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2a68a0:
    // 0x2a68a0: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x2a68a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2a68a4:
    // 0x2a68a4: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x2a68a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a68a8:
    // 0x2a68a8: 0xe4a20000  swc1        $f2, 0x0($a1)
    ctx->pc = 0x2a68a8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
label_2a68ac:
    // 0x2a68ac: 0xe4a10004  swc1        $f1, 0x4($a1)
    ctx->pc = 0x2a68acu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
label_2a68b0:
    // 0x2a68b0: 0xe4a00008  swc1        $f0, 0x8($a1)
    ctx->pc = 0x2a68b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
label_2a68b4:
    // 0x2a68b4: 0xc7a10168  lwc1        $f1, 0x168($sp)
    ctx->pc = 0x2a68b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2a68b8:
    // 0x2a68b8: 0xc7a00188  lwc1        $f0, 0x188($sp)
    ctx->pc = 0x2a68b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a68bc:
    // 0x2a68bc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2a68bcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2a68c0:
    // 0x2a68c0: 0xe7a00178  swc1        $f0, 0x178($sp)
    ctx->pc = 0x2a68c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 376), bits); }
label_2a68c4:
    // 0x2a68c4: 0xc7a1016c  lwc1        $f1, 0x16C($sp)
    ctx->pc = 0x2a68c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2a68c8:
    // 0x2a68c8: 0xc7a0018c  lwc1        $f0, 0x18C($sp)
    ctx->pc = 0x2a68c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 396)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a68cc:
    // 0x2a68cc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2a68ccu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2a68d0:
    // 0x2a68d0: 0xe7a0017c  swc1        $f0, 0x17C($sp)
    ctx->pc = 0x2a68d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 380), bits); }
label_2a68d4:
    // 0x2a68d4: 0xc7a10170  lwc1        $f1, 0x170($sp)
    ctx->pc = 0x2a68d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2a68d8:
    // 0x2a68d8: 0xc7a00190  lwc1        $f0, 0x190($sp)
    ctx->pc = 0x2a68d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a68dc:
    // 0x2a68dc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2a68dcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2a68e0:
    // 0x2a68e0: 0xe7a00180  swc1        $f0, 0x180($sp)
    ctx->pc = 0x2a68e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 384), bits); }
label_2a68e4:
    // 0x2a68e4: 0xafa00204  sw          $zero, 0x204($sp)
    ctx->pc = 0x2a68e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 516), GPR_U32(ctx, 0));
label_2a68e8:
    // 0x2a68e8: 0x8fa60280  lw          $a2, 0x280($sp)
    ctx->pc = 0x2a68e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
label_2a68ec:
    // 0x2a68ec: 0x8cc2012c  lw          $v0, 0x12C($a2)
    ctx->pc = 0x2a68ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 300)));
label_2a68f0:
    // 0x2a68f0: 0xafa20204  sw          $v0, 0x204($sp)
    ctx->pc = 0x2a68f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 516), GPR_U32(ctx, 2));
label_2a68f4:
    // 0x2a68f4: 0x27a70118  addiu       $a3, $sp, 0x118
    ctx->pc = 0x2a68f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 280));
label_2a68f8:
    // 0x2a68f8: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x2a68f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2a68fc:
    // 0x2a68fc: 0x8fa50204  lw          $a1, 0x204($sp)
    ctx->pc = 0x2a68fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 516)));
label_2a6900:
    // 0x2a6900: 0xc090f80  jal         func_243E00
label_2a6904:
    if (ctx->pc == 0x2A6904u) {
        ctx->pc = 0x2A6908u;
        goto label_2a6908;
    }
    ctx->pc = 0x2A6900u;
    SET_GPR_U32(ctx, 31, 0x2A6908u);
    ctx->pc = 0x243E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243E00u, 0x2A6900u, 0x2A6908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6908u;
label_2a6908:
    // 0x2a6908: 0x27a20118  addiu       $v0, $sp, 0x118
    ctx->pc = 0x2a6908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 280));
label_2a690c:
    // 0x2a690c: 0x27a30158  addiu       $v1, $sp, 0x158
    ctx->pc = 0x2a690cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 344));
label_2a6910:
    // 0x2a6910: 0x7fa300b0  sq          $v1, 0xB0($sp)
    ctx->pc = 0x2a6910u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 3));
label_2a6914:
    // 0x2a6914: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x2a6914u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2a6918:
    // 0x2a6918: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2a6918u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2a691c:
    // 0x2a691c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2a691cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a6920:
    // 0x2a6920: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x2a6920u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_2a6924:
    // 0x2a6924: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x2a6924u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_2a6928:
    // 0x2a6928: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x2a6928u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_2a692c:
    // 0x2a692c: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2a692cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_2a6930:
    // 0x2a6930: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x2a6930u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_2a6934:
    // 0x2a6934: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2a6934u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_2a6938:
    // 0x2a6938: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2a6938u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a693c:
    // 0x2a693c: 0x0  nop
    ctx->pc = 0x2a693cu;
    // NOP
label_2a6940:
    // 0x2a6940: 0xe7a0017c  swc1        $f0, 0x17C($sp)
    ctx->pc = 0x2a6940u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 380), bits); }
label_2a6944:
    // 0x2a6944: 0xc7a10158  lwc1        $f1, 0x158($sp)
    ctx->pc = 0x2a6944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2a6948:
    // 0x2a6948: 0xc7a00178  lwc1        $f0, 0x178($sp)
    ctx->pc = 0x2a6948u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a694c:
    // 0x2a694c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2a694cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2a6950:
    // 0x2a6950: 0xe7a00158  swc1        $f0, 0x158($sp)
    ctx->pc = 0x2a6950u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 344), bits); }
label_2a6954:
    // 0x2a6954: 0xc7a1015c  lwc1        $f1, 0x15C($sp)
    ctx->pc = 0x2a6954u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 348)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2a6958:
    // 0x2a6958: 0xc7a0017c  lwc1        $f0, 0x17C($sp)
    ctx->pc = 0x2a6958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 380)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a695c:
    // 0x2a695c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2a695cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2a6960:
    // 0x2a6960: 0xe7a0015c  swc1        $f0, 0x15C($sp)
    ctx->pc = 0x2a6960u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 348), bits); }
label_2a6964:
    // 0x2a6964: 0xc7a10160  lwc1        $f1, 0x160($sp)
    ctx->pc = 0x2a6964u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2a6968:
    // 0x2a6968: 0xc7a00180  lwc1        $f0, 0x180($sp)
    ctx->pc = 0x2a6968u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a696c:
    // 0x2a696c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2a696cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2a6970:
    // 0x2a6970: 0xe7a00160  swc1        $f0, 0x160($sp)
    ctx->pc = 0x2a6970u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
label_2a6974:
    // 0x2a6974: 0x8fa50204  lw          $a1, 0x204($sp)
    ctx->pc = 0x2a6974u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 516)));
label_2a6978:
    // 0x2a6978: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2a6978u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2a697c:
    // 0x2a697c: 0x27a20158  addiu       $v0, $sp, 0x158
    ctx->pc = 0x2a697cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 344));
label_2a6980:
    // 0x2a6980: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2a6980u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a6984:
    // 0x2a6984: 0xc090f14  jal         func_243C50
label_2a6988:
    if (ctx->pc == 0x2A6988u) {
        ctx->pc = 0x2A698Cu;
        goto label_2a698c;
    }
    ctx->pc = 0x2A6984u;
    SET_GPR_U32(ctx, 31, 0x2A698Cu);
    ctx->pc = 0x243C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243C50u, 0x2A6984u, 0x2A698Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A698Cu;
label_2a698c:
    // 0x2a698c: 0x8fa50280  lw          $a1, 0x280($sp)
    ctx->pc = 0x2a698cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
label_2a6990:
    // 0x2a6990: 0x8ca701b0  lw          $a3, 0x1B0($a1)
    ctx->pc = 0x2a6990u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 432)));
label_2a6994:
    // 0x2a6994: 0x10e000a5  beqz        $a3, . + 4 + (0xA5 << 2)
label_2a6998:
    if (ctx->pc == 0x2A6998u) {
        ctx->pc = 0x2A699Cu;
        goto label_2a699c;
    }
    ctx->pc = 0x2A6994u;
    {
        const bool branch_taken_0x2a6994 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a6994) {
            ctx->pc = 0x2A6C2Cu;
            goto label_2a6c2c;
        }
    }
    ctx->pc = 0x2A699Cu;
label_2a699c:
    // 0x2a699c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2a699cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a69a0:
    // 0x2a69a0: 0x1000009f  b           . + 4 + (0x9F << 2)
label_2a69a4:
    if (ctx->pc == 0x2A69A4u) {
        ctx->pc = 0x2A69A8u;
        goto label_2a69a8;
    }
    ctx->pc = 0x2A69A0u;
    {
        const bool branch_taken_0x2a69a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a69a0) {
            ctx->pc = 0x2A6C20u;
            goto label_2a6c20;
        }
    }
    ctx->pc = 0x2A69A8u;
label_2a69a8:
    // 0x2a69a8: 0x8fa30280  lw          $v1, 0x280($sp)
    ctx->pc = 0x2a69a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
label_2a69ac:
    // 0x2a69ac: 0x112100  sll         $a0, $s1, 4
    ctx->pc = 0x2a69acu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
label_2a69b0:
    // 0x2a69b0: 0x8c6301b0  lw          $v1, 0x1B0($v1)
    ctx->pc = 0x2a69b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 432)));
label_2a69b4:
    // 0x2a69b4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2a69b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2a69b8:
    // 0x2a69b8: 0x8063002c  lb          $v1, 0x2C($v1)
    ctx->pc = 0x2a69b8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 44)));
label_2a69bc:
    // 0x2a69bc: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x2a69bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
label_2a69c0:
    // 0x2a69c0: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x2a69c0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
label_2a69c4:
    // 0x2a69c4: 0x10600095  beqz        $v1, . + 4 + (0x95 << 2)
label_2a69c8:
    if (ctx->pc == 0x2A69C8u) {
        ctx->pc = 0x2A69CCu;
        goto label_2a69cc;
    }
    ctx->pc = 0x2A69C4u;
    {
        const bool branch_taken_0x2a69c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a69c4) {
            ctx->pc = 0x2A6C1Cu;
            goto label_2a6c1c;
        }
    }
    ctx->pc = 0x2A69CCu;
label_2a69cc:
    // 0x2a69cc: 0x8fa30280  lw          $v1, 0x280($sp)
    ctx->pc = 0x2a69ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
label_2a69d0:
    // 0x2a69d0: 0x712821  addu        $a1, $v1, $s1
    ctx->pc = 0x2a69d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_2a69d4:
    // 0x2a69d4: 0x90a60128  lbu         $a2, 0x128($a1)
    ctx->pc = 0x2a69d4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 296)));
label_2a69d8:
    // 0x2a69d8: 0x30c300ff  andi        $v1, $a2, 0xFF
    ctx->pc = 0x2a69d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
label_2a69dc:
    // 0x2a69dc: 0x1460008f  bnez        $v1, . + 4 + (0x8F << 2)
label_2a69e0:
    if (ctx->pc == 0x2A69E0u) {
        ctx->pc = 0x2A69E4u;
        goto label_2a69e4;
    }
    ctx->pc = 0x2A69DCu;
    {
        const bool branch_taken_0x2a69dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a69dc) {
            ctx->pc = 0x2A6C1Cu;
            goto label_2a6c1c;
        }
    }
    ctx->pc = 0x2A69E4u;
label_2a69e4:
    // 0x2a69e4: 0x8fa40280  lw          $a0, 0x280($sp)
    ctx->pc = 0x2a69e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
label_2a69e8:
    // 0x2a69e8: 0x90850188  lbu         $a1, 0x188($a0)
    ctx->pc = 0x2a69e8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 392)));
label_2a69ec:
    // 0x2a69ec: 0x10a00011  beqz        $a1, . + 4 + (0x11 << 2)
label_2a69f0:
    if (ctx->pc == 0x2A69F0u) {
        ctx->pc = 0x2A69F4u;
        goto label_2a69f4;
    }
    ctx->pc = 0x2A69ECu;
    {
        const bool branch_taken_0x2a69ec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a69ec) {
            ctx->pc = 0x2A6A34u;
            goto label_2a6a34;
        }
    }
    ctx->pc = 0x2A69F4u;
label_2a69f4:
    // 0x2a69f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a69f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2a69f8:
    // 0x2a69f8: 0xc1218cc  jal         func_486330
label_2a69fc:
    if (ctx->pc == 0x2A69FCu) {
        ctx->pc = 0x2A6A00u;
        goto label_2a6a00;
    }
    ctx->pc = 0x2A69F8u;
    SET_GPR_U32(ctx, 31, 0x2A6A00u);
    ctx->pc = 0x486330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x486330u, 0x2A69F8u, 0x2A6A00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6A00u;
label_2a6a00:
    // 0x2a6a00: 0x8fa60280  lw          $a2, 0x280($sp)
    ctx->pc = 0x2a6a00u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
label_2a6a04:
    // 0x2a6a04: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x2a6a04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_2a6a08:
    // 0x2a6a08: 0x8cc301b0  lw          $v1, 0x1B0($a2)
    ctx->pc = 0x2a6a08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 432)));
label_2a6a0c:
    // 0x2a6a0c: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x2a6a0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2a6a10:
    // 0x2a6a10: 0x3c0541f0  lui         $a1, 0x41F0
    ctx->pc = 0x2a6a10u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16880 << 16));
label_2a6a14:
    // 0x2a6a14: 0x44851000  mtc1        $a1, $f2
    ctx->pc = 0x2a6a14u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_2a6a18:
    // 0x2a6a18: 0xc481006c  lwc1        $f1, 0x6C($a0)
    ctx->pc = 0x2a6a18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2a6a1c:
    // 0x2a6a1c: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x2a6a1cu;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[2]); }
label_2a6a20:
    // 0x2a6a20: 0x0  nop
    ctx->pc = 0x2a6a20u;
    // NOP
label_2a6a24:
    // 0x2a6a24: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2a6a24u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_2a6a28:
    // 0x2a6a28: 0xe7a00200  swc1        $f0, 0x200($sp)
    ctx->pc = 0x2a6a28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 512), bits); }
label_2a6a2c:
    // 0x2a6a2c: 0x1000000a  b           . + 4 + (0xA << 2)
label_2a6a30:
    if (ctx->pc == 0x2A6A30u) {
        ctx->pc = 0x2A6A34u;
        goto label_2a6a34;
    }
    ctx->pc = 0x2A6A2Cu;
    {
        const bool branch_taken_0x2a6a2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a6a2c) {
            ctx->pc = 0x2A6A58u;
            goto label_2a6a58;
        }
    }
    ctx->pc = 0x2A6A34u;
label_2a6a34:
    // 0x2a6a34: 0x8fa60280  lw          $a2, 0x280($sp)
    ctx->pc = 0x2a6a34u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
label_2a6a38:
    // 0x2a6a38: 0x113880  sll         $a3, $s1, 2
    ctx->pc = 0x2a6a38u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_2a6a3c:
    // 0x2a6a3c: 0x8cc801b0  lw          $t0, 0x1B0($a2)
    ctx->pc = 0x2a6a3cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 432)));
label_2a6a40:
    // 0x2a6a40: 0x1071021  addu        $v0, $t0, $a3
    ctx->pc = 0x2a6a40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
label_2a6a44:
    // 0x2a6a44: 0x3c0341f0  lui         $v1, 0x41F0
    ctx->pc = 0x2a6a44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16880 << 16));
label_2a6a48:
    // 0x2a6a48: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2a6a48u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2a6a4c:
    // 0x2a6a4c: 0xc440006c  lwc1        $f0, 0x6C($v0)
    ctx->pc = 0x2a6a4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a6a50:
    // 0x2a6a50: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x2a6a50u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
label_2a6a54:
    // 0x2a6a54: 0xe7a00200  swc1        $f0, 0x200($sp)
    ctx->pc = 0x2a6a54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 512), bits); }
label_2a6a58:
    // 0x2a6a58: 0x8f82bb70  lw          $v0, -0x4490($gp)
    ctx->pc = 0x2a6a58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
label_2a6a5c:
    // 0x2a6a5c: 0x24440020  addiu       $a0, $v0, 0x20
    ctx->pc = 0x2a6a5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
label_2a6a60:
    // 0x2a6a60: 0xc0858ac  jal         func_2162B0
label_2a6a64:
    if (ctx->pc == 0x2A6A64u) {
        ctx->pc = 0x2A6A68u;
        goto label_2a6a68;
    }
    ctx->pc = 0x2A6A60u;
    SET_GPR_U32(ctx, 31, 0x2A6A68u);
    ctx->pc = 0x2162B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2162B0u, 0x2A6A60u, 0x2A6A68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6A68u;
label_2a6a68:
    // 0x2a6a68: 0x8fa50280  lw          $a1, 0x280($sp)
    ctx->pc = 0x2a6a68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
label_2a6a6c:
    // 0x2a6a6c: 0xc4a10124  lwc1        $f1, 0x124($a1)
    ctx->pc = 0x2a6a6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2a6a70:
    // 0x2a6a70: 0x46010041  sub.s       $f1, $f0, $f1
    ctx->pc = 0x2a6a70u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_2a6a74:
    // 0x2a6a74: 0x8fa50280  lw          $a1, 0x280($sp)
    ctx->pc = 0x2a6a74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
label_2a6a78:
    // 0x2a6a78: 0xc4a001d8  lwc1        $f0, 0x1D8($a1)
    ctx->pc = 0x2a6a78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a6a7c:
    // 0x2a6a7c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2a6a7cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2a6a80:
    // 0x2a6a80: 0xc7a00200  lwc1        $f0, 0x200($sp)
    ctx->pc = 0x2a6a80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a6a84:
    // 0x2a6a84: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2a6a84u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2a6a88:
    // 0x2a6a88: 0x45010064  bc1t        . + 4 + (0x64 << 2)
label_2a6a8c:
    if (ctx->pc == 0x2A6A8Cu) {
        ctx->pc = 0x2A6A90u;
        goto label_2a6a90;
    }
    ctx->pc = 0x2A6A88u;
    {
        const bool branch_taken_0x2a6a88 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a6a88) {
            ctx->pc = 0x2A6C1Cu;
            goto label_2a6c1c;
        }
    }
    ctx->pc = 0x2A6A90u;
label_2a6a90:
    // 0x2a6a90: 0xafa001fc  sw          $zero, 0x1FC($sp)
    ctx->pc = 0x2a6a90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 508), GPR_U32(ctx, 0));
label_2a6a94:
    // 0x2a6a94: 0x8fa70280  lw          $a3, 0x280($sp)
    ctx->pc = 0x2a6a94u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
label_2a6a98:
    // 0x2a6a98: 0x8ce2012c  lw          $v0, 0x12C($a3)
    ctx->pc = 0x2a6a98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 300)));
label_2a6a9c:
    // 0x2a6a9c: 0xafa201fc  sw          $v0, 0x1FC($sp)
    ctx->pc = 0x2a6a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 508), GPR_U32(ctx, 2));
label_2a6aa0:
    // 0x2a6aa0: 0x27a40108  addiu       $a0, $sp, 0x108
    ctx->pc = 0x2a6aa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 264));
label_2a6aa4:
    // 0x2a6aa4: 0x8fa501fc  lw          $a1, 0x1FC($sp)
    ctx->pc = 0x2a6aa4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 508)));
label_2a6aa8:
    // 0x2a6aa8: 0xc090f80  jal         func_243E00
label_2a6aac:
    if (ctx->pc == 0x2A6AACu) {
        ctx->pc = 0x2A6AB0u;
        goto label_2a6ab0;
    }
    ctx->pc = 0x2A6AA8u;
    SET_GPR_U32(ctx, 31, 0x2A6AB0u);
    ctx->pc = 0x243E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243E00u, 0x2A6AA8u, 0x2A6AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6AB0u;
label_2a6ab0:
    // 0x2a6ab0: 0x27a50108  addiu       $a1, $sp, 0x108
    ctx->pc = 0x2a6ab0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 264));
label_2a6ab4:
    // 0x2a6ab4: 0x27a40148  addiu       $a0, $sp, 0x148
    ctx->pc = 0x2a6ab4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 328));
label_2a6ab8:
    // 0x2a6ab8: 0xc4a20000  lwc1        $f2, 0x0($a1)
    ctx->pc = 0x2a6ab8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2a6abc:
    // 0x2a6abc: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x2a6abcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2a6ac0:
    // 0x2a6ac0: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x2a6ac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a6ac4:
    // 0x2a6ac4: 0xe4820000  swc1        $f2, 0x0($a0)
    ctx->pc = 0x2a6ac4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_2a6ac8:
    // 0x2a6ac8: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x2a6ac8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
label_2a6acc:
    // 0x2a6acc: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x2a6accu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
label_2a6ad0:
    // 0x2a6ad0: 0x8fa30280  lw          $v1, 0x280($sp)
    ctx->pc = 0x2a6ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
label_2a6ad4:
    // 0x2a6ad4: 0x8c6501b0  lw          $a1, 0x1B0($v1)
    ctx->pc = 0x2a6ad4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 432)));
label_2a6ad8:
    // 0x2a6ad8: 0xb12021  addu        $a0, $a1, $s1
    ctx->pc = 0x2a6ad8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
label_2a6adc:
    // 0x2a6adc: 0x9083007c  lbu         $v1, 0x7C($a0)
    ctx->pc = 0x2a6adcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 124)));
label_2a6ae0:
    // 0x2a6ae0: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_2a6ae4:
    if (ctx->pc == 0x2A6AE4u) {
        ctx->pc = 0x2A6AE8u;
        goto label_2a6ae8;
    }
    ctx->pc = 0x2A6AE0u;
    {
        const bool branch_taken_0x2a6ae0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a6ae0) {
            ctx->pc = 0x2A6B04u;
            goto label_2a6b04;
        }
    }
    ctx->pc = 0x2A6AE8u;
label_2a6ae8:
    // 0x2a6ae8: 0x8fa40280  lw          $a0, 0x280($sp)
    ctx->pc = 0x2a6ae8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
label_2a6aec:
    // 0x2a6aec: 0xc4810124  lwc1        $f1, 0x124($a0)
    ctx->pc = 0x2a6aecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2a6af0:
    // 0x2a6af0: 0x8fa60280  lw          $a2, 0x280($sp)
    ctx->pc = 0x2a6af0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
label_2a6af4:
    // 0x2a6af4: 0xc4c0002c  lwc1        $f0, 0x2C($a2)
    ctx->pc = 0x2a6af4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a6af8:
    // 0x2a6af8: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x2a6af8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2a6afc:
    // 0x2a6afc: 0x45000043  bc1f        . + 4 + (0x43 << 2)
label_2a6b00:
    if (ctx->pc == 0x2A6B00u) {
        ctx->pc = 0x2A6B04u;
        goto label_2a6b04;
    }
    ctx->pc = 0x2A6AFCu;
    {
        const bool branch_taken_0x2a6afc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a6afc) {
            ctx->pc = 0x2A6C0Cu;
            goto label_2a6c0c;
        }
    }
    ctx->pc = 0x2A6B04u;
label_2a6b04:
    // 0x2a6b04: 0x8fa30280  lw          $v1, 0x280($sp)
    ctx->pc = 0x2a6b04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
label_2a6b08:
    // 0x2a6b08: 0x111100  sll         $v0, $s1, 4
    ctx->pc = 0x2a6b08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
label_2a6b0c:
    // 0x2a6b0c: 0x8c6401b0  lw          $a0, 0x1B0($v1)
    ctx->pc = 0x2a6b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 432)));
label_2a6b10:
    // 0x2a6b10: 0x822821  addu        $a1, $a0, $v0
    ctx->pc = 0x2a6b10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_2a6b14:
    // 0x2a6b14: 0x24a2002c  addiu       $v0, $a1, 0x2C
    ctx->pc = 0x2a6b14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 44));
label_2a6b18:
    // 0x2a6b18: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a6b18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a6b1c:
    // 0x2a6b1c: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x2a6b1cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
label_2a6b20:
    // 0x2a6b20: 0x24a5dbf0  addiu       $a1, $a1, -0x2410
    ctx->pc = 0x2a6b20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958064));
label_2a6b24:
    // 0x2a6b24: 0x24060009  addiu       $a2, $zero, 0x9
    ctx->pc = 0x2a6b24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_2a6b28:
    // 0x2a6b28: 0xc0bc66e  jal         func_2F19B8
label_2a6b2c:
    if (ctx->pc == 0x2A6B2Cu) {
        ctx->pc = 0x2A6B30u;
        goto label_2a6b30;
    }
    ctx->pc = 0x2A6B28u;
    SET_GPR_U32(ctx, 31, 0x2A6B30u);
    ctx->pc = 0x2F19B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F19B8u, 0x2A6B28u, 0x2A6B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6B30u;
label_2a6b30:
    // 0x2a6b30: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
label_2a6b34:
    if (ctx->pc == 0x2A6B34u) {
        ctx->pc = 0x2A6B38u;
        goto label_2a6b38;
    }
    ctx->pc = 0x2A6B30u;
    {
        const bool branch_taken_0x2a6b30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a6b30) {
            ctx->pc = 0x2A6BA4u;
            goto label_2a6ba4;
        }
    }
    ctx->pc = 0x2A6B38u;
label_2a6b38:
    // 0x2a6b38: 0xc0de0d2  jal         func_378348
label_2a6b3c:
    if (ctx->pc == 0x2A6B3Cu) {
        ctx->pc = 0x2A6B40u;
        goto label_2a6b40;
    }
    ctx->pc = 0x2A6B38u;
    SET_GPR_U32(ctx, 31, 0x2A6B40u);
    ctx->pc = 0x378348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x378348u, 0x2A6B38u, 0x2A6B40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6B40u;
label_2a6b40:
    // 0x2a6b40: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a6b40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a6b44:
    // 0x2a6b44: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x2a6b44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_2a6b48:
    // 0x2a6b48: 0x85001b  divu        $zero, $a0, $a1
    ctx->pc = 0x2a6b48u;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
label_2a6b4c:
    // 0x2a6b4c: 0x1010  mfhi        $v0
    ctx->pc = 0x2a6b4cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_2a6b50:
    // 0x2a6b50: 0x24440031  addiu       $a0, $v0, 0x31
    ctx->pc = 0x2a6b50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 49));
label_2a6b54:
    // 0x2a6b54: 0x4163c  dsll32      $v0, $a0, 24
    ctx->pc = 0x2a6b54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 24));
label_2a6b58:
    // 0x2a6b58: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x2a6b58u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
label_2a6b5c:
    // 0x2a6b5c: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x2a6b5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
label_2a6b60:
    // 0x2a6b60: 0x8fa20280  lw          $v0, 0x280($sp)
    ctx->pc = 0x2a6b60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
label_2a6b64:
    // 0x2a6b64: 0x111900  sll         $v1, $s1, 4
    ctx->pc = 0x2a6b64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
label_2a6b68:
    // 0x2a6b68: 0x8c4401b0  lw          $a0, 0x1B0($v0)
    ctx->pc = 0x2a6b68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 432)));
label_2a6b6c:
    // 0x2a6b6c: 0x831021  addu        $v0, $a0, $v1
    ctx->pc = 0x2a6b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_2a6b70:
    // 0x2a6b70: 0x2446002c  addiu       $a2, $v0, 0x2C
    ctx->pc = 0x2a6b70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 44));
label_2a6b74:
    // 0x2a6b74: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x2a6b74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2a6b78:
    // 0x2a6b78: 0xc0bc60c  jal         func_2F1830
label_2a6b7c:
    if (ctx->pc == 0x2A6B7Cu) {
        ctx->pc = 0x2A6B80u;
        goto label_2a6b80;
    }
    ctx->pc = 0x2A6B78u;
    SET_GPR_U32(ctx, 31, 0x2A6B80u);
    ctx->pc = 0x2F1830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1830u, 0x2A6B78u, 0x2A6B80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6B80u;
label_2a6b80:
    // 0x2a6b80: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a6b80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a6b84:
    // 0x2a6b84: 0x2485ffff  addiu       $a1, $a0, -0x1
    ctx->pc = 0x2a6b84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_2a6b88:
    // 0x2a6b88: 0x8fa60280  lw          $a2, 0x280($sp)
    ctx->pc = 0x2a6b88u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
label_2a6b8c:
    // 0x2a6b8c: 0x111100  sll         $v0, $s1, 4
    ctx->pc = 0x2a6b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
label_2a6b90:
    // 0x2a6b90: 0x8cc301b0  lw          $v1, 0x1B0($a2)
    ctx->pc = 0x2a6b90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 432)));
label_2a6b94:
    // 0x2a6b94: 0x623021  addu        $a2, $v1, $v0
    ctx->pc = 0x2a6b94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2a6b98:
    // 0x2a6b98: 0xc52021  addu        $a0, $a2, $a1
    ctx->pc = 0x2a6b98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_2a6b9c:
    // 0x2a6b9c: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x2a6b9cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_2a6ba0:
    // 0x2a6ba0: 0xa082002c  sb          $v0, 0x2C($a0)
    ctx->pc = 0x2a6ba0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 44), (uint8_t)GPR_U32(ctx, 2));
label_2a6ba4:
    // 0x2a6ba4: 0x8fa50280  lw          $a1, 0x280($sp)
    ctx->pc = 0x2a6ba4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
label_2a6ba8:
    // 0x2a6ba8: 0x111100  sll         $v0, $s1, 4
    ctx->pc = 0x2a6ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
label_2a6bac:
    // 0x2a6bac: 0x8ca501b0  lw          $a1, 0x1B0($a1)
    ctx->pc = 0x2a6bacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 432)));
label_2a6bb0:
    // 0x2a6bb0: 0xa23021  addu        $a2, $a1, $v0
    ctx->pc = 0x2a6bb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_2a6bb4:
    // 0x2a6bb4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2a6bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_2a6bb8:
    // 0x2a6bb8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2a6bb8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2a6bbc:
    // 0x2a6bbc: 0x3c054348  lui         $a1, 0x4348
    ctx->pc = 0x2a6bbcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17224 << 16));
label_2a6bc0:
    // 0x2a6bc0: 0x44856800  mtc1        $a1, $f13
    ctx->pc = 0x2a6bc0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_2a6bc4:
    // 0x2a6bc4: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x2a6bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
label_2a6bc8:
    // 0x2a6bc8: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x2a6bc8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_2a6bcc:
    // 0x2a6bcc: 0x8fa50280  lw          $a1, 0x280($sp)
    ctx->pc = 0x2a6bccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
label_2a6bd0:
    // 0x2a6bd0: 0x8ca201b0  lw          $v0, 0x1B0($a1)
    ctx->pc = 0x2a6bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 432)));
label_2a6bd4:
    // 0x2a6bd4: 0x511821  addu        $v1, $v0, $s1
    ctx->pc = 0x2a6bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_2a6bd8:
    // 0x2a6bd8: 0x8f82bbec  lw          $v0, -0x4414($gp)
    ctx->pc = 0x2a6bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
label_2a6bdc:
    // 0x2a6bdc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a6bdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a6be0:
    // 0x2a6be0: 0x24c5002c  addiu       $a1, $a2, 0x2C
    ctx->pc = 0x2a6be0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 44));
label_2a6be4:
    // 0x2a6be4: 0x27a60148  addiu       $a2, $sp, 0x148
    ctx->pc = 0x2a6be4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 328));
label_2a6be8:
    // 0x2a6be8: 0x9067007c  lbu         $a3, 0x7C($v1)
    ctx->pc = 0x2a6be8u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 124)));
label_2a6bec:
    // 0x2a6bec: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x2a6becu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2a6bf0:
    // 0x2a6bf0: 0xc08f6e4  jal         func_23DB90
label_2a6bf4:
    if (ctx->pc == 0x2A6BF4u) {
        ctx->pc = 0x2A6BF8u;
        goto label_2a6bf8;
    }
    ctx->pc = 0x2A6BF0u;
    SET_GPR_U32(ctx, 31, 0x2A6BF8u);
    ctx->pc = 0x23DB90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23DB90u, 0x2A6BF0u, 0x2A6BF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6BF8u;
label_2a6bf8:
    // 0x2a6bf8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a6bf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a6bfc:
    // 0x2a6bfc: 0x112880  sll         $a1, $s1, 2
    ctx->pc = 0x2a6bfcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_2a6c00:
    // 0x2a6c00: 0x8fa30280  lw          $v1, 0x280($sp)
    ctx->pc = 0x2a6c00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
label_2a6c04:
    // 0x2a6c04: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2a6c04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_2a6c08:
    // 0x2a6c08: 0xac6401b8  sw          $a0, 0x1B8($v1)
    ctx->pc = 0x2a6c08u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 440), GPR_U32(ctx, 4));
label_2a6c0c:
    // 0x2a6c0c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2a6c0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a6c10:
    // 0x2a6c10: 0x8fa30280  lw          $v1, 0x280($sp)
    ctx->pc = 0x2a6c10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
label_2a6c14:
    // 0x2a6c14: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x2a6c14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_2a6c18:
    // 0x2a6c18: 0xa0640128  sb          $a0, 0x128($v1)
    ctx->pc = 0x2a6c18u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 296), (uint8_t)GPR_U32(ctx, 4));
label_2a6c1c:
    // 0x2a6c1c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2a6c1cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2a6c20:
    // 0x2a6c20: 0x2e240004  sltiu       $a0, $s1, 0x4
    ctx->pc = 0x2a6c20u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
label_2a6c24:
    // 0x2a6c24: 0x1480ff60  bnez        $a0, . + 4 + (-0xA0 << 2)
label_2a6c28:
    if (ctx->pc == 0x2A6C28u) {
        ctx->pc = 0x2A6C2Cu;
        goto label_2a6c2c;
    }
    ctx->pc = 0x2A6C24u;
    {
        const bool branch_taken_0x2a6c24 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a6c24) {
            ctx->pc = 0x2A69A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a69a8;
        }
    }
    ctx->pc = 0x2A6C2Cu;
label_2a6c2c:
    // 0x2a6c2c: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2a6c2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_2a6c30:
    // 0x2a6c30: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x2a6c30u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2a6c34:
    // 0x2a6c34: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x2a6c34u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2a6c38:
    // 0x2a6c38: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2a6c38u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2a6c3c:
    // 0x2a6c3c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2a6c3cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2a6c40:
    // 0x2a6c40: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2a6c40u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2a6c44:
    // 0x2a6c44: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2a6c44u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2a6c48:
    // 0x2a6c48: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2a6c48u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2a6c4c:
    // 0x2a6c4c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2a6c4cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2a6c50:
    // 0x2a6c50: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a6c50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2a6c54:
    // 0x2a6c54: 0x27bd0290  addiu       $sp, $sp, 0x290
    ctx->pc = 0x2a6c54u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
label_2a6c58:
    // 0x2a6c58: 0x3e00008  jr          $ra
label_2a6c5c:
    if (ctx->pc == 0x2A6C5Cu) {
        ctx->pc = 0x2A6C60u;
        goto label_fallthrough_0x2a6c58;
    }
    ctx->pc = 0x2A6C58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A6C58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2a6c58:
    ctx->pc = 0x2A6C60u;
}
