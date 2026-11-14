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

// Function: sub_002D2B40
// Address: 0x2d2b40 - 0x2d2c00
void sub_002D2B40_0x2d2b40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D2B40_0x2d2b40");
#endif

    switch (ctx->pc) {
        case 0x2d2b64u: goto label_2d2b64;
        case 0x2d2b70u: goto label_2d2b70;
        case 0x2d2b80u: goto label_2d2b80;
        case 0x2d2b94u: goto label_2d2b94;
        case 0x2d2bacu: goto label_2d2bac;
        case 0x2d2bb8u: goto label_2d2bb8;
        case 0x2d2bc8u: goto label_2d2bc8;
        case 0x2d2bdcu: goto label_2d2bdc;
        default: break;
    }

    ctx->pc = 0x2d2b40u;

    // 0x2d2b40: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2d2b40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2d2b44: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2d2b44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2d2b48: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2d2b48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2d2b4c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2d2b4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2d2b50: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x2d2b50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x2d2b54: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2d2b54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d2b58: 0x24440028  addiu       $a0, $v0, 0x28
    ctx->pc = 0x2d2b58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x2d2b5c: 0xc0b42ec  jal         func_2D0BB0
    ctx->pc = 0x2D2B5Cu;
    SET_GPR_U32(ctx, 31, 0x2D2B64u);
    ctx->pc = 0x2D0BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0BB0u, 0x2D2B5Cu, 0x2D2B64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2B64u;
label_2d2b64:
    // 0x2d2b64: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2d2b64u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2b68: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2D2B68u;
    {
        const bool branch_taken_0x2d2b68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d2b68) {
            ctx->pc = 0x2D2B84u;
            goto label_2d2b84;
        }
    }
    ctx->pc = 0x2D2B70u;
label_2d2b70:
    // 0x2d2b70: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2d2b70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2d2b74: 0x8c44001c  lw          $a0, 0x1C($v0)
    ctx->pc = 0x2d2b74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x2d2b78: 0xc0b8e10  jal         func_2E3840
    ctx->pc = 0x2D2B78u;
    SET_GPR_U32(ctx, 31, 0x2D2B80u);
    ctx->pc = 0x2E3840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3840u, 0x2D2B78u, 0x2D2B80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2B80u;
label_2d2b80:
    // 0x2d2b80: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x2d2b80u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_2d2b84:
    // 0x2d2b84: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2d2b84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d2b88: 0x24440028  addiu       $a0, $v0, 0x28
    ctx->pc = 0x2d2b88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x2d2b8c: 0xc0b42d4  jal         func_2D0B50
    ctx->pc = 0x2D2B8Cu;
    SET_GPR_U32(ctx, 31, 0x2D2B94u);
    ctx->pc = 0x2D0B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0B50u, 0x2D2B8Cu, 0x2D2B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2B94u;
label_2d2b94:
    // 0x2d2b94: 0x1622fff6  bne         $s1, $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x2D2B94u;
    {
        const bool branch_taken_0x2d2b94 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x2d2b94) {
            ctx->pc = 0x2D2B70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d2b70;
        }
    }
    ctx->pc = 0x2D2B9Cu;
    // 0x2d2b9c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2d2b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d2ba0: 0x24440034  addiu       $a0, $v0, 0x34
    ctx->pc = 0x2d2ba0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 52));
    // 0x2d2ba4: 0xc0b436c  jal         func_2D0DB0
    ctx->pc = 0x2D2BA4u;
    SET_GPR_U32(ctx, 31, 0x2D2BACu);
    ctx->pc = 0x2D0DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0DB0u, 0x2D2BA4u, 0x2D2BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2BACu;
label_2d2bac:
    // 0x2d2bac: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d2bacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2bb0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2D2BB0u;
    {
        const bool branch_taken_0x2d2bb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d2bb0) {
            ctx->pc = 0x2D2BCCu;
            goto label_2d2bcc;
        }
    }
    ctx->pc = 0x2D2BB8u;
label_2d2bb8:
    // 0x2d2bb8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2d2bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d2bbc: 0x8c44001c  lw          $a0, 0x1C($v0)
    ctx->pc = 0x2d2bbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x2d2bc0: 0xc0b8e10  jal         func_2E3840
    ctx->pc = 0x2D2BC0u;
    SET_GPR_U32(ctx, 31, 0x2D2BC8u);
    ctx->pc = 0x2E3840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3840u, 0x2D2BC0u, 0x2D2BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2BC8u;
label_2d2bc8:
    // 0x2d2bc8: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x2d2bc8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_2d2bcc:
    // 0x2d2bcc: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2d2bccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d2bd0: 0x24440034  addiu       $a0, $v0, 0x34
    ctx->pc = 0x2d2bd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 52));
    // 0x2d2bd4: 0xc0b4338  jal         func_2D0CE0
    ctx->pc = 0x2D2BD4u;
    SET_GPR_U32(ctx, 31, 0x2D2BDCu);
    ctx->pc = 0x2D0CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0CE0u, 0x2D2BD4u, 0x2D2BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2BDCu;
label_2d2bdc:
    // 0x2d2bdc: 0x1602fff6  bne         $s0, $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x2D2BDCu;
    {
        const bool branch_taken_0x2d2bdc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x2d2bdc) {
            ctx->pc = 0x2D2BB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d2bb8;
        }
    }
    ctx->pc = 0x2D2BE4u;
    // 0x2d2be4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2d2be4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d2be8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2d2be8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d2bec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d2becu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d2bf0: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2d2bf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2d2bf4: 0x3e00008  jr          $ra
    ctx->pc = 0x2D2BF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D2BF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D2BFCu;
    // 0x2d2bfc: 0x0  nop
    ctx->pc = 0x2d2bfcu;
    // NOP
    ctx->pc = 0x2d2c00u;
}
