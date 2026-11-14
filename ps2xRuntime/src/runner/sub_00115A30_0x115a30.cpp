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

// Function: sub_00115A30
// Address: 0x115a30 - 0x115ab0
void sub_00115A30_0x115a30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00115A30_0x115a30");
#endif

    switch (ctx->pc) {
        case 0x115a50u: goto label_115a50;
        case 0x115a60u: goto label_115a60;
        case 0x115a78u: goto label_115a78;
        case 0x115a90u: goto label_115a90;
        default: break;
    }

    ctx->pc = 0x115a30u;

    // 0x115a30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x115a30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x115a34: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x115a34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x115a38: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x115a38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x115a3c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x115a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x115a40: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x115a40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x115a44: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x115a44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x115a48: 0xc0456ac  jal         func_115AB0
    ctx->pc = 0x115A48u;
    SET_GPR_U32(ctx, 31, 0x115A50u);
    ctx->pc = 0x115AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115AB0u, 0x115A48u, 0x115A50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115A50u;
label_115a50:
    // 0x115a50: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x115a50u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x115a54: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x115a54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x115a58: 0xc045580  jal         func_115600
    ctx->pc = 0x115A58u;
    SET_GPR_U32(ctx, 31, 0x115A60u);
    ctx->pc = 0x115600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115600u, 0x115A58u, 0x115A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115A60u;
label_115a60:
    // 0x115a60: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x115a60u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x115a64: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x115a64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x115a68: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x115a68u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x115a6c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x115a6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x115a70: 0xc045578  jal         func_1155E0
    ctx->pc = 0x115A70u;
    SET_GPR_U32(ctx, 31, 0x115A78u);
    ctx->pc = 0x1155E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1155E0u, 0x115A70u, 0x115A78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115A78u;
label_115a78:
    // 0x115a78: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x115a78u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x115a7c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x115a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x115a80: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x115a80u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x115a84: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x115a84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x115a88: 0xc045570  jal         func_1155C0
    ctx->pc = 0x115A88u;
    SET_GPR_U32(ctx, 31, 0x115A90u);
    ctx->pc = 0x1155C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1155C0u, 0x115A88u, 0x115A90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115A90u;
label_115a90:
    // 0x115a90: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x115a90u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x115a94: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x115a94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x115a98: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x115a98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x115a9c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x115a9cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x115aa0: 0x3e00008  jr          $ra
    ctx->pc = 0x115AA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x115AA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x115AA8u;
    // 0x115aa8: 0x0  nop
    ctx->pc = 0x115aa8u;
    // NOP
    // 0x115aac: 0x0  nop
    ctx->pc = 0x115aacu;
    // NOP
    ctx->pc = 0x115ab0u;
}
