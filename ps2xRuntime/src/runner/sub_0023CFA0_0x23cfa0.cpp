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

// Function: sub_0023CFA0
// Address: 0x23cfa0 - 0x23cfe0
void sub_0023CFA0_0x23cfa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023CFA0_0x23cfa0");
#endif

    switch (ctx->pc) {
        case 0x23cfc8u: goto label_23cfc8;
        default: break;
    }

    ctx->pc = 0x23cfa0u;

    // 0x23cfa0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x23cfa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x23cfa4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23cfa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23cfa8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x23cfa8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x23cfac: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x23cfacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x23cfb0: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x23cfb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x23cfb4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x23cfb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23cfb8: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x23cfb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23cfbc: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x23cfbcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23cfc0: 0xc08f3f8  jal         func_23CFE0
    ctx->pc = 0x23CFC0u;
    SET_GPR_U32(ctx, 31, 0x23CFC8u);
    ctx->pc = 0x23CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23CFE0u, 0x23CFC0u, 0x23CFC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23CFC8u;
label_23cfc8:
    // 0x23cfc8: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x23cfc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23cfcc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23cfccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23cfd0: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x23cfd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x23cfd4: 0x3e00008  jr          $ra
    ctx->pc = 0x23CFD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23CFD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23CFDCu;
    // 0x23cfdc: 0x0  nop
    ctx->pc = 0x23cfdcu;
    // NOP
    ctx->pc = 0x23cfe0u;
}
