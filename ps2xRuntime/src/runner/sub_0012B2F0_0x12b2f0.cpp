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

// Function: sub_0012B2F0
// Address: 0x12b2f0 - 0x12b340
void sub_0012B2F0_0x12b2f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012B2F0_0x12b2f0");
#endif

    switch (ctx->pc) {
        case 0x12b328u: goto label_12b328;
        default: break;
    }

    ctx->pc = 0x12b2f0u;

    // 0x12b2f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x12b2f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x12b2f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x12b2f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12b2f8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x12b2f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x12b2fc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x12b2fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x12b300: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x12b300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12b304: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x12b304u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x12b308: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x12b308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12b30c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x12b30cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x12b310: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x12b310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12b314: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x12b314u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x12b318: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x12b318u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12b31c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x12b31cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b320: 0xc04acd0  jal         func_12B340
    ctx->pc = 0x12B320u;
    SET_GPR_U32(ctx, 31, 0x12B328u);
    ctx->pc = 0x12B340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B340u, 0x12B320u, 0x12B328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B328u;
label_12b328:
    // 0x12b328: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x12b328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12b32c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x12b32cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12b330: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x12b330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x12b334: 0x3e00008  jr          $ra
    ctx->pc = 0x12B334u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12B334u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12B33Cu;
    // 0x12b33c: 0x0  nop
    ctx->pc = 0x12b33cu;
    // NOP
    ctx->pc = 0x12b340u;
}
