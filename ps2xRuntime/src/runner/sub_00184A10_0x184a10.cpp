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

// Function: sub_00184A10
// Address: 0x184a10 - 0x184a90
void sub_00184A10_0x184a10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00184A10_0x184a10");
#endif

    switch (ctx->pc) {
        case 0x184a50u: goto label_184a50;
        case 0x184a60u: goto label_184a60;
        case 0x184a6cu: goto label_184a6c;
        default: break;
    }

    ctx->pc = 0x184a10u;

    // 0x184a10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x184a10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x184a14: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x184a14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x184a18: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x184a18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x184a1c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x184a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x184a20: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x184a20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x184a24: 0x3e00008  jr          $ra
    ctx->pc = 0x184A24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x184A24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x184A2Cu;
    // 0x184a2c: 0x0  nop
    ctx->pc = 0x184a2cu;
    // NOP
    // 0x184a30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x184a30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x184a34: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x184a34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x184a38: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x184a38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x184a3c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x184a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x184a40: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x184a40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x184a44: 0x24440090  addiu       $a0, $v0, 0x90
    ctx->pc = 0x184a44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
    // 0x184a48: 0xc0612a4  jal         func_184A90
    ctx->pc = 0x184A48u;
    SET_GPR_U32(ctx, 31, 0x184A50u);
    ctx->pc = 0x184A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x184A90u, 0x184A48u, 0x184A50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184A50u;
label_184a50:
    // 0x184a50: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x184a50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x184a54: 0x24440084  addiu       $a0, $v0, 0x84
    ctx->pc = 0x184a54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 132));
    // 0x184a58: 0xc0612a4  jal         func_184A90
    ctx->pc = 0x184A58u;
    SET_GPR_U32(ctx, 31, 0x184A60u);
    ctx->pc = 0x184A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x184A90u, 0x184A58u, 0x184A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184A60u;
label_184a60:
    // 0x184a60: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x184a60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x184a64: 0xc0559ac  jal         func_1566B0
    ctx->pc = 0x184A64u;
    SET_GPR_U32(ctx, 31, 0x184A6Cu);
    ctx->pc = 0x1566B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1566B0u, 0x184A64u, 0x184A6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184A6Cu;
label_184a6c:
    // 0x184a6c: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x184a6cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x184a70: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x184a70u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184a74: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x184a74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x184a78: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x184a78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x184a7c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x184a7cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x184a80: 0x3e00008  jr          $ra
    ctx->pc = 0x184A80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x184A80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x184A88u;
    // 0x184a88: 0x0  nop
    ctx->pc = 0x184a88u;
    // NOP
    // 0x184a8c: 0x0  nop
    ctx->pc = 0x184a8cu;
    // NOP
    ctx->pc = 0x184a90u;
}
