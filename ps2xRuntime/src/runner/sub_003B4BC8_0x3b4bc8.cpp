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

// Function: sub_003B4BC8
// Address: 0x3b4bc8 - 0x3b4bf8
void sub_003B4BC8_0x3b4bc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B4BC8_0x3b4bc8");
#endif

    switch (ctx->pc) {
        case 0x3b4bccu: goto label_3b4bcc;
        default: break;
    }

    ctx->pc = 0x3b4bc8u;

    // 0x3b4bc8: 0x24a20100  addiu       $v0, $a1, 0x100
    ctx->pc = 0x3b4bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 256));
label_3b4bcc:
    // 0x3b4bcc: 0x78a30000  lq          $v1, 0x0($a1)
    ctx->pc = 0x3b4bccu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3b4bd0: 0x78a60010  lq          $a2, 0x10($a1)
    ctx->pc = 0x3b4bd0u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x3b4bd4: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x3b4bd4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x3b4bd8: 0x7c860010  sq          $a2, 0x10($a0)
    ctx->pc = 0x3b4bd8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 6));
    // 0x3b4bdc: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x3b4bdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x3b4be0: 0x14a2fffa  bne         $a1, $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3B4BE0u;
    {
        const bool branch_taken_0x3b4be0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x3B4BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4BE0u;
        // 0x3b4be4: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b4be0) {
            ctx->pc = 0x3B4BCCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b4bcc;
        }
    }
    ctx->pc = 0x3B4BE8u;
    // 0x3b4be8: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x3b4be8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3b4bec: 0x3e00008  jr          $ra
    ctx->pc = 0x3B4BECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B4BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4BECu;
        // 0x3b4bf0: 0x7c820000  sq          $v0, 0x0($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B4BECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B4BF4u;
    // 0x3b4bf4: 0x0  nop
    ctx->pc = 0x3b4bf4u;
    // NOP
    ctx->pc = 0x3b4bf8u;
}
