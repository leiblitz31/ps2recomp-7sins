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

// Function: sub_001E0490
// Address: 0x1e0490 - 0x1e04e0
void sub_001E0490_0x1e0490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E0490_0x1e0490");
#endif

    switch (ctx->pc) {
        case 0x1e04c8u: goto label_1e04c8;
        default: break;
    }

    ctx->pc = 0x1e0490u;

    // 0x1e0490: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e0490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1e0494: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e0494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e0498: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1e0498u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1e049c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1e049cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x1e04a0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1e04a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e04a4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1e04a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1e04a8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1e04a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e04ac: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1e04acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1e04b0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1e04b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e04b4: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x1e04b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x1e04b8: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x1e04b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e04bc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1e04bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e04c0: 0xc078138  jal         func_1E04E0
    ctx->pc = 0x1E04C0u;
    SET_GPR_U32(ctx, 31, 0x1E04C8u);
    ctx->pc = 0x1E04E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E04E0u, 0x1E04C0u, 0x1E04C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E04C8u;
label_1e04c8:
    // 0x1e04c8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1e04c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e04cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e04ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e04d0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1e04d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1e04d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1E04D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E04D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E04DCu;
    // 0x1e04dc: 0x0  nop
    ctx->pc = 0x1e04dcu;
    // NOP
    ctx->pc = 0x1e04e0u;
}
