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

// Function: sub_00426EB0
// Address: 0x426eb0 - 0x427088
void sub_00426EB0_0x426eb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00426EB0_0x426eb0");
#endif

    switch (ctx->pc) {
        case 0x426f18u: goto label_426f18;
        case 0x426f90u: goto label_426f90;
        case 0x426fa4u: goto label_426fa4;
        case 0x427020u: goto label_427020;
        case 0x427034u: goto label_427034;
        case 0x427058u: goto label_427058;
        default: break;
    }

    ctx->pc = 0x426eb0u;

label_426eb0:
    // 0x426eb0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x426eb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x426eb4: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x426eb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x426eb8: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x426eb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x426ebc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x426ebcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x426ec0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x426ec0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x426ec4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x426ec4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x426ec8: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x426ec8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x426ecc: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x426eccu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x426ed0: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x426ed0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x426ed4: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x426ed4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x426ed8: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x426ed8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x426edc: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x426edcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
    // 0x426ee0: 0x1240005d  beqz        $s2, . + 4 + (0x5D << 2)
    ctx->pc = 0x426EE0u;
    {
        const bool branch_taken_0x426ee0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x426EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x426EE0u;
        // 0x426ee4: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x426ee0) {
            ctx->pc = 0x427058u;
            goto label_427058;
        }
    }
    ctx->pc = 0x426EE8u;
    // 0x426ee8: 0x1aa00058  blez        $s5, . + 4 + (0x58 << 2)
    ctx->pc = 0x426EE8u;
    {
        const bool branch_taken_0x426ee8 = (GPR_S32(ctx, 21) <= 0);
        ctx->pc = 0x426EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x426EE8u;
        // 0x426eec: 0x240a02d  daddu       $s4, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x426ee8) {
            ctx->pc = 0x42704Cu;
            goto label_42704c;
        }
    }
    ctx->pc = 0x426EF0u;
    // 0x426ef0: 0xa2800018  sb          $zero, 0x18($s4)
    ctx->pc = 0x426ef0u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 24), (uint8_t)GPR_U32(ctx, 0));
    // 0x426ef4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x426ef4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x426ef8: 0xae800000  sw          $zero, 0x0($s4)
    ctx->pc = 0x426ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
    // 0x426efc: 0x26b6ffff  addiu       $s6, $s5, -0x1
    ctx->pc = 0x426efcu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
    // 0x426f00: 0xae800004  sw          $zero, 0x4($s4)
    ctx->pc = 0x426f00u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 0));
    // 0x426f04: 0x2693001c  addiu       $s3, $s4, 0x1C
    ctx->pc = 0x426f04u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 28));
    // 0x426f08: 0xae800008  sw          $zero, 0x8($s4)
    ctx->pc = 0x426f08u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 0));
    // 0x426f0c: 0xae80000c  sw          $zero, 0xC($s4)
    ctx->pc = 0x426f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 0));
    // 0x426f10: 0xae800010  sw          $zero, 0x10($s4)
    ctx->pc = 0x426f10u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 0));
    // 0x426f14: 0xae800014  sw          $zero, 0x14($s4)
    ctx->pc = 0x426f14u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 20), GPR_U32(ctx, 0));
label_426f18:
    // 0x426f18: 0x8f82add0  lw          $v0, -0x5230($gp)
    ctx->pc = 0x426f18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946256)));
    // 0x426f1c: 0x1120c3  sra         $a0, $s1, 3
    ctx->pc = 0x426f1cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 17), 3));
    // 0x426f20: 0x112883  sra         $a1, $s1, 2
    ctx->pc = 0x426f20u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 17), 2));
    // 0x426f24: 0x113043  sra         $a2, $s1, 1
    ctx->pc = 0x426f24u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 17), 1));
    // 0x426f28: 0x2442fff9  addiu       $v0, $v0, -0x7
    ctx->pc = 0x426f28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967289));
    // 0x426f2c: 0x92070000  lbu         $a3, 0x0($s0)
    ctx->pc = 0x426f2cu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x426f30: 0x92090001  lbu         $t1, 0x1($s0)
    ctx->pc = 0x426f30u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x426f34: 0x2a21023  subu        $v0, $s5, $v0
    ctx->pc = 0x426f34u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x426f38: 0x920a0002  lbu         $t2, 0x2($s0)
    ctx->pc = 0x426f38u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x426f3c: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x426f3cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x426f40: 0x92080003  lbu         $t0, 0x3($s0)
    ctx->pc = 0x426f40u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x426f44: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x426f44u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x426f48: 0x30c60001  andi        $a2, $a2, 0x1
    ctx->pc = 0x426f48u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
    // 0x426f4c: 0x32230001  andi        $v1, $s1, 0x1
    ctx->pc = 0x426f4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x426f50: 0x442004  sllv        $a0, $a0, $v0
    ctx->pc = 0x426f50u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 2) & 0x1F));
    // 0x426f54: 0x452804  sllv        $a1, $a1, $v0
    ctx->pc = 0x426f54u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 2) & 0x1F));
    // 0x426f58: 0x463004  sllv        $a2, $a2, $v0
    ctx->pc = 0x426f58u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 2) & 0x1F));
    // 0x426f5c: 0x431804  sllv        $v1, $v1, $v0
    ctx->pc = 0x426f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
    // 0x426f60: 0xe43821  addu        $a3, $a3, $a0
    ctx->pc = 0x426f60u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x426f64: 0x1254821  addu        $t1, $t1, $a1
    ctx->pc = 0x426f64u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 5)));
    // 0x426f68: 0x1465021  addu        $t2, $t2, $a2
    ctx->pc = 0x426f68u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 6)));
    // 0x426f6c: 0x1034021  addu        $t0, $t0, $v1
    ctx->pc = 0x426f6cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x426f70: 0xa3a70000  sb          $a3, 0x0($sp)
    ctx->pc = 0x426f70u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x426f74: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x426f74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x426f78: 0xa3a90001  sb          $t1, 0x1($sp)
    ctx->pc = 0x426f78u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 9));
    // 0x426f7c: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x426f7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x426f80: 0xa3aa0002  sb          $t2, 0x2($sp)
    ctx->pc = 0x426f80u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 2), (uint8_t)GPR_U32(ctx, 10));
    // 0x426f84: 0xa3a80003  sb          $t0, 0x3($sp)
    ctx->pc = 0x426f84u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 3), (uint8_t)GPR_U32(ctx, 8));
    // 0x426f88: 0xc109bac  jal         func_426EB0
    ctx->pc = 0x426F88u;
    SET_GPR_U32(ctx, 31, 0x426F90u);
    ctx->pc = 0x426F8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x426F88u;
    // 0x426f8c: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x426EB0u;
    goto label_426eb0;
    ctx->pc = 0x426F90u;
label_426f90:
    // 0x426f90: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x426F90u;
    {
        const bool branch_taken_0x426f90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x426F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x426F90u;
        // 0x426f94: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x426f90) {
            ctx->pc = 0x426FA4u;
            goto label_426fa4;
        }
    }
    ctx->pc = 0x426F98u;
    // 0x426f98: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x426f98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x426f9c: 0xc10920e  jal         func_424838
    ctx->pc = 0x426F9Cu;
    SET_GPR_U32(ctx, 31, 0x426FA4u);
    ctx->pc = 0x426FA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x426F9Cu;
    // 0x426fa0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x424838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x424838u, 0x426F9Cu, 0x426FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x426FA4u;
label_426fa4:
    // 0x426fa4: 0x8f82add0  lw          $v0, -0x5230($gp)
    ctx->pc = 0x426fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946256)));
    // 0x426fa8: 0x26230001  addiu       $v1, $s1, 0x1
    ctx->pc = 0x426fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x426fac: 0x328c3  sra         $a1, $v1, 3
    ctx->pc = 0x426facu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 3), 3));
    // 0x426fb0: 0x33083  sra         $a2, $v1, 2
    ctx->pc = 0x426fb0u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 2));
    // 0x426fb4: 0x32043  sra         $a0, $v1, 1
    ctx->pc = 0x426fb4u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 3), 1));
    // 0x426fb8: 0x2442fff9  addiu       $v0, $v0, -0x7
    ctx->pc = 0x426fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967289));
    // 0x426fbc: 0x92070000  lbu         $a3, 0x0($s0)
    ctx->pc = 0x426fbcu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x426fc0: 0x2a21023  subu        $v0, $s5, $v0
    ctx->pc = 0x426fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x426fc4: 0x92080001  lbu         $t0, 0x1($s0)
    ctx->pc = 0x426fc4u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x426fc8: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x426fc8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x426fcc: 0x92090002  lbu         $t1, 0x2($s0)
    ctx->pc = 0x426fccu;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x426fd0: 0x30c60001  andi        $a2, $a2, 0x1
    ctx->pc = 0x426fd0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
    // 0x426fd4: 0x920a0003  lbu         $t2, 0x3($s0)
    ctx->pc = 0x426fd4u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x426fd8: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x426fd8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x426fdc: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x426fdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x426fe0: 0x452804  sllv        $a1, $a1, $v0
    ctx->pc = 0x426fe0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 2) & 0x1F));
    // 0x426fe4: 0x463004  sllv        $a2, $a2, $v0
    ctx->pc = 0x426fe4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 2) & 0x1F));
    // 0x426fe8: 0x442004  sllv        $a0, $a0, $v0
    ctx->pc = 0x426fe8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 2) & 0x1F));
    // 0x426fec: 0x431804  sllv        $v1, $v1, $v0
    ctx->pc = 0x426fecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
    // 0x426ff0: 0xe53821  addu        $a3, $a3, $a1
    ctx->pc = 0x426ff0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x426ff4: 0x1064021  addu        $t0, $t0, $a2
    ctx->pc = 0x426ff4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x426ff8: 0x1244821  addu        $t1, $t1, $a0
    ctx->pc = 0x426ff8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
    // 0x426ffc: 0x1435021  addu        $t2, $t2, $v1
    ctx->pc = 0x426ffcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
    // 0x427000: 0xa3a70000  sb          $a3, 0x0($sp)
    ctx->pc = 0x427000u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x427004: 0xa3a80001  sb          $t0, 0x1($sp)
    ctx->pc = 0x427004u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 8));
    // 0x427008: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x427008u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42700c: 0xa3a90002  sb          $t1, 0x2($sp)
    ctx->pc = 0x42700cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 2), (uint8_t)GPR_U32(ctx, 9));
    // 0x427010: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x427010u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x427014: 0xa3aa0003  sb          $t2, 0x3($sp)
    ctx->pc = 0x427014u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 3), (uint8_t)GPR_U32(ctx, 10));
    // 0x427018: 0xc109bac  jal         func_426EB0
    ctx->pc = 0x427018u;
    SET_GPR_U32(ctx, 31, 0x427020u);
    ctx->pc = 0x42701Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x427018u;
    // 0x42701c: 0x8e640004  lw          $a0, 0x4($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x426EB0u;
    goto label_426eb0;
    ctx->pc = 0x427020u;
label_427020:
    // 0x427020: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x427020u;
    {
        const bool branch_taken_0x427020 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x427024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x427020u;
        // 0x427024: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x427020) {
            ctx->pc = 0x427034u;
            goto label_427034;
        }
    }
    ctx->pc = 0x427028u;
    // 0x427028: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x427028u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42702c: 0xc10920e  jal         func_424838
    ctx->pc = 0x42702Cu;
    SET_GPR_U32(ctx, 31, 0x427034u);
    ctx->pc = 0x427030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42702Cu;
    // 0x427030: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x424838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x424838u, 0x42702Cu, 0x427034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x427034u;
label_427034:
    // 0x427034: 0x26310002  addiu       $s1, $s1, 0x2
    ctx->pc = 0x427034u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
    // 0x427038: 0x2a220010  slti        $v0, $s1, 0x10
    ctx->pc = 0x427038u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x42703c: 0x1440ffb6  bnez        $v0, . + 4 + (-0x4A << 2)
    ctx->pc = 0x42703Cu;
    {
        const bool branch_taken_0x42703c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x427040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42703Cu;
        // 0x427040: 0x26730008  addiu       $s3, $s3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42703c) {
            ctx->pc = 0x426F18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_426f18;
        }
    }
    ctx->pc = 0x427044u;
    // 0x427044: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x427044u;
    {
        const bool branch_taken_0x427044 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x427048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x427044u;
        // 0x427048: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x427044) {
            ctx->pc = 0x42705Cu;
            goto label_42705c;
        }
    }
    ctx->pc = 0x42704Cu;
label_42704c:
    // 0x42704c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x42704cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x427050: 0xc1091ca  jal         func_424728
    ctx->pc = 0x427050u;
    SET_GPR_U32(ctx, 31, 0x427058u);
    ctx->pc = 0x427054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x427050u;
    // 0x427054: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x424728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x424728u, 0x427050u, 0x427058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x427058u;
label_427058:
    // 0x427058: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x427058u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_42705c:
    // 0x42705c: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x42705cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x427060: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x427060u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x427064: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x427064u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x427068: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x427068u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x42706c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x42706cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x427070: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x427070u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x427074: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x427074u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x427078: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x427078u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x42707c: 0x3e00008  jr          $ra
    ctx->pc = 0x42707Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x427080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42707Cu;
        // 0x427080: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42707Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x427084u;
    // 0x427084: 0x0  nop
    ctx->pc = 0x427084u;
    // NOP
    ctx->pc = 0x427088u;
}
