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

// Function: sub_0017FDF0
// Address: 0x17fdf0 - 0x17fe40
void sub_0017FDF0_0x17fdf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017FDF0_0x17fdf0");
#endif

    switch (ctx->pc) {
        case 0x17fe20u: goto label_17fe20;
        default: break;
    }

    ctx->pc = 0x17fdf0u;

    // 0x17fdf0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x17fdf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x17fdf4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17fdf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17fdf8: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x17fdf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x17fdfc: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x17fdfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17fe00: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x17FE00u;
    {
        const bool branch_taken_0x17fe00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x17fe00) {
            ctx->pc = 0x17FE24u;
            goto label_17fe24;
        }
    }
    ctx->pc = 0x17FE08u;
    // 0x17fe08: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x17fe08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17fe0c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x17FE0Cu;
    {
        const bool branch_taken_0x17fe0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x17fe0c) {
            ctx->pc = 0x17FE24u;
            goto label_17fe24;
        }
    }
    ctx->pc = 0x17FE14u;
    // 0x17fe14: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x17fe14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17fe18: 0xc119c5c  jal         func_467170
    ctx->pc = 0x17FE18u;
    SET_GPR_U32(ctx, 31, 0x17FE20u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x17FE18u, 0x17FE20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17FE20u;
label_17fe20:
    // 0x17fe20: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x17fe20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
label_17fe24:
    // 0x17fe24: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17fe24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17fe28: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x17fe28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x17fe2c: 0x3e00008  jr          $ra
    ctx->pc = 0x17FE2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17FE2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17FE34u;
    // 0x17fe34: 0x0  nop
    ctx->pc = 0x17fe34u;
    // NOP
    // 0x17fe38: 0x0  nop
    ctx->pc = 0x17fe38u;
    // NOP
    // 0x17fe3c: 0x0  nop
    ctx->pc = 0x17fe3cu;
    // NOP
    ctx->pc = 0x17fe40u;
}
