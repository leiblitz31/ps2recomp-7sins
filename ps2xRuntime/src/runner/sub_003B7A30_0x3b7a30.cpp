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

// Function: sub_003B7A30
// Address: 0x3b7a30 - 0x3b7af8
void sub_003B7A30_0x3b7a30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B7A30_0x3b7a30");
#endif

    switch (ctx->pc) {
        case 0x3b7a64u: goto label_3b7a64;
        case 0x3b7a70u: goto label_3b7a70;
        case 0x3b7a88u: goto label_3b7a88;
        case 0x3b7a98u: goto label_3b7a98;
        case 0x3b7aa8u: goto label_3b7aa8;
        case 0x3b7ad0u: goto label_3b7ad0;
        default: break;
    }

    ctx->pc = 0x3b7a30u;

    // 0x3b7a30: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3b7a30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x3b7a34: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3b7a34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x3b7a38: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x3b7a38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x3b7a3c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3b7a3cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b7a40: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x3b7a40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x3b7a44: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x3b7a44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x3b7a48: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x3b7a48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x3b7a4c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3b7a4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3b7a50: 0x8e4400b8  lw          $a0, 0xB8($s2)
    ctx->pc = 0x3b7a50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 184)));
    // 0x3b7a54: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3B7A54u;
    {
        const bool branch_taken_0x3b7a54 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B7A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7A54u;
        // 0x3b7a58: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b7a54) {
            ctx->pc = 0x3B7A68u;
            goto label_3b7a68;
        }
    }
    ctx->pc = 0x3B7A5Cu;
    // 0x3b7a5c: 0xc103684  jal         func_40DA10
    ctx->pc = 0x3B7A5Cu;
    SET_GPR_U32(ctx, 31, 0x3B7A64u);
    ctx->pc = 0x40DA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DA10u, 0x3B7A5Cu, 0x3B7A64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B7A64u;
label_3b7a64:
    // 0x3b7a64: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3b7a64u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b7a68:
    // 0x3b7a68: 0xc1036d2  jal         func_40DB48
    ctx->pc = 0x3B7A68u;
    SET_GPR_U32(ctx, 31, 0x3B7A70u);
    ctx->pc = 0x3B7A6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B7A68u;
    // 0x3b7a6c: 0x8e4400b0  lw          $a0, 0xB0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 176)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB48u, 0x3B7A68u, 0x3B7A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B7A70u;
label_3b7a70:
    // 0x3b7a70: 0x8e4300b4  lw          $v1, 0xB4($s2)
    ctx->pc = 0x3b7a70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 180)));
    // 0x3b7a74: 0x24050110  addiu       $a1, $zero, 0x110
    ctx->pc = 0x3b7a74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 272));
    // 0x3b7a78: 0x8e4400b0  lw          $a0, 0xB0($s2)
    ctx->pc = 0x3b7a78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 176)));
    // 0x3b7a7c: 0x651818  mult        $v1, $v1, $a1
    ctx->pc = 0x3b7a7cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x3b7a80: 0xc1036d2  jal         func_40DB48
    ctx->pc = 0x3B7A80u;
    SET_GPR_U32(ctx, 31, 0x3B7A88u);
    ctx->pc = 0x3B7A84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B7A80u;
    // 0x3b7a84: 0x438821  addu        $s1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB48u, 0x3B7A80u, 0x3B7A88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B7A88u;
label_3b7a88:
    // 0x3b7a88: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3b7a88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b7a8c: 0x1211000c  beq         $s0, $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x3B7A8Cu;
    {
        const bool branch_taken_0x3b7a8c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 17));
        ctx->pc = 0x3B7A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7A8Cu;
        // 0x3b7a90: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b7a8c) {
            ctx->pc = 0x3B7AC0u;
            goto label_3b7ac0;
        }
    }
    ctx->pc = 0x3B7A94u;
    // 0x3b7a94: 0x0  nop
    ctx->pc = 0x3b7a94u;
    // NOP
label_3b7a98:
    // 0x3b7a98: 0x12600006  beqz        $s3, . + 4 + (0x6 << 2)
    ctx->pc = 0x3B7A98u;
    {
        const bool branch_taken_0x3b7a98 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B7A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7A98u;
        // 0x3b7a9c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b7a98) {
            ctx->pc = 0x3B7AB4u;
            goto label_3b7ab4;
        }
    }
    ctx->pc = 0x3B7AA0u;
    // 0x3b7aa0: 0xc0ed2d0  jal         func_3B4B40
    ctx->pc = 0x3B7AA0u;
    SET_GPR_U32(ctx, 31, 0x3B7AA8u);
    ctx->pc = 0x3B7AA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B7AA0u;
    // 0x3b7aa4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B4B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B4B40u, 0x3B7AA0u, 0x3B7AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B7AA8u;
label_3b7aa8:
    // 0x3b7aa8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x3b7aa8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b7aac: 0x282180b  movn        $v1, $s4, $v0
    ctx->pc = 0x3b7aacu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 20));
    // 0x3b7ab0: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x3b7ab0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_3b7ab4:
    // 0x3b7ab4: 0x26100110  addiu       $s0, $s0, 0x110
    ctx->pc = 0x3b7ab4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
    // 0x3b7ab8: 0x1611fff7  bne         $s0, $s1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x3B7AB8u;
    {
        const bool branch_taken_0x3b7ab8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 17));
        ctx->pc = 0x3B7ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7AB8u;
        // 0x3b7abc: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b7ab8) {
            ctx->pc = 0x3B7A98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b7a98;
        }
    }
    ctx->pc = 0x3B7AC0u;
label_3b7ac0:
    // 0x3b7ac0: 0x12600004  beqz        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x3B7AC0u;
    {
        const bool branch_taken_0x3b7ac0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B7AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7AC0u;
        // 0x3b7ac4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b7ac0) {
            ctx->pc = 0x3B7AD4u;
            goto label_3b7ad4;
        }
    }
    ctx->pc = 0x3B7AC8u;
    // 0x3b7ac8: 0xc103684  jal         func_40DA10
    ctx->pc = 0x3B7AC8u;
    SET_GPR_U32(ctx, 31, 0x3B7AD0u);
    ctx->pc = 0x3B7ACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B7AC8u;
    // 0x3b7acc: 0x8e4400b0  lw          $a0, 0xB0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 176)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DA10u, 0x3B7AC8u, 0x3B7AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B7AD0u;
label_3b7ad0:
    // 0x3b7ad0: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x3b7ad0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_3b7ad4:
    // 0x3b7ad4: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x3b7ad4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3b7ad8: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x3b7ad8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3b7adc: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3b7adcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3b7ae0: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x3b7ae0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3b7ae4: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x3b7ae4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b7ae8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3b7ae8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b7aec: 0x3e00008  jr          $ra
    ctx->pc = 0x3B7AECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B7AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7AECu;
        // 0x3b7af0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B7AECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B7AF4u;
    // 0x3b7af4: 0x0  nop
    ctx->pc = 0x3b7af4u;
    // NOP
    ctx->pc = 0x3b7af8u;
}
