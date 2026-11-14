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

// Function: sub_002E6250
// Address: 0x2e6250 - 0x2e6840
void sub_002E6250_0x2e6250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E6250_0x2e6250");
#endif

    switch (ctx->pc) {
        case 0x2e6250u: goto label_2e6250;
        case 0x2e6254u: goto label_2e6254;
        case 0x2e6258u: goto label_2e6258;
        case 0x2e625cu: goto label_2e625c;
        case 0x2e6260u: goto label_2e6260;
        case 0x2e6264u: goto label_2e6264;
        case 0x2e6268u: goto label_2e6268;
        case 0x2e626cu: goto label_2e626c;
        case 0x2e6270u: goto label_2e6270;
        case 0x2e6274u: goto label_2e6274;
        case 0x2e6278u: goto label_2e6278;
        case 0x2e627cu: goto label_2e627c;
        case 0x2e6280u: goto label_2e6280;
        case 0x2e6284u: goto label_2e6284;
        case 0x2e6288u: goto label_2e6288;
        case 0x2e628cu: goto label_2e628c;
        case 0x2e6290u: goto label_2e6290;
        case 0x2e6294u: goto label_2e6294;
        case 0x2e6298u: goto label_2e6298;
        case 0x2e629cu: goto label_2e629c;
        case 0x2e62a0u: goto label_2e62a0;
        case 0x2e62a4u: goto label_2e62a4;
        case 0x2e62a8u: goto label_2e62a8;
        case 0x2e62acu: goto label_2e62ac;
        case 0x2e62b0u: goto label_2e62b0;
        case 0x2e62b4u: goto label_2e62b4;
        case 0x2e62b8u: goto label_2e62b8;
        case 0x2e62bcu: goto label_2e62bc;
        case 0x2e62c0u: goto label_2e62c0;
        case 0x2e62c4u: goto label_2e62c4;
        case 0x2e62c8u: goto label_2e62c8;
        case 0x2e62ccu: goto label_2e62cc;
        case 0x2e62d0u: goto label_2e62d0;
        case 0x2e62d4u: goto label_2e62d4;
        case 0x2e62d8u: goto label_2e62d8;
        case 0x2e62dcu: goto label_2e62dc;
        case 0x2e62e0u: goto label_2e62e0;
        case 0x2e62e4u: goto label_2e62e4;
        case 0x2e62e8u: goto label_2e62e8;
        case 0x2e62ecu: goto label_2e62ec;
        case 0x2e62f0u: goto label_2e62f0;
        case 0x2e62f4u: goto label_2e62f4;
        case 0x2e62f8u: goto label_2e62f8;
        case 0x2e62fcu: goto label_2e62fc;
        case 0x2e6300u: goto label_2e6300;
        case 0x2e6304u: goto label_2e6304;
        case 0x2e6308u: goto label_2e6308;
        case 0x2e630cu: goto label_2e630c;
        case 0x2e6310u: goto label_2e6310;
        case 0x2e6314u: goto label_2e6314;
        case 0x2e6318u: goto label_2e6318;
        case 0x2e631cu: goto label_2e631c;
        case 0x2e6320u: goto label_2e6320;
        case 0x2e6324u: goto label_2e6324;
        case 0x2e6328u: goto label_2e6328;
        case 0x2e632cu: goto label_2e632c;
        case 0x2e6330u: goto label_2e6330;
        case 0x2e6334u: goto label_2e6334;
        case 0x2e6338u: goto label_2e6338;
        case 0x2e633cu: goto label_2e633c;
        case 0x2e6340u: goto label_2e6340;
        case 0x2e6344u: goto label_2e6344;
        case 0x2e6348u: goto label_2e6348;
        case 0x2e634cu: goto label_2e634c;
        case 0x2e6350u: goto label_2e6350;
        case 0x2e6354u: goto label_2e6354;
        case 0x2e6358u: goto label_2e6358;
        case 0x2e635cu: goto label_2e635c;
        case 0x2e6360u: goto label_2e6360;
        case 0x2e6364u: goto label_2e6364;
        case 0x2e6368u: goto label_2e6368;
        case 0x2e636cu: goto label_2e636c;
        case 0x2e6370u: goto label_2e6370;
        case 0x2e6374u: goto label_2e6374;
        case 0x2e6378u: goto label_2e6378;
        case 0x2e637cu: goto label_2e637c;
        case 0x2e6380u: goto label_2e6380;
        case 0x2e6384u: goto label_2e6384;
        case 0x2e6388u: goto label_2e6388;
        case 0x2e638cu: goto label_2e638c;
        case 0x2e6390u: goto label_2e6390;
        case 0x2e6394u: goto label_2e6394;
        case 0x2e6398u: goto label_2e6398;
        case 0x2e639cu: goto label_2e639c;
        case 0x2e63a0u: goto label_2e63a0;
        case 0x2e63a4u: goto label_2e63a4;
        case 0x2e63a8u: goto label_2e63a8;
        case 0x2e63acu: goto label_2e63ac;
        case 0x2e63b0u: goto label_2e63b0;
        case 0x2e63b4u: goto label_2e63b4;
        case 0x2e63b8u: goto label_2e63b8;
        case 0x2e63bcu: goto label_2e63bc;
        case 0x2e63c0u: goto label_2e63c0;
        case 0x2e63c4u: goto label_2e63c4;
        case 0x2e63c8u: goto label_2e63c8;
        case 0x2e63ccu: goto label_2e63cc;
        case 0x2e63d0u: goto label_2e63d0;
        case 0x2e63d4u: goto label_2e63d4;
        case 0x2e63d8u: goto label_2e63d8;
        case 0x2e63dcu: goto label_2e63dc;
        case 0x2e63e0u: goto label_2e63e0;
        case 0x2e63e4u: goto label_2e63e4;
        case 0x2e63e8u: goto label_2e63e8;
        case 0x2e63ecu: goto label_2e63ec;
        case 0x2e63f0u: goto label_2e63f0;
        case 0x2e63f4u: goto label_2e63f4;
        case 0x2e63f8u: goto label_2e63f8;
        case 0x2e63fcu: goto label_2e63fc;
        case 0x2e6400u: goto label_2e6400;
        case 0x2e6404u: goto label_2e6404;
        case 0x2e6408u: goto label_2e6408;
        case 0x2e640cu: goto label_2e640c;
        case 0x2e6410u: goto label_2e6410;
        case 0x2e6414u: goto label_2e6414;
        case 0x2e6418u: goto label_2e6418;
        case 0x2e641cu: goto label_2e641c;
        case 0x2e6420u: goto label_2e6420;
        case 0x2e6424u: goto label_2e6424;
        case 0x2e6428u: goto label_2e6428;
        case 0x2e642cu: goto label_2e642c;
        case 0x2e6430u: goto label_2e6430;
        case 0x2e6434u: goto label_2e6434;
        case 0x2e6438u: goto label_2e6438;
        case 0x2e643cu: goto label_2e643c;
        case 0x2e6440u: goto label_2e6440;
        case 0x2e6444u: goto label_2e6444;
        case 0x2e6448u: goto label_2e6448;
        case 0x2e644cu: goto label_2e644c;
        case 0x2e6450u: goto label_2e6450;
        case 0x2e6454u: goto label_2e6454;
        case 0x2e6458u: goto label_2e6458;
        case 0x2e645cu: goto label_2e645c;
        case 0x2e6460u: goto label_2e6460;
        case 0x2e6464u: goto label_2e6464;
        case 0x2e6468u: goto label_2e6468;
        case 0x2e646cu: goto label_2e646c;
        case 0x2e6470u: goto label_2e6470;
        case 0x2e6474u: goto label_2e6474;
        case 0x2e6478u: goto label_2e6478;
        case 0x2e647cu: goto label_2e647c;
        case 0x2e6480u: goto label_2e6480;
        case 0x2e6484u: goto label_2e6484;
        case 0x2e6488u: goto label_2e6488;
        case 0x2e648cu: goto label_2e648c;
        case 0x2e6490u: goto label_2e6490;
        case 0x2e6494u: goto label_2e6494;
        case 0x2e6498u: goto label_2e6498;
        case 0x2e649cu: goto label_2e649c;
        case 0x2e64a0u: goto label_2e64a0;
        case 0x2e64a4u: goto label_2e64a4;
        case 0x2e64a8u: goto label_2e64a8;
        case 0x2e64acu: goto label_2e64ac;
        case 0x2e64b0u: goto label_2e64b0;
        case 0x2e64b4u: goto label_2e64b4;
        case 0x2e64b8u: goto label_2e64b8;
        case 0x2e64bcu: goto label_2e64bc;
        case 0x2e64c0u: goto label_2e64c0;
        case 0x2e64c4u: goto label_2e64c4;
        case 0x2e64c8u: goto label_2e64c8;
        case 0x2e64ccu: goto label_2e64cc;
        case 0x2e64d0u: goto label_2e64d0;
        case 0x2e64d4u: goto label_2e64d4;
        case 0x2e64d8u: goto label_2e64d8;
        case 0x2e64dcu: goto label_2e64dc;
        case 0x2e64e0u: goto label_2e64e0;
        case 0x2e64e4u: goto label_2e64e4;
        case 0x2e64e8u: goto label_2e64e8;
        case 0x2e64ecu: goto label_2e64ec;
        case 0x2e64f0u: goto label_2e64f0;
        case 0x2e64f4u: goto label_2e64f4;
        case 0x2e64f8u: goto label_2e64f8;
        case 0x2e64fcu: goto label_2e64fc;
        case 0x2e6500u: goto label_2e6500;
        case 0x2e6504u: goto label_2e6504;
        case 0x2e6508u: goto label_2e6508;
        case 0x2e650cu: goto label_2e650c;
        case 0x2e6510u: goto label_2e6510;
        case 0x2e6514u: goto label_2e6514;
        case 0x2e6518u: goto label_2e6518;
        case 0x2e651cu: goto label_2e651c;
        case 0x2e6520u: goto label_2e6520;
        case 0x2e6524u: goto label_2e6524;
        case 0x2e6528u: goto label_2e6528;
        case 0x2e652cu: goto label_2e652c;
        case 0x2e6530u: goto label_2e6530;
        case 0x2e6534u: goto label_2e6534;
        case 0x2e6538u: goto label_2e6538;
        case 0x2e653cu: goto label_2e653c;
        case 0x2e6540u: goto label_2e6540;
        case 0x2e6544u: goto label_2e6544;
        case 0x2e6548u: goto label_2e6548;
        case 0x2e654cu: goto label_2e654c;
        case 0x2e6550u: goto label_2e6550;
        case 0x2e6554u: goto label_2e6554;
        case 0x2e6558u: goto label_2e6558;
        case 0x2e655cu: goto label_2e655c;
        case 0x2e6560u: goto label_2e6560;
        case 0x2e6564u: goto label_2e6564;
        case 0x2e6568u: goto label_2e6568;
        case 0x2e656cu: goto label_2e656c;
        case 0x2e6570u: goto label_2e6570;
        case 0x2e6574u: goto label_2e6574;
        case 0x2e6578u: goto label_2e6578;
        case 0x2e657cu: goto label_2e657c;
        case 0x2e6580u: goto label_2e6580;
        case 0x2e6584u: goto label_2e6584;
        case 0x2e6588u: goto label_2e6588;
        case 0x2e658cu: goto label_2e658c;
        case 0x2e6590u: goto label_2e6590;
        case 0x2e6594u: goto label_2e6594;
        case 0x2e6598u: goto label_2e6598;
        case 0x2e659cu: goto label_2e659c;
        case 0x2e65a0u: goto label_2e65a0;
        case 0x2e65a4u: goto label_2e65a4;
        case 0x2e65a8u: goto label_2e65a8;
        case 0x2e65acu: goto label_2e65ac;
        case 0x2e65b0u: goto label_2e65b0;
        case 0x2e65b4u: goto label_2e65b4;
        case 0x2e65b8u: goto label_2e65b8;
        case 0x2e65bcu: goto label_2e65bc;
        case 0x2e65c0u: goto label_2e65c0;
        case 0x2e65c4u: goto label_2e65c4;
        case 0x2e65c8u: goto label_2e65c8;
        case 0x2e65ccu: goto label_2e65cc;
        case 0x2e65d0u: goto label_2e65d0;
        case 0x2e65d4u: goto label_2e65d4;
        case 0x2e65d8u: goto label_2e65d8;
        case 0x2e65dcu: goto label_2e65dc;
        case 0x2e65e0u: goto label_2e65e0;
        case 0x2e65e4u: goto label_2e65e4;
        case 0x2e65e8u: goto label_2e65e8;
        case 0x2e65ecu: goto label_2e65ec;
        case 0x2e65f0u: goto label_2e65f0;
        case 0x2e65f4u: goto label_2e65f4;
        case 0x2e65f8u: goto label_2e65f8;
        case 0x2e65fcu: goto label_2e65fc;
        case 0x2e6600u: goto label_2e6600;
        case 0x2e6604u: goto label_2e6604;
        case 0x2e6608u: goto label_2e6608;
        case 0x2e660cu: goto label_2e660c;
        case 0x2e6610u: goto label_2e6610;
        case 0x2e6614u: goto label_2e6614;
        case 0x2e6618u: goto label_2e6618;
        case 0x2e661cu: goto label_2e661c;
        case 0x2e6620u: goto label_2e6620;
        case 0x2e6624u: goto label_2e6624;
        case 0x2e6628u: goto label_2e6628;
        case 0x2e662cu: goto label_2e662c;
        case 0x2e6630u: goto label_2e6630;
        case 0x2e6634u: goto label_2e6634;
        case 0x2e6638u: goto label_2e6638;
        case 0x2e663cu: goto label_2e663c;
        case 0x2e6640u: goto label_2e6640;
        case 0x2e6644u: goto label_2e6644;
        case 0x2e6648u: goto label_2e6648;
        case 0x2e664cu: goto label_2e664c;
        case 0x2e6650u: goto label_2e6650;
        case 0x2e6654u: goto label_2e6654;
        case 0x2e6658u: goto label_2e6658;
        case 0x2e665cu: goto label_2e665c;
        case 0x2e6660u: goto label_2e6660;
        case 0x2e6664u: goto label_2e6664;
        case 0x2e6668u: goto label_2e6668;
        case 0x2e666cu: goto label_2e666c;
        case 0x2e6670u: goto label_2e6670;
        case 0x2e6674u: goto label_2e6674;
        case 0x2e6678u: goto label_2e6678;
        case 0x2e667cu: goto label_2e667c;
        case 0x2e6680u: goto label_2e6680;
        case 0x2e6684u: goto label_2e6684;
        case 0x2e6688u: goto label_2e6688;
        case 0x2e668cu: goto label_2e668c;
        case 0x2e6690u: goto label_2e6690;
        case 0x2e6694u: goto label_2e6694;
        case 0x2e6698u: goto label_2e6698;
        case 0x2e669cu: goto label_2e669c;
        case 0x2e66a0u: goto label_2e66a0;
        case 0x2e66a4u: goto label_2e66a4;
        case 0x2e66a8u: goto label_2e66a8;
        case 0x2e66acu: goto label_2e66ac;
        case 0x2e66b0u: goto label_2e66b0;
        case 0x2e66b4u: goto label_2e66b4;
        case 0x2e66b8u: goto label_2e66b8;
        case 0x2e66bcu: goto label_2e66bc;
        case 0x2e66c0u: goto label_2e66c0;
        case 0x2e66c4u: goto label_2e66c4;
        case 0x2e66c8u: goto label_2e66c8;
        case 0x2e66ccu: goto label_2e66cc;
        case 0x2e66d0u: goto label_2e66d0;
        case 0x2e66d4u: goto label_2e66d4;
        case 0x2e66d8u: goto label_2e66d8;
        case 0x2e66dcu: goto label_2e66dc;
        case 0x2e66e0u: goto label_2e66e0;
        case 0x2e66e4u: goto label_2e66e4;
        case 0x2e66e8u: goto label_2e66e8;
        case 0x2e66ecu: goto label_2e66ec;
        case 0x2e66f0u: goto label_2e66f0;
        case 0x2e66f4u: goto label_2e66f4;
        case 0x2e66f8u: goto label_2e66f8;
        case 0x2e66fcu: goto label_2e66fc;
        case 0x2e6700u: goto label_2e6700;
        case 0x2e6704u: goto label_2e6704;
        case 0x2e6708u: goto label_2e6708;
        case 0x2e670cu: goto label_2e670c;
        case 0x2e6710u: goto label_2e6710;
        case 0x2e6714u: goto label_2e6714;
        case 0x2e6718u: goto label_2e6718;
        case 0x2e671cu: goto label_2e671c;
        case 0x2e6720u: goto label_2e6720;
        case 0x2e6724u: goto label_2e6724;
        case 0x2e6728u: goto label_2e6728;
        case 0x2e672cu: goto label_2e672c;
        case 0x2e6730u: goto label_2e6730;
        case 0x2e6734u: goto label_2e6734;
        case 0x2e6738u: goto label_2e6738;
        case 0x2e673cu: goto label_2e673c;
        case 0x2e6740u: goto label_2e6740;
        case 0x2e6744u: goto label_2e6744;
        case 0x2e6748u: goto label_2e6748;
        case 0x2e674cu: goto label_2e674c;
        case 0x2e6750u: goto label_2e6750;
        case 0x2e6754u: goto label_2e6754;
        case 0x2e6758u: goto label_2e6758;
        case 0x2e675cu: goto label_2e675c;
        case 0x2e6760u: goto label_2e6760;
        case 0x2e6764u: goto label_2e6764;
        case 0x2e6768u: goto label_2e6768;
        case 0x2e676cu: goto label_2e676c;
        case 0x2e6770u: goto label_2e6770;
        case 0x2e6774u: goto label_2e6774;
        case 0x2e6778u: goto label_2e6778;
        case 0x2e677cu: goto label_2e677c;
        case 0x2e6780u: goto label_2e6780;
        case 0x2e6784u: goto label_2e6784;
        case 0x2e6788u: goto label_2e6788;
        case 0x2e678cu: goto label_2e678c;
        case 0x2e6790u: goto label_2e6790;
        case 0x2e6794u: goto label_2e6794;
        case 0x2e6798u: goto label_2e6798;
        case 0x2e679cu: goto label_2e679c;
        case 0x2e67a0u: goto label_2e67a0;
        case 0x2e67a4u: goto label_2e67a4;
        case 0x2e67a8u: goto label_2e67a8;
        case 0x2e67acu: goto label_2e67ac;
        case 0x2e67b0u: goto label_2e67b0;
        case 0x2e67b4u: goto label_2e67b4;
        case 0x2e67b8u: goto label_2e67b8;
        case 0x2e67bcu: goto label_2e67bc;
        case 0x2e67c0u: goto label_2e67c0;
        case 0x2e67c4u: goto label_2e67c4;
        case 0x2e67c8u: goto label_2e67c8;
        case 0x2e67ccu: goto label_2e67cc;
        case 0x2e67d0u: goto label_2e67d0;
        case 0x2e67d4u: goto label_2e67d4;
        case 0x2e67d8u: goto label_2e67d8;
        case 0x2e67dcu: goto label_2e67dc;
        case 0x2e67e0u: goto label_2e67e0;
        case 0x2e67e4u: goto label_2e67e4;
        case 0x2e67e8u: goto label_2e67e8;
        case 0x2e67ecu: goto label_2e67ec;
        case 0x2e67f0u: goto label_2e67f0;
        case 0x2e67f4u: goto label_2e67f4;
        case 0x2e67f8u: goto label_2e67f8;
        case 0x2e67fcu: goto label_2e67fc;
        case 0x2e6800u: goto label_2e6800;
        case 0x2e6804u: goto label_2e6804;
        case 0x2e6808u: goto label_2e6808;
        case 0x2e680cu: goto label_2e680c;
        case 0x2e6810u: goto label_2e6810;
        case 0x2e6814u: goto label_2e6814;
        case 0x2e6818u: goto label_2e6818;
        case 0x2e681cu: goto label_2e681c;
        case 0x2e6820u: goto label_2e6820;
        case 0x2e6824u: goto label_2e6824;
        case 0x2e6828u: goto label_2e6828;
        case 0x2e682cu: goto label_2e682c;
        case 0x2e6830u: goto label_2e6830;
        case 0x2e6834u: goto label_2e6834;
        case 0x2e6838u: goto label_2e6838;
        case 0x2e683cu: goto label_2e683c;
        default: break;
    }

    ctx->pc = 0x2e6250u;

label_2e6250:
    // 0x2e6250: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x2e6250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
label_2e6254:
    // 0x2e6254: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2e6254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_2e6258:
    // 0x2e6258: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x2e6258u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_2e625c:
    // 0x2e625c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x2e625cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_2e6260:
    // 0x2e6260: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2e6260u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_2e6264:
    // 0x2e6264: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2e6264u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_2e6268:
    // 0x2e6268: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2e6268u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_2e626c:
    // 0x2e626c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2e626cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2e6270:
    // 0x2e6270: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2e6270u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2e6274:
    // 0x2e6274: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2e6274u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2e6278:
    // 0x2e6278: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e6278u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2e627c:
    // 0x2e627c: 0xafa40130  sw          $a0, 0x130($sp)
    ctx->pc = 0x2e627cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 4));
label_2e6280:
    // 0x2e6280: 0xafa50140  sw          $a1, 0x140($sp)
    ctx->pc = 0x2e6280u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 5));
label_2e6284:
    // 0x2e6284: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2e6284u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e6288:
    // 0x2e6288: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x2e6288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
label_2e628c:
    // 0x2e628c: 0xa0430021  sb          $v1, 0x21($v0)
    ctx->pc = 0x2e628cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 33), (uint8_t)GPR_U32(ctx, 3));
label_2e6290:
    // 0x2e6290: 0x8f84bbb4  lw          $a0, -0x444C($gp)
    ctx->pc = 0x2e6290u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
label_2e6294:
    // 0x2e6294: 0xc050ed8  jal         func_143B60
label_2e6298:
    if (ctx->pc == 0x2E6298u) {
        ctx->pc = 0x2E629Cu;
        goto label_2e629c;
    }
    ctx->pc = 0x2E6294u;
    SET_GPR_U32(ctx, 31, 0x2E629Cu);
    ctx->pc = 0x143B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143B60u, 0x2E6294u, 0x2E629Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E629Cu;
label_2e629c:
    // 0x2e629c: 0xafa2012c  sw          $v0, 0x12C($sp)
    ctx->pc = 0x2e629cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 300), GPR_U32(ctx, 2));
label_2e62a0:
    // 0x2e62a0: 0x8fa4012c  lw          $a0, 0x12C($sp)
    ctx->pc = 0x2e62a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 300)));
label_2e62a4:
    // 0x2e62a4: 0x2405054d  addiu       $a1, $zero, 0x54D
    ctx->pc = 0x2e62a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1357));
label_2e62a8:
    // 0x2e62a8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2e62a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e62ac:
    // 0x2e62ac: 0xc040ab0  jal         func_102AC0
label_2e62b0:
    if (ctx->pc == 0x2E62B0u) {
        ctx->pc = 0x2E62B4u;
        goto label_2e62b4;
    }
    ctx->pc = 0x2E62ACu;
    SET_GPR_U32(ctx, 31, 0x2E62B4u);
    ctx->pc = 0x102AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AC0u, 0x2E62ACu, 0x2E62B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E62B4u;
label_2e62b4:
    // 0x2e62b4: 0xafa20128  sw          $v0, 0x128($sp)
    ctx->pc = 0x2e62b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 296), GPR_U32(ctx, 2));
label_2e62b8:
    // 0x2e62b8: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x2e62b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
label_2e62bc:
    // 0x2e62bc: 0x1440002d  bnez        $v0, . + 4 + (0x2D << 2)
label_2e62c0:
    if (ctx->pc == 0x2E62C0u) {
        ctx->pc = 0x2E62C4u;
        goto label_2e62c4;
    }
    ctx->pc = 0x2E62BCu;
    {
        const bool branch_taken_0x2e62bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e62bc) {
            ctx->pc = 0x2E6374u;
            goto label_2e6374;
        }
    }
    ctx->pc = 0x2E62C4u;
label_2e62c4:
    // 0x2e62c4: 0x27a400c8  addiu       $a0, $sp, 0xC8
    ctx->pc = 0x2e62c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
label_2e62c8:
    // 0x2e62c8: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x2e62c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
label_2e62cc:
    // 0x2e62cc: 0x24a5e690  addiu       $a1, $a1, -0x1970
    ctx->pc = 0x2e62ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960784));
label_2e62d0:
    // 0x2e62d0: 0xc040304  jal         func_100C10
label_2e62d4:
    if (ctx->pc == 0x2E62D4u) {
        ctx->pc = 0x2E62D8u;
        goto label_2e62d8;
    }
    ctx->pc = 0x2E62D0u;
    SET_GPR_U32(ctx, 31, 0x2E62D8u);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x2E62D0u, 0x2E62D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E62D8u;
label_2e62d8:
    // 0x2e62d8: 0x27a400c8  addiu       $a0, $sp, 0xC8
    ctx->pc = 0x2e62d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
label_2e62dc:
    // 0x2e62dc: 0xc1163b8  jal         func_458EE0
label_2e62e0:
    if (ctx->pc == 0x2E62E0u) {
        ctx->pc = 0x2E62E4u;
        goto label_2e62e4;
    }
    ctx->pc = 0x2E62DCu;
    SET_GPR_U32(ctx, 31, 0x2E62E4u);
    ctx->pc = 0x458EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x458EE0u, 0x2E62DCu, 0x2E62E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E62E4u;
label_2e62e4:
    // 0x2e62e4: 0xafa200f4  sw          $v0, 0xF4($sp)
    ctx->pc = 0x2e62e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 244), GPR_U32(ctx, 2));
label_2e62e8:
    // 0x2e62e8: 0x27a400c8  addiu       $a0, $sp, 0xC8
    ctx->pc = 0x2e62e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
label_2e62ec:
    // 0x2e62ec: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2e62ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2e62f0:
    // 0x2e62f0: 0xc0402d4  jal         func_100B50
label_2e62f4:
    if (ctx->pc == 0x2E62F4u) {
        ctx->pc = 0x2E62F8u;
        goto label_2e62f8;
    }
    ctx->pc = 0x2E62F0u;
    SET_GPR_U32(ctx, 31, 0x2E62F8u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x2E62F0u, 0x2E62F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E62F8u;
label_2e62f8:
    // 0x2e62f8: 0x8fa200f4  lw          $v0, 0xF4($sp)
    ctx->pc = 0x2e62f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 244)));
label_2e62fc:
    // 0x2e62fc: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
label_2e6300:
    if (ctx->pc == 0x2E6300u) {
        ctx->pc = 0x2E6304u;
        goto label_2e6304;
    }
    ctx->pc = 0x2E62FCu;
    {
        const bool branch_taken_0x2e62fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e62fc) {
            ctx->pc = 0x2E6374u;
            goto label_2e6374;
        }
    }
    ctx->pc = 0x2E6304u;
label_2e6304:
    // 0x2e6304: 0xc0434e0  jal         func_10D380
label_2e6308:
    if (ctx->pc == 0x2E6308u) {
        ctx->pc = 0x2E630Cu;
        goto label_2e630c;
    }
    ctx->pc = 0x2E6304u;
    SET_GPR_U32(ctx, 31, 0x2E630Cu);
    ctx->pc = 0x10D380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10D380u, 0x2E6304u, 0x2E630Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E630Cu;
label_2e630c:
    // 0x2e630c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2e630cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e6310:
    // 0x2e6310: 0xc0434d8  jal         func_10D360
label_2e6314:
    if (ctx->pc == 0x2E6314u) {
        ctx->pc = 0x2E6318u;
        goto label_2e6318;
    }
    ctx->pc = 0x2E6310u;
    SET_GPR_U32(ctx, 31, 0x2E6318u);
    ctx->pc = 0x10D360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10D360u, 0x2E6310u, 0x2E6318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6318u;
label_2e6318:
    // 0x2e6318: 0xafa20124  sw          $v0, 0x124($sp)
    ctx->pc = 0x2e6318u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 292), GPR_U32(ctx, 2));
label_2e631c:
    // 0x2e631c: 0x8fa40124  lw          $a0, 0x124($sp)
    ctx->pc = 0x2e631cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 292)));
label_2e6320:
    // 0x2e6320: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x2e6320u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
label_2e6324:
    // 0x2e6324: 0x24a5e6a0  addiu       $a1, $a1, -0x1960
    ctx->pc = 0x2e6324u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960800));
label_2e6328:
    // 0x2e6328: 0xc044edc  jal         func_113B70
label_2e632c:
    if (ctx->pc == 0x2E632Cu) {
        ctx->pc = 0x2E6330u;
        goto label_2e6330;
    }
    ctx->pc = 0x2E6328u;
    SET_GPR_U32(ctx, 31, 0x2E6330u);
    ctx->pc = 0x113B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113B70u, 0x2E6328u, 0x2E6330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6330u;
label_2e6330:
    // 0x2e6330: 0xafa20120  sw          $v0, 0x120($sp)
    ctx->pc = 0x2e6330u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 2));
label_2e6334:
    // 0x2e6334: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x2e6334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_2e6338:
    // 0x2e6338: 0x1002000e  beq         $zero, $v0, . + 4 + (0xE << 2)
label_2e633c:
    if (ctx->pc == 0x2E633Cu) {
        ctx->pc = 0x2E6340u;
        goto label_2e6340;
    }
    ctx->pc = 0x2E6338u;
    {
        const bool branch_taken_0x2e6338 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e6338) {
            ctx->pc = 0x2E6374u;
            goto label_2e6374;
        }
    }
    ctx->pc = 0x2E6340u;
label_2e6340:
    // 0x2e6340: 0x8f84bbb4  lw          $a0, -0x444C($gp)
    ctx->pc = 0x2e6340u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
label_2e6344:
    // 0x2e6344: 0xc050ed8  jal         func_143B60
label_2e6348:
    if (ctx->pc == 0x2E6348u) {
        ctx->pc = 0x2E634Cu;
        goto label_2e634c;
    }
    ctx->pc = 0x2E6344u;
    SET_GPR_U32(ctx, 31, 0x2E634Cu);
    ctx->pc = 0x143B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143B60u, 0x2E6344u, 0x2E634Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E634Cu;
label_2e634c:
    // 0x2e634c: 0xafa2011c  sw          $v0, 0x11C($sp)
    ctx->pc = 0x2e634cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 284), GPR_U32(ctx, 2));
label_2e6350:
    // 0x2e6350: 0x8fa40120  lw          $a0, 0x120($sp)
    ctx->pc = 0x2e6350u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_2e6354:
    // 0x2e6354: 0xc0457d8  jal         func_115F60
label_2e6358:
    if (ctx->pc == 0x2E6358u) {
        ctx->pc = 0x2E635Cu;
        goto label_2e635c;
    }
    ctx->pc = 0x2E6354u;
    SET_GPR_U32(ctx, 31, 0x2E635Cu);
    ctx->pc = 0x115F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115F60u, 0x2E6354u, 0x2E635Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E635Cu;
label_2e635c:
    // 0x2e635c: 0xafa20128  sw          $v0, 0x128($sp)
    ctx->pc = 0x2e635cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 296), GPR_U32(ctx, 2));
label_2e6360:
    // 0x2e6360: 0x8fa60128  lw          $a2, 0x128($sp)
    ctx->pc = 0x2e6360u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
label_2e6364:
    // 0x2e6364: 0x8fa4011c  lw          $a0, 0x11C($sp)
    ctx->pc = 0x2e6364u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 284)));
label_2e6368:
    // 0x2e6368: 0x2405054d  addiu       $a1, $zero, 0x54D
    ctx->pc = 0x2e6368u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1357));
label_2e636c:
    // 0x2e636c: 0xc040924  jal         func_102490
label_2e6370:
    if (ctx->pc == 0x2E6370u) {
        ctx->pc = 0x2E6374u;
        goto label_2e6374;
    }
    ctx->pc = 0x2E636Cu;
    SET_GPR_U32(ctx, 31, 0x2E6374u);
    ctx->pc = 0x102490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102490u, 0x2E636Cu, 0x2E6374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6374u;
label_2e6374:
    // 0x2e6374: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x2e6374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
label_2e6378:
    // 0x2e6378: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_2e637c:
    if (ctx->pc == 0x2E637Cu) {
        ctx->pc = 0x2E6380u;
        goto label_2e6380;
    }
    ctx->pc = 0x2E6378u;
    {
        const bool branch_taken_0x2e6378 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e6378) {
            ctx->pc = 0x2E63A8u;
            goto label_2e63a8;
        }
    }
    ctx->pc = 0x2E6380u;
label_2e6380:
    // 0x2e6380: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2e6380u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e6384:
    // 0x2e6384: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x2e6384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
label_2e6388:
    // 0x2e6388: 0xa0430020  sb          $v1, 0x20($v0)
    ctx->pc = 0x2e6388u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 32), (uint8_t)GPR_U32(ctx, 3));
label_2e638c:
    // 0x2e638c: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x2e638cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
label_2e6390:
    // 0x2e6390: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x2e6390u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_2e6394:
    // 0x2e6394: 0x27a50128  addiu       $a1, $sp, 0x128
    ctx->pc = 0x2e6394u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 296));
label_2e6398:
    // 0x2e6398: 0xc0444e0  jal         func_111380
label_2e639c:
    if (ctx->pc == 0x2E639Cu) {
        ctx->pc = 0x2E63A0u;
        goto label_2e63a0;
    }
    ctx->pc = 0x2E6398u;
    SET_GPR_U32(ctx, 31, 0x2E63A0u);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x2E6398u, 0x2E63A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E63A0u;
label_2e63a0:
    // 0x2e63a0: 0x10000003  b           . + 4 + (0x3 << 2)
label_2e63a4:
    if (ctx->pc == 0x2E63A4u) {
        ctx->pc = 0x2E63A8u;
        goto label_2e63a8;
    }
    ctx->pc = 0x2E63A0u;
    {
        const bool branch_taken_0x2e63a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e63a0) {
            ctx->pc = 0x2E63B0u;
            goto label_2e63b0;
        }
    }
    ctx->pc = 0x2E63A8u;
label_2e63a8:
    // 0x2e63a8: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x2e63a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
label_2e63ac:
    // 0x2e63ac: 0xa0400020  sb          $zero, 0x20($v0)
    ctx->pc = 0x2e63acu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 32), (uint8_t)GPR_U32(ctx, 0));
label_2e63b0:
    // 0x2e63b0: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x2e63b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
label_2e63b4:
    // 0x2e63b4: 0x24440024  addiu       $a0, $v0, 0x24
    ctx->pc = 0x2e63b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 36));
label_2e63b8:
    // 0x2e63b8: 0xc0b9a4c  jal         func_2E6930
label_2e63bc:
    if (ctx->pc == 0x2E63BCu) {
        ctx->pc = 0x2E63C0u;
        goto label_2e63c0;
    }
    ctx->pc = 0x2E63B8u;
    SET_GPR_U32(ctx, 31, 0x2E63C0u);
    ctx->pc = 0x2E6930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E6930u, 0x2E63B8u, 0x2E63C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E63C0u;
label_2e63c0:
    // 0x2e63c0: 0xafa20118  sw          $v0, 0x118($sp)
    ctx->pc = 0x2e63c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 280), GPR_U32(ctx, 2));
label_2e63c4:
    // 0x2e63c4: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2e63c4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e63c8:
    // 0x2e63c8: 0x1000000a  b           . + 4 + (0xA << 2)
label_2e63cc:
    if (ctx->pc == 0x2E63CCu) {
        ctx->pc = 0x2E63D0u;
        goto label_2e63d0;
    }
    ctx->pc = 0x2E63C8u;
    {
        const bool branch_taken_0x2e63c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e63c8) {
            ctx->pc = 0x2E63F4u;
            goto label_2e63f4;
        }
    }
    ctx->pc = 0x2E63D0u;
label_2e63d0:
    // 0x2e63d0: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x2e63d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
label_2e63d4:
    // 0x2e63d4: 0x24440024  addiu       $a0, $v0, 0x24
    ctx->pc = 0x2e63d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 36));
label_2e63d8:
    // 0x2e63d8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2e63d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2e63dc:
    // 0x2e63dc: 0xc0b9a3c  jal         func_2E68F0
label_2e63e0:
    if (ctx->pc == 0x2E63E0u) {
        ctx->pc = 0x2E63E4u;
        goto label_2e63e4;
    }
    ctx->pc = 0x2E63DCu;
    SET_GPR_U32(ctx, 31, 0x2E63E4u);
    ctx->pc = 0x2E68F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E68F0u, 0x2E63DCu, 0x2E63E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E63E4u;
label_2e63e4:
    // 0x2e63e4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2e63e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2e63e8:
    // 0x2e63e8: 0xc0b94e8  jal         func_2E53A0
label_2e63ec:
    if (ctx->pc == 0x2E63ECu) {
        ctx->pc = 0x2E63F0u;
        goto label_2e63f0;
    }
    ctx->pc = 0x2E63E8u;
    SET_GPR_U32(ctx, 31, 0x2E63F0u);
    ctx->pc = 0x2E53A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E53A0u, 0x2E63E8u, 0x2E63F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E63F0u;
label_2e63f0:
    // 0x2e63f0: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x2e63f0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_2e63f4:
    // 0x2e63f4: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x2e63f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_2e63f8:
    // 0x2e63f8: 0x282102b  sltu        $v0, $s4, $v0
    ctx->pc = 0x2e63f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2e63fc:
    // 0x2e63fc: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
label_2e6400:
    if (ctx->pc == 0x2E6400u) {
        ctx->pc = 0x2E6404u;
        goto label_2e6404;
    }
    ctx->pc = 0x2E63FCu;
    {
        const bool branch_taken_0x2e63fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e63fc) {
            ctx->pc = 0x2E63D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e63d0;
        }
    }
    ctx->pc = 0x2E6404u;
label_2e6404:
    // 0x2e6404: 0x27a400e8  addiu       $a0, $sp, 0xE8
    ctx->pc = 0x2e6404u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
label_2e6408:
    // 0x2e6408: 0x8fa50140  lw          $a1, 0x140($sp)
    ctx->pc = 0x2e6408u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_2e640c:
    // 0x2e640c: 0xc042844  jal         func_10A110
label_2e6410:
    if (ctx->pc == 0x2E6410u) {
        ctx->pc = 0x2E6414u;
        goto label_2e6414;
    }
    ctx->pc = 0x2E640Cu;
    SET_GPR_U32(ctx, 31, 0x2E6414u);
    ctx->pc = 0x10A110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A110u, 0x2E640Cu, 0x2E6414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6414u;
label_2e6414:
    // 0x2e6414: 0x27a400e8  addiu       $a0, $sp, 0xE8
    ctx->pc = 0x2e6414u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
label_2e6418:
    // 0x2e6418: 0xc041b38  jal         func_106CE0
label_2e641c:
    if (ctx->pc == 0x2E641Cu) {
        ctx->pc = 0x2E6420u;
        goto label_2e6420;
    }
    ctx->pc = 0x2E6418u;
    SET_GPR_U32(ctx, 31, 0x2E6420u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x2E6418u, 0x2E6420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6420u;
label_2e6420:
    // 0x2e6420: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2e6420u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e6424:
    // 0x2e6424: 0x2785a560  addiu       $a1, $gp, -0x5AA0
    ctx->pc = 0x2e6424u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294944096));
label_2e6428:
    // 0x2e6428: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x2e6428u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2e642c:
    // 0x2e642c: 0xc0bc66e  jal         func_2F19B8
label_2e6430:
    if (ctx->pc == 0x2E6430u) {
        ctx->pc = 0x2E6434u;
        goto label_2e6434;
    }
    ctx->pc = 0x2E642Cu;
    SET_GPR_U32(ctx, 31, 0x2E6434u);
    ctx->pc = 0x2F19B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F19B8u, 0x2E642Cu, 0x2E6434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6434u;
label_2e6434:
    // 0x2e6434: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
label_2e6438:
    if (ctx->pc == 0x2E6438u) {
        ctx->pc = 0x2E643Cu;
        goto label_2e643c;
    }
    ctx->pc = 0x2E6434u;
    {
        const bool branch_taken_0x2e6434 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e6434) {
            ctx->pc = 0x2E648Cu;
            goto label_2e648c;
        }
    }
    ctx->pc = 0x2E643Cu;
label_2e643c:
    // 0x2e643c: 0x27a400e8  addiu       $a0, $sp, 0xE8
    ctx->pc = 0x2e643cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
label_2e6440:
    // 0x2e6440: 0xc041b38  jal         func_106CE0
label_2e6444:
    if (ctx->pc == 0x2E6444u) {
        ctx->pc = 0x2E6448u;
        goto label_2e6448;
    }
    ctx->pc = 0x2E6440u;
    SET_GPR_U32(ctx, 31, 0x2E6448u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x2E6440u, 0x2E6448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6448u;
label_2e6448:
    // 0x2e6448: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x2e6448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
label_2e644c:
    // 0x2e644c: 0xafa20114  sw          $v0, 0x114($sp)
    ctx->pc = 0x2e644cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 276), GPR_U32(ctx, 2));
label_2e6450:
    // 0x2e6450: 0x27a400e8  addiu       $a0, $sp, 0xE8
    ctx->pc = 0x2e6450u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
label_2e6454:
    // 0x2e6454: 0x2405002e  addiu       $a1, $zero, 0x2E
    ctx->pc = 0x2e6454u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
label_2e6458:
    // 0x2e6458: 0xc047874  jal         func_11E1D0
label_2e645c:
    if (ctx->pc == 0x2E645Cu) {
        ctx->pc = 0x2E6460u;
        goto label_2e6460;
    }
    ctx->pc = 0x2E6458u;
    SET_GPR_U32(ctx, 31, 0x2E6460u);
    ctx->pc = 0x11E1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E1D0u, 0x2E6458u, 0x2E6460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6460u;
label_2e6460:
    // 0x2e6460: 0xafa20110  sw          $v0, 0x110($sp)
    ctx->pc = 0x2e6460u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 2));
label_2e6464:
    // 0x2e6464: 0x8fa30110  lw          $v1, 0x110($sp)
    ctx->pc = 0x2e6464u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
label_2e6468:
    // 0x2e6468: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2e6468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2e646c:
    // 0x2e646c: 0x1062001a  beq         $v1, $v0, . + 4 + (0x1A << 2)
label_2e6470:
    if (ctx->pc == 0x2E6470u) {
        ctx->pc = 0x2E6474u;
        goto label_2e6474;
    }
    ctx->pc = 0x2E646Cu;
    {
        const bool branch_taken_0x2e646c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e646c) {
            ctx->pc = 0x2E64D8u;
            goto label_2e64d8;
        }
    }
    ctx->pc = 0x2E6474u;
label_2e6474:
    // 0x2e6474: 0x27a400e8  addiu       $a0, $sp, 0xE8
    ctx->pc = 0x2e6474u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
label_2e6478:
    // 0x2e6478: 0x8fa50110  lw          $a1, 0x110($sp)
    ctx->pc = 0x2e6478u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
label_2e647c:
    // 0x2e647c: 0xc0b9f60  jal         func_2E7D80
label_2e6480:
    if (ctx->pc == 0x2E6480u) {
        ctx->pc = 0x2E6484u;
        goto label_2e6484;
    }
    ctx->pc = 0x2E647Cu;
    SET_GPR_U32(ctx, 31, 0x2E6484u);
    ctx->pc = 0x2E7D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E7D80u, 0x2E647Cu, 0x2E6484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6484u;
label_2e6484:
    // 0x2e6484: 0x10000014  b           . + 4 + (0x14 << 2)
label_2e6488:
    if (ctx->pc == 0x2E6488u) {
        ctx->pc = 0x2E648Cu;
        goto label_2e648c;
    }
    ctx->pc = 0x2E6484u;
    {
        const bool branch_taken_0x2e6484 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e6484) {
            ctx->pc = 0x2E64D8u;
            goto label_2e64d8;
        }
    }
    ctx->pc = 0x2E648Cu;
label_2e648c:
    // 0x2e648c: 0x27a400d8  addiu       $a0, $sp, 0xD8
    ctx->pc = 0x2e648cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
label_2e6490:
    // 0x2e6490: 0xc041b48  jal         func_106D20
label_2e6494:
    if (ctx->pc == 0x2E6494u) {
        ctx->pc = 0x2E6498u;
        goto label_2e6498;
    }
    ctx->pc = 0x2E6490u;
    SET_GPR_U32(ctx, 31, 0x2E6498u);
    ctx->pc = 0x106D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106D20u, 0x2E6490u, 0x2E6498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6498u;
label_2e6498:
    // 0x2e6498: 0x27a400d8  addiu       $a0, $sp, 0xD8
    ctx->pc = 0x2e6498u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
label_2e649c:
    // 0x2e649c: 0x8fa50140  lw          $a1, 0x140($sp)
    ctx->pc = 0x2e649cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_2e64a0:
    // 0x2e64a0: 0xc1190f4  jal         func_4643D0
label_2e64a4:
    if (ctx->pc == 0x2E64A4u) {
        ctx->pc = 0x2E64A8u;
        goto label_2e64a8;
    }
    ctx->pc = 0x2E64A0u;
    SET_GPR_U32(ctx, 31, 0x2E64A8u);
    ctx->pc = 0x4643D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4643D0u, 0x2E64A0u, 0x2E64A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E64A8u;
label_2e64a8:
    // 0x2e64a8: 0x27a400e8  addiu       $a0, $sp, 0xE8
    ctx->pc = 0x2e64a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
label_2e64ac:
    // 0x2e64ac: 0x2785a560  addiu       $a1, $gp, -0x5AA0
    ctx->pc = 0x2e64acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294944096));
label_2e64b0:
    // 0x2e64b0: 0xc041ba4  jal         func_106E90
label_2e64b4:
    if (ctx->pc == 0x2E64B4u) {
        ctx->pc = 0x2E64B8u;
        goto label_2e64b8;
    }
    ctx->pc = 0x2E64B0u;
    SET_GPR_U32(ctx, 31, 0x2E64B8u);
    ctx->pc = 0x106E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106E90u, 0x2E64B0u, 0x2E64B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E64B8u;
label_2e64b8:
    // 0x2e64b8: 0x27a400e8  addiu       $a0, $sp, 0xE8
    ctx->pc = 0x2e64b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
label_2e64bc:
    // 0x2e64bc: 0x27a500d8  addiu       $a1, $sp, 0xD8
    ctx->pc = 0x2e64bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
label_2e64c0:
    // 0x2e64c0: 0xc048c50  jal         func_123140
label_2e64c4:
    if (ctx->pc == 0x2E64C4u) {
        ctx->pc = 0x2E64C8u;
        goto label_2e64c8;
    }
    ctx->pc = 0x2E64C0u;
    SET_GPR_U32(ctx, 31, 0x2E64C8u);
    ctx->pc = 0x123140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123140u, 0x2E64C0u, 0x2E64C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E64C8u;
label_2e64c8:
    // 0x2e64c8: 0x27a400d8  addiu       $a0, $sp, 0xD8
    ctx->pc = 0x2e64c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
label_2e64cc:
    // 0x2e64cc: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2e64ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2e64d0:
    // 0x2e64d0: 0xc0402d4  jal         func_100B50
label_2e64d4:
    if (ctx->pc == 0x2E64D4u) {
        ctx->pc = 0x2E64D8u;
        goto label_2e64d8;
    }
    ctx->pc = 0x2E64D0u;
    SET_GPR_U32(ctx, 31, 0x2E64D8u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x2E64D0u, 0x2E64D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E64D8u;
label_2e64d8:
    // 0x2e64d8: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x2e64d8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e64dc:
    // 0x2e64dc: 0xc090864  jal         func_242190
label_2e64e0:
    if (ctx->pc == 0x2E64E0u) {
        ctx->pc = 0x2E64E4u;
        goto label_2e64e4;
    }
    ctx->pc = 0x2E64DCu;
    SET_GPR_U32(ctx, 31, 0x2E64E4u);
    ctx->pc = 0x242190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x242190u, 0x2E64DCu, 0x2E64E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E64E4u;
label_2e64e4:
    // 0x2e64e4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2e64e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e64e8:
    // 0x2e64e8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2e64e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2e64ec:
    // 0x2e64ec: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x2e64ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_2e64f0:
    // 0x2e64f0: 0x320f809  jalr        $t9
label_2e64f4:
    if (ctx->pc == 0x2E64F4u) {
        ctx->pc = 0x2E64F8u;
        goto label_2e64f8;
    }
    ctx->pc = 0x2E64F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2E64F8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E64F0u, 0x2E64F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2E64F8u;
label_2e64f8:
    // 0x2e64f8: 0xafa2010c  sw          $v0, 0x10C($sp)
    ctx->pc = 0x2e64f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 268), GPR_U32(ctx, 2));
label_2e64fc:
    // 0x2e64fc: 0x8fa2010c  lw          $v0, 0x10C($sp)
    ctx->pc = 0x2e64fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
label_2e6500:
    // 0x2e6500: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2e6504:
    if (ctx->pc == 0x2E6504u) {
        ctx->pc = 0x2E6508u;
        goto label_2e6508;
    }
    ctx->pc = 0x2E6500u;
    {
        const bool branch_taken_0x2e6500 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e6500) {
            ctx->pc = 0x2E651Cu;
            goto label_2e651c;
        }
    }
    ctx->pc = 0x2E6508u;
label_2e6508:
    // 0x2e6508: 0x8fa4010c  lw          $a0, 0x10C($sp)
    ctx->pc = 0x2e6508u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
label_2e650c:
    // 0x2e650c: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x2e650cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_2e6510:
    // 0x2e6510: 0xc085538  jal         func_2154E0
label_2e6514:
    if (ctx->pc == 0x2E6514u) {
        ctx->pc = 0x2E6518u;
        goto label_2e6518;
    }
    ctx->pc = 0x2E6510u;
    SET_GPR_U32(ctx, 31, 0x2E6518u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2E6510u, 0x2E6518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6518u;
label_2e6518:
    // 0x2e6518: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x2e6518u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e651c:
    // 0x2e651c: 0xc0434e0  jal         func_10D380
label_2e6520:
    if (ctx->pc == 0x2E6520u) {
        ctx->pc = 0x2E6524u;
        goto label_2e6524;
    }
    ctx->pc = 0x2E651Cu;
    SET_GPR_U32(ctx, 31, 0x2E6524u);
    ctx->pc = 0x10D380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10D380u, 0x2E651Cu, 0x2E6524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6524u;
label_2e6524:
    // 0x2e6524: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2e6524u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e6528:
    // 0x2e6528: 0xc0434d8  jal         func_10D360
label_2e652c:
    if (ctx->pc == 0x2E652Cu) {
        ctx->pc = 0x2E6530u;
        goto label_2e6530;
    }
    ctx->pc = 0x2E6528u;
    SET_GPR_U32(ctx, 31, 0x2E6530u);
    ctx->pc = 0x10D360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10D360u, 0x2E6528u, 0x2E6530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6530u;
label_2e6530:
    // 0x2e6530: 0xafa20108  sw          $v0, 0x108($sp)
    ctx->pc = 0x2e6530u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 264), GPR_U32(ctx, 2));
label_2e6534:
    // 0x2e6534: 0x27a400e8  addiu       $a0, $sp, 0xE8
    ctx->pc = 0x2e6534u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
label_2e6538:
    // 0x2e6538: 0xc041b38  jal         func_106CE0
label_2e653c:
    if (ctx->pc == 0x2E653Cu) {
        ctx->pc = 0x2E6540u;
        goto label_2e6540;
    }
    ctx->pc = 0x2E6538u;
    SET_GPR_U32(ctx, 31, 0x2E6540u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x2E6538u, 0x2E6540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6540u;
label_2e6540:
    // 0x2e6540: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x2e6540u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
label_2e6544:
    // 0x2e6544: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2e6544u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e6548:
    // 0x2e6548: 0xc044edc  jal         func_113B70
label_2e654c:
    if (ctx->pc == 0x2E654Cu) {
        ctx->pc = 0x2E6550u;
        goto label_2e6550;
    }
    ctx->pc = 0x2E6548u;
    SET_GPR_U32(ctx, 31, 0x2E6550u);
    ctx->pc = 0x113B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113B70u, 0x2E6548u, 0x2E6550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6550u;
label_2e6550:
    // 0x2e6550: 0xafa20104  sw          $v0, 0x104($sp)
    ctx->pc = 0x2e6550u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 2));
label_2e6554:
    // 0x2e6554: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2e6554u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e6558:
    // 0x2e6558: 0x8fa20104  lw          $v0, 0x104($sp)
    ctx->pc = 0x2e6558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 260)));
label_2e655c:
    // 0x2e655c: 0x1002005a  beq         $zero, $v0, . + 4 + (0x5A << 2)
label_2e6560:
    if (ctx->pc == 0x2E6560u) {
        ctx->pc = 0x2E6564u;
        goto label_2e6564;
    }
    ctx->pc = 0x2E655Cu;
    {
        const bool branch_taken_0x2e655c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e655c) {
            ctx->pc = 0x2E66C8u;
            goto label_2e66c8;
        }
    }
    ctx->pc = 0x2E6564u;
label_2e6564:
    // 0x2e6564: 0x8fa40104  lw          $a0, 0x104($sp)
    ctx->pc = 0x2e6564u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 260)));
label_2e6568:
    // 0x2e6568: 0xc0457e8  jal         func_115FA0
label_2e656c:
    if (ctx->pc == 0x2E656Cu) {
        ctx->pc = 0x2E6570u;
        goto label_2e6570;
    }
    ctx->pc = 0x2E6568u;
    SET_GPR_U32(ctx, 31, 0x2E6570u);
    ctx->pc = 0x115FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115FA0u, 0x2E6568u, 0x2E6570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6570u;
label_2e6570:
    // 0x2e6570: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2e6570u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e6574:
    // 0x2e6574: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2e6574u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2e6578:
    // 0x2e6578: 0x24050443  addiu       $a1, $zero, 0x443
    ctx->pc = 0x2e6578u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1091));
label_2e657c:
    // 0x2e657c: 0x2786a564  addiu       $a2, $gp, -0x5A9C
    ctx->pc = 0x2e657cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294944100));
label_2e6580:
    // 0x2e6580: 0xc041a50  jal         func_106940
label_2e6584:
    if (ctx->pc == 0x2E6584u) {
        ctx->pc = 0x2E6588u;
        goto label_2e6588;
    }
    ctx->pc = 0x2E6580u;
    SET_GPR_U32(ctx, 31, 0x2E6588u);
    ctx->pc = 0x106940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106940u, 0x2E6580u, 0x2E6588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6588u;
label_2e6588:
    // 0x2e6588: 0xafa20100  sw          $v0, 0x100($sp)
    ctx->pc = 0x2e6588u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 2));
label_2e658c:
    // 0x2e658c: 0xafa000fc  sw          $zero, 0xFC($sp)
    ctx->pc = 0x2e658cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 252), GPR_U32(ctx, 0));
label_2e6590:
    // 0x2e6590: 0x10000006  b           . + 4 + (0x6 << 2)
label_2e6594:
    if (ctx->pc == 0x2E6594u) {
        ctx->pc = 0x2E6598u;
        goto label_2e6598;
    }
    ctx->pc = 0x2E6590u;
    {
        const bool branch_taken_0x2e6590 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e6590) {
            ctx->pc = 0x2E65ACu;
            goto label_2e65ac;
        }
    }
    ctx->pc = 0x2E6598u;
label_2e6598:
    // 0x2e6598: 0x8fa40130  lw          $a0, 0x130($sp)
    ctx->pc = 0x2e6598u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
label_2e659c:
    // 0x2e659c: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x2e659cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_2e65a0:
    // 0x2e65a0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2e65a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e65a4:
    // 0x2e65a4: 0xc0b9a5c  jal         func_2E6970
label_2e65a8:
    if (ctx->pc == 0x2E65A8u) {
        ctx->pc = 0x2E65ACu;
        goto label_2e65ac;
    }
    ctx->pc = 0x2E65A4u;
    SET_GPR_U32(ctx, 31, 0x2E65ACu);
    ctx->pc = 0x2E6970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E6970u, 0x2E65A4u, 0x2E65ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E65ACu;
label_2e65ac:
    // 0x2e65ac: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x2e65acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_2e65b0:
    // 0x2e65b0: 0x8fa50100  lw          $a1, 0x100($sp)
    ctx->pc = 0x2e65b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
label_2e65b4:
    // 0x2e65b4: 0x27a600fc  addiu       $a2, $sp, 0xFC
    ctx->pc = 0x2e65b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 252));
label_2e65b8:
    // 0x2e65b8: 0xc0b9624  jal         func_2E5890
label_2e65bc:
    if (ctx->pc == 0x2E65BCu) {
        ctx->pc = 0x2E65C0u;
        goto label_2e65c0;
    }
    ctx->pc = 0x2E65B8u;
    SET_GPR_U32(ctx, 31, 0x2E65C0u);
    ctx->pc = 0x2E5890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E5890u, 0x2E65B8u, 0x2E65C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E65C0u;
label_2e65c0:
    // 0x2e65c0: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_2e65c4:
    if (ctx->pc == 0x2E65C4u) {
        ctx->pc = 0x2E65C8u;
        goto label_2e65c8;
    }
    ctx->pc = 0x2E65C0u;
    {
        const bool branch_taken_0x2e65c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e65c0) {
            ctx->pc = 0x2E6598u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e6598;
        }
    }
    ctx->pc = 0x2E65C8u;
label_2e65c8:
    // 0x2e65c8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2e65c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2e65cc:
    // 0x2e65cc: 0x24050444  addiu       $a1, $zero, 0x444
    ctx->pc = 0x2e65ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1092));
label_2e65d0:
    // 0x2e65d0: 0x2786a564  addiu       $a2, $gp, -0x5A9C
    ctx->pc = 0x2e65d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294944100));
label_2e65d4:
    // 0x2e65d4: 0xc041a50  jal         func_106940
label_2e65d8:
    if (ctx->pc == 0x2E65D8u) {
        ctx->pc = 0x2E65DCu;
        goto label_2e65dc;
    }
    ctx->pc = 0x2E65D4u;
    SET_GPR_U32(ctx, 31, 0x2E65DCu);
    ctx->pc = 0x106940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106940u, 0x2E65D4u, 0x2E65DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E65DCu;
label_2e65dc:
    // 0x2e65dc: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x2e65dcu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e65e0:
    // 0x2e65e0: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x2e65e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_2e65e4:
    // 0x2e65e4: 0xc0bc60c  jal         func_2F1830
label_2e65e8:
    if (ctx->pc == 0x2E65E8u) {
        ctx->pc = 0x2E65ECu;
        goto label_2e65ec;
    }
    ctx->pc = 0x2E65E4u;
    SET_GPR_U32(ctx, 31, 0x2E65ECu);
    ctx->pc = 0x2F1830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1830u, 0x2E65E4u, 0x2E65ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E65ECu;
label_2e65ec:
    // 0x2e65ec: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_2e65f0:
    if (ctx->pc == 0x2E65F0u) {
        ctx->pc = 0x2E65F4u;
        goto label_2e65f4;
    }
    ctx->pc = 0x2E65ECu;
    {
        const bool branch_taken_0x2e65ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e65ec) {
            ctx->pc = 0x2E6610u;
            goto label_2e6610;
        }
    }
    ctx->pc = 0x2E65F4u;
label_2e65f4:
    // 0x2e65f4: 0x8fa40130  lw          $a0, 0x130($sp)
    ctx->pc = 0x2e65f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
label_2e65f8:
    // 0x2e65f8: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x2e65f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_2e65fc:
    // 0x2e65fc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2e65fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e6600:
    // 0x2e6600: 0xc0b9a5c  jal         func_2E6970
label_2e6604:
    if (ctx->pc == 0x2E6604u) {
        ctx->pc = 0x2E6608u;
        goto label_2e6608;
    }
    ctx->pc = 0x2E6600u;
    SET_GPR_U32(ctx, 31, 0x2E6608u);
    ctx->pc = 0x2E6970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E6970u, 0x2E6600u, 0x2E6608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6608u;
label_2e6608:
    // 0x2e6608: 0x10000008  b           . + 4 + (0x8 << 2)
label_2e660c:
    if (ctx->pc == 0x2E660Cu) {
        ctx->pc = 0x2E6610u;
        goto label_2e6610;
    }
    ctx->pc = 0x2E6608u;
    {
        const bool branch_taken_0x2e6608 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e6608) {
            ctx->pc = 0x2E662Cu;
            goto label_2e662c;
        }
    }
    ctx->pc = 0x2E6610u;
label_2e6610:
    // 0x2e6610: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x2e6610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
label_2e6614:
    // 0x2e6614: 0x24440024  addiu       $a0, $v0, 0x24
    ctx->pc = 0x2e6614u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 36));
label_2e6618:
    // 0x2e6618: 0xc0b9a30  jal         func_2E68C0
label_2e661c:
    if (ctx->pc == 0x2E661Cu) {
        ctx->pc = 0x2E6620u;
        goto label_2e6620;
    }
    ctx->pc = 0x2E6618u;
    SET_GPR_U32(ctx, 31, 0x2E6620u);
    ctx->pc = 0x2E68C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E68C0u, 0x2E6618u, 0x2E6620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6620u;
label_2e6620:
    // 0x2e6620: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2e6620u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2e6624:
    // 0x2e6624: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x2e6624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
label_2e6628:
    // 0x2e6628: 0xac430038  sw          $v1, 0x38($v0)
    ctx->pc = 0x2e6628u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 3));
label_2e662c:
    // 0x2e662c: 0xaf80bccc  sw          $zero, -0x4334($gp)
    ctx->pc = 0x2e662cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950092), GPR_U32(ctx, 0));
label_2e6630:
    // 0x2e6630: 0xaf80bcc8  sw          $zero, -0x4338($gp)
    ctx->pc = 0x2e6630u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950088), GPR_U32(ctx, 0));
label_2e6634:
    // 0x2e6634: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x2e6634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
label_2e6638:
    // 0x2e6638: 0x24440024  addiu       $a0, $v0, 0x24
    ctx->pc = 0x2e6638u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 36));
label_2e663c:
    // 0x2e663c: 0xc0b9a28  jal         func_2E68A0
label_2e6640:
    if (ctx->pc == 0x2E6640u) {
        ctx->pc = 0x2E6644u;
        goto label_2e6644;
    }
    ctx->pc = 0x2E663Cu;
    SET_GPR_U32(ctx, 31, 0x2E6644u);
    ctx->pc = 0x2E68A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E68A0u, 0x2E663Cu, 0x2E6644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6644u;
label_2e6644:
    // 0x2e6644: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2e6644u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e6648:
    // 0x2e6648: 0x10000008  b           . + 4 + (0x8 << 2)
label_2e664c:
    if (ctx->pc == 0x2E664Cu) {
        ctx->pc = 0x2E6650u;
        goto label_2e6650;
    }
    ctx->pc = 0x2E6648u;
    {
        const bool branch_taken_0x2e6648 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e6648) {
            ctx->pc = 0x2E666Cu;
            goto label_2e666c;
        }
    }
    ctx->pc = 0x2E6650u;
label_2e6650:
    // 0x2e6650: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2e6650u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2e6654:
    // 0x2e6654: 0xc0b9538  jal         func_2E54E0
label_2e6658:
    if (ctx->pc == 0x2E6658u) {
        ctx->pc = 0x2E665Cu;
        goto label_2e665c;
    }
    ctx->pc = 0x2E6654u;
    SET_GPR_U32(ctx, 31, 0x2E665Cu);
    ctx->pc = 0x2E54E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E54E0u, 0x2E6654u, 0x2E665Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E665Cu;
label_2e665c:
    // 0x2e665c: 0x8f83bcc8  lw          $v1, -0x4338($gp)
    ctx->pc = 0x2e665cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950088)));
label_2e6660:
    // 0x2e6660: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2e6660u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2e6664:
    // 0x2e6664: 0xaf82bcc8  sw          $v0, -0x4338($gp)
    ctx->pc = 0x2e6664u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950088), GPR_U32(ctx, 2));
label_2e6668:
    // 0x2e6668: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x2e6668u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_2e666c:
    // 0x2e666c: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x2e666cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
label_2e6670:
    // 0x2e6670: 0x24440024  addiu       $a0, $v0, 0x24
    ctx->pc = 0x2e6670u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 36));
label_2e6674:
    // 0x2e6674: 0xc0b9a20  jal         func_2E6880
label_2e6678:
    if (ctx->pc == 0x2E6678u) {
        ctx->pc = 0x2E667Cu;
        goto label_2e667c;
    }
    ctx->pc = 0x2E6674u;
    SET_GPR_U32(ctx, 31, 0x2E667Cu);
    ctx->pc = 0x2E6880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E6880u, 0x2E6674u, 0x2E667Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E667Cu;
label_2e667c:
    // 0x2e667c: 0x1602fff4  bne         $s0, $v0, . + 4 + (-0xC << 2)
label_2e6680:
    if (ctx->pc == 0x2E6680u) {
        ctx->pc = 0x2E6684u;
        goto label_2e6684;
    }
    ctx->pc = 0x2E667Cu;
    {
        const bool branch_taken_0x2e667c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x2e667c) {
            ctx->pc = 0x2E6650u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e6650;
        }
    }
    ctx->pc = 0x2E6684u;
label_2e6684:
    // 0x2e6684: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x2e6684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
label_2e6688:
    // 0x2e6688: 0x24440024  addiu       $a0, $v0, 0x24
    ctx->pc = 0x2e6688u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 36));
label_2e668c:
    // 0x2e668c: 0xc0b9a28  jal         func_2E68A0
label_2e6690:
    if (ctx->pc == 0x2E6690u) {
        ctx->pc = 0x2E6694u;
        goto label_2e6694;
    }
    ctx->pc = 0x2E668Cu;
    SET_GPR_U32(ctx, 31, 0x2E6694u);
    ctx->pc = 0x2E68A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E68A0u, 0x2E668Cu, 0x2E6694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6694u;
label_2e6694:
    // 0x2e6694: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2e6694u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e6698:
    // 0x2e6698: 0x10000005  b           . + 4 + (0x5 << 2)
label_2e669c:
    if (ctx->pc == 0x2E669Cu) {
        ctx->pc = 0x2E66A0u;
        goto label_2e66a0;
    }
    ctx->pc = 0x2E6698u;
    {
        const bool branch_taken_0x2e6698 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e6698) {
            ctx->pc = 0x2E66B0u;
            goto label_2e66b0;
        }
    }
    ctx->pc = 0x2E66A0u;
label_2e66a0:
    // 0x2e66a0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2e66a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2e66a4:
    // 0x2e66a4: 0xc0b9544  jal         func_2E5510
label_2e66a8:
    if (ctx->pc == 0x2E66A8u) {
        ctx->pc = 0x2E66ACu;
        goto label_2e66ac;
    }
    ctx->pc = 0x2E66A4u;
    SET_GPR_U32(ctx, 31, 0x2E66ACu);
    ctx->pc = 0x2E5510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E5510u, 0x2E66A4u, 0x2E66ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E66ACu;
label_2e66ac:
    // 0x2e66ac: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x2e66acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_2e66b0:
    // 0x2e66b0: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x2e66b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
label_2e66b4:
    // 0x2e66b4: 0x24440024  addiu       $a0, $v0, 0x24
    ctx->pc = 0x2e66b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 36));
label_2e66b8:
    // 0x2e66b8: 0xc0b9a20  jal         func_2E6880
label_2e66bc:
    if (ctx->pc == 0x2E66BCu) {
        ctx->pc = 0x2E66C0u;
        goto label_2e66c0;
    }
    ctx->pc = 0x2E66B8u;
    SET_GPR_U32(ctx, 31, 0x2E66C0u);
    ctx->pc = 0x2E6880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E6880u, 0x2E66B8u, 0x2E66C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E66C0u;
label_2e66c0:
    // 0x2e66c0: 0x1602fff7  bne         $s0, $v0, . + 4 + (-0x9 << 2)
label_2e66c4:
    if (ctx->pc == 0x2E66C4u) {
        ctx->pc = 0x2E66C8u;
        goto label_2e66c8;
    }
    ctx->pc = 0x2E66C0u;
    {
        const bool branch_taken_0x2e66c0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x2e66c0) {
            ctx->pc = 0x2E66A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e66a0;
        }
    }
    ctx->pc = 0x2E66C8u;
label_2e66c8:
    // 0x2e66c8: 0x12a00005  beqz        $s5, . + 4 + (0x5 << 2)
label_2e66cc:
    if (ctx->pc == 0x2E66CCu) {
        ctx->pc = 0x2E66D0u;
        goto label_2e66d0;
    }
    ctx->pc = 0x2E66C8u;
    {
        const bool branch_taken_0x2e66c8 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e66c8) {
            ctx->pc = 0x2E66E0u;
            goto label_2e66e0;
        }
    }
    ctx->pc = 0x2E66D0u;
label_2e66d0:
    // 0x2e66d0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2e66d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2e66d4:
    // 0x2e66d4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2e66d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2e66d8:
    // 0x2e66d8: 0xc091c00  jal         func_247000
label_2e66dc:
    if (ctx->pc == 0x2E66DCu) {
        ctx->pc = 0x2E66E0u;
        goto label_2e66e0;
    }
    ctx->pc = 0x2E66D8u;
    SET_GPR_U32(ctx, 31, 0x2E66E0u);
    ctx->pc = 0x247000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x247000u, 0x2E66D8u, 0x2E66E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E66E0u;
label_2e66e0:
    // 0x2e66e0: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x2e66e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
label_2e66e4:
    // 0x2e66e4: 0x10400040  beqz        $v0, . + 4 + (0x40 << 2)
label_2e66e8:
    if (ctx->pc == 0x2E66E8u) {
        ctx->pc = 0x2E66ECu;
        goto label_2e66ec;
    }
    ctx->pc = 0x2E66E4u;
    {
        const bool branch_taken_0x2e66e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e66e4) {
            ctx->pc = 0x2E67E8u;
            goto label_2e67e8;
        }
    }
    ctx->pc = 0x2E66ECu;
label_2e66ec:
    // 0x2e66ec: 0x8f82bbb4  lw          $v0, -0x444C($gp)
    ctx->pc = 0x2e66ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
label_2e66f0:
    // 0x2e66f0: 0x90420028  lbu         $v0, 0x28($v0)
    ctx->pc = 0x2e66f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 40)));
label_2e66f4:
    // 0x2e66f4: 0x1440003c  bnez        $v0, . + 4 + (0x3C << 2)
label_2e66f8:
    if (ctx->pc == 0x2E66F8u) {
        ctx->pc = 0x2E66FCu;
        goto label_2e66fc;
    }
    ctx->pc = 0x2E66F4u;
    {
        const bool branch_taken_0x2e66f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e66f4) {
            ctx->pc = 0x2E67E8u;
            goto label_2e67e8;
        }
    }
    ctx->pc = 0x2E66FCu;
label_2e66fc:
    // 0x2e66fc: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x2e66fcu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e6700:
    // 0x2e6700: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x2e6700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
label_2e6704:
    // 0x2e6704: 0x24440024  addiu       $a0, $v0, 0x24
    ctx->pc = 0x2e6704u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 36));
label_2e6708:
    // 0x2e6708: 0xc0b9a28  jal         func_2E68A0
label_2e670c:
    if (ctx->pc == 0x2E670Cu) {
        ctx->pc = 0x2E6710u;
        goto label_2e6710;
    }
    ctx->pc = 0x2E6708u;
    SET_GPR_U32(ctx, 31, 0x2E6710u);
    ctx->pc = 0x2E68A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E68A0u, 0x2E6708u, 0x2E6710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6710u;
label_2e6710:
    // 0x2e6710: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2e6710u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e6714:
    // 0x2e6714: 0x10000018  b           . + 4 + (0x18 << 2)
label_2e6718:
    if (ctx->pc == 0x2E6718u) {
        ctx->pc = 0x2E671Cu;
        goto label_2e671c;
    }
    ctx->pc = 0x2E6714u;
    {
        const bool branch_taken_0x2e6714 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e6714) {
            ctx->pc = 0x2E6778u;
            goto label_2e6778;
        }
    }
    ctx->pc = 0x2E671Cu;
label_2e671c:
    // 0x2e671c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2e671cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2e6720:
    // 0x2e6720: 0x24560020  addiu       $s6, $v0, 0x20
    ctx->pc = 0x2e6720u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
label_2e6724:
    // 0x2e6724: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2e6724u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2e6728:
    // 0x2e6728: 0xc0b9a18  jal         func_2E6860
label_2e672c:
    if (ctx->pc == 0x2E672Cu) {
        ctx->pc = 0x2E6730u;
        goto label_2e6730;
    }
    ctx->pc = 0x2E6728u;
    SET_GPR_U32(ctx, 31, 0x2E6730u);
    ctx->pc = 0x2E6860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E6860u, 0x2E6728u, 0x2E6730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6730u;
label_2e6730:
    // 0x2e6730: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2e6730u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e6734:
    // 0x2e6734: 0x1000000a  b           . + 4 + (0xA << 2)
label_2e6738:
    if (ctx->pc == 0x2E6738u) {
        ctx->pc = 0x2E673Cu;
        goto label_2e673c;
    }
    ctx->pc = 0x2E6734u;
    {
        const bool branch_taken_0x2e6734 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e6734) {
            ctx->pc = 0x2E6760u;
            goto label_2e6760;
        }
    }
    ctx->pc = 0x2E673Cu;
label_2e673c:
    // 0x2e673c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2e673cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2e6740:
    // 0x2e6740: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x2e6740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
label_2e6744:
    // 0x2e6744: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_2e6748:
    if (ctx->pc == 0x2E6748u) {
        ctx->pc = 0x2E674Cu;
        goto label_2e674c;
    }
    ctx->pc = 0x2E6744u;
    {
        const bool branch_taken_0x2e6744 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2e6744) {
            ctx->pc = 0x2E675Cu;
            goto label_2e675c;
        }
    }
    ctx->pc = 0x2E674Cu;
label_2e674c:
    // 0x2e674c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e674cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e6750:
    // 0x2e6750: 0x305700ff  andi        $s7, $v0, 0xFF
    ctx->pc = 0x2e6750u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2e6754:
    // 0x2e6754: 0x10000007  b           . + 4 + (0x7 << 2)
label_2e6758:
    if (ctx->pc == 0x2E6758u) {
        ctx->pc = 0x2E675Cu;
        goto label_2e675c;
    }
    ctx->pc = 0x2E6754u;
    {
        const bool branch_taken_0x2e6754 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e6754) {
            ctx->pc = 0x2E6774u;
            goto label_2e6774;
        }
    }
    ctx->pc = 0x2E675Cu;
label_2e675c:
    // 0x2e675c: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x2e675cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_2e6760:
    // 0x2e6760: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2e6760u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2e6764:
    // 0x2e6764: 0xc0b9a10  jal         func_2E6840
label_2e6768:
    if (ctx->pc == 0x2E6768u) {
        ctx->pc = 0x2E676Cu;
        goto label_2e676c;
    }
    ctx->pc = 0x2E6764u;
    SET_GPR_U32(ctx, 31, 0x2E676Cu);
    ctx->pc = 0x2E6840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E6840u, 0x2E6764u, 0x2E676Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E676Cu;
label_2e676c:
    // 0x2e676c: 0x1622fff3  bne         $s1, $v0, . + 4 + (-0xD << 2)
label_2e6770:
    if (ctx->pc == 0x2E6770u) {
        ctx->pc = 0x2E6774u;
        goto label_2e6774;
    }
    ctx->pc = 0x2E676Cu;
    {
        const bool branch_taken_0x2e676c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x2e676c) {
            ctx->pc = 0x2E673Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e673c;
        }
    }
    ctx->pc = 0x2E6774u;
label_2e6774:
    // 0x2e6774: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x2e6774u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_2e6778:
    // 0x2e6778: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x2e6778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
label_2e677c:
    // 0x2e677c: 0x24440024  addiu       $a0, $v0, 0x24
    ctx->pc = 0x2e677cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 36));
label_2e6780:
    // 0x2e6780: 0xc0b9a20  jal         func_2E6880
label_2e6784:
    if (ctx->pc == 0x2E6784u) {
        ctx->pc = 0x2E6788u;
        goto label_2e6788;
    }
    ctx->pc = 0x2E6780u;
    SET_GPR_U32(ctx, 31, 0x2E6788u);
    ctx->pc = 0x2E6880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E6880u, 0x2E6780u, 0x2E6788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6788u;
label_2e6788:
    // 0x2e6788: 0x1642ffe4  bne         $s2, $v0, . + 4 + (-0x1C << 2)
label_2e678c:
    if (ctx->pc == 0x2E678Cu) {
        ctx->pc = 0x2E6790u;
        goto label_2e6790;
    }
    ctx->pc = 0x2E6788u;
    {
        const bool branch_taken_0x2e6788 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x2e6788) {
            ctx->pc = 0x2E671Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e671c;
        }
    }
    ctx->pc = 0x2E6790u;
label_2e6790:
    // 0x2e6790: 0x8f84bbb4  lw          $a0, -0x444C($gp)
    ctx->pc = 0x2e6790u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
label_2e6794:
    // 0x2e6794: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e6794u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e6798:
    // 0x2e6798: 0xc08d95c  jal         func_236570
label_2e679c:
    if (ctx->pc == 0x2E679Cu) {
        ctx->pc = 0x2E67A0u;
        goto label_2e67a0;
    }
    ctx->pc = 0x2E6798u;
    SET_GPR_U32(ctx, 31, 0x2E67A0u);
    ctx->pc = 0x236570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236570u, 0x2E6798u, 0x2E67A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E67A0u;
label_2e67a0:
    // 0x2e67a0: 0xafa200f8  sw          $v0, 0xF8($sp)
    ctx->pc = 0x2e67a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 2));
label_2e67a4:
    // 0x2e67a4: 0x16e00010  bnez        $s7, . + 4 + (0x10 << 2)
label_2e67a8:
    if (ctx->pc == 0x2E67A8u) {
        ctx->pc = 0x2E67ACu;
        goto label_2e67ac;
    }
    ctx->pc = 0x2E67A4u;
    {
        const bool branch_taken_0x2e67a4 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e67a4) {
            ctx->pc = 0x2E67E8u;
            goto label_2e67e8;
        }
    }
    ctx->pc = 0x2E67ACu;
label_2e67ac:
    // 0x2e67ac: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x2e67acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
label_2e67b0:
    // 0x2e67b0: 0x24020015  addiu       $v0, $zero, 0x15
    ctx->pc = 0x2e67b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_2e67b4:
    // 0x2e67b4: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
label_2e67b8:
    if (ctx->pc == 0x2E67B8u) {
        ctx->pc = 0x2E67BCu;
        goto label_2e67bc;
    }
    ctx->pc = 0x2E67B4u;
    {
        const bool branch_taken_0x2e67b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e67b4) {
            ctx->pc = 0x2E67E8u;
            goto label_2e67e8;
        }
    }
    ctx->pc = 0x2E67BCu;
label_2e67bc:
    // 0x2e67bc: 0xafa00128  sw          $zero, 0x128($sp)
    ctx->pc = 0x2e67bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 296), GPR_U32(ctx, 0));
label_2e67c0:
    // 0x2e67c0: 0x8f84bbb4  lw          $a0, -0x444C($gp)
    ctx->pc = 0x2e67c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
label_2e67c4:
    // 0x2e67c4: 0xc050ed8  jal         func_143B60
label_2e67c8:
    if (ctx->pc == 0x2E67C8u) {
        ctx->pc = 0x2E67CCu;
        goto label_2e67cc;
    }
    ctx->pc = 0x2E67C4u;
    SET_GPR_U32(ctx, 31, 0x2E67CCu);
    ctx->pc = 0x143B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143B60u, 0x2E67C4u, 0x2E67CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E67CCu;
label_2e67cc:
    // 0x2e67cc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2e67ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e67d0:
    // 0x2e67d0: 0x2405054d  addiu       $a1, $zero, 0x54D
    ctx->pc = 0x2e67d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1357));
label_2e67d4:
    // 0x2e67d4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2e67d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e67d8:
    // 0x2e67d8: 0xc040924  jal         func_102490
label_2e67dc:
    if (ctx->pc == 0x2E67DCu) {
        ctx->pc = 0x2E67E0u;
        goto label_2e67e0;
    }
    ctx->pc = 0x2E67D8u;
    SET_GPR_U32(ctx, 31, 0x2E67E0u);
    ctx->pc = 0x102490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102490u, 0x2E67D8u, 0x2E67E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E67E0u;
label_2e67e0:
    // 0x2e67e0: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x2e67e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
label_2e67e4:
    // 0x2e67e4: 0xa0400020  sb          $zero, 0x20($v0)
    ctx->pc = 0x2e67e4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 32), (uint8_t)GPR_U32(ctx, 0));
label_2e67e8:
    // 0x2e67e8: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x2e67e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
label_2e67ec:
    // 0x2e67ec: 0xa0400021  sb          $zero, 0x21($v0)
    ctx->pc = 0x2e67ecu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 33), (uint8_t)GPR_U32(ctx, 0));
label_2e67f0:
    // 0x2e67f0: 0x27a400e8  addiu       $a0, $sp, 0xE8
    ctx->pc = 0x2e67f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
label_2e67f4:
    // 0x2e67f4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2e67f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2e67f8:
    // 0x2e67f8: 0xc0402d4  jal         func_100B50
label_2e67fc:
    if (ctx->pc == 0x2E67FCu) {
        ctx->pc = 0x2E6800u;
        goto label_2e6800;
    }
    ctx->pc = 0x2E67F8u;
    SET_GPR_U32(ctx, 31, 0x2E6800u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x2E67F8u, 0x2E6800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6800u;
label_2e6800:
    // 0x2e6800: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2e6800u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_2e6804:
    // 0x2e6804: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x2e6804u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2e6808:
    // 0x2e6808: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x2e6808u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2e680c:
    // 0x2e680c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2e680cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2e6810:
    // 0x2e6810: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2e6810u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2e6814:
    // 0x2e6814: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2e6814u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2e6818:
    // 0x2e6818: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2e6818u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2e681c:
    // 0x2e681c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2e681cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2e6820:
    // 0x2e6820: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2e6820u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2e6824:
    // 0x2e6824: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e6824u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2e6828:
    // 0x2e6828: 0x27bd0150  addiu       $sp, $sp, 0x150
    ctx->pc = 0x2e6828u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_2e682c:
    // 0x2e682c: 0x3e00008  jr          $ra
label_2e6830:
    if (ctx->pc == 0x2E6830u) {
        ctx->pc = 0x2E6834u;
        goto label_2e6834;
    }
    ctx->pc = 0x2E682Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E682Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E6834u;
label_2e6834:
    // 0x2e6834: 0x0  nop
    ctx->pc = 0x2e6834u;
    // NOP
label_2e6838:
    // 0x2e6838: 0x0  nop
    ctx->pc = 0x2e6838u;
    // NOP
label_2e683c:
    // 0x2e683c: 0x0  nop
    ctx->pc = 0x2e683cu;
    // NOP
    ctx->pc = 0x2e6840u;
}
