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

// Function: sub_0025C6F0
// Address: 0x25c6f0 - 0x25c740
void sub_0025C6F0_0x25c6f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025C6F0_0x25c6f0");
#endif

    switch (ctx->pc) {
        case 0x25c720u: goto label_25c720;
        default: break;
    }

    ctx->pc = 0x25c6f0u;

    // 0x25c6f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x25c6f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x25c6f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25c6f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x25c6f8: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x25c6f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x25c6fc: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x25c6fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25c700: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x25C700u;
    {
        const bool branch_taken_0x25c700 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x25c700) {
            ctx->pc = 0x25C724u;
            goto label_25c724;
        }
    }
    ctx->pc = 0x25C708u;
    // 0x25c708: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x25c708u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25c70c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x25C70Cu;
    {
        const bool branch_taken_0x25c70c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x25c70c) {
            ctx->pc = 0x25C724u;
            goto label_25c724;
        }
    }
    ctx->pc = 0x25C714u;
    // 0x25c714: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x25c714u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25c718: 0xc119c5c  jal         func_467170
    ctx->pc = 0x25C718u;
    SET_GPR_U32(ctx, 31, 0x25C720u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x25C718u, 0x25C720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25C720u;
label_25c720:
    // 0x25c720: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x25c720u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
label_25c724:
    // 0x25c724: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25c724u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25c728: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x25c728u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x25c72c: 0x3e00008  jr          $ra
    ctx->pc = 0x25C72Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25C72Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25C734u;
    // 0x25c734: 0x0  nop
    ctx->pc = 0x25c734u;
    // NOP
    // 0x25c738: 0x0  nop
    ctx->pc = 0x25c738u;
    // NOP
    // 0x25c73c: 0x0  nop
    ctx->pc = 0x25c73cu;
    // NOP
    ctx->pc = 0x25c740u;
}
