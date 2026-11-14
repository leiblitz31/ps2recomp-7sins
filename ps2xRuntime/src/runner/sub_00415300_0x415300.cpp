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

// Function: sub_00415300
// Address: 0x415300 - 0x415328
void sub_00415300_0x415300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00415300_0x415300");
#endif

    switch (ctx->pc) {
        case 0x415318u: goto label_415318;
        default: break;
    }

    ctx->pc = 0x415300u;

    // 0x415300: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x415300u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x415304: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x415304u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x415308: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x415308u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
    // 0x41530c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x41530cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x415310: 0xc104aec  jal         func_412BB0
    ctx->pc = 0x415310u;
    SET_GPR_U32(ctx, 31, 0x415318u);
    ctx->pc = 0x415314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x415310u;
    // 0x415314: 0x2484c898  addiu       $a0, $a0, -0x3768 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x412BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x412BB0u, 0x415310u, 0x415318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x415318u;
label_415318:
    // 0x415318: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x415318u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x41531c: 0x24420038  addiu       $v0, $v0, 0x38
    ctx->pc = 0x41531cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 56));
    // 0x415320: 0x3e00008  jr          $ra
    ctx->pc = 0x415320u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x415324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x415320u;
        // 0x415324: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x415320u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x415328u;
}
