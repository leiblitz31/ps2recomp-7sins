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

// Function: sub_00125750
// Address: 0x125750 - 0x125780
void sub_00125750_0x125750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00125750_0x125750");
#endif

    switch (ctx->pc) {
        case 0x125768u: goto label_125768;
        default: break;
    }

    ctx->pc = 0x125750u;

    // 0x125750: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x125750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x125754: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x125754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x125758: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x125758u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x12575c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x12575cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x125760: 0xc0406e4  jal         func_101B90
    ctx->pc = 0x125760u;
    SET_GPR_U32(ctx, 31, 0x125768u);
    ctx->pc = 0x101B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101B90u, 0x125760u, 0x125768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125768u;
label_125768:
    // 0x125768: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x125768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12576c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x12576cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x125770: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x125770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x125774: 0x3e00008  jr          $ra
    ctx->pc = 0x125774u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x125774u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12577Cu;
    // 0x12577c: 0x0  nop
    ctx->pc = 0x12577cu;
    // NOP
    ctx->pc = 0x125780u;
}
