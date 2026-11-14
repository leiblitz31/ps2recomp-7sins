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

// Function: sub_00195280
// Address: 0x195280 - 0x1952c0
void sub_00195280_0x195280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00195280_0x195280");
#endif

    switch (ctx->pc) {
        case 0x195298u: goto label_195298;
        case 0x1952a8u: goto label_1952a8;
        default: break;
    }

    ctx->pc = 0x195280u;

    // 0x195280: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x195280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x195284: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x195284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x195288: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x195288u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x19528c: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x19528cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x195290: 0xc0654f0  jal         func_1953C0
    ctx->pc = 0x195290u;
    SET_GPR_U32(ctx, 31, 0x195298u);
    ctx->pc = 0x1953C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1953C0u, 0x195290u, 0x195298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195298u;
label_195298:
    // 0x195298: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x195298u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19529c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x19529cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1952a0: 0xc0654b0  jal         func_1952C0
    ctx->pc = 0x1952A0u;
    SET_GPR_U32(ctx, 31, 0x1952A8u);
    ctx->pc = 0x1952C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1952C0u, 0x1952A0u, 0x1952A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1952A8u;
label_1952a8:
    // 0x1952a8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1952a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1952ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1952acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1952b0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1952b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1952b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1952B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1952B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1952BCu;
    // 0x1952bc: 0x0  nop
    ctx->pc = 0x1952bcu;
    // NOP
    ctx->pc = 0x1952c0u;
}
