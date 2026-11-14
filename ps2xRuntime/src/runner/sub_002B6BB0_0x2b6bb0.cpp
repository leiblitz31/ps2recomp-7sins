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

// Function: sub_002B6BB0
// Address: 0x2b6bb0 - 0x2b6c00
void sub_002B6BB0_0x2b6bb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B6BB0_0x2b6bb0");
#endif

    switch (ctx->pc) {
        case 0x2b6bd4u: goto label_2b6bd4;
        default: break;
    }

    ctx->pc = 0x2b6bb0u;

    // 0x2b6bb0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2b6bb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2b6bb4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b6bb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2b6bb8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2b6bb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2b6bbc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x2b6bbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x2b6bc0: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x2b6bc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x2b6bc4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2b6bc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b6bc8: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x2b6bc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b6bcc: 0xc0adb00  jal         func_2B6C00
    ctx->pc = 0x2B6BCCu;
    SET_GPR_U32(ctx, 31, 0x2B6BD4u);
    ctx->pc = 0x2B6C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6C00u, 0x2B6BCCu, 0x2B6BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6BD4u;
label_2b6bd4:
    // 0x2b6bd4: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x2b6bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b6bd8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2b6bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b6bdc: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2b6bdcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2b6be0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2b6be0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b6be4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b6be4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b6be8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2b6be8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2b6bec: 0x3e00008  jr          $ra
    ctx->pc = 0x2B6BECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B6BECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B6BF4u;
    // 0x2b6bf4: 0x0  nop
    ctx->pc = 0x2b6bf4u;
    // NOP
    // 0x2b6bf8: 0x0  nop
    ctx->pc = 0x2b6bf8u;
    // NOP
    // 0x2b6bfc: 0x0  nop
    ctx->pc = 0x2b6bfcu;
    // NOP
    ctx->pc = 0x2b6c00u;
}
