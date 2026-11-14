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

// Function: sub_004ADC68
// Address: 0x4adc68 - 0x4ae198
void sub_004ADC68_0x4adc68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004ADC68_0x4adc68");
#endif

    switch (ctx->pc) {
        case 0x4adc88u: goto label_4adc88;
        case 0x4ae104u: goto label_4ae104;
        case 0x4ae120u: goto label_4ae120;
        case 0x4ae184u: goto label_4ae184;
        default: break;
    }

    ctx->pc = 0x4adc68u;

    // 0x4adc68: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4adc68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4adc6c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4adc6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4adc70: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x4adc70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x4adc74: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x4adc74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x4adc78: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4adc78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4adc7c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4adc7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4adc80: 0xc0bb7e6  jal         func_2EDF98
    ctx->pc = 0x4ADC80u;
    SET_GPR_U32(ctx, 31, 0x4ADC88u);
    ctx->pc = 0x4ADC84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4ADC80u;
    // 0x4adc84: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF98u, 0x4ADC80u, 0x4ADC88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4ADC88u;
label_4adc88:
    // 0x4adc88: 0xae000088  sw          $zero, 0x88($s0)
    ctx->pc = 0x4adc88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 0));
    // 0x4adc8c: 0x6ba20007  ldl         $v0, 0x7($sp)
    ctx->pc = 0x4adc8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x4adc90: 0x6fa20000  ldr         $v0, 0x0($sp)
    ctx->pc = 0x4adc90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x4adc94: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x4adc94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4adc98: 0xb2020047  sdl         $v0, 0x47($s0)
    ctx->pc = 0x4adc98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4adc9c: 0xb6020040  sdr         $v0, 0x40($s0)
    ctx->pc = 0x4adc9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4adca0: 0xae030048  sw          $v1, 0x48($s0)
    ctx->pc = 0x4adca0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 3));
    // 0x4adca4: 0x8e020088  lw          $v0, 0x88($s0)
    ctx->pc = 0x4adca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
    // 0x4adca8: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x4adca8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x4adcac: 0xae020088  sw          $v0, 0x88($s0)
    ctx->pc = 0x4adcacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 2));
    // 0x4adcb0: 0x6ba20007  ldl         $v0, 0x7($sp)
    ctx->pc = 0x4adcb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x4adcb4: 0x6fa20000  ldr         $v0, 0x0($sp)
    ctx->pc = 0x4adcb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x4adcb8: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x4adcb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4adcbc: 0xb2020053  sdl         $v0, 0x53($s0)
    ctx->pc = 0x4adcbcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 83); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4adcc0: 0xb602004c  sdr         $v0, 0x4C($s0)
    ctx->pc = 0x4adcc0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 76); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4adcc4: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x4adcc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
    // 0x4adcc8: 0x8e020088  lw          $v0, 0x88($s0)
    ctx->pc = 0x4adcc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
    // 0x4adccc: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x4adcccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x4adcd0: 0xae020088  sw          $v0, 0x88($s0)
    ctx->pc = 0x4adcd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 2));
    // 0x4adcd4: 0xae000064  sw          $zero, 0x64($s0)
    ctx->pc = 0x4adcd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 0));
    // 0x4adcd8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x4adcd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x4adcdc: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x4adcdcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x4adce0: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x4adce0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x4adce4: 0xe7a80004  swc1        $f8, 0x4($sp)
    ctx->pc = 0x4adce4u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x4adce8: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x4adce8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x4adcec: 0xae000068  sw          $zero, 0x68($s0)
    ctx->pc = 0x4adcecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 0));
    // 0x4adcf0: 0xe608006c  swc1        $f8, 0x6C($s0)
    ctx->pc = 0x4adcf0u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 108), bits); }
    // 0x4adcf4: 0x6ba20007  ldl         $v0, 0x7($sp)
    ctx->pc = 0x4adcf4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x4adcf8: 0x6fa20000  ldr         $v0, 0x0($sp)
    ctx->pc = 0x4adcf8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x4adcfc: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x4adcfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4add00: 0xb202005f  sdl         $v0, 0x5F($s0)
    ctx->pc = 0x4add00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 95); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4add04: 0xb6020058  sdr         $v0, 0x58($s0)
    ctx->pc = 0x4add04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 88); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4add08: 0xae030060  sw          $v1, 0x60($s0)
    ctx->pc = 0x4add08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 3));
    // 0x4add0c: 0xc604005c  lwc1        $f4, 0x5C($s0)
    ctx->pc = 0x4add0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x4add10: 0xc6020060  lwc1        $f2, 0x60($s0)
    ctx->pc = 0x4add10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4add14: 0xc6000068  lwc1        $f0, 0x68($s0)
    ctx->pc = 0x4add14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4add18: 0xc606006c  lwc1        $f6, 0x6C($s0)
    ctx->pc = 0x4add18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x4add1c: 0xc6010058  lwc1        $f1, 0x58($s0)
    ctx->pc = 0x4add1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4add20: 0x460011c2  mul.s       $f7, $f2, $f0
    ctx->pc = 0x4add20u;
    ctx->f[7] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x4add24: 0xc6030064  lwc1        $f3, 0x64($s0)
    ctx->pc = 0x4add24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x4add28: 0x46062142  mul.s       $f5, $f4, $f6
    ctx->pc = 0x4add28u;
    ctx->f[5] = FPU_MUL_S(ctx->f[4], ctx->f[6]);
    // 0x4add2c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x4add2cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x4add30: 0x46032102  mul.s       $f4, $f4, $f3
    ctx->pc = 0x4add30u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x4add34: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x4add34u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x4add38: 0x46060842  mul.s       $f1, $f1, $f6
    ctx->pc = 0x4add38u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[6]);
    // 0x4add3c: 0x46072941  sub.s       $f5, $f5, $f7
    ctx->pc = 0x4add3cu;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[7]);
    // 0x4add40: 0x46040001  sub.s       $f0, $f0, $f4
    ctx->pc = 0x4add40u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x4add44: 0x46011081  sub.s       $f2, $f2, $f1
    ctx->pc = 0x4add44u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x4add48: 0xe6050070  swc1        $f5, 0x70($s0)
    ctx->pc = 0x4add48u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
    // 0x4add4c: 0xe6000078  swc1        $f0, 0x78($s0)
    ctx->pc = 0x4add4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 120), bits); }
    // 0x4add50: 0xe6020074  swc1        $f2, 0x74($s0)
    ctx->pc = 0x4add50u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 116), bits); }
    // 0x4add54: 0x8e020088  lw          $v0, 0x88($s0)
    ctx->pc = 0x4add54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
    // 0x4add58: 0xe6080080  swc1        $f8, 0x80($s0)
    ctx->pc = 0x4add58u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 128), bits); }
    // 0x4add5c: 0xe6080084  swc1        $f8, 0x84($s0)
    ctx->pc = 0x4add5cu;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 132), bits); }
    // 0x4add60: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x4add60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x4add64: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x4add64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4add68: 0x34420078  ori         $v0, $v0, 0x78
    ctx->pc = 0x4add68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)120);
    // 0x4add6c: 0xe600007c  swc1        $f0, 0x7C($s0)
    ctx->pc = 0x4add6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 124), bits); }
    // 0x4add70: 0xae020088  sw          $v0, 0x88($s0)
    ctx->pc = 0x4add70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 2));
    // 0x4add74: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4add74u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4add78: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x4add78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4add7c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4add7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4add80: 0x3e00008  jr          $ra
    ctx->pc = 0x4ADD80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4ADD84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ADD80u;
        // 0x4add84: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4ADD80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4ADD88u;
    // 0x4add88: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x4add88u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4add8c: 0x68c30007  ldl         $v1, 0x7($a2)
    ctx->pc = 0x4add8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x4add90: 0x6cc30000  ldr         $v1, 0x0($a2)
    ctx->pc = 0x4add90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x4add94: 0x8cc40008  lw          $a0, 0x8($a2)
    ctx->pc = 0x4add94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x4add98: 0xb0430047  sdl         $v1, 0x47($v0)
    ctx->pc = 0x4add98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4add9c: 0xb4430040  sdr         $v1, 0x40($v0)
    ctx->pc = 0x4add9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4adda0: 0xac440048  sw          $a0, 0x48($v0)
    ctx->pc = 0x4adda0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 72), GPR_U32(ctx, 4));
    // 0x4adda4: 0x8c430088  lw          $v1, 0x88($v0)
    ctx->pc = 0x4adda4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x4adda8: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x4adda8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x4addac: 0x3e00008  jr          $ra
    ctx->pc = 0x4ADDACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4ADDB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ADDACu;
        // 0x4addb0: 0xac430088  sw          $v1, 0x88($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 136), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4ADDACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4ADDB4u;
    // 0x4addb4: 0x0  nop
    ctx->pc = 0x4addb4u;
    // NOP
    // 0x4addb8: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x4addb8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4addbc: 0x68430047  ldl         $v1, 0x47($v0)
    ctx->pc = 0x4addbcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x4addc0: 0x6c430040  ldr         $v1, 0x40($v0)
    ctx->pc = 0x4addc0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x4addc4: 0x8c440048  lw          $a0, 0x48($v0)
    ctx->pc = 0x4addc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x4addc8: 0xb0c30007  sdl         $v1, 0x7($a2)
    ctx->pc = 0x4addc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4addcc: 0xb4c30000  sdr         $v1, 0x0($a2)
    ctx->pc = 0x4addccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4addd0: 0xacc40008  sw          $a0, 0x8($a2)
    ctx->pc = 0x4addd0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 4));
    // 0x4addd4: 0x3e00008  jr          $ra
    ctx->pc = 0x4ADDD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4ADDD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4ADDDCu;
    // 0x4adddc: 0x0  nop
    ctx->pc = 0x4adddcu;
    // NOP
    // 0x4adde0: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x4adde0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4adde4: 0x68c30007  ldl         $v1, 0x7($a2)
    ctx->pc = 0x4adde4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x4adde8: 0x6cc30000  ldr         $v1, 0x0($a2)
    ctx->pc = 0x4adde8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x4addec: 0x8cc40008  lw          $a0, 0x8($a2)
    ctx->pc = 0x4addecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x4addf0: 0xb0430053  sdl         $v1, 0x53($v0)
    ctx->pc = 0x4addf0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 83); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4addf4: 0xb443004c  sdr         $v1, 0x4C($v0)
    ctx->pc = 0x4addf4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 76); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4addf8: 0xac440054  sw          $a0, 0x54($v0)
    ctx->pc = 0x4addf8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 84), GPR_U32(ctx, 4));
    // 0x4addfc: 0x8c430088  lw          $v1, 0x88($v0)
    ctx->pc = 0x4addfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x4ade00: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x4ade00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x4ade04: 0x3e00008  jr          $ra
    ctx->pc = 0x4ADE04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4ADE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ADE04u;
        // 0x4ade08: 0xac430088  sw          $v1, 0x88($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 136), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4ADE04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4ADE0Cu;
    // 0x4ade0c: 0x0  nop
    ctx->pc = 0x4ade0cu;
    // NOP
    // 0x4ade10: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x4ade10u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ade14: 0x68430053  ldl         $v1, 0x53($v0)
    ctx->pc = 0x4ade14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 83); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x4ade18: 0x6c43004c  ldr         $v1, 0x4C($v0)
    ctx->pc = 0x4ade18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 76); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x4ade1c: 0x8c440054  lw          $a0, 0x54($v0)
    ctx->pc = 0x4ade1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
    // 0x4ade20: 0xb0c30007  sdl         $v1, 0x7($a2)
    ctx->pc = 0x4ade20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4ade24: 0xb4c30000  sdr         $v1, 0x0($a2)
    ctx->pc = 0x4ade24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4ade28: 0xacc40008  sw          $a0, 0x8($a2)
    ctx->pc = 0x4ade28u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 4));
    // 0x4ade2c: 0x3e00008  jr          $ra
    ctx->pc = 0x4ADE2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4ADE2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4ADE34u;
    // 0x4ade34: 0x0  nop
    ctx->pc = 0x4ade34u;
    // NOP
    // 0x4ade38: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x4ade38u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ade3c: 0x68c30017  ldl         $v1, 0x17($a2)
    ctx->pc = 0x4ade3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x4ade40: 0x6cc30010  ldr         $v1, 0x10($a2)
    ctx->pc = 0x4ade40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x4ade44: 0x8cc40018  lw          $a0, 0x18($a2)
    ctx->pc = 0x4ade44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x4ade48: 0xb043005f  sdl         $v1, 0x5F($v0)
    ctx->pc = 0x4ade48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 95); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4ade4c: 0xb4430058  sdr         $v1, 0x58($v0)
    ctx->pc = 0x4ade4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 88); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4ade50: 0xac440060  sw          $a0, 0x60($v0)
    ctx->pc = 0x4ade50u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 96), GPR_U32(ctx, 4));
    // 0x4ade54: 0x68c30027  ldl         $v1, 0x27($a2)
    ctx->pc = 0x4ade54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x4ade58: 0x6cc30020  ldr         $v1, 0x20($a2)
    ctx->pc = 0x4ade58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x4ade5c: 0x8cc40028  lw          $a0, 0x28($a2)
    ctx->pc = 0x4ade5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 40)));
    // 0x4ade60: 0xb043006b  sdl         $v1, 0x6B($v0)
    ctx->pc = 0x4ade60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 107); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4ade64: 0xb4430064  sdr         $v1, 0x64($v0)
    ctx->pc = 0x4ade64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 100); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4ade68: 0xac44006c  sw          $a0, 0x6C($v0)
    ctx->pc = 0x4ade68u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 108), GPR_U32(ctx, 4));
    // 0x4ade6c: 0x68c30007  ldl         $v1, 0x7($a2)
    ctx->pc = 0x4ade6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x4ade70: 0x6cc30000  ldr         $v1, 0x0($a2)
    ctx->pc = 0x4ade70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x4ade74: 0x8cc40008  lw          $a0, 0x8($a2)
    ctx->pc = 0x4ade74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x4ade78: 0xb0430077  sdl         $v1, 0x77($v0)
    ctx->pc = 0x4ade78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 119); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4ade7c: 0xb4430070  sdr         $v1, 0x70($v0)
    ctx->pc = 0x4ade7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 112); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4ade80: 0xac440078  sw          $a0, 0x78($v0)
    ctx->pc = 0x4ade80u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 120), GPR_U32(ctx, 4));
    // 0x4ade84: 0x8c430088  lw          $v1, 0x88($v0)
    ctx->pc = 0x4ade84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x4ade88: 0x3463000c  ori         $v1, $v1, 0xC
    ctx->pc = 0x4ade88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)12);
    // 0x4ade8c: 0x3e00008  jr          $ra
    ctx->pc = 0x4ADE8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4ADE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ADE8Cu;
        // 0x4ade90: 0xac430088  sw          $v1, 0x88($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 136), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4ADE8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4ADE94u;
    // 0x4ade94: 0x0  nop
    ctx->pc = 0x4ade94u;
    // NOP
    // 0x4ade98: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x4ade98u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ade9c: 0x6843005f  ldl         $v1, 0x5F($v0)
    ctx->pc = 0x4ade9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 95); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x4adea0: 0x6c430058  ldr         $v1, 0x58($v0)
    ctx->pc = 0x4adea0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 88); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x4adea4: 0x8c440060  lw          $a0, 0x60($v0)
    ctx->pc = 0x4adea4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x4adea8: 0xb0c30017  sdl         $v1, 0x17($a2)
    ctx->pc = 0x4adea8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4adeac: 0xb4c30010  sdr         $v1, 0x10($a2)
    ctx->pc = 0x4adeacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4adeb0: 0xacc40018  sw          $a0, 0x18($a2)
    ctx->pc = 0x4adeb0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 4));
    // 0x4adeb4: 0x6843006b  ldl         $v1, 0x6B($v0)
    ctx->pc = 0x4adeb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 107); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x4adeb8: 0x6c430064  ldr         $v1, 0x64($v0)
    ctx->pc = 0x4adeb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 100); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x4adebc: 0x8c44006c  lw          $a0, 0x6C($v0)
    ctx->pc = 0x4adebcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
    // 0x4adec0: 0xb0c30027  sdl         $v1, 0x27($a2)
    ctx->pc = 0x4adec0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4adec4: 0xb4c30020  sdr         $v1, 0x20($a2)
    ctx->pc = 0x4adec4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4adec8: 0xacc40028  sw          $a0, 0x28($a2)
    ctx->pc = 0x4adec8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 40), GPR_U32(ctx, 4));
    // 0x4adecc: 0x68430077  ldl         $v1, 0x77($v0)
    ctx->pc = 0x4adeccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 119); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x4aded0: 0x6c430070  ldr         $v1, 0x70($v0)
    ctx->pc = 0x4aded0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 112); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x4aded4: 0x8c440078  lw          $a0, 0x78($v0)
    ctx->pc = 0x4aded4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 120)));
    // 0x4aded8: 0xb0c30007  sdl         $v1, 0x7($a2)
    ctx->pc = 0x4aded8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4adedc: 0xb4c30000  sdr         $v1, 0x0($a2)
    ctx->pc = 0x4adedcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4adee0: 0xacc40008  sw          $a0, 0x8($a2)
    ctx->pc = 0x4adee0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 4));
    // 0x4adee4: 0x3e00008  jr          $ra
    ctx->pc = 0x4ADEE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4ADEE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4ADEECu;
    // 0x4adeec: 0x0  nop
    ctx->pc = 0x4adeecu;
    // NOP
    // 0x4adef0: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x4adef0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4adef4: 0x68c30007  ldl         $v1, 0x7($a2)
    ctx->pc = 0x4adef4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x4adef8: 0x6cc30000  ldr         $v1, 0x0($a2)
    ctx->pc = 0x4adef8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x4adefc: 0x8cc40008  lw          $a0, 0x8($a2)
    ctx->pc = 0x4adefcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x4adf00: 0xb043005f  sdl         $v1, 0x5F($v0)
    ctx->pc = 0x4adf00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 95); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4adf04: 0xb4430058  sdr         $v1, 0x58($v0)
    ctx->pc = 0x4adf04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 88); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4adf08: 0xac440060  sw          $a0, 0x60($v0)
    ctx->pc = 0x4adf08u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 96), GPR_U32(ctx, 4));
    // 0x4adf0c: 0xc444005c  lwc1        $f4, 0x5C($v0)
    ctx->pc = 0x4adf0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x4adf10: 0xc4420060  lwc1        $f2, 0x60($v0)
    ctx->pc = 0x4adf10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4adf14: 0xc4400068  lwc1        $f0, 0x68($v0)
    ctx->pc = 0x4adf14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4adf18: 0xc446006c  lwc1        $f6, 0x6C($v0)
    ctx->pc = 0x4adf18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x4adf1c: 0xc4410058  lwc1        $f1, 0x58($v0)
    ctx->pc = 0x4adf1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4adf20: 0x460011c2  mul.s       $f7, $f2, $f0
    ctx->pc = 0x4adf20u;
    ctx->f[7] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x4adf24: 0xc4430064  lwc1        $f3, 0x64($v0)
    ctx->pc = 0x4adf24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x4adf28: 0x46062142  mul.s       $f5, $f4, $f6
    ctx->pc = 0x4adf28u;
    ctx->f[5] = FPU_MUL_S(ctx->f[4], ctx->f[6]);
    // 0x4adf2c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x4adf2cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x4adf30: 0x46032102  mul.s       $f4, $f4, $f3
    ctx->pc = 0x4adf30u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x4adf34: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x4adf34u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x4adf38: 0x46060842  mul.s       $f1, $f1, $f6
    ctx->pc = 0x4adf38u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[6]);
    // 0x4adf3c: 0x46072941  sub.s       $f5, $f5, $f7
    ctx->pc = 0x4adf3cu;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[7]);
    // 0x4adf40: 0x46040001  sub.s       $f0, $f0, $f4
    ctx->pc = 0x4adf40u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x4adf44: 0x46011081  sub.s       $f2, $f2, $f1
    ctx->pc = 0x4adf44u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x4adf48: 0xe4450070  swc1        $f5, 0x70($v0)
    ctx->pc = 0x4adf48u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 112), bits); }
    // 0x4adf4c: 0xe4400078  swc1        $f0, 0x78($v0)
    ctx->pc = 0x4adf4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 120), bits); }
    // 0x4adf50: 0xe4420074  swc1        $f2, 0x74($v0)
    ctx->pc = 0x4adf50u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 116), bits); }
    // 0x4adf54: 0x8c430088  lw          $v1, 0x88($v0)
    ctx->pc = 0x4adf54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x4adf58: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x4adf58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
    // 0x4adf5c: 0x3e00008  jr          $ra
    ctx->pc = 0x4ADF5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4ADF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ADF5Cu;
        // 0x4adf60: 0xac430088  sw          $v1, 0x88($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 136), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4ADF5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4ADF64u;
    // 0x4adf64: 0x0  nop
    ctx->pc = 0x4adf64u;
    // NOP
    // 0x4adf68: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x4adf68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4adf6c: 0x6843005f  ldl         $v1, 0x5F($v0)
    ctx->pc = 0x4adf6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 95); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x4adf70: 0x6c430058  ldr         $v1, 0x58($v0)
    ctx->pc = 0x4adf70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 88); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x4adf74: 0x8c440060  lw          $a0, 0x60($v0)
    ctx->pc = 0x4adf74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x4adf78: 0xb0c30007  sdl         $v1, 0x7($a2)
    ctx->pc = 0x4adf78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4adf7c: 0xb4c30000  sdr         $v1, 0x0($a2)
    ctx->pc = 0x4adf7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4adf80: 0xacc40008  sw          $a0, 0x8($a2)
    ctx->pc = 0x4adf80u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 4));
    // 0x4adf84: 0x3e00008  jr          $ra
    ctx->pc = 0x4ADF84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4ADF84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4ADF8Cu;
    // 0x4adf8c: 0x0  nop
    ctx->pc = 0x4adf8cu;
    // NOP
    // 0x4adf90: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x4adf90u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4adf94: 0x68c30007  ldl         $v1, 0x7($a2)
    ctx->pc = 0x4adf94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x4adf98: 0x6cc30000  ldr         $v1, 0x0($a2)
    ctx->pc = 0x4adf98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x4adf9c: 0x8cc40008  lw          $a0, 0x8($a2)
    ctx->pc = 0x4adf9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x4adfa0: 0xb043006b  sdl         $v1, 0x6B($v0)
    ctx->pc = 0x4adfa0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 107); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4adfa4: 0xb4430064  sdr         $v1, 0x64($v0)
    ctx->pc = 0x4adfa4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 100); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4adfa8: 0xac44006c  sw          $a0, 0x6C($v0)
    ctx->pc = 0x4adfa8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 108), GPR_U32(ctx, 4));
    // 0x4adfac: 0xc444005c  lwc1        $f4, 0x5C($v0)
    ctx->pc = 0x4adfacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x4adfb0: 0xc4420060  lwc1        $f2, 0x60($v0)
    ctx->pc = 0x4adfb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4adfb4: 0xc4400068  lwc1        $f0, 0x68($v0)
    ctx->pc = 0x4adfb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4adfb8: 0xc446006c  lwc1        $f6, 0x6C($v0)
    ctx->pc = 0x4adfb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x4adfbc: 0xc4410058  lwc1        $f1, 0x58($v0)
    ctx->pc = 0x4adfbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4adfc0: 0x460011c2  mul.s       $f7, $f2, $f0
    ctx->pc = 0x4adfc0u;
    ctx->f[7] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x4adfc4: 0xc4430064  lwc1        $f3, 0x64($v0)
    ctx->pc = 0x4adfc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x4adfc8: 0x46062142  mul.s       $f5, $f4, $f6
    ctx->pc = 0x4adfc8u;
    ctx->f[5] = FPU_MUL_S(ctx->f[4], ctx->f[6]);
    // 0x4adfcc: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x4adfccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x4adfd0: 0x46032102  mul.s       $f4, $f4, $f3
    ctx->pc = 0x4adfd0u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x4adfd4: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x4adfd4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x4adfd8: 0x46060842  mul.s       $f1, $f1, $f6
    ctx->pc = 0x4adfd8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[6]);
    // 0x4adfdc: 0x46072941  sub.s       $f5, $f5, $f7
    ctx->pc = 0x4adfdcu;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[7]);
    // 0x4adfe0: 0x46040001  sub.s       $f0, $f0, $f4
    ctx->pc = 0x4adfe0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x4adfe4: 0x46011081  sub.s       $f2, $f2, $f1
    ctx->pc = 0x4adfe4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x4adfe8: 0xe4450070  swc1        $f5, 0x70($v0)
    ctx->pc = 0x4adfe8u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 112), bits); }
    // 0x4adfec: 0xe4400078  swc1        $f0, 0x78($v0)
    ctx->pc = 0x4adfecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 120), bits); }
    // 0x4adff0: 0xe4420074  swc1        $f2, 0x74($v0)
    ctx->pc = 0x4adff0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 116), bits); }
    // 0x4adff4: 0x8c430088  lw          $v1, 0x88($v0)
    ctx->pc = 0x4adff4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x4adff8: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x4adff8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
    // 0x4adffc: 0x3e00008  jr          $ra
    ctx->pc = 0x4ADFFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AE000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ADFFCu;
        // 0x4ae000: 0xac430088  sw          $v1, 0x88($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 136), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4ADFFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AE004u;
    // 0x4ae004: 0x0  nop
    ctx->pc = 0x4ae004u;
    // NOP
    // 0x4ae008: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x4ae008u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ae00c: 0x6843006b  ldl         $v1, 0x6B($v0)
    ctx->pc = 0x4ae00cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 107); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x4ae010: 0x6c430064  ldr         $v1, 0x64($v0)
    ctx->pc = 0x4ae010u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 100); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x4ae014: 0x8c44006c  lw          $a0, 0x6C($v0)
    ctx->pc = 0x4ae014u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
    // 0x4ae018: 0xb0c30007  sdl         $v1, 0x7($a2)
    ctx->pc = 0x4ae018u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4ae01c: 0xb4c30000  sdr         $v1, 0x0($a2)
    ctx->pc = 0x4ae01cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4ae020: 0xacc40008  sw          $a0, 0x8($a2)
    ctx->pc = 0x4ae020u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 4));
    // 0x4ae024: 0x3e00008  jr          $ra
    ctx->pc = 0x4AE024u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AE024u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AE02Cu;
    // 0x4ae02c: 0x0  nop
    ctx->pc = 0x4ae02cu;
    // NOP
    // 0x4ae030: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x4ae030u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ae034: 0x68430077  ldl         $v1, 0x77($v0)
    ctx->pc = 0x4ae034u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 119); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x4ae038: 0x6c430070  ldr         $v1, 0x70($v0)
    ctx->pc = 0x4ae038u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 112); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x4ae03c: 0x8c440078  lw          $a0, 0x78($v0)
    ctx->pc = 0x4ae03cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 120)));
    // 0x4ae040: 0xb0c30007  sdl         $v1, 0x7($a2)
    ctx->pc = 0x4ae040u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4ae044: 0xb4c30000  sdr         $v1, 0x0($a2)
    ctx->pc = 0x4ae044u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4ae048: 0xacc40008  sw          $a0, 0x8($a2)
    ctx->pc = 0x4ae048u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 4));
    // 0x4ae04c: 0x3e00008  jr          $ra
    ctx->pc = 0x4AE04Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AE04Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AE054u;
    // 0x4ae054: 0x0  nop
    ctx->pc = 0x4ae054u;
    // NOP
    // 0x4ae058: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x4ae058u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ae05c: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x4ae05cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4ae060: 0x8c430088  lw          $v1, 0x88($v0)
    ctx->pc = 0x4ae060u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x4ae064: 0xe4400080  swc1        $f0, 0x80($v0)
    ctx->pc = 0x4ae064u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 128), bits); }
    // 0x4ae068: 0x34630020  ori         $v1, $v1, 0x20
    ctx->pc = 0x4ae068u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32);
    // 0x4ae06c: 0x3e00008  jr          $ra
    ctx->pc = 0x4AE06Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AE070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AE06Cu;
        // 0x4ae070: 0xac430088  sw          $v1, 0x88($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 136), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AE06Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AE074u;
    // 0x4ae074: 0x0  nop
    ctx->pc = 0x4ae074u;
    // NOP
    // 0x4ae078: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x4ae078u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ae07c: 0xc4400080  lwc1        $f0, 0x80($v0)
    ctx->pc = 0x4ae07cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4ae080: 0x3e00008  jr          $ra
    ctx->pc = 0x4AE080u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AE084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AE080u;
        // 0x4ae084: 0xe4c00000  swc1        $f0, 0x0($a2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AE080u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AE088u;
    // 0x4ae088: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x4ae088u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ae08c: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x4ae08cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4ae090: 0x8c430088  lw          $v1, 0x88($v0)
    ctx->pc = 0x4ae090u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x4ae094: 0xe4400084  swc1        $f0, 0x84($v0)
    ctx->pc = 0x4ae094u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 132), bits); }
    // 0x4ae098: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x4ae098u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x4ae09c: 0x3e00008  jr          $ra
    ctx->pc = 0x4AE09Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AE0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AE09Cu;
        // 0x4ae0a0: 0xac430088  sw          $v1, 0x88($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 136), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AE09Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AE0A4u;
    // 0x4ae0a4: 0x0  nop
    ctx->pc = 0x4ae0a4u;
    // NOP
    // 0x4ae0a8: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x4ae0a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ae0ac: 0xc4400084  lwc1        $f0, 0x84($v0)
    ctx->pc = 0x4ae0acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4ae0b0: 0x3e00008  jr          $ra
    ctx->pc = 0x4AE0B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AE0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AE0B0u;
        // 0x4ae0b4: 0xe4c00000  swc1        $f0, 0x0($a2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AE0B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AE0B8u;
    // 0x4ae0b8: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x4ae0b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ae0bc: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x4ae0bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4ae0c0: 0x8c430088  lw          $v1, 0x88($v0)
    ctx->pc = 0x4ae0c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x4ae0c4: 0xe440007c  swc1        $f0, 0x7C($v0)
    ctx->pc = 0x4ae0c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 124), bits); }
    // 0x4ae0c8: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x4ae0c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
    // 0x4ae0cc: 0x3e00008  jr          $ra
    ctx->pc = 0x4AE0CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AE0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AE0CCu;
        // 0x4ae0d0: 0xac430088  sw          $v1, 0x88($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 136), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AE0CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AE0D4u;
    // 0x4ae0d4: 0x0  nop
    ctx->pc = 0x4ae0d4u;
    // NOP
    // 0x4ae0d8: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x4ae0d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ae0dc: 0xc440007c  lwc1        $f0, 0x7C($v0)
    ctx->pc = 0x4ae0dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4ae0e0: 0x3e00008  jr          $ra
    ctx->pc = 0x4AE0E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AE0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AE0E0u;
        // 0x4ae0e4: 0xe4c00000  swc1        $f0, 0x0($a2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AE0E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AE0E8u;
    // 0x4ae0e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4ae0e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4ae0ec: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x4ae0ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x4ae0f0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4ae0f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x4ae0f4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x4ae0f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ae0f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4ae0f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4ae0fc: 0xc129894  jal         func_4A6250
    ctx->pc = 0x4AE0FCu;
    SET_GPR_U32(ctx, 31, 0x4AE104u);
    ctx->pc = 0x4AE100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AE0FCu;
    // 0x4ae100: 0x24a58b28  addiu       $a1, $a1, -0x74D8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A6250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A6250u, 0x4AE0FCu, 0x4AE104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AE104u;
label_4ae104:
    // 0x4ae104: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4ae104u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ae108: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
    ctx->pc = 0x4AE108u;
    {
        const bool branch_taken_0x4ae108 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AE10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AE108u;
        // 0x4ae10c: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ae108) {
            ctx->pc = 0x4AE158u;
            goto label_4ae158;
        }
    }
    ctx->pc = 0x4AE110u;
    // 0x4ae110: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4ae110u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ae114: 0x24a52c48  addiu       $a1, $a1, 0x2C48
    ctx->pc = 0x4ae114u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11336));
    // 0x4ae118: 0xc12986c  jal         func_4A61B0
    ctx->pc = 0x4AE118u;
    SET_GPR_U32(ctx, 31, 0x4AE120u);
    ctx->pc = 0x4AE11Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AE118u;
    // 0x4ae11c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A61B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A61B0u, 0x4AE118u, 0x4AE120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AE120u;
label_4ae120:
    // 0x4ae120: 0x3c03004b  lui         $v1, 0x4B
    ctx->pc = 0x4ae120u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)75 << 16));
    // 0x4ae124: 0x3c04004b  lui         $a0, 0x4B
    ctx->pc = 0x4ae124u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)75 << 16));
    // 0x4ae128: 0x3c05004b  lui         $a1, 0x4B
    ctx->pc = 0x4ae128u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)75 << 16));
    // 0x4ae12c: 0x3c06004b  lui         $a2, 0x4B
    ctx->pc = 0x4ae12cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)75 << 16));
    // 0x4ae130: 0x2463e198  addiu       $v1, $v1, -0x1E68
    ctx->pc = 0x4ae130u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959512));
    // 0x4ae134: 0x2484e228  addiu       $a0, $a0, -0x1DD8
    ctx->pc = 0x4ae134u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959656));
    // 0x4ae138: 0x24a5e250  addiu       $a1, $a1, -0x1DB0
    ctx->pc = 0x4ae138u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959696));
    // 0x4ae13c: 0x24c6e288  addiu       $a2, $a2, -0x1D78
    ctx->pc = 0x4ae13cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294959752));
    // 0x4ae140: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x4ae140u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x4ae144: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4ae144u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ae148: 0xae040010  sw          $a0, 0x10($s0)
    ctx->pc = 0x4ae148u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 4));
    // 0x4ae14c: 0xae050014  sw          $a1, 0x14($s0)
    ctx->pc = 0x4ae14cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 5));
    // 0x4ae150: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x4AE150u;
    {
        const bool branch_taken_0x4ae150 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AE154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AE150u;
        // 0x4ae154: 0xae060018  sw          $a2, 0x18($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ae150) {
            ctx->pc = 0x4AE160u;
            goto label_4ae160;
        }
    }
    ctx->pc = 0x4AE158u;
label_4ae158:
    // 0x4ae158: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4ae158u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ae15c: 0x0  nop
    ctx->pc = 0x4ae15cu;
    // NOP
label_4ae160:
    // 0x4ae160: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4ae160u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4ae164: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4ae164u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ae168: 0x3e00008  jr          $ra
    ctx->pc = 0x4AE168u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AE16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AE168u;
        // 0x4ae16c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AE168u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AE170u;
    // 0x4ae170: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4ae170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4ae174: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x4ae174u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x4ae178: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4ae178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4ae17c: 0xc1298cc  jal         func_4A6330
    ctx->pc = 0x4AE17Cu;
    SET_GPR_U32(ctx, 31, 0x4AE184u);
    ctx->pc = 0x4AE180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AE17Cu;
    // 0x4ae180: 0x24848b28  addiu       $a0, $a0, -0x74D8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A6330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A6330u, 0x4AE17Cu, 0x4AE184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AE184u;
label_4ae184:
    // 0x4ae184: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4ae184u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ae188: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x4ae188u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x4ae18c: 0x3e00008  jr          $ra
    ctx->pc = 0x4AE18Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AE190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AE18Cu;
        // 0x4ae190: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AE18Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AE194u;
    // 0x4ae194: 0x0  nop
    ctx->pc = 0x4ae194u;
    // NOP
    ctx->pc = 0x4ae198u;
}
