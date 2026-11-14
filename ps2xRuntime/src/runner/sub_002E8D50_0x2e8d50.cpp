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

// Function: sub_002E8D50
// Address: 0x2e8d50 - 0x2e8f50
void sub_002E8D50_0x2e8d50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E8D50_0x2e8d50");
#endif

    switch (ctx->pc) {
        case 0x2e8d7cu: goto label_2e8d7c;
        case 0x2e8d84u: goto label_2e8d84;
        case 0x2e8d98u: goto label_2e8d98;
        case 0x2e8da4u: goto label_2e8da4;
        case 0x2e8db0u: goto label_2e8db0;
        case 0x2e8dd4u: goto label_2e8dd4;
        case 0x2e8de0u: goto label_2e8de0;
        case 0x2e8df4u: goto label_2e8df4;
        case 0x2e8dfcu: goto label_2e8dfc;
        case 0x2e8e04u: goto label_2e8e04;
        case 0x2e8e0cu: goto label_2e8e0c;
        case 0x2e8e44u: goto label_2e8e44;
        case 0x2e8e84u: goto label_2e8e84;
        case 0x2e8e8cu: goto label_2e8e8c;
        case 0x2e8ec8u: goto label_2e8ec8;
        case 0x2e8f20u: goto label_2e8f20;
        default: break;
    }

    ctx->pc = 0x2e8d50u;

    // 0x2e8d50: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2e8d50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x2e8d54: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2e8d54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2e8d58: 0x7fbe0040  sq          $fp, 0x40($sp)
    ctx->pc = 0x2e8d58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 30));
    // 0x2e8d5c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2e8d5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2e8d60: 0x3a0f021  addu        $fp, $sp, $zero
    ctx->pc = 0x2e8d60u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 0)));
    // 0x2e8d64: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2e8d64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2e8d68: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2e8d68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2e8d6c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e8d6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2e8d70: 0x8c900014  lw          $s0, 0x14($a0)
    ctx->pc = 0x2e8d70u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x2e8d74: 0xc0ba194  jal         func_2E8650
    ctx->pc = 0x2E8D74u;
    SET_GPR_U32(ctx, 31, 0x2E8D7Cu);
    ctx->pc = 0x2E8D78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8D74u;
    // 0x2e8d78: 0xafdd0074  sw          $sp, 0x74($fp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 30), 116), GPR_U32(ctx, 29));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E8650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8650u, 0x2E8D74u, 0x2E8D7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8D7Cu;
label_2e8d7c:
    // 0x2e8d7c: 0xc0ba1a0  jal         func_2E8680
    ctx->pc = 0x2E8D7Cu;
    SET_GPR_U32(ctx, 31, 0x2E8D84u);
    ctx->pc = 0x2E8680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8680u, 0x2E8D7Cu, 0x2E8D84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8D84u;
label_2e8d84:
    // 0x2e8d84: 0x10000068  b           . + 4 + (0x68 << 2)
    ctx->pc = 0x2E8D84u;
    {
        const bool branch_taken_0x2e8d84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8D84u;
        // 0x2e8d88: 0x3c0e821  addu        $sp, $fp, $zero (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8d84) {
            ctx->pc = 0x2E8F28u;
            goto label_2e8f28;
        }
    }
    ctx->pc = 0x2E8D8Cu;
    // 0x2e8d8c: 0x26040001  addiu       $a0, $s0, 0x1
    ctx->pc = 0x2e8d8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2e8d90: 0xc0ba1c8  jal         func_2E8720
    ctx->pc = 0x2E8D90u;
    SET_GPR_U32(ctx, 31, 0x2E8D98u);
    ctx->pc = 0x2E8D94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8D90u;
    // 0x2e8d94: 0x27c50080  addiu       $a1, $fp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E8720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8720u, 0x2E8D90u, 0x2E8D98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8D98u;
label_2e8d98:
    // 0x2e8d98: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2e8d98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8d9c: 0xc0ba1c8  jal         func_2E8720
    ctx->pc = 0x2E8D9Cu;
    SET_GPR_U32(ctx, 31, 0x2E8DA4u);
    ctx->pc = 0x2E8DA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8D9Cu;
    // 0x2e8da0: 0x27c50084  addiu       $a1, $fp, 0x84 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 132));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E8720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8720u, 0x2E8D9Cu, 0x2E8DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8DA4u;
label_2e8da4:
    // 0x2e8da4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2e8da4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8da8: 0xc0ba1f0  jal         func_2E87C0
    ctx->pc = 0x2E8DA8u;
    SET_GPR_U32(ctx, 31, 0x2E8DB0u);
    ctx->pc = 0x2E8DACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8DA8u;
    // 0x2e8dac: 0x27c50088  addiu       $a1, $fp, 0x88 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 136));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E87C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E87C0u, 0x2E8DA8u, 0x2E8DB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8DB0u;
label_2e8db0:
    // 0x2e8db0: 0x27d0008c  addiu       $s0, $fp, 0x8C
    ctx->pc = 0x2e8db0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 30), 140));
    // 0x2e8db4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2e8db4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8db8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2e8db8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2e8dbc: 0x8fc20080  lw          $v0, 0x80($fp)
    ctx->pc = 0x2e8dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 128)));
    // 0x2e8dc0: 0x8fd30064  lw          $s3, 0x64($fp)
    ctx->pc = 0x2e8dc0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 100)));
    // 0x2e8dc4: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2e8dc4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2e8dc8: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2E8DC8u;
    {
        const bool branch_taken_0x2e8dc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E8DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8DC8u;
        // 0x2e8dcc: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8dc8) {
            ctx->pc = 0x2E8E0Cu;
            goto label_2e8e0c;
        }
    }
    ctx->pc = 0x2E8DD0u;
    // 0x2e8dd0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2e8dd0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e8dd4:
    // 0x2e8dd4: 0x14400028  bnez        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x2E8DD4u;
    {
        const bool branch_taken_0x2e8dd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E8DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8DD4u;
        // 0x2e8dd8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8dd4) {
            ctx->pc = 0x2E8E78u;
            goto label_2e8e78;
        }
    }
    ctx->pc = 0x2E8DDCu;
    // 0x2e8ddc: 0x8fc20080  lw          $v0, 0x80($fp)
    ctx->pc = 0x2e8ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 128)));
label_2e8de0:
    // 0x2e8de0: 0x8e110000  lw          $s1, 0x0($s0)
    ctx->pc = 0x2e8de0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2e8de4: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2e8de4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2e8de8: 0x14400028  bnez        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x2E8DE8u;
    {
        const bool branch_taken_0x2e8de8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E8DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8DE8u;
        // 0x2e8dec: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8de8) {
            ctx->pc = 0x2E8E8Cu;
            goto label_2e8e8c;
        }
    }
    ctx->pc = 0x2E8DF0u;
    // 0x2e8df0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2e8df0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e8df4:
    // 0x2e8df4: 0x14400041  bnez        $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x2E8DF4u;
    {
        const bool branch_taken_0x2e8df4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e8df4) {
            ctx->pc = 0x2E8EFCu;
            goto label_2e8efc;
        }
    }
    ctx->pc = 0x2E8DFCu;
label_2e8dfc:
    // 0x2e8dfc: 0xc0ba218  jal         func_2E8860
    ctx->pc = 0x2E8DFCu;
    SET_GPR_U32(ctx, 31, 0x2E8E04u);
    ctx->pc = 0x2E8E00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8DFCu;
    // 0x2e8e00: 0x27c40060  addiu       $a0, $fp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E8860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8860u, 0x2E8DFCu, 0x2E8E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8E04u;
label_2e8e04:
    // 0x2e8e04: 0x1000ffdd  b           . + 4 + (-0x23 << 2)
    ctx->pc = 0x2E8E04u;
    {
        const bool branch_taken_0x2e8e04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e8e04) {
            ctx->pc = 0x2E8D7Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e8d7c;
        }
    }
    ctx->pc = 0x2E8E0Cu;
label_2e8e0c:
    // 0x2e8e0c: 0x92470001  lbu         $a3, 0x1($s2)
    ctx->pc = 0x2e8e0cu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x2e8e10: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2e8e10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8e14: 0x92430002  lbu         $v1, 0x2($s2)
    ctx->pc = 0x2e8e14u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x2e8e18: 0x27c60098  addiu       $a2, $fp, 0x98
    ctx->pc = 0x2e8e18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 30), 152));
    // 0x2e8e1c: 0x92420003  lbu         $v0, 0x3($s2)
    ctx->pc = 0x2e8e1cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
    // 0x2e8e20: 0x92450000  lbu         $a1, 0x0($s2)
    ctx->pc = 0x2e8e20u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2e8e24: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x2e8e24u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x2e8e28: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x2e8e28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x2e8e2c: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x2e8e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x2e8e30: 0xa72825  or          $a1, $a1, $a3
    ctx->pc = 0x2e8e30u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 7));
    // 0x2e8e34: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x2e8e34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x2e8e38: 0x432825  or          $a1, $v0, $v1
    ctx->pc = 0x2e8e38u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2e8e3c: 0xc0ba0f4  jal         func_2E83D0
    ctx->pc = 0x2E8E3Cu;
    SET_GPR_U32(ctx, 31, 0x2E8E44u);
    ctx->pc = 0x2E8E40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8E3Cu;
    // 0x2e8e40: 0xafc500a8  sw          $a1, 0xA8($fp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 30), 168), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E83D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E83D0u, 0x2E8E3Cu, 0x2E8E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8E44u;
label_2e8e44:
    // 0x2e8e44: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2e8e44u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2e8e48: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2e8e48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2e8e4c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E8E4Cu;
    {
        const bool branch_taken_0x2e8e4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e8e4c) {
            ctx->pc = 0x2E8E5Cu;
            goto label_2e8e5c;
        }
    }
    ctx->pc = 0x2E8E54u;
    // 0x2e8e54: 0x1000ffdf  b           . + 4 + (-0x21 << 2)
    ctx->pc = 0x2E8E54u;
    {
        const bool branch_taken_0x2e8e54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8E54u;
        // 0x2e8e58: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8e54) {
            ctx->pc = 0x2E8DD4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e8dd4;
        }
    }
    ctx->pc = 0x2E8E5Cu;
label_2e8e5c:
    // 0x2e8e5c: 0x8fc20080  lw          $v0, 0x80($fp)
    ctx->pc = 0x2e8e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 128)));
    // 0x2e8e60: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2e8e60u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2e8e64: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x2e8e64u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2e8e68: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x2E8E68u;
    {
        const bool branch_taken_0x2e8e68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E8E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8E68u;
        // 0x2e8e6c: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8e68) {
            ctx->pc = 0x2E8E0Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e8e0c;
        }
    }
    ctx->pc = 0x2E8E70u;
    // 0x2e8e70: 0x1000ffd8  b           . + 4 + (-0x28 << 2)
    ctx->pc = 0x2E8E70u;
    {
        const bool branch_taken_0x2e8e70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8E70u;
        // 0x2e8e74: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8e70) {
            ctx->pc = 0x2E8DD4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e8dd4;
        }
    }
    ctx->pc = 0x2E8E78u;
label_2e8e78:
    // 0x2e8e78: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e8e78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8e7c: 0xc0ba7bc  jal         func_2E9EF0
    ctx->pc = 0x2E8E7Cu;
    SET_GPR_U32(ctx, 31, 0x2E8E84u);
    ctx->pc = 0x2E8E80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8E7Cu;
    // 0x2e8e80: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E9EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E9EF0u, 0x2E8E7Cu, 0x2E8E84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8E84u;
label_2e8e84:
    // 0x2e8e84: 0x1000ffd6  b           . + 4 + (-0x2A << 2)
    ctx->pc = 0x2E8E84u;
    {
        const bool branch_taken_0x2e8e84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8E84u;
        // 0x2e8e88: 0x8fc20080  lw          $v0, 0x80($fp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8e84) {
            ctx->pc = 0x2E8DE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e8de0;
        }
    }
    ctx->pc = 0x2E8E8Cu;
label_2e8e8c:
    // 0x2e8e8c: 0x92270001  lbu         $a3, 0x1($s1)
    ctx->pc = 0x2e8e8cu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x2e8e90: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x2e8e90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x2e8e94: 0x92230002  lbu         $v1, 0x2($s1)
    ctx->pc = 0x2e8e94u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x2e8e98: 0x24848e30  addiu       $a0, $a0, -0x71D0
    ctx->pc = 0x2e8e98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938160));
    // 0x2e8e9c: 0x92220003  lbu         $v0, 0x3($s1)
    ctx->pc = 0x2e8e9cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
    // 0x2e8ea0: 0x27c60090  addiu       $a2, $fp, 0x90
    ctx->pc = 0x2e8ea0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 30), 144));
    // 0x2e8ea4: 0x92250000  lbu         $a1, 0x0($s1)
    ctx->pc = 0x2e8ea4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2e8ea8: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x2e8ea8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x2e8eac: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x2e8eacu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x2e8eb0: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x2e8eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x2e8eb4: 0xa72825  or          $a1, $a1, $a3
    ctx->pc = 0x2e8eb4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 7));
    // 0x2e8eb8: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x2e8eb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x2e8ebc: 0x432825  or          $a1, $v0, $v1
    ctx->pc = 0x2e8ebcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2e8ec0: 0xc0ba0f4  jal         func_2E83D0
    ctx->pc = 0x2E8EC0u;
    SET_GPR_U32(ctx, 31, 0x2E8EC8u);
    ctx->pc = 0x2E8EC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8EC0u;
    // 0x2e8ec4: 0xafc500a4  sw          $a1, 0xA4($fp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 30), 164), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E83D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E83D0u, 0x2E8EC0u, 0x2E8EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8EC8u;
label_2e8ec8:
    // 0x2e8ec8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2e8ec8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2e8ecc: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2e8eccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2e8ed0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E8ED0u;
    {
        const bool branch_taken_0x2e8ed0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e8ed0) {
            ctx->pc = 0x2E8EE0u;
            goto label_2e8ee0;
        }
    }
    ctx->pc = 0x2E8ED8u;
    // 0x2e8ed8: 0x1000ffc6  b           . + 4 + (-0x3A << 2)
    ctx->pc = 0x2E8ED8u;
    {
        const bool branch_taken_0x2e8ed8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8ED8u;
        // 0x2e8edc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8ed8) {
            ctx->pc = 0x2E8DF4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e8df4;
        }
    }
    ctx->pc = 0x2E8EE0u;
label_2e8ee0:
    // 0x2e8ee0: 0x8fc20080  lw          $v0, 0x80($fp)
    ctx->pc = 0x2e8ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 128)));
    // 0x2e8ee4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2e8ee4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2e8ee8: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x2e8ee8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2e8eec: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x2E8EECu;
    {
        const bool branch_taken_0x2e8eec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E8EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8EECu;
        // 0x2e8ef0: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8eec) {
            ctx->pc = 0x2E8E8Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e8e8c;
        }
    }
    ctx->pc = 0x2E8EF4u;
    // 0x2e8ef4: 0x1000ffbf  b           . + 4 + (-0x41 << 2)
    ctx->pc = 0x2E8EF4u;
    {
        const bool branch_taken_0x2e8ef4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8EF4u;
        // 0x2e8ef8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8ef4) {
            ctx->pc = 0x2E8DF4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e8df4;
        }
    }
    ctx->pc = 0x2E8EFCu;
label_2e8efc:
    // 0x2e8efc: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2e8efcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x2e8f00: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x2e8f00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x2e8f04: 0x24426a90  addiu       $v0, $v0, 0x6A90
    ctx->pc = 0x2e8f04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27280));
    // 0x2e8f08: 0x3c06002f  lui         $a2, 0x2F
    ctx->pc = 0x2e8f08u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)47 << 16));
    // 0x2e8f0c: 0x24848e50  addiu       $a0, $a0, -0x71B0
    ctx->pc = 0x2e8f0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938192));
    // 0x2e8f10: 0xafc200ac  sw          $v0, 0xAC($fp)
    ctx->pc = 0x2e8f10u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 172), GPR_U32(ctx, 2));
    // 0x2e8f14: 0x27c500ac  addiu       $a1, $fp, 0xAC
    ctx->pc = 0x2e8f14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 172));
    // 0x2e8f18: 0xc0ba7bc  jal         func_2E9EF0
    ctx->pc = 0x2E8F18u;
    SET_GPR_U32(ctx, 31, 0x2E8F20u);
    ctx->pc = 0x2E8F1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8F18u;
    // 0x2e8f1c: 0x24c68f50  addiu       $a2, $a2, -0x70B0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294938448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E9EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E9EF0u, 0x2E8F18u, 0x2E8F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8F20u;
label_2e8f20:
    // 0x2e8f20: 0x1000ffb6  b           . + 4 + (-0x4A << 2)
    ctx->pc = 0x2E8F20u;
    {
        const bool branch_taken_0x2e8f20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e8f20) {
            ctx->pc = 0x2E8DFCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e8dfc;
        }
    }
    ctx->pc = 0x2E8F28u;
label_2e8f28:
    // 0x2e8f28: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2e8f28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2e8f2c: 0x7bbe0040  lq          $fp, 0x40($sp)
    ctx->pc = 0x2e8f2cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e8f30: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2e8f30u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e8f34: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2e8f34u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e8f38: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2e8f38u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e8f3c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e8f3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e8f40: 0x3e00008  jr          $ra
    ctx->pc = 0x2E8F40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E8F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8F40u;
        // 0x2e8f44: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E8F40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E8F48u;
    // 0x2e8f48: 0x0  nop
    ctx->pc = 0x2e8f48u;
    // NOP
    // 0x2e8f4c: 0x0  nop
    ctx->pc = 0x2e8f4cu;
    // NOP
    ctx->pc = 0x2e8f50u;
}
