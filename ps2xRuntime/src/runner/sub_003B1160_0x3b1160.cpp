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

// Function: sub_003B1160
// Address: 0x3b1160 - 0x3b1468
void sub_003B1160_0x3b1160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B1160_0x3b1160");
#endif

    switch (ctx->pc) {
        case 0x3b1160u: goto label_3b1160;
        case 0x3b1164u: goto label_3b1164;
        case 0x3b1168u: goto label_3b1168;
        case 0x3b116cu: goto label_3b116c;
        case 0x3b1170u: goto label_3b1170;
        case 0x3b1174u: goto label_3b1174;
        case 0x3b1178u: goto label_3b1178;
        case 0x3b117cu: goto label_3b117c;
        case 0x3b1180u: goto label_3b1180;
        case 0x3b1184u: goto label_3b1184;
        case 0x3b1188u: goto label_3b1188;
        case 0x3b118cu: goto label_3b118c;
        case 0x3b1190u: goto label_3b1190;
        case 0x3b1194u: goto label_3b1194;
        case 0x3b1198u: goto label_3b1198;
        case 0x3b119cu: goto label_3b119c;
        case 0x3b11a0u: goto label_3b11a0;
        case 0x3b11a4u: goto label_3b11a4;
        case 0x3b11a8u: goto label_3b11a8;
        case 0x3b11acu: goto label_3b11ac;
        case 0x3b11b0u: goto label_3b11b0;
        case 0x3b11b4u: goto label_3b11b4;
        case 0x3b11b8u: goto label_3b11b8;
        case 0x3b11bcu: goto label_3b11bc;
        case 0x3b11c0u: goto label_3b11c0;
        case 0x3b11c4u: goto label_3b11c4;
        case 0x3b11c8u: goto label_3b11c8;
        case 0x3b11ccu: goto label_3b11cc;
        case 0x3b11d0u: goto label_3b11d0;
        case 0x3b11d4u: goto label_3b11d4;
        case 0x3b11d8u: goto label_3b11d8;
        case 0x3b11dcu: goto label_3b11dc;
        case 0x3b11e0u: goto label_3b11e0;
        case 0x3b11e4u: goto label_3b11e4;
        case 0x3b11e8u: goto label_3b11e8;
        case 0x3b11ecu: goto label_3b11ec;
        case 0x3b11f0u: goto label_3b11f0;
        case 0x3b11f4u: goto label_3b11f4;
        case 0x3b11f8u: goto label_3b11f8;
        case 0x3b11fcu: goto label_3b11fc;
        case 0x3b1200u: goto label_3b1200;
        case 0x3b1204u: goto label_3b1204;
        case 0x3b1208u: goto label_3b1208;
        case 0x3b120cu: goto label_3b120c;
        case 0x3b1210u: goto label_3b1210;
        case 0x3b1214u: goto label_3b1214;
        case 0x3b1218u: goto label_3b1218;
        case 0x3b121cu: goto label_3b121c;
        case 0x3b1220u: goto label_3b1220;
        case 0x3b1224u: goto label_3b1224;
        case 0x3b1228u: goto label_3b1228;
        case 0x3b122cu: goto label_3b122c;
        case 0x3b1230u: goto label_3b1230;
        case 0x3b1234u: goto label_3b1234;
        case 0x3b1238u: goto label_3b1238;
        case 0x3b123cu: goto label_3b123c;
        case 0x3b1240u: goto label_3b1240;
        case 0x3b1244u: goto label_3b1244;
        case 0x3b1248u: goto label_3b1248;
        case 0x3b124cu: goto label_3b124c;
        case 0x3b1250u: goto label_3b1250;
        case 0x3b1254u: goto label_3b1254;
        case 0x3b1258u: goto label_3b1258;
        case 0x3b125cu: goto label_3b125c;
        case 0x3b1260u: goto label_3b1260;
        case 0x3b1264u: goto label_3b1264;
        case 0x3b1268u: goto label_3b1268;
        case 0x3b126cu: goto label_3b126c;
        case 0x3b1270u: goto label_3b1270;
        case 0x3b1274u: goto label_3b1274;
        case 0x3b1278u: goto label_3b1278;
        case 0x3b127cu: goto label_3b127c;
        case 0x3b1280u: goto label_3b1280;
        case 0x3b1284u: goto label_3b1284;
        case 0x3b1288u: goto label_3b1288;
        case 0x3b128cu: goto label_3b128c;
        case 0x3b1290u: goto label_3b1290;
        case 0x3b1294u: goto label_3b1294;
        case 0x3b1298u: goto label_3b1298;
        case 0x3b129cu: goto label_3b129c;
        case 0x3b12a0u: goto label_3b12a0;
        case 0x3b12a4u: goto label_3b12a4;
        case 0x3b12a8u: goto label_3b12a8;
        case 0x3b12acu: goto label_3b12ac;
        case 0x3b12b0u: goto label_3b12b0;
        case 0x3b12b4u: goto label_3b12b4;
        case 0x3b12b8u: goto label_3b12b8;
        case 0x3b12bcu: goto label_3b12bc;
        case 0x3b12c0u: goto label_3b12c0;
        case 0x3b12c4u: goto label_3b12c4;
        case 0x3b12c8u: goto label_3b12c8;
        case 0x3b12ccu: goto label_3b12cc;
        case 0x3b12d0u: goto label_3b12d0;
        case 0x3b12d4u: goto label_3b12d4;
        case 0x3b12d8u: goto label_3b12d8;
        case 0x3b12dcu: goto label_3b12dc;
        case 0x3b12e0u: goto label_3b12e0;
        case 0x3b12e4u: goto label_3b12e4;
        case 0x3b12e8u: goto label_3b12e8;
        case 0x3b12ecu: goto label_3b12ec;
        case 0x3b12f0u: goto label_3b12f0;
        case 0x3b12f4u: goto label_3b12f4;
        case 0x3b12f8u: goto label_3b12f8;
        case 0x3b12fcu: goto label_3b12fc;
        case 0x3b1300u: goto label_3b1300;
        case 0x3b1304u: goto label_3b1304;
        case 0x3b1308u: goto label_3b1308;
        case 0x3b130cu: goto label_3b130c;
        case 0x3b1310u: goto label_3b1310;
        case 0x3b1314u: goto label_3b1314;
        case 0x3b1318u: goto label_3b1318;
        case 0x3b131cu: goto label_3b131c;
        case 0x3b1320u: goto label_3b1320;
        case 0x3b1324u: goto label_3b1324;
        case 0x3b1328u: goto label_3b1328;
        case 0x3b132cu: goto label_3b132c;
        case 0x3b1330u: goto label_3b1330;
        case 0x3b1334u: goto label_3b1334;
        case 0x3b1338u: goto label_3b1338;
        case 0x3b133cu: goto label_3b133c;
        case 0x3b1340u: goto label_3b1340;
        case 0x3b1344u: goto label_3b1344;
        case 0x3b1348u: goto label_3b1348;
        case 0x3b134cu: goto label_3b134c;
        case 0x3b1350u: goto label_3b1350;
        case 0x3b1354u: goto label_3b1354;
        case 0x3b1358u: goto label_3b1358;
        case 0x3b135cu: goto label_3b135c;
        case 0x3b1360u: goto label_3b1360;
        case 0x3b1364u: goto label_3b1364;
        case 0x3b1368u: goto label_3b1368;
        case 0x3b136cu: goto label_3b136c;
        case 0x3b1370u: goto label_3b1370;
        case 0x3b1374u: goto label_3b1374;
        case 0x3b1378u: goto label_3b1378;
        case 0x3b137cu: goto label_3b137c;
        case 0x3b1380u: goto label_3b1380;
        case 0x3b1384u: goto label_3b1384;
        case 0x3b1388u: goto label_3b1388;
        case 0x3b138cu: goto label_3b138c;
        case 0x3b1390u: goto label_3b1390;
        case 0x3b1394u: goto label_3b1394;
        case 0x3b1398u: goto label_3b1398;
        case 0x3b139cu: goto label_3b139c;
        case 0x3b13a0u: goto label_3b13a0;
        case 0x3b13a4u: goto label_3b13a4;
        case 0x3b13a8u: goto label_3b13a8;
        case 0x3b13acu: goto label_3b13ac;
        case 0x3b13b0u: goto label_3b13b0;
        case 0x3b13b4u: goto label_3b13b4;
        case 0x3b13b8u: goto label_3b13b8;
        case 0x3b13bcu: goto label_3b13bc;
        case 0x3b13c0u: goto label_3b13c0;
        case 0x3b13c4u: goto label_3b13c4;
        case 0x3b13c8u: goto label_3b13c8;
        case 0x3b13ccu: goto label_3b13cc;
        case 0x3b13d0u: goto label_3b13d0;
        case 0x3b13d4u: goto label_3b13d4;
        case 0x3b13d8u: goto label_3b13d8;
        case 0x3b13dcu: goto label_3b13dc;
        case 0x3b13e0u: goto label_3b13e0;
        case 0x3b13e4u: goto label_3b13e4;
        case 0x3b13e8u: goto label_3b13e8;
        case 0x3b13ecu: goto label_3b13ec;
        case 0x3b13f0u: goto label_3b13f0;
        case 0x3b13f4u: goto label_3b13f4;
        case 0x3b13f8u: goto label_3b13f8;
        case 0x3b13fcu: goto label_3b13fc;
        case 0x3b1400u: goto label_3b1400;
        case 0x3b1404u: goto label_3b1404;
        case 0x3b1408u: goto label_3b1408;
        case 0x3b140cu: goto label_3b140c;
        case 0x3b1410u: goto label_3b1410;
        case 0x3b1414u: goto label_3b1414;
        case 0x3b1418u: goto label_3b1418;
        case 0x3b141cu: goto label_3b141c;
        case 0x3b1420u: goto label_3b1420;
        case 0x3b1424u: goto label_3b1424;
        case 0x3b1428u: goto label_3b1428;
        case 0x3b142cu: goto label_3b142c;
        case 0x3b1430u: goto label_3b1430;
        case 0x3b1434u: goto label_3b1434;
        case 0x3b1438u: goto label_3b1438;
        case 0x3b143cu: goto label_3b143c;
        case 0x3b1440u: goto label_3b1440;
        case 0x3b1444u: goto label_3b1444;
        case 0x3b1448u: goto label_3b1448;
        case 0x3b144cu: goto label_3b144c;
        case 0x3b1450u: goto label_3b1450;
        case 0x3b1454u: goto label_3b1454;
        case 0x3b1458u: goto label_3b1458;
        case 0x3b145cu: goto label_3b145c;
        case 0x3b1460u: goto label_3b1460;
        case 0x3b1464u: goto label_3b1464;
        default: break;
    }

    ctx->pc = 0x3b1160u;

label_3b1160:
    // 0x3b1160: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x3b1160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_3b1164:
    // 0x3b1164: 0x3c050062  lui         $a1, 0x62
    ctx->pc = 0x3b1164u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)98 << 16));
label_3b1168:
    // 0x3b1168: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x3b1168u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
label_3b116c:
    // 0x3b116c: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x3b116cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_3b1170:
    // 0x3b1170: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x3b1170u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_3b1174:
    // 0x3b1174: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x3b1174u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3b1178:
    // 0x3b1178: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x3b1178u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_3b117c:
    // 0x3b117c: 0x24a5ce80  addiu       $a1, $a1, -0x3180
    ctx->pc = 0x3b117cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954624));
label_3b1180:
    // 0x3b1180: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x3b1180u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
label_3b1184:
    // 0x3b1184: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3b1184u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3b1188:
    // 0x3b1188: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x3b1188u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_3b118c:
    // 0x3b118c: 0x60a02d  daddu       $s4, $v1, $zero
    ctx->pc = 0x3b118cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_3b1190:
    // 0x3b1190: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x3b1190u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_3b1194:
    // 0x3b1194: 0x2463e880  addiu       $v1, $v1, -0x1780
    ctx->pc = 0x3b1194u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961280));
label_3b1198:
    // 0x3b1198: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3b1198u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3b119c:
    // 0x3b119c: 0x8ca40524  lw          $a0, 0x524($a1)
    ctx->pc = 0x3b119cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1316)));
label_3b11a0:
    // 0x3b11a0: 0x8c620118  lw          $v0, 0x118($v1)
    ctx->pc = 0x3b11a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 280)));
label_3b11a4:
    // 0x3b11a4: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x3b11a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_3b11a8:
    // 0x3b11a8: 0x40f809  jalr        $v0
label_3b11ac:
    if (ctx->pc == 0x3B11ACu) {
        ctx->pc = 0x3B11ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B11A8u;
        // 0x3b11ac: 0x34a501a1  ori         $a1, $a1, 0x1A1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)417);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B11B0u;
        goto label_3b11b0;
    }
    ctx->pc = 0x3B11A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3B11B0u);
        ctx->pc = 0x3B11ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B11A8u;
        // 0x3b11ac: 0x34a501a1  ori         $a1, $a1, 0x1A1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)417);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B11A8u, 0x3B11B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3B11B0u;
label_3b11b0:
    // 0x3b11b0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3b11b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b11b4:
    // 0x3b11b4: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
label_3b11b8:
    if (ctx->pc == 0x3B11B8u) {
        ctx->pc = 0x3B11B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B11B4u;
        // 0x3b11b8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B11BCu;
        goto label_3b11bc;
    }
    ctx->pc = 0x3B11B4u;
    {
        const bool branch_taken_0x3b11b4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B11B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B11B4u;
        // 0x3b11b8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b11b4) {
            ctx->pc = 0x3B11E0u;
            goto label_3b11e0;
        }
    }
    ctx->pc = 0x3B11BCu;
label_3b11bc:
    // 0x3b11bc: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x3b11bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_3b11c0:
    // 0x3b11c0: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x3b11c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_3b11c4:
    // 0x3b11c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3b11c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3b11c8:
    // 0x3b11c8: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x3b11c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_3b11cc:
    // 0x3b11cc: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x3b11ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
label_3b11d0:
    // 0x3b11d0: 0xae100018  sw          $s0, 0x18($s0)
    ctx->pc = 0x3b11d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 16));
label_3b11d4:
    // 0x3b11d4: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x3b11d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
label_3b11d8:
    // 0x3b11d8: 0xc0ec64a  jal         func_3B1928
label_3b11dc:
    if (ctx->pc == 0x3B11DCu) {
        ctx->pc = 0x3B11DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B11D8u;
        // 0x3b11dc: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B11E0u;
        goto label_3b11e0;
    }
    ctx->pc = 0x3B11D8u;
    SET_GPR_U32(ctx, 31, 0x3B11E0u);
    ctx->pc = 0x3B11DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B11D8u;
    // 0x3b11dc: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B1928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1928u, 0x3B11D8u, 0x3B11E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B11E0u;
label_3b11e0:
    // 0x3b11e0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3b11e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3b11e4:
    // 0x3b11e4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3b11e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3b11e8:
    // 0x3b11e8: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x3b11e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_3b11ec:
    // 0x3b11ec: 0xc10480a  jal         func_412028
label_3b11f0:
    if (ctx->pc == 0x3B11F0u) {
        ctx->pc = 0x3B11F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B11ECu;
        // 0x3b11f0: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B11F4u;
        goto label_3b11f4;
    }
    ctx->pc = 0x3B11ECu;
    SET_GPR_U32(ctx, 31, 0x3B11F4u);
    ctx->pc = 0x3B11F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B11ECu;
    // 0x3b11f0: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x412028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x412028u, 0x3B11ECu, 0x3B11F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B11F4u;
label_3b11f4:
    // 0x3b11f4: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x3b11f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_3b11f8:
    // 0x3b11f8: 0x1443000b  bne         $v0, $v1, . + 4 + (0xB << 2)
label_3b11fc:
    if (ctx->pc == 0x3B11FCu) {
        ctx->pc = 0x3B11FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B11F8u;
        // 0x3b11fc: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1200u;
        goto label_3b1200;
    }
    ctx->pc = 0x3B11F8u;
    {
        const bool branch_taken_0x3b11f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3B11FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B11F8u;
        // 0x3b11fc: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b11f8) {
            ctx->pc = 0x3B1228u;
            goto label_3b1228;
        }
    }
    ctx->pc = 0x3B1200u;
label_3b1200:
    // 0x3b1200: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x3b1200u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_3b1204:
    // 0x3b1204: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3b1204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3b1208:
    // 0x3b1208: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
label_3b120c:
    if (ctx->pc == 0x3B120Cu) {
        ctx->pc = 0x3B120Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1208u;
        // 0x3b120c: 0x220902d  daddu       $s2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1210u;
        goto label_3b1210;
    }
    ctx->pc = 0x3B1208u;
    {
        const bool branch_taken_0x3b1208 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3B120Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1208u;
        // 0x3b120c: 0x220902d  daddu       $s2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b1208) {
            ctx->pc = 0x3B1228u;
            goto label_3b1228;
        }
    }
    ctx->pc = 0x3B1210u;
label_3b1210:
    // 0x3b1210: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3b1210u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3b1214:
    // 0x3b1214: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3b1214u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3b1218:
    // 0x3b1218: 0xc0ec3ba  jal         func_3B0EE8
label_3b121c:
    if (ctx->pc == 0x3B121Cu) {
        ctx->pc = 0x3B121Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1218u;
        // 0x3b121c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1220u;
        goto label_3b1220;
    }
    ctx->pc = 0x3B1218u;
    SET_GPR_U32(ctx, 31, 0x3B1220u);
    ctx->pc = 0x3B121Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B1218u;
    // 0x3b121c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B0EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B0EE8u, 0x3B1218u, 0x3B1220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B1220u;
label_3b1220:
    // 0x3b1220: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3b1220u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b1224:
    // 0x3b1224: 0x220902d  daddu       $s2, $s1, $zero
    ctx->pc = 0x3b1224u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3b1228:
    // 0x3b1228: 0x1640001b  bnez        $s2, . + 4 + (0x1B << 2)
label_3b122c:
    if (ctx->pc == 0x3B122Cu) {
        ctx->pc = 0x3B122Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1228u;
        // 0x3b122c: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1230u;
        goto label_3b1230;
    }
    ctx->pc = 0x3B1228u;
    {
        const bool branch_taken_0x3b1228 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B122Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1228u;
        // 0x3b122c: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b1228) {
            ctx->pc = 0x3B1298u;
            goto label_3b1298;
        }
    }
    ctx->pc = 0x3B1230u;
label_3b1230:
    // 0x3b1230: 0x12000018  beqz        $s0, . + 4 + (0x18 << 2)
label_3b1234:
    if (ctx->pc == 0x3B1234u) {
        ctx->pc = 0x3B1234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1230u;
        // 0x3b1234: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1238u;
        goto label_3b1238;
    }
    ctx->pc = 0x3B1230u;
    {
        const bool branch_taken_0x3b1230 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B1234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1230u;
        // 0x3b1234: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b1230) {
            ctx->pc = 0x3B1294u;
            goto label_3b1294;
        }
    }
    ctx->pc = 0x3B1238u;
label_3b1238:
    // 0x3b1238: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3b1238u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3b123c:
    // 0x3b123c: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
label_3b1240:
    if (ctx->pc == 0x3B1240u) {
        ctx->pc = 0x3B1240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B123Cu;
        // 0x3b1240: 0x8c510014  lw          $s1, 0x14($v0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1244u;
        goto label_3b1244;
    }
    ctx->pc = 0x3B123Cu;
    {
        const bool branch_taken_0x3b123c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B1240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B123Cu;
        // 0x3b1240: 0x8c510014  lw          $s1, 0x14($v0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b123c) {
            ctx->pc = 0x3B1270u;
            goto label_3b1270;
        }
    }
    ctx->pc = 0x3B1244u;
label_3b1244:
    // 0x3b1244: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x3b1244u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_3b1248:
    // 0x3b1248: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3b1248u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3b124c:
    // 0x3b124c: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_3b1250:
    if (ctx->pc == 0x3B1250u) {
        ctx->pc = 0x3B1250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B124Cu;
        // 0x3b1250: 0x2683e880  addiu       $v1, $s4, -0x1780 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4294961280));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1254u;
        goto label_3b1254;
    }
    ctx->pc = 0x3B124Cu;
    {
        const bool branch_taken_0x3b124c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3B1250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B124Cu;
        // 0x3b1250: 0x2683e880  addiu       $v1, $s4, -0x1780 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4294961280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b124c) {
            ctx->pc = 0x3B1264u;
            goto label_3b1264;
        }
    }
    ctx->pc = 0x3B1254u;
label_3b1254:
    // 0x3b1254: 0xc103684  jal         func_40DA10
label_3b1258:
    if (ctx->pc == 0x3B1258u) {
        ctx->pc = 0x3B125Cu;
        goto label_3b125c;
    }
    ctx->pc = 0x3B1254u;
    SET_GPR_U32(ctx, 31, 0x3B125Cu);
    ctx->pc = 0x40DA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DA10u, 0x3B1254u, 0x3B125Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B125Cu;
label_3b125c:
    // 0x3b125c: 0x10000005  b           . + 4 + (0x5 << 2)
label_3b1260:
    if (ctx->pc == 0x3B1260u) {
        ctx->pc = 0x3B1260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B125Cu;
        // 0x3b1260: 0x26a2ce80  addiu       $v0, $s5, -0x3180 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 4294954624));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1264u;
        goto label_3b1264;
    }
    ctx->pc = 0x3B125Cu;
    {
        const bool branch_taken_0x3b125c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B1260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B125Cu;
        // 0x3b1260: 0x26a2ce80  addiu       $v0, $s5, -0x3180 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 4294954624));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b125c) {
            ctx->pc = 0x3B1274u;
            goto label_3b1274;
        }
    }
    ctx->pc = 0x3B1264u;
label_3b1264:
    // 0x3b1264: 0x8c62010c  lw          $v0, 0x10C($v1)
    ctx->pc = 0x3b1264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
label_3b1268:
    // 0x3b1268: 0x40f809  jalr        $v0
label_3b126c:
    if (ctx->pc == 0x3B126Cu) {
        ctx->pc = 0x3B1270u;
        goto label_3b1270;
    }
    ctx->pc = 0x3B1268u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3B1270u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B1268u, 0x3B1270u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3B1270u;
label_3b1270:
    // 0x3b1270: 0x26a2ce80  addiu       $v0, $s5, -0x3180
    ctx->pc = 0x3b1270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 4294954624));
label_3b1274:
    // 0x3b1274: 0x2683e880  addiu       $v1, $s4, -0x1780
    ctx->pc = 0x3b1274u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4294961280));
label_3b1278:
    // 0x3b1278: 0x8c440524  lw          $a0, 0x524($v0)
    ctx->pc = 0x3b1278u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1316)));
label_3b127c:
    // 0x3b127c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3b127cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3b1280:
    // 0x3b1280: 0x8c62011c  lw          $v0, 0x11C($v1)
    ctx->pc = 0x3b1280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 284)));
label_3b1284:
    // 0x3b1284: 0x40f809  jalr        $v0
label_3b1288:
    if (ctx->pc == 0x3B1288u) {
        ctx->pc = 0x3B1288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1284u;
        // 0x3b1288: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B128Cu;
        goto label_3b128c;
    }
    ctx->pc = 0x3B1284u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3B128Cu);
        ctx->pc = 0x3B1288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1284u;
        // 0x3b1288: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B1284u, 0x3B128Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3B128Cu;
label_3b128c:
    // 0x3b128c: 0xc0ec620  jal         func_3B1880
label_3b1290:
    if (ctx->pc == 0x3B1290u) {
        ctx->pc = 0x3B1290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B128Cu;
        // 0x3b1290: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1294u;
        goto label_3b1294;
    }
    ctx->pc = 0x3B128Cu;
    SET_GPR_U32(ctx, 31, 0x3B1294u);
    ctx->pc = 0x3B1290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B128Cu;
    // 0x3b1290: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B1880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1880u, 0x3B128Cu, 0x3B1294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B1294u;
label_3b1294:
    // 0x3b1294: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x3b1294u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3b1298:
    // 0x3b1298: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x3b1298u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3b129c:
    // 0x3b129c: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x3b129cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3b12a0:
    // 0x3b12a0: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x3b12a0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3b12a4:
    // 0x3b12a4: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x3b12a4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3b12a8:
    // 0x3b12a8: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x3b12a8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3b12ac:
    // 0x3b12ac: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x3b12acu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3b12b0:
    // 0x3b12b0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3b12b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3b12b4:
    // 0x3b12b4: 0x3e00008  jr          $ra
label_3b12b8:
    if (ctx->pc == 0x3B12B8u) {
        ctx->pc = 0x3B12B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B12B4u;
        // 0x3b12b8: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B12BCu;
        goto label_3b12bc;
    }
    ctx->pc = 0x3B12B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B12B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B12B4u;
        // 0x3b12b8: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B12B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B12BCu;
label_3b12bc:
    // 0x3b12bc: 0x0  nop
    ctx->pc = 0x3b12bcu;
    // NOP
label_3b12c0:
    // 0x3b12c0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3b12c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_3b12c4:
    // 0x3b12c4: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x3b12c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
label_3b12c8:
    // 0x3b12c8: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x3b12c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_3b12cc:
    // 0x3b12cc: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x3b12ccu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3b12d0:
    // 0x3b12d0: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x3b12d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_3b12d4:
    // 0x3b12d4: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x3b12d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_3b12d8:
    // 0x3b12d8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3b12d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_3b12dc:
    // 0x3b12dc: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x3b12dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
label_3b12e0:
    // 0x3b12e0: 0x12800018  beqz        $s4, . + 4 + (0x18 << 2)
label_3b12e4:
    if (ctx->pc == 0x3B12E4u) {
        ctx->pc = 0x3B12E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B12E0u;
        // 0x3b12e4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B12E8u;
        goto label_3b12e8;
    }
    ctx->pc = 0x3B12E0u;
    {
        const bool branch_taken_0x3b12e0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B12E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B12E0u;
        // 0x3b12e4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b12e0) {
            ctx->pc = 0x3B1344u;
            goto label_3b1344;
        }
    }
    ctx->pc = 0x3B12E8u;
label_3b12e8:
    // 0x3b12e8: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x3b12e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_3b12ec:
    // 0x3b12ec: 0x3c060062  lui         $a2, 0x62
    ctx->pc = 0x3b12ecu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)98 << 16));
label_3b12f0:
    // 0x3b12f0: 0x60a82d  daddu       $s5, $v1, $zero
    ctx->pc = 0x3b12f0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_3b12f4:
    // 0x3b12f4: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x3b12f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_3b12f8:
    // 0x3b12f8: 0x2463e880  addiu       $v1, $v1, -0x1780
    ctx->pc = 0x3b12f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961280));
label_3b12fc:
    // 0x3b12fc: 0x8cc4d3a4  lw          $a0, -0x2C5C($a2)
    ctx->pc = 0x3b12fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294955940)));
label_3b1300:
    // 0x3b1300: 0x8c620118  lw          $v0, 0x118($v1)
    ctx->pc = 0x3b1300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 280)));
label_3b1304:
    // 0x3b1304: 0x40f809  jalr        $v0
label_3b1308:
    if (ctx->pc == 0x3B1308u) {
        ctx->pc = 0x3B1308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1304u;
        // 0x3b1308: 0x34a501a1  ori         $a1, $a1, 0x1A1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)417);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B130Cu;
        goto label_3b130c;
    }
    ctx->pc = 0x3B1304u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3B130Cu);
        ctx->pc = 0x3B1308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1304u;
        // 0x3b1308: 0x34a501a1  ori         $a1, $a1, 0x1A1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)417);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B1304u, 0x3B130Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3B130Cu;
label_3b130c:
    // 0x3b130c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3b130cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b1310:
    // 0x3b1310: 0x1220000a  beqz        $s1, . + 4 + (0xA << 2)
label_3b1314:
    if (ctx->pc == 0x3B1314u) {
        ctx->pc = 0x3B1314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1310u;
        // 0x3b1314: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1318u;
        goto label_3b1318;
    }
    ctx->pc = 0x3B1310u;
    {
        const bool branch_taken_0x3b1310 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B1314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1310u;
        // 0x3b1314: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b1310) {
            ctx->pc = 0x3B133Cu;
            goto label_3b133c;
        }
    }
    ctx->pc = 0x3B1318u;
label_3b1318:
    // 0x3b1318: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x3b1318u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_3b131c:
    // 0x3b131c: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x3b131cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_3b1320:
    // 0x3b1320: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3b1320u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3b1324:
    // 0x3b1324: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x3b1324u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
label_3b1328:
    // 0x3b1328: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x3b1328u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
label_3b132c:
    // 0x3b132c: 0xae310018  sw          $s1, 0x18($s1)
    ctx->pc = 0x3b132cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 17));
label_3b1330:
    // 0x3b1330: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x3b1330u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
label_3b1334:
    // 0x3b1334: 0xc0ec64a  jal         func_3B1928
label_3b1338:
    if (ctx->pc == 0x3B1338u) {
        ctx->pc = 0x3B1338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1334u;
        // 0x3b1338: 0xae22000c  sw          $v0, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B133Cu;
        goto label_3b133c;
    }
    ctx->pc = 0x3B1334u;
    SET_GPR_U32(ctx, 31, 0x3B133Cu);
    ctx->pc = 0x3B1338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B1334u;
    // 0x3b1338: 0xae22000c  sw          $v0, 0xC($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B1928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1928u, 0x3B1334u, 0x3B133Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B133Cu;
label_3b133c:
    // 0x3b133c: 0x56200003  bnel        $s1, $zero, . + 4 + (0x3 << 2)
label_3b1340:
    if (ctx->pc == 0x3B1340u) {
        ctx->pc = 0x3B1340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B133Cu;
        // 0x3b1340: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1344u;
        goto label_3b1344;
    }
    ctx->pc = 0x3B133Cu;
    {
        const bool branch_taken_0x3b133c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b133c) {
            ctx->pc = 0x3B1340u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B133Cu;
            // 0x3b1340: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B134Cu;
            goto label_3b134c;
        }
    }
    ctx->pc = 0x3B1344u;
label_3b1344:
    // 0x3b1344: 0x1000003f  b           . + 4 + (0x3F << 2)
label_3b1348:
    if (ctx->pc == 0x3B1348u) {
        ctx->pc = 0x3B1348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1344u;
        // 0x3b1348: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B134Cu;
        goto label_3b134c;
    }
    ctx->pc = 0x3B1344u;
    {
        const bool branch_taken_0x3b1344 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B1348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1344u;
        // 0x3b1348: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b1344) {
            ctx->pc = 0x3B1444u;
            goto label_3b1444;
        }
    }
    ctx->pc = 0x3B134Cu;
label_3b134c:
    // 0x3b134c: 0x2410ffff  addiu       $s0, $zero, -0x1
    ctx->pc = 0x3b134cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3b1350:
    // 0x3b1350: 0x1050002a  beq         $v0, $s0, . + 4 + (0x2A << 2)
label_3b1354:
    if (ctx->pc == 0x3B1354u) {
        ctx->pc = 0x3B1354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1350u;
        // 0x3b1354: 0x3c050003  lui         $a1, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1358u;
        goto label_3b1358;
    }
    ctx->pc = 0x3B1350u;
    {
        const bool branch_taken_0x3b1350 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x3B1354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1350u;
        // 0x3b1354: 0x3c050003  lui         $a1, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b1350) {
            ctx->pc = 0x3B13FCu;
            goto label_3b13fc;
        }
    }
    ctx->pc = 0x3B1358u;
label_3b1358:
    // 0x3b1358: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x3b1358u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_3b135c:
    // 0x3b135c: 0xc103642  jal         func_40D908
label_3b1360:
    if (ctx->pc == 0x3B1360u) {
        ctx->pc = 0x3B1360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B135Cu;
        // 0x3b1360: 0x34a501a1  ori         $a1, $a1, 0x1A1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)417);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1364u;
        goto label_3b1364;
    }
    ctx->pc = 0x3B135Cu;
    SET_GPR_U32(ctx, 31, 0x3B1364u);
    ctx->pc = 0x3B1360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B135Cu;
    // 0x3b1360: 0x34a501a1  ori         $a1, $a1, 0x1A1 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)417);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D908u, 0x3B135Cu, 0x3B1364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B1364u;
label_3b1364:
    // 0x3b1364: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3b1364u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b1368:
    // 0x3b1368: 0x12600025  beqz        $s3, . + 4 + (0x25 << 2)
label_3b136c:
    if (ctx->pc == 0x3B136Cu) {
        ctx->pc = 0x3B136Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1368u;
        // 0x3b136c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1370u;
        goto label_3b1370;
    }
    ctx->pc = 0x3B1368u;
    {
        const bool branch_taken_0x3b1368 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B136Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1368u;
        // 0x3b136c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b1368) {
            ctx->pc = 0x3B1400u;
            goto label_3b1400;
        }
    }
    ctx->pc = 0x3B1370u;
label_3b1370:
    // 0x3b1370: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3b1370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3b1374:
    // 0x3b1374: 0x54500004  bnel        $v0, $s0, . + 4 + (0x4 << 2)
label_3b1378:
    if (ctx->pc == 0x3B1378u) {
        ctx->pc = 0x3B1378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1374u;
        // 0x3b1378: 0x8e320000  lw          $s2, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B137Cu;
        goto label_3b137c;
    }
    ctx->pc = 0x3B1374u;
    {
        const bool branch_taken_0x3b1374 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x3b1374) {
            ctx->pc = 0x3B1378u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B1374u;
            // 0x3b1378: 0x8e320000  lw          $s2, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B1388u;
            goto label_3b1388;
        }
    }
    ctx->pc = 0x3B137Cu;
label_3b137c:
    // 0x3b137c: 0xc1036d2  jal         func_40DB48
label_3b1380:
    if (ctx->pc == 0x3B1380u) {
        ctx->pc = 0x3B1380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B137Cu;
        // 0x3b1380: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1384u;
        goto label_3b1384;
    }
    ctx->pc = 0x3B137Cu;
    SET_GPR_U32(ctx, 31, 0x3B1384u);
    ctx->pc = 0x3B1380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B137Cu;
    // 0x3b1380: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB48u, 0x3B137Cu, 0x3B1384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B1384u;
label_3b1384:
    // 0x3b1384: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3b1384u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b1388:
    // 0x3b1388: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x3b1388u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3b138c:
    // 0x3b138c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3b138cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3b1390:
    // 0x3b1390: 0x14a20004  bne         $a1, $v0, . + 4 + (0x4 << 2)
label_3b1394:
    if (ctx->pc == 0x3B1394u) {
        ctx->pc = 0x3B1394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1390u;
        // 0x3b1394: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1398u;
        goto label_3b1398;
    }
    ctx->pc = 0x3B1390u;
    {
        const bool branch_taken_0x3b1390 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x3B1394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1390u;
        // 0x3b1394: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b1390) {
            ctx->pc = 0x3B13A4u;
            goto label_3b13a4;
        }
    }
    ctx->pc = 0x3B1398u;
label_3b1398:
    // 0x3b1398: 0xc10376a  jal         func_40DDA8
label_3b139c:
    if (ctx->pc == 0x3B139Cu) {
        ctx->pc = 0x3B139Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1398u;
        // 0x3b139c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B13A0u;
        goto label_3b13a0;
    }
    ctx->pc = 0x3B1398u;
    SET_GPR_U32(ctx, 31, 0x3B13A0u);
    ctx->pc = 0x3B139Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B1398u;
    // 0x3b139c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DDA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DDA8u, 0x3B1398u, 0x3B13A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B13A0u;
label_3b13a0:
    // 0x3b13a0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3b13a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b13a4:
    // 0x3b13a4: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
label_3b13a8:
    if (ctx->pc == 0x3B13A8u) {
        ctx->pc = 0x3B13A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B13A4u;
        // 0x3b13a8: 0x3c060003  lui         $a2, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)3 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B13ACu;
        goto label_3b13ac;
    }
    ctx->pc = 0x3B13A4u;
    {
        const bool branch_taken_0x3b13a4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B13A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B13A4u;
        // 0x3b13a8: 0x3c060003  lui         $a2, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)3 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b13a4) {
            ctx->pc = 0x3B13E8u;
            goto label_3b13e8;
        }
    }
    ctx->pc = 0x3B13ACu;
label_3b13ac:
    // 0x3b13ac: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3b13acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3b13b0:
    // 0x3b13b0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3b13b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3b13b4:
    // 0x3b13b4: 0xc103722  jal         func_40DC88
label_3b13b8:
    if (ctx->pc == 0x3B13B8u) {
        ctx->pc = 0x3B13B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B13B4u;
        // 0x3b13b8: 0x34c601a1  ori         $a2, $a2, 0x1A1 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)417);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B13BCu;
        goto label_3b13bc;
    }
    ctx->pc = 0x3B13B4u;
    SET_GPR_U32(ctx, 31, 0x3B13BCu);
    ctx->pc = 0x3B13B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B13B4u;
    // 0x3b13b8: 0x34c601a1  ori         $a2, $a2, 0x1A1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)417);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DC88u, 0x3B13B4u, 0x3B13BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B13BCu;
label_3b13bc:
    // 0x3b13bc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_3b13c0:
    if (ctx->pc == 0x3B13C0u) {
        ctx->pc = 0x3B13C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B13BCu;
        // 0x3b13c0: 0x24060018  addiu       $a2, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B13C4u;
        goto label_3b13c4;
    }
    ctx->pc = 0x3B13BCu;
    {
        const bool branch_taken_0x3b13bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B13C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B13BCu;
        // 0x3b13c0: 0x24060018  addiu       $a2, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b13bc) {
            ctx->pc = 0x3B13D8u;
            goto label_3b13d8;
        }
    }
    ctx->pc = 0x3B13C4u;
label_3b13c4:
    // 0x3b13c4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3b13c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b13c8:
    // 0x3b13c8: 0x2060018  mult        $zero, $s0, $a2
    ctx->pc = 0x3b13c8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_3b13cc:
    // 0x3b13cc: 0x3012  mflo        $a2
    ctx->pc = 0x3b13ccu;
    SET_GPR_U64(ctx, 6, ctx->lo);
label_3b13d0:
    // 0x3b13d0: 0xc0bb778  jal         func_2EDDE0
label_3b13d4:
    if (ctx->pc == 0x3B13D4u) {
        ctx->pc = 0x3B13D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B13D0u;
        // 0x3b13d4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B13D8u;
        goto label_3b13d8;
    }
    ctx->pc = 0x3B13D0u;
    SET_GPR_U32(ctx, 31, 0x3B13D8u);
    ctx->pc = 0x3B13D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B13D0u;
    // 0x3b13d4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDDE0u, 0x3B13D0u, 0x3B13D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B13D8u;
label_3b13d8:
    // 0x3b13d8: 0x26a3e880  addiu       $v1, $s5, -0x1780
    ctx->pc = 0x3b13d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 4294961280));
label_3b13dc:
    // 0x3b13dc: 0x8c62010c  lw          $v0, 0x10C($v1)
    ctx->pc = 0x3b13dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
label_3b13e0:
    // 0x3b13e0: 0x40f809  jalr        $v0
label_3b13e4:
    if (ctx->pc == 0x3B13E4u) {
        ctx->pc = 0x3B13E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B13E0u;
        // 0x3b13e4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B13E8u;
        goto label_3b13e8;
    }
    ctx->pc = 0x3B13E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3B13E8u);
        ctx->pc = 0x3B13E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B13E0u;
        // 0x3b13e4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B13E0u, 0x3B13E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3B13E8u;
label_3b13e8:
    // 0x3b13e8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3b13e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3b13ec:
    // 0x3b13ec: 0xae330000  sw          $s3, 0x0($s1)
    ctx->pc = 0x3b13ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 19));
label_3b13f0:
    // 0x3b13f0: 0x8e240014  lw          $a0, 0x14($s1)
    ctx->pc = 0x3b13f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_3b13f4:
    // 0x3b13f4: 0xc0ec64a  jal         func_3B1928
label_3b13f8:
    if (ctx->pc == 0x3B13F8u) {
        ctx->pc = 0x3B13F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B13F4u;
        // 0x3b13f8: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B13FCu;
        goto label_3b13fc;
    }
    ctx->pc = 0x3B13F4u;
    SET_GPR_U32(ctx, 31, 0x3B13FCu);
    ctx->pc = 0x3B13F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B13F4u;
    // 0x3b13f8: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B1928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1928u, 0x3B13F4u, 0x3B13FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B13FCu;
label_3b13fc:
    // 0x3b13fc: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3b13fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3b1400:
    // 0x3b1400: 0xc0ebaae  jal         func_3AEAB8
label_3b1404:
    if (ctx->pc == 0x3B1404u) {
        ctx->pc = 0x3B1404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1400u;
        // 0x3b1404: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1408u;
        goto label_3b1408;
    }
    ctx->pc = 0x3B1400u;
    SET_GPR_U32(ctx, 31, 0x3B1408u);
    ctx->pc = 0x3B1404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B1400u;
    // 0x3b1404: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AEAB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AEAB8u, 0x3B1400u, 0x3B1408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B1408u;
label_3b1408:
    // 0x3b1408: 0x1220000d  beqz        $s1, . + 4 + (0xD << 2)
label_3b140c:
    if (ctx->pc == 0x3B140Cu) {
        ctx->pc = 0x3B140Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1408u;
        // 0x3b140c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1410u;
        goto label_3b1410;
    }
    ctx->pc = 0x3B1408u;
    {
        const bool branch_taken_0x3b1408 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B140Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1408u;
        // 0x3b140c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b1408) {
            ctx->pc = 0x3B1440u;
            goto label_3b1440;
        }
    }
    ctx->pc = 0x3B1410u;
label_3b1410:
    // 0x3b1410: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x3b1410u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3b1414:
    // 0x3b1414: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
label_3b1418:
    if (ctx->pc == 0x3B1418u) {
        ctx->pc = 0x3B1418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1414u;
        // 0x3b1418: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B141Cu;
        goto label_3b141c;
    }
    ctx->pc = 0x3B1414u;
    {
        const bool branch_taken_0x3b1414 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3B1418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1414u;
        // 0x3b1418: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b1414) {
            ctx->pc = 0x3B1444u;
            goto label_3b1444;
        }
    }
    ctx->pc = 0x3B141Cu;
label_3b141c:
    // 0x3b141c: 0xc10376a  jal         func_40DDA8
label_3b1420:
    if (ctx->pc == 0x3B1420u) {
        ctx->pc = 0x3B1420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B141Cu;
        // 0x3b1420: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1424u;
        goto label_3b1424;
    }
    ctx->pc = 0x3B141Cu;
    SET_GPR_U32(ctx, 31, 0x3B1424u);
    ctx->pc = 0x3B1420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B141Cu;
    // 0x3b1420: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DDA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DDA8u, 0x3B141Cu, 0x3B1424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B1424u;
label_3b1424:
    // 0x3b1424: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x3b1424u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3b1428:
    // 0x3b1428: 0xc10376e  jal         func_40DDB8
label_3b142c:
    if (ctx->pc == 0x3B142Cu) {
        ctx->pc = 0x3B142Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1428u;
        // 0x3b142c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1430u;
        goto label_3b1430;
    }
    ctx->pc = 0x3B1428u;
    SET_GPR_U32(ctx, 31, 0x3B1430u);
    ctx->pc = 0x3B142Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B1428u;
    // 0x3b142c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DDB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DDB8u, 0x3B1428u, 0x3B1430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B1430u;
label_3b1430:
    // 0x3b1430: 0xae300004  sw          $s0, 0x4($s1)
    ctx->pc = 0x3b1430u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
label_3b1434:
    // 0x3b1434: 0x8e240014  lw          $a0, 0x14($s1)
    ctx->pc = 0x3b1434u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_3b1438:
    // 0x3b1438: 0xc0ec68a  jal         func_3B1A28
label_3b143c:
    if (ctx->pc == 0x3B143Cu) {
        ctx->pc = 0x3B143Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1438u;
        // 0x3b143c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1440u;
        goto label_3b1440;
    }
    ctx->pc = 0x3B1438u;
    SET_GPR_U32(ctx, 31, 0x3B1440u);
    ctx->pc = 0x3B143Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B1438u;
    // 0x3b143c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B1A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1A28u, 0x3B1438u, 0x3B1440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B1440u;
label_3b1440:
    // 0x3b1440: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3b1440u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3b1444:
    // 0x3b1444: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x3b1444u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3b1448:
    // 0x3b1448: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x3b1448u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3b144c:
    // 0x3b144c: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x3b144cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3b1450:
    // 0x3b1450: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3b1450u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3b1454:
    // 0x3b1454: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x3b1454u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3b1458:
    // 0x3b1458: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x3b1458u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3b145c:
    // 0x3b145c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3b145cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3b1460:
    // 0x3b1460: 0x3e00008  jr          $ra
label_3b1464:
    if (ctx->pc == 0x3B1464u) {
        ctx->pc = 0x3B1464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1460u;
        // 0x3b1464: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1468u;
        goto label_fallthrough_0x3b1460;
    }
    ctx->pc = 0x3B1460u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B1464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1460u;
        // 0x3b1464: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B1460u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3b1460:
    ctx->pc = 0x3B1468u;
}
