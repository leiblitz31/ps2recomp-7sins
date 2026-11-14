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

// Function: sub_001BBC20
// Address: 0x1bbc20 - 0x1bbc70
void sub_001BBC20_0x1bbc20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BBC20_0x1bbc20");
#endif

    switch (ctx->pc) {
        case 0x1bbc3cu: goto label_1bbc3c;
        default: break;
    }

    ctx->pc = 0x1bbc20u;

    // 0x1bbc20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1bbc20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1bbc24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1bbc24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1bbc28: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1bbc28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1bbc2c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1bbc2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x1bbc30: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1bbc30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bbc34: 0xc06ef1c  jal         func_1BBC70
    ctx->pc = 0x1BBC34u;
    SET_GPR_U32(ctx, 31, 0x1BBC3Cu);
    ctx->pc = 0x1BBC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BBC70u, 0x1BBC34u, 0x1BBC3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BBC3Cu;
label_1bbc3c:
    // 0x1bbc3c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1bbc3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1bbc40: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1bbc40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1bbc44: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1bbc44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1bbc48: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1bbc48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1bbc4c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1bbc4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1bbc50: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1bbc50u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1bbc54: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1bbc54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1bbc58: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1bbc58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bbc5c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1bbc5cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1bbc60: 0x3e00008  jr          $ra
    ctx->pc = 0x1BBC60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BBC60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BBC68u;
    // 0x1bbc68: 0x0  nop
    ctx->pc = 0x1bbc68u;
    // NOP
    // 0x1bbc6c: 0x0  nop
    ctx->pc = 0x1bbc6cu;
    // NOP
    ctx->pc = 0x1bbc70u;
}
