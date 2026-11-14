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

// Function: sub_0020FFC0
// Address: 0x20ffc0 - 0x210010
void sub_0020FFC0_0x20ffc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020FFC0_0x20ffc0");
#endif

    switch (ctx->pc) {
        case 0x20fff0u: goto label_20fff0;
        default: break;
    }

    ctx->pc = 0x20ffc0u;

    // 0x20ffc0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x20ffc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x20ffc4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20ffc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x20ffc8: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x20ffc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x20ffcc: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x20ffccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20ffd0: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x20FFD0u;
    {
        const bool branch_taken_0x20ffd0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x20ffd0) {
            ctx->pc = 0x20FFF4u;
            goto label_20fff4;
        }
    }
    ctx->pc = 0x20FFD8u;
    // 0x20ffd8: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x20ffd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20ffdc: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x20FFDCu;
    {
        const bool branch_taken_0x20ffdc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x20ffdc) {
            ctx->pc = 0x20FFF4u;
            goto label_20fff4;
        }
    }
    ctx->pc = 0x20FFE4u;
    // 0x20ffe4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x20ffe4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20ffe8: 0xc119c5c  jal         func_467170
    ctx->pc = 0x20FFE8u;
    SET_GPR_U32(ctx, 31, 0x20FFF0u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x20FFE8u, 0x20FFF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20FFF0u;
label_20fff0:
    // 0x20fff0: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x20fff0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
label_20fff4:
    // 0x20fff4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20fff4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20fff8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x20fff8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x20fffc: 0x3e00008  jr          $ra
    ctx->pc = 0x20FFFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20FFFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x210004u;
    // 0x210004: 0x0  nop
    ctx->pc = 0x210004u;
    // NOP
    // 0x210008: 0x0  nop
    ctx->pc = 0x210008u;
    // NOP
    // 0x21000c: 0x0  nop
    ctx->pc = 0x21000cu;
    // NOP
    ctx->pc = 0x210010u;
}
