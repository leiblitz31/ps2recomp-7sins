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

// Function: sub_00464CA0
// Address: 0x464ca0 - 0x464ce0
void sub_00464CA0_0x464ca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00464CA0_0x464ca0");
#endif

    switch (ctx->pc) {
        case 0x464cc8u: goto label_464cc8;
        default: break;
    }

    ctx->pc = 0x464ca0u;

    // 0x464ca0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x464ca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x464ca4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x464ca4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x464ca8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x464ca8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x464cac: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x464cacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x464cb0: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x464cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x464cb4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x464cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x464cb8: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x464cb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x464cbc: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x464cbcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x464cc0: 0xc0bd880  jal         func_2F6200
    ctx->pc = 0x464CC0u;
    SET_GPR_U32(ctx, 31, 0x464CC8u);
    ctx->pc = 0x2F6200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F6200u, 0x464CC0u, 0x464CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x464CC8u;
label_464cc8:
    // 0x464cc8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x464cc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x464ccc: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x464cccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x464cd0: 0x3e00008  jr          $ra
    ctx->pc = 0x464CD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x464CD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x464CD8u;
    // 0x464cd8: 0x0  nop
    ctx->pc = 0x464cd8u;
    // NOP
    // 0x464cdc: 0x0  nop
    ctx->pc = 0x464cdcu;
    // NOP
    ctx->pc = 0x464ce0u;
}
