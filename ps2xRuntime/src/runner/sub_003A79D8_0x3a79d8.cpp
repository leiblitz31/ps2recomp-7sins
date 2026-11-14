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

// Function: sub_003A79D8
// Address: 0x3a79d8 - 0x3a7b30
void sub_003A79D8_0x3a79d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A79D8_0x3a79d8");
#endif

    ctx->pc = 0x3a79d8u;

    // 0x3a79d8: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x3a79d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a79dc: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x3a79dcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x3a79e0: 0x44833800  mtc1        $v1, $f7
    ctx->pc = 0x3a79e0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x3a79e4: 0x468039e0  cvt.s.w     $f7, $f7
    ctx->pc = 0x3a79e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[7], sizeof(tmp)); ctx->f[7] = FPU_CVT_S_W(tmp); }
    // 0x3a79e8: 0xe4470000  swc1        $f7, 0x0($v0)
    ctx->pc = 0x3a79e8u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x3a79ec: 0x91030001  lbu         $v1, 0x1($t0)
    ctx->pc = 0x3a79ecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 1)));
    // 0x3a79f0: 0x44833000  mtc1        $v1, $f6
    ctx->pc = 0x3a79f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x3a79f4: 0x468031a0  cvt.s.w     $f6, $f6
    ctx->pc = 0x3a79f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[6], sizeof(tmp)); ctx->f[6] = FPU_CVT_S_W(tmp); }
    // 0x3a79f8: 0xe4460004  swc1        $f6, 0x4($v0)
    ctx->pc = 0x3a79f8u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x3a79fc: 0x91030002  lbu         $v1, 0x2($t0)
    ctx->pc = 0x3a79fcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 2)));
    // 0x3a7a00: 0x44832800  mtc1        $v1, $f5
    ctx->pc = 0x3a7a00u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x3a7a04: 0x46802960  cvt.s.w     $f5, $f5
    ctx->pc = 0x3a7a04u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[5], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
    // 0x3a7a08: 0xe4450008  swc1        $f5, 0x8($v0)
    ctx->pc = 0x3a7a08u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x3a7a0c: 0x91030003  lbu         $v1, 0x3($t0)
    ctx->pc = 0x3a7a0cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 3)));
    // 0x3a7a10: 0x44832000  mtc1        $v1, $f4
    ctx->pc = 0x3a7a10u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x3a7a14: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x3a7a14u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x3a7a18: 0xe444000c  swc1        $f4, 0xC($v0)
    ctx->pc = 0x3a7a18u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x3a7a1c: 0x90e30000  lbu         $v1, 0x0($a3)
    ctx->pc = 0x3a7a1cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3a7a20: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x3a7a20u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3a7a24: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x3a7a24u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x3a7a28: 0xe4420018  swc1        $f2, 0x18($v0)
    ctx->pc = 0x3a7a28u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x3a7a2c: 0x90e30001  lbu         $v1, 0x1($a3)
    ctx->pc = 0x3a7a2cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 1)));
    // 0x3a7a30: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x3a7a30u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3a7a34: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x3a7a34u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x3a7a38: 0xe443001c  swc1        $f3, 0x1C($v0)
    ctx->pc = 0x3a7a38u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 28), bits); }
    // 0x3a7a3c: 0x90e30002  lbu         $v1, 0x2($a3)
    ctx->pc = 0x3a7a3cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 2)));
    // 0x3a7a40: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3a7a40u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a7a44: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3a7a44u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3a7a48: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x3a7a48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x3a7a4c: 0x90e30003  lbu         $v1, 0x3($a3)
    ctx->pc = 0x3a7a4cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 3)));
    // 0x3a7a50: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3a7a50u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3a7a54: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x3a7a54u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3a7a58: 0x46071081  sub.s       $f2, $f2, $f7
    ctx->pc = 0x3a7a58u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[7]);
    // 0x3a7a5c: 0x460618c1  sub.s       $f3, $f3, $f6
    ctx->pc = 0x3a7a5cu;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[6]);
    // 0x3a7a60: 0xe4420018  swc1        $f2, 0x18($v0)
    ctx->pc = 0x3a7a60u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x3a7a64: 0x46050001  sub.s       $f0, $f0, $f5
    ctx->pc = 0x3a7a64u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
    // 0x3a7a68: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x3a7a68u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x3a7a6c: 0xe443001c  swc1        $f3, 0x1C($v0)
    ctx->pc = 0x3a7a6cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 28), bits); }
    // 0x3a7a70: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x3a7a70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x3a7a74: 0xe4410024  swc1        $f1, 0x24($v0)
    ctx->pc = 0x3a7a74u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x3a7a78: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x3a7a78u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3a7a7c: 0x44833800  mtc1        $v1, $f7
    ctx->pc = 0x3a7a7cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x3a7a80: 0x468039e0  cvt.s.w     $f7, $f7
    ctx->pc = 0x3a7a80u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[7], sizeof(tmp)); ctx->f[7] = FPU_CVT_S_W(tmp); }
    // 0x3a7a84: 0xe4470030  swc1        $f7, 0x30($v0)
    ctx->pc = 0x3a7a84u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
    // 0x3a7a88: 0x90a30001  lbu         $v1, 0x1($a1)
    ctx->pc = 0x3a7a88u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x3a7a8c: 0x44833000  mtc1        $v1, $f6
    ctx->pc = 0x3a7a8cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x3a7a90: 0x468031a0  cvt.s.w     $f6, $f6
    ctx->pc = 0x3a7a90u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[6], sizeof(tmp)); ctx->f[6] = FPU_CVT_S_W(tmp); }
    // 0x3a7a94: 0xe4460034  swc1        $f6, 0x34($v0)
    ctx->pc = 0x3a7a94u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 52), bits); }
    // 0x3a7a98: 0x90a30002  lbu         $v1, 0x2($a1)
    ctx->pc = 0x3a7a98u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x3a7a9c: 0x44832800  mtc1        $v1, $f5
    ctx->pc = 0x3a7a9cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x3a7aa0: 0x46802960  cvt.s.w     $f5, $f5
    ctx->pc = 0x3a7aa0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[5], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
    // 0x3a7aa4: 0xe4450038  swc1        $f5, 0x38($v0)
    ctx->pc = 0x3a7aa4u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
    // 0x3a7aa8: 0x90a30003  lbu         $v1, 0x3($a1)
    ctx->pc = 0x3a7aa8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 3)));
    // 0x3a7aac: 0x44832000  mtc1        $v1, $f4
    ctx->pc = 0x3a7aacu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x3a7ab0: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x3a7ab0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x3a7ab4: 0xe444003c  swc1        $f4, 0x3C($v0)
    ctx->pc = 0x3a7ab4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
    // 0x3a7ab8: 0x90c30000  lbu         $v1, 0x0($a2)
    ctx->pc = 0x3a7ab8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3a7abc: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x3a7abcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3a7ac0: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x3a7ac0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x3a7ac4: 0xe4420048  swc1        $f2, 0x48($v0)
    ctx->pc = 0x3a7ac4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 72), bits); }
    // 0x3a7ac8: 0x90c30001  lbu         $v1, 0x1($a2)
    ctx->pc = 0x3a7ac8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x3a7acc: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x3a7accu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3a7ad0: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x3a7ad0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x3a7ad4: 0xe443004c  swc1        $f3, 0x4C($v0)
    ctx->pc = 0x3a7ad4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 76), bits); }
    // 0x3a7ad8: 0x90c30002  lbu         $v1, 0x2($a2)
    ctx->pc = 0x3a7ad8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x3a7adc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3a7adcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a7ae0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3a7ae0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3a7ae4: 0xe4400050  swc1        $f0, 0x50($v0)
    ctx->pc = 0x3a7ae4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 80), bits); }
    // 0x3a7ae8: 0x90c30003  lbu         $v1, 0x3($a2)
    ctx->pc = 0x3a7ae8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 3)));
    // 0x3a7aec: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3a7aecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3a7af0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x3a7af0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3a7af4: 0x46071081  sub.s       $f2, $f2, $f7
    ctx->pc = 0x3a7af4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[7]);
    // 0x3a7af8: 0x460618c1  sub.s       $f3, $f3, $f6
    ctx->pc = 0x3a7af8u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[6]);
    // 0x3a7afc: 0xe4420048  swc1        $f2, 0x48($v0)
    ctx->pc = 0x3a7afcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 72), bits); }
    // 0x3a7b00: 0x46050001  sub.s       $f0, $f0, $f5
    ctx->pc = 0x3a7b00u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
    // 0x3a7b04: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x3a7b04u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x3a7b08: 0xe443004c  swc1        $f3, 0x4C($v0)
    ctx->pc = 0x3a7b08u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 76), bits); }
    // 0x3a7b0c: 0xe4400050  swc1        $f0, 0x50($v0)
    ctx->pc = 0x3a7b0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 80), bits); }
    // 0x3a7b10: 0xe4410054  swc1        $f1, 0x54($v0)
    ctx->pc = 0x3a7b10u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 84), bits); }
    // 0x3a7b14: 0x89030003  lwl         $v1, 0x3($t0)
    ctx->pc = 0x3a7b14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
    // 0x3a7b18: 0x99030000  lwr         $v1, 0x0($t0)
    ctx->pc = 0x3a7b18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
    // 0x3a7b1c: 0xa8430063  swl         $v1, 0x63($v0)
    ctx->pc = 0x3a7b1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 99); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x3a7b20: 0xb8430060  swr         $v1, 0x60($v0)
    ctx->pc = 0x3a7b20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 96); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x3a7b24: 0x3e00008  jr          $ra
    ctx->pc = 0x3A7B24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A7B24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A7B2Cu;
    // 0x3a7b2c: 0x0  nop
    ctx->pc = 0x3a7b2cu;
    // NOP
    ctx->pc = 0x3a7b30u;
}
