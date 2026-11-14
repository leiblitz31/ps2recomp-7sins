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

// Function: sub_001AF160
// Address: 0x1af160 - 0x1af1a0
void sub_001AF160_0x1af160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AF160_0x1af160");
#endif

    switch (ctx->pc) {
        case 0x1af184u: goto label_1af184;
        default: break;
    }

    ctx->pc = 0x1af160u;

    // 0x1af160: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1af160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1af164: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1af164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1af168: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1af168u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1af16c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1af16cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x1af170: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1af170u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1af174: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x1af174u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1af178: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1af178u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af17c: 0xc06bc68  jal         func_1AF1A0
    ctx->pc = 0x1AF17Cu;
    SET_GPR_U32(ctx, 31, 0x1AF184u);
    ctx->pc = 0x1AF1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF1A0u, 0x1AF17Cu, 0x1AF184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF184u;
label_1af184:
    // 0x1af184: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1af184u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1af188: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1af188u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1af18c: 0x3e00008  jr          $ra
    ctx->pc = 0x1AF18Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AF18Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AF194u;
    // 0x1af194: 0x0  nop
    ctx->pc = 0x1af194u;
    // NOP
    // 0x1af198: 0x0  nop
    ctx->pc = 0x1af198u;
    // NOP
    // 0x1af19c: 0x0  nop
    ctx->pc = 0x1af19cu;
    // NOP
    ctx->pc = 0x1af1a0u;
}
