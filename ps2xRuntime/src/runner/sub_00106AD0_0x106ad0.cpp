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

// Function: sub_00106AD0
// Address: 0x106ad0 - 0x106b50
void sub_00106AD0_0x106ad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00106AD0_0x106ad0");
#endif

    switch (ctx->pc) {
        case 0x106af0u: goto label_106af0;
        case 0x106b00u: goto label_106b00;
        case 0x106b18u: goto label_106b18;
        case 0x106b30u: goto label_106b30;
        default: break;
    }

    ctx->pc = 0x106ad0u;

    // 0x106ad0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x106ad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x106ad4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x106ad4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x106ad8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x106ad8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x106adc: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x106adcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x106ae0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x106ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x106ae4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x106ae4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x106ae8: 0xc041ad4  jal         func_106B50
    ctx->pc = 0x106AE8u;
    SET_GPR_U32(ctx, 31, 0x106AF0u);
    ctx->pc = 0x106B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106B50u, 0x106AE8u, 0x106AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106AF0u;
label_106af0:
    // 0x106af0: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x106af0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x106af4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x106af4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x106af8: 0xc04186c  jal         func_1061B0
    ctx->pc = 0x106AF8u;
    SET_GPR_U32(ctx, 31, 0x106B00u);
    ctx->pc = 0x1061B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1061B0u, 0x106AF8u, 0x106B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106B00u;
label_106b00:
    // 0x106b00: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x106b00u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x106b04: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x106b04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x106b08: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x106b08u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x106b0c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x106b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x106b10: 0xc041864  jal         func_106190
    ctx->pc = 0x106B10u;
    SET_GPR_U32(ctx, 31, 0x106B18u);
    ctx->pc = 0x106190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106190u, 0x106B10u, 0x106B18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106B18u;
label_106b18:
    // 0x106b18: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x106b18u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x106b1c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x106b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x106b20: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x106b20u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x106b24: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x106b24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x106b28: 0xc04185c  jal         func_106170
    ctx->pc = 0x106B28u;
    SET_GPR_U32(ctx, 31, 0x106B30u);
    ctx->pc = 0x106170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106170u, 0x106B28u, 0x106B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106B30u;
label_106b30:
    // 0x106b30: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x106b30u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x106b34: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x106b34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x106b38: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x106b38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x106b3c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x106b3cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x106b40: 0x3e00008  jr          $ra
    ctx->pc = 0x106B40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x106B40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x106B48u;
    // 0x106b48: 0x0  nop
    ctx->pc = 0x106b48u;
    // NOP
    // 0x106b4c: 0x0  nop
    ctx->pc = 0x106b4cu;
    // NOP
    ctx->pc = 0x106b50u;
}
