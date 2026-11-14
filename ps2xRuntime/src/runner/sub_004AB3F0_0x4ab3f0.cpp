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

// Function: sub_004AB3F0
// Address: 0x4ab3f0 - 0x4ab430
void sub_004AB3F0_0x4ab3f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004AB3F0_0x4ab3f0");
#endif

    switch (ctx->pc) {
        case 0x4ab408u: goto label_4ab408;
        default: break;
    }

    ctx->pc = 0x4ab3f0u;

    // 0x4ab3f0: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x4ab3f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x4ab3f4: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x4AB3F4u;
    {
        const bool branch_taken_0x4ab3f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4AB3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AB3F4u;
        // 0x4ab3f8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ab3f4) {
            ctx->pc = 0x4AB424u;
            goto label_4ab424;
        }
    }
    ctx->pc = 0x4AB3FCu;
    // 0x4ab3fc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4ab3fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4ab400: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x4ab400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x4ab404: 0x0  nop
    ctx->pc = 0x4ab404u;
    // NOP
label_4ab408:
    // 0x4ab408: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x4ab408u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x4ab40c: 0x2ca30020  sltiu       $v1, $a1, 0x20
    ctx->pc = 0x4ab40cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x4ab410: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x4AB410u;
    {
        const bool branch_taken_0x4ab410 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AB414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AB410u;
        // 0x4ab414: 0xa61004  sllv        $v0, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 5) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ab410) {
            ctx->pc = 0x4AB424u;
            goto label_4ab424;
        }
    }
    ctx->pc = 0x4AB418u;
    // 0x4ab418: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x4ab418u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4ab41c: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x4AB41Cu;
    {
        const bool branch_taken_0x4ab41c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AB420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AB41Cu;
        // 0x4ab420: 0x24a20001  addiu       $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ab41c) {
            ctx->pc = 0x4AB408u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4ab408;
        }
    }
    ctx->pc = 0x4AB424u;
label_4ab424:
    // 0x4ab424: 0x3e00008  jr          $ra
    ctx->pc = 0x4AB424u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AB428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AB424u;
        // 0x4ab428: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AB424u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AB42Cu;
    // 0x4ab42c: 0x0  nop
    ctx->pc = 0x4ab42cu;
    // NOP
    ctx->pc = 0x4ab430u;
}
