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

// Function: sub_00268AD0
// Address: 0x268ad0 - 0x268c20
void sub_00268AD0_0x268ad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00268AD0_0x268ad0");
#endif

    switch (ctx->pc) {
        case 0x268b0cu: goto label_268b0c;
        case 0x268b1cu: goto label_268b1c;
        case 0x268b3cu: goto label_268b3c;
        case 0x268b4cu: goto label_268b4c;
        case 0x268b74u: goto label_268b74;
        case 0x268b84u: goto label_268b84;
        case 0x268bacu: goto label_268bac;
        case 0x268bbcu: goto label_268bbc;
        case 0x268be4u: goto label_268be4;
        case 0x268bf4u: goto label_268bf4;
        default: break;
    }

    ctx->pc = 0x268ad0u;

    // 0x268ad0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x268ad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x268ad4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x268ad4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x268ad8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x268ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x268adc: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x268adcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x268ae0: 0x3e00008  jr          $ra
    ctx->pc = 0x268AE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x268AE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x268AE8u;
    // 0x268ae8: 0x0  nop
    ctx->pc = 0x268ae8u;
    // NOP
    // 0x268aec: 0x0  nop
    ctx->pc = 0x268aecu;
    // NOP
    // 0x268af0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x268af0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x268af4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x268af4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x268af8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x268af8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x268afc: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x268afcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x268b00: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x268b00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x268b04: 0xc08ec48  jal         func_23B120
    ctx->pc = 0x268B04u;
    SET_GPR_U32(ctx, 31, 0x268B0Cu);
    ctx->pc = 0x23B120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B120u, 0x268B04u, 0x268B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268B0Cu;
label_268b0c:
    // 0x268b0c: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x268b0cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x268b10: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x268b10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x268b14: 0xc09a698  jal         func_269A60
    ctx->pc = 0x268B14u;
    SET_GPR_U32(ctx, 31, 0x268B1Cu);
    ctx->pc = 0x269A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x269A60u, 0x268B14u, 0x268B1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268B1Cu;
label_268b1c:
    // 0x268b1c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x268b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x268b20: 0x8c42003c  lw          $v0, 0x3C($v0)
    ctx->pc = 0x268b20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x268b24: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x268B24u;
    {
        const bool branch_taken_0x268b24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x268b24) {
            ctx->pc = 0x268B54u;
            goto label_268b54;
        }
    }
    ctx->pc = 0x268B2Cu;
    // 0x268b2c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x268b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x268b30: 0x8c44003c  lw          $a0, 0x3C($v0)
    ctx->pc = 0x268b30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x268b34: 0xc09a338  jal         func_268CE0
    ctx->pc = 0x268B34u;
    SET_GPR_U32(ctx, 31, 0x268B3Cu);
    ctx->pc = 0x268CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x268CE0u, 0x268B34u, 0x268B3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268B3Cu;
label_268b3c:
    // 0x268b3c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x268b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x268b40: 0x8c44003c  lw          $a0, 0x3C($v0)
    ctx->pc = 0x268b40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x268b44: 0xc119c5c  jal         func_467170
    ctx->pc = 0x268B44u;
    SET_GPR_U32(ctx, 31, 0x268B4Cu);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x268B44u, 0x268B4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268B4Cu;
label_268b4c:
    // 0x268b4c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x268b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x268b50: 0xac40003c  sw          $zero, 0x3C($v0)
    ctx->pc = 0x268b50u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 0));
label_268b54:
    // 0x268b54: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x268b54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x268b58: 0x8c420040  lw          $v0, 0x40($v0)
    ctx->pc = 0x268b58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x268b5c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x268B5Cu;
    {
        const bool branch_taken_0x268b5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x268b5c) {
            ctx->pc = 0x268B8Cu;
            goto label_268b8c;
        }
    }
    ctx->pc = 0x268B64u;
    // 0x268b64: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x268b64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x268b68: 0x8c440040  lw          $a0, 0x40($v0)
    ctx->pc = 0x268b68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x268b6c: 0xc06e598  jal         func_1B9660
    ctx->pc = 0x268B6Cu;
    SET_GPR_U32(ctx, 31, 0x268B74u);
    ctx->pc = 0x1B9660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9660u, 0x268B6Cu, 0x268B74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268B74u;
label_268b74:
    // 0x268b74: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x268b74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x268b78: 0x8c440040  lw          $a0, 0x40($v0)
    ctx->pc = 0x268b78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x268b7c: 0xc119c5c  jal         func_467170
    ctx->pc = 0x268B7Cu;
    SET_GPR_U32(ctx, 31, 0x268B84u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x268B7Cu, 0x268B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268B84u;
label_268b84:
    // 0x268b84: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x268b84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x268b88: 0xac400040  sw          $zero, 0x40($v0)
    ctx->pc = 0x268b88u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 0));
label_268b8c:
    // 0x268b8c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x268b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x268b90: 0x8c420044  lw          $v0, 0x44($v0)
    ctx->pc = 0x268b90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x268b94: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x268B94u;
    {
        const bool branch_taken_0x268b94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x268b94) {
            ctx->pc = 0x268BC4u;
            goto label_268bc4;
        }
    }
    ctx->pc = 0x268B9Cu;
    // 0x268b9c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x268b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x268ba0: 0x8c440044  lw          $a0, 0x44($v0)
    ctx->pc = 0x268ba0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x268ba4: 0xc09a32c  jal         func_268CB0
    ctx->pc = 0x268BA4u;
    SET_GPR_U32(ctx, 31, 0x268BACu);
    ctx->pc = 0x268CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x268CB0u, 0x268BA4u, 0x268BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268BACu;
label_268bac:
    // 0x268bac: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x268bacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x268bb0: 0x8c440044  lw          $a0, 0x44($v0)
    ctx->pc = 0x268bb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x268bb4: 0xc119c5c  jal         func_467170
    ctx->pc = 0x268BB4u;
    SET_GPR_U32(ctx, 31, 0x268BBCu);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x268BB4u, 0x268BBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268BBCu;
label_268bbc:
    // 0x268bbc: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x268bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x268bc0: 0xac400044  sw          $zero, 0x44($v0)
    ctx->pc = 0x268bc0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 68), GPR_U32(ctx, 0));
label_268bc4:
    // 0x268bc4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x268bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x268bc8: 0x8c420068  lw          $v0, 0x68($v0)
    ctx->pc = 0x268bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 104)));
    // 0x268bcc: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x268BCCu;
    {
        const bool branch_taken_0x268bcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x268bcc) {
            ctx->pc = 0x268BFCu;
            goto label_268bfc;
        }
    }
    ctx->pc = 0x268BD4u;
    // 0x268bd4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x268bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x268bd8: 0x8c440068  lw          $a0, 0x68($v0)
    ctx->pc = 0x268bd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 104)));
    // 0x268bdc: 0xc09a308  jal         func_268C20
    ctx->pc = 0x268BDCu;
    SET_GPR_U32(ctx, 31, 0x268BE4u);
    ctx->pc = 0x268C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x268C20u, 0x268BDCu, 0x268BE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268BE4u;
label_268be4:
    // 0x268be4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x268be4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x268be8: 0x8c440068  lw          $a0, 0x68($v0)
    ctx->pc = 0x268be8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 104)));
    // 0x268bec: 0xc119c5c  jal         func_467170
    ctx->pc = 0x268BECu;
    SET_GPR_U32(ctx, 31, 0x268BF4u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x268BECu, 0x268BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268BF4u;
label_268bf4:
    // 0x268bf4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x268bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x268bf8: 0xac400068  sw          $zero, 0x68($v0)
    ctx->pc = 0x268bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 104), GPR_U32(ctx, 0));
label_268bfc:
    // 0x268bfc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x268bfcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268c00: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x268c00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x268c04: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x268c04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x268c08: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x268c08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x268c0c: 0x3e00008  jr          $ra
    ctx->pc = 0x268C0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x268C0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x268C14u;
    // 0x268c14: 0x0  nop
    ctx->pc = 0x268c14u;
    // NOP
    // 0x268c18: 0x0  nop
    ctx->pc = 0x268c18u;
    // NOP
    // 0x268c1c: 0x0  nop
    ctx->pc = 0x268c1cu;
    // NOP
    ctx->pc = 0x268c20u;
}
