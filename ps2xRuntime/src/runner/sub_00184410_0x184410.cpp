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

// Function: sub_00184410
// Address: 0x184410 - 0x184460
void sub_00184410_0x184410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00184410_0x184410");
#endif

    switch (ctx->pc) {
        case 0x184448u: goto label_184448;
        default: break;
    }

    ctx->pc = 0x184410u;

    // 0x184410: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x184410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x184414: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x184414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x184418: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x184418u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x18441c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x18441cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x184420: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x184420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x184424: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x184424u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x184428: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x184428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18442c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x18442cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x184430: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x184430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x184434: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x184434u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x184438: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x184438u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18443c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x18443cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184440: 0xc061118  jal         func_184460
    ctx->pc = 0x184440u;
    SET_GPR_U32(ctx, 31, 0x184448u);
    ctx->pc = 0x184460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x184460u, 0x184440u, 0x184448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184448u;
label_184448:
    // 0x184448: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x184448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18444c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18444cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x184450: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x184450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x184454: 0x3e00008  jr          $ra
    ctx->pc = 0x184454u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x184454u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18445Cu;
    // 0x18445c: 0x0  nop
    ctx->pc = 0x18445cu;
    // NOP
    ctx->pc = 0x184460u;
}
