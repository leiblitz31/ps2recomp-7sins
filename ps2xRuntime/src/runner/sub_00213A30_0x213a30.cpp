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

// Function: sub_00213A30
// Address: 0x213a30 - 0x213a90
void sub_00213A30_0x213a30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00213A30_0x213a30");
#endif

    switch (ctx->pc) {
        case 0x213a4cu: goto label_213a4c;
        default: break;
    }

    ctx->pc = 0x213a30u;

    // 0x213a30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x213a30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x213a34: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x213a34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x213a38: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x213a38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x213a3c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x213a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x213a40: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x213a40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x213a44: 0xc08ec10  jal         func_23B040
    ctx->pc = 0x213A44u;
    SET_GPR_U32(ctx, 31, 0x213A4Cu);
    ctx->pc = 0x23B040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B040u, 0x213A44u, 0x213A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213A4Cu;
label_213a4c:
    // 0x213a4c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x213a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x213a50: 0x24635190  addiu       $v1, $v1, 0x5190
    ctx->pc = 0x213a50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20880));
    // 0x213a54: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x213a54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x213a58: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x213a58u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x213a5c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x213a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x213a60: 0xac40002c  sw          $zero, 0x2C($v0)
    ctx->pc = 0x213a60u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 0));
    // 0x213a64: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x213a64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x213a68: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x213a68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x213a6c: 0xac430030  sw          $v1, 0x30($v0)
    ctx->pc = 0x213a6cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 3));
    // 0x213a70: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x213a70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x213a74: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x213a74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x213a78: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x213a78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x213a7c: 0x3e00008  jr          $ra
    ctx->pc = 0x213A7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x213A7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x213A84u;
    // 0x213a84: 0x0  nop
    ctx->pc = 0x213a84u;
    // NOP
    // 0x213a88: 0x0  nop
    ctx->pc = 0x213a88u;
    // NOP
    // 0x213a8c: 0x0  nop
    ctx->pc = 0x213a8cu;
    // NOP
    ctx->pc = 0x213a90u;
}
