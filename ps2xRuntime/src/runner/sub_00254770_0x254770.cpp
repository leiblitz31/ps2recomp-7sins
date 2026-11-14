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

// Function: sub_00254770
// Address: 0x254770 - 0x2547b0
void sub_00254770_0x254770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00254770_0x254770");
#endif

    switch (ctx->pc) {
        case 0x254788u: goto label_254788;
        case 0x25479cu: goto label_25479c;
        default: break;
    }

    ctx->pc = 0x254770u;

    // 0x254770: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x254770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x254774: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x254774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x254778: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x254778u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x25477c: 0x27a40018  addiu       $a0, $sp, 0x18
    ctx->pc = 0x25477cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x254780: 0xc09526c  jal         func_2549B0
    ctx->pc = 0x254780u;
    SET_GPR_U32(ctx, 31, 0x254788u);
    ctx->pc = 0x2549B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2549B0u, 0x254780u, 0x254788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254788u;
label_254788:
    // 0x254788: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x254788u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25478c: 0x27a5001c  addiu       $a1, $sp, 0x1C
    ctx->pc = 0x25478cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x254790: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x254790u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254794: 0xc0951ec  jal         func_2547B0
    ctx->pc = 0x254794u;
    SET_GPR_U32(ctx, 31, 0x25479Cu);
    ctx->pc = 0x2547B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2547B0u, 0x254794u, 0x25479Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25479Cu;
label_25479c:
    // 0x25479c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x25479cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2547a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2547a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2547a4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2547a4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2547a8: 0x3e00008  jr          $ra
    ctx->pc = 0x2547A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2547A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2547B0u;
}
