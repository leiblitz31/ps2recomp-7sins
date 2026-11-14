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

// Function: sub_003A1220
// Address: 0x3a1220 - 0x3a1570
void sub_003A1220_0x3a1220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A1220_0x3a1220");
#endif

    switch (ctx->pc) {
        case 0x3a1220u: goto label_3a1220;
        case 0x3a1224u: goto label_3a1224;
        case 0x3a1228u: goto label_3a1228;
        case 0x3a122cu: goto label_3a122c;
        case 0x3a1230u: goto label_3a1230;
        case 0x3a1234u: goto label_3a1234;
        case 0x3a1238u: goto label_3a1238;
        case 0x3a123cu: goto label_3a123c;
        case 0x3a1240u: goto label_3a1240;
        case 0x3a1244u: goto label_3a1244;
        case 0x3a1248u: goto label_3a1248;
        case 0x3a124cu: goto label_3a124c;
        case 0x3a1250u: goto label_3a1250;
        case 0x3a1254u: goto label_3a1254;
        case 0x3a1258u: goto label_3a1258;
        case 0x3a125cu: goto label_3a125c;
        case 0x3a1260u: goto label_3a1260;
        case 0x3a1264u: goto label_3a1264;
        case 0x3a1268u: goto label_3a1268;
        case 0x3a126cu: goto label_3a126c;
        case 0x3a1270u: goto label_3a1270;
        case 0x3a1274u: goto label_3a1274;
        case 0x3a1278u: goto label_3a1278;
        case 0x3a127cu: goto label_3a127c;
        case 0x3a1280u: goto label_3a1280;
        case 0x3a1284u: goto label_3a1284;
        case 0x3a1288u: goto label_3a1288;
        case 0x3a128cu: goto label_3a128c;
        case 0x3a1290u: goto label_3a1290;
        case 0x3a1294u: goto label_3a1294;
        case 0x3a1298u: goto label_3a1298;
        case 0x3a129cu: goto label_3a129c;
        case 0x3a12a0u: goto label_3a12a0;
        case 0x3a12a4u: goto label_3a12a4;
        case 0x3a12a8u: goto label_3a12a8;
        case 0x3a12acu: goto label_3a12ac;
        case 0x3a12b0u: goto label_3a12b0;
        case 0x3a12b4u: goto label_3a12b4;
        case 0x3a12b8u: goto label_3a12b8;
        case 0x3a12bcu: goto label_3a12bc;
        case 0x3a12c0u: goto label_3a12c0;
        case 0x3a12c4u: goto label_3a12c4;
        case 0x3a12c8u: goto label_3a12c8;
        case 0x3a12ccu: goto label_3a12cc;
        case 0x3a12d0u: goto label_3a12d0;
        case 0x3a12d4u: goto label_3a12d4;
        case 0x3a12d8u: goto label_3a12d8;
        case 0x3a12dcu: goto label_3a12dc;
        case 0x3a12e0u: goto label_3a12e0;
        case 0x3a12e4u: goto label_3a12e4;
        case 0x3a12e8u: goto label_3a12e8;
        case 0x3a12ecu: goto label_3a12ec;
        case 0x3a12f0u: goto label_3a12f0;
        case 0x3a12f4u: goto label_3a12f4;
        case 0x3a12f8u: goto label_3a12f8;
        case 0x3a12fcu: goto label_3a12fc;
        case 0x3a1300u: goto label_3a1300;
        case 0x3a1304u: goto label_3a1304;
        case 0x3a1308u: goto label_3a1308;
        case 0x3a130cu: goto label_3a130c;
        case 0x3a1310u: goto label_3a1310;
        case 0x3a1314u: goto label_3a1314;
        case 0x3a1318u: goto label_3a1318;
        case 0x3a131cu: goto label_3a131c;
        case 0x3a1320u: goto label_3a1320;
        case 0x3a1324u: goto label_3a1324;
        case 0x3a1328u: goto label_3a1328;
        case 0x3a132cu: goto label_3a132c;
        case 0x3a1330u: goto label_3a1330;
        case 0x3a1334u: goto label_3a1334;
        case 0x3a1338u: goto label_3a1338;
        case 0x3a133cu: goto label_3a133c;
        case 0x3a1340u: goto label_3a1340;
        case 0x3a1344u: goto label_3a1344;
        case 0x3a1348u: goto label_3a1348;
        case 0x3a134cu: goto label_3a134c;
        case 0x3a1350u: goto label_3a1350;
        case 0x3a1354u: goto label_3a1354;
        case 0x3a1358u: goto label_3a1358;
        case 0x3a135cu: goto label_3a135c;
        case 0x3a1360u: goto label_3a1360;
        case 0x3a1364u: goto label_3a1364;
        case 0x3a1368u: goto label_3a1368;
        case 0x3a136cu: goto label_3a136c;
        case 0x3a1370u: goto label_3a1370;
        case 0x3a1374u: goto label_3a1374;
        case 0x3a1378u: goto label_3a1378;
        case 0x3a137cu: goto label_3a137c;
        case 0x3a1380u: goto label_3a1380;
        case 0x3a1384u: goto label_3a1384;
        case 0x3a1388u: goto label_3a1388;
        case 0x3a138cu: goto label_3a138c;
        case 0x3a1390u: goto label_3a1390;
        case 0x3a1394u: goto label_3a1394;
        case 0x3a1398u: goto label_3a1398;
        case 0x3a139cu: goto label_3a139c;
        case 0x3a13a0u: goto label_3a13a0;
        case 0x3a13a4u: goto label_3a13a4;
        case 0x3a13a8u: goto label_3a13a8;
        case 0x3a13acu: goto label_3a13ac;
        case 0x3a13b0u: goto label_3a13b0;
        case 0x3a13b4u: goto label_3a13b4;
        case 0x3a13b8u: goto label_3a13b8;
        case 0x3a13bcu: goto label_3a13bc;
        case 0x3a13c0u: goto label_3a13c0;
        case 0x3a13c4u: goto label_3a13c4;
        case 0x3a13c8u: goto label_3a13c8;
        case 0x3a13ccu: goto label_3a13cc;
        case 0x3a13d0u: goto label_3a13d0;
        case 0x3a13d4u: goto label_3a13d4;
        case 0x3a13d8u: goto label_3a13d8;
        case 0x3a13dcu: goto label_3a13dc;
        case 0x3a13e0u: goto label_3a13e0;
        case 0x3a13e4u: goto label_3a13e4;
        case 0x3a13e8u: goto label_3a13e8;
        case 0x3a13ecu: goto label_3a13ec;
        case 0x3a13f0u: goto label_3a13f0;
        case 0x3a13f4u: goto label_3a13f4;
        case 0x3a13f8u: goto label_3a13f8;
        case 0x3a13fcu: goto label_3a13fc;
        case 0x3a1400u: goto label_3a1400;
        case 0x3a1404u: goto label_3a1404;
        case 0x3a1408u: goto label_3a1408;
        case 0x3a140cu: goto label_3a140c;
        case 0x3a1410u: goto label_3a1410;
        case 0x3a1414u: goto label_3a1414;
        case 0x3a1418u: goto label_3a1418;
        case 0x3a141cu: goto label_3a141c;
        case 0x3a1420u: goto label_3a1420;
        case 0x3a1424u: goto label_3a1424;
        case 0x3a1428u: goto label_3a1428;
        case 0x3a142cu: goto label_3a142c;
        case 0x3a1430u: goto label_3a1430;
        case 0x3a1434u: goto label_3a1434;
        case 0x3a1438u: goto label_3a1438;
        case 0x3a143cu: goto label_3a143c;
        case 0x3a1440u: goto label_3a1440;
        case 0x3a1444u: goto label_3a1444;
        case 0x3a1448u: goto label_3a1448;
        case 0x3a144cu: goto label_3a144c;
        case 0x3a1450u: goto label_3a1450;
        case 0x3a1454u: goto label_3a1454;
        case 0x3a1458u: goto label_3a1458;
        case 0x3a145cu: goto label_3a145c;
        case 0x3a1460u: goto label_3a1460;
        case 0x3a1464u: goto label_3a1464;
        case 0x3a1468u: goto label_3a1468;
        case 0x3a146cu: goto label_3a146c;
        case 0x3a1470u: goto label_3a1470;
        case 0x3a1474u: goto label_3a1474;
        case 0x3a1478u: goto label_3a1478;
        case 0x3a147cu: goto label_3a147c;
        case 0x3a1480u: goto label_3a1480;
        case 0x3a1484u: goto label_3a1484;
        case 0x3a1488u: goto label_3a1488;
        case 0x3a148cu: goto label_3a148c;
        case 0x3a1490u: goto label_3a1490;
        case 0x3a1494u: goto label_3a1494;
        case 0x3a1498u: goto label_3a1498;
        case 0x3a149cu: goto label_3a149c;
        case 0x3a14a0u: goto label_3a14a0;
        case 0x3a14a4u: goto label_3a14a4;
        case 0x3a14a8u: goto label_3a14a8;
        case 0x3a14acu: goto label_3a14ac;
        case 0x3a14b0u: goto label_3a14b0;
        case 0x3a14b4u: goto label_3a14b4;
        case 0x3a14b8u: goto label_3a14b8;
        case 0x3a14bcu: goto label_3a14bc;
        case 0x3a14c0u: goto label_3a14c0;
        case 0x3a14c4u: goto label_3a14c4;
        case 0x3a14c8u: goto label_3a14c8;
        case 0x3a14ccu: goto label_3a14cc;
        case 0x3a14d0u: goto label_3a14d0;
        case 0x3a14d4u: goto label_3a14d4;
        case 0x3a14d8u: goto label_3a14d8;
        case 0x3a14dcu: goto label_3a14dc;
        case 0x3a14e0u: goto label_3a14e0;
        case 0x3a14e4u: goto label_3a14e4;
        case 0x3a14e8u: goto label_3a14e8;
        case 0x3a14ecu: goto label_3a14ec;
        case 0x3a14f0u: goto label_3a14f0;
        case 0x3a14f4u: goto label_3a14f4;
        case 0x3a14f8u: goto label_3a14f8;
        case 0x3a14fcu: goto label_3a14fc;
        case 0x3a1500u: goto label_3a1500;
        case 0x3a1504u: goto label_3a1504;
        case 0x3a1508u: goto label_3a1508;
        case 0x3a150cu: goto label_3a150c;
        case 0x3a1510u: goto label_3a1510;
        case 0x3a1514u: goto label_3a1514;
        case 0x3a1518u: goto label_3a1518;
        case 0x3a151cu: goto label_3a151c;
        case 0x3a1520u: goto label_3a1520;
        case 0x3a1524u: goto label_3a1524;
        case 0x3a1528u: goto label_3a1528;
        case 0x3a152cu: goto label_3a152c;
        case 0x3a1530u: goto label_3a1530;
        case 0x3a1534u: goto label_3a1534;
        case 0x3a1538u: goto label_3a1538;
        case 0x3a153cu: goto label_3a153c;
        case 0x3a1540u: goto label_3a1540;
        case 0x3a1544u: goto label_3a1544;
        case 0x3a1548u: goto label_3a1548;
        case 0x3a154cu: goto label_3a154c;
        case 0x3a1550u: goto label_3a1550;
        case 0x3a1554u: goto label_3a1554;
        case 0x3a1558u: goto label_3a1558;
        case 0x3a155cu: goto label_3a155c;
        case 0x3a1560u: goto label_3a1560;
        case 0x3a1564u: goto label_3a1564;
        case 0x3a1568u: goto label_3a1568;
        case 0x3a156cu: goto label_3a156c;
        default: break;
    }

    ctx->pc = 0x3a1220u;

label_3a1220:
    // 0x3a1220: 0x27bdfe40  addiu       $sp, $sp, -0x1C0
    ctx->pc = 0x3a1220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966848));
label_3a1224:
    // 0x3a1224: 0x7fb101a0  sq          $s1, 0x1A0($sp)
    ctx->pc = 0x3a1224u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 17));
label_3a1228:
    // 0x3a1228: 0x7fb20190  sq          $s2, 0x190($sp)
    ctx->pc = 0x3a1228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 18));
label_3a122c:
    // 0x3a122c: 0x7fb001b0  sq          $s0, 0x1B0($sp)
    ctx->pc = 0x3a122cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), GPR_VEC(ctx, 16));
label_3a1230:
    // 0x3a1230: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3a1230u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3a1234:
    // 0x3a1234: 0x7fb40170  sq          $s4, 0x170($sp)
    ctx->pc = 0x3a1234u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 20));
label_3a1238:
    // 0x3a1238: 0xffbf0160  sd          $ra, 0x160($sp)
    ctx->pc = 0x3a1238u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 352), GPR_U64(ctx, 31));
label_3a123c:
    // 0x3a123c: 0xafa00150  sw          $zero, 0x150($sp)
    ctx->pc = 0x3a123cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 0));
label_3a1240:
    // 0x3a1240: 0x7fb30180  sq          $s3, 0x180($sp)
    ctx->pc = 0x3a1240u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 19));
label_3a1244:
    // 0x3a1244: 0x8e530030  lw          $s3, 0x30($s2)
    ctx->pc = 0x3a1244u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
label_3a1248:
    // 0x3a1248: 0x8e450034  lw          $a1, 0x34($s2)
    ctx->pc = 0x3a1248u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
label_3a124c:
    // 0x3a124c: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x3a124cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3a1250:
    // 0x3a1250: 0x8e540004  lw          $s4, 0x4($s2)
    ctx->pc = 0x3a1250u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_3a1254:
    // 0x3a1254: 0x30a3000c  andi        $v1, $a1, 0xC
    ctx->pc = 0x3a1254u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)12);
label_3a1258:
    // 0x3a1258: 0xafa00154  sw          $zero, 0x154($sp)
    ctx->pc = 0x3a1258u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 340), GPR_U32(ctx, 0));
label_3a125c:
    // 0x3a125c: 0x24510018  addiu       $s1, $v0, 0x18
    ctx->pc = 0x3a125cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
label_3a1260:
    // 0x3a1260: 0x1060007f  beqz        $v1, . + 4 + (0x7F << 2)
label_3a1264:
    if (ctx->pc == 0x3A1264u) {
        ctx->pc = 0x3A1264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1260u;
        // 0x3a1264: 0xafa00158  sw          $zero, 0x158($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 344), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A1268u;
        goto label_3a1268;
    }
    ctx->pc = 0x3A1260u;
    {
        const bool branch_taken_0x3a1260 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A1264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1260u;
        // 0x3a1264: 0xafa00158  sw          $zero, 0x158($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 344), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a1260) {
            ctx->pc = 0x3A1460u;
            goto label_3a1460;
        }
    }
    ctx->pc = 0x3A1268u;
label_3a1268:
    // 0x3a1268: 0x3c020007  lui         $v0, 0x7
    ctx->pc = 0x3a1268u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7 << 16));
label_3a126c:
    // 0x3a126c: 0x3442fff0  ori         $v0, $v0, 0xFFF0
    ctx->pc = 0x3a126cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65520);
label_3a1270:
    // 0x3a1270: 0xa21025  or          $v0, $a1, $v0
    ctx->pc = 0x3a1270u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_3a1274:
    // 0x3a1274: 0xae420034  sw          $v0, 0x34($s2)
    ctx->pc = 0x3a1274u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 52), GPR_U32(ctx, 2));
label_3a1278:
    // 0x3a1278: 0x8e43002c  lw          $v1, 0x2C($s2)
    ctx->pc = 0x3a1278u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
label_3a127c:
    // 0x3a127c: 0x8e44000c  lw          $a0, 0xC($s2)
    ctx->pc = 0x3a127cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_3a1280:
    // 0x3a1280: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x3a1280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3a1284:
    // 0x3a1284: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x3a1284u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_3a1288:
    // 0x3a1288: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_3a128c:
    if (ctx->pc == 0x3A128Cu) {
        ctx->pc = 0x3A128Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1288u;
        // 0x3a128c: 0x8c700004  lw          $s0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A1290u;
        goto label_3a1290;
    }
    ctx->pc = 0x3A1288u;
    {
        const bool branch_taken_0x3a1288 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A128Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1288u;
        // 0x3a128c: 0x8c700004  lw          $s0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a1288) {
            ctx->pc = 0x3A12A0u;
            goto label_3a12a0;
        }
    }
    ctx->pc = 0x3A1290u;
label_3a1290:
    // 0x3a1290: 0x2603fffe  addiu       $v1, $s0, -0x2
    ctx->pc = 0x3a1290u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967294));
label_3a1294:
    // 0x3a1294: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x3a1294u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_3a1298:
    // 0x3a1298: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x3a1298u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3a129c:
    // 0x3a129c: 0x0  nop
    ctx->pc = 0x3a129cu;
    // NOP
label_3a12a0:
    // 0x3a12a0: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x3a12a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3a12a4:
    // 0x3a12a4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3a12a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3a12a8:
    // 0x3a12a8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3a12a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3a12ac:
    // 0x3a12ac: 0x27a70150  addiu       $a3, $sp, 0x150
    ctx->pc = 0x3a12acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_3a12b0:
    // 0x3a12b0: 0x27a80154  addiu       $t0, $sp, 0x154
    ctx->pc = 0x3a12b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 340));
label_3a12b4:
    // 0x3a12b4: 0xc0e7b3c  jal         func_39ECF0
label_3a12b8:
    if (ctx->pc == 0x3A12B8u) {
        ctx->pc = 0x3A12B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A12B4u;
        // 0x3a12b8: 0x27a90158  addiu       $t1, $sp, 0x158 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 344));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A12BCu;
        goto label_3a12bc;
    }
    ctx->pc = 0x3A12B4u;
    SET_GPR_U32(ctx, 31, 0x3A12BCu);
    ctx->pc = 0x3A12B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A12B4u;
    // 0x3a12b8: 0x27a90158  addiu       $t1, $sp, 0x158 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 344));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39ECF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39ECF0u, 0x3A12B4u, 0x3A12BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A12BCu;
label_3a12bc:
    // 0x3a12bc: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x3a12bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3a12c0:
    // 0x3a12c0: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x3a12c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3a12c4:
    // 0x3a12c4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_3a12c8:
    if (ctx->pc == 0x3A12C8u) {
        ctx->pc = 0x3A12C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A12C4u;
        // 0x3a12c8: 0x3c07003a  lui         $a3, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A12CCu;
        goto label_3a12cc;
    }
    ctx->pc = 0x3A12C4u;
    {
        const bool branch_taken_0x3a12c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A12C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A12C4u;
        // 0x3a12c8: 0x3c07003a  lui         $a3, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a12c4) {
            ctx->pc = 0x3A12D4u;
            goto label_3a12d4;
        }
    }
    ctx->pc = 0x3A12CCu;
label_3a12cc:
    // 0x3a12cc: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x3a12ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
label_3a12d0:
    // 0x3a12d0: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x3a12d0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
label_3a12d4:
    // 0x3a12d4: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x3a12d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_3a12d8:
    // 0x3a12d8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3a12d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3a12dc:
    // 0x3a12dc: 0x24e7fb80  addiu       $a3, $a3, -0x480
    ctx->pc = 0x3a12dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294966144));
label_3a12e0:
    // 0x3a12e0: 0x40f809  jalr        $v0
label_3a12e4:
    if (ctx->pc == 0x3A12E4u) {
        ctx->pc = 0x3A12E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A12E0u;
        // 0x3a12e4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A12E8u;
        goto label_3a12e8;
    }
    ctx->pc = 0x3A12E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3A12E8u);
        ctx->pc = 0x3A12E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A12E0u;
        // 0x3a12e4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A12E0u, 0x3A12E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3A12E8u;
label_3a12e8:
    // 0x3a12e8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3a12e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3a12ec:
    // 0x3a12ec: 0x14a00003  bnez        $a1, . + 4 + (0x3 << 2)
label_3a12f0:
    if (ctx->pc == 0x3A12F0u) {
        ctx->pc = 0x3A12F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A12ECu;
        // 0x3a12f0: 0xae650000  sw          $a1, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A12F4u;
        goto label_3a12f4;
    }
    ctx->pc = 0x3A12ECu;
    {
        const bool branch_taken_0x3a12ec = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A12F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A12ECu;
        // 0x3a12f0: 0xae650000  sw          $a1, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a12ec) {
            ctx->pc = 0x3A12FCu;
            goto label_3a12fc;
        }
    }
    ctx->pc = 0x3A12F4u;
label_3a12f4:
    // 0x3a12f4: 0x10000096  b           . + 4 + (0x96 << 2)
label_3a12f8:
    if (ctx->pc == 0x3A12F8u) {
        ctx->pc = 0x3A12F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A12F4u;
        // 0x3a12f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A12FCu;
        goto label_3a12fc;
    }
    ctx->pc = 0x3A12F4u;
    {
        const bool branch_taken_0x3a12f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A12F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A12F4u;
        // 0x3a12f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a12f4) {
            ctx->pc = 0x3A1550u;
            goto label_3a1550;
        }
    }
    ctx->pc = 0x3A12FCu;
label_3a12fc:
    // 0x3a12fc: 0xaca00018  sw          $zero, 0x18($a1)
    ctx->pc = 0x3a12fcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 0));
label_3a1300:
    // 0x3a1300: 0x24b10018  addiu       $s1, $a1, 0x18
    ctx->pc = 0x3a1300u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), 24));
label_3a1304:
    // 0x3a1304: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x3a1304u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_3a1308:
    // 0x3a1308: 0x8e44000c  lw          $a0, 0xC($s2)
    ctx->pc = 0x3a1308u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_3a130c:
    // 0x3a130c: 0x8e420018  lw          $v0, 0x18($s2)
    ctx->pc = 0x3a130cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_3a1310:
    // 0x3a1310: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x3a1310u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
label_3a1314:
    // 0x3a1314: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3a1314u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3a1318:
    // 0x3a1318: 0xae430038  sw          $v1, 0x38($s2)
    ctx->pc = 0x3a1318u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 56), GPR_U32(ctx, 3));
label_3a131c:
    // 0x3a131c: 0xae230014  sw          $v1, 0x14($s1)
    ctx->pc = 0x3a131cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 3));
label_3a1320:
    // 0x3a1320: 0xae30000c  sw          $s0, 0xC($s1)
    ctx->pc = 0x3a1320u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 16));
label_3a1324:
    // 0x3a1324: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x3a1324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_3a1328:
    // 0x3a1328: 0x2442000a  addiu       $v0, $v0, 0xA
    ctx->pc = 0x3a1328u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
label_3a132c:
    // 0x3a132c: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
label_3a1330:
    if (ctx->pc == 0x3A1330u) {
        ctx->pc = 0x3A1330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A132Cu;
        // 0x3a1330: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A1334u;
        goto label_3a1334;
    }
    ctx->pc = 0x3A132Cu;
    {
        const bool branch_taken_0x3a132c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A1330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A132Cu;
        // 0x3a1330: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a132c) {
            ctx->pc = 0x3A138Cu;
            goto label_3a138c;
        }
    }
    ctx->pc = 0x3A1334u;
label_3a1334:
    // 0x3a1334: 0x24a400a8  addiu       $a0, $a1, 0xA8
    ctx->pc = 0x3a1334u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 168));
label_3a1338:
    // 0x3a1338: 0x3a0182d  daddu       $v1, $sp, $zero
    ctx->pc = 0x3a1338u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3a133c:
    // 0x3a133c: 0x0  nop
    ctx->pc = 0x3a133cu;
    // NOP
label_3a1340:
    // 0x3a1340: 0x68620007  ldl         $v0, 0x7($v1)
    ctx->pc = 0x3a1340u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_3a1344:
    // 0x3a1344: 0x6c620000  ldr         $v0, 0x0($v1)
    ctx->pc = 0x3a1344u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_3a1348:
    // 0x3a1348: 0x6865000f  ldl         $a1, 0xF($v1)
    ctx->pc = 0x3a1348u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_3a134c:
    // 0x3a134c: 0x6c650008  ldr         $a1, 0x8($v1)
    ctx->pc = 0x3a134cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_3a1350:
    // 0x3a1350: 0x68660017  ldl         $a2, 0x17($v1)
    ctx->pc = 0x3a1350u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_3a1354:
    // 0x3a1354: 0x6c660010  ldr         $a2, 0x10($v1)
    ctx->pc = 0x3a1354u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_3a1358:
    // 0x3a1358: 0xb0820007  sdl         $v0, 0x7($a0)
    ctx->pc = 0x3a1358u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3a135c:
    // 0x3a135c: 0xb4820000  sdr         $v0, 0x0($a0)
    ctx->pc = 0x3a135cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3a1360:
    // 0x3a1360: 0xb085000f  sdl         $a1, 0xF($a0)
    ctx->pc = 0x3a1360u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3a1364:
    // 0x3a1364: 0xb4850008  sdr         $a1, 0x8($a0)
    ctx->pc = 0x3a1364u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3a1368:
    // 0x3a1368: 0xb0860017  sdl         $a2, 0x17($a0)
    ctx->pc = 0x3a1368u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3a136c:
    // 0x3a136c: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x3a136cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_3a1370:
    // 0x3a1370: 0xb4860010  sdr         $a2, 0x10($a0)
    ctx->pc = 0x3a1370u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3a1374:
    // 0x3a1374: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x3a1374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_3a1378:
    // 0x3a1378: 0x24840018  addiu       $a0, $a0, 0x18
    ctx->pc = 0x3a1378u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
label_3a137c:
    // 0x3a137c: 0x2442000a  addiu       $v0, $v0, 0xA
    ctx->pc = 0x3a137cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
label_3a1380:
    // 0x3a1380: 0x122102b  sltu        $v0, $t1, $v0
    ctx->pc = 0x3a1380u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_3a1384:
    // 0x3a1384: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
label_3a1388:
    if (ctx->pc == 0x3A1388u) {
        ctx->pc = 0x3A1388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1384u;
        // 0x3a1388: 0x24630018  addiu       $v1, $v1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A138Cu;
        goto label_3a138c;
    }
    ctx->pc = 0x3A1384u;
    {
        const bool branch_taken_0x3a1384 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A1388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1384u;
        // 0x3a1388: 0x24630018  addiu       $v1, $v1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a1384) {
            ctx->pc = 0x3A1340u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a1340;
        }
    }
    ctx->pc = 0x3A138Cu;
label_3a138c:
    // 0x3a138c: 0x8fa30150  lw          $v1, 0x150($sp)
    ctx->pc = 0x3a138cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_3a1390:
    // 0x3a1390: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x3a1390u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_3a1394:
    // 0x3a1394: 0x3442ffc0  ori         $v0, $v0, 0xFFC0
    ctx->pc = 0x3a1394u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65472);
label_3a1398:
    // 0x3a1398: 0x262401ef  addiu       $a0, $s1, 0x1EF
    ctx->pc = 0x3a1398u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 495));
label_3a139c:
    // 0x3a139c: 0xae230018  sw          $v1, 0x18($s1)
    ctx->pc = 0x3a139cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 3));
label_3a13a0:
    // 0x3a13a0: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x3a13a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_3a13a4:
    // 0x3a13a4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3a13a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3a13a8:
    // 0x3a13a8: 0x8fa30158  lw          $v1, 0x158($sp)
    ctx->pc = 0x3a13a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
label_3a13ac:
    // 0x3a13ac: 0xae23001c  sw          $v1, 0x1C($s1)
    ctx->pc = 0x3a13acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 3));
label_3a13b0:
    // 0x3a13b0: 0x8fa20154  lw          $v0, 0x154($sp)
    ctx->pc = 0x3a13b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
label_3a13b4:
    // 0x3a13b4: 0xae25002c  sw          $a1, 0x2C($s1)
    ctx->pc = 0x3a13b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 5));
label_3a13b8:
    // 0x3a13b8: 0xae220020  sw          $v0, 0x20($s1)
    ctx->pc = 0x3a13b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
label_3a13bc:
    // 0x3a13bc: 0xae200024  sw          $zero, 0x24($s1)
    ctx->pc = 0x3a13bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 0));
label_3a13c0:
    // 0x3a13c0: 0xae200028  sw          $zero, 0x28($s1)
    ctx->pc = 0x3a13c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 0));
label_3a13c4:
    // 0x3a13c4: 0x928200b4  lbu         $v0, 0xB4($s4)
    ctx->pc = 0x3a13c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 180)));
label_3a13c8:
    // 0x3a13c8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_3a13cc:
    if (ctx->pc == 0x3A13CCu) {
        ctx->pc = 0x3A13CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A13C8u;
        // 0x3a13cc: 0x2483007f  addiu       $v1, $a0, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 127));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A13D0u;
        goto label_3a13d0;
    }
    ctx->pc = 0x3A13C8u;
    {
        const bool branch_taken_0x3a13c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A13CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A13C8u;
        // 0x3a13cc: 0x2483007f  addiu       $v1, $a0, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 127));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a13c8) {
            ctx->pc = 0x3A13DCu;
            goto label_3a13dc;
        }
    }
    ctx->pc = 0x3A13D0u;
label_3a13d0:
    // 0x3a13d0: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x3a13d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_3a13d4:
    // 0x3a13d4: 0x3442ff80  ori         $v0, $v0, 0xFF80
    ctx->pc = 0x3a13d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65408);
label_3a13d8:
    // 0x3a13d8: 0x622024  and         $a0, $v1, $v0
    ctx->pc = 0x3a13d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_3a13dc:
    // 0x3a13dc: 0x8e430024  lw          $v1, 0x24($s2)
    ctx->pc = 0x3a13dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_3a13e0:
    // 0x3a13e0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3a13e0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a13e4:
    // 0x3a13e4: 0x2462000a  addiu       $v0, $v1, 0xA
    ctx->pc = 0x3a13e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
label_3a13e8:
    // 0x3a13e8: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
label_3a13ec:
    if (ctx->pc == 0x3A13ECu) {
        ctx->pc = 0x3A13ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A13E8u;
        // 0x3a13ec: 0xae240008  sw          $a0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A13F0u;
        goto label_3a13f0;
    }
    ctx->pc = 0x3A13E8u;
    {
        const bool branch_taken_0x3a13e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A13ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A13E8u;
        // 0x3a13ec: 0xae240008  sw          $a0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a13e8) {
            ctx->pc = 0x3A1458u;
            goto label_3a1458;
        }
    }
    ctx->pc = 0x3A13F0u;
label_3a13f0:
    // 0x3a13f0: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x3a13f0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3a13f4:
    // 0x3a13f4: 0x26870020  addiu       $a3, $s4, 0x20
    ctx->pc = 0x3a13f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
label_3a13f8:
    // 0x3a13f8: 0x2626009c  addiu       $a2, $s1, 0x9C
    ctx->pc = 0x3a13f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 156));
label_3a13fc:
    // 0x3a13fc: 0x26250034  addiu       $a1, $s1, 0x34
    ctx->pc = 0x3a13fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 52));
label_3a1400:
    // 0x3a1400: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x3a1400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_3a1404:
    // 0x3a1404: 0x30422001  andi        $v0, $v0, 0x2001
    ctx->pc = 0x3a1404u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8193);
label_3a1408:
    // 0x3a1408: 0x5448000d  bnel        $v0, $t0, . + 4 + (0xD << 2)
label_3a140c:
    if (ctx->pc == 0x3A140Cu) {
        ctx->pc = 0x3A140Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1408u;
        // 0x3a140c: 0x8e430024  lw          $v1, 0x24($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A1410u;
        goto label_3a1410;
    }
    ctx->pc = 0x3A1408u;
    {
        const bool branch_taken_0x3a1408 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 8));
        if (branch_taken_0x3a1408) {
            ctx->pc = 0x3A140Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A1408u;
            // 0x3a140c: 0x8e430024  lw          $v1, 0x24($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A1440u;
            goto label_3a1440;
        }
    }
    ctx->pc = 0x3A1410u;
label_3a1410:
    // 0x3a1410: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
label_3a1414:
    if (ctx->pc == 0x3A1414u) {
        ctx->pc = 0x3A1414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1410u;
        // 0x3a1414: 0x8cc4fffc  lw          $a0, -0x4($a2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294967292)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A1418u;
        goto label_3a1418;
    }
    ctx->pc = 0x3A1410u;
    {
        const bool branch_taken_0x3a1410 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A1414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1410u;
        // 0x3a1414: 0x8cc4fffc  lw          $a0, -0x4($a2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294967292)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a1410) {
            ctx->pc = 0x3A141Cu;
            goto label_3a141c;
        }
    }
    ctx->pc = 0x3A1418u;
label_3a1418:
    // 0x3a1418: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x3a1418u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_3a141c:
    // 0x3a141c: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x3a141cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_3a1420:
    // 0x3a1420: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x3a1420u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_3a1424:
    // 0x3a1424: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x3a1424u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_3a1428:
    // 0x3a1428: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3a1428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_3a142c:
    // 0x3a142c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3a142cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_3a1430:
    // 0x3a1430: 0xaca2fffc  sw          $v0, -0x4($a1)
    ctx->pc = 0x3a1430u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294967292), GPR_U32(ctx, 2));
label_3a1434:
    // 0x3a1434: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x3a1434u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_3a1438:
    // 0x3a1438: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x3a1438u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
label_3a143c:
    // 0x3a143c: 0x8e430024  lw          $v1, 0x24($s2)
    ctx->pc = 0x3a143cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_3a1440:
    // 0x3a1440: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x3a1440u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_3a1444:
    // 0x3a1444: 0x24c60018  addiu       $a2, $a2, 0x18
    ctx->pc = 0x3a1444u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 24));
label_3a1448:
    // 0x3a1448: 0x2462000a  addiu       $v0, $v1, 0xA
    ctx->pc = 0x3a1448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
label_3a144c:
    // 0x3a144c: 0x122102b  sltu        $v0, $t1, $v0
    ctx->pc = 0x3a144cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_3a1450:
    // 0x3a1450: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
label_3a1454:
    if (ctx->pc == 0x3A1454u) {
        ctx->pc = 0x3A1454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1450u;
        // 0x3a1454: 0x24e70008  addiu       $a3, $a3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A1458u;
        goto label_3a1458;
    }
    ctx->pc = 0x3A1450u;
    {
        const bool branch_taken_0x3a1450 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A1454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1450u;
        // 0x3a1454: 0x24e70008  addiu       $a3, $a3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a1450) {
            ctx->pc = 0x3A1400u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a1400;
        }
    }
    ctx->pc = 0x3A1458u;
label_3a1458:
    // 0x3a1458: 0xc0e7ccc  jal         func_39F330
label_3a145c:
    if (ctx->pc == 0x3A145Cu) {
        ctx->pc = 0x3A145Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1458u;
        // 0x3a145c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A1460u;
        goto label_3a1460;
    }
    ctx->pc = 0x3A1458u;
    SET_GPR_U32(ctx, 31, 0x3A1460u);
    ctx->pc = 0x3A145Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A1458u;
    // 0x3a145c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39F330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39F330u, 0x3A1458u, 0x3A1460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A1460u;
label_3a1460:
    // 0x3a1460: 0x928600b5  lbu         $a2, 0xB5($s4)
    ctx->pc = 0x3a1460u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 181)));
label_3a1464:
    // 0x3a1464: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3a1464u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a1468:
    // 0x3a1468: 0x10c0002c  beqz        $a2, . + 4 + (0x2C << 2)
label_3a146c:
    if (ctx->pc == 0x3A146Cu) {
        ctx->pc = 0x3A146Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1468u;
        // 0x3a146c: 0x27ab0120  addiu       $t3, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A1470u;
        goto label_3a1470;
    }
    ctx->pc = 0x3A1468u;
    {
        const bool branch_taken_0x3a1468 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A146Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1468u;
        // 0x3a146c: 0x27ab0120  addiu       $t3, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a1468) {
            ctx->pc = 0x3A151Cu;
            goto label_3a151c;
        }
    }
    ctx->pc = 0x3A1470u;
label_3a1470:
    // 0x3a1470: 0x26240030  addiu       $a0, $s1, 0x30
    ctx->pc = 0x3a1470u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
label_3a1474:
    // 0x3a1474: 0x160282d  daddu       $a1, $t3, $zero
    ctx->pc = 0x3a1474u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_3a1478:
    // 0x3a1478: 0x18c00012  blez        $a2, . + 4 + (0x12 << 2)
label_3a147c:
    if (ctx->pc == 0x3A147Cu) {
        ctx->pc = 0x3A147Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1478u;
        // 0x3a147c: 0x30c30003  andi        $v1, $a2, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A1480u;
        goto label_3a1480;
    }
    ctx->pc = 0x3A1478u;
    {
        const bool branch_taken_0x3a1478 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x3A147Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1478u;
        // 0x3a147c: 0x30c30003  andi        $v1, $a2, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a1478) {
            ctx->pc = 0x3A14C4u;
            goto label_3a14c4;
        }
    }
    ctx->pc = 0x3A1480u;
label_3a1480:
    // 0x3a1480: 0x10600017  beqz        $v1, . + 4 + (0x17 << 2)
label_3a1484:
    if (ctx->pc == 0x3A1484u) {
        ctx->pc = 0x3A1484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1480u;
        // 0x3a1484: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A1488u;
        goto label_3a1488;
    }
    ctx->pc = 0x3A1480u;
    {
        const bool branch_taken_0x3a1480 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A1484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1480u;
        // 0x3a1484: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a1480) {
            ctx->pc = 0x3A14E0u;
            goto label_3a14e0;
        }
    }
    ctx->pc = 0x3A1488u;
label_3a1488:
    // 0x3a1488: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
label_3a148c:
    if (ctx->pc == 0x3A148Cu) {
        ctx->pc = 0x3A148Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1488u;
        // 0x3a148c: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A1490u;
        goto label_3a1490;
    }
    ctx->pc = 0x3A1488u;
    {
        const bool branch_taken_0x3a1488 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a1488) {
            ctx->pc = 0x3A148Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A1488u;
            // 0x3a148c: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A14C8u;
            goto label_3a14c8;
        }
    }
    ctx->pc = 0x3A1490u;
label_3a1490:
    // 0x3a1490: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x3a1490u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_3a1494:
    // 0x3a1494: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_3a1498:
    if (ctx->pc == 0x3A1498u) {
        ctx->pc = 0x3A1498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1494u;
        // 0x3a1498: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A149Cu;
        goto label_3a149c;
    }
    ctx->pc = 0x3A1494u;
    {
        const bool branch_taken_0x3a1494 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a1494) {
            ctx->pc = 0x3A1498u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A1494u;
            // 0x3a1498: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A14B4u;
            goto label_3a14b4;
        }
    }
    ctx->pc = 0x3A149Cu;
label_3a149c:
    // 0x3a149c: 0x8e220030  lw          $v0, 0x30($s1)
    ctx->pc = 0x3a149cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_3a14a0:
    // 0x3a14a0: 0x27a50124  addiu       $a1, $sp, 0x124
    ctx->pc = 0x3a14a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 292));
label_3a14a4:
    // 0x3a14a4: 0x26240038  addiu       $a0, $s1, 0x38
    ctx->pc = 0x3a14a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
label_3a14a8:
    // 0x3a14a8: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x3a14a8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3a14ac:
    // 0x3a14ac: 0xafa20120  sw          $v0, 0x120($sp)
    ctx->pc = 0x3a14acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 2));
label_3a14b0:
    // 0x3a14b0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x3a14b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3a14b4:
    // 0x3a14b4: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x3a14b4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_3a14b8:
    // 0x3a14b8: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x3a14b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_3a14bc:
    // 0x3a14bc: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x3a14bcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_3a14c0:
    // 0x3a14c0: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x3a14c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_3a14c4:
    // 0x3a14c4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x3a14c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3a14c8:
    // 0x3a14c8: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x3a14c8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_3a14cc:
    // 0x3a14cc: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x3a14ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_3a14d0:
    // 0x3a14d0: 0x126502b  sltu        $t2, $t1, $a2
    ctx->pc = 0x3a14d0u;
    SET_GPR_U64(ctx, 10, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_3a14d4:
    // 0x3a14d4: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x3a14d4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_3a14d8:
    // 0x3a14d8: 0x11400010  beqz        $t2, . + 4 + (0x10 << 2)
label_3a14dc:
    if (ctx->pc == 0x3A14DCu) {
        ctx->pc = 0x3A14DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A14D8u;
        // 0x3a14dc: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A14E0u;
        goto label_3a14e0;
    }
    ctx->pc = 0x3A14D8u;
    {
        const bool branch_taken_0x3a14d8 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A14DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A14D8u;
        // 0x3a14dc: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a14d8) {
            ctx->pc = 0x3A151Cu;
            goto label_3a151c;
        }
    }
    ctx->pc = 0x3A14E0u;
label_3a14e0:
    // 0x3a14e0: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x3a14e0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3a14e4:
    // 0x3a14e4: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x3a14e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3a14e8:
    // 0x3a14e8: 0x8d040000  lw          $a0, 0x0($t0)
    ctx->pc = 0x3a14e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_3a14ec:
    // 0x3a14ec: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x3a14ecu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
label_3a14f0:
    // 0x3a14f0: 0x8d050008  lw          $a1, 0x8($t0)
    ctx->pc = 0x3a14f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
label_3a14f4:
    // 0x3a14f4: 0x126502b  sltu        $t2, $t1, $a2
    ctx->pc = 0x3a14f4u;
    SET_GPR_U64(ctx, 10, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_3a14f8:
    // 0x3a14f8: 0x8d020010  lw          $v0, 0x10($t0)
    ctx->pc = 0x3a14f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 16)));
label_3a14fc:
    // 0x3a14fc: 0x8d030018  lw          $v1, 0x18($t0)
    ctx->pc = 0x3a14fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 24)));
label_3a1500:
    // 0x3a1500: 0xace40000  sw          $a0, 0x0($a3)
    ctx->pc = 0x3a1500u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
label_3a1504:
    // 0x3a1504: 0x25080020  addiu       $t0, $t0, 0x20
    ctx->pc = 0x3a1504u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 32));
label_3a1508:
    // 0x3a1508: 0xace50004  sw          $a1, 0x4($a3)
    ctx->pc = 0x3a1508u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 5));
label_3a150c:
    // 0x3a150c: 0xace20008  sw          $v0, 0x8($a3)
    ctx->pc = 0x3a150cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 2));
label_3a1510:
    // 0x3a1510: 0xace3000c  sw          $v1, 0xC($a3)
    ctx->pc = 0x3a1510u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 3));
label_3a1514:
    // 0x3a1514: 0x1540fff4  bnez        $t2, . + 4 + (-0xC << 2)
label_3a1518:
    if (ctx->pc == 0x3A1518u) {
        ctx->pc = 0x3A1518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1514u;
        // 0x3a1518: 0x24e70010  addiu       $a3, $a3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A151Cu;
        goto label_3a151c;
    }
    ctx->pc = 0x3A1514u;
    {
        const bool branch_taken_0x3a1514 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A1518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1514u;
        // 0x3a1518: 0x24e70010  addiu       $a3, $a3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a1514) {
            ctx->pc = 0x3A14E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a14e8;
        }
    }
    ctx->pc = 0x3A151Cu;
label_3a151c:
    // 0x3a151c: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x3a151cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_3a1520:
    // 0x3a1520: 0x160282d  daddu       $a1, $t3, $zero
    ctx->pc = 0x3a1520u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_3a1524:
    // 0x3a1524: 0x40f809  jalr        $v0
label_3a1528:
    if (ctx->pc == 0x3A1528u) {
        ctx->pc = 0x3A1528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1524u;
        // 0x3a1528: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A152Cu;
        goto label_3a152c;
    }
    ctx->pc = 0x3A1524u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3A152Cu);
        ctx->pc = 0x3A1528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1524u;
        // 0x3a1528: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A1524u, 0x3A152Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3A152Cu;
label_3a152c:
    // 0x3a152c: 0x8e430030  lw          $v1, 0x30($s2)
    ctx->pc = 0x3a152cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
label_3a1530:
    // 0x3a1530: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3a1530u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3a1534:
    // 0x3a1534: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x3a1534u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_3a1538:
    // 0x3a1538: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3a1538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3a153c:
    // 0x3a153c: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x3a153cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_3a1540:
    // 0x3a1540: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x3a1540u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_3a1544:
    // 0x3a1544: 0xc0bf916  jal         func_2FE458
label_3a1548:
    if (ctx->pc == 0x3A1548u) {
        ctx->pc = 0x3A1548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1544u;
        // 0x3a1548: 0x24a500db  addiu       $a1, $a1, 0xDB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 219));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A154Cu;
        goto label_3a154c;
    }
    ctx->pc = 0x3A1544u;
    SET_GPR_U32(ctx, 31, 0x3A154Cu);
    ctx->pc = 0x3A1548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A1544u;
    // 0x3a1548: 0x24a500db  addiu       $a1, $a1, 0xDB (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 219));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE458u, 0x3A1544u, 0x3A154Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A154Cu;
label_3a154c:
    // 0x3a154c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3a154cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3a1550:
    // 0x3a1550: 0x7bb001b0  lq          $s0, 0x1B0($sp)
    ctx->pc = 0x3a1550u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 432)));
label_3a1554:
    // 0x3a1554: 0x7bb101a0  lq          $s1, 0x1A0($sp)
    ctx->pc = 0x3a1554u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 416)));
label_3a1558:
    // 0x3a1558: 0x7bb20190  lq          $s2, 0x190($sp)
    ctx->pc = 0x3a1558u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 400)));
label_3a155c:
    // 0x3a155c: 0x7bb30180  lq          $s3, 0x180($sp)
    ctx->pc = 0x3a155cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 384)));
label_3a1560:
    // 0x3a1560: 0x7bb40170  lq          $s4, 0x170($sp)
    ctx->pc = 0x3a1560u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 368)));
label_3a1564:
    // 0x3a1564: 0xdfbf0160  ld          $ra, 0x160($sp)
    ctx->pc = 0x3a1564u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 352)));
label_3a1568:
    // 0x3a1568: 0x3e00008  jr          $ra
label_3a156c:
    if (ctx->pc == 0x3A156Cu) {
        ctx->pc = 0x3A156Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1568u;
        // 0x3a156c: 0x27bd01c0  addiu       $sp, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A1570u;
        goto label_fallthrough_0x3a1568;
    }
    ctx->pc = 0x3A1568u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A156Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1568u;
        // 0x3a156c: 0x27bd01c0  addiu       $sp, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A1568u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3a1568:
    ctx->pc = 0x3A1570u;
}
