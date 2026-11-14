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

// Function: sub_0028AE10
// Address: 0x28ae10 - 0x28ae90
void sub_0028AE10_0x28ae10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028AE10_0x28ae10");
#endif

    switch (ctx->pc) {
        case 0x28ae30u: goto label_28ae30;
        case 0x28ae40u: goto label_28ae40;
        case 0x28ae58u: goto label_28ae58;
        case 0x28ae70u: goto label_28ae70;
        default: break;
    }

    ctx->pc = 0x28ae10u;

    // 0x28ae10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x28ae10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x28ae14: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x28ae14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x28ae18: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x28ae18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x28ae1c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x28ae1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x28ae20: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x28ae20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28ae24: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x28ae24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28ae28: 0xc0a2ba4  jal         func_28AE90
    ctx->pc = 0x28AE28u;
    SET_GPR_U32(ctx, 31, 0x28AE30u);
    ctx->pc = 0x28AE90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28AE90u, 0x28AE28u, 0x28AE30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28AE30u;
label_28ae30:
    // 0x28ae30: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x28ae30u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x28ae34: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x28ae34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28ae38: 0xc0a2aa4  jal         func_28AA90
    ctx->pc = 0x28AE38u;
    SET_GPR_U32(ctx, 31, 0x28AE40u);
    ctx->pc = 0x28AA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28AA90u, 0x28AE38u, 0x28AE40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28AE40u;
label_28ae40:
    // 0x28ae40: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x28ae40u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x28ae44: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x28ae44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28ae48: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x28ae48u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28ae4c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x28ae4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28ae50: 0xc0a2a9c  jal         func_28AA70
    ctx->pc = 0x28AE50u;
    SET_GPR_U32(ctx, 31, 0x28AE58u);
    ctx->pc = 0x28AA70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28AA70u, 0x28AE50u, 0x28AE58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28AE58u;
label_28ae58:
    // 0x28ae58: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x28ae58u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x28ae5c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x28ae5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28ae60: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x28ae60u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28ae64: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x28ae64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28ae68: 0xc0a2a94  jal         func_28AA50
    ctx->pc = 0x28AE68u;
    SET_GPR_U32(ctx, 31, 0x28AE70u);
    ctx->pc = 0x28AA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28AA50u, 0x28AE68u, 0x28AE70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28AE70u;
label_28ae70:
    // 0x28ae70: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x28ae70u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x28ae74: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x28ae74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28ae78: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x28ae78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28ae7c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x28ae7cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x28ae80: 0x3e00008  jr          $ra
    ctx->pc = 0x28AE80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28AE80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28AE88u;
    // 0x28ae88: 0x0  nop
    ctx->pc = 0x28ae88u;
    // NOP
    // 0x28ae8c: 0x0  nop
    ctx->pc = 0x28ae8cu;
    // NOP
    ctx->pc = 0x28ae90u;
}
