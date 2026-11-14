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

// Function: sub_00477B40
// Address: 0x477b40 - 0x477bc0
void sub_00477B40_0x477b40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00477B40_0x477b40");
#endif

    switch (ctx->pc) {
        case 0x477b68u: goto label_477b68;
        case 0x477b78u: goto label_477b78;
        default: break;
    }

    ctx->pc = 0x477b40u;

    // 0x477b40: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x477b40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x477b44: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x477b44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x477b48: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x477b48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x477b4c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x477b4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x477b50: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x477b50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x477b54: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x477b54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x477b58: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x477b58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x477b5c: 0x8fb00050  lw          $s0, 0x50($sp)
    ctx->pc = 0x477b5cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x477b60: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x477B60u;
    {
        const bool branch_taken_0x477b60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x477b60) {
            ctx->pc = 0x477B8Cu;
            goto label_477b8c;
        }
    }
    ctx->pc = 0x477B68u;
label_477b68:
    // 0x477b68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x477b68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x477b6c: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x477b6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x477b70: 0xc11df00  jal         func_477C00
    ctx->pc = 0x477B70u;
    SET_GPR_U32(ctx, 31, 0x477B78u);
    ctx->pc = 0x477C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x477C00u, 0x477B70u, 0x477B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x477B78u;
label_477b78:
    // 0x477b78: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x477b78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x477b7c: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x477b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x477b80: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x477b80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    // 0x477b84: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x477b84u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x477b88: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x477b88u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_477b8c:
    // 0x477b8c: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x477b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x477b90: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x477b90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x477b94: 0x1462fff4  bne         $v1, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x477B94u;
    {
        const bool branch_taken_0x477b94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x477b94) {
            ctx->pc = 0x477B68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_477b68;
        }
    }
    ctx->pc = 0x477B9Cu;
    // 0x477b9c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x477b9cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x477ba0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x477ba0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x477ba4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x477ba4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x477ba8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x477ba8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x477bac: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x477bacu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x477bb0: 0x3e00008  jr          $ra
    ctx->pc = 0x477BB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x477BB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x477BB8u;
    // 0x477bb8: 0x0  nop
    ctx->pc = 0x477bb8u;
    // NOP
    // 0x477bbc: 0x0  nop
    ctx->pc = 0x477bbcu;
    // NOP
    ctx->pc = 0x477bc0u;
}
