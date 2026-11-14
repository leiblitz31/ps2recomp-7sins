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

// Function: sub_0017BA90
// Address: 0x17ba90 - 0x17bad0
void sub_0017BA90_0x17ba90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017BA90_0x17ba90");
#endif

    switch (ctx->pc) {
        case 0x17bab8u: goto label_17bab8;
        default: break;
    }

    ctx->pc = 0x17ba90u;

    // 0x17ba90: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x17ba90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x17ba94: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17ba94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17ba98: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x17ba98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x17ba9c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x17ba9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x17baa0: 0xa3a0001c  sb          $zero, 0x1C($sp)
    ctx->pc = 0x17baa0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 28), (uint8_t)GPR_U32(ctx, 0));
    // 0x17baa4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x17baa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17baa8: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x17baa8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17baac: 0x27a6001c  addiu       $a2, $sp, 0x1C
    ctx->pc = 0x17baacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x17bab0: 0xc05eeb4  jal         func_17BAD0
    ctx->pc = 0x17BAB0u;
    SET_GPR_U32(ctx, 31, 0x17BAB8u);
    ctx->pc = 0x17BAD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17BAD0u, 0x17BAB0u, 0x17BAB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17BAB8u;
label_17bab8:
    // 0x17bab8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17bab8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17babc: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x17babcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x17bac0: 0x3e00008  jr          $ra
    ctx->pc = 0x17BAC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17BAC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17BAC8u;
    // 0x17bac8: 0x0  nop
    ctx->pc = 0x17bac8u;
    // NOP
    // 0x17bacc: 0x0  nop
    ctx->pc = 0x17baccu;
    // NOP
    ctx->pc = 0x17bad0u;
}
