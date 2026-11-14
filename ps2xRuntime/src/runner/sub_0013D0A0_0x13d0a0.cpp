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

// Function: sub_0013D0A0
// Address: 0x13d0a0 - 0x13d0f0
void sub_0013D0A0_0x13d0a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013D0A0_0x13d0a0");
#endif

    switch (ctx->pc) {
        case 0x13d0d0u: goto label_13d0d0;
        default: break;
    }

    ctx->pc = 0x13d0a0u;

    // 0x13d0a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x13d0a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x13d0a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13d0a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13d0a8: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x13d0a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x13d0ac: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x13d0acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13d0b0: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x13D0B0u;
    {
        const bool branch_taken_0x13d0b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x13d0b0) {
            ctx->pc = 0x13D0D4u;
            goto label_13d0d4;
        }
    }
    ctx->pc = 0x13D0B8u;
    // 0x13d0b8: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x13d0b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13d0bc: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x13D0BCu;
    {
        const bool branch_taken_0x13d0bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x13d0bc) {
            ctx->pc = 0x13D0D4u;
            goto label_13d0d4;
        }
    }
    ctx->pc = 0x13D0C4u;
    // 0x13d0c4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x13d0c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13d0c8: 0xc119c5c  jal         func_467170
    ctx->pc = 0x13D0C8u;
    SET_GPR_U32(ctx, 31, 0x13D0D0u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x13D0C8u, 0x13D0D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D0D0u;
label_13d0d0:
    // 0x13d0d0: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x13d0d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
label_13d0d4:
    // 0x13d0d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13d0d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13d0d8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x13d0d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x13d0dc: 0x3e00008  jr          $ra
    ctx->pc = 0x13D0DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13D0DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13D0E4u;
    // 0x13d0e4: 0x0  nop
    ctx->pc = 0x13d0e4u;
    // NOP
    // 0x13d0e8: 0x0  nop
    ctx->pc = 0x13d0e8u;
    // NOP
    // 0x13d0ec: 0x0  nop
    ctx->pc = 0x13d0ecu;
    // NOP
    ctx->pc = 0x13d0f0u;
}
