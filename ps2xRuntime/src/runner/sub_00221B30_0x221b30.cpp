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

// Function: sub_00221B30
// Address: 0x221b30 - 0x221b70
void sub_00221B30_0x221b30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00221B30_0x221b30");
#endif

    switch (ctx->pc) {
        case 0x221b54u: goto label_221b54;
        default: break;
    }

    ctx->pc = 0x221b30u;

    // 0x221b30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x221b30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x221b34: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x221b34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x221b38: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x221b38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x221b3c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x221b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x221b40: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x221b40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x221b44: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x221b44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x221b48: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x221b48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221b4c: 0xc0886dc  jal         func_221B70
    ctx->pc = 0x221B4Cu;
    SET_GPR_U32(ctx, 31, 0x221B54u);
    ctx->pc = 0x221B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221B70u, 0x221B4Cu, 0x221B54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221B54u;
label_221b54:
    // 0x221b54: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x221b54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x221b58: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x221b58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x221b5c: 0x3e00008  jr          $ra
    ctx->pc = 0x221B5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x221B5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x221B64u;
    // 0x221b64: 0x0  nop
    ctx->pc = 0x221b64u;
    // NOP
    // 0x221b68: 0x0  nop
    ctx->pc = 0x221b68u;
    // NOP
    // 0x221b6c: 0x0  nop
    ctx->pc = 0x221b6cu;
    // NOP
    ctx->pc = 0x221b70u;
}
