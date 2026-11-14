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

// Function: sub_0028F1E0
// Address: 0x28f1e0 - 0x28f220
void sub_0028F1E0_0x28f1e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028F1E0_0x28f1e0");
#endif

    switch (ctx->pc) {
        case 0x28f1f8u: goto label_28f1f8;
        case 0x28f208u: goto label_28f208;
        default: break;
    }

    ctx->pc = 0x28f1e0u;

    // 0x28f1e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x28f1e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x28f1e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x28f1e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x28f1e8: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x28f1e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x28f1ec: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x28f1ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28f1f0: 0xc0a3c00  jal         func_28F000
    ctx->pc = 0x28F1F0u;
    SET_GPR_U32(ctx, 31, 0x28F1F8u);
    ctx->pc = 0x28F000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28F000u, 0x28F1F0u, 0x28F1F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F1F8u;
label_28f1f8:
    // 0x28f1f8: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x28f1f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x28f1fc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x28f1fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f200: 0xc0a3c88  jal         func_28F220
    ctx->pc = 0x28F200u;
    SET_GPR_U32(ctx, 31, 0x28F208u);
    ctx->pc = 0x28F220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28F220u, 0x28F200u, 0x28F208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F208u;
label_28f208:
    // 0x28f208: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28f208u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28f20c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x28f20cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x28f210: 0x3e00008  jr          $ra
    ctx->pc = 0x28F210u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28F210u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28F218u;
    // 0x28f218: 0x0  nop
    ctx->pc = 0x28f218u;
    // NOP
    // 0x28f21c: 0x0  nop
    ctx->pc = 0x28f21cu;
    // NOP
    ctx->pc = 0x28f220u;
}
