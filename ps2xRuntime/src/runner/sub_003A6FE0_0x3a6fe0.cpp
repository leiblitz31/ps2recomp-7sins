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

// Function: sub_003A6FE0
// Address: 0x3a6fe0 - 0x3a70b0
void sub_003A6FE0_0x3a6fe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A6FE0_0x3a6fe0");
#endif

    switch (ctx->pc) {
        case 0x3a7044u: goto label_3a7044;
        case 0x3a7090u: goto label_3a7090;
        default: break;
    }

    ctx->pc = 0x3a6fe0u;

    // 0x3a6fe0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3a6fe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3a6fe4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3a6fe4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a6fe8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3a6fe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3a6fec: 0x8ca40018  lw          $a0, 0x18($a1)
    ctx->pc = 0x3a6fecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x3a6ff0: 0x8c860054  lw          $a2, 0x54($a0)
    ctx->pc = 0x3a6ff0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
    // 0x3a6ff4: 0x10c00029  beqz        $a2, . + 4 + (0x29 << 2)
    ctx->pc = 0x3A6FF4u;
    {
        const bool branch_taken_0x3a6ff4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A6FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6FF4u;
        // 0x3a6ff8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a6ff4) {
            ctx->pc = 0x3A709Cu;
            goto label_3a709c;
        }
    }
    ctx->pc = 0x3A6FFCu;
    // 0x3a6ffc: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x3a6ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x3a7000: 0x14620015  bne         $v1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x3A7000u;
    {
        const bool branch_taken_0x3a7000 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3A7004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7000u;
        // 0x3a7004: 0x8f82bd7c  lw          $v0, -0x4284($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950268)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7000) {
            ctx->pc = 0x3A7058u;
            goto label_3a7058;
        }
    }
    ctx->pc = 0x3A7008u;
    // 0x3a7008: 0x8f82bd78  lw          $v0, -0x4288($gp)
    ctx->pc = 0x3a7008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950264)));
    // 0x3a700c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x3a700cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a7010: 0x822821  addu        $a1, $a0, $v0
    ctx->pc = 0x3a7010u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x3a7014: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x3a7014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3a7018: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x3A7018u;
    {
        const bool branch_taken_0x3a7018 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a7018) {
            ctx->pc = 0x3A701Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A7018u;
            // 0x3a701c: 0x8c820054  lw          $v0, 0x54($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A7038u;
            goto label_3a7038;
        }
    }
    ctx->pc = 0x3A7020u;
    // 0x3a7020: 0x94c30004  lhu         $v1, 0x4($a2)
    ctx->pc = 0x3a7020u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x3a7024: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3a7024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3a7028: 0x54430003  bnel        $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3A7028u;
    {
        const bool branch_taken_0x3a7028 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x3a7028) {
            ctx->pc = 0x3A702Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A7028u;
            // 0x3a702c: 0x8c820054  lw          $v0, 0x54($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A7038u;
            goto label_3a7038;
        }
    }
    ctx->pc = 0x3A7030u;
    // 0x3a7030: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3A7030u;
    {
        const bool branch_taken_0x3a7030 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A7034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7030u;
        // 0x3a7034: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7030) {
            ctx->pc = 0x3A7044u;
            goto label_3a7044;
        }
    }
    ctx->pc = 0x3A7038u;
label_3a7038:
    // 0x3a7038: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x3a7038u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x3a703c: 0xc0e7eec  jal         func_39FBB0
    ctx->pc = 0x3A703Cu;
    SET_GPR_U32(ctx, 31, 0x3A7044u);
    ctx->pc = 0x3A7040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A703Cu;
    // 0x3a7040: 0x94450004  lhu         $a1, 0x4($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39FBB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39FBB0u, 0x3A703Cu, 0x3A7044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A7044u;
label_3a7044:
    // 0x3a7044: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3a7044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3a7048: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x3A7048u;
    {
        const bool branch_taken_0x3a7048 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A704Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7048u;
        // 0x3a704c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7048) {
            ctx->pc = 0x3A70A0u;
            goto label_3a70a0;
        }
    }
    ctx->pc = 0x3A7050u;
    // 0x3a7050: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x3A7050u;
    {
        const bool branch_taken_0x3a7050 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A7054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7050u;
        // 0x3a7054: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7050) {
            ctx->pc = 0x3A70A0u;
            goto label_3a70a0;
        }
    }
    ctx->pc = 0x3A7058u;
label_3a7058:
    // 0x3a7058: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x3a7058u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a705c: 0xa23821  addu        $a3, $a1, $v0
    ctx->pc = 0x3a705cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x3a7060: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x3a7060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3a7064: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x3A7064u;
    {
        const bool branch_taken_0x3a7064 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a7064) {
            ctx->pc = 0x3A7068u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A7064u;
            // 0x3a7068: 0x8c820054  lw          $v0, 0x54($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A7084u;
            goto label_3a7084;
        }
    }
    ctx->pc = 0x3A706Cu;
    // 0x3a706c: 0x94c30004  lhu         $v1, 0x4($a2)
    ctx->pc = 0x3a706cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x3a7070: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3a7070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3a7074: 0x54430003  bnel        $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3A7074u;
    {
        const bool branch_taken_0x3a7074 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x3a7074) {
            ctx->pc = 0x3A7078u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A7074u;
            // 0x3a7078: 0x8c820054  lw          $v0, 0x54($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A7084u;
            goto label_3a7084;
        }
    }
    ctx->pc = 0x3A707Cu;
    // 0x3a707c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3A707Cu;
    {
        const bool branch_taken_0x3a707c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A7080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A707Cu;
        // 0x3a7080: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a707c) {
            ctx->pc = 0x3A7090u;
            goto label_3a7090;
        }
    }
    ctx->pc = 0x3A7084u;
label_3a7084:
    // 0x3a7084: 0xa82021  addu        $a0, $a1, $t0
    ctx->pc = 0x3a7084u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x3a7088: 0xc0e7eec  jal         func_39FBB0
    ctx->pc = 0x3A7088u;
    SET_GPR_U32(ctx, 31, 0x3A7090u);
    ctx->pc = 0x3A708Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A7088u;
    // 0x3a708c: 0x94450004  lhu         $a1, 0x4($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39FBB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39FBB0u, 0x3A7088u, 0x3A7090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A7090u;
label_3a7090:
    // 0x3a7090: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3a7090u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3a7094: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x3A7094u;
    {
        const bool branch_taken_0x3a7094 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A7098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7094u;
        // 0x3a7098: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7094) {
            ctx->pc = 0x3A70A0u;
            goto label_3a70a0;
        }
    }
    ctx->pc = 0x3A709Cu;
label_3a709c:
    // 0x3a709c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3a709cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3a70a0:
    // 0x3a70a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3a70a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a70a4: 0x3e00008  jr          $ra
    ctx->pc = 0x3A70A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A70A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A70A4u;
        // 0x3a70a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A70A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A70ACu;
    // 0x3a70ac: 0x0  nop
    ctx->pc = 0x3a70acu;
    // NOP
    ctx->pc = 0x3a70b0u;
}
