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

// Function: sub_00499E78
// Address: 0x499e78 - 0x49a010
void sub_00499E78_0x499e78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00499E78_0x499e78");
#endif

    switch (ctx->pc) {
        case 0x499edcu: goto label_499edc;
        case 0x499f18u: goto label_499f18;
        case 0x499f44u: goto label_499f44;
        case 0x499f78u: goto label_499f78;
        case 0x499f88u: goto label_499f88;
        case 0x499facu: goto label_499fac;
        case 0x499fc0u: goto label_499fc0;
        default: break;
    }

    ctx->pc = 0x499e78u;

    // 0x499e78: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x499e78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x499e7c: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x499e7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x499e80: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x499e80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x499e84: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x499e84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x499e88: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x499e88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x499e8c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x499e8cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x499e90: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x499e90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x499e94: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x499e94u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x499e98: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x499e98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x499e9c: 0x120982d  daddu       $s3, $t1, $zero
    ctx->pc = 0x499e9cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x499ea0: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x499ea0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x499ea4: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x499ea4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x499ea8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x499ea8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x499eac: 0x16200004  bnez        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x499EACu;
    {
        const bool branch_taken_0x499eac = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x499EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x499EACu;
        // 0x499eb0: 0x100a82d  daddu       $s5, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x499eac) {
            ctx->pc = 0x499EC0u;
            goto label_499ec0;
        }
    }
    ctx->pc = 0x499EB4u;
    // 0x499eb4: 0x8f82b7b0  lw          $v0, -0x4850($gp)
    ctx->pc = 0x499eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948784)));
    // 0x499eb8: 0x8f91c190  lw          $s1, -0x3E70($gp)
    ctx->pc = 0x499eb8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951312)));
    // 0x499ebc: 0x2880b  movn        $s1, $zero, $v0
    ctx->pc = 0x499ebcu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 0));
label_499ec0:
    // 0x499ec0: 0x5600000b  bnel        $s0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x499EC0u;
    {
        const bool branch_taken_0x499ec0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x499ec0) {
            ctx->pc = 0x499EC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x499EC0u;
            // 0x499ec4: 0xae00000c  sw          $zero, 0xC($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x499EF0u;
            goto label_499ef0;
        }
    }
    ctx->pc = 0x499EC8u;
    // 0x499ec8: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x499ec8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x499ecc: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x499eccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
    // 0x499ed0: 0x248481e0  addiu       $a0, $a0, -0x7E20
    ctx->pc = 0x499ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935008));
    // 0x499ed4: 0xc12a936  jal         func_4AA4D8
    ctx->pc = 0x499ED4u;
    SET_GPR_U32(ctx, 31, 0x499EDCu);
    ctx->pc = 0x499ED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x499ED4u;
    // 0x499ed8: 0x34a50809  ori         $a1, $a1, 0x809 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2057);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AA4D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AA4D8u, 0x499ED4u, 0x499EDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x499EDCu;
label_499edc:
    // 0x499edc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x499edcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x499ee0: 0x12000041  beqz        $s0, . + 4 + (0x41 << 2)
    ctx->pc = 0x499EE0u;
    {
        const bool branch_taken_0x499ee0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x499EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x499EE0u;
        // 0x499ee4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x499ee0) {
            ctx->pc = 0x499FE8u;
            goto label_499fe8;
        }
    }
    ctx->pc = 0x499EE8u;
    // 0x499ee8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x499ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x499eec: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x499eecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
label_499ef0:
    // 0x499ef0: 0x32820004  andi        $v0, $s4, 0x4
    ctx->pc = 0x499ef0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)4);
    // 0x499ef4: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x499EF4u;
    {
        const bool branch_taken_0x499ef4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x499EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x499EF4u;
        // 0x499ef8: 0xae130058  sw          $s3, 0x58($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x499ef4) {
            ctx->pc = 0x499F50u;
            goto label_499f50;
        }
    }
    ctx->pc = 0x499EFCu;
    // 0x499efc: 0x5640000a  bnel        $s2, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x499EFCu;
    {
        const bool branch_taken_0x499efc = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x499efc) {
            ctx->pc = 0x499F00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x499EFCu;
            // 0x499f00: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x499F28u;
            goto label_499f28;
        }
    }
    ctx->pc = 0x499F04u;
    // 0x499f04: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x499f04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x499f08: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x499f08u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
    // 0x499f0c: 0x24848208  addiu       $a0, $a0, -0x7DF8
    ctx->pc = 0x499f0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935048));
    // 0x499f10: 0xc12a936  jal         func_4AA4D8
    ctx->pc = 0x499F10u;
    SET_GPR_U32(ctx, 31, 0x499F18u);
    ctx->pc = 0x499F14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x499F10u;
    // 0x499f14: 0x34a50809  ori         $a1, $a1, 0x809 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2057);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AA4D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AA4D8u, 0x499F10u, 0x499F18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x499F18u;
label_499f18:
    // 0x499f18: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x499F18u;
    {
        const bool branch_taken_0x499f18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x499F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x499F18u;
        // 0x499f1c: 0xae02004c  sw          $v0, 0x4C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x499f18) {
            ctx->pc = 0x499F34u;
            goto label_499f34;
        }
    }
    ctx->pc = 0x499F20u;
    // 0x499f20: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x499F20u;
    {
        const bool branch_taken_0x499f20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x499f20) {
            ctx->pc = 0x499F80u;
            goto label_499f80;
        }
    }
    ctx->pc = 0x499F28u;
label_499f28:
    // 0x499f28: 0xae12004c  sw          $s2, 0x4C($s0)
    ctx->pc = 0x499f28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 18));
    // 0x499f2c: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x499f2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x499f30: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x499f30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
label_499f34:
    // 0x499f34: 0x8e04004c  lw          $a0, 0x4C($s0)
    ctx->pc = 0x499f34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x499f38: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x499f38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x499f3c: 0xc0bb7e6  jal         func_2EDF98
    ctx->pc = 0x499F3Cu;
    SET_GPR_U32(ctx, 31, 0x499F44u);
    ctx->pc = 0x499F40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x499F3Cu;
    // 0x499f40: 0x24060018  addiu       $a2, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF98u, 0x499F3Cu, 0x499F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x499F44u;
label_499f44:
    // 0x499f44: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x499f44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x499f48: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x499f48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
    // 0x499f4c: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x499f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
label_499f50:
    // 0x499f50: 0x32820008  andi        $v0, $s4, 0x8
    ctx->pc = 0x499f50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)8);
    // 0x499f54: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x499F54u;
    {
        const bool branch_taken_0x499f54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x499f54) {
            ctx->pc = 0x499FB8u;
            goto label_499fb8;
        }
    }
    ctx->pc = 0x499F5Cu;
    // 0x499f5c: 0x56a0000c  bnel        $s5, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x499F5Cu;
    {
        const bool branch_taken_0x499f5c = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x499f5c) {
            ctx->pc = 0x499F60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x499F5Cu;
            // 0x499f60: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x499F90u;
            goto label_499f90;
        }
    }
    ctx->pc = 0x499F64u;
    // 0x499f64: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x499f64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x499f68: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x499f68u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
    // 0x499f6c: 0x24848230  addiu       $a0, $a0, -0x7DD0
    ctx->pc = 0x499f6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935088));
    // 0x499f70: 0xc12a936  jal         func_4AA4D8
    ctx->pc = 0x499F70u;
    SET_GPR_U32(ctx, 31, 0x499F78u);
    ctx->pc = 0x499F74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x499F70u;
    // 0x499f74: 0x34a50809  ori         $a1, $a1, 0x809 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2057);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AA4D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AA4D8u, 0x499F70u, 0x499F78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x499F78u;
label_499f78:
    // 0x499f78: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x499F78u;
    {
        const bool branch_taken_0x499f78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x499F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x499F78u;
        // 0x499f7c: 0xae020050  sw          $v0, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x499f78) {
            ctx->pc = 0x499F9Cu;
            goto label_499f9c;
        }
    }
    ctx->pc = 0x499F80u;
label_499f80:
    // 0x499f80: 0xc126a98  jal         func_49AA60
    ctx->pc = 0x499F80u;
    SET_GPR_U32(ctx, 31, 0x499F88u);
    ctx->pc = 0x499F84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x499F80u;
    // 0x499f84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49AA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49AA60u, 0x499F80u, 0x499F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x499F88u;
label_499f88:
    // 0x499f88: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x499F88u;
    {
        const bool branch_taken_0x499f88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x499F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x499F88u;
        // 0x499f8c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x499f88) {
            ctx->pc = 0x499FE8u;
            goto label_499fe8;
        }
    }
    ctx->pc = 0x499F90u;
label_499f90:
    // 0x499f90: 0xae150050  sw          $s5, 0x50($s0)
    ctx->pc = 0x499f90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 21));
    // 0x499f94: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x499f94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x499f98: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x499f98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
label_499f9c:
    // 0x499f9c: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x499f9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x499fa0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x499fa0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x499fa4: 0xc0bb7e6  jal         func_2EDF98
    ctx->pc = 0x499FA4u;
    SET_GPR_U32(ctx, 31, 0x499FACu);
    ctx->pc = 0x499FA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x499FA4u;
    // 0x499fa8: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF98u, 0x499FA4u, 0x499FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x499FACu;
label_499fac:
    // 0x499fac: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x499facu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x499fb0: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x499fb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
    // 0x499fb4: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x499fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
label_499fb8:
    // 0x499fb8: 0xc1265d4  jal         func_499750
    ctx->pc = 0x499FB8u;
    SET_GPR_U32(ctx, 31, 0x499FC0u);
    ctx->pc = 0x499FBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x499FB8u;
    // 0x499fbc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x499750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x499750u, 0x499FB8u, 0x499FC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x499FC0u;
label_499fc0:
    // 0x499fc0: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x499FC0u;
    {
        const bool branch_taken_0x499fc0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x499FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x499FC0u;
        // 0x499fc4: 0x26220010  addiu       $v0, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x499fc0) {
            ctx->pc = 0x499FE4u;
            goto label_499fe4;
        }
    }
    ctx->pc = 0x499FC8u;
    // 0x499fc8: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x499fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x499fcc: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x499fccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    // 0x499fd0: 0x26030018  addiu       $v1, $s0, 0x18
    ctx->pc = 0x499fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x499fd4: 0xae040018  sw          $a0, 0x18($s0)
    ctx->pc = 0x499fd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 4));
    // 0x499fd8: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x499fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x499fdc: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x499fdcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x499fe0: 0xae230010  sw          $v1, 0x10($s1)
    ctx->pc = 0x499fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
label_499fe4:
    // 0x499fe4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x499fe4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_499fe8:
    // 0x499fe8: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x499fe8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x499fec: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x499fecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x499ff0: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x499ff0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x499ff4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x499ff4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x499ff8: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x499ff8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x499ffc: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x499ffcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x49a000: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x49a000u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49a004: 0x3e00008  jr          $ra
    ctx->pc = 0x49A004u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49A008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A004u;
        // 0x49a008: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49A004u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49A00Cu;
    // 0x49a00c: 0x0  nop
    ctx->pc = 0x49a00cu;
    // NOP
    ctx->pc = 0x49a010u;
}
