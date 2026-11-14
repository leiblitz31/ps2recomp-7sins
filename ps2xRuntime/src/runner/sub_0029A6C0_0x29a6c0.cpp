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

// Function: sub_0029A6C0
// Address: 0x29a6c0 - 0x29a710
void sub_0029A6C0_0x29a6c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029A6C0_0x29a6c0");
#endif

    ctx->pc = 0x29a6c0u;

    // 0x29a6c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x29a6c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x29a6c4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x29a6c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x29a6c8: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x29a6c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x29a6cc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x29a6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29a6d0: 0x2c410004  sltiu       $at, $v0, 0x4
    ctx->pc = 0x29a6d0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x29a6d4: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x29A6D4u;
    {
        const bool branch_taken_0x29a6d4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x29a6d4) {
            ctx->pc = 0x29A6F8u;
            goto label_29a6f8;
        }
    }
    ctx->pc = 0x29A6DCu;
    // 0x29a6dc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x29a6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29a6e0: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x29a6e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x29a6e4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x29a6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29a6e8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x29a6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x29a6ec: 0x8c42004c  lw          $v0, 0x4C($v0)
    ctx->pc = 0x29a6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x29a6f0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x29A6F0u;
    {
        const bool branch_taken_0x29a6f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29a6f0) {
            ctx->pc = 0x29A6FCu;
            goto label_29a6fc;
        }
    }
    ctx->pc = 0x29A6F8u;
label_29a6f8:
    // 0x29a6f8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x29a6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_29a6fc:
    // 0x29a6fc: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x29a6fcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x29a700: 0x3e00008  jr          $ra
    ctx->pc = 0x29A700u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29A700u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29A708u;
    // 0x29a708: 0x0  nop
    ctx->pc = 0x29a708u;
    // NOP
    // 0x29a70c: 0x0  nop
    ctx->pc = 0x29a70cu;
    // NOP
    ctx->pc = 0x29a710u;
}
