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

// Function: sub_003C0ED8
// Address: 0x3c0ed8 - 0x3c13f0
void sub_003C0ED8_0x3c0ed8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C0ED8_0x3c0ed8");
#endif

    switch (ctx->pc) {
        case 0x3c0ed8u: goto label_3c0ed8;
        case 0x3c0edcu: goto label_3c0edc;
        case 0x3c0ee0u: goto label_3c0ee0;
        case 0x3c0ee4u: goto label_3c0ee4;
        case 0x3c0ee8u: goto label_3c0ee8;
        case 0x3c0eecu: goto label_3c0eec;
        case 0x3c0ef0u: goto label_3c0ef0;
        case 0x3c0ef4u: goto label_3c0ef4;
        case 0x3c0ef8u: goto label_3c0ef8;
        case 0x3c0efcu: goto label_3c0efc;
        case 0x3c0f00u: goto label_3c0f00;
        case 0x3c0f04u: goto label_3c0f04;
        case 0x3c0f08u: goto label_3c0f08;
        case 0x3c0f0cu: goto label_3c0f0c;
        case 0x3c0f10u: goto label_3c0f10;
        case 0x3c0f14u: goto label_3c0f14;
        case 0x3c0f18u: goto label_3c0f18;
        case 0x3c0f1cu: goto label_3c0f1c;
        case 0x3c0f20u: goto label_3c0f20;
        case 0x3c0f24u: goto label_3c0f24;
        case 0x3c0f28u: goto label_3c0f28;
        case 0x3c0f2cu: goto label_3c0f2c;
        case 0x3c0f30u: goto label_3c0f30;
        case 0x3c0f34u: goto label_3c0f34;
        case 0x3c0f38u: goto label_3c0f38;
        case 0x3c0f3cu: goto label_3c0f3c;
        case 0x3c0f40u: goto label_3c0f40;
        case 0x3c0f44u: goto label_3c0f44;
        case 0x3c0f48u: goto label_3c0f48;
        case 0x3c0f4cu: goto label_3c0f4c;
        case 0x3c0f50u: goto label_3c0f50;
        case 0x3c0f54u: goto label_3c0f54;
        case 0x3c0f58u: goto label_3c0f58;
        case 0x3c0f5cu: goto label_3c0f5c;
        case 0x3c0f60u: goto label_3c0f60;
        case 0x3c0f64u: goto label_3c0f64;
        case 0x3c0f68u: goto label_3c0f68;
        case 0x3c0f6cu: goto label_3c0f6c;
        case 0x3c0f70u: goto label_3c0f70;
        case 0x3c0f74u: goto label_3c0f74;
        case 0x3c0f78u: goto label_3c0f78;
        case 0x3c0f7cu: goto label_3c0f7c;
        case 0x3c0f80u: goto label_3c0f80;
        case 0x3c0f84u: goto label_3c0f84;
        case 0x3c0f88u: goto label_3c0f88;
        case 0x3c0f8cu: goto label_3c0f8c;
        case 0x3c0f90u: goto label_3c0f90;
        case 0x3c0f94u: goto label_3c0f94;
        case 0x3c0f98u: goto label_3c0f98;
        case 0x3c0f9cu: goto label_3c0f9c;
        case 0x3c0fa0u: goto label_3c0fa0;
        case 0x3c0fa4u: goto label_3c0fa4;
        case 0x3c0fa8u: goto label_3c0fa8;
        case 0x3c0facu: goto label_3c0fac;
        case 0x3c0fb0u: goto label_3c0fb0;
        case 0x3c0fb4u: goto label_3c0fb4;
        case 0x3c0fb8u: goto label_3c0fb8;
        case 0x3c0fbcu: goto label_3c0fbc;
        case 0x3c0fc0u: goto label_3c0fc0;
        case 0x3c0fc4u: goto label_3c0fc4;
        case 0x3c0fc8u: goto label_3c0fc8;
        case 0x3c0fccu: goto label_3c0fcc;
        case 0x3c0fd0u: goto label_3c0fd0;
        case 0x3c0fd4u: goto label_3c0fd4;
        case 0x3c0fd8u: goto label_3c0fd8;
        case 0x3c0fdcu: goto label_3c0fdc;
        case 0x3c0fe0u: goto label_3c0fe0;
        case 0x3c0fe4u: goto label_3c0fe4;
        case 0x3c0fe8u: goto label_3c0fe8;
        case 0x3c0fecu: goto label_3c0fec;
        case 0x3c0ff0u: goto label_3c0ff0;
        case 0x3c0ff4u: goto label_3c0ff4;
        case 0x3c0ff8u: goto label_3c0ff8;
        case 0x3c0ffcu: goto label_3c0ffc;
        case 0x3c1000u: goto label_3c1000;
        case 0x3c1004u: goto label_3c1004;
        case 0x3c1008u: goto label_3c1008;
        case 0x3c100cu: goto label_3c100c;
        case 0x3c1010u: goto label_3c1010;
        case 0x3c1014u: goto label_3c1014;
        case 0x3c1018u: goto label_3c1018;
        case 0x3c101cu: goto label_3c101c;
        case 0x3c1020u: goto label_3c1020;
        case 0x3c1024u: goto label_3c1024;
        case 0x3c1028u: goto label_3c1028;
        case 0x3c102cu: goto label_3c102c;
        case 0x3c1030u: goto label_3c1030;
        case 0x3c1034u: goto label_3c1034;
        case 0x3c1038u: goto label_3c1038;
        case 0x3c103cu: goto label_3c103c;
        case 0x3c1040u: goto label_3c1040;
        case 0x3c1044u: goto label_3c1044;
        case 0x3c1048u: goto label_3c1048;
        case 0x3c104cu: goto label_3c104c;
        case 0x3c1050u: goto label_3c1050;
        case 0x3c1054u: goto label_3c1054;
        case 0x3c1058u: goto label_3c1058;
        case 0x3c105cu: goto label_3c105c;
        case 0x3c1060u: goto label_3c1060;
        case 0x3c1064u: goto label_3c1064;
        case 0x3c1068u: goto label_3c1068;
        case 0x3c106cu: goto label_3c106c;
        case 0x3c1070u: goto label_3c1070;
        case 0x3c1074u: goto label_3c1074;
        case 0x3c1078u: goto label_3c1078;
        case 0x3c107cu: goto label_3c107c;
        case 0x3c1080u: goto label_3c1080;
        case 0x3c1084u: goto label_3c1084;
        case 0x3c1088u: goto label_3c1088;
        case 0x3c108cu: goto label_3c108c;
        case 0x3c1090u: goto label_3c1090;
        case 0x3c1094u: goto label_3c1094;
        case 0x3c1098u: goto label_3c1098;
        case 0x3c109cu: goto label_3c109c;
        case 0x3c10a0u: goto label_3c10a0;
        case 0x3c10a4u: goto label_3c10a4;
        case 0x3c10a8u: goto label_3c10a8;
        case 0x3c10acu: goto label_3c10ac;
        case 0x3c10b0u: goto label_3c10b0;
        case 0x3c10b4u: goto label_3c10b4;
        case 0x3c10b8u: goto label_3c10b8;
        case 0x3c10bcu: goto label_3c10bc;
        case 0x3c10c0u: goto label_3c10c0;
        case 0x3c10c4u: goto label_3c10c4;
        case 0x3c10c8u: goto label_3c10c8;
        case 0x3c10ccu: goto label_3c10cc;
        case 0x3c10d0u: goto label_3c10d0;
        case 0x3c10d4u: goto label_3c10d4;
        case 0x3c10d8u: goto label_3c10d8;
        case 0x3c10dcu: goto label_3c10dc;
        case 0x3c10e0u: goto label_3c10e0;
        case 0x3c10e4u: goto label_3c10e4;
        case 0x3c10e8u: goto label_3c10e8;
        case 0x3c10ecu: goto label_3c10ec;
        case 0x3c10f0u: goto label_3c10f0;
        case 0x3c10f4u: goto label_3c10f4;
        case 0x3c10f8u: goto label_3c10f8;
        case 0x3c10fcu: goto label_3c10fc;
        case 0x3c1100u: goto label_3c1100;
        case 0x3c1104u: goto label_3c1104;
        case 0x3c1108u: goto label_3c1108;
        case 0x3c110cu: goto label_3c110c;
        case 0x3c1110u: goto label_3c1110;
        case 0x3c1114u: goto label_3c1114;
        case 0x3c1118u: goto label_3c1118;
        case 0x3c111cu: goto label_3c111c;
        case 0x3c1120u: goto label_3c1120;
        case 0x3c1124u: goto label_3c1124;
        case 0x3c1128u: goto label_3c1128;
        case 0x3c112cu: goto label_3c112c;
        case 0x3c1130u: goto label_3c1130;
        case 0x3c1134u: goto label_3c1134;
        case 0x3c1138u: goto label_3c1138;
        case 0x3c113cu: goto label_3c113c;
        case 0x3c1140u: goto label_3c1140;
        case 0x3c1144u: goto label_3c1144;
        case 0x3c1148u: goto label_3c1148;
        case 0x3c114cu: goto label_3c114c;
        case 0x3c1150u: goto label_3c1150;
        case 0x3c1154u: goto label_3c1154;
        case 0x3c1158u: goto label_3c1158;
        case 0x3c115cu: goto label_3c115c;
        case 0x3c1160u: goto label_3c1160;
        case 0x3c1164u: goto label_3c1164;
        case 0x3c1168u: goto label_3c1168;
        case 0x3c116cu: goto label_3c116c;
        case 0x3c1170u: goto label_3c1170;
        case 0x3c1174u: goto label_3c1174;
        case 0x3c1178u: goto label_3c1178;
        case 0x3c117cu: goto label_3c117c;
        case 0x3c1180u: goto label_3c1180;
        case 0x3c1184u: goto label_3c1184;
        case 0x3c1188u: goto label_3c1188;
        case 0x3c118cu: goto label_3c118c;
        case 0x3c1190u: goto label_3c1190;
        case 0x3c1194u: goto label_3c1194;
        case 0x3c1198u: goto label_3c1198;
        case 0x3c119cu: goto label_3c119c;
        case 0x3c11a0u: goto label_3c11a0;
        case 0x3c11a4u: goto label_3c11a4;
        case 0x3c11a8u: goto label_3c11a8;
        case 0x3c11acu: goto label_3c11ac;
        case 0x3c11b0u: goto label_3c11b0;
        case 0x3c11b4u: goto label_3c11b4;
        case 0x3c11b8u: goto label_3c11b8;
        case 0x3c11bcu: goto label_3c11bc;
        case 0x3c11c0u: goto label_3c11c0;
        case 0x3c11c4u: goto label_3c11c4;
        case 0x3c11c8u: goto label_3c11c8;
        case 0x3c11ccu: goto label_3c11cc;
        case 0x3c11d0u: goto label_3c11d0;
        case 0x3c11d4u: goto label_3c11d4;
        case 0x3c11d8u: goto label_3c11d8;
        case 0x3c11dcu: goto label_3c11dc;
        case 0x3c11e0u: goto label_3c11e0;
        case 0x3c11e4u: goto label_3c11e4;
        case 0x3c11e8u: goto label_3c11e8;
        case 0x3c11ecu: goto label_3c11ec;
        case 0x3c11f0u: goto label_3c11f0;
        case 0x3c11f4u: goto label_3c11f4;
        case 0x3c11f8u: goto label_3c11f8;
        case 0x3c11fcu: goto label_3c11fc;
        case 0x3c1200u: goto label_3c1200;
        case 0x3c1204u: goto label_3c1204;
        case 0x3c1208u: goto label_3c1208;
        case 0x3c120cu: goto label_3c120c;
        case 0x3c1210u: goto label_3c1210;
        case 0x3c1214u: goto label_3c1214;
        case 0x3c1218u: goto label_3c1218;
        case 0x3c121cu: goto label_3c121c;
        case 0x3c1220u: goto label_3c1220;
        case 0x3c1224u: goto label_3c1224;
        case 0x3c1228u: goto label_3c1228;
        case 0x3c122cu: goto label_3c122c;
        case 0x3c1230u: goto label_3c1230;
        case 0x3c1234u: goto label_3c1234;
        case 0x3c1238u: goto label_3c1238;
        case 0x3c123cu: goto label_3c123c;
        case 0x3c1240u: goto label_3c1240;
        case 0x3c1244u: goto label_3c1244;
        case 0x3c1248u: goto label_3c1248;
        case 0x3c124cu: goto label_3c124c;
        case 0x3c1250u: goto label_3c1250;
        case 0x3c1254u: goto label_3c1254;
        case 0x3c1258u: goto label_3c1258;
        case 0x3c125cu: goto label_3c125c;
        case 0x3c1260u: goto label_3c1260;
        case 0x3c1264u: goto label_3c1264;
        case 0x3c1268u: goto label_3c1268;
        case 0x3c126cu: goto label_3c126c;
        case 0x3c1270u: goto label_3c1270;
        case 0x3c1274u: goto label_3c1274;
        case 0x3c1278u: goto label_3c1278;
        case 0x3c127cu: goto label_3c127c;
        case 0x3c1280u: goto label_3c1280;
        case 0x3c1284u: goto label_3c1284;
        case 0x3c1288u: goto label_3c1288;
        case 0x3c128cu: goto label_3c128c;
        case 0x3c1290u: goto label_3c1290;
        case 0x3c1294u: goto label_3c1294;
        case 0x3c1298u: goto label_3c1298;
        case 0x3c129cu: goto label_3c129c;
        case 0x3c12a0u: goto label_3c12a0;
        case 0x3c12a4u: goto label_3c12a4;
        case 0x3c12a8u: goto label_3c12a8;
        case 0x3c12acu: goto label_3c12ac;
        case 0x3c12b0u: goto label_3c12b0;
        case 0x3c12b4u: goto label_3c12b4;
        case 0x3c12b8u: goto label_3c12b8;
        case 0x3c12bcu: goto label_3c12bc;
        case 0x3c12c0u: goto label_3c12c0;
        case 0x3c12c4u: goto label_3c12c4;
        case 0x3c12c8u: goto label_3c12c8;
        case 0x3c12ccu: goto label_3c12cc;
        case 0x3c12d0u: goto label_3c12d0;
        case 0x3c12d4u: goto label_3c12d4;
        case 0x3c12d8u: goto label_3c12d8;
        case 0x3c12dcu: goto label_3c12dc;
        case 0x3c12e0u: goto label_3c12e0;
        case 0x3c12e4u: goto label_3c12e4;
        case 0x3c12e8u: goto label_3c12e8;
        case 0x3c12ecu: goto label_3c12ec;
        case 0x3c12f0u: goto label_3c12f0;
        case 0x3c12f4u: goto label_3c12f4;
        case 0x3c12f8u: goto label_3c12f8;
        case 0x3c12fcu: goto label_3c12fc;
        case 0x3c1300u: goto label_3c1300;
        case 0x3c1304u: goto label_3c1304;
        case 0x3c1308u: goto label_3c1308;
        case 0x3c130cu: goto label_3c130c;
        case 0x3c1310u: goto label_3c1310;
        case 0x3c1314u: goto label_3c1314;
        case 0x3c1318u: goto label_3c1318;
        case 0x3c131cu: goto label_3c131c;
        case 0x3c1320u: goto label_3c1320;
        case 0x3c1324u: goto label_3c1324;
        case 0x3c1328u: goto label_3c1328;
        case 0x3c132cu: goto label_3c132c;
        case 0x3c1330u: goto label_3c1330;
        case 0x3c1334u: goto label_3c1334;
        case 0x3c1338u: goto label_3c1338;
        case 0x3c133cu: goto label_3c133c;
        case 0x3c1340u: goto label_3c1340;
        case 0x3c1344u: goto label_3c1344;
        case 0x3c1348u: goto label_3c1348;
        case 0x3c134cu: goto label_3c134c;
        case 0x3c1350u: goto label_3c1350;
        case 0x3c1354u: goto label_3c1354;
        case 0x3c1358u: goto label_3c1358;
        case 0x3c135cu: goto label_3c135c;
        case 0x3c1360u: goto label_3c1360;
        case 0x3c1364u: goto label_3c1364;
        case 0x3c1368u: goto label_3c1368;
        case 0x3c136cu: goto label_3c136c;
        case 0x3c1370u: goto label_3c1370;
        case 0x3c1374u: goto label_3c1374;
        case 0x3c1378u: goto label_3c1378;
        case 0x3c137cu: goto label_3c137c;
        case 0x3c1380u: goto label_3c1380;
        case 0x3c1384u: goto label_3c1384;
        case 0x3c1388u: goto label_3c1388;
        case 0x3c138cu: goto label_3c138c;
        case 0x3c1390u: goto label_3c1390;
        case 0x3c1394u: goto label_3c1394;
        case 0x3c1398u: goto label_3c1398;
        case 0x3c139cu: goto label_3c139c;
        case 0x3c13a0u: goto label_3c13a0;
        case 0x3c13a4u: goto label_3c13a4;
        case 0x3c13a8u: goto label_3c13a8;
        case 0x3c13acu: goto label_3c13ac;
        case 0x3c13b0u: goto label_3c13b0;
        case 0x3c13b4u: goto label_3c13b4;
        case 0x3c13b8u: goto label_3c13b8;
        case 0x3c13bcu: goto label_3c13bc;
        case 0x3c13c0u: goto label_3c13c0;
        case 0x3c13c4u: goto label_3c13c4;
        case 0x3c13c8u: goto label_3c13c8;
        case 0x3c13ccu: goto label_3c13cc;
        case 0x3c13d0u: goto label_3c13d0;
        case 0x3c13d4u: goto label_3c13d4;
        case 0x3c13d8u: goto label_3c13d8;
        case 0x3c13dcu: goto label_3c13dc;
        case 0x3c13e0u: goto label_3c13e0;
        case 0x3c13e4u: goto label_3c13e4;
        case 0x3c13e8u: goto label_3c13e8;
        case 0x3c13ecu: goto label_3c13ec;
        default: break;
    }

    ctx->pc = 0x3c0ed8u;

label_3c0ed8:
    // 0x3c0ed8: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x3c0ed8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_3c0edc:
    // 0x3c0edc: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x3c0edcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
label_3c0ee0:
    // 0x3c0ee0: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x3c0ee0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3c0ee4:
    // 0x3c0ee4: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x3c0ee4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
label_3c0ee8:
    // 0x3c0ee8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3c0ee8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3c0eec:
    // 0x3c0eec: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x3c0eecu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3c0ef0:
    // 0x3c0ef0: 0x27a70024  addiu       $a3, $sp, 0x24
    ctx->pc = 0x3c0ef0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
label_3c0ef4:
    // 0x3c0ef4: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x3c0ef4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_3c0ef8:
    // 0x3c0ef8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3c0ef8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3c0efc:
    // 0x3c0efc: 0x7fb70050  sq          $s7, 0x50($sp)
    ctx->pc = 0x3c0efcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 23));
label_3c0f00:
    // 0x3c0f00: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x3c0f00u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_3c0f04:
    // 0x3c0f04: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x3c0f04u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3c0f08:
    // 0x3c0f08: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x3c0f08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
label_3c0f0c:
    // 0x3c0f0c: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x3c0f0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
label_3c0f10:
    // 0x3c0f10: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x3c0f10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
label_3c0f14:
    // 0x3c0f14: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x3c0f14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
label_3c0f18:
    // 0x3c0f18: 0x7fbe0040  sq          $fp, 0x40($sp)
    ctx->pc = 0x3c0f18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 30));
label_3c0f1c:
    // 0x3c0f1c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3c0f1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_3c0f20:
    // 0x3c0f20: 0xc103322  jal         func_40CC88
label_3c0f24:
    if (ctx->pc == 0x3C0F24u) {
        ctx->pc = 0x3C0F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0F20u;
        // 0x3c0f24: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C0F28u;
        goto label_3c0f28;
    }
    ctx->pc = 0x3C0F20u;
    SET_GPR_U32(ctx, 31, 0x3C0F28u);
    ctx->pc = 0x3C0F24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C0F20u;
    // 0x3c0f24: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40CC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40CC88u, 0x3C0F20u, 0x3C0F28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C0F28u;
label_3c0f28:
    // 0x3c0f28: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_3c0f2c:
    if (ctx->pc == 0x3C0F2Cu) {
        ctx->pc = 0x3C0F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0F28u;
        // 0x3c0f2c: 0x8fa20024  lw          $v0, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C0F30u;
        goto label_3c0f30;
    }
    ctx->pc = 0x3C0F28u;
    {
        const bool branch_taken_0x3c0f28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C0F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0F28u;
        // 0x3c0f2c: 0x8fa20024  lw          $v0, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c0f28) {
            ctx->pc = 0x3C0F68u;
            goto label_3c0f68;
        }
    }
    ctx->pc = 0x3C0F30u;
label_3c0f30:
    // 0x3c0f30: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x3c0f30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_3c0f34:
    // 0x3c0f34: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x3c0f34u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_3c0f38:
    // 0x3c0f38: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_3c0f3c:
    if (ctx->pc == 0x3C0F3Cu) {
        ctx->pc = 0x3C0F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0F38u;
        // 0x3c0f3c: 0x8fa60020  lw          $a2, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C0F40u;
        goto label_3c0f40;
    }
    ctx->pc = 0x3C0F38u;
    {
        const bool branch_taken_0x3c0f38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C0F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0F38u;
        // 0x3c0f3c: 0x8fa60020  lw          $a2, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c0f38) {
            ctx->pc = 0x3C0F54u;
            goto label_3c0f54;
        }
    }
    ctx->pc = 0x3C0F40u;
label_3c0f40:
    // 0x3c0f40: 0x8e22002c  lw          $v0, 0x2C($s1)
    ctx->pc = 0x3c0f40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_3c0f44:
    // 0x3c0f44: 0x40f809  jalr        $v0
label_3c0f48:
    if (ctx->pc == 0x3C0F48u) {
        ctx->pc = 0x3C0F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0F44u;
        // 0x3c0f48: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C0F4Cu;
        goto label_3c0f4c;
    }
    ctx->pc = 0x3C0F44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3C0F4Cu);
        ctx->pc = 0x3C0F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0F44u;
        // 0x3c0f48: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C0F44u, 0x3C0F4Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C0F4Cu;
label_3c0f4c:
    // 0x3c0f4c: 0x100000b0  b           . + 4 + (0xB0 << 2)
label_3c0f50:
    if (ctx->pc == 0x3C0F50u) {
        ctx->pc = 0x3C0F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0F4Cu;
        // 0x3c0f50: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C0F54u;
        goto label_3c0f54;
    }
    ctx->pc = 0x3C0F4Cu;
    {
        const bool branch_taken_0x3c0f4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C0F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0F4Cu;
        // 0x3c0f50: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c0f4c) {
            ctx->pc = 0x3C1210u;
            goto label_3c1210;
        }
    }
    ctx->pc = 0x3C0F54u;
label_3c0f54:
    // 0x3c0f54: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3c0f54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3c0f58:
    // 0x3c0f58: 0xc10480a  jal         func_412028
label_3c0f5c:
    if (ctx->pc == 0x3C0F5Cu) {
        ctx->pc = 0x3C0F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0F58u;
        // 0x3c0f5c: 0x27a50028  addiu       $a1, $sp, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C0F60u;
        goto label_3c0f60;
    }
    ctx->pc = 0x3C0F58u;
    SET_GPR_U32(ctx, 31, 0x3C0F60u);
    ctx->pc = 0x3C0F5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C0F58u;
    // 0x3c0f5c: 0x27a50028  addiu       $a1, $sp, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x412028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x412028u, 0x3C0F58u, 0x3C0F60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C0F60u;
label_3c0f60:
    // 0x3c0f60: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_3c0f64:
    if (ctx->pc == 0x3C0F64u) {
        ctx->pc = 0x3C0F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0F60u;
        // 0x3c0f64: 0x3c020062  lui         $v0, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C0F68u;
        goto label_3c0f68;
    }
    ctx->pc = 0x3C0F60u;
    {
        const bool branch_taken_0x3c0f60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C0F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0F60u;
        // 0x3c0f64: 0x3c020062  lui         $v0, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c0f60) {
            ctx->pc = 0x3C0F70u;
            goto label_3c0f70;
        }
    }
    ctx->pc = 0x3C0F68u;
label_3c0f68:
    // 0x3c0f68: 0x100000a8  b           . + 4 + (0xA8 << 2)
label_3c0f6c:
    if (ctx->pc == 0x3C0F6Cu) {
        ctx->pc = 0x3C0F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0F68u;
        // 0x3c0f6c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C0F70u;
        goto label_3c0f70;
    }
    ctx->pc = 0x3C0F68u;
    {
        const bool branch_taken_0x3c0f68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C0F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0F68u;
        // 0x3c0f6c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c0f68) {
            ctx->pc = 0x3C120Cu;
            goto label_3c120c;
        }
    }
    ctx->pc = 0x3C0F70u;
label_3c0f70:
    // 0x3c0f70: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x3c0f70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3c0f74:
    // 0x3c0f74: 0x2452e880  addiu       $s2, $v0, -0x1780
    ctx->pc = 0x3c0f74u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
label_3c0f78:
    // 0x3c0f78: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x3c0f78u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_3c0f7c:
    // 0x3c0f7c: 0x8e420108  lw          $v0, 0x108($s2)
    ctx->pc = 0x3c0f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 264)));
label_3c0f80:
    // 0x3c0f80: 0x652825  or          $a1, $v1, $a1
    ctx->pc = 0x3c0f80u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
label_3c0f84:
    // 0x3c0f84: 0x40f809  jalr        $v0
label_3c0f88:
    if (ctx->pc == 0x3C0F88u) {
        ctx->pc = 0x3C0F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0F84u;
        // 0x3c0f88: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C0F8Cu;
        goto label_3c0f8c;
    }
    ctx->pc = 0x3C0F84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3C0F8Cu);
        ctx->pc = 0x3C0F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0F84u;
        // 0x3c0f88: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C0F84u, 0x3C0F8Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C0F8Cu;
label_3c0f8c:
    // 0x3c0f8c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3c0f8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3c0f90:
    // 0x3c0f90: 0x1600000d  bnez        $s0, . + 4 + (0xD << 2)
label_3c0f94:
    if (ctx->pc == 0x3C0F94u) {
        ctx->pc = 0x3C0F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0F90u;
        // 0x3c0f94: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C0F98u;
        goto label_3c0f98;
    }
    ctx->pc = 0x3C0F90u;
    {
        const bool branch_taken_0x3c0f90 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C0F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0F90u;
        // 0x3c0f94: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c0f90) {
            ctx->pc = 0x3C0FC8u;
            goto label_3c0fc8;
        }
    }
    ctx->pc = 0x3C0F98u;
label_3c0f98:
    // 0x3c0f98: 0x240201bf  addiu       $v0, $zero, 0x1BF
    ctx->pc = 0x3c0f98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 447));
label_3c0f9c:
    // 0x3c0f9c: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x3c0f9cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_3c0fa0:
    // 0x3c0fa0: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x3c0fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_3c0fa4:
    // 0x3c0fa4: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x3c0fa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_3c0fa8:
    // 0x3c0fa8: 0xc1035f6  jal         func_40D7D8
label_3c0fac:
    if (ctx->pc == 0x3C0FACu) {
        ctx->pc = 0x3C0FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0FA8u;
        // 0x3c0fac: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C0FB0u;
        goto label_3c0fb0;
    }
    ctx->pc = 0x3C0FA8u;
    SET_GPR_U32(ctx, 31, 0x3C0FB0u);
    ctx->pc = 0x3C0FACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C0FA8u;
    // 0x3c0fac: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x3C0FA8u, 0x3C0FB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C0FB0u;
label_3c0fb0:
    // 0x3c0fb0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3c0fb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3c0fb4:
    // 0x3c0fb4: 0xc103628  jal         func_40D8A0
label_3c0fb8:
    if (ctx->pc == 0x3C0FB8u) {
        ctx->pc = 0x3C0FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0FB4u;
        // 0x3c0fb8: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C0FBCu;
        goto label_3c0fbc;
    }
    ctx->pc = 0x3C0FB4u;
    SET_GPR_U32(ctx, 31, 0x3C0FBCu);
    ctx->pc = 0x3C0FB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C0FB4u;
    // 0x3c0fb8: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x3C0FB4u, 0x3C0FBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C0FBCu;
label_3c0fbc:
    // 0x3c0fbc: 0x1000000a  b           . + 4 + (0xA << 2)
label_3c0fc0:
    if (ctx->pc == 0x3C0FC0u) {
        ctx->pc = 0x3C0FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0FBCu;
        // 0x3c0fc0: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C0FC4u;
        goto label_3c0fc4;
    }
    ctx->pc = 0x3C0FBCu;
    {
        const bool branch_taken_0x3c0fbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C0FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0FBCu;
        // 0x3c0fc0: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c0fbc) {
            ctx->pc = 0x3C0FE8u;
            goto label_3c0fe8;
        }
    }
    ctx->pc = 0x3C0FC4u;
label_3c0fc4:
    // 0x3c0fc4: 0x0  nop
    ctx->pc = 0x3c0fc4u;
    // NOP
label_3c0fc8:
    // 0x3c0fc8: 0xc0f0758  jal         func_3C1D60
label_3c0fcc:
    if (ctx->pc == 0x3C0FCCu) {
        ctx->pc = 0x3C0FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0FC8u;
        // 0x3c0fcc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C0FD0u;
        goto label_3c0fd0;
    }
    ctx->pc = 0x3C0FC8u;
    SET_GPR_U32(ctx, 31, 0x3C0FD0u);
    ctx->pc = 0x3C0FCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C0FC8u;
    // 0x3c0fcc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C1D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C1D60u, 0x3C0FC8u, 0x3C0FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C0FD0u;
label_3c0fd0:
    // 0x3c0fd0: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_3c0fd4:
    if (ctx->pc == 0x3C0FD4u) {
        ctx->pc = 0x3C0FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0FD0u;
        // 0x3c0fd4: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C0FD8u;
        goto label_3c0fd8;
    }
    ctx->pc = 0x3C0FD0u;
    {
        const bool branch_taken_0x3c0fd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c0fd0) {
            ctx->pc = 0x3C0FD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C0FD0u;
            // 0x3c0fd4: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C0FE8u;
            goto label_3c0fe8;
        }
    }
    ctx->pc = 0x3C0FD8u;
label_3c0fd8:
    // 0x3c0fd8: 0x8e42010c  lw          $v0, 0x10C($s2)
    ctx->pc = 0x3c0fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 268)));
label_3c0fdc:
    // 0x3c0fdc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3c0fdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c0fe0:
    // 0x3c0fe0: 0x40f809  jalr        $v0
label_3c0fe4:
    if (ctx->pc == 0x3C0FE4u) {
        ctx->pc = 0x3C0FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0FE0u;
        // 0x3c0fe4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C0FE8u;
        goto label_3c0fe8;
    }
    ctx->pc = 0x3C0FE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3C0FE8u);
        ctx->pc = 0x3C0FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0FE0u;
        // 0x3c0fe4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C0FE0u, 0x3C0FE8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C0FE8u;
label_3c0fe8:
    // 0x3c0fe8: 0x1240ffdf  beqz        $s2, . + 4 + (-0x21 << 2)
label_3c0fec:
    if (ctx->pc == 0x3C0FECu) {
        ctx->pc = 0x3C0FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0FE8u;
        // 0x3c0fec: 0x8fa20028  lw          $v0, 0x28($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C0FF0u;
        goto label_3c0ff0;
    }
    ctx->pc = 0x3C0FE8u;
    {
        const bool branch_taken_0x3c0fe8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C0FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0FE8u;
        // 0x3c0fec: 0x8fa20028  lw          $v0, 0x28($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c0fe8) {
            ctx->pc = 0x3C0F68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c0f68;
        }
    }
    ctx->pc = 0x3C0FF0u;
label_3c0ff0:
    // 0x3c0ff0: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x3c0ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_3c0ff4:
    // 0x3c0ff4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x3c0ff4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_3c0ff8:
    // 0x3c0ff8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3c0ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_3c0ffc:
    // 0x3c0ffc: 0x10430082  beq         $v0, $v1, . + 4 + (0x82 << 2)
label_3c1000:
    if (ctx->pc == 0x3C1000u) {
        ctx->pc = 0x3C1000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0FFCu;
        // 0x3c1000: 0xafa20028  sw          $v0, 0x28($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1004u;
        goto label_3c1004;
    }
    ctx->pc = 0x3C0FFCu;
    {
        const bool branch_taken_0x3c0ffc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x3C1000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0FFCu;
        // 0x3c1000: 0xafa20028  sw          $v0, 0x28($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c0ffc) {
            ctx->pc = 0x3C1208u;
            goto label_3c1208;
        }
    }
    ctx->pc = 0x3C1004u;
label_3c1004:
    // 0x3c1004: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x3c1004u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_3c1008:
    // 0x3c1008: 0x3c13ffff  lui         $s3, 0xFFFF
    ctx->pc = 0x3c1008u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)65535 << 16));
label_3c100c:
    // 0x3c100c: 0x245ee880  addiu       $fp, $v0, -0x1780
    ctx->pc = 0x3c100cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
label_3c1010:
    // 0x3c1010: 0x3c150003  lui         $s5, 0x3
    ctx->pc = 0x3c1010u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)3 << 16));
label_3c1014:
    // 0x3c1014: 0x3673ffff  ori         $s3, $s3, 0xFFFF
    ctx->pc = 0x3c1014u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)65535);
label_3c1018:
    // 0x3c1018: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x3c1018u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_3c101c:
    // 0x3c101c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3c101cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3c1020:
    // 0x3c1020: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x3c1020u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3c1024:
    // 0x3c1024: 0xc103322  jal         func_40CC88
label_3c1028:
    if (ctx->pc == 0x3C1028u) {
        ctx->pc = 0x3C1028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1024u;
        // 0x3c1028: 0x2c0382d  daddu       $a3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C102Cu;
        goto label_3c102c;
    }
    ctx->pc = 0x3C1024u;
    SET_GPR_U32(ctx, 31, 0x3C102Cu);
    ctx->pc = 0x3C1028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C1024u;
    // 0x3c1028: 0x2c0382d  daddu       $a3, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40CC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40CC88u, 0x3C1024u, 0x3C102Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C102Cu;
label_3c102c:
    // 0x3c102c: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_3c1030:
    if (ctx->pc == 0x3C1030u) {
        ctx->pc = 0x3C1030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C102Cu;
        // 0x3c1030: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1034u;
        goto label_3c1034;
    }
    ctx->pc = 0x3C102Cu;
    {
        const bool branch_taken_0x3c102c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c102c) {
            ctx->pc = 0x3C1030u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C102Cu;
            // 0x3c1030: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C1050u;
            goto label_3c1050;
        }
    }
    ctx->pc = 0x3C1034u;
label_3c1034:
    // 0x3c1034: 0x8e220028  lw          $v0, 0x28($s1)
    ctx->pc = 0x3c1034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_3c1038:
    // 0x3c1038: 0x40f809  jalr        $v0
label_3c103c:
    if (ctx->pc == 0x3C103Cu) {
        ctx->pc = 0x3C103Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1038u;
        // 0x3c103c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1040u;
        goto label_3c1040;
    }
    ctx->pc = 0x3C1038u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3C1040u);
        ctx->pc = 0x3C103Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1038u;
        // 0x3c103c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C1038u, 0x3C1040u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C1040u;
label_3c1040:
    // 0x3c1040: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3c1040u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3c1044:
    // 0x3c1044: 0x56000060  bnel        $s0, $zero, . + 4 + (0x60 << 2)
label_3c1048:
    if (ctx->pc == 0x3C1048u) {
        ctx->pc = 0x3C1048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1044u;
        // 0x3c1048: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C104Cu;
        goto label_3c104c;
    }
    ctx->pc = 0x3C1044u;
    {
        const bool branch_taken_0x3c1044 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c1044) {
            ctx->pc = 0x3C1048u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C1044u;
            // 0x3c1048: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C11C8u;
            goto label_3c11c8;
        }
    }
    ctx->pc = 0x3C104Cu;
label_3c104c:
    // 0x3c104c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x3c104cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3c1050:
    // 0x3c1050: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x3c1050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_3c1054:
    // 0x3c1054: 0x52420001  beql        $s2, $v0, . + 4 + (0x1 << 2)
label_3c1058:
    if (ctx->pc == 0x3C1058u) {
        ctx->pc = 0x3C1058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1054u;
        // 0x3c1058: 0xac600014  sw          $zero, 0x14($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C105Cu;
        goto label_3c105c;
    }
    ctx->pc = 0x3C1054u;
    {
        const bool branch_taken_0x3c1054 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x3c1054) {
            ctx->pc = 0x3C1058u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C1054u;
            // 0x3c1058: 0xac600014  sw          $zero, 0x14($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C105Cu;
            goto label_3c105c;
        }
    }
    ctx->pc = 0x3C105Cu;
label_3c105c:
    // 0x3c105c: 0x8e510000  lw          $s1, 0x0($s2)
    ctx->pc = 0x3c105cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3c1060:
    // 0x3c1060: 0xc10378e  jal         func_40DE38
label_3c1064:
    if (ctx->pc == 0x3C1064u) {
        ctx->pc = 0x3C1064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1060u;
        // 0x3c1064: 0x8e240010  lw          $a0, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1068u;
        goto label_3c1068;
    }
    ctx->pc = 0x3C1060u;
    SET_GPR_U32(ctx, 31, 0x3C1068u);
    ctx->pc = 0x3C1064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C1060u;
    // 0x3c1064: 0x8e240010  lw          $a0, 0x10($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DE38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DE38u, 0x3C1060u, 0x3C1068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C1068u;
label_3c1068:
    // 0x3c1068: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x3c1068u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_3c106c:
    // 0x3c106c: 0xc103790  jal         func_40DE40
label_3c1070:
    if (ctx->pc == 0x3C1070u) {
        ctx->pc = 0x3C1070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C106Cu;
        // 0x3c1070: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1074u;
        goto label_3c1074;
    }
    ctx->pc = 0x3C106Cu;
    SET_GPR_U32(ctx, 31, 0x3C1074u);
    ctx->pc = 0x3C1070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C106Cu;
    // 0x3c1070: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DE40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DE40u, 0x3C106Cu, 0x3C1074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C1074u;
label_3c1074:
    // 0x3c1074: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3c1074u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3c1078:
    // 0x3c1078: 0x1205002c  beq         $s0, $a1, . + 4 + (0x2C << 2)
label_3c107c:
    if (ctx->pc == 0x3C107Cu) {
        ctx->pc = 0x3C107Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1078u;
        // 0x3c107c: 0xb01023  subu        $v0, $a1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1080u;
        goto label_3c1080;
    }
    ctx->pc = 0x3C1078u;
    {
        const bool branch_taken_0x3c1078 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 5));
        ctx->pc = 0x3C107Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1078u;
        // 0x3c107c: 0xb01023  subu        $v0, $a1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c1078) {
            ctx->pc = 0x3C112Cu;
            goto label_3c112c;
        }
    }
    ctx->pc = 0x3C1080u;
label_3c1080:
    // 0x3c1080: 0x3043000f  andi        $v1, $v0, 0xF
    ctx->pc = 0x3c1080u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
label_3c1084:
    // 0x3c1084: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
label_3c1088:
    if (ctx->pc == 0x3C1088u) {
        ctx->pc = 0x3C1088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1084u;
        // 0x3c1088: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C108Cu;
        goto label_3c108c;
    }
    ctx->pc = 0x3C1084u;
    {
        const bool branch_taken_0x3c1084 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C1088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1084u;
        // 0x3c1088: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c1084) {
            ctx->pc = 0x3C10ECu;
            goto label_3c10ec;
        }
    }
    ctx->pc = 0x3C108Cu;
label_3c108c:
    // 0x3c108c: 0x28620005  slti        $v0, $v1, 0x5
    ctx->pc = 0x3c108cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)5) ? 1 : 0);
label_3c1090:
    // 0x3c1090: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
label_3c1094:
    if (ctx->pc == 0x3C1094u) {
        ctx->pc = 0x3C1094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1090u;
        // 0x3c1094: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1098u;
        goto label_3c1098;
    }
    ctx->pc = 0x3C1090u;
    {
        const bool branch_taken_0x3c1090 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c1090) {
            ctx->pc = 0x3C1094u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C1090u;
            // 0x3c1094: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C10D8u;
            goto label_3c10d8;
        }
    }
    ctx->pc = 0x3C1098u;
label_3c1098:
    // 0x3c1098: 0x28620009  slti        $v0, $v1, 0x9
    ctx->pc = 0x3c1098u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)9) ? 1 : 0);
label_3c109c:
    // 0x3c109c: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
label_3c10a0:
    if (ctx->pc == 0x3C10A0u) {
        ctx->pc = 0x3C10A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C109Cu;
        // 0x3c10a0: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C10A4u;
        goto label_3c10a4;
    }
    ctx->pc = 0x3C109Cu;
    {
        const bool branch_taken_0x3c109c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c109c) {
            ctx->pc = 0x3C10A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C109Cu;
            // 0x3c10a0: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C10C8u;
            goto label_3c10c8;
        }
    }
    ctx->pc = 0x3C10A4u;
label_3c10a4:
    // 0x3c10a4: 0x2862000d  slti        $v0, $v1, 0xD
    ctx->pc = 0x3c10a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)13) ? 1 : 0);
label_3c10a8:
    // 0x3c10a8: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
label_3c10ac:
    if (ctx->pc == 0x3C10ACu) {
        ctx->pc = 0x3C10ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C10A8u;
        // 0x3c10ac: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C10B0u;
        goto label_3c10b0;
    }
    ctx->pc = 0x3C10A8u;
    {
        const bool branch_taken_0x3c10a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c10a8) {
            ctx->pc = 0x3C10ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C10A8u;
            // 0x3c10ac: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C10F0u;
            goto label_3c10f0;
        }
    }
    ctx->pc = 0x3C10B0u;
label_3c10b0:
    // 0x3c10b0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x3c10b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3c10b4:
    // 0x3c10b4: 0x12420038  beq         $s2, $v0, . + 4 + (0x38 << 2)
label_3c10b8:
    if (ctx->pc == 0x3C10B8u) {
        ctx->pc = 0x3C10B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C10B4u;
        // 0x3c10b8: 0x26020004  addiu       $v0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C10BCu;
        goto label_3c10bc;
    }
    ctx->pc = 0x3C10B4u;
    {
        const bool branch_taken_0x3c10b4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x3C10B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C10B4u;
        // 0x3c10b8: 0x26020004  addiu       $v0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c10b4) {
            ctx->pc = 0x3C1198u;
            goto label_3c1198;
        }
    }
    ctx->pc = 0x3C10BCu;
label_3c10bc:
    // 0x3c10bc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3c10bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3c10c0:
    // 0x3c10c0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3c10c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3c10c4:
    // 0x3c10c4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x3c10c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3c10c8:
    // 0x3c10c8: 0x12420033  beq         $s2, $v0, . + 4 + (0x33 << 2)
label_3c10cc:
    if (ctx->pc == 0x3C10CCu) {
        ctx->pc = 0x3C10CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C10C8u;
        // 0x3c10cc: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C10D0u;
        goto label_3c10d0;
    }
    ctx->pc = 0x3C10C8u;
    {
        const bool branch_taken_0x3c10c8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x3C10CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C10C8u;
        // 0x3c10cc: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c10c8) {
            ctx->pc = 0x3C1198u;
            goto label_3c1198;
        }
    }
    ctx->pc = 0x3C10D0u;
label_3c10d0:
    // 0x3c10d0: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x3c10d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_3c10d4:
    // 0x3c10d4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x3c10d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3c10d8:
    // 0x3c10d8: 0x1242002f  beq         $s2, $v0, . + 4 + (0x2F << 2)
label_3c10dc:
    if (ctx->pc == 0x3C10DCu) {
        ctx->pc = 0x3C10E0u;
        goto label_3c10e0;
    }
    ctx->pc = 0x3C10D8u;
    {
        const bool branch_taken_0x3c10d8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x3c10d8) {
            ctx->pc = 0x3C1198u;
            goto label_3c1198;
        }
    }
    ctx->pc = 0x3C10E0u;
label_3c10e0:
    // 0x3c10e0: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x3c10e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_3c10e4:
    // 0x3c10e4: 0x12050011  beq         $s0, $a1, . + 4 + (0x11 << 2)
label_3c10e8:
    if (ctx->pc == 0x3C10E8u) {
        ctx->pc = 0x3C10E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C10E4u;
        // 0x3c10e8: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C10ECu;
        goto label_3c10ec;
    }
    ctx->pc = 0x3C10E4u;
    {
        const bool branch_taken_0x3c10e4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 5));
        ctx->pc = 0x3C10E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C10E4u;
        // 0x3c10e8: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c10e4) {
            ctx->pc = 0x3C112Cu;
            goto label_3c112c;
        }
    }
    ctx->pc = 0x3C10ECu;
label_3c10ec:
    // 0x3c10ec: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x3c10ecu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3c10f0:
    // 0x3c10f0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3c10f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3c10f4:
    // 0x3c10f4: 0x12420028  beq         $s2, $v0, . + 4 + (0x28 << 2)
label_3c10f8:
    if (ctx->pc == 0x3C10F8u) {
        ctx->pc = 0x3C10FCu;
        goto label_3c10fc;
    }
    ctx->pc = 0x3C10F4u;
    {
        const bool branch_taken_0x3c10f4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x3c10f4) {
            ctx->pc = 0x3C1198u;
            goto label_3c1198;
        }
    }
    ctx->pc = 0x3C10FCu;
label_3c10fc:
    // 0x3c10fc: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x3c10fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_3c1100:
    // 0x3c1100: 0x12420025  beq         $s2, $v0, . + 4 + (0x25 << 2)
label_3c1104:
    if (ctx->pc == 0x3C1104u) {
        ctx->pc = 0x3C1104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1100u;
        // 0x3c1104: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1108u;
        goto label_3c1108;
    }
    ctx->pc = 0x3C1100u;
    {
        const bool branch_taken_0x3c1100 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x3C1104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1100u;
        // 0x3c1104: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c1100) {
            ctx->pc = 0x3C1198u;
            goto label_3c1198;
        }
    }
    ctx->pc = 0x3C1108u;
label_3c1108:
    // 0x3c1108: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x3c1108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_3c110c:
    // 0x3c110c: 0x12420022  beq         $s2, $v0, . + 4 + (0x22 << 2)
label_3c1110:
    if (ctx->pc == 0x3C1110u) {
        ctx->pc = 0x3C1110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C110Cu;
        // 0x3c1110: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1114u;
        goto label_3c1114;
    }
    ctx->pc = 0x3C110Cu;
    {
        const bool branch_taken_0x3c110c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x3C1110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C110Cu;
        // 0x3c1110: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c110c) {
            ctx->pc = 0x3C1198u;
            goto label_3c1198;
        }
    }
    ctx->pc = 0x3C1114u;
label_3c1114:
    // 0x3c1114: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x3c1114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_3c1118:
    // 0x3c1118: 0x1242001f  beq         $s2, $v0, . + 4 + (0x1F << 2)
label_3c111c:
    if (ctx->pc == 0x3C111Cu) {
        ctx->pc = 0x3C111Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1118u;
        // 0x3c111c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1120u;
        goto label_3c1120;
    }
    ctx->pc = 0x3C1118u;
    {
        const bool branch_taken_0x3c1118 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x3C111Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1118u;
        // 0x3c111c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c1118) {
            ctx->pc = 0x3C1198u;
            goto label_3c1198;
        }
    }
    ctx->pc = 0x3C1120u;
label_3c1120:
    // 0x3c1120: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x3c1120u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_3c1124:
    // 0x3c1124: 0x1605fff2  bne         $s0, $a1, . + 4 + (-0xE << 2)
label_3c1128:
    if (ctx->pc == 0x3C1128u) {
        ctx->pc = 0x3C1128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1124u;
        // 0x3c1128: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C112Cu;
        goto label_3c112c;
    }
    ctx->pc = 0x3C1124u;
    {
        const bool branch_taken_0x3c1124 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 5));
        ctx->pc = 0x3C1128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1124u;
        // 0x3c1128: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c1124) {
            ctx->pc = 0x3C10F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c10f0;
        }
    }
    ctx->pc = 0x3C112Cu;
label_3c112c:
    // 0x3c112c: 0xc103790  jal         func_40DE40
label_3c1130:
    if (ctx->pc == 0x3C1130u) {
        ctx->pc = 0x3C1130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C112Cu;
        // 0x3c1130: 0x8e440004  lw          $a0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1134u;
        goto label_3c1134;
    }
    ctx->pc = 0x3C112Cu;
    SET_GPR_U32(ctx, 31, 0x3C1134u);
    ctx->pc = 0x3C1130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C112Cu;
    // 0x3c1130: 0x8e440004  lw          $a0, 0x4($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DE40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DE40u, 0x3C112Cu, 0x3C1134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C1134u;
label_3c1134:
    // 0x3c1134: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x3c1134u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_3c1138:
    // 0x3c1138: 0xc10378e  jal         func_40DE38
label_3c113c:
    if (ctx->pc == 0x3C113Cu) {
        ctx->pc = 0x3C113Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1138u;
        // 0x3c113c: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1140u;
        goto label_3c1140;
    }
    ctx->pc = 0x3C1138u;
    SET_GPR_U32(ctx, 31, 0x3C1140u);
    ctx->pc = 0x3C113Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C1138u;
    // 0x3c113c: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DE38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DE38u, 0x3C1138u, 0x3C1140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C1140u;
label_3c1140:
    // 0x3c1140: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x3c1140u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_3c1144:
    // 0x3c1144: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x3c1144u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_3c1148:
    // 0x3c1148: 0x1043000c  beq         $v0, $v1, . + 4 + (0xC << 2)
label_3c114c:
    if (ctx->pc == 0x3C114Cu) {
        ctx->pc = 0x3C114Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1148u;
        // 0x3c114c: 0x8fa30010  lw          $v1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1150u;
        goto label_3c1150;
    }
    ctx->pc = 0x3C1148u;
    {
        const bool branch_taken_0x3c1148 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x3C114Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1148u;
        // 0x3c114c: 0x8fa30010  lw          $v1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c1148) {
            ctx->pc = 0x3C117Cu;
            goto label_3c117c;
        }
    }
    ctx->pc = 0x3C1150u;
label_3c1150:
    // 0x3c1150: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x3c1150u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3c1154:
    // 0x3c1154: 0x0  nop
    ctx->pc = 0x3c1154u;
    // NOP
label_3c1158:
    // 0x3c1158: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3c1158u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3c115c:
    // 0x3c115c: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x3c115cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_3c1160:
    // 0x3c1160: 0x8ca2001c  lw          $v0, 0x1C($a1)
    ctx->pc = 0x3c1160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
label_3c1164:
    // 0x3c1164: 0x40f809  jalr        $v0
label_3c1168:
    if (ctx->pc == 0x3C1168u) {
        ctx->pc = 0x3C1168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1164u;
        // 0x3c1168: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C116Cu;
        goto label_3c116c;
    }
    ctx->pc = 0x3C1164u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3C116Cu);
        ctx->pc = 0x3C1168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1164u;
        // 0x3c1168: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C1164u, 0x3C116Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C116Cu;
label_3c116c:
    // 0x3c116c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x3c116cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_3c1170:
    // 0x3c1170: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x3c1170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_3c1174:
    // 0x3c1174: 0x5462fff8  bnel        $v1, $v0, . + 4 + (-0x8 << 2)
label_3c1178:
    if (ctx->pc == 0x3C1178u) {
        ctx->pc = 0x3C1178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1174u;
        // 0x3c1178: 0x8e450000  lw          $a1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C117Cu;
        goto label_3c117c;
    }
    ctx->pc = 0x3C1174u;
    {
        const bool branch_taken_0x3c1174 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3c1174) {
            ctx->pc = 0x3C1178u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C1174u;
            // 0x3c1178: 0x8e450000  lw          $a1, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C1158u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c1158;
        }
    }
    ctx->pc = 0x3C117Cu;
label_3c117c:
    // 0x3c117c: 0xc103684  jal         func_40DA10
label_3c1180:
    if (ctx->pc == 0x3C1180u) {
        ctx->pc = 0x3C1180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C117Cu;
        // 0x3c1180: 0x8e440004  lw          $a0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1184u;
        goto label_3c1184;
    }
    ctx->pc = 0x3C117Cu;
    SET_GPR_U32(ctx, 31, 0x3C1184u);
    ctx->pc = 0x3C1180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C117Cu;
    // 0x3c1180: 0x8e440004  lw          $a0, 0x4($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DA10u, 0x3C117Cu, 0x3C1184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C1184u;
label_3c1184:
    // 0x3c1184: 0x8fc3010c  lw          $v1, 0x10C($fp)
    ctx->pc = 0x3c1184u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 268)));
label_3c1188:
    // 0x3c1188: 0x60f809  jalr        $v1
label_3c118c:
    if (ctx->pc == 0x3C118Cu) {
        ctx->pc = 0x3C118Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1188u;
        // 0x3c118c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1190u;
        goto label_3c1190;
    }
    ctx->pc = 0x3C1188u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3C1190u);
        ctx->pc = 0x3C118Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1188u;
        // 0x3c118c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C1188u, 0x3C1190u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C1190u;
label_3c1190:
    // 0x3c1190: 0x1000001e  b           . + 4 + (0x1E << 2)
label_3c1194:
    if (ctx->pc == 0x3C1194u) {
        ctx->pc = 0x3C1194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1190u;
        // 0x3c1194: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1198u;
        goto label_3c1198;
    }
    ctx->pc = 0x3C1190u;
    {
        const bool branch_taken_0x3c1190 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C1194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1190u;
        // 0x3c1194: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c1190) {
            ctx->pc = 0x3C120Cu;
            goto label_3c120c;
        }
    }
    ctx->pc = 0x3C1198u;
label_3c1198:
    // 0x3c1198: 0xc10376a  jal         func_40DDA8
label_3c119c:
    if (ctx->pc == 0x3C119Cu) {
        ctx->pc = 0x3C119Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1198u;
        // 0x3c119c: 0x8e240010  lw          $a0, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C11A0u;
        goto label_3c11a0;
    }
    ctx->pc = 0x3C1198u;
    SET_GPR_U32(ctx, 31, 0x3C11A0u);
    ctx->pc = 0x3C119Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C1198u;
    // 0x3c119c: 0x8e240010  lw          $a0, 0x10($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DDA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DDA8u, 0x3C1198u, 0x3C11A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C11A0u;
label_3c11a0:
    // 0x3c11a0: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x3c11a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_3c11a4:
    // 0x3c11a4: 0xc1036da  jal         func_40DB68
label_3c11a8:
    if (ctx->pc == 0x3C11A8u) {
        ctx->pc = 0x3C11A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C11A4u;
        // 0x3c11a8: 0x2445ffff  addiu       $a1, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C11ACu;
        goto label_3c11ac;
    }
    ctx->pc = 0x3C11A4u;
    SET_GPR_U32(ctx, 31, 0x3C11ACu);
    ctx->pc = 0x3C11A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C11A4u;
    // 0x3c11a8: 0x2445ffff  addiu       $a1, $v0, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB68u, 0x3C11A4u, 0x3C11ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C11ACu;
label_3c11ac:
    // 0x3c11ac: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3c11acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3c11b0:
    // 0x3c11b0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3c11b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3c11b4:
    // 0x3c11b4: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x3c11b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_3c11b8:
    // 0x3c11b8: 0xc1036a8  jal         func_40DAA0
label_3c11bc:
    if (ctx->pc == 0x3C11BCu) {
        ctx->pc = 0x3C11BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C11B8u;
        // 0x3c11bc: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C11C0u;
        goto label_3c11c0;
    }
    ctx->pc = 0x3C11B8u;
    SET_GPR_U32(ctx, 31, 0x3C11C0u);
    ctx->pc = 0x3C11BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C11B8u;
    // 0x3c11bc: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DAA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DAA0u, 0x3C11B8u, 0x3C11C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C11C0u;
label_3c11c0:
    // 0x3c11c0: 0x1000ffda  b           . + 4 + (-0x26 << 2)
label_3c11c4:
    if (ctx->pc == 0x3C11C4u) {
        ctx->pc = 0x3C11C8u;
        goto label_3c11c8;
    }
    ctx->pc = 0x3C11C0u;
    {
        const bool branch_taken_0x3c11c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c11c0) {
            ctx->pc = 0x3C112Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c112c;
        }
    }
    ctx->pc = 0x3C11C8u;
label_3c11c8:
    // 0x3c11c8: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x3c11c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_3c11cc:
    // 0x3c11cc: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x3c11ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_3c11d0:
    // 0x3c11d0: 0xc1036e0  jal         func_40DB80
label_3c11d4:
    if (ctx->pc == 0x3C11D4u) {
        ctx->pc = 0x3C11D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C11D0u;
        // 0x3c11d4: 0xb52825  or          $a1, $a1, $s5 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C11D8u;
        goto label_3c11d8;
    }
    ctx->pc = 0x3C11D0u;
    SET_GPR_U32(ctx, 31, 0x3C11D8u);
    ctx->pc = 0x3C11D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C11D0u;
    // 0x3c11d4: 0xb52825  or          $a1, $a1, $s5 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB80u, 0x3C11D0u, 0x3C11D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C11D8u;
label_3c11d8:
    // 0x3c11d8: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x3c11d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3c11dc:
    // 0x3c11dc: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x3c11dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
label_3c11e0:
    // 0x3c11e0: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x3c11e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_3c11e4:
    // 0x3c11e4: 0x40f809  jalr        $v0
label_3c11e8:
    if (ctx->pc == 0x3C11E8u) {
        ctx->pc = 0x3C11E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C11E4u;
        // 0x3c11e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C11ECu;
        goto label_3c11ec;
    }
    ctx->pc = 0x3C11E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3C11ECu);
        ctx->pc = 0x3C11E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C11E4u;
        // 0x3c11e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C11E4u, 0x3C11ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C11ECu;
label_3c11ec:
    // 0x3c11ec: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x3c11ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_3c11f0:
    // 0x3c11f0: 0x40f809  jalr        $v0
label_3c11f4:
    if (ctx->pc == 0x3C11F4u) {
        ctx->pc = 0x3C11F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C11F0u;
        // 0x3c11f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C11F8u;
        goto label_3c11f8;
    }
    ctx->pc = 0x3C11F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3C11F8u);
        ctx->pc = 0x3C11F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C11F0u;
        // 0x3c11f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C11F0u, 0x3C11F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C11F8u;
label_3c11f8:
    // 0x3c11f8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x3c11f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_3c11fc:
    // 0x3c11fc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3c11fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_3c1200:
    // 0x3c1200: 0x1473ff85  bne         $v1, $s3, . + 4 + (-0x7B << 2)
label_3c1204:
    if (ctx->pc == 0x3C1204u) {
        ctx->pc = 0x3C1204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1200u;
        // 0x3c1204: 0xafa30028  sw          $v1, 0x28($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1208u;
        goto label_3c1208;
    }
    ctx->pc = 0x3C1200u;
    {
        const bool branch_taken_0x3c1200 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 19));
        ctx->pc = 0x3C1204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1200u;
        // 0x3c1204: 0xafa30028  sw          $v1, 0x28($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c1200) {
            ctx->pc = 0x3C1018u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c1018;
        }
    }
    ctx->pc = 0x3C1208u;
label_3c1208:
    // 0x3c1208: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x3c1208u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3c120c:
    // 0x3c120c: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x3c120cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_3c1210:
    // 0x3c1210: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x3c1210u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_3c1214:
    // 0x3c1214: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x3c1214u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_3c1218:
    // 0x3c1218: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x3c1218u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3c121c:
    // 0x3c121c: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x3c121cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3c1220:
    // 0x3c1220: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x3c1220u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3c1224:
    // 0x3c1224: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x3c1224u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3c1228:
    // 0x3c1228: 0x7bb70050  lq          $s7, 0x50($sp)
    ctx->pc = 0x3c1228u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3c122c:
    // 0x3c122c: 0x7bbe0040  lq          $fp, 0x40($sp)
    ctx->pc = 0x3c122cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3c1230:
    // 0x3c1230: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3c1230u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3c1234:
    // 0x3c1234: 0x3e00008  jr          $ra
label_3c1238:
    if (ctx->pc == 0x3C1238u) {
        ctx->pc = 0x3C1238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1234u;
        // 0x3c1238: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C123Cu;
        goto label_3c123c;
    }
    ctx->pc = 0x3C1234u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C1238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1234u;
        // 0x3c1238: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C1234u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C123Cu;
label_3c123c:
    // 0x3c123c: 0x0  nop
    ctx->pc = 0x3c123cu;
    // NOP
label_3c1240:
    // 0x3c1240: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3c1240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_3c1244:
    // 0x3c1244: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x3c1244u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_3c1248:
    // 0x3c1248: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x3c1248u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_3c124c:
    // 0x3c124c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3c124cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3c1250:
    // 0x3c1250: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x3c1250u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_3c1254:
    // 0x3c1254: 0x24110010  addiu       $s1, $zero, 0x10
    ctx->pc = 0x3c1254u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_3c1258:
    // 0x3c1258: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3c1258u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_3c125c:
    // 0x3c125c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x3c125cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3c1260:
    // 0x3c1260: 0xc103790  jal         func_40DE40
label_3c1264:
    if (ctx->pc == 0x3C1264u) {
        ctx->pc = 0x3C1264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1260u;
        // 0x3c1264: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1268u;
        goto label_3c1268;
    }
    ctx->pc = 0x3C1260u;
    SET_GPR_U32(ctx, 31, 0x3C1268u);
    ctx->pc = 0x3C1264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C1260u;
    // 0x3c1264: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DE40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DE40u, 0x3C1260u, 0x3C1268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C1268u;
label_3c1268:
    // 0x3c1268: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x3c1268u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3c126c:
    // 0x3c126c: 0xc10378e  jal         func_40DE38
label_3c1270:
    if (ctx->pc == 0x3C1270u) {
        ctx->pc = 0x3C1270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C126Cu;
        // 0x3c1270: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1274u;
        goto label_3c1274;
    }
    ctx->pc = 0x3C126Cu;
    SET_GPR_U32(ctx, 31, 0x3C1274u);
    ctx->pc = 0x3C1270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C126Cu;
    // 0x3c1270: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DE38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DE38u, 0x3C126Cu, 0x3C1274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C1274u;
label_3c1274:
    // 0x3c1274: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x3c1274u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_3c1278:
    // 0x3c1278: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x3c1278u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_3c127c:
    // 0x3c127c: 0x1043000f  beq         $v0, $v1, . + 4 + (0xF << 2)
label_3c1280:
    if (ctx->pc == 0x3C1280u) {
        ctx->pc = 0x3C1284u;
        goto label_3c1284;
    }
    ctx->pc = 0x3C127Cu;
    {
        const bool branch_taken_0x3c127c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x3c127c) {
            ctx->pc = 0x3C12BCu;
            goto label_3c12bc;
        }
    }
    ctx->pc = 0x3C1284u;
label_3c1284:
    // 0x3c1284: 0x0  nop
    ctx->pc = 0x3c1284u;
    // NOP
label_3c1288:
    // 0x3c1288: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x3c1288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_3c128c:
    // 0x3c128c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3c128cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3c1290:
    // 0x3c1290: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3c1290u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3c1294:
    // 0x3c1294: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x3c1294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_3c1298:
    // 0x3c1298: 0x40f809  jalr        $v0
label_3c129c:
    if (ctx->pc == 0x3C129Cu) {
        ctx->pc = 0x3C12A0u;
        goto label_3c12a0;
    }
    ctx->pc = 0x3C1298u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3C12A0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C1298u, 0x3C12A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C12A0u;
label_3c12a0:
    // 0x3c12a0: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x3c12a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_3c12a4:
    // 0x3c12a4: 0x2624000c  addiu       $a0, $s1, 0xC
    ctx->pc = 0x3c12a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
label_3c12a8:
    // 0x3c12a8: 0x8fa50014  lw          $a1, 0x14($sp)
    ctx->pc = 0x3c12a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_3c12ac:
    // 0x3c12ac: 0x828821  addu        $s1, $a0, $v0
    ctx->pc = 0x3c12acu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_3c12b0:
    // 0x3c12b0: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x3c12b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_3c12b4:
    // 0x3c12b4: 0x1465fff4  bne         $v1, $a1, . + 4 + (-0xC << 2)
label_3c12b8:
    if (ctx->pc == 0x3C12B8u) {
        ctx->pc = 0x3C12B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C12B4u;
        // 0x3c12b8: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C12BCu;
        goto label_3c12bc;
    }
    ctx->pc = 0x3C12B4u;
    {
        const bool branch_taken_0x3c12b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x3C12B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C12B4u;
        // 0x3c12b8: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c12b4) {
            ctx->pc = 0x3C1288u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c1288;
        }
    }
    ctx->pc = 0x3C12BCu;
label_3c12bc:
    // 0x3c12bc: 0x12200045  beqz        $s1, . + 4 + (0x45 << 2)
label_3c12c0:
    if (ctx->pc == 0x3C12C0u) {
        ctx->pc = 0x3C12C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C12BCu;
        // 0x3c12c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C12C4u;
        goto label_3c12c4;
    }
    ctx->pc = 0x3C12BCu;
    {
        const bool branch_taken_0x3c12bc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C12C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C12BCu;
        // 0x3c12c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c12bc) {
            ctx->pc = 0x3C13D4u;
            goto label_3c13d4;
        }
    }
    ctx->pc = 0x3C12C4u;
label_3c12c4:
    // 0x3c12c4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x3c12c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3c12c8:
    // 0x3c12c8: 0x3c070003  lui         $a3, 0x3
    ctx->pc = 0x3c12c8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)3 << 16));
label_3c12cc:
    // 0x3c12cc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3c12ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c12d0:
    // 0x3c12d0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3c12d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3c12d4:
    // 0x3c12d4: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x3c12d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_3c12d8:
    // 0x3c12d8: 0x34e77002  ori         $a3, $a3, 0x7002
    ctx->pc = 0x3c12d8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)28674);
label_3c12dc:
    // 0x3c12dc: 0xc103404  jal         func_40D010
label_3c12e0:
    if (ctx->pc == 0x3C12E0u) {
        ctx->pc = 0x3C12E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C12DCu;
        // 0x3c12e0: 0x2408002d  addiu       $t0, $zero, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C12E4u;
        goto label_3c12e4;
    }
    ctx->pc = 0x3C12DCu;
    SET_GPR_U32(ctx, 31, 0x3C12E4u);
    ctx->pc = 0x3C12E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C12DCu;
    // 0x3c12e0: 0x2408002d  addiu       $t0, $zero, 0x2D (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D010u, 0x3C12DCu, 0x3C12E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C12E4u;
label_3c12e4:
    // 0x3c12e4: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
label_3c12e8:
    if (ctx->pc == 0x3C12E8u) {
        ctx->pc = 0x3C12E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C12E4u;
        // 0x3c12e8: 0x3c070003  lui         $a3, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)3 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C12ECu;
        goto label_3c12ec;
    }
    ctx->pc = 0x3C12E4u;
    {
        const bool branch_taken_0x3c12e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C12E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C12E4u;
        // 0x3c12e8: 0x3c070003  lui         $a3, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)3 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c12e4) {
            ctx->pc = 0x3C1370u;
            goto label_3c1370;
        }
    }
    ctx->pc = 0x3C12ECu;
label_3c12ec:
    // 0x3c12ec: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3c12ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3c12f0:
    // 0x3c12f0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3c12f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3c12f4:
    // 0x3c12f4: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x3c12f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3c12f8:
    // 0x3c12f8: 0x34e77002  ori         $a3, $a3, 0x7002
    ctx->pc = 0x3c12f8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)28674);
label_3c12fc:
    // 0x3c12fc: 0xc103404  jal         func_40D010
label_3c1300:
    if (ctx->pc == 0x3C1300u) {
        ctx->pc = 0x3C1300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C12FCu;
        // 0x3c1300: 0x2408002d  addiu       $t0, $zero, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1304u;
        goto label_3c1304;
    }
    ctx->pc = 0x3C12FCu;
    SET_GPR_U32(ctx, 31, 0x3C1304u);
    ctx->pc = 0x3C1300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C12FCu;
    // 0x3c1300: 0x2408002d  addiu       $t0, $zero, 0x2D (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D010u, 0x3C12FCu, 0x3C1304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C1304u;
label_3c1304:
    // 0x3c1304: 0x10400033  beqz        $v0, . + 4 + (0x33 << 2)
label_3c1308:
    if (ctx->pc == 0x3C1308u) {
        ctx->pc = 0x3C1308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1304u;
        // 0x3c1308: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C130Cu;
        goto label_3c130c;
    }
    ctx->pc = 0x3C1304u;
    {
        const bool branch_taken_0x3c1304 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C1308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1304u;
        // 0x3c1308: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c1304) {
            ctx->pc = 0x3C13D4u;
            goto label_3c13d4;
        }
    }
    ctx->pc = 0x3C130Cu;
label_3c130c:
    // 0x3c130c: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x3c130cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
label_3c1310:
    // 0x3c1310: 0xc103790  jal         func_40DE40
label_3c1314:
    if (ctx->pc == 0x3C1314u) {
        ctx->pc = 0x3C1314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1310u;
        // 0x3c1314: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1318u;
        goto label_3c1318;
    }
    ctx->pc = 0x3C1310u;
    SET_GPR_U32(ctx, 31, 0x3C1318u);
    ctx->pc = 0x3C1314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C1310u;
    // 0x3c1314: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DE40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DE40u, 0x3C1310u, 0x3C1318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C1318u;
label_3c1318:
    // 0x3c1318: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x3c1318u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3c131c:
    // 0x3c131c: 0xc10378e  jal         func_40DE38
label_3c1320:
    if (ctx->pc == 0x3C1320u) {
        ctx->pc = 0x3C1320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C131Cu;
        // 0x3c1320: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1324u;
        goto label_3c1324;
    }
    ctx->pc = 0x3C131Cu;
    SET_GPR_U32(ctx, 31, 0x3C1324u);
    ctx->pc = 0x3C1320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C131Cu;
    // 0x3c1320: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DE38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DE38u, 0x3C131Cu, 0x3C1324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C1324u;
label_3c1324:
    // 0x3c1324: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x3c1324u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_3c1328:
    // 0x3c1328: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x3c1328u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_3c132c:
    // 0x3c132c: 0x1044000b  beq         $v0, $a0, . + 4 + (0xB << 2)
label_3c1330:
    if (ctx->pc == 0x3C1330u) {
        ctx->pc = 0x3C1330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C132Cu;
        // 0x3c1330: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1334u;
        goto label_3c1334;
    }
    ctx->pc = 0x3C132Cu;
    {
        const bool branch_taken_0x3c132c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x3C1330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C132Cu;
        // 0x3c1330: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c132c) {
            ctx->pc = 0x3C135Cu;
            goto label_3c135c;
        }
    }
    ctx->pc = 0x3C1334u;
label_3c1334:
    // 0x3c1334: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x3c1334u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_3c1338:
    // 0x3c1338: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x3c1338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_3c133c:
    // 0x3c133c: 0x0  nop
    ctx->pc = 0x3c133cu;
    // NOP
label_3c1340:
    // 0x3c1340: 0x0  nop
    ctx->pc = 0x3c1340u;
    // NOP
label_3c1344:
    // 0x3c1344: 0x0  nop
    ctx->pc = 0x3c1344u;
    // NOP
label_3c1348:
    // 0x3c1348: 0x0  nop
    ctx->pc = 0x3c1348u;
    // NOP
label_3c134c:
    // 0x3c134c: 0x1444fffa  bne         $v0, $a0, . + 4 + (-0x6 << 2)
label_3c1350:
    if (ctx->pc == 0x3C1350u) {
        ctx->pc = 0x3C1350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C134Cu;
        // 0x3c1350: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1354u;
        goto label_3c1354;
    }
    ctx->pc = 0x3C134Cu;
    {
        const bool branch_taken_0x3c134c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x3C1350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C134Cu;
        // 0x3c1350: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c134c) {
            ctx->pc = 0x3C1338u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c1338;
        }
    }
    ctx->pc = 0x3C1354u;
label_3c1354:
    // 0x3c1354: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x3c1354u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_3c1358:
    // 0x3c1358: 0xafa30020  sw          $v1, 0x20($sp)
    ctx->pc = 0x3c1358u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
label_3c135c:
    // 0x3c135c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3c135cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3c1360:
    // 0x3c1360: 0xc10486e  jal         func_4121B8
label_3c1364:
    if (ctx->pc == 0x3C1364u) {
        ctx->pc = 0x3C1364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1360u;
        // 0x3c1364: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1368u;
        goto label_3c1368;
    }
    ctx->pc = 0x3C1360u;
    SET_GPR_U32(ctx, 31, 0x3C1368u);
    ctx->pc = 0x3C1364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C1360u;
    // 0x3c1364: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4121B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4121B8u, 0x3C1360u, 0x3C1368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C1368u;
label_3c1368:
    // 0x3c1368: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_3c136c:
    if (ctx->pc == 0x3C136Cu) {
        ctx->pc = 0x3C1370u;
        goto label_3c1370;
    }
    ctx->pc = 0x3C1368u;
    {
        const bool branch_taken_0x3c1368 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c1368) {
            ctx->pc = 0x3C1378u;
            goto label_3c1378;
        }
    }
    ctx->pc = 0x3C1370u;
label_3c1370:
    // 0x3c1370: 0x10000018  b           . + 4 + (0x18 << 2)
label_3c1374:
    if (ctx->pc == 0x3C1374u) {
        ctx->pc = 0x3C1374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1370u;
        // 0x3c1374: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1378u;
        goto label_3c1378;
    }
    ctx->pc = 0x3C1370u;
    {
        const bool branch_taken_0x3c1370 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C1374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1370u;
        // 0x3c1374: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c1370) {
            ctx->pc = 0x3C13D4u;
            goto label_3c13d4;
        }
    }
    ctx->pc = 0x3C1378u;
label_3c1378:
    // 0x3c1378: 0xc103790  jal         func_40DE40
label_3c137c:
    if (ctx->pc == 0x3C137Cu) {
        ctx->pc = 0x3C137Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1378u;
        // 0x3c137c: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1380u;
        goto label_3c1380;
    }
    ctx->pc = 0x3C1378u;
    SET_GPR_U32(ctx, 31, 0x3C1380u);
    ctx->pc = 0x3C137Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C1378u;
    // 0x3c137c: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DE40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DE40u, 0x3C1378u, 0x3C1380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C1380u;
label_3c1380:
    // 0x3c1380: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x3c1380u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3c1384:
    // 0x3c1384: 0xc10378e  jal         func_40DE38
label_3c1388:
    if (ctx->pc == 0x3C1388u) {
        ctx->pc = 0x3C1388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1384u;
        // 0x3c1388: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C138Cu;
        goto label_3c138c;
    }
    ctx->pc = 0x3C1384u;
    SET_GPR_U32(ctx, 31, 0x3C138Cu);
    ctx->pc = 0x3C1388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C1384u;
    // 0x3c1388: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DE38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DE38u, 0x3C1384u, 0x3C138Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C138Cu;
label_3c138c:
    // 0x3c138c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x3c138cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_3c1390:
    // 0x3c1390: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x3c1390u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_3c1394:
    // 0x3c1394: 0x1043000f  beq         $v0, $v1, . + 4 + (0xF << 2)
label_3c1398:
    if (ctx->pc == 0x3C1398u) {
        ctx->pc = 0x3C1398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1394u;
        // 0x3c1398: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C139Cu;
        goto label_3c139c;
    }
    ctx->pc = 0x3C1394u;
    {
        const bool branch_taken_0x3c1394 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x3C1398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1394u;
        // 0x3c1398: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c1394) {
            ctx->pc = 0x3C13D4u;
            goto label_3c13d4;
        }
    }
    ctx->pc = 0x3C139Cu;
label_3c139c:
    // 0x3c139c: 0x0  nop
    ctx->pc = 0x3c139cu;
    // NOP
label_3c13a0:
    // 0x3c13a0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x3c13a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_3c13a4:
    // 0x3c13a4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3c13a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3c13a8:
    // 0x3c13a8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3c13a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3c13ac:
    // 0x3c13ac: 0x8c620030  lw          $v0, 0x30($v1)
    ctx->pc = 0x3c13acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
label_3c13b0:
    // 0x3c13b0: 0x40f809  jalr        $v0
label_3c13b4:
    if (ctx->pc == 0x3C13B4u) {
        ctx->pc = 0x3C13B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C13B0u;
        // 0x3c13b4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C13B8u;
        goto label_3c13b8;
    }
    ctx->pc = 0x3C13B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3C13B8u);
        ctx->pc = 0x3C13B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C13B0u;
        // 0x3c13b4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C13B0u, 0x3C13B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C13B8u;
label_3c13b8:
    // 0x3c13b8: 0x1040ffed  beqz        $v0, . + 4 + (-0x13 << 2)
label_3c13bc:
    if (ctx->pc == 0x3C13BCu) {
        ctx->pc = 0x3C13BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C13B8u;
        // 0x3c13bc: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C13C0u;
        goto label_3c13c0;
    }
    ctx->pc = 0x3C13B8u;
    {
        const bool branch_taken_0x3c13b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C13BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C13B8u;
        // 0x3c13bc: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c13b8) {
            ctx->pc = 0x3C1370u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c1370;
        }
    }
    ctx->pc = 0x3C13C0u;
label_3c13c0:
    // 0x3c13c0: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x3c13c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_3c13c4:
    // 0x3c13c4: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x3c13c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_3c13c8:
    // 0x3c13c8: 0x1443fff5  bne         $v0, $v1, . + 4 + (-0xB << 2)
label_3c13cc:
    if (ctx->pc == 0x3C13CCu) {
        ctx->pc = 0x3C13CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C13C8u;
        // 0x3c13cc: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C13D0u;
        goto label_3c13d0;
    }
    ctx->pc = 0x3C13C8u;
    {
        const bool branch_taken_0x3c13c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3C13CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C13C8u;
        // 0x3c13cc: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c13c8) {
            ctx->pc = 0x3C13A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c13a0;
        }
    }
    ctx->pc = 0x3C13D0u;
label_3c13d0:
    // 0x3c13d0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3c13d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c13d4:
    // 0x3c13d4: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x3c13d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3c13d8:
    // 0x3c13d8: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x3c13d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3c13dc:
    // 0x3c13dc: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x3c13dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3c13e0:
    // 0x3c13e0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3c13e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3c13e4:
    // 0x3c13e4: 0x3e00008  jr          $ra
label_3c13e8:
    if (ctx->pc == 0x3C13E8u) {
        ctx->pc = 0x3C13E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C13E4u;
        // 0x3c13e8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C13ECu;
        goto label_3c13ec;
    }
    ctx->pc = 0x3C13E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C13E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C13E4u;
        // 0x3c13e8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C13E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C13ECu;
label_3c13ec:
    // 0x3c13ec: 0x0  nop
    ctx->pc = 0x3c13ecu;
    // NOP
    ctx->pc = 0x3c13f0u;
}
