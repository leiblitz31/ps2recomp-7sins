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

// Function: sub_001A8050
// Address: 0x1a8050 - 0x1a80a0
void sub_001A8050_0x1a8050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A8050_0x1a8050");
#endif

    switch (ctx->pc) {
        case 0x1a8080u: goto label_1a8080;
        default: break;
    }

    ctx->pc = 0x1a8050u;

    // 0x1a8050: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1a8050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1a8054: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a8054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a8058: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1a8058u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x1a805c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1a805cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a8060: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1A8060u;
    {
        const bool branch_taken_0x1a8060 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a8060) {
            ctx->pc = 0x1A8084u;
            goto label_1a8084;
        }
    }
    ctx->pc = 0x1A8068u;
    // 0x1a8068: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1a8068u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a806c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A806Cu;
    {
        const bool branch_taken_0x1a806c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a806c) {
            ctx->pc = 0x1A8084u;
            goto label_1a8084;
        }
    }
    ctx->pc = 0x1A8074u;
    // 0x1a8074: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1a8074u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a8078: 0xc119c5c  jal         func_467170
    ctx->pc = 0x1A8078u;
    SET_GPR_U32(ctx, 31, 0x1A8080u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x1A8078u, 0x1A8080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8080u;
label_1a8080:
    // 0x1a8080: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x1a8080u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
label_1a8084:
    // 0x1a8084: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a8084u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a8088: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1a8088u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1a808c: 0x3e00008  jr          $ra
    ctx->pc = 0x1A808Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A808Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A8094u;
    // 0x1a8094: 0x0  nop
    ctx->pc = 0x1a8094u;
    // NOP
    // 0x1a8098: 0x0  nop
    ctx->pc = 0x1a8098u;
    // NOP
    // 0x1a809c: 0x0  nop
    ctx->pc = 0x1a809cu;
    // NOP
    ctx->pc = 0x1a80a0u;
}
