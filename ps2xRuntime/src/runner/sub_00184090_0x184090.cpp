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

// Function: sub_00184090
// Address: 0x184090 - 0x184110
void sub_00184090_0x184090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00184090_0x184090");
#endif

    switch (ctx->pc) {
        case 0x1840b0u: goto label_1840b0;
        case 0x1840c0u: goto label_1840c0;
        case 0x1840d8u: goto label_1840d8;
        case 0x1840f0u: goto label_1840f0;
        default: break;
    }

    ctx->pc = 0x184090u;

    // 0x184090: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x184090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x184094: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x184094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x184098: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x184098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18409c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x18409cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x1840a0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1840a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1840a4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1840a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1840a8: 0xc061044  jal         func_184110
    ctx->pc = 0x1840A8u;
    SET_GPR_U32(ctx, 31, 0x1840B0u);
    ctx->pc = 0x184110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x184110u, 0x1840A8u, 0x1840B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1840B0u;
label_1840b0:
    // 0x1840b0: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x1840b0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1840b4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1840b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1840b8: 0xc060fe8  jal         func_183FA0
    ctx->pc = 0x1840B8u;
    SET_GPR_U32(ctx, 31, 0x1840C0u);
    ctx->pc = 0x183FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x183FA0u, 0x1840B8u, 0x1840C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1840C0u;
label_1840c0:
    // 0x1840c0: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1840c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1840c4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1840c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1840c8: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x1840c8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1840cc: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1840ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1840d0: 0xc060fe0  jal         func_183F80
    ctx->pc = 0x1840D0u;
    SET_GPR_U32(ctx, 31, 0x1840D8u);
    ctx->pc = 0x183F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x183F80u, 0x1840D0u, 0x1840D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1840D8u;
label_1840d8:
    // 0x1840d8: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x1840d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x1840dc: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1840dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1840e0: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x1840e0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1840e4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1840e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1840e8: 0xc060fd8  jal         func_183F60
    ctx->pc = 0x1840E8u;
    SET_GPR_U32(ctx, 31, 0x1840F0u);
    ctx->pc = 0x183F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x183F60u, 0x1840E8u, 0x1840F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1840F0u;
label_1840f0:
    // 0x1840f0: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x1840f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x1840f4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1840f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1840f8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1840f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1840fc: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1840fcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x184100: 0x3e00008  jr          $ra
    ctx->pc = 0x184100u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x184100u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x184108u;
    // 0x184108: 0x0  nop
    ctx->pc = 0x184108u;
    // NOP
    // 0x18410c: 0x0  nop
    ctx->pc = 0x18410cu;
    // NOP
    ctx->pc = 0x184110u;
}
