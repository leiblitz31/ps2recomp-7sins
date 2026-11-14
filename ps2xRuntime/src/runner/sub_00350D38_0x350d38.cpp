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

// Function: sub_00350D38
// Address: 0x350d38 - 0x350ef8
void sub_00350D38_0x350d38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00350D38_0x350d38");
#endif

    switch (ctx->pc) {
        case 0x350db0u: goto label_350db0;
        case 0x350df4u: goto label_350df4;
        case 0x350e0cu: goto label_350e0c;
        case 0x350e24u: goto label_350e24;
        case 0x350e30u: goto label_350e30;
        case 0x350e40u: goto label_350e40;
        case 0x350e50u: goto label_350e50;
        case 0x350e60u: goto label_350e60;
        case 0x350e74u: goto label_350e74;
        case 0x350e84u: goto label_350e84;
        case 0x350eb8u: goto label_350eb8;
        default: break;
    }

    ctx->pc = 0x350d38u;

    // 0x350d38: 0x8f82a858  lw          $v0, -0x57A8($gp)
    ctx->pc = 0x350d38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944856)));
    // 0x350d3c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x350d3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x350d40: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x350d40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x350d44: 0x3e00008  jr          $ra
    ctx->pc = 0x350D44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x350D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350D44u;
        // 0x350d48: 0x244200a0  addiu       $v0, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x350D44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x350D4Cu;
    // 0x350d4c: 0x0  nop
    ctx->pc = 0x350d4cu;
    // NOP
    // 0x350d50: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x350d50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x350d54: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x350d54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x350d58: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x350d58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x350d5c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x350d5cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x350d60: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x350d60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x350d64: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x350d64u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x350d68: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x350d68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x350d6c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x350d6cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x350d70: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x350d70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x350d74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x350d74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x350d78: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x350d78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x350d7c: 0x8eb10018  lw          $s1, 0x18($s5)
    ctx->pc = 0x350d7cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 24)));
    // 0x350d80: 0x8e250020  lw          $a1, 0x20($s1)
    ctx->pc = 0x350d80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x350d84: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x350d84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x350d88: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x350d88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x350d8c: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x350d8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x350d90: 0x18400002  blez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x350D90u;
    {
        const bool branch_taken_0x350d90 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x350D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350D90u;
        // 0x350d94: 0xae640008  sw          $a0, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x350d90) {
            ctx->pc = 0x350D9Cu;
            goto label_350d9c;
        }
    }
    ctx->pc = 0x350D98u;
    // 0x350d98: 0xacb30000  sw          $s3, 0x0($a1)
    ctx->pc = 0x350d98u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 19));
label_350d9c:
    // 0x350d9c: 0x8e320010  lw          $s2, 0x10($s1)
    ctx->pc = 0x350d9cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x350da0: 0x1240003a  beqz        $s2, . + 4 + (0x3A << 2)
    ctx->pc = 0x350DA0u;
    {
        const bool branch_taken_0x350da0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x350DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350DA0u;
        // 0x350da4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x350da0) {
            ctx->pc = 0x350E8Cu;
            goto label_350e8c;
        }
    }
    ctx->pc = 0x350DA8u;
    // 0x350da8: 0xc0e33ee  jal         func_38CFB8
    ctx->pc = 0x350DA8u;
    SET_GPR_U32(ctx, 31, 0x350DB0u);
    ctx->pc = 0x350DACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x350DA8u;
    // 0x350dac: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38CFB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CFB8u, 0x350DA8u, 0x350DB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350DB0u;
label_350db0:
    // 0x350db0: 0x50400046  beql        $v0, $zero, . + 4 + (0x46 << 2)
    ctx->pc = 0x350DB0u;
    {
        const bool branch_taken_0x350db0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x350db0) {
            ctx->pc = 0x350DB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x350DB0u;
            // 0x350db4: 0x2a0a02d  daddu       $s4, $s5, $zero (Delay Slot)
            SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x350ECCu;
            goto label_350ecc;
        }
    }
    ctx->pc = 0x350DB8u;
    // 0x350db8: 0x1a400030  blez        $s2, . + 4 + (0x30 << 2)
    ctx->pc = 0x350DB8u;
    {
        const bool branch_taken_0x350db8 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x350DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350DB8u;
        // 0x350dbc: 0x8e30002c  lw          $s0, 0x2C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x350db8) {
            ctx->pc = 0x350E7Cu;
            goto label_350e7c;
        }
    }
    ctx->pc = 0x350DC0u;
    // 0x350dc0: 0x121023  negu        $v0, $s2
    ctx->pc = 0x350dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 18)));
    // 0x350dc4: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x350dc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x350dc8: 0x50600019  beql        $v1, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x350DC8u;
    {
        const bool branch_taken_0x350dc8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x350dc8) {
            ctx->pc = 0x350DCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x350DC8u;
            // 0x350dcc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x350E30u;
            goto label_350e30;
        }
    }
    ctx->pc = 0x350DD0u;
    // 0x350dd0: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x350dd0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x350dd4: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x350DD4u;
    {
        const bool branch_taken_0x350dd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x350DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350DD4u;
        // 0x350dd8: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x350dd4) {
            ctx->pc = 0x350E10u;
            goto label_350e10;
        }
    }
    ctx->pc = 0x350DDCu;
    // 0x350ddc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x350DDCu;
    {
        const bool branch_taken_0x350ddc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x350DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350DDCu;
        // 0x350de0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x350ddc) {
            ctx->pc = 0x350DF8u;
            goto label_350df8;
        }
    }
    ctx->pc = 0x350DE4u;
    // 0x350de4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x350de4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x350de8: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x350de8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x350dec: 0xc0e335c  jal         func_38CD70
    ctx->pc = 0x350DECu;
    SET_GPR_U32(ctx, 31, 0x350DF4u);
    ctx->pc = 0x350DF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x350DECu;
    // 0x350df0: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38CD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CD70u, 0x350DECu, 0x350DF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350DF4u;
label_350df4:
    // 0x350df4: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x350df4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_350df8:
    // 0x350df8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x350df8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x350dfc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x350dfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x350e00: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x350e00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x350e04: 0xc0e335c  jal         func_38CD70
    ctx->pc = 0x350E04u;
    SET_GPR_U32(ctx, 31, 0x350E0Cu);
    ctx->pc = 0x350E08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x350E04u;
    // 0x350e08: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38CD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CD70u, 0x350E04u, 0x350E0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350E0Cu;
label_350e0c:
    // 0x350e0c: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x350e0cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_350e10:
    // 0x350e10: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x350e10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x350e14: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x350e14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x350e18: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x350e18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x350e1c: 0xc0e335c  jal         func_38CD70
    ctx->pc = 0x350E1Cu;
    SET_GPR_U32(ctx, 31, 0x350E24u);
    ctx->pc = 0x350E20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x350E1Cu;
    // 0x350e20: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38CD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CD70u, 0x350E1Cu, 0x350E24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350E24u;
label_350e24:
    // 0x350e24: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x350e24u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x350e28: 0x12400014  beqz        $s2, . + 4 + (0x14 << 2)
    ctx->pc = 0x350E28u;
    {
        const bool branch_taken_0x350e28 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x350E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350E28u;
        // 0x350e2c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x350e28) {
            ctx->pc = 0x350E7Cu;
            goto label_350e7c;
        }
    }
    ctx->pc = 0x350E30u;
label_350e30:
    // 0x350e30: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x350e30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x350e34: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x350e34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x350e38: 0xc0e335c  jal         func_38CD70
    ctx->pc = 0x350E38u;
    SET_GPR_U32(ctx, 31, 0x350E40u);
    ctx->pc = 0x350E3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x350E38u;
    // 0x350e3c: 0x2652fffc  addiu       $s2, $s2, -0x4 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967292));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38CD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CD70u, 0x350E38u, 0x350E40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350E40u;
label_350e40:
    // 0x350e40: 0x26050008  addiu       $a1, $s0, 0x8
    ctx->pc = 0x350e40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x350e44: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x350e44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x350e48: 0xc0e335c  jal         func_38CD70
    ctx->pc = 0x350E48u;
    SET_GPR_U32(ctx, 31, 0x350E50u);
    ctx->pc = 0x350E4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x350E48u;
    // 0x350e4c: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38CD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CD70u, 0x350E48u, 0x350E50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350E50u;
label_350e50:
    // 0x350e50: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x350e50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x350e54: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x350e54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x350e58: 0xc0e335c  jal         func_38CD70
    ctx->pc = 0x350E58u;
    SET_GPR_U32(ctx, 31, 0x350E60u);
    ctx->pc = 0x350E5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x350E58u;
    // 0x350e5c: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38CD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CD70u, 0x350E58u, 0x350E60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350E60u;
label_350e60:
    // 0x350e60: 0x26050018  addiu       $a1, $s0, 0x18
    ctx->pc = 0x350e60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x350e64: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x350e64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x350e68: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x350e68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x350e6c: 0xc0e335c  jal         func_38CD70
    ctx->pc = 0x350E6Cu;
    SET_GPR_U32(ctx, 31, 0x350E74u);
    ctx->pc = 0x350E70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x350E6Cu;
    // 0x350e70: 0x26100020  addiu       $s0, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38CD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CD70u, 0x350E6Cu, 0x350E74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350E74u;
label_350e74:
    // 0x350e74: 0x1640ffee  bnez        $s2, . + 4 + (-0x12 << 2)
    ctx->pc = 0x350E74u;
    {
        const bool branch_taken_0x350e74 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x350E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350E74u;
        // 0x350e78: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x350e74) {
            ctx->pc = 0x350E30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_350e30;
        }
    }
    ctx->pc = 0x350E7Cu;
label_350e7c:
    // 0x350e7c: 0xc0e2d08  jal         func_38B420
    ctx->pc = 0x350E7Cu;
    SET_GPR_U32(ctx, 31, 0x350E84u);
    ctx->pc = 0x350E80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x350E7Cu;
    // 0x350e80: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38B420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38B420u, 0x350E7Cu, 0x350E84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350E84u;
label_350e84:
    // 0x350e84: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x350E84u;
    {
        const bool branch_taken_0x350e84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x350E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350E84u;
        // 0x350e88: 0x2a0a02d  daddu       $s4, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x350e84) {
            ctx->pc = 0x350ECCu;
            goto label_350ecc;
        }
    }
    ctx->pc = 0x350E8Cu;
label_350e8c:
    // 0x350e8c: 0x8e240054  lw          $a0, 0x54($s1)
    ctx->pc = 0x350e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x350e90: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x350E90u;
    {
        const bool branch_taken_0x350e90 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x350E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350E90u;
        // 0x350e94: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x350e90) {
            ctx->pc = 0x350ED0u;
            goto label_350ed0;
        }
    }
    ctx->pc = 0x350E98u;
    // 0x350e98: 0x94820004  lhu         $v0, 0x4($a0)
    ctx->pc = 0x350e98u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x350e9c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x350E9Cu;
    {
        const bool branch_taken_0x350e9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x350EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350E9Cu;
        // 0x350ea0: 0x24900010  addiu       $s0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x350e9c) {
            ctx->pc = 0x350ECCu;
            goto label_350ecc;
        }
    }
    ctx->pc = 0x350EA4u;
    // 0x350ea4: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x350ea4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x350ea8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x350EA8u;
    {
        const bool branch_taken_0x350ea8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x350ea8) {
            ctx->pc = 0x350EB8u;
            goto label_350eb8;
        }
    }
    ctx->pc = 0x350EB0u;
    // 0x350eb0: 0xc0e39c0  jal         func_38E700
    ctx->pc = 0x350EB0u;
    SET_GPR_U32(ctx, 31, 0x350EB8u);
    ctx->pc = 0x38E700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38E700u, 0x350EB0u, 0x350EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350EB8u;
label_350eb8:
    // 0x350eb8: 0x12600004  beqz        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x350EB8u;
    {
        const bool branch_taken_0x350eb8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x350EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350EB8u;
        // 0x350ebc: 0xae130008  sw          $s3, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x350eb8) {
            ctx->pc = 0x350ECCu;
            goto label_350ecc;
        }
    }
    ctx->pc = 0x350EC0u;
    // 0x350ec0: 0x96620018  lhu         $v0, 0x18($s3)
    ctx->pc = 0x350ec0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x350ec4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x350ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x350ec8: 0xa6620018  sh          $v0, 0x18($s3)
    ctx->pc = 0x350ec8u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 24), (uint16_t)GPR_U32(ctx, 2));
label_350ecc:
    // 0x350ecc: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x350eccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_350ed0:
    // 0x350ed0: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x350ed0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x350ed4: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x350ed4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x350ed8: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x350ed8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x350edc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x350edcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x350ee0: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x350ee0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x350ee4: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x350ee4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x350ee8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x350ee8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x350eec: 0x3e00008  jr          $ra
    ctx->pc = 0x350EECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x350EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350EECu;
        // 0x350ef0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x350EECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x350EF4u;
    // 0x350ef4: 0x0  nop
    ctx->pc = 0x350ef4u;
    // NOP
    ctx->pc = 0x350ef8u;
}
