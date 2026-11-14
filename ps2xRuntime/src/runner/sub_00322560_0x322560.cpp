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

// Function: sub_00322560
// Address: 0x322560 - 0x322608
void sub_00322560_0x322560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00322560_0x322560");
#endif

    ctx->pc = 0x322560u;

    // 0x322560: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x322560u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x322564: 0x8c62b1ac  lw          $v0, -0x4E54($v1)
    ctx->pc = 0x322564u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x61B1ACu));
    // 0x322568: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x322568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x32256c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x32256cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x322570: 0x10a00010  beqz        $a1, . + 4 + (0x10 << 2)
    ctx->pc = 0x322570u;
    {
        const bool branch_taken_0x322570 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x322574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322570u;
        // 0x322574: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322570) {
            ctx->pc = 0x3225B4u;
            goto label_3225b4;
        }
    }
    ctx->pc = 0x322578u;
    // 0x322578: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x322578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x32257c: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x32257Cu;
    {
        const bool branch_taken_0x32257c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x322580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32257Cu;
        // 0x322580: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32257c) {
            ctx->pc = 0x3225B4u;
            goto label_3225b4;
        }
    }
    ctx->pc = 0x322584u;
    // 0x322584: 0x8c830048  lw          $v1, 0x48($a0)
    ctx->pc = 0x322584u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x322588: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x322588u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
    // 0x32258c: 0x3c020032  lui         $v0, 0x32
    ctx->pc = 0x32258cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50 << 16));
    // 0x322590: 0x24422730  addiu       $v0, $v0, 0x2730
    ctx->pc = 0x322590u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10032));
    // 0x322594: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x322594u;
    {
        const bool branch_taken_0x322594 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x322598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322594u;
        // 0x322598: 0xac820048  sw          $v0, 0x48($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322594) {
            ctx->pc = 0x3225A8u;
            goto label_3225a8;
        }
    }
    ctx->pc = 0x32259Cu;
    // 0x32259c: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x32259cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x3225a0: 0x24429850  addiu       $v0, $v0, -0x67B0
    ctx->pc = 0x3225a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940752));
    // 0x3225a4: 0xac820048  sw          $v0, 0x48($a0)
    ctx->pc = 0x3225a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 2));
label_3225a8:
    // 0x3225a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3225a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3225ac: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x3225acu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x3225b0: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x3225b0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3225b4:
    // 0x3225b4: 0x3e00008  jr          $ra
    ctx->pc = 0x3225B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3225B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3225B4u;
        // 0x3225b8: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3225B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3225BCu;
    // 0x3225bc: 0x0  nop
    ctx->pc = 0x3225bcu;
    // NOP
    // 0x3225c0: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x3225c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x3225c4: 0x8c62b1ac  lw          $v0, -0x4E54($v1)
    ctx->pc = 0x3225c4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x61B1ACu));
    // 0x3225c8: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x3225c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x3225cc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3225ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3225d0: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x3225D0u;
    {
        const bool branch_taken_0x3225d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3225D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3225D0u;
        // 0x3225d4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3225d0) {
            ctx->pc = 0x3225FCu;
            goto label_3225fc;
        }
    }
    ctx->pc = 0x3225D8u;
    // 0x3225d8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3225d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3225dc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3225DCu;
    {
        const bool branch_taken_0x3225dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3225E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3225DCu;
        // 0x3225e0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3225dc) {
            ctx->pc = 0x3225FCu;
            goto label_3225fc;
        }
    }
    ctx->pc = 0x3225E4u;
    // 0x3225e4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x3225e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x3225e8: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3225E8u;
    {
        const bool branch_taken_0x3225e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3225e8) {
            ctx->pc = 0x3225ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3225E8u;
            // 0x3225ec: 0xac820048  sw          $v0, 0x48($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3225F0u;
            goto label_3225f0;
        }
    }
    ctx->pc = 0x3225F0u;
label_3225f0:
    // 0x3225f0: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x3225f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x3225f4: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x3225f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x3225f8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3225f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3225fc:
    // 0x3225fc: 0x3e00008  jr          $ra
    ctx->pc = 0x3225FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x322600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3225FCu;
        // 0x322600: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3225FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x322604u;
    // 0x322604: 0x0  nop
    ctx->pc = 0x322604u;
    // NOP
    ctx->pc = 0x322608u;
}
