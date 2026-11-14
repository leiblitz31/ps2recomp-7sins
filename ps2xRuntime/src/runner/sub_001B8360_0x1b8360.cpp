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

// Function: sub_001B8360
// Address: 0x1b8360 - 0x1b83a0
void sub_001B8360_0x1b8360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B8360_0x1b8360");
#endif

    switch (ctx->pc) {
        case 0x1b8388u: goto label_1b8388;
        default: break;
    }

    ctx->pc = 0x1b8360u;

    // 0x1b8360: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1b8360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1b8364: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b8364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b8368: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1b8368u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1b836c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1b836cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x1b8370: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x1b8370u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x1b8374: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1b8374u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b8378: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x1b8378u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b837c: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x1b837cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b8380: 0xc06e0ac  jal         func_1B82B0
    ctx->pc = 0x1B8380u;
    SET_GPR_U32(ctx, 31, 0x1B8388u);
    ctx->pc = 0x1B82B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B82B0u, 0x1B8380u, 0x1B8388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8388u;
label_1b8388:
    // 0x1b8388: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b8388u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b838c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x1b838cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1b8390: 0x3e00008  jr          $ra
    ctx->pc = 0x1B8390u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B8390u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B8398u;
    // 0x1b8398: 0x0  nop
    ctx->pc = 0x1b8398u;
    // NOP
    // 0x1b839c: 0x0  nop
    ctx->pc = 0x1b839cu;
    // NOP
    ctx->pc = 0x1b83a0u;
}
