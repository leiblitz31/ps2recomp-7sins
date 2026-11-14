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

// Function: sub_00132850
// Address: 0x132850 - 0x1328a0
void sub_00132850_0x132850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00132850_0x132850");
#endif

    switch (ctx->pc) {
        case 0x132874u: goto label_132874;
        default: break;
    }

    ctx->pc = 0x132850u;

    // 0x132850: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x132850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x132854: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x132854u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x132858: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x132858u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x13285c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x13285cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x132860: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x132860u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x132864: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x132864u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x132868: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x132868u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13286c: 0xc04ca28  jal         func_1328A0
    ctx->pc = 0x13286Cu;
    SET_GPR_U32(ctx, 31, 0x132874u);
    ctx->pc = 0x1328A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1328A0u, 0x13286Cu, 0x132874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132874u;
label_132874:
    // 0x132874: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x132874u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x132878: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x132878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13287c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x13287cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x132880: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x132880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x132884: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x132884u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x132888: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x132888u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x13288c: 0x3e00008  jr          $ra
    ctx->pc = 0x13288Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13288Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x132894u;
    // 0x132894: 0x0  nop
    ctx->pc = 0x132894u;
    // NOP
    // 0x132898: 0x0  nop
    ctx->pc = 0x132898u;
    // NOP
    // 0x13289c: 0x0  nop
    ctx->pc = 0x13289cu;
    // NOP
    ctx->pc = 0x1328a0u;
}
