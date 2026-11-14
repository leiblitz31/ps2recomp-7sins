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

// Function: sub_001C6FC0
// Address: 0x1c6fc0 - 0x1c7010
void sub_001C6FC0_0x1c6fc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C6FC0_0x1c6fc0");
#endif

    switch (ctx->pc) {
        case 0x1c6ff8u: goto label_1c6ff8;
        default: break;
    }

    ctx->pc = 0x1c6fc0u;

    // 0x1c6fc0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c6fc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c6fc4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c6fc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c6fc8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1c6fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1c6fcc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1c6fccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x1c6fd0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1c6fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c6fd4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1c6fd4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1c6fd8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1c6fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c6fdc: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1c6fdcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1c6fe0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1c6fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c6fe4: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x1c6fe4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x1c6fe8: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x1c6fe8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c6fec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1c6fecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6ff0: 0xc071c04  jal         func_1C7010
    ctx->pc = 0x1C6FF0u;
    SET_GPR_U32(ctx, 31, 0x1C6FF8u);
    ctx->pc = 0x1C7010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7010u, 0x1C6FF0u, 0x1C6FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6FF8u;
label_1c6ff8:
    // 0x1c6ff8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1c6ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c6ffc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c6ffcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c7000: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1c7000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1c7004: 0x3e00008  jr          $ra
    ctx->pc = 0x1C7004u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C7004u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C700Cu;
    // 0x1c700c: 0x0  nop
    ctx->pc = 0x1c700cu;
    // NOP
    ctx->pc = 0x1c7010u;
}
