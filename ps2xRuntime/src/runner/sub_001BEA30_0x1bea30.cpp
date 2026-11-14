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

// Function: sub_001BEA30
// Address: 0x1bea30 - 0x1bea80
void sub_001BEA30_0x1bea30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BEA30_0x1bea30");
#endif

    switch (ctx->pc) {
        case 0x1bea54u: goto label_1bea54;
        default: break;
    }

    ctx->pc = 0x1bea30u;

    // 0x1bea30: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1bea30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1bea34: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1bea34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1bea38: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1bea38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1bea3c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1bea3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x1bea40: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x1bea40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x1bea44: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1bea44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bea48: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x1bea48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1bea4c: 0xc06faa0  jal         func_1BEA80
    ctx->pc = 0x1BEA4Cu;
    SET_GPR_U32(ctx, 31, 0x1BEA54u);
    ctx->pc = 0x1BEA80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BEA80u, 0x1BEA4Cu, 0x1BEA54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BEA54u;
label_1bea54:
    // 0x1bea54: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1bea54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1bea58: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1bea58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bea5c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1bea5cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1bea60: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1bea60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bea64: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1bea64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bea68: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1bea68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1bea6c: 0x3e00008  jr          $ra
    ctx->pc = 0x1BEA6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BEA6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BEA74u;
    // 0x1bea74: 0x0  nop
    ctx->pc = 0x1bea74u;
    // NOP
    // 0x1bea78: 0x0  nop
    ctx->pc = 0x1bea78u;
    // NOP
    // 0x1bea7c: 0x0  nop
    ctx->pc = 0x1bea7cu;
    // NOP
    ctx->pc = 0x1bea80u;
}
