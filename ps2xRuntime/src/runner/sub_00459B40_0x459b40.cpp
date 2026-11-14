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

// Function: sub_00459B40
// Address: 0x459b40 - 0x459ba0
void sub_00459B40_0x459b40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00459B40_0x459b40");
#endif

    switch (ctx->pc) {
        case 0x459b70u: goto label_459b70;
        case 0x459b88u: goto label_459b88;
        default: break;
    }

    ctx->pc = 0x459b40u;

    // 0x459b40: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x459b40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x459b44: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x459b44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x459b48: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x459b48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x459b4c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x459b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x459b50: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x459b50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x459b54: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x459b54u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x459b58: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x459b58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x459b5c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x459b5cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x459b60: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x459b60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x459b64: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x459b64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x459b68: 0xc116704  jal         func_459C10
    ctx->pc = 0x459B68u;
    SET_GPR_U32(ctx, 31, 0x459B70u);
    ctx->pc = 0x459C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x459C10u, 0x459B68u, 0x459B70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x459B70u;
label_459b70:
    // 0x459b70: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x459b70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x459b74: 0x24640008  addiu       $a0, $v1, 0x8
    ctx->pc = 0x459b74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x459b78: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x459b78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x459b7c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x459b7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x459b80: 0xc1166e8  jal         func_459BA0
    ctx->pc = 0x459B80u;
    SET_GPR_U32(ctx, 31, 0x459B88u);
    ctx->pc = 0x459BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x459BA0u, 0x459B80u, 0x459B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x459B88u;
label_459b88:
    // 0x459b88: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x459b88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x459b8c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x459b8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x459b90: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x459b90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x459b94: 0x3e00008  jr          $ra
    ctx->pc = 0x459B94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x459B94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x459B9Cu;
    // 0x459b9c: 0x0  nop
    ctx->pc = 0x459b9cu;
    // NOP
    ctx->pc = 0x459ba0u;
}
