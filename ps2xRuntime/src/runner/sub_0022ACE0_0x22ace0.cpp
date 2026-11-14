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

// Function: sub_0022ACE0
// Address: 0x22ace0 - 0x22ad30
void sub_0022ACE0_0x22ace0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022ACE0_0x22ace0");
#endif

    switch (ctx->pc) {
        case 0x22ad10u: goto label_22ad10;
        default: break;
    }

    ctx->pc = 0x22ace0u;

    // 0x22ace0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x22ace0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x22ace4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22ace4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22ace8: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x22ace8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x22acec: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x22acecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22acf0: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x22ACF0u;
    {
        const bool branch_taken_0x22acf0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x22acf0) {
            ctx->pc = 0x22AD14u;
            goto label_22ad14;
        }
    }
    ctx->pc = 0x22ACF8u;
    // 0x22acf8: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x22acf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22acfc: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x22ACFCu;
    {
        const bool branch_taken_0x22acfc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x22acfc) {
            ctx->pc = 0x22AD14u;
            goto label_22ad14;
        }
    }
    ctx->pc = 0x22AD04u;
    // 0x22ad04: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x22ad04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22ad08: 0xc119c5c  jal         func_467170
    ctx->pc = 0x22AD08u;
    SET_GPR_U32(ctx, 31, 0x22AD10u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x22AD08u, 0x22AD10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22AD10u;
label_22ad10:
    // 0x22ad10: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x22ad10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
label_22ad14:
    // 0x22ad14: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22ad14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22ad18: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x22ad18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x22ad1c: 0x3e00008  jr          $ra
    ctx->pc = 0x22AD1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22AD1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22AD24u;
    // 0x22ad24: 0x0  nop
    ctx->pc = 0x22ad24u;
    // NOP
    // 0x22ad28: 0x0  nop
    ctx->pc = 0x22ad28u;
    // NOP
    // 0x22ad2c: 0x0  nop
    ctx->pc = 0x22ad2cu;
    // NOP
    ctx->pc = 0x22ad30u;
}
