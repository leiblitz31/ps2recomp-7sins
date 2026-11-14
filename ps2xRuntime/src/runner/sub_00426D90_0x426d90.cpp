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

// Function: sub_00426D90
// Address: 0x426d90 - 0x426eb0
void sub_00426D90_0x426d90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00426D90_0x426d90");
#endif

    switch (ctx->pc) {
        case 0x426d90u: goto label_426d90;
        case 0x426d94u: goto label_426d94;
        case 0x426d98u: goto label_426d98;
        case 0x426d9cu: goto label_426d9c;
        case 0x426da0u: goto label_426da0;
        case 0x426da4u: goto label_426da4;
        case 0x426da8u: goto label_426da8;
        case 0x426dacu: goto label_426dac;
        case 0x426db0u: goto label_426db0;
        case 0x426db4u: goto label_426db4;
        case 0x426db8u: goto label_426db8;
        case 0x426dbcu: goto label_426dbc;
        case 0x426dc0u: goto label_426dc0;
        case 0x426dc4u: goto label_426dc4;
        case 0x426dc8u: goto label_426dc8;
        case 0x426dccu: goto label_426dcc;
        case 0x426dd0u: goto label_426dd0;
        case 0x426dd4u: goto label_426dd4;
        case 0x426dd8u: goto label_426dd8;
        case 0x426ddcu: goto label_426ddc;
        case 0x426de0u: goto label_426de0;
        case 0x426de4u: goto label_426de4;
        case 0x426de8u: goto label_426de8;
        case 0x426decu: goto label_426dec;
        case 0x426df0u: goto label_426df0;
        case 0x426df4u: goto label_426df4;
        case 0x426df8u: goto label_426df8;
        case 0x426dfcu: goto label_426dfc;
        case 0x426e00u: goto label_426e00;
        case 0x426e04u: goto label_426e04;
        case 0x426e08u: goto label_426e08;
        case 0x426e0cu: goto label_426e0c;
        case 0x426e10u: goto label_426e10;
        case 0x426e14u: goto label_426e14;
        case 0x426e18u: goto label_426e18;
        case 0x426e1cu: goto label_426e1c;
        case 0x426e20u: goto label_426e20;
        case 0x426e24u: goto label_426e24;
        case 0x426e28u: goto label_426e28;
        case 0x426e2cu: goto label_426e2c;
        case 0x426e30u: goto label_426e30;
        case 0x426e34u: goto label_426e34;
        case 0x426e38u: goto label_426e38;
        case 0x426e3cu: goto label_426e3c;
        case 0x426e40u: goto label_426e40;
        case 0x426e44u: goto label_426e44;
        case 0x426e48u: goto label_426e48;
        case 0x426e4cu: goto label_426e4c;
        case 0x426e50u: goto label_426e50;
        case 0x426e54u: goto label_426e54;
        case 0x426e58u: goto label_426e58;
        case 0x426e5cu: goto label_426e5c;
        case 0x426e60u: goto label_426e60;
        case 0x426e64u: goto label_426e64;
        case 0x426e68u: goto label_426e68;
        case 0x426e6cu: goto label_426e6c;
        case 0x426e70u: goto label_426e70;
        case 0x426e74u: goto label_426e74;
        case 0x426e78u: goto label_426e78;
        case 0x426e7cu: goto label_426e7c;
        case 0x426e80u: goto label_426e80;
        case 0x426e84u: goto label_426e84;
        case 0x426e88u: goto label_426e88;
        case 0x426e8cu: goto label_426e8c;
        case 0x426e90u: goto label_426e90;
        case 0x426e94u: goto label_426e94;
        case 0x426e98u: goto label_426e98;
        case 0x426e9cu: goto label_426e9c;
        case 0x426ea0u: goto label_426ea0;
        case 0x426ea4u: goto label_426ea4;
        case 0x426ea8u: goto label_426ea8;
        case 0x426eacu: goto label_426eac;
        default: break;
    }

    ctx->pc = 0x426d90u;

label_426d90:
    // 0x426d90: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x426d90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_426d94:
    // 0x426d94: 0x8f86add0  lw          $a2, -0x5230($gp)
    ctx->pc = 0x426d94u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946256)));
label_426d98:
    // 0x426d98: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x426d98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_426d9c:
    // 0x426d9c: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x426d9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_426da0:
    // 0x426da0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x426da0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_426da4:
    // 0x426da4: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x426da4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_426da8:
    // 0x426da8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x426da8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_426dac:
    // 0x426dac: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x426dacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
label_426db0:
    // 0x426db0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x426db0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_426db4:
    // 0x426db4: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x426db4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
label_426db8:
    // 0x426db8: 0x8e544000  lw          $s4, 0x4000($s2)
    ctx->pc = 0x426db8u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16384)));
label_426dbc:
    // 0x426dbc: 0x52800031  beql        $s4, $zero, . + 4 + (0x31 << 2)
label_426dc0:
    if (ctx->pc == 0x426DC0u) {
        ctx->pc = 0x426DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x426DBCu;
        // 0x426dc0: 0x8e444004  lw          $a0, 0x4004($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x426DC4u;
        goto label_426dc4;
    }
    ctx->pc = 0x426DBCu;
    {
        const bool branch_taken_0x426dbc = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x426dbc) {
            ctx->pc = 0x426DC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x426DBCu;
            // 0x426dc0: 0x8e444004  lw          $a0, 0x4004($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16388)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x426E84u;
            goto label_426e84;
        }
    }
    ctx->pc = 0x426DC4u;
label_426dc4:
    // 0x426dc4: 0x18c00029  blez        $a2, . + 4 + (0x29 << 2)
label_426dc8:
    if (ctx->pc == 0x426DC8u) {
        ctx->pc = 0x426DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x426DC4u;
        // 0x426dc8: 0x3c150062  lui         $s5, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x426DCCu;
        goto label_426dcc;
    }
    ctx->pc = 0x426DC4u;
    {
        const bool branch_taken_0x426dc4 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x426DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x426DC4u;
        // 0x426dc8: 0x3c150062  lui         $s5, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x426dc4) {
            ctx->pc = 0x426E6Cu;
            goto label_426e6c;
        }
    }
    ctx->pc = 0x426DCCu;
label_426dcc:
    // 0x426dcc: 0x24d1ffff  addiu       $s1, $a2, -0x1
    ctx->pc = 0x426dccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_426dd0:
    // 0x426dd0: 0x2413000f  addiu       $s3, $zero, 0xF
    ctx->pc = 0x426dd0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_426dd4:
    // 0x426dd4: 0x2690001c  addiu       $s0, $s4, 0x1C
    ctx->pc = 0x426dd4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 28));
label_426dd8:
    // 0x426dd8: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x426dd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_426ddc:
    // 0x426ddc: 0x0  nop
    ctx->pc = 0x426ddcu;
    // NOP
label_426de0:
    // 0x426de0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x426de0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_426de4:
    // 0x426de4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x426de4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_426de8:
    // 0x426de8: 0xc109cc6  jal         func_427318
label_426dec:
    if (ctx->pc == 0x426DECu) {
        ctx->pc = 0x426DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x426DE8u;
        // 0x426dec: 0x2673fff8  addiu       $s3, $s3, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x426DF0u;
        goto label_426df0;
    }
    ctx->pc = 0x426DE8u;
    SET_GPR_U32(ctx, 31, 0x426DF0u);
    ctx->pc = 0x426DECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x426DE8u;
    // 0x426dec: 0x2673fff8  addiu       $s3, $s3, -0x8 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x427318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x427318u, 0x426DE8u, 0x426DF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x426DF0u;
label_426df0:
    // 0x426df0: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x426df0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_426df4:
    // 0x426df4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x426df4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_426df8:
    // 0x426df8: 0xc109cc6  jal         func_427318
label_426dfc:
    if (ctx->pc == 0x426DFCu) {
        ctx->pc = 0x426DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x426DF8u;
        // 0x426dfc: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x426E00u;
        goto label_426e00;
    }
    ctx->pc = 0x426DF8u;
    SET_GPR_U32(ctx, 31, 0x426E00u);
    ctx->pc = 0x426DFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x426DF8u;
    // 0x426dfc: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x427318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x427318u, 0x426DF8u, 0x426E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x426E00u;
label_426e00:
    // 0x426e00: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x426e00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_426e04:
    // 0x426e04: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x426e04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_426e08:
    // 0x426e08: 0xc109cc6  jal         func_427318
label_426e0c:
    if (ctx->pc == 0x426E0Cu) {
        ctx->pc = 0x426E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x426E08u;
        // 0x426e0c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x426E10u;
        goto label_426e10;
    }
    ctx->pc = 0x426E08u;
    SET_GPR_U32(ctx, 31, 0x426E10u);
    ctx->pc = 0x426E0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x426E08u;
    // 0x426e0c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x427318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x427318u, 0x426E08u, 0x426E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x426E10u;
label_426e10:
    // 0x426e10: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x426e10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_426e14:
    // 0x426e14: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x426e14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_426e18:
    // 0x426e18: 0xc109cc6  jal         func_427318
label_426e1c:
    if (ctx->pc == 0x426E1Cu) {
        ctx->pc = 0x426E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x426E18u;
        // 0x426e1c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x426E20u;
        goto label_426e20;
    }
    ctx->pc = 0x426E18u;
    SET_GPR_U32(ctx, 31, 0x426E20u);
    ctx->pc = 0x426E1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x426E18u;
    // 0x426e1c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x427318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x427318u, 0x426E18u, 0x426E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x426E20u;
label_426e20:
    // 0x426e20: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x426e20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_426e24:
    // 0x426e24: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x426e24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_426e28:
    // 0x426e28: 0xc109cc6  jal         func_427318
label_426e2c:
    if (ctx->pc == 0x426E2Cu) {
        ctx->pc = 0x426E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x426E28u;
        // 0x426e2c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x426E30u;
        goto label_426e30;
    }
    ctx->pc = 0x426E28u;
    SET_GPR_U32(ctx, 31, 0x426E30u);
    ctx->pc = 0x426E2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x426E28u;
    // 0x426e2c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x427318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x427318u, 0x426E28u, 0x426E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x426E30u;
label_426e30:
    // 0x426e30: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x426e30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_426e34:
    // 0x426e34: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x426e34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_426e38:
    // 0x426e38: 0xc109cc6  jal         func_427318
label_426e3c:
    if (ctx->pc == 0x426E3Cu) {
        ctx->pc = 0x426E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x426E38u;
        // 0x426e3c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x426E40u;
        goto label_426e40;
    }
    ctx->pc = 0x426E38u;
    SET_GPR_U32(ctx, 31, 0x426E40u);
    ctx->pc = 0x426E3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x426E38u;
    // 0x426e3c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x427318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x427318u, 0x426E38u, 0x426E40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x426E40u;
label_426e40:
    // 0x426e40: 0x8e050018  lw          $a1, 0x18($s0)
    ctx->pc = 0x426e40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_426e44:
    // 0x426e44: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x426e44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_426e48:
    // 0x426e48: 0xc109cc6  jal         func_427318
label_426e4c:
    if (ctx->pc == 0x426E4Cu) {
        ctx->pc = 0x426E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x426E48u;
        // 0x426e4c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x426E50u;
        goto label_426e50;
    }
    ctx->pc = 0x426E48u;
    SET_GPR_U32(ctx, 31, 0x426E50u);
    ctx->pc = 0x426E4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x426E48u;
    // 0x426e4c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x427318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x427318u, 0x426E48u, 0x426E50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x426E50u;
label_426e50:
    // 0x426e50: 0x8e05001c  lw          $a1, 0x1C($s0)
    ctx->pc = 0x426e50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_426e54:
    // 0x426e54: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x426e54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_426e58:
    // 0x426e58: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x426e58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_426e5c:
    // 0x426e5c: 0xc109cc6  jal         func_427318
label_426e60:
    if (ctx->pc == 0x426E60u) {
        ctx->pc = 0x426E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x426E5Cu;
        // 0x426e60: 0x26100020  addiu       $s0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x426E64u;
        goto label_426e64;
    }
    ctx->pc = 0x426E5Cu;
    SET_GPR_U32(ctx, 31, 0x426E64u);
    ctx->pc = 0x426E60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x426E5Cu;
    // 0x426e60: 0x26100020  addiu       $s0, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x427318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x427318u, 0x426E5Cu, 0x426E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x426E64u;
label_426e64:
    // 0x426e64: 0x663ffde  bgezl       $s3, . + 4 + (-0x22 << 2)
label_426e68:
    if (ctx->pc == 0x426E68u) {
        ctx->pc = 0x426E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x426E64u;
        // 0x426e68: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x426E6Cu;
        goto label_426e6c;
    }
    ctx->pc = 0x426E64u;
    {
        const bool branch_taken_0x426e64 = (GPR_S32(ctx, 19) >= 0);
        if (branch_taken_0x426e64) {
            ctx->pc = 0x426E68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x426E64u;
            // 0x426e68: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x426DE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_426de0;
        }
    }
    ctx->pc = 0x426E6Cu;
label_426e6c:
    // 0x426e6c: 0x26a3e880  addiu       $v1, $s5, -0x1780
    ctx->pc = 0x426e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 4294961280));
label_426e70:
    // 0x426e70: 0x8e444004  lw          $a0, 0x4004($s2)
    ctx->pc = 0x426e70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16388)));
label_426e74:
    // 0x426e74: 0x8c62011c  lw          $v0, 0x11C($v1)
    ctx->pc = 0x426e74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 284)));
label_426e78:
    // 0x426e78: 0x40f809  jalr        $v0
label_426e7c:
    if (ctx->pc == 0x426E7Cu) {
        ctx->pc = 0x426E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x426E78u;
        // 0x426e7c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x426E80u;
        goto label_426e80;
    }
    ctx->pc = 0x426E78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x426E80u);
        ctx->pc = 0x426E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x426E78u;
        // 0x426e7c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x426E78u, 0x426E80u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x426E80u;
label_426e80:
    // 0x426e80: 0x8e444004  lw          $a0, 0x4004($s2)
    ctx->pc = 0x426e80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16388)));
label_426e84:
    // 0x426e84: 0xc104284  jal         func_410A10
label_426e88:
    if (ctx->pc == 0x426E88u) {
        ctx->pc = 0x426E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x426E84u;
        // 0x426e88: 0xae404000  sw          $zero, 0x4000($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 16384), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x426E8Cu;
        goto label_426e8c;
    }
    ctx->pc = 0x426E84u;
    SET_GPR_U32(ctx, 31, 0x426E8Cu);
    ctx->pc = 0x426E88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x426E84u;
    // 0x426e88: 0xae404000  sw          $zero, 0x4000($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 16384), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x410A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x410A10u, 0x426E84u, 0x426E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x426E8Cu;
label_426e8c:
    // 0x426e8c: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x426e8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_426e90:
    // 0x426e90: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x426e90u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_426e94:
    // 0x426e94: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x426e94u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_426e98:
    // 0x426e98: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x426e98u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_426e9c:
    // 0x426e9c: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x426e9cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_426ea0:
    // 0x426ea0: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x426ea0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_426ea4:
    // 0x426ea4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x426ea4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_426ea8:
    // 0x426ea8: 0x3e00008  jr          $ra
label_426eac:
    if (ctx->pc == 0x426EACu) {
        ctx->pc = 0x426EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x426EA8u;
        // 0x426eac: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x426EB0u;
        goto label_fallthrough_0x426ea8;
    }
    ctx->pc = 0x426EA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x426EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x426EA8u;
        // 0x426eac: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x426EA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x426ea8:
    ctx->pc = 0x426EB0u;
}
