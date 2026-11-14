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

// Function: sub_00413CD8
// Address: 0x413cd8 - 0x414170
void sub_00413CD8_0x413cd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00413CD8_0x413cd8");
#endif

    switch (ctx->pc) {
        case 0x413d00u: goto label_413d00;
        case 0x413dd8u: goto label_413dd8;
        case 0x413f40u: goto label_413f40;
        case 0x413fd8u: goto label_413fd8;
        case 0x414078u: goto label_414078;
        default: break;
    }

    ctx->pc = 0x413cd8u;

label_413cd8:
    // 0x413cd8: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x413cd8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x413cdc: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x413cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x413ce0: 0x24a5001f  addiu       $a1, $a1, 0x1F
    ctx->pc = 0x413ce0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31));
    // 0x413ce4: 0x3442ffe0  ori         $v0, $v0, 0xFFE0
    ctx->pc = 0x413ce4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65504);
    // 0x413ce8: 0x8d030004  lw          $v1, 0x4($t0)
    ctx->pc = 0x413ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x413cec: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x413cecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x413cf0: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x413CF0u;
    {
        const bool branch_taken_0x413cf0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x413CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x413CF0u;
        // 0x413cf4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x413cf0) {
            ctx->pc = 0x413D30u;
            goto label_413d30;
        }
    }
    ctx->pc = 0x413CF8u;
    // 0x413cf8: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x413cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x413cfc: 0x0  nop
    ctx->pc = 0x413cfcu;
    // NOP
label_413d00:
    // 0x413d00: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x413d00u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x413d04: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x413d04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x413d08: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x413D08u;
    {
        const bool branch_taken_0x413d08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x413d08) {
            ctx->pc = 0x413D0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x413D08u;
            // 0x413d0c: 0x8c630004  lw          $v1, 0x4($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x413D20u;
            goto label_413d20;
        }
    }
    ctx->pc = 0x413D10u;
    // 0x413d10: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x413d10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x413d14: 0x45102b  sltu        $v0, $v0, $a1
    ctx->pc = 0x413d14u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x413d18: 0x62380a  movz        $a3, $v1, $v0
    ctx->pc = 0x413d18u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 3));
    // 0x413d1c: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x413d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_413d20:
    // 0x413d20: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x413D20u;
    {
        const bool branch_taken_0x413d20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x413d20) {
            ctx->pc = 0x413D30u;
            goto label_413d30;
        }
    }
    ctx->pc = 0x413D28u;
    // 0x413d28: 0x50e0fff5  beql        $a3, $zero, . + 4 + (-0xB << 2)
    ctx->pc = 0x413D28u;
    {
        const bool branch_taken_0x413d28 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x413d28) {
            ctx->pc = 0x413D2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x413D28u;
            // 0x413d2c: 0x8c620010  lw          $v0, 0x10($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x413D00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_413d00;
        }
    }
    ctx->pc = 0x413D30u;
label_413d30:
    // 0x413d30: 0x54e00003  bnel        $a3, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x413D30u;
    {
        const bool branch_taken_0x413d30 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x413d30) {
            ctx->pc = 0x413D34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x413D30u;
            // 0x413d34: 0x8ce4000c  lw          $a0, 0xC($a3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x413D40u;
            goto label_413d40;
        }
    }
    ctx->pc = 0x413D38u;
    // 0x413d38: 0x3e00008  jr          $ra
    ctx->pc = 0x413D38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x413D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x413D38u;
        // 0x413d3c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x413D38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x413D40u;
label_413d40:
    // 0x413d40: 0x24a20040  addiu       $v0, $a1, 0x40
    ctx->pc = 0x413d40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    // 0x413d44: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x413d44u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x413d48: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x413D48u;
    {
        const bool branch_taken_0x413d48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x413D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x413D48u;
        // 0x413d4c: 0xe51021  addu        $v0, $a3, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x413d48) {
            ctx->pc = 0x413DC4u;
            goto label_413dc4;
        }
    }
    ctx->pc = 0x413D50u;
    // 0x413d50: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x413d50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x413d54: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x413D54u;
    {
        const bool branch_taken_0x413d54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x413D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x413D54u;
        // 0x413d58: 0x24460020  addiu       $a2, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x413d54) {
            ctx->pc = 0x413D8Cu;
            goto label_413d8c;
        }
    }
    ctx->pc = 0x413D5Cu;
    // 0x413d5c: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x413d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x413d60: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x413d60u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x413d64: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x413d64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x413d68: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x413D68u;
    {
        const bool branch_taken_0x413d68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x413D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x413D68u;
        // 0x413d6c: 0x852023  subu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x413d68) {
            ctx->pc = 0x413D8Cu;
            goto label_413d8c;
        }
    }
    ctx->pc = 0x413D70u;
    // 0x413d70: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x413d70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x413d74: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x413d74u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
    // 0x413d78: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x413d78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x413d7c: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x413d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x413d80: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x413d80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x413d84: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x413D84u;
    {
        const bool branch_taken_0x413d84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x413D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x413D84u;
        // 0x413d88: 0xacc4000c  sw          $a0, 0xC($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x413d84) {
            ctx->pc = 0x413DA0u;
            goto label_413da0;
        }
    }
    ctx->pc = 0x413D8Cu;
label_413d8c:
    // 0x413d8c: 0x8ce2000c  lw          $v0, 0xC($a3)
    ctx->pc = 0x413d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x413d90: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x413d90u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
    // 0x413d94: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x413d94u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x413d98: 0x2442ffe0  addiu       $v0, $v0, -0x20
    ctx->pc = 0x413d98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967264));
    // 0x413d9c: 0xacc2000c  sw          $v0, 0xC($a2)
    ctx->pc = 0x413d9cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 2));
label_413da0:
    // 0x413da0: 0xace60004  sw          $a2, 0x4($a3)
    ctx->pc = 0x413da0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 6));
    // 0x413da4: 0xacc00010  sw          $zero, 0x10($a2)
    ctx->pc = 0x413da4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 0));
    // 0x413da8: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x413da8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x413dac: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x413DACu;
    {
        const bool branch_taken_0x413dac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x413DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x413DACu;
        // 0x413db0: 0xacc70008  sw          $a3, 0x8($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x413dac) {
            ctx->pc = 0x413DB8u;
            goto label_413db8;
        }
    }
    ctx->pc = 0x413DB4u;
    // 0x413db4: 0xac460008  sw          $a2, 0x8($v0)
    ctx->pc = 0x413db4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 6));
label_413db8:
    // 0x413db8: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x413db8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x413dbc: 0xace5000c  sw          $a1, 0xC($a3)
    ctx->pc = 0x413dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 5));
    // 0x413dc0: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x413dc0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
label_413dc4:
    // 0x413dc4: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x413dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x413dc8: 0x14e2000a  bne         $a3, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x413DC8u;
    {
        const bool branch_taken_0x413dc8 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x413DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x413DC8u;
        // 0x413dcc: 0x24e40020  addiu       $a0, $a3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x413dc8) {
            ctx->pc = 0x413DF4u;
            goto label_413df4;
        }
    }
    ctx->pc = 0x413DD0u;
    // 0x413dd0: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x413dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x413dd4: 0x0  nop
    ctx->pc = 0x413dd4u;
    // NOP
label_413dd8:
    // 0x413dd8: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x413dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x413ddc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x413DDCu;
    {
        const bool branch_taken_0x413ddc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x413DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x413DDCu;
        // 0x413de0: 0xad020004  sw          $v0, 0x4($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x413ddc) {
            ctx->pc = 0x413DF4u;
            goto label_413df4;
        }
    }
    ctx->pc = 0x413DE4u;
    // 0x413de4: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x413de4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x413de8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x413de8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x413dec: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x413DECu;
    {
        const bool branch_taken_0x413dec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x413dec) {
            ctx->pc = 0x413DF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x413DECu;
            // 0x413df0: 0x8d020004  lw          $v0, 0x4($t0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x413DD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_413dd8;
        }
    }
    ctx->pc = 0x413DF4u;
label_413df4:
    // 0x413df4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x413df4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x413df8: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x413df8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x413dfc: 0x3e00008  jr          $ra
    ctx->pc = 0x413DFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x413E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x413DFCu;
        // 0x413e00: 0xace30010  sw          $v1, 0x10($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x413DFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x413E04u;
    // 0x413e04: 0x0  nop
    ctx->pc = 0x413e04u;
    // NOP
    // 0x413e08: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x413e08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x413e0c: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x413e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x413e10: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x413e10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x413e14: 0x24a5001f  addiu       $a1, $a1, 0x1F
    ctx->pc = 0x413e14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31));
    // 0x413e18: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x413e18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x413e1c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x413e1cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x413e20: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x413e20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x413e24: 0x2630ffe0  addiu       $s0, $s1, -0x20
    ctx->pc = 0x413e24u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967264));
    // 0x413e28: 0x3463ffe0  ori         $v1, $v1, 0xFFE0
    ctx->pc = 0x413e28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65504);
    // 0x413e2c: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x413e2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x413e30: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x413e30u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x413e34: 0x85102b  sltu        $v0, $a0, $a1
    ctx->pc = 0x413e34u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x413e38: 0x5440002d  bnel        $v0, $zero, . + 4 + (0x2D << 2)
    ctx->pc = 0x413E38u;
    {
        const bool branch_taken_0x413e38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x413e38) {
            ctx->pc = 0x413E3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x413E38u;
            // 0x413e3c: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x413EF0u;
            goto label_413ef0;
        }
    }
    ctx->pc = 0x413E40u;
    // 0x413e40: 0x24a20040  addiu       $v0, $a1, 0x40
    ctx->pc = 0x413e40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    // 0x413e44: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x413e44u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x413e48: 0x1040005f  beqz        $v0, . + 4 + (0x5F << 2)
    ctx->pc = 0x413E48u;
    {
        const bool branch_taken_0x413e48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x413E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x413E48u;
        // 0x413e4c: 0x2051021  addu        $v0, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x413e48) {
            ctx->pc = 0x413FC8u;
            goto label_413fc8;
        }
    }
    ctx->pc = 0x413E50u;
    // 0x413e50: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x413e50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x413e54: 0x24460020  addiu       $a2, $v0, 0x20
    ctx->pc = 0x413e54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x413e58: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x413E58u;
    {
        const bool branch_taken_0x413e58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x413E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x413E58u;
        // 0x413e5c: 0x8e27ffe0  lw          $a3, -0x20($s1) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294967264)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x413e58) {
            ctx->pc = 0x413E90u;
            goto label_413e90;
        }
    }
    ctx->pc = 0x413E60u;
    // 0x413e60: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x413e60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x413e64: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x413e64u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x413e68: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x413e68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x413e6c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x413E6Cu;
    {
        const bool branch_taken_0x413e6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x413E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x413E6Cu;
        // 0x413e70: 0x852023  subu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x413e6c) {
            ctx->pc = 0x413E90u;
            goto label_413e90;
        }
    }
    ctx->pc = 0x413E74u;
    // 0x413e74: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x413e74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x413e78: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x413e78u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
    // 0x413e7c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x413e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x413e80: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x413e80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x413e84: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x413e84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x413e88: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x413E88u;
    {
        const bool branch_taken_0x413e88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x413E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x413E88u;
        // 0x413e8c: 0xacc4000c  sw          $a0, 0xC($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x413e88) {
            ctx->pc = 0x413EA8u;
            goto label_413ea8;
        }
    }
    ctx->pc = 0x413E90u;
label_413e90:
    // 0x413e90: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x413e90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x413e94: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x413e94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x413e98: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x413e98u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x413e9c: 0x2442ffe0  addiu       $v0, $v0, -0x20
    ctx->pc = 0x413e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967264));
    // 0x413ea0: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x413ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
    // 0x413ea4: 0xacc2000c  sw          $v0, 0xC($a2)
    ctx->pc = 0x413ea4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 2));
label_413ea8:
    // 0x413ea8: 0xae060004  sw          $a2, 0x4($s0)
    ctx->pc = 0x413ea8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 6));
    // 0x413eac: 0xacc00010  sw          $zero, 0x10($a2)
    ctx->pc = 0x413eacu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 0));
    // 0x413eb0: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x413eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x413eb4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x413EB4u;
    {
        const bool branch_taken_0x413eb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x413EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x413EB4u;
        // 0x413eb8: 0xacd00008  sw          $s0, 0x8($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x413eb4) {
            ctx->pc = 0x413EC0u;
            goto label_413ec0;
        }
    }
    ctx->pc = 0x413EBCu;
    // 0x413ebc: 0xac460008  sw          $a2, 0x8($v0)
    ctx->pc = 0x413ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 6));
label_413ec0:
    // 0x413ec0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x413ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x413ec4: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x413ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x413ec8: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x413ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x413ecc: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x413ECCu;
    {
        const bool branch_taken_0x413ecc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x413ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x413ECCu;
        // 0x413ed0: 0xae05000c  sw          $a1, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x413ecc) {
            ctx->pc = 0x413EE4u;
            goto label_413ee4;
        }
    }
    ctx->pc = 0x413ED4u;
    // 0x413ed4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x413ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x413ed8: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x413ed8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x413edc: 0x1040009f  beqz        $v0, . + 4 + (0x9F << 2)
    ctx->pc = 0x413EDCu;
    {
        const bool branch_taken_0x413edc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x413EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x413EDCu;
        // 0x413ee0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x413edc) {
            ctx->pc = 0x41415Cu;
            goto label_41415c;
        }
    }
    ctx->pc = 0x413EE4u;
label_413ee4:
    // 0x413ee4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x413ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x413ee8: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x413EE8u;
    {
        const bool branch_taken_0x413ee8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x413EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x413EE8u;
        // 0x413eec: 0xace20004  sw          $v0, 0x4($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x413ee8) {
            ctx->pc = 0x413FC8u;
            goto label_413fc8;
        }
    }
    ctx->pc = 0x413EF0u;
label_413ef0:
    // 0x413ef0: 0xa42023  subu        $a0, $a1, $a0
    ctx->pc = 0x413ef0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x413ef4: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x413EF4u;
    {
        const bool branch_taken_0x413ef4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x413EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x413EF4u;
        // 0x413ef8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x413ef4) {
            ctx->pc = 0x413F18u;
            goto label_413f18;
        }
    }
    ctx->pc = 0x413EFCu;
    // 0x413efc: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x413efcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x413f00: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x413f00u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x413f04: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x413f04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x413f08: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x413F08u;
    {
        const bool branch_taken_0x413f08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x413F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x413F08u;
        // 0x413f0c: 0x104102b  sltu        $v0, $t0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x413f08) {
            ctx->pc = 0x413F1Cu;
            goto label_413f1c;
        }
    }
    ctx->pc = 0x413F10u;
    // 0x413f10: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x413f10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x413f14: 0x24480020  addiu       $t0, $v0, 0x20
    ctx->pc = 0x413f14u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
label_413f18:
    // 0x413f18: 0x104102b  sltu        $v0, $t0, $a0
    ctx->pc = 0x413f18u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_413f1c:
    // 0x413f1c: 0x1440002c  bnez        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x413F1Cu;
    {
        const bool branch_taken_0x413f1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x413F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x413F1Cu;
        // 0x413f20: 0x24820040  addiu       $v0, $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x413f1c) {
            ctx->pc = 0x413FD0u;
            goto label_413fd0;
        }
    }
    ctx->pc = 0x413F24u;
    // 0x413f24: 0x48102b  sltu        $v0, $v0, $t0
    ctx->pc = 0x413f24u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x413f28: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x413F28u;
    {
        const bool branch_taken_0x413f28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x413F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x413F28u;
        // 0x413f2c: 0x8e070000  lw          $a3, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x413f28) {
            ctx->pc = 0x413F80u;
            goto label_413f80;
        }
    }
    ctx->pc = 0x413F30u;
    // 0x413f30: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x413f30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x413f34: 0x5462000a  bnel        $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x413F34u;
    {
        const bool branch_taken_0x413f34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x413f34) {
            ctx->pc = 0x413F38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x413F34u;
            // 0x413f38: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x413F60u;
            goto label_413f60;
        }
    }
    ctx->pc = 0x413F3Cu;
    // 0x413f3c: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x413f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_413f40:
    // 0x413f40: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x413f40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x413f44: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x413F44u;
    {
        const bool branch_taken_0x413f44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x413F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x413F44u;
        // 0x413f48: 0xace20004  sw          $v0, 0x4($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x413f44) {
            ctx->pc = 0x413F5Cu;
            goto label_413f5c;
        }
    }
    ctx->pc = 0x413F4Cu;
    // 0x413f4c: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x413f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x413f50: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x413f50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x413f54: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x413F54u;
    {
        const bool branch_taken_0x413f54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x413f54) {
            ctx->pc = 0x413F58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x413F54u;
            // 0x413f58: 0x8ce20004  lw          $v0, 0x4($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x413F40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_413f40;
        }
    }
    ctx->pc = 0x413F5Cu;
label_413f5c:
    // 0x413f5c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x413f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_413f60:
    // 0x413f60: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x413f60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x413f64: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x413F64u;
    {
        const bool branch_taken_0x413f64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x413F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x413F64u;
        // 0x413f68: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x413f64) {
            ctx->pc = 0x413F70u;
            goto label_413f70;
        }
    }
    ctx->pc = 0x413F6Cu;
    // 0x413f6c: 0xac500008  sw          $s0, 0x8($v0)
    ctx->pc = 0x413f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 16));
label_413f70:
    // 0x413f70: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x413f70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x413f74: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x413f74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x413f78: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x413F78u;
    {
        const bool branch_taken_0x413f78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x413F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x413F78u;
        // 0x413f7c: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x413f78) {
            ctx->pc = 0x413FC8u;
            goto label_413fc8;
        }
    }
    ctx->pc = 0x413F80u;
label_413f80:
    // 0x413f80: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x413f80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x413f84: 0x2253021  addu        $a2, $s1, $a1
    ctx->pc = 0x413f84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x413f88: 0x1041023  subu        $v0, $t0, $a0
    ctx->pc = 0x413f88u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x413f8c: 0xacd00008  sw          $s0, 0x8($a2)
    ctx->pc = 0x413f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 16));
    // 0x413f90: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x413f90u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
    // 0x413f94: 0x2442ffe0  addiu       $v0, $v0, -0x20
    ctx->pc = 0x413f94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967264));
    // 0x413f98: 0xacc2000c  sw          $v0, 0xC($a2)
    ctx->pc = 0x413f98u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 2));
    // 0x413f9c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x413f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x413fa0: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x413fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x413fa4: 0xacc70000  sw          $a3, 0x0($a2)
    ctx->pc = 0x413fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 7));
    // 0x413fa8: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x413FA8u;
    {
        const bool branch_taken_0x413fa8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x413FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x413FA8u;
        // 0x413fac: 0xacc00010  sw          $zero, 0x10($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x413fa8) {
            ctx->pc = 0x413FB4u;
            goto label_413fb4;
        }
    }
    ctx->pc = 0x413FB0u;
    // 0x413fb0: 0xace60004  sw          $a2, 0x4($a3)
    ctx->pc = 0x413fb0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 6));
label_413fb4:
    // 0x413fb4: 0xae060004  sw          $a2, 0x4($s0)
    ctx->pc = 0x413fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 6));
    // 0x413fb8: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x413fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x413fbc: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x413FBCu;
    {
        const bool branch_taken_0x413fbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x413fbc) {
            ctx->pc = 0x413FC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x413FBCu;
            // 0x413fc0: 0xac460008  sw          $a2, 0x8($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x413FC4u;
            goto label_413fc4;
        }
    }
    ctx->pc = 0x413FC4u;
label_413fc4:
    // 0x413fc4: 0xae05000c  sw          $a1, 0xC($s0)
    ctx->pc = 0x413fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 5));
label_413fc8:
    // 0x413fc8: 0x10000064  b           . + 4 + (0x64 << 2)
    ctx->pc = 0x413FC8u;
    {
        const bool branch_taken_0x413fc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x413FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x413FC8u;
        // 0x413fcc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x413fc8) {
            ctx->pc = 0x41415Cu;
            goto label_41415c;
        }
    }
    ctx->pc = 0x413FD0u;
label_413fd0:
    // 0x413fd0: 0xc104f36  jal         func_413CD8
    ctx->pc = 0x413FD0u;
    SET_GPR_U32(ctx, 31, 0x413FD8u);
    ctx->pc = 0x413FD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x413FD0u;
    // 0x413fd4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x413CD8u;
    goto label_413cd8;
    ctx->pc = 0x413FD8u;
label_413fd8:
    // 0x413fd8: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x413fd8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x413fdc: 0x1100005f  beqz        $t0, . + 4 + (0x5F << 2)
    ctx->pc = 0x413FDCu;
    {
        const bool branch_taken_0x413fdc = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x413FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x413FDCu;
        // 0x413fe0: 0x100102d  daddu       $v0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x413fdc) {
            ctx->pc = 0x41415Cu;
            goto label_41415c;
        }
    }
    ctx->pc = 0x413FE4u;
    // 0x413fe4: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x413fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x413fe8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x413fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x413fec: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x413fecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x413ff0: 0x32082  srl         $a0, $v1, 2
    ctx->pc = 0x413ff0u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 2));
    // 0x413ff4: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x413ff4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x413ff8: 0x1082002b  beq         $a0, $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x413FF8u;
    {
        const bool branch_taken_0x413ff8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x413FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x413FF8u;
        // 0x413ffc: 0x2629ffe0  addiu       $t1, $s1, -0x20 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x413ff8) {
            ctx->pc = 0x4140A8u;
            goto label_4140a8;
        }
    }
    ctx->pc = 0x414000u;
    // 0x414000: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x414000u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
    // 0x414004: 0x41027  nor         $v0, $zero, $a0
    ctx->pc = 0x414004u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 4)));
    // 0x414008: 0x30460003  andi        $a2, $v0, 0x3
    ctx->pc = 0x414008u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x41400c: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x41400cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x414010: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x414010u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x414014: 0x10c00016  beqz        $a2, . + 4 + (0x16 << 2)
    ctx->pc = 0x414014u;
    {
        const bool branch_taken_0x414014 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x414018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414014u;
        // 0x414018: 0x220182d  daddu       $v1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x414014) {
            ctx->pc = 0x414070u;
            goto label_414070;
        }
    }
    ctx->pc = 0x41401Cu;
    // 0x41401c: 0x28c20003  slti        $v0, $a2, 0x3
    ctx->pc = 0x41401cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x414020: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x414020u;
    {
        const bool branch_taken_0x414020 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x414024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414020u;
        // 0x414024: 0x28c20002  slti        $v0, $a2, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x414020) {
            ctx->pc = 0x414058u;
            goto label_414058;
        }
    }
    ctx->pc = 0x414028u;
    // 0x414028: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x414028u;
    {
        const bool branch_taken_0x414028 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x414028) {
            ctx->pc = 0x41402Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x414028u;
            // 0x41402c: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x414048u;
            goto label_414048;
        }
    }
    ctx->pc = 0x414030u;
    // 0x414030: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x414030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x414034: 0x26230004  addiu       $v1, $s1, 0x4
    ctx->pc = 0x414034u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x414038: 0x25050004  addiu       $a1, $t0, 0x4
    ctx->pc = 0x414038u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x41403c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x41403cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x414040: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x414040u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
    // 0x414044: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x414044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_414048:
    // 0x414048: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x414048u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x41404c: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x41404cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x414050: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x414050u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x414054: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x414054u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_414058:
    // 0x414058: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x414058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x41405c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x41405cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x414060: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x414060u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x414064: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x414064u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x414068: 0x1087000f  beq         $a0, $a3, . + 4 + (0xF << 2)
    ctx->pc = 0x414068u;
    {
        const bool branch_taken_0x414068 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 7));
        ctx->pc = 0x41406Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414068u;
        // 0x41406c: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x414068) {
            ctx->pc = 0x4140A8u;
            goto label_4140a8;
        }
    }
    ctx->pc = 0x414070u;
label_414070:
    // 0x414070: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x414070u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x414074: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x414074u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_414078:
    // 0x414078: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x414078u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x41407c: 0x2484fffc  addiu       $a0, $a0, -0x4
    ctx->pc = 0x41407cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
    // 0x414080: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x414080u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x414084: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x414084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x414088: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x414088u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
    // 0x41408c: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x41408cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x414090: 0xacc30008  sw          $v1, 0x8($a2)
    ctx->pc = 0x414090u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
    // 0x414094: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x414094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x414098: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x414098u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x41409c: 0xacc2000c  sw          $v0, 0xC($a2)
    ctx->pc = 0x41409cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 2));
    // 0x4140a0: 0x1487fff5  bne         $a0, $a3, . + 4 + (-0xB << 2)
    ctx->pc = 0x4140A0u;
    {
        const bool branch_taken_0x4140a0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 7));
        ctx->pc = 0x4140A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4140A0u;
        // 0x4140a4: 0x24c60010  addiu       $a2, $a2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4140a0) {
            ctx->pc = 0x414078u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_414078;
        }
    }
    ctx->pc = 0x4140A8u;
label_4140a8:
    // 0x4140a8: 0x8e24ffe0  lw          $a0, -0x20($s1)
    ctx->pc = 0x4140a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294967264)));
    // 0x4140ac: 0x120302d  daddu       $a2, $t1, $zero
    ctx->pc = 0x4140acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4140b0: 0x8cc50008  lw          $a1, 0x8($a2)
    ctx->pc = 0x4140b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x4140b4: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x4140b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x4140b8: 0x8cc70004  lw          $a3, 0x4($a2)
    ctx->pc = 0x4140b8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x4140bc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4140BCu;
    {
        const bool branch_taken_0x4140bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4140C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4140BCu;
        // 0x4140c0: 0xacc00010  sw          $zero, 0x10($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4140bc) {
            ctx->pc = 0x4140D0u;
            goto label_4140d0;
        }
    }
    ctx->pc = 0x4140C4u;
    // 0x4140c4: 0xc2102b  sltu        $v0, $a2, $v0
    ctx->pc = 0x4140c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x4140c8: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x4140C8u;
    {
        const bool branch_taken_0x4140c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4140c8) {
            ctx->pc = 0x4140D4u;
            goto label_4140d4;
        }
    }
    ctx->pc = 0x4140D0u;
label_4140d0:
    // 0x4140d0: 0xac860004  sw          $a2, 0x4($a0)
    ctx->pc = 0x4140d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 6));
label_4140d4:
    // 0x4140d4: 0x10a0000f  beqz        $a1, . + 4 + (0xF << 2)
    ctx->pc = 0x4140D4u;
    {
        const bool branch_taken_0x4140d4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x4140d4) {
            ctx->pc = 0x414114u;
            goto label_414114;
        }
    }
    ctx->pc = 0x4140DCu;
    // 0x4140dc: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x4140dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x4140e0: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x4140e0u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x4140e4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x4140e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x4140e8: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x4140E8u;
    {
        const bool branch_taken_0x4140e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4140e8) {
            ctx->pc = 0x414114u;
            goto label_414114;
        }
    }
    ctx->pc = 0x4140F0u;
    // 0x4140f0: 0x10e00002  beqz        $a3, . + 4 + (0x2 << 2)
    ctx->pc = 0x4140F0u;
    {
        const bool branch_taken_0x4140f0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x4140F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4140F0u;
        // 0x4140f4: 0xaca70004  sw          $a3, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4140f0) {
            ctx->pc = 0x4140FCu;
            goto label_4140fc;
        }
    }
    ctx->pc = 0x4140F8u;
    // 0x4140f8: 0xace50008  sw          $a1, 0x8($a3)
    ctx->pc = 0x4140f8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 5));
label_4140fc:
    // 0x4140fc: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x4140fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x414100: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x414100u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x414104: 0x8d23000c  lw          $v1, 0xC($t1)
    ctx->pc = 0x414104u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
    // 0x414108: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x414108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x41410c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x41410cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x414110: 0xaca2000c  sw          $v0, 0xC($a1)
    ctx->pc = 0x414110u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 2));
label_414114:
    // 0x414114: 0x10e00011  beqz        $a3, . + 4 + (0x11 << 2)
    ctx->pc = 0x414114u;
    {
        const bool branch_taken_0x414114 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x414118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414114u;
        // 0x414118: 0x100102d  daddu       $v0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x414114) {
            ctx->pc = 0x41415Cu;
            goto label_41415c;
        }
    }
    ctx->pc = 0x41411Cu;
    // 0x41411c: 0x8ce20010  lw          $v0, 0x10($a3)
    ctx->pc = 0x41411cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x414120: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x414120u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x414124: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x414124u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x414128: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x414128u;
    {
        const bool branch_taken_0x414128 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x41412Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414128u;
        // 0x41412c: 0x100102d  daddu       $v0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x414128) {
            ctx->pc = 0x41415Cu;
            goto label_41415c;
        }
    }
    ctx->pc = 0x414130u;
    // 0x414130: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x414130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x414134: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x414134u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
    // 0x414138: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x414138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x41413c: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x41413Cu;
    {
        const bool branch_taken_0x41413c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x41413c) {
            ctx->pc = 0x414140u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x41413Cu;
            // 0x414140: 0xac460008  sw          $a2, 0x8($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x414144u;
            goto label_414144;
        }
    }
    ctx->pc = 0x414144u;
label_414144:
    // 0x414144: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x414144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x414148: 0x8ce3000c  lw          $v1, 0xC($a3)
    ctx->pc = 0x414148u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x41414c: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x41414cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x414150: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x414150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x414154: 0xacc2000c  sw          $v0, 0xC($a2)
    ctx->pc = 0x414154u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 2));
    // 0x414158: 0x100102d  daddu       $v0, $t0, $zero
    ctx->pc = 0x414158u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_41415c:
    // 0x41415c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x41415cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x414160: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x414160u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x414164: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x414164u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x414168: 0x3e00008  jr          $ra
    ctx->pc = 0x414168u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41416Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414168u;
        // 0x41416c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x414168u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x414170u;
}
