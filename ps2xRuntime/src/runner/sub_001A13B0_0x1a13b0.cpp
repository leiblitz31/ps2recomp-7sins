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

// Function: sub_001A13B0
// Address: 0x1a13b0 - 0x1a15c0
void sub_001A13B0_0x1a13b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A13B0_0x1a13b0");
#endif

    switch (ctx->pc) {
        case 0x1a1498u: goto label_1a1498;
        case 0x1a14d4u: goto label_1a14d4;
        case 0x1a14f4u: goto label_1a14f4;
        case 0x1a1518u: goto label_1a1518;
        case 0x1a1554u: goto label_1a1554;
        case 0x1a157cu: goto label_1a157c;
        case 0x1a15a8u: goto label_1a15a8;
        default: break;
    }

    ctx->pc = 0x1a13b0u;

    // 0x1a13b0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1a13b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1a13b4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1a13b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1a13b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a13b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a13bc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a13bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a13c0: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x1a13c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x1a13c4: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x1a13c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
    // 0x1a13c8: 0xafa60070  sw          $a2, 0x70($sp)
    ctx->pc = 0x1a13c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 6));
    // 0x1a13cc: 0xafa70080  sw          $a3, 0x80($sp)
    ctx->pc = 0x1a13ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 7));
    // 0x1a13d0: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x1a13d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1a13d4: 0x10600074  beqz        $v1, . + 4 + (0x74 << 2)
    ctx->pc = 0x1A13D4u;
    {
        const bool branch_taken_0x1a13d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a13d4) {
            ctx->pc = 0x1A15A8u;
            goto label_1a15a8;
        }
    }
    ctx->pc = 0x1A13DCu;
    // 0x1a13dc: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1a13dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a13e0: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1a13e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1a13e4: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1a13e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a13e8: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x1a13e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1a13ec: 0x622023  subu        $a0, $v1, $v0
    ctx->pc = 0x1a13ecu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1a13f0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1a13f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1a13f4: 0x41883  sra         $v1, $a0, 2
    ctx->pc = 0x1a13f4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 2));
    // 0x1a13f8: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A13F8u;
    {
        const bool branch_taken_0x1a13f8 = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x1a13f8) {
            ctx->pc = 0x1A1408u;
            goto label_1a1408;
        }
    }
    ctx->pc = 0x1A1400u;
    // 0x1a1400: 0x24820003  addiu       $v0, $a0, 0x3
    ctx->pc = 0x1a1400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 3));
    // 0x1a1404: 0x21883  sra         $v1, $v0, 2
    ctx->pc = 0x1a1404u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 2));
label_1a1408:
    // 0x1a1408: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x1a1408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1a140c: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x1a140cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1a1410: 0x1440005c  bnez        $v0, . + 4 + (0x5C << 2)
    ctx->pc = 0x1A1410u;
    {
        const bool branch_taken_0x1a1410 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a1410) {
            ctx->pc = 0x1A1584u;
            goto label_1a1584;
        }
    }
    ctx->pc = 0x1A1418u;
    // 0x1a1418: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1a1418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1a141c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1a141cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a1420: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x1a1420u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x1a1424: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1a1424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a1428: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1a1428u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1a142c: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x1a142cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1a1430: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1a1430u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1a1434: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1a1434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1a1438: 0x38883  sra         $s1, $v1, 2
    ctx->pc = 0x1a1438u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 3), 2));
    // 0x1a143c: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A143Cu;
    {
        const bool branch_taken_0x1a143c = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x1a143c) {
            ctx->pc = 0x1A144Cu;
            goto label_1a144c;
        }
    }
    ctx->pc = 0x1A1444u;
    // 0x1a1444: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x1a1444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x1a1448: 0x28883  sra         $s1, $v0, 2
    ctx->pc = 0x1a1448u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 2), 2));
label_1a144c:
    // 0x1a144c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1a144cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a1450: 0x8c500004  lw          $s0, 0x4($v0)
    ctx->pc = 0x1a1450u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1a1454: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x1a1454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1a1458: 0x51082b  sltu        $at, $v0, $s1
    ctx->pc = 0x1a1458u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x1a145c: 0x10200027  beqz        $at, . + 4 + (0x27 << 2)
    ctx->pc = 0x1A145Cu;
    {
        const bool branch_taken_0x1a145c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a145c) {
            ctx->pc = 0x1A14FCu;
            goto label_1a14fc;
        }
    }
    ctx->pc = 0x1A1464u;
    // 0x1a1464: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1a1464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a1468: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1a1468u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1a146c: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x1a146cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1a1470: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1a1470u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a1474: 0x622023  subu        $a0, $v1, $v0
    ctx->pc = 0x1a1474u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1a1478: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x1a1478u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a147c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1a147cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a1480: 0xa3a00048  sb          $zero, 0x48($sp)
    ctx->pc = 0x1a1480u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 72), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a1484: 0x8c650004  lw          $a1, 0x4($v1)
    ctx->pc = 0x1a1484u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1a1488: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x1a1488u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1a148c: 0x27a70048  addiu       $a3, $sp, 0x48
    ctx->pc = 0x1a148cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x1a1490: 0xc068648  jal         func_1A1920
    ctx->pc = 0x1A1490u;
    SET_GPR_U32(ctx, 31, 0x1A1498u);
    ctx->pc = 0x1A1920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1920u, 0x1A1490u, 0x1A1498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1498u;
label_1a1498:
    // 0x1a1498: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1a1498u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a149c: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x1a149cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1a14a0: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1a14a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a14a4: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1a14a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1a14a8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a14a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a14ac: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x1a14acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x1a14b0: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x1a14b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1a14b4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1a14b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a14b8: 0x2022823  subu        $a1, $s0, $v0
    ctx->pc = 0x1a14b8u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1a14bc: 0xa3a00044  sb          $zero, 0x44($sp)
    ctx->pc = 0x1a14bcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 68), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a14c0: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x1a14c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1a14c4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1a14c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a14c8: 0x27a70044  addiu       $a3, $sp, 0x44
    ctx->pc = 0x1a14c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x1a14cc: 0xc068638  jal         func_1A18E0
    ctx->pc = 0x1A14CCu;
    SET_GPR_U32(ctx, 31, 0x1A14D4u);
    ctx->pc = 0x1A18E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A18E0u, 0x1A14CCu, 0x1A14D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A14D4u;
label_1a14d4:
    // 0x1a14d4: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x1a14d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1a14d8: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1a14d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a14dc: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x1a14dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1a14e0: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x1a14e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a14e4: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x1a14e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1a14e8: 0x27a6004c  addiu       $a2, $sp, 0x4C
    ctx->pc = 0x1a14e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x1a14ec: 0xc068624  jal         func_1A1890
    ctx->pc = 0x1A14ECu;
    SET_GPR_U32(ctx, 31, 0x1A14F4u);
    ctx->pc = 0x1A1890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1890u, 0x1A14ECu, 0x1A14F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A14F4u;
label_1a14f4:
    // 0x1a14f4: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x1A14F4u;
    {
        const bool branch_taken_0x1a14f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a14f4) {
            ctx->pc = 0x1A15A8u;
            goto label_1a15a8;
        }
    }
    ctx->pc = 0x1A14FCu;
label_1a14fc:
    // 0x1a14fc: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x1a14fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a1500: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x1a1500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1a1504: 0x512823  subu        $a1, $v0, $s1
    ctx->pc = 0x1a1504u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1a1508: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x1a1508u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1a150c: 0x27a6004c  addiu       $a2, $sp, 0x4C
    ctx->pc = 0x1a150cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x1a1510: 0xc068604  jal         func_1A1810
    ctx->pc = 0x1A1510u;
    SET_GPR_U32(ctx, 31, 0x1A1518u);
    ctx->pc = 0x1A1810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1810u, 0x1A1510u, 0x1A1518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1518u;
label_1a1518:
    // 0x1a1518: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x1a1518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1a151c: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x1a151cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1a1520: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x1a1520u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a1524: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x1a1524u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a1528: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1a1528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1a152c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1a152cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1a1530: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x1a1530u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x1a1534: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1a1534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a1538: 0xa3a00040  sb          $zero, 0x40($sp)
    ctx->pc = 0x1a1538u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a153c: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x1a153cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1a1540: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1a1540u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1544: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x1a1544u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1a1548: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x1a1548u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1a154c: 0xc068648  jal         func_1A1920
    ctx->pc = 0x1A154Cu;
    SET_GPR_U32(ctx, 31, 0x1A1554u);
    ctx->pc = 0x1A1920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1920u, 0x1A154Cu, 0x1A1554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1554u;
label_1a1554:
    // 0x1a1554: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1a1554u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a1558: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x1a1558u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1a155c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1a155cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1a1560: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a1560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a1564: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x1a1564u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x1a1568: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x1a1568u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1a156c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1a156cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1570: 0x27a6004c  addiu       $a2, $sp, 0x4C
    ctx->pc = 0x1a1570u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x1a1574: 0xc068624  jal         func_1A1890
    ctx->pc = 0x1A1574u;
    SET_GPR_U32(ctx, 31, 0x1A157Cu);
    ctx->pc = 0x1A1890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1890u, 0x1A1574u, 0x1A157Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A157Cu;
label_1a157c:
    // 0x1a157c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1A157Cu;
    {
        const bool branch_taken_0x1a157c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a157c) {
            ctx->pc = 0x1A15A8u;
            goto label_1a15a8;
        }
    }
    ctx->pc = 0x1A1584u;
label_1a1584:
    // 0x1a1584: 0xa3a0003c  sb          $zero, 0x3C($sp)
    ctx->pc = 0x1a1584u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 60), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a1588: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1a1588u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a158c: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x1a158cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1a1590: 0x8fa60080  lw          $a2, 0x80($sp)
    ctx->pc = 0x1a1590u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1a1594: 0x27a7003c  addiu       $a3, $sp, 0x3C
    ctx->pc = 0x1a1594u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x1a1598: 0x8fa80070  lw          $t0, 0x70($sp)
    ctx->pc = 0x1a1598u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1a159c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1a159cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a15a0: 0xc068570  jal         func_1A15C0
    ctx->pc = 0x1A15A0u;
    SET_GPR_U32(ctx, 31, 0x1A15A8u);
    ctx->pc = 0x1A15C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A15C0u, 0x1A15A0u, 0x1A15A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A15A8u;
label_1a15a8:
    // 0x1a15a8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1a15a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a15ac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a15acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a15b0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a15b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a15b4: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x1a15b4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1a15b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1A15B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A15B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A15C0u;
}
