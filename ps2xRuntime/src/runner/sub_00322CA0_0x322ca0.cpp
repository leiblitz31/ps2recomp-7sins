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

// Function: sub_00322CA0
// Address: 0x322ca0 - 0x322e28
void sub_00322CA0_0x322ca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00322CA0_0x322ca0");
#endif

    switch (ctx->pc) {
        case 0x322ca0u: goto label_322ca0;
        case 0x322ca4u: goto label_322ca4;
        case 0x322ca8u: goto label_322ca8;
        case 0x322cacu: goto label_322cac;
        case 0x322cb0u: goto label_322cb0;
        case 0x322cb4u: goto label_322cb4;
        case 0x322cb8u: goto label_322cb8;
        case 0x322cbcu: goto label_322cbc;
        case 0x322cc0u: goto label_322cc0;
        case 0x322cc4u: goto label_322cc4;
        case 0x322cc8u: goto label_322cc8;
        case 0x322cccu: goto label_322ccc;
        case 0x322cd0u: goto label_322cd0;
        case 0x322cd4u: goto label_322cd4;
        case 0x322cd8u: goto label_322cd8;
        case 0x322cdcu: goto label_322cdc;
        case 0x322ce0u: goto label_322ce0;
        case 0x322ce4u: goto label_322ce4;
        case 0x322ce8u: goto label_322ce8;
        case 0x322cecu: goto label_322cec;
        case 0x322cf0u: goto label_322cf0;
        case 0x322cf4u: goto label_322cf4;
        case 0x322cf8u: goto label_322cf8;
        case 0x322cfcu: goto label_322cfc;
        case 0x322d00u: goto label_322d00;
        case 0x322d04u: goto label_322d04;
        case 0x322d08u: goto label_322d08;
        case 0x322d0cu: goto label_322d0c;
        case 0x322d10u: goto label_322d10;
        case 0x322d14u: goto label_322d14;
        case 0x322d18u: goto label_322d18;
        case 0x322d1cu: goto label_322d1c;
        case 0x322d20u: goto label_322d20;
        case 0x322d24u: goto label_322d24;
        case 0x322d28u: goto label_322d28;
        case 0x322d2cu: goto label_322d2c;
        case 0x322d30u: goto label_322d30;
        case 0x322d34u: goto label_322d34;
        case 0x322d38u: goto label_322d38;
        case 0x322d3cu: goto label_322d3c;
        case 0x322d40u: goto label_322d40;
        case 0x322d44u: goto label_322d44;
        case 0x322d48u: goto label_322d48;
        case 0x322d4cu: goto label_322d4c;
        case 0x322d50u: goto label_322d50;
        case 0x322d54u: goto label_322d54;
        case 0x322d58u: goto label_322d58;
        case 0x322d5cu: goto label_322d5c;
        case 0x322d60u: goto label_322d60;
        case 0x322d64u: goto label_322d64;
        case 0x322d68u: goto label_322d68;
        case 0x322d6cu: goto label_322d6c;
        case 0x322d70u: goto label_322d70;
        case 0x322d74u: goto label_322d74;
        case 0x322d78u: goto label_322d78;
        case 0x322d7cu: goto label_322d7c;
        case 0x322d80u: goto label_322d80;
        case 0x322d84u: goto label_322d84;
        case 0x322d88u: goto label_322d88;
        case 0x322d8cu: goto label_322d8c;
        case 0x322d90u: goto label_322d90;
        case 0x322d94u: goto label_322d94;
        case 0x322d98u: goto label_322d98;
        case 0x322d9cu: goto label_322d9c;
        case 0x322da0u: goto label_322da0;
        case 0x322da4u: goto label_322da4;
        case 0x322da8u: goto label_322da8;
        case 0x322dacu: goto label_322dac;
        case 0x322db0u: goto label_322db0;
        case 0x322db4u: goto label_322db4;
        case 0x322db8u: goto label_322db8;
        case 0x322dbcu: goto label_322dbc;
        case 0x322dc0u: goto label_322dc0;
        case 0x322dc4u: goto label_322dc4;
        case 0x322dc8u: goto label_322dc8;
        case 0x322dccu: goto label_322dcc;
        case 0x322dd0u: goto label_322dd0;
        case 0x322dd4u: goto label_322dd4;
        case 0x322dd8u: goto label_322dd8;
        case 0x322ddcu: goto label_322ddc;
        case 0x322de0u: goto label_322de0;
        case 0x322de4u: goto label_322de4;
        case 0x322de8u: goto label_322de8;
        case 0x322decu: goto label_322dec;
        case 0x322df0u: goto label_322df0;
        case 0x322df4u: goto label_322df4;
        case 0x322df8u: goto label_322df8;
        case 0x322dfcu: goto label_322dfc;
        case 0x322e00u: goto label_322e00;
        case 0x322e04u: goto label_322e04;
        case 0x322e08u: goto label_322e08;
        case 0x322e0cu: goto label_322e0c;
        case 0x322e10u: goto label_322e10;
        case 0x322e14u: goto label_322e14;
        case 0x322e18u: goto label_322e18;
        case 0x322e1cu: goto label_322e1c;
        case 0x322e20u: goto label_322e20;
        case 0x322e24u: goto label_322e24;
        default: break;
    }

    ctx->pc = 0x322ca0u;

label_322ca0:
    // 0x322ca0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x322ca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_322ca4:
    // 0x322ca4: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x322ca4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
label_322ca8:
    // 0x322ca8: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x322ca8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_322cac:
    // 0x322cac: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x322cacu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_322cb0:
    // 0x322cb0: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x322cb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_322cb4:
    // 0x322cb4: 0x2851021  addu        $v0, $s4, $a1
    ctx->pc = 0x322cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
label_322cb8:
    // 0x322cb8: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x322cb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_322cbc:
    // 0x322cbc: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x322cbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
label_322cc0:
    // 0x322cc0: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x322cc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
label_322cc4:
    // 0x322cc4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x322cc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_322cc8:
    // 0x322cc8: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x322cc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_322ccc:
    // 0x322ccc: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x322cccu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_322cd0:
    // 0x322cd0: 0x1220004b  beqz        $s1, . + 4 + (0x4B << 2)
label_322cd4:
    if (ctx->pc == 0x322CD4u) {
        ctx->pc = 0x322CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322CD0u;
        // 0x322cd4: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x322CD8u;
        goto label_322cd8;
    }
    ctx->pc = 0x322CD0u;
    {
        const bool branch_taken_0x322cd0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x322CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322CD0u;
        // 0x322cd4: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322cd0) {
            ctx->pc = 0x322E00u;
            goto label_322e00;
        }
    }
    ctx->pc = 0x322CD8u;
label_322cd8:
    // 0x322cd8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x322cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_322cdc:
    // 0x322cdc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_322ce0:
    if (ctx->pc == 0x322CE0u) {
        ctx->pc = 0x322CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322CDCu;
        // 0x322ce0: 0x26330018  addiu       $s3, $s1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x322CE4u;
        goto label_322ce4;
    }
    ctx->pc = 0x322CDCu;
    {
        const bool branch_taken_0x322cdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x322CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322CDCu;
        // 0x322ce0: 0x26330018  addiu       $s3, $s1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322cdc) {
            ctx->pc = 0x322CFCu;
            goto label_322cfc;
        }
    }
    ctx->pc = 0x322CE4u;
label_322ce4:
    // 0x322ce4: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x322ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_322ce8:
    // 0x322ce8: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_322cec:
    if (ctx->pc == 0x322CECu) {
        ctx->pc = 0x322CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322CE8u;
        // 0x322cec: 0xae820048  sw          $v0, 0x48($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x322CF0u;
        goto label_322cf0;
    }
    ctx->pc = 0x322CE8u;
    {
        const bool branch_taken_0x322ce8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x322ce8) {
            ctx->pc = 0x322CECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x322CE8u;
            // 0x322cec: 0xae820048  sw          $v0, 0x48($s4) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 20), 72), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x322CF0u;
            goto label_322cf0;
        }
    }
    ctx->pc = 0x322CF0u;
label_322cf0:
    // 0x322cf0: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x322cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_322cf4:
    // 0x322cf4: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x322cf4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_322cf8:
    // 0x322cf8: 0x26330018  addiu       $s3, $s1, 0x18
    ctx->pc = 0x322cf8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
label_322cfc:
    // 0x322cfc: 0x285b021  addu        $s6, $s4, $a1
    ctx->pc = 0x322cfcu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
label_322d00:
    // 0x322d00: 0x260902d  daddu       $s2, $s3, $zero
    ctx->pc = 0x322d00u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_322d04:
    // 0x322d04: 0x26350040  addiu       $s5, $s1, 0x40
    ctx->pc = 0x322d04u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
label_322d08:
    // 0x322d08: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x322d08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_322d0c:
    // 0x322d0c: 0x0  nop
    ctx->pc = 0x322d0cu;
    // NOP
label_322d10:
    // 0x322d10: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x322d10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_322d14:
    // 0x322d14: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_322d18:
    if (ctx->pc == 0x322D18u) {
        ctx->pc = 0x322D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322D14u;
        // 0x322d18: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x322D1Cu;
        goto label_322d1c;
    }
    ctx->pc = 0x322D14u;
    {
        const bool branch_taken_0x322d14 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x322d14) {
            ctx->pc = 0x322D18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x322D14u;
            // 0x322d18: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x322D28u;
            goto label_322d28;
        }
    }
    ctx->pc = 0x322D1Cu;
label_322d1c:
    // 0x322d1c: 0xc0e3414  jal         func_38D050
label_322d20:
    if (ctx->pc == 0x322D20u) {
        ctx->pc = 0x322D24u;
        goto label_322d24;
    }
    ctx->pc = 0x322D1Cu;
    SET_GPR_U32(ctx, 31, 0x322D24u);
    ctx->pc = 0x38D050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38D050u, 0x322D1Cu, 0x322D24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322D24u;
label_322d24:
    // 0x322d24: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x322d24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_322d28:
    // 0x322d28: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_322d2c:
    if (ctx->pc == 0x322D2Cu) {
        ctx->pc = 0x322D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322D28u;
        // 0x322d2c: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x322D30u;
        goto label_322d30;
    }
    ctx->pc = 0x322D28u;
    {
        const bool branch_taken_0x322d28 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x322d28) {
            ctx->pc = 0x322D2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x322D28u;
            // 0x322d2c: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x322D3Cu;
            goto label_322d3c;
        }
    }
    ctx->pc = 0x322D30u;
label_322d30:
    // 0x322d30: 0xc0e3414  jal         func_38D050
label_322d34:
    if (ctx->pc == 0x322D34u) {
        ctx->pc = 0x322D38u;
        goto label_322d38;
    }
    ctx->pc = 0x322D30u;
    SET_GPR_U32(ctx, 31, 0x322D38u);
    ctx->pc = 0x38D050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38D050u, 0x322D30u, 0x322D38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322D38u;
label_322d38:
    // 0x322d38: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x322d38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_322d3c:
    // 0x322d3c: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_322d40:
    if (ctx->pc == 0x322D40u) {
        ctx->pc = 0x322D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322D3Cu;
        // 0x322d40: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x322D44u;
        goto label_322d44;
    }
    ctx->pc = 0x322D3Cu;
    {
        const bool branch_taken_0x322d3c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x322d3c) {
            ctx->pc = 0x322D40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x322D3Cu;
            // 0x322d40: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x322D50u;
            goto label_322d50;
        }
    }
    ctx->pc = 0x322D44u;
label_322d44:
    // 0x322d44: 0xc0e3414  jal         func_38D050
label_322d48:
    if (ctx->pc == 0x322D48u) {
        ctx->pc = 0x322D4Cu;
        goto label_322d4c;
    }
    ctx->pc = 0x322D44u;
    SET_GPR_U32(ctx, 31, 0x322D4Cu);
    ctx->pc = 0x38D050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38D050u, 0x322D44u, 0x322D4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322D4Cu;
label_322d4c:
    // 0x322d4c: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x322d4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_322d50:
    // 0x322d50: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_322d54:
    if (ctx->pc == 0x322D54u) {
        ctx->pc = 0x322D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322D50u;
        // 0x322d54: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x322D58u;
        goto label_322d58;
    }
    ctx->pc = 0x322D50u;
    {
        const bool branch_taken_0x322d50 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x322d50) {
            ctx->pc = 0x322D54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x322D50u;
            // 0x322d54: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x322D64u;
            goto label_322d64;
        }
    }
    ctx->pc = 0x322D58u;
label_322d58:
    // 0x322d58: 0xc0e3414  jal         func_38D050
label_322d5c:
    if (ctx->pc == 0x322D5Cu) {
        ctx->pc = 0x322D60u;
        goto label_322d60;
    }
    ctx->pc = 0x322D58u;
    SET_GPR_U32(ctx, 31, 0x322D60u);
    ctx->pc = 0x38D050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38D050u, 0x322D58u, 0x322D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322D60u;
label_322d60:
    // 0x322d60: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x322d60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_322d64:
    // 0x322d64: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_322d68:
    if (ctx->pc == 0x322D68u) {
        ctx->pc = 0x322D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322D64u;
        // 0x322d68: 0x26520014  addiu       $s2, $s2, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x322D6Cu;
        goto label_322d6c;
    }
    ctx->pc = 0x322D64u;
    {
        const bool branch_taken_0x322d64 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x322D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322D64u;
        // 0x322d68: 0x26520014  addiu       $s2, $s2, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322d64) {
            ctx->pc = 0x322D74u;
            goto label_322d74;
        }
    }
    ctx->pc = 0x322D6Cu;
label_322d6c:
    // 0x322d6c: 0xc0e3414  jal         func_38D050
label_322d70:
    if (ctx->pc == 0x322D70u) {
        ctx->pc = 0x322D74u;
        goto label_322d74;
    }
    ctx->pc = 0x322D6Cu;
    SET_GPR_U32(ctx, 31, 0x322D74u);
    ctx->pc = 0x38D050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38D050u, 0x322D6Cu, 0x322D74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322D74u;
label_322d74:
    // 0x322d74: 0x255102a  slt         $v0, $s2, $s5
    ctx->pc = 0x322d74u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
label_322d78:
    // 0x322d78: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
label_322d7c:
    if (ctx->pc == 0x322D7Cu) {
        ctx->pc = 0x322D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322D78u;
        // 0x322d7c: 0x26100014  addiu       $s0, $s0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x322D80u;
        goto label_322d80;
    }
    ctx->pc = 0x322D78u;
    {
        const bool branch_taken_0x322d78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x322D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322D78u;
        // 0x322d7c: 0x26100014  addiu       $s0, $s0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322d78) {
            ctx->pc = 0x322D10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_322d10;
        }
    }
    ctx->pc = 0x322D80u;
label_322d80:
    // 0x322d80: 0x3c020032  lui         $v0, 0x32
    ctx->pc = 0x322d80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50 << 16));
label_322d84:
    // 0x322d84: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x322d84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_322d88:
    // 0x322d88: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x322d88u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_322d8c:
    // 0x322d8c: 0x24422608  addiu       $v0, $v0, 0x2608
    ctx->pc = 0x322d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9736));
label_322d90:
    // 0x322d90: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x322d90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_322d94:
    // 0x322d94: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x322d94u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
label_322d98:
    // 0x322d98: 0x26620024  addiu       $v0, $s3, 0x24
    ctx->pc = 0x322d98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 36));
label_322d9c:
    // 0x322d9c: 0xe6200010  swc1        $f0, 0x10($s1)
    ctx->pc = 0x322d9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
label_322da0:
    // 0x322da0: 0xae230014  sw          $v1, 0x14($s1)
    ctx->pc = 0x322da0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 3));
label_322da4:
    // 0x322da4: 0xe620000c  swc1        $f0, 0xC($s1)
    ctx->pc = 0x322da4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
label_322da8:
    // 0x322da8: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x322da8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_322dac:
    // 0x322dac: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x322dacu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_322db0:
    // 0x322db0: 0xae600024  sw          $zero, 0x24($s3)
    ctx->pc = 0x322db0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 36), GPR_U32(ctx, 0));
label_322db4:
    // 0x322db4: 0xac40ffdc  sw          $zero, -0x24($v0)
    ctx->pc = 0x322db4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967260), GPR_U32(ctx, 0));
label_322db8:
    // 0x322db8: 0xac40fffc  sw          $zero, -0x4($v0)
    ctx->pc = 0x322db8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967292), GPR_U32(ctx, 0));
label_322dbc:
    // 0x322dbc: 0xac40fff8  sw          $zero, -0x8($v0)
    ctx->pc = 0x322dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967288), GPR_U32(ctx, 0));
label_322dc0:
    // 0x322dc0: 0xac40fff4  sw          $zero, -0xC($v0)
    ctx->pc = 0x322dc0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967284), GPR_U32(ctx, 0));
label_322dc4:
    // 0x322dc4: 0xac40fff0  sw          $zero, -0x10($v0)
    ctx->pc = 0x322dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967280), GPR_U32(ctx, 0));
label_322dc8:
    // 0x322dc8: 0xac40ffec  sw          $zero, -0x14($v0)
    ctx->pc = 0x322dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967276), GPR_U32(ctx, 0));
label_322dcc:
    // 0x322dcc: 0xac40ffe8  sw          $zero, -0x18($v0)
    ctx->pc = 0x322dccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967272), GPR_U32(ctx, 0));
label_322dd0:
    // 0x322dd0: 0xac40ffe4  sw          $zero, -0x1C($v0)
    ctx->pc = 0x322dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967268), GPR_U32(ctx, 0));
label_322dd4:
    // 0x322dd4: 0xac40ffe0  sw          $zero, -0x20($v0)
    ctx->pc = 0x322dd4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967264), GPR_U32(ctx, 0));
label_322dd8:
    // 0x322dd8: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x322dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
label_322ddc:
    // 0x322ddc: 0x2484e880  addiu       $a0, $a0, -0x1780
    ctx->pc = 0x322ddcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961280));
label_322de0:
    // 0x322de0: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x322de0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_322de4:
    // 0x322de4: 0x2463b1a8  addiu       $v1, $v1, -0x4E58
    ctx->pc = 0x322de4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294947240));
label_322de8:
    // 0x322de8: 0x8c82011c  lw          $v0, 0x11C($a0)
    ctx->pc = 0x322de8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 284)));
label_322dec:
    // 0x322dec: 0x8c64000c  lw          $a0, 0xC($v1)
    ctx->pc = 0x322decu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_322df0:
    // 0x322df0: 0x40f809  jalr        $v0
label_322df4:
    if (ctx->pc == 0x322DF4u) {
        ctx->pc = 0x322DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322DF0u;
        // 0x322df4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x322DF8u;
        goto label_322df8;
    }
    ctx->pc = 0x322DF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x322DF8u);
        ctx->pc = 0x322DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322DF0u;
        // 0x322df4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x322DF0u, 0x322DF8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x322DF8u;
label_322df8:
    // 0x322df8: 0xaec00000  sw          $zero, 0x0($s6)
    ctx->pc = 0x322df8u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 0));
label_322dfc:
    // 0x322dfc: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x322dfcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_322e00:
    // 0x322e00: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x322e00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_322e04:
    // 0x322e04: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x322e04u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_322e08:
    // 0x322e08: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x322e08u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_322e0c:
    // 0x322e0c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x322e0cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_322e10:
    // 0x322e10: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x322e10u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_322e14:
    // 0x322e14: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x322e14u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_322e18:
    // 0x322e18: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x322e18u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_322e1c:
    // 0x322e1c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x322e1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_322e20:
    // 0x322e20: 0x3e00008  jr          $ra
label_322e24:
    if (ctx->pc == 0x322E24u) {
        ctx->pc = 0x322E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322E20u;
        // 0x322e24: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x322E28u;
        goto label_fallthrough_0x322e20;
    }
    ctx->pc = 0x322E20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x322E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322E20u;
        // 0x322e24: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x322E20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x322e20:
    ctx->pc = 0x322E28u;
}
