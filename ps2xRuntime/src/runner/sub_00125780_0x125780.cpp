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

// Function: sub_00125780
// Address: 0x125780 - 0x1257b0
void sub_00125780_0x125780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00125780_0x125780");
#endif

    switch (ctx->pc) {
        case 0x125798u: goto label_125798;
        default: break;
    }

    ctx->pc = 0x125780u;

    // 0x125780: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x125780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x125784: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x125784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x125788: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x125788u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x12578c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x12578cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x125790: 0xc0495ec  jal         func_1257B0
    ctx->pc = 0x125790u;
    SET_GPR_U32(ctx, 31, 0x125798u);
    ctx->pc = 0x1257B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1257B0u, 0x125790u, 0x125798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125798u;
label_125798:
    // 0x125798: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x125798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12579c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x12579cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1257a0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1257a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1257a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1257A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1257A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1257ACu;
    // 0x1257ac: 0x0  nop
    ctx->pc = 0x1257acu;
    // NOP
    ctx->pc = 0x1257b0u;
}
