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

// Function: sub_0022CF70
// Address: 0x22cf70 - 0x22cfb0
void sub_0022CF70_0x22cf70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022CF70_0x22cf70");
#endif

    switch (ctx->pc) {
        case 0x22cfa0u: goto label_22cfa0;
        default: break;
    }

    ctx->pc = 0x22cf70u;

    // 0x22cf70: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x22cf70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x22cf74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22cf74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22cf78: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x22cf78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x22cf7c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x22cf7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x22cf80: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x22cf80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x22cf84: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x22cf84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22cf88: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x22cf88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22cf8c: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x22cf8cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x22cf90: 0x27a7001c  addiu       $a3, $sp, 0x1C
    ctx->pc = 0x22cf90u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x22cf94: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x22cf94u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22cf98: 0xc08b3ec  jal         func_22CFB0
    ctx->pc = 0x22CF98u;
    SET_GPR_U32(ctx, 31, 0x22CFA0u);
    ctx->pc = 0x22CFB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22CFB0u, 0x22CF98u, 0x22CFA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22CFA0u;
label_22cfa0:
    // 0x22cfa0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22cfa0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22cfa4: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x22cfa4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x22cfa8: 0x3e00008  jr          $ra
    ctx->pc = 0x22CFA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22CFA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22CFB0u;
}
