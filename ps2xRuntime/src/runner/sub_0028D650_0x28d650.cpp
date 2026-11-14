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

// Function: sub_0028D650
// Address: 0x28d650 - 0x28d870
void sub_0028D650_0x28d650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028D650_0x28d650");
#endif

    switch (ctx->pc) {
        case 0x28d68cu: goto label_28d68c;
        case 0x28d69cu: goto label_28d69c;
        case 0x28d6a8u: goto label_28d6a8;
        case 0x28d6c4u: goto label_28d6c4;
        case 0x28d6d8u: goto label_28d6d8;
        case 0x28d6ecu: goto label_28d6ec;
        case 0x28d700u: goto label_28d700;
        case 0x28d710u: goto label_28d710;
        case 0x28d718u: goto label_28d718;
        case 0x28d724u: goto label_28d724;
        case 0x28d730u: goto label_28d730;
        case 0x28d750u: goto label_28d750;
        case 0x28d768u: goto label_28d768;
        case 0x28d784u: goto label_28d784;
        case 0x28d798u: goto label_28d798;
        case 0x28d7a8u: goto label_28d7a8;
        case 0x28d7bcu: goto label_28d7bc;
        case 0x28d7d0u: goto label_28d7d0;
        case 0x28d7e0u: goto label_28d7e0;
        case 0x28d7e8u: goto label_28d7e8;
        case 0x28d7f4u: goto label_28d7f4;
        case 0x28d80cu: goto label_28d80c;
        case 0x28d81cu: goto label_28d81c;
        case 0x28d828u: goto label_28d828;
        case 0x28d83cu: goto label_28d83c;
        case 0x28d84cu: goto label_28d84c;
        default: break;
    }

    ctx->pc = 0x28d650u;

    // 0x28d650: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x28d650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x28d654: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x28d654u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x28d658: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x28d658u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x28d65c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x28d65cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x28d660: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x28d660u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x28d664: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x28d664u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
    // 0x28d668: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x28d668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x28d66c: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x28d66cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x28d670: 0x10020006  beq         $zero, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x28D670u;
    {
        const bool branch_taken_0x28d670 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x28d670) {
            ctx->pc = 0x28D68Cu;
            goto label_28d68c;
        }
    }
    ctx->pc = 0x28D678u;
    // 0x28d678: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x28d678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x28d67c: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x28d67cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x28d680: 0x8c450034  lw          $a1, 0x34($v0)
    ctx->pc = 0x28d680u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x28d684: 0xc0e6ee0  jal         func_39BB80
    ctx->pc = 0x28D684u;
    SET_GPR_U32(ctx, 31, 0x28D68Cu);
    ctx->pc = 0x39BB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39BB80u, 0x28D684u, 0x28D68Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D68Cu;
label_28d68c:
    // 0x28d68c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x28d68cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x28d690: 0x24440058  addiu       $a0, $v0, 0x58
    ctx->pc = 0x28d690u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
    // 0x28d694: 0xc0a1848  jal         func_286120
    ctx->pc = 0x28D694u;
    SET_GPR_U32(ctx, 31, 0x28D69Cu);
    ctx->pc = 0x286120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x286120u, 0x28D694u, 0x28D69Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D69Cu;
label_28d69c:
    // 0x28d69c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x28d69cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d6a0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x28D6A0u;
    {
        const bool branch_taken_0x28d6a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28d6a0) {
            ctx->pc = 0x28D6C8u;
            goto label_28d6c8;
        }
    }
    ctx->pc = 0x28D6A8u;
label_28d6a8:
    // 0x28d6a8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x28d6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x28d6ac: 0x10020005  beq         $zero, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x28D6ACu;
    {
        const bool branch_taken_0x28d6ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x28d6ac) {
            ctx->pc = 0x28D6C4u;
            goto label_28d6c4;
        }
    }
    ctx->pc = 0x28D6B4u;
    // 0x28d6b4: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x28d6b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x28d6b8: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x28d6b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x28d6bc: 0xc0e6ee0  jal         func_39BB80
    ctx->pc = 0x28D6BCu;
    SET_GPR_U32(ctx, 31, 0x28D6C4u);
    ctx->pc = 0x39BB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39BB80u, 0x28D6BCu, 0x28D6C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D6C4u;
label_28d6c4:
    // 0x28d6c4: 0x26100018  addiu       $s0, $s0, 0x18
    ctx->pc = 0x28d6c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
label_28d6c8:
    // 0x28d6c8: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x28d6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x28d6cc: 0x24440058  addiu       $a0, $v0, 0x58
    ctx->pc = 0x28d6ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
    // 0x28d6d0: 0xc0a1840  jal         func_286100
    ctx->pc = 0x28D6D0u;
    SET_GPR_U32(ctx, 31, 0x28D6D8u);
    ctx->pc = 0x286100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x286100u, 0x28D6D0u, 0x28D6D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D6D8u;
label_28d6d8:
    // 0x28d6d8: 0x1602fff3  bne         $s0, $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x28D6D8u;
    {
        const bool branch_taken_0x28d6d8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x28d6d8) {
            ctx->pc = 0x28D6A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28d6a8;
        }
    }
    ctx->pc = 0x28D6E0u;
    // 0x28d6e0: 0x27a4004c  addiu       $a0, $sp, 0x4C
    ctx->pc = 0x28d6e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x28d6e4: 0xc054300  jal         func_150C00
    ctx->pc = 0x28D6E4u;
    SET_GPR_U32(ctx, 31, 0x28D6ECu);
    ctx->pc = 0x150C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150C00u, 0x28D6E4u, 0x28D6ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D6ECu;
label_28d6ec:
    // 0x28d6ec: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x28d6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x28d6f0: 0x27a40044  addiu       $a0, $sp, 0x44
    ctx->pc = 0x28d6f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x28d6f4: 0x24450040  addiu       $a1, $v0, 0x40
    ctx->pc = 0x28d6f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x28d6f8: 0xc0542d8  jal         func_150B60
    ctx->pc = 0x28D6F8u;
    SET_GPR_U32(ctx, 31, 0x28D700u);
    ctx->pc = 0x150B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150B60u, 0x28D6F8u, 0x28D700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D700u;
label_28d700:
    // 0x28d700: 0x27a4004c  addiu       $a0, $sp, 0x4C
    ctx->pc = 0x28d700u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x28d704: 0x27a50044  addiu       $a1, $sp, 0x44
    ctx->pc = 0x28d704u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x28d708: 0xc0542c8  jal         func_150B20
    ctx->pc = 0x28D708u;
    SET_GPR_U32(ctx, 31, 0x28D710u);
    ctx->pc = 0x150B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150B20u, 0x28D708u, 0x28D710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D710u;
label_28d710:
    // 0x28d710: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x28D710u;
    {
        const bool branch_taken_0x28d710 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28d710) {
            ctx->pc = 0x28D784u;
            goto label_28d784;
        }
    }
    ctx->pc = 0x28D718u;
label_28d718:
    // 0x28d718: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x28d718u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d71c: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x28D71Cu;
    {
        const bool branch_taken_0x28d71c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28d71c) {
            ctx->pc = 0x28D76Cu;
            goto label_28d76c;
        }
    }
    ctx->pc = 0x28D724u;
label_28d724:
    // 0x28d724: 0x27a4004c  addiu       $a0, $sp, 0x4C
    ctx->pc = 0x28d724u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x28d728: 0xc0542c0  jal         func_150B00
    ctx->pc = 0x28D728u;
    SET_GPR_U32(ctx, 31, 0x28D730u);
    ctx->pc = 0x150B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150B00u, 0x28D728u, 0x28D730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D730u;
label_28d730:
    // 0x28d730: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x28d730u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x28d734: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x28d734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x28d738: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x28d738u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x28d73c: 0x1002000a  beq         $zero, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x28D73Cu;
    {
        const bool branch_taken_0x28d73c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x28d73c) {
            ctx->pc = 0x28D768u;
            goto label_28d768;
        }
    }
    ctx->pc = 0x28D744u;
    // 0x28d744: 0x27a4004c  addiu       $a0, $sp, 0x4C
    ctx->pc = 0x28d744u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x28d748: 0xc0542c0  jal         func_150B00
    ctx->pc = 0x28D748u;
    SET_GPR_U32(ctx, 31, 0x28D750u);
    ctx->pc = 0x150B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150B00u, 0x28D748u, 0x28D750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D750u;
label_28d750:
    // 0x28d750: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x28d750u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x28d754: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x28d754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x28d758: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x28d758u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x28d75c: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x28d75cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x28d760: 0xc0e6ee0  jal         func_39BB80
    ctx->pc = 0x28D760u;
    SET_GPR_U32(ctx, 31, 0x28D768u);
    ctx->pc = 0x39BB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39BB80u, 0x28D760u, 0x28D768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D768u;
label_28d768:
    // 0x28d768: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x28d768u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_28d76c:
    // 0x28d76c: 0x2e220002  sltiu       $v0, $s1, 0x2
    ctx->pc = 0x28d76cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x28d770: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x28D770u;
    {
        const bool branch_taken_0x28d770 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28d770) {
            ctx->pc = 0x28D724u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28d724;
        }
    }
    ctx->pc = 0x28D778u;
    // 0x28d778: 0x27a4004c  addiu       $a0, $sp, 0x4C
    ctx->pc = 0x28d778u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x28d77c: 0xc054278  jal         func_1509E0
    ctx->pc = 0x28D77Cu;
    SET_GPR_U32(ctx, 31, 0x28D784u);
    ctx->pc = 0x1509E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1509E0u, 0x28D77Cu, 0x28D784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D784u;
label_28d784:
    // 0x28d784: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x28d784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x28d788: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x28d788u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x28d78c: 0x24450040  addiu       $a1, $v0, 0x40
    ctx->pc = 0x28d78cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x28d790: 0xc054288  jal         func_150A20
    ctx->pc = 0x28D790u;
    SET_GPR_U32(ctx, 31, 0x28D798u);
    ctx->pc = 0x150A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150A20u, 0x28D790u, 0x28D798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D798u;
label_28d798:
    // 0x28d798: 0x27a4004c  addiu       $a0, $sp, 0x4C
    ctx->pc = 0x28d798u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x28d79c: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x28d79cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x28d7a0: 0xc041998  jal         func_106660
    ctx->pc = 0x28D7A0u;
    SET_GPR_U32(ctx, 31, 0x28D7A8u);
    ctx->pc = 0x106660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106660u, 0x28D7A0u, 0x28D7A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D7A8u;
label_28d7a8:
    // 0x28d7a8: 0x1440ffdb  bnez        $v0, . + 4 + (-0x25 << 2)
    ctx->pc = 0x28D7A8u;
    {
        const bool branch_taken_0x28d7a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28d7a8) {
            ctx->pc = 0x28D718u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28d718;
        }
    }
    ctx->pc = 0x28D7B0u;
    // 0x28d7b0: 0x27a40048  addiu       $a0, $sp, 0x48
    ctx->pc = 0x28d7b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x28d7b4: 0xc0a17a8  jal         func_285EA0
    ctx->pc = 0x28D7B4u;
    SET_GPR_U32(ctx, 31, 0x28D7BCu);
    ctx->pc = 0x285EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285EA0u, 0x28D7B4u, 0x28D7BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D7BCu;
label_28d7bc:
    // 0x28d7bc: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x28d7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x28d7c0: 0x27a4003c  addiu       $a0, $sp, 0x3C
    ctx->pc = 0x28d7c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x28d7c4: 0x2445004c  addiu       $a1, $v0, 0x4C
    ctx->pc = 0x28d7c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 76));
    // 0x28d7c8: 0xc0a1788  jal         func_285E20
    ctx->pc = 0x28D7C8u;
    SET_GPR_U32(ctx, 31, 0x28D7D0u);
    ctx->pc = 0x285E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285E20u, 0x28D7C8u, 0x28D7D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D7D0u;
label_28d7d0:
    // 0x28d7d0: 0x27a40048  addiu       $a0, $sp, 0x48
    ctx->pc = 0x28d7d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x28d7d4: 0x27a5003c  addiu       $a1, $sp, 0x3C
    ctx->pc = 0x28d7d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x28d7d8: 0xc0a1778  jal         func_285DE0
    ctx->pc = 0x28D7D8u;
    SET_GPR_U32(ctx, 31, 0x28D7E0u);
    ctx->pc = 0x285DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285DE0u, 0x28D7D8u, 0x28D7E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D7E0u;
label_28d7e0:
    // 0x28d7e0: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x28D7E0u;
    {
        const bool branch_taken_0x28d7e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28d7e0) {
            ctx->pc = 0x28D828u;
            goto label_28d828;
        }
    }
    ctx->pc = 0x28D7E8u;
label_28d7e8:
    // 0x28d7e8: 0x27a40048  addiu       $a0, $sp, 0x48
    ctx->pc = 0x28d7e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x28d7ec: 0xc0a23b0  jal         func_288EC0
    ctx->pc = 0x28D7ECu;
    SET_GPR_U32(ctx, 31, 0x28D7F4u);
    ctx->pc = 0x288EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288EC0u, 0x28D7ECu, 0x28D7F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D7F4u;
label_28d7f4:
    // 0x28d7f4: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x28d7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x28d7f8: 0x10020008  beq         $zero, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x28D7F8u;
    {
        const bool branch_taken_0x28d7f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x28d7f8) {
            ctx->pc = 0x28D81Cu;
            goto label_28d81c;
        }
    }
    ctx->pc = 0x28D800u;
    // 0x28d800: 0x27a40048  addiu       $a0, $sp, 0x48
    ctx->pc = 0x28d800u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x28d804: 0xc0a23b0  jal         func_288EC0
    ctx->pc = 0x28D804u;
    SET_GPR_U32(ctx, 31, 0x28D80Cu);
    ctx->pc = 0x288EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288EC0u, 0x28D804u, 0x28D80Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D80Cu;
label_28d80c:
    // 0x28d80c: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x28d80cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x28d810: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x28d810u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x28d814: 0xc0e6ee0  jal         func_39BB80
    ctx->pc = 0x28D814u;
    SET_GPR_U32(ctx, 31, 0x28D81Cu);
    ctx->pc = 0x39BB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39BB80u, 0x28D814u, 0x28D81Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D81Cu;
label_28d81c:
    // 0x28d81c: 0x27a40048  addiu       $a0, $sp, 0x48
    ctx->pc = 0x28d81cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x28d820: 0xc0a1760  jal         func_285D80
    ctx->pc = 0x28D820u;
    SET_GPR_U32(ctx, 31, 0x28D828u);
    ctx->pc = 0x285D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285D80u, 0x28D820u, 0x28D828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D828u;
label_28d828:
    // 0x28d828: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x28d828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x28d82c: 0x27a40038  addiu       $a0, $sp, 0x38
    ctx->pc = 0x28d82cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x28d830: 0x2445004c  addiu       $a1, $v0, 0x4C
    ctx->pc = 0x28d830u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 76));
    // 0x28d834: 0xc0a1734  jal         func_285CD0
    ctx->pc = 0x28D834u;
    SET_GPR_U32(ctx, 31, 0x28D83Cu);
    ctx->pc = 0x285CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CD0u, 0x28D834u, 0x28D83Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D83Cu;
label_28d83c:
    // 0x28d83c: 0x27a40048  addiu       $a0, $sp, 0x48
    ctx->pc = 0x28d83cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x28d840: 0x27a50038  addiu       $a1, $sp, 0x38
    ctx->pc = 0x28d840u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x28d844: 0xc041998  jal         func_106660
    ctx->pc = 0x28D844u;
    SET_GPR_U32(ctx, 31, 0x28D84Cu);
    ctx->pc = 0x106660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106660u, 0x28D844u, 0x28D84Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D84Cu;
label_28d84c:
    // 0x28d84c: 0x1440ffe6  bnez        $v0, . + 4 + (-0x1A << 2)
    ctx->pc = 0x28D84Cu;
    {
        const bool branch_taken_0x28d84c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28d84c) {
            ctx->pc = 0x28D7E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28d7e8;
        }
    }
    ctx->pc = 0x28D854u;
    // 0x28d854: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x28d854u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28d858: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x28d858u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28d85c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x28d85cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28d860: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x28d860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x28d864: 0x3e00008  jr          $ra
    ctx->pc = 0x28D864u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28D864u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28D86Cu;
    // 0x28d86c: 0x0  nop
    ctx->pc = 0x28d86cu;
    // NOP
    ctx->pc = 0x28d870u;
}
