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

// Function: sub_0010E1E0
// Address: 0x10e1e0 - 0x10e260
void sub_0010E1E0_0x10e1e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010E1E0_0x10e1e0");
#endif

    switch (ctx->pc) {
        case 0x10e200u: goto label_10e200;
        case 0x10e210u: goto label_10e210;
        case 0x10e228u: goto label_10e228;
        case 0x10e240u: goto label_10e240;
        default: break;
    }

    ctx->pc = 0x10e1e0u;

    // 0x10e1e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x10e1e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x10e1e4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x10e1e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x10e1e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x10e1e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x10e1ec: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x10e1ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x10e1f0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x10e1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10e1f4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x10e1f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10e1f8: 0xc043898  jal         func_10E260
    ctx->pc = 0x10E1F8u;
    SET_GPR_U32(ctx, 31, 0x10E200u);
    ctx->pc = 0x10E260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E260u, 0x10E1F8u, 0x10E200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E200u;
label_10e200:
    // 0x10e200: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x10e200u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x10e204: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x10e204u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10e208: 0xc04383c  jal         func_10E0F0
    ctx->pc = 0x10E208u;
    SET_GPR_U32(ctx, 31, 0x10E210u);
    ctx->pc = 0x10E0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E0F0u, 0x10E208u, 0x10E210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E210u;
label_10e210:
    // 0x10e210: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x10e210u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x10e214: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x10e214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10e218: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x10e218u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10e21c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x10e21cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10e220: 0xc043834  jal         func_10E0D0
    ctx->pc = 0x10E220u;
    SET_GPR_U32(ctx, 31, 0x10E228u);
    ctx->pc = 0x10E0D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E0D0u, 0x10E220u, 0x10E228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E228u;
label_10e228:
    // 0x10e228: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x10e228u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x10e22c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x10e22cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10e230: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x10e230u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10e234: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x10e234u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10e238: 0xc04382c  jal         func_10E0B0
    ctx->pc = 0x10E238u;
    SET_GPR_U32(ctx, 31, 0x10E240u);
    ctx->pc = 0x10E0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E0B0u, 0x10E238u, 0x10E240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E240u;
label_10e240:
    // 0x10e240: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x10e240u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x10e244: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x10e244u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10e248: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x10e248u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10e24c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x10e24cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x10e250: 0x3e00008  jr          $ra
    ctx->pc = 0x10E250u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10E250u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10E258u;
    // 0x10e258: 0x0  nop
    ctx->pc = 0x10e258u;
    // NOP
    // 0x10e25c: 0x0  nop
    ctx->pc = 0x10e25cu;
    // NOP
    ctx->pc = 0x10e260u;
}
