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

// Function: sub_00326268
// Address: 0x326268 - 0x3262b0
void sub_00326268_0x326268(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00326268_0x326268");
#endif

    switch (ctx->pc) {
        case 0x326280u: goto label_326280;
        default: break;
    }

    ctx->pc = 0x326268u;

    // 0x326268: 0x8f82a634  lw          $v0, -0x59CC($gp)
    ctx->pc = 0x326268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944308)));
    // 0x32626c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x32626cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x326270: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x326270u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x326274: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x326274u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x326278: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x326278u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x32627c: 0x51180  sll         $v0, $a1, 6
    ctx->pc = 0x32627cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
label_326280:
    // 0x326280: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x326280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x326284: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x326284u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x326288: 0x10660007  beq         $v1, $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x326288u;
    {
        const bool branch_taken_0x326288 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        if (branch_taken_0x326288) {
            ctx->pc = 0x3262A8u;
            goto label_3262a8;
        }
    }
    ctx->pc = 0x326290u;
    // 0x326290: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x326290u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x326294: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x326294u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x326298: 0x2ca30002  sltiu       $v1, $a1, 0x2
    ctx->pc = 0x326298u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x32629c: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x32629Cu;
    {
        const bool branch_taken_0x32629c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x32629c) {
            ctx->pc = 0x3262A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32629Cu;
            // 0x3262a0: 0x51180  sll         $v0, $a1, 6 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x326280u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_326280;
        }
    }
    ctx->pc = 0x3262A4u;
    // 0x3262a4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3262a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3262a8:
    // 0x3262a8: 0x3e00008  jr          $ra
    ctx->pc = 0x3262A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3262ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3262A8u;
        // 0x3262ac: 0x8c420004  lw          $v0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3262A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3262B0u;
}
