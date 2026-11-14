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

// Function: sub_0017ED00
// Address: 0x17ed00 - 0x17ed50
void sub_0017ED00_0x17ed00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017ED00_0x17ed00");
#endif

    switch (ctx->pc) {
        case 0x17ed2cu: goto label_17ed2c;
        case 0x17ed3cu: goto label_17ed3c;
        default: break;
    }

    ctx->pc = 0x17ed00u;

    // 0x17ed00: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x17ed00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x17ed04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17ed04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17ed08: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x17ed08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x17ed0c: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x17ed0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
    // 0x17ed10: 0xafa60070  sw          $a2, 0x70($sp)
    ctx->pc = 0x17ed10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 6));
    // 0x17ed14: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x17ed14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x17ed18: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x17ed18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x17ed1c: 0x8fa50070  lw          $a1, 0x70($sp)
    ctx->pc = 0x17ed1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x17ed20: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x17ed20u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17ed24: 0xc0bc3e2  jal         func_2F0F88
    ctx->pc = 0x17ED24u;
    SET_GPR_U32(ctx, 31, 0x17ED2Cu);
    ctx->pc = 0x2F0F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0F88u, 0x17ED24u, 0x17ED2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17ED2Cu;
label_17ed2c:
    // 0x17ed2c: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x17ed2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x17ed30: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x17ed30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x17ed34: 0xc040304  jal         func_100C10
    ctx->pc = 0x17ED34u;
    SET_GPR_U32(ctx, 31, 0x17ED3Cu);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x17ED34u, 0x17ED3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17ED3Cu;
label_17ed3c:
    // 0x17ed3c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17ed3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17ed40: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x17ed40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x17ed44: 0x3e00008  jr          $ra
    ctx->pc = 0x17ED44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17ED44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17ED4Cu;
    // 0x17ed4c: 0x0  nop
    ctx->pc = 0x17ed4cu;
    // NOP
    ctx->pc = 0x17ed50u;
}
