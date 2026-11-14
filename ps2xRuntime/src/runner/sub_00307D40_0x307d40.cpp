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

// Function: sub_00307D40
// Address: 0x307d40 - 0x307d80
void sub_00307D40_0x307d40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00307D40_0x307d40");
#endif

    switch (ctx->pc) {
        case 0x307d58u: goto label_307d58;
        default: break;
    }

    ctx->pc = 0x307d40u;

    // 0x307d40: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x307d40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x307d44: 0x1046000b  beq         $v0, $a2, . + 4 + (0xB << 2)
    ctx->pc = 0x307D44u;
    {
        const bool branch_taken_0x307d44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        ctx->pc = 0x307D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307D44u;
        // 0x307d48: 0x85102b  sltu        $v0, $a0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x307d44) {
            ctx->pc = 0x307D74u;
            goto label_307d74;
        }
    }
    ctx->pc = 0x307D4Cu;
    // 0x307d4c: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x307D4Cu;
    {
        const bool branch_taken_0x307d4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x307d4c) {
            ctx->pc = 0x307D50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x307D4Cu;
            // 0x307d50: 0x2200a  movz        $a0, $zero, $v0 (Delay Slot)
            if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x307D78u;
            goto label_307d78;
        }
    }
    ctx->pc = 0x307D54u;
    // 0x307d54: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x307d54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_307d58:
    // 0x307d58: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x307d58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x307d5c: 0x10460005  beq         $v0, $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x307D5Cu;
    {
        const bool branch_taken_0x307d5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        ctx->pc = 0x307D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307D5Cu;
        // 0x307d60: 0x85102b  sltu        $v0, $a0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x307d5c) {
            ctx->pc = 0x307D74u;
            goto label_307d74;
        }
    }
    ctx->pc = 0x307D64u;
    // 0x307d64: 0x5440fffc  bnel        $v0, $zero, . + 4 + (-0x4 << 2)
    ctx->pc = 0x307D64u;
    {
        const bool branch_taken_0x307d64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x307d64) {
            ctx->pc = 0x307D68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x307D64u;
            // 0x307d68: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x307D58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_307d58;
        }
    }
    ctx->pc = 0x307D6Cu;
    // 0x307d6c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x307D6Cu;
    {
        const bool branch_taken_0x307d6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x307D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307D6Cu;
        // 0x307d70: 0x2200a  movz        $a0, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307d6c) {
            ctx->pc = 0x307D78u;
            goto label_307d78;
        }
    }
    ctx->pc = 0x307D74u;
label_307d74:
    // 0x307d74: 0x2200a  movz        $a0, $zero, $v0
    ctx->pc = 0x307d74u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
label_307d78:
    // 0x307d78: 0x3e00008  jr          $ra
    ctx->pc = 0x307D78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x307D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307D78u;
        // 0x307d7c: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x307D78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x307D80u;
}
