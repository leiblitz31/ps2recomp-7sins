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

// Function: sub_00321580
// Address: 0x321580 - 0x3215d8
void sub_00321580_0x321580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00321580_0x321580");
#endif

    switch (ctx->pc) {
        case 0x3215a8u: goto label_3215a8;
        default: break;
    }

    ctx->pc = 0x321580u;

    // 0x321580: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x321580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x321584: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x321584u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x321588: 0x8c870010  lw          $a3, 0x10($a0)
    ctx->pc = 0x321588u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x32158c: 0x1840000f  blez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x32158Cu;
    {
        const bool branch_taken_0x32158c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x321590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32158Cu;
        // 0x321590: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32158c) {
            ctx->pc = 0x3215CCu;
            goto label_3215cc;
        }
    }
    ctx->pc = 0x321594u;
    // 0x321594: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x321594u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x321598: 0x54a20003  bnel        $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x321598u;
    {
        const bool branch_taken_0x321598 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x321598) {
            ctx->pc = 0x32159Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x321598u;
            // 0x32159c: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3215A8u;
            goto label_3215a8;
        }
    }
    ctx->pc = 0x3215A0u;
    // 0x3215a0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x3215A0u;
    {
        const bool branch_taken_0x3215a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3215A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3215A0u;
        // 0x3215a4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3215a0) {
            ctx->pc = 0x3215CCu;
            goto label_3215cc;
        }
    }
    ctx->pc = 0x3215A8u;
label_3215a8:
    // 0x3215a8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x3215a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x3215ac: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x3215acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3215b0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3215B0u;
    {
        const bool branch_taken_0x3215b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3215B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3215B0u;
        // 0x3215b4: 0x61100  sll         $v0, $a2, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3215b0) {
            ctx->pc = 0x3215CCu;
            goto label_3215cc;
        }
    }
    ctx->pc = 0x3215B8u;
    // 0x3215b8: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x3215b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x3215bc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3215bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3215c0: 0x54a3fff9  bnel        $a1, $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x3215C0u;
    {
        const bool branch_taken_0x3215c0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x3215c0) {
            ctx->pc = 0x3215C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3215C0u;
            // 0x3215c4: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3215A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3215a8;
        }
    }
    ctx->pc = 0x3215C8u;
    // 0x3215c8: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x3215c8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3215cc:
    // 0x3215cc: 0x3e00008  jr          $ra
    ctx->pc = 0x3215CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3215D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3215CCu;
        // 0x3215d0: 0x100102d  daddu       $v0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3215CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3215D4u;
    // 0x3215d4: 0x0  nop
    ctx->pc = 0x3215d4u;
    // NOP
    ctx->pc = 0x3215d8u;
}
