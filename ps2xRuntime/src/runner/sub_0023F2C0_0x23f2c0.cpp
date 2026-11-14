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

// Function: sub_0023F2C0
// Address: 0x23f2c0 - 0x23f310
void sub_0023F2C0_0x23f2c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023F2C0_0x23f2c0");
#endif

    switch (ctx->pc) {
        case 0x23f2e0u: goto label_23f2e0;
        default: break;
    }

    ctx->pc = 0x23f2c0u;

    // 0x23f2c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x23f2c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x23f2c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23f2c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23f2c8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x23f2c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x23f2cc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x23f2ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x23f2d0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x23f2d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23f2d4: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x23f2d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23f2d8: 0xc042844  jal         func_10A110
    ctx->pc = 0x23F2D8u;
    SET_GPR_U32(ctx, 31, 0x23F2E0u);
    ctx->pc = 0x10A110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A110u, 0x23F2D8u, 0x23F2E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F2E0u;
label_23f2e0:
    // 0x23f2e0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x23f2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23f2e4: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x23f2e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23f2e8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x23f2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23f2ec: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x23f2ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x23f2f0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x23f2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23f2f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23f2f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23f2f8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x23f2f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x23f2fc: 0x3e00008  jr          $ra
    ctx->pc = 0x23F2FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23F2FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23F304u;
    // 0x23f304: 0x0  nop
    ctx->pc = 0x23f304u;
    // NOP
    // 0x23f308: 0x0  nop
    ctx->pc = 0x23f308u;
    // NOP
    // 0x23f30c: 0x0  nop
    ctx->pc = 0x23f30cu;
    // NOP
    ctx->pc = 0x23f310u;
}
