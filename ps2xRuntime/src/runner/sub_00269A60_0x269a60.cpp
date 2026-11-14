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

// Function: sub_00269A60
// Address: 0x269a60 - 0x269b80
void sub_00269A60_0x269a60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00269A60_0x269a60");
#endif

    switch (ctx->pc) {
        case 0x269a84u: goto label_269a84;
        case 0x269a90u: goto label_269a90;
        case 0x269aa8u: goto label_269aa8;
        case 0x269ab4u: goto label_269ab4;
        case 0x269accu: goto label_269acc;
        case 0x269ae4u: goto label_269ae4;
        case 0x269b04u: goto label_269b04;
        case 0x269b14u: goto label_269b14;
        case 0x269b28u: goto label_269b28;
        case 0x269b38u: goto label_269b38;
        case 0x269b50u: goto label_269b50;
        default: break;
    }

    ctx->pc = 0x269a60u;

    // 0x269a60: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x269a60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x269a64: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x269a64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x269a68: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x269a68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x269a6c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x269a6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x269a70: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x269a70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x269a74: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x269a74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x269a78: 0x8c440068  lw          $a0, 0x68($v0)
    ctx->pc = 0x269a78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 104)));
    // 0x269a7c: 0xc09a690  jal         func_269A40
    ctx->pc = 0x269A7Cu;
    SET_GPR_U32(ctx, 31, 0x269A84u);
    ctx->pc = 0x269A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x269A40u, 0x269A7Cu, 0x269A84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269A84u;
label_269a84:
    // 0x269a84: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x269a84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x269a88: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x269A88u;
    {
        const bool branch_taken_0x269a88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x269a88) {
            ctx->pc = 0x269ABCu;
            goto label_269abc;
        }
    }
    ctx->pc = 0x269A90u;
label_269a90:
    // 0x269a90: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x269a90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x269a94: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x269A94u;
    {
        const bool branch_taken_0x269a94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x269a94) {
            ctx->pc = 0x269AB8u;
            goto label_269ab8;
        }
    }
    ctx->pc = 0x269A9Cu;
    // 0x269a9c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x269a9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x269aa0: 0xc09a680  jal         func_269A00
    ctx->pc = 0x269AA0u;
    SET_GPR_U32(ctx, 31, 0x269AA8u);
    ctx->pc = 0x269A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x269A00u, 0x269AA0u, 0x269AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269AA8u;
label_269aa8:
    // 0x269aa8: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x269aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x269aac: 0xc119c5c  jal         func_467170
    ctx->pc = 0x269AACu;
    SET_GPR_U32(ctx, 31, 0x269AB4u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x269AACu, 0x269AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269AB4u;
label_269ab4:
    // 0x269ab4: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x269ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_269ab8:
    // 0x269ab8: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x269ab8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_269abc:
    // 0x269abc: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x269abcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x269ac0: 0x8c440068  lw          $a0, 0x68($v0)
    ctx->pc = 0x269ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 104)));
    // 0x269ac4: 0xc09a610  jal         func_269840
    ctx->pc = 0x269AC4u;
    SET_GPR_U32(ctx, 31, 0x269ACCu);
    ctx->pc = 0x269840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x269840u, 0x269AC4u, 0x269ACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269ACCu;
label_269acc:
    // 0x269acc: 0x1602fff0  bne         $s0, $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x269ACCu;
    {
        const bool branch_taken_0x269acc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x269acc) {
            ctx->pc = 0x269A90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_269a90;
        }
    }
    ctx->pc = 0x269AD4u;
    // 0x269ad4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x269ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x269ad8: 0x8c440068  lw          $a0, 0x68($v0)
    ctx->pc = 0x269ad8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 104)));
    // 0x269adc: 0xc09a6e0  jal         func_269B80
    ctx->pc = 0x269ADCu;
    SET_GPR_U32(ctx, 31, 0x269AE4u);
    ctx->pc = 0x269B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x269B80u, 0x269ADCu, 0x269AE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269AE4u;
label_269ae4:
    // 0x269ae4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x269ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x269ae8: 0x8c420068  lw          $v0, 0x68($v0)
    ctx->pc = 0x269ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 104)));
    // 0x269aec: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x269AECu;
    {
        const bool branch_taken_0x269aec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x269aec) {
            ctx->pc = 0x269B1Cu;
            goto label_269b1c;
        }
    }
    ctx->pc = 0x269AF4u;
    // 0x269af4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x269af4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x269af8: 0x8c440068  lw          $a0, 0x68($v0)
    ctx->pc = 0x269af8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 104)));
    // 0x269afc: 0xc09a308  jal         func_268C20
    ctx->pc = 0x269AFCu;
    SET_GPR_U32(ctx, 31, 0x269B04u);
    ctx->pc = 0x268C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x268C20u, 0x269AFCu, 0x269B04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269B04u;
label_269b04:
    // 0x269b04: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x269b04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x269b08: 0x8c440068  lw          $a0, 0x68($v0)
    ctx->pc = 0x269b08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 104)));
    // 0x269b0c: 0xc119c5c  jal         func_467170
    ctx->pc = 0x269B0Cu;
    SET_GPR_U32(ctx, 31, 0x269B14u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x269B0Cu, 0x269B14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269B14u;
label_269b14:
    // 0x269b14: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x269b14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x269b18: 0xac400068  sw          $zero, 0x68($v0)
    ctx->pc = 0x269b18u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 104), GPR_U32(ctx, 0));
label_269b1c:
    // 0x269b1c: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x269b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x269b20: 0xc119b68  jal         func_466DA0
    ctx->pc = 0x269B20u;
    SET_GPR_U32(ctx, 31, 0x269B28u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x269B20u, 0x269B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269B28u;
label_269b28:
    // 0x269b28: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x269b28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x269b2c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x269b2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x269b30: 0xc0400e0  jal         func_100380
    ctx->pc = 0x269B30u;
    SET_GPR_U32(ctx, 31, 0x269B38u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x269B30u, 0x269B38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269B38u;
label_269b38:
    // 0x269b38: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x269b38u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x269b3c: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x269B3Cu;
    {
        const bool branch_taken_0x269b3c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x269b3c) {
            ctx->pc = 0x269B54u;
            goto label_269b54;
        }
    }
    ctx->pc = 0x269B44u;
    // 0x269b44: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x269b44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x269b48: 0xc09a1dc  jal         func_268770
    ctx->pc = 0x269B48u;
    SET_GPR_U32(ctx, 31, 0x269B50u);
    ctx->pc = 0x268770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x268770u, 0x269B48u, 0x269B50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269B50u;
label_269b50:
    // 0x269b50: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x269b50u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_269b54:
    // 0x269b54: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x269b54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x269b58: 0xac710068  sw          $s1, 0x68($v1)
    ctx->pc = 0x269b58u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 104), GPR_U32(ctx, 17));
    // 0x269b5c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x269b5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x269b60: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x269b60u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x269b64: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x269b64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x269b68: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x269b68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x269b6c: 0x3e00008  jr          $ra
    ctx->pc = 0x269B6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x269B6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x269B74u;
    // 0x269b74: 0x0  nop
    ctx->pc = 0x269b74u;
    // NOP
    // 0x269b78: 0x0  nop
    ctx->pc = 0x269b78u;
    // NOP
    // 0x269b7c: 0x0  nop
    ctx->pc = 0x269b7cu;
    // NOP
    ctx->pc = 0x269b80u;
}
