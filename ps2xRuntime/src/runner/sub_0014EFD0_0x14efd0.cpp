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

// Function: sub_0014EFD0
// Address: 0x14efd0 - 0x14f180
void sub_0014EFD0_0x14efd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014EFD0_0x14efd0");
#endif

    switch (ctx->pc) {
        case 0x14f008u: goto label_14f008;
        case 0x14f014u: goto label_14f014;
        case 0x14f020u: goto label_14f020;
        case 0x14f030u: goto label_14f030;
        case 0x14f044u: goto label_14f044;
        case 0x14f05cu: goto label_14f05c;
        case 0x14f070u: goto label_14f070;
        case 0x14f080u: goto label_14f080;
        case 0x14f098u: goto label_14f098;
        case 0x14f0b4u: goto label_14f0b4;
        case 0x14f0e4u: goto label_14f0e4;
        case 0x14f0f0u: goto label_14f0f0;
        case 0x14f100u: goto label_14f100;
        case 0x14f118u: goto label_14f118;
        case 0x14f12cu: goto label_14f12c;
        case 0x14f13cu: goto label_14f13c;
        default: break;
    }

    ctx->pc = 0x14efd0u;

    // 0x14efd0: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x14efd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
    // 0x14efd4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x14efd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x14efd8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x14efd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x14efdc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x14efdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x14efe0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x14efe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x14efe4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x14efe4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x14efe8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x14efe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x14efec: 0xafa40120  sw          $a0, 0x120($sp)
    ctx->pc = 0x14efecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 4));
    // 0x14eff0: 0xafa50130  sw          $a1, 0x130($sp)
    ctx->pc = 0x14eff0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 5));
    // 0x14eff4: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x14eff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x14eff8: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x14eff8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14effc: 0x8fa40120  lw          $a0, 0x120($sp)
    ctx->pc = 0x14effcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x14f000: 0xc053ccc  jal         func_14F330
    ctx->pc = 0x14F000u;
    SET_GPR_U32(ctx, 31, 0x14F008u);
    ctx->pc = 0x14F330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F330u, 0x14F000u, 0x14F008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F008u;
label_14f008:
    // 0x14f008: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x14f008u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14f00c: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x14F00Cu;
    {
        const bool branch_taken_0x14f00c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f00c) {
            ctx->pc = 0x14F0B8u;
            goto label_14f0b8;
        }
    }
    ctx->pc = 0x14F014u;
label_14f014:
    // 0x14f014: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14f014u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f018: 0xc053cac  jal         func_14F2B0
    ctx->pc = 0x14F018u;
    SET_GPR_U32(ctx, 31, 0x14F020u);
    ctx->pc = 0x14F2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F2B0u, 0x14F018u, 0x14F020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F020u;
label_14f020:
    // 0x14f020: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x14f020u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x14f024: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x14f024u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f028: 0xc053c7c  jal         func_14F1F0
    ctx->pc = 0x14F028u;
    SET_GPR_U32(ctx, 31, 0x14F030u);
    ctx->pc = 0x14F1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F1F0u, 0x14F028u, 0x14F030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F030u;
label_14f030:
    // 0x14f030: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x14f030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x14f034: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x14f034u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x14f038: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x14f038u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14f03c: 0xc094d74  jal         func_2535D0
    ctx->pc = 0x14F03Cu;
    SET_GPR_U32(ctx, 31, 0x14F044u);
    ctx->pc = 0x2535D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2535D0u, 0x14F03Cu, 0x14F044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F044u;
label_14f044:
    // 0x14f044: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x14f044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x14f048: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x14f048u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x14f04c: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x14f04cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x14f050: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x14f050u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x14f054: 0xc053c70  jal         func_14F1C0
    ctx->pc = 0x14F054u;
    SET_GPR_U32(ctx, 31, 0x14F05Cu);
    ctx->pc = 0x14F1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F1C0u, 0x14F054u, 0x14F05Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F05Cu;
label_14f05c:
    // 0x14f05c: 0x305400ff  andi        $s4, $v0, 0xFF
    ctx->pc = 0x14f05cu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x14f060: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x14f060u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x14f064: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x14f064u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x14f068: 0xc094d94  jal         func_253650
    ctx->pc = 0x14F068u;
    SET_GPR_U32(ctx, 31, 0x14F070u);
    ctx->pc = 0x253650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253650u, 0x14F068u, 0x14F070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F070u;
label_14f070:
    // 0x14f070: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x14f070u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x14f074: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x14f074u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x14f078: 0xc094d94  jal         func_253650
    ctx->pc = 0x14F078u;
    SET_GPR_U32(ctx, 31, 0x14F080u);
    ctx->pc = 0x253650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253650u, 0x14F078u, 0x14F080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F080u;
label_14f080:
    // 0x14f080: 0x16800009  bnez        $s4, . + 4 + (0x9 << 2)
    ctx->pc = 0x14F080u;
    {
        const bool branch_taken_0x14f080 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x14f080) {
            ctx->pc = 0x14F0A8u;
            goto label_14f0a8;
        }
    }
    ctx->pc = 0x14F088u;
    // 0x14f088: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x14f088u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f08c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14f08cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f090: 0xc053c68  jal         func_14F1A0
    ctx->pc = 0x14F090u;
    SET_GPR_U32(ctx, 31, 0x14F098u);
    ctx->pc = 0x14F1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F1A0u, 0x14F090u, 0x14F098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F098u;
label_14f098:
    // 0x14f098: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x14f098u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14f09c: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x14f09cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f0a0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x14F0A0u;
    {
        const bool branch_taken_0x14f0a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f0a0) {
            ctx->pc = 0x14F0B8u;
            goto label_14f0b8;
        }
    }
    ctx->pc = 0x14F0A8u;
label_14f0a8:
    // 0x14f0a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14f0a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f0ac: 0xc053c60  jal         func_14F180
    ctx->pc = 0x14F0ACu;
    SET_GPR_U32(ctx, 31, 0x14F0B4u);
    ctx->pc = 0x14F180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F180u, 0x14F0ACu, 0x14F0B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F0B4u;
label_14f0b4:
    // 0x14f0b4: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x14f0b4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_14f0b8:
    // 0x14f0b8: 0x1600ffd6  bnez        $s0, . + 4 + (-0x2A << 2)
    ctx->pc = 0x14F0B8u;
    {
        const bool branch_taken_0x14f0b8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x14f0b8) {
            ctx->pc = 0x14F014u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14f014;
        }
    }
    ctx->pc = 0x14F0C0u;
    // 0x14f0c0: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x14f0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x14f0c4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x14f0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14f0c8: 0x1222001e  beq         $s1, $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x14F0C8u;
    {
        const bool branch_taken_0x14f0c8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x14f0c8) {
            ctx->pc = 0x14F144u;
            goto label_14f144;
        }
    }
    ctx->pc = 0x14F0D0u;
    // 0x14f0d0: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x14f0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x14f0d4: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x14f0d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x14f0d8: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x14f0d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14f0dc: 0xc094d74  jal         func_2535D0
    ctx->pc = 0x14F0DCu;
    SET_GPR_U32(ctx, 31, 0x14F0E4u);
    ctx->pc = 0x2535D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2535D0u, 0x14F0DCu, 0x14F0E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F0E4u;
label_14f0e4:
    // 0x14f0e4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14f0e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f0e8: 0xc053cac  jal         func_14F2B0
    ctx->pc = 0x14F0E8u;
    SET_GPR_U32(ctx, 31, 0x14F0F0u);
    ctx->pc = 0x14F2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F2B0u, 0x14F0E8u, 0x14F0F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F0F0u;
label_14f0f0:
    // 0x14f0f0: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x14f0f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x14f0f4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x14f0f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f0f8: 0xc053c7c  jal         func_14F1F0
    ctx->pc = 0x14F0F8u;
    SET_GPR_U32(ctx, 31, 0x14F100u);
    ctx->pc = 0x14F1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F1F0u, 0x14F0F8u, 0x14F100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F100u;
label_14f100:
    // 0x14f100: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x14f100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x14f104: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x14f104u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x14f108: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x14f108u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x14f10c: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x14f10cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x14f110: 0xc053c70  jal         func_14F1C0
    ctx->pc = 0x14F110u;
    SET_GPR_U32(ctx, 31, 0x14F118u);
    ctx->pc = 0x14F1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F1C0u, 0x14F110u, 0x14F118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F118u;
label_14f118:
    // 0x14f118: 0x305300ff  andi        $s3, $v0, 0xFF
    ctx->pc = 0x14f118u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x14f11c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x14f11cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x14f120: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x14f120u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x14f124: 0xc094d94  jal         func_253650
    ctx->pc = 0x14F124u;
    SET_GPR_U32(ctx, 31, 0x14F12Cu);
    ctx->pc = 0x253650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253650u, 0x14F124u, 0x14F12Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F12Cu;
label_14f12c:
    // 0x14f12c: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x14f12cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x14f130: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x14f130u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x14f134: 0xc094d94  jal         func_253650
    ctx->pc = 0x14F134u;
    SET_GPR_U32(ctx, 31, 0x14F13Cu);
    ctx->pc = 0x253650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253650u, 0x14F134u, 0x14F13Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F13Cu;
label_14f13c:
    // 0x14f13c: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x14F13Cu;
    {
        const bool branch_taken_0x14f13c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f13c) {
            ctx->pc = 0x14F14Cu;
            goto label_14f14c;
        }
    }
    ctx->pc = 0x14F144u;
label_14f144:
    // 0x14f144: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x14f144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x14f148: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x14f148u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_14f14c:
    // 0x14f14c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x14f14cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f150: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x14f150u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x14f154: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x14f154u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14f158: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x14f158u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14f15c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x14f15cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14f160: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x14f160u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14f164: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14f164u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14f168: 0x27bd0140  addiu       $sp, $sp, 0x140
    ctx->pc = 0x14f168u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x14f16c: 0x3e00008  jr          $ra
    ctx->pc = 0x14F16Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14F16Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14F174u;
    // 0x14f174: 0x0  nop
    ctx->pc = 0x14f174u;
    // NOP
    // 0x14f178: 0x0  nop
    ctx->pc = 0x14f178u;
    // NOP
    // 0x14f17c: 0x0  nop
    ctx->pc = 0x14f17cu;
    // NOP
    ctx->pc = 0x14f180u;
}
