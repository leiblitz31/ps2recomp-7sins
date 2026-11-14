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

// Function: sub_003855C0
// Address: 0x3855c0 - 0x385638
void sub_003855C0_0x3855c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003855C0_0x3855c0");
#endif

    ctx->pc = 0x3855c0u;

    // 0x3855c0: 0x8f82bd00  lw          $v0, -0x4300($gp)
    ctx->pc = 0x3855c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950144)));
    // 0x3855c4: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x3855c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x3855c8: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x3855c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x3855cc: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x3855CCu;
    {
        const bool branch_taken_0x3855cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3855D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3855CCu;
        // 0x3855d0: 0x24830008  addiu       $v1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3855cc) {
            ctx->pc = 0x385628u;
            goto label_385628;
        }
    }
    ctx->pc = 0x3855D4u;
    // 0x3855d4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x3855d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x3855d8: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x3855D8u;
    {
        const bool branch_taken_0x3855d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3855d8) {
            ctx->pc = 0x385628u;
            goto label_385628;
        }
    }
    ctx->pc = 0x3855E0u;
    // 0x3855e0: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x3855e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x3855e4: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x3855E4u;
    {
        const bool branch_taken_0x3855e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3855e4) {
            ctx->pc = 0x385628u;
            goto label_385628;
        }
    }
    ctx->pc = 0x3855ECu;
    // 0x3855ec: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x3855ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x3855f0: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x3855F0u;
    {
        const bool branch_taken_0x3855f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3855f0) {
            ctx->pc = 0x385628u;
            goto label_385628;
        }
    }
    ctx->pc = 0x3855F8u;
    // 0x3855f8: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x3855f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x3855fc: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x3855FCu;
    {
        const bool branch_taken_0x3855fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3855fc) {
            ctx->pc = 0x385628u;
            goto label_385628;
        }
    }
    ctx->pc = 0x385604u;
    // 0x385604: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x385604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x385608: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x385608u;
    {
        const bool branch_taken_0x385608 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x385608) {
            ctx->pc = 0x385628u;
            goto label_385628;
        }
    }
    ctx->pc = 0x385610u;
    // 0x385610: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x385610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x385614: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x385614u;
    {
        const bool branch_taken_0x385614 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x385614) {
            ctx->pc = 0x385628u;
            goto label_385628;
        }
    }
    ctx->pc = 0x38561Cu;
    // 0x38561c: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x38561cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x385620: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x385620u;
    {
        const bool branch_taken_0x385620 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x385620) {
            ctx->pc = 0x385630u;
            goto label_385630;
        }
    }
    ctx->pc = 0x385628u;
label_385628:
    // 0x385628: 0x3e00008  jr          $ra
    ctx->pc = 0x385628u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38562Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385628u;
        // 0x38562c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x385628u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x385630u;
label_385630:
    // 0x385630: 0x3e00008  jr          $ra
    ctx->pc = 0x385630u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x385634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385630u;
        // 0x385634: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x385630u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x385638u;
}
