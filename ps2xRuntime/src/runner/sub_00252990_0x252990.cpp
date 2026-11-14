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

// Function: sub_00252990
// Address: 0x252990 - 0x2529d0
void sub_00252990_0x252990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00252990_0x252990");
#endif

    switch (ctx->pc) {
        case 0x2529c0u: goto label_2529c0;
        default: break;
    }

    ctx->pc = 0x252990u;

    // 0x252990: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x252990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x252994: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x252994u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x252998: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x252998u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x25299c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x25299cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x2529a0: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x2529a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x2529a4: 0xa3a0001c  sb          $zero, 0x1C($sp)
    ctx->pc = 0x2529a4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 28), (uint8_t)GPR_U32(ctx, 0));
    // 0x2529a8: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2529a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2529ac: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x2529acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2529b0: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x2529b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2529b4: 0x27a7001c  addiu       $a3, $sp, 0x1C
    ctx->pc = 0x2529b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x2529b8: 0xc094a2c  jal         func_2528B0
    ctx->pc = 0x2529B8u;
    SET_GPR_U32(ctx, 31, 0x2529C0u);
    ctx->pc = 0x2528B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2528B0u, 0x2529B8u, 0x2529C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2529C0u;
label_2529c0:
    // 0x2529c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2529c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2529c4: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x2529c4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2529c8: 0x3e00008  jr          $ra
    ctx->pc = 0x2529C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2529C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2529D0u;
}
