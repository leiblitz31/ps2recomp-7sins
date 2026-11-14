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

// Function: sub_001FBBB0
// Address: 0x1fbbb0 - 0x1fbc00
void sub_001FBBB0_0x1fbbb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FBBB0_0x1fbbb0");
#endif

    ctx->pc = 0x1fbbb0u;

    // 0x1fbbb0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1fbbb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1fbbb4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1fbbb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x1fbbb8: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x1fbbb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x1fbbbc: 0xafa60020  sw          $a2, 0x20($sp)
    ctx->pc = 0x1fbbbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 6));
    // 0x1fbbc0: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x1fbbc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fbbc4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1fbbc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fbbc8: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1fbbc8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1fbbcc: 0x8c8200a4  lw          $v0, 0xA4($a0)
    ctx->pc = 0x1fbbccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 164)));
    // 0x1fbbd0: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1fbbd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fbbd4: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1fbbd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fbbd8: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1fbbd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1fbbdc: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1fbbdcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fbbe0: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1fbbe0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1fbbe4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1fbbe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1fbbe8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1fbbe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fbbec: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x1fbbecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1fbbf0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1fbbf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1fbbf4: 0x3e00008  jr          $ra
    ctx->pc = 0x1FBBF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FBBF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FBBFCu;
    // 0x1fbbfc: 0x0  nop
    ctx->pc = 0x1fbbfcu;
    // NOP
    ctx->pc = 0x1fbc00u;
}
