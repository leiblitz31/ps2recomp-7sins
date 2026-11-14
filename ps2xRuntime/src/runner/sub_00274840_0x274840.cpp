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

// Function: sub_00274840
// Address: 0x274840 - 0x274880
void sub_00274840_0x274840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00274840_0x274840");
#endif

    switch (ctx->pc) {
        case 0x27485cu: goto label_27485c;
        default: break;
    }

    ctx->pc = 0x274840u;

    // 0x274840: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x274840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x274844: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x274844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x274848: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x274848u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x27484c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x27484cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x274850: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x274850u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x274854: 0xc09d250  jal         func_274940
    ctx->pc = 0x274854u;
    SET_GPR_U32(ctx, 31, 0x27485Cu);
    ctx->pc = 0x274940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274940u, 0x274854u, 0x27485Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27485Cu;
label_27485c:
    // 0x27485c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x27485cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x274860: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x274860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x274864: 0x3e00008  jr          $ra
    ctx->pc = 0x274864u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x274864u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27486Cu;
    // 0x27486c: 0x0  nop
    ctx->pc = 0x27486cu;
    // NOP
    // 0x274870: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x274870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x274874: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x274874u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x274878: 0x3e00008  jr          $ra
    ctx->pc = 0x274878u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x274878u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x274880u;
}
