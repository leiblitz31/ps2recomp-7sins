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

// Function: sub_001C2770
// Address: 0x1c2770 - 0x1c27c0
void sub_001C2770_0x1c2770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C2770_0x1c2770");
#endif

    switch (ctx->pc) {
        case 0x1c2794u: goto label_1c2794;
        default: break;
    }

    ctx->pc = 0x1c2770u;

    // 0x1c2770: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1c2770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1c2774: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c2774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c2778: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1c2778u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1c277c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1c277cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x1c2780: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x1c2780u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x1c2784: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1c2784u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c2788: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x1c2788u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c278c: 0xc0709f0  jal         func_1C27C0
    ctx->pc = 0x1C278Cu;
    SET_GPR_U32(ctx, 31, 0x1C2794u);
    ctx->pc = 0x1C27C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C27C0u, 0x1C278Cu, 0x1C2794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2794u;
label_1c2794:
    // 0x1c2794: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1c2794u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c2798: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1c2798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c279c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1c279cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1c27a0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1c27a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c27a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c27a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c27a8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1c27a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1c27ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1C27ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C27ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C27B4u;
    // 0x1c27b4: 0x0  nop
    ctx->pc = 0x1c27b4u;
    // NOP
    // 0x1c27b8: 0x0  nop
    ctx->pc = 0x1c27b8u;
    // NOP
    // 0x1c27bc: 0x0  nop
    ctx->pc = 0x1c27bcu;
    // NOP
    ctx->pc = 0x1c27c0u;
}
