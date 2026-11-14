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

// Function: sub_0010D390
// Address: 0x10d390 - 0x10d510
void sub_0010D390_0x10d390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010D390_0x10d390");
#endif

    switch (ctx->pc) {
        case 0x10d3c8u: goto label_10d3c8;
        case 0x10d3f0u: goto label_10d3f0;
        case 0x10d414u: goto label_10d414;
        case 0x10d438u: goto label_10d438;
        case 0x10d468u: goto label_10d468;
        case 0x10d4a0u: goto label_10d4a0;
        case 0x10d4c4u: goto label_10d4c4;
        case 0x10d4d8u: goto label_10d4d8;
        default: break;
    }

    ctx->pc = 0x10d390u;

    // 0x10d390: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x10d390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x10d394: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x10d394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x10d398: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x10d398u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x10d39c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x10d39cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x10d3a0: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x10d3a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x10d3a4: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x10d3a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x10d3a8: 0xa3a70050  sb          $a3, 0x50($sp)
    ctx->pc = 0x10d3a8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 80), (uint8_t)GPR_U32(ctx, 7));
    // 0x10d3ac: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x10d3acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10d3b0: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x10d3b0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10d3b4: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x10d3b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10d3b8: 0x83a50050  lb          $a1, 0x50($sp)
    ctx->pc = 0x10d3b8u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x10d3bc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x10d3bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d3c0: 0xc043740  jal         func_10DD00
    ctx->pc = 0x10D3C0u;
    SET_GPR_U32(ctx, 31, 0x10D3C8u);
    ctx->pc = 0x10DD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DD00u, 0x10D3C0u, 0x10D3C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D3C8u;
label_10d3c8:
    // 0x10d3c8: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x10d3c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10d3cc: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x10d3ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x10d3d0: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x10d3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10d3d4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x10d3d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10d3d8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x10d3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x10d3dc: 0x14620018  bne         $v1, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x10D3DCu;
    {
        const bool branch_taken_0x10d3dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x10d3dc) {
            ctx->pc = 0x10D440u;
            goto label_10d440;
        }
    }
    ctx->pc = 0x10D3E4u;
    // 0x10d3e4: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x10d3e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10d3e8: 0xc042514  jal         func_109450
    ctx->pc = 0x10D3E8u;
    SET_GPR_U32(ctx, 31, 0x10D3F0u);
    ctx->pc = 0x109450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109450u, 0x10D3E8u, 0x10D3F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D3F0u;
label_10d3f0:
    // 0x10d3f0: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x10d3f0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x10d3f4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10D3F4u;
    {
        const bool branch_taken_0x10d3f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10d3f4) {
            ctx->pc = 0x10D408u;
            goto label_10d408;
        }
    }
    ctx->pc = 0x10D3FCu;
    // 0x10d3fc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x10d3fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d400: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x10D400u;
    {
        const bool branch_taken_0x10d400 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10d400) {
            ctx->pc = 0x10D4FCu;
            goto label_10d4fc;
        }
    }
    ctx->pc = 0x10D408u;
label_10d408:
    // 0x10d408: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x10d408u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10d40c: 0xc042514  jal         func_109450
    ctx->pc = 0x10D40Cu;
    SET_GPR_U32(ctx, 31, 0x10D414u);
    ctx->pc = 0x109450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109450u, 0x10D40Cu, 0x10D414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D414u;
label_10d414:
    // 0x10d414: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x10d414u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10d418: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x10d418u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x10d41c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x10d41cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10d420: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x10d420u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10d424: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x10d424u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10d428: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x10d428u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d42c: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x10d42cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10d430: 0xc043764  jal         func_10DD90
    ctx->pc = 0x10D430u;
    SET_GPR_U32(ctx, 31, 0x10D438u);
    ctx->pc = 0x10DD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DD90u, 0x10D430u, 0x10D438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D438u;
label_10d438:
    // 0x10d438: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x10D438u;
    {
        const bool branch_taken_0x10d438 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10d438) {
            ctx->pc = 0x10D4C4u;
            goto label_10d4c4;
        }
    }
    ctx->pc = 0x10D440u;
label_10d440:
    // 0x10d440: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x10d440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10d444: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x10d444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10d448: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x10D448u;
    {
        const bool branch_taken_0x10d448 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10d448) {
            ctx->pc = 0x10D4A8u;
            goto label_10d4a8;
        }
    }
    ctx->pc = 0x10D450u;
    // 0x10d450: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x10d450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10d454: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x10d454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10d458: 0x2445ffff  addiu       $a1, $v0, -0x1
    ctx->pc = 0x10d458u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x10d45c: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x10d45cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10d460: 0xc043544  jal         func_10D510
    ctx->pc = 0x10D460u;
    SET_GPR_U32(ctx, 31, 0x10D468u);
    ctx->pc = 0x10D510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10D510u, 0x10D460u, 0x10D468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D468u;
label_10d468:
    // 0x10d468: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x10d468u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10d46c: 0x21e3c  dsll32      $v1, $v0, 24
    ctx->pc = 0x10d46cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
    // 0x10d470: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x10d470u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x10d474: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x10d474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x10d478: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x10D478u;
    {
        const bool branch_taken_0x10d478 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x10d478) {
            ctx->pc = 0x10D4A8u;
            goto label_10d4a8;
        }
    }
    ctx->pc = 0x10D480u;
    // 0x10d480: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x10d480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10d484: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x10d484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10d488: 0x2447ffff  addiu       $a3, $v0, -0x1
    ctx->pc = 0x10d488u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x10d48c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x10d48cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10d490: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x10d490u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10d494: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x10d494u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d498: 0xc043764  jal         func_10DD90
    ctx->pc = 0x10D498u;
    SET_GPR_U32(ctx, 31, 0x10D4A0u);
    ctx->pc = 0x10DD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DD90u, 0x10D498u, 0x10D4A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D4A0u;
label_10d4a0:
    // 0x10d4a0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x10D4A0u;
    {
        const bool branch_taken_0x10d4a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10d4a0) {
            ctx->pc = 0x10D4C4u;
            goto label_10d4c4;
        }
    }
    ctx->pc = 0x10D4A8u;
label_10d4a8:
    // 0x10d4a8: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x10d4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10d4ac: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x10d4acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10d4b0: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x10d4b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10d4b4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x10d4b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d4b8: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x10d4b8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10d4bc: 0xc043764  jal         func_10DD90
    ctx->pc = 0x10D4BCu;
    SET_GPR_U32(ctx, 31, 0x10D4C4u);
    ctx->pc = 0x10DD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DD90u, 0x10D4BCu, 0x10D4C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D4C4u;
label_10d4c4:
    // 0x10d4c4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x10d4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10d4c8: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x10d4c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10d4cc: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x10d4ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10d4d0: 0xc043544  jal         func_10D510
    ctx->pc = 0x10D4D0u;
    SET_GPR_U32(ctx, 31, 0x10D4D8u);
    ctx->pc = 0x10D510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10D510u, 0x10D4D0u, 0x10D4D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D4D8u;
label_10d4d8:
    // 0x10d4d8: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x10d4d8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10d4dc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x10D4DCu;
    {
        const bool branch_taken_0x10d4dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10d4dc) {
            ctx->pc = 0x10D4F8u;
            goto label_10d4f8;
        }
    }
    ctx->pc = 0x10D4E4u;
    // 0x10d4e4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x10d4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10d4e8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x10d4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10d4ec: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x10d4ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x10d4f0: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x10d4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10d4f4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x10d4f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_10d4f8:
    // 0x10d4f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10d4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_10d4fc:
    // 0x10d4fc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x10d4fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10d500: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x10d500u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10d504: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x10d504u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x10d508: 0x3e00008  jr          $ra
    ctx->pc = 0x10D508u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10D508u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10D510u;
}
