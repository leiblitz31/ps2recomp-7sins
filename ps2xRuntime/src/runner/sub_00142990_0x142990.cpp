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

// Function: sub_00142990
// Address: 0x142990 - 0x1429c0
void sub_00142990_0x142990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00142990_0x142990");
#endif

    switch (ctx->pc) {
        case 0x1429acu: goto label_1429ac;
        default: break;
    }

    ctx->pc = 0x142990u;

    // 0x142990: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x142990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x142994: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x142994u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x142998: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x142998u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x14299c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x14299cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1429a0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1429a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1429a4: 0xc04ad4c  jal         func_12B530
    ctx->pc = 0x1429A4u;
    SET_GPR_U32(ctx, 31, 0x1429ACu);
    ctx->pc = 0x12B530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B530u, 0x1429A4u, 0x1429ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1429ACu;
label_1429ac:
    // 0x1429ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1429acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1429b0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1429b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1429b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1429B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1429B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1429BCu;
    // 0x1429bc: 0x0  nop
    ctx->pc = 0x1429bcu;
    // NOP
    ctx->pc = 0x1429c0u;
}
