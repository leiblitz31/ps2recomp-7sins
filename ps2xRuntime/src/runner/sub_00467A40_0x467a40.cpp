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

// Function: sub_00467A40
// Address: 0x467a40 - 0x467a90
void sub_00467A40_0x467a40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00467A40_0x467a40");
#endif

    switch (ctx->pc) {
        case 0x467a74u: goto label_467a74;
        default: break;
    }

    ctx->pc = 0x467a40u;

    // 0x467a40: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x467a40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x467a44: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x467a44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x467a48: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x467a48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x467a4c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x467a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x467a50: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x467a50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x467a54: 0xafa70040  sw          $a3, 0x40($sp)
    ctx->pc = 0x467a54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 7));
    // 0x467a58: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x467a58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x467a5c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x467a5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x467a60: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x467a60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x467a64: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x467a64u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x467a68: 0x8c470014  lw          $a3, 0x14($v0)
    ctx->pc = 0x467a68u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x467a6c: 0xc0f0b1c  jal         func_3C2C70
    ctx->pc = 0x467A6Cu;
    SET_GPR_U32(ctx, 31, 0x467A74u);
    ctx->pc = 0x3C2C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2C70u, 0x467A6Cu, 0x467A74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x467A74u;
label_467a74:
    // 0x467a74: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x467a74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x467a78: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x467a78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x467a7c: 0x3e00008  jr          $ra
    ctx->pc = 0x467A7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x467A7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x467A84u;
    // 0x467a84: 0x0  nop
    ctx->pc = 0x467a84u;
    // NOP
    // 0x467a88: 0x0  nop
    ctx->pc = 0x467a88u;
    // NOP
    // 0x467a8c: 0x0  nop
    ctx->pc = 0x467a8cu;
    // NOP
    ctx->pc = 0x467a90u;
}
