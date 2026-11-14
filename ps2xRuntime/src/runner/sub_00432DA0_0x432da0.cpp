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

// Function: sub_00432DA0
// Address: 0x432da0 - 0x4330f8
void sub_00432DA0_0x432da0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00432DA0_0x432da0");
#endif

    switch (ctx->pc) {
        case 0x432de8u: goto label_432de8;
        default: break;
    }

    ctx->pc = 0x432da0u;

    // 0x432da0: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x432da0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x432da4: 0x60482d  daddu       $t1, $v1, $zero
    ctx->pc = 0x432da4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x432da8: 0x24633b90  addiu       $v1, $v1, 0x3B90
    ctx->pc = 0x432da8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15248));
    // 0x432dac: 0x90620032  lbu         $v0, 0x32($v1)
    ctx->pc = 0x432dacu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x623BC2u));
    // 0x432db0: 0x1440001f  bnez        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x432DB0u;
    {
        const bool branch_taken_0x432db0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x432DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x432DB0u;
        // 0x432db4: 0x25223b90  addiu       $v0, $t1, 0x3B90 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 15248));
        ctx->in_delay_slot = false;
        if (branch_taken_0x432db0) {
            ctx->pc = 0x432E30u;
            goto label_432e30;
        }
    }
    ctx->pc = 0x432DB8u;
    // 0x432db8: 0x8c63001c  lw          $v1, 0x1C($v1)
    ctx->pc = 0x432db8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x432dbc: 0x240200e0  addiu       $v0, $zero, 0xE0
    ctx->pc = 0x432dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x432dc0: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x432DC0u;
    {
        const bool branch_taken_0x432dc0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x432DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x432DC0u;
        // 0x432dc4: 0x240201c0  addiu       $v0, $zero, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
        ctx->in_delay_slot = false;
        if (branch_taken_0x432dc0) {
            ctx->pc = 0x432DF0u;
            goto label_432df0;
        }
    }
    ctx->pc = 0x432DC8u;
    // 0x432dc8: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x432DC8u;
    {
        const bool branch_taken_0x432dc8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x432DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x432DC8u;
        // 0x432dcc: 0x24020100  addiu       $v0, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x432dc8) {
            ctx->pc = 0x432DF0u;
            goto label_432df0;
        }
    }
    ctx->pc = 0x432DD0u;
    // 0x432dd0: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x432DD0u;
    {
        const bool branch_taken_0x432dd0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x432DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x432DD0u;
        // 0x432dd4: 0x240201e0  addiu       $v0, $zero, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 480));
        ctx->in_delay_slot = false;
        if (branch_taken_0x432dd0) {
            ctx->pc = 0x432DF0u;
            goto label_432df0;
        }
    }
    ctx->pc = 0x432DD8u;
    // 0x432dd8: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x432DD8u;
    {
        const bool branch_taken_0x432dd8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x432DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x432DD8u;
        // 0x432ddc: 0x24020200  addiu       $v0, $zero, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
        ctx->in_delay_slot = false;
        if (branch_taken_0x432dd8) {
            ctx->pc = 0x432E04u;
            goto label_432e04;
        }
    }
    ctx->pc = 0x432DE0u;
    // 0x432de0: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x432DE0u;
    {
        const bool branch_taken_0x432de0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x432DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x432DE0u;
        // 0x432de4: 0x25243b90  addiu       $a0, $t1, 0x3B90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 15248));
        ctx->in_delay_slot = false;
        if (branch_taken_0x432de0) {
            ctx->pc = 0x432DF4u;
            goto label_432df4;
        }
    }
    ctx->pc = 0x432DE8u;
label_432de8:
    // 0x432de8: 0x3e00008  jr          $ra
    ctx->pc = 0x432DE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x432DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x432DE8u;
        // 0x432dec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x432DE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x432DF0u;
label_432df0:
    // 0x432df0: 0x25243b90  addiu       $a0, $t1, 0x3B90
    ctx->pc = 0x432df0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 15248));
label_432df4:
    // 0x432df4: 0x240201e0  addiu       $v0, $zero, 0x1E0
    ctx->pc = 0x432df4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 480));
    // 0x432df8: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x432df8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x432dfc: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x432DFCu;
    {
        const bool branch_taken_0x432dfc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x432E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x432DFCu;
        // 0x432e00: 0x24020100  addiu       $v0, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x432dfc) {
            ctx->pc = 0x432E14u;
            goto label_432e14;
        }
    }
    ctx->pc = 0x432E04u;
label_432e04:
    // 0x432e04: 0x25233b90  addiu       $v1, $t1, 0x3B90
    ctx->pc = 0x432e04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), 15248));
    // 0x432e08: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x432e08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x432e0c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x432E0Cu;
    {
        const bool branch_taken_0x432e0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x432E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x432E0Cu;
        // 0x432e10: 0xa0620032  sb          $v0, 0x32($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 50), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x432e0c) {
            ctx->pc = 0x432E2Cu;
            goto label_432e2c;
        }
    }
    ctx->pc = 0x432E14u;
label_432e14:
    // 0x432e14: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x432E14u;
    {
        const bool branch_taken_0x432e14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x432E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x432E14u;
        // 0x432e18: 0x24020200  addiu       $v0, $zero, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
        ctx->in_delay_slot = false;
        if (branch_taken_0x432e14) {
            ctx->pc = 0x432E24u;
            goto label_432e24;
        }
    }
    ctx->pc = 0x432E1Cu;
    // 0x432e1c: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x432E1Cu;
    {
        const bool branch_taken_0x432e1c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x432E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x432E1Cu;
        // 0x432e20: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x432e1c) {
            ctx->pc = 0x432E28u;
            goto label_432e28;
        }
    }
    ctx->pc = 0x432E24u;
label_432e24:
    // 0x432e24: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x432e24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_432e28:
    // 0x432e28: 0xa0820032  sb          $v0, 0x32($a0)
    ctx->pc = 0x432e28u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 50), (uint8_t)GPR_U32(ctx, 2));
label_432e2c:
    // 0x432e2c: 0x25223b90  addiu       $v0, $t1, 0x3B90
    ctx->pc = 0x432e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 15248));
label_432e30:
    // 0x432e30: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x432e30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x432e34: 0x90440032  lbu         $a0, 0x32($v0)
    ctx->pc = 0x432e34u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 50)));
    // 0x432e38: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x432E38u;
    {
        const bool branch_taken_0x432e38 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x432E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x432E38u;
        // 0x432e3c: 0x24020050  addiu       $v0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x432e38) {
            ctx->pc = 0x432E50u;
            goto label_432e50;
        }
    }
    ctx->pc = 0x432E40u;
    // 0x432e40: 0x10820003  beq         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x432E40u;
    {
        const bool branch_taken_0x432e40 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x432E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x432E40u;
        // 0x432e44: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x432e40) {
            ctx->pc = 0x432E50u;
            goto label_432e50;
        }
    }
    ctx->pc = 0x432E48u;
    // 0x432e48: 0x1482ffe7  bne         $a0, $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x432E48u;
    {
        const bool branch_taken_0x432e48 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x432e48) {
            ctx->pc = 0x432DE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_432de8;
        }
    }
    ctx->pc = 0x432E50u;
label_432e50:
    // 0x432e50: 0x25233b90  addiu       $v1, $t1, 0x3B90
    ctx->pc = 0x432e50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), 15248));
    // 0x432e54: 0x90620033  lbu         $v0, 0x33($v1)
    ctx->pc = 0x432e54u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 51)));
    // 0x432e58: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x432E58u;
    {
        const bool branch_taken_0x432e58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x432E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x432E58u;
        // 0x432e5c: 0x24020202  addiu       $v0, $zero, 0x202 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 514));
        ctx->in_delay_slot = false;
        if (branch_taken_0x432e58) {
            ctx->pc = 0x432E6Cu;
            goto label_432e6c;
        }
    }
    ctx->pc = 0x432E60u;
    // 0x432e60: 0x94630030  lhu         $v1, 0x30($v1)
    ctx->pc = 0x432e60u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x432e64: 0x1462ffe0  bne         $v1, $v0, . + 4 + (-0x20 << 2)
    ctx->pc = 0x432E64u;
    {
        const bool branch_taken_0x432e64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x432e64) {
            ctx->pc = 0x432DE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_432de8;
        }
    }
    ctx->pc = 0x432E6Cu;
label_432e6c:
    // 0x432e6c: 0x25243b90  addiu       $a0, $t1, 0x3B90
    ctx->pc = 0x432e6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 15248));
    // 0x432e70: 0x90820030  lbu         $v0, 0x30($a0)
    ctx->pc = 0x432e70u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x432e74: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x432e74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x432e78: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x432e78u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x432e7c: 0x1040ffda  beqz        $v0, . + 4 + (-0x26 << 2)
    ctx->pc = 0x432E7Cu;
    {
        const bool branch_taken_0x432e7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x432e7c) {
            ctx->pc = 0x432DE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_432de8;
        }
    }
    ctx->pc = 0x432E84u;
    // 0x432e84: 0x90820031  lbu         $v0, 0x31($a0)
    ctx->pc = 0x432e84u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 49)));
    // 0x432e88: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x432e88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x432e8c: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x432e8cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x432e90: 0x1040ffd5  beqz        $v0, . + 4 + (-0x2B << 2)
    ctx->pc = 0x432E90u;
    {
        const bool branch_taken_0x432e90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x432E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x432E90u;
        // 0x432e94: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x432e90) {
            ctx->pc = 0x432DE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_432de8;
        }
    }
    ctx->pc = 0x432E98u;
    // 0x432e98: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x432e98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x432e9c: 0x10650003  beq         $v1, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x432E9Cu;
    {
        const bool branch_taken_0x432e9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x432EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x432E9Cu;
        // 0x432ea0: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x432e9c) {
            ctx->pc = 0x432EACu;
            goto label_432eac;
        }
    }
    ctx->pc = 0x432EA4u;
    // 0x432ea4: 0x1462ffd0  bne         $v1, $v0, . + 4 + (-0x30 << 2)
    ctx->pc = 0x432EA4u;
    {
        const bool branch_taken_0x432ea4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x432ea4) {
            ctx->pc = 0x432DE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_432de8;
        }
    }
    ctx->pc = 0x432EACu;
label_432eac:
    // 0x432eac: 0x8c830020  lw          $v1, 0x20($a0)
    ctx->pc = 0x432eacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x432eb0: 0x10650003  beq         $v1, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x432EB0u;
    {
        const bool branch_taken_0x432eb0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x432EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x432EB0u;
        // 0x432eb4: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x432eb0) {
            ctx->pc = 0x432EC0u;
            goto label_432ec0;
        }
    }
    ctx->pc = 0x432EB8u;
    // 0x432eb8: 0x1462ffcb  bne         $v1, $v0, . + 4 + (-0x35 << 2)
    ctx->pc = 0x432EB8u;
    {
        const bool branch_taken_0x432eb8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x432eb8) {
            ctx->pc = 0x432DE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_432de8;
        }
    }
    ctx->pc = 0x432EC0u;
label_432ec0:
    // 0x432ec0: 0x8d223b90  lw          $v0, 0x3B90($t1)
    ctx->pc = 0x432ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 15248)));
    // 0x432ec4: 0x25253b90  addiu       $a1, $t1, 0x3B90
    ctx->pc = 0x432ec4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), 15248));
    // 0x432ec8: 0x2407ffc0  addiu       $a3, $zero, -0x40
    ctx->pc = 0x432ec8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967232));
    // 0x432ecc: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x432eccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x432ed0: 0x2442003f  addiu       $v0, $v0, 0x3F
    ctx->pc = 0x432ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 63));
    // 0x432ed4: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x432ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x432ed8: 0x14830005  bne         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x432ED8u;
    {
        const bool branch_taken_0x432ed8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x432EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x432ED8u;
        // 0x432edc: 0x473024  and         $a2, $v0, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x432ed8) {
            ctx->pc = 0x432EF0u;
            goto label_432ef0;
        }
    }
    ctx->pc = 0x432EE0u;
    // 0x432ee0: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x432ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x432ee4: 0x2442003f  addiu       $v0, $v0, 0x3F
    ctx->pc = 0x432ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 63));
    // 0x432ee8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x432EE8u;
    {
        const bool branch_taken_0x432ee8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x432EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x432EE8u;
        // 0x432eec: 0x471024  and         $v0, $v0, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x432ee8) {
            ctx->pc = 0x432F00u;
            goto label_432f00;
        }
    }
    ctx->pc = 0x432EF0u;
label_432ef0:
    // 0x432ef0: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x432ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x432ef4: 0x2403ffe0  addiu       $v1, $zero, -0x20
    ctx->pc = 0x432ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967264));
    // 0x432ef8: 0x2442001f  addiu       $v0, $v0, 0x1F
    ctx->pc = 0x432ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31));
    // 0x432efc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x432efcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_432f00:
    // 0x432f00: 0xc24018  mult        $t0, $a2, $v0
    ctx->pc = 0x432f00u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x432f04: 0x25223b90  addiu       $v0, $t1, 0x3B90
    ctx->pc = 0x432f04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 15248));
    // 0x432f08: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x432f08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x432f0c: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x432f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x432f10: 0x54640002  bnel        $v1, $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x432F10u;
    {
        const bool branch_taken_0x432f10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x432f10) {
            ctx->pc = 0x432F14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x432F10u;
            // 0x432f14: 0x84080  sll         $t0, $t0, 2 (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x432F1Cu;
            goto label_432f1c;
        }
    }
    ctx->pc = 0x432F18u;
    // 0x432f18: 0x84040  sll         $t0, $t0, 1
    ctx->pc = 0x432f18u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
label_432f1c:
    // 0x432f1c: 0x25253b90  addiu       $a1, $t1, 0x3B90
    ctx->pc = 0x432f1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), 15248));
    // 0x432f20: 0x2407ffc0  addiu       $a3, $zero, -0x40
    ctx->pc = 0x432f20u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967232));
    // 0x432f24: 0x8ca20018  lw          $v0, 0x18($a1)
    ctx->pc = 0x432f24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x432f28: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x432f28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x432f2c: 0x8ca30020  lw          $v1, 0x20($a1)
    ctx->pc = 0x432f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x432f30: 0x2442003f  addiu       $v0, $v0, 0x3F
    ctx->pc = 0x432f30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 63));
    // 0x432f34: 0x14640005  bne         $v1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x432F34u;
    {
        const bool branch_taken_0x432f34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x432F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x432F34u;
        // 0x432f38: 0x473024  and         $a2, $v0, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x432f34) {
            ctx->pc = 0x432F4Cu;
            goto label_432f4c;
        }
    }
    ctx->pc = 0x432F3Cu;
    // 0x432f3c: 0x8ca2001c  lw          $v0, 0x1C($a1)
    ctx->pc = 0x432f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x432f40: 0x2442003f  addiu       $v0, $v0, 0x3F
    ctx->pc = 0x432f40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 63));
    // 0x432f44: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x432F44u;
    {
        const bool branch_taken_0x432f44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x432F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x432F44u;
        // 0x432f48: 0x471024  and         $v0, $v0, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x432f44) {
            ctx->pc = 0x432F5Cu;
            goto label_432f5c;
        }
    }
    ctx->pc = 0x432F4Cu;
label_432f4c:
    // 0x432f4c: 0x8ca2001c  lw          $v0, 0x1C($a1)
    ctx->pc = 0x432f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x432f50: 0x2403ffe0  addiu       $v1, $zero, -0x20
    ctx->pc = 0x432f50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967264));
    // 0x432f54: 0x2442001f  addiu       $v0, $v0, 0x1F
    ctx->pc = 0x432f54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31));
    // 0x432f58: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x432f58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_432f5c:
    // 0x432f5c: 0xc23818  mult        $a3, $a2, $v0
    ctx->pc = 0x432f5cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x432f60: 0x25223b90  addiu       $v0, $t1, 0x3B90
    ctx->pc = 0x432f60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 15248));
    // 0x432f64: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x432f64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x432f68: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x432f68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x432f6c: 0x54640002  bnel        $v1, $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x432F6Cu;
    {
        const bool branch_taken_0x432f6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x432f6c) {
            ctx->pc = 0x432F70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x432F6Cu;
            // 0x432f70: 0x73880  sll         $a3, $a3, 2 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x432F78u;
            goto label_432f78;
        }
    }
    ctx->pc = 0x432F74u;
    // 0x432f74: 0x73840  sll         $a3, $a3, 1
    ctx->pc = 0x432f74u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
label_432f78:
    // 0x432f78: 0x8d223b90  lw          $v0, 0x3B90($t1)
    ctx->pc = 0x432f78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 15248)));
    // 0x432f7c: 0x2406ffc0  addiu       $a2, $zero, -0x40
    ctx->pc = 0x432f7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967232));
    // 0x432f80: 0x8f8aaeac  lw          $t2, -0x5154($gp)
    ctx->pc = 0x432f80u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946476)));
    // 0x432f84: 0x25253b90  addiu       $a1, $t1, 0x3B90
    ctx->pc = 0x432f84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), 15248));
    // 0x432f88: 0x2442003f  addiu       $v0, $v0, 0x3F
    ctx->pc = 0x432f88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 63));
    // 0x432f8c: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x432f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x432f90: 0x15430005  bne         $t2, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x432F90u;
    {
        const bool branch_taken_0x432f90 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 3));
        ctx->pc = 0x432F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x432F90u;
        // 0x432f94: 0x462024  and         $a0, $v0, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x432f90) {
            ctx->pc = 0x432FA8u;
            goto label_432fa8;
        }
    }
    ctx->pc = 0x432F98u;
    // 0x432f98: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x432f98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x432f9c: 0x2442003f  addiu       $v0, $v0, 0x3F
    ctx->pc = 0x432f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 63));
    // 0x432fa0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x432FA0u;
    {
        const bool branch_taken_0x432fa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x432FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x432FA0u;
        // 0x432fa4: 0x461024  and         $v0, $v0, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x432fa0) {
            ctx->pc = 0x432FB8u;
            goto label_432fb8;
        }
    }
    ctx->pc = 0x432FA8u;
label_432fa8:
    // 0x432fa8: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x432fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x432fac: 0x2403ffe0  addiu       $v1, $zero, -0x20
    ctx->pc = 0x432facu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967264));
    // 0x432fb0: 0x2442001f  addiu       $v0, $v0, 0x1F
    ctx->pc = 0x432fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31));
    // 0x432fb4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x432fb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_432fb8:
    // 0x432fb8: 0x823018  mult        $a2, $a0, $v0
    ctx->pc = 0x432fb8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x432fbc: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x432fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x432fc0: 0x55420002  bnel        $t2, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x432FC0u;
    {
        const bool branch_taken_0x432fc0 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 2));
        if (branch_taken_0x432fc0) {
            ctx->pc = 0x432FC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x432FC0u;
            // 0x432fc4: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x432FCCu;
            goto label_432fcc;
        }
    }
    ctx->pc = 0x432FC8u;
    // 0x432fc8: 0x63040  sll         $a2, $a2, 1
    ctx->pc = 0x432fc8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
label_432fcc:
    // 0x432fcc: 0x25223b90  addiu       $v0, $t1, 0x3B90
    ctx->pc = 0x432fccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 15248));
    // 0x432fd0: 0x90430033  lbu         $v1, 0x33($v0)
    ctx->pc = 0x432fd0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 51)));
    // 0x432fd4: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x432FD4u;
    {
        const bool branch_taken_0x432fd4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x432FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x432FD4u;
        // 0x432fd8: 0x107102b  sltu        $v0, $t0, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x432fd4) {
            ctx->pc = 0x432FE4u;
            goto label_432fe4;
        }
    }
    ctx->pc = 0x432FDCu;
    // 0x432fdc: 0x1440ff82  bnez        $v0, . + 4 + (-0x7E << 2)
    ctx->pc = 0x432FDCu;
    {
        const bool branch_taken_0x432fdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x432fdc) {
            ctx->pc = 0x432DE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_432de8;
        }
    }
    ctx->pc = 0x432FE4u;
label_432fe4:
    // 0x432fe4: 0x25253b90  addiu       $a1, $t1, 0x3B90
    ctx->pc = 0x432fe4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), 15248));
    // 0x432fe8: 0x8ca30014  lw          $v1, 0x14($a1)
    ctx->pc = 0x432fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x432fec: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x432FECu;
    {
        const bool branch_taken_0x432fec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x432FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x432FECu;
        // 0x432ff0: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x432fec) {
            ctx->pc = 0x433028u;
            goto label_433028;
        }
    }
    ctx->pc = 0x432FF4u;
    // 0x432ff4: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x432ff4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x432ff8: 0x14820004  bne         $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x432FF8u;
    {
        const bool branch_taken_0x432ff8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x432FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x432FF8u;
        // 0x432ffc: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x432ff8) {
            ctx->pc = 0x43300Cu;
            goto label_43300c;
        }
    }
    ctx->pc = 0x433000u;
    // 0x433000: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x433000u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x433004: 0x1462ff78  bne         $v1, $v0, . + 4 + (-0x88 << 2)
    ctx->pc = 0x433004u;
    {
        const bool branch_taken_0x433004 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x433008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x433004u;
        // 0x433008: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x433004) {
            ctx->pc = 0x432DE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_432de8;
        }
    }
    ctx->pc = 0x43300Cu;
label_43300c:
    // 0x43300c: 0x1482000d  bne         $a0, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x43300Cu;
    {
        const bool branch_taken_0x43300c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x433010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43300Cu;
        // 0x433010: 0x25253b90  addiu       $a1, $t1, 0x3B90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), 15248));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43300c) {
            ctx->pc = 0x433044u;
            goto label_433044;
        }
    }
    ctx->pc = 0x433014u;
    // 0x433014: 0x24020500  addiu       $v0, $zero, 0x500
    ctx->pc = 0x433014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1280));
    // 0x433018: 0x5062000b  beql        $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x433018u;
    {
        const bool branch_taken_0x433018 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x433018) {
            ctx->pc = 0x43301Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x433018u;
            // 0x43301c: 0x8ca3002c  lw          $v1, 0x2C($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x433048u;
            goto label_433048;
        }
    }
    ctx->pc = 0x433020u;
    // 0x433020: 0x1000ff71  b           . + 4 + (-0x8F << 2)
    ctx->pc = 0x433020u;
    {
        const bool branch_taken_0x433020 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x433020) {
            ctx->pc = 0x432DE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_432de8;
        }
    }
    ctx->pc = 0x433028u;
label_433028:
    // 0x433028: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x433028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x43302c: 0x24030500  addiu       $v1, $zero, 0x500
    ctx->pc = 0x43302cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1280));
    // 0x433030: 0x24040100  addiu       $a0, $zero, 0x100
    ctx->pc = 0x433030u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x433034: 0x38420010  xori        $v0, $v0, 0x10
    ctx->pc = 0x433034u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)16);
    // 0x433038: 0x82180a  movz        $v1, $a0, $v0
    ctx->pc = 0x433038u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
    // 0x43303c: 0xaca30014  sw          $v1, 0x14($a1)
    ctx->pc = 0x43303cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 3));
    // 0x433040: 0x25253b90  addiu       $a1, $t1, 0x3B90
    ctx->pc = 0x433040u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), 15248));
label_433044:
    // 0x433044: 0x8ca3002c  lw          $v1, 0x2C($a1)
    ctx->pc = 0x433044u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
label_433048:
    // 0x433048: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x433048u;
    {
        const bool branch_taken_0x433048 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x43304Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x433048u;
        // 0x43304c: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x433048) {
            ctx->pc = 0x433084u;
            goto label_433084;
        }
    }
    ctx->pc = 0x433050u;
    // 0x433050: 0x8ca40020  lw          $a0, 0x20($a1)
    ctx->pc = 0x433050u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x433054: 0x14820004  bne         $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x433054u;
    {
        const bool branch_taken_0x433054 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x433058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x433054u;
        // 0x433058: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x433054) {
            ctx->pc = 0x433068u;
            goto label_433068;
        }
    }
    ctx->pc = 0x43305Cu;
    // 0x43305c: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x43305cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x433060: 0x1462ff61  bne         $v1, $v0, . + 4 + (-0x9F << 2)
    ctx->pc = 0x433060u;
    {
        const bool branch_taken_0x433060 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x433064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x433060u;
        // 0x433064: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x433060) {
            ctx->pc = 0x432DE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_432de8;
        }
    }
    ctx->pc = 0x433068u;
label_433068:
    // 0x433068: 0x1482000d  bne         $a0, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x433068u;
    {
        const bool branch_taken_0x433068 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x43306Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x433068u;
        // 0x43306c: 0x25243b90  addiu       $a0, $t1, 0x3B90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 15248));
        ctx->in_delay_slot = false;
        if (branch_taken_0x433068) {
            ctx->pc = 0x4330A0u;
            goto label_4330a0;
        }
    }
    ctx->pc = 0x433070u;
    // 0x433070: 0x24020500  addiu       $v0, $zero, 0x500
    ctx->pc = 0x433070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1280));
    // 0x433074: 0x5062000b  beql        $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x433074u;
    {
        const bool branch_taken_0x433074 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x433074) {
            ctx->pc = 0x433078u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x433074u;
            // 0x433078: 0x90820030  lbu         $v0, 0x30($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4330A4u;
            goto label_4330a4;
        }
    }
    ctx->pc = 0x43307Cu;
    // 0x43307c: 0x1000ff5a  b           . + 4 + (-0xA6 << 2)
    ctx->pc = 0x43307Cu;
    {
        const bool branch_taken_0x43307c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x43307c) {
            ctx->pc = 0x432DE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_432de8;
        }
    }
    ctx->pc = 0x433084u;
label_433084:
    // 0x433084: 0x8ca20020  lw          $v0, 0x20($a1)
    ctx->pc = 0x433084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x433088: 0x24030500  addiu       $v1, $zero, 0x500
    ctx->pc = 0x433088u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1280));
    // 0x43308c: 0x24040100  addiu       $a0, $zero, 0x100
    ctx->pc = 0x43308cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x433090: 0x38420010  xori        $v0, $v0, 0x10
    ctx->pc = 0x433090u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)16);
    // 0x433094: 0x82180a  movz        $v1, $a0, $v0
    ctx->pc = 0x433094u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
    // 0x433098: 0xaca3002c  sw          $v1, 0x2C($a1)
    ctx->pc = 0x433098u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 3));
    // 0x43309c: 0x25243b90  addiu       $a0, $t1, 0x3B90
    ctx->pc = 0x43309cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 15248));
label_4330a0:
    // 0x4330a0: 0x90820030  lbu         $v0, 0x30($a0)
    ctx->pc = 0x4330a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 48)));
label_4330a4:
    // 0x4330a4: 0x90830033  lbu         $v1, 0x33($a0)
    ctx->pc = 0x4330a4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 51)));
    // 0x4330a8: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x4330A8u;
    {
        const bool branch_taken_0x4330a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4330ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4330A8u;
        // 0x4330ac: 0x1022818  mult        $a1, $t0, $v0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4330a8) {
            ctx->pc = 0x4330D8u;
            goto label_4330d8;
        }
    }
    ctx->pc = 0x4330B0u;
    // 0x4330b0: 0x90820031  lbu         $v0, 0x31($a0)
    ctx->pc = 0x4330b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 49)));
    // 0x4330b4: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x4330b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x4330b8: 0xe22018  mult        $a0, $a3, $v0
    ctx->pc = 0x4330b8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x4330bc: 0x851021  addu        $v0, $a0, $a1
    ctx->pc = 0x4330bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x4330c0: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x4330c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x4330c4: 0x62182b  sltu        $v1, $v1, $v0
    ctx->pc = 0x4330c4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x4330c8: 0x1460ff47  bnez        $v1, . + 4 + (-0xB9 << 2)
    ctx->pc = 0x4330C8u;
    {
        const bool branch_taken_0x4330c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4330CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4330C8u;
        // 0x4330cc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4330c8) {
            ctx->pc = 0x432DE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_432de8;
        }
    }
    ctx->pc = 0x4330D0u;
    // 0x4330d0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x4330D0u;
    {
        const bool branch_taken_0x4330d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4330d0) {
            ctx->pc = 0x4330ECu;
            goto label_4330ec;
        }
    }
    ctx->pc = 0x4330D8u;
label_4330d8:
    // 0x4330d8: 0xa61821  addu        $v1, $a1, $a2
    ctx->pc = 0x4330d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x4330dc: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x4330dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x4330e0: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x4330e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x4330e4: 0x1440ff40  bnez        $v0, . + 4 + (-0xC0 << 2)
    ctx->pc = 0x4330E4u;
    {
        const bool branch_taken_0x4330e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4330E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4330E4u;
        // 0x4330e8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4330e4) {
            ctx->pc = 0x432DE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_432de8;
        }
    }
    ctx->pc = 0x4330ECu;
label_4330ec:
    // 0x4330ec: 0x3e00008  jr          $ra
    ctx->pc = 0x4330ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4330ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4330F4u;
    // 0x4330f4: 0x0  nop
    ctx->pc = 0x4330f4u;
    // NOP
    ctx->pc = 0x4330f8u;
}
