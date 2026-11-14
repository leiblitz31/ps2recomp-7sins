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

// Function: sub_00383C70
// Address: 0x383c70 - 0x383ea0
void sub_00383C70_0x383c70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00383C70_0x383c70");
#endif

    switch (ctx->pc) {
        case 0x383c80u: goto label_383c80;
        case 0x383cc4u: goto label_383cc4;
        case 0x383cd4u: goto label_383cd4;
        case 0x383ce0u: goto label_383ce0;
        case 0x383d00u: goto label_383d00;
        case 0x383d10u: goto label_383d10;
        case 0x383d24u: goto label_383d24;
        case 0x383db4u: goto label_383db4;
        case 0x383dc8u: goto label_383dc8;
        case 0x383dd0u: goto label_383dd0;
        case 0x383df0u: goto label_383df0;
        case 0x383e00u: goto label_383e00;
        case 0x383e24u: goto label_383e24;
        case 0x383e80u: goto label_383e80;
        default: break;
    }

    ctx->pc = 0x383c70u;

    // 0x383c70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x383c70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x383c74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x383c74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x383c78: 0xc0e09a6  jal         func_382698
    ctx->pc = 0x383C78u;
    SET_GPR_U32(ctx, 31, 0x383C80u);
    ctx->pc = 0x383C7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x383C78u;
    // 0x383c7c: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x382698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x382698u, 0x383C78u, 0x383C80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x383C80u;
label_383c80:
    // 0x383c80: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x383c80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x383c84: 0x3e00008  jr          $ra
    ctx->pc = 0x383C84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x383C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383C84u;
        // 0x383c88: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x383C84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x383C8Cu;
    // 0x383c8c: 0x0  nop
    ctx->pc = 0x383c8cu;
    // NOP
    // 0x383c90: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x383c90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x383c94: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x383c94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x383c98: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x383c98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x383c9c: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x383c9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x383ca0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x383ca0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x383ca4: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x383ca4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x383ca8: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x383ca8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x383cac: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x383cacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x383cb0: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x383cb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x383cb4: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x383cb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x383cb8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x383cb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x383cbc: 0xc103468  jal         func_40D1A0
    ctx->pc = 0x383CBCu;
    SET_GPR_U32(ctx, 31, 0x383CC4u);
    ctx->pc = 0x383CC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x383CBCu;
    // 0x383cc0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D1A0u, 0x383CBCu, 0x383CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x383CC4u;
label_383cc4:
    // 0x383cc4: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x383CC4u;
    {
        const bool branch_taken_0x383cc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x383CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383CC4u;
        // 0x383cc8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x383cc4) {
            ctx->pc = 0x383D54u;
            goto label_383d54;
        }
    }
    ctx->pc = 0x383CCCu;
    // 0x383ccc: 0xc0e13f4  jal         func_384FD0
    ctx->pc = 0x383CCCu;
    SET_GPR_U32(ctx, 31, 0x383CD4u);
    ctx->pc = 0x383CD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x383CCCu;
    // 0x383cd0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x384FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x384FD0u, 0x383CCCu, 0x383CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x383CD4u;
label_383cd4:
    // 0x383cd4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x383cd4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x383cd8: 0x54600003  bnel        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x383CD8u;
    {
        const bool branch_taken_0x383cd8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x383cd8) {
            ctx->pc = 0x383CDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x383CD8u;
            // 0x383cdc: 0x8ea20004  lw          $v0, 0x4($s5) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x383CE8u;
            goto label_383ce8;
        }
    }
    ctx->pc = 0x383CE0u;
label_383ce0:
    // 0x383ce0: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x383CE0u;
    {
        const bool branch_taken_0x383ce0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x383CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383CE0u;
        // 0x383ce4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x383ce0) {
            ctx->pc = 0x383D54u;
            goto label_383d54;
        }
    }
    ctx->pc = 0x383CE8u;
label_383ce8:
    // 0x383ce8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x383ce8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x383cec: 0xaea30014  sw          $v1, 0x14($s5)
    ctx->pc = 0x383cecu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 20), GPR_U32(ctx, 3));
    // 0x383cf0: 0x18400017  blez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x383CF0u;
    {
        const bool branch_taken_0x383cf0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x383CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383CF0u;
        // 0x383cf4: 0x8eb30010  lw          $s3, 0x10($s5) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x383cf0) {
            ctx->pc = 0x383D50u;
            goto label_383d50;
        }
    }
    ctx->pc = 0x383CF8u;
    // 0x383cf8: 0x26710004  addiu       $s1, $s3, 0x4
    ctx->pc = 0x383cf8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x383cfc: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x383cfcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_383d00:
    // 0x383d00: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x383d00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x383d04: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x383d04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x383d08: 0xc103454  jal         func_40D150
    ctx->pc = 0x383D08u;
    SET_GPR_U32(ctx, 31, 0x383D10u);
    ctx->pc = 0x383D0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x383D08u;
    // 0x383d0c: 0x2406001c  addiu       $a2, $zero, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D150u, 0x383D08u, 0x383D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x383D10u;
label_383d10:
    // 0x383d10: 0x1040fff3  beqz        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x383D10u;
    {
        const bool branch_taken_0x383d10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x383D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383D10u;
        // 0x383d14: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x383d10) {
            ctx->pc = 0x383CE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_383ce0;
        }
    }
    ctx->pc = 0x383D18u;
    // 0x383d18: 0x27a50004  addiu       $a1, $sp, 0x4
    ctx->pc = 0x383d18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x383d1c: 0xc103468  jal         func_40D1A0
    ctx->pc = 0x383D1Cu;
    SET_GPR_U32(ctx, 31, 0x383D24u);
    ctx->pc = 0x383D20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x383D1Cu;
    // 0x383d20: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D1A0u, 0x383D1Cu, 0x383D24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x383D24u;
label_383d24:
    // 0x383d24: 0x1040ffee  beqz        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x383D24u;
    {
        const bool branch_taken_0x383d24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x383D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383D24u;
        // 0x383d28: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x383d24) {
            ctx->pc = 0x383CE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_383ce0;
        }
    }
    ctx->pc = 0x383D2Cu;
    // 0x383d2c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x383d2cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x383d30: 0x8ea30004  lw          $v1, 0x4($s5)
    ctx->pc = 0x383d30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x383d34: 0x26310020  addiu       $s1, $s1, 0x20
    ctx->pc = 0x383d34u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x383d38: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x383d38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x383d3c: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x383d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x383d40: 0x243182a  slt         $v1, $s2, $v1
    ctx->pc = 0x383d40u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x383d44: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x383d44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x383d48: 0x1460ffed  bnez        $v1, . + 4 + (-0x13 << 2)
    ctx->pc = 0x383D48u;
    {
        const bool branch_taken_0x383d48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x383D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383D48u;
        // 0x383d4c: 0x26100020  addiu       $s0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x383d48) {
            ctx->pc = 0x383D00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_383d00;
        }
    }
    ctx->pc = 0x383D50u;
label_383d50:
    // 0x383d50: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x383d50u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_383d54:
    // 0x383d54: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x383d54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x383d58: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x383d58u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x383d5c: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x383d5cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x383d60: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x383d60u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x383d64: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x383d64u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x383d68: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x383d68u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x383d6c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x383d6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x383d70: 0x3e00008  jr          $ra
    ctx->pc = 0x383D70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x383D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383D70u;
        // 0x383d74: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x383D70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x383D78u;
    // 0x383d78: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x383d78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x383d7c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x383d7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x383d80: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x383d80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x383d84: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x383d84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x383d88: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x383d88u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x383d8c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x383d8cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x383d90: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x383d90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x383d94: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x383d94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x383d98: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x383d98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x383d9c: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x383d9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x383da0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x383da0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x383da4: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x383da4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x383da8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x383da8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x383dac: 0xc103440  jal         func_40D100
    ctx->pc = 0x383DACu;
    SET_GPR_U32(ctx, 31, 0x383DB4u);
    ctx->pc = 0x383DB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x383DACu;
    // 0x383db0: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D100u, 0x383DACu, 0x383DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x383DB4u;
label_383db4:
    // 0x383db4: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x383DB4u;
    {
        const bool branch_taken_0x383db4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x383DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383DB4u;
        // 0x383db8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x383db4) {
            ctx->pc = 0x383E44u;
            goto label_383e44;
        }
    }
    ctx->pc = 0x383DBCu;
    // 0x383dbc: 0x8ea40014  lw          $a0, 0x14($s5)
    ctx->pc = 0x383dbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
    // 0x383dc0: 0xc0e1416  jal         func_385058
    ctx->pc = 0x383DC0u;
    SET_GPR_U32(ctx, 31, 0x383DC8u);
    ctx->pc = 0x383DC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x383DC0u;
    // 0x383dc4: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x385058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x385058u, 0x383DC0u, 0x383DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x383DC8u;
label_383dc8:
    // 0x383dc8: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x383DC8u;
    {
        const bool branch_taken_0x383dc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x383dc8) {
            ctx->pc = 0x383DCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x383DC8u;
            // 0x383dcc: 0x8ea20004  lw          $v0, 0x4($s5) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x383DD8u;
            goto label_383dd8;
        }
    }
    ctx->pc = 0x383DD0u;
label_383dd0:
    // 0x383dd0: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x383DD0u;
    {
        const bool branch_taken_0x383dd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x383DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383DD0u;
        // 0x383dd4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x383dd0) {
            ctx->pc = 0x383E44u;
            goto label_383e44;
        }
    }
    ctx->pc = 0x383DD8u;
label_383dd8:
    // 0x383dd8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x383dd8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x383ddc: 0x18400018  blez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x383DDCu;
    {
        const bool branch_taken_0x383ddc = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x383DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383DDCu;
        // 0x383de0: 0x8eb30010  lw          $s3, 0x10($s5) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x383ddc) {
            ctx->pc = 0x383E40u;
            goto label_383e40;
        }
    }
    ctx->pc = 0x383DE4u;
    // 0x383de4: 0x26710004  addiu       $s1, $s3, 0x4
    ctx->pc = 0x383de4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x383de8: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x383de8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x383dec: 0x0  nop
    ctx->pc = 0x383decu;
    // NOP
label_383df0:
    // 0x383df0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x383df0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x383df4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x383df4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x383df8: 0xc10341a  jal         func_40D068
    ctx->pc = 0x383DF8u;
    SET_GPR_U32(ctx, 31, 0x383E00u);
    ctx->pc = 0x383DFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x383DF8u;
    // 0x383dfc: 0x2406001c  addiu       $a2, $zero, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D068u, 0x383DF8u, 0x383E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x383E00u;
label_383e00:
    // 0x383e00: 0x1040fff3  beqz        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x383E00u;
    {
        const bool branch_taken_0x383e00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x383E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383E00u;
        // 0x383e04: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x383e00) {
            ctx->pc = 0x383DD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_383dd0;
        }
    }
    ctx->pc = 0x383E08u;
    // 0x383e08: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x383e08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x383e0c: 0x27a50004  addiu       $a1, $sp, 0x4
    ctx->pc = 0x383e0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x383e10: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x383e10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x383e14: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x383e14u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x383e18: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x383e18u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
    // 0x383e1c: 0xc103440  jal         func_40D100
    ctx->pc = 0x383E1Cu;
    SET_GPR_U32(ctx, 31, 0x383E24u);
    ctx->pc = 0x383E20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x383E1Cu;
    // 0x383e20: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D100u, 0x383E1Cu, 0x383E24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x383E24u;
label_383e24:
    // 0x383e24: 0x1040ffea  beqz        $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x383E24u;
    {
        const bool branch_taken_0x383e24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x383E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383E24u;
        // 0x383e28: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x383e24) {
            ctx->pc = 0x383DD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_383dd0;
        }
    }
    ctx->pc = 0x383E2Cu;
    // 0x383e2c: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x383e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x383e30: 0x26310020  addiu       $s1, $s1, 0x20
    ctx->pc = 0x383e30u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x383e34: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x383e34u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x383e38: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x383E38u;
    {
        const bool branch_taken_0x383e38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x383E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383E38u;
        // 0x383e3c: 0x26100020  addiu       $s0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x383e38) {
            ctx->pc = 0x383DF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_383df0;
        }
    }
    ctx->pc = 0x383E40u;
label_383e40:
    // 0x383e40: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x383e40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_383e44:
    // 0x383e44: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x383e44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x383e48: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x383e48u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x383e4c: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x383e4cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x383e50: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x383e50u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x383e54: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x383e54u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x383e58: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x383e58u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x383e5c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x383e5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x383e60: 0x3e00008  jr          $ra
    ctx->pc = 0x383E60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x383E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383E60u;
        // 0x383e64: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x383E60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x383E68u;
    // 0x383e68: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x383e68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x383e6c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x383e6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x383e70: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x383e70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x383e74: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x383e74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x383e78: 0xc0e142e  jal         func_3850B8
    ctx->pc = 0x383E78u;
    SET_GPR_U32(ctx, 31, 0x383E80u);
    ctx->pc = 0x383E7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x383E78u;
    // 0x383e7c: 0x8e040014  lw          $a0, 0x14($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3850B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3850B8u, 0x383E78u, 0x383E80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x383E80u;
label_383e80:
    // 0x383e80: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x383e80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x383e84: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x383e84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x383e88: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x383e88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x383e8c: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x383e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x383e90: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x383e90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x383e94: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x383e94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x383e98: 0x3e00008  jr          $ra
    ctx->pc = 0x383E98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x383E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383E98u;
        // 0x383e9c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x383E98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x383EA0u;
}
