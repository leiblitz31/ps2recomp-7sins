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

// Function: sub_002253F0
// Address: 0x2253f0 - 0x225440
void sub_002253F0_0x2253f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002253F0_0x2253f0");
#endif

    switch (ctx->pc) {
        case 0x225420u: goto label_225420;
        default: break;
    }

    ctx->pc = 0x2253f0u;

    // 0x2253f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2253f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2253f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2253f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2253f8: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x2253f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x2253fc: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x2253fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x225400: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x225400u;
    {
        const bool branch_taken_0x225400 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x225400) {
            ctx->pc = 0x225424u;
            goto label_225424;
        }
    }
    ctx->pc = 0x225408u;
    // 0x225408: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x225408u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22540c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x22540Cu;
    {
        const bool branch_taken_0x22540c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x22540c) {
            ctx->pc = 0x225424u;
            goto label_225424;
        }
    }
    ctx->pc = 0x225414u;
    // 0x225414: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x225414u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x225418: 0xc119c5c  jal         func_467170
    ctx->pc = 0x225418u;
    SET_GPR_U32(ctx, 31, 0x225420u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x225418u, 0x225420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225420u;
label_225420:
    // 0x225420: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x225420u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
label_225424:
    // 0x225424: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x225424u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x225428: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x225428u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x22542c: 0x3e00008  jr          $ra
    ctx->pc = 0x22542Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22542Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x225434u;
    // 0x225434: 0x0  nop
    ctx->pc = 0x225434u;
    // NOP
    // 0x225438: 0x0  nop
    ctx->pc = 0x225438u;
    // NOP
    // 0x22543c: 0x0  nop
    ctx->pc = 0x22543cu;
    // NOP
    ctx->pc = 0x225440u;
}
