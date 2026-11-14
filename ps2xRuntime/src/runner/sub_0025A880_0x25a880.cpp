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

// Function: sub_0025A880
// Address: 0x25a880 - 0x25a8d0
void sub_0025A880_0x25a880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025A880_0x25a880");
#endif

    switch (ctx->pc) {
        case 0x25a8b8u: goto label_25a8b8;
        default: break;
    }

    ctx->pc = 0x25a880u;

    // 0x25a880: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x25a880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x25a884: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25a884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x25a888: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x25a888u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x25a88c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x25a88cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x25a890: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x25a890u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x25a894: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x25a894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25a898: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x25a898u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x25a89c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x25a89cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x25a8a0: 0xafa2001c  sw          $v0, 0x1C($sp)
    ctx->pc = 0x25a8a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
    // 0x25a8a4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x25a8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25a8a8: 0x24440174  addiu       $a0, $v0, 0x174
    ctx->pc = 0x25a8a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 372));
    // 0x25a8ac: 0x27a50018  addiu       $a1, $sp, 0x18
    ctx->pc = 0x25a8acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x25a8b0: 0xc0963d8  jal         func_258F60
    ctx->pc = 0x25A8B0u;
    SET_GPR_U32(ctx, 31, 0x25A8B8u);
    ctx->pc = 0x258F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258F60u, 0x25A8B0u, 0x25A8B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25A8B8u;
label_25a8b8:
    // 0x25a8b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25a8b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25a8bc: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x25a8bcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x25a8c0: 0x3e00008  jr          $ra
    ctx->pc = 0x25A8C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25A8C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25A8C8u;
    // 0x25a8c8: 0x0  nop
    ctx->pc = 0x25a8c8u;
    // NOP
    // 0x25a8cc: 0x0  nop
    ctx->pc = 0x25a8ccu;
    // NOP
    ctx->pc = 0x25a8d0u;
}
