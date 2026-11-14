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

// Function: sub_0014A3C0
// Address: 0x14a3c0 - 0x14a3f0
void sub_0014A3C0_0x14a3c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014A3C0_0x14a3c0");
#endif

    switch (ctx->pc) {
        case 0x14a3d8u: goto label_14a3d8;
        default: break;
    }

    ctx->pc = 0x14a3c0u;

    // 0x14a3c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x14a3c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x14a3c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14a3c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14a3c8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x14a3c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x14a3cc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x14a3ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14a3d0: 0xc0528fc  jal         func_14A3F0
    ctx->pc = 0x14A3D0u;
    SET_GPR_U32(ctx, 31, 0x14A3D8u);
    ctx->pc = 0x14A3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A3F0u, 0x14A3D0u, 0x14A3D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A3D8u;
label_14a3d8:
    // 0x14a3d8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x14a3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14a3dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14a3dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14a3e0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x14a3e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x14a3e4: 0x3e00008  jr          $ra
    ctx->pc = 0x14A3E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14A3E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14A3ECu;
    // 0x14a3ec: 0x0  nop
    ctx->pc = 0x14a3ecu;
    // NOP
    ctx->pc = 0x14a3f0u;
}
