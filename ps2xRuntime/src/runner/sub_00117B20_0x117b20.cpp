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

// Function: sub_00117B20
// Address: 0x117b20 - 0x117b60
void sub_00117B20_0x117b20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00117B20_0x117b20");
#endif

    switch (ctx->pc) {
        case 0x117b38u: goto label_117b38;
        case 0x117b48u: goto label_117b48;
        default: break;
    }

    ctx->pc = 0x117b20u;

    // 0x117b20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x117b20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x117b24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x117b24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x117b28: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x117b28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x117b2c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x117b2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x117b30: 0xc045e58  jal         func_117960
    ctx->pc = 0x117B30u;
    SET_GPR_U32(ctx, 31, 0x117B38u);
    ctx->pc = 0x117960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117960u, 0x117B30u, 0x117B38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117B38u;
label_117b38:
    // 0x117b38: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x117b38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x117b3c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x117b3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117b40: 0xc045ed8  jal         func_117B60
    ctx->pc = 0x117B40u;
    SET_GPR_U32(ctx, 31, 0x117B48u);
    ctx->pc = 0x117B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117B60u, 0x117B40u, 0x117B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117B48u;
label_117b48:
    // 0x117b48: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x117b48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x117b4c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x117b4cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x117b50: 0x3e00008  jr          $ra
    ctx->pc = 0x117B50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x117B50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x117B58u;
    // 0x117b58: 0x0  nop
    ctx->pc = 0x117b58u;
    // NOP
    // 0x117b5c: 0x0  nop
    ctx->pc = 0x117b5cu;
    // NOP
    ctx->pc = 0x117b60u;
}
