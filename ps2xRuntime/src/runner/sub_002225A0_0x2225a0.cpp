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

// Function: sub_002225A0
// Address: 0x2225a0 - 0x2225e0
void sub_002225A0_0x2225a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002225A0_0x2225a0");
#endif

    switch (ctx->pc) {
        case 0x2225b8u: goto label_2225b8;
        case 0x2225ccu: goto label_2225cc;
        default: break;
    }

    ctx->pc = 0x2225a0u;

    // 0x2225a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2225a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2225a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2225a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2225a8: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x2225a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x2225ac: 0x27a40018  addiu       $a0, $sp, 0x18
    ctx->pc = 0x2225acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x2225b0: 0xc0889f8  jal         func_2227E0
    ctx->pc = 0x2225B0u;
    SET_GPR_U32(ctx, 31, 0x2225B8u);
    ctx->pc = 0x2227E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2227E0u, 0x2225B0u, 0x2225B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2225B8u;
label_2225b8:
    // 0x2225b8: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2225b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2225bc: 0x27a5001c  addiu       $a1, $sp, 0x1C
    ctx->pc = 0x2225bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x2225c0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2225c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2225c4: 0xc088978  jal         func_2225E0
    ctx->pc = 0x2225C4u;
    SET_GPR_U32(ctx, 31, 0x2225CCu);
    ctx->pc = 0x2225E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2225E0u, 0x2225C4u, 0x2225CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2225CCu;
label_2225cc:
    // 0x2225cc: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2225ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2225d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2225d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2225d4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2225d4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2225d8: 0x3e00008  jr          $ra
    ctx->pc = 0x2225D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2225D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2225E0u;
}
