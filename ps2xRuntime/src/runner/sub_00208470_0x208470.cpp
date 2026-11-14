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

// Function: sub_00208470
// Address: 0x208470 - 0x2084b0
void sub_00208470_0x208470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00208470_0x208470");
#endif

    switch (ctx->pc) {
        case 0x208488u: goto label_208488;
        case 0x208498u: goto label_208498;
        default: break;
    }

    ctx->pc = 0x208470u;

    // 0x208470: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x208470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x208474: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x208474u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x208478: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x208478u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x20847c: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x20847cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x208480: 0xc08216c  jal         func_2085B0
    ctx->pc = 0x208480u;
    SET_GPR_U32(ctx, 31, 0x208488u);
    ctx->pc = 0x2085B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2085B0u, 0x208480u, 0x208488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208488u;
label_208488:
    // 0x208488: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x208488u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20848c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x20848cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208490: 0xc08212c  jal         func_2084B0
    ctx->pc = 0x208490u;
    SET_GPR_U32(ctx, 31, 0x208498u);
    ctx->pc = 0x2084B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2084B0u, 0x208490u, 0x208498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208498u;
label_208498:
    // 0x208498: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x208498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20849c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20849cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2084a0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2084a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2084a4: 0x3e00008  jr          $ra
    ctx->pc = 0x2084A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2084A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2084ACu;
    // 0x2084ac: 0x0  nop
    ctx->pc = 0x2084acu;
    // NOP
    ctx->pc = 0x2084b0u;
}
