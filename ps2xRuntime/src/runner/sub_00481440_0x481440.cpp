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

// Function: sub_00481440
// Address: 0x481440 - 0x481480
void sub_00481440_0x481440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00481440_0x481440");
#endif

    switch (ctx->pc) {
        case 0x481458u: goto label_481458;
        case 0x481468u: goto label_481468;
        default: break;
    }

    ctx->pc = 0x481440u;

    // 0x481440: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x481440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x481444: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x481444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x481448: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x481448u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x48144c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x48144cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x481450: 0xc0f5392  jal         func_3D4E48
    ctx->pc = 0x481450u;
    SET_GPR_U32(ctx, 31, 0x481458u);
    ctx->pc = 0x3D4E48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4E48u, 0x481450u, 0x481458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x481458u;
label_481458:
    // 0x481458: 0x34450001  ori         $a1, $v0, 0x1
    ctx->pc = 0x481458u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x48145c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x48145cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x481460: 0xc0f5398  jal         func_3D4E60
    ctx->pc = 0x481460u;
    SET_GPR_U32(ctx, 31, 0x481468u);
    ctx->pc = 0x3D4E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4E60u, 0x481460u, 0x481468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x481468u;
label_481468:
    // 0x481468: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x481468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x48146c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x48146cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x481470: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x481470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x481474: 0x3e00008  jr          $ra
    ctx->pc = 0x481474u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x481474u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48147Cu;
    // 0x48147c: 0x0  nop
    ctx->pc = 0x48147cu;
    // NOP
    ctx->pc = 0x481480u;
}
