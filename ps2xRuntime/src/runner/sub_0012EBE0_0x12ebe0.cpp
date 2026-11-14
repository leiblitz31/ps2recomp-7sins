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

// Function: sub_0012EBE0
// Address: 0x12ebe0 - 0x1314e0
void sub_0012EBE0_0x12ebe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012EBE0_0x12ebe0");
#endif

    switch (ctx->pc) {
        case 0x12ec28u: goto label_12ec28;
        case 0x12ec44u: goto label_12ec44;
        case 0x12ec58u: goto label_12ec58;
        case 0x12ec70u: goto label_12ec70;
        case 0x12ec8cu: goto label_12ec8c;
        case 0x12eca0u: goto label_12eca0;
        case 0x12ecb4u: goto label_12ecb4;
        case 0x12ecd4u: goto label_12ecd4;
        case 0x12ece8u: goto label_12ece8;
        case 0x12ed00u: goto label_12ed00;
        case 0x12ed1cu: goto label_12ed1c;
        case 0x12ed34u: goto label_12ed34;
        case 0x12ed48u: goto label_12ed48;
        case 0x12ed68u: goto label_12ed68;
        case 0x12ed7cu: goto label_12ed7c;
        case 0x12ed94u: goto label_12ed94;
        case 0x12edb0u: goto label_12edb0;
        case 0x12edccu: goto label_12edcc;
        case 0x12ede4u: goto label_12ede4;
        case 0x12ee00u: goto label_12ee00;
        case 0x12ee14u: goto label_12ee14;
        case 0x12ee30u: goto label_12ee30;
        case 0x12ee4cu: goto label_12ee4c;
        case 0x12ee64u: goto label_12ee64;
        case 0x12ee7cu: goto label_12ee7c;
        case 0x12ee98u: goto label_12ee98;
        case 0x12eea8u: goto label_12eea8;
        case 0x12eec4u: goto label_12eec4;
        case 0x12eee0u: goto label_12eee0;
        case 0x12eef4u: goto label_12eef4;
        case 0x12ef24u: goto label_12ef24;
        case 0x12ef40u: goto label_12ef40;
        case 0x12ef50u: goto label_12ef50;
        case 0x12ef6cu: goto label_12ef6c;
        case 0x12ef88u: goto label_12ef88;
        case 0x12ef9cu: goto label_12ef9c;
        case 0x12efb4u: goto label_12efb4;
        case 0x12efd0u: goto label_12efd0;
        case 0x12efe0u: goto label_12efe0;
        case 0x12eff8u: goto label_12eff8;
        case 0x12f014u: goto label_12f014;
        case 0x12f028u: goto label_12f028;
        case 0x12f040u: goto label_12f040;
        case 0x12f05cu: goto label_12f05c;
        case 0x12f070u: goto label_12f070;
        case 0x12f084u: goto label_12f084;
        case 0x12f0a4u: goto label_12f0a4;
        case 0x12f0b8u: goto label_12f0b8;
        case 0x12f0d0u: goto label_12f0d0;
        case 0x12f0ecu: goto label_12f0ec;
        case 0x12f104u: goto label_12f104;
        case 0x12f118u: goto label_12f118;
        case 0x12f138u: goto label_12f138;
        case 0x12f14cu: goto label_12f14c;
        case 0x12f164u: goto label_12f164;
        case 0x12f17cu: goto label_12f17c;
        case 0x12f198u: goto label_12f198;
        case 0x12f1c4u: goto label_12f1c4;
        case 0x12f1e4u: goto label_12f1e4;
        case 0x12f1f8u: goto label_12f1f8;
        case 0x12f210u: goto label_12f210;
        case 0x12f228u: goto label_12f228;
        case 0x12f244u: goto label_12f244;
        case 0x12f25cu: goto label_12f25c;
        case 0x12f278u: goto label_12f278;
        case 0x12f28cu: goto label_12f28c;
        case 0x12f2a4u: goto label_12f2a4;
        case 0x12f2c4u: goto label_12f2c4;
        case 0x12f2dcu: goto label_12f2dc;
        case 0x12f2f8u: goto label_12f2f8;
        case 0x12f314u: goto label_12f314;
        case 0x12f330u: goto label_12f330;
        case 0x12f34cu: goto label_12f34c;
        case 0x12f36cu: goto label_12f36c;
        case 0x12f384u: goto label_12f384;
        case 0x12f3a0u: goto label_12f3a0;
        case 0x12f3bcu: goto label_12f3bc;
        case 0x12f3d8u: goto label_12f3d8;
        case 0x12f3f0u: goto label_12f3f0;
        case 0x12f40cu: goto label_12f40c;
        case 0x12f424u: goto label_12f424;
        case 0x12f440u: goto label_12f440;
        case 0x12f45cu: goto label_12f45c;
        case 0x12f474u: goto label_12f474;
        case 0x12f48cu: goto label_12f48c;
        case 0x12f4a8u: goto label_12f4a8;
        case 0x12f4c0u: goto label_12f4c0;
        case 0x12f4dcu: goto label_12f4dc;
        case 0x12f4f8u: goto label_12f4f8;
        case 0x12f510u: goto label_12f510;
        case 0x12f52cu: goto label_12f52c;
        case 0x12f548u: goto label_12f548;
        case 0x12f560u: goto label_12f560;
        case 0x12f57cu: goto label_12f57c;
        case 0x12f598u: goto label_12f598;
        case 0x12f5b0u: goto label_12f5b0;
        case 0x12f5ccu: goto label_12f5cc;
        case 0x12f5e8u: goto label_12f5e8;
        case 0x12f600u: goto label_12f600;
        case 0x12f61cu: goto label_12f61c;
        case 0x12f638u: goto label_12f638;
        case 0x12f650u: goto label_12f650;
        case 0x12f66cu: goto label_12f66c;
        case 0x12f688u: goto label_12f688;
        case 0x12f698u: goto label_12f698;
        case 0x12f6b4u: goto label_12f6b4;
        case 0x12f6d4u: goto label_12f6d4;
        case 0x12f6f0u: goto label_12f6f0;
        case 0x12f708u: goto label_12f708;
        case 0x12f724u: goto label_12f724;
        case 0x12f73cu: goto label_12f73c;
        case 0x12f758u: goto label_12f758;
        case 0x12f774u: goto label_12f774;
        case 0x12f784u: goto label_12f784;
        case 0x12f7a0u: goto label_12f7a0;
        case 0x12f7c0u: goto label_12f7c0;
        case 0x12f7d4u: goto label_12f7d4;
        case 0x12f7f0u: goto label_12f7f0;
        case 0x12f80cu: goto label_12f80c;
        case 0x12f820u: goto label_12f820;
        case 0x12f83cu: goto label_12f83c;
        case 0x12f858u: goto label_12f858;
        case 0x12f86cu: goto label_12f86c;
        case 0x12f88cu: goto label_12f88c;
        case 0x12f8a8u: goto label_12f8a8;
        case 0x12f8bcu: goto label_12f8bc;
        case 0x12f8d8u: goto label_12f8d8;
        case 0x12f8f4u: goto label_12f8f4;
        case 0x12f908u: goto label_12f908;
        case 0x12f924u: goto label_12f924;
        case 0x12f940u: goto label_12f940;
        case 0x12f950u: goto label_12f950;
        case 0x12f968u: goto label_12f968;
        case 0x12f988u: goto label_12f988;
        case 0x12f9a4u: goto label_12f9a4;
        case 0x12f9c0u: goto label_12f9c0;
        case 0x12f9dcu: goto label_12f9dc;
        case 0x12f9f0u: goto label_12f9f0;
        case 0x12fa08u: goto label_12fa08;
        case 0x12fa28u: goto label_12fa28;
        case 0x12fa44u: goto label_12fa44;
        case 0x12fa60u: goto label_12fa60;
        case 0x12fa80u: goto label_12fa80;
        case 0x12fa9cu: goto label_12fa9c;
        case 0x12fabcu: goto label_12fabc;
        case 0x12fad8u: goto label_12fad8;
        case 0x12faecu: goto label_12faec;
        case 0x12fb08u: goto label_12fb08;
        case 0x12fb28u: goto label_12fb28;
        case 0x12fb44u: goto label_12fb44;
        case 0x12fb64u: goto label_12fb64;
        case 0x12fb84u: goto label_12fb84;
        case 0x12fb98u: goto label_12fb98;
        case 0x12fbb0u: goto label_12fbb0;
        case 0x12fbccu: goto label_12fbcc;
        case 0x12fbe8u: goto label_12fbe8;
        case 0x12fc00u: goto label_12fc00;
        case 0x12fc20u: goto label_12fc20;
        case 0x12fc34u: goto label_12fc34;
        case 0x12fc50u: goto label_12fc50;
        case 0x12fc6cu: goto label_12fc6c;
        case 0x12fc88u: goto label_12fc88;
        case 0x12fca0u: goto label_12fca0;
        case 0x12fcc0u: goto label_12fcc0;
        case 0x12fcd4u: goto label_12fcd4;
        case 0x12fcf0u: goto label_12fcf0;
        case 0x12fd0cu: goto label_12fd0c;
        case 0x12fd24u: goto label_12fd24;
        case 0x12fd40u: goto label_12fd40;
        case 0x12fd5cu: goto label_12fd5c;
        case 0x12fd78u: goto label_12fd78;
        case 0x12fd94u: goto label_12fd94;
        case 0x12fdb0u: goto label_12fdb0;
        case 0x12fdc4u: goto label_12fdc4;
        case 0x12fddcu: goto label_12fddc;
        case 0x12fdfcu: goto label_12fdfc;
        case 0x12fe18u: goto label_12fe18;
        case 0x12fe34u: goto label_12fe34;
        case 0x12fe50u: goto label_12fe50;
        case 0x12fe6cu: goto label_12fe6c;
        case 0x12fe88u: goto label_12fe88;
        case 0x12fea4u: goto label_12fea4;
        case 0x12febcu: goto label_12febc;
        case 0x12fed4u: goto label_12fed4;
        case 0x12fef4u: goto label_12fef4;
        case 0x12ff0cu: goto label_12ff0c;
        case 0x12ff24u: goto label_12ff24;
        case 0x12ff40u: goto label_12ff40;
        case 0x12ff58u: goto label_12ff58;
        case 0x12ff70u: goto label_12ff70;
        case 0x12ff90u: goto label_12ff90;
        case 0x12ffa8u: goto label_12ffa8;
        case 0x12ffc8u: goto label_12ffc8;
        case 0x12ffe4u: goto label_12ffe4;
        case 0x12fffcu: goto label_12fffc;
        case 0x130018u: goto label_130018;
        case 0x130038u: goto label_130038;
        case 0x130054u: goto label_130054;
        case 0x130070u: goto label_130070;
        case 0x13008cu: goto label_13008c;
        case 0x1300a0u: goto label_1300a0;
        case 0x1300b8u: goto label_1300b8;
        case 0x1300d8u: goto label_1300d8;
        case 0x1300f4u: goto label_1300f4;
        case 0x130110u: goto label_130110;
        case 0x130130u: goto label_130130;
        case 0x13014cu: goto label_13014c;
        case 0x13016cu: goto label_13016c;
        case 0x130188u: goto label_130188;
        case 0x13019cu: goto label_13019c;
        case 0x1301b8u: goto label_1301b8;
        case 0x1301d8u: goto label_1301d8;
        case 0x1301f4u: goto label_1301f4;
        case 0x130214u: goto label_130214;
        case 0x130234u: goto label_130234;
        case 0x130248u: goto label_130248;
        case 0x130260u: goto label_130260;
        case 0x13027cu: goto label_13027c;
        case 0x130298u: goto label_130298;
        case 0x1302b0u: goto label_1302b0;
        case 0x1302d0u: goto label_1302d0;
        case 0x1302e4u: goto label_1302e4;
        case 0x130300u: goto label_130300;
        case 0x13031cu: goto label_13031c;
        case 0x130338u: goto label_130338;
        case 0x130350u: goto label_130350;
        case 0x130370u: goto label_130370;
        case 0x130384u: goto label_130384;
        case 0x1303a0u: goto label_1303a0;
        case 0x1303bcu: goto label_1303bc;
        case 0x1303d4u: goto label_1303d4;
        case 0x1303f0u: goto label_1303f0;
        case 0x13040cu: goto label_13040c;
        case 0x130428u: goto label_130428;
        case 0x130444u: goto label_130444;
        case 0x130460u: goto label_130460;
        case 0x130474u: goto label_130474;
        case 0x13048cu: goto label_13048c;
        case 0x1304acu: goto label_1304ac;
        case 0x1304c8u: goto label_1304c8;
        case 0x1304e4u: goto label_1304e4;
        case 0x130500u: goto label_130500;
        case 0x13051cu: goto label_13051c;
        case 0x130538u: goto label_130538;
        case 0x130554u: goto label_130554;
        case 0x13056cu: goto label_13056c;
        case 0x130584u: goto label_130584;
        case 0x1305a4u: goto label_1305a4;
        case 0x1305bcu: goto label_1305bc;
        case 0x1305d4u: goto label_1305d4;
        case 0x1305f0u: goto label_1305f0;
        case 0x130608u: goto label_130608;
        case 0x130620u: goto label_130620;
        case 0x130640u: goto label_130640;
        case 0x130658u: goto label_130658;
        case 0x130678u: goto label_130678;
        case 0x130694u: goto label_130694;
        case 0x1306acu: goto label_1306ac;
        case 0x1306e4u: goto label_1306e4;
        case 0x130704u: goto label_130704;
        case 0x130720u: goto label_130720;
        case 0x13073cu: goto label_13073c;
        case 0x130758u: goto label_130758;
        case 0x130774u: goto label_130774;
        case 0x130794u: goto label_130794;
        case 0x1307b0u: goto label_1307b0;
        case 0x1307c4u: goto label_1307c4;
        case 0x1307e0u: goto label_1307e0;
        case 0x130800u: goto label_130800;
        case 0x130818u: goto label_130818;
        case 0x130838u: goto label_130838;
        case 0x130858u: goto label_130858;
        case 0x130870u: goto label_130870;
        case 0x13088cu: goto label_13088c;
        case 0x1308a8u: goto label_1308a8;
        case 0x1308c4u: goto label_1308c4;
        case 0x1308e0u: goto label_1308e0;
        case 0x130900u: goto label_130900;
        case 0x130918u: goto label_130918;
        case 0x130934u: goto label_130934;
        case 0x130950u: goto label_130950;
        case 0x130968u: goto label_130968;
        case 0x130984u: goto label_130984;
        case 0x1309a0u: goto label_1309a0;
        case 0x1309b8u: goto label_1309b8;
        case 0x1309d4u: goto label_1309d4;
        case 0x1309f0u: goto label_1309f0;
        case 0x130a08u: goto label_130a08;
        case 0x130a24u: goto label_130a24;
        case 0x130a40u: goto label_130a40;
        case 0x130a58u: goto label_130a58;
        case 0x130a74u: goto label_130a74;
        case 0x130a90u: goto label_130a90;
        case 0x130aa0u: goto label_130aa0;
        case 0x130abcu: goto label_130abc;
        case 0x130adcu: goto label_130adc;
        case 0x130af8u: goto label_130af8;
        case 0x130b10u: goto label_130b10;
        case 0x130b2cu: goto label_130b2c;
        case 0x130b44u: goto label_130b44;
        case 0x130b60u: goto label_130b60;
        case 0x130b7cu: goto label_130b7c;
        case 0x130b8cu: goto label_130b8c;
        case 0x130ba8u: goto label_130ba8;
        case 0x130bc8u: goto label_130bc8;
        case 0x130bdcu: goto label_130bdc;
        case 0x130bf8u: goto label_130bf8;
        case 0x130c14u: goto label_130c14;
        case 0x130c28u: goto label_130c28;
        case 0x130c44u: goto label_130c44;
        case 0x130c60u: goto label_130c60;
        case 0x130c74u: goto label_130c74;
        case 0x130c94u: goto label_130c94;
        case 0x130cb0u: goto label_130cb0;
        case 0x130cc4u: goto label_130cc4;
        case 0x130ce0u: goto label_130ce0;
        case 0x130cfcu: goto label_130cfc;
        case 0x130d10u: goto label_130d10;
        case 0x130d2cu: goto label_130d2c;
        case 0x130d48u: goto label_130d48;
        case 0x130d58u: goto label_130d58;
        case 0x130d70u: goto label_130d70;
        case 0x130d90u: goto label_130d90;
        case 0x130dacu: goto label_130dac;
        case 0x130dc8u: goto label_130dc8;
        case 0x130de4u: goto label_130de4;
        case 0x130df8u: goto label_130df8;
        case 0x130e10u: goto label_130e10;
        case 0x130e30u: goto label_130e30;
        case 0x130e4cu: goto label_130e4c;
        case 0x130e68u: goto label_130e68;
        case 0x130e88u: goto label_130e88;
        case 0x130ea4u: goto label_130ea4;
        case 0x130ec4u: goto label_130ec4;
        case 0x130ee0u: goto label_130ee0;
        case 0x130ef4u: goto label_130ef4;
        case 0x130f10u: goto label_130f10;
        case 0x130f30u: goto label_130f30;
        case 0x130f4cu: goto label_130f4c;
        case 0x130f6cu: goto label_130f6c;
        case 0x130f8cu: goto label_130f8c;
        case 0x130fa0u: goto label_130fa0;
        case 0x130fb8u: goto label_130fb8;
        case 0x130fd4u: goto label_130fd4;
        case 0x130ff0u: goto label_130ff0;
        case 0x131008u: goto label_131008;
        case 0x131028u: goto label_131028;
        case 0x13103cu: goto label_13103c;
        case 0x131058u: goto label_131058;
        case 0x131074u: goto label_131074;
        case 0x131090u: goto label_131090;
        case 0x1310a8u: goto label_1310a8;
        case 0x1310c8u: goto label_1310c8;
        case 0x1310dcu: goto label_1310dc;
        case 0x1310f8u: goto label_1310f8;
        case 0x131114u: goto label_131114;
        case 0x13112cu: goto label_13112c;
        case 0x131148u: goto label_131148;
        case 0x131164u: goto label_131164;
        case 0x131180u: goto label_131180;
        case 0x13119cu: goto label_13119c;
        case 0x1311b8u: goto label_1311b8;
        case 0x1311ccu: goto label_1311cc;
        case 0x1311e4u: goto label_1311e4;
        case 0x131204u: goto label_131204;
        case 0x131220u: goto label_131220;
        case 0x13123cu: goto label_13123c;
        case 0x131258u: goto label_131258;
        case 0x131274u: goto label_131274;
        case 0x131290u: goto label_131290;
        case 0x1312acu: goto label_1312ac;
        case 0x1312c4u: goto label_1312c4;
        case 0x1312dcu: goto label_1312dc;
        case 0x1312fcu: goto label_1312fc;
        case 0x131314u: goto label_131314;
        case 0x13134cu: goto label_13134c;
        case 0x131368u: goto label_131368;
        case 0x13137cu: goto label_13137c;
        case 0x131398u: goto label_131398;
        case 0x1313b4u: goto label_1313b4;
        case 0x1313c8u: goto label_1313c8;
        case 0x1313e4u: goto label_1313e4;
        case 0x131400u: goto label_131400;
        case 0x131410u: goto label_131410;
        case 0x131428u: goto label_131428;
        case 0x131448u: goto label_131448;
        case 0x131464u: goto label_131464;
        case 0x131480u: goto label_131480;
        case 0x13149cu: goto label_13149c;
        case 0x1314b0u: goto label_1314b0;
        default: break;
    }

    ctx->pc = 0x12ebe0u;

    // 0x12ebe0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x12ebe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x12ebe4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x12ebe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x12ebe8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x12ebe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x12ebec: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x12ebecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x12ebf0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x12ebf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x12ebf4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x12ebf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x12ebf8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x12ebf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x12ebfc: 0xafa40060  sw          $a0, 0x60($sp)
    ctx->pc = 0x12ebfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 4));
    // 0x12ec00: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x12ec00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ec04: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x12ec04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12ec08: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x12ec08u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x12ec0c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x12ec0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ec10: 0x8fb30060  lw          $s3, 0x60($sp)
    ctx->pc = 0x12ec10u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x12ec14: 0x2672003c  addiu       $s2, $s3, 0x3C
    ctx->pc = 0x12ec14u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 60));
    // 0x12ec18: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x12ec18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ec1c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x12ec1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ec20: 0xc04bae0  jal         func_12EB80
    ctx->pc = 0x12EC20u;
    SET_GPR_U32(ctx, 31, 0x12EC28u);
    ctx->pc = 0x12EB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EB80u, 0x12EC20u, 0x12EC28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12EC28u;
label_12ec28:
    // 0x12ec28: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x12ec28u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ec2c: 0x8fb40060  lw          $s4, 0x60($sp)
    ctx->pc = 0x12ec2cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x12ec30: 0x26820030  addiu       $v0, $s4, 0x30
    ctx->pc = 0x12ec30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
    // 0x12ec34: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12ec34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ec38: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x12ec38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x12ec3c: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12EC3Cu;
    SET_GPR_U32(ctx, 31, 0x12EC44u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12EC3Cu, 0x12EC44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12EC44u;
label_12ec44:
    // 0x12ec44: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x12ec44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x12ec48: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x12ec48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ec4c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x12ec4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12ec50: 0xc116754  jal         func_459D50
    ctx->pc = 0x12EC50u;
    SET_GPR_U32(ctx, 31, 0x12EC58u);
    ctx->pc = 0x459D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x459D50u, 0x12EC50u, 0x12EC58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12EC58u;
label_12ec58:
    // 0x12ec58: 0x8fb30060  lw          $s3, 0x60($sp)
    ctx->pc = 0x12ec58u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x12ec5c: 0x2665003c  addiu       $a1, $s3, 0x3C
    ctx->pc = 0x12ec5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 60));
    // 0x12ec60: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x12ec60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ec64: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x12ec64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ec68: 0xc04bae0  jal         func_12EB80
    ctx->pc = 0x12EC68u;
    SET_GPR_U32(ctx, 31, 0x12EC70u);
    ctx->pc = 0x12EB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EB80u, 0x12EC68u, 0x12EC70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12EC70u;
label_12ec70:
    // 0x12ec70: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x12ec70u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ec74: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x12ec74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x12ec78: 0x24b10030  addiu       $s1, $a1, 0x30
    ctx->pc = 0x12ec78u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x12ec7c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12ec7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ec80: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x12ec80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x12ec84: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12EC84u;
    SET_GPR_U32(ctx, 31, 0x12EC8Cu);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12EC84u, 0x12EC8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12EC8Cu;
label_12ec8c:
    // 0x12ec8c: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x12ec8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x12ec90: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x12ec90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ec94: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x12ec94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12ec98: 0xc116754  jal         func_459D50
    ctx->pc = 0x12EC98u;
    SET_GPR_U32(ctx, 31, 0x12ECA0u);
    ctx->pc = 0x459D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x459D50u, 0x12EC98u, 0x12ECA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12ECA0u;
label_12eca0:
    // 0x12eca0: 0x8fb10060  lw          $s1, 0x60($sp)
    ctx->pc = 0x12eca0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x12eca4: 0x2624003c  addiu       $a0, $s1, 0x3C
    ctx->pc = 0x12eca4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 60));
    // 0x12eca8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x12eca8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ecac: 0xc04bae0  jal         func_12EB80
    ctx->pc = 0x12ECACu;
    SET_GPR_U32(ctx, 31, 0x12ECB4u);
    ctx->pc = 0x12EB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EB80u, 0x12ECACu, 0x12ECB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12ECB4u;
label_12ecb4:
    // 0x12ecb4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x12ecb4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ecb8: 0x8fb20060  lw          $s2, 0x60($sp)
    ctx->pc = 0x12ecb8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x12ecbc: 0x26420030  addiu       $v0, $s2, 0x30
    ctx->pc = 0x12ecbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    // 0x12ecc0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12ecc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ecc4: 0x24110005  addiu       $s1, $zero, 0x5
    ctx->pc = 0x12ecc4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x12ecc8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x12ecc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12eccc: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12ECCCu;
    SET_GPR_U32(ctx, 31, 0x12ECD4u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12ECCCu, 0x12ECD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12ECD4u;
label_12ecd4:
    // 0x12ecd4: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x12ecd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x12ecd8: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x12ecd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ecdc: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x12ecdcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12ece0: 0xc116754  jal         func_459D50
    ctx->pc = 0x12ECE0u;
    SET_GPR_U32(ctx, 31, 0x12ECE8u);
    ctx->pc = 0x459D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x459D50u, 0x12ECE0u, 0x12ECE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12ECE8u;
label_12ece8:
    // 0x12ece8: 0x8fb20060  lw          $s2, 0x60($sp)
    ctx->pc = 0x12ece8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x12ecec: 0x2645003c  addiu       $a1, $s2, 0x3C
    ctx->pc = 0x12ececu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 60));
    // 0x12ecf0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x12ecf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ecf4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x12ecf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ecf8: 0xc04bae0  jal         func_12EB80
    ctx->pc = 0x12ECF8u;
    SET_GPR_U32(ctx, 31, 0x12ED00u);
    ctx->pc = 0x12EB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EB80u, 0x12ECF8u, 0x12ED00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12ED00u;
label_12ed00:
    // 0x12ed00: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x12ed00u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ed04: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x12ed04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x12ed08: 0x24b10030  addiu       $s1, $a1, 0x30
    ctx->pc = 0x12ed08u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x12ed0c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12ed0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ed10: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x12ed10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x12ed14: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12ED14u;
    SET_GPR_U32(ctx, 31, 0x12ED1Cu);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12ED14u, 0x12ED1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12ED1Cu;
label_12ed1c:
    // 0x12ed1c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x12ed1cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ed20: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x12ed20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x12ed24: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12ed24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ed28: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x12ed28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x12ed2c: 0xc116754  jal         func_459D50
    ctx->pc = 0x12ED2Cu;
    SET_GPR_U32(ctx, 31, 0x12ED34u);
    ctx->pc = 0x459D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x459D50u, 0x12ED2Cu, 0x12ED34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12ED34u;
label_12ed34:
    // 0x12ed34: 0x8fb10060  lw          $s1, 0x60($sp)
    ctx->pc = 0x12ed34u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x12ed38: 0x2624003c  addiu       $a0, $s1, 0x3C
    ctx->pc = 0x12ed38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 60));
    // 0x12ed3c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x12ed3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ed40: 0xc04bae0  jal         func_12EB80
    ctx->pc = 0x12ED40u;
    SET_GPR_U32(ctx, 31, 0x12ED48u);
    ctx->pc = 0x12EB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EB80u, 0x12ED40u, 0x12ED48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12ED48u;
label_12ed48:
    // 0x12ed48: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x12ed48u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ed4c: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x12ed4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x12ed50: 0x24a20030  addiu       $v0, $a1, 0x30
    ctx->pc = 0x12ed50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x12ed54: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12ed54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ed58: 0x24110008  addiu       $s1, $zero, 0x8
    ctx->pc = 0x12ed58u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x12ed5c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x12ed5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ed60: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12ED60u;
    SET_GPR_U32(ctx, 31, 0x12ED68u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12ED60u, 0x12ED68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12ED68u;
label_12ed68:
    // 0x12ed68: 0x8e520000  lw          $s2, 0x0($s2)
    ctx->pc = 0x12ed68u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x12ed6c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x12ed6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ed70: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x12ed70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12ed74: 0xc116754  jal         func_459D50
    ctx->pc = 0x12ED74u;
    SET_GPR_U32(ctx, 31, 0x12ED7Cu);
    ctx->pc = 0x459D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x459D50u, 0x12ED74u, 0x12ED7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12ED7Cu;
label_12ed7c:
    // 0x12ed7c: 0x8fb10060  lw          $s1, 0x60($sp)
    ctx->pc = 0x12ed7cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x12ed80: 0x2625003c  addiu       $a1, $s1, 0x3C
    ctx->pc = 0x12ed80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 60));
    // 0x12ed84: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x12ed84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ed88: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x12ed88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ed8c: 0xc04bae0  jal         func_12EB80
    ctx->pc = 0x12ED8Cu;
    SET_GPR_U32(ctx, 31, 0x12ED94u);
    ctx->pc = 0x12EB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EB80u, 0x12ED8Cu, 0x12ED94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12ED94u;
label_12ed94:
    // 0x12ed94: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x12ed94u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ed98: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x12ed98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x12ed9c: 0x24a20030  addiu       $v0, $a1, 0x30
    ctx->pc = 0x12ed9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x12eda0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12eda0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12eda4: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x12eda4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x12eda8: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12EDA8u;
    SET_GPR_U32(ctx, 31, 0x12EDB0u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12EDA8u, 0x12EDB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12EDB0u;
label_12edb0:
    // 0x12edb0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x12edb0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12edb4: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x12edb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x12edb8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12edb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12edbc: 0x8e330000  lw          $s3, 0x0($s1)
    ctx->pc = 0x12edbcu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x12edc0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x12edc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12edc4: 0xc116754  jal         func_459D50
    ctx->pc = 0x12EDC4u;
    SET_GPR_U32(ctx, 31, 0x12EDCCu);
    ctx->pc = 0x459D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x459D50u, 0x12EDC4u, 0x12EDCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12EDCCu;
label_12edcc:
    // 0x12edcc: 0x8fb20060  lw          $s2, 0x60($sp)
    ctx->pc = 0x12edccu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x12edd0: 0x2645003c  addiu       $a1, $s2, 0x3C
    ctx->pc = 0x12edd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 60));
    // 0x12edd4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x12edd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12edd8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x12edd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12eddc: 0xc04bae0  jal         func_12EB80
    ctx->pc = 0x12EDDCu;
    SET_GPR_U32(ctx, 31, 0x12EDE4u);
    ctx->pc = 0x12EB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EB80u, 0x12EDDCu, 0x12EDE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12EDE4u;
label_12ede4:
    // 0x12ede4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x12ede4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ede8: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x12ede8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x12edec: 0x24a20030  addiu       $v0, $a1, 0x30
    ctx->pc = 0x12edecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x12edf0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12edf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12edf4: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x12edf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x12edf8: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12EDF8u;
    SET_GPR_U32(ctx, 31, 0x12EE00u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12EDF8u, 0x12EE00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12EE00u;
label_12ee00:
    // 0x12ee00: 0x8e310000  lw          $s1, 0x0($s1)
    ctx->pc = 0x12ee00u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x12ee04: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12ee04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ee08: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x12ee08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12ee0c: 0xc116754  jal         func_459D50
    ctx->pc = 0x12EE0Cu;
    SET_GPR_U32(ctx, 31, 0x12EE14u);
    ctx->pc = 0x459D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x459D50u, 0x12EE0Cu, 0x12EE14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12EE14u;
label_12ee14:
    // 0x12ee14: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x12ee14u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ee18: 0x8fb20060  lw          $s2, 0x60($sp)
    ctx->pc = 0x12ee18u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x12ee1c: 0x2642003c  addiu       $v0, $s2, 0x3C
    ctx->pc = 0x12ee1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 60));
    // 0x12ee20: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12ee20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ee24: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x12ee24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ee28: 0xc04bae0  jal         func_12EB80
    ctx->pc = 0x12EE28u;
    SET_GPR_U32(ctx, 31, 0x12EE30u);
    ctx->pc = 0x12EB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EB80u, 0x12EE28u, 0x12EE30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12EE30u;
label_12ee30:
    // 0x12ee30: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x12ee30u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ee34: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x12ee34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x12ee38: 0x24a20030  addiu       $v0, $a1, 0x30
    ctx->pc = 0x12ee38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x12ee3c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12ee3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ee40: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x12ee40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x12ee44: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12EE44u;
    SET_GPR_U32(ctx, 31, 0x12EE4Cu);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12EE44u, 0x12EE4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12EE4Cu;
label_12ee4c:
    // 0x12ee4c: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x12ee4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x12ee50: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x12ee50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ee54: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x12ee54u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12ee58: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x12ee58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ee5c: 0xc116754  jal         func_459D50
    ctx->pc = 0x12EE5Cu;
    SET_GPR_U32(ctx, 31, 0x12EE64u);
    ctx->pc = 0x459D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x459D50u, 0x12EE5Cu, 0x12EE64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12EE64u;
label_12ee64:
    // 0x12ee64: 0x8fb20060  lw          $s2, 0x60($sp)
    ctx->pc = 0x12ee64u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x12ee68: 0x2645003c  addiu       $a1, $s2, 0x3C
    ctx->pc = 0x12ee68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 60));
    // 0x12ee6c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x12ee6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ee70: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x12ee70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ee74: 0xc04bae0  jal         func_12EB80
    ctx->pc = 0x12EE74u;
    SET_GPR_U32(ctx, 31, 0x12EE7Cu);
    ctx->pc = 0x12EB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EB80u, 0x12EE74u, 0x12EE7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12EE7Cu;
label_12ee7c:
    // 0x12ee7c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x12ee7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ee80: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x12ee80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x12ee84: 0x24a20030  addiu       $v0, $a1, 0x30
    ctx->pc = 0x12ee84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x12ee88: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12ee88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ee8c: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x12ee8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x12ee90: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12EE90u;
    SET_GPR_U32(ctx, 31, 0x12EE98u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12EE90u, 0x12EE98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12EE98u;
label_12ee98:
    // 0x12ee98: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x12ee98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x12ee9c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x12ee9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12eea0: 0xc116754  jal         func_459D50
    ctx->pc = 0x12EEA0u;
    SET_GPR_U32(ctx, 31, 0x12EEA8u);
    ctx->pc = 0x459D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x459D50u, 0x12EEA0u, 0x12EEA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12EEA8u;
label_12eea8:
    // 0x12eea8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x12eea8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12eeac: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x12eeacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x12eeb0: 0x24b2003c  addiu       $s2, $a1, 0x3C
    ctx->pc = 0x12eeb0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), 60));
    // 0x12eeb4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x12eeb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12eeb8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x12eeb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12eebc: 0xc04bae0  jal         func_12EB80
    ctx->pc = 0x12EEBCu;
    SET_GPR_U32(ctx, 31, 0x12EEC4u);
    ctx->pc = 0x12EB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EB80u, 0x12EEBCu, 0x12EEC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12EEC4u;
label_12eec4:
    // 0x12eec4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x12eec4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12eec8: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x12eec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x12eecc: 0x24450030  addiu       $a1, $v0, 0x30
    ctx->pc = 0x12eeccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x12eed0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x12eed0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12eed4: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x12eed4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x12eed8: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12EED8u;
    SET_GPR_U32(ctx, 31, 0x12EEE0u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12EED8u, 0x12EEE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12EEE0u;
label_12eee0:
    // 0x12eee0: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x12eee0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x12eee4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x12eee4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12eee8: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x12eee8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12eeec: 0xc116754  jal         func_459D50
    ctx->pc = 0x12EEECu;
    SET_GPR_U32(ctx, 31, 0x12EEF4u);
    ctx->pc = 0x459D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x459D50u, 0x12EEECu, 0x12EEF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12EEF4u;
label_12eef4:
    // 0x12eef4: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x12EEF4u;
    {
        const bool branch_taken_0x12eef4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x12eef4) {
            ctx->pc = 0x12EF0Cu;
            goto label_12ef0c;
        }
    }
    ctx->pc = 0x12EEFCu;
    // 0x12eefc: 0x8f93bb70  lw          $s3, -0x4490($gp)
    ctx->pc = 0x12eefcu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
    // 0x12ef00: 0x92650001  lbu         $a1, 0x1($s3)
    ctx->pc = 0x12ef00u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
    // 0x12ef04: 0x14a00013  bnez        $a1, . + 4 + (0x13 << 2)
    ctx->pc = 0x12EF04u;
    {
        const bool branch_taken_0x12ef04 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x12ef04) {
            ctx->pc = 0x12EF54u;
            goto label_12ef54;
        }
    }
    ctx->pc = 0x12EF0Cu;
label_12ef0c:
    // 0x12ef0c: 0x8fb20060  lw          $s2, 0x60($sp)
    ctx->pc = 0x12ef0cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x12ef10: 0x2645003c  addiu       $a1, $s2, 0x3C
    ctx->pc = 0x12ef10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 60));
    // 0x12ef14: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x12ef14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ef18: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x12ef18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ef1c: 0xc04bae0  jal         func_12EB80
    ctx->pc = 0x12EF1Cu;
    SET_GPR_U32(ctx, 31, 0x12EF24u);
    ctx->pc = 0x12EB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EB80u, 0x12EF1Cu, 0x12EF24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12EF24u;
label_12ef24:
    // 0x12ef24: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x12ef24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ef28: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x12ef28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x12ef2c: 0x24a20030  addiu       $v0, $a1, 0x30
    ctx->pc = 0x12ef2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x12ef30: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12ef30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ef34: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x12ef34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x12ef38: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12EF38u;
    SET_GPR_U32(ctx, 31, 0x12EF40u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12EF38u, 0x12EF40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12EF40u;
label_12ef40:
    // 0x12ef40: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x12ef40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x12ef44: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x12ef44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12ef48: 0xc116754  jal         func_459D50
    ctx->pc = 0x12EF48u;
    SET_GPR_U32(ctx, 31, 0x12EF50u);
    ctx->pc = 0x459D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x459D50u, 0x12EF48u, 0x12EF50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12EF50u;
label_12ef50:
    // 0x12ef50: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x12ef50u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12ef54:
    // 0x12ef54: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x12ef54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x12ef58: 0x24b2003c  addiu       $s2, $a1, 0x3C
    ctx->pc = 0x12ef58u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), 60));
    // 0x12ef5c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x12ef5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ef60: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x12ef60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ef64: 0xc04bae0  jal         func_12EB80
    ctx->pc = 0x12EF64u;
    SET_GPR_U32(ctx, 31, 0x12EF6Cu);
    ctx->pc = 0x12EB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EB80u, 0x12EF64u, 0x12EF6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12EF6Cu;
label_12ef6c:
    // 0x12ef6c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x12ef6cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ef70: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x12ef70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x12ef74: 0x24450030  addiu       $a1, $v0, 0x30
    ctx->pc = 0x12ef74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x12ef78: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x12ef78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ef7c: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x12ef7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x12ef80: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12EF80u;
    SET_GPR_U32(ctx, 31, 0x12EF88u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12EF80u, 0x12EF88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12EF88u;
label_12ef88:
    // 0x12ef88: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x12ef88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x12ef8c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x12ef8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ef90: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x12ef90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12ef94: 0xc116754  jal         func_459D50
    ctx->pc = 0x12EF94u;
    SET_GPR_U32(ctx, 31, 0x12EF9Cu);
    ctx->pc = 0x459D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x459D50u, 0x12EF94u, 0x12EF9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12EF9Cu;
label_12ef9c:
    // 0x12ef9c: 0x8fb20060  lw          $s2, 0x60($sp)
    ctx->pc = 0x12ef9cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x12efa0: 0x2645003c  addiu       $a1, $s2, 0x3C
    ctx->pc = 0x12efa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 60));
    // 0x12efa4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x12efa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12efa8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x12efa8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12efac: 0xc04bae0  jal         func_12EB80
    ctx->pc = 0x12EFACu;
    SET_GPR_U32(ctx, 31, 0x12EFB4u);
    ctx->pc = 0x12EB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EB80u, 0x12EFACu, 0x12EFB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12EFB4u;
label_12efb4:
    // 0x12efb4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x12efb4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12efb8: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x12efb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x12efbc: 0x24a20030  addiu       $v0, $a1, 0x30
    ctx->pc = 0x12efbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x12efc0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12efc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12efc4: 0x24050017  addiu       $a1, $zero, 0x17
    ctx->pc = 0x12efc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x12efc8: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12EFC8u;
    SET_GPR_U32(ctx, 31, 0x12EFD0u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12EFC8u, 0x12EFD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12EFD0u;
label_12efd0:
    // 0x12efd0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x12efd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x12efd4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x12efd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12efd8: 0xc116754  jal         func_459D50
    ctx->pc = 0x12EFD8u;
    SET_GPR_U32(ctx, 31, 0x12EFE0u);
    ctx->pc = 0x459D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x459D50u, 0x12EFD8u, 0x12EFE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12EFE0u;
label_12efe0:
    // 0x12efe0: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x12efe0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x12efe4: 0x24b3003c  addiu       $s3, $a1, 0x3C
    ctx->pc = 0x12efe4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 5), 60));
    // 0x12efe8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x12efe8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12efec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x12efecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12eff0: 0xc04bae0  jal         func_12EB80
    ctx->pc = 0x12EFF0u;
    SET_GPR_U32(ctx, 31, 0x12EFF8u);
    ctx->pc = 0x12EB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EB80u, 0x12EFF0u, 0x12EFF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12EFF8u;
label_12eff8:
    // 0x12eff8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x12eff8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12effc: 0x8fb10060  lw          $s1, 0x60($sp)
    ctx->pc = 0x12effcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x12f000: 0x26250030  addiu       $a1, $s1, 0x30
    ctx->pc = 0x12f000u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x12f004: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x12f004u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f008: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x12f008u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x12f00c: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12F00Cu;
    SET_GPR_U32(ctx, 31, 0x12F014u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12F00Cu, 0x12F014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F014u;
label_12f014:
    // 0x12f014: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x12f014u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x12f018: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x12f018u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f01c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x12f01cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12f020: 0xc116754  jal         func_459D50
    ctx->pc = 0x12F020u;
    SET_GPR_U32(ctx, 31, 0x12F028u);
    ctx->pc = 0x459D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x459D50u, 0x12F020u, 0x12F028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F028u;
label_12f028:
    // 0x12f028: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x12f028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x12f02c: 0x2445003c  addiu       $a1, $v0, 0x3C
    ctx->pc = 0x12f02cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 60));
    // 0x12f030: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x12f030u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f034: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x12f034u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f038: 0xc04bae0  jal         func_12EB80
    ctx->pc = 0x12F038u;
    SET_GPR_U32(ctx, 31, 0x12F040u);
    ctx->pc = 0x12EB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EB80u, 0x12F038u, 0x12F040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F040u;
label_12f040:
    // 0x12f040: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x12f040u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f044: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x12f044u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x12f048: 0x24b10030  addiu       $s1, $a1, 0x30
    ctx->pc = 0x12f048u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x12f04c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12f04cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f050: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x12f050u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x12f054: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12F054u;
    SET_GPR_U32(ctx, 31, 0x12F05Cu);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12F054u, 0x12F05Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F05Cu;
label_12f05c:
    // 0x12f05c: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x12f05cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x12f060: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x12f060u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f064: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x12f064u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12f068: 0xc116754  jal         func_459D50
    ctx->pc = 0x12F068u;
    SET_GPR_U32(ctx, 31, 0x12F070u);
    ctx->pc = 0x459D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x459D50u, 0x12F068u, 0x12F070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F070u;
label_12f070:
    // 0x12f070: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x12f070u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x12f074: 0x24a4003c  addiu       $a0, $a1, 0x3C
    ctx->pc = 0x12f074u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 60));
    // 0x12f078: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x12f078u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f07c: 0xc04bae0  jal         func_12EB80
    ctx->pc = 0x12F07Cu;
    SET_GPR_U32(ctx, 31, 0x12F084u);
    ctx->pc = 0x12EB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EB80u, 0x12F07Cu, 0x12F084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F084u;
label_12f084:
    // 0x12f084: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x12f084u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f088: 0x8fb20060  lw          $s2, 0x60($sp)
    ctx->pc = 0x12f088u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x12f08c: 0x26450030  addiu       $a1, $s2, 0x30
    ctx->pc = 0x12f08cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    // 0x12f090: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x12f090u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f094: 0x24110019  addiu       $s1, $zero, 0x19
    ctx->pc = 0x12f094u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x12f098: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x12f098u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f09c: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12F09Cu;
    SET_GPR_U32(ctx, 31, 0x12F0A4u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12F09Cu, 0x12F0A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F0A4u;
label_12f0a4:
    // 0x12f0a4: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x12f0a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x12f0a8: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x12f0a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f0ac: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x12f0acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12f0b0: 0xc116754  jal         func_459D50
    ctx->pc = 0x12F0B0u;
    SET_GPR_U32(ctx, 31, 0x12F0B8u);
    ctx->pc = 0x459D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x459D50u, 0x12F0B0u, 0x12F0B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F0B8u;
label_12f0b8:
    // 0x12f0b8: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x12f0b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x12f0bc: 0x2485003c  addiu       $a1, $a0, 0x3C
    ctx->pc = 0x12f0bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 60));
    // 0x12f0c0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x12f0c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f0c4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x12f0c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f0c8: 0xc04bae0  jal         func_12EB80
    ctx->pc = 0x12F0C8u;
    SET_GPR_U32(ctx, 31, 0x12F0D0u);
    ctx->pc = 0x12EB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EB80u, 0x12F0C8u, 0x12F0D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F0D0u;
label_12f0d0:
    // 0x12f0d0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x12f0d0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f0d4: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x12f0d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x12f0d8: 0x24b20030  addiu       $s2, $a1, 0x30
    ctx->pc = 0x12f0d8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x12f0dc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x12f0dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f0e0: 0x2405001a  addiu       $a1, $zero, 0x1A
    ctx->pc = 0x12f0e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x12f0e4: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12F0E4u;
    SET_GPR_U32(ctx, 31, 0x12F0ECu);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12F0E4u, 0x12F0ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F0ECu;
label_12f0ec:
    // 0x12f0ec: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x12f0ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f0f0: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x12f0f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x12f0f4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x12f0f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f0f8: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x12f0f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x12f0fc: 0xc116754  jal         func_459D50
    ctx->pc = 0x12F0FCu;
    SET_GPR_U32(ctx, 31, 0x12F104u);
    ctx->pc = 0x459D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x459D50u, 0x12F0FCu, 0x12F104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F104u;
label_12f104:
    // 0x12f104: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x12f104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x12f108: 0x2444003c  addiu       $a0, $v0, 0x3C
    ctx->pc = 0x12f108u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 60));
    // 0x12f10c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x12f10cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f110: 0xc04bae0  jal         func_12EB80
    ctx->pc = 0x12F110u;
    SET_GPR_U32(ctx, 31, 0x12F118u);
    ctx->pc = 0x12EB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EB80u, 0x12F110u, 0x12F118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F118u;
label_12f118:
    // 0x12f118: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x12f118u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f11c: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x12f11cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x12f120: 0x24450030  addiu       $a1, $v0, 0x30
    ctx->pc = 0x12f120u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x12f124: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x12f124u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f128: 0x2412001b  addiu       $s2, $zero, 0x1B
    ctx->pc = 0x12f128u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x12f12c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x12f12cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f130: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12F130u;
    SET_GPR_U32(ctx, 31, 0x12F138u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12F130u, 0x12F138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F138u;
label_12f138:
    // 0x12f138: 0x8e310000  lw          $s1, 0x0($s1)
    ctx->pc = 0x12f138u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x12f13c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12f13cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f140: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x12f140u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12f144: 0xc116754  jal         func_459D50
    ctx->pc = 0x12F144u;
    SET_GPR_U32(ctx, 31, 0x12F14Cu);
    ctx->pc = 0x459D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x459D50u, 0x12F144u, 0x12F14Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F14Cu;
label_12f14c:
    // 0x12f14c: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x12f14cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x12f150: 0x24a2003c  addiu       $v0, $a1, 0x3C
    ctx->pc = 0x12f150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 60));
    // 0x12f154: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12f154u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f158: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x12f158u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f15c: 0xc04bae0  jal         func_12EB80
    ctx->pc = 0x12F15Cu;
    SET_GPR_U32(ctx, 31, 0x12F164u);
    ctx->pc = 0x12EB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EB80u, 0x12F15Cu, 0x12F164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F164u;
label_12f164:
    // 0x12f164: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x12f164u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f168: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x12f168u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x12f16c: 0x24a40030  addiu       $a0, $a1, 0x30
    ctx->pc = 0x12f16cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x12f170: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x12f170u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x12f174: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12F174u;
    SET_GPR_U32(ctx, 31, 0x12F17Cu);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12F174u, 0x12F17Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F17Cu;
label_12f17c:
    // 0x12f17c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x12f17cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f180: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x12f180u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x12f184: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x12f184u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f188: 0x8e510000  lw          $s1, 0x0($s2)
    ctx->pc = 0x12f188u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x12f18c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x12f18cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f190: 0xc116754  jal         func_459D50
    ctx->pc = 0x12F190u;
    SET_GPR_U32(ctx, 31, 0x12F198u);
    ctx->pc = 0x459D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x459D50u, 0x12F190u, 0x12F198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F198u;
label_12f198:
    // 0x12f198: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x12F198u;
    {
        const bool branch_taken_0x12f198 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x12f198) {
            ctx->pc = 0x12F1B0u;
            goto label_12f1b0;
        }
    }
    ctx->pc = 0x12F1A0u;
    // 0x12f1a0: 0x8f82bb70  lw          $v0, -0x4490($gp)
    ctx->pc = 0x12f1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
    // 0x12f1a4: 0x90450001  lbu         $a1, 0x1($v0)
    ctx->pc = 0x12f1a4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x12f1a8: 0x14a00013  bnez        $a1, . + 4 + (0x13 << 2)
    ctx->pc = 0x12F1A8u;
    {
        const bool branch_taken_0x12f1a8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x12f1a8) {
            ctx->pc = 0x12F1F8u;
            goto label_12f1f8;
        }
    }
    ctx->pc = 0x12F1B0u;
label_12f1b0:
    // 0x12f1b0: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x12f1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x12f1b4: 0x2444003c  addiu       $a0, $v0, 0x3C
    ctx->pc = 0x12f1b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 60));
    // 0x12f1b8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x12f1b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f1bc: 0xc04bae0  jal         func_12EB80
    ctx->pc = 0x12F1BCu;
    SET_GPR_U32(ctx, 31, 0x12F1C4u);
    ctx->pc = 0x12EB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EB80u, 0x12F1BCu, 0x12F1C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F1C4u;
label_12f1c4:
    // 0x12f1c4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x12f1c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f1c8: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x12f1c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x12f1cc: 0x24850030  addiu       $a1, $a0, 0x30
    ctx->pc = 0x12f1ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x12f1d0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x12f1d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f1d4: 0x2412001d  addiu       $s2, $zero, 0x1D
    ctx->pc = 0x12f1d4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x12f1d8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x12f1d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f1dc: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12F1DCu;
    SET_GPR_U32(ctx, 31, 0x12F1E4u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12F1DCu, 0x12F1E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F1E4u;
label_12f1e4:
    // 0x12f1e4: 0x8e310000  lw          $s1, 0x0($s1)
    ctx->pc = 0x12f1e4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x12f1e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12f1e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f1ec: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x12f1ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12f1f0: 0xc116754  jal         func_459D50
    ctx->pc = 0x12F1F0u;
    SET_GPR_U32(ctx, 31, 0x12F1F8u);
    ctx->pc = 0x459D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x459D50u, 0x12F1F0u, 0x12F1F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F1F8u;
label_12f1f8:
    // 0x12f1f8: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x12f1f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x12f1fc: 0x24a2003c  addiu       $v0, $a1, 0x3C
    ctx->pc = 0x12f1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 60));
    // 0x12f200: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12f200u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f204: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x12f204u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f208: 0xc04bae0  jal         func_12EB80
    ctx->pc = 0x12F208u;
    SET_GPR_U32(ctx, 31, 0x12F210u);
    ctx->pc = 0x12EB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EB80u, 0x12F208u, 0x12F210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F210u;
label_12f210:
    // 0x12f210: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x12f210u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f214: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x12f214u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x12f218: 0x24a40030  addiu       $a0, $a1, 0x30
    ctx->pc = 0x12f218u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x12f21c: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x12f21cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x12f220: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12F220u;
    SET_GPR_U32(ctx, 31, 0x12F228u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12F220u, 0x12F228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F228u;
label_12f228:
    // 0x12f228: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x12f228u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f22c: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x12f22cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x12f230: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x12f230u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f234: 0x8e320000  lw          $s2, 0x0($s1)
    ctx->pc = 0x12f234u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x12f238: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x12f238u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f23c: 0xc116754  jal         func_459D50
    ctx->pc = 0x12F23Cu;
    SET_GPR_U32(ctx, 31, 0x12F244u);
    ctx->pc = 0x459D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x459D50u, 0x12F23Cu, 0x12F244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F244u;
label_12f244:
    // 0x12f244: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x12f244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x12f248: 0x2445003c  addiu       $a1, $v0, 0x3C
    ctx->pc = 0x12f248u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 60));
    // 0x12f24c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x12f24cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f250: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x12f250u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f254: 0xc04bae0  jal         func_12EB80
    ctx->pc = 0x12F254u;
    SET_GPR_U32(ctx, 31, 0x12F25Cu);
    ctx->pc = 0x12EB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EB80u, 0x12F254u, 0x12F25Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F25Cu;
label_12f25c:
    // 0x12f25c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x12f25cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f260: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x12f260u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x12f264: 0x24850030  addiu       $a1, $a0, 0x30
    ctx->pc = 0x12f264u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x12f268: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x12f268u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f26c: 0x2405001f  addiu       $a1, $zero, 0x1F
    ctx->pc = 0x12f26cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x12f270: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12F270u;
    SET_GPR_U32(ctx, 31, 0x12F278u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12F270u, 0x12F278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F278u;
label_12f278:
    // 0x12f278: 0x8e320000  lw          $s2, 0x0($s1)
    ctx->pc = 0x12f278u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x12f27c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x12f27cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f280: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x12f280u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12f284: 0xc116754  jal         func_459D50
    ctx->pc = 0x12F284u;
    SET_GPR_U32(ctx, 31, 0x12F28Cu);
    ctx->pc = 0x459D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x459D50u, 0x12F284u, 0x12F28Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F28Cu;
label_12f28c:
    // 0x12f28c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x12f28cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f290: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x12f290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x12f294: 0x2444003c  addiu       $a0, $v0, 0x3C
    ctx->pc = 0x12f294u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 60));
    // 0x12f298: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x12f298u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f29c: 0xc04bae0  jal         func_12EB80
    ctx->pc = 0x12F29Cu;
    SET_GPR_U32(ctx, 31, 0x12F2A4u);
    ctx->pc = 0x12EB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EB80u, 0x12F29Cu, 0x12F2A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F2A4u;
label_12f2a4:
    // 0x12f2a4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x12f2a4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f2a8: 0x8fb20060  lw          $s2, 0x60($sp)
    ctx->pc = 0x12f2a8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x12f2ac: 0x26510030  addiu       $s1, $s2, 0x30
    ctx->pc = 0x12f2acu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    // 0x12f2b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12f2b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f2b4: 0x2414004c  addiu       $s4, $zero, 0x4C
    ctx->pc = 0x12f2b4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x12f2b8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x12f2b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f2bc: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12F2BCu;
    SET_GPR_U32(ctx, 31, 0x12F2C4u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12F2BCu, 0x12F2C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F2C4u;
label_12f2c4:
    // 0x12f2c4: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x12f2c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x12f2c8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x12f2c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f2cc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x12f2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12f2d0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x12f2d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f2d4: 0xc116754  jal         func_459D50
    ctx->pc = 0x12F2D4u;
    SET_GPR_U32(ctx, 31, 0x12F2DCu);
    ctx->pc = 0x459D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x459D50u, 0x12F2D4u, 0x12F2DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F2DCu;
label_12f2dc:
    // 0x12f2dc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x12f2dcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f2e0: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x12f2e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x12f2e4: 0x24a2003c  addiu       $v0, $a1, 0x3C
    ctx->pc = 0x12f2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 60));
    // 0x12f2e8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12f2e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f2ec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x12f2ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f2f0: 0xc04bae0  jal         func_12EB80
    ctx->pc = 0x12F2F0u;
    SET_GPR_U32(ctx, 31, 0x12F2F8u);
    ctx->pc = 0x12EB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EB80u, 0x12F2F0u, 0x12F2F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F2F8u;
label_12f2f8:
    // 0x12f2f8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x12f2f8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f2fc: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x12f2fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x12f300: 0x24b20030  addiu       $s2, $a1, 0x30
    ctx->pc = 0x12f300u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x12f304: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x12f304u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f308: 0x2405004d  addiu       $a1, $zero, 0x4D
    ctx->pc = 0x12f308u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x12f30c: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12F30Cu;
    SET_GPR_U32(ctx, 31, 0x12F314u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12F30Cu, 0x12F314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F314u;
label_12f314:
    // 0x12f314: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x12f314u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f318: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x12f318u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x12f31c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x12f31cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f320: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x12f320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x12f324: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x12f324u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f328: 0xc116754  jal         func_459D50
    ctx->pc = 0x12F328u;
    SET_GPR_U32(ctx, 31, 0x12F330u);
    ctx->pc = 0x459D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x459D50u, 0x12F328u, 0x12F330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F330u;
label_12f330:
    // 0x12f330: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x12f330u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f334: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x12f334u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x12f338: 0x24a2003c  addiu       $v0, $a1, 0x3C
    ctx->pc = 0x12f338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 60));
    // 0x12f33c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12f33cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f340: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x12f340u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f344: 0xc04bae0  jal         func_12EB80
    ctx->pc = 0x12F344u;
    SET_GPR_U32(ctx, 31, 0x12F34Cu);
    ctx->pc = 0x12EB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EB80u, 0x12F344u, 0x12F34Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F34Cu;
label_12f34c:
    // 0x12f34c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x12f34cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f350: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x12f350u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x12f354: 0x24930030  addiu       $s3, $a0, 0x30
    ctx->pc = 0x12f354u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x12f358: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x12f358u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f35c: 0x2412004e  addiu       $s2, $zero, 0x4E
    ctx->pc = 0x12f35cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x12f360: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x12f360u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f364: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12F364u;
    SET_GPR_U32(ctx, 31, 0x12F36Cu);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12F364u, 0x12F36Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F36Cu;
label_12f36c:
    // 0x12f36c: 0x8e310000  lw          $s1, 0x0($s1)
    ctx->pc = 0x12f36cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x12f370: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12f370u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f374: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x12f374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12f378: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x12f378u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f37c: 0xc116754  jal         func_459D50
    ctx->pc = 0x12F37Cu;
    SET_GPR_U32(ctx, 31, 0x12F384u);
    ctx->pc = 0x459D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x459D50u, 0x12F37Cu, 0x12F384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F384u;
label_12f384:
    // 0x12f384: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x12f384u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f388: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x12f388u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x12f38c: 0x24a2003c  addiu       $v0, $a1, 0x3C
    ctx->pc = 0x12f38cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 60));
    // 0x12f390: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12f390u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f394: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x12f394u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f398: 0xc04bae0  jal         func_12EB80
    ctx->pc = 0x12F398u;
    SET_GPR_U32(ctx, 31, 0x12F3A0u);
    ctx->pc = 0x12EB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EB80u, 0x12F398u, 0x12F3A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F3A0u;
label_12f3a0:
    // 0x12f3a0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x12f3a0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f3a4: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x12f3a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x12f3a8: 0x24b30030  addiu       $s3, $a1, 0x30
    ctx->pc = 0x12f3a8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x12f3ac: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x12f3acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f3b0: 0x2405004f  addiu       $a1, $zero, 0x4F
    ctx->pc = 0x12f3b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    // 0x12f3b4: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12F3B4u;
    SET_GPR_U32(ctx, 31, 0x12F3BCu);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12F3B4u, 0x12F3BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F3BCu;
label_12f3bc:
    // 0x12f3bc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x12f3bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f3c0: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x12f3c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x12f3c4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x12f3c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f3c8: 0x8e320000  lw          $s2, 0x0($s1)
    ctx->pc = 0x12f3c8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x12f3cc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x12f3ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f3d0: 0xc116754  jal         func_459D50
    ctx->pc = 0x12F3D0u;
    SET_GPR_U32(ctx, 31, 0x12F3D8u);
    ctx->pc = 0x459D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x459D50u, 0x12F3D0u, 0x12F3D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F3D8u;
label_12f3d8:
    // 0x12f3d8: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x12f3d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x12f3dc: 0x24a2003c  addiu       $v0, $a1, 0x3C
    ctx->pc = 0x12f3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 60));
    // 0x12f3e0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12f3e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f3e4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x12f3e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f3e8: 0xc04bae0  jal         func_12EB80
    ctx->pc = 0x12F3E8u;
    SET_GPR_U32(ctx, 31, 0x12F3F0u);
    ctx->pc = 0x12EB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EB80u, 0x12F3E8u, 0x12F3F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F3F0u;
label_12f3f0:
    // 0x12f3f0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x12f3f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f3f4: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x12f3f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x12f3f8: 0x24920030  addiu       $s2, $a0, 0x30
    ctx->pc = 0x12f3f8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x12f3fc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x12f3fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f400: 0x24050050  addiu       $a1, $zero, 0x50
    ctx->pc = 0x12f400u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x12f404: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12F404u;
    SET_GPR_U32(ctx, 31, 0x12F40Cu);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12F404u, 0x12F40Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F40Cu;
label_12f40c:
    // 0x12f40c: 0x8e310000  lw          $s1, 0x0($s1)
    ctx->pc = 0x12f40cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x12f410: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12f410u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f414: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x12f414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12f418: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x12f418u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f41c: 0xc116754  jal         func_459D50
    ctx->pc = 0x12F41Cu;
    SET_GPR_U32(ctx, 31, 0x12F424u);
    ctx->pc = 0x459D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x459D50u, 0x12F41Cu, 0x12F424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F424u;
label_12f424:
    // 0x12f424: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x12f424u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f428: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x12f428u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x12f42c: 0x24a2003c  addiu       $v0, $a1, 0x3C
    ctx->pc = 0x12f42cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 60));
    // 0x12f430: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12f430u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f434: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x12f434u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f438: 0xc04bae0  jal         func_12EB80
    ctx->pc = 0x12F438u;
    SET_GPR_U32(ctx, 31, 0x12F440u);
    ctx->pc = 0x12EB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EB80u, 0x12F438u, 0x12F440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F440u;
label_12f440:
    // 0x12f440: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x12f440u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f444: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x12f444u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x12f448: 0x24b20030  addiu       $s2, $a1, 0x30
    ctx->pc = 0x12f448u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x12f44c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x12f44cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f450: 0x24050051  addiu       $a1, $zero, 0x51
    ctx->pc = 0x12f450u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
    // 0x12f454: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12F454u;
    SET_GPR_U32(ctx, 31, 0x12F45Cu);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12F454u, 0x12F45Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F45Cu;
label_12f45c:
    // 0x12f45c: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x12f45cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x12f460: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x12f460u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f464: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x12f464u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12f468: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x12f468u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f46c: 0xc116754  jal         func_459D50
    ctx->pc = 0x12F46Cu;
    SET_GPR_U32(ctx, 31, 0x12F474u);
    ctx->pc = 0x459D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x459D50u, 0x12F46Cu, 0x12F474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F474u;
label_12f474:
    // 0x12f474: 0x8fb30060  lw          $s3, 0x60($sp)
    ctx->pc = 0x12f474u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x12f478: 0x2662003c  addiu       $v0, $s3, 0x3C
    ctx->pc = 0x12f478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 60));
    // 0x12f47c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12f47cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f480: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x12f480u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f484: 0xc04bae0  jal         func_12EB80
    ctx->pc = 0x12F484u;
    SET_GPR_U32(ctx, 31, 0x12F48Cu);
    ctx->pc = 0x12EB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EB80u, 0x12F484u, 0x12F48Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F48Cu;
label_12f48c:
    // 0x12f48c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x12f48cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f490: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x12f490u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x12f494: 0x24b10030  addiu       $s1, $a1, 0x30
    ctx->pc = 0x12f494u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x12f498: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12f498u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f49c: 0x24050052  addiu       $a1, $zero, 0x52
    ctx->pc = 0x12f49cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
    // 0x12f4a0: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12F4A0u;
    SET_GPR_U32(ctx, 31, 0x12F4A8u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12F4A0u, 0x12F4A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F4A8u;
label_12f4a8:
    // 0x12f4a8: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x12f4a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x12f4ac: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x12f4acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f4b0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x12f4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12f4b4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x12f4b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f4b8: 0xc116754  jal         func_459D50
    ctx->pc = 0x12F4B8u;
    SET_GPR_U32(ctx, 31, 0x12F4C0u);
    ctx->pc = 0x459D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x459D50u, 0x12F4B8u, 0x12F4C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F4C0u;
label_12f4c0:
    // 0x12f4c0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x12f4c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f4c4: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x12f4c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x12f4c8: 0x24b3003c  addiu       $s3, $a1, 0x3C
    ctx->pc = 0x12f4c8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 5), 60));
    // 0x12f4cc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x12f4ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f4d0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x12f4d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f4d4: 0xc04bae0  jal         func_12EB80
    ctx->pc = 0x12F4D4u;
    SET_GPR_U32(ctx, 31, 0x12F4DCu);
    ctx->pc = 0x12EB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EB80u, 0x12F4D4u, 0x12F4DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F4DCu;
label_12f4dc:
    // 0x12f4dc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x12f4dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f4e0: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x12f4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x12f4e4: 0x24510030  addiu       $s1, $v0, 0x30
    ctx->pc = 0x12f4e4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x12f4e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12f4e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f4ec: 0x24050053  addiu       $a1, $zero, 0x53
    ctx->pc = 0x12f4ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
    // 0x12f4f0: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12F4F0u;
    SET_GPR_U32(ctx, 31, 0x12F4F8u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12F4F0u, 0x12F4F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F4F8u;
label_12f4f8:
    // 0x12f4f8: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x12f4f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x12f4fc: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x12f4fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f500: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x12f500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12f504: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x12f504u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f508: 0xc116754  jal         func_459D50
    ctx->pc = 0x12F508u;
    SET_GPR_U32(ctx, 31, 0x12F510u);
    ctx->pc = 0x459D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x459D50u, 0x12F508u, 0x12F510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F510u;
label_12f510:
    // 0x12f510: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x12f510u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f514: 0x8fb30060  lw          $s3, 0x60($sp)
    ctx->pc = 0x12f514u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x12f518: 0x2662003c  addiu       $v0, $s3, 0x3C
    ctx->pc = 0x12f518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 60));
    // 0x12f51c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12f51cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f520: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x12f520u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f524: 0xc04bae0  jal         func_12EB80
    ctx->pc = 0x12F524u;
    SET_GPR_U32(ctx, 31, 0x12F52Cu);
    ctx->pc = 0x12EB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EB80u, 0x12F524u, 0x12F52Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F52Cu;
label_12f52c:
    // 0x12f52c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x12f52cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f530: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x12f530u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x12f534: 0x24b10030  addiu       $s1, $a1, 0x30
    ctx->pc = 0x12f534u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x12f538: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12f538u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f53c: 0x24050054  addiu       $a1, $zero, 0x54
    ctx->pc = 0x12f53cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
    // 0x12f540: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12F540u;
    SET_GPR_U32(ctx, 31, 0x12F548u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12F540u, 0x12F548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F548u;
label_12f548:
    // 0x12f548: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x12f548u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x12f54c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x12f54cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f550: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x12f550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12f554: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x12f554u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f558: 0xc116754  jal         func_459D50
    ctx->pc = 0x12F558u;
    SET_GPR_U32(ctx, 31, 0x12F560u);
    ctx->pc = 0x459D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x459D50u, 0x12F558u, 0x12F560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F560u;
label_12f560:
    // 0x12f560: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12f560u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f564: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x12f564u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x12f568: 0x24b3003c  addiu       $s3, $a1, 0x3C
    ctx->pc = 0x12f568u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 5), 60));
    // 0x12f56c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x12f56cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f570: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x12f570u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12f574: 0xc04bae0  jal         func_12EB80
    ctx->pc = 0x12F574u;
    SET_GPR_U32(ctx, 31, 0x12F57Cu);
    ctx->pc = 0x12EB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EB80u, 0x12F574u, 0x12F57Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F57Cu;
label_12f57c:
    // 0x12f57c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x12f57cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f580: 0x8fb10060  lw          $s1, 0x60($sp)
    ctx->pc = 0x12f580u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x12f584: 0x26220030  addiu       $v0, $s1, 0x30
    ctx->pc = 0x12f584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x12f588: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12f588u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f58c: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x12f58cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x12f590: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12F590u;
    SET_GPR_U32(ctx, 31, 0x12F598u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12F590u, 0x12F598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F598u;
label_12f598:
    // 0x12f598: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x12f598u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f59c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x12f59cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x12f5a0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12f5a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f5a4: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x12f5a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x12f5a8: 0xc116754  jal         func_459D50
    ctx->pc = 0x12F5A8u;
    SET_GPR_U32(ctx, 31, 0x12F5B0u);
    ctx->pc = 0x459D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x459D50u, 0x12F5A8u, 0x12F5B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F5B0u;
label_12f5b0:
    // 0x12f5b0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x12f5b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f5b4: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x12f5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x12f5b8: 0x2453003c  addiu       $s3, $v0, 0x3C
    ctx->pc = 0x12f5b8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 60));
    // 0x12f5bc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x12f5bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f5c0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x12f5c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12f5c4: 0xc04bae0  jal         func_12EB80
    ctx->pc = 0x12F5C4u;
    SET_GPR_U32(ctx, 31, 0x12F5CCu);
    ctx->pc = 0x12EB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EB80u, 0x12F5C4u, 0x12F5CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F5CCu;
label_12f5cc:
    // 0x12f5cc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x12f5ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f5d0: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x12f5d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x12f5d4: 0x24b10030  addiu       $s1, $a1, 0x30
    ctx->pc = 0x12f5d4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x12f5d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12f5d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f5dc: 0x24050019  addiu       $a1, $zero, 0x19
    ctx->pc = 0x12f5dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x12f5e0: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12F5E0u;
    SET_GPR_U32(ctx, 31, 0x12F5E8u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12F5E0u, 0x12F5E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F5E8u;
label_12f5e8:
    // 0x12f5e8: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x12f5e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x12f5ec: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x12f5ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f5f0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x12f5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12f5f4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x12f5f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f5f8: 0xc116754  jal         func_459D50
    ctx->pc = 0x12F5F8u;
    SET_GPR_U32(ctx, 31, 0x12F600u);
    ctx->pc = 0x459D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x459D50u, 0x12F5F8u, 0x12F600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F600u;
label_12f600:
    // 0x12f600: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12f600u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f604: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x12f604u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x12f608: 0x24b3003c  addiu       $s3, $a1, 0x3C
    ctx->pc = 0x12f608u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 5), 60));
    // 0x12f60c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x12f60cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f610: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x12f610u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12f614: 0xc04bae0  jal         func_12EB80
    ctx->pc = 0x12F614u;
    SET_GPR_U32(ctx, 31, 0x12F61Cu);
    ctx->pc = 0x12EB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EB80u, 0x12F614u, 0x12F61Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F61Cu;
label_12f61c:
    // 0x12f61c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x12f61cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f620: 0x8fb10060  lw          $s1, 0x60($sp)
    ctx->pc = 0x12f620u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x12f624: 0x26220030  addiu       $v0, $s1, 0x30
    ctx->pc = 0x12f624u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x12f628: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12f628u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f62c: 0x2405001a  addiu       $a1, $zero, 0x1A
    ctx->pc = 0x12f62cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x12f630: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12F630u;
    SET_GPR_U32(ctx, 31, 0x12F638u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12F630u, 0x12F638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F638u;
label_12f638:
    // 0x12f638: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x12f638u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f63c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x12f63cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x12f640: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12f640u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f644: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x12f644u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x12f648: 0xc116754  jal         func_459D50
    ctx->pc = 0x12F648u;
    SET_GPR_U32(ctx, 31, 0x12F650u);
    ctx->pc = 0x459D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x459D50u, 0x12F648u, 0x12F650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F650u;
label_12f650:
    // 0x12f650: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x12f650u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f654: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x12f654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x12f658: 0x2452003c  addiu       $s2, $v0, 0x3C
    ctx->pc = 0x12f658u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 60));
    // 0x12f65c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x12f65cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f660: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x12f660u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12f664: 0xc04bae0  jal         func_12EB80
    ctx->pc = 0x12F664u;
    SET_GPR_U32(ctx, 31, 0x12F66Cu);
    ctx->pc = 0x12EB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EB80u, 0x12F664u, 0x12F66Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F66Cu;
label_12f66c:
    // 0x12f66c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x12f66cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f670: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x12f670u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x12f674: 0x24a20030  addiu       $v0, $a1, 0x30
    ctx->pc = 0x12f674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x12f678: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12f678u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f67c: 0x2405001b  addiu       $a1, $zero, 0x1B
    ctx->pc = 0x12f67cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x12f680: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12F680u;
    SET_GPR_U32(ctx, 31, 0x12F688u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12F680u, 0x12F688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F688u;
label_12f688:
    // 0x12f688: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x12f688u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x12f68c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x12f68cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12f690: 0xc116754  jal         func_459D50
    ctx->pc = 0x12F690u;
    SET_GPR_U32(ctx, 31, 0x12F698u);
    ctx->pc = 0x459D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x459D50u, 0x12F690u, 0x12F698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F698u;
label_12f698:
    // 0x12f698: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x12f698u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x12f69c: 0x24b3003c  addiu       $s3, $a1, 0x3C
    ctx->pc = 0x12f69cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 5), 60));
    // 0x12f6a0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x12f6a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f6a4: 0x24120002  addiu       $s2, $zero, 0x2
    ctx->pc = 0x12f6a4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12f6a8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x12f6a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f6ac: 0xc04bae0  jal         func_12EB80
    ctx->pc = 0x12F6ACu;
    SET_GPR_U32(ctx, 31, 0x12F6B4u);
    ctx->pc = 0x12EB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EB80u, 0x12F6ACu, 0x12F6B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F6B4u;
label_12f6b4:
    // 0x12f6b4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x12f6b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f6b8: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x12f6b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x12f6bc: 0x24a50030  addiu       $a1, $a1, 0x30
    ctx->pc = 0x12f6bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x12f6c0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x12f6c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f6c4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x12f6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x12f6c8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x12f6c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f6cc: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12F6CCu;
    SET_GPR_U32(ctx, 31, 0x12F6D4u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12F6CCu, 0x12F6D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F6D4u;
label_12f6d4:
    // 0x12f6d4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x12f6d4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f6d8: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x12f6d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x12f6dc: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x12f6dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f6e0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x12f6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x12f6e4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x12f6e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f6e8: 0xc116754  jal         func_459D50
    ctx->pc = 0x12F6E8u;
    SET_GPR_U32(ctx, 31, 0x12F6F0u);
    ctx->pc = 0x459D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x459D50u, 0x12F6E8u, 0x12F6F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F6F0u;
label_12f6f0:
    // 0x12f6f0: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x12f6f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x12f6f4: 0x24b2003c  addiu       $s2, $a1, 0x3C
    ctx->pc = 0x12f6f4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), 60));
    // 0x12f6f8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x12f6f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f6fc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x12f6fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12f700: 0xc04bae0  jal         func_12EB80
    ctx->pc = 0x12F700u;
    SET_GPR_U32(ctx, 31, 0x12F708u);
    ctx->pc = 0x12EB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EB80u, 0x12F700u, 0x12F708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F708u;
label_12f708:
    // 0x12f708: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x12f708u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f70c: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x12f70cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x12f710: 0x24a20030  addiu       $v0, $a1, 0x30
    ctx->pc = 0x12f710u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x12f714: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12f714u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f718: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x12f718u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x12f71c: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12F71Cu;
    SET_GPR_U32(ctx, 31, 0x12F724u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12F71Cu, 0x12F724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F724u;
label_12f724:
    // 0x12f724: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x12f724u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f728: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x12f728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x12f72c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12f72cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f730: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x12f730u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x12f734: 0xc116754  jal         func_459D50
    ctx->pc = 0x12F734u;
    SET_GPR_U32(ctx, 31, 0x12F73Cu);
    ctx->pc = 0x459D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x459D50u, 0x12F734u, 0x12F73Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F73Cu;
label_12f73c:
    // 0x12f73c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12f73cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f740: 0x8fb30060  lw          $s3, 0x60($sp)
    ctx->pc = 0x12f740u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x12f744: 0x2672003c  addiu       $s2, $s3, 0x3C
    ctx->pc = 0x12f744u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 60));
    // 0x12f748: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x12f748u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f74c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x12f74cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12f750: 0xc04bae0  jal         func_12EB80
    ctx->pc = 0x12F750u;
    SET_GPR_U32(ctx, 31, 0x12F758u);
    ctx->pc = 0x12EB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EB80u, 0x12F750u, 0x12F758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F758u;
label_12f758:
    // 0x12f758: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x12f758u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f75c: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x12f75cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x12f760: 0x24430030  addiu       $v1, $v0, 0x30
    ctx->pc = 0x12f760u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x12f764: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x12f764u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f768: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x12f768u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x12f76c: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12F76Cu;
    SET_GPR_U32(ctx, 31, 0x12F774u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12F76Cu, 0x12F774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F774u;
label_12f774:
    // 0x12f774: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x12f774u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x12f778: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x12f778u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12f77c: 0xc116754  jal         func_459D50
    ctx->pc = 0x12F77Cu;
    SET_GPR_U32(ctx, 31, 0x12F784u);
    ctx->pc = 0x459D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x459D50u, 0x12F77Cu, 0x12F784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F784u;
label_12f784:
    // 0x12f784: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x12f784u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f788: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x12f788u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x12f78c: 0x24b2003c  addiu       $s2, $a1, 0x3C
    ctx->pc = 0x12f78cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), 60));
    // 0x12f790: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x12f790u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f794: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x12f794u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12f798: 0xc04bae0  jal         func_12EB80
    ctx->pc = 0x12F798u;
    SET_GPR_U32(ctx, 31, 0x12F7A0u);
    ctx->pc = 0x12EB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EB80u, 0x12F798u, 0x12F7A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F7A0u;
label_12f7a0:
    // 0x12f7a0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x12f7a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f7a4: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x12f7a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x12f7a8: 0x24a50030  addiu       $a1, $a1, 0x30
    ctx->pc = 0x12f7a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x12f7ac: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x12f7acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f7b0: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x12f7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x12f7b4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x12f7b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f7b8: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12F7B8u;
    SET_GPR_U32(ctx, 31, 0x12F7C0u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12F7B8u, 0x12F7C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F7C0u;
label_12f7c0:
    // 0x12f7c0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x12f7c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x12f7c4: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x12f7c4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12f7c8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x12f7c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f7cc: 0xc116754  jal         func_459D50
    ctx->pc = 0x12F7CCu;
    SET_GPR_U32(ctx, 31, 0x12F7D4u);
    ctx->pc = 0x459D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x459D50u, 0x12F7CCu, 0x12F7D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F7D4u;
label_12f7d4:
    // 0x12f7d4: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x12f7d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x12f7d8: 0x24b2003c  addiu       $s2, $a1, 0x3C
    ctx->pc = 0x12f7d8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), 60));
    // 0x12f7dc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x12f7dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f7e0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x12f7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12f7e4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x12f7e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f7e8: 0xc04bae0  jal         func_12EB80
    ctx->pc = 0x12F7E8u;
    SET_GPR_U32(ctx, 31, 0x12F7F0u);
    ctx->pc = 0x12EB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EB80u, 0x12F7E8u, 0x12F7F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F7F0u;
label_12f7f0:
    // 0x12f7f0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x12f7f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f7f4: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x12f7f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x12f7f8: 0x24a20030  addiu       $v0, $a1, 0x30
    ctx->pc = 0x12f7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x12f7fc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12f7fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f800: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x12f800u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x12f804: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12F804u;
    SET_GPR_U32(ctx, 31, 0x12F80Cu);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12F804u, 0x12F80Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F80Cu;
label_12f80c:
    // 0x12f80c: 0x8e310000  lw          $s1, 0x0($s1)
    ctx->pc = 0x12f80cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x12f810: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12f810u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f814: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x12f814u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12f818: 0xc116754  jal         func_459D50
    ctx->pc = 0x12F818u;
    SET_GPR_U32(ctx, 31, 0x12F820u);
    ctx->pc = 0x459D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x459D50u, 0x12F818u, 0x12F820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F820u;
label_12f820:
    // 0x12f820: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12f820u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f824: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x12f824u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x12f828: 0x24b2003c  addiu       $s2, $a1, 0x3C
    ctx->pc = 0x12f828u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), 60));
    // 0x12f82c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x12f82cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f830: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x12f830u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12f834: 0xc04bae0  jal         func_12EB80
    ctx->pc = 0x12F834u;
    SET_GPR_U32(ctx, 31, 0x12F83Cu);
    ctx->pc = 0x12EB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EB80u, 0x12F834u, 0x12F83Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F83Cu;
label_12f83c:
    // 0x12f83c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x12f83cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f840: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x12f840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x12f844: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x12f844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x12f848: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12f848u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f84c: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x12f84cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x12f850: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12F850u;
    SET_GPR_U32(ctx, 31, 0x12F858u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12F850u, 0x12F858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F858u;
label_12f858:
    // 0x12f858: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x12f858u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x12f85c: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x12f85cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12f860: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x12f860u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f864: 0xc116754  jal         func_459D50
    ctx->pc = 0x12F864u;
    SET_GPR_U32(ctx, 31, 0x12F86Cu);
    ctx->pc = 0x459D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x459D50u, 0x12F864u, 0x12F86Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F86Cu;
label_12f86c:
    // 0x12f86c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12f86cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f870: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x12f870u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x12f874: 0x24b2003c  addiu       $s2, $a1, 0x3C
    ctx->pc = 0x12f874u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), 60));
    // 0x12f878: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x12f878u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f87c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x12f87cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12f880: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x12f880u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f884: 0xc04bae0  jal         func_12EB80
    ctx->pc = 0x12F884u;
    SET_GPR_U32(ctx, 31, 0x12F88Cu);
    ctx->pc = 0x12EB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EB80u, 0x12F884u, 0x12F88Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F88Cu;
label_12f88c:
    // 0x12f88c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x12f88cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f890: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x12f890u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x12f894: 0x24a20030  addiu       $v0, $a1, 0x30
    ctx->pc = 0x12f894u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x12f898: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12f898u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f89c: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x12f89cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x12f8a0: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12F8A0u;
    SET_GPR_U32(ctx, 31, 0x12F8A8u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12F8A0u, 0x12F8A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F8A8u;
label_12f8a8:
    // 0x12f8a8: 0x8e320000  lw          $s2, 0x0($s1)
    ctx->pc = 0x12f8a8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x12f8ac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x12f8acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f8b0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x12f8b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12f8b4: 0xc116754  jal         func_459D50
    ctx->pc = 0x12F8B4u;
    SET_GPR_U32(ctx, 31, 0x12F8BCu);
    ctx->pc = 0x459D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x459D50u, 0x12F8B4u, 0x12F8BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F8BCu;
label_12f8bc:
    // 0x12f8bc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12f8bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f8c0: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x12f8c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x12f8c4: 0x24b1003c  addiu       $s1, $a1, 0x3C
    ctx->pc = 0x12f8c4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), 60));
    // 0x12f8c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12f8c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f8cc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x12f8ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12f8d0: 0xc04bae0  jal         func_12EB80
    ctx->pc = 0x12F8D0u;
    SET_GPR_U32(ctx, 31, 0x12F8D8u);
    ctx->pc = 0x12EB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EB80u, 0x12F8D0u, 0x12F8D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F8D8u;
label_12f8d8:
    // 0x12f8d8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x12f8d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f8dc: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x12f8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x12f8e0: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x12f8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x12f8e4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12f8e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f8e8: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x12f8e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x12f8ec: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12F8ECu;
    SET_GPR_U32(ctx, 31, 0x12F8F4u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12F8ECu, 0x12F8F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F8F4u;
label_12f8f4:
    // 0x12f8f4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x12f8f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f8f8: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x12f8f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x12f8fc: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x12f8fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x12f900: 0xc116754  jal         func_459D50
    ctx->pc = 0x12F900u;
    SET_GPR_U32(ctx, 31, 0x12F908u);
    ctx->pc = 0x459D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x459D50u, 0x12F900u, 0x12F908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F908u;
label_12f908:
    // 0x12f908: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x12f908u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f90c: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x12f90cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x12f910: 0x2452003c  addiu       $s2, $v0, 0x3C
    ctx->pc = 0x12f910u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 60));
    // 0x12f914: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x12f914u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f918: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x12f918u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12f91c: 0xc04bae0  jal         func_12EB80
    ctx->pc = 0x12F91Cu;
    SET_GPR_U32(ctx, 31, 0x12F924u);
    ctx->pc = 0x12EB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EB80u, 0x12F91Cu, 0x12F924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F924u;
label_12f924:
    // 0x12f924: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x12f924u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f928: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x12f928u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x12f92c: 0x24a20030  addiu       $v0, $a1, 0x30
    ctx->pc = 0x12f92cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x12f930: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12f930u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f934: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x12f934u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x12f938: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12F938u;
    SET_GPR_U32(ctx, 31, 0x12F940u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12F938u, 0x12F940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F940u;
label_12f940:
    // 0x12f940: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x12f940u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x12f944: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x12f944u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12f948: 0xc116754  jal         func_459D50
    ctx->pc = 0x12F948u;
    SET_GPR_U32(ctx, 31, 0x12F950u);
    ctx->pc = 0x459D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x459D50u, 0x12F948u, 0x12F950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F950u;
label_12f950:
    // 0x12f950: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x12f950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x12f954: 0x2444003c  addiu       $a0, $v0, 0x3C
    ctx->pc = 0x12f954u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 60));
    // 0x12f958: 0x24130002  addiu       $s3, $zero, 0x2
    ctx->pc = 0x12f958u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12f95c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x12f95cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f960: 0xc04bae0  jal         func_12EB80
    ctx->pc = 0x12F960u;
    SET_GPR_U32(ctx, 31, 0x12F968u);
    ctx->pc = 0x12EB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EB80u, 0x12F960u, 0x12F968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F968u;
label_12f968:
    // 0x12f968: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x12f968u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f96c: 0x8fb10060  lw          $s1, 0x60($sp)
    ctx->pc = 0x12f96cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x12f970: 0x26340030  addiu       $s4, $s1, 0x30
    ctx->pc = 0x12f970u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x12f974: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x12f974u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f978: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x12f978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x12f97c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x12f97cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f980: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12F980u;
    SET_GPR_U32(ctx, 31, 0x12F988u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12F980u, 0x12F988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F988u;
label_12f988:
    // 0x12f988: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x12f988u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f98c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x12f98cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x12f990: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12f990u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f994: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x12f994u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x12f998: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x12f998u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f99c: 0xc116754  jal         func_459D50
    ctx->pc = 0x12F99Cu;
    SET_GPR_U32(ctx, 31, 0x12F9A4u);
    ctx->pc = 0x459D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x459D50u, 0x12F99Cu, 0x12F9A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F9A4u;
label_12f9a4:
    // 0x12f9a4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x12f9a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f9a8: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x12f9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x12f9ac: 0x2453003c  addiu       $s3, $v0, 0x3C
    ctx->pc = 0x12f9acu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 60));
    // 0x12f9b0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x12f9b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f9b4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x12f9b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12f9b8: 0xc04bae0  jal         func_12EB80
    ctx->pc = 0x12F9B8u;
    SET_GPR_U32(ctx, 31, 0x12F9C0u);
    ctx->pc = 0x12EB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EB80u, 0x12F9B8u, 0x12F9C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F9C0u;
label_12f9c0:
    // 0x12f9c0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x12f9c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f9c4: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x12f9c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x12f9c8: 0x24b10030  addiu       $s1, $a1, 0x30
    ctx->pc = 0x12f9c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x12f9cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12f9ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f9d0: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x12f9d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x12f9d4: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12F9D4u;
    SET_GPR_U32(ctx, 31, 0x12F9DCu);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12F9D4u, 0x12F9DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F9DCu;
label_12f9dc:
    // 0x12f9dc: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x12f9dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x12f9e0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x12f9e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f9e4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x12f9e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12f9e8: 0xc116754  jal         func_459D50
    ctx->pc = 0x12F9E8u;
    SET_GPR_U32(ctx, 31, 0x12F9F0u);
    ctx->pc = 0x459D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x459D50u, 0x12F9E8u, 0x12F9F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F9F0u;
label_12f9f0:
    // 0x12f9f0: 0x8fb10060  lw          $s1, 0x60($sp)
    ctx->pc = 0x12f9f0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x12f9f4: 0x2624003c  addiu       $a0, $s1, 0x3C
    ctx->pc = 0x12f9f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 60));
    // 0x12f9f8: 0x24130002  addiu       $s3, $zero, 0x2
    ctx->pc = 0x12f9f8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12f9fc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x12f9fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fa00: 0xc04bae0  jal         func_12EB80
    ctx->pc = 0x12FA00u;
    SET_GPR_U32(ctx, 31, 0x12FA08u);
    ctx->pc = 0x12EB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EB80u, 0x12FA00u, 0x12FA08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FA08u;
label_12fa08:
    // 0x12fa08: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x12fa08u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fa0c: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x12fa0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x12fa10: 0x24510030  addiu       $s1, $v0, 0x30
    ctx->pc = 0x12fa10u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x12fa14: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12fa14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fa18: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x12fa18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x12fa1c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x12fa1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fa20: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12FA20u;
    SET_GPR_U32(ctx, 31, 0x12FA28u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12FA20u, 0x12FA28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FA28u;
label_12fa28:
    // 0x12fa28: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x12fa28u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fa2c: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x12fa2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x12fa30: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x12fa30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fa34: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x12fa34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x12fa38: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x12fa38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fa3c: 0xc116754  jal         func_459D50
    ctx->pc = 0x12FA3Cu;
    SET_GPR_U32(ctx, 31, 0x12FA44u);
    ctx->pc = 0x459D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x459D50u, 0x12FA3Cu, 0x12FA44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FA44u;
label_12fa44:
    // 0x12fa44: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x12fa44u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fa48: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x12fa48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x12fa4c: 0x24b3003c  addiu       $s3, $a1, 0x3C
    ctx->pc = 0x12fa4cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 5), 60));
    // 0x12fa50: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x12fa50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fa54: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x12fa54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12fa58: 0xc04bae0  jal         func_12EB80
    ctx->pc = 0x12FA58u;
    SET_GPR_U32(ctx, 31, 0x12FA60u);
    ctx->pc = 0x12EB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EB80u, 0x12FA58u, 0x12FA60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FA60u;
label_12fa60:
    // 0x12fa60: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x12fa60u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fa64: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x12fa64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x12fa68: 0x24b20030  addiu       $s2, $a1, 0x30
    ctx->pc = 0x12fa68u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x12fa6c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x12fa6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fa70: 0x24020013  addiu       $v0, $zero, 0x13
    ctx->pc = 0x12fa70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x12fa74: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x12fa74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fa78: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12FA78u;
    SET_GPR_U32(ctx, 31, 0x12FA80u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12FA78u, 0x12FA80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FA80u;
label_12fa80:
    // 0x12fa80: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x12fa80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fa84: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x12fa84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x12fa88: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12fa88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fa8c: 0x8cb10000  lw          $s1, 0x0($a1)
    ctx->pc = 0x12fa8cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x12fa90: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x12fa90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fa94: 0xc116754  jal         func_459D50
    ctx->pc = 0x12FA94u;
    SET_GPR_U32(ctx, 31, 0x12FA9Cu);
    ctx->pc = 0x459D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x459D50u, 0x12FA94u, 0x12FA9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FA9Cu;
label_12fa9c:
    // 0x12fa9c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12fa9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12faa0: 0x8fb20060  lw          $s2, 0x60($sp)
    ctx->pc = 0x12faa0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x12faa4: 0x2645003c  addiu       $a1, $s2, 0x3C
    ctx->pc = 0x12faa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 60));
    // 0x12faa8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x12faa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12faac: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x12faacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12fab0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x12fab0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fab4: 0xc04bae0  jal         func_12EB80
    ctx->pc = 0x12FAB4u;
    SET_GPR_U32(ctx, 31, 0x12FABCu);
    ctx->pc = 0x12EB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EB80u, 0x12FAB4u, 0x12FABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FABCu;
label_12fabc:
    // 0x12fabc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x12fabcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fac0: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x12fac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x12fac4: 0x24520030  addiu       $s2, $v0, 0x30
    ctx->pc = 0x12fac4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x12fac8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x12fac8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12facc: 0x24050047  addiu       $a1, $zero, 0x47
    ctx->pc = 0x12faccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x12fad0: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12FAD0u;
    SET_GPR_U32(ctx, 31, 0x12FAD8u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12FAD0u, 0x12FAD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FAD8u;
label_12fad8:
    // 0x12fad8: 0x8e310000  lw          $s1, 0x0($s1)
    ctx->pc = 0x12fad8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x12fadc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12fadcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fae0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x12fae0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12fae4: 0xc116754  jal         func_459D50
    ctx->pc = 0x12FAE4u;
    SET_GPR_U32(ctx, 31, 0x12FAECu);
    ctx->pc = 0x459D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x459D50u, 0x12FAE4u, 0x12FAECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FAECu;
label_12faec:
    // 0x12faec: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x12faecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12faf0: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x12faf0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x12faf4: 0x24a2003c  addiu       $v0, $a1, 0x3C
    ctx->pc = 0x12faf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 60));
    // 0x12faf8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12faf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fafc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x12fafcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12fb00: 0xc04bae0  jal         func_12EB80
    ctx->pc = 0x12FB00u;
    SET_GPR_U32(ctx, 31, 0x12FB08u);
    ctx->pc = 0x12EB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EB80u, 0x12FB00u, 0x12FB08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FB08u;
label_12fb08:
    // 0x12fb08: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x12fb08u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fb0c: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x12fb0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x12fb10: 0x24530030  addiu       $s3, $v0, 0x30
    ctx->pc = 0x12fb10u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x12fb14: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x12fb14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fb18: 0x24020048  addiu       $v0, $zero, 0x48
    ctx->pc = 0x12fb18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x12fb1c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x12fb1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fb20: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12FB20u;
    SET_GPR_U32(ctx, 31, 0x12FB28u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12FB20u, 0x12FB28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FB28u;
label_12fb28:
    // 0x12fb28: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x12fb28u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fb2c: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x12fb2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x12fb30: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x12fb30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fb34: 0x8e510000  lw          $s1, 0x0($s2)
    ctx->pc = 0x12fb34u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x12fb38: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x12fb38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fb3c: 0xc116754  jal         func_459D50
    ctx->pc = 0x12FB3Cu;
    SET_GPR_U32(ctx, 31, 0x12FB44u);
    ctx->pc = 0x459D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x459D50u, 0x12FB3Cu, 0x12FB44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FB44u;
label_12fb44:
    // 0x12fb44: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x12fb44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fb48: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x12fb48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x12fb4c: 0x2445003c  addiu       $a1, $v0, 0x3C
    ctx->pc = 0x12fb4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 60));
    // 0x12fb50: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x12fb50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fb54: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x12fb54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12fb58: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x12fb58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fb5c: 0xc04bae0  jal         func_12EB80
    ctx->pc = 0x12FB5Cu;
    SET_GPR_U32(ctx, 31, 0x12FB64u);
    ctx->pc = 0x12EB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EB80u, 0x12FB5Cu, 0x12FB64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FB64u;
label_12fb64:
    // 0x12fb64: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x12fb64u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fb68: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x12fb68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x12fb6c: 0x24b30030  addiu       $s3, $a1, 0x30
    ctx->pc = 0x12fb6cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x12fb70: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x12fb70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fb74: 0x2412001e  addiu       $s2, $zero, 0x1E
    ctx->pc = 0x12fb74u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x12fb78: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x12fb78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fb7c: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12FB7Cu;
    SET_GPR_U32(ctx, 31, 0x12FB84u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12FB7Cu, 0x12FB84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FB84u;
label_12fb84:
    // 0x12fb84: 0x8e310000  lw          $s1, 0x0($s1)
    ctx->pc = 0x12fb84u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x12fb88: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12fb88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fb8c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x12fb8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12fb90: 0xc116754  jal         func_459D50
    ctx->pc = 0x12FB90u;
    SET_GPR_U32(ctx, 31, 0x12FB98u);
    ctx->pc = 0x459D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x459D50u, 0x12FB90u, 0x12FB98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FB98u;
label_12fb98:
    // 0x12fb98: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x12fb98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x12fb9c: 0x24a2003c  addiu       $v0, $a1, 0x3C
    ctx->pc = 0x12fb9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 60));
    // 0x12fba0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12fba0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fba4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x12fba4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12fba8: 0xc04bae0  jal         func_12EB80
    ctx->pc = 0x12FBA8u;
    SET_GPR_U32(ctx, 31, 0x12FBB0u);
    ctx->pc = 0x12EB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EB80u, 0x12FBA8u, 0x12FBB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FBB0u;
label_12fbb0:
    // 0x12fbb0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x12fbb0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fbb4: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x12fbb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x12fbb8: 0x24520030  addiu       $s2, $v0, 0x30
    ctx->pc = 0x12fbb8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x12fbbc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x12fbbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fbc0: 0x2405004c  addiu       $a1, $zero, 0x4C
    ctx->pc = 0x12fbc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x12fbc4: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12FBC4u;
    SET_GPR_U32(ctx, 31, 0x12FBCCu);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12FBC4u, 0x12FBCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FBCCu;
label_12fbcc:
    // 0x12fbcc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x12fbccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fbd0: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x12fbd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x12fbd4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x12fbd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fbd8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x12fbd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x12fbdc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x12fbdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fbe0: 0xc116754  jal         func_459D50
    ctx->pc = 0x12FBE0u;
    SET_GPR_U32(ctx, 31, 0x12FBE8u);
    ctx->pc = 0x459D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x459D50u, 0x12FBE0u, 0x12FBE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FBE8u;
label_12fbe8:
    // 0x12fbe8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x12fbe8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fbec: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x12fbecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x12fbf0: 0x2444003c  addiu       $a0, $v0, 0x3C
    ctx->pc = 0x12fbf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 60));
    // 0x12fbf4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x12fbf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12fbf8: 0xc04bae0  jal         func_12EB80
    ctx->pc = 0x12FBF8u;
    SET_GPR_U32(ctx, 31, 0x12FC00u);
    ctx->pc = 0x12EB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EB80u, 0x12FBF8u, 0x12FC00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FC00u;
label_12fc00:
    // 0x12fc00: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x12fc00u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fc04: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x12fc04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x12fc08: 0x24b20030  addiu       $s2, $a1, 0x30
    ctx->pc = 0x12fc08u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x12fc0c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x12fc0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fc10: 0x2411004d  addiu       $s1, $zero, 0x4D
    ctx->pc = 0x12fc10u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x12fc14: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x12fc14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fc18: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12FC18u;
    SET_GPR_U32(ctx, 31, 0x12FC20u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12FC18u, 0x12FC20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FC20u;
label_12fc20:
    // 0x12fc20: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x12fc20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x12fc24: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x12fc24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fc28: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x12fc28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12fc2c: 0xc116754  jal         func_459D50
    ctx->pc = 0x12FC2Cu;
    SET_GPR_U32(ctx, 31, 0x12FC34u);
    ctx->pc = 0x459D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x459D50u, 0x12FC2Cu, 0x12FC34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FC34u;
label_12fc34:
    // 0x12fc34: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x12fc34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x12fc38: 0x24a5003c  addiu       $a1, $a1, 0x3C
    ctx->pc = 0x12fc38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 60));
    // 0x12fc3c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x12fc3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fc40: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x12fc40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12fc44: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x12fc44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fc48: 0xc04bae0  jal         func_12EB80
    ctx->pc = 0x12FC48u;
    SET_GPR_U32(ctx, 31, 0x12FC50u);
    ctx->pc = 0x12EB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EB80u, 0x12FC48u, 0x12FC50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FC50u;
label_12fc50:
    // 0x12fc50: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x12fc50u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fc54: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x12fc54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x12fc58: 0x24b20030  addiu       $s2, $a1, 0x30
    ctx->pc = 0x12fc58u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x12fc5c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x12fc5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fc60: 0x2405004e  addiu       $a1, $zero, 0x4E
    ctx->pc = 0x12fc60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x12fc64: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12FC64u;
    SET_GPR_U32(ctx, 31, 0x12FC6Cu);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12FC64u, 0x12FC6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FC6Cu;
label_12fc6c:
    // 0x12fc6c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x12fc6cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fc70: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x12fc70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x12fc74: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x12fc74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fc78: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x12fc78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x12fc7c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x12fc7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fc80: 0xc116754  jal         func_459D50
    ctx->pc = 0x12FC80u;
    SET_GPR_U32(ctx, 31, 0x12FC88u);
    ctx->pc = 0x459D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x459D50u, 0x12FC80u, 0x12FC88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FC88u;
label_12fc88:
    // 0x12fc88: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x12fc88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fc8c: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x12fc8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x12fc90: 0x2444003c  addiu       $a0, $v0, 0x3C
    ctx->pc = 0x12fc90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 60));
    // 0x12fc94: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x12fc94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12fc98: 0xc04bae0  jal         func_12EB80
    ctx->pc = 0x12FC98u;
    SET_GPR_U32(ctx, 31, 0x12FCA0u);
    ctx->pc = 0x12EB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EB80u, 0x12FC98u, 0x12FCA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FCA0u;
label_12fca0:
    // 0x12fca0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x12fca0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fca4: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x12fca4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x12fca8: 0x24b20030  addiu       $s2, $a1, 0x30
    ctx->pc = 0x12fca8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x12fcac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x12fcacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fcb0: 0x2411004f  addiu       $s1, $zero, 0x4F
    ctx->pc = 0x12fcb0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    // 0x12fcb4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x12fcb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fcb8: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12FCB8u;
    SET_GPR_U32(ctx, 31, 0x12FCC0u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12FCB8u, 0x12FCC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FCC0u;
label_12fcc0:
    // 0x12fcc0: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x12fcc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x12fcc4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x12fcc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fcc8: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x12fcc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12fccc: 0xc116754  jal         func_459D50
    ctx->pc = 0x12FCCCu;
    SET_GPR_U32(ctx, 31, 0x12FCD4u);
    ctx->pc = 0x459D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x459D50u, 0x12FCCCu, 0x12FCD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FCD4u;
label_12fcd4:
    // 0x12fcd4: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x12fcd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x12fcd8: 0x24a5003c  addiu       $a1, $a1, 0x3C
    ctx->pc = 0x12fcd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 60));
    // 0x12fcdc: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x12fcdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fce0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x12fce0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12fce4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x12fce4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fce8: 0xc04bae0  jal         func_12EB80
    ctx->pc = 0x12FCE8u;
    SET_GPR_U32(ctx, 31, 0x12FCF0u);
    ctx->pc = 0x12EB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EB80u, 0x12FCE8u, 0x12FCF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FCF0u;
label_12fcf0:
    // 0x12fcf0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x12fcf0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fcf4: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x12fcf4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x12fcf8: 0x24b10030  addiu       $s1, $a1, 0x30
    ctx->pc = 0x12fcf8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x12fcfc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12fcfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fd00: 0x24050050  addiu       $a1, $zero, 0x50
    ctx->pc = 0x12fd00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x12fd04: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12FD04u;
    SET_GPR_U32(ctx, 31, 0x12FD0Cu);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12FD04u, 0x12FD0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FD0Cu;
label_12fd0c:
    // 0x12fd0c: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x12fd0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x12fd10: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x12fd10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fd14: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x12fd14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12fd18: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x12fd18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fd1c: 0xc116754  jal         func_459D50
    ctx->pc = 0x12FD1Cu;
    SET_GPR_U32(ctx, 31, 0x12FD24u);
    ctx->pc = 0x459D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x459D50u, 0x12FD1Cu, 0x12FD24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FD24u;
label_12fd24:
    // 0x12fd24: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12fd24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fd28: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x12fd28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x12fd2c: 0x24a2003c  addiu       $v0, $a1, 0x3C
    ctx->pc = 0x12fd2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 60));
    // 0x12fd30: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12fd30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fd34: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x12fd34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12fd38: 0xc04bae0  jal         func_12EB80
    ctx->pc = 0x12FD38u;
    SET_GPR_U32(ctx, 31, 0x12FD40u);
    ctx->pc = 0x12EB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EB80u, 0x12FD38u, 0x12FD40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FD40u;
label_12fd40:
    // 0x12fd40: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x12fd40u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fd44: 0x8fb20060  lw          $s2, 0x60($sp)
    ctx->pc = 0x12fd44u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x12fd48: 0x26510030  addiu       $s1, $s2, 0x30
    ctx->pc = 0x12fd48u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    // 0x12fd4c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12fd4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fd50: 0x24050051  addiu       $a1, $zero, 0x51
    ctx->pc = 0x12fd50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
    // 0x12fd54: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12FD54u;
    SET_GPR_U32(ctx, 31, 0x12FD5Cu);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12FD54u, 0x12FD5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FD5Cu;
label_12fd5c:
    // 0x12fd5c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x12fd5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fd60: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x12fd60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x12fd64: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12fd64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fd68: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x12fd68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x12fd6c: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x12fd6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fd70: 0xc116754  jal         func_459D50
    ctx->pc = 0x12FD70u;
    SET_GPR_U32(ctx, 31, 0x12FD78u);
    ctx->pc = 0x459D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x459D50u, 0x12FD70u, 0x12FD78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FD78u;
label_12fd78:
    // 0x12fd78: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x12fd78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fd7c: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x12fd7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x12fd80: 0x2442003c  addiu       $v0, $v0, 0x3C
    ctx->pc = 0x12fd80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 60));
    // 0x12fd84: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12fd84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fd88: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x12fd88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12fd8c: 0xc04bae0  jal         func_12EB80
    ctx->pc = 0x12FD8Cu;
    SET_GPR_U32(ctx, 31, 0x12FD94u);
    ctx->pc = 0x12EB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EB80u, 0x12FD8Cu, 0x12FD94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FD94u;
label_12fd94:
    // 0x12fd94: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x12fd94u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fd98: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x12fd98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x12fd9c: 0x24b10030  addiu       $s1, $a1, 0x30
    ctx->pc = 0x12fd9cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x12fda0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12fda0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fda4: 0x24050052  addiu       $a1, $zero, 0x52
    ctx->pc = 0x12fda4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
    // 0x12fda8: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12FDA8u;
    SET_GPR_U32(ctx, 31, 0x12FDB0u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12FDA8u, 0x12FDB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FDB0u;
label_12fdb0:
    // 0x12fdb0: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x12fdb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x12fdb4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x12fdb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fdb8: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x12fdb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12fdbc: 0xc116754  jal         func_459D50
    ctx->pc = 0x12FDBCu;
    SET_GPR_U32(ctx, 31, 0x12FDC4u);
    ctx->pc = 0x459D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x459D50u, 0x12FDBCu, 0x12FDC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FDC4u;
label_12fdc4:
    // 0x12fdc4: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x12fdc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x12fdc8: 0x24a4003c  addiu       $a0, $a1, 0x3C
    ctx->pc = 0x12fdc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 60));
    // 0x12fdcc: 0x24130002  addiu       $s3, $zero, 0x2
    ctx->pc = 0x12fdccu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12fdd0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x12fdd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fdd4: 0xc04bae0  jal         func_12EB80
    ctx->pc = 0x12FDD4u;
    SET_GPR_U32(ctx, 31, 0x12FDDCu);
    ctx->pc = 0x12EB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EB80u, 0x12FDD4u, 0x12FDDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FDDCu;
label_12fddc:
    // 0x12fddc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x12fddcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fde0: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x12fde0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x12fde4: 0x24b10030  addiu       $s1, $a1, 0x30
    ctx->pc = 0x12fde4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x12fde8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12fde8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fdec: 0x24020053  addiu       $v0, $zero, 0x53
    ctx->pc = 0x12fdecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
    // 0x12fdf0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x12fdf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fdf4: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12FDF4u;
    SET_GPR_U32(ctx, 31, 0x12FDFCu);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12FDF4u, 0x12FDFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FDFCu;
label_12fdfc:
    // 0x12fdfc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x12fdfcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fe00: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x12fe00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x12fe04: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x12fe04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fe08: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x12fe08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x12fe0c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x12fe0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fe10: 0xc116754  jal         func_459D50
    ctx->pc = 0x12FE10u;
    SET_GPR_U32(ctx, 31, 0x12FE18u);
    ctx->pc = 0x459D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x459D50u, 0x12FE10u, 0x12FE18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FE18u;
label_12fe18:
    // 0x12fe18: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12fe18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fe1c: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x12fe1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x12fe20: 0x24b3003c  addiu       $s3, $a1, 0x3C
    ctx->pc = 0x12fe20u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 5), 60));
    // 0x12fe24: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x12fe24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fe28: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x12fe28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12fe2c: 0xc04bae0  jal         func_12EB80
    ctx->pc = 0x12FE2Cu;
    SET_GPR_U32(ctx, 31, 0x12FE34u);
    ctx->pc = 0x12EB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EB80u, 0x12FE2Cu, 0x12FE34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FE34u;
label_12fe34:
    // 0x12fe34: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x12fe34u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fe38: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x12fe38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x12fe3c: 0x24b10030  addiu       $s1, $a1, 0x30
    ctx->pc = 0x12fe3cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x12fe40: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12fe40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fe44: 0x24050054  addiu       $a1, $zero, 0x54
    ctx->pc = 0x12fe44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
    // 0x12fe48: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12FE48u;
    SET_GPR_U32(ctx, 31, 0x12FE50u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12FE48u, 0x12FE50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FE50u;
label_12fe50:
    // 0x12fe50: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x12fe50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fe54: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x12fe54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x12fe58: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12fe58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fe5c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x12fe5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x12fe60: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x12fe60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fe64: 0xc116754  jal         func_459D50
    ctx->pc = 0x12FE64u;
    SET_GPR_U32(ctx, 31, 0x12FE6Cu);
    ctx->pc = 0x459D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x459D50u, 0x12FE64u, 0x12FE6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FE6Cu;
label_12fe6c:
    // 0x12fe6c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12fe6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fe70: 0x8fb10060  lw          $s1, 0x60($sp)
    ctx->pc = 0x12fe70u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x12fe74: 0x2622003c  addiu       $v0, $s1, 0x3C
    ctx->pc = 0x12fe74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 60));
    // 0x12fe78: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12fe78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fe7c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x12fe7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x12fe80: 0xc04bae0  jal         func_12EB80
    ctx->pc = 0x12FE80u;
    SET_GPR_U32(ctx, 31, 0x12FE88u);
    ctx->pc = 0x12EB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EB80u, 0x12FE80u, 0x12FE88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FE88u;
label_12fe88:
    // 0x12fe88: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x12fe88u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fe8c: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x12fe8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x12fe90: 0x24510030  addiu       $s1, $v0, 0x30
    ctx->pc = 0x12fe90u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x12fe94: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12fe94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fe98: 0x2405002f  addiu       $a1, $zero, 0x2F
    ctx->pc = 0x12fe98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x12fe9c: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12FE9Cu;
    SET_GPR_U32(ctx, 31, 0x12FEA4u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12FE9Cu, 0x12FEA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FEA4u;
label_12fea4:
    // 0x12fea4: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x12fea4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x12fea8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x12fea8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12feac: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x12feacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12feb0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x12feb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12feb4: 0xc116754  jal         func_459D50
    ctx->pc = 0x12FEB4u;
    SET_GPR_U32(ctx, 31, 0x12FEBCu);
    ctx->pc = 0x459D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x459D50u, 0x12FEB4u, 0x12FEBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FEBCu;
label_12febc:
    // 0x12febc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x12febcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fec0: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x12fec0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x12fec4: 0x24a4003c  addiu       $a0, $a1, 0x3C
    ctx->pc = 0x12fec4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 60));
    // 0x12fec8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x12fec8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x12fecc: 0xc04bae0  jal         func_12EB80
    ctx->pc = 0x12FECCu;
    SET_GPR_U32(ctx, 31, 0x12FED4u);
    ctx->pc = 0x12EB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EB80u, 0x12FECCu, 0x12FED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FED4u;
label_12fed4:
    // 0x12fed4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x12fed4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fed8: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x12fed8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x12fedc: 0x24b10030  addiu       $s1, $a1, 0x30
    ctx->pc = 0x12fedcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x12fee0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12fee0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fee4: 0x2402003a  addiu       $v0, $zero, 0x3A
    ctx->pc = 0x12fee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
    // 0x12fee8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x12fee8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12feec: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12FEECu;
    SET_GPR_U32(ctx, 31, 0x12FEF4u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12FEECu, 0x12FEF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FEF4u;
label_12fef4:
    // 0x12fef4: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x12fef4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x12fef8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x12fef8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fefc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x12fefcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12ff00: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x12ff00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ff04: 0xc116754  jal         func_459D50
    ctx->pc = 0x12FF04u;
    SET_GPR_U32(ctx, 31, 0x12FF0Cu);
    ctx->pc = 0x459D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x459D50u, 0x12FF04u, 0x12FF0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FF0Cu;
label_12ff0c:
    // 0x12ff0c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12ff0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ff10: 0x8fb10060  lw          $s1, 0x60($sp)
    ctx->pc = 0x12ff10u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x12ff14: 0x2624003c  addiu       $a0, $s1, 0x3C
    ctx->pc = 0x12ff14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 60));
    // 0x12ff18: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x12ff18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x12ff1c: 0xc04bae0  jal         func_12EB80
    ctx->pc = 0x12FF1Cu;
    SET_GPR_U32(ctx, 31, 0x12FF24u);
    ctx->pc = 0x12EB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EB80u, 0x12FF1Cu, 0x12FF24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FF24u;
label_12ff24:
    // 0x12ff24: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x12ff24u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ff28: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x12ff28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x12ff2c: 0x24510030  addiu       $s1, $v0, 0x30
    ctx->pc = 0x12ff2cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x12ff30: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12ff30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ff34: 0x2405003b  addiu       $a1, $zero, 0x3B
    ctx->pc = 0x12ff34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x12ff38: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12FF38u;
    SET_GPR_U32(ctx, 31, 0x12FF40u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12FF38u, 0x12FF40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FF40u;
label_12ff40:
    // 0x12ff40: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x12ff40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x12ff44: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x12ff44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ff48: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x12ff48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12ff4c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x12ff4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ff50: 0xc116754  jal         func_459D50
    ctx->pc = 0x12FF50u;
    SET_GPR_U32(ctx, 31, 0x12FF58u);
    ctx->pc = 0x459D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x459D50u, 0x12FF50u, 0x12FF58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FF58u;
label_12ff58:
    // 0x12ff58: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x12ff58u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ff5c: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x12ff5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x12ff60: 0x24a4003c  addiu       $a0, $a1, 0x3C
    ctx->pc = 0x12ff60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 60));
    // 0x12ff64: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x12ff64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x12ff68: 0xc04bae0  jal         func_12EB80
    ctx->pc = 0x12FF68u;
    SET_GPR_U32(ctx, 31, 0x12FF70u);
    ctx->pc = 0x12EB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EB80u, 0x12FF68u, 0x12FF70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FF70u;
label_12ff70:
    // 0x12ff70: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x12ff70u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ff74: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x12ff74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x12ff78: 0x24b20030  addiu       $s2, $a1, 0x30
    ctx->pc = 0x12ff78u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x12ff7c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x12ff7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ff80: 0x24020032  addiu       $v0, $zero, 0x32
    ctx->pc = 0x12ff80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x12ff84: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x12ff84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ff88: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12FF88u;
    SET_GPR_U32(ctx, 31, 0x12FF90u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12FF88u, 0x12FF90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FF90u;
label_12ff90:
    // 0x12ff90: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x12ff90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x12ff94: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x12ff94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ff98: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x12ff98u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12ff9c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x12ff9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ffa0: 0xc116754  jal         func_459D50
    ctx->pc = 0x12FFA0u;
    SET_GPR_U32(ctx, 31, 0x12FFA8u);
    ctx->pc = 0x459D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x459D50u, 0x12FFA0u, 0x12FFA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FFA8u;
label_12ffa8:
    // 0x12ffa8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12ffa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ffac: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x12ffacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x12ffb0: 0x24a5003c  addiu       $a1, $a1, 0x3C
    ctx->pc = 0x12ffb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 60));
    // 0x12ffb4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x12ffb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ffb8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x12ffb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x12ffbc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x12ffbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ffc0: 0xc04bae0  jal         func_12EB80
    ctx->pc = 0x12FFC0u;
    SET_GPR_U32(ctx, 31, 0x12FFC8u);
    ctx->pc = 0x12EB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EB80u, 0x12FFC0u, 0x12FFC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FFC8u;
label_12ffc8:
    // 0x12ffc8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x12ffc8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ffcc: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x12ffccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x12ffd0: 0x24b10030  addiu       $s1, $a1, 0x30
    ctx->pc = 0x12ffd0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x12ffd4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12ffd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ffd8: 0x24050033  addiu       $a1, $zero, 0x33
    ctx->pc = 0x12ffd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
    // 0x12ffdc: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12FFDCu;
    SET_GPR_U32(ctx, 31, 0x12FFE4u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12FFDCu, 0x12FFE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FFE4u;
label_12ffe4:
    // 0x12ffe4: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x12ffe4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x12ffe8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x12ffe8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ffec: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x12ffecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12fff0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x12fff0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fff4: 0xc116754  jal         func_459D50
    ctx->pc = 0x12FFF4u;
    SET_GPR_U32(ctx, 31, 0x12FFFCu);
    ctx->pc = 0x459D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x459D50u, 0x12FFF4u, 0x12FFFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FFFCu;
label_12fffc:
    // 0x12fffc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12fffcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130000: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x130000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x130004: 0x2444003c  addiu       $a0, $v0, 0x3C
    ctx->pc = 0x130004u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 60));
    // 0x130008: 0x24130003  addiu       $s3, $zero, 0x3
    ctx->pc = 0x130008u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x13000c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x13000cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130010: 0xc04bae0  jal         func_12EB80
    ctx->pc = 0x130010u;
    SET_GPR_U32(ctx, 31, 0x130018u);
    ctx->pc = 0x12EB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EB80u, 0x130010u, 0x130018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130018u;
label_130018:
    // 0x130018: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x130018u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13001c: 0x8fb10060  lw          $s1, 0x60($sp)
    ctx->pc = 0x13001cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x130020: 0x26340030  addiu       $s4, $s1, 0x30
    ctx->pc = 0x130020u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x130024: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x130024u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130028: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x130028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x13002c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x13002cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130030: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x130030u;
    SET_GPR_U32(ctx, 31, 0x130038u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x130030u, 0x130038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130038u;
label_130038:
    // 0x130038: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x130038u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13003c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x13003cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x130040: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x130040u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130044: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x130044u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x130048: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x130048u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13004c: 0xc116754  jal         func_459D50
    ctx->pc = 0x13004Cu;
    SET_GPR_U32(ctx, 31, 0x130054u);
    ctx->pc = 0x459D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x459D50u, 0x13004Cu, 0x130054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130054u;
label_130054:
    // 0x130054: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x130054u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130058: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x130058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x13005c: 0x2453003c  addiu       $s3, $v0, 0x3C
    ctx->pc = 0x13005cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 60));
    // 0x130060: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x130060u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130064: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x130064u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x130068: 0xc04bae0  jal         func_12EB80
    ctx->pc = 0x130068u;
    SET_GPR_U32(ctx, 31, 0x130070u);
    ctx->pc = 0x12EB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EB80u, 0x130068u, 0x130070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130070u;
label_130070:
    // 0x130070: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x130070u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130074: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x130074u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x130078: 0x24b10030  addiu       $s1, $a1, 0x30
    ctx->pc = 0x130078u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x13007c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13007cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130080: 0x24050031  addiu       $a1, $zero, 0x31
    ctx->pc = 0x130080u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    // 0x130084: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x130084u;
    SET_GPR_U32(ctx, 31, 0x13008Cu);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x130084u, 0x13008Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13008Cu;
label_13008c:
    // 0x13008c: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x13008cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x130090: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x130090u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130094: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x130094u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x130098: 0xc116754  jal         func_459D50
    ctx->pc = 0x130098u;
    SET_GPR_U32(ctx, 31, 0x1300A0u);
    ctx->pc = 0x459D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x459D50u, 0x130098u, 0x1300A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1300A0u;
label_1300a0:
    // 0x1300a0: 0x8fb10060  lw          $s1, 0x60($sp)
    ctx->pc = 0x1300a0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1300a4: 0x2624003c  addiu       $a0, $s1, 0x3C
    ctx->pc = 0x1300a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 60));
    // 0x1300a8: 0x24130003  addiu       $s3, $zero, 0x3
    ctx->pc = 0x1300a8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1300ac: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1300acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1300b0: 0xc04bae0  jal         func_12EB80
    ctx->pc = 0x1300B0u;
    SET_GPR_U32(ctx, 31, 0x1300B8u);
    ctx->pc = 0x12EB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EB80u, 0x1300B0u, 0x1300B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1300B8u;
label_1300b8:
    // 0x1300b8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1300b8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1300bc: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x1300bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1300c0: 0x24510030  addiu       $s1, $v0, 0x30
    ctx->pc = 0x1300c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x1300c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1300c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1300c8: 0x24020034  addiu       $v0, $zero, 0x34
    ctx->pc = 0x1300c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x1300cc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1300ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1300d0: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x1300D0u;
    SET_GPR_U32(ctx, 31, 0x1300D8u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x1300D0u, 0x1300D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1300D8u;
label_1300d8:
    // 0x1300d8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1300d8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1300dc: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x1300dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1300e0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1300e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1300e4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1300e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1300e8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1300e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1300ec: 0xc116754  jal         func_459D50
    ctx->pc = 0x1300ECu;
    SET_GPR_U32(ctx, 31, 0x1300F4u);
    ctx->pc = 0x459D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x459D50u, 0x1300ECu, 0x1300F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1300F4u;
label_1300f4:
    // 0x1300f4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1300f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1300f8: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x1300f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1300fc: 0x24b3003c  addiu       $s3, $a1, 0x3C
    ctx->pc = 0x1300fcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 5), 60));
    // 0x130100: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x130100u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130104: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x130104u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x130108: 0xc04bae0  jal         func_12EB80
    ctx->pc = 0x130108u;
    SET_GPR_U32(ctx, 31, 0x130110u);
    ctx->pc = 0x12EB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EB80u, 0x130108u, 0x130110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130110u;
label_130110:
    // 0x130110: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x130110u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130114: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x130114u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x130118: 0x24b20030  addiu       $s2, $a1, 0x30
    ctx->pc = 0x130118u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x13011c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x13011cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130120: 0x24020035  addiu       $v0, $zero, 0x35
    ctx->pc = 0x130120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x130124: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x130124u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130128: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x130128u;
    SET_GPR_U32(ctx, 31, 0x130130u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x130128u, 0x130130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130130u;
label_130130:
    // 0x130130: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x130130u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130134: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x130134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x130138: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x130138u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13013c: 0x8cb10000  lw          $s1, 0x0($a1)
    ctx->pc = 0x13013cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x130140: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x130140u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130144: 0xc116754  jal         func_459D50
    ctx->pc = 0x130144u;
    SET_GPR_U32(ctx, 31, 0x13014Cu);
    ctx->pc = 0x459D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x459D50u, 0x130144u, 0x13014Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13014Cu;
label_13014c:
    // 0x13014c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x13014cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130150: 0x8fb20060  lw          $s2, 0x60($sp)
    ctx->pc = 0x130150u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x130154: 0x2645003c  addiu       $a1, $s2, 0x3C
    ctx->pc = 0x130154u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 60));
    // 0x130158: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x130158u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13015c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x13015cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x130160: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x130160u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130164: 0xc04bae0  jal         func_12EB80
    ctx->pc = 0x130164u;
    SET_GPR_U32(ctx, 31, 0x13016Cu);
    ctx->pc = 0x12EB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EB80u, 0x130164u, 0x13016Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13016Cu;
label_13016c:
    // 0x13016c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x13016cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130170: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x130170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x130174: 0x24520030  addiu       $s2, $v0, 0x30
    ctx->pc = 0x130174u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x130178: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x130178u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13017c: 0x24050036  addiu       $a1, $zero, 0x36
    ctx->pc = 0x13017cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
    // 0x130180: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x130180u;
    SET_GPR_U32(ctx, 31, 0x130188u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x130180u, 0x130188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130188u;
label_130188:
    // 0x130188: 0x8e310000  lw          $s1, 0x0($s1)
    ctx->pc = 0x130188u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x13018c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13018cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130190: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x130190u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x130194: 0xc116754  jal         func_459D50
    ctx->pc = 0x130194u;
    SET_GPR_U32(ctx, 31, 0x13019Cu);
    ctx->pc = 0x459D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x459D50u, 0x130194u, 0x13019Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13019Cu;
label_13019c:
    // 0x13019c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x13019cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1301a0: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x1301a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1301a4: 0x24a2003c  addiu       $v0, $a1, 0x3C
    ctx->pc = 0x1301a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 60));
    // 0x1301a8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1301a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1301ac: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1301acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1301b0: 0xc04bae0  jal         func_12EB80
    ctx->pc = 0x1301B0u;
    SET_GPR_U32(ctx, 31, 0x1301B8u);
    ctx->pc = 0x12EB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EB80u, 0x1301B0u, 0x1301B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1301B8u;
label_1301b8:
    // 0x1301b8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1301b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1301bc: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x1301bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1301c0: 0x24530030  addiu       $s3, $v0, 0x30
    ctx->pc = 0x1301c0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x1301c4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1301c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1301c8: 0x24020037  addiu       $v0, $zero, 0x37
    ctx->pc = 0x1301c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x1301cc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1301ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1301d0: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x1301D0u;
    SET_GPR_U32(ctx, 31, 0x1301D8u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x1301D0u, 0x1301D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1301D8u;
label_1301d8:
    // 0x1301d8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1301d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1301dc: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x1301dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1301e0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1301e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1301e4: 0x8e510000  lw          $s1, 0x0($s2)
    ctx->pc = 0x1301e4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1301e8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1301e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1301ec: 0xc116754  jal         func_459D50
    ctx->pc = 0x1301ECu;
    SET_GPR_U32(ctx, 31, 0x1301F4u);
    ctx->pc = 0x459D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x459D50u, 0x1301ECu, 0x1301F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1301F4u;
label_1301f4:
    // 0x1301f4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1301f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1301f8: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x1301f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1301fc: 0x2445003c  addiu       $a1, $v0, 0x3C
    ctx->pc = 0x1301fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 60));
    // 0x130200: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x130200u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130204: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x130204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x130208: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x130208u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13020c: 0xc04bae0  jal         func_12EB80
    ctx->pc = 0x13020Cu;
    SET_GPR_U32(ctx, 31, 0x130214u);
    ctx->pc = 0x12EB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EB80u, 0x13020Cu, 0x130214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130214u;
label_130214:
    // 0x130214: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x130214u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130218: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x130218u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x13021c: 0x24b30030  addiu       $s3, $a1, 0x30
    ctx->pc = 0x13021cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x130220: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x130220u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130224: 0x24120038  addiu       $s2, $zero, 0x38
    ctx->pc = 0x130224u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x130228: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x130228u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13022c: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x13022Cu;
    SET_GPR_U32(ctx, 31, 0x130234u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x13022Cu, 0x130234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130234u;
label_130234:
    // 0x130234: 0x8e310000  lw          $s1, 0x0($s1)
    ctx->pc = 0x130234u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x130238: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x130238u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13023c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x13023cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x130240: 0xc116754  jal         func_459D50
    ctx->pc = 0x130240u;
    SET_GPR_U32(ctx, 31, 0x130248u);
    ctx->pc = 0x459D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x459D50u, 0x130240u, 0x130248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130248u;
label_130248:
    // 0x130248: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x130248u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x13024c: 0x24a2003c  addiu       $v0, $a1, 0x3C
    ctx->pc = 0x13024cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 60));
    // 0x130250: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x130250u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130254: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x130254u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x130258: 0xc04bae0  jal         func_12EB80
    ctx->pc = 0x130258u;
    SET_GPR_U32(ctx, 31, 0x130260u);
    ctx->pc = 0x12EB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EB80u, 0x130258u, 0x130260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130260u;
label_130260:
    // 0x130260: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x130260u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130264: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x130264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x130268: 0x24520030  addiu       $s2, $v0, 0x30
    ctx->pc = 0x130268u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x13026c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x13026cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130270: 0x24050039  addiu       $a1, $zero, 0x39
    ctx->pc = 0x130270u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
    // 0x130274: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x130274u;
    SET_GPR_U32(ctx, 31, 0x13027Cu);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x130274u, 0x13027Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13027Cu;
label_13027c:
    // 0x13027c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x13027cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130280: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x130280u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x130284: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x130284u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130288: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x130288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x13028c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x13028cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130290: 0xc116754  jal         func_459D50
    ctx->pc = 0x130290u;
    SET_GPR_U32(ctx, 31, 0x130298u);
    ctx->pc = 0x459D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x459D50u, 0x130290u, 0x130298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130298u;
label_130298:
    // 0x130298: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x130298u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13029c: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x13029cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1302a0: 0x2444003c  addiu       $a0, $v0, 0x3C
    ctx->pc = 0x1302a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 60));
    // 0x1302a4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1302a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1302a8: 0xc04bae0  jal         func_12EB80
    ctx->pc = 0x1302A8u;
    SET_GPR_U32(ctx, 31, 0x1302B0u);
    ctx->pc = 0x12EB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EB80u, 0x1302A8u, 0x1302B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1302B0u;
label_1302b0:
    // 0x1302b0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1302b0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1302b4: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x1302b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1302b8: 0x24b20030  addiu       $s2, $a1, 0x30
    ctx->pc = 0x1302b8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x1302bc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1302bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1302c0: 0x2411003a  addiu       $s1, $zero, 0x3A
    ctx->pc = 0x1302c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
    // 0x1302c4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1302c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1302c8: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x1302C8u;
    SET_GPR_U32(ctx, 31, 0x1302D0u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x1302C8u, 0x1302D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1302D0u;
label_1302d0:
    // 0x1302d0: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x1302d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1302d4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1302d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1302d8: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1302d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1302dc: 0xc116754  jal         func_459D50
    ctx->pc = 0x1302DCu;
    SET_GPR_U32(ctx, 31, 0x1302E4u);
    ctx->pc = 0x459D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x459D50u, 0x1302DCu, 0x1302E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1302E4u;
label_1302e4:
    // 0x1302e4: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x1302e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1302e8: 0x24a5003c  addiu       $a1, $a1, 0x3C
    ctx->pc = 0x1302e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 60));
    // 0x1302ec: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1302ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1302f0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1302f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1302f4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1302f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1302f8: 0xc04bae0  jal         func_12EB80
    ctx->pc = 0x1302F8u;
    SET_GPR_U32(ctx, 31, 0x130300u);
    ctx->pc = 0x12EB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EB80u, 0x1302F8u, 0x130300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130300u;
label_130300:
    // 0x130300: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x130300u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130304: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x130304u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x130308: 0x24b20030  addiu       $s2, $a1, 0x30
    ctx->pc = 0x130308u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x13030c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x13030cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130310: 0x2405003b  addiu       $a1, $zero, 0x3B
    ctx->pc = 0x130310u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x130314: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x130314u;
    SET_GPR_U32(ctx, 31, 0x13031Cu);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x130314u, 0x13031Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13031Cu;
label_13031c:
    // 0x13031c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x13031cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130320: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x130320u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x130324: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x130324u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130328: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x130328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x13032c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x13032cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130330: 0xc116754  jal         func_459D50
    ctx->pc = 0x130330u;
    SET_GPR_U32(ctx, 31, 0x130338u);
    ctx->pc = 0x459D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x459D50u, 0x130330u, 0x130338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130338u;
label_130338:
    // 0x130338: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x130338u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13033c: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x13033cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x130340: 0x2444003c  addiu       $a0, $v0, 0x3C
    ctx->pc = 0x130340u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 60));
    // 0x130344: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x130344u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x130348: 0xc04bae0  jal         func_12EB80
    ctx->pc = 0x130348u;
    SET_GPR_U32(ctx, 31, 0x130350u);
    ctx->pc = 0x12EB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EB80u, 0x130348u, 0x130350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130350u;
label_130350:
    // 0x130350: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x130350u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130354: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x130354u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x130358: 0x24b20030  addiu       $s2, $a1, 0x30
    ctx->pc = 0x130358u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x13035c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x13035cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130360: 0x2411003c  addiu       $s1, $zero, 0x3C
    ctx->pc = 0x130360u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x130364: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x130364u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130368: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x130368u;
    SET_GPR_U32(ctx, 31, 0x130370u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x130368u, 0x130370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130370u;
label_130370:
    // 0x130370: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x130370u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x130374: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x130374u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130378: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x130378u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13037c: 0xc116754  jal         func_459D50
    ctx->pc = 0x13037Cu;
    SET_GPR_U32(ctx, 31, 0x130384u);
    ctx->pc = 0x459D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x459D50u, 0x13037Cu, 0x130384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130384u;
label_130384:
    // 0x130384: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x130384u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x130388: 0x24a5003c  addiu       $a1, $a1, 0x3C
    ctx->pc = 0x130388u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 60));
    // 0x13038c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x13038cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130390: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x130390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x130394: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x130394u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130398: 0xc04bae0  jal         func_12EB80
    ctx->pc = 0x130398u;
    SET_GPR_U32(ctx, 31, 0x1303A0u);
    ctx->pc = 0x12EB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EB80u, 0x130398u, 0x1303A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1303A0u;
label_1303a0:
    // 0x1303a0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1303a0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1303a4: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x1303a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1303a8: 0x24b10030  addiu       $s1, $a1, 0x30
    ctx->pc = 0x1303a8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x1303ac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1303acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1303b0: 0x2405003d  addiu       $a1, $zero, 0x3D
    ctx->pc = 0x1303b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
    // 0x1303b4: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x1303B4u;
    SET_GPR_U32(ctx, 31, 0x1303BCu);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x1303B4u, 0x1303BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1303BCu;
label_1303bc:
    // 0x1303bc: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x1303bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1303c0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1303c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1303c4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1303c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1303c8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1303c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1303cc: 0xc116754  jal         func_459D50
    ctx->pc = 0x1303CCu;
    SET_GPR_U32(ctx, 31, 0x1303D4u);
    ctx->pc = 0x459D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x459D50u, 0x1303CCu, 0x1303D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1303D4u;
label_1303d4:
    // 0x1303d4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1303d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1303d8: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x1303d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1303dc: 0x24a2003c  addiu       $v0, $a1, 0x3C
    ctx->pc = 0x1303dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 60));
    // 0x1303e0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1303e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1303e4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1303e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1303e8: 0xc04bae0  jal         func_12EB80
    ctx->pc = 0x1303E8u;
    SET_GPR_U32(ctx, 31, 0x1303F0u);
    ctx->pc = 0x12EB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EB80u, 0x1303E8u, 0x1303F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1303F0u;
label_1303f0:
    // 0x1303f0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1303f0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1303f4: 0x8fb20060  lw          $s2, 0x60($sp)
    ctx->pc = 0x1303f4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1303f8: 0x26510030  addiu       $s1, $s2, 0x30
    ctx->pc = 0x1303f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    // 0x1303fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1303fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130400: 0x2405003e  addiu       $a1, $zero, 0x3E
    ctx->pc = 0x130400u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
    // 0x130404: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x130404u;
    SET_GPR_U32(ctx, 31, 0x13040Cu);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x130404u, 0x13040Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13040Cu;
label_13040c:
    // 0x13040c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x13040cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130410: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x130410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x130414: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x130414u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130418: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x130418u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x13041c: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x13041cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130420: 0xc116754  jal         func_459D50
    ctx->pc = 0x130420u;
    SET_GPR_U32(ctx, 31, 0x130428u);
    ctx->pc = 0x459D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x459D50u, 0x130420u, 0x130428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130428u;
label_130428:
    // 0x130428: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x130428u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13042c: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x13042cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x130430: 0x2442003c  addiu       $v0, $v0, 0x3C
    ctx->pc = 0x130430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 60));
    // 0x130434: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x130434u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130438: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x130438u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x13043c: 0xc04bae0  jal         func_12EB80
    ctx->pc = 0x13043Cu;
    SET_GPR_U32(ctx, 31, 0x130444u);
    ctx->pc = 0x12EB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EB80u, 0x13043Cu, 0x130444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130444u;
label_130444:
    // 0x130444: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x130444u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130448: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x130448u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x13044c: 0x24b10030  addiu       $s1, $a1, 0x30
    ctx->pc = 0x13044cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x130450: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x130450u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130454: 0x2405003f  addiu       $a1, $zero, 0x3F
    ctx->pc = 0x130454u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x130458: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x130458u;
    SET_GPR_U32(ctx, 31, 0x130460u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x130458u, 0x130460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130460u;
label_130460:
    // 0x130460: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x130460u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x130464: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x130464u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130468: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x130468u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13046c: 0xc116754  jal         func_459D50
    ctx->pc = 0x13046Cu;
    SET_GPR_U32(ctx, 31, 0x130474u);
    ctx->pc = 0x459D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x459D50u, 0x13046Cu, 0x130474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130474u;
label_130474:
    // 0x130474: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x130474u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x130478: 0x24a4003c  addiu       $a0, $a1, 0x3C
    ctx->pc = 0x130478u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 60));
    // 0x13047c: 0x24130003  addiu       $s3, $zero, 0x3
    ctx->pc = 0x13047cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x130480: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x130480u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130484: 0xc04bae0  jal         func_12EB80
    ctx->pc = 0x130484u;
    SET_GPR_U32(ctx, 31, 0x13048Cu);
    ctx->pc = 0x12EB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EB80u, 0x130484u, 0x13048Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13048Cu;
label_13048c:
    // 0x13048c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x13048cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130490: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x130490u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x130494: 0x24b10030  addiu       $s1, $a1, 0x30
    ctx->pc = 0x130494u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x130498: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x130498u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13049c: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x13049cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1304a0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1304a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1304a4: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x1304A4u;
    SET_GPR_U32(ctx, 31, 0x1304ACu);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x1304A4u, 0x1304ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1304ACu;
label_1304ac:
    // 0x1304ac: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1304acu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1304b0: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x1304b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1304b4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1304b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1304b8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1304b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1304bc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1304bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1304c0: 0xc116754  jal         func_459D50
    ctx->pc = 0x1304C0u;
    SET_GPR_U32(ctx, 31, 0x1304C8u);
    ctx->pc = 0x459D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x459D50u, 0x1304C0u, 0x1304C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1304C8u;
label_1304c8:
    // 0x1304c8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1304c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1304cc: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x1304ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1304d0: 0x24b3003c  addiu       $s3, $a1, 0x3C
    ctx->pc = 0x1304d0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 5), 60));
    // 0x1304d4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1304d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1304d8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1304d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1304dc: 0xc04bae0  jal         func_12EB80
    ctx->pc = 0x1304DCu;
    SET_GPR_U32(ctx, 31, 0x1304E4u);
    ctx->pc = 0x12EB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EB80u, 0x1304DCu, 0x1304E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1304E4u;
label_1304e4:
    // 0x1304e4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1304e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1304e8: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x1304e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1304ec: 0x24b10030  addiu       $s1, $a1, 0x30
    ctx->pc = 0x1304ecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x1304f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1304f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1304f4: 0x24050041  addiu       $a1, $zero, 0x41
    ctx->pc = 0x1304f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x1304f8: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x1304F8u;
    SET_GPR_U32(ctx, 31, 0x130500u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x1304F8u, 0x130500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130500u;
label_130500:
    // 0x130500: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x130500u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130504: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x130504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x130508: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x130508u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13050c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x13050cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x130510: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x130510u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130514: 0xc116754  jal         func_459D50
    ctx->pc = 0x130514u;
    SET_GPR_U32(ctx, 31, 0x13051Cu);
    ctx->pc = 0x459D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x459D50u, 0x130514u, 0x13051Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13051Cu;
label_13051c:
    // 0x13051c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x13051cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130520: 0x8fb10060  lw          $s1, 0x60($sp)
    ctx->pc = 0x130520u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x130524: 0x2622003c  addiu       $v0, $s1, 0x3C
    ctx->pc = 0x130524u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 60));
    // 0x130528: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x130528u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13052c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x13052cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x130530: 0xc04bae0  jal         func_12EB80
    ctx->pc = 0x130530u;
    SET_GPR_U32(ctx, 31, 0x130538u);
    ctx->pc = 0x12EB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EB80u, 0x130530u, 0x130538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130538u;
label_130538:
    // 0x130538: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x130538u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13053c: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x13053cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x130540: 0x24510030  addiu       $s1, $v0, 0x30
    ctx->pc = 0x130540u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x130544: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x130544u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130548: 0x24050042  addiu       $a1, $zero, 0x42
    ctx->pc = 0x130548u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x13054c: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x13054Cu;
    SET_GPR_U32(ctx, 31, 0x130554u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x13054Cu, 0x130554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130554u;
label_130554:
    // 0x130554: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x130554u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x130558: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x130558u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13055c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x13055cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x130560: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x130560u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130564: 0xc116754  jal         func_459D50
    ctx->pc = 0x130564u;
    SET_GPR_U32(ctx, 31, 0x13056Cu);
    ctx->pc = 0x459D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x459D50u, 0x130564u, 0x13056Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13056Cu;
label_13056c:
    // 0x13056c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x13056cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130570: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x130570u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x130574: 0x24a4003c  addiu       $a0, $a1, 0x3C
    ctx->pc = 0x130574u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 60));
    // 0x130578: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x130578u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x13057c: 0xc04bae0  jal         func_12EB80
    ctx->pc = 0x13057Cu;
    SET_GPR_U32(ctx, 31, 0x130584u);
    ctx->pc = 0x12EB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EB80u, 0x13057Cu, 0x130584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130584u;
label_130584:
    // 0x130584: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x130584u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130588: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x130588u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x13058c: 0x24b10030  addiu       $s1, $a1, 0x30
    ctx->pc = 0x13058cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x130590: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x130590u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130594: 0x24020043  addiu       $v0, $zero, 0x43
    ctx->pc = 0x130594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x130598: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x130598u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13059c: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x13059Cu;
    SET_GPR_U32(ctx, 31, 0x1305A4u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x13059Cu, 0x1305A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1305A4u;
label_1305a4:
    // 0x1305a4: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x1305a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1305a8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1305a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1305ac: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1305acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1305b0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1305b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1305b4: 0xc116754  jal         func_459D50
    ctx->pc = 0x1305B4u;
    SET_GPR_U32(ctx, 31, 0x1305BCu);
    ctx->pc = 0x459D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x459D50u, 0x1305B4u, 0x1305BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1305BCu;
label_1305bc:
    // 0x1305bc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1305bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1305c0: 0x8fb10060  lw          $s1, 0x60($sp)
    ctx->pc = 0x1305c0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1305c4: 0x2624003c  addiu       $a0, $s1, 0x3C
    ctx->pc = 0x1305c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 60));
    // 0x1305c8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1305c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1305cc: 0xc04bae0  jal         func_12EB80
    ctx->pc = 0x1305CCu;
    SET_GPR_U32(ctx, 31, 0x1305D4u);
    ctx->pc = 0x12EB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EB80u, 0x1305CCu, 0x1305D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1305D4u;
label_1305d4:
    // 0x1305d4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1305d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1305d8: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x1305d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1305dc: 0x24510030  addiu       $s1, $v0, 0x30
    ctx->pc = 0x1305dcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x1305e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1305e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1305e4: 0x2405004e  addiu       $a1, $zero, 0x4E
    ctx->pc = 0x1305e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x1305e8: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x1305E8u;
    SET_GPR_U32(ctx, 31, 0x1305F0u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x1305E8u, 0x1305F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1305F0u;
label_1305f0:
    // 0x1305f0: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x1305f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1305f4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1305f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1305f8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1305f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1305fc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1305fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130600: 0xc116754  jal         func_459D50
    ctx->pc = 0x130600u;
    SET_GPR_U32(ctx, 31, 0x130608u);
    ctx->pc = 0x459D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x459D50u, 0x130600u, 0x130608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130608u;
label_130608:
    // 0x130608: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x130608u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13060c: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x13060cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x130610: 0x24a4003c  addiu       $a0, $a1, 0x3C
    ctx->pc = 0x130610u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 60));
    // 0x130614: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x130614u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x130618: 0xc04bae0  jal         func_12EB80
    ctx->pc = 0x130618u;
    SET_GPR_U32(ctx, 31, 0x130620u);
    ctx->pc = 0x12EB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EB80u, 0x130618u, 0x130620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130620u;
label_130620:
    // 0x130620: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x130620u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130624: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x130624u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x130628: 0x24b20030  addiu       $s2, $a1, 0x30
    ctx->pc = 0x130628u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x13062c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x13062cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130630: 0x24020045  addiu       $v0, $zero, 0x45
    ctx->pc = 0x130630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    // 0x130634: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x130634u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130638: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x130638u;
    SET_GPR_U32(ctx, 31, 0x130640u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x130638u, 0x130640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130640u;
label_130640:
    // 0x130640: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x130640u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x130644: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x130644u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130648: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x130648u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13064c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x13064cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130650: 0xc116754  jal         func_459D50
    ctx->pc = 0x130650u;
    SET_GPR_U32(ctx, 31, 0x130658u);
    ctx->pc = 0x459D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x459D50u, 0x130650u, 0x130658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130658u;
label_130658:
    // 0x130658: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x130658u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13065c: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x13065cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x130660: 0x24a5003c  addiu       $a1, $a1, 0x3C
    ctx->pc = 0x130660u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 60));
    // 0x130664: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x130664u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130668: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x130668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13066c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x13066cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130670: 0xc04bae0  jal         func_12EB80
    ctx->pc = 0x130670u;
    SET_GPR_U32(ctx, 31, 0x130678u);
    ctx->pc = 0x12EB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EB80u, 0x130670u, 0x130678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130678u;
label_130678:
    // 0x130678: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x130678u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13067c: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x13067cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x130680: 0x24b10030  addiu       $s1, $a1, 0x30
    ctx->pc = 0x130680u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x130684: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x130684u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130688: 0x2405004e  addiu       $a1, $zero, 0x4E
    ctx->pc = 0x130688u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x13068c: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x13068Cu;
    SET_GPR_U32(ctx, 31, 0x130694u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x13068Cu, 0x130694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130694u;
label_130694:
    // 0x130694: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x130694u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x130698: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x130698u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13069c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x13069cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1306a0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1306a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1306a4: 0xc116754  jal         func_459D50
    ctx->pc = 0x1306A4u;
    SET_GPR_U32(ctx, 31, 0x1306ACu);
    ctx->pc = 0x459D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x459D50u, 0x1306A4u, 0x1306ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1306ACu;
label_1306ac:
    // 0x1306ac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1306acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1306b0: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1306B0u;
    {
        const bool branch_taken_0x1306b0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1306b0) {
            ctx->pc = 0x1306C8u;
            goto label_1306c8;
        }
    }
    ctx->pc = 0x1306B8u;
    // 0x1306b8: 0x8f82bb70  lw          $v0, -0x4490($gp)
    ctx->pc = 0x1306b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
    // 0x1306bc: 0x90440001  lbu         $a0, 0x1($v0)
    ctx->pc = 0x1306bcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x1306c0: 0x1480010d  bnez        $a0, . + 4 + (0x10D << 2)
    ctx->pc = 0x1306C0u;
    {
        const bool branch_taken_0x1306c0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1306c0) {
            ctx->pc = 0x130AF8u;
            goto label_130af8;
        }
    }
    ctx->pc = 0x1306C8u;
label_1306c8:
    // 0x1306c8: 0x8fb30060  lw          $s3, 0x60($sp)
    ctx->pc = 0x1306c8u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1306cc: 0x2672003c  addiu       $s2, $s3, 0x3C
    ctx->pc = 0x1306ccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 60));
    // 0x1306d0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1306d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1306d4: 0x24110004  addiu       $s1, $zero, 0x4
    ctx->pc = 0x1306d4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1306d8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1306d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1306dc: 0xc04bae0  jal         func_12EB80
    ctx->pc = 0x1306DCu;
    SET_GPR_U32(ctx, 31, 0x1306E4u);
    ctx->pc = 0x12EB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EB80u, 0x1306DCu, 0x1306E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1306E4u;
label_1306e4:
    // 0x1306e4: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1306e4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1306e8: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x1306e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1306ec: 0x24450030  addiu       $a1, $v0, 0x30
    ctx->pc = 0x1306ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x1306f0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1306f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1306f4: 0x2402004a  addiu       $v0, $zero, 0x4A
    ctx->pc = 0x1306f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
    // 0x1306f8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1306f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1306fc: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x1306FCu;
    SET_GPR_U32(ctx, 31, 0x130704u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x1306FCu, 0x130704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130704u;
label_130704:
    // 0x130704: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x130704u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130708: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x130708u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x13070c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x13070cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130710: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x130710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x130714: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x130714u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130718: 0xc116754  jal         func_459D50
    ctx->pc = 0x130718u;
    SET_GPR_U32(ctx, 31, 0x130720u);
    ctx->pc = 0x459D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x459D50u, 0x130718u, 0x130720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130720u;
label_130720:
    // 0x130720: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x130720u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130724: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x130724u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x130728: 0x24b2003c  addiu       $s2, $a1, 0x3C
    ctx->pc = 0x130728u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), 60));
    // 0x13072c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x13072cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130730: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x130730u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x130734: 0xc04bae0  jal         func_12EB80
    ctx->pc = 0x130734u;
    SET_GPR_U32(ctx, 31, 0x13073Cu);
    ctx->pc = 0x12EB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EB80u, 0x130734u, 0x13073Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13073Cu;
label_13073c:
    // 0x13073c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x13073cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130740: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x130740u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x130744: 0x24a20030  addiu       $v0, $a1, 0x30
    ctx->pc = 0x130744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x130748: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x130748u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13074c: 0x24050069  addiu       $a1, $zero, 0x69
    ctx->pc = 0x13074cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 105));
    // 0x130750: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x130750u;
    SET_GPR_U32(ctx, 31, 0x130758u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x130750u, 0x130758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130758u;
label_130758:
    // 0x130758: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x130758u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13075c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x13075cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x130760: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x130760u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130764: 0x8cb10000  lw          $s1, 0x0($a1)
    ctx->pc = 0x130764u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x130768: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x130768u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13076c: 0xc116754  jal         func_459D50
    ctx->pc = 0x13076Cu;
    SET_GPR_U32(ctx, 31, 0x130774u);
    ctx->pc = 0x459D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x459D50u, 0x13076Cu, 0x130774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130774u;
label_130774:
    // 0x130774: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x130774u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130778: 0x8fb30060  lw          $s3, 0x60($sp)
    ctx->pc = 0x130778u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x13077c: 0x2672003c  addiu       $s2, $s3, 0x3C
    ctx->pc = 0x13077cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 60));
    // 0x130780: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x130780u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130784: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x130784u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x130788: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x130788u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13078c: 0xc04bae0  jal         func_12EB80
    ctx->pc = 0x13078Cu;
    SET_GPR_U32(ctx, 31, 0x130794u);
    ctx->pc = 0x12EB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EB80u, 0x13078Cu, 0x130794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130794u;
label_130794:
    // 0x130794: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x130794u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130798: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x130798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x13079c: 0x24430030  addiu       $v1, $v0, 0x30
    ctx->pc = 0x13079cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x1307a0: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x1307a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1307a4: 0x2405006a  addiu       $a1, $zero, 0x6A
    ctx->pc = 0x1307a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 106));
    // 0x1307a8: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x1307A8u;
    SET_GPR_U32(ctx, 31, 0x1307B0u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x1307A8u, 0x1307B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1307B0u;
label_1307b0:
    // 0x1307b0: 0x8e320000  lw          $s2, 0x0($s1)
    ctx->pc = 0x1307b0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1307b4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1307b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1307b8: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1307b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1307bc: 0xc116754  jal         func_459D50
    ctx->pc = 0x1307BCu;
    SET_GPR_U32(ctx, 31, 0x1307C4u);
    ctx->pc = 0x459D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x459D50u, 0x1307BCu, 0x1307C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1307C4u;
label_1307c4:
    // 0x1307c4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1307c4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1307c8: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x1307c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1307cc: 0x24b1003c  addiu       $s1, $a1, 0x3C
    ctx->pc = 0x1307ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), 60));
    // 0x1307d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1307d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1307d4: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1307d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1307d8: 0xc04bae0  jal         func_12EB80
    ctx->pc = 0x1307D8u;
    SET_GPR_U32(ctx, 31, 0x1307E0u);
    ctx->pc = 0x12EB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EB80u, 0x1307D8u, 0x1307E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1307E0u;
label_1307e0:
    // 0x1307e0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1307e0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1307e4: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x1307e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1307e8: 0x24450030  addiu       $a1, $v0, 0x30
    ctx->pc = 0x1307e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x1307ec: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1307ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1307f0: 0x2402006b  addiu       $v0, $zero, 0x6B
    ctx->pc = 0x1307f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 107));
    // 0x1307f4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1307f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1307f8: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x1307F8u;
    SET_GPR_U32(ctx, 31, 0x130800u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x1307F8u, 0x130800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130800u;
label_130800:
    // 0x130800: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x130800u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130804: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x130804u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x130808: 0x8e320000  lw          $s2, 0x0($s1)
    ctx->pc = 0x130808u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x13080c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x13080cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130810: 0xc116754  jal         func_459D50
    ctx->pc = 0x130810u;
    SET_GPR_U32(ctx, 31, 0x130818u);
    ctx->pc = 0x459D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x459D50u, 0x130810u, 0x130818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130818u;
label_130818:
    // 0x130818: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x130818u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13081c: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x13081cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x130820: 0x2451003c  addiu       $s1, $v0, 0x3C
    ctx->pc = 0x130820u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 60));
    // 0x130824: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x130824u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130828: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x130828u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x13082c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x13082cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130830: 0xc04bae0  jal         func_12EB80
    ctx->pc = 0x130830u;
    SET_GPR_U32(ctx, 31, 0x130838u);
    ctx->pc = 0x12EB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EB80u, 0x130830u, 0x130838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130838u;
label_130838:
    // 0x130838: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x130838u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13083c: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x13083cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x130840: 0x24a20030  addiu       $v0, $a1, 0x30
    ctx->pc = 0x130840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x130844: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x130844u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130848: 0x2411006c  addiu       $s1, $zero, 0x6C
    ctx->pc = 0x130848u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
    // 0x13084c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x13084cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130850: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x130850u;
    SET_GPR_U32(ctx, 31, 0x130858u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x130850u, 0x130858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130858u;
label_130858:
    // 0x130858: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x130858u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13085c: 0x8e520000  lw          $s2, 0x0($s2)
    ctx->pc = 0x13085cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x130860: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x130860u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130864: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x130864u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x130868: 0xc116754  jal         func_459D50
    ctx->pc = 0x130868u;
    SET_GPR_U32(ctx, 31, 0x130870u);
    ctx->pc = 0x459D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x459D50u, 0x130868u, 0x130870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130870u;
label_130870:
    // 0x130870: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x130870u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x130874: 0x24b1003c  addiu       $s1, $a1, 0x3C
    ctx->pc = 0x130874u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), 60));
    // 0x130878: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x130878u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13087c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x13087cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x130880: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x130880u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130884: 0xc04bae0  jal         func_12EB80
    ctx->pc = 0x130884u;
    SET_GPR_U32(ctx, 31, 0x13088Cu);
    ctx->pc = 0x12EB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EB80u, 0x130884u, 0x13088Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13088Cu;
label_13088c:
    // 0x13088c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x13088cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130890: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x130890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x130894: 0x24520030  addiu       $s2, $v0, 0x30
    ctx->pc = 0x130894u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x130898: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x130898u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13089c: 0x2405006d  addiu       $a1, $zero, 0x6D
    ctx->pc = 0x13089cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 109));
    // 0x1308a0: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x1308A0u;
    SET_GPR_U32(ctx, 31, 0x1308A8u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x1308A0u, 0x1308A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1308A8u;
label_1308a8:
    // 0x1308a8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1308a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1308ac: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x1308acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1308b0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1308b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1308b4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1308b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1308b8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1308b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1308bc: 0xc116754  jal         func_459D50
    ctx->pc = 0x1308BCu;
    SET_GPR_U32(ctx, 31, 0x1308C4u);
    ctx->pc = 0x459D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x459D50u, 0x1308BCu, 0x1308C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1308C4u;
label_1308c4:
    // 0x1308c4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1308c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1308c8: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x1308c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1308cc: 0x2451003c  addiu       $s1, $v0, 0x3C
    ctx->pc = 0x1308ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 60));
    // 0x1308d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1308d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1308d4: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1308d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1308d8: 0xc04bae0  jal         func_12EB80
    ctx->pc = 0x1308D8u;
    SET_GPR_U32(ctx, 31, 0x1308E0u);
    ctx->pc = 0x12EB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EB80u, 0x1308D8u, 0x1308E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1308E0u;
label_1308e0:
    // 0x1308e0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1308e0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1308e4: 0x8fb20060  lw          $s2, 0x60($sp)
    ctx->pc = 0x1308e4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1308e8: 0x26420030  addiu       $v0, $s2, 0x30
    ctx->pc = 0x1308e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    // 0x1308ec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1308ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1308f0: 0x2411006e  addiu       $s1, $zero, 0x6E
    ctx->pc = 0x1308f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
    // 0x1308f4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1308f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1308f8: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x1308F8u;
    SET_GPR_U32(ctx, 31, 0x130900u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x1308F8u, 0x130900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130900u;
label_130900:
    // 0x130900: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x130900u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130904: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x130904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x130908: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x130908u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13090c: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x13090cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x130910: 0xc116754  jal         func_459D50
    ctx->pc = 0x130910u;
    SET_GPR_U32(ctx, 31, 0x130918u);
    ctx->pc = 0x459D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x459D50u, 0x130910u, 0x130918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130918u;
label_130918:
    // 0x130918: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x130918u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x13091c: 0x24b3003c  addiu       $s3, $a1, 0x3C
    ctx->pc = 0x13091cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 5), 60));
    // 0x130920: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x130920u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130924: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x130924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x130928: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x130928u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13092c: 0xc04bae0  jal         func_12EB80
    ctx->pc = 0x13092Cu;
    SET_GPR_U32(ctx, 31, 0x130934u);
    ctx->pc = 0x12EB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EB80u, 0x13092Cu, 0x130934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130934u;
label_130934:
    // 0x130934: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x130934u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130938: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x130938u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x13093c: 0x24b10030  addiu       $s1, $a1, 0x30
    ctx->pc = 0x13093cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x130940: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x130940u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130944: 0x2405006f  addiu       $a1, $zero, 0x6F
    ctx->pc = 0x130944u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 111));
    // 0x130948: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x130948u;
    SET_GPR_U32(ctx, 31, 0x130950u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x130948u, 0x130950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130950u;
label_130950:
    // 0x130950: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x130950u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x130954: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x130954u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130958: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x130958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13095c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x13095cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130960: 0xc116754  jal         func_459D50
    ctx->pc = 0x130960u;
    SET_GPR_U32(ctx, 31, 0x130968u);
    ctx->pc = 0x459D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x459D50u, 0x130960u, 0x130968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130968u;
label_130968:
    // 0x130968: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x130968u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13096c: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x13096cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x130970: 0x24b3003c  addiu       $s3, $a1, 0x3C
    ctx->pc = 0x130970u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 5), 60));
    // 0x130974: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x130974u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130978: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x130978u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x13097c: 0xc04bae0  jal         func_12EB80
    ctx->pc = 0x13097Cu;
    SET_GPR_U32(ctx, 31, 0x130984u);
    ctx->pc = 0x12EB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EB80u, 0x13097Cu, 0x130984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130984u;
label_130984:
    // 0x130984: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x130984u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130988: 0x8fb10060  lw          $s1, 0x60($sp)
    ctx->pc = 0x130988u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x13098c: 0x26220030  addiu       $v0, $s1, 0x30
    ctx->pc = 0x13098cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x130990: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x130990u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130994: 0x24050070  addiu       $a1, $zero, 0x70
    ctx->pc = 0x130994u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x130998: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x130998u;
    SET_GPR_U32(ctx, 31, 0x1309A0u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x130998u, 0x1309A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1309A0u;
label_1309a0:
    // 0x1309a0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1309a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1309a4: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1309a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1309a8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1309a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1309ac: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x1309acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1309b0: 0xc116754  jal         func_459D50
    ctx->pc = 0x1309B0u;
    SET_GPR_U32(ctx, 31, 0x1309B8u);
    ctx->pc = 0x459D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x459D50u, 0x1309B0u, 0x1309B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1309B8u;
label_1309b8:
    // 0x1309b8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1309b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1309bc: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x1309bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1309c0: 0x2453003c  addiu       $s3, $v0, 0x3C
    ctx->pc = 0x1309c0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 60));
    // 0x1309c4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1309c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1309c8: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1309c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1309cc: 0xc04bae0  jal         func_12EB80
    ctx->pc = 0x1309CCu;
    SET_GPR_U32(ctx, 31, 0x1309D4u);
    ctx->pc = 0x12EB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EB80u, 0x1309CCu, 0x1309D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1309D4u;
label_1309d4:
    // 0x1309d4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1309d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1309d8: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x1309d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1309dc: 0x24b10030  addiu       $s1, $a1, 0x30
    ctx->pc = 0x1309dcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x1309e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1309e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1309e4: 0x24050071  addiu       $a1, $zero, 0x71
    ctx->pc = 0x1309e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 113));
    // 0x1309e8: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x1309E8u;
    SET_GPR_U32(ctx, 31, 0x1309F0u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x1309E8u, 0x1309F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1309F0u;
label_1309f0:
    // 0x1309f0: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x1309f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1309f4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1309f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1309f8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1309f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1309fc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1309fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130a00: 0xc116754  jal         func_459D50
    ctx->pc = 0x130A00u;
    SET_GPR_U32(ctx, 31, 0x130A08u);
    ctx->pc = 0x459D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x459D50u, 0x130A00u, 0x130A08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130A08u;
label_130a08:
    // 0x130a08: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x130a08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130a0c: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x130a0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x130a10: 0x24b3003c  addiu       $s3, $a1, 0x3C
    ctx->pc = 0x130a10u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 5), 60));
    // 0x130a14: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x130a14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130a18: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x130a18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x130a1c: 0xc04bae0  jal         func_12EB80
    ctx->pc = 0x130A1Cu;
    SET_GPR_U32(ctx, 31, 0x130A24u);
    ctx->pc = 0x12EB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EB80u, 0x130A1Cu, 0x130A24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130A24u;
label_130a24:
    // 0x130a24: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x130a24u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130a28: 0x8fb10060  lw          $s1, 0x60($sp)
    ctx->pc = 0x130a28u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x130a2c: 0x26220030  addiu       $v0, $s1, 0x30
    ctx->pc = 0x130a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x130a30: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x130a30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130a34: 0x24050072  addiu       $a1, $zero, 0x72
    ctx->pc = 0x130a34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 114));
    // 0x130a38: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x130A38u;
    SET_GPR_U32(ctx, 31, 0x130A40u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x130A38u, 0x130A40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130A40u;
label_130a40:
    // 0x130a40: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x130a40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130a44: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x130a44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x130a48: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x130a48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130a4c: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x130a4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x130a50: 0xc116754  jal         func_459D50
    ctx->pc = 0x130A50u;
    SET_GPR_U32(ctx, 31, 0x130A58u);
    ctx->pc = 0x459D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x459D50u, 0x130A50u, 0x130A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130A58u;
label_130a58:
    // 0x130a58: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x130a58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130a5c: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x130a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x130a60: 0x2452003c  addiu       $s2, $v0, 0x3C
    ctx->pc = 0x130a60u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 60));
    // 0x130a64: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x130a64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130a68: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x130a68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x130a6c: 0xc04bae0  jal         func_12EB80
    ctx->pc = 0x130A6Cu;
    SET_GPR_U32(ctx, 31, 0x130A74u);
    ctx->pc = 0x12EB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EB80u, 0x130A6Cu, 0x130A74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130A74u;
label_130a74:
    // 0x130a74: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x130a74u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130a78: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x130a78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x130a7c: 0x24a20030  addiu       $v0, $a1, 0x30
    ctx->pc = 0x130a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x130a80: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x130a80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130a84: 0x24050073  addiu       $a1, $zero, 0x73
    ctx->pc = 0x130a84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 115));
    // 0x130a88: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x130A88u;
    SET_GPR_U32(ctx, 31, 0x130A90u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x130A88u, 0x130A90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130A90u;
label_130a90:
    // 0x130a90: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x130a90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x130a94: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x130a94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x130a98: 0xc116754  jal         func_459D50
    ctx->pc = 0x130A98u;
    SET_GPR_U32(ctx, 31, 0x130AA0u);
    ctx->pc = 0x459D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x459D50u, 0x130A98u, 0x130AA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130AA0u;
label_130aa0:
    // 0x130aa0: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x130aa0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x130aa4: 0x24b3003c  addiu       $s3, $a1, 0x3C
    ctx->pc = 0x130aa4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 5), 60));
    // 0x130aa8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x130aa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130aac: 0x24120004  addiu       $s2, $zero, 0x4
    ctx->pc = 0x130aacu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x130ab0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x130ab0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130ab4: 0xc04bae0  jal         func_12EB80
    ctx->pc = 0x130AB4u;
    SET_GPR_U32(ctx, 31, 0x130ABCu);
    ctx->pc = 0x12EB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EB80u, 0x130AB4u, 0x130ABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130ABCu;
label_130abc:
    // 0x130abc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x130abcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130ac0: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x130ac0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x130ac4: 0x24a50030  addiu       $a1, $a1, 0x30
    ctx->pc = 0x130ac4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x130ac8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x130ac8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130acc: 0x24020074  addiu       $v0, $zero, 0x74
    ctx->pc = 0x130accu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
    // 0x130ad0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x130ad0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130ad4: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x130AD4u;
    SET_GPR_U32(ctx, 31, 0x130ADCu);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x130AD4u, 0x130ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130ADCu;
label_130adc:
    // 0x130adc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x130adcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130ae0: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x130ae0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x130ae4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x130ae4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130ae8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x130ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x130aec: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x130aecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130af0: 0xc116754  jal         func_459D50
    ctx->pc = 0x130AF0u;
    SET_GPR_U32(ctx, 31, 0x130AF8u);
    ctx->pc = 0x459D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x459D50u, 0x130AF0u, 0x130AF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130AF8u;
label_130af8:
    // 0x130af8: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x130af8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x130afc: 0x24b2003c  addiu       $s2, $a1, 0x3C
    ctx->pc = 0x130afcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), 60));
    // 0x130b00: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x130b00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130b04: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x130b04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x130b08: 0xc04bae0  jal         func_12EB80
    ctx->pc = 0x130B08u;
    SET_GPR_U32(ctx, 31, 0x130B10u);
    ctx->pc = 0x12EB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EB80u, 0x130B08u, 0x130B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130B10u;
label_130b10:
    // 0x130b10: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x130b10u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130b14: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x130b14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x130b18: 0x24a20030  addiu       $v0, $a1, 0x30
    ctx->pc = 0x130b18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x130b1c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x130b1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130b20: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x130b20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x130b24: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x130B24u;
    SET_GPR_U32(ctx, 31, 0x130B2Cu);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x130B24u, 0x130B2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130B2Cu;
label_130b2c:
    // 0x130b2c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x130b2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130b30: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x130b30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x130b34: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x130b34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130b38: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x130b38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x130b3c: 0xc116754  jal         func_459D50
    ctx->pc = 0x130B3Cu;
    SET_GPR_U32(ctx, 31, 0x130B44u);
    ctx->pc = 0x459D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x459D50u, 0x130B3Cu, 0x130B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130B44u;
label_130b44:
    // 0x130b44: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x130b44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130b48: 0x8fb30060  lw          $s3, 0x60($sp)
    ctx->pc = 0x130b48u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x130b4c: 0x2672003c  addiu       $s2, $s3, 0x3C
    ctx->pc = 0x130b4cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 60));
    // 0x130b50: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x130b50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130b54: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x130b54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x130b58: 0xc04bae0  jal         func_12EB80
    ctx->pc = 0x130B58u;
    SET_GPR_U32(ctx, 31, 0x130B60u);
    ctx->pc = 0x12EB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EB80u, 0x130B58u, 0x130B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130B60u;
label_130b60:
    // 0x130b60: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x130b60u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130b64: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x130b64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x130b68: 0x24430030  addiu       $v1, $v0, 0x30
    ctx->pc = 0x130b68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x130b6c: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x130b6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130b70: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x130b70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x130b74: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x130B74u;
    SET_GPR_U32(ctx, 31, 0x130B7Cu);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x130B74u, 0x130B7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130B7Cu;
label_130b7c:
    // 0x130b7c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x130b7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x130b80: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x130b80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x130b84: 0xc116754  jal         func_459D50
    ctx->pc = 0x130B84u;
    SET_GPR_U32(ctx, 31, 0x130B8Cu);
    ctx->pc = 0x459D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x459D50u, 0x130B84u, 0x130B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130B8Cu;
label_130b8c:
    // 0x130b8c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x130b8cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130b90: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x130b90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x130b94: 0x24b2003c  addiu       $s2, $a1, 0x3C
    ctx->pc = 0x130b94u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), 60));
    // 0x130b98: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x130b98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130b9c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x130b9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x130ba0: 0xc04bae0  jal         func_12EB80
    ctx->pc = 0x130BA0u;
    SET_GPR_U32(ctx, 31, 0x130BA8u);
    ctx->pc = 0x12EB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EB80u, 0x130BA0u, 0x130BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130BA8u;
label_130ba8:
    // 0x130ba8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x130ba8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130bac: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x130bacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x130bb0: 0x24a50030  addiu       $a1, $a1, 0x30
    ctx->pc = 0x130bb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x130bb4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x130bb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130bb8: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x130bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x130bbc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x130bbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130bc0: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x130BC0u;
    SET_GPR_U32(ctx, 31, 0x130BC8u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x130BC0u, 0x130BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130BC8u;
label_130bc8:
    // 0x130bc8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x130bc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x130bcc: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x130bccu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x130bd0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x130bd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130bd4: 0xc116754  jal         func_459D50
    ctx->pc = 0x130BD4u;
    SET_GPR_U32(ctx, 31, 0x130BDCu);
    ctx->pc = 0x459D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x459D50u, 0x130BD4u, 0x130BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130BDCu;
label_130bdc:
    // 0x130bdc: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x130bdcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x130be0: 0x24b2003c  addiu       $s2, $a1, 0x3C
    ctx->pc = 0x130be0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), 60));
    // 0x130be4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x130be4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130be8: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x130be8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x130bec: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x130becu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130bf0: 0xc04bae0  jal         func_12EB80
    ctx->pc = 0x130BF0u;
    SET_GPR_U32(ctx, 31, 0x130BF8u);
    ctx->pc = 0x12EB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EB80u, 0x130BF0u, 0x130BF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130BF8u;
label_130bf8:
    // 0x130bf8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x130bf8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130bfc: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x130bfcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x130c00: 0x24a20030  addiu       $v0, $a1, 0x30
    ctx->pc = 0x130c00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x130c04: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x130c04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130c08: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x130c08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x130c0c: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x130C0Cu;
    SET_GPR_U32(ctx, 31, 0x130C14u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x130C0Cu, 0x130C14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130C14u;
label_130c14:
    // 0x130c14: 0x8e310000  lw          $s1, 0x0($s1)
    ctx->pc = 0x130c14u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x130c18: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x130c18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130c1c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x130c1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x130c20: 0xc116754  jal         func_459D50
    ctx->pc = 0x130C20u;
    SET_GPR_U32(ctx, 31, 0x130C28u);
    ctx->pc = 0x459D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x459D50u, 0x130C20u, 0x130C28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130C28u;
label_130c28:
    // 0x130c28: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x130c28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130c2c: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x130c2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x130c30: 0x24b2003c  addiu       $s2, $a1, 0x3C
    ctx->pc = 0x130c30u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), 60));
    // 0x130c34: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x130c34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130c38: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x130c38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x130c3c: 0xc04bae0  jal         func_12EB80
    ctx->pc = 0x130C3Cu;
    SET_GPR_U32(ctx, 31, 0x130C44u);
    ctx->pc = 0x12EB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EB80u, 0x130C3Cu, 0x130C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130C44u;
label_130c44:
    // 0x130c44: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x130c44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130c48: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x130c48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x130c4c: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x130c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x130c50: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x130c50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130c54: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x130c54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x130c58: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x130C58u;
    SET_GPR_U32(ctx, 31, 0x130C60u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x130C58u, 0x130C60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130C60u;
label_130c60:
    // 0x130c60: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x130c60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x130c64: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x130c64u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x130c68: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x130c68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130c6c: 0xc116754  jal         func_459D50
    ctx->pc = 0x130C6Cu;
    SET_GPR_U32(ctx, 31, 0x130C74u);
    ctx->pc = 0x459D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x459D50u, 0x130C6Cu, 0x130C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130C74u;
label_130c74:
    // 0x130c74: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x130c74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130c78: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x130c78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x130c7c: 0x24b2003c  addiu       $s2, $a1, 0x3C
    ctx->pc = 0x130c7cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), 60));
    // 0x130c80: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x130c80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130c84: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x130c84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x130c88: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x130c88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130c8c: 0xc04bae0  jal         func_12EB80
    ctx->pc = 0x130C8Cu;
    SET_GPR_U32(ctx, 31, 0x130C94u);
    ctx->pc = 0x12EB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EB80u, 0x130C8Cu, 0x130C94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130C94u;
label_130c94:
    // 0x130c94: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x130c94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130c98: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x130c98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x130c9c: 0x24a20030  addiu       $v0, $a1, 0x30
    ctx->pc = 0x130c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x130ca0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x130ca0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130ca4: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x130ca4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x130ca8: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x130CA8u;
    SET_GPR_U32(ctx, 31, 0x130CB0u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x130CA8u, 0x130CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130CB0u;
label_130cb0:
    // 0x130cb0: 0x8e320000  lw          $s2, 0x0($s1)
    ctx->pc = 0x130cb0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x130cb4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x130cb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130cb8: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x130cb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x130cbc: 0xc116754  jal         func_459D50
    ctx->pc = 0x130CBCu;
    SET_GPR_U32(ctx, 31, 0x130CC4u);
    ctx->pc = 0x459D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x459D50u, 0x130CBCu, 0x130CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130CC4u;
label_130cc4:
    // 0x130cc4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x130cc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130cc8: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x130cc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x130ccc: 0x24b1003c  addiu       $s1, $a1, 0x3C
    ctx->pc = 0x130cccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), 60));
    // 0x130cd0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x130cd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130cd4: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x130cd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x130cd8: 0xc04bae0  jal         func_12EB80
    ctx->pc = 0x130CD8u;
    SET_GPR_U32(ctx, 31, 0x130CE0u);
    ctx->pc = 0x12EB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EB80u, 0x130CD8u, 0x130CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130CE0u;
label_130ce0:
    // 0x130ce0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x130ce0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130ce4: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x130ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x130ce8: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x130ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x130cec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x130cecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130cf0: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x130cf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x130cf4: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x130CF4u;
    SET_GPR_U32(ctx, 31, 0x130CFCu);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x130CF4u, 0x130CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130CFCu;
label_130cfc:
    // 0x130cfc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x130cfcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130d00: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x130d00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x130d04: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x130d04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x130d08: 0xc116754  jal         func_459D50
    ctx->pc = 0x130D08u;
    SET_GPR_U32(ctx, 31, 0x130D10u);
    ctx->pc = 0x459D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x459D50u, 0x130D08u, 0x130D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130D10u;
label_130d10:
    // 0x130d10: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x130d10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130d14: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x130d14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x130d18: 0x2452003c  addiu       $s2, $v0, 0x3C
    ctx->pc = 0x130d18u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 60));
    // 0x130d1c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x130d1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130d20: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x130d20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x130d24: 0xc04bae0  jal         func_12EB80
    ctx->pc = 0x130D24u;
    SET_GPR_U32(ctx, 31, 0x130D2Cu);
    ctx->pc = 0x12EB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EB80u, 0x130D24u, 0x130D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130D2Cu;
label_130d2c:
    // 0x130d2c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x130d2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130d30: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x130d30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x130d34: 0x24a20030  addiu       $v0, $a1, 0x30
    ctx->pc = 0x130d34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x130d38: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x130d38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130d3c: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x130d3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x130d40: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x130D40u;
    SET_GPR_U32(ctx, 31, 0x130D48u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x130D40u, 0x130D48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130D48u;
label_130d48:
    // 0x130d48: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x130d48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x130d4c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x130d4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x130d50: 0xc116754  jal         func_459D50
    ctx->pc = 0x130D50u;
    SET_GPR_U32(ctx, 31, 0x130D58u);
    ctx->pc = 0x459D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x459D50u, 0x130D50u, 0x130D58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130D58u;
label_130d58:
    // 0x130d58: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x130d58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x130d5c: 0x2444003c  addiu       $a0, $v0, 0x3C
    ctx->pc = 0x130d5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 60));
    // 0x130d60: 0x24130005  addiu       $s3, $zero, 0x5
    ctx->pc = 0x130d60u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x130d64: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x130d64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130d68: 0xc04bae0  jal         func_12EB80
    ctx->pc = 0x130D68u;
    SET_GPR_U32(ctx, 31, 0x130D70u);
    ctx->pc = 0x12EB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EB80u, 0x130D68u, 0x130D70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130D70u;
label_130d70:
    // 0x130d70: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x130d70u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130d74: 0x8fb10060  lw          $s1, 0x60($sp)
    ctx->pc = 0x130d74u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x130d78: 0x26340030  addiu       $s4, $s1, 0x30
    ctx->pc = 0x130d78u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x130d7c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x130d7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130d80: 0x24020057  addiu       $v0, $zero, 0x57
    ctx->pc = 0x130d80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 87));
    // 0x130d84: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x130d84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130d88: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x130D88u;
    SET_GPR_U32(ctx, 31, 0x130D90u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x130D88u, 0x130D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130D90u;
label_130d90:
    // 0x130d90: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x130d90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130d94: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x130d94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x130d98: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x130d98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130d9c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x130d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x130da0: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x130da0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130da4: 0xc116754  jal         func_459D50
    ctx->pc = 0x130DA4u;
    SET_GPR_U32(ctx, 31, 0x130DACu);
    ctx->pc = 0x459D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x459D50u, 0x130DA4u, 0x130DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130DACu;
label_130dac:
    // 0x130dac: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x130dacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130db0: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x130db0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x130db4: 0x2453003c  addiu       $s3, $v0, 0x3C
    ctx->pc = 0x130db4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 60));
    // 0x130db8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x130db8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130dbc: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x130dbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x130dc0: 0xc04bae0  jal         func_12EB80
    ctx->pc = 0x130DC0u;
    SET_GPR_U32(ctx, 31, 0x130DC8u);
    ctx->pc = 0x12EB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EB80u, 0x130DC0u, 0x130DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130DC8u;
label_130dc8:
    // 0x130dc8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x130dc8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130dcc: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x130dccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x130dd0: 0x24b10030  addiu       $s1, $a1, 0x30
    ctx->pc = 0x130dd0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x130dd4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x130dd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130dd8: 0x24050056  addiu       $a1, $zero, 0x56
    ctx->pc = 0x130dd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 86));
    // 0x130ddc: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x130DDCu;
    SET_GPR_U32(ctx, 31, 0x130DE4u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x130DDCu, 0x130DE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130DE4u;
label_130de4:
    // 0x130de4: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x130de4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x130de8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x130de8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130dec: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x130decu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x130df0: 0xc116754  jal         func_459D50
    ctx->pc = 0x130DF0u;
    SET_GPR_U32(ctx, 31, 0x130DF8u);
    ctx->pc = 0x459D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x459D50u, 0x130DF0u, 0x130DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130DF8u;
label_130df8:
    // 0x130df8: 0x8fb10060  lw          $s1, 0x60($sp)
    ctx->pc = 0x130df8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x130dfc: 0x2624003c  addiu       $a0, $s1, 0x3C
    ctx->pc = 0x130dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 60));
    // 0x130e00: 0x24130005  addiu       $s3, $zero, 0x5
    ctx->pc = 0x130e00u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x130e04: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x130e04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130e08: 0xc04bae0  jal         func_12EB80
    ctx->pc = 0x130E08u;
    SET_GPR_U32(ctx, 31, 0x130E10u);
    ctx->pc = 0x12EB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EB80u, 0x130E08u, 0x130E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130E10u;
label_130e10:
    // 0x130e10: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x130e10u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130e14: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x130e14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x130e18: 0x24510030  addiu       $s1, $v0, 0x30
    ctx->pc = 0x130e18u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x130e1c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x130e1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130e20: 0x24020058  addiu       $v0, $zero, 0x58
    ctx->pc = 0x130e20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
    // 0x130e24: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x130e24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130e28: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x130E28u;
    SET_GPR_U32(ctx, 31, 0x130E30u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x130E28u, 0x130E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130E30u;
label_130e30:
    // 0x130e30: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x130e30u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130e34: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x130e34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x130e38: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x130e38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130e3c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x130e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x130e40: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x130e40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130e44: 0xc116754  jal         func_459D50
    ctx->pc = 0x130E44u;
    SET_GPR_U32(ctx, 31, 0x130E4Cu);
    ctx->pc = 0x459D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x459D50u, 0x130E44u, 0x130E4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130E4Cu;
label_130e4c:
    // 0x130e4c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x130e4cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130e50: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x130e50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x130e54: 0x24b3003c  addiu       $s3, $a1, 0x3C
    ctx->pc = 0x130e54u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 5), 60));
    // 0x130e58: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x130e58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130e5c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x130e5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x130e60: 0xc04bae0  jal         func_12EB80
    ctx->pc = 0x130E60u;
    SET_GPR_U32(ctx, 31, 0x130E68u);
    ctx->pc = 0x12EB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EB80u, 0x130E60u, 0x130E68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130E68u;
label_130e68:
    // 0x130e68: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x130e68u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130e6c: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x130e6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x130e70: 0x24b20030  addiu       $s2, $a1, 0x30
    ctx->pc = 0x130e70u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x130e74: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x130e74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130e78: 0x24020059  addiu       $v0, $zero, 0x59
    ctx->pc = 0x130e78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 89));
    // 0x130e7c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x130e7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130e80: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x130E80u;
    SET_GPR_U32(ctx, 31, 0x130E88u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x130E80u, 0x130E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130E88u;
label_130e88:
    // 0x130e88: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x130e88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130e8c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x130e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x130e90: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x130e90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130e94: 0x8cb10000  lw          $s1, 0x0($a1)
    ctx->pc = 0x130e94u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x130e98: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x130e98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130e9c: 0xc116754  jal         func_459D50
    ctx->pc = 0x130E9Cu;
    SET_GPR_U32(ctx, 31, 0x130EA4u);
    ctx->pc = 0x459D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x459D50u, 0x130E9Cu, 0x130EA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130EA4u;
label_130ea4:
    // 0x130ea4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x130ea4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130ea8: 0x8fb20060  lw          $s2, 0x60($sp)
    ctx->pc = 0x130ea8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x130eac: 0x2645003c  addiu       $a1, $s2, 0x3C
    ctx->pc = 0x130eacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 60));
    // 0x130eb0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x130eb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130eb4: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x130eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x130eb8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x130eb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130ebc: 0xc04bae0  jal         func_12EB80
    ctx->pc = 0x130EBCu;
    SET_GPR_U32(ctx, 31, 0x130EC4u);
    ctx->pc = 0x12EB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EB80u, 0x130EBCu, 0x130EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130EC4u;
label_130ec4:
    // 0x130ec4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x130ec4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130ec8: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x130ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x130ecc: 0x24520030  addiu       $s2, $v0, 0x30
    ctx->pc = 0x130eccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x130ed0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x130ed0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130ed4: 0x2405005a  addiu       $a1, $zero, 0x5A
    ctx->pc = 0x130ed4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    // 0x130ed8: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x130ED8u;
    SET_GPR_U32(ctx, 31, 0x130EE0u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x130ED8u, 0x130EE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130EE0u;
label_130ee0:
    // 0x130ee0: 0x8e310000  lw          $s1, 0x0($s1)
    ctx->pc = 0x130ee0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x130ee4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x130ee4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130ee8: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x130ee8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x130eec: 0xc116754  jal         func_459D50
    ctx->pc = 0x130EECu;
    SET_GPR_U32(ctx, 31, 0x130EF4u);
    ctx->pc = 0x459D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x459D50u, 0x130EECu, 0x130EF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130EF4u;
label_130ef4:
    // 0x130ef4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x130ef4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130ef8: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x130ef8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x130efc: 0x24a2003c  addiu       $v0, $a1, 0x3C
    ctx->pc = 0x130efcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 60));
    // 0x130f00: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x130f00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130f04: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x130f04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x130f08: 0xc04bae0  jal         func_12EB80
    ctx->pc = 0x130F08u;
    SET_GPR_U32(ctx, 31, 0x130F10u);
    ctx->pc = 0x12EB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EB80u, 0x130F08u, 0x130F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130F10u;
label_130f10:
    // 0x130f10: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x130f10u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130f14: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x130f14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x130f18: 0x24530030  addiu       $s3, $v0, 0x30
    ctx->pc = 0x130f18u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x130f1c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x130f1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130f20: 0x2402005b  addiu       $v0, $zero, 0x5B
    ctx->pc = 0x130f20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 91));
    // 0x130f24: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x130f24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130f28: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x130F28u;
    SET_GPR_U32(ctx, 31, 0x130F30u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x130F28u, 0x130F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130F30u;
label_130f30:
    // 0x130f30: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x130f30u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130f34: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x130f34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x130f38: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x130f38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130f3c: 0x8e510000  lw          $s1, 0x0($s2)
    ctx->pc = 0x130f3cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x130f40: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x130f40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130f44: 0xc116754  jal         func_459D50
    ctx->pc = 0x130F44u;
    SET_GPR_U32(ctx, 31, 0x130F4Cu);
    ctx->pc = 0x459D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x459D50u, 0x130F44u, 0x130F4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130F4Cu;
label_130f4c:
    // 0x130f4c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x130f4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130f50: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x130f50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x130f54: 0x2445003c  addiu       $a1, $v0, 0x3C
    ctx->pc = 0x130f54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 60));
    // 0x130f58: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x130f58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130f5c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x130f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x130f60: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x130f60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130f64: 0xc04bae0  jal         func_12EB80
    ctx->pc = 0x130F64u;
    SET_GPR_U32(ctx, 31, 0x130F6Cu);
    ctx->pc = 0x12EB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EB80u, 0x130F64u, 0x130F6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130F6Cu;
label_130f6c:
    // 0x130f6c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x130f6cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130f70: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x130f70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x130f74: 0x24b30030  addiu       $s3, $a1, 0x30
    ctx->pc = 0x130f74u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x130f78: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x130f78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130f7c: 0x2412005c  addiu       $s2, $zero, 0x5C
    ctx->pc = 0x130f7cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x130f80: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x130f80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130f84: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x130F84u;
    SET_GPR_U32(ctx, 31, 0x130F8Cu);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x130F84u, 0x130F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130F8Cu;
label_130f8c:
    // 0x130f8c: 0x8e310000  lw          $s1, 0x0($s1)
    ctx->pc = 0x130f8cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x130f90: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x130f90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130f94: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x130f94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x130f98: 0xc116754  jal         func_459D50
    ctx->pc = 0x130F98u;
    SET_GPR_U32(ctx, 31, 0x130FA0u);
    ctx->pc = 0x459D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x459D50u, 0x130F98u, 0x130FA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130FA0u;
label_130fa0:
    // 0x130fa0: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x130fa0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x130fa4: 0x24a2003c  addiu       $v0, $a1, 0x3C
    ctx->pc = 0x130fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 60));
    // 0x130fa8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x130fa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130fac: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x130facu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x130fb0: 0xc04bae0  jal         func_12EB80
    ctx->pc = 0x130FB0u;
    SET_GPR_U32(ctx, 31, 0x130FB8u);
    ctx->pc = 0x12EB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EB80u, 0x130FB0u, 0x130FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130FB8u;
label_130fb8:
    // 0x130fb8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x130fb8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130fbc: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x130fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x130fc0: 0x24520030  addiu       $s2, $v0, 0x30
    ctx->pc = 0x130fc0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x130fc4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x130fc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130fc8: 0x2405005d  addiu       $a1, $zero, 0x5D
    ctx->pc = 0x130fc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 93));
    // 0x130fcc: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x130FCCu;
    SET_GPR_U32(ctx, 31, 0x130FD4u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x130FCCu, 0x130FD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130FD4u;
label_130fd4:
    // 0x130fd4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x130fd4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130fd8: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x130fd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x130fdc: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x130fdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130fe0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x130fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x130fe4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x130fe4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130fe8: 0xc116754  jal         func_459D50
    ctx->pc = 0x130FE8u;
    SET_GPR_U32(ctx, 31, 0x130FF0u);
    ctx->pc = 0x459D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x459D50u, 0x130FE8u, 0x130FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130FF0u;
label_130ff0:
    // 0x130ff0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x130ff0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130ff4: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x130ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x130ff8: 0x2444003c  addiu       $a0, $v0, 0x3C
    ctx->pc = 0x130ff8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 60));
    // 0x130ffc: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x130ffcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x131000: 0xc04bae0  jal         func_12EB80
    ctx->pc = 0x131000u;
    SET_GPR_U32(ctx, 31, 0x131008u);
    ctx->pc = 0x12EB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EB80u, 0x131000u, 0x131008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131008u;
label_131008:
    // 0x131008: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x131008u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13100c: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x13100cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x131010: 0x24b20030  addiu       $s2, $a1, 0x30
    ctx->pc = 0x131010u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x131014: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x131014u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131018: 0x2411005e  addiu       $s1, $zero, 0x5E
    ctx->pc = 0x131018u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 94));
    // 0x13101c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x13101cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131020: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x131020u;
    SET_GPR_U32(ctx, 31, 0x131028u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x131020u, 0x131028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131028u;
label_131028:
    // 0x131028: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x131028u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x13102c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x13102cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131030: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x131030u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x131034: 0xc116754  jal         func_459D50
    ctx->pc = 0x131034u;
    SET_GPR_U32(ctx, 31, 0x13103Cu);
    ctx->pc = 0x459D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x459D50u, 0x131034u, 0x13103Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13103Cu;
label_13103c:
    // 0x13103c: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x13103cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x131040: 0x24a5003c  addiu       $a1, $a1, 0x3C
    ctx->pc = 0x131040u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 60));
    // 0x131044: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x131044u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131048: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x131048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x13104c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x13104cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131050: 0xc04bae0  jal         func_12EB80
    ctx->pc = 0x131050u;
    SET_GPR_U32(ctx, 31, 0x131058u);
    ctx->pc = 0x12EB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EB80u, 0x131050u, 0x131058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131058u;
label_131058:
    // 0x131058: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x131058u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13105c: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x13105cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x131060: 0x24b20030  addiu       $s2, $a1, 0x30
    ctx->pc = 0x131060u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x131064: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x131064u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131068: 0x2405005f  addiu       $a1, $zero, 0x5F
    ctx->pc = 0x131068u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 95));
    // 0x13106c: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x13106Cu;
    SET_GPR_U32(ctx, 31, 0x131074u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x13106Cu, 0x131074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131074u;
label_131074:
    // 0x131074: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x131074u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131078: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x131078u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x13107c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x13107cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131080: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x131080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x131084: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x131084u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131088: 0xc116754  jal         func_459D50
    ctx->pc = 0x131088u;
    SET_GPR_U32(ctx, 31, 0x131090u);
    ctx->pc = 0x459D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x459D50u, 0x131088u, 0x131090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131090u;
label_131090:
    // 0x131090: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x131090u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131094: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x131094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x131098: 0x2444003c  addiu       $a0, $v0, 0x3C
    ctx->pc = 0x131098u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 60));
    // 0x13109c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x13109cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1310a0: 0xc04bae0  jal         func_12EB80
    ctx->pc = 0x1310A0u;
    SET_GPR_U32(ctx, 31, 0x1310A8u);
    ctx->pc = 0x12EB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EB80u, 0x1310A0u, 0x1310A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1310A8u;
label_1310a8:
    // 0x1310a8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1310a8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1310ac: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x1310acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1310b0: 0x24b20030  addiu       $s2, $a1, 0x30
    ctx->pc = 0x1310b0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x1310b4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1310b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1310b8: 0x2411004f  addiu       $s1, $zero, 0x4F
    ctx->pc = 0x1310b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    // 0x1310bc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1310bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1310c0: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x1310C0u;
    SET_GPR_U32(ctx, 31, 0x1310C8u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x1310C0u, 0x1310C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1310C8u;
label_1310c8:
    // 0x1310c8: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x1310c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1310cc: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1310ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1310d0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1310d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1310d4: 0xc116754  jal         func_459D50
    ctx->pc = 0x1310D4u;
    SET_GPR_U32(ctx, 31, 0x1310DCu);
    ctx->pc = 0x459D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x459D50u, 0x1310D4u, 0x1310DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1310DCu;
label_1310dc:
    // 0x1310dc: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x1310dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1310e0: 0x24a5003c  addiu       $a1, $a1, 0x3C
    ctx->pc = 0x1310e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 60));
    // 0x1310e4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1310e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1310e8: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1310e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1310ec: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1310ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1310f0: 0xc04bae0  jal         func_12EB80
    ctx->pc = 0x1310F0u;
    SET_GPR_U32(ctx, 31, 0x1310F8u);
    ctx->pc = 0x12EB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EB80u, 0x1310F0u, 0x1310F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1310F8u;
label_1310f8:
    // 0x1310f8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1310f8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1310fc: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x1310fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x131100: 0x24b10030  addiu       $s1, $a1, 0x30
    ctx->pc = 0x131100u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x131104: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x131104u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131108: 0x24050050  addiu       $a1, $zero, 0x50
    ctx->pc = 0x131108u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x13110c: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x13110Cu;
    SET_GPR_U32(ctx, 31, 0x131114u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x13110Cu, 0x131114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131114u;
label_131114:
    // 0x131114: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x131114u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x131118: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x131118u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13111c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x13111cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x131120: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x131120u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131124: 0xc116754  jal         func_459D50
    ctx->pc = 0x131124u;
    SET_GPR_U32(ctx, 31, 0x13112Cu);
    ctx->pc = 0x459D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x459D50u, 0x131124u, 0x13112Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13112Cu;
label_13112c:
    // 0x13112c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x13112cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131130: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x131130u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x131134: 0x24a2003c  addiu       $v0, $a1, 0x3C
    ctx->pc = 0x131134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 60));
    // 0x131138: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x131138u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13113c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x13113cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x131140: 0xc04bae0  jal         func_12EB80
    ctx->pc = 0x131140u;
    SET_GPR_U32(ctx, 31, 0x131148u);
    ctx->pc = 0x12EB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EB80u, 0x131140u, 0x131148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131148u;
label_131148:
    // 0x131148: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x131148u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13114c: 0x8fb20060  lw          $s2, 0x60($sp)
    ctx->pc = 0x13114cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x131150: 0x26510030  addiu       $s1, $s2, 0x30
    ctx->pc = 0x131150u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    // 0x131154: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x131154u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131158: 0x24050051  addiu       $a1, $zero, 0x51
    ctx->pc = 0x131158u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
    // 0x13115c: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x13115Cu;
    SET_GPR_U32(ctx, 31, 0x131164u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x13115Cu, 0x131164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131164u;
label_131164:
    // 0x131164: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x131164u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131168: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x131168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x13116c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x13116cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131170: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x131170u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x131174: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x131174u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131178: 0xc116754  jal         func_459D50
    ctx->pc = 0x131178u;
    SET_GPR_U32(ctx, 31, 0x131180u);
    ctx->pc = 0x459D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x459D50u, 0x131178u, 0x131180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131180u;
label_131180:
    // 0x131180: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x131180u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131184: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x131184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x131188: 0x2442003c  addiu       $v0, $v0, 0x3C
    ctx->pc = 0x131188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 60));
    // 0x13118c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x13118cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131190: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x131190u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x131194: 0xc04bae0  jal         func_12EB80
    ctx->pc = 0x131194u;
    SET_GPR_U32(ctx, 31, 0x13119Cu);
    ctx->pc = 0x12EB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EB80u, 0x131194u, 0x13119Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13119Cu;
label_13119c:
    // 0x13119c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x13119cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1311a0: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x1311a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1311a4: 0x24b10030  addiu       $s1, $a1, 0x30
    ctx->pc = 0x1311a4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x1311a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1311a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1311ac: 0x24050052  addiu       $a1, $zero, 0x52
    ctx->pc = 0x1311acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
    // 0x1311b0: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x1311B0u;
    SET_GPR_U32(ctx, 31, 0x1311B8u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x1311B0u, 0x1311B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1311B8u;
label_1311b8:
    // 0x1311b8: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x1311b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1311bc: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1311bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1311c0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1311c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1311c4: 0xc116754  jal         func_459D50
    ctx->pc = 0x1311C4u;
    SET_GPR_U32(ctx, 31, 0x1311CCu);
    ctx->pc = 0x459D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x459D50u, 0x1311C4u, 0x1311CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1311CCu;
label_1311cc:
    // 0x1311cc: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x1311ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1311d0: 0x24a4003c  addiu       $a0, $a1, 0x3C
    ctx->pc = 0x1311d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 60));
    // 0x1311d4: 0x24130005  addiu       $s3, $zero, 0x5
    ctx->pc = 0x1311d4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1311d8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1311d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1311dc: 0xc04bae0  jal         func_12EB80
    ctx->pc = 0x1311DCu;
    SET_GPR_U32(ctx, 31, 0x1311E4u);
    ctx->pc = 0x12EB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EB80u, 0x1311DCu, 0x1311E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1311E4u;
label_1311e4:
    // 0x1311e4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1311e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1311e8: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x1311e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1311ec: 0x24b10030  addiu       $s1, $a1, 0x30
    ctx->pc = 0x1311ecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x1311f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1311f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1311f4: 0x24020053  addiu       $v0, $zero, 0x53
    ctx->pc = 0x1311f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
    // 0x1311f8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1311f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1311fc: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x1311FCu;
    SET_GPR_U32(ctx, 31, 0x131204u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x1311FCu, 0x131204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131204u;
label_131204:
    // 0x131204: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x131204u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131208: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x131208u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x13120c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x13120cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131210: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x131210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x131214: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x131214u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131218: 0xc116754  jal         func_459D50
    ctx->pc = 0x131218u;
    SET_GPR_U32(ctx, 31, 0x131220u);
    ctx->pc = 0x459D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x459D50u, 0x131218u, 0x131220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131220u;
label_131220:
    // 0x131220: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x131220u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131224: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x131224u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x131228: 0x24b3003c  addiu       $s3, $a1, 0x3C
    ctx->pc = 0x131228u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 5), 60));
    // 0x13122c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x13122cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131230: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x131230u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x131234: 0xc04bae0  jal         func_12EB80
    ctx->pc = 0x131234u;
    SET_GPR_U32(ctx, 31, 0x13123Cu);
    ctx->pc = 0x12EB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EB80u, 0x131234u, 0x13123Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13123Cu;
label_13123c:
    // 0x13123c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x13123cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131240: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x131240u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x131244: 0x24b10030  addiu       $s1, $a1, 0x30
    ctx->pc = 0x131244u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x131248: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x131248u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13124c: 0x24050054  addiu       $a1, $zero, 0x54
    ctx->pc = 0x13124cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
    // 0x131250: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x131250u;
    SET_GPR_U32(ctx, 31, 0x131258u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x131250u, 0x131258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131258u;
label_131258:
    // 0x131258: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x131258u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13125c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x13125cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x131260: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x131260u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131264: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x131264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x131268: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x131268u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13126c: 0xc116754  jal         func_459D50
    ctx->pc = 0x13126Cu;
    SET_GPR_U32(ctx, 31, 0x131274u);
    ctx->pc = 0x459D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x459D50u, 0x13126Cu, 0x131274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131274u;
label_131274:
    // 0x131274: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x131274u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131278: 0x8fb10060  lw          $s1, 0x60($sp)
    ctx->pc = 0x131278u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x13127c: 0x2622003c  addiu       $v0, $s1, 0x3C
    ctx->pc = 0x13127cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 60));
    // 0x131280: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x131280u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131284: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x131284u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x131288: 0xc04bae0  jal         func_12EB80
    ctx->pc = 0x131288u;
    SET_GPR_U32(ctx, 31, 0x131290u);
    ctx->pc = 0x12EB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EB80u, 0x131288u, 0x131290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131290u;
label_131290:
    // 0x131290: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x131290u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131294: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x131294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x131298: 0x24510030  addiu       $s1, $v0, 0x30
    ctx->pc = 0x131298u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x13129c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13129cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1312a0: 0x2405004e  addiu       $a1, $zero, 0x4E
    ctx->pc = 0x1312a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x1312a4: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x1312A4u;
    SET_GPR_U32(ctx, 31, 0x1312ACu);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x1312A4u, 0x1312ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1312ACu;
label_1312ac:
    // 0x1312ac: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x1312acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1312b0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1312b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1312b4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1312b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1312b8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1312b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1312bc: 0xc116754  jal         func_459D50
    ctx->pc = 0x1312BCu;
    SET_GPR_U32(ctx, 31, 0x1312C4u);
    ctx->pc = 0x459D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x459D50u, 0x1312BCu, 0x1312C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1312C4u;
label_1312c4:
    // 0x1312c4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1312c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1312c8: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x1312c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1312cc: 0x24a4003c  addiu       $a0, $a1, 0x3C
    ctx->pc = 0x1312ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 60));
    // 0x1312d0: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x1312d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1312d4: 0xc04bae0  jal         func_12EB80
    ctx->pc = 0x1312D4u;
    SET_GPR_U32(ctx, 31, 0x1312DCu);
    ctx->pc = 0x12EB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EB80u, 0x1312D4u, 0x1312DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1312DCu;
label_1312dc:
    // 0x1312dc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1312dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1312e0: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x1312e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1312e4: 0x24b10030  addiu       $s1, $a1, 0x30
    ctx->pc = 0x1312e4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x1312e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1312e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1312ec: 0x2402004e  addiu       $v0, $zero, 0x4E
    ctx->pc = 0x1312ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x1312f0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1312f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1312f4: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x1312F4u;
    SET_GPR_U32(ctx, 31, 0x1312FCu);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x1312F4u, 0x1312FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1312FCu;
label_1312fc:
    // 0x1312fc: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x1312fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x131300: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x131300u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131304: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x131304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x131308: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x131308u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13130c: 0xc116754  jal         func_459D50
    ctx->pc = 0x13130Cu;
    SET_GPR_U32(ctx, 31, 0x131314u);
    ctx->pc = 0x459D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x459D50u, 0x13130Cu, 0x131314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131314u;
label_131314:
    // 0x131314: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x131314u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131318: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x131318u;
    {
        const bool branch_taken_0x131318 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x131318) {
            ctx->pc = 0x131330u;
            goto label_131330;
        }
    }
    ctx->pc = 0x131320u;
    // 0x131320: 0x8f91bb70  lw          $s1, -0x4490($gp)
    ctx->pc = 0x131320u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
    // 0x131324: 0x92240001  lbu         $a0, 0x1($s1)
    ctx->pc = 0x131324u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x131328: 0x14800061  bnez        $a0, . + 4 + (0x61 << 2)
    ctx->pc = 0x131328u;
    {
        const bool branch_taken_0x131328 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x131328) {
            ctx->pc = 0x1314B0u;
            goto label_1314b0;
        }
    }
    ctx->pc = 0x131330u;
label_131330:
    // 0x131330: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x131330u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x131334: 0x24b2003c  addiu       $s2, $a1, 0x3C
    ctx->pc = 0x131334u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), 60));
    // 0x131338: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x131338u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13133c: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x13133cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x131340: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x131340u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131344: 0xc04bae0  jal         func_12EB80
    ctx->pc = 0x131344u;
    SET_GPR_U32(ctx, 31, 0x13134Cu);
    ctx->pc = 0x12EB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EB80u, 0x131344u, 0x13134Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13134Cu;
label_13134c:
    // 0x13134c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x13134cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131350: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x131350u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x131354: 0x24a20030  addiu       $v0, $a1, 0x30
    ctx->pc = 0x131354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x131358: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x131358u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13135c: 0x2405006b  addiu       $a1, $zero, 0x6B
    ctx->pc = 0x13135cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 107));
    // 0x131360: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x131360u;
    SET_GPR_U32(ctx, 31, 0x131368u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x131360u, 0x131368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131368u;
label_131368:
    // 0x131368: 0x8e320000  lw          $s2, 0x0($s1)
    ctx->pc = 0x131368u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x13136c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x13136cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131370: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x131370u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x131374: 0xc116754  jal         func_459D50
    ctx->pc = 0x131374u;
    SET_GPR_U32(ctx, 31, 0x13137Cu);
    ctx->pc = 0x459D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x459D50u, 0x131374u, 0x13137Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13137Cu;
label_13137c:
    // 0x13137c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x13137cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131380: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x131380u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x131384: 0x24b1003c  addiu       $s1, $a1, 0x3C
    ctx->pc = 0x131384u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), 60));
    // 0x131388: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x131388u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13138c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x13138cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x131390: 0xc04bae0  jal         func_12EB80
    ctx->pc = 0x131390u;
    SET_GPR_U32(ctx, 31, 0x131398u);
    ctx->pc = 0x12EB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EB80u, 0x131390u, 0x131398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131398u;
label_131398:
    // 0x131398: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x131398u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13139c: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x13139cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1313a0: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x1313a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x1313a4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1313a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1313a8: 0x2405006c  addiu       $a1, $zero, 0x6C
    ctx->pc = 0x1313a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
    // 0x1313ac: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x1313ACu;
    SET_GPR_U32(ctx, 31, 0x1313B4u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x1313ACu, 0x1313B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1313B4u;
label_1313b4:
    // 0x1313b4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1313b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1313b8: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x1313b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1313bc: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x1313bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1313c0: 0xc116754  jal         func_459D50
    ctx->pc = 0x1313C0u;
    SET_GPR_U32(ctx, 31, 0x1313C8u);
    ctx->pc = 0x459D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x459D50u, 0x1313C0u, 0x1313C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1313C8u;
label_1313c8:
    // 0x1313c8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1313c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1313cc: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x1313ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1313d0: 0x2452003c  addiu       $s2, $v0, 0x3C
    ctx->pc = 0x1313d0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 60));
    // 0x1313d4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1313d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1313d8: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1313d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1313dc: 0xc04bae0  jal         func_12EB80
    ctx->pc = 0x1313DCu;
    SET_GPR_U32(ctx, 31, 0x1313E4u);
    ctx->pc = 0x12EB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EB80u, 0x1313DCu, 0x1313E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1313E4u;
label_1313e4:
    // 0x1313e4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1313e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1313e8: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x1313e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1313ec: 0x24a20030  addiu       $v0, $a1, 0x30
    ctx->pc = 0x1313ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x1313f0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1313f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1313f4: 0x2405006f  addiu       $a1, $zero, 0x6F
    ctx->pc = 0x1313f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 111));
    // 0x1313f8: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x1313F8u;
    SET_GPR_U32(ctx, 31, 0x131400u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x1313F8u, 0x131400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131400u;
label_131400:
    // 0x131400: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x131400u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x131404: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x131404u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x131408: 0xc116754  jal         func_459D50
    ctx->pc = 0x131408u;
    SET_GPR_U32(ctx, 31, 0x131410u);
    ctx->pc = 0x459D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x459D50u, 0x131408u, 0x131410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131410u;
label_131410:
    // 0x131410: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x131410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x131414: 0x2444003c  addiu       $a0, $v0, 0x3C
    ctx->pc = 0x131414u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 60));
    // 0x131418: 0x24130007  addiu       $s3, $zero, 0x7
    ctx->pc = 0x131418u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x13141c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x13141cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131420: 0xc04bae0  jal         func_12EB80
    ctx->pc = 0x131420u;
    SET_GPR_U32(ctx, 31, 0x131428u);
    ctx->pc = 0x12EB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EB80u, 0x131420u, 0x131428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131428u;
label_131428:
    // 0x131428: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x131428u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13142c: 0x8fb10060  lw          $s1, 0x60($sp)
    ctx->pc = 0x13142cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x131430: 0x26340030  addiu       $s4, $s1, 0x30
    ctx->pc = 0x131430u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x131434: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x131434u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131438: 0x24020070  addiu       $v0, $zero, 0x70
    ctx->pc = 0x131438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x13143c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x13143cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131440: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x131440u;
    SET_GPR_U32(ctx, 31, 0x131448u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x131440u, 0x131448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131448u;
label_131448:
    // 0x131448: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x131448u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13144c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x13144cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x131450: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x131450u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131454: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x131454u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x131458: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x131458u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13145c: 0xc116754  jal         func_459D50
    ctx->pc = 0x13145Cu;
    SET_GPR_U32(ctx, 31, 0x131464u);
    ctx->pc = 0x459D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x459D50u, 0x13145Cu, 0x131464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131464u;
label_131464:
    // 0x131464: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x131464u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131468: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x131468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x13146c: 0x2453003c  addiu       $s3, $v0, 0x3C
    ctx->pc = 0x13146cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 60));
    // 0x131470: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x131470u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131474: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x131474u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x131478: 0xc04bae0  jal         func_12EB80
    ctx->pc = 0x131478u;
    SET_GPR_U32(ctx, 31, 0x131480u);
    ctx->pc = 0x12EB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EB80u, 0x131478u, 0x131480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131480u;
label_131480:
    // 0x131480: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x131480u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131484: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x131484u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x131488: 0x24b10030  addiu       $s1, $a1, 0x30
    ctx->pc = 0x131488u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x13148c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13148cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131490: 0x24050073  addiu       $a1, $zero, 0x73
    ctx->pc = 0x131490u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 115));
    // 0x131494: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x131494u;
    SET_GPR_U32(ctx, 31, 0x13149Cu);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x131494u, 0x13149Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13149Cu;
label_13149c:
    // 0x13149c: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x13149cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1314a0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1314a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1314a4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1314a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1314a8: 0xc116754  jal         func_459D50
    ctx->pc = 0x1314A8u;
    SET_GPR_U32(ctx, 31, 0x1314B0u);
    ctx->pc = 0x459D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x459D50u, 0x1314A8u, 0x1314B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1314B0u;
label_1314b0:
    // 0x1314b0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1314b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1314b4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1314b4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1314b8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1314b8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1314bc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1314bcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1314c0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1314c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1314c4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1314c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1314c8: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x1314c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1314cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1314CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1314CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1314D4u;
    // 0x1314d4: 0x0  nop
    ctx->pc = 0x1314d4u;
    // NOP
    // 0x1314d8: 0x0  nop
    ctx->pc = 0x1314d8u;
    // NOP
    // 0x1314dc: 0x0  nop
    ctx->pc = 0x1314dcu;
    // NOP
    ctx->pc = 0x1314e0u;
}
