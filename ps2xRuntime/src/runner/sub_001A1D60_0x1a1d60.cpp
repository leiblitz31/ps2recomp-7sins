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

// Function: sub_001A1D60
// Address: 0x1a1d60 - 0x1a1da0
void sub_001A1D60_0x1a1d60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A1D60_0x1a1d60");
#endif

    switch (ctx->pc) {
        case 0x1a1d84u: goto label_1a1d84;
        default: break;
    }

    ctx->pc = 0x1a1d60u;

    // 0x1a1d60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a1d60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a1d64: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a1d64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a1d68: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1a1d68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1a1d6c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1a1d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x1a1d70: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1a1d70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a1d74: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x1a1d74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a1d78: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1a1d78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1d7c: 0xc068768  jal         func_1A1DA0
    ctx->pc = 0x1A1D7Cu;
    SET_GPR_U32(ctx, 31, 0x1A1D84u);
    ctx->pc = 0x1A1DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1DA0u, 0x1A1D7Cu, 0x1A1D84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1D84u;
label_1a1d84:
    // 0x1a1d84: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a1d84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a1d88: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1a1d88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1a1d8c: 0x3e00008  jr          $ra
    ctx->pc = 0x1A1D8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A1D8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A1D94u;
    // 0x1a1d94: 0x0  nop
    ctx->pc = 0x1a1d94u;
    // NOP
    // 0x1a1d98: 0x0  nop
    ctx->pc = 0x1a1d98u;
    // NOP
    // 0x1a1d9c: 0x0  nop
    ctx->pc = 0x1a1d9cu;
    // NOP
    ctx->pc = 0x1a1da0u;
}
