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

// Function: sub_00322998
// Address: 0x322998 - 0x322ac8
void sub_00322998_0x322998(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00322998_0x322998");
#endif

    switch (ctx->pc) {
        case 0x3229d0u: goto label_3229d0;
        case 0x3229f0u: goto label_3229f0;
        case 0x322a18u: goto label_322a18;
        case 0x322a40u: goto label_322a40;
        case 0x322a68u: goto label_322a68;
        case 0x322a90u: goto label_322a90;
        default: break;
    }

    ctx->pc = 0x322998u;

    // 0x322998: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x322998u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x32299c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x32299cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x3229a0: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x3229a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x3229a4: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x3229a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x3229a8: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x3229a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x3229ac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3229acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3229b0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3229b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3229b4: 0x8c920000  lw          $s2, 0x0($a0)
    ctx->pc = 0x3229b4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3229b8: 0x1240003b  beqz        $s2, . + 4 + (0x3B << 2)
    ctx->pc = 0x3229B8u;
    {
        const bool branch_taken_0x3229b8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x3229BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3229B8u;
        // 0x3229bc: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3229b8) {
            ctx->pc = 0x322AA8u;
            goto label_322aa8;
        }
    }
    ctx->pc = 0x3229C0u;
    // 0x3229c0: 0x2411004c  addiu       $s1, $zero, 0x4C
    ctx->pc = 0x3229c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x3229c4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x3229c4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3229c8: 0x26500018  addiu       $s0, $s2, 0x18
    ctx->pc = 0x3229c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
    // 0x3229cc: 0x0  nop
    ctx->pc = 0x3229ccu;
    // NOP
label_3229d0:
    // 0x3229d0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x3229d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3229d4: 0x50800009  beql        $a0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x3229D4u;
    {
        const bool branch_taken_0x3229d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3229d4) {
            ctx->pc = 0x3229D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3229D4u;
            // 0x3229d8: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3229FCu;
            goto label_3229fc;
        }
    }
    ctx->pc = 0x3229DCu;
    // 0x3229dc: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x3229dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x3229e0: 0x52620006  beql        $s3, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3229E0u;
    {
        const bool branch_taken_0x3229e0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        if (branch_taken_0x3229e0) {
            ctx->pc = 0x3229E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3229E0u;
            // 0x3229e4: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3229FCu;
            goto label_3229fc;
        }
    }
    ctx->pc = 0x3229E8u;
    // 0x3229e8: 0xc0e2ea2  jal         func_38BA88
    ctx->pc = 0x3229E8u;
    SET_GPR_U32(ctx, 31, 0x3229F0u);
    ctx->pc = 0x38BA88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38BA88u, 0x3229E8u, 0x3229F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3229F0u;
label_3229f0:
    // 0x3229f0: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x3229f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x3229f4: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x3229f4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x3229f8: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x3229f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3229fc:
    // 0x3229fc: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3229FCu;
    {
        const bool branch_taken_0x3229fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x322A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3229FCu;
        // 0x322a00: 0x26630001  addiu       $v1, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3229fc) {
            ctx->pc = 0x322A20u;
            goto label_322a20;
        }
    }
    ctx->pc = 0x322A04u;
    // 0x322a04: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x322a04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x322a08: 0x50620006  beql        $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x322A08u;
    {
        const bool branch_taken_0x322a08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x322a08) {
            ctx->pc = 0x322A0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x322A08u;
            // 0x322a0c: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x322A24u;
            goto label_322a24;
        }
    }
    ctx->pc = 0x322A10u;
    // 0x322a10: 0xc0e2ea2  jal         func_38BA88
    ctx->pc = 0x322A10u;
    SET_GPR_U32(ctx, 31, 0x322A18u);
    ctx->pc = 0x38BA88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38BA88u, 0x322A10u, 0x322A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322A18u;
label_322a18:
    // 0x322a18: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x322a18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x322a1c: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x322a1cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_322a20:
    // 0x322a20: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x322a20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_322a24:
    // 0x322a24: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x322A24u;
    {
        const bool branch_taken_0x322a24 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x322A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322A24u;
        // 0x322a28: 0x26630002  addiu       $v1, $s3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322a24) {
            ctx->pc = 0x322A48u;
            goto label_322a48;
        }
    }
    ctx->pc = 0x322A2Cu;
    // 0x322a2c: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x322a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x322a30: 0x50620006  beql        $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x322A30u;
    {
        const bool branch_taken_0x322a30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x322a30) {
            ctx->pc = 0x322A34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x322A30u;
            // 0x322a34: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x322A4Cu;
            goto label_322a4c;
        }
    }
    ctx->pc = 0x322A38u;
    // 0x322a38: 0xc0e2ea2  jal         func_38BA88
    ctx->pc = 0x322A38u;
    SET_GPR_U32(ctx, 31, 0x322A40u);
    ctx->pc = 0x38BA88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38BA88u, 0x322A38u, 0x322A40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322A40u;
label_322a40:
    // 0x322a40: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x322a40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x322a44: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x322a44u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_322a48:
    // 0x322a48: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x322a48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_322a4c:
    // 0x322a4c: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x322A4Cu;
    {
        const bool branch_taken_0x322a4c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x322A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322A4Cu;
        // 0x322a50: 0x26630003  addiu       $v1, $s3, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322a4c) {
            ctx->pc = 0x322A70u;
            goto label_322a70;
        }
    }
    ctx->pc = 0x322A54u;
    // 0x322a54: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x322a54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x322a58: 0x50620006  beql        $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x322A58u;
    {
        const bool branch_taken_0x322a58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x322a58) {
            ctx->pc = 0x322A5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x322A58u;
            // 0x322a5c: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x322A74u;
            goto label_322a74;
        }
    }
    ctx->pc = 0x322A60u;
    // 0x322a60: 0xc0e2ea2  jal         func_38BA88
    ctx->pc = 0x322A60u;
    SET_GPR_U32(ctx, 31, 0x322A68u);
    ctx->pc = 0x38BA88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38BA88u, 0x322A60u, 0x322A68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322A68u;
label_322a68:
    // 0x322a68: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x322a68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x322a6c: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x322a6cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_322a70:
    // 0x322a70: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x322a70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_322a74:
    // 0x322a74: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x322A74u;
    {
        const bool branch_taken_0x322a74 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x322A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322A74u;
        // 0x322a78: 0x26630004  addiu       $v1, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322a74) {
            ctx->pc = 0x322A98u;
            goto label_322a98;
        }
    }
    ctx->pc = 0x322A7Cu;
    // 0x322a7c: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x322a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x322a80: 0x50620006  beql        $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x322A80u;
    {
        const bool branch_taken_0x322a80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x322a80) {
            ctx->pc = 0x322A84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x322A80u;
            // 0x322a84: 0x26730005  addiu       $s3, $s3, 0x5 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x322A9Cu;
            goto label_322a9c;
        }
    }
    ctx->pc = 0x322A88u;
    // 0x322a88: 0xc0e2ea2  jal         func_38BA88
    ctx->pc = 0x322A88u;
    SET_GPR_U32(ctx, 31, 0x322A90u);
    ctx->pc = 0x38BA88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38BA88u, 0x322A88u, 0x322A90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322A90u;
label_322a90:
    // 0x322a90: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x322a90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x322a94: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x322a94u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_322a98:
    // 0x322a98: 0x26730005  addiu       $s3, $s3, 0x5
    ctx->pc = 0x322a98u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 5));
label_322a9c:
    // 0x322a9c: 0x2a62000a  slti        $v0, $s3, 0xA
    ctx->pc = 0x322a9cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x322aa0: 0x1440ffcb  bnez        $v0, . + 4 + (-0x35 << 2)
    ctx->pc = 0x322AA0u;
    {
        const bool branch_taken_0x322aa0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x322AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322AA0u;
        // 0x322aa4: 0x26100014  addiu       $s0, $s0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322aa0) {
            ctx->pc = 0x3229D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3229d0;
        }
    }
    ctx->pc = 0x322AA8u;
label_322aa8:
    // 0x322aa8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x322aa8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x322aac: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x322aacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x322ab0: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x322ab0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x322ab4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x322ab4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x322ab8: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x322ab8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x322abc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x322abcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x322ac0: 0x3e00008  jr          $ra
    ctx->pc = 0x322AC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x322AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322AC0u;
        // 0x322ac4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x322AC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x322AC8u;
}
