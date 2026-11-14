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

// Function: sub_00328A00
// Address: 0x328a00 - 0x3292d0
void sub_00328A00_0x328a00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00328A00_0x328a00");
#endif

    switch (ctx->pc) {
        case 0x328a30u: goto label_328a30;
        case 0x328ac4u: goto label_328ac4;
        case 0x328ae8u: goto label_328ae8;
        case 0x328afcu: goto label_328afc;
        case 0x328b04u: goto label_328b04;
        case 0x328b18u: goto label_328b18;
        case 0x328b30u: goto label_328b30;
        case 0x328c18u: goto label_328c18;
        case 0x328c98u: goto label_328c98;
        case 0x328cf8u: goto label_328cf8;
        case 0x328db0u: goto label_328db0;
        case 0x328ee8u: goto label_328ee8;
        case 0x328f60u: goto label_328f60;
        case 0x329020u: goto label_329020;
        case 0x329140u: goto label_329140;
        case 0x329238u: goto label_329238;
        case 0x3292a0u: goto label_3292a0;
        default: break;
    }

    ctx->pc = 0x328a00u;

    // 0x328a00: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x328a00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x328a04: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x328a04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x328a08: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x328a08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x328a0c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x328a0cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x328a10: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x328a10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
    // 0x328a14: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x328a14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x328a18: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x328a18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x328a1c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x328a1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x328a20: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x328a20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x328a24: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x328a24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x328a28: 0xc0ca0bc  jal         func_3282F0
    ctx->pc = 0x328A28u;
    SET_GPR_U32(ctx, 31, 0x328A30u);
    ctx->pc = 0x328A2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328A28u;
    // 0x328a2c: 0x8e720030  lw          $s2, 0x30($s3) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 48)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3282F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3282F0u, 0x328A28u, 0x328A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328A30u;
label_328a30:
    // 0x328a30: 0x8e660040  lw          $a2, 0x40($s3)
    ctx->pc = 0x328a30u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
    // 0x328a34: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x328a34u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x328a38: 0x8eb6005c  lw          $s6, 0x5C($s5)
    ctx->pc = 0x328a38u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 92)));
    // 0x328a3c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x328a3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x328a40: 0x30c20001  andi        $v0, $a2, 0x1
    ctx->pc = 0x328a40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
    // 0x328a44: 0x30c30002  andi        $v1, $a2, 0x2
    ctx->pc = 0x328a44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)2);
    // 0x328a48: 0x34450002  ori         $a1, $v0, 0x2
    ctx->pc = 0x328a48u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x328a4c: 0x30c70004  andi        $a3, $a2, 0x4
    ctx->pc = 0x328a4cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)4);
    // 0x328a50: 0x43280a  movz        $a1, $v0, $v1
    ctx->pc = 0x328a50u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
    // 0x328a54: 0x30c80008  andi        $t0, $a2, 0x8
    ctx->pc = 0x328a54u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)8);
    // 0x328a58: 0xe52825  or          $a1, $a3, $a1
    ctx->pc = 0x328a58u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) | GPR_U64(ctx, 5));
    // 0x328a5c: 0x30c30100  andi        $v1, $a2, 0x100
    ctx->pc = 0x328a5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)256);
    // 0x328a60: 0x1052825  or          $a1, $t0, $a1
    ctx->pc = 0x328a60u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 8) | GPR_U64(ctx, 5));
    // 0x328a64: 0x30c70200  andi        $a3, $a2, 0x200
    ctx->pc = 0x328a64u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)512);
    // 0x328a68: 0x34a20010  ori         $v0, $a1, 0x10
    ctx->pc = 0x328a68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)16);
    // 0x328a6c: 0x30c80400  andi        $t0, $a2, 0x400
    ctx->pc = 0x328a6cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1024);
    // 0x328a70: 0x43280b  movn        $a1, $v0, $v1
    ctx->pc = 0x328a70u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
    // 0x328a74: 0x30c90800  andi        $t1, $a2, 0x800
    ctx->pc = 0x328a74u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)2048);
    // 0x328a78: 0x34a20020  ori         $v0, $a1, 0x20
    ctx->pc = 0x328a78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32);
    // 0x328a7c: 0x30ca1000  andi        $t2, $a2, 0x1000
    ctx->pc = 0x328a7cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)4096);
    // 0x328a80: 0x47280b  movn        $a1, $v0, $a3
    ctx->pc = 0x328a80u;
    if (GPR_U64(ctx, 7) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
    // 0x328a84: 0x30cb2000  andi        $t3, $a2, 0x2000
    ctx->pc = 0x328a84u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)8192);
    // 0x328a88: 0x34a20040  ori         $v0, $a1, 0x40
    ctx->pc = 0x328a88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)64);
    // 0x328a8c: 0x30c74000  andi        $a3, $a2, 0x4000
    ctx->pc = 0x328a8cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)16384);
    // 0x328a90: 0x48280b  movn        $a1, $v0, $t0
    ctx->pc = 0x328a90u;
    if (GPR_U64(ctx, 8) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
    // 0x328a94: 0x30c68000  andi        $a2, $a2, 0x8000
    ctx->pc = 0x328a94u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)32768);
    // 0x328a98: 0x34a20080  ori         $v0, $a1, 0x80
    ctx->pc = 0x328a98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)128);
    // 0x328a9c: 0x49280b  movn        $a1, $v0, $t1
    ctx->pc = 0x328a9cu;
    if (GPR_U64(ctx, 9) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
    // 0x328aa0: 0x34a30100  ori         $v1, $a1, 0x100
    ctx->pc = 0x328aa0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)256);
    // 0x328aa4: 0x6a280b  movn        $a1, $v1, $t2
    ctx->pc = 0x328aa4u;
    if (GPR_U64(ctx, 10) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
    // 0x328aa8: 0x34a20200  ori         $v0, $a1, 0x200
    ctx->pc = 0x328aa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)512);
    // 0x328aac: 0x4b280b  movn        $a1, $v0, $t3
    ctx->pc = 0x328aacu;
    if (GPR_U64(ctx, 11) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
    // 0x328ab0: 0x34a30400  ori         $v1, $a1, 0x400
    ctx->pc = 0x328ab0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1024);
    // 0x328ab4: 0x67280b  movn        $a1, $v1, $a3
    ctx->pc = 0x328ab4u;
    if (GPR_U64(ctx, 7) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
    // 0x328ab8: 0x34a20800  ori         $v0, $a1, 0x800
    ctx->pc = 0x328ab8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2048);
    // 0x328abc: 0xc0e33ee  jal         func_38CFB8
    ctx->pc = 0x328ABCu;
    SET_GPR_U32(ctx, 31, 0x328AC4u);
    ctx->pc = 0x328AC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328ABCu;
    // 0x328ac0: 0x46280b  movn        $a1, $v0, $a2 (Delay Slot)
    if (GPR_U64(ctx, 6) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38CFB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CFB8u, 0x328ABCu, 0x328AC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328AC4u;
label_328ac4:
    // 0x328ac4: 0x8e630040  lw          $v1, 0x40($s3)
    ctx->pc = 0x328ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
    // 0x328ac8: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x328ac8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x328acc: 0x1060001c  beqz        $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x328ACCu;
    {
        const bool branch_taken_0x328acc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x328AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328ACCu;
        // 0x328ad0: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328acc) {
            ctx->pc = 0x328B40u;
            goto label_328b40;
        }
    }
    ctx->pc = 0x328AD4u;
    // 0x328ad4: 0x8ea40054  lw          $a0, 0x54($s5)
    ctx->pc = 0x328ad4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 84)));
    // 0x328ad8: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x328AD8u;
    {
        const bool branch_taken_0x328ad8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x328ad8) {
            ctx->pc = 0x328ADCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x328AD8u;
            // 0x328adc: 0x26a40020  addiu       $a0, $s5, 0x20 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
            ctx->in_delay_slot = false;
            ctx->pc = 0x328AF0u;
            goto label_328af0;
        }
    }
    ctx->pc = 0x328AE0u;
    // 0x328ae0: 0xc0e4102  jal         func_390408
    ctx->pc = 0x328AE0u;
    SET_GPR_U32(ctx, 31, 0x328AE8u);
    ctx->pc = 0x390408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390408u, 0x328AE0u, 0x328AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328AE8u;
label_328ae8:
    // 0x328ae8: 0xaea00054  sw          $zero, 0x54($s5)
    ctx->pc = 0x328ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 84), GPR_U32(ctx, 0));
    // 0x328aec: 0x26a40020  addiu       $a0, $s5, 0x20
    ctx->pc = 0x328aecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
label_328af0:
    // 0x328af0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x328af0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x328af4: 0xc0e3da0  jal         func_38F680
    ctx->pc = 0x328AF4u;
    SET_GPR_U32(ctx, 31, 0x328AFCu);
    ctx->pc = 0x328AF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328AF4u;
    // 0x328af8: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38F680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38F680u, 0x328AF4u, 0x328AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328AFCu;
label_328afc:
    // 0x328afc: 0xc0ca17e  jal         func_3285F8
    ctx->pc = 0x328AFCu;
    SET_GPR_U32(ctx, 31, 0x328B04u);
    ctx->pc = 0x328B00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328AFCu;
    // 0x328b00: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3285F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3285F8u, 0x328AFCu, 0x328B04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328B04u;
label_328b04:
    // 0x328b04: 0x8e63004c  lw          $v1, 0x4C($s3)
    ctx->pc = 0x328b04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 76)));
    // 0x328b08: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x328B08u;
    {
        const bool branch_taken_0x328b08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x328B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328B08u;
        // 0x328b0c: 0xaea20054  sw          $v0, 0x54($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328b08) {
            ctx->pc = 0x328B40u;
            goto label_328b40;
        }
    }
    ctx->pc = 0x328B10u;
    // 0x328b10: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x328b10u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x328b14: 0x8e620048  lw          $v0, 0x48($s3)
    ctx->pc = 0x328b14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 72)));
label_328b18:
    // 0x328b18: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x328b18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x328b1c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x328b1cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x328b20: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x328b20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x328b24: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x328b24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x328b28: 0xc0e3b14  jal         func_38EC50
    ctx->pc = 0x328B28u;
    SET_GPR_U32(ctx, 31, 0x328B30u);
    ctx->pc = 0x328B2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328B28u;
    // 0x328b2c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38EC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38EC50u, 0x328B28u, 0x328B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328B30u;
label_328b30:
    // 0x328b30: 0x8e63004c  lw          $v1, 0x4C($s3)
    ctx->pc = 0x328b30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 76)));
    // 0x328b34: 0x203182b  sltu        $v1, $s0, $v1
    ctx->pc = 0x328b34u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x328b38: 0x5460fff7  bnel        $v1, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x328B38u;
    {
        const bool branch_taken_0x328b38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x328b38) {
            ctx->pc = 0x328B3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x328B38u;
            // 0x328b3c: 0x8e620048  lw          $v0, 0x48($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 72)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x328B18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_328b18;
        }
    }
    ctx->pc = 0x328B40u;
label_328b40:
    // 0x328b40: 0x8e620040  lw          $v0, 0x40($s3)
    ctx->pc = 0x328b40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
    // 0x328b44: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x328b44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x328b48: 0x5040005c  beql        $v0, $zero, . + 4 + (0x5C << 2)
    ctx->pc = 0x328B48u;
    {
        const bool branch_taken_0x328b48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x328b48) {
            ctx->pc = 0x328B4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x328B48u;
            // 0x328b4c: 0x8e620040  lw          $v0, 0x40($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x328CBCu;
            goto label_328cbc;
        }
    }
    ctx->pc = 0x328B50u;
    // 0x328b50: 0x8e62002c  lw          $v0, 0x2C($s3)
    ctx->pc = 0x328b50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 44)));
    // 0x328b54: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x328b54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x328b58: 0x10400057  beqz        $v0, . + 4 + (0x57 << 2)
    ctx->pc = 0x328B58u;
    {
        const bool branch_taken_0x328b58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x328B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328B58u;
        // 0x328b5c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328b58) {
            ctx->pc = 0x328CB8u;
            goto label_328cb8;
        }
    }
    ctx->pc = 0x328B60u;
    // 0x328b60: 0x8ec30014  lw          $v1, 0x14($s6)
    ctx->pc = 0x328b60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 20)));
    // 0x328b64: 0x12400049  beqz        $s2, . + 4 + (0x49 << 2)
    ctx->pc = 0x328B64u;
    {
        const bool branch_taken_0x328b64 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x328B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328B64u;
        // 0x328b68: 0x8e620000  lw          $v0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328b64) {
            ctx->pc = 0x328C8Cu;
            goto label_328c8c;
        }
    }
    ctx->pc = 0x328B6Cu;
    // 0x328b6c: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x328b6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x328b70: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x328b70u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x328b74: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x328b74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x328b78: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x328b78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x328b7c: 0x1a400019  blez        $s2, . + 4 + (0x19 << 2)
    ctx->pc = 0x328B7Cu;
    {
        const bool branch_taken_0x328b7c = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x328B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328B7Cu;
        // 0x328b80: 0x32430003  andi        $v1, $s2, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x328b7c) {
            ctx->pc = 0x328BE4u;
            goto label_328be4;
        }
    }
    ctx->pc = 0x328B84u;
    // 0x328b84: 0x10600022  beqz        $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x328B84u;
    {
        const bool branch_taken_0x328b84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x328B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328B84u;
        // 0x328b88: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x328b84) {
            ctx->pc = 0x328C10u;
            goto label_328c10;
        }
    }
    ctx->pc = 0x328B8Cu;
    // 0x328b8c: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x328B8Cu;
    {
        const bool branch_taken_0x328b8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x328B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328B8Cu;
        // 0x328b90: 0x28620003  slti        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x328b8c) {
            ctx->pc = 0x328BE4u;
            goto label_328be4;
        }
    }
    ctx->pc = 0x328B94u;
    // 0x328b94: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x328B94u;
    {
        const bool branch_taken_0x328b94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x328b94) {
            ctx->pc = 0x328BC0u;
            goto label_328bc0;
        }
    }
    ctx->pc = 0x328B9Cu;
    // 0x328b9c: 0x69020007  ldl         $v0, 0x7($t0)
    ctx->pc = 0x328b9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x328ba0: 0x6d020000  ldr         $v0, 0x0($t0)
    ctx->pc = 0x328ba0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x328ba4: 0x8d030008  lw          $v1, 0x8($t0)
    ctx->pc = 0x328ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x328ba8: 0xb0820007  sdl         $v0, 0x7($a0)
    ctx->pc = 0x328ba8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x328bac: 0xb4820000  sdr         $v0, 0x0($a0)
    ctx->pc = 0x328bacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x328bb0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x328bb0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x328bb4: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x328bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x328bb8: 0x2486000c  addiu       $a2, $a0, 0xC
    ctx->pc = 0x328bb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
    // 0x328bbc: 0x2505000c  addiu       $a1, $t0, 0xC
    ctx->pc = 0x328bbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), 12));
label_328bc0:
    // 0x328bc0: 0x68a80007  ldl         $t0, 0x7($a1)
    ctx->pc = 0x328bc0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x328bc4: 0x6ca80000  ldr         $t0, 0x0($a1)
    ctx->pc = 0x328bc4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x328bc8: 0x8ca90008  lw          $t1, 0x8($a1)
    ctx->pc = 0x328bc8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x328bcc: 0xb0c80007  sdl         $t0, 0x7($a2)
    ctx->pc = 0x328bccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x328bd0: 0xb4c80000  sdr         $t0, 0x0($a2)
    ctx->pc = 0x328bd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x328bd4: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x328bd4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x328bd8: 0xacc90008  sw          $t1, 0x8($a2)
    ctx->pc = 0x328bd8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 9));
    // 0x328bdc: 0x24c6000c  addiu       $a2, $a2, 0xC
    ctx->pc = 0x328bdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12));
    // 0x328be0: 0x24a5000c  addiu       $a1, $a1, 0xC
    ctx->pc = 0x328be0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
label_328be4:
    // 0x328be4: 0x68a30007  ldl         $v1, 0x7($a1)
    ctx->pc = 0x328be4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x328be8: 0x6ca30000  ldr         $v1, 0x0($a1)
    ctx->pc = 0x328be8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x328bec: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x328becu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x328bf0: 0xb0c30007  sdl         $v1, 0x7($a2)
    ctx->pc = 0x328bf0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x328bf4: 0xb4c30000  sdr         $v1, 0x0($a2)
    ctx->pc = 0x328bf4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x328bf8: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x328bf8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x328bfc: 0xacc40008  sw          $a0, 0x8($a2)
    ctx->pc = 0x328bfcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 4));
    // 0x328c00: 0x24c6000c  addiu       $a2, $a2, 0xC
    ctx->pc = 0x328c00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12));
    // 0x328c04: 0xf2202b  sltu        $a0, $a3, $s2
    ctx->pc = 0x328c04u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x328c08: 0x10800020  beqz        $a0, . + 4 + (0x20 << 2)
    ctx->pc = 0x328C08u;
    {
        const bool branch_taken_0x328c08 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x328C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328C08u;
        // 0x328c0c: 0x24a5000c  addiu       $a1, $a1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328c08) {
            ctx->pc = 0x328C8Cu;
            goto label_328c8c;
        }
    }
    ctx->pc = 0x328C10u;
label_328c10:
    // 0x328c10: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x328c10u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x328c14: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x328c14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_328c18:
    // 0x328c18: 0x686d0007  ldl         $t5, 0x7($v1)
    ctx->pc = 0x328c18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem << shift)); }
    // 0x328c1c: 0x6c6d0000  ldr         $t5, 0x0($v1)
    ctx->pc = 0x328c1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem >> shift)); }
    // 0x328c20: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x328c20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x328c24: 0xb04d0007  sdl         $t5, 0x7($v0)
    ctx->pc = 0x328c24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 13); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x328c28: 0xb44d0000  sdr         $t5, 0x0($v0)
    ctx->pc = 0x328c28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 13); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x328c2c: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x328c2cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x328c30: 0xac440008  sw          $a0, 0x8($v0)
    ctx->pc = 0x328c30u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 4));
    // 0x328c34: 0x68680013  ldl         $t0, 0x13($v1)
    ctx->pc = 0x328c34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x328c38: 0x6c68000c  ldr         $t0, 0xC($v1)
    ctx->pc = 0x328c38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x328c3c: 0x8c690014  lw          $t1, 0x14($v1)
    ctx->pc = 0x328c3cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x328c40: 0xb0480013  sdl         $t0, 0x13($v0)
    ctx->pc = 0x328c40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x328c44: 0xb448000c  sdr         $t0, 0xC($v0)
    ctx->pc = 0x328c44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x328c48: 0xac490014  sw          $t1, 0x14($v0)
    ctx->pc = 0x328c48u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 9));
    // 0x328c4c: 0x6865001f  ldl         $a1, 0x1F($v1)
    ctx->pc = 0x328c4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x328c50: 0x6c650018  ldr         $a1, 0x18($v1)
    ctx->pc = 0x328c50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x328c54: 0x8c660020  lw          $a2, 0x20($v1)
    ctx->pc = 0x328c54u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x328c58: 0xb045001f  sdl         $a1, 0x1F($v0)
    ctx->pc = 0x328c58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x328c5c: 0xb4450018  sdr         $a1, 0x18($v0)
    ctx->pc = 0x328c5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x328c60: 0xac460020  sw          $a2, 0x20($v0)
    ctx->pc = 0x328c60u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 6));
    // 0x328c64: 0xf2202b  sltu        $a0, $a3, $s2
    ctx->pc = 0x328c64u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x328c68: 0x686d002b  ldl         $t5, 0x2B($v1)
    ctx->pc = 0x328c68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 43); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem << shift)); }
    // 0x328c6c: 0x6c6d0024  ldr         $t5, 0x24($v1)
    ctx->pc = 0x328c6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 36); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem >> shift)); }
    // 0x328c70: 0x8c65002c  lw          $a1, 0x2C($v1)
    ctx->pc = 0x328c70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x328c74: 0xb04d002b  sdl         $t5, 0x2B($v0)
    ctx->pc = 0x328c74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 43); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 13); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x328c78: 0xb44d0024  sdr         $t5, 0x24($v0)
    ctx->pc = 0x328c78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 36); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 13); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x328c7c: 0xac45002c  sw          $a1, 0x2C($v0)
    ctx->pc = 0x328c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 5));
    // 0x328c80: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x328c80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x328c84: 0x1480ffe4  bnez        $a0, . + 4 + (-0x1C << 2)
    ctx->pc = 0x328C84u;
    {
        const bool branch_taken_0x328c84 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x328C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328C84u;
        // 0x328c88: 0x24630030  addiu       $v1, $v1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328c84) {
            ctx->pc = 0x328C18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_328c18;
        }
    }
    ctx->pc = 0x328C8Cu;
label_328c8c:
    // 0x328c8c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x328c8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x328c90: 0xc0e2ab0  jal         func_38AAC0
    ctx->pc = 0x328C90u;
    SET_GPR_U32(ctx, 31, 0x328C98u);
    ctx->pc = 0x328C94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328C90u;
    // 0x328c94: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38AAC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38AAC0u, 0x328C90u, 0x328C98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328C98u;
label_328c98:
    // 0x328c98: 0x6ba90007  ldl         $t1, 0x7($sp)
    ctx->pc = 0x328c98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x328c9c: 0x6fa90000  ldr         $t1, 0x0($sp)
    ctx->pc = 0x328c9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x328ca0: 0x6bad000f  ldl         $t5, 0xF($sp)
    ctx->pc = 0x328ca0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem << shift)); }
    // 0x328ca4: 0x6fad0008  ldr         $t5, 0x8($sp)
    ctx->pc = 0x328ca4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem >> shift)); }
    // 0x328ca8: 0xb2c9000b  sdl         $t1, 0xB($s6)
    ctx->pc = 0x328ca8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 11); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x328cac: 0xb6c90004  sdr         $t1, 0x4($s6)
    ctx->pc = 0x328cacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 4); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x328cb0: 0xb2cd0013  sdl         $t5, 0x13($s6)
    ctx->pc = 0x328cb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 13); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x328cb4: 0xb6cd000c  sdr         $t5, 0xC($s6)
    ctx->pc = 0x328cb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 13); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_328cb8:
    // 0x328cb8: 0x8e620040  lw          $v0, 0x40($s3)
    ctx->pc = 0x328cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
label_328cbc:
    // 0x328cbc: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x328cbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x328cc0: 0x50400059  beql        $v0, $zero, . + 4 + (0x59 << 2)
    ctx->pc = 0x328CC0u;
    {
        const bool branch_taken_0x328cc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x328cc0) {
            ctx->pc = 0x328CC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x328CC0u;
            // 0x328cc4: 0x8e620040  lw          $v0, 0x40($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x328E28u;
            goto label_328e28;
        }
    }
    ctx->pc = 0x328CC8u;
    // 0x328cc8: 0x8e63002c  lw          $v1, 0x2C($s3)
    ctx->pc = 0x328cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 44)));
    // 0x328ccc: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x328cccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x328cd0: 0x10400054  beqz        $v0, . + 4 + (0x54 << 2)
    ctx->pc = 0x328CD0u;
    {
        const bool branch_taken_0x328cd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x328CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328CD0u;
        // 0x328cd4: 0x30620040  andi        $v0, $v1, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        if (branch_taken_0x328cd0) {
            ctx->pc = 0x328E24u;
            goto label_328e24;
        }
    }
    ctx->pc = 0x328CD8u;
    // 0x328cd8: 0x8ec60018  lw          $a2, 0x18($s6)
    ctx->pc = 0x328cd8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 24)));
    // 0x328cdc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x328CDCu;
    {
        const bool branch_taken_0x328cdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x328CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328CDCu;
        // 0x328ce0: 0x8e650004  lw          $a1, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328cdc) {
            ctx->pc = 0x328D00u;
            goto label_328d00;
        }
    }
    ctx->pc = 0x328CE4u;
    // 0x328ce4: 0xc78c8048  lwc1        $f12, -0x7FB8($gp)
    ctx->pc = 0x328ce4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x328ce8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x328ce8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x328cec: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x328cecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x328cf0: 0xc0ca826  jal         func_32A098
    ctx->pc = 0x328CF0u;
    SET_GPR_U32(ctx, 31, 0x328CF8u);
    ctx->pc = 0x328CF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328CF0u;
    // 0x328cf4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32A098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A098u, 0x328CF0u, 0x328CF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328CF8u;
label_328cf8:
    // 0x328cf8: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x328CF8u;
    {
        const bool branch_taken_0x328cf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x328CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328CF8u;
        // 0x328cfc: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328cf8) {
            ctx->pc = 0x328E24u;
            goto label_328e24;
        }
    }
    ctx->pc = 0x328D00u;
label_328d00:
    // 0x328d00: 0x12400048  beqz        $s2, . + 4 + (0x48 << 2)
    ctx->pc = 0x328D00u;
    {
        const bool branch_taken_0x328d00 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x328D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328D00u;
        // 0x328d04: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328d00) {
            ctx->pc = 0x328E24u;
            goto label_328e24;
        }
    }
    ctx->pc = 0x328D08u;
    // 0x328d08: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x328d08u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x328d0c: 0xc0482d  daddu       $t1, $a2, $zero
    ctx->pc = 0x328d0cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x328d10: 0x1a400019  blez        $s2, . + 4 + (0x19 << 2)
    ctx->pc = 0x328D10u;
    {
        const bool branch_taken_0x328d10 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x328D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328D10u;
        // 0x328d14: 0x32430003  andi        $v1, $s2, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x328d10) {
            ctx->pc = 0x328D78u;
            goto label_328d78;
        }
    }
    ctx->pc = 0x328D18u;
    // 0x328d18: 0x10600022  beqz        $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x328D18u;
    {
        const bool branch_taken_0x328d18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x328D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328D18u;
        // 0x328d1c: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x328d18) {
            ctx->pc = 0x328DA4u;
            goto label_328da4;
        }
    }
    ctx->pc = 0x328D20u;
    // 0x328d20: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x328D20u;
    {
        const bool branch_taken_0x328d20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x328D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328D20u;
        // 0x328d24: 0x28620003  slti        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x328d20) {
            ctx->pc = 0x328D78u;
            goto label_328d78;
        }
    }
    ctx->pc = 0x328D28u;
    // 0x328d28: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x328D28u;
    {
        const bool branch_taken_0x328d28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x328d28) {
            ctx->pc = 0x328D54u;
            goto label_328d54;
        }
    }
    ctx->pc = 0x328D30u;
    // 0x328d30: 0x68a40007  ldl         $a0, 0x7($a1)
    ctx->pc = 0x328d30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x328d34: 0x6ca40000  ldr         $a0, 0x0($a1)
    ctx->pc = 0x328d34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x328d38: 0x8ca70008  lw          $a3, 0x8($a1)
    ctx->pc = 0x328d38u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x328d3c: 0xb0c40007  sdl         $a0, 0x7($a2)
    ctx->pc = 0x328d3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x328d40: 0xb4c40000  sdr         $a0, 0x0($a2)
    ctx->pc = 0x328d40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x328d44: 0xacc70008  sw          $a3, 0x8($a2)
    ctx->pc = 0x328d44u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 7));
    // 0x328d48: 0x24c9000c  addiu       $t1, $a2, 0xC
    ctx->pc = 0x328d48u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), 12));
    // 0x328d4c: 0x24a8000c  addiu       $t0, $a1, 0xC
    ctx->pc = 0x328d4cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
    // 0x328d50: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x328d50u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_328d54:
    // 0x328d54: 0x690d0007  ldl         $t5, 0x7($t0)
    ctx->pc = 0x328d54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem << shift)); }
    // 0x328d58: 0x6d0d0000  ldr         $t5, 0x0($t0)
    ctx->pc = 0x328d58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem >> shift)); }
    // 0x328d5c: 0x8d020008  lw          $v0, 0x8($t0)
    ctx->pc = 0x328d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x328d60: 0xb12d0007  sdl         $t5, 0x7($t1)
    ctx->pc = 0x328d60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 13); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x328d64: 0xb52d0000  sdr         $t5, 0x0($t1)
    ctx->pc = 0x328d64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 13); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x328d68: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x328d68u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x328d6c: 0xad220008  sw          $v0, 0x8($t1)
    ctx->pc = 0x328d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 8), GPR_U32(ctx, 2));
    // 0x328d70: 0x2529000c  addiu       $t1, $t1, 0xC
    ctx->pc = 0x328d70u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 12));
    // 0x328d74: 0x2508000c  addiu       $t0, $t0, 0xC
    ctx->pc = 0x328d74u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 12));
label_328d78:
    // 0x328d78: 0x69050007  ldl         $a1, 0x7($t0)
    ctx->pc = 0x328d78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x328d7c: 0x6d050000  ldr         $a1, 0x0($t0)
    ctx->pc = 0x328d7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x328d80: 0x8d060008  lw          $a2, 0x8($t0)
    ctx->pc = 0x328d80u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x328d84: 0xb1250007  sdl         $a1, 0x7($t1)
    ctx->pc = 0x328d84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x328d88: 0xb5250000  sdr         $a1, 0x0($t1)
    ctx->pc = 0x328d88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x328d8c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x328d8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x328d90: 0xad260008  sw          $a2, 0x8($t1)
    ctx->pc = 0x328d90u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 8), GPR_U32(ctx, 6));
    // 0x328d94: 0xf2202b  sltu        $a0, $a3, $s2
    ctx->pc = 0x328d94u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x328d98: 0x2529000c  addiu       $t1, $t1, 0xC
    ctx->pc = 0x328d98u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 12));
    // 0x328d9c: 0x10800021  beqz        $a0, . + 4 + (0x21 << 2)
    ctx->pc = 0x328D9Cu;
    {
        const bool branch_taken_0x328d9c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x328DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328D9Cu;
        // 0x328da0: 0x2508000c  addiu       $t0, $t0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328d9c) {
            ctx->pc = 0x328E24u;
            goto label_328e24;
        }
    }
    ctx->pc = 0x328DA4u;
label_328da4:
    // 0x328da4: 0x100182d  daddu       $v1, $t0, $zero
    ctx->pc = 0x328da4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x328da8: 0x120102d  daddu       $v0, $t1, $zero
    ctx->pc = 0x328da8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x328dac: 0x0  nop
    ctx->pc = 0x328dacu;
    // NOP
label_328db0:
    // 0x328db0: 0x68640007  ldl         $a0, 0x7($v1)
    ctx->pc = 0x328db0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x328db4: 0x6c640000  ldr         $a0, 0x0($v1)
    ctx->pc = 0x328db4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x328db8: 0x8c650008  lw          $a1, 0x8($v1)
    ctx->pc = 0x328db8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x328dbc: 0xb0440007  sdl         $a0, 0x7($v0)
    ctx->pc = 0x328dbcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x328dc0: 0xb4440000  sdr         $a0, 0x0($v0)
    ctx->pc = 0x328dc0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x328dc4: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x328dc4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x328dc8: 0xac450008  sw          $a1, 0x8($v0)
    ctx->pc = 0x328dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 5));
    // 0x328dcc: 0x68690013  ldl         $t1, 0x13($v1)
    ctx->pc = 0x328dccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x328dd0: 0x6c69000c  ldr         $t1, 0xC($v1)
    ctx->pc = 0x328dd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x328dd4: 0x8c6d0014  lw          $t5, 0x14($v1)
    ctx->pc = 0x328dd4u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x328dd8: 0xb0490013  sdl         $t1, 0x13($v0)
    ctx->pc = 0x328dd8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x328ddc: 0xb449000c  sdr         $t1, 0xC($v0)
    ctx->pc = 0x328ddcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x328de0: 0xac4d0014  sw          $t5, 0x14($v0)
    ctx->pc = 0x328de0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 13));
    // 0x328de4: 0x6866001f  ldl         $a2, 0x1F($v1)
    ctx->pc = 0x328de4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x328de8: 0x6c660018  ldr         $a2, 0x18($v1)
    ctx->pc = 0x328de8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x328dec: 0x8c680020  lw          $t0, 0x20($v1)
    ctx->pc = 0x328decu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x328df0: 0xb046001f  sdl         $a2, 0x1F($v0)
    ctx->pc = 0x328df0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x328df4: 0xb4460018  sdr         $a2, 0x18($v0)
    ctx->pc = 0x328df4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x328df8: 0xac480020  sw          $t0, 0x20($v0)
    ctx->pc = 0x328df8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 8));
    // 0x328dfc: 0xf2202b  sltu        $a0, $a3, $s2
    ctx->pc = 0x328dfcu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x328e00: 0x6865002b  ldl         $a1, 0x2B($v1)
    ctx->pc = 0x328e00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 43); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x328e04: 0x6c650024  ldr         $a1, 0x24($v1)
    ctx->pc = 0x328e04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 36); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x328e08: 0x8c66002c  lw          $a2, 0x2C($v1)
    ctx->pc = 0x328e08u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x328e0c: 0xb045002b  sdl         $a1, 0x2B($v0)
    ctx->pc = 0x328e0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 43); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x328e10: 0xb4450024  sdr         $a1, 0x24($v0)
    ctx->pc = 0x328e10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 36); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x328e14: 0xac46002c  sw          $a2, 0x2C($v0)
    ctx->pc = 0x328e14u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 6));
    // 0x328e18: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x328e18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x328e1c: 0x1480ffe4  bnez        $a0, . + 4 + (-0x1C << 2)
    ctx->pc = 0x328E1Cu;
    {
        const bool branch_taken_0x328e1c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x328E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328E1Cu;
        // 0x328e20: 0x24630030  addiu       $v1, $v1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328e1c) {
            ctx->pc = 0x328DB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_328db0;
        }
    }
    ctx->pc = 0x328E24u;
label_328e24:
    // 0x328e24: 0x8e620040  lw          $v0, 0x40($s3)
    ctx->pc = 0x328e24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
label_328e28:
    // 0x328e28: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x328e28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x328e2c: 0x50400044  beql        $v0, $zero, . + 4 + (0x44 << 2)
    ctx->pc = 0x328E2Cu;
    {
        const bool branch_taken_0x328e2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x328e2c) {
            ctx->pc = 0x328E30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x328E2Cu;
            // 0x328e30: 0x8e62003c  lw          $v0, 0x3C($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 60)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x328F40u;
            goto label_328f40;
        }
    }
    ctx->pc = 0x328E34u;
    // 0x328e34: 0x8e62002c  lw          $v0, 0x2C($s3)
    ctx->pc = 0x328e34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 44)));
    // 0x328e38: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x328e38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x328e3c: 0x50400040  beql        $v0, $zero, . + 4 + (0x40 << 2)
    ctx->pc = 0x328E3Cu;
    {
        const bool branch_taken_0x328e3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x328e3c) {
            ctx->pc = 0x328E40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x328E3Cu;
            // 0x328e40: 0x8e62003c  lw          $v0, 0x3C($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 60)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x328F40u;
            goto label_328f40;
        }
    }
    ctx->pc = 0x328E44u;
    // 0x328e44: 0x8ea30030  lw          $v1, 0x30($s5)
    ctx->pc = 0x328e44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 48)));
    // 0x328e48: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x328e48u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x328e4c: 0x1240003b  beqz        $s2, . + 4 + (0x3B << 2)
    ctx->pc = 0x328E4Cu;
    {
        const bool branch_taken_0x328e4c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x328E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328E4Cu;
        // 0x328e50: 0x8e620008  lw          $v0, 0x8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328e4c) {
            ctx->pc = 0x328F3Cu;
            goto label_328f3c;
        }
    }
    ctx->pc = 0x328E54u;
    // 0x328e54: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x328e54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x328e58: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x328e58u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x328e5c: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x328e5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x328e60: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x328e60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x328e64: 0x1a400015  blez        $s2, . + 4 + (0x15 << 2)
    ctx->pc = 0x328E64u;
    {
        const bool branch_taken_0x328e64 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x328E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328E64u;
        // 0x328e68: 0x32430003  andi        $v1, $s2, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x328e64) {
            ctx->pc = 0x328EBCu;
            goto label_328ebc;
        }
    }
    ctx->pc = 0x328E6Cu;
    // 0x328e6c: 0x1060001c  beqz        $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x328E6Cu;
    {
        const bool branch_taken_0x328e6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x328E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328E6Cu;
        // 0x328e70: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x328e6c) {
            ctx->pc = 0x328EE0u;
            goto label_328ee0;
        }
    }
    ctx->pc = 0x328E74u;
    // 0x328e74: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x328E74u;
    {
        const bool branch_taken_0x328e74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x328E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328E74u;
        // 0x328e78: 0x28620003  slti        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x328e74) {
            ctx->pc = 0x328EBCu;
            goto label_328ebc;
        }
    }
    ctx->pc = 0x328E7Cu;
    // 0x328e7c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x328E7Cu;
    {
        const bool branch_taken_0x328e7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x328e7c) {
            ctx->pc = 0x328EA0u;
            goto label_328ea0;
        }
    }
    ctx->pc = 0x328E84u;
    // 0x328e84: 0x890d0003  lwl         $t5, 0x3($t0)
    ctx->pc = 0x328e84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 13) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 13, (int32_t)merged); }
    // 0x328e88: 0x990d0000  lwr         $t5, 0x0($t0)
    ctx->pc = 0x328e88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 13) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 13) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 13, merged64); }
    // 0x328e8c: 0xa88d0003  swl         $t5, 0x3($a0)
    ctx->pc = 0x328e8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 13); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x328e90: 0x24860004  addiu       $a2, $a0, 0x4
    ctx->pc = 0x328e90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x328e94: 0xb88d0000  swr         $t5, 0x0($a0)
    ctx->pc = 0x328e94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 13); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x328e98: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x328e98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x328e9c: 0x25050004  addiu       $a1, $t0, 0x4
    ctx->pc = 0x328e9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
label_328ea0:
    // 0x328ea0: 0x88a80003  lwl         $t0, 0x3($a1)
    ctx->pc = 0x328ea0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 8) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 8, (int32_t)merged); }
    // 0x328ea4: 0x98a80000  lwr         $t0, 0x0($a1)
    ctx->pc = 0x328ea4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 8) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 8) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 8, merged64); }
    // 0x328ea8: 0xa8c80003  swl         $t0, 0x3($a2)
    ctx->pc = 0x328ea8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 8); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x328eac: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x328eacu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x328eb0: 0xb8c80000  swr         $t0, 0x0($a2)
    ctx->pc = 0x328eb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 8); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x328eb4: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x328eb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x328eb8: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x328eb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_328ebc:
    // 0x328ebc: 0x88a30003  lwl         $v1, 0x3($a1)
    ctx->pc = 0x328ebcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
    // 0x328ec0: 0x98a30000  lwr         $v1, 0x0($a1)
    ctx->pc = 0x328ec0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
    // 0x328ec4: 0xa8c30003  swl         $v1, 0x3($a2)
    ctx->pc = 0x328ec4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x328ec8: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x328ec8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x328ecc: 0xb8c30000  swr         $v1, 0x0($a2)
    ctx->pc = 0x328eccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x328ed0: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x328ed0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x328ed4: 0xf2202b  sltu        $a0, $a3, $s2
    ctx->pc = 0x328ed4u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x328ed8: 0x10800018  beqz        $a0, . + 4 + (0x18 << 2)
    ctx->pc = 0x328ED8u;
    {
        const bool branch_taken_0x328ed8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x328EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328ED8u;
        // 0x328edc: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328ed8) {
            ctx->pc = 0x328F3Cu;
            goto label_328f3c;
        }
    }
    ctx->pc = 0x328EE0u;
label_328ee0:
    // 0x328ee0: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x328ee0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x328ee4: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x328ee4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_328ee8:
    // 0x328ee8: 0x886d0003  lwl         $t5, 0x3($v1)
    ctx->pc = 0x328ee8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 13) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 13, (int32_t)merged); }
    // 0x328eec: 0x986d0000  lwr         $t5, 0x0($v1)
    ctx->pc = 0x328eecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 13) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 13) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 13, merged64); }
    // 0x328ef0: 0xa84d0003  swl         $t5, 0x3($v0)
    ctx->pc = 0x328ef0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 13); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x328ef4: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x328ef4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x328ef8: 0xb84d0000  swr         $t5, 0x0($v0)
    ctx->pc = 0x328ef8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 13); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x328efc: 0x88680007  lwl         $t0, 0x7($v1)
    ctx->pc = 0x328efcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 8) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 8, (int32_t)merged); }
    // 0x328f00: 0x98680004  lwr         $t0, 0x4($v1)
    ctx->pc = 0x328f00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 8) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 8) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 8, merged64); }
    // 0x328f04: 0xa8480007  swl         $t0, 0x7($v0)
    ctx->pc = 0x328f04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 8); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x328f08: 0xb8480004  swr         $t0, 0x4($v0)
    ctx->pc = 0x328f08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 8); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x328f0c: 0x8865000b  lwl         $a1, 0xB($v1)
    ctx->pc = 0x328f0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 11); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 5) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 5, (int32_t)merged); }
    // 0x328f10: 0x98650008  lwr         $a1, 0x8($v1)
    ctx->pc = 0x328f10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 5) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 5) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 5, merged64); }
    // 0x328f14: 0xa845000b  swl         $a1, 0xB($v0)
    ctx->pc = 0x328f14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 11); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 5); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x328f18: 0xb8450008  swr         $a1, 0x8($v0)
    ctx->pc = 0x328f18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 5); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x328f1c: 0xf2202b  sltu        $a0, $a3, $s2
    ctx->pc = 0x328f1cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x328f20: 0x886d000f  lwl         $t5, 0xF($v1)
    ctx->pc = 0x328f20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 13) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 13, (int32_t)merged); }
    // 0x328f24: 0x986d000c  lwr         $t5, 0xC($v1)
    ctx->pc = 0x328f24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 12); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 13) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 13) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 13, merged64); }
    // 0x328f28: 0xa84d000f  swl         $t5, 0xF($v0)
    ctx->pc = 0x328f28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 13); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x328f2c: 0xb84d000c  swr         $t5, 0xC($v0)
    ctx->pc = 0x328f2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 12); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 13); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x328f30: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x328f30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x328f34: 0x1480ffec  bnez        $a0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x328F34u;
    {
        const bool branch_taken_0x328f34 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x328F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328F34u;
        // 0x328f38: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328f34) {
            ctx->pc = 0x328EE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_328ee8;
        }
    }
    ctx->pc = 0x328F3Cu;
label_328f3c:
    // 0x328f3c: 0x8e62003c  lw          $v0, 0x3C($s3)
    ctx->pc = 0x328f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 60)));
label_328f40:
    // 0x328f40: 0x50400051  beql        $v0, $zero, . + 4 + (0x51 << 2)
    ctx->pc = 0x328F40u;
    {
        const bool branch_taken_0x328f40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x328f40) {
            ctx->pc = 0x328F44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x328F40u;
            // 0x328f44: 0x8e620040  lw          $v0, 0x40($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x329088u;
            goto label_329088;
        }
    }
    ctx->pc = 0x328F48u;
    // 0x328f48: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x328f48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x328f4c: 0x240c0100  addiu       $t4, $zero, 0x100
    ctx->pc = 0x328f4cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x328f50: 0x266b000c  addiu       $t3, $s3, 0xC
    ctx->pc = 0x328f50u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 19), 12));
    // 0x328f54: 0x26aa0034  addiu       $t2, $s5, 0x34
    ctx->pc = 0x328f54u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 21), 52));
    // 0x328f58: 0x62880  sll         $a1, $a2, 2
    ctx->pc = 0x328f58u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x328f5c: 0x0  nop
    ctx->pc = 0x328f5cu;
    // NOP
label_328f60:
    // 0x328f60: 0x8e620040  lw          $v0, 0x40($s3)
    ctx->pc = 0x328f60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
    // 0x328f64: 0xcc2004  sllv        $a0, $t4, $a2
    ctx->pc = 0x328f64u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 12), GPR_U32(ctx, 6) & 0x1F));
    // 0x328f68: 0x1651821  addu        $v1, $t3, $a1
    ctx->pc = 0x328f68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 5)));
    // 0x328f6c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x328f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x328f70: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x328f70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x328f74: 0x1040003f  beqz        $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x328F74u;
    {
        const bool branch_taken_0x328f74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x328F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328F74u;
        // 0x328f78: 0x24c90001  addiu       $t1, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328f74) {
            ctx->pc = 0x329074u;
            goto label_329074;
        }
    }
    ctx->pc = 0x328F7Cu;
    // 0x328f7c: 0x1060003d  beqz        $v1, . + 4 + (0x3D << 2)
    ctx->pc = 0x328F7Cu;
    {
        const bool branch_taken_0x328f7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x328F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328F7Cu;
        // 0x328f80: 0x1451021  addu        $v0, $t2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328f7c) {
            ctx->pc = 0x329074u;
            goto label_329074;
        }
    }
    ctx->pc = 0x328F84u;
    // 0x328f84: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x328f84u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x328f88: 0x1240003a  beqz        $s2, . + 4 + (0x3A << 2)
    ctx->pc = 0x328F88u;
    {
        const bool branch_taken_0x328f88 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x328F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328F88u;
        // 0x328f8c: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328f88) {
            ctx->pc = 0x329074u;
            goto label_329074;
        }
    }
    ctx->pc = 0x328F90u;
    // 0x328f90: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x328f90u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x328f94: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x328f94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x328f98: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x328f98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x328f9c: 0x1a400015  blez        $s2, . + 4 + (0x15 << 2)
    ctx->pc = 0x328F9Cu;
    {
        const bool branch_taken_0x328f9c = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x328FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328F9Cu;
        // 0x328fa0: 0x32440003  andi        $a0, $s2, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x328f9c) {
            ctx->pc = 0x328FF4u;
            goto label_328ff4;
        }
    }
    ctx->pc = 0x328FA4u;
    // 0x328fa4: 0x1080001c  beqz        $a0, . + 4 + (0x1C << 2)
    ctx->pc = 0x328FA4u;
    {
        const bool branch_taken_0x328fa4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x328FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328FA4u;
        // 0x328fa8: 0x28820002  slti        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x328fa4) {
            ctx->pc = 0x329018u;
            goto label_329018;
        }
    }
    ctx->pc = 0x328FACu;
    // 0x328fac: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x328FACu;
    {
        const bool branch_taken_0x328fac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x328FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328FACu;
        // 0x328fb0: 0x28820003  slti        $v0, $a0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x328fac) {
            ctx->pc = 0x328FF4u;
            goto label_328ff4;
        }
    }
    ctx->pc = 0x328FB4u;
    // 0x328fb4: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x328FB4u;
    {
        const bool branch_taken_0x328fb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x328fb4) {
            ctx->pc = 0x328FD8u;
            goto label_328fd8;
        }
    }
    ctx->pc = 0x328FBCu;
    // 0x328fbc: 0x686d0007  ldl         $t5, 0x7($v1)
    ctx->pc = 0x328fbcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem << shift)); }
    // 0x328fc0: 0x6c6d0000  ldr         $t5, 0x0($v1)
    ctx->pc = 0x328fc0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem >> shift)); }
    // 0x328fc4: 0xb10d0007  sdl         $t5, 0x7($t0)
    ctx->pc = 0x328fc4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 13); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x328fc8: 0x25060008  addiu       $a2, $t0, 0x8
    ctx->pc = 0x328fc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x328fcc: 0xb50d0000  sdr         $t5, 0x0($t0)
    ctx->pc = 0x328fccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 13); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x328fd0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x328fd0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x328fd4: 0x24650008  addiu       $a1, $v1, 0x8
    ctx->pc = 0x328fd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
label_328fd8:
    // 0x328fd8: 0x68a80007  ldl         $t0, 0x7($a1)
    ctx->pc = 0x328fd8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x328fdc: 0x6ca80000  ldr         $t0, 0x0($a1)
    ctx->pc = 0x328fdcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x328fe0: 0xb0c80007  sdl         $t0, 0x7($a2)
    ctx->pc = 0x328fe0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x328fe4: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x328fe4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x328fe8: 0xb4c80000  sdr         $t0, 0x0($a2)
    ctx->pc = 0x328fe8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x328fec: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x328fecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x328ff0: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x328ff0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
label_328ff4:
    // 0x328ff4: 0x68a40007  ldl         $a0, 0x7($a1)
    ctx->pc = 0x328ff4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x328ff8: 0x6ca40000  ldr         $a0, 0x0($a1)
    ctx->pc = 0x328ff8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x328ffc: 0xb0c40007  sdl         $a0, 0x7($a2)
    ctx->pc = 0x328ffcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x329000: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x329000u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x329004: 0xb4c40000  sdr         $a0, 0x0($a2)
    ctx->pc = 0x329004u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x329008: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x329008u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x32900c: 0xf2202b  sltu        $a0, $a3, $s2
    ctx->pc = 0x32900cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x329010: 0x10800018  beqz        $a0, . + 4 + (0x18 << 2)
    ctx->pc = 0x329010u;
    {
        const bool branch_taken_0x329010 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x329014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329010u;
        // 0x329014: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329010) {
            ctx->pc = 0x329074u;
            goto label_329074;
        }
    }
    ctx->pc = 0x329018u;
label_329018:
    // 0x329018: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x329018u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32901c: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x32901cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_329020:
    // 0x329020: 0x68640007  ldl         $a0, 0x7($v1)
    ctx->pc = 0x329020u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x329024: 0x6c640000  ldr         $a0, 0x0($v1)
    ctx->pc = 0x329024u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x329028: 0xb0440007  sdl         $a0, 0x7($v0)
    ctx->pc = 0x329028u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x32902c: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x32902cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x329030: 0xb4440000  sdr         $a0, 0x0($v0)
    ctx->pc = 0x329030u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x329034: 0x686d000f  ldl         $t5, 0xF($v1)
    ctx->pc = 0x329034u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem << shift)); }
    // 0x329038: 0x6c6d0008  ldr         $t5, 0x8($v1)
    ctx->pc = 0x329038u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem >> shift)); }
    // 0x32903c: 0xb04d000f  sdl         $t5, 0xF($v0)
    ctx->pc = 0x32903cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 13); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x329040: 0xb44d0008  sdr         $t5, 0x8($v0)
    ctx->pc = 0x329040u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 13); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x329044: 0x68680017  ldl         $t0, 0x17($v1)
    ctx->pc = 0x329044u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x329048: 0x6c680010  ldr         $t0, 0x10($v1)
    ctx->pc = 0x329048u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x32904c: 0xb0480017  sdl         $t0, 0x17($v0)
    ctx->pc = 0x32904cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x329050: 0xb4480010  sdr         $t0, 0x10($v0)
    ctx->pc = 0x329050u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x329054: 0xf2202b  sltu        $a0, $a3, $s2
    ctx->pc = 0x329054u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x329058: 0x6868001f  ldl         $t0, 0x1F($v1)
    ctx->pc = 0x329058u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x32905c: 0x6c680018  ldr         $t0, 0x18($v1)
    ctx->pc = 0x32905cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x329060: 0xb048001f  sdl         $t0, 0x1F($v0)
    ctx->pc = 0x329060u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x329064: 0xb4480018  sdr         $t0, 0x18($v0)
    ctx->pc = 0x329064u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x329068: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x329068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x32906c: 0x1480ffec  bnez        $a0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x32906Cu;
    {
        const bool branch_taken_0x32906c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x329070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32906Cu;
        // 0x329070: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32906c) {
            ctx->pc = 0x329020u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_329020;
        }
    }
    ctx->pc = 0x329074u;
label_329074:
    // 0x329074: 0x120302d  daddu       $a2, $t1, $zero
    ctx->pc = 0x329074u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x329078: 0x2cc20008  sltiu       $v0, $a2, 0x8
    ctx->pc = 0x329078u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x32907c: 0x1440ffb8  bnez        $v0, . + 4 + (-0x48 << 2)
    ctx->pc = 0x32907Cu;
    {
        const bool branch_taken_0x32907c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x329080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32907Cu;
        // 0x329080: 0x62880  sll         $a1, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32907c) {
            ctx->pc = 0x328F60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_328f60;
        }
    }
    ctx->pc = 0x329084u;
    // 0x329084: 0x8e620040  lw          $v0, 0x40($s3)
    ctx->pc = 0x329084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
label_329088:
    // 0x329088: 0x30420101  andi        $v0, $v0, 0x101
    ctx->pc = 0x329088u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)257);
    // 0x32908c: 0x10400082  beqz        $v0, . + 4 + (0x82 << 2)
    ctx->pc = 0x32908Cu;
    {
        const bool branch_taken_0x32908c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32908c) {
            ctx->pc = 0x329298u;
            goto label_329298;
        }
    }
    ctx->pc = 0x329094u;
    // 0x329094: 0x8ea80034  lw          $t0, 0x34($s5)
    ctx->pc = 0x329094u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 52)));
    // 0x329098: 0x1100007f  beqz        $t0, . + 4 + (0x7F << 2)
    ctx->pc = 0x329098u;
    {
        const bool branch_taken_0x329098 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x329098) {
            ctx->pc = 0x329298u;
            goto label_329298;
        }
    }
    ctx->pc = 0x3290A0u;
    // 0x3290a0: 0x8e6a0034  lw          $t2, 0x34($s3)
    ctx->pc = 0x3290a0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
    // 0x3290a4: 0x1140003e  beqz        $t2, . + 4 + (0x3E << 2)
    ctx->pc = 0x3290A4u;
    {
        const bool branch_taken_0x3290a4 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x3290A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3290A4u;
        // 0x3290a8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3290a4) {
            ctx->pc = 0x3291A0u;
            goto label_3291a0;
        }
    }
    ctx->pc = 0x3290ACu;
    // 0x3290ac: 0x8e65005c  lw          $a1, 0x5C($s3)
    ctx->pc = 0x3290acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 92)));
    // 0x3290b0: 0x31430003  andi        $v1, $t2, 0x3
    ctx->pc = 0x3290b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)3);
    // 0x3290b4: 0xc780843c  lwc1        $f0, -0x7BC4($gp)
    ctx->pc = 0x3290b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3290b8: 0x19400016  blez        $t2, . + 4 + (0x16 << 2)
    ctx->pc = 0x3290B8u;
    {
        const bool branch_taken_0x3290b8 = (GPR_S32(ctx, 10) <= 0);
        ctx->pc = 0x3290BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3290B8u;
        // 0x3290bc: 0x24a40014  addiu       $a0, $a1, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3290b8) {
            ctx->pc = 0x329114u;
            goto label_329114;
        }
    }
    ctx->pc = 0x3290C0u;
    // 0x3290c0: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x3290C0u;
    {
        const bool branch_taken_0x3290c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3290C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3290C0u;
        // 0x3290c4: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3290c0) {
            ctx->pc = 0x329138u;
            goto label_329138;
        }
    }
    ctx->pc = 0x3290C8u;
    // 0x3290c8: 0x54400013  bnel        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x3290C8u;
    {
        const bool branch_taken_0x3290c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3290c8) {
            ctx->pc = 0x3290CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3290C8u;
            // 0x3290cc: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x329118u;
            goto label_329118;
        }
    }
    ctx->pc = 0x3290D0u;
    // 0x3290d0: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x3290d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x3290d4: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x3290D4u;
    {
        const bool branch_taken_0x3290d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3290d4) {
            ctx->pc = 0x3290D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3290D4u;
            // 0x3290d8: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3290FCu;
            goto label_3290fc;
        }
    }
    ctx->pc = 0x3290DCu;
    // 0x3290dc: 0x8ca20014  lw          $v0, 0x14($a1)
    ctx->pc = 0x3290dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x3290e0: 0x24a40040  addiu       $a0, $a1, 0x40
    ctx->pc = 0x3290e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    // 0x3290e4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x3290e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3290e8: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x3290e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x3290ec: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x3290ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x3290f0: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x3290f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x3290f4: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x3290f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x3290f8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x3290f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3290fc:
    // 0x3290fc: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x3290fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x329100: 0x2484002c  addiu       $a0, $a0, 0x2C
    ctx->pc = 0x329100u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 44));
    // 0x329104: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x329104u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x329108: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x329108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x32910c: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x32910cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x329110: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x329110u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_329114:
    // 0x329114: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x329114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_329118:
    // 0x329118: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x329118u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x32911c: 0x2484002c  addiu       $a0, $a0, 0x2C
    ctx->pc = 0x32911cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 44));
    // 0x329120: 0xea482b  sltu        $t1, $a3, $t2
    ctx->pc = 0x329120u;
    SET_GPR_U64(ctx, 9, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x329124: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x329124u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x329128: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x329128u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x32912c: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x32912cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x329130: 0x1120001b  beqz        $t1, . + 4 + (0x1B << 2)
    ctx->pc = 0x329130u;
    {
        const bool branch_taken_0x329130 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x329134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329130u;
        // 0x329134: 0xe4400000  swc1        $f0, 0x0($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x329130) {
            ctx->pc = 0x3291A0u;
            goto label_3291a0;
        }
    }
    ctx->pc = 0x329138u;
label_329138:
    // 0x329138: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x329138u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32913c: 0x0  nop
    ctx->pc = 0x32913cu;
    // NOP
label_329140:
    // 0x329140: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x329140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x329144: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x329144u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x329148: 0x8cc3002c  lw          $v1, 0x2C($a2)
    ctx->pc = 0x329148u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 44)));
    // 0x32914c: 0xea482b  sltu        $t1, $a3, $t2
    ctx->pc = 0x32914cu;
    SET_GPR_U64(ctx, 9, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x329150: 0x8cc50058  lw          $a1, 0x58($a2)
    ctx->pc = 0x329150u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 88)));
    // 0x329154: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x329154u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x329158: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x329158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x32915c: 0x8cc40084  lw          $a0, 0x84($a2)
    ctx->pc = 0x32915cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 132)));
    // 0x329160: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x329160u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x329164: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x329164u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x329168: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x329168u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x32916c: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x32916cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x329170: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x329170u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x329174: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x329174u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x329178: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x329178u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x32917c: 0xa82821  addu        $a1, $a1, $t0
    ctx->pc = 0x32917cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x329180: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x329180u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x329184: 0xe4a00004  swc1        $f0, 0x4($a1)
    ctx->pc = 0x329184u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x329188: 0x882021  addu        $a0, $a0, $t0
    ctx->pc = 0x329188u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x32918c: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x32918cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x329190: 0x24c600b0  addiu       $a2, $a2, 0xB0
    ctx->pc = 0x329190u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 176));
    // 0x329194: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x329194u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x329198: 0x1520ffe9  bnez        $t1, . + 4 + (-0x17 << 2)
    ctx->pc = 0x329198u;
    {
        const bool branch_taken_0x329198 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x32919Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329198u;
        // 0x32919c: 0xe4800000  swc1        $f0, 0x0($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x329198) {
            ctx->pc = 0x329140u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_329140;
        }
    }
    ctx->pc = 0x3291A0u;
label_3291a0:
    // 0x3291a0: 0x8e6a0038  lw          $t2, 0x38($s3)
    ctx->pc = 0x3291a0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 56)));
    // 0x3291a4: 0x1140003c  beqz        $t2, . + 4 + (0x3C << 2)
    ctx->pc = 0x3291A4u;
    {
        const bool branch_taken_0x3291a4 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x3291A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3291A4u;
        // 0x3291a8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3291a4) {
            ctx->pc = 0x329298u;
            goto label_329298;
        }
    }
    ctx->pc = 0x3291ACu;
    // 0x3291ac: 0x8e650058  lw          $a1, 0x58($s3)
    ctx->pc = 0x3291acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
    // 0x3291b0: 0x31430003  andi        $v1, $t2, 0x3
    ctx->pc = 0x3291b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)3);
    // 0x3291b4: 0x19400016  blez        $t2, . + 4 + (0x16 << 2)
    ctx->pc = 0x3291B4u;
    {
        const bool branch_taken_0x3291b4 = (GPR_S32(ctx, 10) <= 0);
        ctx->pc = 0x3291B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3291B4u;
        // 0x3291b8: 0x24a40014  addiu       $a0, $a1, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3291b4) {
            ctx->pc = 0x329210u;
            goto label_329210;
        }
    }
    ctx->pc = 0x3291BCu;
    // 0x3291bc: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x3291BCu;
    {
        const bool branch_taken_0x3291bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3291C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3291BCu;
        // 0x3291c0: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3291bc) {
            ctx->pc = 0x329234u;
            goto label_329234;
        }
    }
    ctx->pc = 0x3291C4u;
    // 0x3291c4: 0x54400013  bnel        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x3291C4u;
    {
        const bool branch_taken_0x3291c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3291c4) {
            ctx->pc = 0x3291C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3291C4u;
            // 0x3291c8: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x329214u;
            goto label_329214;
        }
    }
    ctx->pc = 0x3291CCu;
    // 0x3291cc: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x3291ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x3291d0: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x3291D0u;
    {
        const bool branch_taken_0x3291d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3291d0) {
            ctx->pc = 0x3291D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3291D0u;
            // 0x3291d4: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3291F8u;
            goto label_3291f8;
        }
    }
    ctx->pc = 0x3291D8u;
    // 0x3291d8: 0x8ca20014  lw          $v0, 0x14($a1)
    ctx->pc = 0x3291d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x3291dc: 0x24a40058  addiu       $a0, $a1, 0x58
    ctx->pc = 0x3291dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 88));
    // 0x3291e0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x3291e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3291e4: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x3291e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x3291e8: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x3291e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x3291ec: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x3291ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x3291f0: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x3291f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x3291f4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x3291f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3291f8:
    // 0x3291f8: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x3291f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x3291fc: 0x24840044  addiu       $a0, $a0, 0x44
    ctx->pc = 0x3291fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 68));
    // 0x329200: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x329200u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x329204: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x329204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x329208: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x329208u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x32920c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x32920cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_329210:
    // 0x329210: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x329210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_329214:
    // 0x329214: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x329214u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x329218: 0x24840044  addiu       $a0, $a0, 0x44
    ctx->pc = 0x329218u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 68));
    // 0x32921c: 0xea482b  sltu        $t1, $a3, $t2
    ctx->pc = 0x32921cu;
    SET_GPR_U64(ctx, 9, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x329220: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x329220u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x329224: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x329224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x329228: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x329228u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x32922c: 0x1120001a  beqz        $t1, . + 4 + (0x1A << 2)
    ctx->pc = 0x32922Cu;
    {
        const bool branch_taken_0x32922c = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x329230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32922Cu;
        // 0x329230: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32922c) {
            ctx->pc = 0x329298u;
            goto label_329298;
        }
    }
    ctx->pc = 0x329234u;
label_329234:
    // 0x329234: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x329234u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_329238:
    // 0x329238: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x329238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x32923c: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x32923cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x329240: 0x8cc30044  lw          $v1, 0x44($a2)
    ctx->pc = 0x329240u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 68)));
    // 0x329244: 0xea482b  sltu        $t1, $a3, $t2
    ctx->pc = 0x329244u;
    SET_GPR_U64(ctx, 9, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x329248: 0x8cc50088  lw          $a1, 0x88($a2)
    ctx->pc = 0x329248u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 136)));
    // 0x32924c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x32924cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x329250: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x329250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x329254: 0x8cc400cc  lw          $a0, 0xCC($a2)
    ctx->pc = 0x329254u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 204)));
    // 0x329258: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x329258u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x32925c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x32925cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x329260: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x329260u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x329264: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x329264u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x329268: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x329268u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x32926c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x32926cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x329270: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x329270u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x329274: 0xa82821  addu        $a1, $a1, $t0
    ctx->pc = 0x329274u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x329278: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x329278u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x32927c: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x32927cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x329280: 0x882021  addu        $a0, $a0, $t0
    ctx->pc = 0x329280u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x329284: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x329284u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x329288: 0x24c60110  addiu       $a2, $a2, 0x110
    ctx->pc = 0x329288u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 272));
    // 0x32928c: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x32928cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x329290: 0x1520ffe9  bnez        $t1, . + 4 + (-0x17 << 2)
    ctx->pc = 0x329290u;
    {
        const bool branch_taken_0x329290 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x329294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329290u;
        // 0x329294: 0xac800000  sw          $zero, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329290) {
            ctx->pc = 0x329238u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_329238;
        }
    }
    ctx->pc = 0x329298u;
label_329298:
    // 0x329298: 0xc0e2d08  jal         func_38B420
    ctx->pc = 0x329298u;
    SET_GPR_U32(ctx, 31, 0x3292A0u);
    ctx->pc = 0x32929Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329298u;
    // 0x32929c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38B420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38B420u, 0x329298u, 0x3292A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3292A0u;
label_3292a0:
    // 0x3292a0: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x3292a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3292a4: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x3292a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3292a8: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x3292a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3292ac: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x3292acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3292b0: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x3292b0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3292b4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3292b4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3292b8: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x3292b8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3292bc: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x3292bcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3292c0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3292c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3292c4: 0x3e00008  jr          $ra
    ctx->pc = 0x3292C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3292C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3292C4u;
        // 0x3292c8: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3292C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3292CCu;
    // 0x3292cc: 0x0  nop
    ctx->pc = 0x3292ccu;
    // NOP
    ctx->pc = 0x3292d0u;
}
