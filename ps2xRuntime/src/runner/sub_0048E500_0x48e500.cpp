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

// Function: sub_0048E500
// Address: 0x48e500 - 0x48e540
void sub_0048E500_0x48e500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048E500_0x48e500");
#endif

    switch (ctx->pc) {
        case 0x48e520u: goto label_48e520;
        default: break;
    }

    ctx->pc = 0x48e500u;

    // 0x48e500: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x48e500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x48e504: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x48e504u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x48e508: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x48e508u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x48e50c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x48e50cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x48e510: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x48e510u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x48e514: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x48e514u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x48e518: 0xc123950  jal         func_48E540
    ctx->pc = 0x48E518u;
    SET_GPR_U32(ctx, 31, 0x48E520u);
    ctx->pc = 0x48E540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48E540u, 0x48E518u, 0x48E520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48E520u;
label_48e520:
    // 0x48e520: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x48e520u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x48e524: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x48e524u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48e528: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x48e528u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x48e52c: 0x3e00008  jr          $ra
    ctx->pc = 0x48E52Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48E52Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48E534u;
    // 0x48e534: 0x0  nop
    ctx->pc = 0x48e534u;
    // NOP
    // 0x48e538: 0x0  nop
    ctx->pc = 0x48e538u;
    // NOP
    // 0x48e53c: 0x0  nop
    ctx->pc = 0x48e53cu;
    // NOP
    ctx->pc = 0x48e540u;
}
