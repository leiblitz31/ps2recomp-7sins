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

// Function: sub_0011DFA0
// Address: 0x11dfa0 - 0x11e000
void sub_0011DFA0_0x11dfa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011DFA0_0x11dfa0");
#endif

    switch (ctx->pc) {
        case 0x11dfe0u: goto label_11dfe0;
        default: break;
    }

    ctx->pc = 0x11dfa0u;

    // 0x11dfa0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x11dfa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x11dfa4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11dfa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11dfa8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x11dfa8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x11dfac: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x11dfacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x11dfb0: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x11dfb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11dfb4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x11dfb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11dfb8: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11DFB8u;
    {
        const bool branch_taken_0x11dfb8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x11dfb8) {
            ctx->pc = 0x11DFCCu;
            goto label_11dfcc;
        }
    }
    ctx->pc = 0x11DFC0u;
    // 0x11dfc0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x11dfc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11dfc4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x11DFC4u;
    {
        const bool branch_taken_0x11dfc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11dfc4) {
            ctx->pc = 0x11DFE4u;
            goto label_11dfe4;
        }
    }
    ctx->pc = 0x11DFCCu;
label_11dfcc:
    // 0x11dfcc: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x11dfccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11dfd0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x11dfd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11dfd4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x11dfd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11dfd8: 0xc04071c  jal         func_101C70
    ctx->pc = 0x11DFD8u;
    SET_GPR_U32(ctx, 31, 0x11DFE0u);
    ctx->pc = 0x101C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101C70u, 0x11DFD8u, 0x11DFE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DFE0u;
label_11dfe0:
    // 0x11dfe0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x11dfe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_11dfe4:
    // 0x11dfe4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11dfe4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11dfe8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x11dfe8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x11dfec: 0x3e00008  jr          $ra
    ctx->pc = 0x11DFECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11DFECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11DFF4u;
    // 0x11dff4: 0x0  nop
    ctx->pc = 0x11dff4u;
    // NOP
    // 0x11dff8: 0x0  nop
    ctx->pc = 0x11dff8u;
    // NOP
    // 0x11dffc: 0x0  nop
    ctx->pc = 0x11dffcu;
    // NOP
    ctx->pc = 0x11e000u;
}
