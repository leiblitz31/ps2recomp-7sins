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

// Function: sub_0048BDE0
// Address: 0x48bde0 - 0x48be30
void sub_0048BDE0_0x48bde0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048BDE0_0x48bde0");
#endif

    switch (ctx->pc) {
        case 0x48be18u: goto label_48be18;
        default: break;
    }

    ctx->pc = 0x48bde0u;

    // 0x48bde0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x48bde0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x48bde4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x48bde4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x48bde8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x48bde8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x48bdec: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x48bdecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x48bdf0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x48bdf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x48bdf4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x48bdf4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x48bdf8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x48bdf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x48bdfc: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x48bdfcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x48be00: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x48be00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x48be04: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x48be04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x48be08: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x48be08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x48be0c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x48be0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48be10: 0xc122f8c  jal         func_48BE30
    ctx->pc = 0x48BE10u;
    SET_GPR_U32(ctx, 31, 0x48BE18u);
    ctx->pc = 0x48BE30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48BE30u, 0x48BE10u, 0x48BE18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48BE18u;
label_48be18:
    // 0x48be18: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x48be18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x48be1c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x48be1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48be20: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x48be20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x48be24: 0x3e00008  jr          $ra
    ctx->pc = 0x48BE24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48BE24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48BE2Cu;
    // 0x48be2c: 0x0  nop
    ctx->pc = 0x48be2cu;
    // NOP
    ctx->pc = 0x48be30u;
}
