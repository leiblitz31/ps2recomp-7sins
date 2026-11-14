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

// Function: sub_00355A08
// Address: 0x355a08 - 0x355b28
void sub_00355A08_0x355a08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00355A08_0x355a08");
#endif

    switch (ctx->pc) {
        case 0x355a30u: goto label_355a30;
        case 0x355a44u: goto label_355a44;
        case 0x355a58u: goto label_355a58;
        case 0x355a6cu: goto label_355a6c;
        case 0x355a84u: goto label_355a84;
        case 0x355a9cu: goto label_355a9c;
        case 0x355aa4u: goto label_355aa4;
        case 0x355ac0u: goto label_355ac0;
        case 0x355ad8u: goto label_355ad8;
        case 0x355ae4u: goto label_355ae4;
        case 0x355af4u: goto label_355af4;
        default: break;
    }

    ctx->pc = 0x355a08u;

    // 0x355a08: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x355a08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x355a0c: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x355a0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x355a10: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x355a10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x355a14: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x355a14u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x355a18: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x355a18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x355a1c: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x355a1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x355a20: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x355a20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x355a24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x355a24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x355a28: 0xc0d54fa  jal         func_3553E8
    ctx->pc = 0x355A28u;
    SET_GPR_U32(ctx, 31, 0x355A30u);
    ctx->pc = 0x355A2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x355A28u;
    // 0x355a2c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3553E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3553E8u, 0x355A28u, 0x355A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x355A30u;
label_355a30:
    // 0x355a30: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x355a30u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x355a34: 0x12600032  beqz        $s3, . + 4 + (0x32 << 2)
    ctx->pc = 0x355A34u;
    {
        const bool branch_taken_0x355a34 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x355A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x355A34u;
        // 0x355a38: 0xae930004  sw          $s3, 0x4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x355a34) {
            ctx->pc = 0x355B00u;
            goto label_355b00;
        }
    }
    ctx->pc = 0x355A3Cu;
    // 0x355a3c: 0xc1116a2  jal         func_445A88
    ctx->pc = 0x355A3Cu;
    SET_GPR_U32(ctx, 31, 0x355A44u);
    ctx->pc = 0x445A88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x445A88u, 0x355A3Cu, 0x355A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x355A44u;
label_355a44:
    // 0x355a44: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x355a44u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x355a48: 0x1240002b  beqz        $s2, . + 4 + (0x2B << 2)
    ctx->pc = 0x355A48u;
    {
        const bool branch_taken_0x355a48 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x355A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x355A48u;
        // 0x355a4c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x355a48) {
            ctx->pc = 0x355AF8u;
            goto label_355af8;
        }
    }
    ctx->pc = 0x355A50u;
    // 0x355a50: 0xc112074  jal         func_4481D0
    ctx->pc = 0x355A50u;
    SET_GPR_U32(ctx, 31, 0x355A58u);
    ctx->pc = 0x355A54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x355A50u;
    // 0x355a54: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4481D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4481D0u, 0x355A50u, 0x355A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x355A58u;
label_355a58:
    // 0x355a58: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x355a58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x355a5c: 0x12000023  beqz        $s0, . + 4 + (0x23 << 2)
    ctx->pc = 0x355A5Cu;
    {
        const bool branch_taken_0x355a5c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x355a5c) {
            ctx->pc = 0x355AECu;
            goto label_355aec;
        }
    }
    ctx->pc = 0x355A64u;
    // 0x355a64: 0xc0e855c  jal         func_3A1570
    ctx->pc = 0x355A64u;
    SET_GPR_U32(ctx, 31, 0x355A6Cu);
    ctx->pc = 0x3A1570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1570u, 0x355A64u, 0x355A6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x355A6Cu;
label_355a6c:
    // 0x355a6c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x355a6cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x355a70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x355a70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x355a74: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x355a74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x355a78: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x355a78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x355a7c: 0xc1120d8  jal         func_448360
    ctx->pc = 0x355A7Cu;
    SET_GPR_U32(ctx, 31, 0x355A84u);
    ctx->pc = 0x355A80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x355A7Cu;
    // 0x355a80: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x448360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x448360u, 0x355A7Cu, 0x355A84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x355A84u;
label_355a84:
    // 0x355a84: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x355a84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x355a88: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x355a88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x355a8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x355a8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x355a90: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x355a90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x355a94: 0xc1125d8  jal         func_449760
    ctx->pc = 0x355A94u;
    SET_GPR_U32(ctx, 31, 0x355A9Cu);
    ctx->pc = 0x355A98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x355A94u;
    // 0x355a98: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x449760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x449760u, 0x355A94u, 0x355A9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x355A9Cu;
label_355a9c:
    // 0x355a9c: 0xc111dea  jal         func_4477A8
    ctx->pc = 0x355A9Cu;
    SET_GPR_U32(ctx, 31, 0x355AA4u);
    ctx->pc = 0x355AA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x355A9Cu;
    // 0x355aa0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4477A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4477A8u, 0x355A9Cu, 0x355AA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x355AA4u;
label_355aa4:
    // 0x355aa4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x355aa4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x355aa8: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
    ctx->pc = 0x355AA8u;
    {
        const bool branch_taken_0x355aa8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x355AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x355AA8u;
        // 0x355aac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x355aa8) {
            ctx->pc = 0x355AECu;
            goto label_355aec;
        }
    }
    ctx->pc = 0x355AB0u;
    // 0x355ab0: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x355ab0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x355ab4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x355ab4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x355ab8: 0xc1125d8  jal         func_449760
    ctx->pc = 0x355AB8u;
    SET_GPR_U32(ctx, 31, 0x355AC0u);
    ctx->pc = 0x355ABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x355AB8u;
    // 0x355abc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x449760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x449760u, 0x355AB8u, 0x355AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x355AC0u;
label_355ac0:
    // 0x355ac0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x355ac0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x355ac4: 0x3c060035  lui         $a2, 0x35
    ctx->pc = 0x355ac4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)53 << 16));
    // 0x355ac8: 0x24c65670  addiu       $a2, $a2, 0x5670
    ctx->pc = 0x355ac8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 22128));
    // 0x355acc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x355accu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x355ad0: 0xc0e8560  jal         func_3A1580
    ctx->pc = 0x355AD0u;
    SET_GPR_U32(ctx, 31, 0x355AD8u);
    ctx->pc = 0x355AD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x355AD0u;
    // 0x355ad4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1580u, 0x355AD0u, 0x355AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x355AD8u;
label_355ad8:
    // 0x355ad8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x355ad8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x355adc: 0xc0e8576  jal         func_3A15D8
    ctx->pc = 0x355ADCu;
    SET_GPR_U32(ctx, 31, 0x355AE4u);
    ctx->pc = 0x355AE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x355ADCu;
    // 0x355ae0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A15D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A15D8u, 0x355ADCu, 0x355AE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x355AE4u;
label_355ae4:
    // 0x355ae4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x355AE4u;
    {
        const bool branch_taken_0x355ae4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x355AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x355AE4u;
        // 0x355ae8: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x355ae4) {
            ctx->pc = 0x355AF8u;
            goto label_355af8;
        }
    }
    ctx->pc = 0x355AECu;
label_355aec:
    // 0x355aec: 0xc1116c6  jal         func_445B18
    ctx->pc = 0x355AECu;
    SET_GPR_U32(ctx, 31, 0x355AF4u);
    ctx->pc = 0x355AF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x355AECu;
    // 0x355af0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x445B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x445B18u, 0x355AECu, 0x355AF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x355AF4u;
label_355af4:
    // 0x355af4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x355af4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_355af8:
    // 0x355af8: 0xae820008  sw          $v0, 0x8($s4)
    ctx->pc = 0x355af8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 2));
    // 0x355afc: 0x2802b  sltu        $s0, $zero, $v0
    ctx->pc = 0x355afcu;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_355b00:
    // 0x355b00: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x355b00u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x355b04: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x355b04u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x355b08: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x355b08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x355b0c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x355b0cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x355b10: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x355b10u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x355b14: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x355b14u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x355b18: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x355b18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x355b1c: 0x3e00008  jr          $ra
    ctx->pc = 0x355B1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x355B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x355B1Cu;
        // 0x355b20: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x355B1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x355B24u;
    // 0x355b24: 0x0  nop
    ctx->pc = 0x355b24u;
    // NOP
    ctx->pc = 0x355b28u;
}
