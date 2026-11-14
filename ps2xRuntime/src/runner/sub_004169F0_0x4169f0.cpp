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

// Function: sub_004169F0
// Address: 0x4169f0 - 0x4172b8
void sub_004169F0_0x4169f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004169F0_0x4169f0");
#endif

    switch (ctx->pc) {
        case 0x416bd0u: goto label_416bd0;
        default: break;
    }

    ctx->pc = 0x4169f0u;

    // 0x4169f0: 0xc4800078  lwc1        $f0, 0x78($a0)
    ctx->pc = 0x4169f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4169f4: 0x24860124  addiu       $a2, $a0, 0x124
    ctx->pc = 0x4169f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 292));
    // 0x4169f8: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x4169f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x4169fc: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4169fcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x416a00: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x416a00u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x416a04: 0x24850094  addiu       $a1, $a0, 0x94
    ctx->pc = 0x416a04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 148));
    // 0x416a08: 0x24430050  addiu       $v1, $v0, 0x50
    ctx->pc = 0x416a08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x416a0c: 0xc4410050  lwc1        $f1, 0x50($v0)
    ctx->pc = 0x416a0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x416a10: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x416a10u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x416a14: 0xe7a10040  swc1        $f1, 0x40($sp)
    ctx->pc = 0x416a14u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x416a18: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x416a18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x416a1c: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x416a1cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x416a20: 0xe7a20044  swc1        $f2, 0x44($sp)
    ctx->pc = 0x416a20u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x416a24: 0xc4630008  lwc1        $f3, 0x8($v1)
    ctx->pc = 0x416a24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x416a28: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x416a28u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x416a2c: 0xe7a30048  swc1        $f3, 0x48($sp)
    ctx->pc = 0x416a2cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x416a30: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x416a30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x416a34: 0xc484007c  lwc1        $f4, 0x7C($a0)
    ctx->pc = 0x416a34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x416a38: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x416a38u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x416a3c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x416a3cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x416a40: 0xe7a10040  swc1        $f1, 0x40($sp)
    ctx->pc = 0x416a40u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x416a44: 0xc4600014  lwc1        $f0, 0x14($v1)
    ctx->pc = 0x416a44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x416a48: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x416a48u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x416a4c: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x416a4cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x416a50: 0xe7a20044  swc1        $f2, 0x44($sp)
    ctx->pc = 0x416a50u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x416a54: 0xc4600018  lwc1        $f0, 0x18($v1)
    ctx->pc = 0x416a54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x416a58: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x416a58u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x416a5c: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x416a5cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x416a60: 0xe7a30048  swc1        $f3, 0x48($sp)
    ctx->pc = 0x416a60u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x416a64: 0xc4490050  lwc1        $f9, 0x50($v0)
    ctx->pc = 0x416a64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x416a68: 0xc4800068  lwc1        $f0, 0x68($a0)
    ctx->pc = 0x416a68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x416a6c: 0x46004a42  mul.s       $f9, $f9, $f0
    ctx->pc = 0x416a6cu;
    ctx->f[9] = FPU_MUL_S(ctx->f[9], ctx->f[0]);
    // 0x416a70: 0xe7a90020  swc1        $f9, 0x20($sp)
    ctx->pc = 0x416a70u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x416a74: 0xc4680004  lwc1        $f8, 0x4($v1)
    ctx->pc = 0x416a74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x416a78: 0x46004202  mul.s       $f8, $f8, $f0
    ctx->pc = 0x416a78u;
    ctx->f[8] = FPU_MUL_S(ctx->f[8], ctx->f[0]);
    // 0x416a7c: 0xe7a80024  swc1        $f8, 0x24($sp)
    ctx->pc = 0x416a7cu;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x416a80: 0xc4670008  lwc1        $f7, 0x8($v1)
    ctx->pc = 0x416a80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x416a84: 0x460039c2  mul.s       $f7, $f7, $f0
    ctx->pc = 0x416a84u;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[0]);
    // 0x416a88: 0xe7a70028  swc1        $f7, 0x28($sp)
    ctx->pc = 0x416a88u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x416a8c: 0xc4630020  lwc1        $f3, 0x20($v1)
    ctx->pc = 0x416a8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x416a90: 0x460918c0  add.s       $f3, $f3, $f9
    ctx->pc = 0x416a90u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[9]);
    // 0x416a94: 0xe7a30000  swc1        $f3, 0x0($sp)
    ctx->pc = 0x416a94u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x416a98: 0xc4620024  lwc1        $f2, 0x24($v1)
    ctx->pc = 0x416a98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x416a9c: 0x46081080  add.s       $f2, $f2, $f8
    ctx->pc = 0x416a9cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[8]);
    // 0x416aa0: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x416aa0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x416aa4: 0xc4610028  lwc1        $f1, 0x28($v1)
    ctx->pc = 0x416aa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x416aa8: 0x46070840  add.s       $f1, $f1, $f7
    ctx->pc = 0x416aa8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[7]);
    // 0x416aac: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x416aacu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x416ab0: 0xc4660010  lwc1        $f6, 0x10($v1)
    ctx->pc = 0x416ab0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x416ab4: 0xc480006c  lwc1        $f0, 0x6C($a0)
    ctx->pc = 0x416ab4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x416ab8: 0x46003182  mul.s       $f6, $f6, $f0
    ctx->pc = 0x416ab8u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x416abc: 0xe7a60030  swc1        $f6, 0x30($sp)
    ctx->pc = 0x416abcu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x416ac0: 0xc4640014  lwc1        $f4, 0x14($v1)
    ctx->pc = 0x416ac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x416ac4: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x416ac4u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x416ac8: 0xe7a40034  swc1        $f4, 0x34($sp)
    ctx->pc = 0x416ac8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x416acc: 0xc4650018  lwc1        $f5, 0x18($v1)
    ctx->pc = 0x416accu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x416ad0: 0x46002942  mul.s       $f5, $f5, $f0
    ctx->pc = 0x416ad0u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x416ad4: 0x460618c0  add.s       $f3, $f3, $f6
    ctx->pc = 0x416ad4u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[6]);
    // 0x416ad8: 0x46041080  add.s       $f2, $f2, $f4
    ctx->pc = 0x416ad8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[4]);
    // 0x416adc: 0xe7a30000  swc1        $f3, 0x0($sp)
    ctx->pc = 0x416adcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x416ae0: 0x46050840  add.s       $f1, $f1, $f5
    ctx->pc = 0x416ae0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[5]);
    // 0x416ae4: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x416ae4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x416ae8: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x416ae8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x416aec: 0x46094a40  add.s       $f9, $f9, $f9
    ctx->pc = 0x416aecu;
    ctx->f[9] = FPU_ADD_S(ctx->f[9], ctx->f[9]);
    // 0x416af0: 0x46084200  add.s       $f8, $f8, $f8
    ctx->pc = 0x416af0u;
    ctx->f[8] = FPU_ADD_S(ctx->f[8], ctx->f[8]);
    // 0x416af4: 0xe7a90020  swc1        $f9, 0x20($sp)
    ctx->pc = 0x416af4u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x416af8: 0x460739c0  add.s       $f7, $f7, $f7
    ctx->pc = 0x416af8u;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[7]);
    // 0x416afc: 0xe7a80024  swc1        $f8, 0x24($sp)
    ctx->pc = 0x416afcu;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x416b00: 0xe7a70028  swc1        $f7, 0x28($sp)
    ctx->pc = 0x416b00u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x416b04: 0x46063180  add.s       $f6, $f6, $f6
    ctx->pc = 0x416b04u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[6]);
    // 0x416b08: 0x46042100  add.s       $f4, $f4, $f4
    ctx->pc = 0x416b08u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[4]);
    // 0x416b0c: 0xe7a60030  swc1        $f6, 0x30($sp)
    ctx->pc = 0x416b0cu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x416b10: 0x46052940  add.s       $f5, $f5, $f5
    ctx->pc = 0x416b10u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[5]);
    // 0x416b14: 0xe7a40034  swc1        $f4, 0x34($sp)
    ctx->pc = 0x416b14u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x416b18: 0xe7a50038  swc1        $f5, 0x38($sp)
    ctx->pc = 0x416b18u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x416b1c: 0x6ba20007  ldl         $v0, 0x7($sp)
    ctx->pc = 0x416b1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x416b20: 0x6fa20000  ldr         $v0, 0x0($sp)
    ctx->pc = 0x416b20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x416b24: 0x8fa70008  lw          $a3, 0x8($sp)
    ctx->pc = 0x416b24u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x416b28: 0xb082012b  sdl         $v0, 0x12B($a0)
    ctx->pc = 0x416b28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 299); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x416b2c: 0xb4820124  sdr         $v0, 0x124($a0)
    ctx->pc = 0x416b2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 292); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x416b30: 0xac87012c  sw          $a3, 0x12C($a0)
    ctx->pc = 0x416b30u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 300), GPR_U32(ctx, 7));
    // 0x416b34: 0x460918c1  sub.s       $f3, $f3, $f9
    ctx->pc = 0x416b34u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[9]);
    // 0x416b38: 0x46081081  sub.s       $f2, $f2, $f8
    ctx->pc = 0x416b38u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[8]);
    // 0x416b3c: 0xe7a30000  swc1        $f3, 0x0($sp)
    ctx->pc = 0x416b3cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x416b40: 0x46070841  sub.s       $f1, $f1, $f7
    ctx->pc = 0x416b40u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[7]);
    // 0x416b44: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x416b44u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x416b48: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x416b48u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x416b4c: 0x6ba20007  ldl         $v0, 0x7($sp)
    ctx->pc = 0x416b4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x416b50: 0x6fa20000  ldr         $v0, 0x0($sp)
    ctx->pc = 0x416b50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x416b54: 0x8fa70008  lw          $a3, 0x8($sp)
    ctx->pc = 0x416b54u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x416b58: 0xb0c20013  sdl         $v0, 0x13($a2)
    ctx->pc = 0x416b58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x416b5c: 0xb4c2000c  sdr         $v0, 0xC($a2)
    ctx->pc = 0x416b5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x416b60: 0xacc70014  sw          $a3, 0x14($a2)
    ctx->pc = 0x416b60u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 7));
    // 0x416b64: 0x460618c1  sub.s       $f3, $f3, $f6
    ctx->pc = 0x416b64u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[6]);
    // 0x416b68: 0x46041081  sub.s       $f2, $f2, $f4
    ctx->pc = 0x416b68u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
    // 0x416b6c: 0xe7a30000  swc1        $f3, 0x0($sp)
    ctx->pc = 0x416b6cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x416b70: 0x46050841  sub.s       $f1, $f1, $f5
    ctx->pc = 0x416b70u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[5]);
    // 0x416b74: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x416b74u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x416b78: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x416b78u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x416b7c: 0x6ba20007  ldl         $v0, 0x7($sp)
    ctx->pc = 0x416b7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x416b80: 0x6fa20000  ldr         $v0, 0x0($sp)
    ctx->pc = 0x416b80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x416b84: 0x8fa70008  lw          $a3, 0x8($sp)
    ctx->pc = 0x416b84u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x416b88: 0xb0c2001f  sdl         $v0, 0x1F($a2)
    ctx->pc = 0x416b88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x416b8c: 0xb4c20018  sdr         $v0, 0x18($a2)
    ctx->pc = 0x416b8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x416b90: 0xacc70020  sw          $a3, 0x20($a2)
    ctx->pc = 0x416b90u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 32), GPR_U32(ctx, 7));
    // 0x416b94: 0x460918c0  add.s       $f3, $f3, $f9
    ctx->pc = 0x416b94u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[9]);
    // 0x416b98: 0x46081080  add.s       $f2, $f2, $f8
    ctx->pc = 0x416b98u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[8]);
    // 0x416b9c: 0xe7a30000  swc1        $f3, 0x0($sp)
    ctx->pc = 0x416b9cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x416ba0: 0x46070840  add.s       $f1, $f1, $f7
    ctx->pc = 0x416ba0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[7]);
    // 0x416ba4: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x416ba4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x416ba8: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x416ba8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x416bac: 0x6ba20007  ldl         $v0, 0x7($sp)
    ctx->pc = 0x416bacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x416bb0: 0x6fa20000  ldr         $v0, 0x0($sp)
    ctx->pc = 0x416bb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x416bb4: 0x8fa70008  lw          $a3, 0x8($sp)
    ctx->pc = 0x416bb4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x416bb8: 0xb0c2002b  sdl         $v0, 0x2B($a2)
    ctx->pc = 0x416bb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 43); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x416bbc: 0xb4c20024  sdr         $v0, 0x24($a2)
    ctx->pc = 0x416bbcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 36); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x416bc0: 0xacc7002c  sw          $a3, 0x2C($a2)
    ctx->pc = 0x416bc0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 44), GPR_U32(ctx, 7));
    // 0x416bc4: 0x24090030  addiu       $t1, $zero, 0x30
    ctx->pc = 0x416bc4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x416bc8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x416bc8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x416bcc: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x416bccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_416bd0:
    // 0x416bd0: 0xc81021  addu        $v0, $a2, $t0
    ctx->pc = 0x416bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x416bd4: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x416bd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x416bd8: 0xc7a40040  lwc1        $f4, 0x40($sp)
    ctx->pc = 0x416bd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x416bdc: 0xc7a20044  lwc1        $f2, 0x44($sp)
    ctx->pc = 0x416bdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x416be0: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x416be0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x416be4: 0xc7a30048  lwc1        $f3, 0x48($sp)
    ctx->pc = 0x416be4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x416be8: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x416be8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x416bec: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x416becu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x416bf0: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x416bf0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x416bf4: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x416bf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x416bf8: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x416bf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x416bfc: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x416bfcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x416c00: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x416c00u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x416c04: 0xc4600030  lwc1        $f0, 0x30($v1)
    ctx->pc = 0x416c04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x416c08: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x416c08u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x416c0c: 0xe4440000  swc1        $f4, 0x0($v0)
    ctx->pc = 0x416c0cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x416c10: 0xc4600034  lwc1        $f0, 0x34($v1)
    ctx->pc = 0x416c10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x416c14: 0xc7a20044  lwc1        $f2, 0x44($sp)
    ctx->pc = 0x416c14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x416c18: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x416c18u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x416c1c: 0xe4420004  swc1        $f2, 0x4($v0)
    ctx->pc = 0x416c1cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x416c20: 0xc7a30048  lwc1        $f3, 0x48($sp)
    ctx->pc = 0x416c20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x416c24: 0xc4600038  lwc1        $f0, 0x38($v1)
    ctx->pc = 0x416c24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x416c28: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x416c28u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x416c2c: 0xe4430008  swc1        $f3, 0x8($v0)
    ctx->pc = 0x416c2cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x416c30: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x416c30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x416c34: 0xc4810080  lwc1        $f1, 0x80($a0)
    ctx->pc = 0x416c34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x416c38: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x416c38u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x416c3c: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x416c3cu;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x416c40: 0xe4440000  swc1        $f4, 0x0($v0)
    ctx->pc = 0x416c40u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x416c44: 0xc4810080  lwc1        $f1, 0x80($a0)
    ctx->pc = 0x416c44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x416c48: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x416c48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x416c4c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x416c4cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x416c50: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x416c50u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x416c54: 0xe4420004  swc1        $f2, 0x4($v0)
    ctx->pc = 0x416c54u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x416c58: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x416c58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x416c5c: 0xc4810080  lwc1        $f1, 0x80($a0)
    ctx->pc = 0x416c5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x416c60: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x416c60u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x416c64: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x416c64u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x416c68: 0xe4430008  swc1        $f3, 0x8($v0)
    ctx->pc = 0x416c68u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x416c6c: 0xc91021  addu        $v0, $a2, $t1
    ctx->pc = 0x416c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
    // 0x416c70: 0xc7a20040  lwc1        $f2, 0x40($sp)
    ctx->pc = 0x416c70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x416c74: 0xc4600030  lwc1        $f0, 0x30($v1)
    ctx->pc = 0x416c74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x416c78: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x416c78u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x416c7c: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x416c7cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x416c80: 0xc4600034  lwc1        $f0, 0x34($v1)
    ctx->pc = 0x416c80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x416c84: 0xc7a30044  lwc1        $f3, 0x44($sp)
    ctx->pc = 0x416c84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x416c88: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x416c88u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x416c8c: 0xe4430004  swc1        $f3, 0x4($v0)
    ctx->pc = 0x416c8cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x416c90: 0xc7a40048  lwc1        $f4, 0x48($sp)
    ctx->pc = 0x416c90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x416c94: 0xc4600038  lwc1        $f0, 0x38($v1)
    ctx->pc = 0x416c94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x416c98: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x416c98u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x416c9c: 0xe4440008  swc1        $f4, 0x8($v0)
    ctx->pc = 0x416c9cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x416ca0: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x416ca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x416ca4: 0xc4810084  lwc1        $f1, 0x84($a0)
    ctx->pc = 0x416ca4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x416ca8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x416ca8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x416cac: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x416cacu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x416cb0: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x416cb0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x416cb4: 0xc4810084  lwc1        $f1, 0x84($a0)
    ctx->pc = 0x416cb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x416cb8: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x416cb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x416cbc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x416cbcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x416cc0: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x416cc0u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x416cc4: 0xe4430004  swc1        $f3, 0x4($v0)
    ctx->pc = 0x416cc4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x416cc8: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x416cc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x416ccc: 0xc4810084  lwc1        $f1, 0x84($a0)
    ctx->pc = 0x416cccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x416cd0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x416cd0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x416cd4: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x416cd4u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x416cd8: 0xe4440008  swc1        $f4, 0x8($v0)
    ctx->pc = 0x416cd8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x416cdc: 0x2529000c  addiu       $t1, $t1, 0xC
    ctx->pc = 0x416cdcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 12));
    // 0x416ce0: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x416ce0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x416ce4: 0x4e1ffba  bgez        $a3, . + 4 + (-0x46 << 2)
    ctx->pc = 0x416CE4u;
    {
        const bool branch_taken_0x416ce4 = (GPR_S32(ctx, 7) >= 0);
        ctx->pc = 0x416CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x416CE4u;
        // 0x416ce8: 0x2508000c  addiu       $t0, $t0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x416ce4) {
            ctx->pc = 0x416BD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_416bd0;
        }
    }
    ctx->pc = 0x416CECu;
    // 0x416cec: 0x68620027  ldl         $v0, 0x27($v1)
    ctx->pc = 0x416cecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x416cf0: 0x6c620020  ldr         $v0, 0x20($v1)
    ctx->pc = 0x416cf0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x416cf4: 0x8c640028  lw          $a0, 0x28($v1)
    ctx->pc = 0x416cf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x416cf8: 0xb0a20007  sdl         $v0, 0x7($a1)
    ctx->pc = 0x416cf8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x416cfc: 0xb4a20000  sdr         $v0, 0x0($a1)
    ctx->pc = 0x416cfcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x416d00: 0xaca40008  sw          $a0, 0x8($a1)
    ctx->pc = 0x416d00u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 4));
    // 0x416d04: 0xc4620020  lwc1        $f2, 0x20($v1)
    ctx->pc = 0x416d04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x416d08: 0xc4630024  lwc1        $f3, 0x24($v1)
    ctx->pc = 0x416d08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x416d0c: 0xc4c00030  lwc1        $f0, 0x30($a2)
    ctx->pc = 0x416d0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x416d10: 0xc4c10034  lwc1        $f1, 0x34($a2)
    ctx->pc = 0x416d10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x416d14: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x416d14u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x416d18: 0xc4640028  lwc1        $f4, 0x28($v1)
    ctx->pc = 0x416d18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x416d1c: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x416d1cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x416d20: 0xc4c20038  lwc1        $f2, 0x38($a2)
    ctx->pc = 0x416d20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x416d24: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x416d24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x416d28: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x416d28u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x416d2c: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x416d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x416d30: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x416d30u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x416d34: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x416d34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x416d38: 0x427c3  sra         $a0, $a0, 31
    ctx->pc = 0x416d38u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 31));
    // 0x416d3c: 0x217c3  sra         $v0, $v0, 31
    ctx->pc = 0x416d3cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 31));
    // 0x416d40: 0x31fc3  sra         $v1, $v1, 31
    ctx->pc = 0x416d40u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 31));
    // 0x416d44: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x416d44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x416d48: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x416d48u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x416d4c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x416d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x416d50: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x416d50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x416d54: 0xa0a40010  sb          $a0, 0x10($a1)
    ctx->pc = 0x416d54u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 16), (uint8_t)GPR_U32(ctx, 4));
    // 0x416d58: 0xa0a20011  sb          $v0, 0x11($a1)
    ctx->pc = 0x416d58u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 17), (uint8_t)GPR_U32(ctx, 2));
    // 0x416d5c: 0xe4a0000c  swc1        $f0, 0xC($a1)
    ctx->pc = 0x416d5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
    // 0x416d60: 0xa0a30012  sb          $v1, 0x12($a1)
    ctx->pc = 0x416d60u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 18), (uint8_t)GPR_U32(ctx, 3));
    // 0x416d64: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x416d64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x416d68: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x416d68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x416d6c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x416d6cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x416d70: 0xc4a20008  lwc1        $f2, 0x8($a1)
    ctx->pc = 0x416d70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x416d74: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x416d74u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x416d78: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x416d78u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x416d7c: 0xe4a00014  swc1        $f0, 0x14($a1)
    ctx->pc = 0x416d7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 20), bits); }
    // 0x416d80: 0xe4a10018  swc1        $f1, 0x18($a1)
    ctx->pc = 0x416d80u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 24), bits); }
    // 0x416d84: 0xe4a2001c  swc1        $f2, 0x1C($a1)
    ctx->pc = 0x416d84u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 28), bits); }
    // 0x416d88: 0xc4c30000  lwc1        $f3, 0x0($a2)
    ctx->pc = 0x416d88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x416d8c: 0xc4c40004  lwc1        $f4, 0x4($a2)
    ctx->pc = 0x416d8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x416d90: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x416d90u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x416d94: 0xc4c50008  lwc1        $f5, 0x8($a2)
    ctx->pc = 0x416d94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x416d98: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->pc = 0x416d98u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x416d9c: 0x8ca40014  lw          $a0, 0x14($a1)
    ctx->pc = 0x416d9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x416da0: 0x46022942  mul.s       $f5, $f5, $f2
    ctx->pc = 0x416da0u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x416da4: 0x8ca20018  lw          $v0, 0x18($a1)
    ctx->pc = 0x416da4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x416da8: 0x8ca3001c  lw          $v1, 0x1C($a1)
    ctx->pc = 0x416da8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x416dac: 0x427c3  sra         $a0, $a0, 31
    ctx->pc = 0x416dacu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 31));
    // 0x416db0: 0x460418c0  add.s       $f3, $f3, $f4
    ctx->pc = 0x416db0u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
    // 0x416db4: 0x217c3  sra         $v0, $v0, 31
    ctx->pc = 0x416db4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 31));
    // 0x416db8: 0x31fc3  sra         $v1, $v1, 31
    ctx->pc = 0x416db8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 31));
    // 0x416dbc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x416dbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x416dc0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x416dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x416dc4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x416dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x416dc8: 0x460518c0  add.s       $f3, $f3, $f5
    ctx->pc = 0x416dc8u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[5]);
    // 0x416dcc: 0xa0a40024  sb          $a0, 0x24($a1)
    ctx->pc = 0x416dccu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 36), (uint8_t)GPR_U32(ctx, 4));
    // 0x416dd0: 0xa0a20025  sb          $v0, 0x25($a1)
    ctx->pc = 0x416dd0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 37), (uint8_t)GPR_U32(ctx, 2));
    // 0x416dd4: 0xa0a30026  sb          $v1, 0x26($a1)
    ctx->pc = 0x416dd4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 38), (uint8_t)GPR_U32(ctx, 3));
    // 0x416dd8: 0xe4a30020  swc1        $f3, 0x20($a1)
    ctx->pc = 0x416dd8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 32), bits); }
    // 0x416ddc: 0xc4c7000c  lwc1        $f7, 0xC($a2)
    ctx->pc = 0x416ddcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x416de0: 0xc4c2003c  lwc1        $f2, 0x3C($a2)
    ctx->pc = 0x416de0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x416de4: 0xc4c60010  lwc1        $f6, 0x10($a2)
    ctx->pc = 0x416de4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x416de8: 0xc4c80040  lwc1        $f8, 0x40($a2)
    ctx->pc = 0x416de8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x416dec: 0x460239c1  sub.s       $f7, $f7, $f2
    ctx->pc = 0x416decu;
    ctx->f[7] = FPU_SUB_S(ctx->f[7], ctx->f[2]);
    // 0x416df0: 0xc4c50014  lwc1        $f5, 0x14($a2)
    ctx->pc = 0x416df0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x416df4: 0xc4c10044  lwc1        $f1, 0x44($a2)
    ctx->pc = 0x416df4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x416df8: 0x46083181  sub.s       $f6, $f6, $f8
    ctx->pc = 0x416df8u;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[8]);
    // 0x416dfc: 0xe7a70000  swc1        $f7, 0x0($sp)
    ctx->pc = 0x416dfcu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x416e00: 0x46012941  sub.s       $f5, $f5, $f1
    ctx->pc = 0x416e00u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[1]);
    // 0x416e04: 0xe7a60004  swc1        $f6, 0x4($sp)
    ctx->pc = 0x416e04u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x416e08: 0xe7a50008  swc1        $f5, 0x8($sp)
    ctx->pc = 0x416e08u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x416e0c: 0xc4c00048  lwc1        $f0, 0x48($a2)
    ctx->pc = 0x416e0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x416e10: 0xc4c4004c  lwc1        $f4, 0x4C($a2)
    ctx->pc = 0x416e10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x416e14: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x416e14u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x416e18: 0xc4c30050  lwc1        $f3, 0x50($a2)
    ctx->pc = 0x416e18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x416e1c: 0x46082101  sub.s       $f4, $f4, $f8
    ctx->pc = 0x416e1cu;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[8]);
    // 0x416e20: 0x460118c1  sub.s       $f3, $f3, $f1
    ctx->pc = 0x416e20u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
    // 0x416e24: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x416e24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x416e28: 0xe7a40014  swc1        $f4, 0x14($sp)
    ctx->pc = 0x416e28u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x416e2c: 0xe7a30018  swc1        $f3, 0x18($sp)
    ctx->pc = 0x416e2cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x416e30: 0x46033042  mul.s       $f1, $f6, $f3
    ctx->pc = 0x416e30u;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[3]);
    // 0x416e34: 0x46003182  mul.s       $f6, $f6, $f0
    ctx->pc = 0x416e34u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x416e38: 0x46043882  mul.s       $f2, $f7, $f4
    ctx->pc = 0x416e38u;
    ctx->f[2] = FPU_MUL_S(ctx->f[7], ctx->f[4]);
    // 0x416e3c: 0x46002802  mul.s       $f0, $f5, $f0
    ctx->pc = 0x416e3cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x416e40: 0x460339c2  mul.s       $f7, $f7, $f3
    ctx->pc = 0x416e40u;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[3]);
    // 0x416e44: 0x46042942  mul.s       $f5, $f5, $f4
    ctx->pc = 0x416e44u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
    // 0x416e48: 0x46061081  sub.s       $f2, $f2, $f6
    ctx->pc = 0x416e48u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[6]);
    // 0x416e4c: 0x46070001  sub.s       $f0, $f0, $f7
    ctx->pc = 0x416e4cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[7]);
    // 0x416e50: 0x46050841  sub.s       $f1, $f1, $f5
    ctx->pc = 0x416e50u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[5]);
    // 0x416e54: 0xe4a20030  swc1        $f2, 0x30($a1)
    ctx->pc = 0x416e54u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 48), bits); }
    // 0x416e58: 0xe4a0002c  swc1        $f0, 0x2C($a1)
    ctx->pc = 0x416e58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 44), bits); }
    // 0x416e5c: 0xe4a10028  swc1        $f1, 0x28($a1)
    ctx->pc = 0x416e5cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 40), bits); }
    // 0x416e60: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x416e60u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x416e64: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x416e64u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x416e68: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x416e68u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x416e6c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x416e6cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x416e70: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x416e70u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x416e74: 0x46010044  c1          0x10044
    ctx->pc = 0x416e74u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x416e78: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x416e78u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x416e7c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x416e7cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x416e80: 0x0  nop
    ctx->pc = 0x416e80u;
    // NOP
    // 0x416e84: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x416E84u;
    {
        const bool branch_taken_0x416e84 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x416E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x416E84u;
        // 0x416e88: 0x460008c6  mov.s       $f3, $f1 (Delay Slot)
        ctx->f[3] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x416e84) {
            ctx->pc = 0x416EA0u;
            goto label_416ea0;
        }
    }
    ctx->pc = 0x416E8Cu;
    // 0x416e8c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x416e8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x416e90: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x416e90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x416e94: 0x460100c3  div.s       $f3, $f0, $f1
    ctx->pc = 0x416e94u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x416e98: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x416E98u;
    {
        const bool branch_taken_0x416e98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x416E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x416E98u;
        // 0x416e9c: 0xc4a00028  lwc1        $f0, 0x28($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x416e98) {
            ctx->pc = 0x416EA8u;
            goto label_416ea8;
        }
    }
    ctx->pc = 0x416EA0u;
label_416ea0:
    // 0x416ea0: 0xc4a00028  lwc1        $f0, 0x28($a1)
    ctx->pc = 0x416ea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x416ea4: 0x0  nop
    ctx->pc = 0x416ea4u;
    // NOP
label_416ea8:
    // 0x416ea8: 0xc4a1002c  lwc1        $f1, 0x2C($a1)
    ctx->pc = 0x416ea8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x416eac: 0xc4a20030  lwc1        $f2, 0x30($a1)
    ctx->pc = 0x416eacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x416eb0: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x416eb0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x416eb4: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x416eb4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x416eb8: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x416eb8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x416ebc: 0xe4a00028  swc1        $f0, 0x28($a1)
    ctx->pc = 0x416ebcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 40), bits); }
    // 0x416ec0: 0xe4a1002c  swc1        $f1, 0x2C($a1)
    ctx->pc = 0x416ec0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 44), bits); }
    // 0x416ec4: 0xe4a20030  swc1        $f2, 0x30($a1)
    ctx->pc = 0x416ec4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 48), bits); }
    // 0x416ec8: 0xc4c3000c  lwc1        $f3, 0xC($a2)
    ctx->pc = 0x416ec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x416ecc: 0xc4c40010  lwc1        $f4, 0x10($a2)
    ctx->pc = 0x416eccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x416ed0: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x416ed0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x416ed4: 0xc4c50014  lwc1        $f5, 0x14($a2)
    ctx->pc = 0x416ed4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x416ed8: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->pc = 0x416ed8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x416edc: 0x8ca40028  lw          $a0, 0x28($a1)
    ctx->pc = 0x416edcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
    // 0x416ee0: 0x46022942  mul.s       $f5, $f5, $f2
    ctx->pc = 0x416ee0u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x416ee4: 0x8ca2002c  lw          $v0, 0x2C($a1)
    ctx->pc = 0x416ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x416ee8: 0x8ca30030  lw          $v1, 0x30($a1)
    ctx->pc = 0x416ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x416eec: 0x427c3  sra         $a0, $a0, 31
    ctx->pc = 0x416eecu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 31));
    // 0x416ef0: 0x460418c0  add.s       $f3, $f3, $f4
    ctx->pc = 0x416ef0u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
    // 0x416ef4: 0x217c3  sra         $v0, $v0, 31
    ctx->pc = 0x416ef4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 31));
    // 0x416ef8: 0x31fc3  sra         $v1, $v1, 31
    ctx->pc = 0x416ef8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 31));
    // 0x416efc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x416efcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x416f00: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x416f00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x416f04: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x416f04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x416f08: 0x460518c0  add.s       $f3, $f3, $f5
    ctx->pc = 0x416f08u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[5]);
    // 0x416f0c: 0xa0a40038  sb          $a0, 0x38($a1)
    ctx->pc = 0x416f0cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 56), (uint8_t)GPR_U32(ctx, 4));
    // 0x416f10: 0xa0a20039  sb          $v0, 0x39($a1)
    ctx->pc = 0x416f10u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 57), (uint8_t)GPR_U32(ctx, 2));
    // 0x416f14: 0xa0a3003a  sb          $v1, 0x3A($a1)
    ctx->pc = 0x416f14u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 58), (uint8_t)GPR_U32(ctx, 3));
    // 0x416f18: 0xe4a30034  swc1        $f3, 0x34($a1)
    ctx->pc = 0x416f18u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 52), bits); }
    // 0x416f1c: 0xc4c20030  lwc1        $f2, 0x30($a2)
    ctx->pc = 0x416f1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x416f20: 0xc4c0003c  lwc1        $f0, 0x3C($a2)
    ctx->pc = 0x416f20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x416f24: 0xc4c40034  lwc1        $f4, 0x34($a2)
    ctx->pc = 0x416f24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x416f28: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x416f28u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x416f2c: 0xc4c10040  lwc1        $f1, 0x40($a2)
    ctx->pc = 0x416f2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x416f30: 0xc4c30038  lwc1        $f3, 0x38($a2)
    ctx->pc = 0x416f30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x416f34: 0xc4c00044  lwc1        $f0, 0x44($a2)
    ctx->pc = 0x416f34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x416f38: 0x46012101  sub.s       $f4, $f4, $f1
    ctx->pc = 0x416f38u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[1]);
    // 0x416f3c: 0xe7a20010  swc1        $f2, 0x10($sp)
    ctx->pc = 0x416f3cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x416f40: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x416f40u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x416f44: 0xe7a40014  swc1        $f4, 0x14($sp)
    ctx->pc = 0x416f44u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x416f48: 0xe7a30018  swc1        $f3, 0x18($sp)
    ctx->pc = 0x416f48u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x416f4c: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x416f4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x416f50: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x416f50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x416f54: 0x46011182  mul.s       $f6, $f2, $f1
    ctx->pc = 0x416f54u;
    ctx->f[6] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x416f58: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x416f58u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x416f5c: 0xc7a50004  lwc1        $f5, 0x4($sp)
    ctx->pc = 0x416f5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x416f60: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x416f60u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x416f64: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x416f64u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x416f68: 0x46051082  mul.s       $f2, $f2, $f5
    ctx->pc = 0x416f68u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
    // 0x416f6c: 0x460518c2  mul.s       $f3, $f3, $f5
    ctx->pc = 0x416f6cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
    // 0x416f70: 0x46060001  sub.s       $f0, $f0, $f6
    ctx->pc = 0x416f70u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[6]);
    // 0x416f74: 0x46041081  sub.s       $f2, $f2, $f4
    ctx->pc = 0x416f74u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
    // 0x416f78: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x416f78u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x416f7c: 0xe4a00040  swc1        $f0, 0x40($a1)
    ctx->pc = 0x416f7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 64), bits); }
    // 0x416f80: 0xe4a20044  swc1        $f2, 0x44($a1)
    ctx->pc = 0x416f80u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 68), bits); }
    // 0x416f84: 0xe4a1003c  swc1        $f1, 0x3C($a1)
    ctx->pc = 0x416f84u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 60), bits); }
    // 0x416f88: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x416f88u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x416f8c: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x416f8cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x416f90: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x416f90u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x416f94: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x416f94u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x416f98: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x416f98u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x416f9c: 0x46010044  c1          0x10044
    ctx->pc = 0x416f9cu;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x416fa0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x416fa0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x416fa4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x416fa4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x416fa8: 0x0  nop
    ctx->pc = 0x416fa8u;
    // NOP
    // 0x416fac: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x416FACu;
    {
        const bool branch_taken_0x416fac = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x416FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x416FACu;
        // 0x416fb0: 0x460008c6  mov.s       $f3, $f1 (Delay Slot)
        ctx->f[3] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x416fac) {
            ctx->pc = 0x416FC8u;
            goto label_416fc8;
        }
    }
    ctx->pc = 0x416FB4u;
    // 0x416fb4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x416fb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x416fb8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x416fb8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x416fbc: 0x460100c3  div.s       $f3, $f0, $f1
    ctx->pc = 0x416fbcu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x416fc0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x416FC0u;
    {
        const bool branch_taken_0x416fc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x416FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x416FC0u;
        // 0x416fc4: 0xc4a0003c  lwc1        $f0, 0x3C($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x416fc0) {
            ctx->pc = 0x416FD0u;
            goto label_416fd0;
        }
    }
    ctx->pc = 0x416FC8u;
label_416fc8:
    // 0x416fc8: 0xc4a0003c  lwc1        $f0, 0x3C($a1)
    ctx->pc = 0x416fc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x416fcc: 0x0  nop
    ctx->pc = 0x416fccu;
    // NOP
label_416fd0:
    // 0x416fd0: 0xc4a10040  lwc1        $f1, 0x40($a1)
    ctx->pc = 0x416fd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x416fd4: 0xc4a20044  lwc1        $f2, 0x44($a1)
    ctx->pc = 0x416fd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x416fd8: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x416fd8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x416fdc: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x416fdcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x416fe0: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x416fe0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x416fe4: 0xe4a0003c  swc1        $f0, 0x3C($a1)
    ctx->pc = 0x416fe4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 60), bits); }
    // 0x416fe8: 0xe4a10040  swc1        $f1, 0x40($a1)
    ctx->pc = 0x416fe8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 64), bits); }
    // 0x416fec: 0xe4a20044  swc1        $f2, 0x44($a1)
    ctx->pc = 0x416fecu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 68), bits); }
    // 0x416ff0: 0xc4c3000c  lwc1        $f3, 0xC($a2)
    ctx->pc = 0x416ff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x416ff4: 0xc4c40010  lwc1        $f4, 0x10($a2)
    ctx->pc = 0x416ff4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x416ff8: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x416ff8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x416ffc: 0xc4c50014  lwc1        $f5, 0x14($a2)
    ctx->pc = 0x416ffcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x417000: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->pc = 0x417000u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x417004: 0x8ca4003c  lw          $a0, 0x3C($a1)
    ctx->pc = 0x417004u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 60)));
    // 0x417008: 0x46022942  mul.s       $f5, $f5, $f2
    ctx->pc = 0x417008u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x41700c: 0x8ca20040  lw          $v0, 0x40($a1)
    ctx->pc = 0x41700cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 64)));
    // 0x417010: 0x8ca30044  lw          $v1, 0x44($a1)
    ctx->pc = 0x417010u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 68)));
    // 0x417014: 0x427c3  sra         $a0, $a0, 31
    ctx->pc = 0x417014u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 31));
    // 0x417018: 0x460418c0  add.s       $f3, $f3, $f4
    ctx->pc = 0x417018u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
    // 0x41701c: 0x217c3  sra         $v0, $v0, 31
    ctx->pc = 0x41701cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 31));
    // 0x417020: 0x31fc3  sra         $v1, $v1, 31
    ctx->pc = 0x417020u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 31));
    // 0x417024: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x417024u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x417028: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x417028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x41702c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x41702cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x417030: 0x460518c0  add.s       $f3, $f3, $f5
    ctx->pc = 0x417030u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[5]);
    // 0x417034: 0xa0a4004c  sb          $a0, 0x4C($a1)
    ctx->pc = 0x417034u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 76), (uint8_t)GPR_U32(ctx, 4));
    // 0x417038: 0xa0a2004d  sb          $v0, 0x4D($a1)
    ctx->pc = 0x417038u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 77), (uint8_t)GPR_U32(ctx, 2));
    // 0x41703c: 0xa0a3004e  sb          $v1, 0x4E($a1)
    ctx->pc = 0x41703cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 78), (uint8_t)GPR_U32(ctx, 3));
    // 0x417040: 0xe4a30048  swc1        $f3, 0x48($a1)
    ctx->pc = 0x417040u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 72), bits); }
    // 0x417044: 0xc4c70024  lwc1        $f7, 0x24($a2)
    ctx->pc = 0x417044u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x417048: 0xc4c20054  lwc1        $f2, 0x54($a2)
    ctx->pc = 0x417048u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x41704c: 0xc4c60028  lwc1        $f6, 0x28($a2)
    ctx->pc = 0x41704cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x417050: 0xc4c80058  lwc1        $f8, 0x58($a2)
    ctx->pc = 0x417050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x417054: 0x460239c1  sub.s       $f7, $f7, $f2
    ctx->pc = 0x417054u;
    ctx->f[7] = FPU_SUB_S(ctx->f[7], ctx->f[2]);
    // 0x417058: 0xc4c5002c  lwc1        $f5, 0x2C($a2)
    ctx->pc = 0x417058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x41705c: 0xc4c1005c  lwc1        $f1, 0x5C($a2)
    ctx->pc = 0x41705cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x417060: 0x46083181  sub.s       $f6, $f6, $f8
    ctx->pc = 0x417060u;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[8]);
    // 0x417064: 0xe7a70000  swc1        $f7, 0x0($sp)
    ctx->pc = 0x417064u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x417068: 0x46012941  sub.s       $f5, $f5, $f1
    ctx->pc = 0x417068u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[1]);
    // 0x41706c: 0xe7a60004  swc1        $f6, 0x4($sp)
    ctx->pc = 0x41706cu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x417070: 0xe7a50008  swc1        $f5, 0x8($sp)
    ctx->pc = 0x417070u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x417074: 0xc4c00030  lwc1        $f0, 0x30($a2)
    ctx->pc = 0x417074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x417078: 0xc4c40034  lwc1        $f4, 0x34($a2)
    ctx->pc = 0x417078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x41707c: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x41707cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x417080: 0xc4c30038  lwc1        $f3, 0x38($a2)
    ctx->pc = 0x417080u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x417084: 0x46082101  sub.s       $f4, $f4, $f8
    ctx->pc = 0x417084u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[8]);
    // 0x417088: 0x460118c1  sub.s       $f3, $f3, $f1
    ctx->pc = 0x417088u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
    // 0x41708c: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x41708cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x417090: 0xe7a40014  swc1        $f4, 0x14($sp)
    ctx->pc = 0x417090u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x417094: 0xe7a30018  swc1        $f3, 0x18($sp)
    ctx->pc = 0x417094u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x417098: 0x46033042  mul.s       $f1, $f6, $f3
    ctx->pc = 0x417098u;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[3]);
    // 0x41709c: 0x46003182  mul.s       $f6, $f6, $f0
    ctx->pc = 0x41709cu;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x4170a0: 0x46043882  mul.s       $f2, $f7, $f4
    ctx->pc = 0x4170a0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[7], ctx->f[4]);
    // 0x4170a4: 0x46002802  mul.s       $f0, $f5, $f0
    ctx->pc = 0x4170a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x4170a8: 0x460339c2  mul.s       $f7, $f7, $f3
    ctx->pc = 0x4170a8u;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[3]);
    // 0x4170ac: 0x46042942  mul.s       $f5, $f5, $f4
    ctx->pc = 0x4170acu;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
    // 0x4170b0: 0x46061081  sub.s       $f2, $f2, $f6
    ctx->pc = 0x4170b0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[6]);
    // 0x4170b4: 0x46070001  sub.s       $f0, $f0, $f7
    ctx->pc = 0x4170b4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[7]);
    // 0x4170b8: 0x46050841  sub.s       $f1, $f1, $f5
    ctx->pc = 0x4170b8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[5]);
    // 0x4170bc: 0xe4a20058  swc1        $f2, 0x58($a1)
    ctx->pc = 0x4170bcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 88), bits); }
    // 0x4170c0: 0xe4a00054  swc1        $f0, 0x54($a1)
    ctx->pc = 0x4170c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 84), bits); }
    // 0x4170c4: 0xe4a10050  swc1        $f1, 0x50($a1)
    ctx->pc = 0x4170c4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 80), bits); }
    // 0x4170c8: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x4170c8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x4170cc: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x4170ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x4170d0: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x4170d0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x4170d4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x4170d4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x4170d8: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x4170d8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x4170dc: 0x46010044  c1          0x10044
    ctx->pc = 0x4170dcu;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x4170e0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x4170e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4170e4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x4170e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4170e8: 0x0  nop
    ctx->pc = 0x4170e8u;
    // NOP
    // 0x4170ec: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x4170ECu;
    {
        const bool branch_taken_0x4170ec = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x4170F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4170ECu;
        // 0x4170f0: 0x460008c6  mov.s       $f3, $f1 (Delay Slot)
        ctx->f[3] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4170ec) {
            ctx->pc = 0x417108u;
            goto label_417108;
        }
    }
    ctx->pc = 0x4170F4u;
    // 0x4170f4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x4170f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x4170f8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x4170f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4170fc: 0x460100c3  div.s       $f3, $f0, $f1
    ctx->pc = 0x4170fcu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x417100: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x417100u;
    {
        const bool branch_taken_0x417100 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x417104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x417100u;
        // 0x417104: 0xc4a00050  lwc1        $f0, 0x50($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x417100) {
            ctx->pc = 0x417110u;
            goto label_417110;
        }
    }
    ctx->pc = 0x417108u;
label_417108:
    // 0x417108: 0xc4a00050  lwc1        $f0, 0x50($a1)
    ctx->pc = 0x417108u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x41710c: 0x0  nop
    ctx->pc = 0x41710cu;
    // NOP
label_417110:
    // 0x417110: 0xc4a10054  lwc1        $f1, 0x54($a1)
    ctx->pc = 0x417110u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x417114: 0xc4a20058  lwc1        $f2, 0x58($a1)
    ctx->pc = 0x417114u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x417118: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x417118u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x41711c: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x41711cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x417120: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x417120u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x417124: 0xe4a00050  swc1        $f0, 0x50($a1)
    ctx->pc = 0x417124u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 80), bits); }
    // 0x417128: 0xe4a10054  swc1        $f1, 0x54($a1)
    ctx->pc = 0x417128u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 84), bits); }
    // 0x41712c: 0xe4a20058  swc1        $f2, 0x58($a1)
    ctx->pc = 0x41712cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 88), bits); }
    // 0x417130: 0xc4c30024  lwc1        $f3, 0x24($a2)
    ctx->pc = 0x417130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x417134: 0xc4c40028  lwc1        $f4, 0x28($a2)
    ctx->pc = 0x417134u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x417138: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x417138u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x41713c: 0xc4c5002c  lwc1        $f5, 0x2C($a2)
    ctx->pc = 0x41713cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x417140: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->pc = 0x417140u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x417144: 0x8ca40050  lw          $a0, 0x50($a1)
    ctx->pc = 0x417144u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 80)));
    // 0x417148: 0x46022942  mul.s       $f5, $f5, $f2
    ctx->pc = 0x417148u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x41714c: 0x8ca20054  lw          $v0, 0x54($a1)
    ctx->pc = 0x41714cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 84)));
    // 0x417150: 0x8ca30058  lw          $v1, 0x58($a1)
    ctx->pc = 0x417150u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 88)));
    // 0x417154: 0x427c3  sra         $a0, $a0, 31
    ctx->pc = 0x417154u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 31));
    // 0x417158: 0x460418c0  add.s       $f3, $f3, $f4
    ctx->pc = 0x417158u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
    // 0x41715c: 0x217c3  sra         $v0, $v0, 31
    ctx->pc = 0x41715cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 31));
    // 0x417160: 0x31fc3  sra         $v1, $v1, 31
    ctx->pc = 0x417160u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 31));
    // 0x417164: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x417164u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x417168: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x417168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x41716c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x41716cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x417170: 0x460518c0  add.s       $f3, $f3, $f5
    ctx->pc = 0x417170u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[5]);
    // 0x417174: 0xa0a40060  sb          $a0, 0x60($a1)
    ctx->pc = 0x417174u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 96), (uint8_t)GPR_U32(ctx, 4));
    // 0x417178: 0xa0a20061  sb          $v0, 0x61($a1)
    ctx->pc = 0x417178u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 97), (uint8_t)GPR_U32(ctx, 2));
    // 0x41717c: 0xa0a30062  sb          $v1, 0x62($a1)
    ctx->pc = 0x41717cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 98), (uint8_t)GPR_U32(ctx, 3));
    // 0x417180: 0xe4a3005c  swc1        $f3, 0x5C($a1)
    ctx->pc = 0x417180u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 92), bits); }
    // 0x417184: 0xc4c20048  lwc1        $f2, 0x48($a2)
    ctx->pc = 0x417184u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x417188: 0xc4c00054  lwc1        $f0, 0x54($a2)
    ctx->pc = 0x417188u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x41718c: 0xc4c4004c  lwc1        $f4, 0x4C($a2)
    ctx->pc = 0x41718cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x417190: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x417190u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x417194: 0xc4c10058  lwc1        $f1, 0x58($a2)
    ctx->pc = 0x417194u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x417198: 0xc4c30050  lwc1        $f3, 0x50($a2)
    ctx->pc = 0x417198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x41719c: 0xc4c0005c  lwc1        $f0, 0x5C($a2)
    ctx->pc = 0x41719cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4171a0: 0x46012101  sub.s       $f4, $f4, $f1
    ctx->pc = 0x4171a0u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[1]);
    // 0x4171a4: 0xe7a20010  swc1        $f2, 0x10($sp)
    ctx->pc = 0x4171a4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x4171a8: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x4171a8u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x4171ac: 0xe7a40014  swc1        $f4, 0x14($sp)
    ctx->pc = 0x4171acu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x4171b0: 0xe7a30018  swc1        $f3, 0x18($sp)
    ctx->pc = 0x4171b0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x4171b4: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x4171b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4171b8: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x4171b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4171bc: 0x46011182  mul.s       $f6, $f2, $f1
    ctx->pc = 0x4171bcu;
    ctx->f[6] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x4171c0: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x4171c0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x4171c4: 0xc7a50004  lwc1        $f5, 0x4($sp)
    ctx->pc = 0x4171c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x4171c8: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x4171c8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x4171cc: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x4171ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x4171d0: 0x46051082  mul.s       $f2, $f2, $f5
    ctx->pc = 0x4171d0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
    // 0x4171d4: 0x460518c2  mul.s       $f3, $f3, $f5
    ctx->pc = 0x4171d4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
    // 0x4171d8: 0x46060001  sub.s       $f0, $f0, $f6
    ctx->pc = 0x4171d8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[6]);
    // 0x4171dc: 0x46041081  sub.s       $f2, $f2, $f4
    ctx->pc = 0x4171dcu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
    // 0x4171e0: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x4171e0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x4171e4: 0xe4a00068  swc1        $f0, 0x68($a1)
    ctx->pc = 0x4171e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 104), bits); }
    // 0x4171e8: 0xe4a2006c  swc1        $f2, 0x6C($a1)
    ctx->pc = 0x4171e8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 108), bits); }
    // 0x4171ec: 0xe4a10064  swc1        $f1, 0x64($a1)
    ctx->pc = 0x4171ecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 100), bits); }
    // 0x4171f0: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x4171f0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x4171f4: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x4171f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x4171f8: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x4171f8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x4171fc: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x4171fcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x417200: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x417200u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x417204: 0x46010044  c1          0x10044
    ctx->pc = 0x417204u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x417208: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x417208u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x41720c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x41720cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x417210: 0x0  nop
    ctx->pc = 0x417210u;
    // NOP
    // 0x417214: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x417214u;
    {
        const bool branch_taken_0x417214 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x417218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x417214u;
        // 0x417218: 0x460008c6  mov.s       $f3, $f1 (Delay Slot)
        ctx->f[3] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x417214) {
            ctx->pc = 0x417230u;
            goto label_417230;
        }
    }
    ctx->pc = 0x41721Cu;
    // 0x41721c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x41721cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x417220: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x417220u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x417224: 0x460100c3  div.s       $f3, $f0, $f1
    ctx->pc = 0x417224u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x417228: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x417228u;
    {
        const bool branch_taken_0x417228 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x41722Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x417228u;
        // 0x41722c: 0xc4a00064  lwc1        $f0, 0x64($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x417228) {
            ctx->pc = 0x417238u;
            goto label_417238;
        }
    }
    ctx->pc = 0x417230u;
label_417230:
    // 0x417230: 0xc4a00064  lwc1        $f0, 0x64($a1)
    ctx->pc = 0x417230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x417234: 0x0  nop
    ctx->pc = 0x417234u;
    // NOP
label_417238:
    // 0x417238: 0xc4a10068  lwc1        $f1, 0x68($a1)
    ctx->pc = 0x417238u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x41723c: 0xc4a2006c  lwc1        $f2, 0x6C($a1)
    ctx->pc = 0x41723cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x417240: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x417240u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x417244: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x417244u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x417248: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x417248u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x41724c: 0xe4a00064  swc1        $f0, 0x64($a1)
    ctx->pc = 0x41724cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 100), bits); }
    // 0x417250: 0xe4a10068  swc1        $f1, 0x68($a1)
    ctx->pc = 0x417250u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 104), bits); }
    // 0x417254: 0xe4a2006c  swc1        $f2, 0x6C($a1)
    ctx->pc = 0x417254u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 108), bits); }
    // 0x417258: 0xc4c30024  lwc1        $f3, 0x24($a2)
    ctx->pc = 0x417258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x41725c: 0xc4c40028  lwc1        $f4, 0x28($a2)
    ctx->pc = 0x41725cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x417260: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x417260u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x417264: 0xc4c5002c  lwc1        $f5, 0x2C($a2)
    ctx->pc = 0x417264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x417268: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->pc = 0x417268u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x41726c: 0x8ca40064  lw          $a0, 0x64($a1)
    ctx->pc = 0x41726cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 100)));
    // 0x417270: 0x46022942  mul.s       $f5, $f5, $f2
    ctx->pc = 0x417270u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x417274: 0x8ca30068  lw          $v1, 0x68($a1)
    ctx->pc = 0x417274u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 104)));
    // 0x417278: 0x8ca2006c  lw          $v0, 0x6C($a1)
    ctx->pc = 0x417278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 108)));
    // 0x41727c: 0x427c3  sra         $a0, $a0, 31
    ctx->pc = 0x41727cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 31));
    // 0x417280: 0x460418c0  add.s       $f3, $f3, $f4
    ctx->pc = 0x417280u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
    // 0x417284: 0x31fc3  sra         $v1, $v1, 31
    ctx->pc = 0x417284u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 31));
    // 0x417288: 0x217c3  sra         $v0, $v0, 31
    ctx->pc = 0x417288u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 31));
    // 0x41728c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x41728cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x417290: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x417290u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x417294: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x417294u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x417298: 0x460518c0  add.s       $f3, $f3, $f5
    ctx->pc = 0x417298u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[5]);
    // 0x41729c: 0xa0a20076  sb          $v0, 0x76($a1)
    ctx->pc = 0x41729cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 118), (uint8_t)GPR_U32(ctx, 2));
    // 0x4172a0: 0xa0a40074  sb          $a0, 0x74($a1)
    ctx->pc = 0x4172a0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 116), (uint8_t)GPR_U32(ctx, 4));
    // 0x4172a4: 0xa0a30075  sb          $v1, 0x75($a1)
    ctx->pc = 0x4172a4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 117), (uint8_t)GPR_U32(ctx, 3));
    // 0x4172a8: 0xe4a30070  swc1        $f3, 0x70($a1)
    ctx->pc = 0x4172a8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 112), bits); }
    // 0x4172ac: 0x3e00008  jr          $ra
    ctx->pc = 0x4172ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4172B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4172ACu;
        // 0x4172b0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4172ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4172B4u;
    // 0x4172b4: 0x0  nop
    ctx->pc = 0x4172b4u;
    // NOP
    ctx->pc = 0x4172b8u;
}
