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

// Function: sub_00418D50
// Address: 0x418d50 - 0x418e90
void sub_00418D50_0x418d50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00418D50_0x418d50");
#endif

    switch (ctx->pc) {
        case 0x418da0u: goto label_418da0;
        case 0x418dc4u: goto label_418dc4;
        case 0x418ddcu: goto label_418ddc;
        case 0x418dfcu: goto label_418dfc;
        case 0x418e34u: goto label_418e34;
        case 0x418e40u: goto label_418e40;
        case 0x418e5cu: goto label_418e5c;
        case 0x418e68u: goto label_418e68;
        default: break;
    }

    ctx->pc = 0x418d50u;

    // 0x418d50: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x418d50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x418d54: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x418d54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x418d58: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x418d58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x418d5c: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x418d5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x418d60: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x418d60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x418d64: 0x2472e880  addiu       $s2, $v1, -0x1780
    ctx->pc = 0x418d64u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961280));
    // 0x418d68: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x418d68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x418d6c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x418d6cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x418d70: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x418d70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x418d74: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x418d74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x418d78: 0x8e420124  lw          $v0, 0x124($s2)
    ctx->pc = 0x418d78u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x61E9A4u));
    // 0x418d7c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x418d7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x418d80: 0x2c500001  sltiu       $s0, $v0, 0x1
    ctx->pc = 0x418d80u;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x418d84: 0x12000030  beqz        $s0, . + 4 + (0x30 << 2)
    ctx->pc = 0x418D84u;
    {
        const bool branch_taken_0x418d84 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x418D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x418D84u;
        // 0x418d88: 0x60a02d  daddu       $s4, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x418d84) {
            ctx->pc = 0x418E48u;
            goto label_418e48;
        }
    }
    ctx->pc = 0x418D8Cu;
    // 0x418d8c: 0x13802b  sltu        $s0, $zero, $s3
    ctx->pc = 0x418d8cu;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x418d90: 0x12000024  beqz        $s0, . + 4 + (0x24 << 2)
    ctx->pc = 0x418D90u;
    {
        const bool branch_taken_0x418d90 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x418D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x418D90u;
        // 0x418d94: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x418d90) {
            ctx->pc = 0x418E24u;
            goto label_418e24;
        }
    }
    ctx->pc = 0x418D98u;
    // 0x418d98: 0xc10d3d6  jal         func_434F58
    ctx->pc = 0x418D98u;
    SET_GPR_U32(ctx, 31, 0x418DA0u);
    ctx->pc = 0x434F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x434F58u, 0x418D98u, 0x418DA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x418DA0u;
label_418da0:
    // 0x418da0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x418da0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x418da4: 0x2802b  sltu        $s0, $zero, $v0
    ctx->pc = 0x418da4u;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x418da8: 0x1200002f  beqz        $s0, . + 4 + (0x2F << 2)
    ctx->pc = 0x418DA8u;
    {
        const bool branch_taken_0x418da8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x418DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x418DA8u;
        // 0x418dac: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x418da8) {
            ctx->pc = 0x418E68u;
            goto label_418e68;
        }
    }
    ctx->pc = 0x418DB0u;
    // 0x418db0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x418db0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x418db4: 0x26460010  addiu       $a2, $s2, 0x10
    ctx->pc = 0x418db4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x418db8: 0x26470108  addiu       $a3, $s2, 0x108
    ctx->pc = 0x418db8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 264));
    // 0x418dbc: 0xc106494  jal         func_419250
    ctx->pc = 0x418DBCu;
    SET_GPR_U32(ctx, 31, 0x418DC4u);
    ctx->pc = 0x418DC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x418DBCu;
    // 0x418dc0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x419250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419250u, 0x418DBCu, 0x418DC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x418DC4u;
label_418dc4:
    // 0x418dc4: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x418dc4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x418dc8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x418dc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x418dcc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x418dccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x418dd0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x418dd0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x418dd4: 0xc106494  jal         func_419250
    ctx->pc = 0x418DD4u;
    SET_GPR_U32(ctx, 31, 0x418DDCu);
    ctx->pc = 0x418DD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x418DD4u;
    // 0x418dd8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x419250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419250u, 0x418DD4u, 0x418DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x418DDCu;
label_418ddc:
    // 0x418ddc: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x418DDCu;
    {
        const bool branch_taken_0x418ddc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x418DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x418DDCu;
        // 0x418de0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x418ddc) {
            ctx->pc = 0x418E0Cu;
            goto label_418e0c;
        }
    }
    ctx->pc = 0x418DE4u;
    // 0x418de4: 0x26460048  addiu       $a2, $s2, 0x48
    ctx->pc = 0x418de4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 72));
    // 0x418de8: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x418de8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x418dec: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x418decu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x418df0: 0x2408001d  addiu       $t0, $zero, 0x1D
    ctx->pc = 0x418df0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x418df4: 0xc106494  jal         func_419250
    ctx->pc = 0x418DF4u;
    SET_GPR_U32(ctx, 31, 0x418DFCu);
    ctx->pc = 0x418DF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x418DF4u;
    // 0x418df8: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x419250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419250u, 0x418DF4u, 0x418DFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x418DFCu;
label_418dfc:
    // 0x418dfc: 0x8f83ad80  lw          $v1, -0x5280($gp)
    ctx->pc = 0x418dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946176)));
    // 0x418e00: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x418e00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x418e04: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x418E04u;
    {
        const bool branch_taken_0x418e04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x418E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x418E04u;
        // 0x418e08: 0xaf83ad80  sw          $v1, -0x5280($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294946176), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x418e04) {
            ctx->pc = 0x418E10u;
            goto label_418e10;
        }
    }
    ctx->pc = 0x418E0Cu;
label_418e0c:
    // 0x418e0c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x418e0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_418e10:
    // 0x418e10: 0x12000015  beqz        $s0, . + 4 + (0x15 << 2)
    ctx->pc = 0x418E10u;
    {
        const bool branch_taken_0x418e10 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x418E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x418E10u;
        // 0x418e14: 0x2683e880  addiu       $v1, $s4, -0x1780 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4294961280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x418e10) {
            ctx->pc = 0x418E68u;
            goto label_418e68;
        }
    }
    ctx->pc = 0x418E18u;
    // 0x418e18: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x418e18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x418e1c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x418E1Cu;
    {
        const bool branch_taken_0x418e1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x418E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x418E1Cu;
        // 0x418e20: 0xac620124  sw          $v0, 0x124($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 292), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x418e1c) {
            ctx->pc = 0x418E68u;
            goto label_418e68;
        }
    }
    ctx->pc = 0x418E24u;
label_418e24:
    // 0x418e24: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x418e24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x418e28: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x418e28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x418e2c: 0xc1035f6  jal         func_40D7D8
    ctx->pc = 0x418E2Cu;
    SET_GPR_U32(ctx, 31, 0x418E34u);
    ctx->pc = 0x418E30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x418E2Cu;
    // 0x418e30: 0x34840016  ori         $a0, $a0, 0x16 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)22);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x418E2Cu, 0x418E34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x418E34u;
label_418e34:
    // 0x418e34: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x418e34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x418e38: 0xc103628  jal         func_40D8A0
    ctx->pc = 0x418E38u;
    SET_GPR_U32(ctx, 31, 0x418E40u);
    ctx->pc = 0x418E3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x418E38u;
    // 0x418e3c: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x418E38u, 0x418E40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x418E40u;
label_418e40:
    // 0x418e40: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x418E40u;
    {
        const bool branch_taken_0x418e40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x418E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x418E40u;
        // 0x418e44: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x418e40) {
            ctx->pc = 0x418E6Cu;
            goto label_418e6c;
        }
    }
    ctx->pc = 0x418E48u;
label_418e48:
    // 0x418e48: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x418e48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x418e4c: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x418e4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x418e50: 0x34840001  ori         $a0, $a0, 0x1
    ctx->pc = 0x418e50u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1);
    // 0x418e54: 0xc1035f6  jal         func_40D7D8
    ctx->pc = 0x418E54u;
    SET_GPR_U32(ctx, 31, 0x418E5Cu);
    ctx->pc = 0x418E58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x418E54u;
    // 0x418e58: 0xafa20020  sw          $v0, 0x20($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x418E54u, 0x418E5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x418E5Cu;
label_418e5c:
    // 0x418e5c: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x418e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x418e60: 0xc103628  jal         func_40D8A0
    ctx->pc = 0x418E60u;
    SET_GPR_U32(ctx, 31, 0x418E68u);
    ctx->pc = 0x418E64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x418E60u;
    // 0x418e64: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x418E60u, 0x418E68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x418E68u;
label_418e68:
    // 0x418e68: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x418e68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_418e6c:
    // 0x418e6c: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x418e6cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x418e70: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x418e70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x418e74: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x418e74u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x418e78: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x418e78u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x418e7c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x418e7cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x418e80: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x418e80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x418e84: 0x3e00008  jr          $ra
    ctx->pc = 0x418E84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x418E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x418E84u;
        // 0x418e88: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x418E84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x418E8Cu;
    // 0x418e8c: 0x0  nop
    ctx->pc = 0x418e8cu;
    // NOP
    ctx->pc = 0x418e90u;
}
