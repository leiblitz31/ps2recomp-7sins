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

// Function: sub_00280B70
// Address: 0x280b70 - 0x280bb0
void sub_00280B70_0x280b70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00280B70_0x280b70");
#endif

    switch (ctx->pc) {
        case 0x280b90u: goto label_280b90;
        case 0x280ba0u: goto label_280ba0;
        default: break;
    }

    ctx->pc = 0x280b70u;

    // 0x280b70: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x280b70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x280b74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x280b74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x280b78: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x280b78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x280b7c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x280b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x280b80: 0x27a40018  addiu       $a0, $sp, 0x18
    ctx->pc = 0x280b80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x280b84: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x280b84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x280b88: 0xc0a02ec  jal         func_280BB0
    ctx->pc = 0x280B88u;
    SET_GPR_U32(ctx, 31, 0x280B90u);
    ctx->pc = 0x280BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280BB0u, 0x280B88u, 0x280B90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280B90u;
label_280b90:
    // 0x280b90: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x280b90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x280b94: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x280b94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280b98: 0xc0a0910  jal         func_282440
    ctx->pc = 0x280B98u;
    SET_GPR_U32(ctx, 31, 0x280BA0u);
    ctx->pc = 0x282440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x282440u, 0x280B98u, 0x280BA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280BA0u;
label_280ba0:
    // 0x280ba0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x280ba0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x280ba4: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x280ba4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x280ba8: 0x3e00008  jr          $ra
    ctx->pc = 0x280BA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x280BA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x280BB0u;
}
