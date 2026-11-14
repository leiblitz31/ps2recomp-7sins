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

// Function: sub_001E8390
// Address: 0x1e8390 - 0x1e83d0
void sub_001E8390_0x1e8390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E8390_0x1e8390");
#endif

    switch (ctx->pc) {
        case 0x1e83c0u: goto label_1e83c0;
        default: break;
    }

    ctx->pc = 0x1e8390u;

    // 0x1e8390: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1e8390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1e8394: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e8394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e8398: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1e8398u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x1e839c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x1e839cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x1e83a0: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x1e83a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x1e83a4: 0xa3a0001c  sb          $zero, 0x1C($sp)
    ctx->pc = 0x1e83a4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 28), (uint8_t)GPR_U32(ctx, 0));
    // 0x1e83a8: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1e83a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e83ac: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x1e83acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e83b0: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x1e83b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e83b4: 0x27a7001c  addiu       $a3, $sp, 0x1C
    ctx->pc = 0x1e83b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x1e83b8: 0xc07a0ac  jal         func_1E82B0
    ctx->pc = 0x1E83B8u;
    SET_GPR_U32(ctx, 31, 0x1E83C0u);
    ctx->pc = 0x1E82B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E82B0u, 0x1E83B8u, 0x1E83C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E83C0u;
label_1e83c0:
    // 0x1e83c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e83c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e83c4: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x1e83c4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1e83c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1E83C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E83C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E83D0u;
}
