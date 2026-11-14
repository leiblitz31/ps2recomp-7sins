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

// Function: sub_001DD970
// Address: 0x1dd970 - 0x1dd9b0
void sub_001DD970_0x1dd970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DD970_0x1dd970");
#endif

    switch (ctx->pc) {
        case 0x1dd98cu: goto label_1dd98c;
        case 0x1dd9a0u: goto label_1dd9a0;
        default: break;
    }

    ctx->pc = 0x1dd970u;

    // 0x1dd970: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1dd970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1dd974: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1dd974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1dd978: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1dd978u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1dd97c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1dd97cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dd980: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x1dd980u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1dd984: 0xc0647a8  jal         func_191EA0
    ctx->pc = 0x1DD984u;
    SET_GPR_U32(ctx, 31, 0x1DD98Cu);
    ctx->pc = 0x191EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EA0u, 0x1DD984u, 0x1DD98Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD98Cu;
label_1dd98c:
    // 0x1dd98c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1dd98cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dd990: 0x8c6500b4  lw          $a1, 0xB4($v1)
    ctx->pc = 0x1dd990u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 180)));
    // 0x1dd994: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1dd994u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd998: 0xc08c258  jal         func_230960
    ctx->pc = 0x1DD998u;
    SET_GPR_U32(ctx, 31, 0x1DD9A0u);
    ctx->pc = 0x230960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230960u, 0x1DD998u, 0x1DD9A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD9A0u;
label_1dd9a0:
    // 0x1dd9a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1dd9a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dd9a4: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1dd9a4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1dd9a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1DD9A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DD9A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DD9B0u;
}
