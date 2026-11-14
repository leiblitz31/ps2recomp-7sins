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

// Function: sub_001C7190
// Address: 0x1c7190 - 0x1c8230
void sub_001C7190_0x1c7190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C7190_0x1c7190");
#endif

    switch (ctx->pc) {
        case 0x1c7190u: goto label_1c7190;
        case 0x1c7194u: goto label_1c7194;
        case 0x1c7198u: goto label_1c7198;
        case 0x1c719cu: goto label_1c719c;
        case 0x1c71a0u: goto label_1c71a0;
        case 0x1c71a4u: goto label_1c71a4;
        case 0x1c71a8u: goto label_1c71a8;
        case 0x1c71acu: goto label_1c71ac;
        case 0x1c71b0u: goto label_1c71b0;
        case 0x1c71b4u: goto label_1c71b4;
        case 0x1c71b8u: goto label_1c71b8;
        case 0x1c71bcu: goto label_1c71bc;
        case 0x1c71c0u: goto label_1c71c0;
        case 0x1c71c4u: goto label_1c71c4;
        case 0x1c71c8u: goto label_1c71c8;
        case 0x1c71ccu: goto label_1c71cc;
        case 0x1c71d0u: goto label_1c71d0;
        case 0x1c71d4u: goto label_1c71d4;
        case 0x1c71d8u: goto label_1c71d8;
        case 0x1c71dcu: goto label_1c71dc;
        case 0x1c71e0u: goto label_1c71e0;
        case 0x1c71e4u: goto label_1c71e4;
        case 0x1c71e8u: goto label_1c71e8;
        case 0x1c71ecu: goto label_1c71ec;
        case 0x1c71f0u: goto label_1c71f0;
        case 0x1c71f4u: goto label_1c71f4;
        case 0x1c71f8u: goto label_1c71f8;
        case 0x1c71fcu: goto label_1c71fc;
        case 0x1c7200u: goto label_1c7200;
        case 0x1c7204u: goto label_1c7204;
        case 0x1c7208u: goto label_1c7208;
        case 0x1c720cu: goto label_1c720c;
        case 0x1c7210u: goto label_1c7210;
        case 0x1c7214u: goto label_1c7214;
        case 0x1c7218u: goto label_1c7218;
        case 0x1c721cu: goto label_1c721c;
        case 0x1c7220u: goto label_1c7220;
        case 0x1c7224u: goto label_1c7224;
        case 0x1c7228u: goto label_1c7228;
        case 0x1c722cu: goto label_1c722c;
        case 0x1c7230u: goto label_1c7230;
        case 0x1c7234u: goto label_1c7234;
        case 0x1c7238u: goto label_1c7238;
        case 0x1c723cu: goto label_1c723c;
        case 0x1c7240u: goto label_1c7240;
        case 0x1c7244u: goto label_1c7244;
        case 0x1c7248u: goto label_1c7248;
        case 0x1c724cu: goto label_1c724c;
        case 0x1c7250u: goto label_1c7250;
        case 0x1c7254u: goto label_1c7254;
        case 0x1c7258u: goto label_1c7258;
        case 0x1c725cu: goto label_1c725c;
        case 0x1c7260u: goto label_1c7260;
        case 0x1c7264u: goto label_1c7264;
        case 0x1c7268u: goto label_1c7268;
        case 0x1c726cu: goto label_1c726c;
        case 0x1c7270u: goto label_1c7270;
        case 0x1c7274u: goto label_1c7274;
        case 0x1c7278u: goto label_1c7278;
        case 0x1c727cu: goto label_1c727c;
        case 0x1c7280u: goto label_1c7280;
        case 0x1c7284u: goto label_1c7284;
        case 0x1c7288u: goto label_1c7288;
        case 0x1c728cu: goto label_1c728c;
        case 0x1c7290u: goto label_1c7290;
        case 0x1c7294u: goto label_1c7294;
        case 0x1c7298u: goto label_1c7298;
        case 0x1c729cu: goto label_1c729c;
        case 0x1c72a0u: goto label_1c72a0;
        case 0x1c72a4u: goto label_1c72a4;
        case 0x1c72a8u: goto label_1c72a8;
        case 0x1c72acu: goto label_1c72ac;
        case 0x1c72b0u: goto label_1c72b0;
        case 0x1c72b4u: goto label_1c72b4;
        case 0x1c72b8u: goto label_1c72b8;
        case 0x1c72bcu: goto label_1c72bc;
        case 0x1c72c0u: goto label_1c72c0;
        case 0x1c72c4u: goto label_1c72c4;
        case 0x1c72c8u: goto label_1c72c8;
        case 0x1c72ccu: goto label_1c72cc;
        case 0x1c72d0u: goto label_1c72d0;
        case 0x1c72d4u: goto label_1c72d4;
        case 0x1c72d8u: goto label_1c72d8;
        case 0x1c72dcu: goto label_1c72dc;
        case 0x1c72e0u: goto label_1c72e0;
        case 0x1c72e4u: goto label_1c72e4;
        case 0x1c72e8u: goto label_1c72e8;
        case 0x1c72ecu: goto label_1c72ec;
        case 0x1c72f0u: goto label_1c72f0;
        case 0x1c72f4u: goto label_1c72f4;
        case 0x1c72f8u: goto label_1c72f8;
        case 0x1c72fcu: goto label_1c72fc;
        case 0x1c7300u: goto label_1c7300;
        case 0x1c7304u: goto label_1c7304;
        case 0x1c7308u: goto label_1c7308;
        case 0x1c730cu: goto label_1c730c;
        case 0x1c7310u: goto label_1c7310;
        case 0x1c7314u: goto label_1c7314;
        case 0x1c7318u: goto label_1c7318;
        case 0x1c731cu: goto label_1c731c;
        case 0x1c7320u: goto label_1c7320;
        case 0x1c7324u: goto label_1c7324;
        case 0x1c7328u: goto label_1c7328;
        case 0x1c732cu: goto label_1c732c;
        case 0x1c7330u: goto label_1c7330;
        case 0x1c7334u: goto label_1c7334;
        case 0x1c7338u: goto label_1c7338;
        case 0x1c733cu: goto label_1c733c;
        case 0x1c7340u: goto label_1c7340;
        case 0x1c7344u: goto label_1c7344;
        case 0x1c7348u: goto label_1c7348;
        case 0x1c734cu: goto label_1c734c;
        case 0x1c7350u: goto label_1c7350;
        case 0x1c7354u: goto label_1c7354;
        case 0x1c7358u: goto label_1c7358;
        case 0x1c735cu: goto label_1c735c;
        case 0x1c7360u: goto label_1c7360;
        case 0x1c7364u: goto label_1c7364;
        case 0x1c7368u: goto label_1c7368;
        case 0x1c736cu: goto label_1c736c;
        case 0x1c7370u: goto label_1c7370;
        case 0x1c7374u: goto label_1c7374;
        case 0x1c7378u: goto label_1c7378;
        case 0x1c737cu: goto label_1c737c;
        case 0x1c7380u: goto label_1c7380;
        case 0x1c7384u: goto label_1c7384;
        case 0x1c7388u: goto label_1c7388;
        case 0x1c738cu: goto label_1c738c;
        case 0x1c7390u: goto label_1c7390;
        case 0x1c7394u: goto label_1c7394;
        case 0x1c7398u: goto label_1c7398;
        case 0x1c739cu: goto label_1c739c;
        case 0x1c73a0u: goto label_1c73a0;
        case 0x1c73a4u: goto label_1c73a4;
        case 0x1c73a8u: goto label_1c73a8;
        case 0x1c73acu: goto label_1c73ac;
        case 0x1c73b0u: goto label_1c73b0;
        case 0x1c73b4u: goto label_1c73b4;
        case 0x1c73b8u: goto label_1c73b8;
        case 0x1c73bcu: goto label_1c73bc;
        case 0x1c73c0u: goto label_1c73c0;
        case 0x1c73c4u: goto label_1c73c4;
        case 0x1c73c8u: goto label_1c73c8;
        case 0x1c73ccu: goto label_1c73cc;
        case 0x1c73d0u: goto label_1c73d0;
        case 0x1c73d4u: goto label_1c73d4;
        case 0x1c73d8u: goto label_1c73d8;
        case 0x1c73dcu: goto label_1c73dc;
        case 0x1c73e0u: goto label_1c73e0;
        case 0x1c73e4u: goto label_1c73e4;
        case 0x1c73e8u: goto label_1c73e8;
        case 0x1c73ecu: goto label_1c73ec;
        case 0x1c73f0u: goto label_1c73f0;
        case 0x1c73f4u: goto label_1c73f4;
        case 0x1c73f8u: goto label_1c73f8;
        case 0x1c73fcu: goto label_1c73fc;
        case 0x1c7400u: goto label_1c7400;
        case 0x1c7404u: goto label_1c7404;
        case 0x1c7408u: goto label_1c7408;
        case 0x1c740cu: goto label_1c740c;
        case 0x1c7410u: goto label_1c7410;
        case 0x1c7414u: goto label_1c7414;
        case 0x1c7418u: goto label_1c7418;
        case 0x1c741cu: goto label_1c741c;
        case 0x1c7420u: goto label_1c7420;
        case 0x1c7424u: goto label_1c7424;
        case 0x1c7428u: goto label_1c7428;
        case 0x1c742cu: goto label_1c742c;
        case 0x1c7430u: goto label_1c7430;
        case 0x1c7434u: goto label_1c7434;
        case 0x1c7438u: goto label_1c7438;
        case 0x1c743cu: goto label_1c743c;
        case 0x1c7440u: goto label_1c7440;
        case 0x1c7444u: goto label_1c7444;
        case 0x1c7448u: goto label_1c7448;
        case 0x1c744cu: goto label_1c744c;
        case 0x1c7450u: goto label_1c7450;
        case 0x1c7454u: goto label_1c7454;
        case 0x1c7458u: goto label_1c7458;
        case 0x1c745cu: goto label_1c745c;
        case 0x1c7460u: goto label_1c7460;
        case 0x1c7464u: goto label_1c7464;
        case 0x1c7468u: goto label_1c7468;
        case 0x1c746cu: goto label_1c746c;
        case 0x1c7470u: goto label_1c7470;
        case 0x1c7474u: goto label_1c7474;
        case 0x1c7478u: goto label_1c7478;
        case 0x1c747cu: goto label_1c747c;
        case 0x1c7480u: goto label_1c7480;
        case 0x1c7484u: goto label_1c7484;
        case 0x1c7488u: goto label_1c7488;
        case 0x1c748cu: goto label_1c748c;
        case 0x1c7490u: goto label_1c7490;
        case 0x1c7494u: goto label_1c7494;
        case 0x1c7498u: goto label_1c7498;
        case 0x1c749cu: goto label_1c749c;
        case 0x1c74a0u: goto label_1c74a0;
        case 0x1c74a4u: goto label_1c74a4;
        case 0x1c74a8u: goto label_1c74a8;
        case 0x1c74acu: goto label_1c74ac;
        case 0x1c74b0u: goto label_1c74b0;
        case 0x1c74b4u: goto label_1c74b4;
        case 0x1c74b8u: goto label_1c74b8;
        case 0x1c74bcu: goto label_1c74bc;
        case 0x1c74c0u: goto label_1c74c0;
        case 0x1c74c4u: goto label_1c74c4;
        case 0x1c74c8u: goto label_1c74c8;
        case 0x1c74ccu: goto label_1c74cc;
        case 0x1c74d0u: goto label_1c74d0;
        case 0x1c74d4u: goto label_1c74d4;
        case 0x1c74d8u: goto label_1c74d8;
        case 0x1c74dcu: goto label_1c74dc;
        case 0x1c74e0u: goto label_1c74e0;
        case 0x1c74e4u: goto label_1c74e4;
        case 0x1c74e8u: goto label_1c74e8;
        case 0x1c74ecu: goto label_1c74ec;
        case 0x1c74f0u: goto label_1c74f0;
        case 0x1c74f4u: goto label_1c74f4;
        case 0x1c74f8u: goto label_1c74f8;
        case 0x1c74fcu: goto label_1c74fc;
        case 0x1c7500u: goto label_1c7500;
        case 0x1c7504u: goto label_1c7504;
        case 0x1c7508u: goto label_1c7508;
        case 0x1c750cu: goto label_1c750c;
        case 0x1c7510u: goto label_1c7510;
        case 0x1c7514u: goto label_1c7514;
        case 0x1c7518u: goto label_1c7518;
        case 0x1c751cu: goto label_1c751c;
        case 0x1c7520u: goto label_1c7520;
        case 0x1c7524u: goto label_1c7524;
        case 0x1c7528u: goto label_1c7528;
        case 0x1c752cu: goto label_1c752c;
        case 0x1c7530u: goto label_1c7530;
        case 0x1c7534u: goto label_1c7534;
        case 0x1c7538u: goto label_1c7538;
        case 0x1c753cu: goto label_1c753c;
        case 0x1c7540u: goto label_1c7540;
        case 0x1c7544u: goto label_1c7544;
        case 0x1c7548u: goto label_1c7548;
        case 0x1c754cu: goto label_1c754c;
        case 0x1c7550u: goto label_1c7550;
        case 0x1c7554u: goto label_1c7554;
        case 0x1c7558u: goto label_1c7558;
        case 0x1c755cu: goto label_1c755c;
        case 0x1c7560u: goto label_1c7560;
        case 0x1c7564u: goto label_1c7564;
        case 0x1c7568u: goto label_1c7568;
        case 0x1c756cu: goto label_1c756c;
        case 0x1c7570u: goto label_1c7570;
        case 0x1c7574u: goto label_1c7574;
        case 0x1c7578u: goto label_1c7578;
        case 0x1c757cu: goto label_1c757c;
        case 0x1c7580u: goto label_1c7580;
        case 0x1c7584u: goto label_1c7584;
        case 0x1c7588u: goto label_1c7588;
        case 0x1c758cu: goto label_1c758c;
        case 0x1c7590u: goto label_1c7590;
        case 0x1c7594u: goto label_1c7594;
        case 0x1c7598u: goto label_1c7598;
        case 0x1c759cu: goto label_1c759c;
        case 0x1c75a0u: goto label_1c75a0;
        case 0x1c75a4u: goto label_1c75a4;
        case 0x1c75a8u: goto label_1c75a8;
        case 0x1c75acu: goto label_1c75ac;
        case 0x1c75b0u: goto label_1c75b0;
        case 0x1c75b4u: goto label_1c75b4;
        case 0x1c75b8u: goto label_1c75b8;
        case 0x1c75bcu: goto label_1c75bc;
        case 0x1c75c0u: goto label_1c75c0;
        case 0x1c75c4u: goto label_1c75c4;
        case 0x1c75c8u: goto label_1c75c8;
        case 0x1c75ccu: goto label_1c75cc;
        case 0x1c75d0u: goto label_1c75d0;
        case 0x1c75d4u: goto label_1c75d4;
        case 0x1c75d8u: goto label_1c75d8;
        case 0x1c75dcu: goto label_1c75dc;
        case 0x1c75e0u: goto label_1c75e0;
        case 0x1c75e4u: goto label_1c75e4;
        case 0x1c75e8u: goto label_1c75e8;
        case 0x1c75ecu: goto label_1c75ec;
        case 0x1c75f0u: goto label_1c75f0;
        case 0x1c75f4u: goto label_1c75f4;
        case 0x1c75f8u: goto label_1c75f8;
        case 0x1c75fcu: goto label_1c75fc;
        case 0x1c7600u: goto label_1c7600;
        case 0x1c7604u: goto label_1c7604;
        case 0x1c7608u: goto label_1c7608;
        case 0x1c760cu: goto label_1c760c;
        case 0x1c7610u: goto label_1c7610;
        case 0x1c7614u: goto label_1c7614;
        case 0x1c7618u: goto label_1c7618;
        case 0x1c761cu: goto label_1c761c;
        case 0x1c7620u: goto label_1c7620;
        case 0x1c7624u: goto label_1c7624;
        case 0x1c7628u: goto label_1c7628;
        case 0x1c762cu: goto label_1c762c;
        case 0x1c7630u: goto label_1c7630;
        case 0x1c7634u: goto label_1c7634;
        case 0x1c7638u: goto label_1c7638;
        case 0x1c763cu: goto label_1c763c;
        case 0x1c7640u: goto label_1c7640;
        case 0x1c7644u: goto label_1c7644;
        case 0x1c7648u: goto label_1c7648;
        case 0x1c764cu: goto label_1c764c;
        case 0x1c7650u: goto label_1c7650;
        case 0x1c7654u: goto label_1c7654;
        case 0x1c7658u: goto label_1c7658;
        case 0x1c765cu: goto label_1c765c;
        case 0x1c7660u: goto label_1c7660;
        case 0x1c7664u: goto label_1c7664;
        case 0x1c7668u: goto label_1c7668;
        case 0x1c766cu: goto label_1c766c;
        case 0x1c7670u: goto label_1c7670;
        case 0x1c7674u: goto label_1c7674;
        case 0x1c7678u: goto label_1c7678;
        case 0x1c767cu: goto label_1c767c;
        case 0x1c7680u: goto label_1c7680;
        case 0x1c7684u: goto label_1c7684;
        case 0x1c7688u: goto label_1c7688;
        case 0x1c768cu: goto label_1c768c;
        case 0x1c7690u: goto label_1c7690;
        case 0x1c7694u: goto label_1c7694;
        case 0x1c7698u: goto label_1c7698;
        case 0x1c769cu: goto label_1c769c;
        case 0x1c76a0u: goto label_1c76a0;
        case 0x1c76a4u: goto label_1c76a4;
        case 0x1c76a8u: goto label_1c76a8;
        case 0x1c76acu: goto label_1c76ac;
        case 0x1c76b0u: goto label_1c76b0;
        case 0x1c76b4u: goto label_1c76b4;
        case 0x1c76b8u: goto label_1c76b8;
        case 0x1c76bcu: goto label_1c76bc;
        case 0x1c76c0u: goto label_1c76c0;
        case 0x1c76c4u: goto label_1c76c4;
        case 0x1c76c8u: goto label_1c76c8;
        case 0x1c76ccu: goto label_1c76cc;
        case 0x1c76d0u: goto label_1c76d0;
        case 0x1c76d4u: goto label_1c76d4;
        case 0x1c76d8u: goto label_1c76d8;
        case 0x1c76dcu: goto label_1c76dc;
        case 0x1c76e0u: goto label_1c76e0;
        case 0x1c76e4u: goto label_1c76e4;
        case 0x1c76e8u: goto label_1c76e8;
        case 0x1c76ecu: goto label_1c76ec;
        case 0x1c76f0u: goto label_1c76f0;
        case 0x1c76f4u: goto label_1c76f4;
        case 0x1c76f8u: goto label_1c76f8;
        case 0x1c76fcu: goto label_1c76fc;
        case 0x1c7700u: goto label_1c7700;
        case 0x1c7704u: goto label_1c7704;
        case 0x1c7708u: goto label_1c7708;
        case 0x1c770cu: goto label_1c770c;
        case 0x1c7710u: goto label_1c7710;
        case 0x1c7714u: goto label_1c7714;
        case 0x1c7718u: goto label_1c7718;
        case 0x1c771cu: goto label_1c771c;
        case 0x1c7720u: goto label_1c7720;
        case 0x1c7724u: goto label_1c7724;
        case 0x1c7728u: goto label_1c7728;
        case 0x1c772cu: goto label_1c772c;
        case 0x1c7730u: goto label_1c7730;
        case 0x1c7734u: goto label_1c7734;
        case 0x1c7738u: goto label_1c7738;
        case 0x1c773cu: goto label_1c773c;
        case 0x1c7740u: goto label_1c7740;
        case 0x1c7744u: goto label_1c7744;
        case 0x1c7748u: goto label_1c7748;
        case 0x1c774cu: goto label_1c774c;
        case 0x1c7750u: goto label_1c7750;
        case 0x1c7754u: goto label_1c7754;
        case 0x1c7758u: goto label_1c7758;
        case 0x1c775cu: goto label_1c775c;
        case 0x1c7760u: goto label_1c7760;
        case 0x1c7764u: goto label_1c7764;
        case 0x1c7768u: goto label_1c7768;
        case 0x1c776cu: goto label_1c776c;
        case 0x1c7770u: goto label_1c7770;
        case 0x1c7774u: goto label_1c7774;
        case 0x1c7778u: goto label_1c7778;
        case 0x1c777cu: goto label_1c777c;
        case 0x1c7780u: goto label_1c7780;
        case 0x1c7784u: goto label_1c7784;
        case 0x1c7788u: goto label_1c7788;
        case 0x1c778cu: goto label_1c778c;
        case 0x1c7790u: goto label_1c7790;
        case 0x1c7794u: goto label_1c7794;
        case 0x1c7798u: goto label_1c7798;
        case 0x1c779cu: goto label_1c779c;
        case 0x1c77a0u: goto label_1c77a0;
        case 0x1c77a4u: goto label_1c77a4;
        case 0x1c77a8u: goto label_1c77a8;
        case 0x1c77acu: goto label_1c77ac;
        case 0x1c77b0u: goto label_1c77b0;
        case 0x1c77b4u: goto label_1c77b4;
        case 0x1c77b8u: goto label_1c77b8;
        case 0x1c77bcu: goto label_1c77bc;
        case 0x1c77c0u: goto label_1c77c0;
        case 0x1c77c4u: goto label_1c77c4;
        case 0x1c77c8u: goto label_1c77c8;
        case 0x1c77ccu: goto label_1c77cc;
        case 0x1c77d0u: goto label_1c77d0;
        case 0x1c77d4u: goto label_1c77d4;
        case 0x1c77d8u: goto label_1c77d8;
        case 0x1c77dcu: goto label_1c77dc;
        case 0x1c77e0u: goto label_1c77e0;
        case 0x1c77e4u: goto label_1c77e4;
        case 0x1c77e8u: goto label_1c77e8;
        case 0x1c77ecu: goto label_1c77ec;
        case 0x1c77f0u: goto label_1c77f0;
        case 0x1c77f4u: goto label_1c77f4;
        case 0x1c77f8u: goto label_1c77f8;
        case 0x1c77fcu: goto label_1c77fc;
        case 0x1c7800u: goto label_1c7800;
        case 0x1c7804u: goto label_1c7804;
        case 0x1c7808u: goto label_1c7808;
        case 0x1c780cu: goto label_1c780c;
        case 0x1c7810u: goto label_1c7810;
        case 0x1c7814u: goto label_1c7814;
        case 0x1c7818u: goto label_1c7818;
        case 0x1c781cu: goto label_1c781c;
        case 0x1c7820u: goto label_1c7820;
        case 0x1c7824u: goto label_1c7824;
        case 0x1c7828u: goto label_1c7828;
        case 0x1c782cu: goto label_1c782c;
        case 0x1c7830u: goto label_1c7830;
        case 0x1c7834u: goto label_1c7834;
        case 0x1c7838u: goto label_1c7838;
        case 0x1c783cu: goto label_1c783c;
        case 0x1c7840u: goto label_1c7840;
        case 0x1c7844u: goto label_1c7844;
        case 0x1c7848u: goto label_1c7848;
        case 0x1c784cu: goto label_1c784c;
        case 0x1c7850u: goto label_1c7850;
        case 0x1c7854u: goto label_1c7854;
        case 0x1c7858u: goto label_1c7858;
        case 0x1c785cu: goto label_1c785c;
        case 0x1c7860u: goto label_1c7860;
        case 0x1c7864u: goto label_1c7864;
        case 0x1c7868u: goto label_1c7868;
        case 0x1c786cu: goto label_1c786c;
        case 0x1c7870u: goto label_1c7870;
        case 0x1c7874u: goto label_1c7874;
        case 0x1c7878u: goto label_1c7878;
        case 0x1c787cu: goto label_1c787c;
        case 0x1c7880u: goto label_1c7880;
        case 0x1c7884u: goto label_1c7884;
        case 0x1c7888u: goto label_1c7888;
        case 0x1c788cu: goto label_1c788c;
        case 0x1c7890u: goto label_1c7890;
        case 0x1c7894u: goto label_1c7894;
        case 0x1c7898u: goto label_1c7898;
        case 0x1c789cu: goto label_1c789c;
        case 0x1c78a0u: goto label_1c78a0;
        case 0x1c78a4u: goto label_1c78a4;
        case 0x1c78a8u: goto label_1c78a8;
        case 0x1c78acu: goto label_1c78ac;
        case 0x1c78b0u: goto label_1c78b0;
        case 0x1c78b4u: goto label_1c78b4;
        case 0x1c78b8u: goto label_1c78b8;
        case 0x1c78bcu: goto label_1c78bc;
        case 0x1c78c0u: goto label_1c78c0;
        case 0x1c78c4u: goto label_1c78c4;
        case 0x1c78c8u: goto label_1c78c8;
        case 0x1c78ccu: goto label_1c78cc;
        case 0x1c78d0u: goto label_1c78d0;
        case 0x1c78d4u: goto label_1c78d4;
        case 0x1c78d8u: goto label_1c78d8;
        case 0x1c78dcu: goto label_1c78dc;
        case 0x1c78e0u: goto label_1c78e0;
        case 0x1c78e4u: goto label_1c78e4;
        case 0x1c78e8u: goto label_1c78e8;
        case 0x1c78ecu: goto label_1c78ec;
        case 0x1c78f0u: goto label_1c78f0;
        case 0x1c78f4u: goto label_1c78f4;
        case 0x1c78f8u: goto label_1c78f8;
        case 0x1c78fcu: goto label_1c78fc;
        case 0x1c7900u: goto label_1c7900;
        case 0x1c7904u: goto label_1c7904;
        case 0x1c7908u: goto label_1c7908;
        case 0x1c790cu: goto label_1c790c;
        case 0x1c7910u: goto label_1c7910;
        case 0x1c7914u: goto label_1c7914;
        case 0x1c7918u: goto label_1c7918;
        case 0x1c791cu: goto label_1c791c;
        case 0x1c7920u: goto label_1c7920;
        case 0x1c7924u: goto label_1c7924;
        case 0x1c7928u: goto label_1c7928;
        case 0x1c792cu: goto label_1c792c;
        case 0x1c7930u: goto label_1c7930;
        case 0x1c7934u: goto label_1c7934;
        case 0x1c7938u: goto label_1c7938;
        case 0x1c793cu: goto label_1c793c;
        case 0x1c7940u: goto label_1c7940;
        case 0x1c7944u: goto label_1c7944;
        case 0x1c7948u: goto label_1c7948;
        case 0x1c794cu: goto label_1c794c;
        case 0x1c7950u: goto label_1c7950;
        case 0x1c7954u: goto label_1c7954;
        case 0x1c7958u: goto label_1c7958;
        case 0x1c795cu: goto label_1c795c;
        case 0x1c7960u: goto label_1c7960;
        case 0x1c7964u: goto label_1c7964;
        case 0x1c7968u: goto label_1c7968;
        case 0x1c796cu: goto label_1c796c;
        case 0x1c7970u: goto label_1c7970;
        case 0x1c7974u: goto label_1c7974;
        case 0x1c7978u: goto label_1c7978;
        case 0x1c797cu: goto label_1c797c;
        case 0x1c7980u: goto label_1c7980;
        case 0x1c7984u: goto label_1c7984;
        case 0x1c7988u: goto label_1c7988;
        case 0x1c798cu: goto label_1c798c;
        case 0x1c7990u: goto label_1c7990;
        case 0x1c7994u: goto label_1c7994;
        case 0x1c7998u: goto label_1c7998;
        case 0x1c799cu: goto label_1c799c;
        case 0x1c79a0u: goto label_1c79a0;
        case 0x1c79a4u: goto label_1c79a4;
        case 0x1c79a8u: goto label_1c79a8;
        case 0x1c79acu: goto label_1c79ac;
        case 0x1c79b0u: goto label_1c79b0;
        case 0x1c79b4u: goto label_1c79b4;
        case 0x1c79b8u: goto label_1c79b8;
        case 0x1c79bcu: goto label_1c79bc;
        case 0x1c79c0u: goto label_1c79c0;
        case 0x1c79c4u: goto label_1c79c4;
        case 0x1c79c8u: goto label_1c79c8;
        case 0x1c79ccu: goto label_1c79cc;
        case 0x1c79d0u: goto label_1c79d0;
        case 0x1c79d4u: goto label_1c79d4;
        case 0x1c79d8u: goto label_1c79d8;
        case 0x1c79dcu: goto label_1c79dc;
        case 0x1c79e0u: goto label_1c79e0;
        case 0x1c79e4u: goto label_1c79e4;
        case 0x1c79e8u: goto label_1c79e8;
        case 0x1c79ecu: goto label_1c79ec;
        case 0x1c79f0u: goto label_1c79f0;
        case 0x1c79f4u: goto label_1c79f4;
        case 0x1c79f8u: goto label_1c79f8;
        case 0x1c79fcu: goto label_1c79fc;
        case 0x1c7a00u: goto label_1c7a00;
        case 0x1c7a04u: goto label_1c7a04;
        case 0x1c7a08u: goto label_1c7a08;
        case 0x1c7a0cu: goto label_1c7a0c;
        case 0x1c7a10u: goto label_1c7a10;
        case 0x1c7a14u: goto label_1c7a14;
        case 0x1c7a18u: goto label_1c7a18;
        case 0x1c7a1cu: goto label_1c7a1c;
        case 0x1c7a20u: goto label_1c7a20;
        case 0x1c7a24u: goto label_1c7a24;
        case 0x1c7a28u: goto label_1c7a28;
        case 0x1c7a2cu: goto label_1c7a2c;
        case 0x1c7a30u: goto label_1c7a30;
        case 0x1c7a34u: goto label_1c7a34;
        case 0x1c7a38u: goto label_1c7a38;
        case 0x1c7a3cu: goto label_1c7a3c;
        case 0x1c7a40u: goto label_1c7a40;
        case 0x1c7a44u: goto label_1c7a44;
        case 0x1c7a48u: goto label_1c7a48;
        case 0x1c7a4cu: goto label_1c7a4c;
        case 0x1c7a50u: goto label_1c7a50;
        case 0x1c7a54u: goto label_1c7a54;
        case 0x1c7a58u: goto label_1c7a58;
        case 0x1c7a5cu: goto label_1c7a5c;
        case 0x1c7a60u: goto label_1c7a60;
        case 0x1c7a64u: goto label_1c7a64;
        case 0x1c7a68u: goto label_1c7a68;
        case 0x1c7a6cu: goto label_1c7a6c;
        case 0x1c7a70u: goto label_1c7a70;
        case 0x1c7a74u: goto label_1c7a74;
        case 0x1c7a78u: goto label_1c7a78;
        case 0x1c7a7cu: goto label_1c7a7c;
        case 0x1c7a80u: goto label_1c7a80;
        case 0x1c7a84u: goto label_1c7a84;
        case 0x1c7a88u: goto label_1c7a88;
        case 0x1c7a8cu: goto label_1c7a8c;
        case 0x1c7a90u: goto label_1c7a90;
        case 0x1c7a94u: goto label_1c7a94;
        case 0x1c7a98u: goto label_1c7a98;
        case 0x1c7a9cu: goto label_1c7a9c;
        case 0x1c7aa0u: goto label_1c7aa0;
        case 0x1c7aa4u: goto label_1c7aa4;
        case 0x1c7aa8u: goto label_1c7aa8;
        case 0x1c7aacu: goto label_1c7aac;
        case 0x1c7ab0u: goto label_1c7ab0;
        case 0x1c7ab4u: goto label_1c7ab4;
        case 0x1c7ab8u: goto label_1c7ab8;
        case 0x1c7abcu: goto label_1c7abc;
        case 0x1c7ac0u: goto label_1c7ac0;
        case 0x1c7ac4u: goto label_1c7ac4;
        case 0x1c7ac8u: goto label_1c7ac8;
        case 0x1c7accu: goto label_1c7acc;
        case 0x1c7ad0u: goto label_1c7ad0;
        case 0x1c7ad4u: goto label_1c7ad4;
        case 0x1c7ad8u: goto label_1c7ad8;
        case 0x1c7adcu: goto label_1c7adc;
        case 0x1c7ae0u: goto label_1c7ae0;
        case 0x1c7ae4u: goto label_1c7ae4;
        case 0x1c7ae8u: goto label_1c7ae8;
        case 0x1c7aecu: goto label_1c7aec;
        case 0x1c7af0u: goto label_1c7af0;
        case 0x1c7af4u: goto label_1c7af4;
        case 0x1c7af8u: goto label_1c7af8;
        case 0x1c7afcu: goto label_1c7afc;
        case 0x1c7b00u: goto label_1c7b00;
        case 0x1c7b04u: goto label_1c7b04;
        case 0x1c7b08u: goto label_1c7b08;
        case 0x1c7b0cu: goto label_1c7b0c;
        case 0x1c7b10u: goto label_1c7b10;
        case 0x1c7b14u: goto label_1c7b14;
        case 0x1c7b18u: goto label_1c7b18;
        case 0x1c7b1cu: goto label_1c7b1c;
        case 0x1c7b20u: goto label_1c7b20;
        case 0x1c7b24u: goto label_1c7b24;
        case 0x1c7b28u: goto label_1c7b28;
        case 0x1c7b2cu: goto label_1c7b2c;
        case 0x1c7b30u: goto label_1c7b30;
        case 0x1c7b34u: goto label_1c7b34;
        case 0x1c7b38u: goto label_1c7b38;
        case 0x1c7b3cu: goto label_1c7b3c;
        case 0x1c7b40u: goto label_1c7b40;
        case 0x1c7b44u: goto label_1c7b44;
        case 0x1c7b48u: goto label_1c7b48;
        case 0x1c7b4cu: goto label_1c7b4c;
        case 0x1c7b50u: goto label_1c7b50;
        case 0x1c7b54u: goto label_1c7b54;
        case 0x1c7b58u: goto label_1c7b58;
        case 0x1c7b5cu: goto label_1c7b5c;
        case 0x1c7b60u: goto label_1c7b60;
        case 0x1c7b64u: goto label_1c7b64;
        case 0x1c7b68u: goto label_1c7b68;
        case 0x1c7b6cu: goto label_1c7b6c;
        case 0x1c7b70u: goto label_1c7b70;
        case 0x1c7b74u: goto label_1c7b74;
        case 0x1c7b78u: goto label_1c7b78;
        case 0x1c7b7cu: goto label_1c7b7c;
        case 0x1c7b80u: goto label_1c7b80;
        case 0x1c7b84u: goto label_1c7b84;
        case 0x1c7b88u: goto label_1c7b88;
        case 0x1c7b8cu: goto label_1c7b8c;
        case 0x1c7b90u: goto label_1c7b90;
        case 0x1c7b94u: goto label_1c7b94;
        case 0x1c7b98u: goto label_1c7b98;
        case 0x1c7b9cu: goto label_1c7b9c;
        case 0x1c7ba0u: goto label_1c7ba0;
        case 0x1c7ba4u: goto label_1c7ba4;
        case 0x1c7ba8u: goto label_1c7ba8;
        case 0x1c7bacu: goto label_1c7bac;
        case 0x1c7bb0u: goto label_1c7bb0;
        case 0x1c7bb4u: goto label_1c7bb4;
        case 0x1c7bb8u: goto label_1c7bb8;
        case 0x1c7bbcu: goto label_1c7bbc;
        case 0x1c7bc0u: goto label_1c7bc0;
        case 0x1c7bc4u: goto label_1c7bc4;
        case 0x1c7bc8u: goto label_1c7bc8;
        case 0x1c7bccu: goto label_1c7bcc;
        case 0x1c7bd0u: goto label_1c7bd0;
        case 0x1c7bd4u: goto label_1c7bd4;
        case 0x1c7bd8u: goto label_1c7bd8;
        case 0x1c7bdcu: goto label_1c7bdc;
        case 0x1c7be0u: goto label_1c7be0;
        case 0x1c7be4u: goto label_1c7be4;
        case 0x1c7be8u: goto label_1c7be8;
        case 0x1c7becu: goto label_1c7bec;
        case 0x1c7bf0u: goto label_1c7bf0;
        case 0x1c7bf4u: goto label_1c7bf4;
        case 0x1c7bf8u: goto label_1c7bf8;
        case 0x1c7bfcu: goto label_1c7bfc;
        case 0x1c7c00u: goto label_1c7c00;
        case 0x1c7c04u: goto label_1c7c04;
        case 0x1c7c08u: goto label_1c7c08;
        case 0x1c7c0cu: goto label_1c7c0c;
        case 0x1c7c10u: goto label_1c7c10;
        case 0x1c7c14u: goto label_1c7c14;
        case 0x1c7c18u: goto label_1c7c18;
        case 0x1c7c1cu: goto label_1c7c1c;
        case 0x1c7c20u: goto label_1c7c20;
        case 0x1c7c24u: goto label_1c7c24;
        case 0x1c7c28u: goto label_1c7c28;
        case 0x1c7c2cu: goto label_1c7c2c;
        case 0x1c7c30u: goto label_1c7c30;
        case 0x1c7c34u: goto label_1c7c34;
        case 0x1c7c38u: goto label_1c7c38;
        case 0x1c7c3cu: goto label_1c7c3c;
        case 0x1c7c40u: goto label_1c7c40;
        case 0x1c7c44u: goto label_1c7c44;
        case 0x1c7c48u: goto label_1c7c48;
        case 0x1c7c4cu: goto label_1c7c4c;
        case 0x1c7c50u: goto label_1c7c50;
        case 0x1c7c54u: goto label_1c7c54;
        case 0x1c7c58u: goto label_1c7c58;
        case 0x1c7c5cu: goto label_1c7c5c;
        case 0x1c7c60u: goto label_1c7c60;
        case 0x1c7c64u: goto label_1c7c64;
        case 0x1c7c68u: goto label_1c7c68;
        case 0x1c7c6cu: goto label_1c7c6c;
        case 0x1c7c70u: goto label_1c7c70;
        case 0x1c7c74u: goto label_1c7c74;
        case 0x1c7c78u: goto label_1c7c78;
        case 0x1c7c7cu: goto label_1c7c7c;
        case 0x1c7c80u: goto label_1c7c80;
        case 0x1c7c84u: goto label_1c7c84;
        case 0x1c7c88u: goto label_1c7c88;
        case 0x1c7c8cu: goto label_1c7c8c;
        case 0x1c7c90u: goto label_1c7c90;
        case 0x1c7c94u: goto label_1c7c94;
        case 0x1c7c98u: goto label_1c7c98;
        case 0x1c7c9cu: goto label_1c7c9c;
        case 0x1c7ca0u: goto label_1c7ca0;
        case 0x1c7ca4u: goto label_1c7ca4;
        case 0x1c7ca8u: goto label_1c7ca8;
        case 0x1c7cacu: goto label_1c7cac;
        case 0x1c7cb0u: goto label_1c7cb0;
        case 0x1c7cb4u: goto label_1c7cb4;
        case 0x1c7cb8u: goto label_1c7cb8;
        case 0x1c7cbcu: goto label_1c7cbc;
        case 0x1c7cc0u: goto label_1c7cc0;
        case 0x1c7cc4u: goto label_1c7cc4;
        case 0x1c7cc8u: goto label_1c7cc8;
        case 0x1c7cccu: goto label_1c7ccc;
        case 0x1c7cd0u: goto label_1c7cd0;
        case 0x1c7cd4u: goto label_1c7cd4;
        case 0x1c7cd8u: goto label_1c7cd8;
        case 0x1c7cdcu: goto label_1c7cdc;
        case 0x1c7ce0u: goto label_1c7ce0;
        case 0x1c7ce4u: goto label_1c7ce4;
        case 0x1c7ce8u: goto label_1c7ce8;
        case 0x1c7cecu: goto label_1c7cec;
        case 0x1c7cf0u: goto label_1c7cf0;
        case 0x1c7cf4u: goto label_1c7cf4;
        case 0x1c7cf8u: goto label_1c7cf8;
        case 0x1c7cfcu: goto label_1c7cfc;
        case 0x1c7d00u: goto label_1c7d00;
        case 0x1c7d04u: goto label_1c7d04;
        case 0x1c7d08u: goto label_1c7d08;
        case 0x1c7d0cu: goto label_1c7d0c;
        case 0x1c7d10u: goto label_1c7d10;
        case 0x1c7d14u: goto label_1c7d14;
        case 0x1c7d18u: goto label_1c7d18;
        case 0x1c7d1cu: goto label_1c7d1c;
        case 0x1c7d20u: goto label_1c7d20;
        case 0x1c7d24u: goto label_1c7d24;
        case 0x1c7d28u: goto label_1c7d28;
        case 0x1c7d2cu: goto label_1c7d2c;
        case 0x1c7d30u: goto label_1c7d30;
        case 0x1c7d34u: goto label_1c7d34;
        case 0x1c7d38u: goto label_1c7d38;
        case 0x1c7d3cu: goto label_1c7d3c;
        case 0x1c7d40u: goto label_1c7d40;
        case 0x1c7d44u: goto label_1c7d44;
        case 0x1c7d48u: goto label_1c7d48;
        case 0x1c7d4cu: goto label_1c7d4c;
        case 0x1c7d50u: goto label_1c7d50;
        case 0x1c7d54u: goto label_1c7d54;
        case 0x1c7d58u: goto label_1c7d58;
        case 0x1c7d5cu: goto label_1c7d5c;
        case 0x1c7d60u: goto label_1c7d60;
        case 0x1c7d64u: goto label_1c7d64;
        case 0x1c7d68u: goto label_1c7d68;
        case 0x1c7d6cu: goto label_1c7d6c;
        case 0x1c7d70u: goto label_1c7d70;
        case 0x1c7d74u: goto label_1c7d74;
        case 0x1c7d78u: goto label_1c7d78;
        case 0x1c7d7cu: goto label_1c7d7c;
        case 0x1c7d80u: goto label_1c7d80;
        case 0x1c7d84u: goto label_1c7d84;
        case 0x1c7d88u: goto label_1c7d88;
        case 0x1c7d8cu: goto label_1c7d8c;
        case 0x1c7d90u: goto label_1c7d90;
        case 0x1c7d94u: goto label_1c7d94;
        case 0x1c7d98u: goto label_1c7d98;
        case 0x1c7d9cu: goto label_1c7d9c;
        case 0x1c7da0u: goto label_1c7da0;
        case 0x1c7da4u: goto label_1c7da4;
        case 0x1c7da8u: goto label_1c7da8;
        case 0x1c7dacu: goto label_1c7dac;
        case 0x1c7db0u: goto label_1c7db0;
        case 0x1c7db4u: goto label_1c7db4;
        case 0x1c7db8u: goto label_1c7db8;
        case 0x1c7dbcu: goto label_1c7dbc;
        case 0x1c7dc0u: goto label_1c7dc0;
        case 0x1c7dc4u: goto label_1c7dc4;
        case 0x1c7dc8u: goto label_1c7dc8;
        case 0x1c7dccu: goto label_1c7dcc;
        case 0x1c7dd0u: goto label_1c7dd0;
        case 0x1c7dd4u: goto label_1c7dd4;
        case 0x1c7dd8u: goto label_1c7dd8;
        case 0x1c7ddcu: goto label_1c7ddc;
        case 0x1c7de0u: goto label_1c7de0;
        case 0x1c7de4u: goto label_1c7de4;
        case 0x1c7de8u: goto label_1c7de8;
        case 0x1c7decu: goto label_1c7dec;
        case 0x1c7df0u: goto label_1c7df0;
        case 0x1c7df4u: goto label_1c7df4;
        case 0x1c7df8u: goto label_1c7df8;
        case 0x1c7dfcu: goto label_1c7dfc;
        case 0x1c7e00u: goto label_1c7e00;
        case 0x1c7e04u: goto label_1c7e04;
        case 0x1c7e08u: goto label_1c7e08;
        case 0x1c7e0cu: goto label_1c7e0c;
        case 0x1c7e10u: goto label_1c7e10;
        case 0x1c7e14u: goto label_1c7e14;
        case 0x1c7e18u: goto label_1c7e18;
        case 0x1c7e1cu: goto label_1c7e1c;
        case 0x1c7e20u: goto label_1c7e20;
        case 0x1c7e24u: goto label_1c7e24;
        case 0x1c7e28u: goto label_1c7e28;
        case 0x1c7e2cu: goto label_1c7e2c;
        case 0x1c7e30u: goto label_1c7e30;
        case 0x1c7e34u: goto label_1c7e34;
        case 0x1c7e38u: goto label_1c7e38;
        case 0x1c7e3cu: goto label_1c7e3c;
        case 0x1c7e40u: goto label_1c7e40;
        case 0x1c7e44u: goto label_1c7e44;
        case 0x1c7e48u: goto label_1c7e48;
        case 0x1c7e4cu: goto label_1c7e4c;
        case 0x1c7e50u: goto label_1c7e50;
        case 0x1c7e54u: goto label_1c7e54;
        case 0x1c7e58u: goto label_1c7e58;
        case 0x1c7e5cu: goto label_1c7e5c;
        case 0x1c7e60u: goto label_1c7e60;
        case 0x1c7e64u: goto label_1c7e64;
        case 0x1c7e68u: goto label_1c7e68;
        case 0x1c7e6cu: goto label_1c7e6c;
        case 0x1c7e70u: goto label_1c7e70;
        case 0x1c7e74u: goto label_1c7e74;
        case 0x1c7e78u: goto label_1c7e78;
        case 0x1c7e7cu: goto label_1c7e7c;
        case 0x1c7e80u: goto label_1c7e80;
        case 0x1c7e84u: goto label_1c7e84;
        case 0x1c7e88u: goto label_1c7e88;
        case 0x1c7e8cu: goto label_1c7e8c;
        case 0x1c7e90u: goto label_1c7e90;
        case 0x1c7e94u: goto label_1c7e94;
        case 0x1c7e98u: goto label_1c7e98;
        case 0x1c7e9cu: goto label_1c7e9c;
        case 0x1c7ea0u: goto label_1c7ea0;
        case 0x1c7ea4u: goto label_1c7ea4;
        case 0x1c7ea8u: goto label_1c7ea8;
        case 0x1c7eacu: goto label_1c7eac;
        case 0x1c7eb0u: goto label_1c7eb0;
        case 0x1c7eb4u: goto label_1c7eb4;
        case 0x1c7eb8u: goto label_1c7eb8;
        case 0x1c7ebcu: goto label_1c7ebc;
        case 0x1c7ec0u: goto label_1c7ec0;
        case 0x1c7ec4u: goto label_1c7ec4;
        case 0x1c7ec8u: goto label_1c7ec8;
        case 0x1c7eccu: goto label_1c7ecc;
        case 0x1c7ed0u: goto label_1c7ed0;
        case 0x1c7ed4u: goto label_1c7ed4;
        case 0x1c7ed8u: goto label_1c7ed8;
        case 0x1c7edcu: goto label_1c7edc;
        case 0x1c7ee0u: goto label_1c7ee0;
        case 0x1c7ee4u: goto label_1c7ee4;
        case 0x1c7ee8u: goto label_1c7ee8;
        case 0x1c7eecu: goto label_1c7eec;
        case 0x1c7ef0u: goto label_1c7ef0;
        case 0x1c7ef4u: goto label_1c7ef4;
        case 0x1c7ef8u: goto label_1c7ef8;
        case 0x1c7efcu: goto label_1c7efc;
        case 0x1c7f00u: goto label_1c7f00;
        case 0x1c7f04u: goto label_1c7f04;
        case 0x1c7f08u: goto label_1c7f08;
        case 0x1c7f0cu: goto label_1c7f0c;
        case 0x1c7f10u: goto label_1c7f10;
        case 0x1c7f14u: goto label_1c7f14;
        case 0x1c7f18u: goto label_1c7f18;
        case 0x1c7f1cu: goto label_1c7f1c;
        case 0x1c7f20u: goto label_1c7f20;
        case 0x1c7f24u: goto label_1c7f24;
        case 0x1c7f28u: goto label_1c7f28;
        case 0x1c7f2cu: goto label_1c7f2c;
        case 0x1c7f30u: goto label_1c7f30;
        case 0x1c7f34u: goto label_1c7f34;
        case 0x1c7f38u: goto label_1c7f38;
        case 0x1c7f3cu: goto label_1c7f3c;
        case 0x1c7f40u: goto label_1c7f40;
        case 0x1c7f44u: goto label_1c7f44;
        case 0x1c7f48u: goto label_1c7f48;
        case 0x1c7f4cu: goto label_1c7f4c;
        case 0x1c7f50u: goto label_1c7f50;
        case 0x1c7f54u: goto label_1c7f54;
        case 0x1c7f58u: goto label_1c7f58;
        case 0x1c7f5cu: goto label_1c7f5c;
        case 0x1c7f60u: goto label_1c7f60;
        case 0x1c7f64u: goto label_1c7f64;
        case 0x1c7f68u: goto label_1c7f68;
        case 0x1c7f6cu: goto label_1c7f6c;
        case 0x1c7f70u: goto label_1c7f70;
        case 0x1c7f74u: goto label_1c7f74;
        case 0x1c7f78u: goto label_1c7f78;
        case 0x1c7f7cu: goto label_1c7f7c;
        case 0x1c7f80u: goto label_1c7f80;
        case 0x1c7f84u: goto label_1c7f84;
        case 0x1c7f88u: goto label_1c7f88;
        case 0x1c7f8cu: goto label_1c7f8c;
        case 0x1c7f90u: goto label_1c7f90;
        case 0x1c7f94u: goto label_1c7f94;
        case 0x1c7f98u: goto label_1c7f98;
        case 0x1c7f9cu: goto label_1c7f9c;
        case 0x1c7fa0u: goto label_1c7fa0;
        case 0x1c7fa4u: goto label_1c7fa4;
        case 0x1c7fa8u: goto label_1c7fa8;
        case 0x1c7facu: goto label_1c7fac;
        case 0x1c7fb0u: goto label_1c7fb0;
        case 0x1c7fb4u: goto label_1c7fb4;
        case 0x1c7fb8u: goto label_1c7fb8;
        case 0x1c7fbcu: goto label_1c7fbc;
        case 0x1c7fc0u: goto label_1c7fc0;
        case 0x1c7fc4u: goto label_1c7fc4;
        case 0x1c7fc8u: goto label_1c7fc8;
        case 0x1c7fccu: goto label_1c7fcc;
        case 0x1c7fd0u: goto label_1c7fd0;
        case 0x1c7fd4u: goto label_1c7fd4;
        case 0x1c7fd8u: goto label_1c7fd8;
        case 0x1c7fdcu: goto label_1c7fdc;
        case 0x1c7fe0u: goto label_1c7fe0;
        case 0x1c7fe4u: goto label_1c7fe4;
        case 0x1c7fe8u: goto label_1c7fe8;
        case 0x1c7fecu: goto label_1c7fec;
        case 0x1c7ff0u: goto label_1c7ff0;
        case 0x1c7ff4u: goto label_1c7ff4;
        case 0x1c7ff8u: goto label_1c7ff8;
        case 0x1c7ffcu: goto label_1c7ffc;
        case 0x1c8000u: goto label_1c8000;
        case 0x1c8004u: goto label_1c8004;
        case 0x1c8008u: goto label_1c8008;
        case 0x1c800cu: goto label_1c800c;
        case 0x1c8010u: goto label_1c8010;
        case 0x1c8014u: goto label_1c8014;
        case 0x1c8018u: goto label_1c8018;
        case 0x1c801cu: goto label_1c801c;
        case 0x1c8020u: goto label_1c8020;
        case 0x1c8024u: goto label_1c8024;
        case 0x1c8028u: goto label_1c8028;
        case 0x1c802cu: goto label_1c802c;
        case 0x1c8030u: goto label_1c8030;
        case 0x1c8034u: goto label_1c8034;
        case 0x1c8038u: goto label_1c8038;
        case 0x1c803cu: goto label_1c803c;
        case 0x1c8040u: goto label_1c8040;
        case 0x1c8044u: goto label_1c8044;
        case 0x1c8048u: goto label_1c8048;
        case 0x1c804cu: goto label_1c804c;
        case 0x1c8050u: goto label_1c8050;
        case 0x1c8054u: goto label_1c8054;
        case 0x1c8058u: goto label_1c8058;
        case 0x1c805cu: goto label_1c805c;
        case 0x1c8060u: goto label_1c8060;
        case 0x1c8064u: goto label_1c8064;
        case 0x1c8068u: goto label_1c8068;
        case 0x1c806cu: goto label_1c806c;
        case 0x1c8070u: goto label_1c8070;
        case 0x1c8074u: goto label_1c8074;
        case 0x1c8078u: goto label_1c8078;
        case 0x1c807cu: goto label_1c807c;
        case 0x1c8080u: goto label_1c8080;
        case 0x1c8084u: goto label_1c8084;
        case 0x1c8088u: goto label_1c8088;
        case 0x1c808cu: goto label_1c808c;
        case 0x1c8090u: goto label_1c8090;
        case 0x1c8094u: goto label_1c8094;
        case 0x1c8098u: goto label_1c8098;
        case 0x1c809cu: goto label_1c809c;
        case 0x1c80a0u: goto label_1c80a0;
        case 0x1c80a4u: goto label_1c80a4;
        case 0x1c80a8u: goto label_1c80a8;
        case 0x1c80acu: goto label_1c80ac;
        case 0x1c80b0u: goto label_1c80b0;
        case 0x1c80b4u: goto label_1c80b4;
        case 0x1c80b8u: goto label_1c80b8;
        case 0x1c80bcu: goto label_1c80bc;
        case 0x1c80c0u: goto label_1c80c0;
        case 0x1c80c4u: goto label_1c80c4;
        case 0x1c80c8u: goto label_1c80c8;
        case 0x1c80ccu: goto label_1c80cc;
        case 0x1c80d0u: goto label_1c80d0;
        case 0x1c80d4u: goto label_1c80d4;
        case 0x1c80d8u: goto label_1c80d8;
        case 0x1c80dcu: goto label_1c80dc;
        case 0x1c80e0u: goto label_1c80e0;
        case 0x1c80e4u: goto label_1c80e4;
        case 0x1c80e8u: goto label_1c80e8;
        case 0x1c80ecu: goto label_1c80ec;
        case 0x1c80f0u: goto label_1c80f0;
        case 0x1c80f4u: goto label_1c80f4;
        case 0x1c80f8u: goto label_1c80f8;
        case 0x1c80fcu: goto label_1c80fc;
        case 0x1c8100u: goto label_1c8100;
        case 0x1c8104u: goto label_1c8104;
        case 0x1c8108u: goto label_1c8108;
        case 0x1c810cu: goto label_1c810c;
        case 0x1c8110u: goto label_1c8110;
        case 0x1c8114u: goto label_1c8114;
        case 0x1c8118u: goto label_1c8118;
        case 0x1c811cu: goto label_1c811c;
        case 0x1c8120u: goto label_1c8120;
        case 0x1c8124u: goto label_1c8124;
        case 0x1c8128u: goto label_1c8128;
        case 0x1c812cu: goto label_1c812c;
        case 0x1c8130u: goto label_1c8130;
        case 0x1c8134u: goto label_1c8134;
        case 0x1c8138u: goto label_1c8138;
        case 0x1c813cu: goto label_1c813c;
        case 0x1c8140u: goto label_1c8140;
        case 0x1c8144u: goto label_1c8144;
        case 0x1c8148u: goto label_1c8148;
        case 0x1c814cu: goto label_1c814c;
        case 0x1c8150u: goto label_1c8150;
        case 0x1c8154u: goto label_1c8154;
        case 0x1c8158u: goto label_1c8158;
        case 0x1c815cu: goto label_1c815c;
        case 0x1c8160u: goto label_1c8160;
        case 0x1c8164u: goto label_1c8164;
        case 0x1c8168u: goto label_1c8168;
        case 0x1c816cu: goto label_1c816c;
        case 0x1c8170u: goto label_1c8170;
        case 0x1c8174u: goto label_1c8174;
        case 0x1c8178u: goto label_1c8178;
        case 0x1c817cu: goto label_1c817c;
        case 0x1c8180u: goto label_1c8180;
        case 0x1c8184u: goto label_1c8184;
        case 0x1c8188u: goto label_1c8188;
        case 0x1c818cu: goto label_1c818c;
        case 0x1c8190u: goto label_1c8190;
        case 0x1c8194u: goto label_1c8194;
        case 0x1c8198u: goto label_1c8198;
        case 0x1c819cu: goto label_1c819c;
        case 0x1c81a0u: goto label_1c81a0;
        case 0x1c81a4u: goto label_1c81a4;
        case 0x1c81a8u: goto label_1c81a8;
        case 0x1c81acu: goto label_1c81ac;
        case 0x1c81b0u: goto label_1c81b0;
        case 0x1c81b4u: goto label_1c81b4;
        case 0x1c81b8u: goto label_1c81b8;
        case 0x1c81bcu: goto label_1c81bc;
        case 0x1c81c0u: goto label_1c81c0;
        case 0x1c81c4u: goto label_1c81c4;
        case 0x1c81c8u: goto label_1c81c8;
        case 0x1c81ccu: goto label_1c81cc;
        case 0x1c81d0u: goto label_1c81d0;
        case 0x1c81d4u: goto label_1c81d4;
        case 0x1c81d8u: goto label_1c81d8;
        case 0x1c81dcu: goto label_1c81dc;
        case 0x1c81e0u: goto label_1c81e0;
        case 0x1c81e4u: goto label_1c81e4;
        case 0x1c81e8u: goto label_1c81e8;
        case 0x1c81ecu: goto label_1c81ec;
        case 0x1c81f0u: goto label_1c81f0;
        case 0x1c81f4u: goto label_1c81f4;
        case 0x1c81f8u: goto label_1c81f8;
        case 0x1c81fcu: goto label_1c81fc;
        case 0x1c8200u: goto label_1c8200;
        case 0x1c8204u: goto label_1c8204;
        case 0x1c8208u: goto label_1c8208;
        case 0x1c820cu: goto label_1c820c;
        case 0x1c8210u: goto label_1c8210;
        case 0x1c8214u: goto label_1c8214;
        case 0x1c8218u: goto label_1c8218;
        case 0x1c821cu: goto label_1c821c;
        case 0x1c8220u: goto label_1c8220;
        case 0x1c8224u: goto label_1c8224;
        case 0x1c8228u: goto label_1c8228;
        case 0x1c822cu: goto label_1c822c;
        default: break;
    }

    ctx->pc = 0x1c7190u;

label_1c7190:
    // 0x1c7190: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c7190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1c7194:
    // 0x1c7194: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c7194u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1c7198:
    // 0x1c7198: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1c7198u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_1c719c:
    // 0x1c719c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x1c719cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
label_1c71a0:
    // 0x1c71a0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1c71a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1c71a4:
    // 0x1c71a4: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_1c71a8:
    if (ctx->pc == 0x1C71A8u) {
        ctx->pc = 0x1C71ACu;
        goto label_1c71ac;
    }
    ctx->pc = 0x1C71A4u;
    {
        const bool branch_taken_0x1c71a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c71a4) {
            ctx->pc = 0x1C71DCu;
            goto label_1c71dc;
        }
    }
    ctx->pc = 0x1C71ACu;
label_1c71ac:
    // 0x1c71ac: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1c71acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1c71b0:
    // 0x1c71b0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c71b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c71b4:
    // 0x1c71b4: 0xc071b94  jal         func_1C6E50
label_1c71b8:
    if (ctx->pc == 0x1C71B8u) {
        ctx->pc = 0x1C71BCu;
        goto label_1c71bc;
    }
    ctx->pc = 0x1C71B4u;
    SET_GPR_U32(ctx, 31, 0x1C71BCu);
    ctx->pc = 0x1C6E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C6E50u, 0x1C71B4u, 0x1C71BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C71BCu;
label_1c71bc:
    // 0x1c71bc: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x1c71bcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
label_1c71c0:
    // 0x1c71c0: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1c71c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_1c71c4:
    // 0x1c71c4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1c71c4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_1c71c8:
    // 0x1c71c8: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
label_1c71cc:
    if (ctx->pc == 0x1C71CCu) {
        ctx->pc = 0x1C71D0u;
        goto label_1c71d0;
    }
    ctx->pc = 0x1C71C8u;
    {
        const bool branch_taken_0x1c71c8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1c71c8) {
            ctx->pc = 0x1C71DCu;
            goto label_1c71dc;
        }
    }
    ctx->pc = 0x1C71D0u;
label_1c71d0:
    // 0x1c71d0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1c71d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1c71d4:
    // 0x1c71d4: 0xc0ba070  jal         func_2E81C0
label_1c71d8:
    if (ctx->pc == 0x1C71D8u) {
        ctx->pc = 0x1C71DCu;
        goto label_1c71dc;
    }
    ctx->pc = 0x1C71D4u;
    SET_GPR_U32(ctx, 31, 0x1C71DCu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x1C71D4u, 0x1C71DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C71DCu;
label_1c71dc:
    // 0x1c71dc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1c71dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1c71e0:
    // 0x1c71e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c71e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c71e4:
    // 0x1c71e4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1c71e4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1c71e8:
    // 0x1c71e8: 0x3e00008  jr          $ra
label_1c71ec:
    if (ctx->pc == 0x1C71ECu) {
        ctx->pc = 0x1C71F0u;
        goto label_1c71f0;
    }
    ctx->pc = 0x1C71E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C71E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C71F0u;
label_1c71f0:
    // 0x1c71f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c71f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1c71f4:
    // 0x1c71f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c71f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1c71f8:
    // 0x1c71f8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1c71f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_1c71fc:
    // 0x1c71fc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1c71fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1c7200:
    // 0x1c7200: 0xc064aec  jal         func_192BB0
label_1c7204:
    if (ctx->pc == 0x1C7204u) {
        ctx->pc = 0x1C7208u;
        goto label_1c7208;
    }
    ctx->pc = 0x1C7200u;
    SET_GPR_U32(ctx, 31, 0x1C7208u);
    ctx->pc = 0x192BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192BB0u, 0x1C7200u, 0x1C7208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7208u;
label_1c7208:
    // 0x1c7208: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c7208u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c720c:
    // 0x1c720c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1c720cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1c7210:
    // 0x1c7210: 0x3e00008  jr          $ra
label_1c7214:
    if (ctx->pc == 0x1C7214u) {
        ctx->pc = 0x1C7218u;
        goto label_1c7218;
    }
    ctx->pc = 0x1C7210u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C7210u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C7218u;
label_1c7218:
    // 0x1c7218: 0x0  nop
    ctx->pc = 0x1c7218u;
    // NOP
label_1c721c:
    // 0x1c721c: 0x0  nop
    ctx->pc = 0x1c721cu;
    // NOP
label_1c7220:
    // 0x1c7220: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1c7220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1c7224:
    // 0x1c7224: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1c7224u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1c7228:
    // 0x1c7228: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c7228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1c722c:
    // 0x1c722c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c722cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1c7230:
    // 0x1c7230: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x1c7230u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
label_1c7234:
    // 0x1c7234: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x1c7234u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_1c7238:
    // 0x1c7238: 0xc064cb0  jal         func_1932C0
label_1c723c:
    if (ctx->pc == 0x1C723Cu) {
        ctx->pc = 0x1C7240u;
        goto label_1c7240;
    }
    ctx->pc = 0x1C7238u;
    SET_GPR_U32(ctx, 31, 0x1C7240u);
    ctx->pc = 0x1932C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1932C0u, 0x1C7238u, 0x1C7240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7240u;
label_1c7240:
    // 0x1c7240: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x1c7240u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1c7244:
    // 0x1c7244: 0x322300ff  andi        $v1, $s1, 0xFF
    ctx->pc = 0x1c7244u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
label_1c7248:
    // 0x1c7248: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c7248u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c724c:
    // 0x1c724c: 0x146200ee  bne         $v1, $v0, . + 4 + (0xEE << 2)
label_1c7250:
    if (ctx->pc == 0x1C7250u) {
        ctx->pc = 0x1C7254u;
        goto label_1c7254;
    }
    ctx->pc = 0x1C724Cu;
    {
        const bool branch_taken_0x1c724c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c724c) {
            ctx->pc = 0x1C7608u;
            goto label_1c7608;
        }
    }
    ctx->pc = 0x1C7254u;
label_1c7254:
    // 0x1c7254: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1c7254u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c7258:
    // 0x1c7258: 0x100000d1  b           . + 4 + (0xD1 << 2)
label_1c725c:
    if (ctx->pc == 0x1C725Cu) {
        ctx->pc = 0x1C7260u;
        goto label_1c7260;
    }
    ctx->pc = 0x1C7258u;
    {
        const bool branch_taken_0x1c7258 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c7258) {
            ctx->pc = 0x1C75A0u;
            goto label_1c75a0;
        }
    }
    ctx->pc = 0x1C7260u;
label_1c7260:
    // 0x1c7260: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x1c7260u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_1c7264:
    // 0x1c7264: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1c7264u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_1c7268:
    // 0x1c7268: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x1c7268u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_1c726c:
    // 0x1c726c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1c726cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_1c7270:
    // 0x1c7270: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c7270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1c7274:
    // 0x1c7274: 0xc44100ac  lwc1        $f1, 0xAC($v0)
    ctx->pc = 0x1c7274u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c7278:
    // 0x1c7278: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1c7278u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c727c:
    // 0x1c727c: 0x0  nop
    ctx->pc = 0x1c727cu;
    // NOP
label_1c7280:
    // 0x1c7280: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1c7280u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1c7284:
    // 0x1c7284: 0x4501000d  bc1t        . + 4 + (0xD << 2)
label_1c7288:
    if (ctx->pc == 0x1C7288u) {
        ctx->pc = 0x1C728Cu;
        goto label_1c728c;
    }
    ctx->pc = 0x1C7284u;
    {
        const bool branch_taken_0x1c7284 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c7284) {
            ctx->pc = 0x1C72BCu;
            goto label_1c72bc;
        }
    }
    ctx->pc = 0x1C728Cu;
label_1c728c:
    // 0x1c728c: 0x8f82bb70  lw          $v0, -0x4490($gp)
    ctx->pc = 0x1c728cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
label_1c7290:
    // 0x1c7290: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x1c7290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c7294:
    // 0x1c7294: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x1c7294u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_1c7298:
    // 0x1c7298: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1c7298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_1c729c:
    // 0x1c729c: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x1c729cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_1c72a0:
    // 0x1c72a0: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1c72a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_1c72a4:
    // 0x1c72a4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c72a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1c72a8:
    // 0x1c72a8: 0xc44000ac  lwc1        $f0, 0xAC($v0)
    ctx->pc = 0x1c72a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c72ac:
    // 0x1c72ac: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1c72acu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1c72b0:
    // 0x1c72b0: 0xe44000ac  swc1        $f0, 0xAC($v0)
    ctx->pc = 0x1c72b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 172), bits); }
label_1c72b4:
    // 0x1c72b4: 0x100000b9  b           . + 4 + (0xB9 << 2)
label_1c72b8:
    if (ctx->pc == 0x1C72B8u) {
        ctx->pc = 0x1C72BCu;
        goto label_1c72bc;
    }
    ctx->pc = 0x1C72B4u;
    {
        const bool branch_taken_0x1c72b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c72b4) {
            ctx->pc = 0x1C759Cu;
            goto label_1c759c;
        }
    }
    ctx->pc = 0x1C72BCu;
label_1c72bc:
    // 0x1c72bc: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x1c72bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_1c72c0:
    // 0x1c72c0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1c72c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_1c72c4:
    // 0x1c72c4: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x1c72c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_1c72c8:
    // 0x1c72c8: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1c72c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_1c72cc:
    // 0x1c72cc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c72ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1c72d0:
    // 0x1c72d0: 0x8c4200b0  lw          $v0, 0xB0($v0)
    ctx->pc = 0x1c72d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 176)));
label_1c72d4:
    // 0x1c72d4: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1c72d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1c72d8:
    // 0x1c72d8: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1c72d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_1c72dc:
    // 0x1c72dc: 0x24428830  addiu       $v0, $v0, -0x77D0
    ctx->pc = 0x1c72dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936624));
label_1c72e0:
    // 0x1c72e0: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1c72e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1c72e4:
    // 0x1c72e4: 0x8f82bb70  lw          $v0, -0x4490($gp)
    ctx->pc = 0x1c72e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
label_1c72e8:
    // 0x1c72e8: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x1c72e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c72ec:
    // 0x1c72ec: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x1c72ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c72f0:
    // 0x1c72f0: 0x46000902  mul.s       $f4, $f1, $f0
    ctx->pc = 0x1c72f0u;
    ctx->f[4] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1c72f4:
    // 0x1c72f4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1c72f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_1c72f8:
    // 0x1c72f8: 0x8c420038  lw          $v0, 0x38($v0)
    ctx->pc = 0x1c72f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
label_1c72fc:
    // 0x1c72fc: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_1c7300:
    if (ctx->pc == 0x1C7300u) {
        ctx->pc = 0x1C7304u;
        goto label_1c7304;
    }
    ctx->pc = 0x1C72FCu;
    {
        const bool branch_taken_0x1c72fc = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1c72fc) {
            ctx->pc = 0x1C7318u;
            goto label_1c7318;
        }
    }
    ctx->pc = 0x1C7304u;
label_1c7304:
    // 0x1c7304: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c7304u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c7308:
    // 0x1c7308: 0x0  nop
    ctx->pc = 0x1c7308u;
    // NOP
label_1c730c:
    // 0x1c730c: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x1c730cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_1c7310:
    // 0x1c7310: 0x10000008  b           . + 4 + (0x8 << 2)
label_1c7314:
    if (ctx->pc == 0x1C7314u) {
        ctx->pc = 0x1C7318u;
        goto label_1c7318;
    }
    ctx->pc = 0x1C7310u;
    {
        const bool branch_taken_0x1c7310 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c7310) {
            ctx->pc = 0x1C7334u;
            goto label_1c7334;
        }
    }
    ctx->pc = 0x1C7318u;
label_1c7318:
    // 0x1c7318: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1c7318u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_1c731c:
    // 0x1c731c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1c731cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1c7320:
    // 0x1c7320: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1c7320u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_1c7324:
    // 0x1c7324: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1c7324u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c7328:
    // 0x1c7328: 0x0  nop
    ctx->pc = 0x1c7328u;
    // NOP
label_1c732c:
    // 0x1c732c: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x1c732cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_1c7330:
    // 0x1c7330: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x1c7330u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_1c7334:
    // 0x1c7334: 0xc7828308  lwc1        $f2, -0x7CF8($gp)
    ctx->pc = 0x1c7334u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1c7338:
    // 0x1c7338: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1c7338u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1c733c:
    // 0x1c733c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c733cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1c7340:
    // 0x1c7340: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1c7340u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c7344:
    // 0x1c7344: 0x0  nop
    ctx->pc = 0x1c7344u;
    // NOP
label_1c7348:
    // 0x1c7348: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1c7348u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
label_1c734c:
    // 0x1c734c: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x1c734cu;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_1c7350:
    // 0x1c7350: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x1c7350u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
label_1c7354:
    // 0x1c7354: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x1c7354u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
label_1c7358:
    // 0x1c7358: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x1c7358u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_1c735c:
    // 0x1c735c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1c735cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_1c7360:
    // 0x1c7360: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x1c7360u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_1c7364:
    // 0x1c7364: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1c7364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_1c7368:
    // 0x1c7368: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c7368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1c736c:
    // 0x1c736c: 0xc44100a8  lwc1        $f1, 0xA8($v0)
    ctx->pc = 0x1c736cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c7370:
    // 0x1c7370: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x1c7370u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c7374:
    // 0x1c7374: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1c7374u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1c7378:
    // 0x1c7378: 0xe44000a8  swc1        $f0, 0xA8($v0)
    ctx->pc = 0x1c7378u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 168), bits); }
label_1c737c:
    // 0x1c737c: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x1c737cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_1c7380:
    // 0x1c7380: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1c7380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_1c7384:
    // 0x1c7384: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x1c7384u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_1c7388:
    // 0x1c7388: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1c7388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_1c738c:
    // 0x1c738c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c738cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1c7390:
    // 0x1c7390: 0xc44100a8  lwc1        $f1, 0xA8($v0)
    ctx->pc = 0x1c7390u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c7394:
    // 0x1c7394: 0x3c0243b4  lui         $v0, 0x43B4
    ctx->pc = 0x1c7394u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17332 << 16));
label_1c7398:
    // 0x1c7398: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c7398u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c739c:
    // 0x1c739c: 0x0  nop
    ctx->pc = 0x1c739cu;
    // NOP
label_1c73a0:
    // 0x1c73a0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1c73a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1c73a4:
    // 0x1c73a4: 0x4500000c  bc1f        . + 4 + (0xC << 2)
label_1c73a8:
    if (ctx->pc == 0x1C73A8u) {
        ctx->pc = 0x1C73ACu;
        goto label_1c73ac;
    }
    ctx->pc = 0x1C73A4u;
    {
        const bool branch_taken_0x1c73a4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c73a4) {
            ctx->pc = 0x1C73D8u;
            goto label_1c73d8;
        }
    }
    ctx->pc = 0x1C73ACu;
label_1c73ac:
    // 0x1c73ac: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x1c73acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_1c73b0:
    // 0x1c73b0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1c73b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_1c73b4:
    // 0x1c73b4: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x1c73b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_1c73b8:
    // 0x1c73b8: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1c73b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_1c73bc:
    // 0x1c73bc: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1c73bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1c73c0:
    // 0x1c73c0: 0xc46100a8  lwc1        $f1, 0xA8($v1)
    ctx->pc = 0x1c73c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c73c4:
    // 0x1c73c4: 0x3c0243b4  lui         $v0, 0x43B4
    ctx->pc = 0x1c73c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17332 << 16));
label_1c73c8:
    // 0x1c73c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c73c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c73cc:
    // 0x1c73cc: 0x0  nop
    ctx->pc = 0x1c73ccu;
    // NOP
label_1c73d0:
    // 0x1c73d0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1c73d0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1c73d4:
    // 0x1c73d4: 0xe46000a8  swc1        $f0, 0xA8($v1)
    ctx->pc = 0x1c73d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 168), bits); }
label_1c73d8:
    // 0x1c73d8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c73d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c73dc:
    // 0x1c73dc: 0x16020005  bne         $s0, $v0, . + 4 + (0x5 << 2)
label_1c73e0:
    if (ctx->pc == 0x1C73E0u) {
        ctx->pc = 0x1C73E4u;
        goto label_1c73e4;
    }
    ctx->pc = 0x1C73DCu;
    {
        const bool branch_taken_0x1c73dc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c73dc) {
            ctx->pc = 0x1C73F4u;
            goto label_1c73f4;
        }
    }
    ctx->pc = 0x1C73E4u;
label_1c73e4:
    // 0x1c73e4: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x1c73e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_1c73e8:
    // 0x1c73e8: 0xc7ac003c  lwc1        $f12, 0x3C($sp)
    ctx->pc = 0x1c73e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1c73ec:
    // 0x1c73ec: 0xc0721c4  jal         func_1C8710
label_1c73f0:
    if (ctx->pc == 0x1C73F0u) {
        ctx->pc = 0x1C73F4u;
        goto label_1c73f4;
    }
    ctx->pc = 0x1C73ECu;
    SET_GPR_U32(ctx, 31, 0x1C73F4u);
    ctx->pc = 0x1C8710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C8710u, 0x1C73ECu, 0x1C73F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C73F4u;
label_1c73f4:
    // 0x1c73f4: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x1c73f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_1c73f8:
    // 0x1c73f8: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1c73f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_1c73fc:
    // 0x1c73fc: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x1c73fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_1c7400:
    // 0x1c7400: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1c7400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_1c7404:
    // 0x1c7404: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c7404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1c7408:
    // 0x1c7408: 0xc78180b0  lwc1        $f1, -0x7F50($gp)
    ctx->pc = 0x1c7408u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c740c:
    // 0x1c740c: 0xc44000a8  lwc1        $f0, 0xA8($v0)
    ctx->pc = 0x1c740cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c7410:
    // 0x1c7410: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1c7410u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1c7414:
    // 0x1c7414: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x1c7414u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
label_1c7418:
    // 0x1c7418: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c7418u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c741c:
    // 0x1c741c: 0x0  nop
    ctx->pc = 0x1c741cu;
    // NOP
label_1c7420:
    // 0x1c7420: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x1c7420u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_1c7424:
    // 0x1c7424: 0x0  nop
    ctx->pc = 0x1c7424u;
    // NOP
label_1c7428:
    // 0x1c7428: 0x0  nop
    ctx->pc = 0x1c7428u;
    // NOP
label_1c742c:
    // 0x1c742c: 0x0  nop
    ctx->pc = 0x1c742cu;
    // NOP
label_1c7430:
    // 0x1c7430: 0xc0c38f0  jal         func_30E3C0
label_1c7434:
    if (ctx->pc == 0x1C7434u) {
        ctx->pc = 0x1C7438u;
        goto label_1c7438;
    }
    ctx->pc = 0x1C7430u;
    SET_GPR_U32(ctx, 31, 0x1C7438u);
    ctx->pc = 0x30E3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E3C0u, 0x1C7430u, 0x1C7438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7438u;
label_1c7438:
    // 0x1c7438: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1c7438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_1c743c:
    // 0x1c743c: 0xc44100e0  lwc1        $f1, 0xE0($v0)
    ctx->pc = 0x1c743cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c7440:
    // 0x1c7440: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1c7440u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1c7444:
    // 0x1c7444: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x1c7444u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_1c7448:
    // 0x1c7448: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x1c7448u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_1c744c:
    // 0x1c744c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1c744cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_1c7450:
    // 0x1c7450: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x1c7450u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_1c7454:
    // 0x1c7454: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1c7454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_1c7458:
    // 0x1c7458: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c7458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1c745c:
    // 0x1c745c: 0xc78180b0  lwc1        $f1, -0x7F50($gp)
    ctx->pc = 0x1c745cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c7460:
    // 0x1c7460: 0xc44000a8  lwc1        $f0, 0xA8($v0)
    ctx->pc = 0x1c7460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c7464:
    // 0x1c7464: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1c7464u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1c7468:
    // 0x1c7468: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x1c7468u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
label_1c746c:
    // 0x1c746c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c746cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c7470:
    // 0x1c7470: 0x0  nop
    ctx->pc = 0x1c7470u;
    // NOP
label_1c7474:
    // 0x1c7474: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x1c7474u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_1c7478:
    // 0x1c7478: 0x0  nop
    ctx->pc = 0x1c7478u;
    // NOP
label_1c747c:
    // 0x1c747c: 0x0  nop
    ctx->pc = 0x1c747cu;
    // NOP
label_1c7480:
    // 0x1c7480: 0x0  nop
    ctx->pc = 0x1c7480u;
    // NOP
label_1c7484:
    // 0x1c7484: 0xc0c3966  jal         func_30E598
label_1c7488:
    if (ctx->pc == 0x1C7488u) {
        ctx->pc = 0x1C748Cu;
        goto label_1c748c;
    }
    ctx->pc = 0x1C7484u;
    SET_GPR_U32(ctx, 31, 0x1C748Cu);
    ctx->pc = 0x30E598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E598u, 0x1C7484u, 0x1C748Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C748Cu;
label_1c748c:
    // 0x1c748c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1c748cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_1c7490:
    // 0x1c7490: 0xc44100e4  lwc1        $f1, 0xE4($v0)
    ctx->pc = 0x1c7490u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c7494:
    // 0x1c7494: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1c7494u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1c7498:
    // 0x1c7498: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x1c7498u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_1c749c:
    // 0x1c749c: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x1c749cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_1c74a0:
    // 0x1c74a0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1c74a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_1c74a4:
    // 0x1c74a4: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x1c74a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_1c74a8:
    // 0x1c74a8: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1c74a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_1c74ac:
    // 0x1c74ac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c74acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1c74b0:
    // 0x1c74b0: 0xc44100b4  lwc1        $f1, 0xB4($v0)
    ctx->pc = 0x1c74b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c74b4:
    // 0x1c74b4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1c74b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_1c74b8:
    // 0x1c74b8: 0xc44000d8  lwc1        $f0, 0xD8($v0)
    ctx->pc = 0x1c74b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c74bc:
    // 0x1c74bc: 0x46010041  sub.s       $f1, $f0, $f1
    ctx->pc = 0x1c74bcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1c74c0:
    // 0x1c74c0: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x1c74c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c74c4:
    // 0x1c74c4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1c74c4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1c74c8:
    // 0x1c74c8: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x1c74c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_1c74cc:
    // 0x1c74cc: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x1c74ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_1c74d0:
    // 0x1c74d0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1c74d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_1c74d4:
    // 0x1c74d4: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x1c74d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_1c74d8:
    // 0x1c74d8: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1c74d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_1c74dc:
    // 0x1c74dc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c74dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1c74e0:
    // 0x1c74e0: 0xc44100b8  lwc1        $f1, 0xB8($v0)
    ctx->pc = 0x1c74e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c74e4:
    // 0x1c74e4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1c74e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_1c74e8:
    // 0x1c74e8: 0xc44000dc  lwc1        $f0, 0xDC($v0)
    ctx->pc = 0x1c74e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c74ec:
    // 0x1c74ec: 0x46010041  sub.s       $f1, $f0, $f1
    ctx->pc = 0x1c74ecu;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1c74f0:
    // 0x1c74f0: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x1c74f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c74f4:
    // 0x1c74f4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1c74f4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1c74f8:
    // 0x1c74f8: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x1c74f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_1c74fc:
    // 0x1c74fc: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x1c74fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_1c7500:
    // 0x1c7500: 0xc06479c  jal         func_191E70
label_1c7504:
    if (ctx->pc == 0x1C7504u) {
        ctx->pc = 0x1C7508u;
        goto label_1c7508;
    }
    ctx->pc = 0x1C7500u;
    SET_GPR_U32(ctx, 31, 0x1C7508u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1C7500u, 0x1C7508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7508u;
label_1c7508:
    // 0x1c7508: 0x101840  sll         $v1, $s0, 1
    ctx->pc = 0x1c7508u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_1c750c:
    // 0x1c750c: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1c750cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_1c7510:
    // 0x1c7510: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x1c7510u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_1c7514:
    // 0x1c7514: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1c7514u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_1c7518:
    // 0x1c7518: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1c7518u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1c751c:
    // 0x1c751c: 0x8c6500a4  lw          $a1, 0xA4($v1)
    ctx->pc = 0x1c751cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 164)));
label_1c7520:
    // 0x1c7520: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c7520u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c7524:
    // 0x1c7524: 0xc7ac0038  lwc1        $f12, 0x38($sp)
    ctx->pc = 0x1c7524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1c7528:
    // 0x1c7528: 0xc7ad0034  lwc1        $f13, 0x34($sp)
    ctx->pc = 0x1c7528u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1c752c:
    // 0x1c752c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1c752cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c7530:
    // 0x1c7530: 0xc08c208  jal         func_230820
label_1c7534:
    if (ctx->pc == 0x1C7534u) {
        ctx->pc = 0x1C7538u;
        goto label_1c7538;
    }
    ctx->pc = 0x1C7530u;
    SET_GPR_U32(ctx, 31, 0x1C7538u);
    ctx->pc = 0x230820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230820u, 0x1C7530u, 0x1C7538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7538u;
label_1c7538:
    // 0x1c7538: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x1c7538u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_1c753c:
    // 0x1c753c: 0xc06479c  jal         func_191E70
label_1c7540:
    if (ctx->pc == 0x1C7540u) {
        ctx->pc = 0x1C7544u;
        goto label_1c7544;
    }
    ctx->pc = 0x1C753Cu;
    SET_GPR_U32(ctx, 31, 0x1C7544u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1C753Cu, 0x1C7544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7544u;
label_1c7544:
    // 0x1c7544: 0x101840  sll         $v1, $s0, 1
    ctx->pc = 0x1c7544u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_1c7548:
    // 0x1c7548: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1c7548u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_1c754c:
    // 0x1c754c: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x1c754cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_1c7550:
    // 0x1c7550: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1c7550u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_1c7554:
    // 0x1c7554: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1c7554u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1c7558:
    // 0x1c7558: 0x8c6500a4  lw          $a1, 0xA4($v1)
    ctx->pc = 0x1c7558u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 164)));
label_1c755c:
    // 0x1c755c: 0x101840  sll         $v1, $s0, 1
    ctx->pc = 0x1c755cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_1c7560:
    // 0x1c7560: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1c7560u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_1c7564:
    // 0x1c7564: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x1c7564u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_1c7568:
    // 0x1c7568: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1c7568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_1c756c:
    // 0x1c756c: 0x643021  addu        $a2, $v1, $a0
    ctx->pc = 0x1c756cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1c7570:
    // 0x1c7570: 0x101840  sll         $v1, $s0, 1
    ctx->pc = 0x1c7570u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_1c7574:
    // 0x1c7574: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1c7574u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_1c7578:
    // 0x1c7578: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x1c7578u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_1c757c:
    // 0x1c757c: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1c757cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_1c7580:
    // 0x1c7580: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1c7580u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1c7584:
    // 0x1c7584: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c7584u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c7588:
    // 0x1c7588: 0x24c600b4  addiu       $a2, $a2, 0xB4
    ctx->pc = 0x1c7588u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 180));
label_1c758c:
    // 0x1c758c: 0xc46c00a8  lwc1        $f12, 0xA8($v1)
    ctx->pc = 0x1c758cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1c7590:
    // 0x1c7590: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c7590u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c7594:
    // 0x1c7594: 0xc08c64c  jal         func_231930
label_1c7598:
    if (ctx->pc == 0x1C7598u) {
        ctx->pc = 0x1C759Cu;
        goto label_1c759c;
    }
    ctx->pc = 0x1C7594u;
    SET_GPR_U32(ctx, 31, 0x1C759Cu);
    ctx->pc = 0x231930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231930u, 0x1C7594u, 0x1C759Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C759Cu;
label_1c759c:
    // 0x1c759c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1c759cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1c75a0:
    // 0x1c75a0: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x1c75a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
label_1c75a4:
    // 0x1c75a4: 0x1440ff2e  bnez        $v0, . + 4 + (-0xD2 << 2)
label_1c75a8:
    if (ctx->pc == 0x1C75A8u) {
        ctx->pc = 0x1C75ACu;
        goto label_1c75ac;
    }
    ctx->pc = 0x1C75A4u;
    {
        const bool branch_taken_0x1c75a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c75a4) {
            ctx->pc = 0x1C7260u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c7260;
        }
    }
    ctx->pc = 0x1C75ACu;
label_1c75ac:
    // 0x1c75ac: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1c75acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_1c75b0:
    // 0x1c75b0: 0xc4410100  lwc1        $f1, 0x100($v0)
    ctx->pc = 0x1c75b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c75b4:
    // 0x1c75b4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1c75b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c75b8:
    // 0x1c75b8: 0x0  nop
    ctx->pc = 0x1c75b8u;
    // NOP
label_1c75bc:
    // 0x1c75bc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1c75bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1c75c0:
    // 0x1c75c0: 0x45000011  bc1f        . + 4 + (0x11 << 2)
label_1c75c4:
    if (ctx->pc == 0x1C75C4u) {
        ctx->pc = 0x1C75C8u;
        goto label_1c75c8;
    }
    ctx->pc = 0x1C75C0u;
    {
        const bool branch_taken_0x1c75c0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c75c0) {
            ctx->pc = 0x1C7608u;
            goto label_1c7608;
        }
    }
    ctx->pc = 0x1C75C8u;
label_1c75c8:
    // 0x1c75c8: 0x8f82bb70  lw          $v0, -0x4490($gp)
    ctx->pc = 0x1c75c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
label_1c75cc:
    // 0x1c75cc: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x1c75ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c75d0:
    // 0x1c75d0: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1c75d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_1c75d4:
    // 0x1c75d4: 0xc4400100  lwc1        $f0, 0x100($v0)
    ctx->pc = 0x1c75d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c75d8:
    // 0x1c75d8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1c75d8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1c75dc:
    // 0x1c75dc: 0xe4400100  swc1        $f0, 0x100($v0)
    ctx->pc = 0x1c75dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 256), bits); }
label_1c75e0:
    // 0x1c75e0: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1c75e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_1c75e4:
    // 0x1c75e4: 0xc4410100  lwc1        $f1, 0x100($v0)
    ctx->pc = 0x1c75e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c75e8:
    // 0x1c75e8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1c75e8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c75ec:
    // 0x1c75ec: 0x0  nop
    ctx->pc = 0x1c75ecu;
    // NOP
label_1c75f0:
    // 0x1c75f0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1c75f0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1c75f4:
    // 0x1c75f4: 0x45010004  bc1t        . + 4 + (0x4 << 2)
label_1c75f8:
    if (ctx->pc == 0x1C75F8u) {
        ctx->pc = 0x1C75FCu;
        goto label_1c75fc;
    }
    ctx->pc = 0x1C75F4u;
    {
        const bool branch_taken_0x1c75f4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c75f4) {
            ctx->pc = 0x1C7608u;
            goto label_1c7608;
        }
    }
    ctx->pc = 0x1C75FCu;
label_1c75fc:
    // 0x1c75fc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1c75fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c7600:
    // 0x1c7600: 0x10000002  b           . + 4 + (0x2 << 2)
label_1c7604:
    if (ctx->pc == 0x1C7604u) {
        ctx->pc = 0x1C7608u;
        goto label_1c7608;
    }
    ctx->pc = 0x1C7600u;
    {
        const bool branch_taken_0x1c7600 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c7600) {
            ctx->pc = 0x1C760Cu;
            goto label_1c760c;
        }
    }
    ctx->pc = 0x1C7608u;
label_1c7608:
    // 0x1c7608: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1c7608u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1c760c:
    // 0x1c760c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1c760cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1c7610:
    // 0x1c7610: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c7610u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1c7614:
    // 0x1c7614: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c7614u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1c7618:
    // 0x1c7618: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x1c7618u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_1c761c:
    // 0x1c761c: 0x3e00008  jr          $ra
label_1c7620:
    if (ctx->pc == 0x1C7620u) {
        ctx->pc = 0x1C7624u;
        goto label_1c7624;
    }
    ctx->pc = 0x1C761Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C761Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C7624u;
label_1c7624:
    // 0x1c7624: 0x0  nop
    ctx->pc = 0x1c7624u;
    // NOP
label_1c7628:
    // 0x1c7628: 0x0  nop
    ctx->pc = 0x1c7628u;
    // NOP
label_1c762c:
    // 0x1c762c: 0x0  nop
    ctx->pc = 0x1c762cu;
    // NOP
label_1c7630:
    // 0x1c7630: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c7630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1c7634:
    // 0x1c7634: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x1c7634u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
label_1c7638:
    // 0x1c7638: 0x24427640  addiu       $v0, $v0, 0x7640
    ctx->pc = 0x1c7638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30272));
label_1c763c:
    // 0x1c763c: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1c763cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1c7640:
    // 0x1c7640: 0x3e00008  jr          $ra
label_1c7644:
    if (ctx->pc == 0x1C7644u) {
        ctx->pc = 0x1C7648u;
        goto label_1c7648;
    }
    ctx->pc = 0x1C7640u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C7640u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C7648u;
label_1c7648:
    // 0x1c7648: 0x0  nop
    ctx->pc = 0x1c7648u;
    // NOP
label_1c764c:
    // 0x1c764c: 0x0  nop
    ctx->pc = 0x1c764cu;
    // NOP
label_1c7650:
    // 0x1c7650: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c7650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1c7654:
    // 0x1c7654: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c7654u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1c7658:
    // 0x1c7658: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1c7658u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_1c765c:
    // 0x1c765c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1c765cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
label_1c7660:
    // 0x1c7660: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1c7660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1c7664:
    // 0x1c7664: 0xc440003c  lwc1        $f0, 0x3C($v0)
    ctx->pc = 0x1c7664u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c7668:
    // 0x1c7668: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1c7668u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1c766c:
    // 0x1c766c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1c766cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_1c7670:
    // 0x1c7670: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1c7670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1c7674:
    // 0x1c7674: 0x8c4200f8  lw          $v0, 0xF8($v0)
    ctx->pc = 0x1c7674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 248)));
label_1c7678:
    // 0x1c7678: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x1c7678u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1c767c:
    // 0x1c767c: 0x14200018  bnez        $at, . + 4 + (0x18 << 2)
label_1c7680:
    if (ctx->pc == 0x1C7680u) {
        ctx->pc = 0x1C7684u;
        goto label_1c7684;
    }
    ctx->pc = 0x1C767Cu;
    {
        const bool branch_taken_0x1c767c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c767c) {
            ctx->pc = 0x1C76E0u;
            goto label_1c76e0;
        }
    }
    ctx->pc = 0x1C7684u;
label_1c7684:
    // 0x1c7684: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1c7684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1c7688:
    // 0x1c7688: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1c7688u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_1c768c:
    // 0x1c768c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1c768cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1c7690:
    // 0x1c7690: 0x8c430104  lw          $v1, 0x104($v0)
    ctx->pc = 0x1c7690u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
label_1c7694:
    // 0x1c7694: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c7694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c7698:
    // 0x1c7698: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_1c769c:
    if (ctx->pc == 0x1C769Cu) {
        ctx->pc = 0x1C76A0u;
        goto label_1c76a0;
    }
    ctx->pc = 0x1C7698u;
    {
        const bool branch_taken_0x1c7698 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1c7698) {
            ctx->pc = 0x1C76A8u;
            goto label_1c76a8;
        }
    }
    ctx->pc = 0x1C76A0u;
label_1c76a0:
    // 0x1c76a0: 0x10000012  b           . + 4 + (0x12 << 2)
label_1c76a4:
    if (ctx->pc == 0x1C76A4u) {
        ctx->pc = 0x1C76A8u;
        goto label_1c76a8;
    }
    ctx->pc = 0x1C76A0u;
    {
        const bool branch_taken_0x1c76a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c76a0) {
            ctx->pc = 0x1C76ECu;
            goto label_1c76ec;
        }
    }
    ctx->pc = 0x1C76A8u;
label_1c76a8:
    // 0x1c76a8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1c76a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1c76ac:
    // 0x1c76ac: 0xc440003c  lwc1        $f0, 0x3C($v0)
    ctx->pc = 0x1c76acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c76b0:
    // 0x1c76b0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1c76b0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1c76b4:
    // 0x1c76b4: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1c76b4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_1c76b8:
    // 0x1c76b8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1c76b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1c76bc:
    // 0x1c76bc: 0x8c4200f4  lw          $v0, 0xF4($v0)
    ctx->pc = 0x1c76bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 244)));
label_1c76c0:
    // 0x1c76c0: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x1c76c0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1c76c4:
    // 0x1c76c4: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
label_1c76c8:
    if (ctx->pc == 0x1C76C8u) {
        ctx->pc = 0x1C76CCu;
        goto label_1c76cc;
    }
    ctx->pc = 0x1C76C4u;
    {
        const bool branch_taken_0x1c76c4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c76c4) {
            ctx->pc = 0x1C76ECu;
            goto label_1c76ec;
        }
    }
    ctx->pc = 0x1C76CCu;
label_1c76cc:
    // 0x1c76cc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1c76ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1c76d0:
    // 0x1c76d0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1c76d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1c76d4:
    // 0x1c76d4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1c76d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_1c76d8:
    // 0x1c76d8: 0x10000004  b           . + 4 + (0x4 << 2)
label_1c76dc:
    if (ctx->pc == 0x1C76DCu) {
        ctx->pc = 0x1C76E0u;
        goto label_1c76e0;
    }
    ctx->pc = 0x1C76D8u;
    {
        const bool branch_taken_0x1c76d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c76d8) {
            ctx->pc = 0x1C76ECu;
            goto label_1c76ec;
        }
    }
    ctx->pc = 0x1C76E0u;
label_1c76e0:
    // 0x1c76e0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1c76e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1c76e4:
    // 0x1c76e4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1c76e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1c76e8:
    // 0x1c76e8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1c76e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_1c76ec:
    // 0x1c76ec: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1c76ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1c76f0:
    // 0x1c76f0: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x1c76f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1c76f4:
    // 0x1c76f4: 0xc064e74  jal         func_1939D0
label_1c76f8:
    if (ctx->pc == 0x1C76F8u) {
        ctx->pc = 0x1C76FCu;
        goto label_1c76fc;
    }
    ctx->pc = 0x1C76F4u;
    SET_GPR_U32(ctx, 31, 0x1C76FCu);
    ctx->pc = 0x1939D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1939D0u, 0x1C76F4u, 0x1C76FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C76FCu;
label_1c76fc:
    // 0x1c76fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c76fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c7700:
    // 0x1c7700: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1c7700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1c7704:
    // 0x1c7704: 0x3e00008  jr          $ra
label_1c7708:
    if (ctx->pc == 0x1C7708u) {
        ctx->pc = 0x1C770Cu;
        goto label_1c770c;
    }
    ctx->pc = 0x1C7704u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C7704u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C770Cu;
label_1c770c:
    // 0x1c770c: 0x0  nop
    ctx->pc = 0x1c770cu;
    // NOP
label_1c7710:
    // 0x1c7710: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1c7710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1c7714:
    // 0x1c7714: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1c7714u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1c7718:
    // 0x1c7718: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1c7718u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1c771c:
    // 0x1c771c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1c771cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1c7720:
    // 0x1c7720: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x1c7720u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
label_1c7724:
    // 0x1c7724: 0x8f83bcc4  lw          $v1, -0x433C($gp)
    ctx->pc = 0x1c7724u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
label_1c7728:
    // 0x1c7728: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1c7728u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1c772c:
    // 0x1c772c: 0x1003002e  beq         $zero, $v1, . + 4 + (0x2E << 2)
label_1c7730:
    if (ctx->pc == 0x1C7730u) {
        ctx->pc = 0x1C7734u;
        goto label_1c7734;
    }
    ctx->pc = 0x1C772Cu;
    {
        const bool branch_taken_0x1c772c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 3));
        if (branch_taken_0x1c772c) {
            ctx->pc = 0x1C77E8u;
            goto label_1c77e8;
        }
    }
    ctx->pc = 0x1C7734u;
label_1c7734:
    // 0x1c7734: 0x8f82bcc4  lw          $v0, -0x433C($gp)
    ctx->pc = 0x1c7734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
label_1c7738:
    // 0x1c7738: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1c7738u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1c773c:
    // 0x1c773c: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x1c773cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_1c7740:
    // 0x1c7740: 0xc085538  jal         func_2154E0
label_1c7744:
    if (ctx->pc == 0x1C7744u) {
        ctx->pc = 0x1C7748u;
        goto label_1c7748;
    }
    ctx->pc = 0x1C7740u;
    SET_GPR_U32(ctx, 31, 0x1C7748u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x1C7740u, 0x1C7748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7748u;
label_1c7748:
    // 0x1c7748: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1c7748u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c774c:
    // 0x1c774c: 0x10100026  beq         $zero, $s0, . + 4 + (0x26 << 2)
label_1c7750:
    if (ctx->pc == 0x1C7750u) {
        ctx->pc = 0x1C7754u;
        goto label_1c7754;
    }
    ctx->pc = 0x1C774Cu;
    {
        const bool branch_taken_0x1c774c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 16));
        if (branch_taken_0x1c774c) {
            ctx->pc = 0x1C77E8u;
            goto label_1c77e8;
        }
    }
    ctx->pc = 0x1C7754u;
label_1c7754:
    // 0x1c7754: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1c7754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_1c7758:
    // 0x1c7758: 0xc454003c  lwc1        $f20, 0x3C($v0)
    ctx->pc = 0x1c7758u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1c775c:
    // 0x1c775c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c775cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c7760:
    // 0x1c7760: 0xc040aa8  jal         func_102AA0
label_1c7764:
    if (ctx->pc == 0x1C7764u) {
        ctx->pc = 0x1C7768u;
        goto label_1c7768;
    }
    ctx->pc = 0x1C7760u;
    SET_GPR_U32(ctx, 31, 0x1C7768u);
    ctx->pc = 0x102AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AA0u, 0x1C7760u, 0x1C7768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7768u;
label_1c7768:
    // 0x1c7768: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c7768u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c776c:
    // 0x1c776c: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x1c776cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1c7770:
    // 0x1c7770: 0xc040a90  jal         func_102A40
label_1c7774:
    if (ctx->pc == 0x1C7774u) {
        ctx->pc = 0x1C7778u;
        goto label_1c7778;
    }
    ctx->pc = 0x1C7770u;
    SET_GPR_U32(ctx, 31, 0x1C7778u);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x1C7770u, 0x1C7778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7778u;
label_1c7778:
    // 0x1c7778: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1c7778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1c777c:
    // 0x1c777c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1c777cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c7780:
    // 0x1c7780: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x1c7780u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
label_1c7784:
    // 0x1c7784: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x1c7784u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_1c7788:
    // 0x1c7788: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c7788u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c778c:
    // 0x1c778c: 0xc040aa8  jal         func_102AA0
label_1c7790:
    if (ctx->pc == 0x1C7790u) {
        ctx->pc = 0x1C7794u;
        goto label_1c7794;
    }
    ctx->pc = 0x1C778Cu;
    SET_GPR_U32(ctx, 31, 0x1C7794u);
    ctx->pc = 0x102AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AA0u, 0x1C778Cu, 0x1C7794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7794u;
label_1c7794:
    // 0x1c7794: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c7794u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c7798:
    // 0x1c7798: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x1c7798u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1c779c:
    // 0x1c779c: 0xc040a90  jal         func_102A40
label_1c77a0:
    if (ctx->pc == 0x1C77A0u) {
        ctx->pc = 0x1C77A4u;
        goto label_1c77a4;
    }
    ctx->pc = 0x1C779Cu;
    SET_GPR_U32(ctx, 31, 0x1C77A4u);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x1C779Cu, 0x1C77A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C77A4u;
label_1c77a4:
    // 0x1c77a4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1c77a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1c77a8:
    // 0x1c77a8: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x1c77a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c77ac:
    // 0x1c77ac: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1c77acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c77b0:
    // 0x1c77b0: 0x0  nop
    ctx->pc = 0x1c77b0u;
    // NOP
label_1c77b4:
    // 0x1c77b4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1c77b4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1c77b8:
    // 0x1c77b8: 0x4501000b  bc1t        . + 4 + (0xB << 2)
label_1c77bc:
    if (ctx->pc == 0x1C77BCu) {
        ctx->pc = 0x1C77C0u;
        goto label_1c77c0;
    }
    ctx->pc = 0x1C77B8u;
    {
        const bool branch_taken_0x1c77b8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c77b8) {
            ctx->pc = 0x1C77E8u;
            goto label_1c77e8;
        }
    }
    ctx->pc = 0x1C77C0u;
label_1c77c0:
    // 0x1c77c0: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1c77c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1c77c4:
    // 0x1c77c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c77c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c77c8:
    // 0x1c77c8: 0xc040aa8  jal         func_102AA0
label_1c77cc:
    if (ctx->pc == 0x1C77CCu) {
        ctx->pc = 0x1C77D0u;
        goto label_1c77d0;
    }
    ctx->pc = 0x1C77C8u;
    SET_GPR_U32(ctx, 31, 0x1C77D0u);
    ctx->pc = 0x102AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AA0u, 0x1C77C8u, 0x1C77D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C77D0u;
label_1c77d0:
    // 0x1c77d0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c77d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c77d4:
    // 0x1c77d4: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x1c77d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1c77d8:
    // 0x1c77d8: 0xc040a90  jal         func_102A40
label_1c77dc:
    if (ctx->pc == 0x1C77DCu) {
        ctx->pc = 0x1C77E0u;
        goto label_1c77e0;
    }
    ctx->pc = 0x1C77D8u;
    SET_GPR_U32(ctx, 31, 0x1C77E0u);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x1C77D8u, 0x1C77E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C77E0u;
label_1c77e0:
    // 0x1c77e0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1c77e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1c77e4:
    // 0x1c77e4: 0xe4740008  swc1        $f20, 0x8($v1)
    ctx->pc = 0x1c77e4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_1c77e8:
    // 0x1c77e8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1c77e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1c77ec:
    // 0x1c77ec: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1c77ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1c77f0:
    // 0x1c77f0: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1c77f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1c77f4:
    // 0x1c77f4: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x1c77f4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_1c77f8:
    // 0x1c77f8: 0x3e00008  jr          $ra
label_1c77fc:
    if (ctx->pc == 0x1C77FCu) {
        ctx->pc = 0x1C7800u;
        goto label_1c7800;
    }
    ctx->pc = 0x1C77F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C77F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C7800u;
label_1c7800:
    // 0x1c7800: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1c7800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1c7804:
    // 0x1c7804: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c7804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1c7808:
    // 0x1c7808: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1c7808u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_1c780c:
    // 0x1c780c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1c780cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
label_1c7810:
    // 0x1c7810: 0xe7ac0030  swc1        $f12, 0x30($sp)
    ctx->pc = 0x1c7810u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_1c7814:
    // 0x1c7814: 0xe7ad0040  swc1        $f13, 0x40($sp)
    ctx->pc = 0x1c7814u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_1c7818:
    // 0x1c7818: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1c7818u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1c781c:
    // 0x1c781c: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x1c781cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1c7820:
    // 0x1c7820: 0xc7ac0030  lwc1        $f12, 0x30($sp)
    ctx->pc = 0x1c7820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1c7824:
    // 0x1c7824: 0xc7ad0040  lwc1        $f13, 0x40($sp)
    ctx->pc = 0x1c7824u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1c7828:
    // 0x1c7828: 0xc064e90  jal         func_193A40
label_1c782c:
    if (ctx->pc == 0x1C782Cu) {
        ctx->pc = 0x1C7830u;
        goto label_1c7830;
    }
    ctx->pc = 0x1C7828u;
    SET_GPR_U32(ctx, 31, 0x1C7830u);
    ctx->pc = 0x193A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193A40u, 0x1C7828u, 0x1C7830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7830u;
label_1c7830:
    // 0x1c7830: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c7830u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c7834:
    // 0x1c7834: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x1c7834u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_1c7838:
    // 0x1c7838: 0x3e00008  jr          $ra
label_1c783c:
    if (ctx->pc == 0x1C783Cu) {
        ctx->pc = 0x1C7840u;
        goto label_1c7840;
    }
    ctx->pc = 0x1C7838u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C7838u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C7840u;
label_1c7840:
    // 0x1c7840: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x1c7840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
label_1c7844:
    // 0x1c7844: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1c7844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1c7848:
    // 0x1c7848: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c7848u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1c784c:
    // 0x1c784c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c784cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1c7850:
    // 0x1c7850: 0xafa400d0  sw          $a0, 0xD0($sp)
    ctx->pc = 0x1c7850u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 4));
label_1c7854:
    // 0x1c7854: 0xafa500e0  sw          $a1, 0xE0($sp)
    ctx->pc = 0x1c7854u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 5));
label_1c7858:
    // 0x1c7858: 0xe7ac00f0  swc1        $f12, 0xF0($sp)
    ctx->pc = 0x1c7858u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
label_1c785c:
    // 0x1c785c: 0xe7ad0100  swc1        $f13, 0x100($sp)
    ctx->pc = 0x1c785cu;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
label_1c7860:
    // 0x1c7860: 0x8fa400e0  lw          $a0, 0xE0($sp)
    ctx->pc = 0x1c7860u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_1c7864:
    // 0x1c7864: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1c7864u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_1c7868:
    // 0x1c7868: 0x24a57670  addiu       $a1, $a1, 0x7670
    ctx->pc = 0x1c7868u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30320));
label_1c786c:
    // 0x1c786c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1c786cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1c7870:
    // 0x1c7870: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x1c7870u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_1c7874:
    // 0x1c7874: 0x320f809  jalr        $t9
label_1c7878:
    if (ctx->pc == 0x1C7878u) {
        ctx->pc = 0x1C787Cu;
        goto label_1c787c;
    }
    ctx->pc = 0x1C7874u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1C787Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C7874u, 0x1C787Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C787Cu;
label_1c787c:
    // 0x1c787c: 0x144000b4  bnez        $v0, . + 4 + (0xB4 << 2)
label_1c7880:
    if (ctx->pc == 0x1C7880u) {
        ctx->pc = 0x1C7884u;
        goto label_1c7884;
    }
    ctx->pc = 0x1C787Cu;
    {
        const bool branch_taken_0x1c787c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c787c) {
            ctx->pc = 0x1C7B50u;
            goto label_1c7b50;
        }
    }
    ctx->pc = 0x1C7884u;
label_1c7884:
    // 0x1c7884: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x1c7884u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_1c7888:
    // 0x1c7888: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x1c7888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_1c788c:
    // 0x1c788c: 0x8c420104  lw          $v0, 0x104($v0)
    ctx->pc = 0x1c788cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
label_1c7890:
    // 0x1c7890: 0x24470061  addiu       $a3, $v0, 0x61
    ctx->pc = 0x1c7890u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 97));
label_1c7894:
    // 0x1c7894: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1c7894u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_1c7898:
    // 0x1c7898: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1c7898u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_1c789c:
    // 0x1c789c: 0x24a576a0  addiu       $a1, $a1, 0x76A0
    ctx->pc = 0x1c789cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30368));
label_1c78a0:
    // 0x1c78a0: 0x8c660028  lw          $a2, 0x28($v1)
    ctx->pc = 0x1c78a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_1c78a4:
    // 0x1c78a4: 0xc0bc3e2  jal         func_2F0F88
label_1c78a8:
    if (ctx->pc == 0x1C78A8u) {
        ctx->pc = 0x1C78ACu;
        goto label_1c78ac;
    }
    ctx->pc = 0x1C78A4u;
    SET_GPR_U32(ctx, 31, 0x1C78ACu);
    ctx->pc = 0x2F0F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0F88u, 0x1C78A4u, 0x1C78ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C78ACu;
label_1c78ac:
    // 0x1c78ac: 0x8f84bbdc  lw          $a0, -0x4424($gp)
    ctx->pc = 0x1c78acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949852)));
label_1c78b0:
    // 0x1c78b0: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x1c78b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_1c78b4:
    // 0x1c78b4: 0xc08e57c  jal         func_2395F0
label_1c78b8:
    if (ctx->pc == 0x1C78B8u) {
        ctx->pc = 0x1C78BCu;
        goto label_1c78bc;
    }
    ctx->pc = 0x1C78B4u;
    SET_GPR_U32(ctx, 31, 0x1C78BCu);
    ctx->pc = 0x2395F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2395F0u, 0x1C78B4u, 0x1C78BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C78BCu;
label_1c78bc:
    // 0x1c78bc: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1c78bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_1c78c0:
    // 0x1c78c0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1c78c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c78c4:
    // 0x1c78c4: 0xc0406d0  jal         func_101B40
label_1c78c8:
    if (ctx->pc == 0x1C78C8u) {
        ctx->pc = 0x1C78CCu;
        goto label_1c78cc;
    }
    ctx->pc = 0x1C78C4u;
    SET_GPR_U32(ctx, 31, 0x1C78CCu);
    ctx->pc = 0x101B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101B40u, 0x1C78C4u, 0x1C78CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C78CCu;
label_1c78cc:
    // 0x1c78cc: 0x27a40088  addiu       $a0, $sp, 0x88
    ctx->pc = 0x1c78ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
label_1c78d0:
    // 0x1c78d0: 0x27859610  addiu       $a1, $gp, -0x69F0
    ctx->pc = 0x1c78d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294940176));
label_1c78d4:
    // 0x1c78d4: 0xc040304  jal         func_100C10
label_1c78d8:
    if (ctx->pc == 0x1C78D8u) {
        ctx->pc = 0x1C78DCu;
        goto label_1c78dc;
    }
    ctx->pc = 0x1C78D4u;
    SET_GPR_U32(ctx, 31, 0x1C78DCu);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x1C78D4u, 0x1C78DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C78DCu;
label_1c78dc:
    // 0x1c78dc: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1c78dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_1c78e0:
    // 0x1c78e0: 0x27a50088  addiu       $a1, $sp, 0x88
    ctx->pc = 0x1c78e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
label_1c78e4:
    // 0x1c78e4: 0xc119568  jal         func_4655A0
label_1c78e8:
    if (ctx->pc == 0x1C78E8u) {
        ctx->pc = 0x1C78ECu;
        goto label_1c78ec;
    }
    ctx->pc = 0x1C78E4u;
    SET_GPR_U32(ctx, 31, 0x1C78ECu);
    ctx->pc = 0x4655A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4655A0u, 0x1C78E4u, 0x1C78ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C78ECu;
label_1c78ec:
    // 0x1c78ec: 0x27a40088  addiu       $a0, $sp, 0x88
    ctx->pc = 0x1c78ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
label_1c78f0:
    // 0x1c78f0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1c78f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1c78f4:
    // 0x1c78f4: 0xc0402d4  jal         func_100B50
label_1c78f8:
    if (ctx->pc == 0x1C78F8u) {
        ctx->pc = 0x1C78FCu;
        goto label_1c78fc;
    }
    ctx->pc = 0x1C78F4u;
    SET_GPR_U32(ctx, 31, 0x1C78FCu);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x1C78F4u, 0x1C78FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C78FCu;
label_1c78fc:
    // 0x1c78fc: 0x27a40078  addiu       $a0, $sp, 0x78
    ctx->pc = 0x1c78fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
label_1c7900:
    // 0x1c7900: 0x27859618  addiu       $a1, $gp, -0x69E8
    ctx->pc = 0x1c7900u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294940184));
label_1c7904:
    // 0x1c7904: 0xc040304  jal         func_100C10
label_1c7908:
    if (ctx->pc == 0x1C7908u) {
        ctx->pc = 0x1C790Cu;
        goto label_1c790c;
    }
    ctx->pc = 0x1C7904u;
    SET_GPR_U32(ctx, 31, 0x1C790Cu);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x1C7904u, 0x1C790Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C790Cu;
label_1c790c:
    // 0x1c790c: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1c790cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_1c7910:
    // 0x1c7910: 0x27a50078  addiu       $a1, $sp, 0x78
    ctx->pc = 0x1c7910u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
label_1c7914:
    // 0x1c7914: 0xc119568  jal         func_4655A0
label_1c7918:
    if (ctx->pc == 0x1C7918u) {
        ctx->pc = 0x1C791Cu;
        goto label_1c791c;
    }
    ctx->pc = 0x1C7914u;
    SET_GPR_U32(ctx, 31, 0x1C791Cu);
    ctx->pc = 0x4655A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4655A0u, 0x1C7914u, 0x1C791Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C791Cu;
label_1c791c:
    // 0x1c791c: 0x27a40078  addiu       $a0, $sp, 0x78
    ctx->pc = 0x1c791cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
label_1c7920:
    // 0x1c7920: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1c7920u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1c7924:
    // 0x1c7924: 0xc0402d4  jal         func_100B50
label_1c7928:
    if (ctx->pc == 0x1C7928u) {
        ctx->pc = 0x1C792Cu;
        goto label_1c792c;
    }
    ctx->pc = 0x1C7924u;
    SET_GPR_U32(ctx, 31, 0x1C792Cu);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x1C7924u, 0x1C792Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C792Cu;
label_1c792c:
    // 0x1c792c: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x1c792cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_1c7930:
    // 0x1c7930: 0x8f84bbdc  lw          $a0, -0x4424($gp)
    ctx->pc = 0x1c7930u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949852)));
label_1c7934:
    // 0x1c7934: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x1c7934u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_1c7938:
    // 0x1c7938: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x1c7938u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_1c793c:
    // 0x1c793c: 0x8c4700f8  lw          $a3, 0xF8($v0)
    ctx->pc = 0x1c793cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 248)));
label_1c7940:
    // 0x1c7940: 0xc08e63c  jal         func_2398F0
label_1c7944:
    if (ctx->pc == 0x1C7944u) {
        ctx->pc = 0x1C7948u;
        goto label_1c7948;
    }
    ctx->pc = 0x1C7940u;
    SET_GPR_U32(ctx, 31, 0x1C7948u);
    ctx->pc = 0x2398F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2398F0u, 0x1C7940u, 0x1C7948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7948u;
label_1c7948:
    // 0x1c7948: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x1c7948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_1c794c:
    // 0x1c794c: 0x8f84bbdc  lw          $a0, -0x4424($gp)
    ctx->pc = 0x1c794cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949852)));
label_1c7950:
    // 0x1c7950: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x1c7950u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_1c7954:
    // 0x1c7954: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x1c7954u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_1c7958:
    // 0x1c7958: 0x8c4700f4  lw          $a3, 0xF4($v0)
    ctx->pc = 0x1c7958u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 244)));
label_1c795c:
    // 0x1c795c: 0xc08e63c  jal         func_2398F0
label_1c7960:
    if (ctx->pc == 0x1C7960u) {
        ctx->pc = 0x1C7964u;
        goto label_1c7964;
    }
    ctx->pc = 0x1C795Cu;
    SET_GPR_U32(ctx, 31, 0x1C7964u);
    ctx->pc = 0x2398F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2398F0u, 0x1C795Cu, 0x1C7964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7964u;
label_1c7964:
    // 0x1c7964: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x1c7964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_1c7968:
    // 0x1c7968: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x1c7968u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_1c796c:
    // 0x1c796c: 0xc064f24  jal         func_193C90
label_1c7970:
    if (ctx->pc == 0x1C7970u) {
        ctx->pc = 0x1C7974u;
        goto label_1c7974;
    }
    ctx->pc = 0x1C796Cu;
    SET_GPR_U32(ctx, 31, 0x1C7974u);
    ctx->pc = 0x193C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193C90u, 0x1C796Cu, 0x1C7974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7974u;
label_1c7974:
    // 0x1c7974: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1c7974u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c7978:
    // 0x1c7978: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1c7978u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1c797c:
    // 0x1c797c: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x1c797cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
label_1c7980:
    // 0x1c7980: 0x8fa400e0  lw          $a0, 0xE0($sp)
    ctx->pc = 0x1c7980u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_1c7984:
    // 0x1c7984: 0x27859620  addiu       $a1, $gp, -0x69E0
    ctx->pc = 0x1c7984u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294940192));
label_1c7988:
    // 0x1c7988: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x1c7988u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_1c798c:
    // 0x1c798c: 0xc055fb0  jal         func_157EC0
label_1c7990:
    if (ctx->pc == 0x1C7990u) {
        ctx->pc = 0x1C7994u;
        goto label_1c7994;
    }
    ctx->pc = 0x1C798Cu;
    SET_GPR_U32(ctx, 31, 0x1C7994u);
    ctx->pc = 0x157EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157EC0u, 0x1C798Cu, 0x1C7994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7994u;
label_1c7994:
    // 0x1c7994: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x1c7994u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_1c7998:
    // 0x1c7998: 0x8fa500e0  lw          $a1, 0xE0($sp)
    ctx->pc = 0x1c7998u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_1c799c:
    // 0x1c799c: 0x27869620  addiu       $a2, $gp, -0x69E0
    ctx->pc = 0x1c799cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294940192));
label_1c79a0:
    // 0x1c79a0: 0x27a700a0  addiu       $a3, $sp, 0xA0
    ctx->pc = 0x1c79a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_1c79a4:
    // 0x1c79a4: 0xc7ac00f0  lwc1        $f12, 0xF0($sp)
    ctx->pc = 0x1c79a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1c79a8:
    // 0x1c79a8: 0xc065114  jal         func_194450
label_1c79ac:
    if (ctx->pc == 0x1C79ACu) {
        ctx->pc = 0x1C79B0u;
        goto label_1c79b0;
    }
    ctx->pc = 0x1C79A8u;
    SET_GPR_U32(ctx, 31, 0x1C79B0u);
    ctx->pc = 0x194450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x194450u, 0x1C79A8u, 0x1C79B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C79B0u;
label_1c79b0:
    // 0x1c79b0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1c79b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c79b4:
    // 0x1c79b4: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1c79b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1c79b8:
    // 0x1c79b8: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1c79b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_1c79bc:
    // 0x1c79bc: 0x24a576b8  addiu       $a1, $a1, 0x76B8
    ctx->pc = 0x1c79bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30392));
label_1c79c0:
    // 0x1c79c0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1c79c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1c79c4:
    // 0x1c79c4: 0xc0bc3e2  jal         func_2F0F88
label_1c79c8:
    if (ctx->pc == 0x1C79C8u) {
        ctx->pc = 0x1C79CCu;
        goto label_1c79cc;
    }
    ctx->pc = 0x1C79C4u;
    SET_GPR_U32(ctx, 31, 0x1C79CCu);
    ctx->pc = 0x2F0F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0F88u, 0x1C79C4u, 0x1C79CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C79CCu;
label_1c79cc:
    // 0x1c79cc: 0x8fa400e0  lw          $a0, 0xE0($sp)
    ctx->pc = 0x1c79ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_1c79d0:
    // 0x1c79d0: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x1c79d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1c79d4:
    // 0x1c79d4: 0xc05621c  jal         func_158870
label_1c79d8:
    if (ctx->pc == 0x1C79D8u) {
        ctx->pc = 0x1C79DCu;
        goto label_1c79dc;
    }
    ctx->pc = 0x1C79D4u;
    SET_GPR_U32(ctx, 31, 0x1C79DCu);
    ctx->pc = 0x158870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158870u, 0x1C79D4u, 0x1C79DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C79DCu;
label_1c79dc:
    // 0x1c79dc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1c79dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c79e0:
    // 0x1c79e0: 0x1200004f  beqz        $s0, . + 4 + (0x4F << 2)
label_1c79e4:
    if (ctx->pc == 0x1C79E4u) {
        ctx->pc = 0x1C79E8u;
        goto label_1c79e8;
    }
    ctx->pc = 0x1C79E0u;
    {
        const bool branch_taken_0x1c79e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c79e0) {
            ctx->pc = 0x1C7B20u;
            goto label_1c7b20;
        }
    }
    ctx->pc = 0x1C79E8u;
label_1c79e8:
    // 0x1c79e8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1c79e8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c79ec:
    // 0x1c79ec: 0x0  nop
    ctx->pc = 0x1c79ecu;
    // NOP
label_1c79f0:
    // 0x1c79f0: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x1c79f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
label_1c79f4:
    // 0x1c79f4: 0x8fa400e0  lw          $a0, 0xE0($sp)
    ctx->pc = 0x1c79f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_1c79f8:
    // 0x1c79f8: 0xc0552dc  jal         func_154B70
label_1c79fc:
    if (ctx->pc == 0x1C79FCu) {
        ctx->pc = 0x1C7A00u;
        goto label_1c7a00;
    }
    ctx->pc = 0x1C79F8u;
    SET_GPR_U32(ctx, 31, 0x1C7A00u);
    ctx->pc = 0x154B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B70u, 0x1C79F8u, 0x1C7A00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7A00u;
label_1c7a00:
    // 0x1c7a00: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c7a00u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1c7a04:
    // 0x1c7a04: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x1c7a04u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1c7a08:
    // 0x1c7a08: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c7a08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c7a0c:
    // 0x1c7a0c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1c7a0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c7a10:
    // 0x1c7a10: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1c7a10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1c7a14:
    // 0x1c7a14: 0x27a700cc  addiu       $a3, $sp, 0xCC
    ctx->pc = 0x1c7a14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 204));
label_1c7a18:
    // 0x1c7a18: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c7a18u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c7a1c:
    // 0x1c7a1c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1c7a1cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c7a20:
    // 0x1c7a20: 0xc08b9fc  jal         func_22E7F0
label_1c7a24:
    if (ctx->pc == 0x1C7A24u) {
        ctx->pc = 0x1C7A28u;
        goto label_1c7a28;
    }
    ctx->pc = 0x1C7A20u;
    SET_GPR_U32(ctx, 31, 0x1C7A28u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x1C7A20u, 0x1C7A28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7A28u;
label_1c7a28:
    // 0x1c7a28: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1c7a28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1c7a2c:
    // 0x1c7a2c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c7a2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c7a30:
    // 0x1c7a30: 0x0  nop
    ctx->pc = 0x1c7a30u;
    // NOP
label_1c7a34:
    // 0x1c7a34: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x1c7a34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
label_1c7a38:
    // 0x1c7a38: 0x8fa400e0  lw          $a0, 0xE0($sp)
    ctx->pc = 0x1c7a38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_1c7a3c:
    // 0x1c7a3c: 0xc0552dc  jal         func_154B70
label_1c7a40:
    if (ctx->pc == 0x1C7A40u) {
        ctx->pc = 0x1C7A44u;
        goto label_1c7a44;
    }
    ctx->pc = 0x1C7A3Cu;
    SET_GPR_U32(ctx, 31, 0x1C7A44u);
    ctx->pc = 0x154B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B70u, 0x1C7A3Cu, 0x1C7A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7A44u;
label_1c7a44:
    // 0x1c7a44: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c7a44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c7a48:
    // 0x1c7a48: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1c7a48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c7a4c:
    // 0x1c7a4c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1c7a4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1c7a50:
    // 0x1c7a50: 0x27a700cc  addiu       $a3, $sp, 0xCC
    ctx->pc = 0x1c7a50u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 204));
label_1c7a54:
    // 0x1c7a54: 0xc7ac00f0  lwc1        $f12, 0xF0($sp)
    ctx->pc = 0x1c7a54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1c7a58:
    // 0x1c7a58: 0xc7ad0100  lwc1        $f13, 0x100($sp)
    ctx->pc = 0x1c7a58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1c7a5c:
    // 0x1c7a5c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c7a5cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c7a60:
    // 0x1c7a60: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1c7a60u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c7a64:
    // 0x1c7a64: 0xc08b9fc  jal         func_22E7F0
label_1c7a68:
    if (ctx->pc == 0x1C7A68u) {
        ctx->pc = 0x1C7A6Cu;
        goto label_1c7a6c;
    }
    ctx->pc = 0x1C7A64u;
    SET_GPR_U32(ctx, 31, 0x1C7A6Cu);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x1C7A64u, 0x1C7A6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7A6Cu;
label_1c7a6c:
    // 0x1c7a6c: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x1c7a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
label_1c7a70:
    // 0x1c7a70: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c7a70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c7a74:
    // 0x1c7a74: 0x0  nop
    ctx->pc = 0x1c7a74u;
    // NOP
label_1c7a78:
    // 0x1c7a78: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x1c7a78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_1c7a7c:
    // 0x1c7a7c: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x1c7a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
label_1c7a80:
    // 0x1c7a80: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c7a80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c7a84:
    // 0x1c7a84: 0x0  nop
    ctx->pc = 0x1c7a84u;
    // NOP
label_1c7a88:
    // 0x1c7a88: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x1c7a88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
label_1c7a8c:
    // 0x1c7a8c: 0x8fa400e0  lw          $a0, 0xE0($sp)
    ctx->pc = 0x1c7a8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_1c7a90:
    // 0x1c7a90: 0xc0552dc  jal         func_154B70
label_1c7a94:
    if (ctx->pc == 0x1C7A94u) {
        ctx->pc = 0x1C7A98u;
        goto label_1c7a98;
    }
    ctx->pc = 0x1C7A90u;
    SET_GPR_U32(ctx, 31, 0x1C7A98u);
    ctx->pc = 0x154B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B70u, 0x1C7A90u, 0x1C7A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7A98u;
label_1c7a98:
    // 0x1c7a98: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c7a98u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1c7a9c:
    // 0x1c7a9c: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x1c7a9cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1c7aa0:
    // 0x1c7aa0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c7aa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c7aa4:
    // 0x1c7aa4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1c7aa4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c7aa8:
    // 0x1c7aa8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1c7aa8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c7aac:
    // 0x1c7aac: 0x27a70098  addiu       $a3, $sp, 0x98
    ctx->pc = 0x1c7aacu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
label_1c7ab0:
    // 0x1c7ab0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c7ab0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c7ab4:
    // 0x1c7ab4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1c7ab4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c7ab8:
    // 0x1c7ab8: 0xc08b9fc  jal         func_22E7F0
label_1c7abc:
    if (ctx->pc == 0x1C7ABCu) {
        ctx->pc = 0x1C7AC0u;
        goto label_1c7ac0;
    }
    ctx->pc = 0x1C7AB8u;
    SET_GPR_U32(ctx, 31, 0x1C7AC0u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x1C7AB8u, 0x1C7AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7AC0u;
label_1c7ac0:
    // 0x1c7ac0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1c7ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1c7ac4:
    // 0x1c7ac4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c7ac4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c7ac8:
    // 0x1c7ac8: 0x0  nop
    ctx->pc = 0x1c7ac8u;
    // NOP
label_1c7acc:
    // 0x1c7acc: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x1c7accu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_1c7ad0:
    // 0x1c7ad0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1c7ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1c7ad4:
    // 0x1c7ad4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c7ad4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c7ad8:
    // 0x1c7ad8: 0x0  nop
    ctx->pc = 0x1c7ad8u;
    // NOP
label_1c7adc:
    // 0x1c7adc: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x1c7adcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
label_1c7ae0:
    // 0x1c7ae0: 0x8fa400e0  lw          $a0, 0xE0($sp)
    ctx->pc = 0x1c7ae0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_1c7ae4:
    // 0x1c7ae4: 0xc0552dc  jal         func_154B70
label_1c7ae8:
    if (ctx->pc == 0x1C7AE8u) {
        ctx->pc = 0x1C7AECu;
        goto label_1c7aec;
    }
    ctx->pc = 0x1C7AE4u;
    SET_GPR_U32(ctx, 31, 0x1C7AECu);
    ctx->pc = 0x154B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B70u, 0x1C7AE4u, 0x1C7AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7AECu;
label_1c7aec:
    // 0x1c7aec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c7aecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c7af0:
    // 0x1c7af0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1c7af0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c7af4:
    // 0x1c7af4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1c7af4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c7af8:
    // 0x1c7af8: 0x27a70098  addiu       $a3, $sp, 0x98
    ctx->pc = 0x1c7af8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
label_1c7afc:
    // 0x1c7afc: 0xc7ac00f0  lwc1        $f12, 0xF0($sp)
    ctx->pc = 0x1c7afcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1c7b00:
    // 0x1c7b00: 0xc7ad0100  lwc1        $f13, 0x100($sp)
    ctx->pc = 0x1c7b00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1c7b04:
    // 0x1c7b04: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c7b04u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c7b08:
    // 0x1c7b08: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1c7b08u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c7b0c:
    // 0x1c7b0c: 0xc08b9fc  jal         func_22E7F0
label_1c7b10:
    if (ctx->pc == 0x1C7B10u) {
        ctx->pc = 0x1C7B14u;
        goto label_1c7b14;
    }
    ctx->pc = 0x1C7B0Cu;
    SET_GPR_U32(ctx, 31, 0x1C7B14u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x1C7B0Cu, 0x1C7B14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7B14u;
label_1c7b14:
    // 0x1c7b14: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1c7b14u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1c7b18:
    // 0x1c7b18: 0x1000ffa6  b           . + 4 + (-0x5A << 2)
label_1c7b1c:
    if (ctx->pc == 0x1C7B1Cu) {
        ctx->pc = 0x1C7B20u;
        goto label_1c7b20;
    }
    ctx->pc = 0x1C7B18u;
    {
        const bool branch_taken_0x1c7b18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c7b18) {
            ctx->pc = 0x1C79B4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c79b4;
        }
    }
    ctx->pc = 0x1C7B20u;
label_1c7b20:
    // 0x1c7b20: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1c7b20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_1c7b24:
    // 0x1c7b24: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1c7b24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1c7b28:
    // 0x1c7b28: 0xc0406a0  jal         func_101A80
label_1c7b2c:
    if (ctx->pc == 0x1C7B2Cu) {
        ctx->pc = 0x1C7B30u;
        goto label_1c7b30;
    }
    ctx->pc = 0x1C7B28u;
    SET_GPR_U32(ctx, 31, 0x1C7B30u);
    ctx->pc = 0x101A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A80u, 0x1C7B28u, 0x1C7B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7B30u;
label_1c7b30:
    // 0x1c7b30: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1c7b30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_1c7b34:
    // 0x1c7b34: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1c7b34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1c7b38:
    // 0x1c7b38: 0xc0406a0  jal         func_101A80
label_1c7b3c:
    if (ctx->pc == 0x1C7B3Cu) {
        ctx->pc = 0x1C7B40u;
        goto label_1c7b40;
    }
    ctx->pc = 0x1C7B38u;
    SET_GPR_U32(ctx, 31, 0x1C7B40u);
    ctx->pc = 0x101A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A80u, 0x1C7B38u, 0x1C7B40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7B40u;
label_1c7b40:
    // 0x1c7b40: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1c7b40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_1c7b44:
    // 0x1c7b44: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1c7b44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1c7b48:
    // 0x1c7b48: 0xc0406a0  jal         func_101A80
label_1c7b4c:
    if (ctx->pc == 0x1C7B4Cu) {
        ctx->pc = 0x1C7B50u;
        goto label_1c7b50;
    }
    ctx->pc = 0x1C7B48u;
    SET_GPR_U32(ctx, 31, 0x1C7B50u);
    ctx->pc = 0x101A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A80u, 0x1C7B48u, 0x1C7B50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7B50u;
label_1c7b50:
    // 0x1c7b50: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1c7b50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1c7b54:
    // 0x1c7b54: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c7b54u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1c7b58:
    // 0x1c7b58: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c7b58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1c7b5c:
    // 0x1c7b5c: 0x27bd0110  addiu       $sp, $sp, 0x110
    ctx->pc = 0x1c7b5cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_1c7b60:
    // 0x1c7b60: 0x3e00008  jr          $ra
label_1c7b64:
    if (ctx->pc == 0x1C7B64u) {
        ctx->pc = 0x1C7B68u;
        goto label_1c7b68;
    }
    ctx->pc = 0x1C7B60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C7B60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C7B68u;
label_1c7b68:
    // 0x1c7b68: 0x0  nop
    ctx->pc = 0x1c7b68u;
    // NOP
label_1c7b6c:
    // 0x1c7b6c: 0x0  nop
    ctx->pc = 0x1c7b6cu;
    // NOP
label_1c7b70:
    // 0x1c7b70: 0x27bdfe90  addiu       $sp, $sp, -0x170
    ctx->pc = 0x1c7b70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966928));
label_1c7b74:
    // 0x1c7b74: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1c7b74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1c7b78:
    // 0x1c7b78: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c7b78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1c7b7c:
    // 0x1c7b7c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c7b7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1c7b80:
    // 0x1c7b80: 0xafa40130  sw          $a0, 0x130($sp)
    ctx->pc = 0x1c7b80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 4));
label_1c7b84:
    // 0x1c7b84: 0xafa50140  sw          $a1, 0x140($sp)
    ctx->pc = 0x1c7b84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 5));
label_1c7b88:
    // 0x1c7b88: 0xe7ac0150  swc1        $f12, 0x150($sp)
    ctx->pc = 0x1c7b88u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
label_1c7b8c:
    // 0x1c7b8c: 0xe7ad0160  swc1        $f13, 0x160($sp)
    ctx->pc = 0x1c7b8cu;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
label_1c7b90:
    // 0x1c7b90: 0x8fa40140  lw          $a0, 0x140($sp)
    ctx->pc = 0x1c7b90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_1c7b94:
    // 0x1c7b94: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1c7b94u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_1c7b98:
    // 0x1c7b98: 0x24a576d0  addiu       $a1, $a1, 0x76D0
    ctx->pc = 0x1c7b98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30416));
label_1c7b9c:
    // 0x1c7b9c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1c7b9cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1c7ba0:
    // 0x1c7ba0: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x1c7ba0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_1c7ba4:
    // 0x1c7ba4: 0x320f809  jalr        $t9
label_1c7ba8:
    if (ctx->pc == 0x1C7BA8u) {
        ctx->pc = 0x1C7BACu;
        goto label_1c7bac;
    }
    ctx->pc = 0x1C7BA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1C7BACu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C7BA4u, 0x1C7BACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C7BACu;
label_1c7bac:
    // 0x1c7bac: 0x14400108  bnez        $v0, . + 4 + (0x108 << 2)
label_1c7bb0:
    if (ctx->pc == 0x1C7BB0u) {
        ctx->pc = 0x1C7BB4u;
        goto label_1c7bb4;
    }
    ctx->pc = 0x1C7BACu;
    {
        const bool branch_taken_0x1c7bac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c7bac) {
            ctx->pc = 0x1C7FD0u;
            goto label_1c7fd0;
        }
    }
    ctx->pc = 0x1C7BB4u;
label_1c7bb4:
    // 0x1c7bb4: 0x8fa30130  lw          $v1, 0x130($sp)
    ctx->pc = 0x1c7bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
label_1c7bb8:
    // 0x1c7bb8: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x1c7bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
label_1c7bbc:
    // 0x1c7bbc: 0x8c420104  lw          $v0, 0x104($v0)
    ctx->pc = 0x1c7bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
label_1c7bc0:
    // 0x1c7bc0: 0x24470061  addiu       $a3, $v0, 0x61
    ctx->pc = 0x1c7bc0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 97));
label_1c7bc4:
    // 0x1c7bc4: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x1c7bc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_1c7bc8:
    // 0x1c7bc8: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1c7bc8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_1c7bcc:
    // 0x1c7bcc: 0x24a57700  addiu       $a1, $a1, 0x7700
    ctx->pc = 0x1c7bccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30464));
label_1c7bd0:
    // 0x1c7bd0: 0x8c660028  lw          $a2, 0x28($v1)
    ctx->pc = 0x1c7bd0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_1c7bd4:
    // 0x1c7bd4: 0xc0bc3e2  jal         func_2F0F88
label_1c7bd8:
    if (ctx->pc == 0x1C7BD8u) {
        ctx->pc = 0x1C7BDCu;
        goto label_1c7bdc;
    }
    ctx->pc = 0x1C7BD4u;
    SET_GPR_U32(ctx, 31, 0x1C7BDCu);
    ctx->pc = 0x2F0F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0F88u, 0x1C7BD4u, 0x1C7BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7BDCu;
label_1c7bdc:
    // 0x1c7bdc: 0x8fa30130  lw          $v1, 0x130($sp)
    ctx->pc = 0x1c7bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
label_1c7be0:
    // 0x1c7be0: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x1c7be0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
label_1c7be4:
    // 0x1c7be4: 0x8c420104  lw          $v0, 0x104($v0)
    ctx->pc = 0x1c7be4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
label_1c7be8:
    // 0x1c7be8: 0x24470061  addiu       $a3, $v0, 0x61
    ctx->pc = 0x1c7be8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 97));
label_1c7bec:
    // 0x1c7bec: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1c7becu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1c7bf0:
    // 0x1c7bf0: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1c7bf0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_1c7bf4:
    // 0x1c7bf4: 0x24a57720  addiu       $a1, $a1, 0x7720
    ctx->pc = 0x1c7bf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30496));
label_1c7bf8:
    // 0x1c7bf8: 0x8c660028  lw          $a2, 0x28($v1)
    ctx->pc = 0x1c7bf8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_1c7bfc:
    // 0x1c7bfc: 0xc0bc3e2  jal         func_2F0F88
label_1c7c00:
    if (ctx->pc == 0x1C7C00u) {
        ctx->pc = 0x1C7C04u;
        goto label_1c7c04;
    }
    ctx->pc = 0x1C7BFCu;
    SET_GPR_U32(ctx, 31, 0x1C7C04u);
    ctx->pc = 0x2F0F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0F88u, 0x1C7BFCu, 0x1C7C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7C04u;
label_1c7c04:
    // 0x1c7c04: 0x8fa30130  lw          $v1, 0x130($sp)
    ctx->pc = 0x1c7c04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
label_1c7c08:
    // 0x1c7c08: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x1c7c08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
label_1c7c0c:
    // 0x1c7c0c: 0x8c420104  lw          $v0, 0x104($v0)
    ctx->pc = 0x1c7c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
label_1c7c10:
    // 0x1c7c10: 0x24470061  addiu       $a3, $v0, 0x61
    ctx->pc = 0x1c7c10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 97));
label_1c7c14:
    // 0x1c7c14: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1c7c14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_1c7c18:
    // 0x1c7c18: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1c7c18u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_1c7c1c:
    // 0x1c7c1c: 0x24a57740  addiu       $a1, $a1, 0x7740
    ctx->pc = 0x1c7c1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30528));
label_1c7c20:
    // 0x1c7c20: 0x8c660028  lw          $a2, 0x28($v1)
    ctx->pc = 0x1c7c20u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_1c7c24:
    // 0x1c7c24: 0xc0bc3e2  jal         func_2F0F88
label_1c7c28:
    if (ctx->pc == 0x1C7C28u) {
        ctx->pc = 0x1C7C2Cu;
        goto label_1c7c2c;
    }
    ctx->pc = 0x1C7C24u;
    SET_GPR_U32(ctx, 31, 0x1C7C2Cu);
    ctx->pc = 0x2F0F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0F88u, 0x1C7C24u, 0x1C7C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7C2Cu;
label_1c7c2c:
    // 0x1c7c2c: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x1c7c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_1c7c30:
    // 0x1c7c30: 0xc0495d4  jal         func_125750
label_1c7c34:
    if (ctx->pc == 0x1C7C34u) {
        ctx->pc = 0x1C7C38u;
        goto label_1c7c38;
    }
    ctx->pc = 0x1C7C30u;
    SET_GPR_U32(ctx, 31, 0x1C7C38u);
    ctx->pc = 0x125750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125750u, 0x1C7C30u, 0x1C7C38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7C38u;
label_1c7c38:
    // 0x1c7c38: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x1c7c38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
label_1c7c3c:
    // 0x1c7c3c: 0x8c43002c  lw          $v1, 0x2C($v0)
    ctx->pc = 0x1c7c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_1c7c40:
    // 0x1c7c40: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1c7c40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1c7c44:
    // 0x1c7c44: 0x1062001f  beq         $v1, $v0, . + 4 + (0x1F << 2)
label_1c7c48:
    if (ctx->pc == 0x1C7C48u) {
        ctx->pc = 0x1C7C4Cu;
        goto label_1c7c4c;
    }
    ctx->pc = 0x1C7C44u;
    {
        const bool branch_taken_0x1c7c44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1c7c44) {
            ctx->pc = 0x1C7CC4u;
            goto label_1c7cc4;
        }
    }
    ctx->pc = 0x1C7C4Cu;
label_1c7c4c:
    // 0x1c7c4c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c7c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c7c50:
    // 0x1c7c50: 0x10620012  beq         $v1, $v0, . + 4 + (0x12 << 2)
label_1c7c54:
    if (ctx->pc == 0x1C7C54u) {
        ctx->pc = 0x1C7C58u;
        goto label_1c7c58;
    }
    ctx->pc = 0x1C7C50u;
    {
        const bool branch_taken_0x1c7c50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1c7c50) {
            ctx->pc = 0x1C7C9Cu;
            goto label_1c7c9c;
        }
    }
    ctx->pc = 0x1C7C58u;
label_1c7c58:
    // 0x1c7c58: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
label_1c7c5c:
    if (ctx->pc == 0x1C7C5Cu) {
        ctx->pc = 0x1C7C60u;
        goto label_1c7c60;
    }
    ctx->pc = 0x1C7C58u;
    {
        const bool branch_taken_0x1c7c58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c7c58) {
            ctx->pc = 0x1C7C9Cu;
            goto label_1c7c9c;
        }
    }
    ctx->pc = 0x1C7C60u;
label_1c7c60:
    // 0x1c7c60: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1c7c60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1c7c64:
    // 0x1c7c64: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_1c7c68:
    if (ctx->pc == 0x1C7C68u) {
        ctx->pc = 0x1C7C6Cu;
        goto label_1c7c6c;
    }
    ctx->pc = 0x1C7C64u;
    {
        const bool branch_taken_0x1c7c64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1c7c64) {
            ctx->pc = 0x1C7C74u;
            goto label_1c7c74;
        }
    }
    ctx->pc = 0x1C7C6Cu;
label_1c7c6c:
    // 0x1c7c6c: 0x10000015  b           . + 4 + (0x15 << 2)
label_1c7c70:
    if (ctx->pc == 0x1C7C70u) {
        ctx->pc = 0x1C7C74u;
        goto label_1c7c74;
    }
    ctx->pc = 0x1C7C6Cu;
    {
        const bool branch_taken_0x1c7c6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c7c6c) {
            ctx->pc = 0x1C7CC4u;
            goto label_1c7cc4;
        }
    }
    ctx->pc = 0x1C7C74u;
label_1c7c74:
    // 0x1c7c74: 0x8f84bbdc  lw          $a0, -0x4424($gp)
    ctx->pc = 0x1c7c74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949852)));
label_1c7c78:
    // 0x1c7c78: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x1c7c78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_1c7c7c:
    // 0x1c7c7c: 0xc08e57c  jal         func_2395F0
label_1c7c80:
    if (ctx->pc == 0x1C7C80u) {
        ctx->pc = 0x1C7C84u;
        goto label_1c7c84;
    }
    ctx->pc = 0x1C7C7Cu;
    SET_GPR_U32(ctx, 31, 0x1C7C84u);
    ctx->pc = 0x2395F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2395F0u, 0x1C7C7Cu, 0x1C7C84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7C84u;
label_1c7c84:
    // 0x1c7c84: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x1c7c84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_1c7c88:
    // 0x1c7c88: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1c7c88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c7c8c:
    // 0x1c7c8c: 0xc0477e8  jal         func_11DFA0
label_1c7c90:
    if (ctx->pc == 0x1C7C90u) {
        ctx->pc = 0x1C7C94u;
        goto label_1c7c94;
    }
    ctx->pc = 0x1C7C8Cu;
    SET_GPR_U32(ctx, 31, 0x1C7C94u);
    ctx->pc = 0x11DFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11DFA0u, 0x1C7C8Cu, 0x1C7C94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7C94u;
label_1c7c94:
    // 0x1c7c94: 0x10000013  b           . + 4 + (0x13 << 2)
label_1c7c98:
    if (ctx->pc == 0x1C7C98u) {
        ctx->pc = 0x1C7C9Cu;
        goto label_1c7c9c;
    }
    ctx->pc = 0x1C7C94u;
    {
        const bool branch_taken_0x1c7c94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c7c94) {
            ctx->pc = 0x1C7CE4u;
            goto label_1c7ce4;
        }
    }
    ctx->pc = 0x1C7C9Cu;
label_1c7c9c:
    // 0x1c7c9c: 0x8f84bbdc  lw          $a0, -0x4424($gp)
    ctx->pc = 0x1c7c9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949852)));
label_1c7ca0:
    // 0x1c7ca0: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x1c7ca0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_1c7ca4:
    // 0x1c7ca4: 0xc08e57c  jal         func_2395F0
label_1c7ca8:
    if (ctx->pc == 0x1C7CA8u) {
        ctx->pc = 0x1C7CACu;
        goto label_1c7cac;
    }
    ctx->pc = 0x1C7CA4u;
    SET_GPR_U32(ctx, 31, 0x1C7CACu);
    ctx->pc = 0x2395F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2395F0u, 0x1C7CA4u, 0x1C7CACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7CACu;
label_1c7cac:
    // 0x1c7cac: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x1c7cacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_1c7cb0:
    // 0x1c7cb0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1c7cb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c7cb4:
    // 0x1c7cb4: 0xc0477e8  jal         func_11DFA0
label_1c7cb8:
    if (ctx->pc == 0x1C7CB8u) {
        ctx->pc = 0x1C7CBCu;
        goto label_1c7cbc;
    }
    ctx->pc = 0x1C7CB4u;
    SET_GPR_U32(ctx, 31, 0x1C7CBCu);
    ctx->pc = 0x11DFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11DFA0u, 0x1C7CB4u, 0x1C7CBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7CBCu;
label_1c7cbc:
    // 0x1c7cbc: 0x10000009  b           . + 4 + (0x9 << 2)
label_1c7cc0:
    if (ctx->pc == 0x1C7CC0u) {
        ctx->pc = 0x1C7CC4u;
        goto label_1c7cc4;
    }
    ctx->pc = 0x1C7CBCu;
    {
        const bool branch_taken_0x1c7cbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c7cbc) {
            ctx->pc = 0x1C7CE4u;
            goto label_1c7ce4;
        }
    }
    ctx->pc = 0x1C7CC4u;
label_1c7cc4:
    // 0x1c7cc4: 0x8f84bbdc  lw          $a0, -0x4424($gp)
    ctx->pc = 0x1c7cc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949852)));
label_1c7cc8:
    // 0x1c7cc8: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x1c7cc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1c7ccc:
    // 0x1c7ccc: 0xc08e57c  jal         func_2395F0
label_1c7cd0:
    if (ctx->pc == 0x1C7CD0u) {
        ctx->pc = 0x1C7CD4u;
        goto label_1c7cd4;
    }
    ctx->pc = 0x1C7CCCu;
    SET_GPR_U32(ctx, 31, 0x1C7CD4u);
    ctx->pc = 0x2395F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2395F0u, 0x1C7CCCu, 0x1C7CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7CD4u;
label_1c7cd4:
    // 0x1c7cd4: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x1c7cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_1c7cd8:
    // 0x1c7cd8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1c7cd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c7cdc:
    // 0x1c7cdc: 0xc0477e8  jal         func_11DFA0
label_1c7ce0:
    if (ctx->pc == 0x1C7CE0u) {
        ctx->pc = 0x1C7CE4u;
        goto label_1c7ce4;
    }
    ctx->pc = 0x1C7CDCu;
    SET_GPR_U32(ctx, 31, 0x1C7CE4u);
    ctx->pc = 0x11DFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11DFA0u, 0x1C7CDCu, 0x1C7CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7CE4u;
label_1c7ce4:
    // 0x1c7ce4: 0x27a400d8  addiu       $a0, $sp, 0xD8
    ctx->pc = 0x1c7ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
label_1c7ce8:
    // 0x1c7ce8: 0x27859610  addiu       $a1, $gp, -0x69F0
    ctx->pc = 0x1c7ce8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294940176));
label_1c7cec:
    // 0x1c7cec: 0xc040304  jal         func_100C10
label_1c7cf0:
    if (ctx->pc == 0x1C7CF0u) {
        ctx->pc = 0x1C7CF4u;
        goto label_1c7cf4;
    }
    ctx->pc = 0x1C7CECu;
    SET_GPR_U32(ctx, 31, 0x1C7CF4u);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x1C7CECu, 0x1C7CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7CF4u;
label_1c7cf4:
    // 0x1c7cf4: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1c7cf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_1c7cf8:
    // 0x1c7cf8: 0x27a500d8  addiu       $a1, $sp, 0xD8
    ctx->pc = 0x1c7cf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
label_1c7cfc:
    // 0x1c7cfc: 0xc119568  jal         func_4655A0
label_1c7d00:
    if (ctx->pc == 0x1C7D00u) {
        ctx->pc = 0x1C7D04u;
        goto label_1c7d04;
    }
    ctx->pc = 0x1C7CFCu;
    SET_GPR_U32(ctx, 31, 0x1C7D04u);
    ctx->pc = 0x4655A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4655A0u, 0x1C7CFCu, 0x1C7D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7D04u;
label_1c7d04:
    // 0x1c7d04: 0x27a400d8  addiu       $a0, $sp, 0xD8
    ctx->pc = 0x1c7d04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
label_1c7d08:
    // 0x1c7d08: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1c7d08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1c7d0c:
    // 0x1c7d0c: 0xc0402d4  jal         func_100B50
label_1c7d10:
    if (ctx->pc == 0x1C7D10u) {
        ctx->pc = 0x1C7D14u;
        goto label_1c7d14;
    }
    ctx->pc = 0x1C7D0Cu;
    SET_GPR_U32(ctx, 31, 0x1C7D14u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x1C7D0Cu, 0x1C7D14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7D14u;
label_1c7d14:
    // 0x1c7d14: 0x27a400c8  addiu       $a0, $sp, 0xC8
    ctx->pc = 0x1c7d14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
label_1c7d18:
    // 0x1c7d18: 0x27859618  addiu       $a1, $gp, -0x69E8
    ctx->pc = 0x1c7d18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294940184));
label_1c7d1c:
    // 0x1c7d1c: 0xc040304  jal         func_100C10
label_1c7d20:
    if (ctx->pc == 0x1C7D20u) {
        ctx->pc = 0x1C7D24u;
        goto label_1c7d24;
    }
    ctx->pc = 0x1C7D1Cu;
    SET_GPR_U32(ctx, 31, 0x1C7D24u);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x1C7D1Cu, 0x1C7D24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7D24u;
label_1c7d24:
    // 0x1c7d24: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x1c7d24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_1c7d28:
    // 0x1c7d28: 0x27a500c8  addiu       $a1, $sp, 0xC8
    ctx->pc = 0x1c7d28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
label_1c7d2c:
    // 0x1c7d2c: 0xc119568  jal         func_4655A0
label_1c7d30:
    if (ctx->pc == 0x1C7D30u) {
        ctx->pc = 0x1C7D34u;
        goto label_1c7d34;
    }
    ctx->pc = 0x1C7D2Cu;
    SET_GPR_U32(ctx, 31, 0x1C7D34u);
    ctx->pc = 0x4655A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4655A0u, 0x1C7D2Cu, 0x1C7D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7D34u;
label_1c7d34:
    // 0x1c7d34: 0x27a400c8  addiu       $a0, $sp, 0xC8
    ctx->pc = 0x1c7d34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
label_1c7d38:
    // 0x1c7d38: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1c7d38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1c7d3c:
    // 0x1c7d3c: 0xc0402d4  jal         func_100B50
label_1c7d40:
    if (ctx->pc == 0x1C7D40u) {
        ctx->pc = 0x1C7D44u;
        goto label_1c7d44;
    }
    ctx->pc = 0x1C7D3Cu;
    SET_GPR_U32(ctx, 31, 0x1C7D44u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x1C7D3Cu, 0x1C7D44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7D44u;
label_1c7d44:
    // 0x1c7d44: 0x27a400b8  addiu       $a0, $sp, 0xB8
    ctx->pc = 0x1c7d44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
label_1c7d48:
    // 0x1c7d48: 0x27859628  addiu       $a1, $gp, -0x69D8
    ctx->pc = 0x1c7d48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294940200));
label_1c7d4c:
    // 0x1c7d4c: 0xc040304  jal         func_100C10
label_1c7d50:
    if (ctx->pc == 0x1C7D50u) {
        ctx->pc = 0x1C7D54u;
        goto label_1c7d54;
    }
    ctx->pc = 0x1C7D4Cu;
    SET_GPR_U32(ctx, 31, 0x1C7D54u);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x1C7D4Cu, 0x1C7D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7D54u;
label_1c7d54:
    // 0x1c7d54: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x1c7d54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_1c7d58:
    // 0x1c7d58: 0x27a500b8  addiu       $a1, $sp, 0xB8
    ctx->pc = 0x1c7d58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
label_1c7d5c:
    // 0x1c7d5c: 0xc119568  jal         func_4655A0
label_1c7d60:
    if (ctx->pc == 0x1C7D60u) {
        ctx->pc = 0x1C7D64u;
        goto label_1c7d64;
    }
    ctx->pc = 0x1C7D5Cu;
    SET_GPR_U32(ctx, 31, 0x1C7D64u);
    ctx->pc = 0x4655A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4655A0u, 0x1C7D5Cu, 0x1C7D64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7D64u;
label_1c7d64:
    // 0x1c7d64: 0x27a400b8  addiu       $a0, $sp, 0xB8
    ctx->pc = 0x1c7d64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
label_1c7d68:
    // 0x1c7d68: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1c7d68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1c7d6c:
    // 0x1c7d6c: 0xc0402d4  jal         func_100B50
label_1c7d70:
    if (ctx->pc == 0x1C7D70u) {
        ctx->pc = 0x1C7D74u;
        goto label_1c7d74;
    }
    ctx->pc = 0x1C7D6Cu;
    SET_GPR_U32(ctx, 31, 0x1C7D74u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x1C7D6Cu, 0x1C7D74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7D74u;
label_1c7d74:
    // 0x1c7d74: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x1c7d74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
label_1c7d78:
    // 0x1c7d78: 0x8f84bbdc  lw          $a0, -0x4424($gp)
    ctx->pc = 0x1c7d78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949852)));
label_1c7d7c:
    // 0x1c7d7c: 0x27a50120  addiu       $a1, $sp, 0x120
    ctx->pc = 0x1c7d7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_1c7d80:
    // 0x1c7d80: 0x27a60110  addiu       $a2, $sp, 0x110
    ctx->pc = 0x1c7d80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_1c7d84:
    // 0x1c7d84: 0x8c4700f8  lw          $a3, 0xF8($v0)
    ctx->pc = 0x1c7d84u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 248)));
label_1c7d88:
    // 0x1c7d88: 0xc08e63c  jal         func_2398F0
label_1c7d8c:
    if (ctx->pc == 0x1C7D8Cu) {
        ctx->pc = 0x1C7D90u;
        goto label_1c7d90;
    }
    ctx->pc = 0x1C7D88u;
    SET_GPR_U32(ctx, 31, 0x1C7D90u);
    ctx->pc = 0x2398F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2398F0u, 0x1C7D88u, 0x1C7D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7D90u;
label_1c7d90:
    // 0x1c7d90: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x1c7d90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
label_1c7d94:
    // 0x1c7d94: 0xc440003c  lwc1        $f0, 0x3C($v0)
    ctx->pc = 0x1c7d94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c7d98:
    // 0x1c7d98: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1c7d98u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1c7d9c:
    // 0x1c7d9c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1c7d9cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_1c7da0:
    // 0x1c7da0: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x1c7da0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
label_1c7da4:
    // 0x1c7da4: 0x8c4200f8  lw          $v0, 0xF8($v0)
    ctx->pc = 0x1c7da4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 248)));
label_1c7da8:
    // 0x1c7da8: 0x622023  subu        $a0, $v1, $v0
    ctx->pc = 0x1c7da8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1c7dac:
    // 0x1c7dac: 0xc0ba892  jal         func_2EA248
label_1c7db0:
    if (ctx->pc == 0x1C7DB0u) {
        ctx->pc = 0x1C7DB4u;
        goto label_1c7db4;
    }
    ctx->pc = 0x1C7DACu;
    SET_GPR_U32(ctx, 31, 0x1C7DB4u);
    ctx->pc = 0x2EA248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA248u, 0x1C7DACu, 0x1C7DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7DB4u;
label_1c7db4:
    // 0x1c7db4: 0x8f84bbdc  lw          $a0, -0x4424($gp)
    ctx->pc = 0x1c7db4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949852)));
label_1c7db8:
    // 0x1c7db8: 0x27a50120  addiu       $a1, $sp, 0x120
    ctx->pc = 0x1c7db8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_1c7dbc:
    // 0x1c7dbc: 0x27a60100  addiu       $a2, $sp, 0x100
    ctx->pc = 0x1c7dbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_1c7dc0:
    // 0x1c7dc0: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1c7dc0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c7dc4:
    // 0x1c7dc4: 0xc08e63c  jal         func_2398F0
label_1c7dc8:
    if (ctx->pc == 0x1C7DC8u) {
        ctx->pc = 0x1C7DCCu;
        goto label_1c7dcc;
    }
    ctx->pc = 0x1C7DC4u;
    SET_GPR_U32(ctx, 31, 0x1C7DCCu);
    ctx->pc = 0x2398F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2398F0u, 0x1C7DC4u, 0x1C7DCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7DCCu;
label_1c7dcc:
    // 0x1c7dcc: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x1c7dccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
label_1c7dd0:
    // 0x1c7dd0: 0xc440003c  lwc1        $f0, 0x3C($v0)
    ctx->pc = 0x1c7dd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c7dd4:
    // 0x1c7dd4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1c7dd4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1c7dd8:
    // 0x1c7dd8: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x1c7dd8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
label_1c7ddc:
    // 0x1c7ddc: 0x8f84bbdc  lw          $a0, -0x4424($gp)
    ctx->pc = 0x1c7ddcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949852)));
label_1c7de0:
    // 0x1c7de0: 0x27a50120  addiu       $a1, $sp, 0x120
    ctx->pc = 0x1c7de0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_1c7de4:
    // 0x1c7de4: 0x27a600f0  addiu       $a2, $sp, 0xF0
    ctx->pc = 0x1c7de4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_1c7de8:
    // 0x1c7de8: 0xc08e63c  jal         func_2398F0
label_1c7dec:
    if (ctx->pc == 0x1C7DECu) {
        ctx->pc = 0x1C7DF0u;
        goto label_1c7df0;
    }
    ctx->pc = 0x1C7DE8u;
    SET_GPR_U32(ctx, 31, 0x1C7DF0u);
    ctx->pc = 0x2398F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2398F0u, 0x1C7DE8u, 0x1C7DF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7DF0u;
label_1c7df0:
    // 0x1c7df0: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x1c7df0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
label_1c7df4:
    // 0x1c7df4: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x1c7df4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_1c7df8:
    // 0x1c7df8: 0xc064f24  jal         func_193C90
label_1c7dfc:
    if (ctx->pc == 0x1C7DFCu) {
        ctx->pc = 0x1C7E00u;
        goto label_1c7e00;
    }
    ctx->pc = 0x1C7DF8u;
    SET_GPR_U32(ctx, 31, 0x1C7E00u);
    ctx->pc = 0x193C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193C90u, 0x1C7DF8u, 0x1C7E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7E00u;
label_1c7e00:
    // 0x1c7e00: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1c7e00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c7e04:
    // 0x1c7e04: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1c7e04u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1c7e08:
    // 0x1c7e08: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x1c7e08u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
label_1c7e0c:
    // 0x1c7e0c: 0x8fa40140  lw          $a0, 0x140($sp)
    ctx->pc = 0x1c7e0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_1c7e10:
    // 0x1c7e10: 0x27859630  addiu       $a1, $gp, -0x69D0
    ctx->pc = 0x1c7e10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294940208));
label_1c7e14:
    // 0x1c7e14: 0x27a60120  addiu       $a2, $sp, 0x120
    ctx->pc = 0x1c7e14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_1c7e18:
    // 0x1c7e18: 0xc055fb0  jal         func_157EC0
label_1c7e1c:
    if (ctx->pc == 0x1C7E1Cu) {
        ctx->pc = 0x1C7E20u;
        goto label_1c7e20;
    }
    ctx->pc = 0x1C7E18u;
    SET_GPR_U32(ctx, 31, 0x1C7E20u);
    ctx->pc = 0x157EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157EC0u, 0x1C7E18u, 0x1C7E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7E20u;
label_1c7e20:
    // 0x1c7e20: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1c7e20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c7e24:
    // 0x1c7e24: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1c7e24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1c7e28:
    // 0x1c7e28: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1c7e28u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_1c7e2c:
    // 0x1c7e2c: 0x24a57758  addiu       $a1, $a1, 0x7758
    ctx->pc = 0x1c7e2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30552));
label_1c7e30:
    // 0x1c7e30: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1c7e30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1c7e34:
    // 0x1c7e34: 0xc0bc3e2  jal         func_2F0F88
label_1c7e38:
    if (ctx->pc == 0x1C7E38u) {
        ctx->pc = 0x1C7E3Cu;
        goto label_1c7e3c;
    }
    ctx->pc = 0x1C7E34u;
    SET_GPR_U32(ctx, 31, 0x1C7E3Cu);
    ctx->pc = 0x2F0F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0F88u, 0x1C7E34u, 0x1C7E3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7E3Cu;
label_1c7e3c:
    // 0x1c7e3c: 0x8fa40140  lw          $a0, 0x140($sp)
    ctx->pc = 0x1c7e3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_1c7e40:
    // 0x1c7e40: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x1c7e40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1c7e44:
    // 0x1c7e44: 0xc05621c  jal         func_158870
label_1c7e48:
    if (ctx->pc == 0x1C7E48u) {
        ctx->pc = 0x1C7E4Cu;
        goto label_1c7e4c;
    }
    ctx->pc = 0x1C7E44u;
    SET_GPR_U32(ctx, 31, 0x1C7E4Cu);
    ctx->pc = 0x158870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158870u, 0x1C7E44u, 0x1C7E4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7E4Cu;
label_1c7e4c:
    // 0x1c7e4c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1c7e4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c7e50:
    // 0x1c7e50: 0x1200004f  beqz        $s0, . + 4 + (0x4F << 2)
label_1c7e54:
    if (ctx->pc == 0x1C7E54u) {
        ctx->pc = 0x1C7E58u;
        goto label_1c7e58;
    }
    ctx->pc = 0x1C7E50u;
    {
        const bool branch_taken_0x1c7e50 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c7e50) {
            ctx->pc = 0x1C7F90u;
            goto label_1c7f90;
        }
    }
    ctx->pc = 0x1C7E58u;
label_1c7e58:
    // 0x1c7e58: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1c7e58u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c7e5c:
    // 0x1c7e5c: 0x0  nop
    ctx->pc = 0x1c7e5cu;
    // NOP
label_1c7e60:
    // 0x1c7e60: 0xe7a0012c  swc1        $f0, 0x12C($sp)
    ctx->pc = 0x1c7e60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 300), bits); }
label_1c7e64:
    // 0x1c7e64: 0x8fa40140  lw          $a0, 0x140($sp)
    ctx->pc = 0x1c7e64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_1c7e68:
    // 0x1c7e68: 0xc0552dc  jal         func_154B70
label_1c7e6c:
    if (ctx->pc == 0x1C7E6Cu) {
        ctx->pc = 0x1C7E70u;
        goto label_1c7e70;
    }
    ctx->pc = 0x1C7E68u;
    SET_GPR_U32(ctx, 31, 0x1C7E70u);
    ctx->pc = 0x154B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B70u, 0x1C7E68u, 0x1C7E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7E70u;
label_1c7e70:
    // 0x1c7e70: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c7e70u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1c7e74:
    // 0x1c7e74: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x1c7e74u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1c7e78:
    // 0x1c7e78: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c7e78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c7e7c:
    // 0x1c7e7c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1c7e7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c7e80:
    // 0x1c7e80: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1c7e80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1c7e84:
    // 0x1c7e84: 0x27a7012c  addiu       $a3, $sp, 0x12C
    ctx->pc = 0x1c7e84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 300));
label_1c7e88:
    // 0x1c7e88: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c7e88u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c7e8c:
    // 0x1c7e8c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1c7e8cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c7e90:
    // 0x1c7e90: 0xc08b9fc  jal         func_22E7F0
label_1c7e94:
    if (ctx->pc == 0x1C7E94u) {
        ctx->pc = 0x1C7E98u;
        goto label_1c7e98;
    }
    ctx->pc = 0x1C7E90u;
    SET_GPR_U32(ctx, 31, 0x1C7E98u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x1C7E90u, 0x1C7E98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7E98u;
label_1c7e98:
    // 0x1c7e98: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1c7e98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1c7e9c:
    // 0x1c7e9c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c7e9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c7ea0:
    // 0x1c7ea0: 0x0  nop
    ctx->pc = 0x1c7ea0u;
    // NOP
label_1c7ea4:
    // 0x1c7ea4: 0xe7a0012c  swc1        $f0, 0x12C($sp)
    ctx->pc = 0x1c7ea4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 300), bits); }
label_1c7ea8:
    // 0x1c7ea8: 0x8fa40140  lw          $a0, 0x140($sp)
    ctx->pc = 0x1c7ea8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_1c7eac:
    // 0x1c7eac: 0xc0552dc  jal         func_154B70
label_1c7eb0:
    if (ctx->pc == 0x1C7EB0u) {
        ctx->pc = 0x1C7EB4u;
        goto label_1c7eb4;
    }
    ctx->pc = 0x1C7EACu;
    SET_GPR_U32(ctx, 31, 0x1C7EB4u);
    ctx->pc = 0x154B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B70u, 0x1C7EACu, 0x1C7EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7EB4u;
label_1c7eb4:
    // 0x1c7eb4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c7eb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c7eb8:
    // 0x1c7eb8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1c7eb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c7ebc:
    // 0x1c7ebc: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1c7ebcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1c7ec0:
    // 0x1c7ec0: 0x27a7012c  addiu       $a3, $sp, 0x12C
    ctx->pc = 0x1c7ec0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 300));
label_1c7ec4:
    // 0x1c7ec4: 0xc7ac0150  lwc1        $f12, 0x150($sp)
    ctx->pc = 0x1c7ec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1c7ec8:
    // 0x1c7ec8: 0xc7ad0160  lwc1        $f13, 0x160($sp)
    ctx->pc = 0x1c7ec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1c7ecc:
    // 0x1c7ecc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c7eccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c7ed0:
    // 0x1c7ed0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1c7ed0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c7ed4:
    // 0x1c7ed4: 0xc08b9fc  jal         func_22E7F0
label_1c7ed8:
    if (ctx->pc == 0x1C7ED8u) {
        ctx->pc = 0x1C7EDCu;
        goto label_1c7edc;
    }
    ctx->pc = 0x1C7ED4u;
    SET_GPR_U32(ctx, 31, 0x1C7EDCu);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x1C7ED4u, 0x1C7EDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7EDCu;
label_1c7edc:
    // 0x1c7edc: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x1c7edcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
label_1c7ee0:
    // 0x1c7ee0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c7ee0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c7ee4:
    // 0x1c7ee4: 0x0  nop
    ctx->pc = 0x1c7ee4u;
    // NOP
label_1c7ee8:
    // 0x1c7ee8: 0xe7a000e8  swc1        $f0, 0xE8($sp)
    ctx->pc = 0x1c7ee8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
label_1c7eec:
    // 0x1c7eec: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x1c7eecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
label_1c7ef0:
    // 0x1c7ef0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c7ef0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c7ef4:
    // 0x1c7ef4: 0x0  nop
    ctx->pc = 0x1c7ef4u;
    // NOP
label_1c7ef8:
    // 0x1c7ef8: 0xe7a000ec  swc1        $f0, 0xEC($sp)
    ctx->pc = 0x1c7ef8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
label_1c7efc:
    // 0x1c7efc: 0x8fa40140  lw          $a0, 0x140($sp)
    ctx->pc = 0x1c7efcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_1c7f00:
    // 0x1c7f00: 0xc0552dc  jal         func_154B70
label_1c7f04:
    if (ctx->pc == 0x1C7F04u) {
        ctx->pc = 0x1C7F08u;
        goto label_1c7f08;
    }
    ctx->pc = 0x1C7F00u;
    SET_GPR_U32(ctx, 31, 0x1C7F08u);
    ctx->pc = 0x154B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B70u, 0x1C7F00u, 0x1C7F08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7F08u;
label_1c7f08:
    // 0x1c7f08: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c7f08u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1c7f0c:
    // 0x1c7f0c: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x1c7f0cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1c7f10:
    // 0x1c7f10: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c7f10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c7f14:
    // 0x1c7f14: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1c7f14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c7f18:
    // 0x1c7f18: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1c7f18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c7f1c:
    // 0x1c7f1c: 0x27a700e8  addiu       $a3, $sp, 0xE8
    ctx->pc = 0x1c7f1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
label_1c7f20:
    // 0x1c7f20: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c7f20u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c7f24:
    // 0x1c7f24: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1c7f24u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c7f28:
    // 0x1c7f28: 0xc08b9fc  jal         func_22E7F0
label_1c7f2c:
    if (ctx->pc == 0x1C7F2Cu) {
        ctx->pc = 0x1C7F30u;
        goto label_1c7f30;
    }
    ctx->pc = 0x1C7F28u;
    SET_GPR_U32(ctx, 31, 0x1C7F30u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x1C7F28u, 0x1C7F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7F30u;
label_1c7f30:
    // 0x1c7f30: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1c7f30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1c7f34:
    // 0x1c7f34: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c7f34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c7f38:
    // 0x1c7f38: 0x0  nop
    ctx->pc = 0x1c7f38u;
    // NOP
label_1c7f3c:
    // 0x1c7f3c: 0xe7a000e8  swc1        $f0, 0xE8($sp)
    ctx->pc = 0x1c7f3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
label_1c7f40:
    // 0x1c7f40: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1c7f40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1c7f44:
    // 0x1c7f44: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c7f44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c7f48:
    // 0x1c7f48: 0x0  nop
    ctx->pc = 0x1c7f48u;
    // NOP
label_1c7f4c:
    // 0x1c7f4c: 0xe7a000ec  swc1        $f0, 0xEC($sp)
    ctx->pc = 0x1c7f4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
label_1c7f50:
    // 0x1c7f50: 0x8fa40140  lw          $a0, 0x140($sp)
    ctx->pc = 0x1c7f50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_1c7f54:
    // 0x1c7f54: 0xc0552dc  jal         func_154B70
label_1c7f58:
    if (ctx->pc == 0x1C7F58u) {
        ctx->pc = 0x1C7F5Cu;
        goto label_1c7f5c;
    }
    ctx->pc = 0x1C7F54u;
    SET_GPR_U32(ctx, 31, 0x1C7F5Cu);
    ctx->pc = 0x154B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B70u, 0x1C7F54u, 0x1C7F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7F5Cu;
label_1c7f5c:
    // 0x1c7f5c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c7f5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c7f60:
    // 0x1c7f60: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1c7f60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c7f64:
    // 0x1c7f64: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1c7f64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c7f68:
    // 0x1c7f68: 0x27a700e8  addiu       $a3, $sp, 0xE8
    ctx->pc = 0x1c7f68u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
label_1c7f6c:
    // 0x1c7f6c: 0xc7ac0150  lwc1        $f12, 0x150($sp)
    ctx->pc = 0x1c7f6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1c7f70:
    // 0x1c7f70: 0xc7ad0160  lwc1        $f13, 0x160($sp)
    ctx->pc = 0x1c7f70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1c7f74:
    // 0x1c7f74: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c7f74u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c7f78:
    // 0x1c7f78: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1c7f78u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c7f7c:
    // 0x1c7f7c: 0xc08b9fc  jal         func_22E7F0
label_1c7f80:
    if (ctx->pc == 0x1C7F80u) {
        ctx->pc = 0x1C7F84u;
        goto label_1c7f84;
    }
    ctx->pc = 0x1C7F7Cu;
    SET_GPR_U32(ctx, 31, 0x1C7F84u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x1C7F7Cu, 0x1C7F84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7F84u;
label_1c7f84:
    // 0x1c7f84: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1c7f84u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1c7f88:
    // 0x1c7f88: 0x1000ffa6  b           . + 4 + (-0x5A << 2)
label_1c7f8c:
    if (ctx->pc == 0x1C7F8Cu) {
        ctx->pc = 0x1C7F90u;
        goto label_1c7f90;
    }
    ctx->pc = 0x1C7F88u;
    {
        const bool branch_taken_0x1c7f88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c7f88) {
            ctx->pc = 0x1C7E24u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c7e24;
        }
    }
    ctx->pc = 0x1C7F90u;
label_1c7f90:
    // 0x1c7f90: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x1c7f90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_1c7f94:
    // 0x1c7f94: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1c7f94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1c7f98:
    // 0x1c7f98: 0xc0406a0  jal         func_101A80
label_1c7f9c:
    if (ctx->pc == 0x1C7F9Cu) {
        ctx->pc = 0x1C7FA0u;
        goto label_1c7fa0;
    }
    ctx->pc = 0x1C7F98u;
    SET_GPR_U32(ctx, 31, 0x1C7FA0u);
    ctx->pc = 0x101A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A80u, 0x1C7F98u, 0x1C7FA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7FA0u;
label_1c7fa0:
    // 0x1c7fa0: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x1c7fa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_1c7fa4:
    // 0x1c7fa4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1c7fa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1c7fa8:
    // 0x1c7fa8: 0xc0406a0  jal         func_101A80
label_1c7fac:
    if (ctx->pc == 0x1C7FACu) {
        ctx->pc = 0x1C7FB0u;
        goto label_1c7fb0;
    }
    ctx->pc = 0x1C7FA8u;
    SET_GPR_U32(ctx, 31, 0x1C7FB0u);
    ctx->pc = 0x101A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A80u, 0x1C7FA8u, 0x1C7FB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7FB0u;
label_1c7fb0:
    // 0x1c7fb0: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1c7fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_1c7fb4:
    // 0x1c7fb4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1c7fb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1c7fb8:
    // 0x1c7fb8: 0xc0406a0  jal         func_101A80
label_1c7fbc:
    if (ctx->pc == 0x1C7FBCu) {
        ctx->pc = 0x1C7FC0u;
        goto label_1c7fc0;
    }
    ctx->pc = 0x1C7FB8u;
    SET_GPR_U32(ctx, 31, 0x1C7FC0u);
    ctx->pc = 0x101A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A80u, 0x1C7FB8u, 0x1C7FC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7FC0u;
label_1c7fc0:
    // 0x1c7fc0: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x1c7fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_1c7fc4:
    // 0x1c7fc4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1c7fc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1c7fc8:
    // 0x1c7fc8: 0xc0406a0  jal         func_101A80
label_1c7fcc:
    if (ctx->pc == 0x1C7FCCu) {
        ctx->pc = 0x1C7FD0u;
        goto label_1c7fd0;
    }
    ctx->pc = 0x1C7FC8u;
    SET_GPR_U32(ctx, 31, 0x1C7FD0u);
    ctx->pc = 0x101A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A80u, 0x1C7FC8u, 0x1C7FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7FD0u;
label_1c7fd0:
    // 0x1c7fd0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1c7fd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1c7fd4:
    // 0x1c7fd4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c7fd4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1c7fd8:
    // 0x1c7fd8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c7fd8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1c7fdc:
    // 0x1c7fdc: 0x27bd0170  addiu       $sp, $sp, 0x170
    ctx->pc = 0x1c7fdcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_1c7fe0:
    // 0x1c7fe0: 0x3e00008  jr          $ra
label_1c7fe4:
    if (ctx->pc == 0x1C7FE4u) {
        ctx->pc = 0x1C7FE8u;
        goto label_1c7fe8;
    }
    ctx->pc = 0x1C7FE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C7FE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C7FE8u;
label_1c7fe8:
    // 0x1c7fe8: 0x0  nop
    ctx->pc = 0x1c7fe8u;
    // NOP
label_1c7fec:
    // 0x1c7fec: 0x0  nop
    ctx->pc = 0x1c7fecu;
    // NOP
label_1c7ff0:
    // 0x1c7ff0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c7ff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1c7ff4:
    // 0x1c7ff4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c7ff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1c7ff8:
    // 0x1c7ff8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1c7ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_1c7ffc:
    // 0x1c7ffc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1c7ffcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
label_1c8000:
    // 0x1c8000: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1c8000u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1c8004:
    // 0x1c8004: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x1c8004u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1c8008:
    // 0x1c8008: 0xc0650f0  jal         func_1943C0
label_1c800c:
    if (ctx->pc == 0x1C800Cu) {
        ctx->pc = 0x1C8010u;
        goto label_1c8010;
    }
    ctx->pc = 0x1C8008u;
    SET_GPR_U32(ctx, 31, 0x1C8010u);
    ctx->pc = 0x1943C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1943C0u, 0x1C8008u, 0x1C8010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8010u;
label_1c8010:
    // 0x1c8010: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c8010u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c8014:
    // 0x1c8014: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1c8014u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1c8018:
    // 0x1c8018: 0x3e00008  jr          $ra
label_1c801c:
    if (ctx->pc == 0x1C801Cu) {
        ctx->pc = 0x1C8020u;
        goto label_1c8020;
    }
    ctx->pc = 0x1C8018u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C8018u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C8020u;
label_1c8020:
    // 0x1c8020: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c8020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1c8024:
    // 0x1c8024: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c8024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1c8028:
    // 0x1c8028: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1c8028u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_1c802c:
    // 0x1c802c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1c802cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
label_1c8030:
    // 0x1c8030: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1c8030u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1c8034:
    // 0x1c8034: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x1c8034u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1c8038:
    // 0x1c8038: 0xc0650f4  jal         func_1943D0
label_1c803c:
    if (ctx->pc == 0x1C803Cu) {
        ctx->pc = 0x1C8040u;
        goto label_1c8040;
    }
    ctx->pc = 0x1C8038u;
    SET_GPR_U32(ctx, 31, 0x1C8040u);
    ctx->pc = 0x1943D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1943D0u, 0x1C8038u, 0x1C8040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8040u;
label_1c8040:
    // 0x1c8040: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c8040u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c8044:
    // 0x1c8044: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1c8044u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1c8048:
    // 0x1c8048: 0x3e00008  jr          $ra
label_1c804c:
    if (ctx->pc == 0x1C804Cu) {
        ctx->pc = 0x1C8050u;
        goto label_1c8050;
    }
    ctx->pc = 0x1C8048u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C8048u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C8050u;
label_1c8050:
    // 0x1c8050: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c8050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1c8054:
    // 0x1c8054: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c8054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1c8058:
    // 0x1c8058: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1c8058u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_1c805c:
    // 0x1c805c: 0xa3a50020  sb          $a1, 0x20($sp)
    ctx->pc = 0x1c805cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 5));
label_1c8060:
    // 0x1c8060: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1c8060u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1c8064:
    // 0x1c8064: 0x93a50020  lbu         $a1, 0x20($sp)
    ctx->pc = 0x1c8064u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 32)));
label_1c8068:
    // 0x1c8068: 0xc0649b0  jal         func_1926C0
label_1c806c:
    if (ctx->pc == 0x1C806Cu) {
        ctx->pc = 0x1C8070u;
        goto label_1c8070;
    }
    ctx->pc = 0x1C8068u;
    SET_GPR_U32(ctx, 31, 0x1C8070u);
    ctx->pc = 0x1926C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1926C0u, 0x1C8068u, 0x1C8070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8070u;
label_1c8070:
    // 0x1c8070: 0x93a30020  lbu         $v1, 0x20($sp)
    ctx->pc = 0x1c8070u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 32)));
label_1c8074:
    // 0x1c8074: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1c8074u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_1c8078:
    // 0x1c8078: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c8078u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c807c:
    // 0x1c807c: 0x14830005  bne         $a0, $v1, . + 4 + (0x5 << 2)
label_1c8080:
    if (ctx->pc == 0x1C8080u) {
        ctx->pc = 0x1C8084u;
        goto label_1c8084;
    }
    ctx->pc = 0x1C807Cu;
    {
        const bool branch_taken_0x1c807c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1c807c) {
            ctx->pc = 0x1C8094u;
            goto label_1c8094;
        }
    }
    ctx->pc = 0x1C8084u;
label_1c8084:
    // 0x1c8084: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1c8084u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1c8088:
    // 0x1c8088: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c8088u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c808c:
    // 0x1c808c: 0xc07208c  jal         func_1C8230
label_1c8090:
    if (ctx->pc == 0x1C8090u) {
        ctx->pc = 0x1C8094u;
        goto label_1c8094;
    }
    ctx->pc = 0x1C808Cu;
    SET_GPR_U32(ctx, 31, 0x1C8094u);
    ctx->pc = 0x1C8230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C8230u, 0x1C808Cu, 0x1C8094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8094u;
label_1c8094:
    // 0x1c8094: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c8094u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c8098:
    // 0x1c8098: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1c8098u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1c809c:
    // 0x1c809c: 0x3e00008  jr          $ra
label_1c80a0:
    if (ctx->pc == 0x1C80A0u) {
        ctx->pc = 0x1C80A4u;
        goto label_1c80a4;
    }
    ctx->pc = 0x1C809Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C809Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C80A4u;
label_1c80a4:
    // 0x1c80a4: 0x0  nop
    ctx->pc = 0x1c80a4u;
    // NOP
label_1c80a8:
    // 0x1c80a8: 0x0  nop
    ctx->pc = 0x1c80a8u;
    // NOP
label_1c80ac:
    // 0x1c80ac: 0x0  nop
    ctx->pc = 0x1c80acu;
    // NOP
label_1c80b0:
    // 0x1c80b0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1c80b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_1c80b4:
    // 0x1c80b4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c80b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1c80b8:
    // 0x1c80b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c80b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1c80bc:
    // 0x1c80bc: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x1c80bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
label_1c80c0:
    // 0x1c80c0: 0x8f82bcc4  lw          $v0, -0x433C($gp)
    ctx->pc = 0x1c80c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
label_1c80c4:
    // 0x1c80c4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1c80c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1c80c8:
    // 0x1c80c8: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x1c80c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_1c80cc:
    // 0x1c80cc: 0xc085538  jal         func_2154E0
label_1c80d0:
    if (ctx->pc == 0x1C80D0u) {
        ctx->pc = 0x1C80D4u;
        goto label_1c80d4;
    }
    ctx->pc = 0x1C80CCu;
    SET_GPR_U32(ctx, 31, 0x1C80D4u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x1C80CCu, 0x1C80D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C80D4u;
label_1c80d4:
    // 0x1c80d4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1c80d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c80d8:
    // 0x1c80d8: 0x10100028  beq         $zero, $s0, . + 4 + (0x28 << 2)
label_1c80dc:
    if (ctx->pc == 0x1C80DCu) {
        ctx->pc = 0x1C80E0u;
        goto label_1c80e0;
    }
    ctx->pc = 0x1C80D8u;
    {
        const bool branch_taken_0x1c80d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 16));
        if (branch_taken_0x1c80d8) {
            ctx->pc = 0x1C817Cu;
            goto label_1c817c;
        }
    }
    ctx->pc = 0x1C80E0u;
label_1c80e0:
    // 0x1c80e0: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1c80e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1c80e4:
    // 0x1c80e4: 0xc050530  jal         func_1414C0
label_1c80e8:
    if (ctx->pc == 0x1C80E8u) {
        ctx->pc = 0x1C80ECu;
        goto label_1c80ec;
    }
    ctx->pc = 0x1C80E4u;
    SET_GPR_U32(ctx, 31, 0x1C80ECu);
    ctx->pc = 0x1414C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1414C0u, 0x1C80E4u, 0x1C80ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C80ECu;
label_1c80ec:
    // 0x1c80ec: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x1c80ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
label_1c80f0:
    // 0x1c80f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c80f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c80f4:
    // 0x1c80f4: 0x0  nop
    ctx->pc = 0x1c80f4u;
    // NOP
label_1c80f8:
    // 0x1c80f8: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x1c80f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_1c80fc:
    // 0x1c80fc: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x1c80fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
label_1c8100:
    // 0x1c8100: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c8100u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c8104:
    // 0x1c8104: 0x0  nop
    ctx->pc = 0x1c8104u;
    // NOP
label_1c8108:
    // 0x1c8108: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x1c8108u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_1c810c:
    // 0x1c810c: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x1c810cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
label_1c8110:
    // 0x1c8110: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c8110u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c8114:
    // 0x1c8114: 0x0  nop
    ctx->pc = 0x1c8114u;
    // NOP
label_1c8118:
    // 0x1c8118: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x1c8118u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_1c811c:
    // 0x1c811c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c811cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c8120:
    // 0x1c8120: 0xc091008  jal         func_244020
label_1c8124:
    if (ctx->pc == 0x1C8124u) {
        ctx->pc = 0x1C8128u;
        goto label_1c8128;
    }
    ctx->pc = 0x1C8120u;
    SET_GPR_U32(ctx, 31, 0x1C8128u);
    ctx->pc = 0x244020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244020u, 0x1C8120u, 0x1C8128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8128u;
label_1c8128:
    // 0x1c8128: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x1c8128u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_1c812c:
    // 0x1c812c: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x1c812cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_1c8130:
    // 0x1c8130: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c8130u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c8134:
    // 0x1c8134: 0x0  nop
    ctx->pc = 0x1c8134u;
    // NOP
label_1c8138:
    // 0x1c8138: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x1c8138u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_1c813c:
    // 0x1c813c: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x1c813cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
label_1c8140:
    // 0x1c8140: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c8140u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c8144:
    // 0x1c8144: 0x0  nop
    ctx->pc = 0x1c8144u;
    // NOP
label_1c8148:
    // 0x1c8148: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x1c8148u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_1c814c:
    // 0x1c814c: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x1c814cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
label_1c8150:
    // 0x1c8150: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c8150u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c8154:
    // 0x1c8154: 0x0  nop
    ctx->pc = 0x1c8154u;
    // NOP
label_1c8158:
    // 0x1c8158: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x1c8158u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
label_1c815c:
    // 0x1c815c: 0x3c024320  lui         $v0, 0x4320
    ctx->pc = 0x1c815cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17184 << 16));
label_1c8160:
    // 0x1c8160: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c8160u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c8164:
    // 0x1c8164: 0x0  nop
    ctx->pc = 0x1c8164u;
    // NOP
label_1c8168:
    // 0x1c8168: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x1c8168u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_1c816c:
    // 0x1c816c: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x1c816cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_1c8170:
    // 0x1c8170: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x1c8170u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1c8174:
    // 0x1c8174: 0xc050194  jal         func_140650
label_1c8178:
    if (ctx->pc == 0x1C8178u) {
        ctx->pc = 0x1C817Cu;
        goto label_1c817c;
    }
    ctx->pc = 0x1C8174u;
    SET_GPR_U32(ctx, 31, 0x1C817Cu);
    ctx->pc = 0x140650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140650u, 0x1C8174u, 0x1C817Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C817Cu;
label_1c817c:
    // 0x1c817c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c817cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1c8180:
    // 0x1c8180: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c8180u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1c8184:
    // 0x1c8184: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x1c8184u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1c8188:
    // 0x1c8188: 0x3e00008  jr          $ra
label_1c818c:
    if (ctx->pc == 0x1C818Cu) {
        ctx->pc = 0x1C8190u;
        goto label_1c8190;
    }
    ctx->pc = 0x1C8188u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C8188u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C8190u;
label_1c8190:
    // 0x1c8190: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1c8190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1c8194:
    // 0x1c8194: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c8194u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1c8198:
    // 0x1c8198: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c8198u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1c819c:
    // 0x1c819c: 0xafa50050  sw          $a1, 0x50($sp)
    ctx->pc = 0x1c819cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 5));
label_1c81a0:
    // 0x1c81a0: 0x8f83bcc4  lw          $v1, -0x433C($gp)
    ctx->pc = 0x1c81a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
label_1c81a4:
    // 0x1c81a4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1c81a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1c81a8:
    // 0x1c81a8: 0x1003001a  beq         $zero, $v1, . + 4 + (0x1A << 2)
label_1c81ac:
    if (ctx->pc == 0x1C81ACu) {
        ctx->pc = 0x1C81B0u;
        goto label_1c81b0;
    }
    ctx->pc = 0x1C81A8u;
    {
        const bool branch_taken_0x1c81a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 3));
        if (branch_taken_0x1c81a8) {
            ctx->pc = 0x1C8214u;
            goto label_1c8214;
        }
    }
    ctx->pc = 0x1C81B0u;
label_1c81b0:
    // 0x1c81b0: 0x8f82bcc4  lw          $v0, -0x433C($gp)
    ctx->pc = 0x1c81b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
label_1c81b4:
    // 0x1c81b4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1c81b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1c81b8:
    // 0x1c81b8: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x1c81b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_1c81bc:
    // 0x1c81bc: 0xc085538  jal         func_2154E0
label_1c81c0:
    if (ctx->pc == 0x1C81C0u) {
        ctx->pc = 0x1C81C4u;
        goto label_1c81c4;
    }
    ctx->pc = 0x1C81BCu;
    SET_GPR_U32(ctx, 31, 0x1C81C4u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x1C81BCu, 0x1C81C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C81C4u;
label_1c81c4:
    // 0x1c81c4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1c81c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c81c8:
    // 0x1c81c8: 0x10100012  beq         $zero, $s0, . + 4 + (0x12 << 2)
label_1c81cc:
    if (ctx->pc == 0x1C81CCu) {
        ctx->pc = 0x1C81D0u;
        goto label_1c81d0;
    }
    ctx->pc = 0x1C81C8u;
    {
        const bool branch_taken_0x1c81c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 16));
        if (branch_taken_0x1c81c8) {
            ctx->pc = 0x1C8214u;
            goto label_1c8214;
        }
    }
    ctx->pc = 0x1C81D0u;
label_1c81d0:
    // 0x1c81d0: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1c81d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1c81d4:
    // 0x1c81d4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1c81d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c81d8:
    // 0x1c81d8: 0xc090f80  jal         func_243E00
label_1c81dc:
    if (ctx->pc == 0x1C81DCu) {
        ctx->pc = 0x1C81E0u;
        goto label_1c81e0;
    }
    ctx->pc = 0x1C81D8u;
    SET_GPR_U32(ctx, 31, 0x1C81E0u);
    ctx->pc = 0x243E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243E00u, 0x1C81D8u, 0x1C81E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C81E0u;
label_1c81e0:
    // 0x1c81e0: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x1c81e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1c81e4:
    // 0x1c81e4: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x1c81e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1c81e8:
    // 0x1c81e8: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x1c81e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1c81ec:
    // 0x1c81ec: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x1c81ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c81f0:
    // 0x1c81f0: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x1c81f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c81f4:
    // 0x1c81f4: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x1c81f4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_1c81f8:
    // 0x1c81f8: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x1c81f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_1c81fc:
    // 0x1c81fc: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x1c81fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_1c8200:
    // 0x1c8200: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1c8200u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_1c8204:
    // 0x1c8204: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x1c8204u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1c8208:
    // 0x1c8208: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1c8208u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c820c:
    // 0x1c820c: 0xc106598  jal         func_419660
label_1c8210:
    if (ctx->pc == 0x1C8210u) {
        ctx->pc = 0x1C8214u;
        goto label_1c8214;
    }
    ctx->pc = 0x1C820Cu;
    SET_GPR_U32(ctx, 31, 0x1C8214u);
    ctx->pc = 0x419660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419660u, 0x1C820Cu, 0x1C8214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8214u;
label_1c8214:
    // 0x1c8214: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c8214u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1c8218:
    // 0x1c8218: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c8218u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1c821c:
    // 0x1c821c: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x1c821cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_1c8220:
    // 0x1c8220: 0x3e00008  jr          $ra
label_1c8224:
    if (ctx->pc == 0x1C8224u) {
        ctx->pc = 0x1C8228u;
        goto label_1c8228;
    }
    ctx->pc = 0x1C8220u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C8220u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C8228u;
label_1c8228:
    // 0x1c8228: 0x0  nop
    ctx->pc = 0x1c8228u;
    // NOP
label_1c822c:
    // 0x1c822c: 0x0  nop
    ctx->pc = 0x1c822cu;
    // NOP
    ctx->pc = 0x1c8230u;
}
