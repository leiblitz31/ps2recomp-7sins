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

// Function: sub_002D1330
// Address: 0x2d1330 - 0x2d1520
void sub_002D1330_0x2d1330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D1330_0x2d1330");
#endif

    switch (ctx->pc) {
        case 0x2d1368u: goto label_2d1368;
        case 0x2d1378u: goto label_2d1378;
        case 0x2d138cu: goto label_2d138c;
        case 0x2d13b4u: goto label_2d13b4;
        case 0x2d13d8u: goto label_2d13d8;
        case 0x2d13e8u: goto label_2d13e8;
        case 0x2d13fcu: goto label_2d13fc;
        case 0x2d140cu: goto label_2d140c;
        case 0x2d1420u: goto label_2d1420;
        case 0x2d143cu: goto label_2d143c;
        case 0x2d1474u: goto label_2d1474;
        case 0x2d1484u: goto label_2d1484;
        case 0x2d149cu: goto label_2d149c;
        case 0x2d14b8u: goto label_2d14b8;
        default: break;
    }

    ctx->pc = 0x2d1330u;

    // 0x2d1330: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2d1330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2d1334: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2d1334u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2d1338: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2d1338u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2d133c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2d133cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2d1340: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2d1340u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2d1344: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x2d1344u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x2d1348: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x2d1348u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
    // 0x2d134c: 0xafa60070  sw          $a2, 0x70($sp)
    ctx->pc = 0x2d134cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 6));
    // 0x2d1350: 0xafa70080  sw          $a3, 0x80($sp)
    ctx->pc = 0x2d1350u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 7));
    // 0x2d1354: 0xafa0004c  sw          $zero, 0x4C($sp)
    ctx->pc = 0x2d1354u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 0));
    // 0x2d1358: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2d1358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d135c: 0x24440028  addiu       $a0, $v0, 0x28
    ctx->pc = 0x2d135cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x2d1360: 0xc0b4638  jal         func_2D18E0
    ctx->pc = 0x2D1360u;
    SET_GPR_U32(ctx, 31, 0x2D1368u);
    ctx->pc = 0x2D18E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D18E0u, 0x2D1360u, 0x2D1368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1368u;
label_2d1368:
    // 0x2d1368: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2d1368u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d136c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2d136cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1370: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x2D1370u;
    {
        const bool branch_taken_0x2d1370 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d1370) {
            ctx->pc = 0x2D1450u;
            goto label_2d1450;
        }
    }
    ctx->pc = 0x2D1378u;
label_2d1378:
    // 0x2d1378: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2d1378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d137c: 0x24440028  addiu       $a0, $v0, 0x28
    ctx->pc = 0x2d137cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x2d1380: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2d1380u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1384: 0xc0b4628  jal         func_2D18A0
    ctx->pc = 0x2D1384u;
    SET_GPR_U32(ctx, 31, 0x2D138Cu);
    ctx->pc = 0x2D18A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D18A0u, 0x2D1384u, 0x2D138Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D138Cu;
label_2d138c:
    // 0x2d138c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2d138cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d1390: 0x8c640018  lw          $a0, 0x18($v1)
    ctx->pc = 0x2d1390u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x2d1394: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x2d1394u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2d1398: 0x1483002c  bne         $a0, $v1, . + 4 + (0x2C << 2)
    ctx->pc = 0x2D1398u;
    {
        const bool branch_taken_0x2d1398 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2d1398) {
            ctx->pc = 0x2D144Cu;
            goto label_2d144c;
        }
    }
    ctx->pc = 0x2D13A0u;
    // 0x2d13a0: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2d13a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d13a4: 0x24440028  addiu       $a0, $v0, 0x28
    ctx->pc = 0x2d13a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x2d13a8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2d13a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d13ac: 0xc0b4628  jal         func_2D18A0
    ctx->pc = 0x2D13ACu;
    SET_GPR_U32(ctx, 31, 0x2D13B4u);
    ctx->pc = 0x2D18A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D18A0u, 0x2D13ACu, 0x2D13B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D13B4u;
label_2d13b4:
    // 0x2d13b4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2d13b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d13b8: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x2d13b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x2d13bc: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2D13BCu;
    {
        const bool branch_taken_0x2d13bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d13bc) {
            ctx->pc = 0x2D1428u;
            goto label_2d1428;
        }
    }
    ctx->pc = 0x2D13C4u;
    // 0x2d13c4: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2d13c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d13c8: 0x24440028  addiu       $a0, $v0, 0x28
    ctx->pc = 0x2d13c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x2d13cc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2d13ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d13d0: 0xc0b4628  jal         func_2D18A0
    ctx->pc = 0x2D13D0u;
    SET_GPR_U32(ctx, 31, 0x2D13D8u);
    ctx->pc = 0x2D18A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D18A0u, 0x2D13D0u, 0x2D13D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D13D8u;
label_2d13d8:
    // 0x2d13d8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2d13d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d13dc: 0x8c44001c  lw          $a0, 0x1C($v0)
    ctx->pc = 0x2d13dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x2d13e0: 0xc0b4618  jal         func_2D1860
    ctx->pc = 0x2D13E0u;
    SET_GPR_U32(ctx, 31, 0x2D13E8u);
    ctx->pc = 0x2D1860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D1860u, 0x2D13E0u, 0x2D13E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D13E8u;
label_2d13e8:
    // 0x2d13e8: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2d13e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d13ec: 0x24440028  addiu       $a0, $v0, 0x28
    ctx->pc = 0x2d13ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x2d13f0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2d13f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d13f4: 0xc0b4628  jal         func_2D18A0
    ctx->pc = 0x2D13F4u;
    SET_GPR_U32(ctx, 31, 0x2D13FCu);
    ctx->pc = 0x2D18A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D18A0u, 0x2D13F4u, 0x2D13FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D13FCu;
label_2d13fc:
    // 0x2d13fc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2d13fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d1400: 0x8c44001c  lw          $a0, 0x1C($v0)
    ctx->pc = 0x2d1400u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x2d1404: 0xc119c5c  jal         func_467170
    ctx->pc = 0x2D1404u;
    SET_GPR_U32(ctx, 31, 0x2D140Cu);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x2D1404u, 0x2D140Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D140Cu;
label_2d140c:
    // 0x2d140c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2d140cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d1410: 0x24440028  addiu       $a0, $v0, 0x28
    ctx->pc = 0x2d1410u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x2d1414: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2d1414u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1418: 0xc0b4628  jal         func_2D18A0
    ctx->pc = 0x2D1418u;
    SET_GPR_U32(ctx, 31, 0x2D1420u);
    ctx->pc = 0x2D18A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D18A0u, 0x2D1418u, 0x2D1420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1420u;
label_2d1420:
    // 0x2d1420: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2d1420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d1424: 0xac40001c  sw          $zero, 0x1C($v0)
    ctx->pc = 0x2d1424u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 0));
label_2d1428:
    // 0x2d1428: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2d1428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d142c: 0x24440028  addiu       $a0, $v0, 0x28
    ctx->pc = 0x2d142cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x2d1430: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2d1430u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1434: 0xc0b4628  jal         func_2D18A0
    ctx->pc = 0x2D1434u;
    SET_GPR_U32(ctx, 31, 0x2D143Cu);
    ctx->pc = 0x2D18A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D18A0u, 0x2D1434u, 0x2D143Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D143Cu;
label_2d143c:
    // 0x2d143c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2d143cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d1440: 0xafa3004c  sw          $v1, 0x4C($sp)
    ctx->pc = 0x2d1440u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 3));
    // 0x2d1444: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2D1444u;
    {
        const bool branch_taken_0x2d1444 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d1444) {
            ctx->pc = 0x2D145Cu;
            goto label_2d145c;
        }
    }
    ctx->pc = 0x2D144Cu;
label_2d144c:
    // 0x2d144c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2d144cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2d1450:
    // 0x2d1450: 0x212182b  sltu        $v1, $s0, $s2
    ctx->pc = 0x2d1450u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x2d1454: 0x1460ffc8  bnez        $v1, . + 4 + (-0x38 << 2)
    ctx->pc = 0x2D1454u;
    {
        const bool branch_taken_0x2d1454 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d1454) {
            ctx->pc = 0x2D1378u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d1378;
        }
    }
    ctx->pc = 0x2D145Cu;
label_2d145c:
    // 0x2d145c: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x2d145cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x2d1460: 0x14600017  bnez        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x2D1460u;
    {
        const bool branch_taken_0x2d1460 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d1460) {
            ctx->pc = 0x2D14C0u;
            goto label_2d14c0;
        }
    }
    ctx->pc = 0x2D1468u;
    // 0x2d1468: 0x24040034  addiu       $a0, $zero, 0x34
    ctx->pc = 0x2d1468u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x2d146c: 0xc119b68  jal         func_466DA0
    ctx->pc = 0x2D146Cu;
    SET_GPR_U32(ctx, 31, 0x2D1474u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x2D146Cu, 0x2D1474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1474u;
label_2d1474:
    // 0x2d1474: 0x24040034  addiu       $a0, $zero, 0x34
    ctx->pc = 0x2d1474u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x2d1478: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2d1478u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d147c: 0xc0400e0  jal         func_100380
    ctx->pc = 0x2D147Cu;
    SET_GPR_U32(ctx, 31, 0x2D1484u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x2D147Cu, 0x2D1484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1484u;
label_2d1484:
    // 0x2d1484: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2d1484u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1488: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D1488u;
    {
        const bool branch_taken_0x2d1488 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d1488) {
            ctx->pc = 0x2D14A0u;
            goto label_2d14a0;
        }
    }
    ctx->pc = 0x2D1490u;
    // 0x2d1490: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d1490u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1494: 0xc0b6224  jal         func_2D8890
    ctx->pc = 0x2D1494u;
    SET_GPR_U32(ctx, 31, 0x2D149Cu);
    ctx->pc = 0x2D8890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8890u, 0x2D1494u, 0x2D149Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D149Cu;
label_2d149c:
    // 0x2d149c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2d149cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2d14a0:
    // 0x2d14a0: 0xafb1004c  sw          $s1, 0x4C($sp)
    ctx->pc = 0x2d14a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 17));
    // 0x2d14a4: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2d14a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d14a8: 0x24440028  addiu       $a0, $v0, 0x28
    ctx->pc = 0x2d14a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x2d14ac: 0x27a5004c  addiu       $a1, $sp, 0x4C
    ctx->pc = 0x2d14acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x2d14b0: 0xc0b4548  jal         func_2D1520
    ctx->pc = 0x2D14B0u;
    SET_GPR_U32(ctx, 31, 0x2D14B8u);
    ctx->pc = 0x2D1520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D1520u, 0x2D14B0u, 0x2D14B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D14B8u;
label_2d14b8:
    // 0x2d14b8: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x2d14b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x2d14bc: 0xac600020  sw          $zero, 0x20($v1)
    ctx->pc = 0x2d14bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 0));
label_2d14c0:
    // 0x2d14c0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2d14c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d14c4: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x2d14c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x2d14c8: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x2d14c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x2d14cc: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x2d14ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2d14d0: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x2d14d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x2d14d4: 0xac640018  sw          $a0, 0x18($v1)
    ctx->pc = 0x2d14d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 4));
    // 0x2d14d8: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x2d14d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2d14dc: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x2d14dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x2d14e0: 0xac64001c  sw          $a0, 0x1C($v1)
    ctx->pc = 0x2d14e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 4));
    // 0x2d14e4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2d14e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d14e8: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x2d14e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x2d14ec: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x2d14ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x2d14f0: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x2d14f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x2d14f4: 0xac600024  sw          $zero, 0x24($v1)
    ctx->pc = 0x2d14f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 0));
    // 0x2d14f8: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x2d14f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2d14fc: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x2d14fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x2d1500: 0xac640028  sw          $a0, 0x28($v1)
    ctx->pc = 0x2d1500u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 4));
    // 0x2d1504: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2d1504u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d1508: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2d1508u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d150c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2d150cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d1510: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d1510u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d1514: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x2d1514u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2d1518: 0x3e00008  jr          $ra
    ctx->pc = 0x2D1518u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D1518u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D1520u;
}
