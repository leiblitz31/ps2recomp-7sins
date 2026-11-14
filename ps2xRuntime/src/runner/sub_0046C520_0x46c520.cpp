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

// Function: sub_0046C520
// Address: 0x46c520 - 0x46c560
void sub_0046C520_0x46c520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0046C520_0x46c520");
#endif

    switch (ctx->pc) {
        case 0x46c540u: goto label_46c540;
        default: break;
    }

    ctx->pc = 0x46c520u;

    // 0x46c520: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x46c520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x46c524: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x46c524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x46c528: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x46c528u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x46c52c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x46c52cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x46c530: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x46c530u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46c534: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x46c534u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x46c538: 0xc11b158  jal         func_46C560
    ctx->pc = 0x46C538u;
    SET_GPR_U32(ctx, 31, 0x46C540u);
    ctx->pc = 0x46C560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46C560u, 0x46C538u, 0x46C540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46C540u;
label_46c540:
    // 0x46c540: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x46c540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46c544: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x46c544u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x46c548: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x46c548u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x46c54c: 0x3e00008  jr          $ra
    ctx->pc = 0x46C54Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46C54Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x46C554u;
    // 0x46c554: 0x0  nop
    ctx->pc = 0x46c554u;
    // NOP
    // 0x46c558: 0x0  nop
    ctx->pc = 0x46c558u;
    // NOP
    // 0x46c55c: 0x0  nop
    ctx->pc = 0x46c55cu;
    // NOP
    ctx->pc = 0x46c560u;
}
