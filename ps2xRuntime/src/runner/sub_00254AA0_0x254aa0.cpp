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

// Function: sub_00254AA0
// Address: 0x254aa0 - 0x254af0
void sub_00254AA0_0x254aa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00254AA0_0x254aa0");
#endif

    switch (ctx->pc) {
        case 0x254ac4u: goto label_254ac4;
        default: break;
    }

    ctx->pc = 0x254aa0u;

    // 0x254aa0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x254aa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x254aa4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x254aa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x254aa8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x254aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x254aac: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x254aacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x254ab0: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x254ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x254ab4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x254ab4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x254ab8: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x254ab8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x254abc: 0xc0952bc  jal         func_254AF0
    ctx->pc = 0x254ABCu;
    SET_GPR_U32(ctx, 31, 0x254AC4u);
    ctx->pc = 0x254AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254AF0u, 0x254ABCu, 0x254AC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254AC4u;
label_254ac4:
    // 0x254ac4: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x254ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x254ac8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x254ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x254acc: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x254accu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x254ad0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x254ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x254ad4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x254ad4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x254ad8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x254ad8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x254adc: 0x3e00008  jr          $ra
    ctx->pc = 0x254ADCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x254ADCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x254AE4u;
    // 0x254ae4: 0x0  nop
    ctx->pc = 0x254ae4u;
    // NOP
    // 0x254ae8: 0x0  nop
    ctx->pc = 0x254ae8u;
    // NOP
    // 0x254aec: 0x0  nop
    ctx->pc = 0x254aecu;
    // NOP
    ctx->pc = 0x254af0u;
}
