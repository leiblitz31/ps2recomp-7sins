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

// Function: sub_001FBB60
// Address: 0x1fbb60 - 0x1fbbb0
void sub_001FBB60_0x1fbb60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FBB60_0x1fbb60");
#endif

    ctx->pc = 0x1fbb60u;

    // 0x1fbb60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1fbb60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1fbb64: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1fbb64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x1fbb68: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x1fbb68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x1fbb6c: 0xafa60020  sw          $a2, 0x20($sp)
    ctx->pc = 0x1fbb6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 6));
    // 0x1fbb70: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x1fbb70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fbb74: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1fbb74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fbb78: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1fbb78u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1fbb7c: 0x8c8200a4  lw          $v0, 0xA4($a0)
    ctx->pc = 0x1fbb7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 164)));
    // 0x1fbb80: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1fbb80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fbb84: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1fbb84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fbb88: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1fbb88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1fbb8c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1fbb8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fbb90: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1fbb90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1fbb94: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1fbb94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1fbb98: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1fbb98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fbb9c: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x1fbb9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1fbba0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1fbba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1fbba4: 0x3e00008  jr          $ra
    ctx->pc = 0x1FBBA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FBBA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FBBACu;
    // 0x1fbbac: 0x0  nop
    ctx->pc = 0x1fbbacu;
    // NOP
    ctx->pc = 0x1fbbb0u;
}
