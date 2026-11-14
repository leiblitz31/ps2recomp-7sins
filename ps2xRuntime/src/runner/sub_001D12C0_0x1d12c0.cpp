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

// Function: sub_001D12C0
// Address: 0x1d12c0 - 0x1d1300
void sub_001D12C0_0x1d12c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D12C0_0x1d12c0");
#endif

    switch (ctx->pc) {
        case 0x1d12dcu: goto label_1d12dc;
        default: break;
    }

    ctx->pc = 0x1d12c0u;

    // 0x1d12c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d12c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1d12c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d12c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d12c8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1d12c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1d12cc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1d12ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x1d12d0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1d12d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d12d4: 0xc040e7c  jal         func_1039F0
    ctx->pc = 0x1D12D4u;
    SET_GPR_U32(ctx, 31, 0x1D12DCu);
    ctx->pc = 0x1039F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1039F0u, 0x1D12D4u, 0x1D12DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D12DCu;
label_1d12dc:
    // 0x1d12dc: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1d12dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d12e0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1d12e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1d12e4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d12e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d12e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d12e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d12ec: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1d12ecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1d12f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1D12F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D12F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D12F8u;
    // 0x1d12f8: 0x0  nop
    ctx->pc = 0x1d12f8u;
    // NOP
    // 0x1d12fc: 0x0  nop
    ctx->pc = 0x1d12fcu;
    // NOP
    ctx->pc = 0x1d1300u;
}
