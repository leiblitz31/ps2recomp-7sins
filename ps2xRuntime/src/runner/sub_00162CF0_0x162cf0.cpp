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

// Function: sub_00162CF0
// Address: 0x162cf0 - 0x162d40
void sub_00162CF0_0x162cf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00162CF0_0x162cf0");
#endif

    switch (ctx->pc) {
        case 0x162d20u: goto label_162d20;
        default: break;
    }

    ctx->pc = 0x162cf0u;

    // 0x162cf0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x162cf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x162cf4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x162cf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x162cf8: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x162cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x162cfc: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x162cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x162d00: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x162D00u;
    {
        const bool branch_taken_0x162d00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x162d00) {
            ctx->pc = 0x162D24u;
            goto label_162d24;
        }
    }
    ctx->pc = 0x162D08u;
    // 0x162d08: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x162d08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x162d0c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x162D0Cu;
    {
        const bool branch_taken_0x162d0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x162d0c) {
            ctx->pc = 0x162D24u;
            goto label_162d24;
        }
    }
    ctx->pc = 0x162D14u;
    // 0x162d14: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x162d14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x162d18: 0xc119c5c  jal         func_467170
    ctx->pc = 0x162D18u;
    SET_GPR_U32(ctx, 31, 0x162D20u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x162D18u, 0x162D20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162D20u;
label_162d20:
    // 0x162d20: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x162d20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
label_162d24:
    // 0x162d24: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x162d24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x162d28: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x162d28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x162d2c: 0x3e00008  jr          $ra
    ctx->pc = 0x162D2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x162D2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x162D34u;
    // 0x162d34: 0x0  nop
    ctx->pc = 0x162d34u;
    // NOP
    // 0x162d38: 0x0  nop
    ctx->pc = 0x162d38u;
    // NOP
    // 0x162d3c: 0x0  nop
    ctx->pc = 0x162d3cu;
    // NOP
    ctx->pc = 0x162d40u;
}
