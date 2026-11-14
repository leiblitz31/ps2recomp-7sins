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

// Function: sub_00198070
// Address: 0x198070 - 0x1980c0
void sub_00198070_0x198070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00198070_0x198070");
#endif

    switch (ctx->pc) {
        case 0x19808cu: goto label_19808c;
        case 0x1980a0u: goto label_1980a0;
        case 0x1980b0u: goto label_1980b0;
        default: break;
    }

    ctx->pc = 0x198070u;

    // 0x198070: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x198070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x198074: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x198074u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x198078: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x198078u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x19807c: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x19807cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
    // 0x198080: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x198080u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x198084: 0xc067090  jal         func_19C240
    ctx->pc = 0x198084u;
    SET_GPR_U32(ctx, 31, 0x19808Cu);
    ctx->pc = 0x19C240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C240u, 0x198084u, 0x19808Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19808Cu;
label_19808c:
    // 0x19808c: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x19808cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x198090: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x198090u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x198094: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x198094u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x198098: 0xc066030  jal         func_1980C0
    ctx->pc = 0x198098u;
    SET_GPR_U32(ctx, 31, 0x1980A0u);
    ctx->pc = 0x1980C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1980C0u, 0x198098u, 0x1980A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1980A0u;
label_1980a0:
    // 0x1980a0: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1980a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1980a4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1980a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1980a8: 0xc0670bc  jal         func_19C2F0
    ctx->pc = 0x1980A8u;
    SET_GPR_U32(ctx, 31, 0x1980B0u);
    ctx->pc = 0x19C2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C2F0u, 0x1980A8u, 0x1980B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1980B0u;
label_1980b0:
    // 0x1980b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1980b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1980b4: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x1980b4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1980b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1980B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1980B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1980C0u;
}
