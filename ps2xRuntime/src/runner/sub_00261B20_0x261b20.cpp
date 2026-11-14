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

// Function: sub_00261B20
// Address: 0x261b20 - 0x261ba0
void sub_00261B20_0x261b20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00261B20_0x261b20");
#endif

    switch (ctx->pc) {
        case 0x261b38u: goto label_261b38;
        case 0x261b58u: goto label_261b58;
        case 0x261b68u: goto label_261b68;
        case 0x261b78u: goto label_261b78;
        case 0x261b88u: goto label_261b88;
        default: break;
    }

    ctx->pc = 0x261b20u;

    // 0x261b20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x261b20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x261b24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x261b24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x261b28: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x261b28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x261b2c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x261b2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x261b30: 0xc08ec10  jal         func_23B040
    ctx->pc = 0x261B30u;
    SET_GPR_U32(ctx, 31, 0x261B38u);
    ctx->pc = 0x23B040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B040u, 0x261B30u, 0x261B38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261B38u;
label_261b38:
    // 0x261b38: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x261b38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x261b3c: 0x246359c0  addiu       $v1, $v1, 0x59C0
    ctx->pc = 0x261b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 22976));
    // 0x261b40: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x261b40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x261b44: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x261b44u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x261b48: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x261b48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x261b4c: 0x24440028  addiu       $a0, $v0, 0x28
    ctx->pc = 0x261b4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x261b50: 0xc0452e0  jal         func_114B80
    ctx->pc = 0x261B50u;
    SET_GPR_U32(ctx, 31, 0x261B58u);
    ctx->pc = 0x114B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114B80u, 0x261B50u, 0x261B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261B58u;
label_261b58:
    // 0x261b58: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x261b58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x261b5c: 0x24440034  addiu       $a0, $v0, 0x34
    ctx->pc = 0x261b5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 52));
    // 0x261b60: 0xc0452e0  jal         func_114B80
    ctx->pc = 0x261B60u;
    SET_GPR_U32(ctx, 31, 0x261B68u);
    ctx->pc = 0x114B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114B80u, 0x261B60u, 0x261B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261B68u;
label_261b68:
    // 0x261b68: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x261b68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x261b6c: 0x24440040  addiu       $a0, $v0, 0x40
    ctx->pc = 0x261b6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x261b70: 0xc098770  jal         func_261DC0
    ctx->pc = 0x261B70u;
    SET_GPR_U32(ctx, 31, 0x261B78u);
    ctx->pc = 0x261DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261DC0u, 0x261B70u, 0x261B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261B78u;
label_261b78:
    // 0x261b78: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x261b78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x261b7c: 0x2444004c  addiu       $a0, $v0, 0x4C
    ctx->pc = 0x261b7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 76));
    // 0x261b80: 0xc098770  jal         func_261DC0
    ctx->pc = 0x261B80u;
    SET_GPR_U32(ctx, 31, 0x261B88u);
    ctx->pc = 0x261DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261DC0u, 0x261B80u, 0x261B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261B88u;
label_261b88:
    // 0x261b88: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x261b88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x261b8c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x261b8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x261b90: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x261b90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x261b94: 0x3e00008  jr          $ra
    ctx->pc = 0x261B94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x261B94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x261B9Cu;
    // 0x261b9c: 0x0  nop
    ctx->pc = 0x261b9cu;
    // NOP
    ctx->pc = 0x261ba0u;
}
