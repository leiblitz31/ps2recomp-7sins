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

// Function: sub_00194C70
// Address: 0x194c70 - 0x194cb0
void sub_00194C70_0x194c70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00194C70_0x194c70");
#endif

    switch (ctx->pc) {
        case 0x194c94u: goto label_194c94;
        default: break;
    }

    ctx->pc = 0x194c70u;

    // 0x194c70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x194c70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x194c74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x194c74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x194c78: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x194c78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x194c7c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x194c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x194c80: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x194c80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x194c84: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x194c84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x194c88: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x194c88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194c8c: 0xc06532c  jal         func_194CB0
    ctx->pc = 0x194C8Cu;
    SET_GPR_U32(ctx, 31, 0x194C94u);
    ctx->pc = 0x194CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x194CB0u, 0x194C8Cu, 0x194C94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194C94u;
label_194c94:
    // 0x194c94: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x194c94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x194c98: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x194c98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x194c9c: 0x3e00008  jr          $ra
    ctx->pc = 0x194C9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x194C9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x194CA4u;
    // 0x194ca4: 0x0  nop
    ctx->pc = 0x194ca4u;
    // NOP
    // 0x194ca8: 0x0  nop
    ctx->pc = 0x194ca8u;
    // NOP
    // 0x194cac: 0x0  nop
    ctx->pc = 0x194cacu;
    // NOP
    ctx->pc = 0x194cb0u;
}
