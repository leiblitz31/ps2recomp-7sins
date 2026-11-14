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

// Function: sub_002328E0
// Address: 0x2328e0 - 0x232930
void sub_002328E0_0x2328e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002328E0_0x2328e0");
#endif

    switch (ctx->pc) {
        case 0x232910u: goto label_232910;
        default: break;
    }

    ctx->pc = 0x2328e0u;

    // 0x2328e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2328e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2328e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2328e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2328e8: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x2328e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x2328ec: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x2328ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2328f0: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2328F0u;
    {
        const bool branch_taken_0x2328f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2328f0) {
            ctx->pc = 0x232914u;
            goto label_232914;
        }
    }
    ctx->pc = 0x2328F8u;
    // 0x2328f8: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x2328f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2328fc: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2328FCu;
    {
        const bool branch_taken_0x2328fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2328fc) {
            ctx->pc = 0x232914u;
            goto label_232914;
        }
    }
    ctx->pc = 0x232904u;
    // 0x232904: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x232904u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x232908: 0xc119c5c  jal         func_467170
    ctx->pc = 0x232908u;
    SET_GPR_U32(ctx, 31, 0x232910u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x232908u, 0x232910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232910u;
label_232910:
    // 0x232910: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x232910u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
label_232914:
    // 0x232914: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x232914u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x232918: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x232918u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x23291c: 0x3e00008  jr          $ra
    ctx->pc = 0x23291Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23291Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x232924u;
    // 0x232924: 0x0  nop
    ctx->pc = 0x232924u;
    // NOP
    // 0x232928: 0x0  nop
    ctx->pc = 0x232928u;
    // NOP
    // 0x23292c: 0x0  nop
    ctx->pc = 0x23292cu;
    // NOP
    ctx->pc = 0x232930u;
}
