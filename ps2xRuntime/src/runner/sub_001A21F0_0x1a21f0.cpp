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

// Function: sub_001A21F0
// Address: 0x1a21f0 - 0x1a2240
void sub_001A21F0_0x1a21f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A21F0_0x1a21f0");
#endif

    switch (ctx->pc) {
        case 0x1a2228u: goto label_1a2228;
        default: break;
    }

    ctx->pc = 0x1a21f0u;

    // 0x1a21f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a21f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a21f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a21f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a21f8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1a21f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1a21fc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1a21fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x1a2200: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1a2200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a2204: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1a2204u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1a2208: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1a2208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a220c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1a220cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1a2210: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1a2210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a2214: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x1a2214u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x1a2218: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x1a2218u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a221c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1a221cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2220: 0xc068890  jal         func_1A2240
    ctx->pc = 0x1A2220u;
    SET_GPR_U32(ctx, 31, 0x1A2228u);
    ctx->pc = 0x1A2240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2240u, 0x1A2220u, 0x1A2228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2228u;
label_1a2228:
    // 0x1a2228: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1a2228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a222c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a222cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a2230: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1a2230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1a2234: 0x3e00008  jr          $ra
    ctx->pc = 0x1A2234u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A2234u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A223Cu;
    // 0x1a223c: 0x0  nop
    ctx->pc = 0x1a223cu;
    // NOP
    ctx->pc = 0x1a2240u;
}
