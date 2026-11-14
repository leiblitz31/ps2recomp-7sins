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

// Function: sub_001144F0
// Address: 0x1144f0 - 0x114530
void sub_001144F0_0x1144f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001144F0_0x1144f0");
#endif

    switch (ctx->pc) {
        case 0x114510u: goto label_114510;
        case 0x114520u: goto label_114520;
        default: break;
    }

    ctx->pc = 0x1144f0u;

    // 0x1144f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1144f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1144f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1144f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1144f8: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1144f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x1144fc: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x1144fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x114500: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x114500u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x114504: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x114504u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x114508: 0xc0450c0  jal         func_114300
    ctx->pc = 0x114508u;
    SET_GPR_U32(ctx, 31, 0x114510u);
    ctx->pc = 0x114300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114300u, 0x114508u, 0x114510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114510u;
label_114510:
    // 0x114510: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x114510u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x114514: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x114514u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114518: 0xc04514c  jal         func_114530
    ctx->pc = 0x114518u;
    SET_GPR_U32(ctx, 31, 0x114520u);
    ctx->pc = 0x114530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114530u, 0x114518u, 0x114520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114520u;
label_114520:
    // 0x114520: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x114520u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x114524: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x114524u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x114528: 0x3e00008  jr          $ra
    ctx->pc = 0x114528u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x114528u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x114530u;
}
