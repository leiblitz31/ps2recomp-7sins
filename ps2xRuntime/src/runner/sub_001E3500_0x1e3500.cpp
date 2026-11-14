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

// Function: sub_001E3500
// Address: 0x1e3500 - 0x1e3560
void sub_001E3500_0x1e3500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E3500_0x1e3500");
#endif

    switch (ctx->pc) {
        case 0x1e3528u: goto label_1e3528;
        case 0x1e3548u: goto label_1e3548;
        default: break;
    }

    ctx->pc = 0x1e3500u;

    // 0x1e3500: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1e3500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1e3504: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e3504u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e3508: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1e3508u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x1e350c: 0xffa50030  sd          $a1, 0x30($sp)
    ctx->pc = 0x1e350cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 5));
    // 0x1e3510: 0xffa60040  sd          $a2, 0x40($sp)
    ctx->pc = 0x1e3510u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 6));
    // 0x1e3514: 0xafa70050  sw          $a3, 0x50($sp)
    ctx->pc = 0x1e3514u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 7));
    // 0x1e3518: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1e3518u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1e351c: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x1e351cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e3520: 0xc0788d4  jal         func_1E2350
    ctx->pc = 0x1E3520u;
    SET_GPR_U32(ctx, 31, 0x1E3528u);
    ctx->pc = 0x1E2350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2350u, 0x1E3520u, 0x1E3528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3528u;
label_1e3528:
    // 0x1e3528: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1e3528u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e352c: 0xdfa50030  ld          $a1, 0x30($sp)
    ctx->pc = 0x1e352cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e3530: 0xdfa60040  ld          $a2, 0x40($sp)
    ctx->pc = 0x1e3530u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e3534: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1e3534u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3538: 0x27a8001c  addiu       $t0, $sp, 0x1C
    ctx->pc = 0x1e3538u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x1e353c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1e353cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3540: 0xc078d58  jal         func_1E3560
    ctx->pc = 0x1E3540u;
    SET_GPR_U32(ctx, 31, 0x1E3548u);
    ctx->pc = 0x1E3560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E3560u, 0x1E3540u, 0x1E3548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3548u;
label_1e3548:
    // 0x1e3548: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1e3548u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e354c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e354cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e3550: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x1e3550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1e3554: 0x3e00008  jr          $ra
    ctx->pc = 0x1E3554u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E3554u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E355Cu;
    // 0x1e355c: 0x0  nop
    ctx->pc = 0x1e355cu;
    // NOP
    ctx->pc = 0x1e3560u;
}
