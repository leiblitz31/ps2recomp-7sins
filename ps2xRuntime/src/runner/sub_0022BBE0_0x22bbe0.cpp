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

// Function: sub_0022BBE0
// Address: 0x22bbe0 - 0x22bc60
void sub_0022BBE0_0x22bbe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022BBE0_0x22bbe0");
#endif

    switch (ctx->pc) {
        case 0x22bbf8u: goto label_22bbf8;
        case 0x22bc18u: goto label_22bc18;
        case 0x22bc28u: goto label_22bc28;
        case 0x22bc38u: goto label_22bc38;
        case 0x22bc48u: goto label_22bc48;
        default: break;
    }

    ctx->pc = 0x22bbe0u;

    // 0x22bbe0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x22bbe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x22bbe4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22bbe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22bbe8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x22bbe8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x22bbec: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x22bbecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22bbf0: 0xc08ec10  jal         func_23B040
    ctx->pc = 0x22BBF0u;
    SET_GPR_U32(ctx, 31, 0x22BBF8u);
    ctx->pc = 0x23B040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B040u, 0x22BBF0u, 0x22BBF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22BBF8u;
label_22bbf8:
    // 0x22bbf8: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x22bbf8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x22bbfc: 0x24635350  addiu       $v1, $v1, 0x5350
    ctx->pc = 0x22bbfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 21328));
    // 0x22bc00: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x22bc00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22bc04: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x22bc04u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x22bc08: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x22bc08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22bc0c: 0x24440028  addiu       $a0, $v0, 0x28
    ctx->pc = 0x22bc0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x22bc10: 0xc08b27c  jal         func_22C9F0
    ctx->pc = 0x22BC10u;
    SET_GPR_U32(ctx, 31, 0x22BC18u);
    ctx->pc = 0x22C9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22C9F0u, 0x22BC10u, 0x22BC18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22BC18u;
label_22bc18:
    // 0x22bc18: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x22bc18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22bc1c: 0x24440034  addiu       $a0, $v0, 0x34
    ctx->pc = 0x22bc1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 52));
    // 0x22bc20: 0xc08b224  jal         func_22C890
    ctx->pc = 0x22BC20u;
    SET_GPR_U32(ctx, 31, 0x22BC28u);
    ctx->pc = 0x22C890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22C890u, 0x22BC20u, 0x22BC28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22BC28u;
label_22bc28:
    // 0x22bc28: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x22bc28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22bc2c: 0x24440040  addiu       $a0, $v0, 0x40
    ctx->pc = 0x22bc2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x22bc30: 0xc08b1cc  jal         func_22C730
    ctx->pc = 0x22BC30u;
    SET_GPR_U32(ctx, 31, 0x22BC38u);
    ctx->pc = 0x22C730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22C730u, 0x22BC30u, 0x22BC38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22BC38u;
label_22bc38:
    // 0x22bc38: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x22bc38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22bc3c: 0x2444004c  addiu       $a0, $v0, 0x4C
    ctx->pc = 0x22bc3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 76));
    // 0x22bc40: 0xc08b174  jal         func_22C5D0
    ctx->pc = 0x22BC40u;
    SET_GPR_U32(ctx, 31, 0x22BC48u);
    ctx->pc = 0x22C5D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22C5D0u, 0x22BC40u, 0x22BC48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22BC48u;
label_22bc48:
    // 0x22bc48: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x22bc48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22bc4c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22bc4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22bc50: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x22bc50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x22bc54: 0x3e00008  jr          $ra
    ctx->pc = 0x22BC54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22BC54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22BC5Cu;
    // 0x22bc5c: 0x0  nop
    ctx->pc = 0x22bc5cu;
    // NOP
    ctx->pc = 0x22bc60u;
}
