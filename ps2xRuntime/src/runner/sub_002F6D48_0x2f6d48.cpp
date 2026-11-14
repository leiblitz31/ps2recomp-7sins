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

// Function: sub_002F6D48
// Address: 0x2f6d48 - 0x2f6f38
void sub_002F6D48_0x2f6d48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F6D48_0x2f6d48");
#endif

    switch (ctx->pc) {
        case 0x2f6d68u: goto label_2f6d68;
        case 0x2f6d74u: goto label_2f6d74;
        case 0x2f6da0u: goto label_2f6da0;
        case 0x2f6db8u: goto label_2f6db8;
        case 0x2f6dccu: goto label_2f6dcc;
        case 0x2f6ddcu: goto label_2f6ddc;
        case 0x2f6df0u: goto label_2f6df0;
        case 0x2f6df8u: goto label_2f6df8;
        case 0x2f6e18u: goto label_2f6e18;
        case 0x2f6e2cu: goto label_2f6e2c;
        case 0x2f6e50u: goto label_2f6e50;
        case 0x2f6e58u: goto label_2f6e58;
        case 0x2f6eb4u: goto label_2f6eb4;
        case 0x2f6ef4u: goto label_2f6ef4;
        case 0x2f6f08u: goto label_2f6f08;
        case 0x2f6f24u: goto label_2f6f24;
        default: break;
    }

    ctx->pc = 0x2f6d48u;

label_2f6d48:
    // 0x2f6d48: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2f6d48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2f6d4c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2f6d4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2f6d50: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2f6d50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2f6d54: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2f6d54u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6d58: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2f6d58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2f6d5c: 0x3c10004f  lui         $s0, 0x4F
    ctx->pc = 0x2f6d5cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)79 << 16));
    // 0x2f6d60: 0xc0bd9d4  jal         func_2F6750
    ctx->pc = 0x2F6D60u;
    SET_GPR_U32(ctx, 31, 0x2F6D68u);
    ctx->pc = 0x2F6D64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6D60u;
    // 0x2f6d64: 0xffb20020  sd          $s2, 0x20($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F6750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F6750u, 0x2F6D60u, 0x2F6D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6D68u;
label_2f6d68:
    // 0x2f6d68: 0x8e04ef28  lw          $a0, -0x10D8($s0)
    ctx->pc = 0x2f6d68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294962984)));
    // 0x2f6d6c: 0xc0bf6ec  jal         func_2FDBB0
    ctx->pc = 0x2F6D6Cu;
    SET_GPR_U32(ctx, 31, 0x2F6D74u);
    ctx->pc = 0x2FDBB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDBB0u, 0x2F6D6Cu, 0x2F6D74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6D74u;
label_2f6d74:
    // 0x2f6d74: 0x8e03ef28  lw          $v1, -0x10D8($s0)
    ctx->pc = 0x2f6d74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294962984)));
    // 0x2f6d78: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2F6D78u;
    {
        const bool branch_taken_0x2f6d78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F6D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6D78u;
        // 0x2f6d7c: 0x3c02004f  lui         $v0, 0x4F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6d78) {
            ctx->pc = 0x2F6DA8u;
            goto label_2f6da8;
        }
    }
    ctx->pc = 0x2F6D80u;
    // 0x2f6d80: 0x8c43ef10  lw          $v1, -0x10F0($v0)
    ctx->pc = 0x2f6d80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962960)));
    // 0x2f6d84: 0x18600011  blez        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x2F6D84u;
    {
        const bool branch_taken_0x2f6d84 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x2F6D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6D84u;
        // 0x2f6d88: 0x3c02004f  lui         $v0, 0x4F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6d84) {
            ctx->pc = 0x2F6DCCu;
            goto label_2f6dcc;
        }
    }
    ctx->pc = 0x2F6D8Cu;
    // 0x2f6d8c: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x2f6d8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x2f6d90: 0x8c46ef1c  lw          $a2, -0x10E4($v0)
    ctx->pc = 0x2f6d90u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962972)));
    // 0x2f6d94: 0x24849ae8  addiu       $a0, $a0, -0x6518
    ctx->pc = 0x2f6d94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941416));
    // 0x2f6d98: 0xc0c0212  jal         func_300848
    ctx->pc = 0x2F6D98u;
    SET_GPR_U32(ctx, 31, 0x2F6DA0u);
    ctx->pc = 0x2F6D9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6D98u;
    // 0x2f6d9c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x300848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x300848u, 0x2F6D98u, 0x2F6DA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6DA0u;
label_2f6da0:
    // 0x2f6da0: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x2F6DA0u;
    {
        const bool branch_taken_0x2f6da0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F6DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6DA0u;
        // 0x2f6da4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6da0) {
            ctx->pc = 0x2F6E88u;
            goto label_2f6e88;
        }
    }
    ctx->pc = 0x2F6DA8u;
label_2f6da8:
    // 0x2f6da8: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x2f6da8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
    // 0x2f6dac: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2f6dacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f6db0: 0xc0bdbce  jal         func_2F6F38
    ctx->pc = 0x2F6DB0u;
    SET_GPR_U32(ctx, 31, 0x2F6DB8u);
    ctx->pc = 0x2F6DB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6DB0u;
    // 0x2f6db4: 0xac51ef1c  sw          $s1, -0x10E4($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294962972), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F6F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F6F38u, 0x2F6DB0u, 0x2F6DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6DB8u;
label_2f6db8:
    // 0x2f6db8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F6DB8u;
    {
        const bool branch_taken_0x2f6db8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F6DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6DB8u;
        // 0x2f6dbc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6db8) {
            ctx->pc = 0x2F6DD4u;
            goto label_2f6dd4;
        }
    }
    ctx->pc = 0x2F6DC0u;
    // 0x2f6dc0: 0x8e04ef28  lw          $a0, -0x10D8($s0)
    ctx->pc = 0x2f6dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294962984)));
    // 0x2f6dc4: 0xc0bf6e0  jal         func_2FDB80
    ctx->pc = 0x2F6DC4u;
    SET_GPR_U32(ctx, 31, 0x2F6DCCu);
    ctx->pc = 0x2FDB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDB80u, 0x2F6DC4u, 0x2F6DCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6DCCu;
label_2f6dcc:
    // 0x2f6dcc: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x2F6DCCu;
    {
        const bool branch_taken_0x2f6dcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F6DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6DCCu;
        // 0x2f6dd0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6dcc) {
            ctx->pc = 0x2F6E88u;
            goto label_2f6e88;
        }
    }
    ctx->pc = 0x2F6DD4u;
label_2f6dd4:
    // 0x2f6dd4: 0xc0c0448  jal         func_301120
    ctx->pc = 0x2F6DD4u;
    SET_GPR_U32(ctx, 31, 0x2F6DDCu);
    ctx->pc = 0x2F6DD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6DD4u;
    // 0x2f6dd8: 0x3c12004f  lui         $s2, 0x4F (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)79 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x301120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x301120u, 0x2F6DD4u, 0x2F6DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6DDCu;
label_2f6ddc:
    // 0x2f6ddc: 0x8e42ef3c  lw          $v0, -0x10C4($s2)
    ctx->pc = 0x2f6ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294963004)));
    // 0x2f6de0: 0x4410029  bgez        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x2F6DE0u;
    {
        const bool branch_taken_0x2f6de0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2F6DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6DE0u;
        // 0x2f6de4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6de0) {
            ctx->pc = 0x2F6E88u;
            goto label_2f6e88;
        }
    }
    ctx->pc = 0x2F6DE8u;
    // 0x2f6de8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2F6DE8u;
    {
        const bool branch_taken_0x2f6de8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F6DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6DE8u;
        // 0x2f6dec: 0x3c11004f  lui         $s1, 0x4F (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)79 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6de8) {
            ctx->pc = 0x2F6E14u;
            goto label_2f6e14;
        }
    }
    ctx->pc = 0x2F6DF0u;
label_2f6df0:
    // 0x2f6df0: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x2f6df0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    // 0x2f6df4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2f6df4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2f6df8:
    // 0x2f6df8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2f6df8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2f6dfc: 0x0  nop
    ctx->pc = 0x2f6dfcu;
    // NOP
    // 0x2f6e00: 0x0  nop
    ctx->pc = 0x2f6e00u;
    // NOP
    // 0x2f6e04: 0x0  nop
    ctx->pc = 0x2f6e04u;
    // NOP
    // 0x2f6e08: 0x0  nop
    ctx->pc = 0x2f6e08u;
    // NOP
    // 0x2f6e0c: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2F6E0Cu;
    {
        const bool branch_taken_0x2f6e0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2f6e0c) {
            ctx->pc = 0x2F6DF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f6df8;
        }
    }
    ctx->pc = 0x2F6E14u;
label_2f6e14:
    // 0x2f6e14: 0x263000d0  addiu       $s0, $s1, 0xD0
    ctx->pc = 0x2f6e14u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 208));
label_2f6e18:
    // 0x2f6e18: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x2f6e18u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x2f6e1c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f6e1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6e20: 0x34a50595  ori         $a1, $a1, 0x595
    ctx->pc = 0x2f6e20u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1429);
    // 0x2f6e24: 0xc0c0632  jal         func_3018C8
    ctx->pc = 0x2F6E24u;
    SET_GPR_U32(ctx, 31, 0x2F6E2Cu);
    ctx->pc = 0x2F6E28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6E24u;
    // 0x2f6e28: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3018C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3018C8u, 0x2F6E24u, 0x2F6E2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6E2Cu;
label_2f6e2c:
    // 0x2f6e2c: 0x4430013  bgezl       $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2F6E2Cu;
    {
        const bool branch_taken_0x2f6e2c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x2f6e2c) {
            ctx->pc = 0x2F6E30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F6E2Cu;
            // 0x2f6e30: 0x8e020024  lw          $v0, 0x24($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F6E7Cu;
            goto label_2f6e7c;
        }
    }
    ctx->pc = 0x2F6E34u;
    // 0x2f6e34: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x2f6e34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
    // 0x2f6e38: 0x8c43ef10  lw          $v1, -0x10F0($v0)
    ctx->pc = 0x2f6e38u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4EEF10u));
    // 0x2f6e3c: 0x18600005  blez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F6E3Cu;
    {
        const bool branch_taken_0x2f6e3c = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x2F6E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6E3Cu;
        // 0x2f6e40: 0x3c020010  lui         $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6e3c) {
            ctx->pc = 0x2F6E54u;
            goto label_2f6e54;
        }
    }
    ctx->pc = 0x2F6E44u;
    // 0x2f6e44: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x2f6e44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x2f6e48: 0xc0c0212  jal         func_300848
    ctx->pc = 0x2F6E48u;
    SET_GPR_U32(ctx, 31, 0x2F6E50u);
    ctx->pc = 0x2F6E4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6E48u;
    // 0x2f6e4c: 0x24849b10  addiu       $a0, $a0, -0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941456));
    ctx->in_delay_slot = false;
    ctx->pc = 0x300848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x300848u, 0x2F6E48u, 0x2F6E50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6E50u;
label_2f6e50:
    // 0x2f6e50: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x2f6e50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
label_2f6e54:
    // 0x2f6e54: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2f6e54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2f6e58:
    // 0x2f6e58: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2f6e58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2f6e5c: 0x0  nop
    ctx->pc = 0x2f6e5cu;
    // NOP
    // 0x2f6e60: 0x0  nop
    ctx->pc = 0x2f6e60u;
    // NOP
    // 0x2f6e64: 0x0  nop
    ctx->pc = 0x2f6e64u;
    // NOP
    // 0x2f6e68: 0x0  nop
    ctx->pc = 0x2f6e68u;
    // NOP
    // 0x2f6e6c: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2F6E6Cu;
    {
        const bool branch_taken_0x2f6e6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2f6e6c) {
            ctx->pc = 0x2F6E58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f6e58;
        }
    }
    ctx->pc = 0x2F6E74u;
    // 0x2f6e74: 0x1000ffe8  b           . + 4 + (-0x18 << 2)
    ctx->pc = 0x2F6E74u;
    {
        const bool branch_taken_0x2f6e74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F6E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6E74u;
        // 0x2f6e78: 0x263000d0  addiu       $s0, $s1, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 208));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6e74) {
            ctx->pc = 0x2F6E18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f6e18;
        }
    }
    ctx->pc = 0x2F6E7Cu;
label_2f6e7c:
    // 0x2f6e7c: 0x1040ffdc  beqz        $v0, . + 4 + (-0x24 << 2)
    ctx->pc = 0x2F6E7Cu;
    {
        const bool branch_taken_0x2f6e7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F6E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6E7Cu;
        // 0x2f6e80: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6e7c) {
            ctx->pc = 0x2F6DF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f6df0;
        }
    }
    ctx->pc = 0x2F6E84u;
    // 0x2f6e84: 0xae40ef3c  sw          $zero, -0x10C4($s2)
    ctx->pc = 0x2f6e84u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294963004), GPR_U32(ctx, 0));
label_2f6e88:
    // 0x2f6e88: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2f6e88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f6e8c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2f6e8cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f6e90: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2f6e90u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f6e94: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2f6e94u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f6e98: 0x3e00008  jr          $ra
    ctx->pc = 0x2F6E98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F6E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6E98u;
        // 0x2f6e9c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F6E98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F6EA0u;
    // 0x2f6ea0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2f6ea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2f6ea4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2f6ea4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2f6ea8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2f6ea8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2f6eac: 0xc0bdb52  jal         func_2F6D48
    ctx->pc = 0x2F6EACu;
    SET_GPR_U32(ctx, 31, 0x2F6EB4u);
    ctx->pc = 0x2F6EB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6EACu;
    // 0x2f6eb0: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F6D48u;
    goto label_2f6d48;
    ctx->pc = 0x2F6EB4u;
label_2f6eb4:
    // 0x2f6eb4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F6EB4u;
    {
        const bool branch_taken_0x2f6eb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F6EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6EB4u;
        // 0x2f6eb8: 0x3c02004f  lui         $v0, 0x4F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6eb4) {
            ctx->pc = 0x2F6EC4u;
            goto label_2f6ec4;
        }
    }
    ctx->pc = 0x2F6EBCu;
    // 0x2f6ebc: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x2F6EBCu;
    {
        const bool branch_taken_0x2f6ebc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F6EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6EBCu;
        // 0x2f6ec0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6ebc) {
            ctx->pc = 0x2F6F28u;
            goto label_2f6f28;
        }
    }
    ctx->pc = 0x2F6EC4u;
label_2f6ec4:
    // 0x2f6ec4: 0x3c04004f  lui         $a0, 0x4F
    ctx->pc = 0x2f6ec4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)79 << 16));
    // 0x2f6ec8: 0x2450ef80  addiu       $s0, $v0, -0x1080
    ctx->pc = 0x2f6ec8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963072));
    // 0x2f6ecc: 0x248400d0  addiu       $a0, $a0, 0xD0
    ctx->pc = 0x2f6eccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 208));
    // 0x2f6ed0: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x2f6ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x2f6ed4: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x2f6ed4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x2f6ed8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2f6ed8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6edc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2f6edcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6ee0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2f6ee0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6ee4: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x2f6ee4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6ee8: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x2f6ee8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2f6eec: 0xc0c06aa  jal         func_301AA8
    ctx->pc = 0x2F6EECu;
    SET_GPR_U32(ctx, 31, 0x2F6EF4u);
    ctx->pc = 0x2F6EF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6EECu;
    // 0x2f6ef0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x301AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x301AA8u, 0x2F6EECu, 0x2F6EF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6EF4u;
label_2f6ef4:
    // 0x2f6ef4: 0x4410006  bgez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F6EF4u;
    {
        const bool branch_taken_0x2f6ef4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2F6EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6EF4u;
        // 0x2f6ef8: 0x3c03004f  lui         $v1, 0x4F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)79 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6ef4) {
            ctx->pc = 0x2F6F10u;
            goto label_2f6f10;
        }
    }
    ctx->pc = 0x2F6EFCu;
    // 0x2f6efc: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x2f6efcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
    // 0x2f6f00: 0xc0bf6e0  jal         func_2FDB80
    ctx->pc = 0x2F6F00u;
    SET_GPR_U32(ctx, 31, 0x2F6F08u);
    ctx->pc = 0x2F6F04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6F00u;
    // 0x2f6f04: 0x8c44ef28  lw          $a0, -0x10D8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962984)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDB80u, 0x2F6F00u, 0x2F6F08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6F08u;
label_2f6f08:
    // 0x2f6f08: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2F6F08u;
    {
        const bool branch_taken_0x2f6f08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F6F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6F08u;
        // 0x2f6f0c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6f08) {
            ctx->pc = 0x2F6F28u;
            goto label_2f6f28;
        }
    }
    ctx->pc = 0x2F6F10u;
label_2f6f10:
    // 0x2f6f10: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x2f6f10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x2f6f14: 0x2021025  or          $v0, $s0, $v0
    ctx->pc = 0x2f6f14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x2f6f18: 0x8c64ef28  lw          $a0, -0x10D8($v1)
    ctx->pc = 0x2f6f18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294962984)));
    // 0x2f6f1c: 0xc0bf6e0  jal         func_2FDB80
    ctx->pc = 0x2F6F1Cu;
    SET_GPR_U32(ctx, 31, 0x2F6F24u);
    ctx->pc = 0x2F6F20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6F1Cu;
    // 0x2f6f20: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDB80u, 0x2F6F1Cu, 0x2F6F24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6F24u;
label_2f6f24:
    // 0x2f6f24: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2f6f24u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f6f28:
    // 0x2f6f28: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2f6f28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f6f2c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2f6f2cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f6f30: 0x3e00008  jr          $ra
    ctx->pc = 0x2F6F30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F6F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6F30u;
        // 0x2f6f34: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F6F30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F6F38u;
}
