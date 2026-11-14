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

// Function: sub_003FCE70
// Address: 0x3fce70 - 0x3fcea0
void sub_003FCE70_0x3fce70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003FCE70_0x3fce70");
#endif

    ctx->pc = 0x3fce70u;

    // 0x3fce70: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3fce70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fce74: 0x90a2020b  lbu         $v0, 0x20B($a1)
    ctx->pc = 0x3fce74u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 523)));
    // 0x3fce78: 0x2c420008  sltiu       $v0, $v0, 0x8
    ctx->pc = 0x3fce78u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x3fce7c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3FCE7Cu;
    {
        const bool branch_taken_0x3fce7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FCE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FCE7Cu;
        // 0x3fce80: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fce7c) {
            ctx->pc = 0x3FCE98u;
            goto label_3fce98;
        }
    }
    ctx->pc = 0x3FCE84u;
    // 0x3fce84: 0xdca20108  ld          $v0, 0x108($a1)
    ctx->pc = 0x3fce84u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 264)));
    // 0x3fce88: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x3fce88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3fce8c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3fce8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3fce90: 0xa0a4020c  sb          $a0, 0x20C($a1)
    ctx->pc = 0x3fce90u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 524), (uint8_t)GPR_U32(ctx, 4));
    // 0x3fce94: 0xfca20108  sd          $v0, 0x108($a1)
    ctx->pc = 0x3fce94u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 264), GPR_U64(ctx, 2));
label_3fce98:
    // 0x3fce98: 0x3e00008  jr          $ra
    ctx->pc = 0x3FCE98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3FCE98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3FCEA0u;
}
