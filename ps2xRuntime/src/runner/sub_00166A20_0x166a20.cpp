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

// Function: sub_00166A20
// Address: 0x166a20 - 0x166a60
void sub_00166A20_0x166a20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00166A20_0x166a20");
#endif

    switch (ctx->pc) {
        case 0x166a50u: goto label_166a50;
        default: break;
    }

    ctx->pc = 0x166a20u;

    // 0x166a20: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x166a20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x166a24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x166a24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x166a28: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x166a28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x166a2c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x166a2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x166a30: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x166a30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x166a34: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x166a34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x166a38: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x166a38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x166a3c: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x166a3cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x166a40: 0x27a7001c  addiu       $a3, $sp, 0x1C
    ctx->pc = 0x166a40u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x166a44: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x166a44u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166a48: 0xc059a98  jal         func_166A60
    ctx->pc = 0x166A48u;
    SET_GPR_U32(ctx, 31, 0x166A50u);
    ctx->pc = 0x166A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166A60u, 0x166A48u, 0x166A50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166A50u;
label_166a50:
    // 0x166a50: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x166a50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x166a54: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x166a54u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x166a58: 0x3e00008  jr          $ra
    ctx->pc = 0x166A58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x166A58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x166A60u;
}
