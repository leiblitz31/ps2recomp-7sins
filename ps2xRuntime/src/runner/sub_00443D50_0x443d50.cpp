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

// Function: sub_00443D50
// Address: 0x443d50 - 0x443f48
void sub_00443D50_0x443d50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00443D50_0x443d50");
#endif

    switch (ctx->pc) {
        case 0x443e98u: goto label_443e98;
        case 0x443ec8u: goto label_443ec8;
        default: break;
    }

    ctx->pc = 0x443d50u;

    // 0x443d50: 0x8f87beb8  lw          $a3, -0x4148($gp)
    ctx->pc = 0x443d50u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950584)));
    // 0x443d54: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x443d54u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x443d58: 0x473821  addu        $a3, $v0, $a3
    ctx->pc = 0x443d58u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x443d5c: 0x94e40014  lhu         $a0, 0x14($a3)
    ctx->pc = 0x443d5cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x443d60: 0x90e30016  lbu         $v1, 0x16($a3)
    ctx->pc = 0x443d60u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 22)));
    // 0x443d64: 0x44302  srl         $t0, $a0, 12
    ctx->pc = 0x443d64u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 4), 12));
    // 0x443d68: 0x30840fff  andi        $a0, $a0, 0xFFF
    ctx->pc = 0x443d68u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4095);
    // 0x443d6c: 0x31080003  andi        $t0, $t0, 0x3
    ctx->pc = 0x443d6cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)3);
    // 0x443d70: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x443d70u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x443d74: 0x844f8  dsll        $t0, $t0, 19
    ctx->pc = 0x443d74u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 19);
    // 0x443d78: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x443d78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x443d7c: 0x681825  or          $v1, $v1, $t0
    ctx->pc = 0x443d7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x443d80: 0x20c1fffe  addi        $at, $a2, -0x2
    ctx->pc = 0x443d80u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 6), (int32_t)4294967294, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 1, (int32_t)tmp); }
    // 0x443d84: 0x5020000c  beql        $at, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x443D84u;
    {
        const bool branch_taken_0x443d84 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x443d84) {
            ctx->pc = 0x443D88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x443D84u;
            // 0x443d88: 0x34630060  ori         $v1, $v1, 0x60 (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)96);
            ctx->in_delay_slot = false;
            ctx->pc = 0x443DB8u;
            goto label_443db8;
        }
    }
    ctx->pc = 0x443D8Cu;
    // 0x443d8c: 0x422000a  bltzl       $at, . + 4 + (0xA << 2)
    ctx->pc = 0x443D8Cu;
    {
        const bool branch_taken_0x443d8c = (GPR_S32(ctx, 1) < 0);
        if (branch_taken_0x443d8c) {
            ctx->pc = 0x443D90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x443D8Cu;
            // 0x443d90: 0x34630000  ori         $v1, $v1, 0x0 (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x443DB8u;
            goto label_443db8;
        }
    }
    ctx->pc = 0x443D94u;
    // 0x443d94: 0x2021fffe  addi        $at, $at, -0x2
    ctx->pc = 0x443d94u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)4294967294, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 1, (int32_t)tmp); }
    // 0x443d98: 0x50200007  beql        $at, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x443D98u;
    {
        const bool branch_taken_0x443d98 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x443d98) {
            ctx->pc = 0x443D9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x443D98u;
            // 0x443d9c: 0x34630120  ori         $v1, $v1, 0x120 (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)288);
            ctx->in_delay_slot = false;
            ctx->pc = 0x443DB8u;
            goto label_443db8;
        }
    }
    ctx->pc = 0x443DA0u;
    // 0x443da0: 0x4220005  bltzl       $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x443DA0u;
    {
        const bool branch_taken_0x443da0 = (GPR_S32(ctx, 1) < 0);
        if (branch_taken_0x443da0) {
            ctx->pc = 0x443DA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x443DA0u;
            // 0x443da4: 0x34630080  ori         $v1, $v1, 0x80 (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)128);
            ctx->in_delay_slot = false;
            ctx->pc = 0x443DB8u;
            goto label_443db8;
        }
    }
    ctx->pc = 0x443DA8u;
    // 0x443da8: 0x2021fffe  addi        $at, $at, -0x2
    ctx->pc = 0x443da8u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)4294967294, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 1, (int32_t)tmp); }
    // 0x443dac: 0x50200002  beql        $at, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x443DACu;
    {
        const bool branch_taken_0x443dac = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x443dac) {
            ctx->pc = 0x443DB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x443DACu;
            // 0x443db0: 0x34630160  ori         $v1, $v1, 0x160 (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)352);
            ctx->in_delay_slot = false;
            ctx->pc = 0x443DB8u;
            goto label_443db8;
        }
    }
    ctx->pc = 0x443DB4u;
    // 0x443db4: 0x346300c0  ori         $v1, $v1, 0xC0
    ctx->pc = 0x443db4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)192);
label_443db8:
    // 0x443db8: 0x0  nop
    ctx->pc = 0x443db8u;
    // NOP
    // 0x443dbc: 0x3e00008  jr          $ra
    ctx->pc = 0x443DBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x443DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x443DBCu;
        // 0x443dc0: 0xfca30000  sd          $v1, 0x0($a1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x443DBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x443DC4u;
    // 0x443dc4: 0x0  nop
    ctx->pc = 0x443dc4u;
    // NOP
    // 0x443dc8: 0x8f83beb8  lw          $v1, -0x4148($gp)
    ctx->pc = 0x443dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950584)));
    // 0x443dcc: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x443dccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x443dd0: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x443dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x443dd4: 0xac85001c  sw          $a1, 0x1C($a0)
    ctx->pc = 0x443dd4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 5));
    // 0x443dd8: 0x3e00008  jr          $ra
    ctx->pc = 0x443DD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x443DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x443DD8u;
        // 0x443ddc: 0xac860018  sw          $a2, 0x18($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x443DD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x443DE0u;
    // 0x443de0: 0x8f87beb8  lw          $a3, -0x4148($gp)
    ctx->pc = 0x443de0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950584)));
    // 0x443de4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x443de4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x443de8: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x443de8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x443dec: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x443decu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x443df0: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x443df0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x443df4: 0x8c86001c  lw          $a2, 0x1C($a0)
    ctx->pc = 0x443df4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x443df8: 0x3e00008  jr          $ra
    ctx->pc = 0x443DF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x443DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x443DF8u;
        // 0x443dfc: 0xaca60000  sw          $a2, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x443DF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x443E00u;
    // 0x443e00: 0x8f83beb8  lw          $v1, -0x4148($gp)
    ctx->pc = 0x443e00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950584)));
    // 0x443e04: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x443e04u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x443e08: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x443e08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x443e0c: 0xac870024  sw          $a3, 0x24($a0)
    ctx->pc = 0x443e0cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 7));
    // 0x443e10: 0xac860018  sw          $a2, 0x18($a0)
    ctx->pc = 0x443e10u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 6));
    // 0x443e14: 0xac85001c  sw          $a1, 0x1C($a0)
    ctx->pc = 0x443e14u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 5));
    // 0x443e18: 0x3e00008  jr          $ra
    ctx->pc = 0x443E18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x443E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x443E18u;
        // 0x443e1c: 0xac880020  sw          $t0, 0x20($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x443E18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x443E20u;
    // 0x443e20: 0x8f89beb8  lw          $t1, -0x4148($gp)
    ctx->pc = 0x443e20u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950584)));
    // 0x443e24: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x443e24u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x443e28: 0x892021  addu        $a0, $a0, $t1
    ctx->pc = 0x443e28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x443e2c: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x443e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x443e30: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x443e30u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x443e34: 0x8c86001c  lw          $a2, 0x1C($a0)
    ctx->pc = 0x443e34u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x443e38: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x443e38u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
    // 0x443e3c: 0x8c830020  lw          $v1, 0x20($a0)
    ctx->pc = 0x443e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x443e40: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x443e40u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x443e44: 0x8c850024  lw          $a1, 0x24($a0)
    ctx->pc = 0x443e44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x443e48: 0x3e00008  jr          $ra
    ctx->pc = 0x443E48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x443E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x443E48u;
        // 0x443e4c: 0xace50000  sw          $a1, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x443E48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x443E50u;
    // 0x443e50: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x443e50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x443e54: 0x8c43d7c0  lw          $v1, -0x2840($v0)
    ctx->pc = 0x443e54u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5DD7C0u));
    // 0x443e58: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x443E58u;
    {
        const bool branch_taken_0x443e58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x443E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x443E58u;
        // 0x443e5c: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x443e58) {
            ctx->pc = 0x443E68u;
            goto label_443e68;
        }
    }
    ctx->pc = 0x443E60u;
    // 0x443e60: 0x3e00008  jr          $ra
    ctx->pc = 0x443E60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x443E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x443E60u;
        // 0x443e64: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x443E60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x443E68u;
label_443e68:
    // 0x443e68: 0x8f83beb8  lw          $v1, -0x4148($gp)
    ctx->pc = 0x443e68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950584)));
    // 0x443e6c: 0x5202b  sltu        $a0, $zero, $a1
    ctx->pc = 0x443e6cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x443e70: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x443e70u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x443e74: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x443e74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x443e78: 0x3e00008  jr          $ra
    ctx->pc = 0x443E78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x443E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x443E78u;
        // 0x443e7c: 0xac640058  sw          $a0, 0x58($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 88), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x443E78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x443E80u;
    // 0x443e80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x443e80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x443e84: 0x30c2000f  andi        $v0, $a2, 0xF
    ctx->pc = 0x443e84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)15);
    // 0x443e88: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x443E88u;
    {
        const bool branch_taken_0x443e88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x443E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x443E88u;
        // 0x443e8c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x443e88) {
            ctx->pc = 0x443E98u;
            goto label_443e98;
        }
    }
    ctx->pc = 0x443E90u;
    // 0x443e90: 0xc1105a2  jal         func_441688
    ctx->pc = 0x443E90u;
    SET_GPR_U32(ctx, 31, 0x443E98u);
    ctx->pc = 0x441688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x441688u, 0x443E90u, 0x443E98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x443E98u;
label_443e98:
    // 0x443e98: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x443e98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x443e9c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x443e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x443ea0: 0x3e00008  jr          $ra
    ctx->pc = 0x443EA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x443EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x443EA0u;
        // 0x443ea4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x443EA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x443EA8u;
    // 0x443ea8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x443ea8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x443eac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x443eacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x443eb0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x443eb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x443eb4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x443eb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x443eb8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x443eb8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x443ebc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x443ebcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x443ec0: 0xc11067a  jal         func_4419E8
    ctx->pc = 0x443EC0u;
    SET_GPR_U32(ctx, 31, 0x443EC8u);
    ctx->pc = 0x443EC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x443EC0u;
    // 0x443ec4: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4419E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4419E8u, 0x443EC0u, 0x443EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x443EC8u;
label_443ec8:
    // 0x443ec8: 0x8f83beb8  lw          $v1, -0x4148($gp)
    ctx->pc = 0x443ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950584)));
    // 0x443ecc: 0x103982  srl         $a3, $s0, 6
    ctx->pc = 0x443eccu;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 16), 6));
    // 0x443ed0: 0x3c06fff8  lui         $a2, 0xFFF8
    ctx->pc = 0x443ed0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65528 << 16));
    // 0x443ed4: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x443ed4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x443ed8: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x443ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x443edc: 0x34c6001f  ori         $a2, $a2, 0x1F
    ctx->pc = 0x443edcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)31);
    // 0x443ee0: 0x8c680010  lw          $t0, 0x10($v1)
    ctx->pc = 0x443ee0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x443ee4: 0x34a5c000  ori         $a1, $a1, 0xC000
    ctx->pc = 0x443ee4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)49152);
    // 0x443ee8: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x443ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x443eec: 0x30e73fff  andi        $a3, $a3, 0x3FFF
    ctx->pc = 0x443eecu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)16383);
    // 0x443ef0: 0x2088021  addu        $s0, $s0, $t0
    ctx->pc = 0x443ef0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 8)));
    // 0x443ef4: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x443ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x443ef8: 0x108182  srl         $s0, $s0, 6
    ctx->pc = 0x443ef8u;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 16), 6));
    // 0x443efc: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x443efcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x443f00: 0x32103fff  andi        $s0, $s0, 0x3FFF
    ctx->pc = 0x443f00u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)16383);
    // 0x443f04: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x443f04u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x443f08: 0x108140  sll         $s0, $s0, 5
    ctx->pc = 0x443f08u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x443f0c: 0x872025  or          $a0, $a0, $a3
    ctx->pc = 0x443f0cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 7));
    // 0x443f10: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x443f10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x443f14: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x443f14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x443f18: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x443f18u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x443f1c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x443f1cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x443f20: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x443f20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x443f24: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x443f24u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x443f28: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x443f28u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
    // 0x443f2c: 0x3e00008  jr          $ra
    ctx->pc = 0x443F2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x443F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x443F2Cu;
        // 0x443f30: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x443F2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x443F34u;
    // 0x443f34: 0x0  nop
    ctx->pc = 0x443f34u;
    // NOP
    // 0x443f38: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x443f38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x443f3c: 0x3e00008  jr          $ra
    ctx->pc = 0x443F3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x443F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x443F3Cu;
        // 0x443f40: 0x8c62d7d8  lw          $v0, -0x2828($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294957016)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x443F3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x443F44u;
    // 0x443f44: 0x0  nop
    ctx->pc = 0x443f44u;
    // NOP
    ctx->pc = 0x443f48u;
}
