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

// Function: sub_00278750
// Address: 0x278750 - 0x2787a0
void sub_00278750_0x278750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00278750_0x278750");
#endif

    switch (ctx->pc) {
        case 0x278768u: goto label_278768;
        case 0x278780u: goto label_278780;
        default: break;
    }

    ctx->pc = 0x278750u;

    // 0x278750: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x278750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x278754: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x278754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x278758: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x278758u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x27875c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x27875cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x278760: 0xc12246c  jal         func_4891B0
    ctx->pc = 0x278760u;
    SET_GPR_U32(ctx, 31, 0x278768u);
    ctx->pc = 0x4891B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4891B0u, 0x278760u, 0x278768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278768u;
label_278768:
    // 0x278768: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x278768u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27876c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x27876cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278770: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x278770u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x278774: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x278774u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x278778: 0xc120480  jal         func_481200
    ctx->pc = 0x278778u;
    SET_GPR_U32(ctx, 31, 0x278780u);
    ctx->pc = 0x481200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x481200u, 0x278778u, 0x278780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278780u;
label_278780:
    // 0x278780: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x278780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x278784: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x278784u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x278788: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x278788u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x27878c: 0x3e00008  jr          $ra
    ctx->pc = 0x27878Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27878Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x278794u;
    // 0x278794: 0x0  nop
    ctx->pc = 0x278794u;
    // NOP
    // 0x278798: 0x0  nop
    ctx->pc = 0x278798u;
    // NOP
    // 0x27879c: 0x0  nop
    ctx->pc = 0x27879cu;
    // NOP
    ctx->pc = 0x2787a0u;
}
