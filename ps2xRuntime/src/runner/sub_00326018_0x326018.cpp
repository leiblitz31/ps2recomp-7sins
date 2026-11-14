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

// Function: sub_00326018
// Address: 0x326018 - 0x326060
void sub_00326018_0x326018(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00326018_0x326018");
#endif

    switch (ctx->pc) {
        case 0x326030u: goto label_326030;
        default: break;
    }

    ctx->pc = 0x326018u;

    // 0x326018: 0x8f82a634  lw          $v0, -0x59CC($gp)
    ctx->pc = 0x326018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944308)));
    // 0x32601c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x32601cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x326020: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x326020u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x326024: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x326024u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x326028: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x326028u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x32602c: 0x51180  sll         $v0, $a1, 6
    ctx->pc = 0x32602cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
label_326030:
    // 0x326030: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x326030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x326034: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x326034u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x326038: 0x10660007  beq         $v1, $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x326038u;
    {
        const bool branch_taken_0x326038 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        if (branch_taken_0x326038) {
            ctx->pc = 0x326058u;
            goto label_326058;
        }
    }
    ctx->pc = 0x326040u;
    // 0x326040: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x326040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x326044: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x326044u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x326048: 0x2ca30002  sltiu       $v1, $a1, 0x2
    ctx->pc = 0x326048u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x32604c: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x32604Cu;
    {
        const bool branch_taken_0x32604c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x32604c) {
            ctx->pc = 0x326050u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32604Cu;
            // 0x326050: 0x51180  sll         $v0, $a1, 6 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x326030u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_326030;
        }
    }
    ctx->pc = 0x326054u;
    // 0x326054: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x326054u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_326058:
    // 0x326058: 0x3e00008  jr          $ra
    ctx->pc = 0x326058u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32605Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326058u;
        // 0x32605c: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x326058u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x326060u;
}
