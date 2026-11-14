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

// Function: sub_0024EEC0
// Address: 0x24eec0 - 0x24ef10
void sub_0024EEC0_0x24eec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024EEC0_0x24eec0");
#endif

    switch (ctx->pc) {
        case 0x24eef0u: goto label_24eef0;
        default: break;
    }

    ctx->pc = 0x24eec0u;

    // 0x24eec0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x24eec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x24eec4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x24eec4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x24eec8: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x24eec8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x24eecc: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x24eeccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24eed0: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x24EED0u;
    {
        const bool branch_taken_0x24eed0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x24eed0) {
            ctx->pc = 0x24EEF4u;
            goto label_24eef4;
        }
    }
    ctx->pc = 0x24EED8u;
    // 0x24eed8: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x24eed8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24eedc: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x24EEDCu;
    {
        const bool branch_taken_0x24eedc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x24eedc) {
            ctx->pc = 0x24EEF4u;
            goto label_24eef4;
        }
    }
    ctx->pc = 0x24EEE4u;
    // 0x24eee4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x24eee4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24eee8: 0xc119c5c  jal         func_467170
    ctx->pc = 0x24EEE8u;
    SET_GPR_U32(ctx, 31, 0x24EEF0u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x24EEE8u, 0x24EEF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24EEF0u;
label_24eef0:
    // 0x24eef0: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x24eef0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
label_24eef4:
    // 0x24eef4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x24eef4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24eef8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x24eef8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x24eefc: 0x3e00008  jr          $ra
    ctx->pc = 0x24EEFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24EEFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24EF04u;
    // 0x24ef04: 0x0  nop
    ctx->pc = 0x24ef04u;
    // NOP
    // 0x24ef08: 0x0  nop
    ctx->pc = 0x24ef08u;
    // NOP
    // 0x24ef0c: 0x0  nop
    ctx->pc = 0x24ef0cu;
    // NOP
    ctx->pc = 0x24ef10u;
}
