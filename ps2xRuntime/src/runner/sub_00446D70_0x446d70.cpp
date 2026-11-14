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

// Function: sub_00446D70
// Address: 0x446d70 - 0x446f50
void sub_00446D70_0x446d70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00446D70_0x446d70");
#endif

    switch (ctx->pc) {
        case 0x446db8u: goto label_446db8;
        case 0x446dd0u: goto label_446dd0;
        case 0x446ddcu: goto label_446ddc;
        case 0x446e04u: goto label_446e04;
        case 0x446e10u: goto label_446e10;
        case 0x446e44u: goto label_446e44;
        case 0x446e50u: goto label_446e50;
        case 0x446ea8u: goto label_446ea8;
        default: break;
    }

    ctx->pc = 0x446d70u;

    // 0x446d70: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x446d70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x446d74: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x446d74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x446d78: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x446d78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x446d7c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x446d7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x446d80: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x446d80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x446d84: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x446d84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x446d88: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x446d88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x446d8c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x446d8cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x446d90: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x446d90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x446d94: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x446d94u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x446d98: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x446d98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
    // 0x446d9c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x446d9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x446da0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x446da0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x446da4: 0x24060028  addiu       $a2, $zero, 0x28
    ctx->pc = 0x446da4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x446da8: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x446da8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x446dac: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x446dacu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x446db0: 0xc0bb7e6  jal         func_2EDF98
    ctx->pc = 0x446DB0u;
    SET_GPR_U32(ctx, 31, 0x446DB8u);
    ctx->pc = 0x446DB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x446DB0u;
    // 0x446db4: 0x8e90002c  lw          $s0, 0x2C($s4) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 44)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF98u, 0x446DB0u, 0x446DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x446DB8u;
label_446db8:
    // 0x446db8: 0x2e030021  sltiu       $v1, $s0, 0x21
    ctx->pc = 0x446db8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)33) ? 1 : 0);
    // 0x446dbc: 0x5460000a  bnel        $v1, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x446DBCu;
    {
        const bool branch_taken_0x446dbc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x446dbc) {
            ctx->pc = 0x446DC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x446DBCu;
            // 0x446dc0: 0x8e820020  lw          $v0, 0x20($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x446DE8u;
            goto label_446de8;
        }
    }
    ctx->pc = 0x446DC4u;
    // 0x446dc4: 0xafb20000  sw          $s2, 0x0($sp)
    ctx->pc = 0x446dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 18));
    // 0x446dc8: 0xc1035f6  jal         func_40D7D8
    ctx->pc = 0x446DC8u;
    SET_GPR_U32(ctx, 31, 0x446DD0u);
    ctx->pc = 0x446DCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x446DC8u;
    // 0x446dcc: 0x24040029  addiu       $a0, $zero, 0x29 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x446DC8u, 0x446DD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x446DD0u;
label_446dd0:
    // 0x446dd0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x446dd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x446dd4: 0xc103628  jal         func_40D8A0
    ctx->pc = 0x446DD4u;
    SET_GPR_U32(ctx, 31, 0x446DDCu);
    ctx->pc = 0x446DD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x446DD4u;
    // 0x446dd8: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x446DD4u, 0x446DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x446DDCu;
label_446ddc:
    // 0x446ddc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x446ddcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x446de0: 0x8e820020  lw          $v0, 0x20($s4)
    ctx->pc = 0x446de0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x446de4: 0x0  nop
    ctx->pc = 0x446de4u;
    // NOP
label_446de8:
    // 0x446de8: 0x2c420021  sltiu       $v0, $v0, 0x21
    ctx->pc = 0x446de8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)33) ? 1 : 0);
    // 0x446dec: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x446DECu;
    {
        const bool branch_taken_0x446dec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x446DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x446DECu;
        // 0x446df0: 0x3c020062  lui         $v0, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x446dec) {
            ctx->pc = 0x446E18u;
            goto label_446e18;
        }
    }
    ctx->pc = 0x446DF4u;
    // 0x446df4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x446df4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x446df8: 0x24040028  addiu       $a0, $zero, 0x28
    ctx->pc = 0x446df8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x446dfc: 0xc1035f6  jal         func_40D7D8
    ctx->pc = 0x446DFCu;
    SET_GPR_U32(ctx, 31, 0x446E04u);
    ctx->pc = 0x446E00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x446DFCu;
    // 0x446e00: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x446DFCu, 0x446E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x446E04u;
label_446e04:
    // 0x446e04: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x446e04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x446e08: 0xc103628  jal         func_40D8A0
    ctx->pc = 0x446E08u;
    SET_GPR_U32(ctx, 31, 0x446E10u);
    ctx->pc = 0x446E0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x446E08u;
    // 0x446e0c: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x446E08u, 0x446E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x446E10u;
label_446e10:
    // 0x446e10: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x446e10u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x446e14: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x446e14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_446e18:
    // 0x446e18: 0x8f83bf20  lw          $v1, -0x40E0($gp)
    ctx->pc = 0x446e18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950688)));
    // 0x446e1c: 0x2455e880  addiu       $s5, $v0, -0x1780
    ctx->pc = 0x446e1cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
    // 0x446e20: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x446e20u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x446e24: 0x751821  addu        $v1, $v1, $s5
    ctx->pc = 0x446e24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x446e28: 0x8c620038  lw          $v0, 0x38($v1)
    ctx->pc = 0x446e28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
    // 0x446e2c: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x446e2cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x446e30: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x446E30u;
    {
        const bool branch_taken_0x446e30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x446E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x446E30u;
        // 0x446e34: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x446e30) {
            ctx->pc = 0x446E58u;
            goto label_446e58;
        }
    }
    ctx->pc = 0x446E38u;
    // 0x446e38: 0x2404002a  addiu       $a0, $zero, 0x2A
    ctx->pc = 0x446e38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x446e3c: 0xc1035f6  jal         func_40D7D8
    ctx->pc = 0x446E3Cu;
    SET_GPR_U32(ctx, 31, 0x446E44u);
    ctx->pc = 0x446E40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x446E3Cu;
    // 0x446e40: 0xafa20020  sw          $v0, 0x20($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x446E3Cu, 0x446E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x446E44u;
label_446e44:
    // 0x446e44: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x446e44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x446e48: 0xc103628  jal         func_40D8A0
    ctx->pc = 0x446E48u;
    SET_GPR_U32(ctx, 31, 0x446E50u);
    ctx->pc = 0x446E4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x446E48u;
    // 0x446e4c: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x446E48u, 0x446E50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x446E50u;
label_446e50:
    // 0x446e50: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x446e50u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x446e54: 0x0  nop
    ctx->pc = 0x446e54u;
    // NOP
label_446e58:
    // 0x446e58: 0x12400032  beqz        $s2, . + 4 + (0x32 << 2)
    ctx->pc = 0x446E58u;
    {
        const bool branch_taken_0x446e58 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x446E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x446E58u;
        // 0x446e5c: 0x8f82bf20  lw          $v0, -0x40E0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950688)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x446e58) {
            ctx->pc = 0x446F24u;
            goto label_446f24;
        }
    }
    ctx->pc = 0x446E60u;
    // 0x446e60: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x446e60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x446e64: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x446e64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x446e68: 0x8e650008  lw          $a1, 0x8($s3)
    ctx->pc = 0x446e68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x446e6c: 0x8c430038  lw          $v1, 0x38($v0)
    ctx->pc = 0x446e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x446e70: 0x421c0  sll         $a0, $a0, 7
    ctx->pc = 0x446e70u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 7));
    // 0x446e74: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x446e74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x446e78: 0xae300004  sw          $s0, 0x4($s1)
    ctx->pc = 0x446e78u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
    // 0x446e7c: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x446e7cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x446e80: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x446e80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x446e84: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x446e84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x446e88: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x446e88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x446e8c: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x446e8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x446e90: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x446E90u;
    {
        const bool branch_taken_0x446e90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x446E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x446E90u;
        // 0x446e94: 0xae250008  sw          $a1, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x446e90) {
            ctx->pc = 0x446EC4u;
            goto label_446ec4;
        }
    }
    ctx->pc = 0x446E98u;
    // 0x446e98: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x446e98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x446e9c: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x446e9cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x446ea0: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x446ea0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x446ea4: 0x0  nop
    ctx->pc = 0x446ea4u;
    // NOP
label_446ea8:
    // 0x446ea8: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x446ea8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x446eac: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x446eacu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x446eb0: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x446eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x446eb4: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x446eb4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x446eb8: 0x0  nop
    ctx->pc = 0x446eb8u;
    // NOP
    // 0x446ebc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x446EBCu;
    {
        const bool branch_taken_0x446ebc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x446EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x446EBCu;
        // 0x446ec0: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x446ebc) {
            ctx->pc = 0x446EA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_446ea8;
        }
    }
    ctx->pc = 0x446EC4u;
label_446ec4:
    // 0x446ec4: 0x8f82bf20  lw          $v0, -0x40E0($gp)
    ctx->pc = 0x446ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950688)));
    // 0x446ec8: 0x26c3e880  addiu       $v1, $s6, -0x1780
    ctx->pc = 0x446ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 4294961280));
    // 0x446ecc: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x446eccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x446ed0: 0x8e660004  lw          $a2, 0x4($s3)
    ctx->pc = 0x446ed0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x446ed4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x446ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x446ed8: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x446ed8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x446edc: 0x8c430038  lw          $v1, 0x38($v0)
    ctx->pc = 0x446edcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x446ee0: 0xc43018  mult        $a2, $a2, $a0
    ctx->pc = 0x446ee0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x446ee4: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x446ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x446ee8: 0x652818  mult        $a1, $v1, $a1
    ctx->pc = 0x446ee8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x446eec: 0xae340000  sw          $s4, 0x0($s1)
    ctx->pc = 0x446eecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 20));
    // 0x446ef0: 0x319c0  sll         $v1, $v1, 7
    ctx->pc = 0x446ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
    // 0x446ef4: 0xae200020  sw          $zero, 0x20($s1)
    ctx->pc = 0x446ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 0));
    // 0x446ef8: 0x452821  addu        $a1, $v0, $a1
    ctx->pc = 0x446ef8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x446efc: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x446efcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x446f00: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x446f00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x446f04: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x446f04u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x446f08: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x446f08u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x446f0c: 0xae200024  sw          $zero, 0x24($s1)
    ctx->pc = 0x446f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 0));
    // 0x446f10: 0xae23001c  sw          $v1, 0x1C($s1)
    ctx->pc = 0x446f10u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 3));
    // 0x446f14: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x446f14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x446f18: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x446f18u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x446f1c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x446f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x446f20: 0xae620004  sw          $v0, 0x4($s3)
    ctx->pc = 0x446f20u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
label_446f24:
    // 0x446f24: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x446f24u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x446f28: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x446f28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x446f2c: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x446f2cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x446f30: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x446f30u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x446f34: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x446f34u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x446f38: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x446f38u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x446f3c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x446f3cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x446f40: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x446f40u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x446f44: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x446f44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x446f48: 0x3e00008  jr          $ra
    ctx->pc = 0x446F48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x446F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x446F48u;
        // 0x446f4c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x446F48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x446F50u;
}
