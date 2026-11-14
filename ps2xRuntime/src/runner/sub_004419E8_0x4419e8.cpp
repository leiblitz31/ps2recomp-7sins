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

// Function: sub_004419E8
// Address: 0x4419e8 - 0x4422f8
void sub_004419E8_0x4419e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004419E8_0x4419e8");
#endif

    switch (ctx->pc) {
        case 0x441a6cu: goto label_441a6c;
        case 0x441b08u: goto label_441b08;
        case 0x441c90u: goto label_441c90;
        case 0x441f38u: goto label_441f38;
        case 0x441f9cu: goto label_441f9c;
        case 0x441ff4u: goto label_441ff4;
        case 0x442048u: goto label_442048;
        case 0x442078u: goto label_442078;
        case 0x442144u: goto label_442144;
        case 0x442264u: goto label_442264;
        case 0x442288u: goto label_442288;
        case 0x44229cu: goto label_44229c;
        case 0x4422acu: goto label_4422ac;
        case 0x4422c8u: goto label_4422c8;
        default: break;
    }

    ctx->pc = 0x4419e8u;

    // 0x4419e8: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x4419e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x4419ec: 0x8f83beb8  lw          $v1, -0x4148($gp)
    ctx->pc = 0x4419ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950584)));
    // 0x4419f0: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x4419f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x4419f4: 0x7fb300d0  sq          $s3, 0xD0($sp)
    ctx->pc = 0x4419f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 19));
    // 0x4419f8: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x4419f8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4419fc: 0x7fb00100  sq          $s0, 0x100($sp)
    ctx->pc = 0x4419fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 16));
    // 0x441a00: 0x3c39821  addu        $s3, $fp, $v1
    ctx->pc = 0x441a00u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 3)));
    // 0x441a04: 0x7fb100f0  sq          $s1, 0xF0($sp)
    ctx->pc = 0x441a04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 17));
    // 0x441a08: 0x7fb200e0  sq          $s2, 0xE0($sp)
    ctx->pc = 0x441a08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 18));
    // 0x441a0c: 0x7fb400c0  sq          $s4, 0xC0($sp)
    ctx->pc = 0x441a0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 20));
    // 0x441a10: 0x7fb500b0  sq          $s5, 0xB0($sp)
    ctx->pc = 0x441a10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 21));
    // 0x441a14: 0x7fb600a0  sq          $s6, 0xA0($sp)
    ctx->pc = 0x441a14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 22));
    // 0x441a18: 0x7fb70090  sq          $s7, 0x90($sp)
    ctx->pc = 0x441a18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 23));
    // 0x441a1c: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x441a1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x441a20: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x441a20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x441a24: 0x92620036  lbu         $v0, 0x36($s3)
    ctx->pc = 0x441a24u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 54)));
    // 0x441a28: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x441a28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x441a2c: 0x104000d2  beqz        $v0, . + 4 + (0xD2 << 2)
    ctx->pc = 0x441A2Cu;
    {
        const bool branch_taken_0x441a2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x441A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x441A2Cu;
        // 0x441a30: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x441a2c) {
            ctx->pc = 0x441D78u;
            goto label_441d78;
        }
    }
    ctx->pc = 0x441A34u;
    // 0x441a34: 0x8fd00024  lw          $s0, 0x24($fp)
    ctx->pc = 0x441a34u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 36)));
    // 0x441a38: 0x8e120000  lw          $s2, 0x0($s0)
    ctx->pc = 0x441a38u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x441a3c: 0x26110010  addiu       $s1, $s0, 0x10
    ctx->pc = 0x441a3cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x441a40: 0xaf84af04  sw          $a0, -0x50FC($gp)
    ctx->pc = 0x441a40u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294946564), GPR_U32(ctx, 4));
    // 0x441a44: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x441a44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x441a48: 0x93c20021  lbu         $v0, 0x21($fp)
    ctx->pc = 0x441a48u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 33)));
    // 0x441a4c: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x441a4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x441a50: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x441A50u;
    {
        const bool branch_taken_0x441a50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x441A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x441A50u;
        // 0x441a54: 0x246a0004  addiu       $t2, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x441a50) {
            ctx->pc = 0x441A64u;
            goto label_441a64;
        }
    }
    ctx->pc = 0x441A58u;
    // 0x441a58: 0x8e62002c  lw          $v0, 0x2C($s3)
    ctx->pc = 0x441a58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 44)));
    // 0x441a5c: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x441a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x441a60: 0x1425021  addu        $t2, $t2, $v0
    ctx->pc = 0x441a60u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
label_441a64:
    // 0x441a64: 0xc10a542  jal         func_429508
    ctx->pc = 0x441A64u;
    SET_GPR_U32(ctx, 31, 0x441A6Cu);
    ctx->pc = 0x441A68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x441A64u;
    // 0x441a68: 0x140282d  daddu       $a1, $t2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x429508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x429508u, 0x441A64u, 0x441A6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x441A6Cu;
label_441a6c:
    // 0x441a6c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x441a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x441a70: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x441a70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x441a74: 0x3463ffc0  ori         $v1, $v1, 0xFFC0
    ctx->pc = 0x441a74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65472);
    // 0x441a78: 0x431824  and         $v1, $v0, $v1
    ctx->pc = 0x441a78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x441a7c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x441a7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x441a80: 0x329ba  dsrl        $a1, $v1, 6
    ctx->pc = 0x441a80u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) >> 6);
    // 0x441a84: 0x8f88be24  lw          $t0, -0x41DC($gp)
    ctx->pc = 0x441a84u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950436)));
    // 0x441a88: 0x12400045  beqz        $s2, . + 4 + (0x45 << 2)
    ctx->pc = 0x441A88u;
    {
        const bool branch_taken_0x441a88 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x441A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x441A88u;
        // 0x441a8c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x441a88) {
            ctx->pc = 0x441BA0u;
            goto label_441ba0;
        }
    }
    ctx->pc = 0x441A90u;
    // 0x441a90: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x441a90u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x441a94: 0x100182d  daddu       $v1, $t0, $zero
    ctx->pc = 0x441a94u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x441a98: 0x1a400003  blez        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x441A98u;
    {
        const bool branch_taken_0x441a98 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x441A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x441A98u;
        // 0x441a9c: 0x32440001  andi        $a0, $s2, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x441a98) {
            ctx->pc = 0x441AA8u;
            goto label_441aa8;
        }
    }
    ctx->pc = 0x441AA0u;
    // 0x441aa0: 0x10800017  beqz        $a0, . + 4 + (0x17 << 2)
    ctx->pc = 0x441AA0u;
    {
        const bool branch_taken_0x441aa0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x441AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x441AA0u;
        // 0x441aa4: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x441aa0) {
            ctx->pc = 0x441B00u;
            goto label_441b00;
        }
    }
    ctx->pc = 0x441AA8u;
label_441aa8:
    // 0x441aa8: 0x7a020010  lq          $v0, 0x10($s0)
    ctx->pc = 0x441aa8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x441aac: 0x7d020000  sq          $v0, 0x0($t0)
    ctx->pc = 0x441aacu;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 2));
    // 0x441ab0: 0x25080010  addiu       $t0, $t0, 0x10
    ctx->pc = 0x441ab0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x441ab4: 0x7a020020  lq          $v0, 0x20($s0)
    ctx->pc = 0x441ab4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x441ab8: 0x7d020000  sq          $v0, 0x0($t0)
    ctx->pc = 0x441ab8u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 2));
    // 0x441abc: 0x25080010  addiu       $t0, $t0, 0x10
    ctx->pc = 0x441abcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x441ac0: 0xde020030  ld          $v0, 0x30($s0)
    ctx->pc = 0x441ac0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x441ac4: 0xde030038  ld          $v1, 0x38($s0)
    ctx->pc = 0x441ac4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x441ac8: 0x45102d  daddu       $v0, $v0, $a1
    ctx->pc = 0x441ac8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 5));
    // 0x441acc: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x441accu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x441ad0: 0x7d020000  sq          $v0, 0x0($t0)
    ctx->pc = 0x441ad0u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 2));
    // 0x441ad4: 0x25080010  addiu       $t0, $t0, 0x10
    ctx->pc = 0x441ad4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x441ad8: 0x7a020040  lq          $v0, 0x40($s0)
    ctx->pc = 0x441ad8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x441adc: 0x25030010  addiu       $v1, $t0, 0x10
    ctx->pc = 0x441adcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x441ae0: 0x7d020000  sq          $v0, 0x0($t0)
    ctx->pc = 0x441ae0u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 2));
    // 0x441ae4: 0x60402d  daddu       $t0, $v1, $zero
    ctx->pc = 0x441ae4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x441ae8: 0x26020050  addiu       $v0, $s0, 0x50
    ctx->pc = 0x441ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x441aec: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x441aecu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x441af0: 0x152302b  sltu        $a2, $t2, $s2
    ctx->pc = 0x441af0u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x441af4: 0x10c0002a  beqz        $a2, . + 4 + (0x2A << 2)
    ctx->pc = 0x441AF4u;
    {
        const bool branch_taken_0x441af4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x441AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x441AF4u;
        // 0x441af8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x441af4) {
            ctx->pc = 0x441BA0u;
            goto label_441ba0;
        }
    }
    ctx->pc = 0x441AFCu;
    // 0x441afc: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x441afcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_441b00:
    // 0x441b00: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x441b00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x441b04: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x441b04u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_441b08:
    // 0x441b08: 0x78e20000  lq          $v0, 0x0($a3)
    ctx->pc = 0x441b08u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x441b0c: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x441b0cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x441b10: 0x78e30010  lq          $v1, 0x10($a3)
    ctx->pc = 0x441b10u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x441b14: 0x7c830010  sq          $v1, 0x10($a0)
    ctx->pc = 0x441b14u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 3));
    // 0x441b18: 0xdce20020  ld          $v0, 0x20($a3)
    ctx->pc = 0x441b18u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x441b1c: 0xdd230028  ld          $v1, 0x28($t1)
    ctx->pc = 0x441b1cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 9), 40)));
    // 0x441b20: 0x45102d  daddu       $v0, $v0, $a1
    ctx->pc = 0x441b20u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 5));
    // 0x441b24: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x441b24u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x441b28: 0x7c820020  sq          $v0, 0x20($a0)
    ctx->pc = 0x441b28u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 2));
    // 0x441b2c: 0x78e20030  lq          $v0, 0x30($a3)
    ctx->pc = 0x441b2cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 7), 48)));
    // 0x441b30: 0x7c820030  sq          $v0, 0x30($a0)
    ctx->pc = 0x441b30u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 2));
    // 0x441b34: 0x78e30040  lq          $v1, 0x40($a3)
    ctx->pc = 0x441b34u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 7), 64)));
    // 0x441b38: 0x7c830040  sq          $v1, 0x40($a0)
    ctx->pc = 0x441b38u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 64), GPR_VEC(ctx, 3));
    // 0x441b3c: 0x24840050  addiu       $a0, $a0, 0x50
    ctx->pc = 0x441b3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
    // 0x441b40: 0x24e70050  addiu       $a3, $a3, 0x50
    ctx->pc = 0x441b40u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 80));
    // 0x441b44: 0x78e20000  lq          $v0, 0x0($a3)
    ctx->pc = 0x441b44u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x441b48: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x441b48u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x441b4c: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x441b4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x441b50: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x441b50u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x441b54: 0xdce20000  ld          $v0, 0x0($a3)
    ctx->pc = 0x441b54u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x441b58: 0x25290060  addiu       $t1, $t1, 0x60
    ctx->pc = 0x441b58u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 96));
    // 0x441b5c: 0xdd230008  ld          $v1, 0x8($t1)
    ctx->pc = 0x441b5cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x441b60: 0x45102d  daddu       $v0, $v0, $a1
    ctx->pc = 0x441b60u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 5));
    // 0x441b64: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x441b64u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x441b68: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x441b68u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x441b6c: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x441b6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x441b70: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x441b70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x441b74: 0x78e20000  lq          $v0, 0x0($a3)
    ctx->pc = 0x441b74u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x441b78: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x441b78u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x441b7c: 0x25080080  addiu       $t0, $t0, 0x80
    ctx->pc = 0x441b7cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 128));
    // 0x441b80: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x441b80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x441b84: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x441b84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x441b88: 0x254a0002  addiu       $t2, $t2, 0x2
    ctx->pc = 0x441b88u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 2));
    // 0x441b8c: 0x25290020  addiu       $t1, $t1, 0x20
    ctx->pc = 0x441b8cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 32));
    // 0x441b90: 0x152302b  sltu        $a2, $t2, $s2
    ctx->pc = 0x441b90u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x441b94: 0x14c0ffdc  bnez        $a2, . + 4 + (-0x24 << 2)
    ctx->pc = 0x441B94u;
    {
        const bool branch_taken_0x441b94 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x441B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x441B94u;
        // 0x441b98: 0x26310080  addiu       $s1, $s1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x441b94) {
            ctx->pc = 0x441B08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_441b08;
        }
    }
    ctx->pc = 0x441B9Cu;
    // 0x441b9c: 0x0  nop
    ctx->pc = 0x441b9cu;
    // NOP
label_441ba0:
    // 0x441ba0: 0x93c20021  lbu         $v0, 0x21($fp)
    ctx->pc = 0x441ba0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 33)));
    // 0x441ba4: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x441ba4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x441ba8: 0x1040005d  beqz        $v0, . + 4 + (0x5D << 2)
    ctx->pc = 0x441BA8u;
    {
        const bool branch_taken_0x441ba8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x441ba8) {
            ctx->pc = 0x441D20u;
            goto label_441d20;
        }
    }
    ctx->pc = 0x441BB0u;
    // 0x441bb0: 0x8e6a002c  lw          $t2, 0x2C($s3)
    ctx->pc = 0x441bb0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 44)));
    // 0x441bb4: 0x8e26fff4  lw          $a2, -0xC($s1)
    ctx->pc = 0x441bb4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294967284)));
    // 0x441bb8: 0x78c20000  lq          $v0, 0x0($a2)
    ctx->pc = 0x441bb8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x441bbc: 0x7d020000  sq          $v0, 0x0($t0)
    ctx->pc = 0x441bbcu;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 2));
    // 0x441bc0: 0x25080010  addiu       $t0, $t0, 0x10
    ctx->pc = 0x441bc0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x441bc4: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x441bc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x441bc8: 0x78c20000  lq          $v0, 0x0($a2)
    ctx->pc = 0x441bc8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x441bcc: 0x7d020000  sq          $v0, 0x0($t0)
    ctx->pc = 0x441bccu;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 2));
    // 0x441bd0: 0x25080010  addiu       $t0, $t0, 0x10
    ctx->pc = 0x441bd0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x441bd4: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x441bd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x441bd8: 0x78c20000  lq          $v0, 0x0($a2)
    ctx->pc = 0x441bd8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x441bdc: 0x7d020000  sq          $v0, 0x0($t0)
    ctx->pc = 0x441bdcu;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 2));
    // 0x441be0: 0x25080010  addiu       $t0, $t0, 0x10
    ctx->pc = 0x441be0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x441be4: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x441be4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x441be8: 0x78c20000  lq          $v0, 0x0($a2)
    ctx->pc = 0x441be8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x441bec: 0x7d020000  sq          $v0, 0x0($t0)
    ctx->pc = 0x441becu;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 2));
    // 0x441bf0: 0x25080010  addiu       $t0, $t0, 0x10
    ctx->pc = 0x441bf0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x441bf4: 0x78c20010  lq          $v0, 0x10($a2)
    ctx->pc = 0x441bf4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x441bf8: 0x7d020000  sq          $v0, 0x0($t0)
    ctx->pc = 0x441bf8u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 2));
    // 0x441bfc: 0x25080010  addiu       $t0, $t0, 0x10
    ctx->pc = 0x441bfcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x441c00: 0x254affb0  addiu       $t2, $t2, -0x50
    ctx->pc = 0x441c00u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967216));
    // 0x441c04: 0x2d420040  sltiu       $v0, $t2, 0x40
    ctx->pc = 0x441c04u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)(int64_t)(int32_t)64) ? 1 : 0);
    // 0x441c08: 0x1440003f  bnez        $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x441C08u;
    {
        const bool branch_taken_0x441c08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x441C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x441C08u;
        // 0x441c0c: 0x8fc60008  lw          $a2, 0x8($fp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x441c08) {
            ctx->pc = 0x441D08u;
            goto label_441d08;
        }
    }
    ctx->pc = 0x441C10u;
    // 0x441c10: 0x11400043  beqz        $t2, . + 4 + (0x43 << 2)
    ctx->pc = 0x441C10u;
    {
        const bool branch_taken_0x441c10 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x441C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x441C10u;
        // 0x441c14: 0xa1023  negu        $v0, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x441c10) {
            ctx->pc = 0x441D20u;
            goto label_441d20;
        }
    }
    ctx->pc = 0x441C18u;
    // 0x441c18: 0x100182d  daddu       $v1, $t0, $zero
    ctx->pc = 0x441c18u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x441c1c: 0x3042007f  andi        $v0, $v0, 0x7F
    ctx->pc = 0x441c1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)127);
    // 0x441c20: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x441C20u;
    {
        const bool branch_taken_0x441c20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x441C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x441C20u;
        // 0x441c24: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x441c20) {
            ctx->pc = 0x441C88u;
            goto label_441c88;
        }
    }
    ctx->pc = 0x441C28u;
    // 0x441c28: 0x28420040  slti        $v0, $v0, 0x40
    ctx->pc = 0x441c28u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x441c2c: 0x54400018  bnel        $v0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x441C2Cu;
    {
        const bool branch_taken_0x441c2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x441c2c) {
            ctx->pc = 0x441C30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x441C2Cu;
            // 0x441c30: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x441C90u;
            goto label_441c90;
        }
    }
    ctx->pc = 0x441C34u;
    // 0x441c34: 0x78c20000  lq          $v0, 0x0($a2)
    ctx->pc = 0x441c34u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x441c38: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x441c38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x441c3c: 0x78c30000  lq          $v1, 0x0($a2)
    ctx->pc = 0x441c3cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x441c40: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x441c40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x441c44: 0x78c40000  lq          $a0, 0x0($a2)
    ctx->pc = 0x441c44u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x441c48: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x441c48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x441c4c: 0x78c50000  lq          $a1, 0x0($a2)
    ctx->pc = 0x441c4cu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x441c50: 0x24c70010  addiu       $a3, $a2, 0x10
    ctx->pc = 0x441c50u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x441c54: 0x7d020000  sq          $v0, 0x0($t0)
    ctx->pc = 0x441c54u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 2));
    // 0x441c58: 0x25080010  addiu       $t0, $t0, 0x10
    ctx->pc = 0x441c58u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x441c5c: 0x7d030000  sq          $v1, 0x0($t0)
    ctx->pc = 0x441c5cu;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 3));
    // 0x441c60: 0x25080010  addiu       $t0, $t0, 0x10
    ctx->pc = 0x441c60u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x441c64: 0x7d040000  sq          $a0, 0x0($t0)
    ctx->pc = 0x441c64u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 4));
    // 0x441c68: 0x25080010  addiu       $t0, $t0, 0x10
    ctx->pc = 0x441c68u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x441c6c: 0x7d050000  sq          $a1, 0x0($t0)
    ctx->pc = 0x441c6cu;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 5));
    // 0x441c70: 0x25020010  addiu       $v0, $t0, 0x10
    ctx->pc = 0x441c70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x441c74: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x441c74u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x441c78: 0x254affc0  addiu       $t2, $t2, -0x40
    ctx->pc = 0x441c78u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967232));
    // 0x441c7c: 0x11400028  beqz        $t2, . + 4 + (0x28 << 2)
    ctx->pc = 0x441C7Cu;
    {
        const bool branch_taken_0x441c7c = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x441C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x441C7Cu;
        // 0x441c80: 0x60402d  daddu       $t0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x441c7c) {
            ctx->pc = 0x441D20u;
            goto label_441d20;
        }
    }
    ctx->pc = 0x441C84u;
    // 0x441c84: 0x0  nop
    ctx->pc = 0x441c84u;
    // NOP
label_441c88:
    // 0x441c88: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x441c88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x441c8c: 0x0  nop
    ctx->pc = 0x441c8cu;
    // NOP
label_441c90:
    // 0x441c90: 0x78e30010  lq          $v1, 0x10($a3)
    ctx->pc = 0x441c90u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x441c94: 0x78e40020  lq          $a0, 0x20($a3)
    ctx->pc = 0x441c94u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x441c98: 0x78e50030  lq          $a1, 0x30($a3)
    ctx->pc = 0x441c98u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 7), 48)));
    // 0x441c9c: 0x78e20000  lq          $v0, 0x0($a3)
    ctx->pc = 0x441c9cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x441ca0: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x441ca0u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x441ca4: 0x7cc30010  sq          $v1, 0x10($a2)
    ctx->pc = 0x441ca4u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 16), GPR_VEC(ctx, 3));
    // 0x441ca8: 0x7cc40020  sq          $a0, 0x20($a2)
    ctx->pc = 0x441ca8u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 32), GPR_VEC(ctx, 4));
    // 0x441cac: 0x7cc50030  sq          $a1, 0x30($a2)
    ctx->pc = 0x441cacu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 48), GPR_VEC(ctx, 5));
    // 0x441cb0: 0x78e20040  lq          $v0, 0x40($a3)
    ctx->pc = 0x441cb0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 7), 64)));
    // 0x441cb4: 0x24e70050  addiu       $a3, $a3, 0x50
    ctx->pc = 0x441cb4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 80));
    // 0x441cb8: 0x78e30000  lq          $v1, 0x0($a3)
    ctx->pc = 0x441cb8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x441cbc: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x441cbcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x441cc0: 0x78e40000  lq          $a0, 0x0($a3)
    ctx->pc = 0x441cc0u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x441cc4: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x441cc4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x441cc8: 0x78e50000  lq          $a1, 0x0($a3)
    ctx->pc = 0x441cc8u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x441ccc: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x441cccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x441cd0: 0x7cc20040  sq          $v0, 0x40($a2)
    ctx->pc = 0x441cd0u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 64), GPR_VEC(ctx, 2));
    // 0x441cd4: 0x24c60050  addiu       $a2, $a2, 0x50
    ctx->pc = 0x441cd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 80));
    // 0x441cd8: 0x7cc30000  sq          $v1, 0x0($a2)
    ctx->pc = 0x441cd8u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 3));
    // 0x441cdc: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x441cdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x441ce0: 0x7cc40000  sq          $a0, 0x0($a2)
    ctx->pc = 0x441ce0u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 4));
    // 0x441ce4: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x441ce4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x441ce8: 0x7cc50000  sq          $a1, 0x0($a2)
    ctx->pc = 0x441ce8u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 5));
    // 0x441cec: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x441cecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x441cf0: 0x254aff80  addiu       $t2, $t2, -0x80
    ctx->pc = 0x441cf0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967168));
    // 0x441cf4: 0x1540ffe6  bnez        $t2, . + 4 + (-0x1A << 2)
    ctx->pc = 0x441CF4u;
    {
        const bool branch_taken_0x441cf4 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x441CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x441CF4u;
        // 0x441cf8: 0x25080080  addiu       $t0, $t0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x441cf4) {
            ctx->pc = 0x441C90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_441c90;
        }
    }
    ctx->pc = 0x441CFCu;
    // 0x441cfc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x441CFCu;
    {
        const bool branch_taken_0x441cfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x441cfc) {
            ctx->pc = 0x441D20u;
            goto label_441d20;
        }
    }
    ctx->pc = 0x441D04u;
    // 0x441d04: 0x0  nop
    ctx->pc = 0x441d04u;
    // NOP
label_441d08:
    // 0x441d08: 0x78c30010  lq          $v1, 0x10($a2)
    ctx->pc = 0x441d08u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x441d0c: 0x78c20000  lq          $v0, 0x0($a2)
    ctx->pc = 0x441d0cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x441d10: 0x7d020000  sq          $v0, 0x0($t0)
    ctx->pc = 0x441d10u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 2));
    // 0x441d14: 0x25080010  addiu       $t0, $t0, 0x10
    ctx->pc = 0x441d14u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x441d18: 0x7d030000  sq          $v1, 0x0($t0)
    ctx->pc = 0x441d18u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 3));
    // 0x441d1c: 0x25080010  addiu       $t0, $t0, 0x10
    ctx->pc = 0x441d1cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
label_441d20:
    // 0x441d20: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x441d20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x441d24: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x441d24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x441d28: 0x3c035000  lui         $v1, 0x5000
    ctx->pc = 0x441d28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20480 << 16));
    // 0x441d2c: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x441d2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x441d30: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x441d30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x441d34: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x441d34u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x441d38: 0x7d020000  sq          $v0, 0x0($t0)
    ctx->pc = 0x441d38u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 2));
    // 0x441d3c: 0x25080010  addiu       $t0, $t0, 0x10
    ctx->pc = 0x441d3cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x441d40: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x441d40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x441d44: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x441d44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x441d48: 0x34428001  ori         $v0, $v0, 0x8001
    ctx->pc = 0x441d48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32769);
    // 0x441d4c: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x441d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x441d50: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x441d50u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x441d54: 0x7d020000  sq          $v0, 0x0($t0)
    ctx->pc = 0x441d54u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 2));
    // 0x441d58: 0x25080010  addiu       $t0, $t0, 0x10
    ctx->pc = 0x441d58u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x441d5c: 0x2403007f  addiu       $v1, $zero, 0x7F
    ctx->pc = 0x441d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x441d60: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x441d60u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x441d64: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x441d64u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x441d68: 0x7d020000  sq          $v0, 0x0($t0)
    ctx->pc = 0x441d68u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 2));
    // 0x441d6c: 0x25080010  addiu       $t0, $t0, 0x10
    ctx->pc = 0x441d6cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x441d70: 0x10000148  b           . + 4 + (0x148 << 2)
    ctx->pc = 0x441D70u;
    {
        const bool branch_taken_0x441d70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x441D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x441D70u;
        // 0x441d74: 0xaf88be24  sw          $t0, -0x41DC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294950436), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x441d70) {
            ctx->pc = 0x442294u;
            goto label_442294;
        }
    }
    ctx->pc = 0x441D78u;
label_441d78:
    // 0x441d78: 0x8fc30014  lw          $v1, 0x14($fp)
    ctx->pc = 0x441d78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x441d7c: 0xafa30044  sw          $v1, 0x44($sp)
    ctx->pc = 0x441d7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 3));
    // 0x441d80: 0x8fc3000c  lw          $v1, 0xC($fp)
    ctx->pc = 0x441d80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x441d84: 0x8fa40044  lw          $a0, 0x44($sp)
    ctx->pc = 0x441d84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x441d88: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x441d88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x441d8c: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x441d8cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x441d90: 0xaf80af04  sw          $zero, -0x50FC($gp)
    ctx->pc = 0x441d90u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294946564), GPR_U32(ctx, 0));
    // 0x441d94: 0x21502  srl         $v0, $v0, 20
    ctx->pc = 0x441d94u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 20));
    // 0x441d98: 0x8fc40018  lw          $a0, 0x18($fp)
    ctx->pc = 0x441d98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x441d9c: 0x92650016  lbu         $a1, 0x16($s3)
    ctx->pc = 0x441d9cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 22)));
    // 0x441da0: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x441da0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x441da4: 0xafa20048  sw          $v0, 0x48($sp)
    ctx->pc = 0x441da4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
    // 0x441da8: 0x318c3  sra         $v1, $v1, 3
    ctx->pc = 0x441da8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 3));
    // 0x441dac: 0x52882  srl         $a1, $a1, 2
    ctx->pc = 0x441dacu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 2));
    // 0x441db0: 0x832026  xor         $a0, $a0, $v1
    ctx->pc = 0x441db0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 3));
    // 0x441db4: 0x8fd60004  lw          $s6, 0x4($fp)
    ctx->pc = 0x441db4u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x441db8: 0x2c840001  sltiu       $a0, $a0, 0x1
    ctx->pc = 0x441db8u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x441dbc: 0x2ca20007  sltiu       $v0, $a1, 0x7
    ctx->pc = 0x441dbcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x441dc0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x441DC0u;
    {
        const bool branch_taken_0x441dc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x441DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x441DC0u;
        // 0x441dc4: 0xafa4004c  sw          $a0, 0x4C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x441dc0) {
            ctx->pc = 0x441DE4u;
            goto label_441de4;
        }
    }
    ctx->pc = 0x441DC8u;
    // 0x441dc8: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x441dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x441dcc: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x441dccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x441dd0: 0x24421700  addiu       $v0, $v0, 0x1700
    ctx->pc = 0x441dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5888));
    // 0x441dd4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x441dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x441dd8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x441dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x441ddc: 0x800008  jr          $a0
    ctx->pc = 0x441DDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x441DE4u: goto label_441de4;
            case 0x441E68u: goto label_441e68;
            case 0x441EECu: goto label_441eec;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x441DDCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x441DE4u;
label_441de4:
    // 0x441de4: 0x9e620024  lwu         $v0, 0x24($s3)
    ctx->pc = 0x441de4u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 36)));
    // 0x441de8: 0x9e630020  lwu         $v1, 0x20($s3)
    ctx->pc = 0x441de8u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x441dec: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x441decu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x441df0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x441df0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x441df4: 0x33dbe  dsrl32      $a3, $v1, 22
    ctx->pc = 0x441df4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) >> (32 + 22));
    // 0x441df8: 0x3153a  dsrl        $v0, $v1, 20
    ctx->pc = 0x441df8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) >> 20);
    // 0x441dfc: 0x3223e  dsrl32      $a0, $v1, 8
    ctx->pc = 0x441dfcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) >> (32 + 8));
    // 0x441e00: 0x32bba  dsrl        $a1, $v1, 14
    ctx->pc = 0x441e00u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) >> 14);
    // 0x441e04: 0x330be  dsrl32      $a2, $v1, 2
    ctx->pc = 0x441e04u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) >> (32 + 2));
    // 0x441e08: 0x30423fff  andi        $v0, $v0, 0x3FFF
    ctx->pc = 0x441e08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16383);
    // 0x441e0c: 0x30843fff  andi        $a0, $a0, 0x3FFF
    ctx->pc = 0x441e0cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16383);
    // 0x441e10: 0x30a5003f  andi        $a1, $a1, 0x3F
    ctx->pc = 0x441e10u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)63);
    // 0x441e14: 0x30c6003f  andi        $a2, $a2, 0x3F
    ctx->pc = 0x441e14u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)63);
    // 0x441e18: 0x30e7003f  andi        $a3, $a3, 0x3F
    ctx->pc = 0x441e18u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)63);
    // 0x441e1c: 0x30633fff  andi        $v1, $v1, 0x3FFF
    ctx->pc = 0x441e1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16383);
    // 0x441e20: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x441e20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x441e24: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x441e24u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x441e28: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x441e28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x441e2c: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x441e2cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x441e30: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x441e30u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x441e34: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x441e34u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x441e38: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x441e38u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x441e3c: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x441e3cu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x441e40: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x441e40u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x441e44: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x441e44u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x441e48: 0x7383c  dsll32      $a3, $a3, 0
    ctx->pc = 0x441e48u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 0));
    // 0x441e4c: 0x7383f  dsra32      $a3, $a3, 0
    ctx->pc = 0x441e4cu;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 0));
    // 0x441e50: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x441e50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
    // 0x441e54: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x441e54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x441e58: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x441e58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x441e5c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x441e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x441e60: 0xafa60034  sw          $a2, 0x34($sp)
    ctx->pc = 0x441e60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 6));
    // 0x441e64: 0xafa70038  sw          $a3, 0x38($sp)
    ctx->pc = 0x441e64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 7));
label_441e68:
    // 0x441e68: 0x9e62001c  lwu         $v0, 0x1C($s3)
    ctx->pc = 0x441e68u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x441e6c: 0x9e630018  lwu         $v1, 0x18($s3)
    ctx->pc = 0x441e6cu;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x441e70: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x441e70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x441e74: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x441e74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x441e78: 0x33dbe  dsrl32      $a3, $v1, 22
    ctx->pc = 0x441e78u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) >> (32 + 22));
    // 0x441e7c: 0x3153a  dsrl        $v0, $v1, 20
    ctx->pc = 0x441e7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) >> 20);
    // 0x441e80: 0x3223e  dsrl32      $a0, $v1, 8
    ctx->pc = 0x441e80u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) >> (32 + 8));
    // 0x441e84: 0x32bba  dsrl        $a1, $v1, 14
    ctx->pc = 0x441e84u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) >> 14);
    // 0x441e88: 0x330be  dsrl32      $a2, $v1, 2
    ctx->pc = 0x441e88u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) >> (32 + 2));
    // 0x441e8c: 0x30423fff  andi        $v0, $v0, 0x3FFF
    ctx->pc = 0x441e8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16383);
    // 0x441e90: 0x30843fff  andi        $a0, $a0, 0x3FFF
    ctx->pc = 0x441e90u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16383);
    // 0x441e94: 0x30a5003f  andi        $a1, $a1, 0x3F
    ctx->pc = 0x441e94u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)63);
    // 0x441e98: 0x30c6003f  andi        $a2, $a2, 0x3F
    ctx->pc = 0x441e98u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)63);
    // 0x441e9c: 0x30e7003f  andi        $a3, $a3, 0x3F
    ctx->pc = 0x441e9cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)63);
    // 0x441ea0: 0x30633fff  andi        $v1, $v1, 0x3FFF
    ctx->pc = 0x441ea0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16383);
    // 0x441ea4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x441ea4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x441ea8: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x441ea8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x441eac: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x441eacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x441eb0: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x441eb0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x441eb4: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x441eb4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x441eb8: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x441eb8u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x441ebc: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x441ebcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x441ec0: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x441ec0u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x441ec4: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x441ec4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x441ec8: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x441ec8u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x441ecc: 0x7383c  dsll32      $a3, $a3, 0
    ctx->pc = 0x441eccu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 0));
    // 0x441ed0: 0x7383f  dsra32      $a3, $a3, 0
    ctx->pc = 0x441ed0u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 0));
    // 0x441ed4: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x441ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x441ed8: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x441ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x441edc: 0xafa4000c  sw          $a0, 0xC($sp)
    ctx->pc = 0x441edcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 4));
    // 0x441ee0: 0xafa50024  sw          $a1, 0x24($sp)
    ctx->pc = 0x441ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 5));
    // 0x441ee4: 0xafa60028  sw          $a2, 0x28($sp)
    ctx->pc = 0x441ee4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 6));
    // 0x441ee8: 0xafa7002c  sw          $a3, 0x2C($sp)
    ctx->pc = 0x441ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 7));
label_441eec:
    // 0x441eec: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x441eecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x441ef0: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x441ef0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x441ef4: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x441ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
    // 0x441ef8: 0x21382  srl         $v0, $v0, 14
    ctx->pc = 0x441ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 14));
    // 0x441efc: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x441efcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x441f00: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x441f00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x441f04: 0x146000b1  bnez        $v1, . + 4 + (0xB1 << 2)
    ctx->pc = 0x441F04u;
    {
        const bool branch_taken_0x441f04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x441F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x441F04u;
        // 0x441f08: 0xafa20020  sw          $v0, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x441f04) {
            ctx->pc = 0x4421CCu;
            goto label_4421cc;
        }
    }
    ctx->pc = 0x441F0Cu;
    // 0x441f0c: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x441f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x441f10: 0x3c08ffff  lui         $t0, 0xFFFF
    ctx->pc = 0x441f10u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65535 << 16));
    // 0x441f14: 0x2662003c  addiu       $v0, $s3, 0x3C
    ctx->pc = 0x441f14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 60));
    // 0x441f18: 0x3508fff0  ori         $t0, $t0, 0xFFF0
    ctx->pc = 0x441f18u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65520);
    // 0x441f1c: 0x31982  srl         $v1, $v1, 6
    ctx->pc = 0x441f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 6));
    // 0x441f20: 0xafa20060  sw          $v0, 0x60($sp)
    ctx->pc = 0x441f20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 2));
    // 0x441f24: 0xafa30054  sw          $v1, 0x54($sp)
    ctx->pc = 0x441f24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 3));
    // 0x441f28: 0x3a0a02d  daddu       $s4, $sp, $zero
    ctx->pc = 0x441f28u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x441f2c: 0xafa80058  sw          $t0, 0x58($sp)
    ctx->pc = 0x441f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 8));
    // 0x441f30: 0xafa0005c  sw          $zero, 0x5C($sp)
    ctx->pc = 0x441f30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
    // 0x441f34: 0xafa20064  sw          $v0, 0x64($sp)
    ctx->pc = 0x441f34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 2));
label_441f38:
    // 0x441f38: 0x8fc2000c  lw          $v0, 0xC($fp)
    ctx->pc = 0x441f38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x441f3c: 0x32c5000f  andi        $a1, $s6, 0xF
    ctx->pc = 0x441f3cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)15);
    // 0x441f40: 0x8fc30010  lw          $v1, 0x10($fp)
    ctx->pc = 0x441f40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x441f44: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x441f44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x441f48: 0x8fa80050  lw          $t0, 0x50($sp)
    ctx->pc = 0x441f48u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x441f4c: 0x828007  srav        $s0, $v0, $a0
    ctx->pc = 0x441f4cu;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
    // 0x441f50: 0x1039007  srav        $s2, $v1, $t0
    ctx->pc = 0x441f50u;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 3), GPR_U32(ctx, 8) & 0x1F));
    // 0x441f54: 0x8fc40018  lw          $a0, 0x18($fp)
    ctx->pc = 0x441f54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x441f58: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x441f58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x441f5c: 0x8fa30054  lw          $v1, 0x54($sp)
    ctx->pc = 0x441f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x441f60: 0x104b807  srav        $s7, $a0, $t0
    ctx->pc = 0x441f60u;
    SET_GPR_S32(ctx, 23, SRA32(GPR_S32(ctx, 4), GPR_U32(ctx, 8) & 0x1F));
    // 0x441f64: 0x14a00079  bnez        $a1, . + 4 + (0x79 << 2)
    ctx->pc = 0x441F64u;
    {
        const bool branch_taken_0x441f64 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x441F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x441F64u;
        // 0x441f68: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x441f64) {
            ctx->pc = 0x44214Cu;
            goto label_44214c;
        }
    }
    ctx->pc = 0x441F6Cu;
    // 0x441f6c: 0x8fa4004c  lw          $a0, 0x4C($sp)
    ctx->pc = 0x441f6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x441f70: 0x10800048  beqz        $a0, . + 4 + (0x48 << 2)
    ctx->pc = 0x441F70u;
    {
        const bool branch_taken_0x441f70 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x441F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x441F70u;
        // 0x441f74: 0x8fa80064  lw          $t0, 0x64($sp) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x441f70) {
            ctx->pc = 0x442094u;
            goto label_442094;
        }
    }
    ctx->pc = 0x441F78u;
    // 0x441f78: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x441f78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x441f7c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x441F7Cu;
    {
        const bool branch_taken_0x441f7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x441F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x441F7Cu;
        // 0x441f80: 0x2675003c  addiu       $s5, $s3, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 19), 60));
        ctx->in_delay_slot = false;
        if (branch_taken_0x441f7c) {
            ctx->pc = 0x441FA4u;
            goto label_441fa4;
        }
    }
    ctx->pc = 0x441F84u;
    // 0x441f84: 0x92680034  lbu         $t0, 0x34($s3)
    ctx->pc = 0x441f84u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 52)));
    // 0x441f88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x441f88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x441f8c: 0x8fa70044  lw          $a3, 0x44($sp)
    ctx->pc = 0x441f8cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x441f90: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x441f90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x441f94: 0xc1103f8  jal         func_440FE0
    ctx->pc = 0x441F94u;
    SET_GPR_U32(ctx, 31, 0x441F9Cu);
    ctx->pc = 0x441F98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x441F94u;
    // 0x441f98: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x440FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x440FE0u, 0x441F94u, 0x441F9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x441F9Cu;
label_441f9c:
    // 0x441f9c: 0x8fa30064  lw          $v1, 0x64($sp)
    ctx->pc = 0x441f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
    // 0x441fa0: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x441fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_441fa4:
    // 0x441fa4: 0x92620036  lbu         $v0, 0x36($s3)
    ctx->pc = 0x441fa4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 54)));
    // 0x441fa8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x441fa8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x441fac: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x441facu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x441fb0: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x441FB0u;
    {
        const bool branch_taken_0x441fb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x441FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x441FB0u;
        // 0x441fb4: 0x24040013  addiu       $a0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x441fb0) {
            ctx->pc = 0x441FFCu;
            goto label_441ffc;
        }
    }
    ctx->pc = 0x441FB8u;
    // 0x441fb8: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x441fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x441fbc: 0x21502  srl         $v0, $v0, 20
    ctx->pc = 0x441fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 20));
    // 0x441fc0: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x441fc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x441fc4: 0x1444000e  bne         $v0, $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x441FC4u;
    {
        const bool branch_taken_0x441fc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x441FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x441FC4u;
        // 0x441fc8: 0x30620004  andi        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x441fc4) {
            ctx->pc = 0x442000u;
            goto label_442000;
        }
    }
    ctx->pc = 0x441FCCu;
    // 0x441fcc: 0x8fa80060  lw          $t0, 0x60($sp)
    ctx->pc = 0x441fccu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x441fd0: 0x102042  srl         $a0, $s0, 1
    ctx->pc = 0x441fd0u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
    // 0x441fd4: 0x8e870020  lw          $a3, 0x20($s4)
    ctx->pc = 0x441fd4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x441fd8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x441fd8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x441fdc: 0x8d090000  lw          $t1, 0x0($t0)
    ctx->pc = 0x441fdcu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x441fe0: 0x122842  srl         $a1, $s2, 1
    ctx->pc = 0x441fe0u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 18), 1));
    // 0x441fe4: 0x926a0034  lbu         $t2, 0x34($s3)
    ctx->pc = 0x441fe4u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 52)));
    // 0x441fe8: 0x73842  srl         $a3, $a3, 1
    ctx->pc = 0x441fe8u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 7), 1));
    // 0x441fec: 0xc110514  jal         func_441450
    ctx->pc = 0x441FECu;
    SET_GPR_U32(ctx, 31, 0x441FF4u);
    ctx->pc = 0x441FF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x441FECu;
    // 0x441ff0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x441450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x441450u, 0x441FECu, 0x441FF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x441FF4u;
label_441ff4:
    // 0x441ff4: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x441FF4u;
    {
        const bool branch_taken_0x441ff4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x441FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x441FF4u;
        // 0x441ff8: 0x92620034  lbu         $v0, 0x34($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x441ff4) {
            ctx->pc = 0x44207Cu;
            goto label_44207c;
        }
    }
    ctx->pc = 0x441FFCu;
label_441ffc:
    // 0x441ffc: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x441ffcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
label_442000:
    // 0x442000: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x442000u;
    {
        const bool branch_taken_0x442000 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x442004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x442000u;
        // 0x442004: 0x24030014  addiu       $v1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x442000) {
            ctx->pc = 0x442050u;
            goto label_442050;
        }
    }
    ctx->pc = 0x442008u;
    // 0x442008: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x442008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x44200c: 0x21502  srl         $v0, $v0, 20
    ctx->pc = 0x44200cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 20));
    // 0x442010: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x442010u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x442014: 0x1443000f  bne         $v0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x442014u;
    {
        const bool branch_taken_0x442014 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x442018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x442014u;
        // 0x442018: 0x8fa8005c  lw          $t0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x442014) {
            ctx->pc = 0x442054u;
            goto label_442054;
        }
    }
    ctx->pc = 0x44201Cu;
    // 0x44201c: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x44201cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x442020: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x442020u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x442024: 0x8e870020  lw          $a3, 0x20($s4)
    ctx->pc = 0x442024u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x442028: 0x122842  srl         $a1, $s2, 1
    ctx->pc = 0x442028u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 18), 1));
    // 0x44202c: 0x2a41021  addu        $v0, $s5, $a0
    ctx->pc = 0x44202cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
    // 0x442030: 0x926a0034  lbu         $t2, 0x34($s3)
    ctx->pc = 0x442030u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 52)));
    // 0x442034: 0x8c490000  lw          $t1, 0x0($v0)
    ctx->pc = 0x442034u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x442038: 0x102042  srl         $a0, $s0, 1
    ctx->pc = 0x442038u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
    // 0x44203c: 0x73842  srl         $a3, $a3, 1
    ctx->pc = 0x44203cu;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 7), 1));
    // 0x442040: 0xc110514  jal         func_441450
    ctx->pc = 0x442040u;
    SET_GPR_U32(ctx, 31, 0x442048u);
    ctx->pc = 0x442044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x442040u;
    // 0x442044: 0x24080002  addiu       $t0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x441450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x441450u, 0x442040u, 0x442048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x442048u;
label_442048:
    // 0x442048: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x442048u;
    {
        const bool branch_taken_0x442048 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x44204Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x442048u;
        // 0x44204c: 0x92620034  lbu         $v0, 0x34($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x442048) {
            ctx->pc = 0x44207Cu;
            goto label_44207c;
        }
    }
    ctx->pc = 0x442050u;
label_442050:
    // 0x442050: 0x8fa8005c  lw          $t0, 0x5C($sp)
    ctx->pc = 0x442050u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_442054:
    // 0x442054: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x442054u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x442058: 0x8e870020  lw          $a3, 0x20($s4)
    ctx->pc = 0x442058u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x44205c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x44205cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x442060: 0x2a81021  addu        $v0, $s5, $t0
    ctx->pc = 0x442060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 8)));
    // 0x442064: 0x926a0034  lbu         $t2, 0x34($s3)
    ctx->pc = 0x442064u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 52)));
    // 0x442068: 0x8c490000  lw          $t1, 0x0($v0)
    ctx->pc = 0x442068u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x44206c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x44206cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x442070: 0xc110514  jal         func_441450
    ctx->pc = 0x442070u;
    SET_GPR_U32(ctx, 31, 0x442078u);
    ctx->pc = 0x442074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x442070u;
    // 0x442074: 0x8fa80048  lw          $t0, 0x48($sp) (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x441450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x441450u, 0x442070u, 0x442078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x442078u;
label_442078:
    // 0x442078: 0x92620034  lbu         $v0, 0x34($s3)
    ctx->pc = 0x442078u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 52)));
label_44207c:
    // 0x44207c: 0x1440003b  bnez        $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x44207Cu;
    {
        const bool branch_taken_0x44207c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x442080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44207Cu;
        // 0x442080: 0x2f21018  mult        $v0, $s7, $s2 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 23) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x44207c) {
            ctx->pc = 0x44216Cu;
            goto label_44216c;
        }
    }
    ctx->pc = 0x442084u;
    // 0x442084: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x442084u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x442088: 0x2a31021  addu        $v0, $s5, $v1
    ctx->pc = 0x442088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x44208c: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x44208Cu;
    {
        const bool branch_taken_0x44208c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x442090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44208Cu;
        // 0x442090: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44208c) {
            ctx->pc = 0x442168u;
            goto label_442168;
        }
    }
    ctx->pc = 0x442094u;
label_442094:
    // 0x442094: 0x92620036  lbu         $v0, 0x36($s3)
    ctx->pc = 0x442094u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 54)));
    // 0x442098: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x442098u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44209c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x44209cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x4420a0: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x4420A0u;
    {
        const bool branch_taken_0x4420a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4420A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4420A0u;
        // 0x4420a4: 0x24040013  addiu       $a0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4420a0) {
            ctx->pc = 0x4420E0u;
            goto label_4420e0;
        }
    }
    ctx->pc = 0x4420A8u;
    // 0x4420a8: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x4420a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x4420ac: 0x21502  srl         $v0, $v0, 20
    ctx->pc = 0x4420acu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 20));
    // 0x4420b0: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x4420b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x4420b4: 0x1444000b  bne         $v0, $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x4420B4u;
    {
        const bool branch_taken_0x4420b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x4420B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4420B4u;
        // 0x4420b8: 0x30620004  andi        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4420b4) {
            ctx->pc = 0x4420E4u;
            goto label_4420e4;
        }
    }
    ctx->pc = 0x4420BCu;
    // 0x4420bc: 0x8e880020  lw          $t0, 0x20($s4)
    ctx->pc = 0x4420bcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x4420c0: 0x102042  srl         $a0, $s0, 1
    ctx->pc = 0x4420c0u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
    // 0x4420c4: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x4420c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4420c8: 0x122842  srl         $a1, $s2, 1
    ctx->pc = 0x4420c8u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 18), 1));
    // 0x4420cc: 0x84042  srl         $t0, $t0, 1
    ctx->pc = 0x4420ccu;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 8), 1));
    // 0x4420d0: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x4420d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4420d4: 0x24090020  addiu       $t1, $zero, 0x20
    ctx->pc = 0x4420d4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x4420d8: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x4420D8u;
    {
        const bool branch_taken_0x4420d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4420DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4420D8u;
        // 0x4420dc: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4420d8) {
            ctx->pc = 0x44213Cu;
            goto label_44213c;
        }
    }
    ctx->pc = 0x4420E0u;
label_4420e0:
    // 0x4420e0: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x4420e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
label_4420e4:
    // 0x4420e4: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x4420E4u;
    {
        const bool branch_taken_0x4420e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4420E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4420E4u;
        // 0x4420e8: 0x24080014  addiu       $t0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4420e4) {
            ctx->pc = 0x442120u;
            goto label_442120;
        }
    }
    ctx->pc = 0x4420ECu;
    // 0x4420ec: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x4420ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x4420f0: 0x21502  srl         $v0, $v0, 20
    ctx->pc = 0x4420f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 20));
    // 0x4420f4: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x4420f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x4420f8: 0x1448000a  bne         $v0, $t0, . + 4 + (0xA << 2)
    ctx->pc = 0x4420F8u;
    {
        const bool branch_taken_0x4420f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 8));
        ctx->pc = 0x4420FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4420F8u;
        // 0x4420fc: 0x8e880020  lw          $t0, 0x20($s4) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4420f8) {
            ctx->pc = 0x442124u;
            goto label_442124;
        }
    }
    ctx->pc = 0x442100u;
    // 0x442100: 0x102042  srl         $a0, $s0, 1
    ctx->pc = 0x442100u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
    // 0x442104: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x442104u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x442108: 0x122842  srl         $a1, $s2, 1
    ctx->pc = 0x442108u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 18), 1));
    // 0x44210c: 0x84042  srl         $t0, $t0, 1
    ctx->pc = 0x44210cu;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 8), 1));
    // 0x442110: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x442110u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x442114: 0x24090010  addiu       $t1, $zero, 0x10
    ctx->pc = 0x442114u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x442118: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x442118u;
    {
        const bool branch_taken_0x442118 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x44211Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x442118u;
        // 0x44211c: 0x240a0002  addiu       $t2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x442118) {
            ctx->pc = 0x44213Cu;
            goto label_44213c;
        }
    }
    ctx->pc = 0x442120u;
label_442120:
    // 0x442120: 0x8e880020  lw          $t0, 0x20($s4)
    ctx->pc = 0x442120u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
label_442124:
    // 0x442124: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x442124u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x442128: 0x8fa90044  lw          $t1, 0x44($sp)
    ctx->pc = 0x442128u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x44212c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x44212cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x442130: 0x8faa0048  lw          $t2, 0x48($sp)
    ctx->pc = 0x442130u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x442134: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x442134u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x442138: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x442138u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_44213c:
    // 0x44213c: 0xc1105a2  jal         func_441688
    ctx->pc = 0x44213Cu;
    SET_GPR_U32(ctx, 31, 0x442144u);
    ctx->pc = 0x442140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44213Cu;
    // 0x442140: 0x2e0582d  daddu       $t3, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x441688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x441688u, 0x44213Cu, 0x442144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x442144u;
label_442144:
    // 0x442144: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x442144u;
    {
        const bool branch_taken_0x442144 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x442148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x442144u;
        // 0x442148: 0x2f21018  mult        $v0, $s7, $s2 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 23) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x442144) {
            ctx->pc = 0x44216Cu;
            goto label_44216c;
        }
    }
    ctx->pc = 0x44214Cu;
label_44214c:
    // 0x44214c: 0x92620036  lbu         $v0, 0x36($s3)
    ctx->pc = 0x44214cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 54)));
    // 0x442150: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x442150u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x442154: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x442154u;
    {
        const bool branch_taken_0x442154 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x442158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x442154u;
        // 0x442158: 0x24040013  addiu       $a0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x442154) {
            ctx->pc = 0x442168u;
            goto label_442168;
        }
    }
    ctx->pc = 0x44215Cu;
    // 0x44215c: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x44215cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x442160: 0x21502  srl         $v0, $v0, 20
    ctx->pc = 0x442160u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 20));
    // 0x442164: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x442164u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
label_442168:
    // 0x442168: 0x2f21018  mult        $v0, $s7, $s2
    ctx->pc = 0x442168u;
    { int64_t result = (int64_t)GPR_S32(ctx, 23) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_44216c:
    // 0x44216c: 0x56b021  addu        $s6, $v0, $s6
    ctx->pc = 0x44216cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x442170: 0x32c2000f  andi        $v0, $s6, 0xF
    ctx->pc = 0x442170u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)15);
    // 0x442174: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x442174u;
    {
        const bool branch_taken_0x442174 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x442178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x442174u;
        // 0x442178: 0x8fa30058  lw          $v1, 0x58($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x442174) {
            ctx->pc = 0x442184u;
            goto label_442184;
        }
    }
    ctx->pc = 0x44217Cu;
    // 0x44217c: 0x26c2000f  addiu       $v0, $s6, 0xF
    ctx->pc = 0x44217cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 15));
    // 0x442180: 0x43b024  and         $s6, $v0, $v1
    ctx->pc = 0x442180u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_442184:
    // 0x442184: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x442184u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x442188: 0x26940004  addiu       $s4, $s4, 0x4
    ctx->pc = 0x442188u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
    // 0x44218c: 0x8fa8005c  lw          $t0, 0x5C($sp)
    ctx->pc = 0x44218cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x442190: 0x92620016  lbu         $v0, 0x16($s3)
    ctx->pc = 0x442190u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 22)));
    // 0x442194: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x442194u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x442198: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x442198u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x44219c: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x44219cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x4421a0: 0x8fa30064  lw          $v1, 0x64($sp)
    ctx->pc = 0x4421a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
    // 0x4421a4: 0x21082  srl         $v0, $v0, 2
    ctx->pc = 0x4421a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x4421a8: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x4421a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x4421ac: 0xafa8005c  sw          $t0, 0x5C($sp)
    ctx->pc = 0x4421acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 8));
    // 0x4421b0: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x4421b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x4421b4: 0x8fa80050  lw          $t0, 0x50($sp)
    ctx->pc = 0x4421b4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4421b8: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x4421b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x4421bc: 0xafa30064  sw          $v1, 0x64($sp)
    ctx->pc = 0x4421bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 3));
    // 0x4421c0: 0x48102a  slt         $v0, $v0, $t0
    ctx->pc = 0x4421c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x4421c4: 0x1040ff5c  beqz        $v0, . + 4 + (-0xA4 << 2)
    ctx->pc = 0x4421C4u;
    {
        const bool branch_taken_0x4421c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4421C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4421C4u;
        // 0x4421c8: 0xafa40060  sw          $a0, 0x60($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4421c4) {
            ctx->pc = 0x441F38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_441f38;
        }
    }
    ctx->pc = 0x4421CCu;
label_4421cc:
    // 0x4421cc: 0x8e62002c  lw          $v0, 0x2C($s3)
    ctx->pc = 0x4421ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 44)));
    // 0x4421d0: 0x10400030  beqz        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x4421D0u;
    {
        const bool branch_taken_0x4421d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4421d0) {
            ctx->pc = 0x442294u;
            goto label_442294;
        }
    }
    ctx->pc = 0x4421D8u;
    // 0x4421d8: 0x8fc30014  lw          $v1, 0x14($fp)
    ctx->pc = 0x4421d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x4421dc: 0x28620009  slti        $v0, $v1, 0x9
    ctx->pc = 0x4421dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x4421e0: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x4421E0u;
    {
        const bool branch_taken_0x4421e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4421E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4421E0u;
        // 0x4421e4: 0x2462ffff  addiu       $v0, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4421e0) {
            ctx->pc = 0x442294u;
            goto label_442294;
        }
    }
    ctx->pc = 0x4421E8u;
    // 0x4421e8: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x4421e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x4421ec: 0x8fa80040  lw          $t0, 0x40($sp)
    ctx->pc = 0x4421ecu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4421f0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4421f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x4421f4: 0x8e670010  lw          $a3, 0x10($s3)
    ctx->pc = 0x4421f4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x4421f8: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x4421f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x4421fc: 0x8e66000c  lw          $a2, 0xC($s3)
    ctx->pc = 0x4421fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x442200: 0x248416e0  addiu       $a0, $a0, 0x16E0
    ctx->pc = 0x442200u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5856));
    // 0x442204: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x442204u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x442208: 0x81982  srl         $v1, $t0, 6
    ctx->pc = 0x442208u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 8), 6));
    // 0x44220c: 0x24a516c0  addiu       $a1, $a1, 0x16C0
    ctx->pc = 0x44220cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5824));
    // 0x442210: 0x67a021  addu        $s4, $v1, $a3
    ctx->pc = 0x442210u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x442214: 0x634c2  srl         $a2, $a2, 19
    ctx->pc = 0x442214u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 19));
    // 0x442218: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x442218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x44221c: 0x30d0000f  andi        $s0, $a2, 0xF
    ctx->pc = 0x44221cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)15);
    // 0x442220: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x442220u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x442224: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x442224u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x442228: 0x8c920000  lw          $s2, 0x0($a0)
    ctx->pc = 0x442228u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x44222c: 0x12030005  beq         $s0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x44222Cu;
    {
        const bool branch_taken_0x44222c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x442230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44222Cu;
        // 0x442230: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44222c) {
            ctx->pc = 0x442244u;
            goto label_442244;
        }
    }
    ctx->pc = 0x442234u;
    // 0x442234: 0x2e020003  sltiu       $v0, $s0, 0x3
    ctx->pc = 0x442234u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x442238: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x442238u;
    {
        const bool branch_taken_0x442238 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x44223Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x442238u;
        // 0x44223c: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x442238) {
            ctx->pc = 0x442244u;
            goto label_442244;
        }
    }
    ctx->pc = 0x442240u;
    // 0x442240: 0x50380a  movz        $a3, $v0, $s0
    ctx->pc = 0x442240u;
    if (GPR_U64(ctx, 16) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 2));
label_442244:
    // 0x442244: 0x8e620038  lw          $v0, 0x38($s3)
    ctx->pc = 0x442244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 56)));
    // 0x442248: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x442248u;
    {
        const bool branch_taken_0x442248 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x442248) {
            ctx->pc = 0x44224Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x442248u;
            // 0x44224c: 0x8e690038  lw          $t1, 0x38($s3) (Delay Slot)
            SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x44226Cu;
            goto label_44226c;
        }
    }
    ctx->pc = 0x442250u;
    // 0x442250: 0x8fc60008  lw          $a2, 0x8($fp)
    ctx->pc = 0x442250u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x442254: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x442254u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x442258: 0x92680034  lbu         $t0, 0x34($s3)
    ctx->pc = 0x442258u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 52)));
    // 0x44225c: 0xc1103f8  jal         func_440FE0
    ctx->pc = 0x44225Cu;
    SET_GPR_U32(ctx, 31, 0x442264u);
    ctx->pc = 0x442260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44225Cu;
    // 0x442260: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x440FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x440FE0u, 0x44225Cu, 0x442264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x442264u;
label_442264:
    // 0x442264: 0xae620038  sw          $v0, 0x38($s3)
    ctx->pc = 0x442264u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 56), GPR_U32(ctx, 2));
    // 0x442268: 0x8e690038  lw          $t1, 0x38($s3)
    ctx->pc = 0x442268u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 56)));
label_44226c:
    // 0x44226c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x44226cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x442270: 0x926a0034  lbu         $t2, 0x34($s3)
    ctx->pc = 0x442270u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 52)));
    // 0x442274: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x442274u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x442278: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x442278u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44227c: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x44227cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x442280: 0xc110514  jal         func_441450
    ctx->pc = 0x442280u;
    SET_GPR_U32(ctx, 31, 0x442288u);
    ctx->pc = 0x442284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x442280u;
    // 0x442284: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x441450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x441450u, 0x442280u, 0x442288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x442288u;
label_442288:
    // 0x442288: 0x92620034  lbu         $v0, 0x34($s3)
    ctx->pc = 0x442288u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 52)));
    // 0x44228c: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x44228Cu;
    {
        const bool branch_taken_0x44228c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x44228c) {
            ctx->pc = 0x442290u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x44228Cu;
            // 0x442290: 0xae600038  sw          $zero, 0x38($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 56), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x442294u;
            goto label_442294;
        }
    }
    ctx->pc = 0x442294u;
label_442294:
    // 0x442294: 0xc0c1f08  jal         func_307C20
    ctx->pc = 0x442294u;
    SET_GPR_U32(ctx, 31, 0x44229Cu);
    ctx->pc = 0x307C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307C20u, 0x442294u, 0x44229Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44229Cu;
label_44229c:
    // 0x44229c: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x44229cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4422a0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x4422a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x4422a4: 0xc0c1f1c  jal         func_307C70
    ctx->pc = 0x4422A4u;
    SET_GPR_U32(ctx, 31, 0x4422ACu);
    ctx->pc = 0x4422A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4422A4u;
    // 0x4422a8: 0xae630000  sw          $v1, 0x0($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x307C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307C70u, 0x4422A4u, 0x4422ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4422ACu;
label_4422ac:
    // 0x4422ac: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x4422acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x4422b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4422b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4422b4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x4422b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x4422b8: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4422B8u;
    {
        const bool branch_taken_0x4422b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x4422BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4422B8u;
        // 0x4422bc: 0xae630004  sw          $v1, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4422b8) {
            ctx->pc = 0x4422C8u;
            goto label_4422c8;
        }
    }
    ctx->pc = 0x4422C0u;
    // 0x4422c0: 0xc10a762  jal         func_429D88
    ctx->pc = 0x4422C0u;
    SET_GPR_U32(ctx, 31, 0x4422C8u);
    ctx->pc = 0x4422C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4422C0u;
    // 0x4422c4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x429D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x429D88u, 0x4422C0u, 0x4422C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4422C8u;
label_4422c8:
    // 0x4422c8: 0x7bb00100  lq          $s0, 0x100($sp)
    ctx->pc = 0x4422c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x4422cc: 0x7bb100f0  lq          $s1, 0xF0($sp)
    ctx->pc = 0x4422ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x4422d0: 0x7bb200e0  lq          $s2, 0xE0($sp)
    ctx->pc = 0x4422d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x4422d4: 0x7bb300d0  lq          $s3, 0xD0($sp)
    ctx->pc = 0x4422d4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x4422d8: 0x7bb400c0  lq          $s4, 0xC0($sp)
    ctx->pc = 0x4422d8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x4422dc: 0x7bb500b0  lq          $s5, 0xB0($sp)
    ctx->pc = 0x4422dcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x4422e0: 0x7bb600a0  lq          $s6, 0xA0($sp)
    ctx->pc = 0x4422e0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x4422e4: 0x7bb70090  lq          $s7, 0x90($sp)
    ctx->pc = 0x4422e4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x4422e8: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x4422e8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x4422ec: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x4422ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x4422f0: 0x3e00008  jr          $ra
    ctx->pc = 0x4422F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4422F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4422F0u;
        // 0x4422f4: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4422F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4422F8u;
}
