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

// Function: sub_0016E220
// Address: 0x16e220 - 0x16e260
void sub_0016E220_0x16e220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016E220_0x16e220");
#endif

    switch (ctx->pc) {
        case 0x16e238u: goto label_16e238;
        case 0x16e248u: goto label_16e248;
        default: break;
    }

    ctx->pc = 0x16e220u;

    // 0x16e220: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x16e220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x16e224: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16e224u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16e228: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x16e228u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x16e22c: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x16e22cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x16e230: 0xc05b8d8  jal         func_16E360
    ctx->pc = 0x16E230u;
    SET_GPR_U32(ctx, 31, 0x16E238u);
    ctx->pc = 0x16E360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16E360u, 0x16E230u, 0x16E238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E238u;
label_16e238:
    // 0x16e238: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x16e238u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16e23c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x16e23cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16e240: 0xc05b898  jal         func_16E260
    ctx->pc = 0x16E240u;
    SET_GPR_U32(ctx, 31, 0x16E248u);
    ctx->pc = 0x16E260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16E260u, 0x16E240u, 0x16E248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E248u;
label_16e248:
    // 0x16e248: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x16e248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16e24c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16e24cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16e250: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x16e250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x16e254: 0x3e00008  jr          $ra
    ctx->pc = 0x16E254u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16E254u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16E25Cu;
    // 0x16e25c: 0x0  nop
    ctx->pc = 0x16e25cu;
    // NOP
    ctx->pc = 0x16e260u;
}
