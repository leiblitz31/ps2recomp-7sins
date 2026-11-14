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

// Function: sub_00435330
// Address: 0x435330 - 0x435360
void sub_00435330_0x435330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00435330_0x435330");
#endif

    ctx->pc = 0x435330u;

    // 0x435330: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x435330u;
    {
        const bool branch_taken_0x435330 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x435330) {
            ctx->pc = 0x435358u;
            goto label_435358;
        }
    }
    ctx->pc = 0x435338u;
    // 0x435338: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x435338u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x43533c: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x43533Cu;
    {
        const bool branch_taken_0x43533c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x435340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43533Cu;
        // 0x435340: 0x8f83beb8  lw          $v1, -0x4148($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950584)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43533c) {
            ctx->pc = 0x435358u;
            goto label_435358;
        }
    }
    ctx->pc = 0x435344u;
    // 0x435344: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x435344u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x435348: 0x94620014  lhu         $v0, 0x14($v1)
    ctx->pc = 0x435348u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x43534c: 0x30423000  andi        $v0, $v0, 0x3000
    ctx->pc = 0x43534cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)12288);
    // 0x435350: 0x3e00008  jr          $ra
    ctx->pc = 0x435350u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x435354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x435350u;
        // 0x435354: 0x21302  srl         $v0, $v0, 12 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x435350u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x435358u;
label_435358:
    // 0x435358: 0x3e00008  jr          $ra
    ctx->pc = 0x435358u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x43535Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x435358u;
        // 0x43535c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x435358u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x435360u;
}
