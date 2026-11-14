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

// Function: sub_0022FFB0
// Address: 0x22ffb0 - 0x230030
void sub_0022FFB0_0x22ffb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022FFB0_0x22ffb0");
#endif

    switch (ctx->pc) {
        case 0x22ffd8u: goto label_22ffd8;
        case 0x22ffe8u: goto label_22ffe8;
        default: break;
    }

    ctx->pc = 0x22ffb0u;

    // 0x22ffb0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x22ffb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x22ffb4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x22ffb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x22ffb8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x22ffb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x22ffbc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x22ffbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x22ffc0: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x22ffc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x22ffc4: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x22ffc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x22ffc8: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x22ffc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x22ffcc: 0x8fb00030  lw          $s0, 0x30($sp)
    ctx->pc = 0x22ffccu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22ffd0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x22FFD0u;
    {
        const bool branch_taken_0x22ffd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22ffd0) {
            ctx->pc = 0x22FFFCu;
            goto label_22fffc;
        }
    }
    ctx->pc = 0x22FFD8u;
label_22ffd8:
    // 0x22ffd8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22ffd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ffdc: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x22ffdcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x22ffe0: 0xc08c02c  jal         func_2300B0
    ctx->pc = 0x22FFE0u;
    SET_GPR_U32(ctx, 31, 0x22FFE8u);
    ctx->pc = 0x2300B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2300B0u, 0x22FFE0u, 0x22FFE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22FFE8u;
label_22ffe8:
    // 0x22ffe8: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x22ffe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x22ffec: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x22ffecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x22fff0: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x22fff0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x22fff4: 0x2610000c  addiu       $s0, $s0, 0xC
    ctx->pc = 0x22fff4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x22fff8: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x22fff8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_22fffc:
    // 0x22fffc: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x22fffcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x230000: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x230000u;
    {
        const bool branch_taken_0x230000 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x230000) {
            ctx->pc = 0x22FFD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22ffd8;
        }
    }
    ctx->pc = 0x230008u;
    // 0x230008: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x230008u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23000c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x23000cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x230010: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x230010u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x230014: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x230014u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x230018: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x230018u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x23001c: 0x3e00008  jr          $ra
    ctx->pc = 0x23001Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23001Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x230024u;
    // 0x230024: 0x0  nop
    ctx->pc = 0x230024u;
    // NOP
    // 0x230028: 0x0  nop
    ctx->pc = 0x230028u;
    // NOP
    // 0x23002c: 0x0  nop
    ctx->pc = 0x23002cu;
    // NOP
    ctx->pc = 0x230030u;
}
