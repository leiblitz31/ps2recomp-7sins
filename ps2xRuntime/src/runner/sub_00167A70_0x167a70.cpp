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

// Function: sub_00167A70
// Address: 0x167a70 - 0x167ab0
void sub_00167A70_0x167a70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00167A70_0x167a70");
#endif

    switch (ctx->pc) {
        case 0x167aa0u: goto label_167aa0;
        default: break;
    }

    ctx->pc = 0x167a70u;

    // 0x167a70: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x167a70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x167a74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x167a74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x167a78: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x167a78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x167a7c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x167a7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x167a80: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x167a80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x167a84: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x167a84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x167a88: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x167a88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x167a8c: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x167a8cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x167a90: 0x27a7001c  addiu       $a3, $sp, 0x1C
    ctx->pc = 0x167a90u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x167a94: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x167a94u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167a98: 0xc059eac  jal         func_167AB0
    ctx->pc = 0x167A98u;
    SET_GPR_U32(ctx, 31, 0x167AA0u);
    ctx->pc = 0x167AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167AB0u, 0x167A98u, 0x167AA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167AA0u;
label_167aa0:
    // 0x167aa0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x167aa0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x167aa4: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x167aa4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x167aa8: 0x3e00008  jr          $ra
    ctx->pc = 0x167AA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x167AA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x167AB0u;
}
