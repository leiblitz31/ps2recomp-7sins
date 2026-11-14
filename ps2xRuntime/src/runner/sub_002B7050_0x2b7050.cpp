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

// Function: sub_002B7050
// Address: 0x2b7050 - 0x2b75e0
void sub_002B7050_0x2b7050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B7050_0x2b7050");
#endif

    switch (ctx->pc) {
        case 0x2b7050u: goto label_2b7050;
        case 0x2b7054u: goto label_2b7054;
        case 0x2b7058u: goto label_2b7058;
        case 0x2b705cu: goto label_2b705c;
        case 0x2b7060u: goto label_2b7060;
        case 0x2b7064u: goto label_2b7064;
        case 0x2b7068u: goto label_2b7068;
        case 0x2b706cu: goto label_2b706c;
        case 0x2b7070u: goto label_2b7070;
        case 0x2b7074u: goto label_2b7074;
        case 0x2b7078u: goto label_2b7078;
        case 0x2b707cu: goto label_2b707c;
        case 0x2b7080u: goto label_2b7080;
        case 0x2b7084u: goto label_2b7084;
        case 0x2b7088u: goto label_2b7088;
        case 0x2b708cu: goto label_2b708c;
        case 0x2b7090u: goto label_2b7090;
        case 0x2b7094u: goto label_2b7094;
        case 0x2b7098u: goto label_2b7098;
        case 0x2b709cu: goto label_2b709c;
        case 0x2b70a0u: goto label_2b70a0;
        case 0x2b70a4u: goto label_2b70a4;
        case 0x2b70a8u: goto label_2b70a8;
        case 0x2b70acu: goto label_2b70ac;
        case 0x2b70b0u: goto label_2b70b0;
        case 0x2b70b4u: goto label_2b70b4;
        case 0x2b70b8u: goto label_2b70b8;
        case 0x2b70bcu: goto label_2b70bc;
        case 0x2b70c0u: goto label_2b70c0;
        case 0x2b70c4u: goto label_2b70c4;
        case 0x2b70c8u: goto label_2b70c8;
        case 0x2b70ccu: goto label_2b70cc;
        case 0x2b70d0u: goto label_2b70d0;
        case 0x2b70d4u: goto label_2b70d4;
        case 0x2b70d8u: goto label_2b70d8;
        case 0x2b70dcu: goto label_2b70dc;
        case 0x2b70e0u: goto label_2b70e0;
        case 0x2b70e4u: goto label_2b70e4;
        case 0x2b70e8u: goto label_2b70e8;
        case 0x2b70ecu: goto label_2b70ec;
        case 0x2b70f0u: goto label_2b70f0;
        case 0x2b70f4u: goto label_2b70f4;
        case 0x2b70f8u: goto label_2b70f8;
        case 0x2b70fcu: goto label_2b70fc;
        case 0x2b7100u: goto label_2b7100;
        case 0x2b7104u: goto label_2b7104;
        case 0x2b7108u: goto label_2b7108;
        case 0x2b710cu: goto label_2b710c;
        case 0x2b7110u: goto label_2b7110;
        case 0x2b7114u: goto label_2b7114;
        case 0x2b7118u: goto label_2b7118;
        case 0x2b711cu: goto label_2b711c;
        case 0x2b7120u: goto label_2b7120;
        case 0x2b7124u: goto label_2b7124;
        case 0x2b7128u: goto label_2b7128;
        case 0x2b712cu: goto label_2b712c;
        case 0x2b7130u: goto label_2b7130;
        case 0x2b7134u: goto label_2b7134;
        case 0x2b7138u: goto label_2b7138;
        case 0x2b713cu: goto label_2b713c;
        case 0x2b7140u: goto label_2b7140;
        case 0x2b7144u: goto label_2b7144;
        case 0x2b7148u: goto label_2b7148;
        case 0x2b714cu: goto label_2b714c;
        case 0x2b7150u: goto label_2b7150;
        case 0x2b7154u: goto label_2b7154;
        case 0x2b7158u: goto label_2b7158;
        case 0x2b715cu: goto label_2b715c;
        case 0x2b7160u: goto label_2b7160;
        case 0x2b7164u: goto label_2b7164;
        case 0x2b7168u: goto label_2b7168;
        case 0x2b716cu: goto label_2b716c;
        case 0x2b7170u: goto label_2b7170;
        case 0x2b7174u: goto label_2b7174;
        case 0x2b7178u: goto label_2b7178;
        case 0x2b717cu: goto label_2b717c;
        case 0x2b7180u: goto label_2b7180;
        case 0x2b7184u: goto label_2b7184;
        case 0x2b7188u: goto label_2b7188;
        case 0x2b718cu: goto label_2b718c;
        case 0x2b7190u: goto label_2b7190;
        case 0x2b7194u: goto label_2b7194;
        case 0x2b7198u: goto label_2b7198;
        case 0x2b719cu: goto label_2b719c;
        case 0x2b71a0u: goto label_2b71a0;
        case 0x2b71a4u: goto label_2b71a4;
        case 0x2b71a8u: goto label_2b71a8;
        case 0x2b71acu: goto label_2b71ac;
        case 0x2b71b0u: goto label_2b71b0;
        case 0x2b71b4u: goto label_2b71b4;
        case 0x2b71b8u: goto label_2b71b8;
        case 0x2b71bcu: goto label_2b71bc;
        case 0x2b71c0u: goto label_2b71c0;
        case 0x2b71c4u: goto label_2b71c4;
        case 0x2b71c8u: goto label_2b71c8;
        case 0x2b71ccu: goto label_2b71cc;
        case 0x2b71d0u: goto label_2b71d0;
        case 0x2b71d4u: goto label_2b71d4;
        case 0x2b71d8u: goto label_2b71d8;
        case 0x2b71dcu: goto label_2b71dc;
        case 0x2b71e0u: goto label_2b71e0;
        case 0x2b71e4u: goto label_2b71e4;
        case 0x2b71e8u: goto label_2b71e8;
        case 0x2b71ecu: goto label_2b71ec;
        case 0x2b71f0u: goto label_2b71f0;
        case 0x2b71f4u: goto label_2b71f4;
        case 0x2b71f8u: goto label_2b71f8;
        case 0x2b71fcu: goto label_2b71fc;
        case 0x2b7200u: goto label_2b7200;
        case 0x2b7204u: goto label_2b7204;
        case 0x2b7208u: goto label_2b7208;
        case 0x2b720cu: goto label_2b720c;
        case 0x2b7210u: goto label_2b7210;
        case 0x2b7214u: goto label_2b7214;
        case 0x2b7218u: goto label_2b7218;
        case 0x2b721cu: goto label_2b721c;
        case 0x2b7220u: goto label_2b7220;
        case 0x2b7224u: goto label_2b7224;
        case 0x2b7228u: goto label_2b7228;
        case 0x2b722cu: goto label_2b722c;
        case 0x2b7230u: goto label_2b7230;
        case 0x2b7234u: goto label_2b7234;
        case 0x2b7238u: goto label_2b7238;
        case 0x2b723cu: goto label_2b723c;
        case 0x2b7240u: goto label_2b7240;
        case 0x2b7244u: goto label_2b7244;
        case 0x2b7248u: goto label_2b7248;
        case 0x2b724cu: goto label_2b724c;
        case 0x2b7250u: goto label_2b7250;
        case 0x2b7254u: goto label_2b7254;
        case 0x2b7258u: goto label_2b7258;
        case 0x2b725cu: goto label_2b725c;
        case 0x2b7260u: goto label_2b7260;
        case 0x2b7264u: goto label_2b7264;
        case 0x2b7268u: goto label_2b7268;
        case 0x2b726cu: goto label_2b726c;
        case 0x2b7270u: goto label_2b7270;
        case 0x2b7274u: goto label_2b7274;
        case 0x2b7278u: goto label_2b7278;
        case 0x2b727cu: goto label_2b727c;
        case 0x2b7280u: goto label_2b7280;
        case 0x2b7284u: goto label_2b7284;
        case 0x2b7288u: goto label_2b7288;
        case 0x2b728cu: goto label_2b728c;
        case 0x2b7290u: goto label_2b7290;
        case 0x2b7294u: goto label_2b7294;
        case 0x2b7298u: goto label_2b7298;
        case 0x2b729cu: goto label_2b729c;
        case 0x2b72a0u: goto label_2b72a0;
        case 0x2b72a4u: goto label_2b72a4;
        case 0x2b72a8u: goto label_2b72a8;
        case 0x2b72acu: goto label_2b72ac;
        case 0x2b72b0u: goto label_2b72b0;
        case 0x2b72b4u: goto label_2b72b4;
        case 0x2b72b8u: goto label_2b72b8;
        case 0x2b72bcu: goto label_2b72bc;
        case 0x2b72c0u: goto label_2b72c0;
        case 0x2b72c4u: goto label_2b72c4;
        case 0x2b72c8u: goto label_2b72c8;
        case 0x2b72ccu: goto label_2b72cc;
        case 0x2b72d0u: goto label_2b72d0;
        case 0x2b72d4u: goto label_2b72d4;
        case 0x2b72d8u: goto label_2b72d8;
        case 0x2b72dcu: goto label_2b72dc;
        case 0x2b72e0u: goto label_2b72e0;
        case 0x2b72e4u: goto label_2b72e4;
        case 0x2b72e8u: goto label_2b72e8;
        case 0x2b72ecu: goto label_2b72ec;
        case 0x2b72f0u: goto label_2b72f0;
        case 0x2b72f4u: goto label_2b72f4;
        case 0x2b72f8u: goto label_2b72f8;
        case 0x2b72fcu: goto label_2b72fc;
        case 0x2b7300u: goto label_2b7300;
        case 0x2b7304u: goto label_2b7304;
        case 0x2b7308u: goto label_2b7308;
        case 0x2b730cu: goto label_2b730c;
        case 0x2b7310u: goto label_2b7310;
        case 0x2b7314u: goto label_2b7314;
        case 0x2b7318u: goto label_2b7318;
        case 0x2b731cu: goto label_2b731c;
        case 0x2b7320u: goto label_2b7320;
        case 0x2b7324u: goto label_2b7324;
        case 0x2b7328u: goto label_2b7328;
        case 0x2b732cu: goto label_2b732c;
        case 0x2b7330u: goto label_2b7330;
        case 0x2b7334u: goto label_2b7334;
        case 0x2b7338u: goto label_2b7338;
        case 0x2b733cu: goto label_2b733c;
        case 0x2b7340u: goto label_2b7340;
        case 0x2b7344u: goto label_2b7344;
        case 0x2b7348u: goto label_2b7348;
        case 0x2b734cu: goto label_2b734c;
        case 0x2b7350u: goto label_2b7350;
        case 0x2b7354u: goto label_2b7354;
        case 0x2b7358u: goto label_2b7358;
        case 0x2b735cu: goto label_2b735c;
        case 0x2b7360u: goto label_2b7360;
        case 0x2b7364u: goto label_2b7364;
        case 0x2b7368u: goto label_2b7368;
        case 0x2b736cu: goto label_2b736c;
        case 0x2b7370u: goto label_2b7370;
        case 0x2b7374u: goto label_2b7374;
        case 0x2b7378u: goto label_2b7378;
        case 0x2b737cu: goto label_2b737c;
        case 0x2b7380u: goto label_2b7380;
        case 0x2b7384u: goto label_2b7384;
        case 0x2b7388u: goto label_2b7388;
        case 0x2b738cu: goto label_2b738c;
        case 0x2b7390u: goto label_2b7390;
        case 0x2b7394u: goto label_2b7394;
        case 0x2b7398u: goto label_2b7398;
        case 0x2b739cu: goto label_2b739c;
        case 0x2b73a0u: goto label_2b73a0;
        case 0x2b73a4u: goto label_2b73a4;
        case 0x2b73a8u: goto label_2b73a8;
        case 0x2b73acu: goto label_2b73ac;
        case 0x2b73b0u: goto label_2b73b0;
        case 0x2b73b4u: goto label_2b73b4;
        case 0x2b73b8u: goto label_2b73b8;
        case 0x2b73bcu: goto label_2b73bc;
        case 0x2b73c0u: goto label_2b73c0;
        case 0x2b73c4u: goto label_2b73c4;
        case 0x2b73c8u: goto label_2b73c8;
        case 0x2b73ccu: goto label_2b73cc;
        case 0x2b73d0u: goto label_2b73d0;
        case 0x2b73d4u: goto label_2b73d4;
        case 0x2b73d8u: goto label_2b73d8;
        case 0x2b73dcu: goto label_2b73dc;
        case 0x2b73e0u: goto label_2b73e0;
        case 0x2b73e4u: goto label_2b73e4;
        case 0x2b73e8u: goto label_2b73e8;
        case 0x2b73ecu: goto label_2b73ec;
        case 0x2b73f0u: goto label_2b73f0;
        case 0x2b73f4u: goto label_2b73f4;
        case 0x2b73f8u: goto label_2b73f8;
        case 0x2b73fcu: goto label_2b73fc;
        case 0x2b7400u: goto label_2b7400;
        case 0x2b7404u: goto label_2b7404;
        case 0x2b7408u: goto label_2b7408;
        case 0x2b740cu: goto label_2b740c;
        case 0x2b7410u: goto label_2b7410;
        case 0x2b7414u: goto label_2b7414;
        case 0x2b7418u: goto label_2b7418;
        case 0x2b741cu: goto label_2b741c;
        case 0x2b7420u: goto label_2b7420;
        case 0x2b7424u: goto label_2b7424;
        case 0x2b7428u: goto label_2b7428;
        case 0x2b742cu: goto label_2b742c;
        case 0x2b7430u: goto label_2b7430;
        case 0x2b7434u: goto label_2b7434;
        case 0x2b7438u: goto label_2b7438;
        case 0x2b743cu: goto label_2b743c;
        case 0x2b7440u: goto label_2b7440;
        case 0x2b7444u: goto label_2b7444;
        case 0x2b7448u: goto label_2b7448;
        case 0x2b744cu: goto label_2b744c;
        case 0x2b7450u: goto label_2b7450;
        case 0x2b7454u: goto label_2b7454;
        case 0x2b7458u: goto label_2b7458;
        case 0x2b745cu: goto label_2b745c;
        case 0x2b7460u: goto label_2b7460;
        case 0x2b7464u: goto label_2b7464;
        case 0x2b7468u: goto label_2b7468;
        case 0x2b746cu: goto label_2b746c;
        case 0x2b7470u: goto label_2b7470;
        case 0x2b7474u: goto label_2b7474;
        case 0x2b7478u: goto label_2b7478;
        case 0x2b747cu: goto label_2b747c;
        case 0x2b7480u: goto label_2b7480;
        case 0x2b7484u: goto label_2b7484;
        case 0x2b7488u: goto label_2b7488;
        case 0x2b748cu: goto label_2b748c;
        case 0x2b7490u: goto label_2b7490;
        case 0x2b7494u: goto label_2b7494;
        case 0x2b7498u: goto label_2b7498;
        case 0x2b749cu: goto label_2b749c;
        case 0x2b74a0u: goto label_2b74a0;
        case 0x2b74a4u: goto label_2b74a4;
        case 0x2b74a8u: goto label_2b74a8;
        case 0x2b74acu: goto label_2b74ac;
        case 0x2b74b0u: goto label_2b74b0;
        case 0x2b74b4u: goto label_2b74b4;
        case 0x2b74b8u: goto label_2b74b8;
        case 0x2b74bcu: goto label_2b74bc;
        case 0x2b74c0u: goto label_2b74c0;
        case 0x2b74c4u: goto label_2b74c4;
        case 0x2b74c8u: goto label_2b74c8;
        case 0x2b74ccu: goto label_2b74cc;
        case 0x2b74d0u: goto label_2b74d0;
        case 0x2b74d4u: goto label_2b74d4;
        case 0x2b74d8u: goto label_2b74d8;
        case 0x2b74dcu: goto label_2b74dc;
        case 0x2b74e0u: goto label_2b74e0;
        case 0x2b74e4u: goto label_2b74e4;
        case 0x2b74e8u: goto label_2b74e8;
        case 0x2b74ecu: goto label_2b74ec;
        case 0x2b74f0u: goto label_2b74f0;
        case 0x2b74f4u: goto label_2b74f4;
        case 0x2b74f8u: goto label_2b74f8;
        case 0x2b74fcu: goto label_2b74fc;
        case 0x2b7500u: goto label_2b7500;
        case 0x2b7504u: goto label_2b7504;
        case 0x2b7508u: goto label_2b7508;
        case 0x2b750cu: goto label_2b750c;
        case 0x2b7510u: goto label_2b7510;
        case 0x2b7514u: goto label_2b7514;
        case 0x2b7518u: goto label_2b7518;
        case 0x2b751cu: goto label_2b751c;
        case 0x2b7520u: goto label_2b7520;
        case 0x2b7524u: goto label_2b7524;
        case 0x2b7528u: goto label_2b7528;
        case 0x2b752cu: goto label_2b752c;
        case 0x2b7530u: goto label_2b7530;
        case 0x2b7534u: goto label_2b7534;
        case 0x2b7538u: goto label_2b7538;
        case 0x2b753cu: goto label_2b753c;
        case 0x2b7540u: goto label_2b7540;
        case 0x2b7544u: goto label_2b7544;
        case 0x2b7548u: goto label_2b7548;
        case 0x2b754cu: goto label_2b754c;
        case 0x2b7550u: goto label_2b7550;
        case 0x2b7554u: goto label_2b7554;
        case 0x2b7558u: goto label_2b7558;
        case 0x2b755cu: goto label_2b755c;
        case 0x2b7560u: goto label_2b7560;
        case 0x2b7564u: goto label_2b7564;
        case 0x2b7568u: goto label_2b7568;
        case 0x2b756cu: goto label_2b756c;
        case 0x2b7570u: goto label_2b7570;
        case 0x2b7574u: goto label_2b7574;
        case 0x2b7578u: goto label_2b7578;
        case 0x2b757cu: goto label_2b757c;
        case 0x2b7580u: goto label_2b7580;
        case 0x2b7584u: goto label_2b7584;
        case 0x2b7588u: goto label_2b7588;
        case 0x2b758cu: goto label_2b758c;
        case 0x2b7590u: goto label_2b7590;
        case 0x2b7594u: goto label_2b7594;
        case 0x2b7598u: goto label_2b7598;
        case 0x2b759cu: goto label_2b759c;
        case 0x2b75a0u: goto label_2b75a0;
        case 0x2b75a4u: goto label_2b75a4;
        case 0x2b75a8u: goto label_2b75a8;
        case 0x2b75acu: goto label_2b75ac;
        case 0x2b75b0u: goto label_2b75b0;
        case 0x2b75b4u: goto label_2b75b4;
        case 0x2b75b8u: goto label_2b75b8;
        case 0x2b75bcu: goto label_2b75bc;
        case 0x2b75c0u: goto label_2b75c0;
        case 0x2b75c4u: goto label_2b75c4;
        case 0x2b75c8u: goto label_2b75c8;
        case 0x2b75ccu: goto label_2b75cc;
        case 0x2b75d0u: goto label_2b75d0;
        case 0x2b75d4u: goto label_2b75d4;
        case 0x2b75d8u: goto label_2b75d8;
        case 0x2b75dcu: goto label_2b75dc;
        default: break;
    }

    ctx->pc = 0x2b7050u;

label_2b7050:
    // 0x2b7050: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2b7050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2b7054:
    // 0x2b7054: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2b7054u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
label_2b7058:
    // 0x2b7058: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2b7058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2b705c:
    // 0x2b705c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2b705cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2b7060:
    // 0x2b7060: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2b7060u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2b7064:
    // 0x2b7064: 0x3e00008  jr          $ra
label_2b7068:
    if (ctx->pc == 0x2B7068u) {
        ctx->pc = 0x2B706Cu;
        goto label_2b706c;
    }
    ctx->pc = 0x2B7064u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B7064u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B706Cu;
label_2b706c:
    // 0x2b706c: 0x0  nop
    ctx->pc = 0x2b706cu;
    // NOP
label_2b7070:
    // 0x2b7070: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x2b7070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
label_2b7074:
    // 0x2b7074: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2b7074u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_2b7078:
    // 0x2b7078: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x2b7078u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_2b707c:
    // 0x2b707c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x2b707cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_2b7080:
    // 0x2b7080: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2b7080u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_2b7084:
    // 0x2b7084: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2b7084u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_2b7088:
    // 0x2b7088: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2b7088u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_2b708c:
    // 0x2b708c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2b708cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2b7090:
    // 0x2b7090: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2b7090u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2b7094:
    // 0x2b7094: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2b7094u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2b7098:
    // 0x2b7098: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2b7098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2b709c:
    // 0x2b709c: 0xafa400e0  sw          $a0, 0xE0($sp)
    ctx->pc = 0x2b709cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 4));
label_2b70a0:
    // 0x2b70a0: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x2b70a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_2b70a4:
    // 0x2b70a4: 0x90420049  lbu         $v0, 0x49($v0)
    ctx->pc = 0x2b70a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 73)));
label_2b70a8:
    // 0x2b70a8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_2b70ac:
    if (ctx->pc == 0x2B70ACu) {
        ctx->pc = 0x2B70B0u;
        goto label_2b70b0;
    }
    ctx->pc = 0x2B70A8u;
    {
        const bool branch_taken_0x2b70a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b70a8) {
            ctx->pc = 0x2B70C8u;
            goto label_2b70c8;
        }
    }
    ctx->pc = 0x2B70B0u;
label_2b70b0:
    // 0x2b70b0: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x2b70b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_2b70b4:
    // 0x2b70b4: 0xa0400049  sb          $zero, 0x49($v0)
    ctx->pc = 0x2b70b4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 73), (uint8_t)GPR_U32(ctx, 0));
label_2b70b8:
    // 0x2b70b8: 0x8fa400e0  lw          $a0, 0xE0($sp)
    ctx->pc = 0x2b70b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_2b70bc:
    // 0x2b70bc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2b70bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b70c0:
    // 0x2b70c0: 0xc0ae044  jal         func_2B8110
label_2b70c4:
    if (ctx->pc == 0x2B70C4u) {
        ctx->pc = 0x2B70C8u;
        goto label_2b70c8;
    }
    ctx->pc = 0x2B70C0u;
    SET_GPR_U32(ctx, 31, 0x2B70C8u);
    ctx->pc = 0x2B8110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8110u, 0x2B70C0u, 0x2B70C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B70C8u;
label_2b70c8:
    // 0x2b70c8: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x2b70c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_2b70cc:
    // 0x2b70cc: 0x8c42005c  lw          $v0, 0x5C($v0)
    ctx->pc = 0x2b70ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_2b70d0:
    // 0x2b70d0: 0x14400074  bnez        $v0, . + 4 + (0x74 << 2)
label_2b70d4:
    if (ctx->pc == 0x2B70D4u) {
        ctx->pc = 0x2B70D8u;
        goto label_2b70d8;
    }
    ctx->pc = 0x2B70D0u;
    {
        const bool branch_taken_0x2b70d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b70d0) {
            ctx->pc = 0x2B72A4u;
            goto label_2b72a4;
        }
    }
    ctx->pc = 0x2B70D8u;
label_2b70d8:
    // 0x2b70d8: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x2b70d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_2b70dc:
    // 0x2b70dc: 0x24440050  addiu       $a0, $v0, 0x50
    ctx->pc = 0x2b70dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
label_2b70e0:
    // 0x2b70e0: 0xc0adf00  jal         func_2B7C00
label_2b70e4:
    if (ctx->pc == 0x2B70E4u) {
        ctx->pc = 0x2B70E8u;
        goto label_2b70e8;
    }
    ctx->pc = 0x2B70E0u;
    SET_GPR_U32(ctx, 31, 0x2B70E8u);
    ctx->pc = 0x2B7C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7C00u, 0x2B70E0u, 0x2B70E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B70E8u;
label_2b70e8:
    // 0x2b70e8: 0x1440011f  bnez        $v0, . + 4 + (0x11F << 2)
label_2b70ec:
    if (ctx->pc == 0x2B70ECu) {
        ctx->pc = 0x2B70F0u;
        goto label_2b70f0;
    }
    ctx->pc = 0x2B70E8u;
    {
        const bool branch_taken_0x2b70e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b70e8) {
            ctx->pc = 0x2B7568u;
            goto label_2b7568;
        }
    }
    ctx->pc = 0x2B70F0u;
label_2b70f0:
    // 0x2b70f0: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x2b70f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_2b70f4:
    // 0x2b70f4: 0x24440050  addiu       $a0, $v0, 0x50
    ctx->pc = 0x2b70f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
label_2b70f8:
    // 0x2b70f8: 0xc0adef8  jal         func_2B7BE0
label_2b70fc:
    if (ctx->pc == 0x2B70FCu) {
        ctx->pc = 0x2B7100u;
        goto label_2b7100;
    }
    ctx->pc = 0x2B70F8u;
    SET_GPR_U32(ctx, 31, 0x2B7100u);
    ctx->pc = 0x2B7BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7BE0u, 0x2B70F8u, 0x2B7100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7100u;
label_2b7100:
    // 0x2b7100: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2b7100u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2b7104:
    // 0x2b7104: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x2b7104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_2b7108:
    // 0x2b7108: 0xac43005c  sw          $v1, 0x5C($v0)
    ctx->pc = 0x2b7108u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 92), GPR_U32(ctx, 3));
label_2b710c:
    // 0x2b710c: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x2b710cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_2b7110:
    // 0x2b7110: 0x24440050  addiu       $a0, $v0, 0x50
    ctx->pc = 0x2b7110u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
label_2b7114:
    // 0x2b7114: 0xc0adef8  jal         func_2B7BE0
label_2b7118:
    if (ctx->pc == 0x2B7118u) {
        ctx->pc = 0x2B711Cu;
        goto label_2b711c;
    }
    ctx->pc = 0x2B7114u;
    SET_GPR_U32(ctx, 31, 0x2B711Cu);
    ctx->pc = 0x2B7BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7BE0u, 0x2B7114u, 0x2B711Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B711Cu;
label_2b711c:
    // 0x2b711c: 0x8fa300e0  lw          $v1, 0xE0($sp)
    ctx->pc = 0x2b711cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_2b7120:
    // 0x2b7120: 0x24640050  addiu       $a0, $v1, 0x50
    ctx->pc = 0x2b7120u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
label_2b7124:
    // 0x2b7124: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2b7124u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b7128:
    // 0x2b7128: 0xc0adeb4  jal         func_2B7AD0
label_2b712c:
    if (ctx->pc == 0x2B712Cu) {
        ctx->pc = 0x2B7130u;
        goto label_2b7130;
    }
    ctx->pc = 0x2B7128u;
    SET_GPR_U32(ctx, 31, 0x2B7130u);
    ctx->pc = 0x2B7AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7AD0u, 0x2B7128u, 0x2B7130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7130u;
label_2b7130:
    // 0x2b7130: 0x8fa300e0  lw          $v1, 0xE0($sp)
    ctx->pc = 0x2b7130u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_2b7134:
    // 0x2b7134: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x2b7134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_2b7138:
    // 0x2b7138: 0x8c64005c  lw          $a0, 0x5C($v1)
    ctx->pc = 0x2b7138u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
label_2b713c:
    // 0x2b713c: 0x8c45002c  lw          $a1, 0x2C($v0)
    ctx->pc = 0x2b713cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_2b7140:
    // 0x2b7140: 0xc0ae3a8  jal         func_2B8EA0
label_2b7144:
    if (ctx->pc == 0x2B7144u) {
        ctx->pc = 0x2B7148u;
        goto label_2b7148;
    }
    ctx->pc = 0x2B7140u;
    SET_GPR_U32(ctx, 31, 0x2B7148u);
    ctx->pc = 0x2B8EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8EA0u, 0x2B7140u, 0x2B7148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7148u;
label_2b7148:
    // 0x2b7148: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x2b7148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_2b714c:
    // 0x2b714c: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x2b714cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_2b7150:
    // 0x2b7150: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x2b7150u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_2b7154:
    // 0x2b7154: 0xc085538  jal         func_2154E0
label_2b7158:
    if (ctx->pc == 0x2B7158u) {
        ctx->pc = 0x2B715Cu;
        goto label_2b715c;
    }
    ctx->pc = 0x2B7154u;
    SET_GPR_U32(ctx, 31, 0x2B715Cu);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2B7154u, 0x2B715Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B715Cu;
label_2b715c:
    // 0x2b715c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2b715cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b7160:
    // 0x2b7160: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x2b7160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_2b7164:
    // 0x2b7164: 0xa0400048  sb          $zero, 0x48($v0)
    ctx->pc = 0x2b7164u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 72), (uint8_t)GPR_U32(ctx, 0));
label_2b7168:
    // 0x2b7168: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b7168u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2b716c:
    // 0x2b716c: 0xc096874  jal         func_25A1D0
label_2b7170:
    if (ctx->pc == 0x2B7170u) {
        ctx->pc = 0x2B7174u;
        goto label_2b7174;
    }
    ctx->pc = 0x2B716Cu;
    SET_GPR_U32(ctx, 31, 0x2B7174u);
    ctx->pc = 0x25A1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A1D0u, 0x2B716Cu, 0x2B7174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7174u;
label_2b7174:
    // 0x2b7174: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_2b7178:
    if (ctx->pc == 0x2B7178u) {
        ctx->pc = 0x2B717Cu;
        goto label_2b717c;
    }
    ctx->pc = 0x2B7174u;
    {
        const bool branch_taken_0x2b7174 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b7174) {
            ctx->pc = 0x2B71F8u;
            goto label_2b71f8;
        }
    }
    ctx->pc = 0x2B717Cu;
label_2b717c:
    // 0x2b717c: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x2b717cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_2b7180:
    // 0x2b7180: 0x8c44005c  lw          $a0, 0x5C($v0)
    ctx->pc = 0x2b7180u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_2b7184:
    // 0x2b7184: 0xc0aeea8  jal         func_2BBAA0
label_2b7188:
    if (ctx->pc == 0x2B7188u) {
        ctx->pc = 0x2B718Cu;
        goto label_2b718c;
    }
    ctx->pc = 0x2B7184u;
    SET_GPR_U32(ctx, 31, 0x2B718Cu);
    ctx->pc = 0x2BBAA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BBAA0u, 0x2B7184u, 0x2B718Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B718Cu;
label_2b718c:
    // 0x2b718c: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x2b718cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_2b7190:
    // 0x2b7190: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_2b7194:
    if (ctx->pc == 0x2B7194u) {
        ctx->pc = 0x2B7198u;
        goto label_2b7198;
    }
    ctx->pc = 0x2B7190u;
    {
        const bool branch_taken_0x2b7190 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b7190) {
            ctx->pc = 0x2B71C4u;
            goto label_2b71c4;
        }
    }
    ctx->pc = 0x2B7198u;
label_2b7198:
    // 0x2b7198: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x2b7198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_2b719c:
    // 0x2b719c: 0x8c44005c  lw          $a0, 0x5C($v0)
    ctx->pc = 0x2b719cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_2b71a0:
    // 0x2b71a0: 0xc0aeea8  jal         func_2BBAA0
label_2b71a4:
    if (ctx->pc == 0x2B71A4u) {
        ctx->pc = 0x2B71A8u;
        goto label_2b71a8;
    }
    ctx->pc = 0x2B71A0u;
    SET_GPR_U32(ctx, 31, 0x2B71A8u);
    ctx->pc = 0x2BBAA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BBAA0u, 0x2B71A0u, 0x2B71A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B71A8u;
label_2b71a8:
    // 0x2b71a8: 0x8f84bb74  lw          $a0, -0x448C($gp)
    ctx->pc = 0x2b71a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949748)));
label_2b71ac:
    // 0x2b71ac: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2b71acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b71b0:
    // 0x2b71b0: 0x8c46000c  lw          $a2, 0xC($v0)
    ctx->pc = 0x2b71b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_2b71b4:
    // 0x2b71b4: 0xc085a90  jal         func_216A40
label_2b71b8:
    if (ctx->pc == 0x2B71B8u) {
        ctx->pc = 0x2B71BCu;
        goto label_2b71bc;
    }
    ctx->pc = 0x2B71B4u;
    SET_GPR_U32(ctx, 31, 0x2B71BCu);
    ctx->pc = 0x216A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x216A40u, 0x2B71B4u, 0x2B71BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B71BCu;
label_2b71bc:
    // 0x2b71bc: 0x1000000e  b           . + 4 + (0xE << 2)
label_2b71c0:
    if (ctx->pc == 0x2B71C0u) {
        ctx->pc = 0x2B71C4u;
        goto label_2b71c4;
    }
    ctx->pc = 0x2B71BCu;
    {
        const bool branch_taken_0x2b71bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b71bc) {
            ctx->pc = 0x2B71F8u;
            goto label_2b71f8;
        }
    }
    ctx->pc = 0x2B71C4u;
label_2b71c4:
    // 0x2b71c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b71c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2b71c8:
    // 0x2b71c8: 0xc096880  jal         func_25A200
label_2b71cc:
    if (ctx->pc == 0x2B71CCu) {
        ctx->pc = 0x2B71D0u;
        goto label_2b71d0;
    }
    ctx->pc = 0x2B71C8u;
    SET_GPR_U32(ctx, 31, 0x2B71D0u);
    ctx->pc = 0x25A200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A200u, 0x2B71C8u, 0x2B71D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B71D0u;
label_2b71d0:
    // 0x2b71d0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_2b71d4:
    if (ctx->pc == 0x2B71D4u) {
        ctx->pc = 0x2B71D8u;
        goto label_2b71d8;
    }
    ctx->pc = 0x2B71D0u;
    {
        const bool branch_taken_0x2b71d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b71d0) {
            ctx->pc = 0x2B71F8u;
            goto label_2b71f8;
        }
    }
    ctx->pc = 0x2B71D8u;
label_2b71d8:
    // 0x2b71d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b71d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2b71dc:
    // 0x2b71dc: 0xc096880  jal         func_25A200
label_2b71e0:
    if (ctx->pc == 0x2B71E0u) {
        ctx->pc = 0x2B71E4u;
        goto label_2b71e4;
    }
    ctx->pc = 0x2B71DCu;
    SET_GPR_U32(ctx, 31, 0x2B71E4u);
    ctx->pc = 0x25A200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A200u, 0x2B71DCu, 0x2B71E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B71E4u;
label_2b71e4:
    // 0x2b71e4: 0x8f84bb74  lw          $a0, -0x448C($gp)
    ctx->pc = 0x2b71e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949748)));
label_2b71e8:
    // 0x2b71e8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2b71e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b71ec:
    // 0x2b71ec: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2b71ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b71f0:
    // 0x2b71f0: 0xc085a90  jal         func_216A40
label_2b71f4:
    if (ctx->pc == 0x2B71F4u) {
        ctx->pc = 0x2B71F8u;
        goto label_2b71f8;
    }
    ctx->pc = 0x2B71F0u;
    SET_GPR_U32(ctx, 31, 0x2B71F8u);
    ctx->pc = 0x216A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x216A40u, 0x2B71F0u, 0x2B71F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B71F8u;
label_2b71f8:
    // 0x2b71f8: 0x9222007c  lbu         $v0, 0x7C($s1)
    ctx->pc = 0x2b71f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 124)));
label_2b71fc:
    // 0x2b71fc: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2b71fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2b7200:
    // 0x2b7200: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b7200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b7204:
    // 0x2b7204: 0x146200d8  bne         $v1, $v0, . + 4 + (0xD8 << 2)
label_2b7208:
    if (ctx->pc == 0x2B7208u) {
        ctx->pc = 0x2B720Cu;
        goto label_2b720c;
    }
    ctx->pc = 0x2B7204u;
    {
        const bool branch_taken_0x2b7204 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2b7204) {
            ctx->pc = 0x2B7568u;
            goto label_2b7568;
        }
    }
    ctx->pc = 0x2B720Cu;
label_2b720c:
    // 0x2b720c: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x2b720cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_2b7210:
    // 0x2b7210: 0xc0495d4  jal         func_125750
label_2b7214:
    if (ctx->pc == 0x2B7214u) {
        ctx->pc = 0x2B7218u;
        goto label_2b7218;
    }
    ctx->pc = 0x2B7210u;
    SET_GPR_U32(ctx, 31, 0x2B7218u);
    ctx->pc = 0x125750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125750u, 0x2B7210u, 0x2B7218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7218u;
label_2b7218:
    // 0x2b7218: 0x26240070  addiu       $a0, $s1, 0x70
    ctx->pc = 0x2b7218u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
label_2b721c:
    // 0x2b721c: 0xc041b38  jal         func_106CE0
label_2b7220:
    if (ctx->pc == 0x2B7220u) {
        ctx->pc = 0x2B7224u;
        goto label_2b7224;
    }
    ctx->pc = 0x2B721Cu;
    SET_GPR_U32(ctx, 31, 0x2B7224u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x2B721Cu, 0x2B7224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7224u;
label_2b7224:
    // 0x2b7224: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x2b7224u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_2b7228:
    // 0x2b7228: 0x21e3c  dsll32      $v1, $v0, 24
    ctx->pc = 0x2b7228u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
label_2b722c:
    // 0x2b722c: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x2b722cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
label_2b7230:
    // 0x2b7230: 0x24020026  addiu       $v0, $zero, 0x26
    ctx->pc = 0x2b7230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
label_2b7234:
    // 0x2b7234: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
label_2b7238:
    if (ctx->pc == 0x2B7238u) {
        ctx->pc = 0x2B723Cu;
        goto label_2b723c;
    }
    ctx->pc = 0x2B7234u;
    {
        const bool branch_taken_0x2b7234 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2b7234) {
            ctx->pc = 0x2B7264u;
            goto label_2b7264;
        }
    }
    ctx->pc = 0x2B723Cu;
label_2b723c:
    // 0x2b723c: 0x26240070  addiu       $a0, $s1, 0x70
    ctx->pc = 0x2b723cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
label_2b7240:
    // 0x2b7240: 0xc041b38  jal         func_106CE0
label_2b7244:
    if (ctx->pc == 0x2B7244u) {
        ctx->pc = 0x2B7248u;
        goto label_2b7248;
    }
    ctx->pc = 0x2B7240u;
    SET_GPR_U32(ctx, 31, 0x2B7248u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x2B7240u, 0x2B7248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7248u;
label_2b7248:
    // 0x2b7248: 0x8f84bbdc  lw          $a0, -0x4424($gp)
    ctx->pc = 0x2b7248u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949852)));
label_2b724c:
    // 0x2b724c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2b724cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b7250:
    // 0x2b7250: 0x27a600d0  addiu       $a2, $sp, 0xD0
    ctx->pc = 0x2b7250u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_2b7254:
    // 0x2b7254: 0xc08e514  jal         func_239450
label_2b7258:
    if (ctx->pc == 0x2B7258u) {
        ctx->pc = 0x2B725Cu;
        goto label_2b725c;
    }
    ctx->pc = 0x2B7254u;
    SET_GPR_U32(ctx, 31, 0x2B725Cu);
    ctx->pc = 0x239450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239450u, 0x2B7254u, 0x2B725Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B725Cu;
label_2b725c:
    // 0x2b725c: 0x10000005  b           . + 4 + (0x5 << 2)
label_2b7260:
    if (ctx->pc == 0x2B7260u) {
        ctx->pc = 0x2B7264u;
        goto label_2b7264;
    }
    ctx->pc = 0x2B725Cu;
    {
        const bool branch_taken_0x2b725c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b725c) {
            ctx->pc = 0x2B7274u;
            goto label_2b7274;
        }
    }
    ctx->pc = 0x2B7264u;
label_2b7264:
    // 0x2b7264: 0x26240070  addiu       $a0, $s1, 0x70
    ctx->pc = 0x2b7264u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
label_2b7268:
    // 0x2b7268: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x2b7268u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_2b726c:
    // 0x2b726c: 0xc1195a4  jal         func_465690
label_2b7270:
    if (ctx->pc == 0x2B7270u) {
        ctx->pc = 0x2B7274u;
        goto label_2b7274;
    }
    ctx->pc = 0x2B726Cu;
    SET_GPR_U32(ctx, 31, 0x2B7274u);
    ctx->pc = 0x465690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x465690u, 0x2B726Cu, 0x2B7274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7274u;
label_2b7274:
    // 0x2b7274: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2b7274u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b7278:
    // 0x2b7278: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2b7278u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2b727c:
    // 0x2b727c: 0x27a600d0  addiu       $a2, $sp, 0xD0
    ctx->pc = 0x2b727cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_2b7280:
    // 0x2b7280: 0xc08d69c  jal         func_235A70
label_2b7284:
    if (ctx->pc == 0x2B7284u) {
        ctx->pc = 0x2B7288u;
        goto label_2b7288;
    }
    ctx->pc = 0x2B7280u;
    SET_GPR_U32(ctx, 31, 0x2B7288u);
    ctx->pc = 0x235A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235A70u, 0x2B7280u, 0x2B7288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7288u;
label_2b7288:
    // 0x2b7288: 0xa220007c  sb          $zero, 0x7C($s1)
    ctx->pc = 0x2b7288u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 124), (uint8_t)GPR_U32(ctx, 0));
label_2b728c:
    // 0x2b728c: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x2b728cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_2b7290:
    // 0x2b7290: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2b7290u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2b7294:
    // 0x2b7294: 0xc0406a0  jal         func_101A80
label_2b7298:
    if (ctx->pc == 0x2B7298u) {
        ctx->pc = 0x2B729Cu;
        goto label_2b729c;
    }
    ctx->pc = 0x2B7294u;
    SET_GPR_U32(ctx, 31, 0x2B729Cu);
    ctx->pc = 0x101A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A80u, 0x2B7294u, 0x2B729Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B729Cu;
label_2b729c:
    // 0x2b729c: 0x100000b2  b           . + 4 + (0xB2 << 2)
label_2b72a0:
    if (ctx->pc == 0x2B72A0u) {
        ctx->pc = 0x2B72A4u;
        goto label_2b72a4;
    }
    ctx->pc = 0x2B729Cu;
    {
        const bool branch_taken_0x2b729c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b729c) {
            ctx->pc = 0x2B7568u;
            goto label_2b7568;
        }
    }
    ctx->pc = 0x2B72A4u;
label_2b72a4:
    // 0x2b72a4: 0x8f82bcc4  lw          $v0, -0x433C($gp)
    ctx->pc = 0x2b72a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
label_2b72a8:
    // 0x2b72a8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2b72a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2b72ac:
    // 0x2b72ac: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x2b72acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_2b72b0:
    // 0x2b72b0: 0x8c42002c  lw          $v0, 0x2C($v0)
    ctx->pc = 0x2b72b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_2b72b4:
    // 0x2b72b4: 0x14620032  bne         $v1, $v0, . + 4 + (0x32 << 2)
label_2b72b8:
    if (ctx->pc == 0x2B72B8u) {
        ctx->pc = 0x2B72BCu;
        goto label_2b72bc;
    }
    ctx->pc = 0x2B72B4u;
    {
        const bool branch_taken_0x2b72b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2b72b4) {
            ctx->pc = 0x2B7380u;
            goto label_2b7380;
        }
    }
    ctx->pc = 0x2B72BCu;
label_2b72bc:
    // 0x2b72bc: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x2b72bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_2b72c0:
    // 0x2b72c0: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x2b72c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_2b72c4:
    // 0x2b72c4: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x2b72c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_2b72c8:
    // 0x2b72c8: 0xc085538  jal         func_2154E0
label_2b72cc:
    if (ctx->pc == 0x2B72CCu) {
        ctx->pc = 0x2B72D0u;
        goto label_2b72d0;
    }
    ctx->pc = 0x2B72C8u;
    SET_GPR_U32(ctx, 31, 0x2B72D0u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2B72C8u, 0x2B72D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B72D0u;
label_2b72d0:
    // 0x2b72d0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2b72d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b72d4:
    // 0x2b72d4: 0x1240002a  beqz        $s2, . + 4 + (0x2A << 2)
label_2b72d8:
    if (ctx->pc == 0x2B72D8u) {
        ctx->pc = 0x2B72DCu;
        goto label_2b72dc;
    }
    ctx->pc = 0x2B72D4u;
    {
        const bool branch_taken_0x2b72d4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b72d4) {
            ctx->pc = 0x2B7380u;
            goto label_2b7380;
        }
    }
    ctx->pc = 0x2B72DCu;
label_2b72dc:
    // 0x2b72dc: 0x9242007c  lbu         $v0, 0x7C($s2)
    ctx->pc = 0x2b72dcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 124)));
label_2b72e0:
    // 0x2b72e0: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2b72e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2b72e4:
    // 0x2b72e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b72e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b72e8:
    // 0x2b72e8: 0x14620025  bne         $v1, $v0, . + 4 + (0x25 << 2)
label_2b72ec:
    if (ctx->pc == 0x2B72ECu) {
        ctx->pc = 0x2B72F0u;
        goto label_2b72f0;
    }
    ctx->pc = 0x2B72E8u;
    {
        const bool branch_taken_0x2b72e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2b72e8) {
            ctx->pc = 0x2B7380u;
            goto label_2b7380;
        }
    }
    ctx->pc = 0x2B72F0u;
label_2b72f0:
    // 0x2b72f0: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x2b72f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_2b72f4:
    // 0x2b72f4: 0xc0495d4  jal         func_125750
label_2b72f8:
    if (ctx->pc == 0x2B72F8u) {
        ctx->pc = 0x2B72FCu;
        goto label_2b72fc;
    }
    ctx->pc = 0x2B72F4u;
    SET_GPR_U32(ctx, 31, 0x2B72FCu);
    ctx->pc = 0x125750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125750u, 0x2B72F4u, 0x2B72FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B72FCu;
label_2b72fc:
    // 0x2b72fc: 0x26440070  addiu       $a0, $s2, 0x70
    ctx->pc = 0x2b72fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 112));
label_2b7300:
    // 0x2b7300: 0xc041b38  jal         func_106CE0
label_2b7304:
    if (ctx->pc == 0x2B7304u) {
        ctx->pc = 0x2B7308u;
        goto label_2b7308;
    }
    ctx->pc = 0x2B7300u;
    SET_GPR_U32(ctx, 31, 0x2B7308u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x2B7300u, 0x2B7308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7308u;
label_2b7308:
    // 0x2b7308: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x2b7308u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_2b730c:
    // 0x2b730c: 0x21e3c  dsll32      $v1, $v0, 24
    ctx->pc = 0x2b730cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
label_2b7310:
    // 0x2b7310: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x2b7310u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
label_2b7314:
    // 0x2b7314: 0x24020026  addiu       $v0, $zero, 0x26
    ctx->pc = 0x2b7314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
label_2b7318:
    // 0x2b7318: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
label_2b731c:
    if (ctx->pc == 0x2B731Cu) {
        ctx->pc = 0x2B7320u;
        goto label_2b7320;
    }
    ctx->pc = 0x2B7318u;
    {
        const bool branch_taken_0x2b7318 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2b7318) {
            ctx->pc = 0x2B7348u;
            goto label_2b7348;
        }
    }
    ctx->pc = 0x2B7320u;
label_2b7320:
    // 0x2b7320: 0x26440070  addiu       $a0, $s2, 0x70
    ctx->pc = 0x2b7320u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 112));
label_2b7324:
    // 0x2b7324: 0xc041b38  jal         func_106CE0
label_2b7328:
    if (ctx->pc == 0x2B7328u) {
        ctx->pc = 0x2B732Cu;
        goto label_2b732c;
    }
    ctx->pc = 0x2B7324u;
    SET_GPR_U32(ctx, 31, 0x2B732Cu);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x2B7324u, 0x2B732Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B732Cu;
label_2b732c:
    // 0x2b732c: 0x8f84bbdc  lw          $a0, -0x4424($gp)
    ctx->pc = 0x2b732cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949852)));
label_2b7330:
    // 0x2b7330: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2b7330u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b7334:
    // 0x2b7334: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x2b7334u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_2b7338:
    // 0x2b7338: 0xc08e514  jal         func_239450
label_2b733c:
    if (ctx->pc == 0x2B733Cu) {
        ctx->pc = 0x2B7340u;
        goto label_2b7340;
    }
    ctx->pc = 0x2B7338u;
    SET_GPR_U32(ctx, 31, 0x2B7340u);
    ctx->pc = 0x239450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239450u, 0x2B7338u, 0x2B7340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7340u;
label_2b7340:
    // 0x2b7340: 0x10000005  b           . + 4 + (0x5 << 2)
label_2b7344:
    if (ctx->pc == 0x2B7344u) {
        ctx->pc = 0x2B7348u;
        goto label_2b7348;
    }
    ctx->pc = 0x2B7340u;
    {
        const bool branch_taken_0x2b7340 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b7340) {
            ctx->pc = 0x2B7358u;
            goto label_2b7358;
        }
    }
    ctx->pc = 0x2B7348u;
label_2b7348:
    // 0x2b7348: 0x26440070  addiu       $a0, $s2, 0x70
    ctx->pc = 0x2b7348u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 112));
label_2b734c:
    // 0x2b734c: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x2b734cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_2b7350:
    // 0x2b7350: 0xc1195a4  jal         func_465690
label_2b7354:
    if (ctx->pc == 0x2B7354u) {
        ctx->pc = 0x2B7358u;
        goto label_2b7358;
    }
    ctx->pc = 0x2B7350u;
    SET_GPR_U32(ctx, 31, 0x2B7358u);
    ctx->pc = 0x465690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x465690u, 0x2B7350u, 0x2B7358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7358u;
label_2b7358:
    // 0x2b7358: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2b7358u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b735c:
    // 0x2b735c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2b735cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2b7360:
    // 0x2b7360: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x2b7360u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_2b7364:
    // 0x2b7364: 0xc08d69c  jal         func_235A70
label_2b7368:
    if (ctx->pc == 0x2B7368u) {
        ctx->pc = 0x2B736Cu;
        goto label_2b736c;
    }
    ctx->pc = 0x2B7364u;
    SET_GPR_U32(ctx, 31, 0x2B736Cu);
    ctx->pc = 0x235A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235A70u, 0x2B7364u, 0x2B736Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B736Cu;
label_2b736c:
    // 0x2b736c: 0xa240007c  sb          $zero, 0x7C($s2)
    ctx->pc = 0x2b736cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 124), (uint8_t)GPR_U32(ctx, 0));
label_2b7370:
    // 0x2b7370: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x2b7370u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_2b7374:
    // 0x2b7374: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2b7374u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2b7378:
    // 0x2b7378: 0xc0406a0  jal         func_101A80
label_2b737c:
    if (ctx->pc == 0x2B737Cu) {
        ctx->pc = 0x2B7380u;
        goto label_2b7380;
    }
    ctx->pc = 0x2B7378u;
    SET_GPR_U32(ctx, 31, 0x2B7380u);
    ctx->pc = 0x101A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A80u, 0x2B7378u, 0x2B7380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7380u;
label_2b7380:
    // 0x2b7380: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x2b7380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_2b7384:
    // 0x2b7384: 0x8c44005c  lw          $a0, 0x5C($v0)
    ctx->pc = 0x2b7384u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_2b7388:
    // 0x2b7388: 0xc0ae418  jal         func_2B9060
label_2b738c:
    if (ctx->pc == 0x2B738Cu) {
        ctx->pc = 0x2B7390u;
        goto label_2b7390;
    }
    ctx->pc = 0x2B7388u;
    SET_GPR_U32(ctx, 31, 0x2B7390u);
    ctx->pc = 0x2B9060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B9060u, 0x2B7388u, 0x2B7390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7390u;
label_2b7390:
    // 0x2b7390: 0x10400075  beqz        $v0, . + 4 + (0x75 << 2)
label_2b7394:
    if (ctx->pc == 0x2B7394u) {
        ctx->pc = 0x2B7398u;
        goto label_2b7398;
    }
    ctx->pc = 0x2B7390u;
    {
        const bool branch_taken_0x2b7390 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b7390) {
            ctx->pc = 0x2B7568u;
            goto label_2b7568;
        }
    }
    ctx->pc = 0x2B7398u;
label_2b7398:
    // 0x2b7398: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x2b7398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_2b739c:
    // 0x2b739c: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x2b739cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_2b73a0:
    // 0x2b73a0: 0xc0b0654  jal         func_2C1950
label_2b73a4:
    if (ctx->pc == 0x2B73A4u) {
        ctx->pc = 0x2B73A8u;
        goto label_2b73a8;
    }
    ctx->pc = 0x2B73A0u;
    SET_GPR_U32(ctx, 31, 0x2B73A8u);
    ctx->pc = 0x2C1950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C1950u, 0x2B73A0u, 0x2B73A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B73A8u;
label_2b73a8:
    // 0x2b73a8: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x2b73a8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b73ac:
    // 0x2b73ac: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2b73acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_2b73b0:
    // 0x2b73b0: 0xc0adeac  jal         func_2B7AB0
label_2b73b4:
    if (ctx->pc == 0x2B73B4u) {
        ctx->pc = 0x2B73B8u;
        goto label_2b73b8;
    }
    ctx->pc = 0x2B73B0u;
    SET_GPR_U32(ctx, 31, 0x2B73B8u);
    ctx->pc = 0x2B7AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7AB0u, 0x2B73B0u, 0x2B73B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B73B8u;
label_2b73b8:
    // 0x2b73b8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2b73b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b73bc:
    // 0x2b73bc: 0x10000034  b           . + 4 + (0x34 << 2)
label_2b73c0:
    if (ctx->pc == 0x2B73C0u) {
        ctx->pc = 0x2B73C4u;
        goto label_2b73c4;
    }
    ctx->pc = 0x2B73BCu;
    {
        const bool branch_taken_0x2b73bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b73bc) {
            ctx->pc = 0x2B7490u;
            goto label_2b7490;
        }
    }
    ctx->pc = 0x2B73C4u;
label_2b73c4:
    // 0x2b73c4: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x2b73c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_2b73c8:
    // 0x2b73c8: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x2b73c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
label_2b73cc:
    // 0x2b73cc: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x2b73ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_2b73d0:
    // 0x2b73d0: 0x8c44005c  lw          $a0, 0x5C($v0)
    ctx->pc = 0x2b73d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_2b73d4:
    // 0x2b73d4: 0xc0ae4b4  jal         func_2B92D0
label_2b73d8:
    if (ctx->pc == 0x2B73D8u) {
        ctx->pc = 0x2B73DCu;
        goto label_2b73dc;
    }
    ctx->pc = 0x2B73D4u;
    SET_GPR_U32(ctx, 31, 0x2B73DCu);
    ctx->pc = 0x2B92D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B92D0u, 0x2B73D4u, 0x2B73DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B73DCu;
label_2b73dc:
    // 0x2b73dc: 0x7ba300b0  lq          $v1, 0xB0($sp)
    ctx->pc = 0x2b73dcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_2b73e0:
    // 0x2b73e0: 0x1462002a  bne         $v1, $v0, . + 4 + (0x2A << 2)
label_2b73e4:
    if (ctx->pc == 0x2B73E4u) {
        ctx->pc = 0x2B73E8u;
        goto label_2b73e8;
    }
    ctx->pc = 0x2B73E0u;
    {
        const bool branch_taken_0x2b73e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2b73e0) {
            ctx->pc = 0x2B748Cu;
            goto label_2b748c;
        }
    }
    ctx->pc = 0x2B73E8u;
label_2b73e8:
    // 0x2b73e8: 0x8e020040  lw          $v0, 0x40($s0)
    ctx->pc = 0x2b73e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_2b73ec:
    // 0x2b73ec: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x2b73ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
label_2b73f0:
    // 0x2b73f0: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x2b73f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_2b73f4:
    // 0x2b73f4: 0x8c44005c  lw          $a0, 0x5C($v0)
    ctx->pc = 0x2b73f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_2b73f8:
    // 0x2b73f8: 0xc0aeea8  jal         func_2BBAA0
label_2b73fc:
    if (ctx->pc == 0x2B73FCu) {
        ctx->pc = 0x2B7400u;
        goto label_2b7400;
    }
    ctx->pc = 0x2B73F8u;
    SET_GPR_U32(ctx, 31, 0x2B7400u);
    ctx->pc = 0x2BBAA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BBAA0u, 0x2B73F8u, 0x2B7400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7400u;
label_2b7400:
    // 0x2b7400: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x2b7400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_2b7404:
    // 0x2b7404: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x2b7404u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_2b7408:
    // 0x2b7408: 0x14430020  bne         $v0, $v1, . + 4 + (0x20 << 2)
label_2b740c:
    if (ctx->pc == 0x2B740Cu) {
        ctx->pc = 0x2B7410u;
        goto label_2b7410;
    }
    ctx->pc = 0x2B7408u;
    {
        const bool branch_taken_0x2b7408 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2b7408) {
            ctx->pc = 0x2B748Cu;
            goto label_2b748c;
        }
    }
    ctx->pc = 0x2B7410u;
label_2b7410:
    // 0x2b7410: 0x26040044  addiu       $a0, $s0, 0x44
    ctx->pc = 0x2b7410u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 68));
label_2b7414:
    // 0x2b7414: 0xc042290  jal         func_108A40
label_2b7418:
    if (ctx->pc == 0x2B7418u) {
        ctx->pc = 0x2B741Cu;
        goto label_2b741c;
    }
    ctx->pc = 0x2B7414u;
    SET_GPR_U32(ctx, 31, 0x2B741Cu);
    ctx->pc = 0x108A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108A40u, 0x2B7414u, 0x2B741Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B741Cu;
label_2b741c:
    // 0x2b741c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2b741cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b7420:
    // 0x2b7420: 0x1000000b  b           . + 4 + (0xB << 2)
label_2b7424:
    if (ctx->pc == 0x2B7424u) {
        ctx->pc = 0x2B7428u;
        goto label_2b7428;
    }
    ctx->pc = 0x2B7420u;
    {
        const bool branch_taken_0x2b7420 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b7420) {
            ctx->pc = 0x2B7450u;
            goto label_2b7450;
        }
    }
    ctx->pc = 0x2B7428u;
label_2b7428:
    // 0x2b7428: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x2b7428u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_2b742c:
    // 0x2b742c: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x2b742cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_2b7430:
    // 0x2b7430: 0xc085538  jal         func_2154E0
label_2b7434:
    if (ctx->pc == 0x2B7434u) {
        ctx->pc = 0x2B7438u;
        goto label_2b7438;
    }
    ctx->pc = 0x2B7430u;
    SET_GPR_U32(ctx, 31, 0x2B7438u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2B7430u, 0x2B7438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7438u;
label_2b7438:
    // 0x2b7438: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x2b7438u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b743c:
    // 0x2b743c: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x2b743cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_2b7440:
    // 0x2b7440: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2b7440u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b7444:
    // 0x2b7444: 0xc096e18  jal         func_25B860
label_2b7448:
    if (ctx->pc == 0x2B7448u) {
        ctx->pc = 0x2B744Cu;
        goto label_2b744c;
    }
    ctx->pc = 0x2B7444u;
    SET_GPR_U32(ctx, 31, 0x2B744Cu);
    ctx->pc = 0x25B860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B860u, 0x2B7444u, 0x2B744Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B744Cu;
label_2b744c:
    // 0x2b744c: 0x26940004  addiu       $s4, $s4, 0x4
    ctx->pc = 0x2b744cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
label_2b7450:
    // 0x2b7450: 0x26040044  addiu       $a0, $s0, 0x44
    ctx->pc = 0x2b7450u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 68));
label_2b7454:
    // 0x2b7454: 0xc042288  jal         func_108A20
label_2b7458:
    if (ctx->pc == 0x2B7458u) {
        ctx->pc = 0x2B745Cu;
        goto label_2b745c;
    }
    ctx->pc = 0x2B7454u;
    SET_GPR_U32(ctx, 31, 0x2B745Cu);
    ctx->pc = 0x108A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108A20u, 0x2B7454u, 0x2B745Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B745Cu;
label_2b745c:
    // 0x2b745c: 0x1682fff2  bne         $s4, $v0, . + 4 + (-0xE << 2)
label_2b7460:
    if (ctx->pc == 0x2B7460u) {
        ctx->pc = 0x2B7464u;
        goto label_2b7464;
    }
    ctx->pc = 0x2B745Cu;
    {
        const bool branch_taken_0x2b745c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        if (branch_taken_0x2b745c) {
            ctx->pc = 0x2B7428u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b7428;
        }
    }
    ctx->pc = 0x2B7464u;
label_2b7464:
    // 0x2b7464: 0x26040044  addiu       $a0, $s0, 0x44
    ctx->pc = 0x2b7464u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 68));
label_2b7468:
    // 0x2b7468: 0xc0ade78  jal         func_2B79E0
label_2b746c:
    if (ctx->pc == 0x2B746Cu) {
        ctx->pc = 0x2B7470u;
        goto label_2b7470;
    }
    ctx->pc = 0x2B7468u;
    SET_GPR_U32(ctx, 31, 0x2B7470u);
    ctx->pc = 0x2B79E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B79E0u, 0x2B7468u, 0x2B7470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7470u;
label_2b7470:
    // 0x2b7470: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2b7470u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_2b7474:
    // 0x2b7474: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2b7474u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2b7478:
    // 0x2b7478: 0xc0addb4  jal         func_2B76D0
label_2b747c:
    if (ctx->pc == 0x2B747Cu) {
        ctx->pc = 0x2B7480u;
        goto label_2b7480;
    }
    ctx->pc = 0x2B7478u;
    SET_GPR_U32(ctx, 31, 0x2B7480u);
    ctx->pc = 0x2B76D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B76D0u, 0x2B7478u, 0x2B7480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7480u;
label_2b7480:
    // 0x2b7480: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2b7480u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b7484:
    // 0x2b7484: 0x10000002  b           . + 4 + (0x2 << 2)
label_2b7488:
    if (ctx->pc == 0x2B7488u) {
        ctx->pc = 0x2B748Cu;
        goto label_2b748c;
    }
    ctx->pc = 0x2B7484u;
    {
        const bool branch_taken_0x2b7484 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b7484) {
            ctx->pc = 0x2B7490u;
            goto label_2b7490;
        }
    }
    ctx->pc = 0x2B748Cu;
label_2b748c:
    // 0x2b748c: 0x26100054  addiu       $s0, $s0, 0x54
    ctx->pc = 0x2b748cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 84));
label_2b7490:
    // 0x2b7490: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2b7490u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_2b7494:
    // 0x2b7494: 0xc0addac  jal         func_2B76B0
label_2b7498:
    if (ctx->pc == 0x2B7498u) {
        ctx->pc = 0x2B749Cu;
        goto label_2b749c;
    }
    ctx->pc = 0x2B7494u;
    SET_GPR_U32(ctx, 31, 0x2B749Cu);
    ctx->pc = 0x2B76B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B76B0u, 0x2B7494u, 0x2B749Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B749Cu;
label_2b749c:
    // 0x2b749c: 0x1602ffc9  bne         $s0, $v0, . + 4 + (-0x37 << 2)
label_2b74a0:
    if (ctx->pc == 0x2B74A0u) {
        ctx->pc = 0x2B74A4u;
        goto label_2b74a4;
    }
    ctx->pc = 0x2B749Cu;
    {
        const bool branch_taken_0x2b749c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x2b749c) {
            ctx->pc = 0x2B73C4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b73c4;
        }
    }
    ctx->pc = 0x2B74A4u;
label_2b74a4:
    // 0x2b74a4: 0x8f84bbf0  lw          $a0, -0x4410($gp)
    ctx->pc = 0x2b74a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949872)));
label_2b74a8:
    // 0x2b74a8: 0xc090018  jal         func_240060
label_2b74ac:
    if (ctx->pc == 0x2B74ACu) {
        ctx->pc = 0x2B74B0u;
        goto label_2b74b0;
    }
    ctx->pc = 0x2B74A8u;
    SET_GPR_U32(ctx, 31, 0x2B74B0u);
    ctx->pc = 0x240060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x240060u, 0x2B74A8u, 0x2B74B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B74B0u;
label_2b74b0:
    // 0x2b74b0: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x2b74b0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b74b4:
    // 0x2b74b4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2b74b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2b74b8:
    // 0x2b74b8: 0xc08feb4  jal         func_23FAD0
label_2b74bc:
    if (ctx->pc == 0x2B74BCu) {
        ctx->pc = 0x2B74C0u;
        goto label_2b74c0;
    }
    ctx->pc = 0x2B74B8u;
    SET_GPR_U32(ctx, 31, 0x2B74C0u);
    ctx->pc = 0x23FAD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FAD0u, 0x2B74B8u, 0x2B74C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B74C0u;
label_2b74c0:
    // 0x2b74c0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2b74c0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b74c4:
    // 0x2b74c4: 0x10000012  b           . + 4 + (0x12 << 2)
label_2b74c8:
    if (ctx->pc == 0x2B74C8u) {
        ctx->pc = 0x2B74CCu;
        goto label_2b74cc;
    }
    ctx->pc = 0x2B74C4u;
    {
        const bool branch_taken_0x2b74c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b74c4) {
            ctx->pc = 0x2B7510u;
            goto label_2b7510;
        }
    }
    ctx->pc = 0x2B74CCu;
label_2b74cc:
    // 0x2b74cc: 0x260a82d  daddu       $s5, $s3, $zero
    ctx->pc = 0x2b74ccu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2b74d0:
    // 0x2b74d0: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x2b74d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_2b74d4:
    // 0x2b74d4: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x2b74d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_2b74d8:
    // 0x2b74d8: 0x1462000c  bne         $v1, $v0, . + 4 + (0xC << 2)
label_2b74dc:
    if (ctx->pc == 0x2B74DCu) {
        ctx->pc = 0x2B74E0u;
        goto label_2b74e0;
    }
    ctx->pc = 0x2B74D8u;
    {
        const bool branch_taken_0x2b74d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2b74d8) {
            ctx->pc = 0x2B750Cu;
            goto label_2b750c;
        }
    }
    ctx->pc = 0x2B74E0u;
label_2b74e0:
    // 0x2b74e0: 0x8ea30008  lw          $v1, 0x8($s5)
    ctx->pc = 0x2b74e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
label_2b74e4:
    // 0x2b74e4: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x2b74e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_2b74e8:
    // 0x2b74e8: 0x8c42002c  lw          $v0, 0x2C($v0)
    ctx->pc = 0x2b74e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_2b74ec:
    // 0x2b74ec: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
label_2b74f0:
    if (ctx->pc == 0x2B74F0u) {
        ctx->pc = 0x2B74F4u;
        goto label_2b74f4;
    }
    ctx->pc = 0x2B74ECu;
    {
        const bool branch_taken_0x2b74ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2b74ec) {
            ctx->pc = 0x2B750Cu;
            goto label_2b750c;
        }
    }
    ctx->pc = 0x2B74F4u;
label_2b74f4:
    // 0x2b74f4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2b74f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2b74f8:
    // 0x2b74f8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2b74f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2b74fc:
    // 0x2b74fc: 0xc0add88  jal         func_2B7620
label_2b7500:
    if (ctx->pc == 0x2B7500u) {
        ctx->pc = 0x2B7504u;
        goto label_2b7504;
    }
    ctx->pc = 0x2B74FCu;
    SET_GPR_U32(ctx, 31, 0x2B7504u);
    ctx->pc = 0x2B7620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7620u, 0x2B74FCu, 0x2B7504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7504u;
label_2b7504:
    // 0x2b7504: 0x10000007  b           . + 4 + (0x7 << 2)
label_2b7508:
    if (ctx->pc == 0x2B7508u) {
        ctx->pc = 0x2B750Cu;
        goto label_2b750c;
    }
    ctx->pc = 0x2B7504u;
    {
        const bool branch_taken_0x2b7504 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b7504) {
            ctx->pc = 0x2B7524u;
            goto label_2b7524;
        }
    }
    ctx->pc = 0x2B750Cu;
label_2b750c:
    // 0x2b750c: 0x26730010  addiu       $s3, $s3, 0x10
    ctx->pc = 0x2b750cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
label_2b7510:
    // 0x2b7510: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2b7510u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2b7514:
    // 0x2b7514: 0xc08feac  jal         func_23FAB0
label_2b7518:
    if (ctx->pc == 0x2B7518u) {
        ctx->pc = 0x2B751Cu;
        goto label_2b751c;
    }
    ctx->pc = 0x2B7514u;
    SET_GPR_U32(ctx, 31, 0x2B751Cu);
    ctx->pc = 0x23FAB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FAB0u, 0x2B7514u, 0x2B751Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B751Cu;
label_2b751c:
    // 0x2b751c: 0x1662ffeb  bne         $s3, $v0, . + 4 + (-0x15 << 2)
label_2b7520:
    if (ctx->pc == 0x2B7520u) {
        ctx->pc = 0x2B7524u;
        goto label_2b7524;
    }
    ctx->pc = 0x2B751Cu;
    {
        const bool branch_taken_0x2b751c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x2b751c) {
            ctx->pc = 0x2B74CCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b74cc;
        }
    }
    ctx->pc = 0x2B7524u;
label_2b7524:
    // 0x2b7524: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x2b7524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_2b7528:
    // 0x2b7528: 0x8c42005c  lw          $v0, 0x5C($v0)
    ctx->pc = 0x2b7528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_2b752c:
    // 0x2b752c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_2b7530:
    if (ctx->pc == 0x2B7530u) {
        ctx->pc = 0x2B7534u;
        goto label_2b7534;
    }
    ctx->pc = 0x2B752Cu;
    {
        const bool branch_taken_0x2b752c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b752c) {
            ctx->pc = 0x2B755Cu;
            goto label_2b755c;
        }
    }
    ctx->pc = 0x2B7534u;
label_2b7534:
    // 0x2b7534: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x2b7534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_2b7538:
    // 0x2b7538: 0x8c44005c  lw          $a0, 0x5C($v0)
    ctx->pc = 0x2b7538u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_2b753c:
    // 0x2b753c: 0xc0add78  jal         func_2B75E0
label_2b7540:
    if (ctx->pc == 0x2B7540u) {
        ctx->pc = 0x2B7544u;
        goto label_2b7544;
    }
    ctx->pc = 0x2B753Cu;
    SET_GPR_U32(ctx, 31, 0x2B7544u);
    ctx->pc = 0x2B75E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B75E0u, 0x2B753Cu, 0x2B7544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7544u;
label_2b7544:
    // 0x2b7544: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x2b7544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_2b7548:
    // 0x2b7548: 0x8c44005c  lw          $a0, 0x5C($v0)
    ctx->pc = 0x2b7548u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_2b754c:
    // 0x2b754c: 0xc119c5c  jal         func_467170
label_2b7550:
    if (ctx->pc == 0x2B7550u) {
        ctx->pc = 0x2B7554u;
        goto label_2b7554;
    }
    ctx->pc = 0x2B754Cu;
    SET_GPR_U32(ctx, 31, 0x2B7554u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x2B754Cu, 0x2B7554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7554u;
label_2b7554:
    // 0x2b7554: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x2b7554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_2b7558:
    // 0x2b7558: 0xac40005c  sw          $zero, 0x5C($v0)
    ctx->pc = 0x2b7558u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 92), GPR_U32(ctx, 0));
label_2b755c:
    // 0x2b755c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2b755cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b7560:
    // 0x2b7560: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x2b7560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_2b7564:
    // 0x2b7564: 0xa0430048  sb          $v1, 0x48($v0)
    ctx->pc = 0x2b7564u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 72), (uint8_t)GPR_U32(ctx, 3));
label_2b7568:
    // 0x2b7568: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x2b7568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_2b756c:
    // 0x2b756c: 0x8c42004c  lw          $v0, 0x4C($v0)
    ctx->pc = 0x2b756cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
label_2b7570:
    // 0x2b7570: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_2b7574:
    if (ctx->pc == 0x2B7574u) {
        ctx->pc = 0x2B7578u;
        goto label_2b7578;
    }
    ctx->pc = 0x2B7570u;
    {
        const bool branch_taken_0x2b7570 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b7570) {
            ctx->pc = 0x2B7594u;
            goto label_2b7594;
        }
    }
    ctx->pc = 0x2B7578u;
label_2b7578:
    // 0x2b7578: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x2b7578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_2b757c:
    // 0x2b757c: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x2b757cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_2b7580:
    // 0x2b7580: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x2b7580u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_2b7584:
    // 0x2b7584: 0xc085538  jal         func_2154E0
label_2b7588:
    if (ctx->pc == 0x2B7588u) {
        ctx->pc = 0x2B758Cu;
        goto label_2b758c;
    }
    ctx->pc = 0x2B7584u;
    SET_GPR_U32(ctx, 31, 0x2B758Cu);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2B7584u, 0x2B758Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B758Cu;
label_2b758c:
    // 0x2b758c: 0x8fa300e0  lw          $v1, 0xE0($sp)
    ctx->pc = 0x2b758cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_2b7590:
    // 0x2b7590: 0xac62004c  sw          $v0, 0x4C($v1)
    ctx->pc = 0x2b7590u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 76), GPR_U32(ctx, 2));
label_2b7594:
    // 0x2b7594: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x2b7594u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_2b7598:
    // 0x2b7598: 0x8c44004c  lw          $a0, 0x4C($v0)
    ctx->pc = 0x2b7598u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
label_2b759c:
    // 0x2b759c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2b759cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2b75a0:
    // 0x2b75a0: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x2b75a0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_2b75a4:
    // 0x2b75a4: 0x320f809  jalr        $t9
label_2b75a8:
    if (ctx->pc == 0x2B75A8u) {
        ctx->pc = 0x2B75ACu;
        goto label_2b75ac;
    }
    ctx->pc = 0x2B75A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2B75ACu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B75A4u, 0x2B75ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2B75ACu;
label_2b75ac:
    // 0x2b75ac: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2b75acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_2b75b0:
    // 0x2b75b0: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x2b75b0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2b75b4:
    // 0x2b75b4: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x2b75b4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2b75b8:
    // 0x2b75b8: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2b75b8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2b75bc:
    // 0x2b75bc: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2b75bcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2b75c0:
    // 0x2b75c0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2b75c0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2b75c4:
    // 0x2b75c4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2b75c4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2b75c8:
    // 0x2b75c8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2b75c8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2b75cc:
    // 0x2b75cc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2b75ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2b75d0:
    // 0x2b75d0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2b75d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2b75d4:
    // 0x2b75d4: 0x27bd00f0  addiu       $sp, $sp, 0xF0
    ctx->pc = 0x2b75d4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_2b75d8:
    // 0x2b75d8: 0x3e00008  jr          $ra
label_2b75dc:
    if (ctx->pc == 0x2B75DCu) {
        ctx->pc = 0x2B75E0u;
        goto label_fallthrough_0x2b75d8;
    }
    ctx->pc = 0x2B75D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B75D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2b75d8:
    ctx->pc = 0x2B75E0u;
}
