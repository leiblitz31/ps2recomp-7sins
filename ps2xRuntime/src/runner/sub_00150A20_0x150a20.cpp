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

// Function: sub_00150A20
// Address: 0x150a20 - 0x150a60
void sub_00150A20_0x150a20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00150A20_0x150a20");
#endif

    switch (ctx->pc) {
        case 0x150a40u: goto label_150a40;
        default: break;
    }

    ctx->pc = 0x150a20u;

    // 0x150a20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x150a20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x150a24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x150a24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x150a28: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x150a28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x150a2c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x150a2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x150a30: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x150a30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x150a34: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x150a34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x150a38: 0xc054298  jal         func_150A60
    ctx->pc = 0x150A38u;
    SET_GPR_U32(ctx, 31, 0x150A40u);
    ctx->pc = 0x150A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150A60u, 0x150A38u, 0x150A40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150A40u;
label_150a40:
    // 0x150a40: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x150a40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x150a44: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x150a44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x150a48: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x150a48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x150a4c: 0x3e00008  jr          $ra
    ctx->pc = 0x150A4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x150A4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x150A54u;
    // 0x150a54: 0x0  nop
    ctx->pc = 0x150a54u;
    // NOP
    // 0x150a58: 0x0  nop
    ctx->pc = 0x150a58u;
    // NOP
    // 0x150a5c: 0x0  nop
    ctx->pc = 0x150a5cu;
    // NOP
    ctx->pc = 0x150a60u;
}
