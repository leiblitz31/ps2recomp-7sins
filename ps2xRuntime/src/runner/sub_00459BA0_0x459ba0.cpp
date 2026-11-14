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

// Function: sub_00459BA0
// Address: 0x459ba0 - 0x459bf0
void sub_00459BA0_0x459ba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00459BA0_0x459ba0");
#endif

    switch (ctx->pc) {
        case 0x459bc4u: goto label_459bc4;
        default: break;
    }

    ctx->pc = 0x459ba0u;

    // 0x459ba0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x459ba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x459ba4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x459ba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x459ba8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x459ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x459bac: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x459bacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x459bb0: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x459bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x459bb4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x459bb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x459bb8: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x459bb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x459bbc: 0xc1166fc  jal         func_459BF0
    ctx->pc = 0x459BBCu;
    SET_GPR_U32(ctx, 31, 0x459BC4u);
    ctx->pc = 0x459BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x459BF0u, 0x459BBCu, 0x459BC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x459BC4u;
label_459bc4:
    // 0x459bc4: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x459bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x459bc8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x459bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x459bcc: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x459bccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x459bd0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x459bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x459bd4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x459bd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x459bd8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x459bd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x459bdc: 0x3e00008  jr          $ra
    ctx->pc = 0x459BDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x459BDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x459BE4u;
    // 0x459be4: 0x0  nop
    ctx->pc = 0x459be4u;
    // NOP
    // 0x459be8: 0x0  nop
    ctx->pc = 0x459be8u;
    // NOP
    // 0x459bec: 0x0  nop
    ctx->pc = 0x459becu;
    // NOP
    ctx->pc = 0x459bf0u;
}
