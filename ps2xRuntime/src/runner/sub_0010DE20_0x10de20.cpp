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

// Function: sub_0010DE20
// Address: 0x10de20 - 0x10de70
void sub_0010DE20_0x10de20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010DE20_0x10de20");
#endif

    switch (ctx->pc) {
        case 0x10de38u: goto label_10de38;
        case 0x10de58u: goto label_10de58;
        default: break;
    }

    ctx->pc = 0x10de20u;

    // 0x10de20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x10de20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10de24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10de24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10de28: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x10de28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x10de2c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x10de2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10de30: 0xc08ec10  jal         func_23B040
    ctx->pc = 0x10DE30u;
    SET_GPR_U32(ctx, 31, 0x10DE38u);
    ctx->pc = 0x23B040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B040u, 0x10DE30u, 0x10DE38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10DE38u;
label_10de38:
    // 0x10de38: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x10de38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x10de3c: 0x24633310  addiu       $v1, $v1, 0x3310
    ctx->pc = 0x10de3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 13072));
    // 0x10de40: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x10de40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10de44: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x10de44u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x10de48: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x10de48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10de4c: 0x24440028  addiu       $a0, $v0, 0x28
    ctx->pc = 0x10de4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x10de50: 0xc043844  jal         func_10E110
    ctx->pc = 0x10DE50u;
    SET_GPR_U32(ctx, 31, 0x10DE58u);
    ctx->pc = 0x10E110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E110u, 0x10DE50u, 0x10DE58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10DE58u;
label_10de58:
    // 0x10de58: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x10de58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10de5c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10de5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10de60: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x10de60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x10de64: 0x3e00008  jr          $ra
    ctx->pc = 0x10DE64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10DE64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10DE6Cu;
    // 0x10de6c: 0x0  nop
    ctx->pc = 0x10de6cu;
    // NOP
    ctx->pc = 0x10de70u;
}
