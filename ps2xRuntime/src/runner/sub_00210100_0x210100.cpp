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

// Function: sub_00210100
// Address: 0x210100 - 0x210150
void sub_00210100_0x210100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00210100_0x210100");
#endif

    switch (ctx->pc) {
        case 0x210130u: goto label_210130;
        default: break;
    }

    ctx->pc = 0x210100u;

    // 0x210100: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x210100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x210104: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x210104u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x210108: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x210108u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x21010c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x21010cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x210110: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x210110u;
    {
        const bool branch_taken_0x210110 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x210110) {
            ctx->pc = 0x210134u;
            goto label_210134;
        }
    }
    ctx->pc = 0x210118u;
    // 0x210118: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x210118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21011c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x21011Cu;
    {
        const bool branch_taken_0x21011c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x21011c) {
            ctx->pc = 0x210134u;
            goto label_210134;
        }
    }
    ctx->pc = 0x210124u;
    // 0x210124: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x210124u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x210128: 0xc119c5c  jal         func_467170
    ctx->pc = 0x210128u;
    SET_GPR_U32(ctx, 31, 0x210130u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x210128u, 0x210130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210130u;
label_210130:
    // 0x210130: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x210130u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
label_210134:
    // 0x210134: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x210134u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x210138: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x210138u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x21013c: 0x3e00008  jr          $ra
    ctx->pc = 0x21013Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21013Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x210144u;
    // 0x210144: 0x0  nop
    ctx->pc = 0x210144u;
    // NOP
    // 0x210148: 0x0  nop
    ctx->pc = 0x210148u;
    // NOP
    // 0x21014c: 0x0  nop
    ctx->pc = 0x21014cu;
    // NOP
    ctx->pc = 0x210150u;
}
