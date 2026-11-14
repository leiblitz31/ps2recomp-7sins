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

// Function: sub_0025C6A0
// Address: 0x25c6a0 - 0x25c6f0
void sub_0025C6A0_0x25c6a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025C6A0_0x25c6a0");
#endif

    switch (ctx->pc) {
        case 0x25c6d0u: goto label_25c6d0;
        default: break;
    }

    ctx->pc = 0x25c6a0u;

    // 0x25c6a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x25c6a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x25c6a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25c6a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x25c6a8: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x25c6a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x25c6ac: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x25c6acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25c6b0: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x25C6B0u;
    {
        const bool branch_taken_0x25c6b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x25c6b0) {
            ctx->pc = 0x25C6D4u;
            goto label_25c6d4;
        }
    }
    ctx->pc = 0x25C6B8u;
    // 0x25c6b8: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x25c6b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25c6bc: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x25C6BCu;
    {
        const bool branch_taken_0x25c6bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x25c6bc) {
            ctx->pc = 0x25C6D4u;
            goto label_25c6d4;
        }
    }
    ctx->pc = 0x25C6C4u;
    // 0x25c6c4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x25c6c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25c6c8: 0xc119c5c  jal         func_467170
    ctx->pc = 0x25C6C8u;
    SET_GPR_U32(ctx, 31, 0x25C6D0u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x25C6C8u, 0x25C6D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25C6D0u;
label_25c6d0:
    // 0x25c6d0: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x25c6d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
label_25c6d4:
    // 0x25c6d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25c6d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25c6d8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x25c6d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x25c6dc: 0x3e00008  jr          $ra
    ctx->pc = 0x25C6DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25C6DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25C6E4u;
    // 0x25c6e4: 0x0  nop
    ctx->pc = 0x25c6e4u;
    // NOP
    // 0x25c6e8: 0x0  nop
    ctx->pc = 0x25c6e8u;
    // NOP
    // 0x25c6ec: 0x0  nop
    ctx->pc = 0x25c6ecu;
    // NOP
    ctx->pc = 0x25c6f0u;
}
