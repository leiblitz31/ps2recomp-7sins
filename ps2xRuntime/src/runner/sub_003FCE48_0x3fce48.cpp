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

// Function: sub_003FCE48
// Address: 0x3fce48 - 0x3fce70
void sub_003FCE48_0x3fce48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003FCE48_0x3fce48");
#endif

    ctx->pc = 0x3fce48u;

    // 0x3fce48: 0x9082020b  lbu         $v0, 0x20B($a0)
    ctx->pc = 0x3fce48u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 523)));
    // 0x3fce4c: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x3fce4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3fce50: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3FCE50u;
    {
        const bool branch_taken_0x3fce50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3FCE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FCE50u;
        // 0x3fce54: 0x24030010  addiu       $v1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fce50) {
            ctx->pc = 0x3FCE64u;
            goto label_3fce64;
        }
    }
    ctx->pc = 0x3FCE58u;
    // 0x3fce58: 0xdc820108  ld          $v0, 0x108($a0)
    ctx->pc = 0x3fce58u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 264)));
    // 0x3fce5c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3fce5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3fce60: 0xfc820108  sd          $v0, 0x108($a0)
    ctx->pc = 0x3fce60u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 264), GPR_U64(ctx, 2));
label_3fce64:
    // 0x3fce64: 0x3e00008  jr          $ra
    ctx->pc = 0x3FCE64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3FCE64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3FCE6Cu;
    // 0x3fce6c: 0x0  nop
    ctx->pc = 0x3fce6cu;
    // NOP
    ctx->pc = 0x3fce70u;
}
