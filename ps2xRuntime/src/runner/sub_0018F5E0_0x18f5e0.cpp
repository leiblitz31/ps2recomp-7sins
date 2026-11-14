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

// Function: sub_0018F5E0
// Address: 0x18f5e0 - 0x18f630
void sub_0018F5E0_0x18f5e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018F5E0_0x18f5e0");
#endif

    switch (ctx->pc) {
        case 0x18f610u: goto label_18f610;
        default: break;
    }

    ctx->pc = 0x18f5e0u;

    // 0x18f5e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x18f5e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x18f5e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18f5e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18f5e8: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x18f5e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x18f5ec: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x18f5ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18f5f0: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x18F5F0u;
    {
        const bool branch_taken_0x18f5f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18f5f0) {
            ctx->pc = 0x18F614u;
            goto label_18f614;
        }
    }
    ctx->pc = 0x18F5F8u;
    // 0x18f5f8: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x18f5f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18f5fc: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x18F5FCu;
    {
        const bool branch_taken_0x18f5fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18f5fc) {
            ctx->pc = 0x18F614u;
            goto label_18f614;
        }
    }
    ctx->pc = 0x18F604u;
    // 0x18f604: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x18f604u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18f608: 0xc119c5c  jal         func_467170
    ctx->pc = 0x18F608u;
    SET_GPR_U32(ctx, 31, 0x18F610u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x18F608u, 0x18F610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F610u;
label_18f610:
    // 0x18f610: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x18f610u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
label_18f614:
    // 0x18f614: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18f614u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18f618: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x18f618u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x18f61c: 0x3e00008  jr          $ra
    ctx->pc = 0x18F61Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18F61Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18F624u;
    // 0x18f624: 0x0  nop
    ctx->pc = 0x18f624u;
    // NOP
    // 0x18f628: 0x0  nop
    ctx->pc = 0x18f628u;
    // NOP
    // 0x18f62c: 0x0  nop
    ctx->pc = 0x18f62cu;
    // NOP
    ctx->pc = 0x18f630u;
}
