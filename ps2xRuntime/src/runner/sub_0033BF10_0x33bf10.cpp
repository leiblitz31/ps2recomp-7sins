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

// Function: sub_0033BF10
// Address: 0x33bf10 - 0x33bf40
void sub_0033BF10_0x33bf10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033BF10_0x33bf10");
#endif

    ctx->pc = 0x33bf10u;

    // 0x33bf10: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x33bf10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x33bf14: 0x2463c210  addiu       $v1, $v1, -0x3DF0
    ctx->pc = 0x33bf14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951440));
    // 0x33bf18: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x33bf18u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x61C21Cu));
    // 0x33bf1c: 0x54440003  bnel        $v0, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x33BF1Cu;
    {
        const bool branch_taken_0x33bf1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x33bf1c) {
            ctx->pc = 0x33BF20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33BF1Cu;
            // 0x33bf20: 0x8c620008  lw          $v0, 0x8($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33BF2Cu;
            goto label_33bf2c;
        }
    }
    ctx->pc = 0x33BF24u;
    // 0x33bf24: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x33BF24u;
    {
        const bool branch_taken_0x33bf24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33BF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BF24u;
        // 0x33bf28: 0xac60000c  sw          $zero, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33bf24) {
            ctx->pc = 0x33BF34u;
            goto label_33bf34;
        }
    }
    ctx->pc = 0x33BF2Cu;
label_33bf2c:
    // 0x33bf2c: 0x50440001  beql        $v0, $a0, . + 4 + (0x1 << 2)
    ctx->pc = 0x33BF2Cu;
    {
        const bool branch_taken_0x33bf2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x33bf2c) {
            ctx->pc = 0x33BF30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33BF2Cu;
            // 0x33bf30: 0xac600008  sw          $zero, 0x8($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33BF34u;
            goto label_33bf34;
        }
    }
    ctx->pc = 0x33BF34u;
label_33bf34:
    // 0x33bf34: 0x3e00008  jr          $ra
    ctx->pc = 0x33BF34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33BF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BF34u;
        // 0x33bf38: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33BF34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33BF3Cu;
    // 0x33bf3c: 0x0  nop
    ctx->pc = 0x33bf3cu;
    // NOP
    ctx->pc = 0x33bf40u;
}
