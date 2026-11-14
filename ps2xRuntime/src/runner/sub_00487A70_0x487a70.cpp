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

// Function: sub_00487A70
// Address: 0x487a70 - 0x487ac0
void sub_00487A70_0x487a70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00487A70_0x487a70");
#endif

    switch (ctx->pc) {
        case 0x487a94u: goto label_487a94;
        case 0x487aa8u: goto label_487aa8;
        default: break;
    }

    ctx->pc = 0x487a70u;

    // 0x487a70: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x487a70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x487a74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x487a74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x487a78: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x487a78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x487a7c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x487a7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x487a80: 0x27a40018  addiu       $a0, $sp, 0x18
    ctx->pc = 0x487a80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x487a84: 0x2785b5e0  addiu       $a1, $gp, -0x4A20
    ctx->pc = 0x487a84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294948320));
    // 0x487a88: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x487a88u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x487a8c: 0xc0bc3e2  jal         func_2F0F88
    ctx->pc = 0x487A8Cu;
    SET_GPR_U32(ctx, 31, 0x487A94u);
    ctx->pc = 0x2F0F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0F88u, 0x487A8Cu, 0x487A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x487A94u;
label_487a94:
    // 0x487a94: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x487a94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x487a98: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x487a98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x487a9c: 0x27a50018  addiu       $a1, $sp, 0x18
    ctx->pc = 0x487a9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x487aa0: 0xc124fec  jal         func_493FB0
    ctx->pc = 0x487AA0u;
    SET_GPR_U32(ctx, 31, 0x487AA8u);
    ctx->pc = 0x493FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x493FB0u, 0x487AA0u, 0x487AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x487AA8u;
label_487aa8:
    // 0x487aa8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x487aa8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x487aac: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x487aacu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x487ab0: 0x3e00008  jr          $ra
    ctx->pc = 0x487AB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x487AB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x487AB8u;
    // 0x487ab8: 0x0  nop
    ctx->pc = 0x487ab8u;
    // NOP
    // 0x487abc: 0x0  nop
    ctx->pc = 0x487abcu;
    // NOP
    ctx->pc = 0x487ac0u;
}
