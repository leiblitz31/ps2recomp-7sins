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

// Function: sub_00435290
// Address: 0x435290 - 0x4352d8
void sub_00435290_0x435290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00435290_0x435290");
#endif

    ctx->pc = 0x435290u;

    // 0x435290: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x435290u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x435294: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x435294u;
    {
        const bool branch_taken_0x435294 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x435298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x435294u;
        // 0x435298: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x435294) {
            ctx->pc = 0x4352D0u;
            goto label_4352d0;
        }
    }
    ctx->pc = 0x43529Cu;
    // 0x43529c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x43529cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4352a0: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x4352A0u;
    {
        const bool branch_taken_0x4352a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4352A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4352A0u;
        // 0x4352a4: 0x8f86beb8  lw          $a2, -0x4148($gp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950584)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4352a0) {
            ctx->pc = 0x4352D0u;
            goto label_4352d0;
        }
    }
    ctx->pc = 0x4352A8u;
    // 0x4352a8: 0x2ce70004  sltiu       $a3, $a3, 0x4
    ctx->pc = 0x4352a8u;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x4352ac: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x4352acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x4352b0: 0x663021  addu        $a2, $v1, $a2
    ctx->pc = 0x4352b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x4352b4: 0xa7200b  movn        $a0, $a1, $a3
    ctx->pc = 0x4352b4u;
    if (GPR_U64(ctx, 7) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 5));
    // 0x4352b8: 0x94c30014  lhu         $v1, 0x14($a2)
    ctx->pc = 0x4352b8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x4352bc: 0x42300  sll         $a0, $a0, 12
    ctx->pc = 0x4352bcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 12));
    // 0x4352c0: 0x3063cfff  andi        $v1, $v1, 0xCFFF
    ctx->pc = 0x4352c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)53247);
    // 0x4352c4: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x4352c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x4352c8: 0x3e00008  jr          $ra
    ctx->pc = 0x4352C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4352CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4352C8u;
        // 0x4352cc: 0xa4c30014  sh          $v1, 0x14($a2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 6), 20), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4352C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4352D0u;
label_4352d0:
    // 0x4352d0: 0x3e00008  jr          $ra
    ctx->pc = 0x4352D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4352D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4352D0u;
        // 0x4352d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4352D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4352D8u;
}
