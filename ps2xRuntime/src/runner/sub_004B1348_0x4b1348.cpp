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

// Function: sub_004B1348
// Address: 0x4b1348 - 0x4b14b8
void sub_004B1348_0x4b1348(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B1348_0x4b1348");
#endif

    switch (ctx->pc) {
        case 0x4b137cu: goto label_4b137c;
        case 0x4b13c0u: goto label_4b13c0;
        case 0x4b1438u: goto label_4b1438;
        case 0x4b1494u: goto label_4b1494;
        default: break;
    }

    ctx->pc = 0x4b1348u;

    // 0x4b1348: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4b1348u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x4b134c: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x4b134cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x4b1350: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x4b1350u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x4b1354: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4b1354u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b1358: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x4b1358u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x4b135c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x4b135cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b1360: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x4b1360u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x4b1364: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x4b1364u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b1368: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x4b1368u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x4b136c: 0x24130030  addiu       $s3, $zero, 0x30
    ctx->pc = 0x4b136cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x4b1370: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4b1370u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4b1374: 0xc0c1f08  jal         func_307C20
    ctx->pc = 0x4B1374u;
    SET_GPR_U32(ctx, 31, 0x4B137Cu);
    ctx->pc = 0x4B1378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B1374u;
    // 0x4b1378: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x307C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307C20u, 0x4B1374u, 0x4B137Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B137Cu;
label_4b137c:
    // 0x4b137c: 0x32100003  andi        $s0, $s0, 0x3
    ctx->pc = 0x4b137cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)3);
    // 0x4b1380: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x4b1380u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x4b1384: 0x3a020002  xori        $v0, $s0, 0x2
    ctx->pc = 0x4b1384u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) ^ (uint64_t)(uint16_t)2);
    // 0x4b1388: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x4b1388u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b138c: 0x3a100001  xori        $s0, $s0, 0x1
    ctx->pc = 0x4b138cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) ^ (uint64_t)(uint16_t)1);
    // 0x4b1390: 0x2200b  movn        $a0, $zero, $v0
    ctx->pc = 0x4b1390u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
    // 0x4b1394: 0x70980a  movz        $s3, $v1, $s0
    ctx->pc = 0x4b1394u;
    if (GPR_U64(ctx, 16) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 3));
    // 0x4b1398: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x4b1398u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x4b139c: 0x1240003b  beqz        $s2, . + 4 + (0x3B << 2)
    ctx->pc = 0x4B139Cu;
    {
        const bool branch_taken_0x4b139c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B13A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B139Cu;
        // 0x4b13a0: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b139c) {
            ctx->pc = 0x4B148Cu;
            goto label_4b148c;
        }
    }
    ctx->pc = 0x4B13A4u;
    // 0x4b13a4: 0x93102b  sltu        $v0, $a0, $s3
    ctx->pc = 0x4b13a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x4b13a8: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x4B13A8u;
    {
        const bool branch_taken_0x4b13a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B13ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B13A8u;
        // 0x4b13ac: 0x3c020066  lui         $v0, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b13a8) {
            ctx->pc = 0x4B141Cu;
            goto label_4b141c;
        }
    }
    ctx->pc = 0x4B13B0u;
    // 0x4b13b0: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x4b13b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x4b13b4: 0x2442eb80  addiu       $v0, $v0, -0x1480
    ctx->pc = 0x4b13b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962048));
    // 0x4b13b8: 0x623021  addu        $a2, $v1, $v0
    ctx->pc = 0x4b13b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4b13bc: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x4b13bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_4b13c0:
    // 0x4b13c0: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x4B13C0u;
    {
        const bool branch_taken_0x4b13c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4b13c0) {
            ctx->pc = 0x4B13C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B13C0u;
            // 0x4b13c4: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B1408u;
            goto label_4b1408;
        }
    }
    ctx->pc = 0x4B13C8u;
    // 0x4b13c8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x4b13c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4b13cc: 0x2c820018  sltiu       $v0, $a0, 0x18
    ctx->pc = 0x4b13ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)24) ? 1 : 0);
    // 0x4b13d0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x4B13D0u;
    {
        const bool branch_taken_0x4b13d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B13D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B13D0u;
        // 0x4b13d4: 0xacc50000  sw          $a1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b13d0) {
            ctx->pc = 0x4B13ECu;
            goto label_4b13ec;
        }
    }
    ctx->pc = 0x4B13D8u;
    // 0x4b13d8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x4b13d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4b13dc: 0x851804  sllv        $v1, $a1, $a0
    ctx->pc = 0x4b13dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 4) & 0x1F));
    // 0x4b13e0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x4b13e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x4b13e4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x4B13E4u;
    {
        const bool branch_taken_0x4b13e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B13E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B13E4u;
        // 0x4b13e8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b13e4) {
            ctx->pc = 0x4B1400u;
            goto label_4b1400;
        }
    }
    ctx->pc = 0x4B13ECu;
label_4b13ec:
    // 0x4b13ec: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x4b13ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x4b13f0: 0x2482ffe8  addiu       $v0, $a0, -0x18
    ctx->pc = 0x4b13f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967272));
    // 0x4b13f4: 0x451004  sllv        $v0, $a1, $v0
    ctx->pc = 0x4b13f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 2) & 0x1F));
    // 0x4b13f8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4b13f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x4b13fc: 0xae230004  sw          $v1, 0x4($s1)
    ctx->pc = 0x4b13fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
label_4b1400:
    // 0x4b1400: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x4b1400u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x4b1404: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x4b1404u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_4b1408:
    // 0x4b1408: 0x12400020  beqz        $s2, . + 4 + (0x20 << 2)
    ctx->pc = 0x4B1408u;
    {
        const bool branch_taken_0x4b1408 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B140Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1408u;
        // 0x4b140c: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b1408) {
            ctx->pc = 0x4B148Cu;
            goto label_4b148c;
        }
    }
    ctx->pc = 0x4B1410u;
    // 0x4b1410: 0x93102b  sltu        $v0, $a0, $s3
    ctx->pc = 0x4b1410u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x4b1414: 0x5440ffea  bnel        $v0, $zero, . + 4 + (-0x16 << 2)
    ctx->pc = 0x4B1414u;
    {
        const bool branch_taken_0x4b1414 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4b1414) {
            ctx->pc = 0x4B1418u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B1414u;
            // 0x4b1418: 0x8cc20000  lw          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B13C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4b13c0;
        }
    }
    ctx->pc = 0x4B141Cu;
label_4b141c:
    // 0x4b141c: 0x1240001b  beqz        $s2, . + 4 + (0x1B << 2)
    ctx->pc = 0x4B141Cu;
    {
        const bool branch_taken_0x4b141c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B1420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B141Cu;
        // 0x4b1420: 0x3c020066  lui         $v0, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b141c) {
            ctx->pc = 0x4B148Cu;
            goto label_4b148c;
        }
    }
    ctx->pc = 0x4B1424u;
    // 0x4b1424: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x4b1424u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b1428: 0x2445eb80  addiu       $a1, $v0, -0x1480
    ctx->pc = 0x4b1428u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962048));
    // 0x4b142c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4b142cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4b1430: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x4b1430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4b1434: 0x0  nop
    ctx->pc = 0x4b1434u;
    // NOP
label_4b1438:
    // 0x4b1438: 0x861804  sllv        $v1, $a2, $a0
    ctx->pc = 0x4b1438u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 4) & 0x1F));
    // 0x4b143c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4b143cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4b1440: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4B1440u;
    {
        const bool branch_taken_0x4b1440 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B1444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1440u;
        // 0x4b1444: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b1440) {
            ctx->pc = 0x4B1450u;
            goto label_4b1450;
        }
    }
    ctx->pc = 0x4B1448u;
    // 0x4b1448: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x4b1448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x4b144c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x4b144cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_4b1450:
    // 0x4b1450: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x4b1450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x4b1454: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4b1454u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4b1458: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4B1458u;
    {
        const bool branch_taken_0x4b1458 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B145Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1458u;
        // 0x4b145c: 0x24820018  addiu       $v0, $a0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b1458) {
            ctx->pc = 0x4B146Cu;
            goto label_4b146c;
        }
    }
    ctx->pc = 0x4B1460u;
    // 0x4b1460: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4b1460u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x4b1464: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x4b1464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x4b1468: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x4b1468u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_4b146c:
    // 0x4b146c: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x4b146cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x4b1470: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x4b1470u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x4b1474: 0x2c830018  sltiu       $v1, $a0, 0x18
    ctx->pc = 0x4b1474u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)24) ? 1 : 0);
    // 0x4b1478: 0x5460ffef  bnel        $v1, $zero, . + 4 + (-0x11 << 2)
    ctx->pc = 0x4B1478u;
    {
        const bool branch_taken_0x4b1478 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4b1478) {
            ctx->pc = 0x4B147Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B1478u;
            // 0x4b147c: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B1438u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4b1438;
        }
    }
    ctx->pc = 0x4B1480u;
    // 0x4b1480: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x4b1480u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x4b1484: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x4b1484u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b1488: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x4b1488u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_4b148c:
    // 0x4b148c: 0xc0c1f1c  jal         func_307C70
    ctx->pc = 0x4B148Cu;
    SET_GPR_U32(ctx, 31, 0x4B1494u);
    ctx->pc = 0x307C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307C70u, 0x4B148Cu, 0x4B1494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B1494u;
label_4b1494:
    // 0x4b1494: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x4b1494u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b1498: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x4b1498u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4b149c: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x4b149cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4b14a0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x4b14a0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4b14a4: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x4b14a4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4b14a8: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x4b14a8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4b14ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4b14acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b14b0: 0x3e00008  jr          $ra
    ctx->pc = 0x4B14B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B14B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B14B0u;
        // 0x4b14b4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B14B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B14B8u;
}
