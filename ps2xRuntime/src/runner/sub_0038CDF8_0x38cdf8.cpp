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

// Function: sub_0038CDF8
// Address: 0x38cdf8 - 0x38ce58
void sub_0038CDF8_0x38cdf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038CDF8_0x38cdf8");
#endif

    ctx->pc = 0x38cdf8u;

    // 0x38cdf8: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x38CDF8u;
    {
        const bool branch_taken_0x38cdf8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x38cdf8) {
            ctx->pc = 0x38CE08u;
            goto label_38ce08;
        }
    }
    ctx->pc = 0x38CE00u;
    // 0x38ce00: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x38ce00u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x38ce04: 0xa4c20000  sh          $v0, 0x0($a2)
    ctx->pc = 0x38ce04u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 2));
label_38ce08:
    // 0x38ce08: 0x10e00003  beqz        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x38CE08u;
    {
        const bool branch_taken_0x38ce08 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x38ce08) {
            ctx->pc = 0x38CE18u;
            goto label_38ce18;
        }
    }
    ctx->pc = 0x38CE10u;
    // 0x38ce10: 0x94a20002  lhu         $v0, 0x2($a1)
    ctx->pc = 0x38ce10u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x38ce14: 0xa4e20000  sh          $v0, 0x0($a3)
    ctx->pc = 0x38ce14u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 2));
label_38ce18:
    // 0x38ce18: 0x11000003  beqz        $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x38CE18u;
    {
        const bool branch_taken_0x38ce18 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x38ce18) {
            ctx->pc = 0x38CE28u;
            goto label_38ce28;
        }
    }
    ctx->pc = 0x38CE20u;
    // 0x38ce20: 0x94a20004  lhu         $v0, 0x4($a1)
    ctx->pc = 0x38ce20u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x38ce24: 0xa5020000  sh          $v0, 0x0($t0)
    ctx->pc = 0x38ce24u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 2));
label_38ce28:
    // 0x38ce28: 0x3e00008  jr          $ra
    ctx->pc = 0x38CE28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38CE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CE28u;
        // 0x38ce2c: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38CE28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38CE30u;
    // 0x38ce30: 0x94a30006  lhu         $v1, 0x6($a1)
    ctx->pc = 0x38ce30u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 6)));
    // 0x38ce34: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x38ce34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x38ce38: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x38CE38u;
    {
        const bool branch_taken_0x38ce38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x38CE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CE38u;
        // 0x38ce3c: 0x31880  sll         $v1, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38ce38) {
            ctx->pc = 0x38CE50u;
            goto label_38ce50;
        }
    }
    ctx->pc = 0x38CE40u;
    // 0x38ce40: 0x8c820020  lw          $v0, 0x20($a0)
    ctx->pc = 0x38ce40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x38ce44: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x38ce44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x38ce48: 0x3e00008  jr          $ra
    ctx->pc = 0x38CE48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38CE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CE48u;
        // 0x38ce4c: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38CE48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38CE50u;
label_38ce50:
    // 0x38ce50: 0x3e00008  jr          $ra
    ctx->pc = 0x38CE50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38CE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CE50u;
        // 0x38ce54: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38CE50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38CE58u;
}
