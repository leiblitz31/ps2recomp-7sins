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

// Function: sub_0049F188
// Address: 0x49f188 - 0x49f1c0
void sub_0049F188_0x49f188(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0049F188_0x49f188");
#endif

    switch (ctx->pc) {
        case 0x49f198u: goto label_49f198;
        default: break;
    }

    ctx->pc = 0x49f188u;

    // 0x49f188: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x49f188u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x49f18c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x49F18Cu;
    {
        const bool branch_taken_0x49f18c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49F190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49F18Cu;
        // 0x49f190: 0x24860004  addiu       $a2, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49f18c) {
            ctx->pc = 0x49F1A8u;
            goto label_49f1a8;
        }
    }
    ctx->pc = 0x49F194u;
    // 0x49f194: 0x0  nop
    ctx->pc = 0x49f194u;
    // NOP
label_49f198:
    // 0x49f198: 0x14660004  bne         $v1, $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x49F198u;
    {
        const bool branch_taken_0x49f198 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        ctx->pc = 0x49F19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49F198u;
        // 0x49f19c: 0x2464ffe0  addiu       $a0, $v1, -0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49f198) {
            ctx->pc = 0x49F1ACu;
            goto label_49f1ac;
        }
    }
    ctx->pc = 0x49F1A0u;
    // 0x49f1a0: 0x3e00008  jr          $ra
    ctx->pc = 0x49F1A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49F1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49F1A0u;
        // 0x49f1a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49F1A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49F1A8u;
label_49f1a8:
    // 0x49f1a8: 0x2464ffe0  addiu       $a0, $v1, -0x20
    ctx->pc = 0x49f1a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967264));
label_49f1ac:
    // 0x49f1ac: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x49f1acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x49f1b0: 0x5445fff9  bnel        $v0, $a1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x49F1B0u;
    {
        const bool branch_taken_0x49f1b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x49f1b0) {
            ctx->pc = 0x49F1B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x49F1B0u;
            // 0x49f1b4: 0x8c630000  lw          $v1, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x49F198u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49f198;
        }
    }
    ctx->pc = 0x49F1B8u;
    // 0x49f1b8: 0x3e00008  jr          $ra
    ctx->pc = 0x49F1B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49F1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49F1B8u;
        // 0x49f1bc: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49F1B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49F1C0u;
}
