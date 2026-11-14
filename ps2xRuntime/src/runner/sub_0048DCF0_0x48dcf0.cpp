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

// Function: sub_0048DCF0
// Address: 0x48dcf0 - 0x48dd40
void sub_0048DCF0_0x48dcf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048DCF0_0x48dcf0");
#endif

    switch (ctx->pc) {
        case 0x48dd20u: goto label_48dd20;
        default: break;
    }

    ctx->pc = 0x48dcf0u;

    // 0x48dcf0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x48dcf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x48dcf4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x48dcf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x48dcf8: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x48dcf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x48dcfc: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x48dcfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x48dd00: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x48DD00u;
    {
        const bool branch_taken_0x48dd00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x48dd00) {
            ctx->pc = 0x48DD24u;
            goto label_48dd24;
        }
    }
    ctx->pc = 0x48DD08u;
    // 0x48dd08: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x48dd08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x48dd0c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x48DD0Cu;
    {
        const bool branch_taken_0x48dd0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x48dd0c) {
            ctx->pc = 0x48DD24u;
            goto label_48dd24;
        }
    }
    ctx->pc = 0x48DD14u;
    // 0x48dd14: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x48dd14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x48dd18: 0xc119c5c  jal         func_467170
    ctx->pc = 0x48DD18u;
    SET_GPR_U32(ctx, 31, 0x48DD20u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x48DD18u, 0x48DD20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48DD20u;
label_48dd20:
    // 0x48dd20: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x48dd20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
label_48dd24:
    // 0x48dd24: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x48dd24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48dd28: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x48dd28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x48dd2c: 0x3e00008  jr          $ra
    ctx->pc = 0x48DD2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48DD2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48DD34u;
    // 0x48dd34: 0x0  nop
    ctx->pc = 0x48dd34u;
    // NOP
    // 0x48dd38: 0x0  nop
    ctx->pc = 0x48dd38u;
    // NOP
    // 0x48dd3c: 0x0  nop
    ctx->pc = 0x48dd3cu;
    // NOP
    ctx->pc = 0x48dd40u;
}
