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

// Function: sub_001E37A0
// Address: 0x1e37a0 - 0x1e37e0
void sub_001E37A0_0x1e37a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E37A0_0x1e37a0");
#endif

    switch (ctx->pc) {
        case 0x1e37b8u: goto label_1e37b8;
        case 0x1e37c8u: goto label_1e37c8;
        default: break;
    }

    ctx->pc = 0x1e37a0u;

    // 0x1e37a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e37a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1e37a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e37a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e37a8: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1e37a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x1e37ac: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x1e37acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x1e37b0: 0xc078e44  jal         func_1E3910
    ctx->pc = 0x1E37B0u;
    SET_GPR_U32(ctx, 31, 0x1E37B8u);
    ctx->pc = 0x1E3910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E3910u, 0x1E37B0u, 0x1E37B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E37B8u;
label_1e37b8:
    // 0x1e37b8: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1e37b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e37bc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1e37bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e37c0: 0xc078df8  jal         func_1E37E0
    ctx->pc = 0x1E37C0u;
    SET_GPR_U32(ctx, 31, 0x1E37C8u);
    ctx->pc = 0x1E37E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E37E0u, 0x1E37C0u, 0x1E37C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E37C8u;
label_1e37c8:
    // 0x1e37c8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1e37c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e37cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e37ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e37d0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1e37d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1e37d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1E37D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E37D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E37DCu;
    // 0x1e37dc: 0x0  nop
    ctx->pc = 0x1e37dcu;
    // NOP
    ctx->pc = 0x1e37e0u;
}
