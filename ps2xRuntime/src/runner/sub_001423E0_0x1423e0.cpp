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

// Function: sub_001423E0
// Address: 0x1423e0 - 0x142430
void sub_001423E0_0x1423e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001423E0_0x1423e0");
#endif

    switch (ctx->pc) {
        case 0x142410u: goto label_142410;
        default: break;
    }

    ctx->pc = 0x1423e0u;

    // 0x1423e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1423e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1423e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1423e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1423e8: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1423e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x1423ec: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1423ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1423f0: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1423F0u;
    {
        const bool branch_taken_0x1423f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1423f0) {
            ctx->pc = 0x142414u;
            goto label_142414;
        }
    }
    ctx->pc = 0x1423F8u;
    // 0x1423f8: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1423f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1423fc: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1423FCu;
    {
        const bool branch_taken_0x1423fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1423fc) {
            ctx->pc = 0x142414u;
            goto label_142414;
        }
    }
    ctx->pc = 0x142404u;
    // 0x142404: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x142404u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x142408: 0xc119c5c  jal         func_467170
    ctx->pc = 0x142408u;
    SET_GPR_U32(ctx, 31, 0x142410u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x142408u, 0x142410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142410u;
label_142410:
    // 0x142410: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x142410u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
label_142414:
    // 0x142414: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x142414u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x142418: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x142418u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x14241c: 0x3e00008  jr          $ra
    ctx->pc = 0x14241Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14241Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x142424u;
    // 0x142424: 0x0  nop
    ctx->pc = 0x142424u;
    // NOP
    // 0x142428: 0x0  nop
    ctx->pc = 0x142428u;
    // NOP
    // 0x14242c: 0x0  nop
    ctx->pc = 0x14242cu;
    // NOP
    ctx->pc = 0x142430u;
}
