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

// Function: sub_00185370
// Address: 0x185370 - 0x1853a0
void sub_00185370_0x185370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00185370_0x185370");
#endif

    ctx->pc = 0x185370u;

    // 0x185370: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x185370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x185374: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x185374u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x185378: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x185378u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x18537c: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x18537cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x185380: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x185380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x185384: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x185384u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x185388: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x185388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x18538c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18538cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x185390: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x185390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x185394: 0x3e00008  jr          $ra
    ctx->pc = 0x185394u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x185394u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18539Cu;
    // 0x18539c: 0x0  nop
    ctx->pc = 0x18539cu;
    // NOP
    ctx->pc = 0x1853a0u;
}
