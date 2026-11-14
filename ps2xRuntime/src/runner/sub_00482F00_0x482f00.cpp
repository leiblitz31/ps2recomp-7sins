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

// Function: sub_00482F00
// Address: 0x482f00 - 0x482f40
void sub_00482F00_0x482f00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00482F00_0x482f00");
#endif

    switch (ctx->pc) {
        case 0x482f20u: goto label_482f20;
        default: break;
    }

    ctx->pc = 0x482f00u;

    // 0x482f00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x482f00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x482f04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x482f04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x482f08: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x482f08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x482f0c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x482f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x482f10: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x482f10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x482f14: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x482f14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x482f18: 0xc120bd0  jal         func_482F40
    ctx->pc = 0x482F18u;
    SET_GPR_U32(ctx, 31, 0x482F20u);
    ctx->pc = 0x482F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x482F40u, 0x482F18u, 0x482F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x482F20u;
label_482f20:
    // 0x482f20: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x482f20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x482f24: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x482f24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x482f28: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x482f28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x482f2c: 0x3e00008  jr          $ra
    ctx->pc = 0x482F2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x482F2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x482F34u;
    // 0x482f34: 0x0  nop
    ctx->pc = 0x482f34u;
    // NOP
    // 0x482f38: 0x0  nop
    ctx->pc = 0x482f38u;
    // NOP
    // 0x482f3c: 0x0  nop
    ctx->pc = 0x482f3cu;
    // NOP
    ctx->pc = 0x482f40u;
}
