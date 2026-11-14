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

// Function: sub_00281470
// Address: 0x281470 - 0x2814b0
void sub_00281470_0x281470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00281470_0x281470");
#endif

    switch (ctx->pc) {
        case 0x281488u: goto label_281488;
        case 0x28149cu: goto label_28149c;
        default: break;
    }

    ctx->pc = 0x281470u;

    // 0x281470: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x281470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x281474: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x281474u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x281478: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x281478u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x28147c: 0x27a40018  addiu       $a0, $sp, 0x18
    ctx->pc = 0x28147cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x281480: 0xc0a05ac  jal         func_2816B0
    ctx->pc = 0x281480u;
    SET_GPR_U32(ctx, 31, 0x281488u);
    ctx->pc = 0x2816B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2816B0u, 0x281480u, 0x281488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281488u;
label_281488:
    // 0x281488: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x281488u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28148c: 0x27a5001c  addiu       $a1, $sp, 0x1C
    ctx->pc = 0x28148cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x281490: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x281490u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281494: 0xc0a052c  jal         func_2814B0
    ctx->pc = 0x281494u;
    SET_GPR_U32(ctx, 31, 0x28149Cu);
    ctx->pc = 0x2814B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2814B0u, 0x281494u, 0x28149Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28149Cu;
label_28149c:
    // 0x28149c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x28149cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2814a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2814a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2814a4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2814a4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2814a8: 0x3e00008  jr          $ra
    ctx->pc = 0x2814A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2814A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2814B0u;
}
