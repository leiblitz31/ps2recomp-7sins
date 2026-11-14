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

// Function: sub_002D0A40
// Address: 0x2d0a40 - 0x2d0aa0
void sub_002D0A40_0x2d0a40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D0A40_0x2d0a40");
#endif

    switch (ctx->pc) {
        case 0x2d0a5cu: goto label_2d0a5c;
        case 0x2d0a6cu: goto label_2d0a6c;
        case 0x2d0a80u: goto label_2d0a80;
        default: break;
    }

    ctx->pc = 0x2d0a40u;

    // 0x2d0a40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2d0a40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2d0a44: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2d0a44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2d0a48: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2d0a48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2d0a4c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x2d0a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x2d0a50: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2d0a50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d0a54: 0xc0b42ec  jal         func_2D0BB0
    ctx->pc = 0x2D0A54u;
    SET_GPR_U32(ctx, 31, 0x2D0A5Cu);
    ctx->pc = 0x2D0BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0BB0u, 0x2D0A54u, 0x2D0A5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0A5Cu;
label_2d0a5c:
    // 0x2d0a5c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d0a5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0a60: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2d0a60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d0a64: 0xc0b42d4  jal         func_2D0B50
    ctx->pc = 0x2D0A64u;
    SET_GPR_U32(ctx, 31, 0x2D0A6Cu);
    ctx->pc = 0x2D0B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0B50u, 0x2D0A64u, 0x2D0A6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0A6Cu;
label_2d0a6c:
    // 0x2d0a6c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2d0a6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d0a70: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2d0a70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0a74: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2d0a74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0a78: 0xc0b42a8  jal         func_2D0AA0
    ctx->pc = 0x2D0A78u;
    SET_GPR_U32(ctx, 31, 0x2D0A80u);
    ctx->pc = 0x2D0AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0AA0u, 0x2D0A78u, 0x2D0A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0A80u;
label_2d0a80:
    // 0x2d0a80: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2d0a80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d0a84: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d0a84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d0a88: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2d0a88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2d0a8c: 0x3e00008  jr          $ra
    ctx->pc = 0x2D0A8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D0A8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D0A94u;
    // 0x2d0a94: 0x0  nop
    ctx->pc = 0x2d0a94u;
    // NOP
    // 0x2d0a98: 0x0  nop
    ctx->pc = 0x2d0a98u;
    // NOP
    // 0x2d0a9c: 0x0  nop
    ctx->pc = 0x2d0a9cu;
    // NOP
    ctx->pc = 0x2d0aa0u;
}
