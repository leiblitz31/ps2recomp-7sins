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

// Function: sub_002BC190
// Address: 0x2bc190 - 0x2bc1e0
void sub_002BC190_0x2bc190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BC190_0x2bc190");
#endif

    switch (ctx->pc) {
        case 0x2bc1c8u: goto label_2bc1c8;
        default: break;
    }

    ctx->pc = 0x2bc190u;

    // 0x2bc190: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2bc190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2bc194: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2bc194u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2bc198: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2bc198u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2bc19c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x2bc19cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x2bc1a0: 0xa3a60030  sb          $a2, 0x30($sp)
    ctx->pc = 0x2bc1a0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 48), (uint8_t)GPR_U32(ctx, 6));
    // 0x2bc1a4: 0xafa70040  sw          $a3, 0x40($sp)
    ctx->pc = 0x2bc1a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 7));
    // 0x2bc1a8: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2bc1a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bc1ac: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x2bc1acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2bc1b0: 0x93a60030  lbu         $a2, 0x30($sp)
    ctx->pc = 0x2bc1b0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2bc1b4: 0x8fa70040  lw          $a3, 0x40($sp)
    ctx->pc = 0x2bc1b4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2bc1b8: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2bc1b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2bc1bc: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x2bc1bcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2bc1c0: 0xc0af078  jal         func_2BC1E0
    ctx->pc = 0x2BC1C0u;
    SET_GPR_U32(ctx, 31, 0x2BC1C8u);
    ctx->pc = 0x2BC1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BC1E0u, 0x2BC1C0u, 0x2BC1C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC1C8u;
label_2bc1c8:
    // 0x2bc1c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2bc1c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bc1cc: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x2bc1ccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2bc1d0: 0x3e00008  jr          $ra
    ctx->pc = 0x2BC1D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BC1D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BC1D8u;
    // 0x2bc1d8: 0x0  nop
    ctx->pc = 0x2bc1d8u;
    // NOP
    // 0x2bc1dc: 0x0  nop
    ctx->pc = 0x2bc1dcu;
    // NOP
    ctx->pc = 0x2bc1e0u;
}
