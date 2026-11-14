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

// Function: sub_00265E20
// Address: 0x265e20 - 0x265e60
void sub_00265E20_0x265e20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00265E20_0x265e20");
#endif

    switch (ctx->pc) {
        case 0x265e40u: goto label_265e40;
        default: break;
    }

    ctx->pc = 0x265e20u;

    // 0x265e20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x265e20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x265e24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x265e24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x265e28: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x265e28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x265e2c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x265e2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x265e30: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x265e30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x265e34: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x265e34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x265e38: 0xc099798  jal         func_265E60
    ctx->pc = 0x265E38u;
    SET_GPR_U32(ctx, 31, 0x265E40u);
    ctx->pc = 0x265E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x265E60u, 0x265E38u, 0x265E40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x265E40u;
label_265e40:
    // 0x265e40: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x265e40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x265e44: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x265e44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x265e48: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x265e48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x265e4c: 0x3e00008  jr          $ra
    ctx->pc = 0x265E4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x265E4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x265E54u;
    // 0x265e54: 0x0  nop
    ctx->pc = 0x265e54u;
    // NOP
    // 0x265e58: 0x0  nop
    ctx->pc = 0x265e58u;
    // NOP
    // 0x265e5c: 0x0  nop
    ctx->pc = 0x265e5cu;
    // NOP
    ctx->pc = 0x265e60u;
}
