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

// Function: sub_0048F210
// Address: 0x48f210 - 0x48f3e0
void sub_0048F210_0x48f210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048F210_0x48f210");
#endif

    switch (ctx->pc) {
        case 0x48f230u: goto label_48f230;
        case 0x48f260u: goto label_48f260;
        case 0x48f270u: goto label_48f270;
        case 0x48f278u: goto label_48f278;
        case 0x48f284u: goto label_48f284;
        case 0x48f2b0u: goto label_48f2b0;
        case 0x48f2c4u: goto label_48f2c4;
        case 0x48f2d4u: goto label_48f2d4;
        case 0x48f2fcu: goto label_48f2fc;
        case 0x48f30cu: goto label_48f30c;
        case 0x48f334u: goto label_48f334;
        case 0x48f33cu: goto label_48f33c;
        case 0x48f348u: goto label_48f348;
        case 0x48f368u: goto label_48f368;
        case 0x48f374u: goto label_48f374;
        case 0x48f384u: goto label_48f384;
        case 0x48f398u: goto label_48f398;
        case 0x48f3a8u: goto label_48f3a8;
        case 0x48f3c0u: goto label_48f3c0;
        default: break;
    }

    ctx->pc = 0x48f210u;

    // 0x48f210: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x48f210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x48f214: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x48f214u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x48f218: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x48f218u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x48f21c: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x48f21cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x48f220: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x48f220u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
    // 0x48f224: 0x27a40048  addiu       $a0, $sp, 0x48
    ctx->pc = 0x48f224u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x48f228: 0xc123d24  jal         func_48F490
    ctx->pc = 0x48F228u;
    SET_GPR_U32(ctx, 31, 0x48F230u);
    ctx->pc = 0x48F490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48F490u, 0x48F228u, 0x48F230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48F230u;
label_48f230:
    // 0x48f230: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x48f230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x48f234: 0x1040003a  beqz        $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x48F234u;
    {
        const bool branch_taken_0x48f234 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x48f234) {
            ctx->pc = 0x48F320u;
            goto label_48f320;
        }
    }
    ctx->pc = 0x48F23Cu;
    // 0x48f23c: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x48f23cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x48f240: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x48f240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x48f244: 0x10400036  beqz        $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x48F244u;
    {
        const bool branch_taken_0x48f244 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x48f244) {
            ctx->pc = 0x48F320u;
            goto label_48f320;
        }
    }
    ctx->pc = 0x48F24Cu;
    // 0x48f24c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x48f24cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x48f250: 0x27a40038  addiu       $a0, $sp, 0x38
    ctx->pc = 0x48f250u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x48f254: 0x2445000c  addiu       $a1, $v0, 0xC
    ctx->pc = 0x48f254u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x48f258: 0xc123940  jal         func_48E500
    ctx->pc = 0x48F258u;
    SET_GPR_U32(ctx, 31, 0x48F260u);
    ctx->pc = 0x48E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48E500u, 0x48F258u, 0x48F260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48F260u;
label_48f260:
    // 0x48f260: 0x27a40048  addiu       $a0, $sp, 0x48
    ctx->pc = 0x48f260u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x48f264: 0x27a50038  addiu       $a1, $sp, 0x38
    ctx->pc = 0x48f264u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x48f268: 0xc123d04  jal         func_48F410
    ctx->pc = 0x48F268u;
    SET_GPR_U32(ctx, 31, 0x48F270u);
    ctx->pc = 0x48F410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48F410u, 0x48F268u, 0x48F270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48F270u;
label_48f270:
    // 0x48f270: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x48F270u;
    {
        const bool branch_taken_0x48f270 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x48f270) {
            ctx->pc = 0x48F2B0u;
            goto label_48f2b0;
        }
    }
    ctx->pc = 0x48F278u;
label_48f278:
    // 0x48f278: 0x27a40048  addiu       $a0, $sp, 0x48
    ctx->pc = 0x48f278u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x48f27c: 0xc123ba8  jal         func_48EEA0
    ctx->pc = 0x48F27Cu;
    SET_GPR_U32(ctx, 31, 0x48F284u);
    ctx->pc = 0x48EEA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48EEA0u, 0x48F27Cu, 0x48F284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48F284u;
label_48f284:
    // 0x48f284: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x48f284u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x48f288: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x48f288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x48f28c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x48f28cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x48f290: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x48F290u;
    {
        const bool branch_taken_0x48f290 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x48f290) {
            ctx->pc = 0x48F2A4u;
            goto label_48f2a4;
        }
    }
    ctx->pc = 0x48F298u;
    // 0x48f298: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x48f298u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48f29c: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x48F29Cu;
    {
        const bool branch_taken_0x48f29c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x48f29c) {
            ctx->pc = 0x48F3C4u;
            goto label_48f3c4;
        }
    }
    ctx->pc = 0x48F2A4u;
label_48f2a4:
    // 0x48f2a4: 0x27a40048  addiu       $a0, $sp, 0x48
    ctx->pc = 0x48f2a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x48f2a8: 0xc123c48  jal         func_48F120
    ctx->pc = 0x48F2A8u;
    SET_GPR_U32(ctx, 31, 0x48F2B0u);
    ctx->pc = 0x48F120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48F120u, 0x48F2A8u, 0x48F2B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48F2B0u;
label_48f2b0:
    // 0x48f2b0: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x48f2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x48f2b4: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x48f2b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x48f2b8: 0x2445000c  addiu       $a1, $v0, 0xC
    ctx->pc = 0x48f2b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x48f2bc: 0xc1238e0  jal         func_48E380
    ctx->pc = 0x48F2BCu;
    SET_GPR_U32(ctx, 31, 0x48F2C4u);
    ctx->pc = 0x48E380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48E380u, 0x48F2BCu, 0x48F2C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48F2C4u;
label_48f2c4:
    // 0x48f2c4: 0x27a40048  addiu       $a0, $sp, 0x48
    ctx->pc = 0x48f2c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x48f2c8: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x48f2c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x48f2cc: 0xc1238d4  jal         func_48E350
    ctx->pc = 0x48F2CCu;
    SET_GPR_U32(ctx, 31, 0x48F2D4u);
    ctx->pc = 0x48E350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48E350u, 0x48F2CCu, 0x48F2D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48F2D4u;
label_48f2d4:
    // 0x48f2d4: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x48F2D4u;
    {
        const bool branch_taken_0x48f2d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x48f2d4) {
            ctx->pc = 0x48F278u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_48f278;
        }
    }
    ctx->pc = 0x48F2DCu;
    // 0x48f2dc: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x48f2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x48f2e0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x48f2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x48f2e4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x48F2E4u;
    {
        const bool branch_taken_0x48f2e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x48f2e4) {
            ctx->pc = 0x48F314u;
            goto label_48f314;
        }
    }
    ctx->pc = 0x48F2ECu;
    // 0x48f2ec: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x48f2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x48f2f0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x48f2f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x48f2f4: 0xc082d24  jal         func_20B490
    ctx->pc = 0x48F2F4u;
    SET_GPR_U32(ctx, 31, 0x48F2FCu);
    ctx->pc = 0x20B490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B490u, 0x48F2F4u, 0x48F2FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48F2FCu;
label_48f2fc:
    // 0x48f2fc: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x48f2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x48f300: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x48f300u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x48f304: 0xc119c5c  jal         func_467170
    ctx->pc = 0x48F304u;
    SET_GPR_U32(ctx, 31, 0x48F30Cu);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x48F304u, 0x48F30Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48F30Cu;
label_48f30c:
    // 0x48f30c: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x48f30cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x48f310: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x48f310u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_48f314:
    // 0x48f314: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x48f314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x48f318: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x48F318u;
    {
        const bool branch_taken_0x48f318 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x48f318) {
            ctx->pc = 0x48F3C4u;
            goto label_48f3c4;
        }
    }
    ctx->pc = 0x48F320u;
label_48f320:
    // 0x48f320: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x48f320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x48f324: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x48f324u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x48f328: 0x2445000c  addiu       $a1, $v0, 0xC
    ctx->pc = 0x48f328u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x48f32c: 0xc123940  jal         func_48E500
    ctx->pc = 0x48F32Cu;
    SET_GPR_U32(ctx, 31, 0x48F334u);
    ctx->pc = 0x48E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48E500u, 0x48F32Cu, 0x48F334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48F334u;
label_48f334:
    // 0x48f334: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x48F334u;
    {
        const bool branch_taken_0x48f334 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x48f334) {
            ctx->pc = 0x48F384u;
            goto label_48f384;
        }
    }
    ctx->pc = 0x48F33Cu;
label_48f33c:
    // 0x48f33c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x48f33cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x48f340: 0xc123ba8  jal         func_48EEA0
    ctx->pc = 0x48F340u;
    SET_GPR_U32(ctx, 31, 0x48F348u);
    ctx->pc = 0x48EEA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48EEA0u, 0x48F340u, 0x48F348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48F348u;
label_48f348:
    // 0x48f348: 0x8c50000c  lw          $s0, 0xC($v0)
    ctx->pc = 0x48f348u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x48f34c: 0x1010000a  beq         $zero, $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x48F34Cu;
    {
        const bool branch_taken_0x48f34c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 16));
        if (branch_taken_0x48f34c) {
            ctx->pc = 0x48F378u;
            goto label_48f378;
        }
    }
    ctx->pc = 0x48F354u;
    // 0x48f354: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x48F354u;
    {
        const bool branch_taken_0x48f354 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x48f354) {
            ctx->pc = 0x48F378u;
            goto label_48f378;
        }
    }
    ctx->pc = 0x48F35Cu;
    // 0x48f35c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x48f35cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48f360: 0xc082d24  jal         func_20B490
    ctx->pc = 0x48F360u;
    SET_GPR_U32(ctx, 31, 0x48F368u);
    ctx->pc = 0x20B490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B490u, 0x48F360u, 0x48F368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48F368u;
label_48f368:
    // 0x48f368: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x48f368u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48f36c: 0xc119c5c  jal         func_467170
    ctx->pc = 0x48F36Cu;
    SET_GPR_U32(ctx, 31, 0x48F374u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x48F36Cu, 0x48F374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48F374u;
label_48f374:
    // 0x48f374: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x48f374u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_48f378:
    // 0x48f378: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x48f378u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x48f37c: 0xc123c48  jal         func_48F120
    ctx->pc = 0x48F37Cu;
    SET_GPR_U32(ctx, 31, 0x48F384u);
    ctx->pc = 0x48F120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48F120u, 0x48F37Cu, 0x48F384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48F384u;
label_48f384:
    // 0x48f384: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x48f384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x48f388: 0x27a40028  addiu       $a0, $sp, 0x28
    ctx->pc = 0x48f388u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    // 0x48f38c: 0x2445000c  addiu       $a1, $v0, 0xC
    ctx->pc = 0x48f38cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x48f390: 0xc1238e0  jal         func_48E380
    ctx->pc = 0x48F390u;
    SET_GPR_U32(ctx, 31, 0x48F398u);
    ctx->pc = 0x48E380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48E380u, 0x48F390u, 0x48F398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48F398u;
label_48f398:
    // 0x48f398: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x48f398u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x48f39c: 0x27a50028  addiu       $a1, $sp, 0x28
    ctx->pc = 0x48f39cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    // 0x48f3a0: 0xc1238d4  jal         func_48E350
    ctx->pc = 0x48F3A0u;
    SET_GPR_U32(ctx, 31, 0x48F3A8u);
    ctx->pc = 0x48E350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48E350u, 0x48F3A0u, 0x48F3A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48F3A8u;
label_48f3a8:
    // 0x48f3a8: 0x1440ffe4  bnez        $v0, . + 4 + (-0x1C << 2)
    ctx->pc = 0x48F3A8u;
    {
        const bool branch_taken_0x48f3a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x48f3a8) {
            ctx->pc = 0x48F33Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_48f33c;
        }
    }
    ctx->pc = 0x48F3B0u;
    // 0x48f3b0: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x48f3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x48f3b4: 0x2444000c  addiu       $a0, $v0, 0xC
    ctx->pc = 0x48f3b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x48f3b8: 0xc123cf8  jal         func_48F3E0
    ctx->pc = 0x48F3B8u;
    SET_GPR_U32(ctx, 31, 0x48F3C0u);
    ctx->pc = 0x48F3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48F3E0u, 0x48F3B8u, 0x48F3C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48F3C0u;
label_48f3c0:
    // 0x48f3c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x48f3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_48f3c4:
    // 0x48f3c4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x48f3c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x48f3c8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x48f3c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48f3cc: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x48f3ccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x48f3d0: 0x3e00008  jr          $ra
    ctx->pc = 0x48F3D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48F3D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48F3D8u;
    // 0x48f3d8: 0x0  nop
    ctx->pc = 0x48f3d8u;
    // NOP
    // 0x48f3dc: 0x0  nop
    ctx->pc = 0x48f3dcu;
    // NOP
    ctx->pc = 0x48f3e0u;
}
