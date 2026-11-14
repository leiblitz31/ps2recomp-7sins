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

// Function: sub_00222750
// Address: 0x222750 - 0x2227a0
void sub_00222750_0x222750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00222750_0x222750");
#endif

    switch (ctx->pc) {
        case 0x222774u: goto label_222774;
        default: break;
    }

    ctx->pc = 0x222750u;

    // 0x222750: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x222750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x222754: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x222754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x222758: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x222758u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x22275c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x22275cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x222760: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x222760u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x222764: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x222764u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x222768: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x222768u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22276c: 0xc0889e8  jal         func_2227A0
    ctx->pc = 0x22276Cu;
    SET_GPR_U32(ctx, 31, 0x222774u);
    ctx->pc = 0x2227A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2227A0u, 0x22276Cu, 0x222774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222774u;
label_222774:
    // 0x222774: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x222774u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x222778: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x222778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22277c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x22277cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x222780: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x222780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x222784: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x222784u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x222788: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x222788u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x22278c: 0x3e00008  jr          $ra
    ctx->pc = 0x22278Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22278Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x222794u;
    // 0x222794: 0x0  nop
    ctx->pc = 0x222794u;
    // NOP
    // 0x222798: 0x0  nop
    ctx->pc = 0x222798u;
    // NOP
    // 0x22279c: 0x0  nop
    ctx->pc = 0x22279cu;
    // NOP
    ctx->pc = 0x2227a0u;
}
