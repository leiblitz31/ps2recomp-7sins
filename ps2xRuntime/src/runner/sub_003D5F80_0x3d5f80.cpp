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

// Function: sub_003D5F80
// Address: 0x3d5f80 - 0x3d65d0
void sub_003D5F80_0x3d5f80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D5F80_0x3d5f80");
#endif

    switch (ctx->pc) {
        case 0x3d5f80u: goto label_3d5f80;
        case 0x3d5f84u: goto label_3d5f84;
        case 0x3d5f88u: goto label_3d5f88;
        case 0x3d5f8cu: goto label_3d5f8c;
        case 0x3d5f90u: goto label_3d5f90;
        case 0x3d5f94u: goto label_3d5f94;
        case 0x3d5f98u: goto label_3d5f98;
        case 0x3d5f9cu: goto label_3d5f9c;
        case 0x3d5fa0u: goto label_3d5fa0;
        case 0x3d5fa4u: goto label_3d5fa4;
        case 0x3d5fa8u: goto label_3d5fa8;
        case 0x3d5facu: goto label_3d5fac;
        case 0x3d5fb0u: goto label_3d5fb0;
        case 0x3d5fb4u: goto label_3d5fb4;
        case 0x3d5fb8u: goto label_3d5fb8;
        case 0x3d5fbcu: goto label_3d5fbc;
        case 0x3d5fc0u: goto label_3d5fc0;
        case 0x3d5fc4u: goto label_3d5fc4;
        case 0x3d5fc8u: goto label_3d5fc8;
        case 0x3d5fccu: goto label_3d5fcc;
        case 0x3d5fd0u: goto label_3d5fd0;
        case 0x3d5fd4u: goto label_3d5fd4;
        case 0x3d5fd8u: goto label_3d5fd8;
        case 0x3d5fdcu: goto label_3d5fdc;
        case 0x3d5fe0u: goto label_3d5fe0;
        case 0x3d5fe4u: goto label_3d5fe4;
        case 0x3d5fe8u: goto label_3d5fe8;
        case 0x3d5fecu: goto label_3d5fec;
        case 0x3d5ff0u: goto label_3d5ff0;
        case 0x3d5ff4u: goto label_3d5ff4;
        case 0x3d5ff8u: goto label_3d5ff8;
        case 0x3d5ffcu: goto label_3d5ffc;
        case 0x3d6000u: goto label_3d6000;
        case 0x3d6004u: goto label_3d6004;
        case 0x3d6008u: goto label_3d6008;
        case 0x3d600cu: goto label_3d600c;
        case 0x3d6010u: goto label_3d6010;
        case 0x3d6014u: goto label_3d6014;
        case 0x3d6018u: goto label_3d6018;
        case 0x3d601cu: goto label_3d601c;
        case 0x3d6020u: goto label_3d6020;
        case 0x3d6024u: goto label_3d6024;
        case 0x3d6028u: goto label_3d6028;
        case 0x3d602cu: goto label_3d602c;
        case 0x3d6030u: goto label_3d6030;
        case 0x3d6034u: goto label_3d6034;
        case 0x3d6038u: goto label_3d6038;
        case 0x3d603cu: goto label_3d603c;
        case 0x3d6040u: goto label_3d6040;
        case 0x3d6044u: goto label_3d6044;
        case 0x3d6048u: goto label_3d6048;
        case 0x3d604cu: goto label_3d604c;
        case 0x3d6050u: goto label_3d6050;
        case 0x3d6054u: goto label_3d6054;
        case 0x3d6058u: goto label_3d6058;
        case 0x3d605cu: goto label_3d605c;
        case 0x3d6060u: goto label_3d6060;
        case 0x3d6064u: goto label_3d6064;
        case 0x3d6068u: goto label_3d6068;
        case 0x3d606cu: goto label_3d606c;
        case 0x3d6070u: goto label_3d6070;
        case 0x3d6074u: goto label_3d6074;
        case 0x3d6078u: goto label_3d6078;
        case 0x3d607cu: goto label_3d607c;
        case 0x3d6080u: goto label_3d6080;
        case 0x3d6084u: goto label_3d6084;
        case 0x3d6088u: goto label_3d6088;
        case 0x3d608cu: goto label_3d608c;
        case 0x3d6090u: goto label_3d6090;
        case 0x3d6094u: goto label_3d6094;
        case 0x3d6098u: goto label_3d6098;
        case 0x3d609cu: goto label_3d609c;
        case 0x3d60a0u: goto label_3d60a0;
        case 0x3d60a4u: goto label_3d60a4;
        case 0x3d60a8u: goto label_3d60a8;
        case 0x3d60acu: goto label_3d60ac;
        case 0x3d60b0u: goto label_3d60b0;
        case 0x3d60b4u: goto label_3d60b4;
        case 0x3d60b8u: goto label_3d60b8;
        case 0x3d60bcu: goto label_3d60bc;
        case 0x3d60c0u: goto label_3d60c0;
        case 0x3d60c4u: goto label_3d60c4;
        case 0x3d60c8u: goto label_3d60c8;
        case 0x3d60ccu: goto label_3d60cc;
        case 0x3d60d0u: goto label_3d60d0;
        case 0x3d60d4u: goto label_3d60d4;
        case 0x3d60d8u: goto label_3d60d8;
        case 0x3d60dcu: goto label_3d60dc;
        case 0x3d60e0u: goto label_3d60e0;
        case 0x3d60e4u: goto label_3d60e4;
        case 0x3d60e8u: goto label_3d60e8;
        case 0x3d60ecu: goto label_3d60ec;
        case 0x3d60f0u: goto label_3d60f0;
        case 0x3d60f4u: goto label_3d60f4;
        case 0x3d60f8u: goto label_3d60f8;
        case 0x3d60fcu: goto label_3d60fc;
        case 0x3d6100u: goto label_3d6100;
        case 0x3d6104u: goto label_3d6104;
        case 0x3d6108u: goto label_3d6108;
        case 0x3d610cu: goto label_3d610c;
        case 0x3d6110u: goto label_3d6110;
        case 0x3d6114u: goto label_3d6114;
        case 0x3d6118u: goto label_3d6118;
        case 0x3d611cu: goto label_3d611c;
        case 0x3d6120u: goto label_3d6120;
        case 0x3d6124u: goto label_3d6124;
        case 0x3d6128u: goto label_3d6128;
        case 0x3d612cu: goto label_3d612c;
        case 0x3d6130u: goto label_3d6130;
        case 0x3d6134u: goto label_3d6134;
        case 0x3d6138u: goto label_3d6138;
        case 0x3d613cu: goto label_3d613c;
        case 0x3d6140u: goto label_3d6140;
        case 0x3d6144u: goto label_3d6144;
        case 0x3d6148u: goto label_3d6148;
        case 0x3d614cu: goto label_3d614c;
        case 0x3d6150u: goto label_3d6150;
        case 0x3d6154u: goto label_3d6154;
        case 0x3d6158u: goto label_3d6158;
        case 0x3d615cu: goto label_3d615c;
        case 0x3d6160u: goto label_3d6160;
        case 0x3d6164u: goto label_3d6164;
        case 0x3d6168u: goto label_3d6168;
        case 0x3d616cu: goto label_3d616c;
        case 0x3d6170u: goto label_3d6170;
        case 0x3d6174u: goto label_3d6174;
        case 0x3d6178u: goto label_3d6178;
        case 0x3d617cu: goto label_3d617c;
        case 0x3d6180u: goto label_3d6180;
        case 0x3d6184u: goto label_3d6184;
        case 0x3d6188u: goto label_3d6188;
        case 0x3d618cu: goto label_3d618c;
        case 0x3d6190u: goto label_3d6190;
        case 0x3d6194u: goto label_3d6194;
        case 0x3d6198u: goto label_3d6198;
        case 0x3d619cu: goto label_3d619c;
        case 0x3d61a0u: goto label_3d61a0;
        case 0x3d61a4u: goto label_3d61a4;
        case 0x3d61a8u: goto label_3d61a8;
        case 0x3d61acu: goto label_3d61ac;
        case 0x3d61b0u: goto label_3d61b0;
        case 0x3d61b4u: goto label_3d61b4;
        case 0x3d61b8u: goto label_3d61b8;
        case 0x3d61bcu: goto label_3d61bc;
        case 0x3d61c0u: goto label_3d61c0;
        case 0x3d61c4u: goto label_3d61c4;
        case 0x3d61c8u: goto label_3d61c8;
        case 0x3d61ccu: goto label_3d61cc;
        case 0x3d61d0u: goto label_3d61d0;
        case 0x3d61d4u: goto label_3d61d4;
        case 0x3d61d8u: goto label_3d61d8;
        case 0x3d61dcu: goto label_3d61dc;
        case 0x3d61e0u: goto label_3d61e0;
        case 0x3d61e4u: goto label_3d61e4;
        case 0x3d61e8u: goto label_3d61e8;
        case 0x3d61ecu: goto label_3d61ec;
        case 0x3d61f0u: goto label_3d61f0;
        case 0x3d61f4u: goto label_3d61f4;
        case 0x3d61f8u: goto label_3d61f8;
        case 0x3d61fcu: goto label_3d61fc;
        case 0x3d6200u: goto label_3d6200;
        case 0x3d6204u: goto label_3d6204;
        case 0x3d6208u: goto label_3d6208;
        case 0x3d620cu: goto label_3d620c;
        case 0x3d6210u: goto label_3d6210;
        case 0x3d6214u: goto label_3d6214;
        case 0x3d6218u: goto label_3d6218;
        case 0x3d621cu: goto label_3d621c;
        case 0x3d6220u: goto label_3d6220;
        case 0x3d6224u: goto label_3d6224;
        case 0x3d6228u: goto label_3d6228;
        case 0x3d622cu: goto label_3d622c;
        case 0x3d6230u: goto label_3d6230;
        case 0x3d6234u: goto label_3d6234;
        case 0x3d6238u: goto label_3d6238;
        case 0x3d623cu: goto label_3d623c;
        case 0x3d6240u: goto label_3d6240;
        case 0x3d6244u: goto label_3d6244;
        case 0x3d6248u: goto label_3d6248;
        case 0x3d624cu: goto label_3d624c;
        case 0x3d6250u: goto label_3d6250;
        case 0x3d6254u: goto label_3d6254;
        case 0x3d6258u: goto label_3d6258;
        case 0x3d625cu: goto label_3d625c;
        case 0x3d6260u: goto label_3d6260;
        case 0x3d6264u: goto label_3d6264;
        case 0x3d6268u: goto label_3d6268;
        case 0x3d626cu: goto label_3d626c;
        case 0x3d6270u: goto label_3d6270;
        case 0x3d6274u: goto label_3d6274;
        case 0x3d6278u: goto label_3d6278;
        case 0x3d627cu: goto label_3d627c;
        case 0x3d6280u: goto label_3d6280;
        case 0x3d6284u: goto label_3d6284;
        case 0x3d6288u: goto label_3d6288;
        case 0x3d628cu: goto label_3d628c;
        case 0x3d6290u: goto label_3d6290;
        case 0x3d6294u: goto label_3d6294;
        case 0x3d6298u: goto label_3d6298;
        case 0x3d629cu: goto label_3d629c;
        case 0x3d62a0u: goto label_3d62a0;
        case 0x3d62a4u: goto label_3d62a4;
        case 0x3d62a8u: goto label_3d62a8;
        case 0x3d62acu: goto label_3d62ac;
        case 0x3d62b0u: goto label_3d62b0;
        case 0x3d62b4u: goto label_3d62b4;
        case 0x3d62b8u: goto label_3d62b8;
        case 0x3d62bcu: goto label_3d62bc;
        case 0x3d62c0u: goto label_3d62c0;
        case 0x3d62c4u: goto label_3d62c4;
        case 0x3d62c8u: goto label_3d62c8;
        case 0x3d62ccu: goto label_3d62cc;
        case 0x3d62d0u: goto label_3d62d0;
        case 0x3d62d4u: goto label_3d62d4;
        case 0x3d62d8u: goto label_3d62d8;
        case 0x3d62dcu: goto label_3d62dc;
        case 0x3d62e0u: goto label_3d62e0;
        case 0x3d62e4u: goto label_3d62e4;
        case 0x3d62e8u: goto label_3d62e8;
        case 0x3d62ecu: goto label_3d62ec;
        case 0x3d62f0u: goto label_3d62f0;
        case 0x3d62f4u: goto label_3d62f4;
        case 0x3d62f8u: goto label_3d62f8;
        case 0x3d62fcu: goto label_3d62fc;
        case 0x3d6300u: goto label_3d6300;
        case 0x3d6304u: goto label_3d6304;
        case 0x3d6308u: goto label_3d6308;
        case 0x3d630cu: goto label_3d630c;
        case 0x3d6310u: goto label_3d6310;
        case 0x3d6314u: goto label_3d6314;
        case 0x3d6318u: goto label_3d6318;
        case 0x3d631cu: goto label_3d631c;
        case 0x3d6320u: goto label_3d6320;
        case 0x3d6324u: goto label_3d6324;
        case 0x3d6328u: goto label_3d6328;
        case 0x3d632cu: goto label_3d632c;
        case 0x3d6330u: goto label_3d6330;
        case 0x3d6334u: goto label_3d6334;
        case 0x3d6338u: goto label_3d6338;
        case 0x3d633cu: goto label_3d633c;
        case 0x3d6340u: goto label_3d6340;
        case 0x3d6344u: goto label_3d6344;
        case 0x3d6348u: goto label_3d6348;
        case 0x3d634cu: goto label_3d634c;
        case 0x3d6350u: goto label_3d6350;
        case 0x3d6354u: goto label_3d6354;
        case 0x3d6358u: goto label_3d6358;
        case 0x3d635cu: goto label_3d635c;
        case 0x3d6360u: goto label_3d6360;
        case 0x3d6364u: goto label_3d6364;
        case 0x3d6368u: goto label_3d6368;
        case 0x3d636cu: goto label_3d636c;
        case 0x3d6370u: goto label_3d6370;
        case 0x3d6374u: goto label_3d6374;
        case 0x3d6378u: goto label_3d6378;
        case 0x3d637cu: goto label_3d637c;
        case 0x3d6380u: goto label_3d6380;
        case 0x3d6384u: goto label_3d6384;
        case 0x3d6388u: goto label_3d6388;
        case 0x3d638cu: goto label_3d638c;
        case 0x3d6390u: goto label_3d6390;
        case 0x3d6394u: goto label_3d6394;
        case 0x3d6398u: goto label_3d6398;
        case 0x3d639cu: goto label_3d639c;
        case 0x3d63a0u: goto label_3d63a0;
        case 0x3d63a4u: goto label_3d63a4;
        case 0x3d63a8u: goto label_3d63a8;
        case 0x3d63acu: goto label_3d63ac;
        case 0x3d63b0u: goto label_3d63b0;
        case 0x3d63b4u: goto label_3d63b4;
        case 0x3d63b8u: goto label_3d63b8;
        case 0x3d63bcu: goto label_3d63bc;
        case 0x3d63c0u: goto label_3d63c0;
        case 0x3d63c4u: goto label_3d63c4;
        case 0x3d63c8u: goto label_3d63c8;
        case 0x3d63ccu: goto label_3d63cc;
        case 0x3d63d0u: goto label_3d63d0;
        case 0x3d63d4u: goto label_3d63d4;
        case 0x3d63d8u: goto label_3d63d8;
        case 0x3d63dcu: goto label_3d63dc;
        case 0x3d63e0u: goto label_3d63e0;
        case 0x3d63e4u: goto label_3d63e4;
        case 0x3d63e8u: goto label_3d63e8;
        case 0x3d63ecu: goto label_3d63ec;
        case 0x3d63f0u: goto label_3d63f0;
        case 0x3d63f4u: goto label_3d63f4;
        case 0x3d63f8u: goto label_3d63f8;
        case 0x3d63fcu: goto label_3d63fc;
        case 0x3d6400u: goto label_3d6400;
        case 0x3d6404u: goto label_3d6404;
        case 0x3d6408u: goto label_3d6408;
        case 0x3d640cu: goto label_3d640c;
        case 0x3d6410u: goto label_3d6410;
        case 0x3d6414u: goto label_3d6414;
        case 0x3d6418u: goto label_3d6418;
        case 0x3d641cu: goto label_3d641c;
        case 0x3d6420u: goto label_3d6420;
        case 0x3d6424u: goto label_3d6424;
        case 0x3d6428u: goto label_3d6428;
        case 0x3d642cu: goto label_3d642c;
        case 0x3d6430u: goto label_3d6430;
        case 0x3d6434u: goto label_3d6434;
        case 0x3d6438u: goto label_3d6438;
        case 0x3d643cu: goto label_3d643c;
        case 0x3d6440u: goto label_3d6440;
        case 0x3d6444u: goto label_3d6444;
        case 0x3d6448u: goto label_3d6448;
        case 0x3d644cu: goto label_3d644c;
        case 0x3d6450u: goto label_3d6450;
        case 0x3d6454u: goto label_3d6454;
        case 0x3d6458u: goto label_3d6458;
        case 0x3d645cu: goto label_3d645c;
        case 0x3d6460u: goto label_3d6460;
        case 0x3d6464u: goto label_3d6464;
        case 0x3d6468u: goto label_3d6468;
        case 0x3d646cu: goto label_3d646c;
        case 0x3d6470u: goto label_3d6470;
        case 0x3d6474u: goto label_3d6474;
        case 0x3d6478u: goto label_3d6478;
        case 0x3d647cu: goto label_3d647c;
        case 0x3d6480u: goto label_3d6480;
        case 0x3d6484u: goto label_3d6484;
        case 0x3d6488u: goto label_3d6488;
        case 0x3d648cu: goto label_3d648c;
        case 0x3d6490u: goto label_3d6490;
        case 0x3d6494u: goto label_3d6494;
        case 0x3d6498u: goto label_3d6498;
        case 0x3d649cu: goto label_3d649c;
        case 0x3d64a0u: goto label_3d64a0;
        case 0x3d64a4u: goto label_3d64a4;
        case 0x3d64a8u: goto label_3d64a8;
        case 0x3d64acu: goto label_3d64ac;
        case 0x3d64b0u: goto label_3d64b0;
        case 0x3d64b4u: goto label_3d64b4;
        case 0x3d64b8u: goto label_3d64b8;
        case 0x3d64bcu: goto label_3d64bc;
        case 0x3d64c0u: goto label_3d64c0;
        case 0x3d64c4u: goto label_3d64c4;
        case 0x3d64c8u: goto label_3d64c8;
        case 0x3d64ccu: goto label_3d64cc;
        case 0x3d64d0u: goto label_3d64d0;
        case 0x3d64d4u: goto label_3d64d4;
        case 0x3d64d8u: goto label_3d64d8;
        case 0x3d64dcu: goto label_3d64dc;
        case 0x3d64e0u: goto label_3d64e0;
        case 0x3d64e4u: goto label_3d64e4;
        case 0x3d64e8u: goto label_3d64e8;
        case 0x3d64ecu: goto label_3d64ec;
        case 0x3d64f0u: goto label_3d64f0;
        case 0x3d64f4u: goto label_3d64f4;
        case 0x3d64f8u: goto label_3d64f8;
        case 0x3d64fcu: goto label_3d64fc;
        case 0x3d6500u: goto label_3d6500;
        case 0x3d6504u: goto label_3d6504;
        case 0x3d6508u: goto label_3d6508;
        case 0x3d650cu: goto label_3d650c;
        case 0x3d6510u: goto label_3d6510;
        case 0x3d6514u: goto label_3d6514;
        case 0x3d6518u: goto label_3d6518;
        case 0x3d651cu: goto label_3d651c;
        case 0x3d6520u: goto label_3d6520;
        case 0x3d6524u: goto label_3d6524;
        case 0x3d6528u: goto label_3d6528;
        case 0x3d652cu: goto label_3d652c;
        case 0x3d6530u: goto label_3d6530;
        case 0x3d6534u: goto label_3d6534;
        case 0x3d6538u: goto label_3d6538;
        case 0x3d653cu: goto label_3d653c;
        case 0x3d6540u: goto label_3d6540;
        case 0x3d6544u: goto label_3d6544;
        case 0x3d6548u: goto label_3d6548;
        case 0x3d654cu: goto label_3d654c;
        case 0x3d6550u: goto label_3d6550;
        case 0x3d6554u: goto label_3d6554;
        case 0x3d6558u: goto label_3d6558;
        case 0x3d655cu: goto label_3d655c;
        case 0x3d6560u: goto label_3d6560;
        case 0x3d6564u: goto label_3d6564;
        case 0x3d6568u: goto label_3d6568;
        case 0x3d656cu: goto label_3d656c;
        case 0x3d6570u: goto label_3d6570;
        case 0x3d6574u: goto label_3d6574;
        case 0x3d6578u: goto label_3d6578;
        case 0x3d657cu: goto label_3d657c;
        case 0x3d6580u: goto label_3d6580;
        case 0x3d6584u: goto label_3d6584;
        case 0x3d6588u: goto label_3d6588;
        case 0x3d658cu: goto label_3d658c;
        case 0x3d6590u: goto label_3d6590;
        case 0x3d6594u: goto label_3d6594;
        case 0x3d6598u: goto label_3d6598;
        case 0x3d659cu: goto label_3d659c;
        case 0x3d65a0u: goto label_3d65a0;
        case 0x3d65a4u: goto label_3d65a4;
        case 0x3d65a8u: goto label_3d65a8;
        case 0x3d65acu: goto label_3d65ac;
        case 0x3d65b0u: goto label_3d65b0;
        case 0x3d65b4u: goto label_3d65b4;
        case 0x3d65b8u: goto label_3d65b8;
        case 0x3d65bcu: goto label_3d65bc;
        case 0x3d65c0u: goto label_3d65c0;
        case 0x3d65c4u: goto label_3d65c4;
        case 0x3d65c8u: goto label_3d65c8;
        case 0x3d65ccu: goto label_3d65cc;
        default: break;
    }

    ctx->pc = 0x3d5f80u;

label_3d5f80:
    // 0x3d5f80: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x3d5f80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_3d5f84:
    // 0x3d5f84: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x3d5f84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3d5f88:
    // 0x3d5f88: 0x7fbe0040  sq          $fp, 0x40($sp)
    ctx->pc = 0x3d5f88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 30));
label_3d5f8c:
    // 0x3d5f8c: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x3d5f8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3d5f90:
    // 0x3d5f90: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x3d5f90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
label_3d5f94:
    // 0x3d5f94: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x3d5f94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
label_3d5f98:
    // 0x3d5f98: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x3d5f98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
label_3d5f9c:
    // 0x3d5f9c: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x3d5f9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
label_3d5fa0:
    // 0x3d5fa0: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x3d5fa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
label_3d5fa4:
    // 0x3d5fa4: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x3d5fa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
label_3d5fa8:
    // 0x3d5fa8: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x3d5fa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_3d5fac:
    // 0x3d5fac: 0x7fb70050  sq          $s7, 0x50($sp)
    ctx->pc = 0x3d5facu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 23));
label_3d5fb0:
    // 0x3d5fb0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3d5fb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_3d5fb4:
    // 0x3d5fb4: 0xc10480a  jal         func_412028
label_3d5fb8:
    if (ctx->pc == 0x3D5FB8u) {
        ctx->pc = 0x3D5FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5FB4u;
        // 0x3d5fb8: 0x80f02d  daddu       $fp, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D5FBCu;
        goto label_3d5fbc;
    }
    ctx->pc = 0x3D5FB4u;
    SET_GPR_U32(ctx, 31, 0x3D5FBCu);
    ctx->pc = 0x3D5FB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D5FB4u;
    // 0x3d5fb8: 0x80f02d  daddu       $fp, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x412028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x412028u, 0x3D5FB4u, 0x3D5FBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D5FBCu;
label_3d5fbc:
    // 0x3d5fbc: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3d5fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3d5fc0:
    // 0x3d5fc0: 0x14430017  bne         $v0, $v1, . + 4 + (0x17 << 2)
label_3d5fc4:
    if (ctx->pc == 0x3D5FC4u) {
        ctx->pc = 0x3D5FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5FC0u;
        // 0x3d5fc4: 0xafa00024  sw          $zero, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D5FC8u;
        goto label_3d5fc8;
    }
    ctx->pc = 0x3D5FC0u;
    {
        const bool branch_taken_0x3d5fc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3D5FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5FC0u;
        // 0x3d5fc4: 0xafa00024  sw          $zero, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d5fc0) {
            ctx->pc = 0x3D6020u;
            goto label_3d6020;
        }
    }
    ctx->pc = 0x3D5FC8u;
label_3d5fc8:
    // 0x3d5fc8: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x3d5fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_3d5fcc:
    // 0x3d5fcc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x3d5fccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_3d5fd0:
    // 0x3d5fd0: 0x2463e880  addiu       $v1, $v1, -0x1780
    ctx->pc = 0x3d5fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961280));
label_3d5fd4:
    // 0x3d5fd4: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x3d5fd4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
label_3d5fd8:
    // 0x3d5fd8: 0x8c620108  lw          $v0, 0x108($v1)
    ctx->pc = 0x3d5fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 264)));
label_3d5fdc:
    // 0x3d5fdc: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x3d5fdcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_3d5fe0:
    // 0x3d5fe0: 0x40f809  jalr        $v0
label_3d5fe4:
    if (ctx->pc == 0x3D5FE4u) {
        ctx->pc = 0x3D5FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5FE0u;
        // 0x3d5fe4: 0x34a501b3  ori         $a1, $a1, 0x1B3 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)435);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D5FE8u;
        goto label_3d5fe8;
    }
    ctx->pc = 0x3D5FE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3D5FE8u);
        ctx->pc = 0x3D5FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5FE0u;
        // 0x3d5fe4: 0x34a501b3  ori         $a1, $a1, 0x1B3 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)435);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D5FE0u, 0x3D5FE8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3D5FE8u;
label_3d5fe8:
    // 0x3d5fe8: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x3d5fe8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3d5fec:
    // 0x3d5fec: 0x56e0000e  bnel        $s7, $zero, . + 4 + (0xE << 2)
label_3d5ff0:
    if (ctx->pc == 0x3D5FF0u) {
        ctx->pc = 0x3D5FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5FECu;
        // 0x3d5ff0: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D5FF4u;
        goto label_3d5ff4;
    }
    ctx->pc = 0x3D5FECu;
    {
        const bool branch_taken_0x3d5fec = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d5fec) {
            ctx->pc = 0x3D5FF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D5FECu;
            // 0x3d5ff0: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D6028u;
            goto label_3d6028;
        }
    }
    ctx->pc = 0x3D5FF4u;
label_3d5ff4:
    // 0x3d5ff4: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x3d5ff4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_3d5ff8:
    // 0x3d5ff8: 0x240201b3  addiu       $v0, $zero, 0x1B3
    ctx->pc = 0x3d5ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 435));
label_3d5ffc:
    // 0x3d5ffc: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x3d5ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_3d6000:
    // 0x3d6000: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x3d6000u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_3d6004:
    // 0x3d6004: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x3d6004u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_3d6008:
    // 0x3d6008: 0xc1035f6  jal         func_40D7D8
label_3d600c:
    if (ctx->pc == 0x3D600Cu) {
        ctx->pc = 0x3D600Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6008u;
        // 0x3d600c: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D6010u;
        goto label_3d6010;
    }
    ctx->pc = 0x3D6008u;
    SET_GPR_U32(ctx, 31, 0x3D6010u);
    ctx->pc = 0x3D600Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D6008u;
    // 0x3d600c: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x3D6008u, 0x3D6010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D6010u;
label_3d6010:
    // 0x3d6010: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3d6010u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3d6014:
    // 0x3d6014: 0xc103628  jal         func_40D8A0
label_3d6018:
    if (ctx->pc == 0x3D6018u) {
        ctx->pc = 0x3D6018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6014u;
        // 0x3d6018: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D601Cu;
        goto label_3d601c;
    }
    ctx->pc = 0x3D6014u;
    SET_GPR_U32(ctx, 31, 0x3D601Cu);
    ctx->pc = 0x3D6018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D6014u;
    // 0x3d6018: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x3D6014u, 0x3D601Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D601Cu;
label_3d601c:
    // 0x3d601c: 0x0  nop
    ctx->pc = 0x3d601cu;
    // NOP
label_3d6020:
    // 0x3d6020: 0x1000015f  b           . + 4 + (0x15F << 2)
label_3d6024:
    if (ctx->pc == 0x3D6024u) {
        ctx->pc = 0x3D6024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6020u;
        // 0x3d6024: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D6028u;
        goto label_3d6028;
    }
    ctx->pc = 0x3D6020u;
    {
        const bool branch_taken_0x3d6020 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D6024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6020u;
        // 0x3d6024: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d6020) {
            ctx->pc = 0x3D65A0u;
            goto label_3d65a0;
        }
    }
    ctx->pc = 0x3D6028u;
label_3d6028:
    // 0x3d6028: 0x1840001a  blez        $v0, . + 4 + (0x1A << 2)
label_3d602c:
    if (ctx->pc == 0x3D602Cu) {
        ctx->pc = 0x3D602Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6028u;
        // 0x3d602c: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D6030u;
        goto label_3d6030;
    }
    ctx->pc = 0x3D6028u;
    {
        const bool branch_taken_0x3d6028 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x3D602Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6028u;
        // 0x3d602c: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d6028) {
            ctx->pc = 0x3D6094u;
            goto label_3d6094;
        }
    }
    ctx->pc = 0x3D6030u;
label_3d6030:
    // 0x3d6030: 0x2e0802d  daddu       $s0, $s7, $zero
    ctx->pc = 0x3d6030u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3d6034:
    // 0x3d6034: 0x0  nop
    ctx->pc = 0x3d6034u;
    // NOP
label_3d6038:
    // 0x3d6038: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x3d6038u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_3d603c:
    // 0x3d603c: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x3d603cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_3d6040:
    // 0x3d6040: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3d6040u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3d6044:
    // 0x3d6044: 0xc103322  jal         func_40CC88
label_3d6048:
    if (ctx->pc == 0x3D6048u) {
        ctx->pc = 0x3D6048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6044u;
        // 0x3d6048: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D604Cu;
        goto label_3d604c;
    }
    ctx->pc = 0x3D6044u;
    SET_GPR_U32(ctx, 31, 0x3D604Cu);
    ctx->pc = 0x3D6048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D6044u;
    // 0x3d6048: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40CC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40CC88u, 0x3D6044u, 0x3D604Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D604Cu;
label_3d604c:
    // 0x3d604c: 0x10400154  beqz        $v0, . + 4 + (0x154 << 2)
label_3d6050:
    if (ctx->pc == 0x3D6050u) {
        ctx->pc = 0x3D6050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D604Cu;
        // 0x3d6050: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D6054u;
        goto label_3d6054;
    }
    ctx->pc = 0x3D604Cu;
    {
        const bool branch_taken_0x3d604c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D6050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D604Cu;
        // 0x3d6050: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d604c) {
            ctx->pc = 0x3D65A0u;
            goto label_3d65a0;
        }
    }
    ctx->pc = 0x3D6054u;
label_3d6054:
    // 0x3d6054: 0xc106f0a  jal         func_41BC28
label_3d6058:
    if (ctx->pc == 0x3D6058u) {
        ctx->pc = 0x3D6058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6054u;
        // 0x3d6058: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D605Cu;
        goto label_3d605c;
    }
    ctx->pc = 0x3D6054u;
    SET_GPR_U32(ctx, 31, 0x3D605Cu);
    ctx->pc = 0x3D6058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D6054u;
    // 0x3d6058: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41BC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41BC28u, 0x3D6054u, 0x3D605Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D605Cu;
label_3d605c:
    // 0x3d605c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3d605cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3d6060:
    // 0x3d6060: 0x1080ffef  beqz        $a0, . + 4 + (-0x11 << 2)
label_3d6064:
    if (ctx->pc == 0x3D6064u) {
        ctx->pc = 0x3D6064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6060u;
        // 0x3d6064: 0xae040000  sw          $a0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D6068u;
        goto label_3d6068;
    }
    ctx->pc = 0x3D6060u;
    {
        const bool branch_taken_0x3d6060 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D6064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6060u;
        // 0x3d6064: 0xae040000  sw          $a0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d6060) {
            ctx->pc = 0x3D6020u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d6020;
        }
    }
    ctx->pc = 0x3D6068u;
label_3d6068:
    // 0x3d6068: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x3d6068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3d606c:
    // 0x3d606c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x3d606cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_3d6070:
    // 0x3d6070: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_3d6074:
    if (ctx->pc == 0x3D6074u) {
        ctx->pc = 0x3D6074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6070u;
        // 0x3d6074: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D6078u;
        goto label_3d6078;
    }
    ctx->pc = 0x3D6070u;
    {
        const bool branch_taken_0x3d6070 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D6074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6070u;
        // 0x3d6074: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d6070) {
            ctx->pc = 0x3D6084u;
            goto label_3d6084;
        }
    }
    ctx->pc = 0x3D6078u;
label_3d6078:
    // 0x3d6078: 0xc106faa  jal         func_41BEA8
label_3d607c:
    if (ctx->pc == 0x3D607Cu) {
        ctx->pc = 0x3D6080u;
        goto label_3d6080;
    }
    ctx->pc = 0x3D6078u;
    SET_GPR_U32(ctx, 31, 0x3D6080u);
    ctx->pc = 0x41BEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41BEA8u, 0x3D6078u, 0x3D6080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D6080u;
label_3d6080:
    // 0x3d6080: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x3d6080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_3d6084:
    // 0x3d6084: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x3d6084u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_3d6088:
    // 0x3d6088: 0x282102a  slt         $v0, $s4, $v0
    ctx->pc = 0x3d6088u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_3d608c:
    // 0x3d608c: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
label_3d6090:
    if (ctx->pc == 0x3D6090u) {
        ctx->pc = 0x3D6090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D608Cu;
        // 0x3d6090: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D6094u;
        goto label_3d6094;
    }
    ctx->pc = 0x3D608Cu;
    {
        const bool branch_taken_0x3d608c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D6090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D608Cu;
        // 0x3d6090: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d608c) {
            ctx->pc = 0x3D6038u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d6038;
        }
    }
    ctx->pc = 0x3D6094u;
label_3d6094:
    // 0x3d6094: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x3d6094u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_3d6098:
    // 0x3d6098: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x3d6098u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_3d609c:
    // 0x3d609c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3d609cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3d60a0:
    // 0x3d60a0: 0xc103322  jal         func_40CC88
label_3d60a4:
    if (ctx->pc == 0x3D60A4u) {
        ctx->pc = 0x3D60A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D60A0u;
        // 0x3d60a4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D60A8u;
        goto label_3d60a8;
    }
    ctx->pc = 0x3D60A0u;
    SET_GPR_U32(ctx, 31, 0x3D60A8u);
    ctx->pc = 0x3D60A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D60A0u;
    // 0x3d60a4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40CC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40CC88u, 0x3D60A0u, 0x3D60A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D60A8u;
label_3d60a8:
    // 0x3d60a8: 0x1040013d  beqz        $v0, . + 4 + (0x13D << 2)
label_3d60ac:
    if (ctx->pc == 0x3D60ACu) {
        ctx->pc = 0x3D60ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D60A8u;
        // 0x3d60ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D60B0u;
        goto label_3d60b0;
    }
    ctx->pc = 0x3D60A8u;
    {
        const bool branch_taken_0x3d60a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D60ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D60A8u;
        // 0x3d60ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d60a8) {
            ctx->pc = 0x3D65A0u;
            goto label_3d65a0;
        }
    }
    ctx->pc = 0x3D60B0u;
label_3d60b0:
    // 0x3d60b0: 0xc0f575a  jal         func_3D5D68
label_3d60b4:
    if (ctx->pc == 0x3D60B4u) {
        ctx->pc = 0x3D60B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D60B0u;
        // 0x3d60b4: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D60B8u;
        goto label_3d60b8;
    }
    ctx->pc = 0x3D60B0u;
    SET_GPR_U32(ctx, 31, 0x3D60B8u);
    ctx->pc = 0x3D60B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D60B0u;
    // 0x3d60b4: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D5D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D5D68u, 0x3D60B0u, 0x3D60B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D60B8u;
label_3d60b8:
    // 0x3d60b8: 0x1040ffd9  beqz        $v0, . + 4 + (-0x27 << 2)
label_3d60bc:
    if (ctx->pc == 0x3D60BCu) {
        ctx->pc = 0x3D60BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D60B8u;
        // 0x3d60bc: 0xafa20028  sw          $v0, 0x28($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D60C0u;
        goto label_3d60c0;
    }
    ctx->pc = 0x3D60B8u;
    {
        const bool branch_taken_0x3d60b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D60BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D60B8u;
        // 0x3d60bc: 0xafa20028  sw          $v0, 0x28($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d60b8) {
            ctx->pc = 0x3D6020u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d6020;
        }
    }
    ctx->pc = 0x3D60C0u;
label_3d60c0:
    // 0x3d60c0: 0x8ee20000  lw          $v0, 0x0($s7)
    ctx->pc = 0x3d60c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_3d60c4:
    // 0x3d60c4: 0x24100004  addiu       $s0, $zero, 0x4
    ctx->pc = 0x3d60c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3d60c8:
    // 0x3d60c8: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x3d60c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_3d60cc:
    // 0x3d60cc: 0x8c46000c  lw          $a2, 0xC($v0)
    ctx->pc = 0x3d60ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_3d60d0:
    // 0x3d60d0: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x3d60d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_3d60d4:
    // 0x3d60d4: 0x28630002  slti        $v1, $v1, 0x2
    ctx->pc = 0x3d60d4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_3d60d8:
    // 0x3d60d8: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x3d60d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_3d60dc:
    // 0x3d60dc: 0xafa50014  sw          $a1, 0x14($sp)
    ctx->pc = 0x3d60dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 5));
label_3d60e0:
    // 0x3d60e0: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x3d60e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
label_3d60e4:
    // 0x3d60e4: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_3d60e8:
    if (ctx->pc == 0x3D60E8u) {
        ctx->pc = 0x3D60E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D60E4u;
        // 0x3d60e8: 0xafa6001c  sw          $a2, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D60ECu;
        goto label_3d60ec;
    }
    ctx->pc = 0x3D60E4u;
    {
        const bool branch_taken_0x3d60e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D60E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D60E4u;
        // 0x3d60e8: 0xafa6001c  sw          $a2, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d60e4) {
            ctx->pc = 0x3D60F4u;
            goto label_3d60f4;
        }
    }
    ctx->pc = 0x3D60ECu;
label_3d60ec:
    // 0x3d60ec: 0x10000007  b           . + 4 + (0x7 << 2)
label_3d60f0:
    if (ctx->pc == 0x3D60F0u) {
        ctx->pc = 0x3D60F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D60ECu;
        // 0x3d60f0: 0x34108004  ori         $s0, $zero, 0x8004 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32772);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D60F4u;
        goto label_3d60f4;
    }
    ctx->pc = 0x3D60ECu;
    {
        const bool branch_taken_0x3d60ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D60F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D60ECu;
        // 0x3d60f0: 0x34108004  ori         $s0, $zero, 0x8004 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32772);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d60ec) {
            ctx->pc = 0x3D610Cu;
            goto label_3d610c;
        }
    }
    ctx->pc = 0x3D60F4u;
label_3d60f4:
    // 0x3d60f4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x3d60f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_3d60f8:
    // 0x3d60f8: 0x90620050  lbu         $v0, 0x50($v1)
    ctx->pc = 0x3d60f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 80)));
label_3d60fc:
    // 0x3d60fc: 0x34039004  ori         $v1, $zero, 0x9004
    ctx->pc = 0x3d60fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)36868);
label_3d6100:
    // 0x3d6100: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3d6100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_3d6104:
    // 0x3d6104: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x3d6104u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_3d6108:
    // 0x3d6108: 0x62800a  movz        $s0, $v1, $v0
    ctx->pc = 0x3d6108u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
label_3d610c:
    // 0x3d610c: 0x8ee40000  lw          $a0, 0x0($s7)
    ctx->pc = 0x3d610cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_3d6110:
    // 0x3d6110: 0x27a70018  addiu       $a3, $sp, 0x18
    ctx->pc = 0x3d6110u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
label_3d6114:
    // 0x3d6114: 0x27a60014  addiu       $a2, $sp, 0x14
    ctx->pc = 0x3d6114u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
label_3d6118:
    // 0x3d6118: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3d6118u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3d611c:
    // 0x3d611c: 0x27a8001c  addiu       $t0, $sp, 0x1C
    ctx->pc = 0x3d611cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
label_3d6120:
    // 0x3d6120: 0xc107408  jal         func_41D020
label_3d6124:
    if (ctx->pc == 0x3D6124u) {
        ctx->pc = 0x3D6124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6120u;
        // 0x3d6124: 0x27a90020  addiu       $t1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D6128u;
        goto label_3d6128;
    }
    ctx->pc = 0x3D6120u;
    SET_GPR_U32(ctx, 31, 0x3D6128u);
    ctx->pc = 0x3D6124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D6120u;
    // 0x3d6124: 0x27a90020  addiu       $t1, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D020u, 0x3D6120u, 0x3D6128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D6128u;
label_3d6128:
    // 0x3d6128: 0x8fa70020  lw          $a3, 0x20($sp)
    ctx->pc = 0x3d6128u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_3d612c:
    // 0x3d612c: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x3d612cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_3d6130:
    // 0x3d6130: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x3d6130u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_3d6134:
    // 0x3d6134: 0x2073825  or          $a3, $s0, $a3
    ctx->pc = 0x3d6134u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 16) | GPR_U64(ctx, 7));
label_3d6138:
    // 0x3d6138: 0xc10746c  jal         func_41D1B0
label_3d613c:
    if (ctx->pc == 0x3D613Cu) {
        ctx->pc = 0x3D613Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6138u;
        // 0x3d613c: 0x8fa6001c  lw          $a2, 0x1C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D6140u;
        goto label_3d6140;
    }
    ctx->pc = 0x3D6138u;
    SET_GPR_U32(ctx, 31, 0x3D6140u);
    ctx->pc = 0x3D613Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D6138u;
    // 0x3d613c: 0x8fa6001c  lw          $a2, 0x1C($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41D1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D1B0u, 0x3D6138u, 0x3D6140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D6140u;
label_3d6140:
    // 0x3d6140: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x3d6140u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3d6144:
    // 0x3d6144: 0x56a00016  bnel        $s5, $zero, . + 4 + (0x16 << 2)
label_3d6148:
    if (ctx->pc == 0x3D6148u) {
        ctx->pc = 0x3D6148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6144u;
        // 0x3d6148: 0x8ee30000  lw          $v1, 0x0($s7) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D614Cu;
        goto label_3d614c;
    }
    ctx->pc = 0x3D6144u;
    {
        const bool branch_taken_0x3d6144 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d6144) {
            ctx->pc = 0x3D6148u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D6144u;
            // 0x3d6148: 0x8ee30000  lw          $v1, 0x0($s7) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D61A0u;
            goto label_3d61a0;
        }
    }
    ctx->pc = 0x3D614Cu;
label_3d614c:
    // 0x3d614c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x3d614cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_3d6150:
    // 0x3d6150: 0x2a2102a  slt         $v0, $s5, $v0
    ctx->pc = 0x3d6150u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_3d6154:
    // 0x3d6154: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_3d6158:
    if (ctx->pc == 0x3D6158u) {
        ctx->pc = 0x3D6158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6154u;
        // 0x3d6158: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D615Cu;
        goto label_3d615c;
    }
    ctx->pc = 0x3D6154u;
    {
        const bool branch_taken_0x3d6154 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D6158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6154u;
        // 0x3d6158: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d6154) {
            ctx->pc = 0x3D6184u;
            goto label_3d6184;
        }
    }
    ctx->pc = 0x3D615Cu;
label_3d615c:
    // 0x3d615c: 0x2e0802d  daddu       $s0, $s7, $zero
    ctx->pc = 0x3d615cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3d6160:
    // 0x3d6160: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x3d6160u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3d6164:
    // 0x3d6164: 0x0  nop
    ctx->pc = 0x3d6164u;
    // NOP
label_3d6168:
    // 0x3d6168: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x3d6168u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_3d616c:
    // 0x3d616c: 0xc10705c  jal         func_41C170
label_3d6170:
    if (ctx->pc == 0x3D6170u) {
        ctx->pc = 0x3D6170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D616Cu;
        // 0x3d6170: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D6174u;
        goto label_3d6174;
    }
    ctx->pc = 0x3D616Cu;
    SET_GPR_U32(ctx, 31, 0x3D6174u);
    ctx->pc = 0x3D6170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D616Cu;
    // 0x3d6170: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41C170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C170u, 0x3D616Cu, 0x3D6174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D6174u;
label_3d6174:
    // 0x3d6174: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x3d6174u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_3d6178:
    // 0x3d6178: 0x283182a  slt         $v1, $s4, $v1
    ctx->pc = 0x3d6178u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_3d617c:
    // 0x3d617c: 0x5460fffa  bnel        $v1, $zero, . + 4 + (-0x6 << 2)
label_3d6180:
    if (ctx->pc == 0x3D6180u) {
        ctx->pc = 0x3D6180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D617Cu;
        // 0x3d6180: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D6184u;
        goto label_3d6184;
    }
    ctx->pc = 0x3D617Cu;
    {
        const bool branch_taken_0x3d617c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d617c) {
            ctx->pc = 0x3D6180u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D617Cu;
            // 0x3d6180: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D6168u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d6168;
        }
    }
    ctx->pc = 0x3D6184u;
label_3d6184:
    // 0x3d6184: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x3d6184u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
label_3d6188:
    // 0x3d6188: 0x2483e880  addiu       $v1, $a0, -0x1780
    ctx->pc = 0x3d6188u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961280));
label_3d618c:
    // 0x3d618c: 0x8c62010c  lw          $v0, 0x10C($v1)
    ctx->pc = 0x3d618cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
label_3d6190:
    // 0x3d6190: 0x40f809  jalr        $v0
label_3d6194:
    if (ctx->pc == 0x3D6194u) {
        ctx->pc = 0x3D6194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6190u;
        // 0x3d6194: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D6198u;
        goto label_3d6198;
    }
    ctx->pc = 0x3D6190u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3D6198u);
        ctx->pc = 0x3D6194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6190u;
        // 0x3d6194: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D6190u, 0x3D6198u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3D6198u;
label_3d6198:
    // 0x3d6198: 0x10000101  b           . + 4 + (0x101 << 2)
label_3d619c:
    if (ctx->pc == 0x3D619Cu) {
        ctx->pc = 0x3D619Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6198u;
        // 0x3d619c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D61A0u;
        goto label_3d61a0;
    }
    ctx->pc = 0x3D6198u;
    {
        const bool branch_taken_0x3d6198 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D619Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6198u;
        // 0x3d619c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d6198) {
            ctx->pc = 0x3D65A0u;
            goto label_3d65a0;
        }
    }
    ctx->pc = 0x3D61A0u;
label_3d61a0:
    // 0x3d61a0: 0x8ea4000c  lw          $a0, 0xC($s5)
    ctx->pc = 0x3d61a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
label_3d61a4:
    // 0x3d61a4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x3d61a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_3d61a8:
    // 0x3d61a8: 0x14440004  bne         $v0, $a0, . + 4 + (0x4 << 2)
label_3d61ac:
    if (ctx->pc == 0x3D61ACu) {
        ctx->pc = 0x3D61ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D61A8u;
        // 0x3d61ac: 0x8ea50010  lw          $a1, 0x10($s5) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D61B0u;
        goto label_3d61b0;
    }
    ctx->pc = 0x3D61A8u;
    {
        const bool branch_taken_0x3d61a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x3D61ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D61A8u;
        // 0x3d61ac: 0x8ea50010  lw          $a1, 0x10($s5) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d61a8) {
            ctx->pc = 0x3D61BCu;
            goto label_3d61bc;
        }
    }
    ctx->pc = 0x3D61B0u;
label_3d61b0:
    // 0x3d61b0: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x3d61b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_3d61b4:
    // 0x3d61b4: 0x104500a6  beq         $v0, $a1, . + 4 + (0xA6 << 2)
label_3d61b8:
    if (ctx->pc == 0x3D61B8u) {
        ctx->pc = 0x3D61B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D61B4u;
        // 0x3d61b8: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D61BCu;
        goto label_3d61bc;
    }
    ctx->pc = 0x3D61B4u;
    {
        const bool branch_taken_0x3d61b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x3D61B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D61B4u;
        // 0x3d61b8: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d61b4) {
            ctx->pc = 0x3D6450u;
            goto label_3d6450;
        }
    }
    ctx->pc = 0x3D61BCu;
label_3d61bc:
    // 0x3d61bc: 0x8fa3001c  lw          $v1, 0x1C($sp)
    ctx->pc = 0x3d61bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
label_3d61c0:
    // 0x3d61c0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3d61c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3d61c4:
    // 0x3d61c4: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x3d61c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_3d61c8:
    // 0x3d61c8: 0x14620011  bne         $v1, $v0, . + 4 + (0x11 << 2)
label_3d61cc:
    if (ctx->pc == 0x3D61CCu) {
        ctx->pc = 0x3D61CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D61C8u;
        // 0x3d61cc: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D61D0u;
        goto label_3d61d0;
    }
    ctx->pc = 0x3D61C8u;
    {
        const bool branch_taken_0x3d61c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3D61CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D61C8u;
        // 0x3d61cc: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d61c8) {
            ctx->pc = 0x3D6210u;
            goto label_3d6210;
        }
    }
    ctx->pc = 0x3D61D0u;
label_3d61d0:
    // 0x3d61d0: 0xc1074ac  jal         func_41D2B0
label_3d61d4:
    if (ctx->pc == 0x3D61D4u) {
        ctx->pc = 0x3D61D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D61D0u;
        // 0x3d61d4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D61D8u;
        goto label_3d61d8;
    }
    ctx->pc = 0x3D61D0u;
    SET_GPR_U32(ctx, 31, 0x3D61D8u);
    ctx->pc = 0x3D61D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D61D0u;
    // 0x3d61d4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41D2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D2B0u, 0x3D61D0u, 0x3D61D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D61D8u;
label_3d61d8:
    // 0x3d61d8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3d61d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3d61dc:
    // 0x3d61dc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3d61dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3d61e0:
    // 0x3d61e0: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x3d61e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_3d61e4:
    // 0x3d61e4: 0xc10746c  jal         func_41D1B0
label_3d61e8:
    if (ctx->pc == 0x3D61E8u) {
        ctx->pc = 0x3D61E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D61E4u;
        // 0x3d61e8: 0x36070500  ori         $a3, $s0, 0x500 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)1280);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D61ECu;
        goto label_3d61ec;
    }
    ctx->pc = 0x3D61E4u;
    SET_GPR_U32(ctx, 31, 0x3D61ECu);
    ctx->pc = 0x3D61E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D61E4u;
    // 0x3d61e8: 0x36070500  ori         $a3, $s0, 0x500 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)1280);
    ctx->in_delay_slot = false;
    ctx->pc = 0x41D1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D1B0u, 0x3D61E4u, 0x3D61ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D61ECu;
label_3d61ec:
    // 0x3d61ec: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x3d61ecu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3d61f0:
    // 0x3d61f0: 0x16a00008  bnez        $s5, . + 4 + (0x8 << 2)
label_3d61f4:
    if (ctx->pc == 0x3D61F4u) {
        ctx->pc = 0x3D61F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D61F0u;
        // 0x3d61f4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D61F8u;
        goto label_3d61f8;
    }
    ctx->pc = 0x3D61F0u;
    {
        const bool branch_taken_0x3d61f0 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D61F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D61F0u;
        // 0x3d61f4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d61f0) {
            ctx->pc = 0x3D6214u;
            goto label_3d6214;
        }
    }
    ctx->pc = 0x3D61F8u;
label_3d61f8:
    // 0x3d61f8: 0x36070100  ori         $a3, $s0, 0x100
    ctx->pc = 0x3d61f8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)256);
label_3d61fc:
    // 0x3d61fc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3d61fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3d6200:
    // 0x3d6200: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3d6200u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3d6204:
    // 0x3d6204: 0xc10746c  jal         func_41D1B0
label_3d6208:
    if (ctx->pc == 0x3D6208u) {
        ctx->pc = 0x3D6208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6204u;
        // 0x3d6208: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D620Cu;
        goto label_3d620c;
    }
    ctx->pc = 0x3D6204u;
    SET_GPR_U32(ctx, 31, 0x3D620Cu);
    ctx->pc = 0x3D6208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D6204u;
    // 0x3d6208: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41D1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D1B0u, 0x3D6204u, 0x3D620Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D620Cu;
label_3d620c:
    // 0x3d620c: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x3d620cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3d6210:
    // 0x3d6210: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3d6210u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3d6214:
    // 0x3d6214: 0xc1074ce  jal         func_41D338
label_3d6218:
    if (ctx->pc == 0x3D6218u) {
        ctx->pc = 0x3D6218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6214u;
        // 0x3d6218: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D621Cu;
        goto label_3d621c;
    }
    ctx->pc = 0x3D6214u;
    SET_GPR_U32(ctx, 31, 0x3D621Cu);
    ctx->pc = 0x3D6218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D6214u;
    // 0x3d6218: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41D338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D338u, 0x3D6214u, 0x3D621Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D621Cu;
label_3d621c:
    // 0x3d621c: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x3d621cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3d6220:
    // 0x3d6220: 0x1ac0008a  blez        $s6, . + 4 + (0x8A << 2)
label_3d6224:
    if (ctx->pc == 0x3D6224u) {
        ctx->pc = 0x3D6224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6220u;
        // 0x3d6224: 0x2e0802d  daddu       $s0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D6228u;
        goto label_3d6228;
    }
    ctx->pc = 0x3D6220u;
    {
        const bool branch_taken_0x3d6220 = (GPR_S32(ctx, 22) <= 0);
        ctx->pc = 0x3D6224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6220u;
        // 0x3d6224: 0x2e0802d  daddu       $s0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d6220) {
            ctx->pc = 0x3D644Cu;
            goto label_3d644c;
        }
    }
    ctx->pc = 0x3D6228u;
label_3d6228:
    // 0x3d6228: 0x1ac0002b  blez        $s6, . + 4 + (0x2B << 2)
label_3d622c:
    if (ctx->pc == 0x3D622Cu) {
        ctx->pc = 0x3D622Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6228u;
        // 0x3d622c: 0x32c30003  andi        $v1, $s6, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D6230u;
        goto label_3d6230;
    }
    ctx->pc = 0x3D6228u;
    {
        const bool branch_taken_0x3d6228 = (GPR_S32(ctx, 22) <= 0);
        ctx->pc = 0x3D622Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6228u;
        // 0x3d622c: 0x32c30003  andi        $v1, $s6, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d6228) {
            ctx->pc = 0x3D62D8u;
            goto label_3d62d8;
        }
    }
    ctx->pc = 0x3D6230u;
label_3d6230:
    // 0x3d6230: 0x1060003d  beqz        $v1, . + 4 + (0x3D << 2)
label_3d6234:
    if (ctx->pc == 0x3D6234u) {
        ctx->pc = 0x3D6234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6230u;
        // 0x3d6234: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D6238u;
        goto label_3d6238;
    }
    ctx->pc = 0x3D6230u;
    {
        const bool branch_taken_0x3d6230 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D6234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6230u;
        // 0x3d6234: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d6230) {
            ctx->pc = 0x3D6328u;
            goto label_3d6328;
        }
    }
    ctx->pc = 0x3D6238u;
label_3d6238:
    // 0x3d6238: 0x54400028  bnel        $v0, $zero, . + 4 + (0x28 << 2)
label_3d623c:
    if (ctx->pc == 0x3D623Cu) {
        ctx->pc = 0x3D623Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6238u;
        // 0x3d623c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D6240u;
        goto label_3d6240;
    }
    ctx->pc = 0x3D6238u;
    {
        const bool branch_taken_0x3d6238 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d6238) {
            ctx->pc = 0x3D623Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D6238u;
            // 0x3d623c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D62DCu;
            goto label_3d62dc;
        }
    }
    ctx->pc = 0x3D6240u;
label_3d6240:
    // 0x3d6240: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x3d6240u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_3d6244:
    // 0x3d6244: 0x54400013  bnel        $v0, $zero, . + 4 + (0x13 << 2)
label_3d6248:
    if (ctx->pc == 0x3D6248u) {
        ctx->pc = 0x3D6248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6244u;
        // 0x3d6248: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D624Cu;
        goto label_3d624c;
    }
    ctx->pc = 0x3D6244u;
    {
        const bool branch_taken_0x3d6244 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d6244) {
            ctx->pc = 0x3D6248u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D6244u;
            // 0x3d6248: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D6294u;
            goto label_3d6294;
        }
    }
    ctx->pc = 0x3D624Cu;
label_3d624c:
    // 0x3d624c: 0x8ee40000  lw          $a0, 0x0($s7)
    ctx->pc = 0x3d624cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_3d6250:
    // 0x3d6250: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3d6250u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3d6254:
    // 0x3d6254: 0xc10786a  jal         func_41E1A8
label_3d6258:
    if (ctx->pc == 0x3D6258u) {
        ctx->pc = 0x3D6258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6254u;
        // 0x3d6258: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D625Cu;
        goto label_3d625c;
    }
    ctx->pc = 0x3D6254u;
    SET_GPR_U32(ctx, 31, 0x3D625Cu);
    ctx->pc = 0x3D6258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D6254u;
    // 0x3d6258: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41E1A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41E1A8u, 0x3D6254u, 0x3D625Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D625Cu;
label_3d625c:
    // 0x3d625c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3d625cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3d6260:
    // 0x3d6260: 0x1260ff6f  beqz        $s3, . + 4 + (-0x91 << 2)
label_3d6264:
    if (ctx->pc == 0x3D6264u) {
        ctx->pc = 0x3D6264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6260u;
        // 0x3d6264: 0x26f00004  addiu       $s0, $s7, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 23), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D6268u;
        goto label_3d6268;
    }
    ctx->pc = 0x3D6260u;
    {
        const bool branch_taken_0x3d6260 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D6264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6260u;
        // 0x3d6264: 0x26f00004  addiu       $s0, $s7, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 23), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d6260) {
            ctx->pc = 0x3D6020u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d6020;
        }
    }
    ctx->pc = 0x3D6268u;
label_3d6268:
    // 0x3d6268: 0x8ee40000  lw          $a0, 0x0($s7)
    ctx->pc = 0x3d6268u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_3d626c:
    // 0x3d626c: 0xc10705c  jal         func_41C170
label_3d6270:
    if (ctx->pc == 0x3D6270u) {
        ctx->pc = 0x3D6270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D626Cu;
        // 0x3d6270: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D6274u;
        goto label_3d6274;
    }
    ctx->pc = 0x3D626Cu;
    SET_GPR_U32(ctx, 31, 0x3D6274u);
    ctx->pc = 0x3D6270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D626Cu;
    // 0x3d6270: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41C170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C170u, 0x3D626Cu, 0x3D6274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D6274u;
label_3d6274:
    // 0x3d6274: 0x2a450002  slti        $a1, $s2, 0x2
    ctx->pc = 0x3d6274u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
label_3d6278:
    // 0x3d6278: 0x121843  sra         $v1, $s2, 1
    ctx->pc = 0x3d6278u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 18), 1));
label_3d627c:
    // 0x3d627c: 0x2a240002  slti        $a0, $s1, 0x2
    ctx->pc = 0x3d627cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
label_3d6280:
    // 0x3d6280: 0x111043  sra         $v0, $s1, 1
    ctx->pc = 0x3d6280u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 17), 1));
label_3d6284:
    // 0x3d6284: 0xaef30000  sw          $s3, 0x0($s7)
    ctx->pc = 0x3d6284u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 19));
label_3d6288:
    // 0x3d6288: 0x65900a  movz        $s2, $v1, $a1
    ctx->pc = 0x3d6288u;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 3));
label_3d628c:
    // 0x3d628c: 0x44880a  movz        $s1, $v0, $a0
    ctx->pc = 0x3d628cu;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 2));
label_3d6290:
    // 0x3d6290: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x3d6290u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3d6294:
    // 0x3d6294: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3d6294u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3d6298:
    // 0x3d6298: 0xc10786a  jal         func_41E1A8
label_3d629c:
    if (ctx->pc == 0x3D629Cu) {
        ctx->pc = 0x3D629Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6298u;
        // 0x3d629c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D62A0u;
        goto label_3d62a0;
    }
    ctx->pc = 0x3D6298u;
    SET_GPR_U32(ctx, 31, 0x3D62A0u);
    ctx->pc = 0x3D629Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D6298u;
    // 0x3d629c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41E1A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41E1A8u, 0x3D6298u, 0x3D62A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D62A0u;
label_3d62a0:
    // 0x3d62a0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3d62a0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3d62a4:
    // 0x3d62a4: 0x126000be  beqz        $s3, . + 4 + (0xBE << 2)
label_3d62a8:
    if (ctx->pc == 0x3D62A8u) {
        ctx->pc = 0x3D62A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D62A4u;
        // 0x3d62a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D62ACu;
        goto label_3d62ac;
    }
    ctx->pc = 0x3D62A4u;
    {
        const bool branch_taken_0x3d62a4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D62A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D62A4u;
        // 0x3d62a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d62a4) {
            ctx->pc = 0x3D65A0u;
            goto label_3d65a0;
        }
    }
    ctx->pc = 0x3D62ACu;
label_3d62ac:
    // 0x3d62ac: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x3d62acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3d62b0:
    // 0x3d62b0: 0xc10705c  jal         func_41C170
label_3d62b4:
    if (ctx->pc == 0x3D62B4u) {
        ctx->pc = 0x3D62B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D62B0u;
        // 0x3d62b4: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D62B8u;
        goto label_3d62b8;
    }
    ctx->pc = 0x3D62B0u;
    SET_GPR_U32(ctx, 31, 0x3D62B8u);
    ctx->pc = 0x3D62B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D62B0u;
    // 0x3d62b4: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41C170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C170u, 0x3D62B0u, 0x3D62B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D62B8u;
label_3d62b8:
    // 0x3d62b8: 0xae130000  sw          $s3, 0x0($s0)
    ctx->pc = 0x3d62b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 19));
label_3d62bc:
    // 0x3d62bc: 0x2a450002  slti        $a1, $s2, 0x2
    ctx->pc = 0x3d62bcu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
label_3d62c0:
    // 0x3d62c0: 0x121843  sra         $v1, $s2, 1
    ctx->pc = 0x3d62c0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 18), 1));
label_3d62c4:
    // 0x3d62c4: 0x2a240002  slti        $a0, $s1, 0x2
    ctx->pc = 0x3d62c4u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
label_3d62c8:
    // 0x3d62c8: 0x111043  sra         $v0, $s1, 1
    ctx->pc = 0x3d62c8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 17), 1));
label_3d62cc:
    // 0x3d62cc: 0x65900a  movz        $s2, $v1, $a1
    ctx->pc = 0x3d62ccu;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 3));
label_3d62d0:
    // 0x3d62d0: 0x44880a  movz        $s1, $v0, $a0
    ctx->pc = 0x3d62d0u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 2));
label_3d62d4:
    // 0x3d62d4: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x3d62d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_3d62d8:
    // 0x3d62d8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x3d62d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3d62dc:
    // 0x3d62dc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3d62dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3d62e0:
    // 0x3d62e0: 0xc10786a  jal         func_41E1A8
label_3d62e4:
    if (ctx->pc == 0x3D62E4u) {
        ctx->pc = 0x3D62E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D62E0u;
        // 0x3d62e4: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D62E8u;
        goto label_3d62e8;
    }
    ctx->pc = 0x3D62E0u;
    SET_GPR_U32(ctx, 31, 0x3D62E8u);
    ctx->pc = 0x3D62E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D62E0u;
    // 0x3d62e4: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41E1A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41E1A8u, 0x3D62E0u, 0x3D62E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D62E8u;
label_3d62e8:
    // 0x3d62e8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3d62e8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3d62ec:
    // 0x3d62ec: 0x126000ac  beqz        $s3, . + 4 + (0xAC << 2)
label_3d62f0:
    if (ctx->pc == 0x3D62F0u) {
        ctx->pc = 0x3D62F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D62ECu;
        // 0x3d62f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D62F4u;
        goto label_3d62f4;
    }
    ctx->pc = 0x3D62ECu;
    {
        const bool branch_taken_0x3d62ec = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D62F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D62ECu;
        // 0x3d62f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d62ec) {
            ctx->pc = 0x3D65A0u;
            goto label_3d65a0;
        }
    }
    ctx->pc = 0x3D62F4u;
label_3d62f4:
    // 0x3d62f4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x3d62f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3d62f8:
    // 0x3d62f8: 0xc10705c  jal         func_41C170
label_3d62fc:
    if (ctx->pc == 0x3D62FCu) {
        ctx->pc = 0x3D62FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D62F8u;
        // 0x3d62fc: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D6300u;
        goto label_3d6300;
    }
    ctx->pc = 0x3D62F8u;
    SET_GPR_U32(ctx, 31, 0x3D6300u);
    ctx->pc = 0x3D62FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D62F8u;
    // 0x3d62fc: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41C170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C170u, 0x3D62F8u, 0x3D6300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D6300u;
label_3d6300:
    // 0x3d6300: 0x111043  sra         $v0, $s1, 1
    ctx->pc = 0x3d6300u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 17), 1));
label_3d6304:
    // 0x3d6304: 0x2a240002  slti        $a0, $s1, 0x2
    ctx->pc = 0x3d6304u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
label_3d6308:
    // 0x3d6308: 0xae130000  sw          $s3, 0x0($s0)
    ctx->pc = 0x3d6308u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 19));
label_3d630c:
    // 0x3d630c: 0x2a450002  slti        $a1, $s2, 0x2
    ctx->pc = 0x3d630cu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
label_3d6310:
    // 0x3d6310: 0x121843  sra         $v1, $s2, 1
    ctx->pc = 0x3d6310u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 18), 1));
label_3d6314:
    // 0x3d6314: 0x44880a  movz        $s1, $v0, $a0
    ctx->pc = 0x3d6314u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 2));
label_3d6318:
    // 0x3d6318: 0x65900a  movz        $s2, $v1, $a1
    ctx->pc = 0x3d6318u;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 3));
label_3d631c:
    // 0x3d631c: 0x296102a  slt         $v0, $s4, $s6
    ctx->pc = 0x3d631cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
label_3d6320:
    // 0x3d6320: 0x1040004a  beqz        $v0, . + 4 + (0x4A << 2)
label_3d6324:
    if (ctx->pc == 0x3D6324u) {
        ctx->pc = 0x3D6324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6320u;
        // 0x3d6324: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D6328u;
        goto label_3d6328;
    }
    ctx->pc = 0x3D6320u;
    {
        const bool branch_taken_0x3d6320 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D6324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6320u;
        // 0x3d6324: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d6320) {
            ctx->pc = 0x3D644Cu;
            goto label_3d644c;
        }
    }
    ctx->pc = 0x3D6328u;
label_3d6328:
    // 0x3d6328: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x3d6328u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3d632c:
    // 0x3d632c: 0x0  nop
    ctx->pc = 0x3d632cu;
    // NOP
label_3d6330:
    // 0x3d6330: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x3d6330u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3d6334:
    // 0x3d6334: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3d6334u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3d6338:
    // 0x3d6338: 0xc10786a  jal         func_41E1A8
label_3d633c:
    if (ctx->pc == 0x3D633Cu) {
        ctx->pc = 0x3D633Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6338u;
        // 0x3d633c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D6340u;
        goto label_3d6340;
    }
    ctx->pc = 0x3D6338u;
    SET_GPR_U32(ctx, 31, 0x3D6340u);
    ctx->pc = 0x3D633Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D6338u;
    // 0x3d633c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41E1A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41E1A8u, 0x3D6338u, 0x3D6340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D6340u;
label_3d6340:
    // 0x3d6340: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3d6340u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3d6344:
    // 0x3d6344: 0x12000096  beqz        $s0, . + 4 + (0x96 << 2)
label_3d6348:
    if (ctx->pc == 0x3D6348u) {
        ctx->pc = 0x3D6348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6344u;
        // 0x3d6348: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D634Cu;
        goto label_3d634c;
    }
    ctx->pc = 0x3D6344u;
    {
        const bool branch_taken_0x3d6344 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D6348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6344u;
        // 0x3d6348: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d6344) {
            ctx->pc = 0x3D65A0u;
            goto label_3d65a0;
        }
    }
    ctx->pc = 0x3D634Cu;
label_3d634c:
    // 0x3d634c: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x3d634cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3d6350:
    // 0x3d6350: 0xc10705c  jal         func_41C170
label_3d6354:
    if (ctx->pc == 0x3D6354u) {
        ctx->pc = 0x3D6354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6350u;
        // 0x3d6354: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D6358u;
        goto label_3d6358;
    }
    ctx->pc = 0x3D6350u;
    SET_GPR_U32(ctx, 31, 0x3D6358u);
    ctx->pc = 0x3D6354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D6350u;
    // 0x3d6354: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41C170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C170u, 0x3D6350u, 0x3D6358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D6358u;
label_3d6358:
    // 0x3d6358: 0x2a240002  slti        $a0, $s1, 0x2
    ctx->pc = 0x3d6358u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
label_3d635c:
    // 0x3d635c: 0x111043  sra         $v0, $s1, 1
    ctx->pc = 0x3d635cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 17), 1));
label_3d6360:
    // 0x3d6360: 0x44880a  movz        $s1, $v0, $a0
    ctx->pc = 0x3d6360u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 2));
label_3d6364:
    // 0x3d6364: 0x2a450002  slti        $a1, $s2, 0x2
    ctx->pc = 0x3d6364u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
label_3d6368:
    // 0x3d6368: 0x121843  sra         $v1, $s2, 1
    ctx->pc = 0x3d6368u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 18), 1));
label_3d636c:
    // 0x3d636c: 0xae700000  sw          $s0, 0x0($s3)
    ctx->pc = 0x3d636cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 16));
label_3d6370:
    // 0x3d6370: 0x65900a  movz        $s2, $v1, $a1
    ctx->pc = 0x3d6370u;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 3));
label_3d6374:
    // 0x3d6374: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x3d6374u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_3d6378:
    // 0x3d6378: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3d6378u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3d637c:
    // 0x3d637c: 0xc10786a  jal         func_41E1A8
label_3d6380:
    if (ctx->pc == 0x3D6380u) {
        ctx->pc = 0x3D6380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D637Cu;
        // 0x3d6380: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D6384u;
        goto label_3d6384;
    }
    ctx->pc = 0x3D637Cu;
    SET_GPR_U32(ctx, 31, 0x3D6384u);
    ctx->pc = 0x3D6380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D637Cu;
    // 0x3d6380: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41E1A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41E1A8u, 0x3D637Cu, 0x3D6384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D6384u;
label_3d6384:
    // 0x3d6384: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3d6384u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3d6388:
    // 0x3d6388: 0x12000085  beqz        $s0, . + 4 + (0x85 << 2)
label_3d638c:
    if (ctx->pc == 0x3D638Cu) {
        ctx->pc = 0x3D638Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6388u;
        // 0x3d638c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D6390u;
        goto label_3d6390;
    }
    ctx->pc = 0x3D6388u;
    {
        const bool branch_taken_0x3d6388 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D638Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6388u;
        // 0x3d638c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d6388) {
            ctx->pc = 0x3D65A0u;
            goto label_3d65a0;
        }
    }
    ctx->pc = 0x3D6390u;
label_3d6390:
    // 0x3d6390: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x3d6390u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_3d6394:
    // 0x3d6394: 0xc10705c  jal         func_41C170
label_3d6398:
    if (ctx->pc == 0x3D6398u) {
        ctx->pc = 0x3D6398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6394u;
        // 0x3d6398: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D639Cu;
        goto label_3d639c;
    }
    ctx->pc = 0x3D6394u;
    SET_GPR_U32(ctx, 31, 0x3D639Cu);
    ctx->pc = 0x3D6398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D6394u;
    // 0x3d6398: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41C170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C170u, 0x3D6394u, 0x3D639Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D639Cu;
label_3d639c:
    // 0x3d639c: 0x2a240002  slti        $a0, $s1, 0x2
    ctx->pc = 0x3d639cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
label_3d63a0:
    // 0x3d63a0: 0x111043  sra         $v0, $s1, 1
    ctx->pc = 0x3d63a0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 17), 1));
label_3d63a4:
    // 0x3d63a4: 0x44880a  movz        $s1, $v0, $a0
    ctx->pc = 0x3d63a4u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 2));
label_3d63a8:
    // 0x3d63a8: 0x2a450002  slti        $a1, $s2, 0x2
    ctx->pc = 0x3d63a8u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
label_3d63ac:
    // 0x3d63ac: 0x121843  sra         $v1, $s2, 1
    ctx->pc = 0x3d63acu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 18), 1));
label_3d63b0:
    // 0x3d63b0: 0xae700004  sw          $s0, 0x4($s3)
    ctx->pc = 0x3d63b0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 16));
label_3d63b4:
    // 0x3d63b4: 0x65900a  movz        $s2, $v1, $a1
    ctx->pc = 0x3d63b4u;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 3));
label_3d63b8:
    // 0x3d63b8: 0x8e640008  lw          $a0, 0x8($s3)
    ctx->pc = 0x3d63b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_3d63bc:
    // 0x3d63bc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3d63bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3d63c0:
    // 0x3d63c0: 0xc10786a  jal         func_41E1A8
label_3d63c4:
    if (ctx->pc == 0x3D63C4u) {
        ctx->pc = 0x3D63C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D63C0u;
        // 0x3d63c4: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D63C8u;
        goto label_3d63c8;
    }
    ctx->pc = 0x3D63C0u;
    SET_GPR_U32(ctx, 31, 0x3D63C8u);
    ctx->pc = 0x3D63C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D63C0u;
    // 0x3d63c4: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41E1A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41E1A8u, 0x3D63C0u, 0x3D63C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D63C8u;
label_3d63c8:
    // 0x3d63c8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3d63c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3d63cc:
    // 0x3d63cc: 0x12000074  beqz        $s0, . + 4 + (0x74 << 2)
label_3d63d0:
    if (ctx->pc == 0x3D63D0u) {
        ctx->pc = 0x3D63D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D63CCu;
        // 0x3d63d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D63D4u;
        goto label_3d63d4;
    }
    ctx->pc = 0x3D63CCu;
    {
        const bool branch_taken_0x3d63cc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D63D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D63CCu;
        // 0x3d63d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d63cc) {
            ctx->pc = 0x3D65A0u;
            goto label_3d65a0;
        }
    }
    ctx->pc = 0x3D63D4u;
label_3d63d4:
    // 0x3d63d4: 0x8e640008  lw          $a0, 0x8($s3)
    ctx->pc = 0x3d63d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_3d63d8:
    // 0x3d63d8: 0xc10705c  jal         func_41C170
label_3d63dc:
    if (ctx->pc == 0x3D63DCu) {
        ctx->pc = 0x3D63DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D63D8u;
        // 0x3d63dc: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D63E0u;
        goto label_3d63e0;
    }
    ctx->pc = 0x3D63D8u;
    SET_GPR_U32(ctx, 31, 0x3D63E0u);
    ctx->pc = 0x3D63DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D63D8u;
    // 0x3d63dc: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41C170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C170u, 0x3D63D8u, 0x3D63E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D63E0u;
label_3d63e0:
    // 0x3d63e0: 0x2a240002  slti        $a0, $s1, 0x2
    ctx->pc = 0x3d63e0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
label_3d63e4:
    // 0x3d63e4: 0x111043  sra         $v0, $s1, 1
    ctx->pc = 0x3d63e4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 17), 1));
label_3d63e8:
    // 0x3d63e8: 0x44880a  movz        $s1, $v0, $a0
    ctx->pc = 0x3d63e8u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 2));
label_3d63ec:
    // 0x3d63ec: 0x2a450002  slti        $a1, $s2, 0x2
    ctx->pc = 0x3d63ecu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
label_3d63f0:
    // 0x3d63f0: 0x121843  sra         $v1, $s2, 1
    ctx->pc = 0x3d63f0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 18), 1));
label_3d63f4:
    // 0x3d63f4: 0xae700008  sw          $s0, 0x8($s3)
    ctx->pc = 0x3d63f4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 16));
label_3d63f8:
    // 0x3d63f8: 0x65900a  movz        $s2, $v1, $a1
    ctx->pc = 0x3d63f8u;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 3));
label_3d63fc:
    // 0x3d63fc: 0x8e64000c  lw          $a0, 0xC($s3)
    ctx->pc = 0x3d63fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_3d6400:
    // 0x3d6400: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3d6400u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3d6404:
    // 0x3d6404: 0xc10786a  jal         func_41E1A8
label_3d6408:
    if (ctx->pc == 0x3D6408u) {
        ctx->pc = 0x3D6408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6404u;
        // 0x3d6408: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D640Cu;
        goto label_3d640c;
    }
    ctx->pc = 0x3D6404u;
    SET_GPR_U32(ctx, 31, 0x3D640Cu);
    ctx->pc = 0x3D6408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D6404u;
    // 0x3d6408: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41E1A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41E1A8u, 0x3D6404u, 0x3D640Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D640Cu;
label_3d640c:
    // 0x3d640c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3d640cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3d6410:
    // 0x3d6410: 0x12000063  beqz        $s0, . + 4 + (0x63 << 2)
label_3d6414:
    if (ctx->pc == 0x3D6414u) {
        ctx->pc = 0x3D6414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6410u;
        // 0x3d6414: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D6418u;
        goto label_3d6418;
    }
    ctx->pc = 0x3D6410u;
    {
        const bool branch_taken_0x3d6410 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D6414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6410u;
        // 0x3d6414: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d6410) {
            ctx->pc = 0x3D65A0u;
            goto label_3d65a0;
        }
    }
    ctx->pc = 0x3D6418u;
label_3d6418:
    // 0x3d6418: 0x8e64000c  lw          $a0, 0xC($s3)
    ctx->pc = 0x3d6418u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_3d641c:
    // 0x3d641c: 0xc10705c  jal         func_41C170
label_3d6420:
    if (ctx->pc == 0x3D6420u) {
        ctx->pc = 0x3D6420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D641Cu;
        // 0x3d6420: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D6424u;
        goto label_3d6424;
    }
    ctx->pc = 0x3D641Cu;
    SET_GPR_U32(ctx, 31, 0x3D6424u);
    ctx->pc = 0x3D6420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D641Cu;
    // 0x3d6420: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41C170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C170u, 0x3D641Cu, 0x3D6424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D6424u;
label_3d6424:
    // 0x3d6424: 0x111043  sra         $v0, $s1, 1
    ctx->pc = 0x3d6424u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 17), 1));
label_3d6428:
    // 0x3d6428: 0x2a240002  slti        $a0, $s1, 0x2
    ctx->pc = 0x3d6428u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
label_3d642c:
    // 0x3d642c: 0xae70000c  sw          $s0, 0xC($s3)
    ctx->pc = 0x3d642cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 16));
label_3d6430:
    // 0x3d6430: 0x2a450002  slti        $a1, $s2, 0x2
    ctx->pc = 0x3d6430u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
label_3d6434:
    // 0x3d6434: 0x121843  sra         $v1, $s2, 1
    ctx->pc = 0x3d6434u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 18), 1));
label_3d6438:
    // 0x3d6438: 0x44880a  movz        $s1, $v0, $a0
    ctx->pc = 0x3d6438u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 2));
label_3d643c:
    // 0x3d643c: 0x65900a  movz        $s2, $v1, $a1
    ctx->pc = 0x3d643cu;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 3));
label_3d6440:
    // 0x3d6440: 0x296102a  slt         $v0, $s4, $s6
    ctx->pc = 0x3d6440u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
label_3d6444:
    // 0x3d6444: 0x1440ffba  bnez        $v0, . + 4 + (-0x46 << 2)
label_3d6448:
    if (ctx->pc == 0x3D6448u) {
        ctx->pc = 0x3D6448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6444u;
        // 0x3d6448: 0x26730010  addiu       $s3, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D644Cu;
        goto label_3d644c;
    }
    ctx->pc = 0x3D6444u;
    {
        const bool branch_taken_0x3d6444 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D6448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6444u;
        // 0x3d6448: 0x26730010  addiu       $s3, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d6444) {
            ctx->pc = 0x3D6330u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d6330;
        }
    }
    ctx->pc = 0x3D644Cu;
label_3d644c:
    // 0x3d644c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x3d644cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_3d6450:
    // 0x3d6450: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x3d6450u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_3d6454:
    // 0x3d6454: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_3d6458:
    if (ctx->pc == 0x3D6458u) {
        ctx->pc = 0x3D6458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6454u;
        // 0x3d6458: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D645Cu;
        goto label_3d645c;
    }
    ctx->pc = 0x3D6454u;
    {
        const bool branch_taken_0x3d6454 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D6458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6454u;
        // 0x3d6458: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d6454) {
            ctx->pc = 0x3D6474u;
            goto label_3d6474;
        }
    }
    ctx->pc = 0x3D645Cu;
label_3d645c:
    // 0x3d645c: 0x92a20023  lbu         $v0, 0x23($s5)
    ctx->pc = 0x3d645cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 35)));
label_3d6460:
    // 0x3d6460: 0x30430010  andi        $v1, $v0, 0x10
    ctx->pc = 0x3d6460u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_3d6464:
    // 0x3d6464: 0xafa30024  sw          $v1, 0x24($sp)
    ctx->pc = 0x3d6464u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
label_3d6468:
    // 0x3d6468: 0x31827  nor         $v1, $zero, $v1
    ctx->pc = 0x3d6468u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
label_3d646c:
    // 0x3d646c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3d646cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_3d6470:
    // 0x3d6470: 0xa2a20023  sb          $v0, 0x23($s5)
    ctx->pc = 0x3d6470u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 35), (uint8_t)GPR_U32(ctx, 2));
label_3d6474:
    // 0x3d6474: 0xc1074ce  jal         func_41D338
label_3d6478:
    if (ctx->pc == 0x3D6478u) {
        ctx->pc = 0x3D6478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6474u;
        // 0x3d6478: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D647Cu;
        goto label_3d647c;
    }
    ctx->pc = 0x3D6474u;
    SET_GPR_U32(ctx, 31, 0x3D647Cu);
    ctx->pc = 0x3D6478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D6474u;
    // 0x3d6478: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41D338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D338u, 0x3D6474u, 0x3D647Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D647Cu;
label_3d647c:
    // 0x3d647c: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x3d647cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3d6480:
    // 0x3d6480: 0x1ac0001b  blez        $s6, . + 4 + (0x1B << 2)
label_3d6484:
    if (ctx->pc == 0x3D6484u) {
        ctx->pc = 0x3D6484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6480u;
        // 0x3d6484: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D6488u;
        goto label_3d6488;
    }
    ctx->pc = 0x3D6480u;
    {
        const bool branch_taken_0x3d6480 = (GPR_S32(ctx, 22) <= 0);
        ctx->pc = 0x3D6484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6480u;
        // 0x3d6484: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d6480) {
            ctx->pc = 0x3D64F0u;
            goto label_3d64f0;
        }
    }
    ctx->pc = 0x3D6488u;
label_3d6488:
    // 0x3d6488: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
label_3d648c:
    if (ctx->pc == 0x3D648Cu) {
        ctx->pc = 0x3D648Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6488u;
        // 0x3d648c: 0x28420002  slti        $v0, $v0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D6490u;
        goto label_3d6490;
    }
    ctx->pc = 0x3D6488u;
    {
        const bool branch_taken_0x3d6488 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D648Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6488u;
        // 0x3d648c: 0x28420002  slti        $v0, $v0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d6488) {
            ctx->pc = 0x3D64F8u;
            goto label_3d64f8;
        }
    }
    ctx->pc = 0x3D6490u;
label_3d6490:
    // 0x3d6490: 0x2e0802d  daddu       $s0, $s7, $zero
    ctx->pc = 0x3d6490u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3d6494:
    // 0x3d6494: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3d6494u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3d6498:
    // 0x3d6498: 0x328500ff  andi        $a1, $s4, 0xFF
    ctx->pc = 0x3d6498u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
label_3d649c:
    // 0x3d649c: 0xc1075c0  jal         func_41D700
label_3d64a0:
    if (ctx->pc == 0x3D64A0u) {
        ctx->pc = 0x3D64A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D649Cu;
        // 0x3d64a0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D64A4u;
        goto label_3d64a4;
    }
    ctx->pc = 0x3D649Cu;
    SET_GPR_U32(ctx, 31, 0x3D64A4u);
    ctx->pc = 0x3D64A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D649Cu;
    // 0x3d64a0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41D700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D700u, 0x3D649Cu, 0x3D64A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D64A4u;
label_3d64a4:
    // 0x3d64a4: 0x1040003e  beqz        $v0, . + 4 + (0x3E << 2)
label_3d64a8:
    if (ctx->pc == 0x3D64A8u) {
        ctx->pc = 0x3D64A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D64A4u;
        // 0x3d64a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D64ACu;
        goto label_3d64ac;
    }
    ctx->pc = 0x3D64A4u;
    {
        const bool branch_taken_0x3d64a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D64A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D64A4u;
        // 0x3d64a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d64a4) {
            ctx->pc = 0x3D65A0u;
            goto label_3d65a0;
        }
    }
    ctx->pc = 0x3D64ACu;
label_3d64ac:
    // 0x3d64ac: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x3d64acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3d64b0:
    // 0x3d64b0: 0xc1073c2  jal         func_41CF08
label_3d64b4:
    if (ctx->pc == 0x3D64B4u) {
        ctx->pc = 0x3D64B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D64B0u;
        // 0x3d64b4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D64B8u;
        goto label_3d64b8;
    }
    ctx->pc = 0x3D64B0u;
    SET_GPR_U32(ctx, 31, 0x3D64B8u);
    ctx->pc = 0x3D64B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D64B0u;
    // 0x3d64b4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41CF08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41CF08u, 0x3D64B0u, 0x3D64B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D64B8u;
label_3d64b8:
    // 0x3d64b8: 0x10400039  beqz        $v0, . + 4 + (0x39 << 2)
label_3d64bc:
    if (ctx->pc == 0x3D64BCu) {
        ctx->pc = 0x3D64BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D64B8u;
        // 0x3d64bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D64C0u;
        goto label_3d64c0;
    }
    ctx->pc = 0x3D64B8u;
    {
        const bool branch_taken_0x3d64b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D64BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D64B8u;
        // 0x3d64bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d64b8) {
            ctx->pc = 0x3D65A0u;
            goto label_3d65a0;
        }
    }
    ctx->pc = 0x3D64C0u;
label_3d64c0:
    // 0x3d64c0: 0xc1075d0  jal         func_41D740
label_3d64c4:
    if (ctx->pc == 0x3D64C4u) {
        ctx->pc = 0x3D64C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D64C0u;
        // 0x3d64c4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D64C8u;
        goto label_3d64c8;
    }
    ctx->pc = 0x3D64C0u;
    SET_GPR_U32(ctx, 31, 0x3D64C8u);
    ctx->pc = 0x3D64C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D64C0u;
    // 0x3d64c4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41D740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D740u, 0x3D64C0u, 0x3D64C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D64C8u;
label_3d64c8:
    // 0x3d64c8: 0x1040fed5  beqz        $v0, . + 4 + (-0x12B << 2)
label_3d64cc:
    if (ctx->pc == 0x3D64CCu) {
        ctx->pc = 0x3D64CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D64C8u;
        // 0x3d64cc: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D64D0u;
        goto label_3d64d0;
    }
    ctx->pc = 0x3D64C8u;
    {
        const bool branch_taken_0x3d64c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D64CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D64C8u;
        // 0x3d64cc: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d64c8) {
            ctx->pc = 0x3D6020u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d6020;
        }
    }
    ctx->pc = 0x3D64D0u;
label_3d64d0:
    // 0x3d64d0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x3d64d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3d64d4:
    // 0x3d64d4: 0xc10705c  jal         func_41C170
label_3d64d8:
    if (ctx->pc == 0x3D64D8u) {
        ctx->pc = 0x3D64D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D64D4u;
        // 0x3d64d8: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D64DCu;
        goto label_3d64dc;
    }
    ctx->pc = 0x3D64D4u;
    SET_GPR_U32(ctx, 31, 0x3D64DCu);
    ctx->pc = 0x3D64D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D64D4u;
    // 0x3d64d8: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41C170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C170u, 0x3D64D4u, 0x3D64DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D64DCu;
label_3d64dc:
    // 0x3d64dc: 0x296182a  slt         $v1, $s4, $s6
    ctx->pc = 0x3d64dcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
label_3d64e0:
    // 0x3d64e0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_3d64e4:
    if (ctx->pc == 0x3D64E4u) {
        ctx->pc = 0x3D64E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D64E0u;
        // 0x3d64e4: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D64E8u;
        goto label_3d64e8;
    }
    ctx->pc = 0x3D64E0u;
    {
        const bool branch_taken_0x3d64e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D64E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D64E0u;
        // 0x3d64e4: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d64e0) {
            ctx->pc = 0x3D64F0u;
            goto label_3d64f0;
        }
    }
    ctx->pc = 0x3D64E8u;
label_3d64e8:
    // 0x3d64e8: 0x1682ffeb  bne         $s4, $v0, . + 4 + (-0x15 << 2)
label_3d64ec:
    if (ctx->pc == 0x3D64ECu) {
        ctx->pc = 0x3D64ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D64E8u;
        // 0x3d64ec: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D64F0u;
        goto label_3d64f0;
    }
    ctx->pc = 0x3D64E8u;
    {
        const bool branch_taken_0x3d64e8 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x3D64ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D64E8u;
        // 0x3d64ec: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d64e8) {
            ctx->pc = 0x3D6498u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d6498;
        }
    }
    ctx->pc = 0x3D64F0u;
label_3d64f0:
    // 0x3d64f0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x3d64f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_3d64f4:
    // 0x3d64f4: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x3d64f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_3d64f8:
    // 0x3d64f8: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_3d64fc:
    if (ctx->pc == 0x3D64FCu) {
        ctx->pc = 0x3D64FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D64F8u;
        // 0x3d64fc: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D6500u;
        goto label_3d6500;
    }
    ctx->pc = 0x3D64F8u;
    {
        const bool branch_taken_0x3d64f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D64FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D64F8u;
        // 0x3d64fc: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d64f8) {
            ctx->pc = 0x3D6514u;
            goto label_3d6514;
        }
    }
    ctx->pc = 0x3D6500u;
label_3d6500:
    // 0x3d6500: 0x92a20023  lbu         $v0, 0x23($s5)
    ctx->pc = 0x3d6500u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 35)));
label_3d6504:
    // 0x3d6504: 0x8fa40024  lw          $a0, 0x24($sp)
    ctx->pc = 0x3d6504u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_3d6508:
    // 0x3d6508: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x3d6508u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_3d650c:
    // 0x3d650c: 0xa2a20023  sb          $v0, 0x23($s5)
    ctx->pc = 0x3d650cu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 35), (uint8_t)GPR_U32(ctx, 2));
label_3d6510:
    // 0x3d6510: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x3d6510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_3d6514:
    // 0x3d6514: 0x282102a  slt         $v0, $s4, $v0
    ctx->pc = 0x3d6514u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_3d6518:
    // 0x3d6518: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_3d651c:
    if (ctx->pc == 0x3D651Cu) {
        ctx->pc = 0x3D651Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6518u;
        // 0x3d651c: 0x141080  sll         $v0, $s4, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D6520u;
        goto label_3d6520;
    }
    ctx->pc = 0x3D6518u;
    {
        const bool branch_taken_0x3d6518 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D651Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6518u;
        // 0x3d651c: 0x141080  sll         $v0, $s4, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d6518) {
            ctx->pc = 0x3D6544u;
            goto label_3d6544;
        }
    }
    ctx->pc = 0x3D6520u;
label_3d6520:
    // 0x3d6520: 0x578021  addu        $s0, $v0, $s7
    ctx->pc = 0x3d6520u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
label_3d6524:
    // 0x3d6524: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x3d6524u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3d6528:
    // 0x3d6528: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x3d6528u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_3d652c:
    // 0x3d652c: 0xc10705c  jal         func_41C170
label_3d6530:
    if (ctx->pc == 0x3D6530u) {
        ctx->pc = 0x3D6530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D652Cu;
        // 0x3d6530: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D6534u;
        goto label_3d6534;
    }
    ctx->pc = 0x3D652Cu;
    SET_GPR_U32(ctx, 31, 0x3D6534u);
    ctx->pc = 0x3D6530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D652Cu;
    // 0x3d6530: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41C170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C170u, 0x3D652Cu, 0x3D6534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D6534u;
label_3d6534:
    // 0x3d6534: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x3d6534u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_3d6538:
    // 0x3d6538: 0x283182a  slt         $v1, $s4, $v1
    ctx->pc = 0x3d6538u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_3d653c:
    // 0x3d653c: 0x5460fffa  bnel        $v1, $zero, . + 4 + (-0x6 << 2)
label_3d6540:
    if (ctx->pc == 0x3D6540u) {
        ctx->pc = 0x3D6540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D653Cu;
        // 0x3d6540: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D6544u;
        goto label_3d6544;
    }
    ctx->pc = 0x3D653Cu;
    {
        const bool branch_taken_0x3d653c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d653c) {
            ctx->pc = 0x3D6540u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D653Cu;
            // 0x3d6540: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D6528u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d6528;
        }
    }
    ctx->pc = 0x3D6544u;
label_3d6544:
    // 0x3d6544: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x3d6544u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_3d6548:
    // 0x3d6548: 0x2462e880  addiu       $v0, $v1, -0x1780
    ctx->pc = 0x3d6548u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961280));
label_3d654c:
    // 0x3d654c: 0x8c43010c  lw          $v1, 0x10C($v0)
    ctx->pc = 0x3d654cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 268)));
label_3d6550:
    // 0x3d6550: 0x60f809  jalr        $v1
label_3d6554:
    if (ctx->pc == 0x3D6554u) {
        ctx->pc = 0x3D6554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6550u;
        // 0x3d6554: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D6558u;
        goto label_3d6558;
    }
    ctx->pc = 0x3D6550u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3D6558u);
        ctx->pc = 0x3D6554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6550u;
        // 0x3d6554: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D6550u, 0x3D6558u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3D6558u;
label_3d6558:
    // 0x3d6558: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x3d6558u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_3d655c:
    // 0x3d655c: 0xc108258  jal         func_420960
label_3d6560:
    if (ctx->pc == 0x3D6560u) {
        ctx->pc = 0x3D6560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D655Cu;
        // 0x3d6560: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D6564u;
        goto label_3d6564;
    }
    ctx->pc = 0x3D655Cu;
    SET_GPR_U32(ctx, 31, 0x3D6564u);
    ctx->pc = 0x3D6560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D655Cu;
    // 0x3d6560: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x420960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x420960u, 0x3D655Cu, 0x3D6564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D6564u;
label_3d6564:
    // 0x3d6564: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x3d6564u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
label_3d6568:
    // 0x3d6568: 0x8fa60028  lw          $a2, 0x28($sp)
    ctx->pc = 0x3d6568u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_3d656c:
    // 0x3d656c: 0x2484ca10  addiu       $a0, $a0, -0x35F0
    ctx->pc = 0x3d656cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953488));
label_3d6570:
    // 0x3d6570: 0xc1049e2  jal         func_412788
label_3d6574:
    if (ctx->pc == 0x3D6574u) {
        ctx->pc = 0x3D6574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6570u;
        // 0x3d6574: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D6578u;
        goto label_3d6578;
    }
    ctx->pc = 0x3D6570u;
    SET_GPR_U32(ctx, 31, 0x3D6578u);
    ctx->pc = 0x3D6574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D6570u;
    // 0x3d6574: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x412788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x412788u, 0x3D6570u, 0x3D6578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D6578u;
label_3d6578:
    // 0x3d6578: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_3d657c:
    if (ctx->pc == 0x3D657Cu) {
        ctx->pc = 0x3D657Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6578u;
        // 0x3d657c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D6580u;
        goto label_3d6580;
    }
    ctx->pc = 0x3D6578u;
    {
        const bool branch_taken_0x3d6578 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D657Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6578u;
        // 0x3d657c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d6578) {
            ctx->pc = 0x3D659Cu;
            goto label_3d659c;
        }
    }
    ctx->pc = 0x3D6580u;
label_3d6580:
    // 0x3d6580: 0xc1082ca  jal         func_420B28
label_3d6584:
    if (ctx->pc == 0x3D6584u) {
        ctx->pc = 0x3D6588u;
        goto label_3d6588;
    }
    ctx->pc = 0x3D6580u;
    SET_GPR_U32(ctx, 31, 0x3D6588u);
    ctx->pc = 0x420B28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x420B28u, 0x3D6580u, 0x3D6588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D6588u;
label_3d6588:
    // 0x3d6588: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_3d658c:
    if (ctx->pc == 0x3D658Cu) {
        ctx->pc = 0x3D658Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6588u;
        // 0x3d658c: 0x8fa50028  lw          $a1, 0x28($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D6590u;
        goto label_3d6590;
    }
    ctx->pc = 0x3D6588u;
    {
        const bool branch_taken_0x3d6588 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D658Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6588u;
        // 0x3d658c: 0x8fa50028  lw          $a1, 0x28($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d6588) {
            ctx->pc = 0x3D6598u;
            goto label_3d6598;
        }
    }
    ctx->pc = 0x3D6590u;
label_3d6590:
    // 0x3d6590: 0xc10826c  jal         func_4209B0
label_3d6594:
    if (ctx->pc == 0x3D6594u) {
        ctx->pc = 0x3D6594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6590u;
        // 0x3d6594: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D6598u;
        goto label_3d6598;
    }
    ctx->pc = 0x3D6590u;
    SET_GPR_U32(ctx, 31, 0x3D6598u);
    ctx->pc = 0x3D6594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D6590u;
    // 0x3d6594: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4209B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4209B0u, 0x3D6590u, 0x3D6598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D6598u;
label_3d6598:
    // 0x3d6598: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x3d6598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_3d659c:
    // 0x3d659c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x3d659cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_3d65a0:
    // 0x3d65a0: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x3d65a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_3d65a4:
    // 0x3d65a4: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x3d65a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_3d65a8:
    // 0x3d65a8: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x3d65a8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_3d65ac:
    // 0x3d65ac: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x3d65acu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3d65b0:
    // 0x3d65b0: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x3d65b0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3d65b4:
    // 0x3d65b4: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x3d65b4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3d65b8:
    // 0x3d65b8: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x3d65b8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3d65bc:
    // 0x3d65bc: 0x7bb70050  lq          $s7, 0x50($sp)
    ctx->pc = 0x3d65bcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3d65c0:
    // 0x3d65c0: 0x7bbe0040  lq          $fp, 0x40($sp)
    ctx->pc = 0x3d65c0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3d65c4:
    // 0x3d65c4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3d65c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3d65c8:
    // 0x3d65c8: 0x3e00008  jr          $ra
label_3d65cc:
    if (ctx->pc == 0x3D65CCu) {
        ctx->pc = 0x3D65CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D65C8u;
        // 0x3d65cc: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D65D0u;
        goto label_fallthrough_0x3d65c8;
    }
    ctx->pc = 0x3D65C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D65CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D65C8u;
        // 0x3d65cc: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D65C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3d65c8:
    ctx->pc = 0x3D65D0u;
}
