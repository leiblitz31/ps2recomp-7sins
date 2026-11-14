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

// Function: sub_0044F980
// Address: 0x44f980 - 0x44f9d0
void sub_0044F980_0x44f980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0044F980_0x44f980");
#endif

    switch (ctx->pc) {
        case 0x44f9b8u: goto label_44f9b8;
        default: break;
    }

    ctx->pc = 0x44f980u;

    // 0x44f980: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x44f980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x44f984: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x44f984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x44f988: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x44f988u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x44f98c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x44f98cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x44f990: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x44f990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x44f994: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x44f994u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x44f998: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x44f998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x44f99c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x44f99cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x44f9a0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x44f9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x44f9a4: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x44f9a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x44f9a8: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x44f9a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x44f9ac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x44f9acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44f9b0: 0xc113e74  jal         func_44F9D0
    ctx->pc = 0x44F9B0u;
    SET_GPR_U32(ctx, 31, 0x44F9B8u);
    ctx->pc = 0x44F9D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44F9D0u, 0x44F9B0u, 0x44F9B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44F9B8u;
label_44f9b8:
    // 0x44f9b8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x44f9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x44f9bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x44f9bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x44f9c0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x44f9c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x44f9c4: 0x3e00008  jr          $ra
    ctx->pc = 0x44F9C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44F9C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x44F9CCu;
    // 0x44f9cc: 0x0  nop
    ctx->pc = 0x44f9ccu;
    // NOP
    ctx->pc = 0x44f9d0u;
}
