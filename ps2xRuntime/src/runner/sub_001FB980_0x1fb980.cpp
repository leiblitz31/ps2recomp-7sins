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

// Function: sub_001FB980
// Address: 0x1fb980 - 0x1fbb60
void sub_001FB980_0x1fb980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FB980_0x1fb980");
#endif

    switch (ctx->pc) {
        case 0x1fb9b4u: goto label_1fb9b4;
        case 0x1fb9d0u: goto label_1fb9d0;
        case 0x1fb9e4u: goto label_1fb9e4;
        case 0x1fb9fcu: goto label_1fb9fc;
        case 0x1fba14u: goto label_1fba14;
        case 0x1fba2cu: goto label_1fba2c;
        case 0x1fba3cu: goto label_1fba3c;
        case 0x1fba4cu: goto label_1fba4c;
        case 0x1fba60u: goto label_1fba60;
        case 0x1fba70u: goto label_1fba70;
        case 0x1fba84u: goto label_1fba84;
        case 0x1fba94u: goto label_1fba94;
        case 0x1fbaa8u: goto label_1fbaa8;
        case 0x1fbab8u: goto label_1fbab8;
        case 0x1fbb10u: goto label_1fbb10;
        default: break;
    }

    ctx->pc = 0x1fb980u;

    // 0x1fb980: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1fb980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1fb984: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1fb984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x1fb988: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1fb988u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1fb98c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1fb98cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1fb990: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1fb990u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1fb994: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1fb994u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1fb998: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1fb998u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1fb99c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1fb99cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1fb9a0: 0xafa40080  sw          $a0, 0x80($sp)
    ctx->pc = 0x1fb9a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 4));
    // 0x1fb9a4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1fb9a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fb9a8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1fb9a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fb9ac: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x1FB9ACu;
    {
        const bool branch_taken_0x1fb9ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fb9ac) {
            ctx->pc = 0x1FBACCu;
            goto label_1fbacc;
        }
    }
    ctx->pc = 0x1FB9B4u;
label_1fb9b4:
    // 0x1fb9b4: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x1fb9b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1fb9b8: 0x27a5007c  addiu       $a1, $sp, 0x7C
    ctx->pc = 0x1fb9b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    // 0x1fb9bc: 0x27a60078  addiu       $a2, $sp, 0x78
    ctx->pc = 0x1fb9bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
    // 0x1fb9c0: 0x27a70074  addiu       $a3, $sp, 0x74
    ctx->pc = 0x1fb9c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 116));
    // 0x1fb9c4: 0x27a80070  addiu       $t0, $sp, 0x70
    ctx->pc = 0x1fb9c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1fb9c8: 0xc07f484  jal         func_1FD210
    ctx->pc = 0x1FB9C8u;
    SET_GPR_U32(ctx, 31, 0x1FB9D0u);
    ctx->pc = 0x1FD210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD210u, 0x1FB9C8u, 0x1FB9D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FB9D0u;
label_1fb9d0:
    // 0x1fb9d0: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x1fb9d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1fb9d4: 0x8fa5007c  lw          $a1, 0x7C($sp)
    ctx->pc = 0x1fb9d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x1fb9d8: 0x8fa60078  lw          $a2, 0x78($sp)
    ctx->pc = 0x1fb9d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1fb9dc: 0xc07eed8  jal         func_1FBB60
    ctx->pc = 0x1FB9DCu;
    SET_GPR_U32(ctx, 31, 0x1FB9E4u);
    ctx->pc = 0x1FBB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBB60u, 0x1FB9DCu, 0x1FB9E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FB9E4u;
label_1fb9e4:
    // 0x1fb9e4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1fb9e4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fb9e8: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x1fb9e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1fb9ec: 0x8fa5007c  lw          $a1, 0x7C($sp)
    ctx->pc = 0x1fb9ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x1fb9f0: 0x8fa60078  lw          $a2, 0x78($sp)
    ctx->pc = 0x1fb9f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1fb9f4: 0xc07eeec  jal         func_1FBBB0
    ctx->pc = 0x1FB9F4u;
    SET_GPR_U32(ctx, 31, 0x1FB9FCu);
    ctx->pc = 0x1FBBB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBBB0u, 0x1FB9F4u, 0x1FB9FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FB9FCu;
label_1fb9fc:
    // 0x1fb9fc: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x1fb9fcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fba00: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x1fba00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1fba04: 0x8fa50074  lw          $a1, 0x74($sp)
    ctx->pc = 0x1fba04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
    // 0x1fba08: 0x8fa60070  lw          $a2, 0x70($sp)
    ctx->pc = 0x1fba08u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1fba0c: 0xc07eed8  jal         func_1FBB60
    ctx->pc = 0x1FBA0Cu;
    SET_GPR_U32(ctx, 31, 0x1FBA14u);
    ctx->pc = 0x1FBB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBB60u, 0x1FBA0Cu, 0x1FBA14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FBA14u;
label_1fba14:
    // 0x1fba14: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1fba14u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fba18: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x1fba18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1fba1c: 0x8fa50074  lw          $a1, 0x74($sp)
    ctx->pc = 0x1fba1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
    // 0x1fba20: 0x8fa60070  lw          $a2, 0x70($sp)
    ctx->pc = 0x1fba20u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1fba24: 0xc07eeec  jal         func_1FBBB0
    ctx->pc = 0x1FBA24u;
    SET_GPR_U32(ctx, 31, 0x1FBA2Cu);
    ctx->pc = 0x1FBBB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBBB0u, 0x1FBA24u, 0x1FBA2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FBA2Cu;
label_1fba2c:
    // 0x1fba2c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1fba2cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fba30: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x1fba30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1fba34: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1FBA34u;
    SET_GPR_U32(ctx, 31, 0x1FBA3Cu);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1FBA34u, 0x1FBA3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FBA3Cu;
label_1fba3c:
    // 0x1fba3c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1fba3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fba40: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1fba40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fba44: 0xc08c9a8  jal         func_2326A0
    ctx->pc = 0x1FBA44u;
    SET_GPR_U32(ctx, 31, 0x1FBA4Cu);
    ctx->pc = 0x2326A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2326A0u, 0x1FBA44u, 0x1FBA4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FBA4Cu;
label_1fba4c:
    // 0x1fba4c: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x1FBA4Cu;
    {
        const bool branch_taken_0x1fba4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fba4c) {
            ctx->pc = 0x1FBAC8u;
            goto label_1fbac8;
        }
    }
    ctx->pc = 0x1FBA54u;
    // 0x1fba54: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x1fba54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1fba58: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1FBA58u;
    SET_GPR_U32(ctx, 31, 0x1FBA60u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1FBA58u, 0x1FBA60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FBA60u;
label_1fba60:
    // 0x1fba60: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1fba60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fba64: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1fba64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fba68: 0xc08c9a8  jal         func_2326A0
    ctx->pc = 0x1FBA68u;
    SET_GPR_U32(ctx, 31, 0x1FBA70u);
    ctx->pc = 0x2326A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2326A0u, 0x1FBA68u, 0x1FBA70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FBA70u;
label_1fba70:
    // 0x1fba70: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1FBA70u;
    {
        const bool branch_taken_0x1fba70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fba70) {
            ctx->pc = 0x1FBAC8u;
            goto label_1fbac8;
        }
    }
    ctx->pc = 0x1FBA78u;
    // 0x1fba78: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x1fba78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1fba7c: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1FBA7Cu;
    SET_GPR_U32(ctx, 31, 0x1FBA84u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1FBA7Cu, 0x1FBA84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FBA84u;
label_1fba84:
    // 0x1fba84: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1fba84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fba88: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1fba88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fba8c: 0xc08c9a8  jal         func_2326A0
    ctx->pc = 0x1FBA8Cu;
    SET_GPR_U32(ctx, 31, 0x1FBA94u);
    ctx->pc = 0x2326A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2326A0u, 0x1FBA8Cu, 0x1FBA94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FBA94u;
label_1fba94:
    // 0x1fba94: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1FBA94u;
    {
        const bool branch_taken_0x1fba94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fba94) {
            ctx->pc = 0x1FBAC8u;
            goto label_1fbac8;
        }
    }
    ctx->pc = 0x1FBA9Cu;
    // 0x1fba9c: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x1fba9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1fbaa0: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1FBAA0u;
    SET_GPR_U32(ctx, 31, 0x1FBAA8u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1FBAA0u, 0x1FBAA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FBAA8u;
label_1fbaa8:
    // 0x1fbaa8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1fbaa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fbaac: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1fbaacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fbab0: 0xc08c9a8  jal         func_2326A0
    ctx->pc = 0x1FBAB0u;
    SET_GPR_U32(ctx, 31, 0x1FBAB8u);
    ctx->pc = 0x2326A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2326A0u, 0x1FBAB0u, 0x1FBAB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FBAB8u;
label_1fbab8:
    // 0x1fbab8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FBAB8u;
    {
        const bool branch_taken_0x1fbab8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fbab8) {
            ctx->pc = 0x1FBAC8u;
            goto label_1fbac8;
        }
    }
    ctx->pc = 0x1FBAC0u;
    // 0x1fbac0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1fbac0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fbac4: 0x307000ff  andi        $s0, $v1, 0xFF
    ctx->pc = 0x1fbac4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_1fbac8:
    // 0x1fbac8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1fbac8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1fbacc:
    // 0x1fbacc: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FBACCu;
    {
        const bool branch_taken_0x1fbacc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fbacc) {
            ctx->pc = 0x1FBAE0u;
            goto label_1fbae0;
        }
    }
    ctx->pc = 0x1FBAD4u;
    // 0x1fbad4: 0x2e23000a  sltiu       $v1, $s1, 0xA
    ctx->pc = 0x1fbad4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x1fbad8: 0x1460ffb6  bnez        $v1, . + 4 + (-0x4A << 2)
    ctx->pc = 0x1FBAD8u;
    {
        const bool branch_taken_0x1fbad8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fbad8) {
            ctx->pc = 0x1FB9B4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fb9b4;
        }
    }
    ctx->pc = 0x1FBAE0u;
label_1fbae0:
    // 0x1fbae0: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x1fbae0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x1fbae4: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x1FBAE4u;
    {
        const bool branch_taken_0x1fbae4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fbae4) {
            ctx->pc = 0x1FBB2Cu;
            goto label_1fbb2c;
        }
    }
    ctx->pc = 0x1FBAECu;
    // 0x1fbaec: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x1fbaecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1fbaf0: 0x8fa5007c  lw          $a1, 0x7C($sp)
    ctx->pc = 0x1fbaf0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x1fbaf4: 0x8fa60078  lw          $a2, 0x78($sp)
    ctx->pc = 0x1fbaf4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1fbaf8: 0x8fa70074  lw          $a3, 0x74($sp)
    ctx->pc = 0x1fbaf8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
    // 0x1fbafc: 0x8fa80070  lw          $t0, 0x70($sp)
    ctx->pc = 0x1fbafcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1fbb00: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x1fbb00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x1fbb04: 0xc44cbf6c  lwc1        $f12, -0x4094($v0)
    ctx->pc = 0x1fbb04u;
    { uint32_t bits = FAST_READ32(0x60BF6Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1fbb08: 0xc07f078  jal         func_1FC1E0
    ctx->pc = 0x1FBB08u;
    SET_GPR_U32(ctx, 31, 0x1FBB10u);
    ctx->pc = 0x1FC1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC1E0u, 0x1FBB08u, 0x1FBB10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FBB10u;
label_1fbb10:
    // 0x1fbb10: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x1fbb10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1fbb14: 0xc460004c  lwc1        $f0, 0x4C($v1)
    ctx->pc = 0x1fbb14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fbb18: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x1fbb18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1fbb1c: 0xe4600130  swc1        $f0, 0x130($v1)
    ctx->pc = 0x1fbb1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 304), bits); }
    // 0x1fbb20: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1fbb20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fbb24: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x1fbb24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1fbb28: 0xa0640120  sb          $a0, 0x120($v1)
    ctx->pc = 0x1fbb28u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 288), (uint8_t)GPR_U32(ctx, 4));
label_1fbb2c:
    // 0x1fbb2c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1fbb2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1fbb30: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1fbb30u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1fbb34: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1fbb34u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1fbb38: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1fbb38u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1fbb3c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1fbb3cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fbb40: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1fbb40u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fbb44: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1fbb44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fbb48: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x1fbb48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1fbb4c: 0x3e00008  jr          $ra
    ctx->pc = 0x1FBB4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FBB4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FBB54u;
    // 0x1fbb54: 0x0  nop
    ctx->pc = 0x1fbb54u;
    // NOP
    // 0x1fbb58: 0x0  nop
    ctx->pc = 0x1fbb58u;
    // NOP
    // 0x1fbb5c: 0x0  nop
    ctx->pc = 0x1fbb5cu;
    // NOP
    ctx->pc = 0x1fbb60u;
}
