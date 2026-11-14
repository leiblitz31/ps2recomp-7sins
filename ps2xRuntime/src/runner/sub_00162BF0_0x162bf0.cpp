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

// Function: sub_00162BF0
// Address: 0x162bf0 - 0x162c40
void sub_00162BF0_0x162bf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00162BF0_0x162bf0");
#endif

    switch (ctx->pc) {
        case 0x162c20u: goto label_162c20;
        default: break;
    }

    ctx->pc = 0x162bf0u;

    // 0x162bf0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x162bf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x162bf4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x162bf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x162bf8: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x162bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x162bfc: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x162bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x162c00: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x162C00u;
    {
        const bool branch_taken_0x162c00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x162c00) {
            ctx->pc = 0x162C24u;
            goto label_162c24;
        }
    }
    ctx->pc = 0x162C08u;
    // 0x162c08: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x162c08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x162c0c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x162C0Cu;
    {
        const bool branch_taken_0x162c0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x162c0c) {
            ctx->pc = 0x162C24u;
            goto label_162c24;
        }
    }
    ctx->pc = 0x162C14u;
    // 0x162c14: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x162c14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x162c18: 0xc119c5c  jal         func_467170
    ctx->pc = 0x162C18u;
    SET_GPR_U32(ctx, 31, 0x162C20u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x162C18u, 0x162C20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162C20u;
label_162c20:
    // 0x162c20: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x162c20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
label_162c24:
    // 0x162c24: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x162c24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x162c28: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x162c28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x162c2c: 0x3e00008  jr          $ra
    ctx->pc = 0x162C2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x162C2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x162C34u;
    // 0x162c34: 0x0  nop
    ctx->pc = 0x162c34u;
    // NOP
    // 0x162c38: 0x0  nop
    ctx->pc = 0x162c38u;
    // NOP
    // 0x162c3c: 0x0  nop
    ctx->pc = 0x162c3cu;
    // NOP
    ctx->pc = 0x162c40u;
}
