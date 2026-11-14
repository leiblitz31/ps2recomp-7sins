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

// Function: sub_00280A50
// Address: 0x280a50 - 0x280a90
void sub_00280A50_0x280a50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00280A50_0x280a50");
#endif

    switch (ctx->pc) {
        case 0x280a74u: goto label_280a74;
        default: break;
    }

    ctx->pc = 0x280a50u;

    // 0x280a50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x280a50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x280a54: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x280a54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x280a58: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x280a58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x280a5c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x280a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x280a60: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x280a60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x280a64: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x280a64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280a68: 0x8fa60020  lw          $a2, 0x20($sp)
    ctx->pc = 0x280a68u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x280a6c: 0xc0a02a4  jal         func_280A90
    ctx->pc = 0x280A6Cu;
    SET_GPR_U32(ctx, 31, 0x280A74u);
    ctx->pc = 0x280A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280A90u, 0x280A6Cu, 0x280A74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280A74u;
label_280a74:
    // 0x280a74: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x280a74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x280a78: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x280a78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x280a7c: 0x3e00008  jr          $ra
    ctx->pc = 0x280A7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x280A7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x280A84u;
    // 0x280a84: 0x0  nop
    ctx->pc = 0x280a84u;
    // NOP
    // 0x280a88: 0x0  nop
    ctx->pc = 0x280a88u;
    // NOP
    // 0x280a8c: 0x0  nop
    ctx->pc = 0x280a8cu;
    // NOP
    ctx->pc = 0x280a90u;
}
