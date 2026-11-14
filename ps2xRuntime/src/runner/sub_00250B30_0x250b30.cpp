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

// Function: sub_00250B30
// Address: 0x250b30 - 0x250b80
void sub_00250B30_0x250b30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00250B30_0x250b30");
#endif

    switch (ctx->pc) {
        case 0x250b68u: goto label_250b68;
        default: break;
    }

    ctx->pc = 0x250b30u;

    // 0x250b30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x250b30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x250b34: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x250b34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x250b38: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x250b38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x250b3c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x250b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x250b40: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x250b40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x250b44: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x250b44u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x250b48: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x250b48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x250b4c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x250b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x250b50: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x250b50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x250b54: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x250b54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x250b58: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x250b58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x250b5c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x250b5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250b60: 0xc0942e0  jal         func_250B80
    ctx->pc = 0x250B60u;
    SET_GPR_U32(ctx, 31, 0x250B68u);
    ctx->pc = 0x250B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x250B80u, 0x250B60u, 0x250B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250B68u;
label_250b68:
    // 0x250b68: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x250b68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x250b6c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x250b6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x250b70: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x250b70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x250b74: 0x3e00008  jr          $ra
    ctx->pc = 0x250B74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x250B74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x250B7Cu;
    // 0x250b7c: 0x0  nop
    ctx->pc = 0x250b7cu;
    // NOP
    ctx->pc = 0x250b80u;
}
