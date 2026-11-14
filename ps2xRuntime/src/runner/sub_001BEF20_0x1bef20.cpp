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

// Function: sub_001BEF20
// Address: 0x1bef20 - 0x1befa0
void sub_001BEF20_0x1bef20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BEF20_0x1bef20");
#endif

    switch (ctx->pc) {
        case 0x1bef48u: goto label_1bef48;
        case 0x1bef58u: goto label_1bef58;
        default: break;
    }

    ctx->pc = 0x1bef20u;

    // 0x1bef20: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1bef20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1bef24: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1bef24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1bef28: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1bef28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1bef2c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1bef2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1bef30: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x1bef30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x1bef34: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x1bef34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x1bef38: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x1bef38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x1bef3c: 0x8fb00030  lw          $s0, 0x30($sp)
    ctx->pc = 0x1bef3cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1bef40: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1BEF40u;
    {
        const bool branch_taken_0x1bef40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bef40) {
            ctx->pc = 0x1BEF6Cu;
            goto label_1bef6c;
        }
    }
    ctx->pc = 0x1BEF48u;
label_1bef48:
    // 0x1bef48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bef48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bef4c: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x1bef4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1bef50: 0xc06fc08  jal         func_1BF020
    ctx->pc = 0x1BEF50u;
    SET_GPR_U32(ctx, 31, 0x1BEF58u);
    ctx->pc = 0x1BF020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BF020u, 0x1BEF50u, 0x1BEF58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BEF58u;
label_1bef58:
    // 0x1bef58: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1bef58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1bef5c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1bef5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1bef60: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x1bef60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x1bef64: 0x261000d0  addiu       $s0, $s0, 0xD0
    ctx->pc = 0x1bef64u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
    // 0x1bef68: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x1bef68u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1bef6c:
    // 0x1bef6c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1bef6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1bef70: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x1BEF70u;
    {
        const bool branch_taken_0x1bef70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bef70) {
            ctx->pc = 0x1BEF48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bef48;
        }
    }
    ctx->pc = 0x1BEF78u;
    // 0x1bef78: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1bef78u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bef7c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1bef7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1bef80: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1bef80u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bef84: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1bef84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bef88: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x1bef88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1bef8c: 0x3e00008  jr          $ra
    ctx->pc = 0x1BEF8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BEF8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BEF94u;
    // 0x1bef94: 0x0  nop
    ctx->pc = 0x1bef94u;
    // NOP
    // 0x1bef98: 0x0  nop
    ctx->pc = 0x1bef98u;
    // NOP
    // 0x1bef9c: 0x0  nop
    ctx->pc = 0x1bef9cu;
    // NOP
    ctx->pc = 0x1befa0u;
}
