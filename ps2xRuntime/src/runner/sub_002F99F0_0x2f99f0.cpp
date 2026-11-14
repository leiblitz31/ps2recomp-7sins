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

// Function: sub_002F99F0
// Address: 0x2f99f0 - 0x2fa080
void sub_002F99F0_0x2f99f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F99F0_0x2f99f0");
#endif

    ctx->pc = 0x2f99f0u;

    // 0x2f99f0: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x2f99f0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f99f4: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2f99f4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2f99f8: 0x8503f  dsra32      $t2, $t0, 0
    ctx->pc = 0x2f99f8u;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 8) >> (32 + 0));
    // 0x2f99fc: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2f99fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2f9a00: 0xa203c  dsll32      $a0, $t2, 0
    ctx->pc = 0x2f9a00u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 10) << (32 + 0));
    // 0x2f9a04: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x2f9a04u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x2f9a08: 0x4810016  bgez        $a0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2F9A08u;
    {
        const bool branch_taken_0x2f9a08 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x2F9A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9A08u;
        // 0x2f9a0c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9a08) {
            ctx->pc = 0x2F9A64u;
            goto label_2f9a64;
        }
    }
    ctx->pc = 0x2F9A10u;
    // 0x2f9a10: 0x8103c  dsll32      $v0, $t0, 0
    ctx->pc = 0x2f9a10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) << (32 + 0));
    // 0x2f9a14: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2f9a14u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2f9a18: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2f9a18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2f9a1c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2f9a1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2f9a20: 0x21023  negu        $v0, $v0
    ctx->pc = 0x2f9a20u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x2f9a24: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x2f9a24u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x2f9a28: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2f9a28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2f9a2c: 0x41823  negu        $v1, $a0
    ctx->pc = 0x2f9a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
    // 0x2f9a30: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x2f9a30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x2f9a34: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x2f9a34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x2f9a38: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x2f9a38u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x2f9a3c: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x2f9a3cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x2f9a40: 0x2410ffff  addiu       $s0, $zero, -0x1
    ctx->pc = 0x2f9a40u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2f9a44: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x2f9a44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
    // 0x2f9a48: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2f9a48u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2f9a4c: 0xc43024  and         $a2, $a2, $a0
    ctx->pc = 0x2f9a4cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
    // 0x2f9a50: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2f9a50u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2f9a54: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x2f9a54u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2f9a58: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2f9a58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2f9a5c: 0xc34025  or          $t0, $a2, $v1
    ctx->pc = 0x2f9a5cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x2f9a60: 0x8503f  dsra32      $t2, $t0, 0
    ctx->pc = 0x2f9a60u;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 8) >> (32 + 0));
label_2f9a64:
    // 0x2f9a64: 0x5203f  dsra32      $a0, $a1, 0
    ctx->pc = 0x2f9a64u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x2f9a68: 0x4810013  bgez        $a0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2F9A68u;
    {
        const bool branch_taken_0x2f9a68 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x2F9A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9A68u;
        // 0x2f9a6c: 0x42023  negu        $a0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9a68) {
            ctx->pc = 0x2F9AB8u;
            goto label_2f9ab8;
        }
    }
    ctx->pc = 0x2F9A70u;
    // 0x2f9a70: 0x5103c  dsll32      $v0, $a1, 0
    ctx->pc = 0x2f9a70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 0));
    // 0x2f9a74: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2f9a74u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2f9a78: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x2f9a78u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x2f9a7c: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x2f9a7cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x2f9a80: 0x21023  negu        $v0, $v0
    ctx->pc = 0x2f9a80u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x2f9a84: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2f9a84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2f9a88: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2f9a88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2f9a8c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2f9a8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2f9a90: 0xe33824  and         $a3, $a3, $v1
    ctx->pc = 0x2f9a90u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
    // 0x2f9a94: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x2f9a94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x2f9a98: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x2f9a98u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x2f9a9c: 0x7183c  dsll32      $v1, $a3, 0
    ctx->pc = 0x2f9a9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) << (32 + 0));
    // 0x2f9aa0: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x2f9aa0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x2f9aa4: 0xe53824  and         $a3, $a3, $a1
    ctx->pc = 0x2f9aa4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 5));
    // 0x2f9aa8: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x2f9aa8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2f9aac: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x2f9aacu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2f9ab0: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x2f9ab0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x2f9ab4: 0xe42825  or          $a1, $a3, $a0
    ctx->pc = 0x2f9ab4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) | GPR_U64(ctx, 4));
label_2f9ab8:
    // 0x2f9ab8: 0x5483f  dsra32      $t1, $a1, 0
    ctx->pc = 0x2f9ab8u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x2f9abc: 0x8683c  dsll32      $t5, $t0, 0
    ctx->pc = 0x2f9abcu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 8) << (32 + 0));
    // 0x2f9ac0: 0xd683f  dsra32      $t5, $t5, 0
    ctx->pc = 0x2f9ac0u;
    SET_GPR_S64(ctx, 13, GPR_S64(ctx, 13) >> (32 + 0));
    // 0x2f9ac4: 0xa503c  dsll32      $t2, $t2, 0
    ctx->pc = 0x2f9ac4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << (32 + 0));
    // 0x2f9ac8: 0xa503f  dsra32      $t2, $t2, 0
    ctx->pc = 0x2f9ac8u;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 10) >> (32 + 0));
    // 0x2f9acc: 0x5383c  dsll32      $a3, $a1, 0
    ctx->pc = 0x2f9accu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) << (32 + 0));
    // 0x2f9ad0: 0x7383f  dsra32      $a3, $a3, 0
    ctx->pc = 0x2f9ad0u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 0));
    // 0x2f9ad4: 0x152000b0  bnez        $t1, . + 4 + (0xB0 << 2)
    ctx->pc = 0x2F9AD4u;
    {
        const bool branch_taken_0x2f9ad4 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F9AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9AD4u;
        // 0x2f9ad8: 0x3a0c82d  daddu       $t9, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9ad4) {
            ctx->pc = 0x2F9D98u;
            goto label_2f9d98;
        }
    }
    ctx->pc = 0x2F9ADCu;
    // 0x2f9adc: 0x147102b  sltu        $v0, $t2, $a3
    ctx->pc = 0x2f9adcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x2f9ae0: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x2F9AE0u;
    {
        const bool branch_taken_0x2f9ae0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F9AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9AE0u;
        // 0x2f9ae4: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9ae0) {
            ctx->pc = 0x2F9B60u;
            goto label_2f9b60;
        }
    }
    ctx->pc = 0x2F9AE8u;
    // 0x2f9ae8: 0x47102b  sltu        $v0, $v0, $a3
    ctx->pc = 0x2f9ae8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x2f9aec: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F9AECu;
    {
        const bool branch_taken_0x2f9aec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F9AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9AECu;
        // 0x2f9af0: 0x3c0200ff  lui         $v0, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9aec) {
            ctx->pc = 0x2F9B08u;
            goto label_2f9b08;
        }
    }
    ctx->pc = 0x2F9AF4u;
    // 0x2f9af4: 0x2ce20100  sltiu       $v0, $a3, 0x100
    ctx->pc = 0x2f9af4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x2f9af8: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x2f9af8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2f9afc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2F9AFCu;
    {
        const bool branch_taken_0x2f9afc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F9B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9AFCu;
        // 0x2f9b00: 0x2200b  movn        $a0, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9afc) {
            ctx->pc = 0x2F9B1Cu;
            goto label_2f9b1c;
        }
    }
    ctx->pc = 0x2F9B04u;
    // 0x2f9b04: 0x0  nop
    ctx->pc = 0x2f9b04u;
    // NOP
label_2f9b08:
    // 0x2f9b08: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x2f9b08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x2f9b0c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2f9b0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2f9b10: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x2f9b10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2f9b14: 0x47102b  sltu        $v0, $v0, $a3
    ctx->pc = 0x2f9b14u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x2f9b18: 0x62200b  movn        $a0, $v1, $v0
    ctx->pc = 0x2f9b18u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
label_2f9b1c:
    // 0x2f9b1c: 0x871806  srlv        $v1, $a3, $a0
    ctx->pc = 0x2f9b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 4) & 0x1F));
    // 0x2f9b20: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x2f9b20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2f9b24: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2f9b24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x2f9b28: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f9b28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f9b2c: 0x9042a060  lbu         $v0, -0x5FA0($v0)
    ctx->pc = 0x2f9b2cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294942816)));
    // 0x2f9b30: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2f9b30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2f9b34: 0xa26023  subu        $t4, $a1, $v0
    ctx->pc = 0x2f9b34u;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2f9b38: 0x11800006  beqz        $t4, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F9B38u;
    {
        const bool branch_taken_0x2f9b38 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F9B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9B38u;
        // 0x2f9b3c: 0xac1023  subu        $v0, $a1, $t4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9b38) {
            ctx->pc = 0x2F9B54u;
            goto label_2f9b54;
        }
    }
    ctx->pc = 0x2F9B40u;
    // 0x2f9b40: 0x18a1804  sllv        $v1, $t2, $t4
    ctx->pc = 0x2f9b40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 12) & 0x1F));
    // 0x2f9b44: 0x4d1006  srlv        $v0, $t5, $v0
    ctx->pc = 0x2f9b44u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 13), GPR_U32(ctx, 2) & 0x1F));
    // 0x2f9b48: 0x18d6804  sllv        $t5, $t5, $t4
    ctx->pc = 0x2f9b48u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 13), GPR_U32(ctx, 12) & 0x1F));
    // 0x2f9b4c: 0x625025  or          $t2, $v1, $v0
    ctx->pc = 0x2f9b4cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2f9b50: 0x1873804  sllv        $a3, $a3, $t4
    ctx->pc = 0x2f9b50u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 12) & 0x1F));
label_2f9b54:
    // 0x2f9b54: 0x73402  srl         $a2, $a3, 16
    ctx->pc = 0x2f9b54u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 7), 16));
    // 0x2f9b58: 0x10000059  b           . + 4 + (0x59 << 2)
    ctx->pc = 0x2F9B58u;
    {
        const bool branch_taken_0x2f9b58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F9B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9B58u;
        // 0x2f9b5c: 0x30e9ffff  andi        $t1, $a3, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9b58) {
            ctx->pc = 0x2F9CC0u;
            goto label_2f9cc0;
        }
    }
    ctx->pc = 0x2F9B60u;
label_2f9b60:
    // 0x2f9b60: 0x14e00009  bnez        $a3, . + 4 + (0x9 << 2)
    ctx->pc = 0x2F9B60u;
    {
        const bool branch_taken_0x2f9b60 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F9B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9B60u;
        // 0x2f9b64: 0x47102b  sltu        $v0, $v0, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9b60) {
            ctx->pc = 0x2F9B88u;
            goto label_2f9b88;
        }
    }
    ctx->pc = 0x2F9B68u;
    // 0x2f9b68: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f9b68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f9b6c: 0x50e00001  beql        $a3, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2F9B6Cu;
    {
        const bool branch_taken_0x2f9b6c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f9b6c) {
            ctx->pc = 0x2F9B70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F9B6Cu;
            // 0x2f9b70: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F9B74u;
            goto label_2f9b74;
        }
    }
    ctx->pc = 0x2F9B74u;
label_2f9b74:
    // 0x2f9b74: 0x49001b  divu        $zero, $v0, $t1
    ctx->pc = 0x2f9b74u;
    { uint32_t divisor = GPR_U32(ctx, 9); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x2f9b78: 0x1012  mflo        $v0
    ctx->pc = 0x2f9b78u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x2f9b7c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2f9b7cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f9b80: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2f9b80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2f9b84: 0x47102b  sltu        $v0, $v0, $a3
    ctx->pc = 0x2f9b84u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
label_2f9b88:
    // 0x2f9b88: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F9B88u;
    {
        const bool branch_taken_0x2f9b88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F9B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9B88u;
        // 0x2f9b8c: 0x3c0200ff  lui         $v0, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9b88) {
            ctx->pc = 0x2F9BA0u;
            goto label_2f9ba0;
        }
    }
    ctx->pc = 0x2F9B90u;
    // 0x2f9b90: 0x2ce20100  sltiu       $v0, $a3, 0x100
    ctx->pc = 0x2f9b90u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x2f9b94: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x2f9b94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2f9b98: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2F9B98u;
    {
        const bool branch_taken_0x2f9b98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F9B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9B98u;
        // 0x2f9b9c: 0x2200b  movn        $a0, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9b98) {
            ctx->pc = 0x2F9BB4u;
            goto label_2f9bb4;
        }
    }
    ctx->pc = 0x2F9BA0u;
label_2f9ba0:
    // 0x2f9ba0: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x2f9ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x2f9ba4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2f9ba4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2f9ba8: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x2f9ba8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2f9bac: 0x47102b  sltu        $v0, $v0, $a3
    ctx->pc = 0x2f9bacu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x2f9bb0: 0x62200b  movn        $a0, $v1, $v0
    ctx->pc = 0x2f9bb0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
label_2f9bb4:
    // 0x2f9bb4: 0x871806  srlv        $v1, $a3, $a0
    ctx->pc = 0x2f9bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 4) & 0x1F));
    // 0x2f9bb8: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x2f9bb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2f9bbc: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2f9bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x2f9bc0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f9bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f9bc4: 0x9042a060  lbu         $v0, -0x5FA0($v0)
    ctx->pc = 0x2f9bc4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294942816)));
    // 0x2f9bc8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2f9bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2f9bcc: 0xa26023  subu        $t4, $a1, $v0
    ctx->pc = 0x2f9bccu;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2f9bd0: 0x15800005  bnez        $t4, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F9BD0u;
    {
        const bool branch_taken_0x2f9bd0 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F9BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9BD0u;
        // 0x2f9bd4: 0xac7823  subu        $t7, $a1, $t4 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9bd0) {
            ctx->pc = 0x2F9BE8u;
            goto label_2f9be8;
        }
    }
    ctx->pc = 0x2F9BD8u;
    // 0x2f9bd8: 0x1475023  subu        $t2, $t2, $a3
    ctx->pc = 0x2f9bd8u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 7)));
    // 0x2f9bdc: 0x72c02  srl         $a1, $a3, 16
    ctx->pc = 0x2f9bdcu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 7), 16));
    // 0x2f9be0: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x2F9BE0u;
    {
        const bool branch_taken_0x2f9be0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F9BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9BE0u;
        // 0x2f9be4: 0x30eeffff  andi        $t6, $a3, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 14, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9be0) {
            ctx->pc = 0x2F9CB8u;
            goto label_2f9cb8;
        }
    }
    ctx->pc = 0x2F9BE8u;
label_2f9be8:
    // 0x2f9be8: 0x18a1804  sllv        $v1, $t2, $t4
    ctx->pc = 0x2f9be8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 12) & 0x1F));
    // 0x2f9bec: 0x1ed1006  srlv        $v0, $t5, $t7
    ctx->pc = 0x2f9becu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 13), GPR_U32(ctx, 15) & 0x1F));
    // 0x2f9bf0: 0x18d6804  sllv        $t5, $t5, $t4
    ctx->pc = 0x2f9bf0u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 13), GPR_U32(ctx, 12) & 0x1F));
    // 0x2f9bf4: 0x1ea2006  srlv        $a0, $t2, $t7
    ctx->pc = 0x2f9bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 10), GPR_U32(ctx, 15) & 0x1F));
    // 0x2f9bf8: 0x625025  or          $t2, $v1, $v0
    ctx->pc = 0x2f9bf8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2f9bfc: 0x1873804  sllv        $a3, $a3, $t4
    ctx->pc = 0x2f9bfcu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 12) & 0x1F));
    // 0x2f9c00: 0x72c02  srl         $a1, $a3, 16
    ctx->pc = 0x2f9c00u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 7), 16));
    // 0x2f9c04: 0x85001b  divu        $zero, $a0, $a1
    ctx->pc = 0x2f9c04u;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x2f9c08: 0xa2402  srl         $a0, $t2, 16
    ctx->pc = 0x2f9c08u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 10), 16));
    // 0x2f9c0c: 0x30eeffff  andi        $t6, $a3, 0xFFFF
    ctx->pc = 0x2f9c0cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
    // 0x2f9c10: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x2f9c10u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f9c14: 0x51200001  beql        $t1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2F9C14u;
    {
        const bool branch_taken_0x2f9c14 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f9c14) {
            ctx->pc = 0x2F9C18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F9C14u;
            // 0x2f9c18: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F9C1Cu;
            goto label_2f9c1c;
        }
    }
    ctx->pc = 0x2F9C1Cu;
label_2f9c1c:
    // 0x2f9c1c: 0x1012  mflo        $v0
    ctx->pc = 0x2f9c1cu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x2f9c20: 0x1810  mfhi        $v1
    ctx->pc = 0x2f9c20u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2f9c24: 0x4e4018  mult        $t0, $v0, $t6
    ctx->pc = 0x2f9c24u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x2f9c28: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x2f9c28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x2f9c2c: 0x643025  or          $a2, $v1, $a0
    ctx->pc = 0x2f9c2cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2f9c30: 0xc8102b  sltu        $v0, $a2, $t0
    ctx->pc = 0x2f9c30u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x2f9c34: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2F9C34u;
    {
        const bool branch_taken_0x2f9c34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F9C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9C34u;
        // 0x2f9c38: 0x1c0782d  daddu       $t7, $t6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9c34) {
            ctx->pc = 0x2F9C60u;
            goto label_2f9c60;
        }
    }
    ctx->pc = 0x2F9C3Cu;
    // 0x2f9c3c: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x2f9c3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x2f9c40: 0xc7102b  sltu        $v0, $a2, $a3
    ctx->pc = 0x2f9c40u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x2f9c44: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2F9C44u;
    {
        const bool branch_taken_0x2f9c44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f9c44) {
            ctx->pc = 0x2F9C48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F9C44u;
            // 0x2f9c48: 0xc83023  subu        $a2, $a2, $t0 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F9C64u;
            goto label_2f9c64;
        }
    }
    ctx->pc = 0x2F9C4Cu;
    // 0x2f9c4c: 0xc8102b  sltu        $v0, $a2, $t0
    ctx->pc = 0x2f9c4cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x2f9c50: 0xc71821  addu        $v1, $a2, $a3
    ctx->pc = 0x2f9c50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x2f9c54: 0x38420000  xori        $v0, $v0, 0x0
    ctx->pc = 0x2f9c54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)0);
    // 0x2f9c58: 0x62300b  movn        $a2, $v1, $v0
    ctx->pc = 0x2f9c58u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
    // 0x2f9c5c: 0x0  nop
    ctx->pc = 0x2f9c5cu;
    // NOP
label_2f9c60:
    // 0x2f9c60: 0xc83023  subu        $a2, $a2, $t0
    ctx->pc = 0x2f9c60u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
label_2f9c64:
    // 0x2f9c64: 0x3144ffff  andi        $a0, $t2, 0xFFFF
    ctx->pc = 0x2f9c64u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)65535);
    // 0x2f9c68: 0xc9001b  divu        $zero, $a2, $t1
    ctx->pc = 0x2f9c68u;
    { uint32_t divisor = GPR_U32(ctx, 9); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 6) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 6) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,6); } }
    // 0x2f9c6c: 0x51200001  beql        $t1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2F9C6Cu;
    {
        const bool branch_taken_0x2f9c6c = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f9c6c) {
            ctx->pc = 0x2F9C70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F9C6Cu;
            // 0x2f9c70: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F9C74u;
            goto label_2f9c74;
        }
    }
    ctx->pc = 0x2F9C74u;
label_2f9c74:
    // 0x2f9c74: 0x1012  mflo        $v0
    ctx->pc = 0x2f9c74u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x2f9c78: 0x1810  mfhi        $v1
    ctx->pc = 0x2f9c78u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2f9c7c: 0x4f4018  mult        $t0, $v0, $t7
    ctx->pc = 0x2f9c7cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x2f9c80: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x2f9c80u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x2f9c84: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x2f9c84u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2f9c88: 0x88102b  sltu        $v0, $a0, $t0
    ctx->pc = 0x2f9c88u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x2f9c8c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2F9C8Cu;
    {
        const bool branch_taken_0x2f9c8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F9C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9C8Cu;
        // 0x2f9c90: 0x885023  subu        $t2, $a0, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9c8c) {
            ctx->pc = 0x2F9CB8u;
            goto label_2f9cb8;
        }
    }
    ctx->pc = 0x2F9C94u;
    // 0x2f9c94: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x2f9c94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x2f9c98: 0x87102b  sltu        $v0, $a0, $a3
    ctx->pc = 0x2f9c98u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x2f9c9c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F9C9Cu;
    {
        const bool branch_taken_0x2f9c9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F9CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9C9Cu;
        // 0x2f9ca0: 0x885023  subu        $t2, $a0, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9c9c) {
            ctx->pc = 0x2F9CB8u;
            goto label_2f9cb8;
        }
    }
    ctx->pc = 0x2F9CA4u;
    // 0x2f9ca4: 0x88102b  sltu        $v0, $a0, $t0
    ctx->pc = 0x2f9ca4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x2f9ca8: 0x871821  addu        $v1, $a0, $a3
    ctx->pc = 0x2f9ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x2f9cac: 0x38420000  xori        $v0, $v0, 0x0
    ctx->pc = 0x2f9cacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)0);
    // 0x2f9cb0: 0x62200b  movn        $a0, $v1, $v0
    ctx->pc = 0x2f9cb0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
    // 0x2f9cb4: 0x885023  subu        $t2, $a0, $t0
    ctx->pc = 0x2f9cb4u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
label_2f9cb8:
    // 0x2f9cb8: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2f9cb8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f9cbc: 0x1c0482d  daddu       $t1, $t6, $zero
    ctx->pc = 0x2f9cbcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
label_2f9cc0:
    // 0x2f9cc0: 0x146001b  divu        $zero, $t2, $a2
    ctx->pc = 0x2f9cc0u;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 10) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 10) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,10); } }
    // 0x2f9cc4: 0xd2402  srl         $a0, $t5, 16
    ctx->pc = 0x2f9cc4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 13), 16));
    // 0x2f9cc8: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2F9CC8u;
    {
        const bool branch_taken_0x2f9cc8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f9cc8) {
            ctx->pc = 0x2F9CCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F9CC8u;
            // 0x2f9ccc: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F9CD0u;
            goto label_2f9cd0;
        }
    }
    ctx->pc = 0x2F9CD0u;
label_2f9cd0:
    // 0x2f9cd0: 0x1012  mflo        $v0
    ctx->pc = 0x2f9cd0u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x2f9cd4: 0x1810  mfhi        $v1
    ctx->pc = 0x2f9cd4u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2f9cd8: 0x494018  mult        $t0, $v0, $t1
    ctx->pc = 0x2f9cd8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x2f9cdc: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x2f9cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x2f9ce0: 0x642825  or          $a1, $v1, $a0
    ctx->pc = 0x2f9ce0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2f9ce4: 0xa8102b  sltu        $v0, $a1, $t0
    ctx->pc = 0x2f9ce4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x2f9ce8: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x2F9CE8u;
    {
        const bool branch_taken_0x2f9ce8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f9ce8) {
            ctx->pc = 0x2F9CECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F9CE8u;
            // 0x2f9cec: 0xa82823  subu        $a1, $a1, $t0 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F9D14u;
            goto label_2f9d14;
        }
    }
    ctx->pc = 0x2F9CF0u;
    // 0x2f9cf0: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x2f9cf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x2f9cf4: 0xa7102b  sltu        $v0, $a1, $a3
    ctx->pc = 0x2f9cf4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x2f9cf8: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F9CF8u;
    {
        const bool branch_taken_0x2f9cf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f9cf8) {
            ctx->pc = 0x2F9CFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F9CF8u;
            // 0x2f9cfc: 0xa82823  subu        $a1, $a1, $t0 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F9D14u;
            goto label_2f9d14;
        }
    }
    ctx->pc = 0x2F9D00u;
    // 0x2f9d00: 0xa8102b  sltu        $v0, $a1, $t0
    ctx->pc = 0x2f9d00u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x2f9d04: 0xa71821  addu        $v1, $a1, $a3
    ctx->pc = 0x2f9d04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x2f9d08: 0x38420000  xori        $v0, $v0, 0x0
    ctx->pc = 0x2f9d08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)0);
    // 0x2f9d0c: 0x62280b  movn        $a1, $v1, $v0
    ctx->pc = 0x2f9d0cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
    // 0x2f9d10: 0xa82823  subu        $a1, $a1, $t0
    ctx->pc = 0x2f9d10u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
label_2f9d14:
    // 0x2f9d14: 0x31a4ffff  andi        $a0, $t5, 0xFFFF
    ctx->pc = 0x2f9d14u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)65535);
    // 0x2f9d18: 0xa6001b  divu        $zero, $a1, $a2
    ctx->pc = 0x2f9d18u;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,5); } }
    // 0x2f9d1c: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2F9D1Cu;
    {
        const bool branch_taken_0x2f9d1c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f9d1c) {
            ctx->pc = 0x2F9D20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F9D1Cu;
            // 0x2f9d20: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F9D24u;
            goto label_2f9d24;
        }
    }
    ctx->pc = 0x2F9D24u;
label_2f9d24:
    // 0x2f9d24: 0x1012  mflo        $v0
    ctx->pc = 0x2f9d24u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x2f9d28: 0x1810  mfhi        $v1
    ctx->pc = 0x2f9d28u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2f9d2c: 0x494018  mult        $t0, $v0, $t1
    ctx->pc = 0x2f9d2cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x2f9d30: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x2f9d30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x2f9d34: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x2f9d34u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2f9d38: 0x88102b  sltu        $v0, $a0, $t0
    ctx->pc = 0x2f9d38u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x2f9d3c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2F9D3Cu;
    {
        const bool branch_taken_0x2f9d3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f9d3c) {
            ctx->pc = 0x2F9D60u;
            goto label_2f9d60;
        }
    }
    ctx->pc = 0x2F9D44u;
    // 0x2f9d44: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x2f9d44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x2f9d48: 0x87102b  sltu        $v0, $a0, $a3
    ctx->pc = 0x2f9d48u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x2f9d4c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F9D4Cu;
    {
        const bool branch_taken_0x2f9d4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F9D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9D4Cu;
        // 0x2f9d50: 0x88102b  sltu        $v0, $a0, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9d4c) {
            ctx->pc = 0x2F9D60u;
            goto label_2f9d60;
        }
    }
    ctx->pc = 0x2F9D54u;
    // 0x2f9d54: 0x871821  addu        $v1, $a0, $a3
    ctx->pc = 0x2f9d54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x2f9d58: 0x38420000  xori        $v0, $v0, 0x0
    ctx->pc = 0x2f9d58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)0);
    // 0x2f9d5c: 0x62200b  movn        $a0, $v1, $v0
    ctx->pc = 0x2f9d5cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
label_2f9d60:
    // 0x2f9d60: 0x132000ac  beqz        $t9, . + 4 + (0xAC << 2)
    ctx->pc = 0x2F9D60u;
    {
        const bool branch_taken_0x2f9d60 = (GPR_U64(ctx, 25) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F9D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9D60u;
        // 0x2f9d64: 0x886823  subu        $t5, $a0, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9d60) {
            ctx->pc = 0x2FA014u;
            goto label_2fa014;
        }
    }
    ctx->pc = 0x2F9D68u;
    // 0x2f9d68: 0x18d1006  srlv        $v0, $t5, $t4
    ctx->pc = 0x2f9d68u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 13), GPR_U32(ctx, 12) & 0x1F));
    // 0x2f9d6c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2f9d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2f9d70: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2f9d70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2f9d74: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2f9d74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2f9d78: 0x1635824  and         $t3, $t3, $v1
    ctx->pc = 0x2f9d78u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & GPR_U64(ctx, 3));
    // 0x2f9d7c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x2f9d7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x2f9d80: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x2f9d80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x2f9d84: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2f9d84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2f9d88: 0x1625825  or          $t3, $t3, $v0
    ctx->pc = 0x2f9d88u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 2));
    // 0x2f9d8c: 0x100000a0  b           . + 4 + (0xA0 << 2)
    ctx->pc = 0x2F9D8Cu;
    {
        const bool branch_taken_0x2f9d8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F9D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9D8Cu;
        // 0x2f9d90: 0x1635824  and         $t3, $t3, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9d8c) {
            ctx->pc = 0x2FA010u;
            goto label_2fa010;
        }
    }
    ctx->pc = 0x2F9D94u;
    // 0x2f9d94: 0x0  nop
    ctx->pc = 0x2f9d94u;
    // NOP
label_2f9d98:
    // 0x2f9d98: 0x149102b  sltu        $v0, $t2, $t1
    ctx->pc = 0x2f9d98u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x2f9d9c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2F9D9Cu;
    {
        const bool branch_taken_0x2f9d9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F9DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9D9Cu;
        // 0x2f9da0: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9d9c) {
            ctx->pc = 0x2F9DD8u;
            goto label_2f9dd8;
        }
    }
    ctx->pc = 0x2F9DA4u;
    // 0x2f9da4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2f9da4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2f9da8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2f9da8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2f9dac: 0xd103c  dsll32      $v0, $t5, 0
    ctx->pc = 0x2f9dacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 13) << (32 + 0));
    // 0x2f9db0: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x2f9db0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x2f9db4: 0x1635824  and         $t3, $t3, $v1
    ctx->pc = 0x2f9db4u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & GPR_U64(ctx, 3));
    // 0x2f9db8: 0x1625825  or          $t3, $t3, $v0
    ctx->pc = 0x2f9db8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 2));
    // 0x2f9dbc: 0xa103c  dsll32      $v0, $t2, 0
    ctx->pc = 0x2f9dbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) << (32 + 0));
    // 0x2f9dc0: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x2f9dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x2f9dc4: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2f9dc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2f9dc8: 0x1635824  and         $t3, $t3, $v1
    ctx->pc = 0x2f9dc8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & GPR_U64(ctx, 3));
    // 0x2f9dcc: 0x1625825  or          $t3, $t3, $v0
    ctx->pc = 0x2f9dccu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 2));
    // 0x2f9dd0: 0x10000090  b           . + 4 + (0x90 << 2)
    ctx->pc = 0x2F9DD0u;
    {
        const bool branch_taken_0x2f9dd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F9DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9DD0u;
        // 0x2f9dd4: 0xffab0000  sd          $t3, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9dd0) {
            ctx->pc = 0x2FA014u;
            goto label_2fa014;
        }
    }
    ctx->pc = 0x2F9DD8u;
label_2f9dd8:
    // 0x2f9dd8: 0x49102b  sltu        $v0, $v0, $t1
    ctx->pc = 0x2f9dd8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x2f9ddc: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F9DDCu;
    {
        const bool branch_taken_0x2f9ddc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F9DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9DDCu;
        // 0x2f9de0: 0x3c0200ff  lui         $v0, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9ddc) {
            ctx->pc = 0x2F9DF8u;
            goto label_2f9df8;
        }
    }
    ctx->pc = 0x2F9DE4u;
    // 0x2f9de4: 0x2d220100  sltiu       $v0, $t1, 0x100
    ctx->pc = 0x2f9de4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x2f9de8: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x2f9de8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2f9dec: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2F9DECu;
    {
        const bool branch_taken_0x2f9dec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F9DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9DECu;
        // 0x2f9df0: 0x2200b  movn        $a0, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9dec) {
            ctx->pc = 0x2F9E0Cu;
            goto label_2f9e0c;
        }
    }
    ctx->pc = 0x2F9DF4u;
    // 0x2f9df4: 0x0  nop
    ctx->pc = 0x2f9df4u;
    // NOP
label_2f9df8:
    // 0x2f9df8: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x2f9df8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x2f9dfc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2f9dfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2f9e00: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x2f9e00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2f9e04: 0x49102b  sltu        $v0, $v0, $t1
    ctx->pc = 0x2f9e04u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x2f9e08: 0x62200b  movn        $a0, $v1, $v0
    ctx->pc = 0x2f9e08u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
label_2f9e0c:
    // 0x2f9e0c: 0x891806  srlv        $v1, $t1, $a0
    ctx->pc = 0x2f9e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 9), GPR_U32(ctx, 4) & 0x1F));
    // 0x2f9e10: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x2f9e10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2f9e14: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2f9e14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x2f9e18: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f9e18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f9e1c: 0x9042a060  lbu         $v0, -0x5FA0($v0)
    ctx->pc = 0x2f9e1cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294942816)));
    // 0x2f9e20: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2f9e20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2f9e24: 0xa26023  subu        $t4, $a1, $v0
    ctx->pc = 0x2f9e24u;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2f9e28: 0x15800019  bnez        $t4, . + 4 + (0x19 << 2)
    ctx->pc = 0x2F9E28u;
    {
        const bool branch_taken_0x2f9e28 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F9E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9E28u;
        // 0x2f9e2c: 0xac7823  subu        $t7, $a1, $t4 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9e28) {
            ctx->pc = 0x2F9E90u;
            goto label_2f9e90;
        }
    }
    ctx->pc = 0x2F9E30u;
    // 0x2f9e30: 0x12a102b  sltu        $v0, $t1, $t2
    ctx->pc = 0x2f9e30u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x2f9e34: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F9E34u;
    {
        const bool branch_taken_0x2f9e34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F9E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9E34u;
        // 0x2f9e38: 0x1a71023  subu        $v0, $t5, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9e34) {
            ctx->pc = 0x2F9E48u;
            goto label_2f9e48;
        }
    }
    ctx->pc = 0x2F9E3Cu;
    // 0x2f9e3c: 0x1a7102b  sltu        $v0, $t5, $a3
    ctx->pc = 0x2f9e3cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x2f9e40: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F9E40u;
    {
        const bool branch_taken_0x2f9e40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F9E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9E40u;
        // 0x2f9e44: 0x1a71023  subu        $v0, $t5, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9e40) {
            ctx->pc = 0x2F9E58u;
            goto label_2f9e58;
        }
    }
    ctx->pc = 0x2F9E48u;
label_2f9e48:
    // 0x2f9e48: 0x1492023  subu        $a0, $t2, $t1
    ctx->pc = 0x2f9e48u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
    // 0x2f9e4c: 0x1a2182b  sltu        $v1, $t5, $v0
    ctx->pc = 0x2f9e4cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2f9e50: 0x40682d  daddu       $t5, $v0, $zero
    ctx->pc = 0x2f9e50u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f9e54: 0x835023  subu        $t2, $a0, $v1
    ctx->pc = 0x2f9e54u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_2f9e58:
    // 0x2f9e58: 0x1320006e  beqz        $t9, . + 4 + (0x6E << 2)
    ctx->pc = 0x2F9E58u;
    {
        const bool branch_taken_0x2f9e58 = (GPR_U64(ctx, 25) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F9E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9E58u;
        // 0x2f9e5c: 0xd103c  dsll32      $v0, $t5, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 13) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9e58) {
            ctx->pc = 0x2FA014u;
            goto label_2fa014;
        }
    }
    ctx->pc = 0x2F9E60u;
    // 0x2f9e60: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2f9e60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2f9e64: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2f9e64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2f9e68: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x2f9e68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x2f9e6c: 0x1635824  and         $t3, $t3, $v1
    ctx->pc = 0x2f9e6cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & GPR_U64(ctx, 3));
    // 0x2f9e70: 0x1625825  or          $t3, $t3, $v0
    ctx->pc = 0x2f9e70u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 2));
    // 0x2f9e74: 0xa103c  dsll32      $v0, $t2, 0
    ctx->pc = 0x2f9e74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) << (32 + 0));
    // 0x2f9e78: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x2f9e78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x2f9e7c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2f9e7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2f9e80: 0x1635824  and         $t3, $t3, $v1
    ctx->pc = 0x2f9e80u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & GPR_U64(ctx, 3));
    // 0x2f9e84: 0x10000062  b           . + 4 + (0x62 << 2)
    ctx->pc = 0x2F9E84u;
    {
        const bool branch_taken_0x2f9e84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F9E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9E84u;
        // 0x2f9e88: 0x1625825  or          $t3, $t3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9e84) {
            ctx->pc = 0x2FA010u;
            goto label_2fa010;
        }
    }
    ctx->pc = 0x2F9E8Cu;
    // 0x2f9e8c: 0x0  nop
    ctx->pc = 0x2f9e8cu;
    // NOP
label_2f9e90:
    // 0x2f9e90: 0x18a2804  sllv        $a1, $t2, $t4
    ctx->pc = 0x2f9e90u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 12) & 0x1F));
    // 0x2f9e94: 0x1892004  sllv        $a0, $t1, $t4
    ctx->pc = 0x2f9e94u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 12) & 0x1F));
    // 0x2f9e98: 0x1e71006  srlv        $v0, $a3, $t7
    ctx->pc = 0x2f9e98u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 15) & 0x1F));
    // 0x2f9e9c: 0x1ed1806  srlv        $v1, $t5, $t7
    ctx->pc = 0x2f9e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 13), GPR_U32(ctx, 15) & 0x1F));
    // 0x2f9ea0: 0x18d6804  sllv        $t5, $t5, $t4
    ctx->pc = 0x2f9ea0u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 13), GPR_U32(ctx, 12) & 0x1F));
    // 0x2f9ea4: 0x824825  or          $t1, $a0, $v0
    ctx->pc = 0x2f9ea4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x2f9ea8: 0x1ea2006  srlv        $a0, $t2, $t7
    ctx->pc = 0x2f9ea8u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 10), GPR_U32(ctx, 15) & 0x1F));
    // 0x2f9eac: 0x1873804  sllv        $a3, $a3, $t4
    ctx->pc = 0x2f9eacu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 12) & 0x1F));
    // 0x2f9eb0: 0xa35025  or          $t2, $a1, $v1
    ctx->pc = 0x2f9eb0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x2f9eb4: 0x93402  srl         $a2, $t1, 16
    ctx->pc = 0x2f9eb4u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 9), 16));
    // 0x2f9eb8: 0x86001b  divu        $zero, $a0, $a2
    ctx->pc = 0x2f9eb8u;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x2f9ebc: 0xa2402  srl         $a0, $t2, 16
    ctx->pc = 0x2f9ebcu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 10), 16));
    // 0x2f9ec0: 0x3125ffff  andi        $a1, $t1, 0xFFFF
    ctx->pc = 0x2f9ec0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)65535);
    // 0x2f9ec4: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2F9EC4u;
    {
        const bool branch_taken_0x2f9ec4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f9ec4) {
            ctx->pc = 0x2F9EC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F9EC4u;
            // 0x2f9ec8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F9ECCu;
            goto label_2f9ecc;
        }
    }
    ctx->pc = 0x2F9ECCu;
label_2f9ecc:
    // 0x2f9ecc: 0x1012  mflo        $v0
    ctx->pc = 0x2f9eccu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x2f9ed0: 0x1810  mfhi        $v1
    ctx->pc = 0x2f9ed0u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2f9ed4: 0x40702d  daddu       $t6, $v0, $zero
    ctx->pc = 0x2f9ed4u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f9ed8: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x2f9ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x2f9edc: 0x1c54018  mult        $t0, $t6, $a1
    ctx->pc = 0x2f9edcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 14) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x2f9ee0: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2f9ee0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2f9ee4: 0x68102b  sltu        $v0, $v1, $t0
    ctx->pc = 0x2f9ee4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x2f9ee8: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x2F9EE8u;
    {
        const bool branch_taken_0x2f9ee8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f9ee8) {
            ctx->pc = 0x2F9EECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F9EE8u;
            // 0x2f9eec: 0x681823  subu        $v1, $v1, $t0 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F9F1Cu;
            goto label_2f9f1c;
        }
    }
    ctx->pc = 0x2F9EF0u;
    // 0x2f9ef0: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x2f9ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x2f9ef4: 0x69102b  sltu        $v0, $v1, $t1
    ctx->pc = 0x2f9ef4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x2f9ef8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2F9EF8u;
    {
        const bool branch_taken_0x2f9ef8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F9EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9EF8u;
        // 0x2f9efc: 0x25ceffff  addiu       $t6, $t6, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9ef8) {
            ctx->pc = 0x2F9F18u;
            goto label_2f9f18;
        }
    }
    ctx->pc = 0x2F9F00u;
    // 0x2f9f00: 0x68102b  sltu        $v0, $v1, $t0
    ctx->pc = 0x2f9f00u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x2f9f04: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F9F04u;
    {
        const bool branch_taken_0x2f9f04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f9f04) {
            ctx->pc = 0x2F9F08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F9F04u;
            // 0x2f9f08: 0x681823  subu        $v1, $v1, $t0 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F9F1Cu;
            goto label_2f9f1c;
        }
    }
    ctx->pc = 0x2F9F0Cu;
    // 0x2f9f0c: 0x25ceffff  addiu       $t6, $t6, -0x1
    ctx->pc = 0x2f9f0cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967295));
    // 0x2f9f10: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x2f9f10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x2f9f14: 0x0  nop
    ctx->pc = 0x2f9f14u;
    // NOP
label_2f9f18:
    // 0x2f9f18: 0x681823  subu        $v1, $v1, $t0
    ctx->pc = 0x2f9f18u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
label_2f9f1c:
    // 0x2f9f1c: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2F9F1Cu;
    {
        const bool branch_taken_0x2f9f1c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f9f1c) {
            ctx->pc = 0x2F9F20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F9F1Cu;
            // 0x2f9f20: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F9F24u;
            goto label_2f9f24;
        }
    }
    ctx->pc = 0x2F9F24u;
label_2f9f24:
    // 0x2f9f24: 0x66001b  divu        $zero, $v1, $a2
    ctx->pc = 0x2f9f24u;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x2f9f28: 0x3144ffff  andi        $a0, $t2, 0xFFFF
    ctx->pc = 0x2f9f28u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)65535);
    // 0x2f9f2c: 0x1012  mflo        $v0
    ctx->pc = 0x2f9f2cu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x2f9f30: 0x1810  mfhi        $v1
    ctx->pc = 0x2f9f30u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2f9f34: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2f9f34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f9f38: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x2f9f38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x2f9f3c: 0xc54018  mult        $t0, $a2, $a1
    ctx->pc = 0x2f9f3cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x2f9f40: 0x642825  or          $a1, $v1, $a0
    ctx->pc = 0x2f9f40u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2f9f44: 0xa8102b  sltu        $v0, $a1, $t0
    ctx->pc = 0x2f9f44u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x2f9f48: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x2F9F48u;
    {
        const bool branch_taken_0x2f9f48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f9f48) {
            ctx->pc = 0x2F9F4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F9F48u;
            // 0x2f9f4c: 0xa82823  subu        $a1, $a1, $t0 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F9F78u;
            goto label_2f9f78;
        }
    }
    ctx->pc = 0x2F9F50u;
    // 0x2f9f50: 0xa92821  addu        $a1, $a1, $t1
    ctx->pc = 0x2f9f50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x2f9f54: 0xa9102b  sltu        $v0, $a1, $t1
    ctx->pc = 0x2f9f54u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x2f9f58: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F9F58u;
    {
        const bool branch_taken_0x2f9f58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F9F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9F58u;
        // 0x2f9f5c: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9f58) {
            ctx->pc = 0x2F9F74u;
            goto label_2f9f74;
        }
    }
    ctx->pc = 0x2F9F60u;
    // 0x2f9f60: 0xa8102b  sltu        $v0, $a1, $t0
    ctx->pc = 0x2f9f60u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x2f9f64: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F9F64u;
    {
        const bool branch_taken_0x2f9f64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f9f64) {
            ctx->pc = 0x2F9F68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F9F64u;
            // 0x2f9f68: 0xa82823  subu        $a1, $a1, $t0 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F9F78u;
            goto label_2f9f78;
        }
    }
    ctx->pc = 0x2F9F6Cu;
    // 0x2f9f6c: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x2f9f6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x2f9f70: 0xa92821  addu        $a1, $a1, $t1
    ctx->pc = 0x2f9f70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
label_2f9f74:
    // 0x2f9f74: 0xa82823  subu        $a1, $a1, $t0
    ctx->pc = 0x2f9f74u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
label_2f9f78:
    // 0x2f9f78: 0xe1400  sll         $v0, $t6, 16
    ctx->pc = 0x2f9f78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 14), 16));
    // 0x2f9f7c: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x2f9f7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x2f9f80: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x2f9f80u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f9f84: 0x470019  multu       $v0, $a3
    ctx->pc = 0x2f9f84u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 2) * (uint64_t)GPR_U32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x2f9f88: 0x3010  mfhi        $a2
    ctx->pc = 0x2f9f88u;
    SET_GPR_U64(ctx, 6, ctx->hi);
    // 0x2f9f8c: 0x4012  mflo        $t0
    ctx->pc = 0x2f9f8cu;
    SET_GPR_U64(ctx, 8, ctx->lo);
    // 0x2f9f90: 0x146182b  sltu        $v1, $t2, $a2
    ctx->pc = 0x2f9f90u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x2f9f94: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F9F94u;
    {
        const bool branch_taken_0x2f9f94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F9F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9F94u;
        // 0x2f9f98: 0x1071023  subu        $v0, $t0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9f94) {
            ctx->pc = 0x2F9FB0u;
            goto label_2f9fb0;
        }
    }
    ctx->pc = 0x2F9F9Cu;
    // 0x2f9f9c: 0x14ca0008  bne         $a2, $t2, . + 4 + (0x8 << 2)
    ctx->pc = 0x2F9F9Cu;
    {
        const bool branch_taken_0x2f9f9c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 10));
        ctx->pc = 0x2F9FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9F9Cu;
        // 0x2f9fa0: 0x1a8102b  sltu        $v0, $t5, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9f9c) {
            ctx->pc = 0x2F9FC0u;
            goto label_2f9fc0;
        }
    }
    ctx->pc = 0x2F9FA4u;
    // 0x2f9fa4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F9FA4u;
    {
        const bool branch_taken_0x2f9fa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F9FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9FA4u;
        // 0x2f9fa8: 0x1071023  subu        $v0, $t0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9fa4) {
            ctx->pc = 0x2F9FC0u;
            goto label_2f9fc0;
        }
    }
    ctx->pc = 0x2F9FACu;
    // 0x2f9fac: 0x0  nop
    ctx->pc = 0x2f9facu;
    // NOP
label_2f9fb0:
    // 0x2f9fb0: 0xc92023  subu        $a0, $a2, $t1
    ctx->pc = 0x2f9fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
    // 0x2f9fb4: 0x102182b  sltu        $v1, $t0, $v0
    ctx->pc = 0x2f9fb4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2f9fb8: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x2f9fb8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f9fbc: 0x833023  subu        $a2, $a0, $v1
    ctx->pc = 0x2f9fbcu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_2f9fc0:
    // 0x2f9fc0: 0x13200014  beqz        $t9, . + 4 + (0x14 << 2)
    ctx->pc = 0x2F9FC0u;
    {
        const bool branch_taken_0x2f9fc0 = (GPR_U64(ctx, 25) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F9FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9FC0u;
        // 0x2f9fc4: 0x1a82023  subu        $a0, $t5, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9fc0) {
            ctx->pc = 0x2FA014u;
            goto label_2fa014;
        }
    }
    ctx->pc = 0x2F9FC8u;
    // 0x2f9fc8: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x2f9fc8u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x2f9fcc: 0x1a4182b  sltu        $v1, $t5, $a0
    ctx->pc = 0x2f9fccu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x2f9fd0: 0xa35023  subu        $t2, $a1, $v1
    ctx->pc = 0x2f9fd0u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2f9fd4: 0x1ea1004  sllv        $v0, $t2, $t7
    ctx->pc = 0x2f9fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 15) & 0x1F));
    // 0x2f9fd8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2f9fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2f9fdc: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2f9fdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2f9fe0: 0x1842006  srlv        $a0, $a0, $t4
    ctx->pc = 0x2f9fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), GPR_U32(ctx, 12) & 0x1F));
    // 0x2f9fe4: 0x1635824  and         $t3, $t3, $v1
    ctx->pc = 0x2f9fe4u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & GPR_U64(ctx, 3));
    // 0x2f9fe8: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x2f9fe8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x2f9fec: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x2f9fecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x2f9ff0: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x2f9ff0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x2f9ff4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2f9ff4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2f9ff8: 0x18a1806  srlv        $v1, $t2, $t4
    ctx->pc = 0x2f9ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 10), GPR_U32(ctx, 12) & 0x1F));
    // 0x2f9ffc: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x2f9ffcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x2fa000: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2fa000u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2fa004: 0x1625825  or          $t3, $t3, $v0
    ctx->pc = 0x2fa004u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 2));
    // 0x2fa008: 0x1645824  and         $t3, $t3, $a0
    ctx->pc = 0x2fa008u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & GPR_U64(ctx, 4));
    // 0x2fa00c: 0x1635825  or          $t3, $t3, $v1
    ctx->pc = 0x2fa00cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 3));
label_2fa010:
    // 0x2fa010: 0xff2b0000  sd          $t3, 0x0($t9)
    ctx->pc = 0x2fa010u;
    WRITE64(ADD32(GPR_U32(ctx, 25), 0), GPR_U64(ctx, 11));
label_2fa014:
    // 0x2fa014: 0x12000016  beqz        $s0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2FA014u;
    {
        const bool branch_taken_0x2fa014 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FA018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA014u;
        // 0x2fa018: 0xdfa30000  ld          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa014) {
            ctx->pc = 0x2FA070u;
            goto label_2fa070;
        }
    }
    ctx->pc = 0x2FA01Cu;
    // 0x2fa01c: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x2fa01cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2fa020: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x2fa020u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x2fa024: 0x304c024  and         $t8, $t8, $a0
    ctx->pc = 0x2fa024u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 24) & GPR_U64(ctx, 4));
    // 0x2fa028: 0x3103c  dsll32      $v0, $v1, 0
    ctx->pc = 0x2fa028u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2fa02c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2fa02cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2fa030: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x2fa030u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x2fa034: 0x21023  negu        $v0, $v0
    ctx->pc = 0x2fa034u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x2fa038: 0x31823  negu        $v1, $v1
    ctx->pc = 0x2fa038u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x2fa03c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2fa03cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2fa040: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x2fa040u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x2fa044: 0x302c025  or          $t8, $t8, $v0
    ctx->pc = 0x2fa044u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 24) | GPR_U64(ctx, 2));
    // 0x2fa048: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2fa048u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2fa04c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x2fa04cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x2fa050: 0x18203c  dsll32      $a0, $t8, 0
    ctx->pc = 0x2fa050u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 24) << (32 + 0));
    // 0x2fa054: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x2fa054u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x2fa058: 0x302c024  and         $t8, $t8, $v0
    ctx->pc = 0x2fa058u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 24) & GPR_U64(ctx, 2));
    // 0x2fa05c: 0x4202b  sltu        $a0, $zero, $a0
    ctx->pc = 0x2fa05cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x2fa060: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x2fa060u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2fa064: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2fa064u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2fa068: 0x303c025  or          $t8, $t8, $v1
    ctx->pc = 0x2fa068u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 24) | GPR_U64(ctx, 3));
    // 0x2fa06c: 0xffb80000  sd          $t8, 0x0($sp)
    ctx->pc = 0x2fa06cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 24));
label_2fa070:
    // 0x2fa070: 0xdfa20000  ld          $v0, 0x0($sp)
    ctx->pc = 0x2fa070u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fa074: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2fa074u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2fa078: 0x3e00008  jr          $ra
    ctx->pc = 0x2FA078u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FA07Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA078u;
        // 0x2fa07c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FA078u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FA080u;
}
