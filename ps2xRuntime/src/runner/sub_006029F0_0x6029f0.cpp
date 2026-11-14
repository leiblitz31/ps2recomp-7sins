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

// Function: sub_006029F0
// Address: 0x6029f0 - 0x602b10
void sub_006029F0_0x6029f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_006029F0_0x6029f0");
#endif

    ctx->pc = 0x6029f0u;

    // 0x6029f0: 0x9d1a6d5  j           func_7469B54
    ctx->pc = 0x6029F0u;
    ctx->pc = 0x6029F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x6029F0u;
    // 0x6029f4: 0x4d0d3810  .word       0x4D0D3810                   # INVALID     $t0, $t5, 0x3810 # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x6029F4 raw=0x4D0D3810");
    ctx->in_delay_slot = false;
    ctx->pc = 0x7469B54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7469B54u, 0x6029F0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x6029F8u;
    // 0x6029f8: 0xa9bacac  j           func_A6EB2B0
    ctx->pc = 0x6029F8u;
    ctx->pc = 0x6029FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x6029F8u;
    // 0x6029fc: 0xa1a8925a  sb          $t0, -0x6DA6($t5) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 13), 4294939226), (uint8_t)GPR_U32(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0xA6EB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xA6EB2B0u, 0x6029F8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x602A00u;
    // 0x602a00: 0x4af771e8  vadd.yzw    $vf7, $vf14, $vf23
    ctx->pc = 0x602a00u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[14], ctx->vu0_vf[23]); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x602a04: 0x4e3ad1b9  .word       0x4E3AD1B9                   # INVALID     $s1, $k0, -0x2E47 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x602a04u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x602A04 raw=0x4E3AD1B9");
    // 0x602a08: 0x2687fb95  addiu       $a3, $s4, -0x46B
    ctx->pc = 0x602a08u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), 4294966165));
    // 0x602a0c: 0xcd50616c  pref        0x10, 0x616C($t2)
    ctx->pc = 0x602a0cu;
    // PREF instruction (ignored)
    // 0x602a10: 0xd407c0b4  ldc1        $f7, -0x3F4C($zero)
    ctx->pc = 0x602a10u;
    throw std::runtime_error("Unhandled opcode: 0x35 at 0x602A10 raw=0xD407C0B4");
    // 0x602a14: 0x4f551784  .word       0x4F551784                   # INVALID     $k0, $s5, 0x1784 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x602a14u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x602A14 raw=0x4F551784");
    // 0x602a18: 0xcc71bd8d  pref        0x11, -0x4273($v1)
    ctx->pc = 0x602a18u;
    // PREF instruction (ignored)
    // 0x602a1c: 0x53dd2f84  beql        $fp, $sp, . + 4 + (0x2F84 << 2)
    ctx->pc = 0x602A1Cu;
    {
        const bool branch_taken_0x602a1c = (GPR_U64(ctx, 30) == GPR_U64(ctx, 29));
        if (branch_taken_0x602a1c) {
            ctx->pc = 0x602A20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x602A1Cu;
            // 0x602a20: 0x79a9835c  lq          $t1, -0x7CA4($t5) (Delay Slot)
            SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 13), 4294935388)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x60E830u;
            return;
        }
    }
    ctx->pc = 0x602A24u;
    // 0x602a24: 0x47a38d5d  .word       0x47A38D5D                   # INVALID     $sp, $v1, -0x72A3 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x602a24u;
    throw std::runtime_error("Unhandled FPU instruction: format 0x1D, function 0x1D at 0x602A24 raw=0x47A38D5D");
    // 0x602a28: 0x9ee3c98  j           func_7B8F260
    ctx->pc = 0x602A28u;
    ctx->pc = 0x602A2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x602A28u;
    // 0x602a2c: 0x75c238da  .word       0x75C238DA                   # INVALID     $t6, $v0, 0x38DA # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x602A2C raw=0x75C238DA");
    ctx->in_delay_slot = false;
    ctx->pc = 0x7B8F260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7B8F260u, 0x602A28u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x602A30u;
    // 0x602a30: 0xc60f2888  lwc1        $f15, 0x2888($s0)
    ctx->pc = 0x602a30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 10376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x602a34: 0x43ec94b8  .word       0x43EC94B8                   # INVALID     $ra, $t4, -0x6B48 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x602a34u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1F at 0x602A34 raw=0x43EC94B8");
    // 0x602a38: 0x224699ad  addi        $a2, $s2, -0x6653
    ctx->pc = 0x602a38u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 18), (int32_t)4294941101, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 6, (int32_t)tmp); }
    // 0x602a3c: 0xb6a15849  sdr         $at, 0x5849($s5)
    ctx->pc = 0x602a3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 22601); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 1); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x602a40: 0xdd5cf3f9  ld          $gp, -0xC07($t2)
    ctx->pc = 0x602a40u;
    SET_GPR_U64(ctx, 28, READ64(ADD32(GPR_U32(ctx, 10), 4294964217)));
    // 0x602a44: 0x48e99dd5  .word       0x48E99DD5                   # INVALID     $a3, $t1, -0x622B # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x602a44u;
    throw std::runtime_error("Unhandled COP2 format: 0x7 at 0x602A44 raw=0x48E99DD5");
    // 0x602a48: 0xb2070d88  sdl         $a3, 0xD88($s0)
    ctx->pc = 0x602a48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3464); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x602a4c: 0x57d0c5c9  bnel        $fp, $s0, . + 4 + (-0x3A37 << 2)
    ctx->pc = 0x602A4Cu;
    {
        const bool branch_taken_0x602a4c = (GPR_U64(ctx, 30) != GPR_U64(ctx, 16));
        if (branch_taken_0x602a4c) {
            ctx->pc = 0x602A50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x602A4Cu;
            // 0x602a50: 0x5b2e5671  .word       0x5B2E5671                   # blezl       $t9, . + 4 + (0x5671 << 2) # 000E0000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            // Likely branch instruction at 0x602A50 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x5F4174u;
            return;
        }
    }
    ctx->pc = 0x602A54u;
    // 0x602a54: 0x4e661da3  .word       0x4E661DA3                   # INVALID     $s3, $a2, 0x1DA3 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x602a54u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x602A54 raw=0x4E661DA3");
    // 0x602a58: 0xd936f5a1  lqc2        $vf22, -0xA5F($t1)
    ctx->pc = 0x602a58u;
    ctx->vu0_vf[22] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 4294964641)));
    // 0x602a5c: 0x61601e30  daddi       $zero, $t3, 0x1E30
    ctx->pc = 0x602a5cu;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)7728; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, res); }
    // 0x602a60: 0xd5f11407  ldc1        $f17, 0x1407($t7)
    ctx->pc = 0x602a60u;
    throw std::runtime_error("Unhandled opcode: 0x35 at 0x602A60 raw=0xD5F11407");
    // 0x602a64: 0x43224e7e  .word       0x43224E7E                   # INVALID     $t9, $v0, 0x4E7E # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x602a64u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x19 at 0x602A64 raw=0x43224E7E");
    // 0x602a68: 0x374017bb  ori         $zero, $k0, 0x17BB
    ctx->pc = 0x602a68u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 26) | (uint64_t)(uint16_t)6075);
    // 0x602a6c: 0x3b74c1fb  xori        $s4, $k1, 0xC1FB
    ctx->pc = 0x602a6cu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 27) ^ (uint64_t)(uint16_t)49659);
    // 0x602a70: 0x23af853  .word       0x023AF853                   # mtlo        $s1 # 001AF840 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x602a70u;
    ctx->lo = GPR_U64(ctx, 17);
    // 0x602a74: 0x45b6c395  .word       0x45B6C395                   # INVALID     $t5, $s6, -0x3C6B # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x602a74u;
    throw std::runtime_error("Unhandled FPU instruction: format 0xD, function 0x15 at 0x602A74 raw=0x45B6C395");
    // 0x602a78: 0xf7c96ab3  sdc1        $f9, 0x6AB3($fp)
    ctx->pc = 0x602a78u;
    throw std::runtime_error("Unhandled opcode: 0x3D at 0x602A78 raw=0xF7C96AB3");
    // 0x602a7c: 0x77affabe  .word       0x77AFFABE                   # INVALID     $sp, $t7, -0x542 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x602a7cu;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x602A7C raw=0x77AFFABE");
    // 0x602a80: 0x1f7b058  .word       0x01F7B058                   # mult        $s6, $t7, $s7 # 00000040 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x602a80u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 22, (int32_t)result); }
    // 0x602a84: 0x420104a0  .word       0x420104A0                   # INVALID     $s0, $at, 0x4A0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x602a84u;
    throw std::runtime_error("Unhandled COP0 CO-OP: 0x20 at 0x602A84 raw=0x420104A0");
    // 0x602a88: 0xed1eb59a  .word       0xED1EB59A                   # INVALID     $t0, $fp, -0x4A66 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x602a88u;
    throw std::runtime_error("Unhandled opcode: 0x3B at 0x602A88 raw=0xED1EB59A");
    // 0x602a8c: 0x3e3e486d  .word       0x3E3E486D                   # lui         $fp, 0x486D # 02200000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x602a8cu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)18541 << 16));
    // 0x602a90: 0x8076e921  lb          $s6, -0x16DF($v1)
    ctx->pc = 0x602a90u;
    SET_GPR_S32(ctx, 22, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294961441)));
    // 0x602a94: 0x45bc8060  .word       0x45BC8060                   # INVALID     $t5, $gp, -0x7FA0 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x602a94u;
    throw std::runtime_error("Unhandled FPU instruction: format 0xD, function 0x20 at 0x602A94 raw=0x45BC8060");
    // 0x602a98: 0x4845e68d  .word       0x4845E68D                   # cfc2.i      $a1, $vi28 # 0000068C <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x602a98u;
    SET_GPR_U32(ctx, 5, ctx->vu0_fbrst);
    // 0x602a9c: 0x2b39fbff  slti        $t9, $t9, -0x401
    ctx->pc = 0x602a9cu;
    SET_GPR_U64(ctx, 25, ((int64_t)GPR_S64(ctx, 25) < (int64_t)(int32_t)4294966271) ? 1 : 0);
    // 0x602aa0: 0x531112b2  beql        $t8, $s1, . + 4 + (0x12B2 << 2)
    ctx->pc = 0x602AA0u;
    {
        const bool branch_taken_0x602aa0 = (GPR_U64(ctx, 24) == GPR_U64(ctx, 17));
        if (branch_taken_0x602aa0) {
            ctx->pc = 0x602AA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x602AA0u;
            // 0x602aa4: 0x4d0b5f0a  .word       0x4D0B5F0A                   # INVALID     $t0, $t3, 0x5F0A # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            throw std::runtime_error("Unhandled opcode: 0x13 at 0x602AA4 raw=0x4D0B5F0A");
            ctx->in_delay_slot = false;
            ctx->pc = 0x60756Cu;
            return;
        }
    }
    ctx->pc = 0x602AA8u;
    // 0x602aa8: 0x1261c5b6  beq         $s3, $at, . + 4 + (-0x3A4A << 2)
    ctx->pc = 0x602AA8u;
    {
        const bool branch_taken_0x602aa8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 1));
        ctx->pc = 0x602AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x602AA8u;
        // 0x602aac: 0xac26fa  .word       0x00AC26FA                   # dsrl        $a0, $t4, 27 # 00A00000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 12) >> 27);
        ctx->in_delay_slot = false;
        if (branch_taken_0x602aa8) {
            ctx->pc = 0x5F4184u;
            return;
        }
    }
    ctx->pc = 0x602AB0u;
    // 0x602ab0: 0x4edab42f  .word       0x4EDAB42F                   # INVALID     $s6, $k0, -0x4BD1 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x602ab0u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x602AB0 raw=0x4EDAB42F");
    // 0x602ab4: 0x4539ccf5  .word       0x4539CCF5                   # INVALID     $t1, $t9, -0x330B # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x602ab4u;
    throw std::runtime_error("Unhandled FPU instruction: format 0x9, function 0x35 at 0x602AB4 raw=0x4539CCF5");
    // 0x602ab8: 0x7e54cd95  sq          $s4, -0x326B($s2)
    ctx->pc = 0x602ab8u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 4294954389), GPR_VEC(ctx, 20));
    // 0x602abc: 0xbe122413  cache       0x12, 0x2413($s0)
    ctx->pc = 0x602abcu;
    // CACHE instruction (ignored)
    // 0x602ac0: 0xac3acd41  sw          $k0, -0x32BF($at)
    ctx->pc = 0x602ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294954305), GPR_U32(ctx, 26));
    // 0x602ac4: 0x4f82dd01  .word       0x4F82DD01                   # INVALID     $gp, $v0, -0x22FF # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x602ac4u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x602AC4 raw=0x4F82DD01");
    // 0x602ac8: 0xa810efa9  swl         $s0, -0x1057($zero)
    ctx->pc = 0x602ac8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 4294963113); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 16); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x602acc: 0x5d9932e2  .word       0x5D9932E2                   # bgtzl       $t4, . + 4 + (0x32E2 << 2) # 00190000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x602ACCu;
    {
        const bool branch_taken_0x602acc = (GPR_S32(ctx, 12) > 0);
        if (branch_taken_0x602acc) {
            ctx->pc = 0x602AD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x602ACCu;
            // 0x602ad0: 0xfe2f807f  sd          $t7, -0x7F81($s1) (Delay Slot)
            WRITE64(ADD32(GPR_U32(ctx, 17), 4294934655), GPR_U64(ctx, 15));
            ctx->in_delay_slot = false;
            ctx->pc = 0x60F658u;
            return;
        }
    }
    ctx->pc = 0x602AD4u;
    // 0x602ad4: 0x4a903daf  vmini.y     $vf22, $vf7, $vf16
    ctx->pc = 0x602ad4u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[7], ctx->vu0_vf[16]); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[22] = _mm_blendv_ps(ctx->vu0_vf[22], res, _mm_castsi128_ps(mask)); }
    // 0x602ad8: 0x4d36a385  .word       0x4D36A385                   # INVALID     $t1, $s6, -0x5C7B # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x602ad8u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x602AD8 raw=0x4D36A385");
    // 0x602adc: 0x4cdc007d  .word       0x4CDC007D                   # INVALID     $a2, $gp, 0x7D # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x602adcu;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x602ADC raw=0x4CDC007D");
    // 0x602ae0: 0xa2cf6b85  sb          $t7, 0x6B85($s6)
    ctx->pc = 0x602ae0u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 27525), (uint8_t)GPR_U32(ctx, 15));
    // 0x602ae4: 0x4180f92c  .word       0x4180F92C                   # INVALID     $t4, $zero, -0x6D4 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x602ae4u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0xC at 0x602AE4 raw=0x4180F92C");
    // 0x602ae8: 0x4bbb6488  vmaddx.xyw  $vf18, $vf12, $vf27x
    ctx->pc = 0x602ae8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[12], _mm_shuffle_ps(ctx->vu0_vf[27], ctx->vu0_vf[27], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, 0, -1, -1); ctx->vu0_vf[18] = _mm_blendv_ps(ctx->vu0_vf[18], res, _mm_castsi128_ps(mask)); }
    // 0x602aec: 0x650fc523  daddiu      $t7, $t0, -0x3ADD
    ctx->pc = 0x602aecu;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 8) + (int64_t)(int32_t)4294952227);
    // 0x602af0: 0x57674fa8  bnel        $k1, $a3, . + 4 + (0x4FA8 << 2)
    ctx->pc = 0x602AF0u;
    {
        const bool branch_taken_0x602af0 = (GPR_U64(ctx, 27) != GPR_U64(ctx, 7));
        if (branch_taken_0x602af0) {
            ctx->pc = 0x602AF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x602AF0u;
            // 0x602af4: 0x43336d69  .word       0x43336D69                   # INVALID     $t9, $s3, 0x6D69 # 00000000 <InstrIdType: R5900_COP0> (Delay Slot)
            throw std::runtime_error("Unhandled COP0 instruction format: 0x19 at 0x602AF4 raw=0x43336D69");
            ctx->in_delay_slot = false;
            ctx->pc = 0x616994u;
            return;
        }
    }
    ctx->pc = 0x602AF8u;
    // 0x602af8: 0xcff52bba  pref        0x15, 0x2BBA($ra)
    ctx->pc = 0x602af8u;
    // PREF instruction (ignored)
    // 0x602afc: 0x8f545e9e  lw          $s4, 0x5E9E($k0)
    ctx->pc = 0x602afcu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 26), 24222)));
    // 0x602b00: 0xfa669efc  sqc2        $vf6, -0x6104($s3)
    ctx->pc = 0x602b00u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 4294942460), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x602b04: 0x459fefd0  .word       0x459FEFD0                   # INVALID     $t4, $ra, -0x1030 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x602b04u;
    throw std::runtime_error("Unhandled FPU instruction: format 0xC, function 0x10 at 0x602B04 raw=0x459FEFD0");
    // 0x602b08: 0x8cef6b86  lw          $t7, 0x6B86($a3)
    ctx->pc = 0x602b08u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 27526)));
    // 0x602b0c: 0xd3d6caaa  lld         $s6, -0x3556($fp)
    ctx->pc = 0x602b0cu;
    throw std::runtime_error("Unhandled opcode: 0x34 at 0x602B0C raw=0xD3D6CAAA");
    ctx->pc = 0x602b10u;
}
