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

// Function: sub_0022C960
// Address: 0x22c960 - 0x22c9b0
void sub_0022C960_0x22c960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022C960_0x22c960");
#endif

    switch (ctx->pc) {
        case 0x22c984u: goto label_22c984;
        default: break;
    }

    ctx->pc = 0x22c960u;

    // 0x22c960: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x22c960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x22c964: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22c964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22c968: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x22c968u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x22c96c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x22c96cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x22c970: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x22c970u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x22c974: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x22c974u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22c978: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x22c978u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22c97c: 0xc08b26c  jal         func_22C9B0
    ctx->pc = 0x22C97Cu;
    SET_GPR_U32(ctx, 31, 0x22C984u);
    ctx->pc = 0x22C9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22C9B0u, 0x22C97Cu, 0x22C984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C984u;
label_22c984:
    // 0x22c984: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x22c984u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22c988: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x22c988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22c98c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x22c98cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x22c990: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x22c990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22c994: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22c994u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22c998: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x22c998u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x22c99c: 0x3e00008  jr          $ra
    ctx->pc = 0x22C99Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22C99Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22C9A4u;
    // 0x22c9a4: 0x0  nop
    ctx->pc = 0x22c9a4u;
    // NOP
    // 0x22c9a8: 0x0  nop
    ctx->pc = 0x22c9a8u;
    // NOP
    // 0x22c9ac: 0x0  nop
    ctx->pc = 0x22c9acu;
    // NOP
    ctx->pc = 0x22c9b0u;
}
