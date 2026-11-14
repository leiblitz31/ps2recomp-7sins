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

// Function: sub_0040CC40
// Address: 0x40cc40 - 0x40cc88
void sub_0040CC40_0x40cc40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0040CC40_0x40cc40");
#endif

    ctx->pc = 0x40cc40u;

    // 0x40cc40: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x40cc40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x40cc44: 0x2444ffff  addiu       $a0, $v0, -0x1
    ctx->pc = 0x40cc44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x40cc48: 0x2c83001a  sltiu       $v1, $a0, 0x1A
    ctx->pc = 0x40cc48u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)26) ? 1 : 0);
    // 0x40cc4c: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x40CC4Cu;
    {
        const bool branch_taken_0x40cc4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x40CC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40CC4Cu;
        // 0x40cc50: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40cc4c) {
            ctx->pc = 0x40CC7Cu;
            goto label_40cc7c;
        }
    }
    ctx->pc = 0x40CC54u;
    // 0x40cc54: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x40cc54u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x40cc58: 0x244205b0  addiu       $v0, $v0, 0x5B0
    ctx->pc = 0x40cc58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1456));
    // 0x40cc5c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x40cc5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x40cc60: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x40cc60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x40cc64: 0x800008  jr          $a0
    ctx->pc = 0x40CC64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x40CC6Cu: goto label_40cc6c;
            case 0x40CC74u: goto label_40cc74;
            case 0x40CC7Cu: goto label_40cc7c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40CC64u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x40CC6Cu;
label_40cc6c:
    // 0x40cc6c: 0x3e00008  jr          $ra
    ctx->pc = 0x40CC6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x40CC70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40CC6Cu;
        // 0x40cc70: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40CC6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x40CC74u;
label_40cc74:
    // 0x40cc74: 0x3e00008  jr          $ra
    ctx->pc = 0x40CC74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x40CC78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40CC74u;
        // 0x40cc78: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40CC74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x40CC7Cu;
label_40cc7c:
    // 0x40cc7c: 0x3e00008  jr          $ra
    ctx->pc = 0x40CC7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x40CC80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40CC7Cu;
        // 0x40cc80: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40CC7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x40CC84u;
    // 0x40cc84: 0x0  nop
    ctx->pc = 0x40cc84u;
    // NOP
    ctx->pc = 0x40cc88u;
}
