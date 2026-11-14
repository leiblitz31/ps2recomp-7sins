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

// Function: sub_0019E240
// Address: 0x19e240 - 0x19e280
void sub_0019E240_0x19e240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019E240_0x19e240");
#endif

    switch (ctx->pc) {
        case 0x19e270u: goto label_19e270;
        default: break;
    }

    ctx->pc = 0x19e240u;

    // 0x19e240: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x19e240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x19e244: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19e244u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19e248: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x19e248u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x19e24c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x19e24cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x19e250: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x19e250u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x19e254: 0xa3a0001c  sb          $zero, 0x1C($sp)
    ctx->pc = 0x19e254u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 28), (uint8_t)GPR_U32(ctx, 0));
    // 0x19e258: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x19e258u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19e25c: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x19e25cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19e260: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x19e260u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19e264: 0x27a7001c  addiu       $a3, $sp, 0x1C
    ctx->pc = 0x19e264u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x19e268: 0xc067858  jal         func_19E160
    ctx->pc = 0x19E268u;
    SET_GPR_U32(ctx, 31, 0x19E270u);
    ctx->pc = 0x19E160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E160u, 0x19E268u, 0x19E270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E270u;
label_19e270:
    // 0x19e270: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19e270u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19e274: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x19e274u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x19e278: 0x3e00008  jr          $ra
    ctx->pc = 0x19E278u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19E278u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19E280u;
}
