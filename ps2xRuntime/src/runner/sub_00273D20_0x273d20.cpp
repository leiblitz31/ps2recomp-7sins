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

// Function: sub_00273D20
// Address: 0x273d20 - 0x273d60
void sub_00273D20_0x273d20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00273D20_0x273d20");
#endif

    switch (ctx->pc) {
        case 0x273d3cu: goto label_273d3c;
        default: break;
    }

    ctx->pc = 0x273d20u;

    // 0x273d20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x273d20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x273d24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x273d24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x273d28: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x273d28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x273d2c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x273d2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x273d30: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x273d30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x273d34: 0xc09762c  jal         func_25D8B0
    ctx->pc = 0x273D34u;
    SET_GPR_U32(ctx, 31, 0x273D3Cu);
    ctx->pc = 0x25D8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D8B0u, 0x273D34u, 0x273D3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273D3Cu;
label_273d3c:
    // 0x273d3c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x273d3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x273d40: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x273d40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x273d44: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x273d44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x273d48: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x273d48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x273d4c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x273d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x273d50: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x273d50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x273d54: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x273d54u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x273d58: 0x3e00008  jr          $ra
    ctx->pc = 0x273D58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x273D58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x273D60u;
}
