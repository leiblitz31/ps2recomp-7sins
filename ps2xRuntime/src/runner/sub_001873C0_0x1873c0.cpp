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

// Function: sub_001873C0
// Address: 0x1873c0 - 0x187410
void sub_001873C0_0x1873c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001873C0_0x1873c0");
#endif

    switch (ctx->pc) {
        case 0x1873f0u: goto label_1873f0;
        default: break;
    }

    ctx->pc = 0x1873c0u;

    // 0x1873c0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1873c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1873c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1873c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1873c8: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1873c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x1873cc: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1873ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1873d0: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1873D0u;
    {
        const bool branch_taken_0x1873d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1873d0) {
            ctx->pc = 0x1873F4u;
            goto label_1873f4;
        }
    }
    ctx->pc = 0x1873D8u;
    // 0x1873d8: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1873d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1873dc: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1873DCu;
    {
        const bool branch_taken_0x1873dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1873dc) {
            ctx->pc = 0x1873F4u;
            goto label_1873f4;
        }
    }
    ctx->pc = 0x1873E4u;
    // 0x1873e4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1873e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1873e8: 0xc119c5c  jal         func_467170
    ctx->pc = 0x1873E8u;
    SET_GPR_U32(ctx, 31, 0x1873F0u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x1873E8u, 0x1873F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1873F0u;
label_1873f0:
    // 0x1873f0: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x1873f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
label_1873f4:
    // 0x1873f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1873f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1873f8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1873f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1873fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1873FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1873FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x187404u;
    // 0x187404: 0x0  nop
    ctx->pc = 0x187404u;
    // NOP
    // 0x187408: 0x0  nop
    ctx->pc = 0x187408u;
    // NOP
    // 0x18740c: 0x0  nop
    ctx->pc = 0x18740cu;
    // NOP
    ctx->pc = 0x187410u;
}
