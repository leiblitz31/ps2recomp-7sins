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

// Function: sub_0013D3A0
// Address: 0x13d3a0 - 0x13d3f0
void sub_0013D3A0_0x13d3a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013D3A0_0x13d3a0");
#endif

    switch (ctx->pc) {
        case 0x13d3c0u: goto label_13d3c0;
        case 0x13d3d0u: goto label_13d3d0;
        case 0x13d3e0u: goto label_13d3e0;
        default: break;
    }

    ctx->pc = 0x13d3a0u;

    // 0x13d3a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x13d3a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x13d3a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13d3a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13d3a8: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x13d3a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x13d3ac: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x13d3acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x13d3b0: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x13d3b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x13d3b4: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x13d3b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13d3b8: 0xc04f518  jal         func_13D460
    ctx->pc = 0x13D3B8u;
    SET_GPR_U32(ctx, 31, 0x13D3C0u);
    ctx->pc = 0x13D460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13D460u, 0x13D3B8u, 0x13D3C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D3C0u;
label_13d3c0:
    // 0x13d3c0: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x13d3c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13d3c4: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x13d3c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13d3c8: 0xc04f4fc  jal         func_13D3F0
    ctx->pc = 0x13D3C8u;
    SET_GPR_U32(ctx, 31, 0x13D3D0u);
    ctx->pc = 0x13D3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13D3F0u, 0x13D3C8u, 0x13D3D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D3D0u;
label_13d3d0:
    // 0x13d3d0: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x13d3d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13d3d4: 0x27a5001c  addiu       $a1, $sp, 0x1C
    ctx->pc = 0x13d3d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x13d3d8: 0xc04f4fc  jal         func_13D3F0
    ctx->pc = 0x13D3D8u;
    SET_GPR_U32(ctx, 31, 0x13D3E0u);
    ctx->pc = 0x13D3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13D3F0u, 0x13D3D8u, 0x13D3E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D3E0u;
label_13d3e0:
    // 0x13d3e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13d3e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13d3e4: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x13d3e4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x13d3e8: 0x3e00008  jr          $ra
    ctx->pc = 0x13D3E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13D3E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13D3F0u;
}
