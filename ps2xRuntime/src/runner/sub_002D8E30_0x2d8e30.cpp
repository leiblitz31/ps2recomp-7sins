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

// Function: sub_002D8E30
// Address: 0x2d8e30 - 0x2d8e80
void sub_002D8E30_0x2d8e30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D8E30_0x2d8e30");
#endif

    switch (ctx->pc) {
        case 0x2d8e60u: goto label_2d8e60;
        default: break;
    }

    ctx->pc = 0x2d8e30u;

    // 0x2d8e30: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2d8e30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2d8e34: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d8e34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d8e38: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x2d8e38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x2d8e3c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x2d8e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d8e40: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2D8E40u;
    {
        const bool branch_taken_0x2d8e40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d8e40) {
            ctx->pc = 0x2D8E64u;
            goto label_2d8e64;
        }
    }
    ctx->pc = 0x2D8E48u;
    // 0x2d8e48: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x2d8e48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d8e4c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D8E4Cu;
    {
        const bool branch_taken_0x2d8e4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d8e4c) {
            ctx->pc = 0x2D8E64u;
            goto label_2d8e64;
        }
    }
    ctx->pc = 0x2D8E54u;
    // 0x2d8e54: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2d8e54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d8e58: 0xc119c5c  jal         func_467170
    ctx->pc = 0x2D8E58u;
    SET_GPR_U32(ctx, 31, 0x2D8E60u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x2D8E58u, 0x2D8E60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8E60u;
label_2d8e60:
    // 0x2d8e60: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x2d8e60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
label_2d8e64:
    // 0x2d8e64: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d8e64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d8e68: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2d8e68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2d8e6c: 0x3e00008  jr          $ra
    ctx->pc = 0x2D8E6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D8E6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D8E74u;
    // 0x2d8e74: 0x0  nop
    ctx->pc = 0x2d8e74u;
    // NOP
    // 0x2d8e78: 0x0  nop
    ctx->pc = 0x2d8e78u;
    // NOP
    // 0x2d8e7c: 0x0  nop
    ctx->pc = 0x2d8e7cu;
    // NOP
    ctx->pc = 0x2d8e80u;
}
