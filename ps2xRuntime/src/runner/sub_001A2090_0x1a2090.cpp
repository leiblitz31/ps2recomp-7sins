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

// Function: sub_001A2090
// Address: 0x1a2090 - 0x1a20e0
void sub_001A2090_0x1a2090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A2090_0x1a2090");
#endif

    switch (ctx->pc) {
        case 0x1a20c8u: goto label_1a20c8;
        default: break;
    }

    ctx->pc = 0x1a2090u;

    // 0x1a2090: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a2090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a2094: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a2094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a2098: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1a2098u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1a209c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1a209cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x1a20a0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1a20a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a20a4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1a20a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1a20a8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1a20a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a20ac: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1a20acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1a20b0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1a20b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a20b4: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x1a20b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x1a20b8: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x1a20b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a20bc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1a20bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a20c0: 0xc068838  jal         func_1A20E0
    ctx->pc = 0x1A20C0u;
    SET_GPR_U32(ctx, 31, 0x1A20C8u);
    ctx->pc = 0x1A20E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A20E0u, 0x1A20C0u, 0x1A20C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A20C8u;
label_1a20c8:
    // 0x1a20c8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1a20c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a20cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a20ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a20d0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1a20d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1a20d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1A20D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A20D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A20DCu;
    // 0x1a20dc: 0x0  nop
    ctx->pc = 0x1a20dcu;
    // NOP
    ctx->pc = 0x1a20e0u;
}
