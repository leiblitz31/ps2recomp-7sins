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

// Function: sub_00420A38
// Address: 0x420a38 - 0x420b28
void sub_00420A38_0x420a38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00420A38_0x420a38");
#endif

    switch (ctx->pc) {
        case 0x420a50u: goto label_420a50;
        case 0x420a80u: goto label_420a80;
        case 0x420af8u: goto label_420af8;
        default: break;
    }

    ctx->pc = 0x420a38u;

    // 0x420a38: 0x8c8a0008  lw          $t2, 0x8($a0)
    ctx->pc = 0x420a38u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x420a3c: 0x248c0008  addiu       $t4, $a0, 0x8
    ctx->pc = 0x420a3cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x420a40: 0x114c0036  beq         $t2, $t4, . + 4 + (0x36 << 2)
    ctx->pc = 0x420A40u;
    {
        const bool branch_taken_0x420a40 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 12));
        ctx->pc = 0x420A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420A40u;
        // 0x420a44: 0x240d0001  addiu       $t5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x420a40) {
            ctx->pc = 0x420B1Cu;
            goto label_420b1c;
        }
    }
    ctx->pc = 0x420A48u;
    // 0x420a48: 0x25430008  addiu       $v1, $t2, 0x8
    ctx->pc = 0x420a48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), 8));
    // 0x420a4c: 0x0  nop
    ctx->pc = 0x420a4cu;
    // NOP
label_420a50:
    // 0x420a50: 0x1060002f  beqz        $v1, . + 4 + (0x2F << 2)
    ctx->pc = 0x420A50u;
    {
        const bool branch_taken_0x420a50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x420A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420A50u;
        // 0x420a54: 0x254bfff8  addiu       $t3, $t2, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x420a50) {
            ctx->pc = 0x420B10u;
            goto label_420b10;
        }
    }
    ctx->pc = 0x420A58u;
    // 0x420a58: 0x81420008  lb          $v0, 0x8($t2)
    ctx->pc = 0x420a58u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 10), 8)));
    // 0x420a5c: 0x60482d  daddu       $t1, $v1, $zero
    ctx->pc = 0x420a5cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x420a60: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x420A60u;
    {
        const bool branch_taken_0x420a60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x420A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420A60u;
        // 0x420a64: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x420a60) {
            ctx->pc = 0x420AE4u;
            goto label_420ae4;
        }
    }
    ctx->pc = 0x420A68u;
    // 0x420a68: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x420a68u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x420a6c: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x420A6Cu;
    {
        const bool branch_taken_0x420a6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x420A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420A6Cu;
        // 0x420a70: 0x90c30000  lbu         $v1, 0x0($a2) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x420a6c) {
            ctx->pc = 0x420AE4u;
            goto label_420ae4;
        }
    }
    ctx->pc = 0x420A74u;
    // 0x420a74: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x420a74u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x420a78: 0x120382d  daddu       $a3, $t1, $zero
    ctx->pc = 0x420a78u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x420a7c: 0x0  nop
    ctx->pc = 0x420a7cu;
    // NOP
label_420a80:
    // 0x420a80: 0x80e40000  lb          $a0, 0x0($a3)
    ctx->pc = 0x420a80u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x420a84: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x420a84u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x420a88: 0x2482ff9f  addiu       $v0, $a0, -0x61
    ctx->pc = 0x420a88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967199));
    // 0x420a8c: 0x2c42001a  sltiu       $v0, $v0, 0x1A
    ctx->pc = 0x420a8cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)26) ? 1 : 0);
    // 0x420a90: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x420A90u;
    {
        const bool branch_taken_0x420a90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x420A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420A90u;
        // 0x420a94: 0x31e03  sra         $v1, $v1, 24 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x420a90) {
            ctx->pc = 0x420AA4u;
            goto label_420aa4;
        }
    }
    ctx->pc = 0x420A98u;
    // 0x420a98: 0x2482ffe0  addiu       $v0, $a0, -0x20
    ctx->pc = 0x420a98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967264));
    // 0x420a9c: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x420a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x420aa0: 0x22603  sra         $a0, $v0, 24
    ctx->pc = 0x420aa0u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 24));
label_420aa4:
    // 0x420aa4: 0x2462ff9f  addiu       $v0, $v1, -0x61
    ctx->pc = 0x420aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967199));
    // 0x420aa8: 0x2c42001a  sltiu       $v0, $v0, 0x1A
    ctx->pc = 0x420aa8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)26) ? 1 : 0);
    // 0x420aac: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x420AACu;
    {
        const bool branch_taken_0x420aac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x420AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420AACu;
        // 0x420ab0: 0x2462ffe0  addiu       $v0, $v1, -0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x420aac) {
            ctx->pc = 0x420ABCu;
            goto label_420abc;
        }
    }
    ctx->pc = 0x420AB4u;
    // 0x420ab4: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x420ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x420ab8: 0x21e03  sra         $v1, $v0, 24
    ctx->pc = 0x420ab8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 24));
label_420abc:
    // 0x420abc: 0x14830012  bne         $a0, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x420ABCu;
    {
        const bool branch_taken_0x420abc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x420AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420ABCu;
        // 0x420ac0: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x420abc) {
            ctx->pc = 0x420B08u;
            goto label_420b08;
        }
    }
    ctx->pc = 0x420AC4u;
    // 0x420ac4: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x420ac4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x420ac8: 0x80e20000  lb          $v0, 0x0($a3)
    ctx->pc = 0x420ac8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x420acc: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x420accu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x420ad0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x420AD0u;
    {
        const bool branch_taken_0x420ad0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x420AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420AD0u;
        // 0x420ad4: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x420ad0) {
            ctx->pc = 0x420AE4u;
            goto label_420ae4;
        }
    }
    ctx->pc = 0x420AD8u;
    // 0x420ad8: 0x81020000  lb          $v0, 0x0($t0)
    ctx->pc = 0x420ad8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x420adc: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x420ADCu;
    {
        const bool branch_taken_0x420adc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x420AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420ADCu;
        // 0x420ae0: 0x91030000  lbu         $v1, 0x0($t0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x420adc) {
            ctx->pc = 0x420A80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_420a80;
        }
    }
    ctx->pc = 0x420AE4u;
label_420ae4:
    // 0x420ae4: 0x81230000  lb          $v1, 0x0($t1)
    ctx->pc = 0x420ae4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x420ae8: 0x1a0202d  daddu       $a0, $t5, $zero
    ctx->pc = 0x420ae8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x420aec: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x420aecu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x420af0: 0x621826  xor         $v1, $v1, $v0
    ctx->pc = 0x420af0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x420af4: 0x3200b  movn        $a0, $zero, $v1
    ctx->pc = 0x420af4u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
label_420af8:
    // 0x420af8: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x420AF8u;
    {
        const bool branch_taken_0x420af8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x420af8) {
            ctx->pc = 0x420AFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x420AF8u;
            // 0x420afc: 0x8d4a0000  lw          $t2, 0x0($t2) (Delay Slot)
            SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x420B14u;
            goto label_420b14;
        }
    }
    ctx->pc = 0x420B00u;
    // 0x420b00: 0x3e00008  jr          $ra
    ctx->pc = 0x420B00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x420B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420B00u;
        // 0x420b04: 0x160102d  daddu       $v0, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x420B00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x420B08u;
label_420b08:
    // 0x420b08: 0x1000fffb  b           . + 4 + (-0x5 << 2)
    ctx->pc = 0x420B08u;
    {
        const bool branch_taken_0x420b08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x420B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420B08u;
        // 0x420b0c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x420b08) {
            ctx->pc = 0x420AF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_420af8;
        }
    }
    ctx->pc = 0x420B10u;
label_420b10:
    // 0x420b10: 0x8d4a0000  lw          $t2, 0x0($t2)
    ctx->pc = 0x420b10u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_420b14:
    // 0x420b14: 0x154cffce  bne         $t2, $t4, . + 4 + (-0x32 << 2)
    ctx->pc = 0x420B14u;
    {
        const bool branch_taken_0x420b14 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 12));
        ctx->pc = 0x420B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420B14u;
        // 0x420b18: 0x25430008  addiu       $v1, $t2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x420b14) {
            ctx->pc = 0x420A50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_420a50;
        }
    }
    ctx->pc = 0x420B1Cu;
label_420b1c:
    // 0x420b1c: 0x3e00008  jr          $ra
    ctx->pc = 0x420B1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x420B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420B1Cu;
        // 0x420b20: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x420B1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x420B24u;
    // 0x420b24: 0x0  nop
    ctx->pc = 0x420b24u;
    // NOP
    ctx->pc = 0x420b28u;
}
