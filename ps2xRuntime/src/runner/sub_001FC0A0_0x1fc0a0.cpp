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

// Function: sub_001FC0A0
// Address: 0x1fc0a0 - 0x1fc0f0
void sub_001FC0A0_0x1fc0a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FC0A0_0x1fc0a0");
#endif

    switch (ctx->pc) {
        case 0x1fc0d8u: goto label_1fc0d8;
        default: break;
    }

    ctx->pc = 0x1fc0a0u;

    // 0x1fc0a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1fc0a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1fc0a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1fc0a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1fc0a8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1fc0a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1fc0ac: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1fc0acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x1fc0b0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1fc0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fc0b4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1fc0b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1fc0b8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1fc0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fc0bc: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1fc0bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1fc0c0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1fc0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fc0c4: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x1fc0c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x1fc0c8: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x1fc0c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fc0cc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1fc0ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc0d0: 0xc07f03c  jal         func_1FC0F0
    ctx->pc = 0x1FC0D0u;
    SET_GPR_U32(ctx, 31, 0x1FC0D8u);
    ctx->pc = 0x1FC0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC0F0u, 0x1FC0D0u, 0x1FC0D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC0D8u;
label_1fc0d8:
    // 0x1fc0d8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1fc0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fc0dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fc0dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fc0e0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1fc0e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1fc0e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1FC0E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FC0E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FC0ECu;
    // 0x1fc0ec: 0x0  nop
    ctx->pc = 0x1fc0ecu;
    // NOP
    ctx->pc = 0x1fc0f0u;
}
