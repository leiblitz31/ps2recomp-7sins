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

// Function: sub_004B4FE0
// Address: 0x4b4fe0 - 0x4b5090
void sub_004B4FE0_0x4b4fe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B4FE0_0x4b4fe0");
#endif

    switch (ctx->pc) {
        case 0x4b5008u: goto label_4b5008;
        case 0x4b5038u: goto label_4b5038;
        default: break;
    }

    ctx->pc = 0x4b4fe0u;

    // 0x4b4fe0: 0x80502d  daddu       $t2, $a0, $zero
    ctx->pc = 0x4b4fe0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b4fe4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x4b4fe4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b4fe8: 0x8d420004  lw          $v0, 0x4($t2)
    ctx->pc = 0x4b4fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4)));
    // 0x4b4fec: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x4B4FECu;
    {
        const bool branch_taken_0x4b4fec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B4FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B4FECu;
        // 0x4b4ff0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b4fec) {
            ctx->pc = 0x4B5068u;
            goto label_4b5068;
        }
    }
    ctx->pc = 0x4B4FF4u;
    // 0x4b4ff4: 0x8d4b0000  lw          $t3, 0x0($t2)
    ctx->pc = 0x4b4ff4u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4b4ff8: 0x240d00ff  addiu       $t5, $zero, 0xFF
    ctx->pc = 0x4b4ff8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x4b4ffc: 0x160602d  daddu       $t4, $t3, $zero
    ctx->pc = 0x4b4ffcu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b5000: 0x1631021  addu        $v0, $t3, $v1
    ctx->pc = 0x4b5000u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 3)));
    // 0x4b5004: 0x0  nop
    ctx->pc = 0x4b5004u;
    // NOP
label_4b5008:
    // 0x4b5008: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x4b5008u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4b500c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4B500Cu;
    {
        const bool branch_taken_0x4b500c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B5010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B500Cu;
        // 0x4b5010: 0x8d480004  lw          $t0, 0x4($t2) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b500c) {
            ctx->pc = 0x4B5020u;
            goto label_4b5020;
        }
    }
    ctx->pc = 0x4B5014u;
    // 0x4b5014: 0x24690001  addiu       $t1, $v1, 0x1
    ctx->pc = 0x4b5014u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x4b5018: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x4B5018u;
    {
        const bool branch_taken_0x4b5018 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B501Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B5018u;
        // 0x4b501c: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b5018) {
            ctx->pc = 0x4B5058u;
            goto label_4b5058;
        }
    }
    ctx->pc = 0x4B5020u;
label_4b5020:
    // 0x4b5020: 0x104d000d  beq         $v0, $t5, . + 4 + (0xD << 2)
    ctx->pc = 0x4B5020u;
    {
        const bool branch_taken_0x4b5020 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 13));
        ctx->pc = 0x4B5024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B5020u;
        // 0x4b5024: 0x24690001  addiu       $t1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b5020) {
            ctx->pc = 0x4B5058u;
            goto label_4b5058;
        }
    }
    ctx->pc = 0x4B5028u;
    // 0x4b5028: 0x1831021  addu        $v0, $t4, $v1
    ctx->pc = 0x4b5028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 3)));
    // 0x4b502c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4b502cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b5030: 0x90470000  lbu         $a3, 0x0($v0)
    ctx->pc = 0x4b5030u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4b5034: 0x0  nop
    ctx->pc = 0x4b5034u;
    // NOP
label_4b5038:
    // 0x4b5038: 0x24a40001  addiu       $a0, $a1, 0x1
    ctx->pc = 0x4b5038u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x4b503c: 0xa71007  srav        $v0, $a3, $a1
    ctx->pc = 0x4b503cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 7), GPR_U32(ctx, 5) & 0x1F));
    // 0x4b5040: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x4b5040u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x4b5044: 0x308500ff  andi        $a1, $a0, 0xFF
    ctx->pc = 0x4b5044u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x4b5048: 0x24c30001  addiu       $v1, $a2, 0x1
    ctx->pc = 0x4b5048u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x4b504c: 0x2ca40008  sltiu       $a0, $a1, 0x8
    ctx->pc = 0x4b504cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x4b5050: 0x1480fff9  bnez        $a0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x4B5050u;
    {
        const bool branch_taken_0x4b5050 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B5054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B5050u;
        // 0x4b5054: 0x62300a  movz        $a2, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b5050) {
            ctx->pc = 0x4B5038u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4b5038;
        }
    }
    ctx->pc = 0x4B5058u;
label_4b5058:
    // 0x4b5058: 0x120182d  daddu       $v1, $t1, $zero
    ctx->pc = 0x4b5058u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b505c: 0x68102b  sltu        $v0, $v1, $t0
    ctx->pc = 0x4b505cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x4b5060: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x4B5060u;
    {
        const bool branch_taken_0x4b5060 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B5064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B5060u;
        // 0x4b5064: 0x1631021  addu        $v0, $t3, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b5060) {
            ctx->pc = 0x4B5008u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4b5008;
        }
    }
    ctx->pc = 0x4B5068u;
label_4b5068:
    // 0x4b5068: 0x3e00008  jr          $ra
    ctx->pc = 0x4B5068u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B506Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B5068u;
        // 0x4b506c: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B5068u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B5070u;
    // 0x4b5070: 0x85001b  divu        $zero, $a0, $a1
    ctx->pc = 0x4b5070u;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x4b5074: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x4B5074u;
    {
        const bool branch_taken_0x4b5074 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b5074) {
            ctx->pc = 0x4B5078u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B5074u;
            // 0x4b5078: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B507Cu;
            goto label_4b507c;
        }
    }
    ctx->pc = 0x4B507Cu;
label_4b507c:
    // 0x4b507c: 0x1012  mflo        $v0
    ctx->pc = 0x4b507cu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x4b5080: 0x210c2  srl         $v0, $v0, 3
    ctx->pc = 0x4b5080u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
    // 0x4b5084: 0x3e00008  jr          $ra
    ctx->pc = 0x4B5084u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B5088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B5084u;
        // 0x4b5088: 0x24420018  addiu       $v0, $v0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B5084u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B508Cu;
    // 0x4b508c: 0x0  nop
    ctx->pc = 0x4b508cu;
    // NOP
    ctx->pc = 0x4b5090u;
}
