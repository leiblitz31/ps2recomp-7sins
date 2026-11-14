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

// Function: sub_00189B50
// Address: 0x189b50 - 0x189bc0
void sub_00189B50_0x189b50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00189B50_0x189b50");
#endif

    switch (ctx->pc) {
        case 0x189b88u: goto label_189b88;
        case 0x189b98u: goto label_189b98;
        case 0x189ba8u: goto label_189ba8;
        default: break;
    }

    ctx->pc = 0x189b50u;

    // 0x189b50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x189b50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x189b54: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x189b54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x189b58: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x189b58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x189b5c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x189b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x189b60: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x189b60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x189b64: 0x3e00008  jr          $ra
    ctx->pc = 0x189B64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x189B64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x189B6Cu;
    // 0x189b6c: 0x0  nop
    ctx->pc = 0x189b6cu;
    // NOP
    // 0x189b70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x189b70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x189b74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x189b74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x189b78: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x189b78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x189b7c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x189b7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x189b80: 0xc055b3c  jal         func_156CF0
    ctx->pc = 0x189B80u;
    SET_GPR_U32(ctx, 31, 0x189B88u);
    ctx->pc = 0x156CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156CF0u, 0x189B80u, 0x189B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189B88u;
label_189b88:
    // 0x189b88: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x189b88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x189b8c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x189b8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189b90: 0xc0628fc  jal         func_18A3F0
    ctx->pc = 0x189B90u;
    SET_GPR_U32(ctx, 31, 0x189B98u);
    ctx->pc = 0x18A3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A3F0u, 0x189B90u, 0x189B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189B98u;
label_189b98:
    // 0x189b98: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x189b98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x189b9c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x189b9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x189ba0: 0xc0628fc  jal         func_18A3F0
    ctx->pc = 0x189BA0u;
    SET_GPR_U32(ctx, 31, 0x189BA8u);
    ctx->pc = 0x18A3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A3F0u, 0x189BA0u, 0x189BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189BA8u;
label_189ba8:
    // 0x189ba8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x189ba8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x189bac: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x189bacu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x189bb0: 0x3e00008  jr          $ra
    ctx->pc = 0x189BB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x189BB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x189BB8u;
    // 0x189bb8: 0x0  nop
    ctx->pc = 0x189bb8u;
    // NOP
    // 0x189bbc: 0x0  nop
    ctx->pc = 0x189bbcu;
    // NOP
    ctx->pc = 0x189bc0u;
}
