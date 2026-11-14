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

// Function: sub_004AAA18
// Address: 0x4aaa18 - 0x4aac10
void sub_004AAA18_0x4aaa18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004AAA18_0x4aaa18");
#endif

    switch (ctx->pc) {
        case 0x4aaa58u: goto label_4aaa58;
        case 0x4aaa74u: goto label_4aaa74;
        case 0x4aaaacu: goto label_4aaaac;
        case 0x4aaabcu: goto label_4aaabc;
        case 0x4aab40u: goto label_4aab40;
        case 0x4aab50u: goto label_4aab50;
        case 0x4aab80u: goto label_4aab80;
        default: break;
    }

    ctx->pc = 0x4aaa18u;

    // 0x4aaa18: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4aaa18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4aaa1c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x4aaa1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x4aaa20: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4aaa20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4aaa24: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4aaa24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aaa28: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4aaa28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4aaa2c: 0x26110010  addiu       $s1, $s0, 0x10
    ctx->pc = 0x4aaa2cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x4aaa30: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x4aaa30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x4aaa34: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x4aaa34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x4aaa38: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x4aaa38u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x4aaa3c: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x4aaa3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x4aaa40: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x4aaa40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x4aaa44: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x4aaa44u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x4aaa48: 0x8e060010  lw          $a2, 0x10($s0)
    ctx->pc = 0x4aaa48u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x4aaa4c: 0x50d1000d  beql        $a2, $s1, . + 4 + (0xD << 2)
    ctx->pc = 0x4AAA4Cu;
    {
        const bool branch_taken_0x4aaa4c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 17));
        if (branch_taken_0x4aaa4c) {
            ctx->pc = 0x4AAA50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4AAA4Cu;
            // 0x4aaa50: 0x8e020018  lw          $v0, 0x18($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4AAA84u;
            goto label_4aaa84;
        }
    }
    ctx->pc = 0x4AAA54u;
    // 0x4aaa54: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x4aaa54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_4aaa58:
    // 0x4aaa58: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x4aaa58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aaa5c: 0x8cc50004  lw          $a1, 0x4($a2)
    ctx->pc = 0x4aaa5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x4aaa60: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x4aaa60u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x4aaa64: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x4aaa64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4aaa68: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x4aaa68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x4aaa6c: 0xc127cae  jal         func_49F2B8
    ctx->pc = 0x4AAA6Cu;
    SET_GPR_U32(ctx, 31, 0x4AAA74u);
    ctx->pc = 0x4AAA70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AAA6Cu;
    // 0x4aaa70: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49F2B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49F2B8u, 0x4AAA6Cu, 0x4AAA74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AAA74u;
label_4aaa74:
    // 0x4aaa74: 0x8e060010  lw          $a2, 0x10($s0)
    ctx->pc = 0x4aaa74u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x4aaa78: 0x54d1fff7  bnel        $a2, $s1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x4AAA78u;
    {
        const bool branch_taken_0x4aaa78 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 17));
        if (branch_taken_0x4aaa78) {
            ctx->pc = 0x4AAA7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4AAA78u;
            // 0x4aaa7c: 0x8cc20000  lw          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4AAA58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4aaa58;
        }
    }
    ctx->pc = 0x4AAA80u;
    // 0x4aaa80: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x4aaa80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_4aaa84:
    // 0x4aaa84: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x4aaa84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x4aaa88: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x4AAA88u;
    {
        const bool branch_taken_0x4aaa88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4aaa88) {
            ctx->pc = 0x4AAA8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4AAA88u;
            // 0x4aaa8c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4AAAC0u;
            goto label_4aaac0;
        }
    }
    ctx->pc = 0x4AAA90u;
    // 0x4aaa90: 0x8f84b898  lw          $a0, -0x4768($gp)
    ctx->pc = 0x4aaa90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949016)));
    // 0x4aaa94: 0x10900003  beq         $a0, $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4AAA94u;
    {
        const bool branch_taken_0x4aaa94 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 16));
        if (branch_taken_0x4aaa94) {
            ctx->pc = 0x4AAAA4u;
            goto label_4aaaa4;
        }
    }
    ctx->pc = 0x4AAA9Cu;
    // 0x4aaa9c: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4AAA9Cu;
    {
        const bool branch_taken_0x4aaa9c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x4aaa9c) {
            ctx->pc = 0x4AAAB4u;
            goto label_4aaab4;
        }
    }
    ctx->pc = 0x4AAAA4u;
label_4aaaa4:
    // 0x4aaaa4: 0xc127cae  jal         func_49F2B8
    ctx->pc = 0x4AAAA4u;
    SET_GPR_U32(ctx, 31, 0x4AAAACu);
    ctx->pc = 0x4AAAA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AAAA4u;
    // 0x4aaaa8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49F2B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49F2B8u, 0x4AAAA4u, 0x4AAAACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AAAACu;
label_4aaaac:
    // 0x4aaaac: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4AAAACu;
    {
        const bool branch_taken_0x4aaaac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AAAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AAAACu;
        // 0x4aaab0: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4aaaac) {
            ctx->pc = 0x4AAAC0u;
            goto label_4aaac0;
        }
    }
    ctx->pc = 0x4AAAB4u;
label_4aaab4:
    // 0x4aaab4: 0xc12a9a0  jal         func_4AA680
    ctx->pc = 0x4AAAB4u;
    SET_GPR_U32(ctx, 31, 0x4AAABCu);
    ctx->pc = 0x4AAAB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AAAB4u;
    // 0x4aaab8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AA680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AA680u, 0x4AAAB4u, 0x4AAABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AAABCu;
label_4aaabc:
    // 0x4aaabc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x4aaabcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4aaac0:
    // 0x4aaac0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4aaac0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4aaac4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4aaac4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4aaac8: 0x3e00008  jr          $ra
    ctx->pc = 0x4AAAC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AAACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AAAC8u;
        // 0x4aaacc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AAAC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AAAD0u;
    // 0x4aaad0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4aaad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x4aaad4: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x4aaad4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x4aaad8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x4aaad8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x4aaadc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4aaadcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aaae0: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x4aaae0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x4aaae4: 0x26320010  addiu       $s2, $s1, 0x10
    ctx->pc = 0x4aaae4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x4aaae8: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x4aaae8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x4aaaec: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x4aaaecu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aaaf0: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x4aaaf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x4aaaf4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4aaaf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4aaaf8: 0x8e260010  lw          $a2, 0x10($s1)
    ctx->pc = 0x4aaaf8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x4aaafc: 0x10d20039  beq         $a2, $s2, . + 4 + (0x39 << 2)
    ctx->pc = 0x4AAAFCu;
    {
        const bool branch_taken_0x4aaafc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 18));
        ctx->pc = 0x4AAB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AAAFCu;
        // 0x4aab00: 0x8e330008  lw          $s3, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4aaafc) {
            ctx->pc = 0x4AABE4u;
            goto label_4aabe4;
        }
    }
    ctx->pc = 0x4AAB04u;
    // 0x4aab04: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x4aab04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x4aab08: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x4aab08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4aab0c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x4aab0cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x4aab10: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x4aab10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4aab14: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x4aab14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x4aab18: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x4aab18u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x4aab1c: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x4aab1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x4aab20: 0x14720007  bne         $v1, $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x4AAB20u;
    {
        const bool branch_taken_0x4aab20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 18));
        ctx->pc = 0x4AAB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AAB20u;
        // 0x4aab24: 0x24c70008  addiu       $a3, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4aab20) {
            ctx->pc = 0x4AAB40u;
            goto label_4aab40;
        }
    }
    ctx->pc = 0x4AAB28u;
    // 0x4aab28: 0xacd20004  sw          $s2, 0x4($a2)
    ctx->pc = 0x4aab28u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 18));
    // 0x4aab2c: 0xacd20000  sw          $s2, 0x0($a2)
    ctx->pc = 0x4aab2cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 18));
    // 0x4aab30: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x4aab30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x4aab34: 0xac460004  sw          $a2, 0x4($v0)
    ctx->pc = 0x4aab34u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 6));
    // 0x4aab38: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x4AAB38u;
    {
        const bool branch_taken_0x4aab38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AAB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AAB38u;
        // 0x4aab3c: 0xae260010  sw          $a2, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4aab38) {
            ctx->pc = 0x4AABE4u;
            goto label_4aabe4;
        }
    }
    ctx->pc = 0x4AAB40u;
label_4aab40:
    // 0x4aab40: 0x8cd00000  lw          $s0, 0x0($a2)
    ctx->pc = 0x4aab40u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4aab44: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4aab44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aab48: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x4AAB48u;
    {
        const bool branch_taken_0x4aab48 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AAB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AAB48u;
        // 0x4aab4c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4aab48) {
            ctx->pc = 0x4AAB6Cu;
            goto label_4aab6c;
        }
    }
    ctx->pc = 0x4AAB50u;
label_4aab50:
    // 0x4aab50: 0xe51021  addu        $v0, $a3, $a1
    ctx->pc = 0x4aab50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x4aab54: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x4aab54u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4aab58: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x4aab58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x4aab5c: 0xb3102b  sltu        $v0, $a1, $s3
    ctx->pc = 0x4aab5cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x4aab60: 0x0  nop
    ctx->pc = 0x4aab60u;
    // NOP
    // 0x4aab64: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x4AAB64u;
    {
        const bool branch_taken_0x4aab64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4AAB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AAB64u;
        // 0x4aab68: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4aab64) {
            ctx->pc = 0x4AAB50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4aab50;
        }
    }
    ctx->pc = 0x4AAB6Cu;
label_4aab6c:
    // 0x4aab6c: 0x54800006  bnel        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x4AAB6Cu;
    {
        const bool branch_taken_0x4aab6c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x4aab6c) {
            ctx->pc = 0x4AAB70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4AAB6Cu;
            // 0x4aab70: 0x8e220010  lw          $v0, 0x10($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4AAB88u;
            goto label_4aab88;
        }
    }
    ctx->pc = 0x4AAB74u;
    // 0x4aab74: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x4aab74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aab78: 0xc127cae  jal         func_49F2B8
    ctx->pc = 0x4AAB78u;
    SET_GPR_U32(ctx, 31, 0x4AAB80u);
    ctx->pc = 0x4AAB7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AAB78u;
    // 0x4aab7c: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49F2B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49F2B8u, 0x4AAB78u, 0x4AAB80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AAB80u;
label_4aab80:
    // 0x4aab80: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x4AAB80u;
    {
        const bool branch_taken_0x4aab80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AAB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AAB80u;
        // 0x4aab84: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4aab80) {
            ctx->pc = 0x4AABA4u;
            goto label_4aaba4;
        }
    }
    ctx->pc = 0x4AAB88u;
label_4aab88:
    // 0x4aab88: 0x26230010  addiu       $v1, $s1, 0x10
    ctx->pc = 0x4aab88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x4aab8c: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x4aab8cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
    // 0x4aab90: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x4aab90u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x4aab94: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x4aab94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x4aab98: 0xac660004  sw          $a2, 0x4($v1)
    ctx->pc = 0x4aab98u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 6));
    // 0x4aab9c: 0xae260010  sw          $a2, 0x10($s1)
    ctx->pc = 0x4aab9cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 6));
    // 0x4aaba0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x4aaba0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4aaba4:
    // 0x4aaba4: 0x1212000f  beq         $s0, $s2, . + 4 + (0xF << 2)
    ctx->pc = 0x4AABA4u;
    {
        const bool branch_taken_0x4aaba4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 18));
        ctx->pc = 0x4AABA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AABA4u;
        // 0x4aaba8: 0x26250010  addiu       $a1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4aaba4) {
            ctx->pc = 0x4AABE4u;
            goto label_4aabe4;
        }
    }
    ctx->pc = 0x4AABACu;
    // 0x4aabac: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4aabacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4aabb0: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x4aabb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x4aabb4: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x4aabb4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x4aabb8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x4aabb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x4aabbc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4aabbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4aabc0: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x4aabc0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x4aabc4: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x4aabc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x4aabc8: 0x1445ffdd  bne         $v0, $a1, . + 4 + (-0x23 << 2)
    ctx->pc = 0x4AABC8u;
    {
        const bool branch_taken_0x4aabc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x4AABCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AABC8u;
        // 0x4aabcc: 0x26070008  addiu       $a3, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4aabc8) {
            ctx->pc = 0x4AAB40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4aab40;
        }
    }
    ctx->pc = 0x4AABD0u;
    // 0x4aabd0: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x4aabd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x4aabd4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4aabd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x4aabd8: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x4aabd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x4aabdc: 0xac500004  sw          $s0, 0x4($v0)
    ctx->pc = 0x4aabdcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 16));
    // 0x4aabe0: 0xae300010  sw          $s0, 0x10($s1)
    ctx->pc = 0x4aabe0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 16));
label_4aabe4:
    // 0x4aabe4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x4aabe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4aabe8: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x4aabe8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4aabec: 0x2821018  mult        $v0, $s4, $v0
    ctx->pc = 0x4aabecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x4aabf0: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x4aabf0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4aabf4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x4aabf4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4aabf8: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x4aabf8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4aabfc: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x4aabfcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4aac00: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4aac00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4aac04: 0x3e00008  jr          $ra
    ctx->pc = 0x4AAC04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AAC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AAC04u;
        // 0x4aac08: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AAC04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AAC0Cu;
    // 0x4aac0c: 0x0  nop
    ctx->pc = 0x4aac0cu;
    // NOP
    ctx->pc = 0x4aac10u;
}
