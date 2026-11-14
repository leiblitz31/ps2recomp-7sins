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

// Function: sub_0010B190
// Address: 0x10b190 - 0x10b1d0
void sub_0010B190_0x10b190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010B190_0x10b190");
#endif

    switch (ctx->pc) {
        case 0x10b1b8u: goto label_10b1b8;
        default: break;
    }

    ctx->pc = 0x10b190u;

    // 0x10b190: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x10b190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x10b194: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10b194u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10b198: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x10b198u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x10b19c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x10b19cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x10b1a0: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x10b1a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x10b1a4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x10b1a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10b1a8: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x10b1a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10b1ac: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x10b1acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10b1b0: 0xc042c74  jal         func_10B1D0
    ctx->pc = 0x10B1B0u;
    SET_GPR_U32(ctx, 31, 0x10B1B8u);
    ctx->pc = 0x10B1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B1D0u, 0x10B1B0u, 0x10B1B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B1B8u;
label_10b1b8:
    // 0x10b1b8: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x10b1b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10b1bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10b1bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10b1c0: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x10b1c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x10b1c4: 0x3e00008  jr          $ra
    ctx->pc = 0x10B1C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10B1C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10B1CCu;
    // 0x10b1cc: 0x0  nop
    ctx->pc = 0x10b1ccu;
    // NOP
    ctx->pc = 0x10b1d0u;
}
