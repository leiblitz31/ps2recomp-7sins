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

// Function: sub_004AB830
// Address: 0x4ab830 - 0x4ab8f8
void sub_004AB830_0x4ab830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004AB830_0x4ab830");
#endif

    switch (ctx->pc) {
        case 0x4ab848u: goto label_4ab848;
        default: break;
    }

    ctx->pc = 0x4ab830u;

    // 0x4ab830: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x4ab830u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x4ab834: 0x24aa000c  addiu       $t2, $a1, 0xC
    ctx->pc = 0x4ab834u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
    // 0x4ab838: 0x65823  negu        $t3, $a2
    ctx->pc = 0x4ab838u;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 6)));
    // 0x4ab83c: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x4ab83cu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ab840: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x4ab840u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ab844: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4ab844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4ab848:
    // 0x4ab848: 0x8c670008  lw          $a3, 0x8($v1)
    ctx->pc = 0x4ab848u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x4ab84c: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x4ab84cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ab850: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x4ab850u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4ab854: 0x2442fff4  addiu       $v0, $v0, -0xC
    ctx->pc = 0x4ab854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967284));
    // 0x4ab858: 0x471023  subu        $v0, $v0, $a3
    ctx->pc = 0x4ab858u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x4ab85c: 0x4a102b  sltu        $v0, $v0, $t2
    ctx->pc = 0x4ab85cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x4ab860: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x4AB860u;
    {
        const bool branch_taken_0x4ab860 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4ab860) {
            ctx->pc = 0x4AB864u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4AB860u;
            // 0x4ab864: 0x8c82000c  lw          $v0, 0xC($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4AB8A8u;
            goto label_4ab8a8;
        }
    }
    ctx->pc = 0x4AB868u;
    // 0x4ab868: 0x24e7000c  addiu       $a3, $a3, 0xC
    ctx->pc = 0x4ab868u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 12));
    // 0x4ab86c: 0x674021  addu        $t0, $v1, $a3
    ctx->pc = 0x4ab86cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x4ab870: 0x2502000b  addiu       $v0, $t0, 0xB
    ctx->pc = 0x4ab870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 11));
    // 0x4ab874: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x4ab874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x4ab878: 0x4b4024  and         $t0, $v0, $t3
    ctx->pc = 0x4ab878u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & GPR_U64(ctx, 11));
    // 0x4ab87c: 0x2508fff4  addiu       $t0, $t0, -0xC
    ctx->pc = 0x4ab87cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967284));
    // 0x4ab880: 0x10a1021  addu        $v0, $t0, $t2
    ctx->pc = 0x4ab880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 10)));
    // 0x4ab884: 0x122102b  sltu        $v0, $t1, $v0
    ctx->pc = 0x4ab884u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x4ab888: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x4AB888u;
    {
        const bool branch_taken_0x4ab888 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4ab888) {
            ctx->pc = 0x4AB88Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4AB888u;
            // 0x4ab88c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4AB8A4u;
            goto label_4ab8a4;
        }
    }
    ctx->pc = 0x4AB890u;
    // 0x4ab890: 0x671021  addu        $v0, $v1, $a3
    ctx->pc = 0x4ab890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x4ab894: 0x102102b  sltu        $v0, $t0, $v0
    ctx->pc = 0x4ab894u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x4ab898: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x4AB898u;
    {
        const bool branch_taken_0x4ab898 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ab898) {
            ctx->pc = 0x4AB8B4u;
            goto label_4ab8b4;
        }
    }
    ctx->pc = 0x4AB8A0u;
    // 0x4ab8a0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x4ab8a0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4ab8a4:
    // 0x4ab8a4: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x4ab8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_4ab8a8:
    // 0x4ab8a8: 0x120182d  daddu       $v1, $t1, $zero
    ctx->pc = 0x4ab8a8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ab8ac: 0x5462ffe6  bnel        $v1, $v0, . + 4 + (-0x1A << 2)
    ctx->pc = 0x4AB8ACu;
    {
        const bool branch_taken_0x4ab8ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x4ab8ac) {
            ctx->pc = 0x4AB8B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4AB8ACu;
            // 0x4ab8b0: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4AB848u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4ab848;
        }
    }
    ctx->pc = 0x4AB8B4u;
label_4ab8b4:
    // 0x4ab8b4: 0x1100000d  beqz        $t0, . + 4 + (0xD << 2)
    ctx->pc = 0x4AB8B4u;
    {
        const bool branch_taken_0x4ab8b4 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ab8b4) {
            ctx->pc = 0x4AB8ECu;
            goto label_4ab8ec;
        }
    }
    ctx->pc = 0x4AB8BCu;
    // 0x4ab8bc: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x4ab8bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4ab8c0: 0xad030004  sw          $v1, 0x4($t0)
    ctx->pc = 0x4ab8c0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 3));
    // 0x4ab8c4: 0xad060000  sw          $a2, 0x0($t0)
    ctx->pc = 0x4ab8c4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 6));
    // 0x4ab8c8: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x4ab8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x4ab8cc: 0x54c20001  bnel        $a2, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x4AB8CCu;
    {
        const bool branch_taken_0x4ab8cc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x4ab8cc) {
            ctx->pc = 0x4AB8D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4AB8CCu;
            // 0x4ab8d0: 0xacc80004  sw          $t0, 0x4($a2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4AB8D4u;
            goto label_4ab8d4;
        }
    }
    ctx->pc = 0x4AB8D4u;
label_4ab8d4:
    // 0x4ab8d4: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x4ab8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x4ab8d8: 0x8d030004  lw          $v1, 0x4($t0)
    ctx->pc = 0x4ab8d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x4ab8dc: 0x54620001  bnel        $v1, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x4AB8DCu;
    {
        const bool branch_taken_0x4ab8dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x4ab8dc) {
            ctx->pc = 0x4AB8E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4AB8DCu;
            // 0x4ab8e0: 0xac680000  sw          $t0, 0x0($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4AB8E4u;
            goto label_4ab8e4;
        }
    }
    ctx->pc = 0x4AB8E4u;
label_4ab8e4:
    // 0x4ab8e4: 0xad050008  sw          $a1, 0x8($t0)
    ctx->pc = 0x4ab8e4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 5));
    // 0x4ab8e8: 0x250c000c  addiu       $t4, $t0, 0xC
    ctx->pc = 0x4ab8e8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 8), 12));
label_4ab8ec:
    // 0x4ab8ec: 0x3e00008  jr          $ra
    ctx->pc = 0x4AB8ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AB8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AB8ECu;
        // 0x4ab8f0: 0x180102d  daddu       $v0, $t4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AB8ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AB8F4u;
    // 0x4ab8f4: 0x0  nop
    ctx->pc = 0x4ab8f4u;
    // NOP
    ctx->pc = 0x4ab8f8u;
}
