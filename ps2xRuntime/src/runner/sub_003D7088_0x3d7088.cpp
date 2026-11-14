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

// Function: sub_003D7088
// Address: 0x3d7088 - 0x3d7638
void sub_003D7088_0x3d7088(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D7088_0x3d7088");
#endif

    switch (ctx->pc) {
        case 0x3d7088u: goto label_3d7088;
        case 0x3d708cu: goto label_3d708c;
        case 0x3d7090u: goto label_3d7090;
        case 0x3d7094u: goto label_3d7094;
        case 0x3d7098u: goto label_3d7098;
        case 0x3d709cu: goto label_3d709c;
        case 0x3d70a0u: goto label_3d70a0;
        case 0x3d70a4u: goto label_3d70a4;
        case 0x3d70a8u: goto label_3d70a8;
        case 0x3d70acu: goto label_3d70ac;
        case 0x3d70b0u: goto label_3d70b0;
        case 0x3d70b4u: goto label_3d70b4;
        case 0x3d70b8u: goto label_3d70b8;
        case 0x3d70bcu: goto label_3d70bc;
        case 0x3d70c0u: goto label_3d70c0;
        case 0x3d70c4u: goto label_3d70c4;
        case 0x3d70c8u: goto label_3d70c8;
        case 0x3d70ccu: goto label_3d70cc;
        case 0x3d70d0u: goto label_3d70d0;
        case 0x3d70d4u: goto label_3d70d4;
        case 0x3d70d8u: goto label_3d70d8;
        case 0x3d70dcu: goto label_3d70dc;
        case 0x3d70e0u: goto label_3d70e0;
        case 0x3d70e4u: goto label_3d70e4;
        case 0x3d70e8u: goto label_3d70e8;
        case 0x3d70ecu: goto label_3d70ec;
        case 0x3d70f0u: goto label_3d70f0;
        case 0x3d70f4u: goto label_3d70f4;
        case 0x3d70f8u: goto label_3d70f8;
        case 0x3d70fcu: goto label_3d70fc;
        case 0x3d7100u: goto label_3d7100;
        case 0x3d7104u: goto label_3d7104;
        case 0x3d7108u: goto label_3d7108;
        case 0x3d710cu: goto label_3d710c;
        case 0x3d7110u: goto label_3d7110;
        case 0x3d7114u: goto label_3d7114;
        case 0x3d7118u: goto label_3d7118;
        case 0x3d711cu: goto label_3d711c;
        case 0x3d7120u: goto label_3d7120;
        case 0x3d7124u: goto label_3d7124;
        case 0x3d7128u: goto label_3d7128;
        case 0x3d712cu: goto label_3d712c;
        case 0x3d7130u: goto label_3d7130;
        case 0x3d7134u: goto label_3d7134;
        case 0x3d7138u: goto label_3d7138;
        case 0x3d713cu: goto label_3d713c;
        case 0x3d7140u: goto label_3d7140;
        case 0x3d7144u: goto label_3d7144;
        case 0x3d7148u: goto label_3d7148;
        case 0x3d714cu: goto label_3d714c;
        case 0x3d7150u: goto label_3d7150;
        case 0x3d7154u: goto label_3d7154;
        case 0x3d7158u: goto label_3d7158;
        case 0x3d715cu: goto label_3d715c;
        case 0x3d7160u: goto label_3d7160;
        case 0x3d7164u: goto label_3d7164;
        case 0x3d7168u: goto label_3d7168;
        case 0x3d716cu: goto label_3d716c;
        case 0x3d7170u: goto label_3d7170;
        case 0x3d7174u: goto label_3d7174;
        case 0x3d7178u: goto label_3d7178;
        case 0x3d717cu: goto label_3d717c;
        case 0x3d7180u: goto label_3d7180;
        case 0x3d7184u: goto label_3d7184;
        case 0x3d7188u: goto label_3d7188;
        case 0x3d718cu: goto label_3d718c;
        case 0x3d7190u: goto label_3d7190;
        case 0x3d7194u: goto label_3d7194;
        case 0x3d7198u: goto label_3d7198;
        case 0x3d719cu: goto label_3d719c;
        case 0x3d71a0u: goto label_3d71a0;
        case 0x3d71a4u: goto label_3d71a4;
        case 0x3d71a8u: goto label_3d71a8;
        case 0x3d71acu: goto label_3d71ac;
        case 0x3d71b0u: goto label_3d71b0;
        case 0x3d71b4u: goto label_3d71b4;
        case 0x3d71b8u: goto label_3d71b8;
        case 0x3d71bcu: goto label_3d71bc;
        case 0x3d71c0u: goto label_3d71c0;
        case 0x3d71c4u: goto label_3d71c4;
        case 0x3d71c8u: goto label_3d71c8;
        case 0x3d71ccu: goto label_3d71cc;
        case 0x3d71d0u: goto label_3d71d0;
        case 0x3d71d4u: goto label_3d71d4;
        case 0x3d71d8u: goto label_3d71d8;
        case 0x3d71dcu: goto label_3d71dc;
        case 0x3d71e0u: goto label_3d71e0;
        case 0x3d71e4u: goto label_3d71e4;
        case 0x3d71e8u: goto label_3d71e8;
        case 0x3d71ecu: goto label_3d71ec;
        case 0x3d71f0u: goto label_3d71f0;
        case 0x3d71f4u: goto label_3d71f4;
        case 0x3d71f8u: goto label_3d71f8;
        case 0x3d71fcu: goto label_3d71fc;
        case 0x3d7200u: goto label_3d7200;
        case 0x3d7204u: goto label_3d7204;
        case 0x3d7208u: goto label_3d7208;
        case 0x3d720cu: goto label_3d720c;
        case 0x3d7210u: goto label_3d7210;
        case 0x3d7214u: goto label_3d7214;
        case 0x3d7218u: goto label_3d7218;
        case 0x3d721cu: goto label_3d721c;
        case 0x3d7220u: goto label_3d7220;
        case 0x3d7224u: goto label_3d7224;
        case 0x3d7228u: goto label_3d7228;
        case 0x3d722cu: goto label_3d722c;
        case 0x3d7230u: goto label_3d7230;
        case 0x3d7234u: goto label_3d7234;
        case 0x3d7238u: goto label_3d7238;
        case 0x3d723cu: goto label_3d723c;
        case 0x3d7240u: goto label_3d7240;
        case 0x3d7244u: goto label_3d7244;
        case 0x3d7248u: goto label_3d7248;
        case 0x3d724cu: goto label_3d724c;
        case 0x3d7250u: goto label_3d7250;
        case 0x3d7254u: goto label_3d7254;
        case 0x3d7258u: goto label_3d7258;
        case 0x3d725cu: goto label_3d725c;
        case 0x3d7260u: goto label_3d7260;
        case 0x3d7264u: goto label_3d7264;
        case 0x3d7268u: goto label_3d7268;
        case 0x3d726cu: goto label_3d726c;
        case 0x3d7270u: goto label_3d7270;
        case 0x3d7274u: goto label_3d7274;
        case 0x3d7278u: goto label_3d7278;
        case 0x3d727cu: goto label_3d727c;
        case 0x3d7280u: goto label_3d7280;
        case 0x3d7284u: goto label_3d7284;
        case 0x3d7288u: goto label_3d7288;
        case 0x3d728cu: goto label_3d728c;
        case 0x3d7290u: goto label_3d7290;
        case 0x3d7294u: goto label_3d7294;
        case 0x3d7298u: goto label_3d7298;
        case 0x3d729cu: goto label_3d729c;
        case 0x3d72a0u: goto label_3d72a0;
        case 0x3d72a4u: goto label_3d72a4;
        case 0x3d72a8u: goto label_3d72a8;
        case 0x3d72acu: goto label_3d72ac;
        case 0x3d72b0u: goto label_3d72b0;
        case 0x3d72b4u: goto label_3d72b4;
        case 0x3d72b8u: goto label_3d72b8;
        case 0x3d72bcu: goto label_3d72bc;
        case 0x3d72c0u: goto label_3d72c0;
        case 0x3d72c4u: goto label_3d72c4;
        case 0x3d72c8u: goto label_3d72c8;
        case 0x3d72ccu: goto label_3d72cc;
        case 0x3d72d0u: goto label_3d72d0;
        case 0x3d72d4u: goto label_3d72d4;
        case 0x3d72d8u: goto label_3d72d8;
        case 0x3d72dcu: goto label_3d72dc;
        case 0x3d72e0u: goto label_3d72e0;
        case 0x3d72e4u: goto label_3d72e4;
        case 0x3d72e8u: goto label_3d72e8;
        case 0x3d72ecu: goto label_3d72ec;
        case 0x3d72f0u: goto label_3d72f0;
        case 0x3d72f4u: goto label_3d72f4;
        case 0x3d72f8u: goto label_3d72f8;
        case 0x3d72fcu: goto label_3d72fc;
        case 0x3d7300u: goto label_3d7300;
        case 0x3d7304u: goto label_3d7304;
        case 0x3d7308u: goto label_3d7308;
        case 0x3d730cu: goto label_3d730c;
        case 0x3d7310u: goto label_3d7310;
        case 0x3d7314u: goto label_3d7314;
        case 0x3d7318u: goto label_3d7318;
        case 0x3d731cu: goto label_3d731c;
        case 0x3d7320u: goto label_3d7320;
        case 0x3d7324u: goto label_3d7324;
        case 0x3d7328u: goto label_3d7328;
        case 0x3d732cu: goto label_3d732c;
        case 0x3d7330u: goto label_3d7330;
        case 0x3d7334u: goto label_3d7334;
        case 0x3d7338u: goto label_3d7338;
        case 0x3d733cu: goto label_3d733c;
        case 0x3d7340u: goto label_3d7340;
        case 0x3d7344u: goto label_3d7344;
        case 0x3d7348u: goto label_3d7348;
        case 0x3d734cu: goto label_3d734c;
        case 0x3d7350u: goto label_3d7350;
        case 0x3d7354u: goto label_3d7354;
        case 0x3d7358u: goto label_3d7358;
        case 0x3d735cu: goto label_3d735c;
        case 0x3d7360u: goto label_3d7360;
        case 0x3d7364u: goto label_3d7364;
        case 0x3d7368u: goto label_3d7368;
        case 0x3d736cu: goto label_3d736c;
        case 0x3d7370u: goto label_3d7370;
        case 0x3d7374u: goto label_3d7374;
        case 0x3d7378u: goto label_3d7378;
        case 0x3d737cu: goto label_3d737c;
        case 0x3d7380u: goto label_3d7380;
        case 0x3d7384u: goto label_3d7384;
        case 0x3d7388u: goto label_3d7388;
        case 0x3d738cu: goto label_3d738c;
        case 0x3d7390u: goto label_3d7390;
        case 0x3d7394u: goto label_3d7394;
        case 0x3d7398u: goto label_3d7398;
        case 0x3d739cu: goto label_3d739c;
        case 0x3d73a0u: goto label_3d73a0;
        case 0x3d73a4u: goto label_3d73a4;
        case 0x3d73a8u: goto label_3d73a8;
        case 0x3d73acu: goto label_3d73ac;
        case 0x3d73b0u: goto label_3d73b0;
        case 0x3d73b4u: goto label_3d73b4;
        case 0x3d73b8u: goto label_3d73b8;
        case 0x3d73bcu: goto label_3d73bc;
        case 0x3d73c0u: goto label_3d73c0;
        case 0x3d73c4u: goto label_3d73c4;
        case 0x3d73c8u: goto label_3d73c8;
        case 0x3d73ccu: goto label_3d73cc;
        case 0x3d73d0u: goto label_3d73d0;
        case 0x3d73d4u: goto label_3d73d4;
        case 0x3d73d8u: goto label_3d73d8;
        case 0x3d73dcu: goto label_3d73dc;
        case 0x3d73e0u: goto label_3d73e0;
        case 0x3d73e4u: goto label_3d73e4;
        case 0x3d73e8u: goto label_3d73e8;
        case 0x3d73ecu: goto label_3d73ec;
        case 0x3d73f0u: goto label_3d73f0;
        case 0x3d73f4u: goto label_3d73f4;
        case 0x3d73f8u: goto label_3d73f8;
        case 0x3d73fcu: goto label_3d73fc;
        case 0x3d7400u: goto label_3d7400;
        case 0x3d7404u: goto label_3d7404;
        case 0x3d7408u: goto label_3d7408;
        case 0x3d740cu: goto label_3d740c;
        case 0x3d7410u: goto label_3d7410;
        case 0x3d7414u: goto label_3d7414;
        case 0x3d7418u: goto label_3d7418;
        case 0x3d741cu: goto label_3d741c;
        case 0x3d7420u: goto label_3d7420;
        case 0x3d7424u: goto label_3d7424;
        case 0x3d7428u: goto label_3d7428;
        case 0x3d742cu: goto label_3d742c;
        case 0x3d7430u: goto label_3d7430;
        case 0x3d7434u: goto label_3d7434;
        case 0x3d7438u: goto label_3d7438;
        case 0x3d743cu: goto label_3d743c;
        case 0x3d7440u: goto label_3d7440;
        case 0x3d7444u: goto label_3d7444;
        case 0x3d7448u: goto label_3d7448;
        case 0x3d744cu: goto label_3d744c;
        case 0x3d7450u: goto label_3d7450;
        case 0x3d7454u: goto label_3d7454;
        case 0x3d7458u: goto label_3d7458;
        case 0x3d745cu: goto label_3d745c;
        case 0x3d7460u: goto label_3d7460;
        case 0x3d7464u: goto label_3d7464;
        case 0x3d7468u: goto label_3d7468;
        case 0x3d746cu: goto label_3d746c;
        case 0x3d7470u: goto label_3d7470;
        case 0x3d7474u: goto label_3d7474;
        case 0x3d7478u: goto label_3d7478;
        case 0x3d747cu: goto label_3d747c;
        case 0x3d7480u: goto label_3d7480;
        case 0x3d7484u: goto label_3d7484;
        case 0x3d7488u: goto label_3d7488;
        case 0x3d748cu: goto label_3d748c;
        case 0x3d7490u: goto label_3d7490;
        case 0x3d7494u: goto label_3d7494;
        case 0x3d7498u: goto label_3d7498;
        case 0x3d749cu: goto label_3d749c;
        case 0x3d74a0u: goto label_3d74a0;
        case 0x3d74a4u: goto label_3d74a4;
        case 0x3d74a8u: goto label_3d74a8;
        case 0x3d74acu: goto label_3d74ac;
        case 0x3d74b0u: goto label_3d74b0;
        case 0x3d74b4u: goto label_3d74b4;
        case 0x3d74b8u: goto label_3d74b8;
        case 0x3d74bcu: goto label_3d74bc;
        case 0x3d74c0u: goto label_3d74c0;
        case 0x3d74c4u: goto label_3d74c4;
        case 0x3d74c8u: goto label_3d74c8;
        case 0x3d74ccu: goto label_3d74cc;
        case 0x3d74d0u: goto label_3d74d0;
        case 0x3d74d4u: goto label_3d74d4;
        case 0x3d74d8u: goto label_3d74d8;
        case 0x3d74dcu: goto label_3d74dc;
        case 0x3d74e0u: goto label_3d74e0;
        case 0x3d74e4u: goto label_3d74e4;
        case 0x3d74e8u: goto label_3d74e8;
        case 0x3d74ecu: goto label_3d74ec;
        case 0x3d74f0u: goto label_3d74f0;
        case 0x3d74f4u: goto label_3d74f4;
        case 0x3d74f8u: goto label_3d74f8;
        case 0x3d74fcu: goto label_3d74fc;
        case 0x3d7500u: goto label_3d7500;
        case 0x3d7504u: goto label_3d7504;
        case 0x3d7508u: goto label_3d7508;
        case 0x3d750cu: goto label_3d750c;
        case 0x3d7510u: goto label_3d7510;
        case 0x3d7514u: goto label_3d7514;
        case 0x3d7518u: goto label_3d7518;
        case 0x3d751cu: goto label_3d751c;
        case 0x3d7520u: goto label_3d7520;
        case 0x3d7524u: goto label_3d7524;
        case 0x3d7528u: goto label_3d7528;
        case 0x3d752cu: goto label_3d752c;
        case 0x3d7530u: goto label_3d7530;
        case 0x3d7534u: goto label_3d7534;
        case 0x3d7538u: goto label_3d7538;
        case 0x3d753cu: goto label_3d753c;
        case 0x3d7540u: goto label_3d7540;
        case 0x3d7544u: goto label_3d7544;
        case 0x3d7548u: goto label_3d7548;
        case 0x3d754cu: goto label_3d754c;
        case 0x3d7550u: goto label_3d7550;
        case 0x3d7554u: goto label_3d7554;
        case 0x3d7558u: goto label_3d7558;
        case 0x3d755cu: goto label_3d755c;
        case 0x3d7560u: goto label_3d7560;
        case 0x3d7564u: goto label_3d7564;
        case 0x3d7568u: goto label_3d7568;
        case 0x3d756cu: goto label_3d756c;
        case 0x3d7570u: goto label_3d7570;
        case 0x3d7574u: goto label_3d7574;
        case 0x3d7578u: goto label_3d7578;
        case 0x3d757cu: goto label_3d757c;
        case 0x3d7580u: goto label_3d7580;
        case 0x3d7584u: goto label_3d7584;
        case 0x3d7588u: goto label_3d7588;
        case 0x3d758cu: goto label_3d758c;
        case 0x3d7590u: goto label_3d7590;
        case 0x3d7594u: goto label_3d7594;
        case 0x3d7598u: goto label_3d7598;
        case 0x3d759cu: goto label_3d759c;
        case 0x3d75a0u: goto label_3d75a0;
        case 0x3d75a4u: goto label_3d75a4;
        case 0x3d75a8u: goto label_3d75a8;
        case 0x3d75acu: goto label_3d75ac;
        case 0x3d75b0u: goto label_3d75b0;
        case 0x3d75b4u: goto label_3d75b4;
        case 0x3d75b8u: goto label_3d75b8;
        case 0x3d75bcu: goto label_3d75bc;
        case 0x3d75c0u: goto label_3d75c0;
        case 0x3d75c4u: goto label_3d75c4;
        case 0x3d75c8u: goto label_3d75c8;
        case 0x3d75ccu: goto label_3d75cc;
        case 0x3d75d0u: goto label_3d75d0;
        case 0x3d75d4u: goto label_3d75d4;
        case 0x3d75d8u: goto label_3d75d8;
        case 0x3d75dcu: goto label_3d75dc;
        case 0x3d75e0u: goto label_3d75e0;
        case 0x3d75e4u: goto label_3d75e4;
        case 0x3d75e8u: goto label_3d75e8;
        case 0x3d75ecu: goto label_3d75ec;
        case 0x3d75f0u: goto label_3d75f0;
        case 0x3d75f4u: goto label_3d75f4;
        case 0x3d75f8u: goto label_3d75f8;
        case 0x3d75fcu: goto label_3d75fc;
        case 0x3d7600u: goto label_3d7600;
        case 0x3d7604u: goto label_3d7604;
        case 0x3d7608u: goto label_3d7608;
        case 0x3d760cu: goto label_3d760c;
        case 0x3d7610u: goto label_3d7610;
        case 0x3d7614u: goto label_3d7614;
        case 0x3d7618u: goto label_3d7618;
        case 0x3d761cu: goto label_3d761c;
        case 0x3d7620u: goto label_3d7620;
        case 0x3d7624u: goto label_3d7624;
        case 0x3d7628u: goto label_3d7628;
        case 0x3d762cu: goto label_3d762c;
        case 0x3d7630u: goto label_3d7630;
        case 0x3d7634u: goto label_3d7634;
        default: break;
    }

    ctx->pc = 0x3d7088u;

label_3d7088:
    // 0x3d7088: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x3d7088u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_3d708c:
    // 0x3d708c: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x3d708cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
label_3d7090:
    // 0x3d7090: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x3d7090u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_3d7094:
    // 0x3d7094: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3d7094u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3d7098:
    // 0x3d7098: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x3d7098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_3d709c:
    // 0x3d709c: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x3d709cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_3d70a0:
    // 0x3d70a0: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x3d70a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
label_3d70a4:
    // 0x3d70a4: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x3d70a4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3d70a8:
    // 0x3d70a8: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x3d70a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
label_3d70ac:
    // 0x3d70ac: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x3d70acu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_3d70b0:
    // 0x3d70b0: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x3d70b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
label_3d70b4:
    // 0x3d70b4: 0x120b02d  daddu       $s6, $t1, $zero
    ctx->pc = 0x3d70b4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_3d70b8:
    // 0x3d70b8: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x3d70b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
label_3d70bc:
    // 0x3d70bc: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x3d70bcu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3d70c0:
    // 0x3d70c0: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x3d70c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
label_3d70c4:
    // 0x3d70c4: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x3d70c4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3d70c8:
    // 0x3d70c8: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x3d70c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
label_3d70cc:
    // 0x3d70cc: 0x11400009  beqz        $t2, . + 4 + (0x9 << 2)
label_3d70d0:
    if (ctx->pc == 0x3D70D0u) {
        ctx->pc = 0x3D70D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D70CCu;
        // 0x3d70d0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D70D4u;
        goto label_3d70d4;
    }
    ctx->pc = 0x3D70CCu;
    {
        const bool branch_taken_0x3d70cc = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D70D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D70CCu;
        // 0x3d70d0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d70cc) {
            ctx->pc = 0x3D70F4u;
            goto label_3d70f4;
        }
    }
    ctx->pc = 0x3D70D4u;
label_3d70d4:
    // 0x3d70d4: 0x8f82ac08  lw          $v0, -0x53F8($gp)
    ctx->pc = 0x3d70d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945800)));
label_3d70d8:
    // 0x3d70d8: 0x81440000  lb          $a0, 0x0($t2)
    ctx->pc = 0x3d70d8u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
label_3d70dc:
    // 0x3d70dc: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x3d70dcu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_3d70e0:
    // 0x3d70e0: 0x1483008b  bne         $a0, $v1, . + 4 + (0x8B << 2)
label_3d70e4:
    if (ctx->pc == 0x3D70E4u) {
        ctx->pc = 0x3D70E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D70E0u;
        // 0x3d70e4: 0x2402fffa  addiu       $v0, $zero, -0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967290));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D70E8u;
        goto label_3d70e8;
    }
    ctx->pc = 0x3D70E0u;
    {
        const bool branch_taken_0x3d70e0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x3D70E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D70E0u;
        // 0x3d70e4: 0x2402fffa  addiu       $v0, $zero, -0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967290));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d70e0) {
            ctx->pc = 0x3D7310u;
            goto label_3d7310;
        }
    }
    ctx->pc = 0x3D70E8u;
label_3d70e8:
    // 0x3d70e8: 0x24020048  addiu       $v0, $zero, 0x48
    ctx->pc = 0x3d70e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
label_3d70ec:
    // 0x3d70ec: 0x11620003  beq         $t3, $v0, . + 4 + (0x3 << 2)
label_3d70f0:
    if (ctx->pc == 0x3D70F0u) {
        ctx->pc = 0x3D70F4u;
        goto label_3d70f4;
    }
    ctx->pc = 0x3D70ECu;
    {
        const bool branch_taken_0x3d70ec = (GPR_U64(ctx, 11) == GPR_U64(ctx, 2));
        if (branch_taken_0x3d70ec) {
            ctx->pc = 0x3D70FCu;
            goto label_3d70fc;
        }
    }
    ctx->pc = 0x3D70F4u;
label_3d70f4:
    // 0x3d70f4: 0x10000086  b           . + 4 + (0x86 << 2)
label_3d70f8:
    if (ctx->pc == 0x3D70F8u) {
        ctx->pc = 0x3D70F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D70F4u;
        // 0x3d70f8: 0x2402fffa  addiu       $v0, $zero, -0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967290));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D70FCu;
        goto label_3d70fc;
    }
    ctx->pc = 0x3D70F4u;
    {
        const bool branch_taken_0x3d70f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D70F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D70F4u;
        // 0x3d70f8: 0x2402fffa  addiu       $v0, $zero, -0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967290));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d70f4) {
            ctx->pc = 0x3D7310u;
            goto label_3d7310;
        }
    }
    ctx->pc = 0x3D70FCu;
label_3d70fc:
    // 0x3d70fc: 0x12400084  beqz        $s2, . + 4 + (0x84 << 2)
label_3d7100:
    if (ctx->pc == 0x3D7100u) {
        ctx->pc = 0x3D7100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D70FCu;
        // 0x3d7100: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7104u;
        goto label_3d7104;
    }
    ctx->pc = 0x3D70FCu;
    {
        const bool branch_taken_0x3d70fc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D7100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D70FCu;
        // 0x3d7100: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d70fc) {
            ctx->pc = 0x3D7310u;
            goto label_3d7310;
        }
    }
    ctx->pc = 0x3D7104u;
label_3d7104:
    // 0x3d7104: 0x8e420028  lw          $v0, 0x28($s2)
    ctx->pc = 0x3d7104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
label_3d7108:
    // 0x3d7108: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_3d710c:
    if (ctx->pc == 0x3D710Cu) {
        ctx->pc = 0x3D710Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7108u;
        // 0x3d710c: 0xae400020  sw          $zero, 0x20($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7110u;
        goto label_3d7110;
    }
    ctx->pc = 0x3D7108u;
    {
        const bool branch_taken_0x3d7108 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D710Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7108u;
        // 0x3d710c: 0xae400020  sw          $zero, 0x20($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d7108) {
            ctx->pc = 0x3D7120u;
            goto label_3d7120;
        }
    }
    ctx->pc = 0x3D7110u;
label_3d7110:
    // 0x3d7110: 0x3c02003e  lui         $v0, 0x3E
    ctx->pc = 0x3d7110u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
label_3d7114:
    // 0x3d7114: 0xae400030  sw          $zero, 0x30($s2)
    ctx->pc = 0x3d7114u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 0));
label_3d7118:
    // 0x3d7118: 0x2442c5b0  addiu       $v0, $v0, -0x3A50
    ctx->pc = 0x3d7118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952368));
label_3d711c:
    // 0x3d711c: 0xae420028  sw          $v0, 0x28($s2)
    ctx->pc = 0x3d711cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 2));
label_3d7120:
    // 0x3d7120: 0x8e42002c  lw          $v0, 0x2C($s2)
    ctx->pc = 0x3d7120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
label_3d7124:
    // 0x3d7124: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_3d7128:
    if (ctx->pc == 0x3D7128u) {
        ctx->pc = 0x3D7128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7124u;
        // 0x3d7128: 0x24030006  addiu       $v1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D712Cu;
        goto label_3d712c;
    }
    ctx->pc = 0x3D7124u;
    {
        const bool branch_taken_0x3d7124 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D7128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7124u;
        // 0x3d7128: 0x24030006  addiu       $v1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d7124) {
            ctx->pc = 0x3D7138u;
            goto label_3d7138;
        }
    }
    ctx->pc = 0x3D712Cu;
label_3d712c:
    // 0x3d712c: 0x3c02003e  lui         $v0, 0x3E
    ctx->pc = 0x3d712cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
label_3d7130:
    // 0x3d7130: 0x2442c5d0  addiu       $v0, $v0, -0x3A30
    ctx->pc = 0x3d7130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952400));
label_3d7134:
    // 0x3d7134: 0xae42002c  sw          $v0, 0x2C($s2)
    ctx->pc = 0x3d7134u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 2));
label_3d7138:
    // 0x3d7138: 0x141027  nor         $v0, $zero, $s4
    ctx->pc = 0x3d7138u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 20)));
label_3d713c:
    // 0x3d713c: 0x6610003  bgez        $s3, . + 4 + (0x3 << 2)
label_3d7140:
    if (ctx->pc == 0x3D7140u) {
        ctx->pc = 0x3D7140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D713Cu;
        // 0x3d7140: 0x62a00a  movz        $s4, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7144u;
        goto label_3d7144;
    }
    ctx->pc = 0x3D713Cu;
    {
        const bool branch_taken_0x3d713c = (GPR_S32(ctx, 19) >= 0);
        ctx->pc = 0x3D7140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D713Cu;
        // 0x3d7140: 0x62a00a  movz        $s4, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d713c) {
            ctx->pc = 0x3D714Cu;
            goto label_3d714c;
        }
    }
    ctx->pc = 0x3D7144u;
label_3d7144:
    // 0x3d7144: 0x241e0001  addiu       $fp, $zero, 0x1
    ctx->pc = 0x3d7144u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3d7148:
    // 0x3d7148: 0x139823  negu        $s3, $s3
    ctx->pc = 0x3d7148u;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 19)));
label_3d714c:
    // 0x3d714c: 0x26a2ffff  addiu       $v0, $s5, -0x1
    ctx->pc = 0x3d714cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
label_3d7150:
    // 0x3d7150: 0x2c420009  sltiu       $v0, $v0, 0x9
    ctx->pc = 0x3d7150u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
label_3d7154:
    // 0x3d7154: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_3d7158:
    if (ctx->pc == 0x3D7158u) {
        ctx->pc = 0x3D7158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7154u;
        // 0x3d7158: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D715Cu;
        goto label_3d715c;
    }
    ctx->pc = 0x3D7154u;
    {
        const bool branch_taken_0x3d7154 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D7158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7154u;
        // 0x3d7158: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d7154) {
            ctx->pc = 0x3D719Cu;
            goto label_3d719c;
        }
    }
    ctx->pc = 0x3D715Cu;
label_3d715c:
    // 0x3d715c: 0x16e2006c  bne         $s7, $v0, . + 4 + (0x6C << 2)
label_3d7160:
    if (ctx->pc == 0x3D7160u) {
        ctx->pc = 0x3D7160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D715Cu;
        // 0x3d7160: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7164u;
        goto label_3d7164;
    }
    ctx->pc = 0x3D715Cu;
    {
        const bool branch_taken_0x3d715c = (GPR_U64(ctx, 23) != GPR_U64(ctx, 2));
        ctx->pc = 0x3D7160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D715Cu;
        // 0x3d7160: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d715c) {
            ctx->pc = 0x3D7310u;
            goto label_3d7310;
        }
    }
    ctx->pc = 0x3D7164u;
label_3d7164:
    // 0x3d7164: 0x2a620008  slti        $v0, $s3, 0x8
    ctx->pc = 0x3d7164u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)8) ? 1 : 0);
label_3d7168:
    // 0x3d7168: 0x14400069  bnez        $v0, . + 4 + (0x69 << 2)
label_3d716c:
    if (ctx->pc == 0x3D716Cu) {
        ctx->pc = 0x3D716Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7168u;
        // 0x3d716c: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7170u;
        goto label_3d7170;
    }
    ctx->pc = 0x3D7168u;
    {
        const bool branch_taken_0x3d7168 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D716Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7168u;
        // 0x3d716c: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d7168) {
            ctx->pc = 0x3D7310u;
            goto label_3d7310;
        }
    }
    ctx->pc = 0x3D7170u;
label_3d7170:
    // 0x3d7170: 0x2a620010  slti        $v0, $s3, 0x10
    ctx->pc = 0x3d7170u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)16) ? 1 : 0);
label_3d7174:
    // 0x3d7174: 0x10400066  beqz        $v0, . + 4 + (0x66 << 2)
label_3d7178:
    if (ctx->pc == 0x3D7178u) {
        ctx->pc = 0x3D7178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7174u;
        // 0x3d7178: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D717Cu;
        goto label_3d717c;
    }
    ctx->pc = 0x3D7174u;
    {
        const bool branch_taken_0x3d7174 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D7178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7174u;
        // 0x3d7178: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d7174) {
            ctx->pc = 0x3D7310u;
            goto label_3d7310;
        }
    }
    ctx->pc = 0x3D717Cu;
label_3d717c:
    // 0x3d717c: 0x6800007  bltz        $s4, . + 4 + (0x7 << 2)
label_3d7180:
    if (ctx->pc == 0x3D7180u) {
        ctx->pc = 0x3D7180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D717Cu;
        // 0x3d7180: 0x2a82000a  slti        $v0, $s4, 0xA (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)10) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7184u;
        goto label_3d7184;
    }
    ctx->pc = 0x3D717Cu;
    {
        const bool branch_taken_0x3d717c = (GPR_S32(ctx, 20) < 0);
        ctx->pc = 0x3D7180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D717Cu;
        // 0x3d7180: 0x2a82000a  slti        $v0, $s4, 0xA (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)10) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d717c) {
            ctx->pc = 0x3D719Cu;
            goto label_3d719c;
        }
    }
    ctx->pc = 0x3D7184u;
label_3d7184:
    // 0x3d7184: 0x10400062  beqz        $v0, . + 4 + (0x62 << 2)
label_3d7188:
    if (ctx->pc == 0x3D7188u) {
        ctx->pc = 0x3D7188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7184u;
        // 0x3d7188: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D718Cu;
        goto label_3d718c;
    }
    ctx->pc = 0x3D7184u;
    {
        const bool branch_taken_0x3d7184 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D7188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7184u;
        // 0x3d7188: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d7184) {
            ctx->pc = 0x3D7310u;
            goto label_3d7310;
        }
    }
    ctx->pc = 0x3D718Cu;
label_3d718c:
    // 0x3d718c: 0x6c00003  bltz        $s6, . + 4 + (0x3 << 2)
label_3d7190:
    if (ctx->pc == 0x3D7190u) {
        ctx->pc = 0x3D7190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D718Cu;
        // 0x3d7190: 0x2ac20003  slti        $v0, $s6, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7194u;
        goto label_3d7194;
    }
    ctx->pc = 0x3D718Cu;
    {
        const bool branch_taken_0x3d718c = (GPR_S32(ctx, 22) < 0);
        ctx->pc = 0x3D7190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D718Cu;
        // 0x3d7190: 0x2ac20003  slti        $v0, $s6, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d718c) {
            ctx->pc = 0x3D719Cu;
            goto label_3d719c;
        }
    }
    ctx->pc = 0x3D7194u;
label_3d7194:
    // 0x3d7194: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_3d7198:
    if (ctx->pc == 0x3D7198u) {
        ctx->pc = 0x3D7198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7194u;
        // 0x3d7198: 0x8e420028  lw          $v0, 0x28($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D719Cu;
        goto label_3d719c;
    }
    ctx->pc = 0x3D7194u;
    {
        const bool branch_taken_0x3d7194 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d7194) {
            ctx->pc = 0x3D7198u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D7194u;
            // 0x3d7198: 0x8e420028  lw          $v0, 0x28($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D71A4u;
            goto label_3d71a4;
        }
    }
    ctx->pc = 0x3D719Cu;
label_3d719c:
    // 0x3d719c: 0x1000005c  b           . + 4 + (0x5C << 2)
label_3d71a0:
    if (ctx->pc == 0x3D71A0u) {
        ctx->pc = 0x3D71A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D719Cu;
        // 0x3d71a0: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D71A4u;
        goto label_3d71a4;
    }
    ctx->pc = 0x3D719Cu;
    {
        const bool branch_taken_0x3d719c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D71A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D719Cu;
        // 0x3d71a0: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d719c) {
            ctx->pc = 0x3D7310u;
            goto label_3d7310;
        }
    }
    ctx->pc = 0x3D71A4u;
label_3d71a4:
    // 0x3d71a4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3d71a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3d71a8:
    // 0x3d71a8: 0x8e440030  lw          $a0, 0x30($s2)
    ctx->pc = 0x3d71a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
label_3d71ac:
    // 0x3d71ac: 0x40f809  jalr        $v0
label_3d71b0:
    if (ctx->pc == 0x3D71B0u) {
        ctx->pc = 0x3D71B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D71ACu;
        // 0x3d71b0: 0x240616d8  addiu       $a2, $zero, 0x16D8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5848));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D71B4u;
        goto label_3d71b4;
    }
    ctx->pc = 0x3D71ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3D71B4u);
        ctx->pc = 0x3D71B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D71ACu;
        // 0x3d71b0: 0x240616d8  addiu       $a2, $zero, 0x16D8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5848));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D71ACu, 0x3D71B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3D71B4u;
label_3d71b4:
    // 0x3d71b4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3d71b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3d71b8:
    // 0x3d71b8: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
label_3d71bc:
    if (ctx->pc == 0x3D71BCu) {
        ctx->pc = 0x3D71BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D71B8u;
        // 0x3d71bc: 0x24080003  addiu       $t0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D71C0u;
        goto label_3d71c0;
    }
    ctx->pc = 0x3D71B8u;
    {
        const bool branch_taken_0x3d71b8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D71BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D71B8u;
        // 0x3d71bc: 0x24080003  addiu       $t0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d71b8) {
            ctx->pc = 0x3D71C8u;
            goto label_3d71c8;
        }
    }
    ctx->pc = 0x3D71C0u;
label_3d71c0:
    // 0x3d71c0: 0x10000053  b           . + 4 + (0x53 << 2)
label_3d71c4:
    if (ctx->pc == 0x3D71C4u) {
        ctx->pc = 0x3D71C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D71C0u;
        // 0x3d71c4: 0x2402fffc  addiu       $v0, $zero, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D71C8u;
        goto label_3d71c8;
    }
    ctx->pc = 0x3D71C0u;
    {
        const bool branch_taken_0x3d71c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D71C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D71C0u;
        // 0x3d71c4: 0x2402fffc  addiu       $v0, $zero, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d71c0) {
            ctx->pc = 0x3D7310u;
            goto label_3d7310;
        }
    }
    ctx->pc = 0x3D71C8u;
label_3d71c8:
    // 0x3d71c8: 0x26a70009  addiu       $a3, $s5, 0x9
    ctx->pc = 0x3d71c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 21), 9));
label_3d71cc:
    // 0x3d71cc: 0xe8001b  divu        $zero, $a3, $t0
    ctx->pc = 0x3d71ccu;
    { uint32_t divisor = GPR_U32(ctx, 8); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,7); } }
label_3d71d0:
    // 0x3d71d0: 0x26aa0007  addiu       $t2, $s5, 0x7
    ctx->pc = 0x3d71d0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 21), 7));
label_3d71d4:
    // 0x3d71d4: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x3d71d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3d71d8:
    // 0x3d71d8: 0xae2a0058  sw          $t2, 0x58($s1)
    ctx->pc = 0x3d71d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 88), GPR_U32(ctx, 10));
label_3d71dc:
    // 0x3d71dc: 0x1504804  sllv        $t1, $s0, $t2
    ctx->pc = 0x3d71dcu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 10) & 0x1F));
label_3d71e0:
    // 0x3d71e0: 0x2702004  sllv        $a0, $s0, $s3
    ctx->pc = 0x3d71e0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
label_3d71e4:
    // 0x3d71e4: 0x2523ffff  addiu       $v1, $t1, -0x1
    ctx->pc = 0x3d71e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
label_3d71e8:
    // 0x3d71e8: 0x2482ffff  addiu       $v0, $a0, -0x1
    ctx->pc = 0x3d71e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_3d71ec:
    // 0x3d71ec: 0xae290054  sw          $t1, 0x54($s1)
    ctx->pc = 0x3d71ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 9));
label_3d71f0:
    // 0x3d71f0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3d71f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3d71f4:
    // 0x3d71f4: 0xae220034  sw          $v0, 0x34($s1)
    ctx->pc = 0x3d71f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 2));
label_3d71f8:
    // 0x3d71f8: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x3d71f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3d71fc:
    // 0x3d71fc: 0xae23005c  sw          $v1, 0x5C($s1)
    ctx->pc = 0x3d71fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 92), GPR_U32(ctx, 3));
label_3d7200:
    // 0x3d7200: 0xae24002c  sw          $a0, 0x2C($s1)
    ctx->pc = 0x3d7200u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 4));
label_3d7204:
    // 0x3d7204: 0xae3e0020  sw          $fp, 0x20($s1)
    ctx->pc = 0x3d7204u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 30));
label_3d7208:
    // 0x3d7208: 0xae510024  sw          $s1, 0x24($s2)
    ctx->pc = 0x3d7208u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 17));
label_3d720c:
    // 0x3d720c: 0xae320000  sw          $s2, 0x0($s1)
    ctx->pc = 0x3d720cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 18));
label_3d7210:
    // 0x3d7210: 0xae330030  sw          $s3, 0x30($s1)
    ctx->pc = 0x3d7210u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 19));
label_3d7214:
    // 0x3d7214: 0x51000001  beql        $t0, $zero, . + 4 + (0x1 << 2)
label_3d7218:
    if (ctx->pc == 0x3D7218u) {
        ctx->pc = 0x3D7218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7214u;
        // 0x3d7218: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D721Cu;
        goto label_3d721c;
    }
    ctx->pc = 0x3D7214u;
    {
        const bool branch_taken_0x3d7214 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d7214) {
            ctx->pc = 0x3D7218u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D7214u;
            // 0x3d7218: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D721Cu;
            goto label_3d721c;
        }
    }
    ctx->pc = 0x3D721Cu;
label_3d721c:
    // 0x3d721c: 0x8e440030  lw          $a0, 0x30($s2)
    ctx->pc = 0x3d721cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
label_3d7220:
    // 0x3d7220: 0x8e420028  lw          $v0, 0x28($s2)
    ctx->pc = 0x3d7220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
label_3d7224:
    // 0x3d7224: 0x3812  mflo        $a3
    ctx->pc = 0x3d7224u;
    SET_GPR_U64(ctx, 7, ctx->lo);
label_3d7228:
    // 0x3d7228: 0x40f809  jalr        $v0
label_3d722c:
    if (ctx->pc == 0x3D722Cu) {
        ctx->pc = 0x3D722Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7228u;
        // 0x3d722c: 0xae270060  sw          $a3, 0x60($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7230u;
        goto label_3d7230;
    }
    ctx->pc = 0x3D7228u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3D7230u);
        ctx->pc = 0x3D722Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7228u;
        // 0x3d722c: 0xae270060  sw          $a3, 0x60($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D7228u, 0x3D7230u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3D7230u;
label_3d7230:
    // 0x3d7230: 0x8e440030  lw          $a0, 0x30($s2)
    ctx->pc = 0x3d7230u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
label_3d7234:
    // 0x3d7234: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x3d7234u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3d7238:
    // 0x3d7238: 0x8e25002c  lw          $a1, 0x2C($s1)
    ctx->pc = 0x3d7238u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_3d723c:
    // 0x3d723c: 0x8e430028  lw          $v1, 0x28($s2)
    ctx->pc = 0x3d723cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
label_3d7240:
    // 0x3d7240: 0x60f809  jalr        $v1
label_3d7244:
    if (ctx->pc == 0x3D7244u) {
        ctx->pc = 0x3D7244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7240u;
        // 0x3d7244: 0xae220038  sw          $v0, 0x38($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7248u;
        goto label_3d7248;
    }
    ctx->pc = 0x3D7240u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3D7248u);
        ctx->pc = 0x3D7244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7240u;
        // 0x3d7244: 0xae220038  sw          $v0, 0x38($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D7240u, 0x3D7248u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3D7248u;
label_3d7248:
    // 0x3d7248: 0x8e440030  lw          $a0, 0x30($s2)
    ctx->pc = 0x3d7248u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
label_3d724c:
    // 0x3d724c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x3d724cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3d7250:
    // 0x3d7250: 0x8e250054  lw          $a1, 0x54($s1)
    ctx->pc = 0x3d7250u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_3d7254:
    // 0x3d7254: 0x8e430028  lw          $v1, 0x28($s2)
    ctx->pc = 0x3d7254u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
label_3d7258:
    // 0x3d7258: 0x60f809  jalr        $v1
label_3d725c:
    if (ctx->pc == 0x3D725Cu) {
        ctx->pc = 0x3D725Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7258u;
        // 0x3d725c: 0xae220048  sw          $v0, 0x48($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7260u;
        goto label_3d7260;
    }
    ctx->pc = 0x3D7258u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3D7260u);
        ctx->pc = 0x3D725Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7258u;
        // 0x3d725c: 0xae220048  sw          $v0, 0x48($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D7258u, 0x3D7260u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3D7260u;
label_3d7260:
    // 0x3d7260: 0x26a40006  addiu       $a0, $s5, 0x6
    ctx->pc = 0x3d7260u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 6));
label_3d7264:
    // 0x3d7264: 0x8e430028  lw          $v1, 0x28($s2)
    ctx->pc = 0x3d7264u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
label_3d7268:
    // 0x3d7268: 0x908004  sllv        $s0, $s0, $a0
    ctx->pc = 0x3d7268u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 4) & 0x1F));
label_3d726c:
    // 0x3d726c: 0xae22004c  sw          $v0, 0x4C($s1)
    ctx->pc = 0x3d726cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 2));
label_3d7270:
    // 0x3d7270: 0x8e440030  lw          $a0, 0x30($s2)
    ctx->pc = 0x3d7270u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
label_3d7274:
    // 0x3d7274: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3d7274u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3d7278:
    // 0x3d7278: 0xae3016ac  sw          $s0, 0x16AC($s1)
    ctx->pc = 0x3d7278u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5804), GPR_U32(ctx, 16));
label_3d727c:
    // 0x3d727c: 0x60f809  jalr        $v1
label_3d7280:
    if (ctx->pc == 0x3D7280u) {
        ctx->pc = 0x3D7280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D727Cu;
        // 0x3d7280: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7284u;
        goto label_3d7284;
    }
    ctx->pc = 0x3D727Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3D7284u);
        ctx->pc = 0x3D7280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D727Cu;
        // 0x3d7280: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D727Cu, 0x3D7284u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3D7284u;
label_3d7284:
    // 0x3d7284: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3d7284u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3d7288:
    // 0x3d7288: 0x8e230038  lw          $v1, 0x38($s1)
    ctx->pc = 0x3d7288u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
label_3d728c:
    // 0x3d728c: 0x9e2216ac  lwu         $v0, 0x16AC($s1)
    ctx->pc = 0x3d728cu;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 5804)));
label_3d7290:
    // 0x3d7290: 0x8e2416ac  lw          $a0, 0x16AC($s1)
    ctx->pc = 0x3d7290u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5804)));
label_3d7294:
    // 0x3d7294: 0x210b8  dsll        $v0, $v0, 2
    ctx->pc = 0x3d7294u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 2);
label_3d7298:
    // 0x3d7298: 0xae250008  sw          $a1, 0x8($s1)
    ctx->pc = 0x3d7298u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 5));
label_3d729c:
    // 0x3d729c: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
label_3d72a0:
    if (ctx->pc == 0x3D72A0u) {
        ctx->pc = 0x3D72A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D729Cu;
        // 0x3d72a0: 0xfe220010  sd          $v0, 0x10($s1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 17), 16), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D72A4u;
        goto label_3d72a4;
    }
    ctx->pc = 0x3D729Cu;
    {
        const bool branch_taken_0x3d729c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D72A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D729Cu;
        // 0x3d72a0: 0xfe220010  sd          $v0, 0x10($s1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 17), 16), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d729c) {
            ctx->pc = 0x3D72C4u;
            goto label_3d72c4;
        }
    }
    ctx->pc = 0x3D72A4u;
label_3d72a4:
    // 0x3d72a4: 0x8e220048  lw          $v0, 0x48($s1)
    ctx->pc = 0x3d72a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
label_3d72a8:
    // 0x3d72a8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_3d72ac:
    if (ctx->pc == 0x3D72ACu) {
        ctx->pc = 0x3D72ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D72A8u;
        // 0x3d72ac: 0x3c03005e  lui         $v1, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D72B0u;
        goto label_3d72b0;
    }
    ctx->pc = 0x3D72A8u;
    {
        const bool branch_taken_0x3d72a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D72ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D72A8u;
        // 0x3d72ac: 0x3c03005e  lui         $v1, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d72a8) {
            ctx->pc = 0x3D72C8u;
            goto label_3d72c8;
        }
    }
    ctx->pc = 0x3D72B0u;
label_3d72b0:
    // 0x3d72b0: 0x8e22004c  lw          $v0, 0x4C($s1)
    ctx->pc = 0x3d72b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
label_3d72b4:
    // 0x3d72b4: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_3d72b8:
    if (ctx->pc == 0x3D72B8u) {
        ctx->pc = 0x3D72B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D72B4u;
        // 0x3d72b8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D72BCu;
        goto label_3d72bc;
    }
    ctx->pc = 0x3D72B4u;
    {
        const bool branch_taken_0x3d72b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d72b4) {
            ctx->pc = 0x3D72B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D72B4u;
            // 0x3d72b8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D72CCu;
            goto label_3d72cc;
        }
    }
    ctx->pc = 0x3D72BCu;
label_3d72bc:
    // 0x3d72bc: 0x54a00008  bnel        $a1, $zero, . + 4 + (0x8 << 2)
label_3d72c0:
    if (ctx->pc == 0x3D72C0u) {
        ctx->pc = 0x3D72C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D72BCu;
        // 0x3d72c0: 0x41042  srl         $v0, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D72C4u;
        goto label_3d72c4;
    }
    ctx->pc = 0x3D72BCu;
    {
        const bool branch_taken_0x3d72bc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d72bc) {
            ctx->pc = 0x3D72C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D72BCu;
            // 0x3d72c0: 0x41042  srl         $v0, $a0, 1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D72E0u;
            goto label_3d72e0;
        }
    }
    ctx->pc = 0x3D72C4u;
label_3d72c4:
    // 0x3d72c4: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x3d72c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
label_3d72c8:
    // 0x3d72c8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3d72c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3d72cc:
    // 0x3d72cc: 0x8c62b3f0  lw          $v0, -0x4C10($v1)
    ctx->pc = 0x3d72ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294947824)));
label_3d72d0:
    // 0x3d72d0: 0xc0f652a  jal         func_3D94A8
label_3d72d4:
    if (ctx->pc == 0x3D72D4u) {
        ctx->pc = 0x3D72D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D72D0u;
        // 0x3d72d4: 0xae420020  sw          $v0, 0x20($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D72D8u;
        goto label_3d72d8;
    }
    ctx->pc = 0x3D72D0u;
    SET_GPR_U32(ctx, 31, 0x3D72D8u);
    ctx->pc = 0x3D72D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D72D0u;
    // 0x3d72d4: 0xae420020  sw          $v0, 0x20($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D94A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D94A8u, 0x3D72D0u, 0x3D72D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D72D8u;
label_3d72d8:
    // 0x3d72d8: 0x1000000d  b           . + 4 + (0xD << 2)
label_3d72dc:
    if (ctx->pc == 0x3D72DCu) {
        ctx->pc = 0x3D72DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D72D8u;
        // 0x3d72dc: 0x2402fffc  addiu       $v0, $zero, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D72E0u;
        goto label_3d72e0;
    }
    ctx->pc = 0x3D72D8u;
    {
        const bool branch_taken_0x3d72d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D72DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D72D8u;
        // 0x3d72dc: 0x2402fffc  addiu       $v0, $zero, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d72d8) {
            ctx->pc = 0x3D7310u;
            goto label_3d7310;
        }
    }
    ctx->pc = 0x3D72E0u;
label_3d72e0:
    // 0x3d72e0: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x3d72e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_3d72e4:
    // 0x3d72e4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3d72e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_3d72e8:
    // 0x3d72e8: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x3d72e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_3d72ec:
    // 0x3d72ec: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x3d72ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_3d72f0:
    // 0x3d72f0: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x3d72f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_3d72f4:
    // 0x3d72f4: 0xa2370025  sb          $s7, 0x25($s1)
    ctx->pc = 0x3d72f4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 37), (uint8_t)GPR_U32(ctx, 23));
label_3d72f8:
    // 0x3d72f8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3d72f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3d72fc:
    // 0x3d72fc: 0xae340094  sw          $s4, 0x94($s1)
    ctx->pc = 0x3d72fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 148), GPR_U32(ctx, 20));
label_3d7300:
    // 0x3d7300: 0xae360098  sw          $s6, 0x98($s1)
    ctx->pc = 0x3d7300u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 152), GPR_U32(ctx, 22));
label_3d7304:
    // 0x3d7304: 0xae2216b4  sw          $v0, 0x16B4($s1)
    ctx->pc = 0x3d7304u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5812), GPR_U32(ctx, 2));
label_3d7308:
    // 0x3d7308: 0xc0f6564  jal         func_3D9590
label_3d730c:
    if (ctx->pc == 0x3D730Cu) {
        ctx->pc = 0x3D730Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7308u;
        // 0x3d730c: 0xae2316a8  sw          $v1, 0x16A8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 5800), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7310u;
        goto label_3d7310;
    }
    ctx->pc = 0x3D7308u;
    SET_GPR_U32(ctx, 31, 0x3D7310u);
    ctx->pc = 0x3D730Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D7308u;
    // 0x3d730c: 0xae2316a8  sw          $v1, 0x16A8($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 5800), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D9590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D9590u, 0x3D7308u, 0x3D7310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D7310u;
label_3d7310:
    // 0x3d7310: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x3d7310u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3d7314:
    // 0x3d7314: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x3d7314u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3d7318:
    // 0x3d7318: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x3d7318u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3d731c:
    // 0x3d731c: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x3d731cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3d7320:
    // 0x3d7320: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x3d7320u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3d7324:
    // 0x3d7324: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x3d7324u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3d7328:
    // 0x3d7328: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x3d7328u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3d732c:
    // 0x3d732c: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x3d732cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3d7330:
    // 0x3d7330: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x3d7330u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3d7334:
    // 0x3d7334: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3d7334u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3d7338:
    // 0x3d7338: 0x3e00008  jr          $ra
label_3d733c:
    if (ctx->pc == 0x3D733Cu) {
        ctx->pc = 0x3D733Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7338u;
        // 0x3d733c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7340u;
        goto label_3d7340;
    }
    ctx->pc = 0x3D7338u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D733Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7338u;
        // 0x3d733c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D7338u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D7340u;
label_3d7340:
    // 0x3d7340: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3d7340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_3d7344:
    // 0x3d7344: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x3d7344u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_3d7348:
    // 0x3d7348: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3d7348u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_3d734c:
    // 0x3d734c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x3d734cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3d7350:
    // 0x3d7350: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x3d7350u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_3d7354:
    // 0x3d7354: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3d7354u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3d7358:
    // 0x3d7358: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x3d7358u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_3d735c:
    // 0x3d735c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x3d735cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3d7360:
    // 0x3d7360: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x3d7360u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_3d7364:
    // 0x3d7364: 0x200a02d  daddu       $s4, $s0, $zero
    ctx->pc = 0x3d7364u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3d7368:
    // 0x3d7368: 0x12400009  beqz        $s2, . + 4 + (0x9 << 2)
label_3d736c:
    if (ctx->pc == 0x3D736Cu) {
        ctx->pc = 0x3D736Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7368u;
        // 0x3d736c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7370u;
        goto label_3d7370;
    }
    ctx->pc = 0x3D7368u;
    {
        const bool branch_taken_0x3d7368 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D736Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7368u;
        // 0x3d736c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d7368) {
            ctx->pc = 0x3D7390u;
            goto label_3d7390;
        }
    }
    ctx->pc = 0x3D7370u;
label_3d7370:
    // 0x3d7370: 0x8e510024  lw          $s1, 0x24($s2)
    ctx->pc = 0x3d7370u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_3d7374:
    // 0x3d7374: 0x122000a7  beqz        $s1, . + 4 + (0xA7 << 2)
label_3d7378:
    if (ctx->pc == 0x3D7378u) {
        ctx->pc = 0x3D7378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7374u;
        // 0x3d7378: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D737Cu;
        goto label_3d737c;
    }
    ctx->pc = 0x3D7374u;
    {
        const bool branch_taken_0x3d7374 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D7378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7374u;
        // 0x3d7378: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d7374) {
            ctx->pc = 0x3D7614u;
            goto label_3d7614;
        }
    }
    ctx->pc = 0x3D737Cu;
label_3d737c:
    // 0x3d737c: 0x12600004  beqz        $s3, . + 4 + (0x4 << 2)
label_3d7380:
    if (ctx->pc == 0x3D7380u) {
        ctx->pc = 0x3D7380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D737Cu;
        // 0x3d7380: 0x2402002a  addiu       $v0, $zero, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7384u;
        goto label_3d7384;
    }
    ctx->pc = 0x3D737Cu;
    {
        const bool branch_taken_0x3d737c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D7380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D737Cu;
        // 0x3d7380: 0x2402002a  addiu       $v0, $zero, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d737c) {
            ctx->pc = 0x3D7390u;
            goto label_3d7390;
        }
    }
    ctx->pc = 0x3D7384u;
label_3d7384:
    // 0x3d7384: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x3d7384u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3d7388:
    // 0x3d7388: 0x50620003  beql        $v1, $v0, . + 4 + (0x3 << 2)
label_3d738c:
    if (ctx->pc == 0x3D738Cu) {
        ctx->pc = 0x3D738Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7388u;
        // 0x3d738c: 0xde440038  ld          $a0, 0x38($s2) (Delay Slot)
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 18), 56)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7390u;
        goto label_3d7390;
    }
    ctx->pc = 0x3D7388u;
    {
        const bool branch_taken_0x3d7388 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3d7388) {
            ctx->pc = 0x3D738Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D7388u;
            // 0x3d738c: 0xde440038  ld          $a0, 0x38($s2) (Delay Slot)
            SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 18), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D7398u;
            goto label_3d7398;
        }
    }
    ctx->pc = 0x3D7390u;
label_3d7390:
    // 0x3d7390: 0x100000a0  b           . + 4 + (0xA0 << 2)
label_3d7394:
    if (ctx->pc == 0x3D7394u) {
        ctx->pc = 0x3D7394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7390u;
        // 0x3d7394: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7398u;
        goto label_3d7398;
    }
    ctx->pc = 0x3D7390u;
    {
        const bool branch_taken_0x3d7390 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D7394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7390u;
        // 0x3d7394: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d7390) {
            ctx->pc = 0x3D7614u;
            goto label_3d7614;
        }
    }
    ctx->pc = 0x3D7398u;
label_3d7398:
    // 0x3d7398: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3d7398u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3d739c:
    // 0x3d739c: 0xc0f5b94  jal         func_3D6E50
label_3d73a0:
    if (ctx->pc == 0x3D73A0u) {
        ctx->pc = 0x3D73A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D739Cu;
        // 0x3d73a0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D73A4u;
        goto label_3d73a4;
    }
    ctx->pc = 0x3D739Cu;
    SET_GPR_U32(ctx, 31, 0x3D73A4u);
    ctx->pc = 0x3D73A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D739Cu;
    // 0x3d73a0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D6E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D6E50u, 0x3D739Cu, 0x3D73A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D73A4u;
label_3d73a4:
    // 0x3d73a4: 0xfe420038  sd          $v0, 0x38($s2)
    ctx->pc = 0x3d73a4u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 56), GPR_U64(ctx, 2));
label_3d73a8:
    // 0x3d73a8: 0x2e020003  sltiu       $v0, $s0, 0x3
    ctx->pc = 0x3d73a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_3d73ac:
    // 0x3d73ac: 0x14400099  bnez        $v0, . + 4 + (0x99 << 2)
label_3d73b0:
    if (ctx->pc == 0x3D73B0u) {
        ctx->pc = 0x3D73B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D73ACu;
        // 0x3d73b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D73B4u;
        goto label_3d73b4;
    }
    ctx->pc = 0x3D73ACu;
    {
        const bool branch_taken_0x3d73ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D73B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D73ACu;
        // 0x3d73b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d73ac) {
            ctx->pc = 0x3D7614u;
            goto label_3d7614;
        }
    }
    ctx->pc = 0x3D73B4u;
label_3d73b4:
    // 0x3d73b4: 0x8e22002c  lw          $v0, 0x2C($s1)
    ctx->pc = 0x3d73b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_3d73b8:
    // 0x3d73b8: 0x2442fefa  addiu       $v0, $v0, -0x106
    ctx->pc = 0x3d73b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967034));
label_3d73bc:
    // 0x3d73bc: 0x50182b  sltu        $v1, $v0, $s0
    ctx->pc = 0x3d73bcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_3d73c0:
    // 0x3d73c0: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_3d73c4:
    if (ctx->pc == 0x3D73C4u) {
        ctx->pc = 0x3D73C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D73C0u;
        // 0x3d73c4: 0x8e240038  lw          $a0, 0x38($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D73C8u;
        goto label_3d73c8;
    }
    ctx->pc = 0x3D73C0u;
    {
        const bool branch_taken_0x3d73c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D73C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D73C0u;
        // 0x3d73c4: 0x8e240038  lw          $a0, 0x38($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d73c0) {
            ctx->pc = 0x3D73D4u;
            goto label_3d73d4;
        }
    }
    ctx->pc = 0x3D73C8u;
label_3d73c8:
    // 0x3d73c8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3d73c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3d73cc:
    // 0x3d73cc: 0x2901023  subu        $v0, $s4, $s0
    ctx->pc = 0x3d73ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
label_3d73d0:
    // 0x3d73d0: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x3d73d0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_3d73d4:
    // 0x3d73d4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3d73d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3d73d8:
    // 0x3d73d8: 0xc0bb778  jal         func_2EDDE0
label_3d73dc:
    if (ctx->pc == 0x3D73DCu) {
        ctx->pc = 0x3D73DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D73D8u;
        // 0x3d73dc: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D73E0u;
        goto label_3d73e0;
    }
    ctx->pc = 0x3D73D8u;
    SET_GPR_U32(ctx, 31, 0x3D73E0u);
    ctx->pc = 0x3D73DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D73D8u;
    // 0x3d73dc: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDDE0u, 0x3D73D8u, 0x3D73E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D73E0u;
label_3d73e0:
    // 0x3d73e0: 0x10103c  dsll32      $v0, $s0, 0
    ctx->pc = 0x3d73e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 0));
label_3d73e4:
    // 0x3d73e4: 0x8e280038  lw          $t0, 0x38($s1)
    ctx->pc = 0x3d73e4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
label_3d73e8:
    // 0x3d73e8: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x3d73e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_3d73ec:
    // 0x3d73ec: 0xae30007c  sw          $s0, 0x7C($s1)
    ctx->pc = 0x3d73ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 124), GPR_U32(ctx, 16));
label_3d73f0:
    // 0x3d73f0: 0xfe220068  sd          $v0, 0x68($s1)
    ctx->pc = 0x3d73f0u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 104), GPR_U64(ctx, 2));
label_3d73f4:
    // 0x3d73f4: 0x2605fffe  addiu       $a1, $s0, -0x2
    ctx->pc = 0x3d73f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967294));
label_3d73f8:
    // 0x3d73f8: 0x8e220060  lw          $v0, 0x60($s1)
    ctx->pc = 0x3d73f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_3d73fc:
    // 0x3d73fc: 0x2614fffd  addiu       $s4, $s0, -0x3
    ctx->pc = 0x3d73fcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967293));
label_3d7400:
    // 0x3d7400: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x3d7400u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_3d7404:
    // 0x3d7404: 0x30a70003  andi        $a3, $a1, 0x3
    ctx->pc = 0x3d7404u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)3);
label_3d7408:
    // 0x3d7408: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3d7408u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3d740c:
    // 0x3d740c: 0x8e24005c  lw          $a0, 0x5C($s1)
    ctx->pc = 0x3d740cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_3d7410:
    // 0x3d7410: 0xae230050  sw          $v1, 0x50($s1)
    ctx->pc = 0x3d7410u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 3));
label_3d7414:
    // 0x3d7414: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x3d7414u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3d7418:
    // 0x3d7418: 0x431804  sllv        $v1, $v1, $v0
    ctx->pc = 0x3d7418u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
label_3d741c:
    // 0x3d741c: 0x8e380034  lw          $t8, 0x34($s1)
    ctx->pc = 0x3d741cu;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_3d7420:
    // 0x3d7420: 0x91020001  lbu         $v0, 0x1($t0)
    ctx->pc = 0x3d7420u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 1)));
label_3d7424:
    // 0x3d7424: 0x25060002  addiu       $a2, $t0, 0x2
    ctx->pc = 0x3d7424u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
label_3d7428:
    // 0x3d7428: 0x8e330048  lw          $s3, 0x48($s1)
    ctx->pc = 0x3d7428u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
label_3d742c:
    // 0x3d742c: 0x80782d  daddu       $t7, $a0, $zero
    ctx->pc = 0x3d742cu;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3d7430:
    // 0x3d7430: 0x621826  xor         $v1, $v1, $v0
    ctx->pc = 0x3d7430u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
label_3d7434:
    // 0x3d7434: 0x8e32004c  lw          $s2, 0x4C($s1)
    ctx->pc = 0x3d7434u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
label_3d7438:
    // 0x3d7438: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x3d7438u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_3d743c:
    // 0x3d743c: 0x18a00024  blez        $a1, . + 4 + (0x24 << 2)
label_3d7440:
    if (ctx->pc == 0x3D7440u) {
        ctx->pc = 0x3D7440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D743Cu;
        // 0x3d7440: 0xae230050  sw          $v1, 0x50($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7444u;
        goto label_3d7444;
    }
    ctx->pc = 0x3D743Cu;
    {
        const bool branch_taken_0x3d743c = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x3D7440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D743Cu;
        // 0x3d7440: 0xae230050  sw          $v1, 0x50($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d743c) {
            ctx->pc = 0x3D74D0u;
            goto label_3d74d0;
        }
    }
    ctx->pc = 0x3D7444u;
label_3d7444:
    // 0x3d7444: 0x10e00034  beqz        $a3, . + 4 + (0x34 << 2)
label_3d7448:
    if (ctx->pc == 0x3D7448u) {
        ctx->pc = 0x3D7448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7444u;
        // 0x3d7448: 0x28e20002  slti        $v0, $a3, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D744Cu;
        goto label_3d744c;
    }
    ctx->pc = 0x3D7444u;
    {
        const bool branch_taken_0x3d7444 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D7448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7444u;
        // 0x3d7448: 0x28e20002  slti        $v0, $a3, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d7444) {
            ctx->pc = 0x3D7518u;
            goto label_3d7518;
        }
    }
    ctx->pc = 0x3D744Cu;
label_3d744c:
    // 0x3d744c: 0x54400021  bnel        $v0, $zero, . + 4 + (0x21 << 2)
label_3d7450:
    if (ctx->pc == 0x3D7450u) {
        ctx->pc = 0x3D7450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D744Cu;
        // 0x3d7450: 0x8e220050  lw          $v0, 0x50($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7454u;
        goto label_3d7454;
    }
    ctx->pc = 0x3D744Cu;
    {
        const bool branch_taken_0x3d744c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d744c) {
            ctx->pc = 0x3D7450u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D744Cu;
            // 0x3d7450: 0x8e220050  lw          $v0, 0x50($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D74D4u;
            goto label_3d74d4;
        }
    }
    ctx->pc = 0x3D7454u;
label_3d7454:
    // 0x3d7454: 0x28e20003  slti        $v0, $a3, 0x3
    ctx->pc = 0x3d7454u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)3) ? 1 : 0);
label_3d7458:
    // 0x3d7458: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
label_3d745c:
    if (ctx->pc == 0x3D745Cu) {
        ctx->pc = 0x3D745Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7458u;
        // 0x3d745c: 0x8e220050  lw          $v0, 0x50($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7460u;
        goto label_3d7460;
    }
    ctx->pc = 0x3D7458u;
    {
        const bool branch_taken_0x3d7458 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d7458) {
            ctx->pc = 0x3D745Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D7458u;
            // 0x3d745c: 0x8e220050  lw          $v0, 0x50($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D7494u;
            goto label_3d7494;
        }
    }
    ctx->pc = 0x3D7460u;
label_3d7460:
    // 0x3d7460: 0x91020002  lbu         $v0, 0x2($t0)
    ctx->pc = 0x3d7460u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 2)));
label_3d7464:
    // 0x3d7464: 0x2031804  sllv        $v1, $v1, $s0
    ctx->pc = 0x3d7464u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 16) & 0x1F));
label_3d7468:
    // 0x3d7468: 0x25060003  addiu       $a2, $t0, 0x3
    ctx->pc = 0x3d7468u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), 3));
label_3d746c:
    // 0x3d746c: 0x240d0001  addiu       $t5, $zero, 0x1
    ctx->pc = 0x3d746cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3d7470:
    // 0x3d7470: 0x621826  xor         $v1, $v1, $v0
    ctx->pc = 0x3d7470u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
label_3d7474:
    // 0x3d7474: 0x6f1824  and         $v1, $v1, $t7
    ctx->pc = 0x3d7474u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 15));
label_3d7478:
    // 0x3d7478: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x3d7478u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_3d747c:
    // 0x3d747c: 0xae230050  sw          $v1, 0x50($s1)
    ctx->pc = 0x3d747cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 3));
label_3d7480:
    // 0x3d7480: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x3d7480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_3d7484:
    // 0x3d7484: 0x944b0000  lhu         $t3, 0x0($v0)
    ctx->pc = 0x3d7484u;
    SET_GPR_ZE32(ctx, 11, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_3d7488:
    // 0x3d7488: 0xa66b0000  sh          $t3, 0x0($s3)
    ctx->pc = 0x3d7488u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 0), (uint16_t)GPR_U32(ctx, 11));
label_3d748c:
    // 0x3d748c: 0xa4400000  sh          $zero, 0x0($v0)
    ctx->pc = 0x3d748cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 0));
label_3d7490:
    // 0x3d7490: 0x8e220050  lw          $v0, 0x50($s1)
    ctx->pc = 0x3d7490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_3d7494:
    // 0x3d7494: 0x1b82024  and         $a0, $t5, $t8
    ctx->pc = 0x3d7494u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 13) & GPR_U64(ctx, 24));
label_3d7498:
    // 0x3d7498: 0x90c30000  lbu         $v1, 0x0($a2)
    ctx->pc = 0x3d7498u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_3d749c:
    // 0x3d749c: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x3d749cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_3d74a0:
    // 0x3d74a0: 0x2021004  sllv        $v0, $v0, $s0
    ctx->pc = 0x3d74a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 16) & 0x1F));
label_3d74a4:
    // 0x3d74a4: 0x932021  addu        $a0, $a0, $s3
    ctx->pc = 0x3d74a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
label_3d74a8:
    // 0x3d74a8: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x3d74a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
label_3d74ac:
    // 0x3d74ac: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x3d74acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_3d74b0:
    // 0x3d74b0: 0x4f1024  and         $v0, $v0, $t7
    ctx->pc = 0x3d74b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 15));
label_3d74b4:
    // 0x3d74b4: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x3d74b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_3d74b8:
    // 0x3d74b8: 0xae220050  sw          $v0, 0x50($s1)
    ctx->pc = 0x3d74b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 2));
label_3d74bc:
    // 0x3d74bc: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x3d74bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_3d74c0:
    // 0x3d74c0: 0x946b0000  lhu         $t3, 0x0($v1)
    ctx->pc = 0x3d74c0u;
    SET_GPR_ZE32(ctx, 11, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_3d74c4:
    // 0x3d74c4: 0xa48b0000  sh          $t3, 0x0($a0)
    ctx->pc = 0x3d74c4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 11));
label_3d74c8:
    // 0x3d74c8: 0xa46d0000  sh          $t5, 0x0($v1)
    ctx->pc = 0x3d74c8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 13));
label_3d74cc:
    // 0x3d74cc: 0x25ad0001  addiu       $t5, $t5, 0x1
    ctx->pc = 0x3d74ccu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
label_3d74d0:
    // 0x3d74d0: 0x8e220050  lw          $v0, 0x50($s1)
    ctx->pc = 0x3d74d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_3d74d4:
    // 0x3d74d4: 0x1b82024  and         $a0, $t5, $t8
    ctx->pc = 0x3d74d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 13) & GPR_U64(ctx, 24));
label_3d74d8:
    // 0x3d74d8: 0x90c30000  lbu         $v1, 0x0($a2)
    ctx->pc = 0x3d74d8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_3d74dc:
    // 0x3d74dc: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x3d74dcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_3d74e0:
    // 0x3d74e0: 0x2021004  sllv        $v0, $v0, $s0
    ctx->pc = 0x3d74e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 16) & 0x1F));
label_3d74e4:
    // 0x3d74e4: 0x932021  addu        $a0, $a0, $s3
    ctx->pc = 0x3d74e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
label_3d74e8:
    // 0x3d74e8: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x3d74e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
label_3d74ec:
    // 0x3d74ec: 0x4f1024  and         $v0, $v0, $t7
    ctx->pc = 0x3d74ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 15));
label_3d74f0:
    // 0x3d74f0: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x3d74f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_3d74f4:
    // 0x3d74f4: 0xae220050  sw          $v0, 0x50($s1)
    ctx->pc = 0x3d74f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 2));
label_3d74f8:
    // 0x3d74f8: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x3d74f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_3d74fc:
    // 0x3d74fc: 0x946b0000  lhu         $t3, 0x0($v1)
    ctx->pc = 0x3d74fcu;
    SET_GPR_ZE32(ctx, 11, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_3d7500:
    // 0x3d7500: 0xa48b0000  sh          $t3, 0x0($a0)
    ctx->pc = 0x3d7500u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 11));
label_3d7504:
    // 0x3d7504: 0xa46d0000  sh          $t5, 0x0($v1)
    ctx->pc = 0x3d7504u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 13));
label_3d7508:
    // 0x3d7508: 0x25ad0001  addiu       $t5, $t5, 0x1
    ctx->pc = 0x3d7508u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
label_3d750c:
    // 0x3d750c: 0x28d702b  sltu        $t6, $s4, $t5
    ctx->pc = 0x3d750cu;
    SET_GPR_U64(ctx, 14, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 13)) ? 1 : 0);
label_3d7510:
    // 0x3d7510: 0x15c0003f  bnez        $t6, . + 4 + (0x3F << 2)
label_3d7514:
    if (ctx->pc == 0x3D7514u) {
        ctx->pc = 0x3D7514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7510u;
        // 0x3d7514: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7518u;
        goto label_3d7518;
    }
    ctx->pc = 0x3D7510u;
    {
        const bool branch_taken_0x3d7510 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D7514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7510u;
        // 0x3d7514: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d7510) {
            ctx->pc = 0x3D7610u;
            goto label_3d7610;
        }
    }
    ctx->pc = 0x3D7518u;
label_3d7518:
    // 0x3d7518: 0xc0602d  daddu       $t4, $a2, $zero
    ctx->pc = 0x3d7518u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3d751c:
    // 0x3d751c: 0x0  nop
    ctx->pc = 0x3d751cu;
    // NOP
label_3d7520:
    // 0x3d7520: 0x8e230050  lw          $v1, 0x50($s1)
    ctx->pc = 0x3d7520u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_3d7524:
    // 0x3d7524: 0x1b82024  and         $a0, $t5, $t8
    ctx->pc = 0x3d7524u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 13) & GPR_U64(ctx, 24));
label_3d7528:
    // 0x3d7528: 0x91820000  lbu         $v0, 0x0($t4)
    ctx->pc = 0x3d7528u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 0)));
label_3d752c:
    // 0x3d752c: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x3d752cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_3d7530:
    // 0x3d7530: 0x2031804  sllv        $v1, $v1, $s0
    ctx->pc = 0x3d7530u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 16) & 0x1F));
label_3d7534:
    // 0x3d7534: 0x932021  addu        $a0, $a0, $s3
    ctx->pc = 0x3d7534u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
label_3d7538:
    // 0x3d7538: 0x621826  xor         $v1, $v1, $v0
    ctx->pc = 0x3d7538u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
label_3d753c:
    // 0x3d753c: 0x25a80001  addiu       $t0, $t5, 0x1
    ctx->pc = 0x3d753cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
label_3d7540:
    // 0x3d7540: 0x6f1824  and         $v1, $v1, $t7
    ctx->pc = 0x3d7540u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 15));
label_3d7544:
    // 0x3d7544: 0x1182824  and         $a1, $t0, $t8
    ctx->pc = 0x3d7544u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 8) & GPR_U64(ctx, 24));
label_3d7548:
    // 0x3d7548: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x3d7548u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_3d754c:
    // 0x3d754c: 0xae230050  sw          $v1, 0x50($s1)
    ctx->pc = 0x3d754cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 3));
label_3d7550:
    // 0x3d7550: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x3d7550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_3d7554:
    // 0x3d7554: 0x2031804  sllv        $v1, $v1, $s0
    ctx->pc = 0x3d7554u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 16) & 0x1F));
label_3d7558:
    // 0x3d7558: 0x944b0000  lhu         $t3, 0x0($v0)
    ctx->pc = 0x3d7558u;
    SET_GPR_ZE32(ctx, 11, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_3d755c:
    // 0x3d755c: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x3d755cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_3d7560:
    // 0x3d7560: 0xb32821  addu        $a1, $a1, $s3
    ctx->pc = 0x3d7560u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
label_3d7564:
    // 0x3d7564: 0x25a90002  addiu       $t1, $t5, 0x2
    ctx->pc = 0x3d7564u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 13), 2));
label_3d7568:
    // 0x3d7568: 0xa48b0000  sh          $t3, 0x0($a0)
    ctx->pc = 0x3d7568u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 11));
label_3d756c:
    // 0x3d756c: 0x1383024  and         $a2, $t1, $t8
    ctx->pc = 0x3d756cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 9) & GPR_U64(ctx, 24));
label_3d7570:
    // 0x3d7570: 0xa44d0000  sh          $t5, 0x0($v0)
    ctx->pc = 0x3d7570u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 13));
label_3d7574:
    // 0x3d7574: 0x63040  sll         $a2, $a2, 1
    ctx->pc = 0x3d7574u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
label_3d7578:
    // 0x3d7578: 0xd33021  addu        $a2, $a2, $s3
    ctx->pc = 0x3d7578u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 19)));
label_3d757c:
    // 0x3d757c: 0x25aa0003  addiu       $t2, $t5, 0x3
    ctx->pc = 0x3d757cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 13), 3));
label_3d7580:
    // 0x3d7580: 0x91820001  lbu         $v0, 0x1($t4)
    ctx->pc = 0x3d7580u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 1)));
label_3d7584:
    // 0x3d7584: 0x1583824  and         $a3, $t2, $t8
    ctx->pc = 0x3d7584u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 10) & GPR_U64(ctx, 24));
label_3d7588:
    // 0x3d7588: 0x73840  sll         $a3, $a3, 1
    ctx->pc = 0x3d7588u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
label_3d758c:
    // 0x3d758c: 0x25ad0004  addiu       $t5, $t5, 0x4
    ctx->pc = 0x3d758cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4));
label_3d7590:
    // 0x3d7590: 0x621826  xor         $v1, $v1, $v0
    ctx->pc = 0x3d7590u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
label_3d7594:
    // 0x3d7594: 0xf33821  addu        $a3, $a3, $s3
    ctx->pc = 0x3d7594u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 19)));
label_3d7598:
    // 0x3d7598: 0x6f1824  and         $v1, $v1, $t7
    ctx->pc = 0x3d7598u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 15));
label_3d759c:
    // 0x3d759c: 0x28d702b  sltu        $t6, $s4, $t5
    ctx->pc = 0x3d759cu;
    SET_GPR_U64(ctx, 14, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 13)) ? 1 : 0);
label_3d75a0:
    // 0x3d75a0: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x3d75a0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_3d75a4:
    // 0x3d75a4: 0xae230050  sw          $v1, 0x50($s1)
    ctx->pc = 0x3d75a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 3));
label_3d75a8:
    // 0x3d75a8: 0x922021  addu        $a0, $a0, $s2
    ctx->pc = 0x3d75a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
label_3d75ac:
    // 0x3d75ac: 0x2031804  sllv        $v1, $v1, $s0
    ctx->pc = 0x3d75acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 16) & 0x1F));
label_3d75b0:
    // 0x3d75b0: 0x948b0000  lhu         $t3, 0x0($a0)
    ctx->pc = 0x3d75b0u;
    SET_GPR_ZE32(ctx, 11, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_3d75b4:
    // 0x3d75b4: 0xa4ab0000  sh          $t3, 0x0($a1)
    ctx->pc = 0x3d75b4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 11));
label_3d75b8:
    // 0x3d75b8: 0xa4880000  sh          $t0, 0x0($a0)
    ctx->pc = 0x3d75b8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 8));
label_3d75bc:
    // 0x3d75bc: 0x91820002  lbu         $v0, 0x2($t4)
    ctx->pc = 0x3d75bcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 2)));
label_3d75c0:
    // 0x3d75c0: 0x621826  xor         $v1, $v1, $v0
    ctx->pc = 0x3d75c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
label_3d75c4:
    // 0x3d75c4: 0x6f1824  and         $v1, $v1, $t7
    ctx->pc = 0x3d75c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 15));
label_3d75c8:
    // 0x3d75c8: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x3d75c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_3d75cc:
    // 0x3d75cc: 0xae230050  sw          $v1, 0x50($s1)
    ctx->pc = 0x3d75ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 3));
label_3d75d0:
    // 0x3d75d0: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x3d75d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_3d75d4:
    // 0x3d75d4: 0x2031804  sllv        $v1, $v1, $s0
    ctx->pc = 0x3d75d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 16) & 0x1F));
label_3d75d8:
    // 0x3d75d8: 0x944b0000  lhu         $t3, 0x0($v0)
    ctx->pc = 0x3d75d8u;
    SET_GPR_ZE32(ctx, 11, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_3d75dc:
    // 0x3d75dc: 0xa4cb0000  sh          $t3, 0x0($a2)
    ctx->pc = 0x3d75dcu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 11));
label_3d75e0:
    // 0x3d75e0: 0xa4490000  sh          $t1, 0x0($v0)
    ctx->pc = 0x3d75e0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 9));
label_3d75e4:
    // 0x3d75e4: 0x91840003  lbu         $a0, 0x3($t4)
    ctx->pc = 0x3d75e4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 3)));
label_3d75e8:
    // 0x3d75e8: 0x258c0004  addiu       $t4, $t4, 0x4
    ctx->pc = 0x3d75e8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
label_3d75ec:
    // 0x3d75ec: 0x641826  xor         $v1, $v1, $a0
    ctx->pc = 0x3d75ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 4));
label_3d75f0:
    // 0x3d75f0: 0x6f1824  and         $v1, $v1, $t7
    ctx->pc = 0x3d75f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 15));
label_3d75f4:
    // 0x3d75f4: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x3d75f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_3d75f8:
    // 0x3d75f8: 0xae230050  sw          $v1, 0x50($s1)
    ctx->pc = 0x3d75f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 3));
label_3d75fc:
    // 0x3d75fc: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x3d75fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_3d7600:
    // 0x3d7600: 0x944b0000  lhu         $t3, 0x0($v0)
    ctx->pc = 0x3d7600u;
    SET_GPR_ZE32(ctx, 11, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_3d7604:
    // 0x3d7604: 0xa4eb0000  sh          $t3, 0x0($a3)
    ctx->pc = 0x3d7604u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 11));
label_3d7608:
    // 0x3d7608: 0x11c0ffc5  beqz        $t6, . + 4 + (-0x3B << 2)
label_3d760c:
    if (ctx->pc == 0x3D760Cu) {
        ctx->pc = 0x3D760Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7608u;
        // 0x3d760c: 0xa44a0000  sh          $t2, 0x0($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7610u;
        goto label_3d7610;
    }
    ctx->pc = 0x3D7608u;
    {
        const bool branch_taken_0x3d7608 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D760Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7608u;
        // 0x3d760c: 0xa44a0000  sh          $t2, 0x0($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d7608) {
            ctx->pc = 0x3D7520u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d7520;
        }
    }
    ctx->pc = 0x3D7610u;
label_3d7610:
    // 0x3d7610: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3d7610u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3d7614:
    // 0x3d7614: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x3d7614u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3d7618:
    // 0x3d7618: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x3d7618u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3d761c:
    // 0x3d761c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3d761cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3d7620:
    // 0x3d7620: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x3d7620u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3d7624:
    // 0x3d7624: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x3d7624u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3d7628:
    // 0x3d7628: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3d7628u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3d762c:
    // 0x3d762c: 0x3e00008  jr          $ra
label_3d7630:
    if (ctx->pc == 0x3D7630u) {
        ctx->pc = 0x3D7630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D762Cu;
        // 0x3d7630: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7634u;
        goto label_3d7634;
    }
    ctx->pc = 0x3D762Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D7630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D762Cu;
        // 0x3d7630: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D762Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D7634u;
label_3d7634:
    // 0x3d7634: 0x0  nop
    ctx->pc = 0x3d7634u;
    // NOP
    ctx->pc = 0x3d7638u;
}
