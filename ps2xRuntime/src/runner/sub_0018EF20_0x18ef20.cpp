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

// Function: sub_0018EF20
// Address: 0x18ef20 - 0x18ef60
void sub_0018EF20_0x18ef20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018EF20_0x18ef20");
#endif

    switch (ctx->pc) {
        case 0x18ef3cu: goto label_18ef3c;
        default: break;
    }

    ctx->pc = 0x18ef20u;

    // 0x18ef20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x18ef20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x18ef24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18ef24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18ef28: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x18ef28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x18ef2c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x18ef2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x18ef30: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x18ef30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18ef34: 0xc063bd8  jal         func_18EF60
    ctx->pc = 0x18EF34u;
    SET_GPR_U32(ctx, 31, 0x18EF3Cu);
    ctx->pc = 0x18EF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18EF60u, 0x18EF34u, 0x18EF3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18EF3Cu;
label_18ef3c:
    // 0x18ef3c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x18ef3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18ef40: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x18ef40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x18ef44: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x18ef44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x18ef48: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x18ef48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x18ef4c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18ef4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18ef50: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18ef50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18ef54: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x18ef54u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x18ef58: 0x3e00008  jr          $ra
    ctx->pc = 0x18EF58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18EF58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18EF60u;
}
