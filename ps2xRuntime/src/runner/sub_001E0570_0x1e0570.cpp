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

// Function: sub_001E0570
// Address: 0x1e0570 - 0x1e05b0
void sub_001E0570_0x1e0570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E0570_0x1e0570");
#endif

    switch (ctx->pc) {
        case 0x1e0588u: goto label_1e0588;
        case 0x1e0598u: goto label_1e0598;
        default: break;
    }

    ctx->pc = 0x1e0570u;

    // 0x1e0570: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e0570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1e0574: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e0574u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e0578: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1e0578u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x1e057c: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x1e057cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x1e0580: 0xc0781ac  jal         func_1E06B0
    ctx->pc = 0x1E0580u;
    SET_GPR_U32(ctx, 31, 0x1E0588u);
    ctx->pc = 0x1E06B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E06B0u, 0x1E0580u, 0x1E0588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0588u;
label_1e0588:
    // 0x1e0588: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1e0588u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e058c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1e058cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0590: 0xc07816c  jal         func_1E05B0
    ctx->pc = 0x1E0590u;
    SET_GPR_U32(ctx, 31, 0x1E0598u);
    ctx->pc = 0x1E05B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E05B0u, 0x1E0590u, 0x1E0598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0598u;
label_1e0598:
    // 0x1e0598: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1e0598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e059c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e059cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e05a0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1e05a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1e05a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1E05A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E05A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E05ACu;
    // 0x1e05ac: 0x0  nop
    ctx->pc = 0x1e05acu;
    // NOP
    ctx->pc = 0x1e05b0u;
}
