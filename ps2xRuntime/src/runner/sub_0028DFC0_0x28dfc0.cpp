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

// Function: sub_0028DFC0
// Address: 0x28dfc0 - 0x28e010
void sub_0028DFC0_0x28dfc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028DFC0_0x28dfc0");
#endif

    switch (ctx->pc) {
        case 0x28dff0u: goto label_28dff0;
        default: break;
    }

    ctx->pc = 0x28dfc0u;

    // 0x28dfc0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x28dfc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x28dfc4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x28dfc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x28dfc8: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x28dfc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x28dfcc: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x28dfccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28dfd0: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x28DFD0u;
    {
        const bool branch_taken_0x28dfd0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x28dfd0) {
            ctx->pc = 0x28DFF4u;
            goto label_28dff4;
        }
    }
    ctx->pc = 0x28DFD8u;
    // 0x28dfd8: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x28dfd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28dfdc: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x28DFDCu;
    {
        const bool branch_taken_0x28dfdc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x28dfdc) {
            ctx->pc = 0x28DFF4u;
            goto label_28dff4;
        }
    }
    ctx->pc = 0x28DFE4u;
    // 0x28dfe4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x28dfe4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28dfe8: 0xc119c5c  jal         func_467170
    ctx->pc = 0x28DFE8u;
    SET_GPR_U32(ctx, 31, 0x28DFF0u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x28DFE8u, 0x28DFF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28DFF0u;
label_28dff0:
    // 0x28dff0: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x28dff0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
label_28dff4:
    // 0x28dff4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28dff4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28dff8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x28dff8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x28dffc: 0x3e00008  jr          $ra
    ctx->pc = 0x28DFFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28DFFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28E004u;
    // 0x28e004: 0x0  nop
    ctx->pc = 0x28e004u;
    // NOP
    // 0x28e008: 0x0  nop
    ctx->pc = 0x28e008u;
    // NOP
    // 0x28e00c: 0x0  nop
    ctx->pc = 0x28e00cu;
    // NOP
    ctx->pc = 0x28e010u;
}
