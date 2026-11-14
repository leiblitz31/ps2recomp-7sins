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

// Function: sub_00467A90
// Address: 0x467a90 - 0x467ae0
void sub_00467A90_0x467a90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00467A90_0x467a90");
#endif

    switch (ctx->pc) {
        case 0x467ac4u: goto label_467ac4;
        default: break;
    }

    ctx->pc = 0x467a90u;

    // 0x467a90: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x467a90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x467a94: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x467a94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x467a98: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x467a98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x467a9c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x467a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x467aa0: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x467aa0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x467aa4: 0xafa70040  sw          $a3, 0x40($sp)
    ctx->pc = 0x467aa4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 7));
    // 0x467aa8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x467aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x467aac: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x467aacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x467ab0: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x467ab0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x467ab4: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x467ab4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x467ab8: 0x8c470014  lw          $a3, 0x14($v0)
    ctx->pc = 0x467ab8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x467abc: 0xc0f0b08  jal         func_3C2C20
    ctx->pc = 0x467ABCu;
    SET_GPR_U32(ctx, 31, 0x467AC4u);
    ctx->pc = 0x3C2C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2C20u, 0x467ABCu, 0x467AC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x467AC4u;
label_467ac4:
    // 0x467ac4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x467ac4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x467ac8: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x467ac8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x467acc: 0x3e00008  jr          $ra
    ctx->pc = 0x467ACCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x467ACCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x467AD4u;
    // 0x467ad4: 0x0  nop
    ctx->pc = 0x467ad4u;
    // NOP
    // 0x467ad8: 0x0  nop
    ctx->pc = 0x467ad8u;
    // NOP
    // 0x467adc: 0x0  nop
    ctx->pc = 0x467adcu;
    // NOP
    ctx->pc = 0x467ae0u;
}
