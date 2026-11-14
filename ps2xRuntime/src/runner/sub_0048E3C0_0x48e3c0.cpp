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

// Function: sub_0048E3C0
// Address: 0x48e3c0 - 0x48e400
void sub_0048E3C0_0x48e3c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048E3C0_0x48e3c0");
#endif

    switch (ctx->pc) {
        case 0x48e3e4u: goto label_48e3e4;
        default: break;
    }

    ctx->pc = 0x48e3c0u;

    // 0x48e3c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x48e3c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x48e3c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x48e3c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x48e3c8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x48e3c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x48e3cc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x48e3ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x48e3d0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x48e3d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x48e3d4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x48e3d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48e3d8: 0x8fa60020  lw          $a2, 0x20($sp)
    ctx->pc = 0x48e3d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x48e3dc: 0xc123900  jal         func_48E400
    ctx->pc = 0x48E3DCu;
    SET_GPR_U32(ctx, 31, 0x48E3E4u);
    ctx->pc = 0x48E400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48E400u, 0x48E3DCu, 0x48E3E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48E3E4u;
label_48e3e4:
    // 0x48e3e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x48e3e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48e3e8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x48e3e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x48e3ec: 0x3e00008  jr          $ra
    ctx->pc = 0x48E3ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48E3ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48E3F4u;
    // 0x48e3f4: 0x0  nop
    ctx->pc = 0x48e3f4u;
    // NOP
    // 0x48e3f8: 0x0  nop
    ctx->pc = 0x48e3f8u;
    // NOP
    // 0x48e3fc: 0x0  nop
    ctx->pc = 0x48e3fcu;
    // NOP
    ctx->pc = 0x48e400u;
}
