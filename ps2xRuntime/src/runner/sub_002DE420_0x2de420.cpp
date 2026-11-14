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

// Function: sub_002DE420
// Address: 0x2de420 - 0x2de470
void sub_002DE420_0x2de420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DE420_0x2de420");
#endif

    switch (ctx->pc) {
        case 0x2de458u: goto label_2de458;
        default: break;
    }

    ctx->pc = 0x2de420u;

    // 0x2de420: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2de420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2de424: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2de424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2de428: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2de428u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2de42c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x2de42cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x2de430: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2de430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2de434: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2de434u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2de438: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2de438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2de43c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2de43cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x2de440: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2de440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2de444: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x2de444u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x2de448: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x2de448u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2de44c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2de44cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de450: 0xc0b791c  jal         func_2DE470
    ctx->pc = 0x2DE450u;
    SET_GPR_U32(ctx, 31, 0x2DE458u);
    ctx->pc = 0x2DE470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE470u, 0x2DE450u, 0x2DE458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE458u;
label_2de458:
    // 0x2de458: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2de458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2de45c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2de45cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2de460: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2de460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2de464: 0x3e00008  jr          $ra
    ctx->pc = 0x2DE464u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DE464u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DE46Cu;
    // 0x2de46c: 0x0  nop
    ctx->pc = 0x2de46cu;
    // NOP
    ctx->pc = 0x2de470u;
}
