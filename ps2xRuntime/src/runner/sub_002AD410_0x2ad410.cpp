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

// Function: sub_002AD410
// Address: 0x2ad410 - 0x2ad470
void sub_002AD410_0x2ad410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AD410_0x2ad410");
#endif

    switch (ctx->pc) {
        case 0x2ad42cu: goto label_2ad42c;
        case 0x2ad43cu: goto label_2ad43c;
        case 0x2ad450u: goto label_2ad450;
        default: break;
    }

    ctx->pc = 0x2ad410u;

    // 0x2ad410: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2ad410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2ad414: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2ad414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2ad418: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2ad418u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2ad41c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x2ad41cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x2ad420: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2ad420u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ad424: 0xc0ab61c  jal         func_2AD870
    ctx->pc = 0x2AD424u;
    SET_GPR_U32(ctx, 31, 0x2AD42Cu);
    ctx->pc = 0x2AD870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AD870u, 0x2AD424u, 0x2AD42Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AD42Cu;
label_2ad42c:
    // 0x2ad42c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2ad42cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad430: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2ad430u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ad434: 0xc0ab614  jal         func_2AD850
    ctx->pc = 0x2AD434u;
    SET_GPR_U32(ctx, 31, 0x2AD43Cu);
    ctx->pc = 0x2AD850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AD850u, 0x2AD434u, 0x2AD43Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AD43Cu;
label_2ad43c:
    // 0x2ad43c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2ad43cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ad440: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2ad440u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad444: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2ad444u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad448: 0xc0ab51c  jal         func_2AD470
    ctx->pc = 0x2AD448u;
    SET_GPR_U32(ctx, 31, 0x2AD450u);
    ctx->pc = 0x2AD470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AD470u, 0x2AD448u, 0x2AD450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AD450u;
label_2ad450:
    // 0x2ad450: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2ad450u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ad454: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2ad454u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ad458: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2ad458u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2ad45c: 0x3e00008  jr          $ra
    ctx->pc = 0x2AD45Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AD45Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AD464u;
    // 0x2ad464: 0x0  nop
    ctx->pc = 0x2ad464u;
    // NOP
    // 0x2ad468: 0x0  nop
    ctx->pc = 0x2ad468u;
    // NOP
    // 0x2ad46c: 0x0  nop
    ctx->pc = 0x2ad46cu;
    // NOP
    ctx->pc = 0x2ad470u;
}
