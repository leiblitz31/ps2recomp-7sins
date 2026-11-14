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

// Function: sub_00458A30
// Address: 0x458a30 - 0x458a80
void sub_00458A30_0x458a30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00458A30_0x458a30");
#endif

    switch (ctx->pc) {
        case 0x458a60u: goto label_458a60;
        default: break;
    }

    ctx->pc = 0x458a30u;

    // 0x458a30: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x458a30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x458a34: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x458a34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x458a38: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x458a38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x458a3c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x458a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x458a40: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x458A40u;
    {
        const bool branch_taken_0x458a40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x458a40) {
            ctx->pc = 0x458A64u;
            goto label_458a64;
        }
    }
    ctx->pc = 0x458A48u;
    // 0x458a48: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x458a48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x458a4c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x458A4Cu;
    {
        const bool branch_taken_0x458a4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x458a4c) {
            ctx->pc = 0x458A64u;
            goto label_458a64;
        }
    }
    ctx->pc = 0x458A54u;
    // 0x458a54: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x458a54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x458a58: 0xc119c5c  jal         func_467170
    ctx->pc = 0x458A58u;
    SET_GPR_U32(ctx, 31, 0x458A60u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x458A58u, 0x458A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x458A60u;
label_458a60:
    // 0x458a60: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x458a60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
label_458a64:
    // 0x458a64: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x458a64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x458a68: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x458a68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x458a6c: 0x3e00008  jr          $ra
    ctx->pc = 0x458A6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x458A6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x458A74u;
    // 0x458a74: 0x0  nop
    ctx->pc = 0x458a74u;
    // NOP
    // 0x458a78: 0x0  nop
    ctx->pc = 0x458a78u;
    // NOP
    // 0x458a7c: 0x0  nop
    ctx->pc = 0x458a7cu;
    // NOP
    ctx->pc = 0x458a80u;
}
