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

// Function: sub_002688E0
// Address: 0x2688e0 - 0x268920
void sub_002688E0_0x2688e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002688E0_0x2688e0");
#endif

    switch (ctx->pc) {
        case 0x268904u: goto label_268904;
        default: break;
    }

    ctx->pc = 0x2688e0u;

    // 0x2688e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2688e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2688e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2688e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2688e8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2688e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2688ec: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x2688ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x2688f0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2688f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2688f4: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x2688f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2688f8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2688f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2688fc: 0xc09a248  jal         func_268920
    ctx->pc = 0x2688FCu;
    SET_GPR_U32(ctx, 31, 0x268904u);
    ctx->pc = 0x268920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x268920u, 0x2688FCu, 0x268904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268904u;
label_268904:
    // 0x268904: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x268904u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x268908: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x268908u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x26890c: 0x3e00008  jr          $ra
    ctx->pc = 0x26890Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26890Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x268914u;
    // 0x268914: 0x0  nop
    ctx->pc = 0x268914u;
    // NOP
    // 0x268918: 0x0  nop
    ctx->pc = 0x268918u;
    // NOP
    // 0x26891c: 0x0  nop
    ctx->pc = 0x26891cu;
    // NOP
    ctx->pc = 0x268920u;
}
