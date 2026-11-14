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

// Function: sub_0048EEA0
// Address: 0x48eea0 - 0x48eed0
void sub_0048EEA0_0x48eea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048EEA0_0x48eea0");
#endif

    switch (ctx->pc) {
        case 0x48eeb8u: goto label_48eeb8;
        default: break;
    }

    ctx->pc = 0x48eea0u;

    // 0x48eea0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x48eea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x48eea4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x48eea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x48eea8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x48eea8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x48eeac: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x48eeacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x48eeb0: 0xc123bb4  jal         func_48EED0
    ctx->pc = 0x48EEB0u;
    SET_GPR_U32(ctx, 31, 0x48EEB8u);
    ctx->pc = 0x48EED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48EED0u, 0x48EEB0u, 0x48EEB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48EEB8u;
label_48eeb8:
    // 0x48eeb8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x48eeb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48eebc: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x48eebcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x48eec0: 0x3e00008  jr          $ra
    ctx->pc = 0x48EEC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48EEC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48EEC8u;
    // 0x48eec8: 0x0  nop
    ctx->pc = 0x48eec8u;
    // NOP
    // 0x48eecc: 0x0  nop
    ctx->pc = 0x48eeccu;
    // NOP
    ctx->pc = 0x48eed0u;
}
