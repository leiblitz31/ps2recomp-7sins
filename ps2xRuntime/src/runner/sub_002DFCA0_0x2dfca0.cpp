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

// Function: sub_002DFCA0
// Address: 0x2dfca0 - 0x2dfce0
void sub_002DFCA0_0x2dfca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DFCA0_0x2dfca0");
#endif

    switch (ctx->pc) {
        case 0x2dfcc4u: goto label_2dfcc4;
        default: break;
    }

    ctx->pc = 0x2dfca0u;

    // 0x2dfca0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2dfca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2dfca4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2dfca4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2dfca8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2dfca8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2dfcac: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x2dfcacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x2dfcb0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2dfcb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dfcb4: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x2dfcb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2dfcb8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2dfcb8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dfcbc: 0xc0b7f38  jal         func_2DFCE0
    ctx->pc = 0x2DFCBCu;
    SET_GPR_U32(ctx, 31, 0x2DFCC4u);
    ctx->pc = 0x2DFCE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DFCE0u, 0x2DFCBCu, 0x2DFCC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DFCC4u;
label_2dfcc4:
    // 0x2dfcc4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2dfcc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dfcc8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2dfcc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2dfccc: 0x3e00008  jr          $ra
    ctx->pc = 0x2DFCCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DFCCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DFCD4u;
    // 0x2dfcd4: 0x0  nop
    ctx->pc = 0x2dfcd4u;
    // NOP
    // 0x2dfcd8: 0x0  nop
    ctx->pc = 0x2dfcd8u;
    // NOP
    // 0x2dfcdc: 0x0  nop
    ctx->pc = 0x2dfcdcu;
    // NOP
    ctx->pc = 0x2dfce0u;
}
