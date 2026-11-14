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

// Function: sub_0040DE58
// Address: 0x40de58 - 0x40e0b8
void sub_0040DE58_0x40de58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0040DE58_0x40de58");
#endif

    ctx->pc = 0x40de58u;

    // 0x40de58: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x40de58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x40de5c: 0xc4c40010  lwc1        $f4, 0x10($a2)
    ctx->pc = 0x40de5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x40de60: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x40de60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x40de64: 0xc4a30004  lwc1        $f3, 0x4($a1)
    ctx->pc = 0x40de64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x40de68: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x40de68u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x40de6c: 0xc4a20008  lwc1        $f2, 0x8($a1)
    ctx->pc = 0x40de6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x40de70: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x40de70u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x40de74: 0xc4c00020  lwc1        $f0, 0x20($a2)
    ctx->pc = 0x40de74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x40de78: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x40de78u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x40de7c: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x40de7cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x40de80: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x40de80u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x40de84: 0xe4810000  swc1        $f1, 0x0($a0)
    ctx->pc = 0x40de84u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x40de88: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x40de88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x40de8c: 0xc4c40014  lwc1        $f4, 0x14($a2)
    ctx->pc = 0x40de8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x40de90: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x40de90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x40de94: 0xc4a30004  lwc1        $f3, 0x4($a1)
    ctx->pc = 0x40de94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x40de98: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x40de98u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x40de9c: 0xc4a20008  lwc1        $f2, 0x8($a1)
    ctx->pc = 0x40de9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x40dea0: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x40dea0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x40dea4: 0xc4c10024  lwc1        $f1, 0x24($a2)
    ctx->pc = 0x40dea4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x40dea8: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x40dea8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x40deac: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x40deacu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x40deb0: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x40deb0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x40deb4: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x40deb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x40deb8: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x40deb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x40debc: 0xc4c40018  lwc1        $f4, 0x18($a2)
    ctx->pc = 0x40debcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x40dec0: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x40dec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x40dec4: 0xc4a30004  lwc1        $f3, 0x4($a1)
    ctx->pc = 0x40dec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x40dec8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x40dec8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x40decc: 0xc4a20008  lwc1        $f2, 0x8($a1)
    ctx->pc = 0x40deccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x40ded0: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x40ded0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x40ded4: 0xc4c00028  lwc1        $f0, 0x28($a2)
    ctx->pc = 0x40ded4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x40ded8: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x40ded8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x40dedc: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x40dedcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x40dee0: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x40dee0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x40dee4: 0xe4810008  swc1        $f1, 0x8($a0)
    ctx->pc = 0x40dee4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x40dee8: 0xc4c10000  lwc1        $f1, 0x0($a2)
    ctx->pc = 0x40dee8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x40deec: 0xc4c40010  lwc1        $f4, 0x10($a2)
    ctx->pc = 0x40deecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x40def0: 0xc4a00010  lwc1        $f0, 0x10($a1)
    ctx->pc = 0x40def0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x40def4: 0xc4a30014  lwc1        $f3, 0x14($a1)
    ctx->pc = 0x40def4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x40def8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x40def8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x40defc: 0xc4a20018  lwc1        $f2, 0x18($a1)
    ctx->pc = 0x40defcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x40df00: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x40df00u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x40df04: 0xc4c10020  lwc1        $f1, 0x20($a2)
    ctx->pc = 0x40df04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x40df08: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x40df08u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x40df0c: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x40df0cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x40df10: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x40df10u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x40df14: 0xe4800010  swc1        $f0, 0x10($a0)
    ctx->pc = 0x40df14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x40df18: 0xc4c00004  lwc1        $f0, 0x4($a2)
    ctx->pc = 0x40df18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x40df1c: 0xc4c40014  lwc1        $f4, 0x14($a2)
    ctx->pc = 0x40df1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x40df20: 0xc4a10010  lwc1        $f1, 0x10($a1)
    ctx->pc = 0x40df20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x40df24: 0xc4a30014  lwc1        $f3, 0x14($a1)
    ctx->pc = 0x40df24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x40df28: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x40df28u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x40df2c: 0xc4a20018  lwc1        $f2, 0x18($a1)
    ctx->pc = 0x40df2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x40df30: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x40df30u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x40df34: 0xc4c00024  lwc1        $f0, 0x24($a2)
    ctx->pc = 0x40df34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x40df38: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x40df38u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x40df3c: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x40df3cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x40df40: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x40df40u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x40df44: 0xe4810014  swc1        $f1, 0x14($a0)
    ctx->pc = 0x40df44u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x40df48: 0xc4c10008  lwc1        $f1, 0x8($a2)
    ctx->pc = 0x40df48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x40df4c: 0xc4c40018  lwc1        $f4, 0x18($a2)
    ctx->pc = 0x40df4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x40df50: 0xc4a00010  lwc1        $f0, 0x10($a1)
    ctx->pc = 0x40df50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x40df54: 0xc4a30014  lwc1        $f3, 0x14($a1)
    ctx->pc = 0x40df54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x40df58: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x40df58u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x40df5c: 0xc4a20018  lwc1        $f2, 0x18($a1)
    ctx->pc = 0x40df5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x40df60: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x40df60u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x40df64: 0xc4c10028  lwc1        $f1, 0x28($a2)
    ctx->pc = 0x40df64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x40df68: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x40df68u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x40df6c: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x40df6cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x40df70: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x40df70u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x40df74: 0xe4800018  swc1        $f0, 0x18($a0)
    ctx->pc = 0x40df74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x40df78: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x40df78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x40df7c: 0xc4c40010  lwc1        $f4, 0x10($a2)
    ctx->pc = 0x40df7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x40df80: 0xc4a10020  lwc1        $f1, 0x20($a1)
    ctx->pc = 0x40df80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x40df84: 0xc4a30024  lwc1        $f3, 0x24($a1)
    ctx->pc = 0x40df84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x40df88: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x40df88u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x40df8c: 0xc4a20028  lwc1        $f2, 0x28($a1)
    ctx->pc = 0x40df8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x40df90: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x40df90u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x40df94: 0xc4c00020  lwc1        $f0, 0x20($a2)
    ctx->pc = 0x40df94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x40df98: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x40df98u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x40df9c: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x40df9cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x40dfa0: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x40dfa0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x40dfa4: 0xe4810020  swc1        $f1, 0x20($a0)
    ctx->pc = 0x40dfa4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
    // 0x40dfa8: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x40dfa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x40dfac: 0xc4c40014  lwc1        $f4, 0x14($a2)
    ctx->pc = 0x40dfacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x40dfb0: 0xc4a00020  lwc1        $f0, 0x20($a1)
    ctx->pc = 0x40dfb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x40dfb4: 0xc4a30024  lwc1        $f3, 0x24($a1)
    ctx->pc = 0x40dfb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x40dfb8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x40dfb8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x40dfbc: 0xc4a20028  lwc1        $f2, 0x28($a1)
    ctx->pc = 0x40dfbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x40dfc0: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x40dfc0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x40dfc4: 0xc4c10024  lwc1        $f1, 0x24($a2)
    ctx->pc = 0x40dfc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x40dfc8: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x40dfc8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x40dfcc: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x40dfccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x40dfd0: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x40dfd0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x40dfd4: 0xe4800024  swc1        $f0, 0x24($a0)
    ctx->pc = 0x40dfd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
    // 0x40dfd8: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x40dfd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x40dfdc: 0xc4c40018  lwc1        $f4, 0x18($a2)
    ctx->pc = 0x40dfdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x40dfe0: 0xc4a10020  lwc1        $f1, 0x20($a1)
    ctx->pc = 0x40dfe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x40dfe4: 0xc4a30024  lwc1        $f3, 0x24($a1)
    ctx->pc = 0x40dfe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x40dfe8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x40dfe8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x40dfec: 0xc4a20028  lwc1        $f2, 0x28($a1)
    ctx->pc = 0x40dfecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x40dff0: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x40dff0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x40dff4: 0xc4c00028  lwc1        $f0, 0x28($a2)
    ctx->pc = 0x40dff4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x40dff8: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x40dff8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x40dffc: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x40dffcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x40e000: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x40e000u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x40e004: 0xe4810028  swc1        $f1, 0x28($a0)
    ctx->pc = 0x40e004u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 40), bits); }
    // 0x40e008: 0xc4c30000  lwc1        $f3, 0x0($a2)
    ctx->pc = 0x40e008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x40e00c: 0xc4c40010  lwc1        $f4, 0x10($a2)
    ctx->pc = 0x40e00cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x40e010: 0xc4a00030  lwc1        $f0, 0x30($a1)
    ctx->pc = 0x40e010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x40e014: 0xc4a20034  lwc1        $f2, 0x34($a1)
    ctx->pc = 0x40e014u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x40e018: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x40e018u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x40e01c: 0xc4a10038  lwc1        $f1, 0x38($a1)
    ctx->pc = 0x40e01cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x40e020: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x40e020u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x40e024: 0xc4c30020  lwc1        $f3, 0x20($a2)
    ctx->pc = 0x40e024u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x40e028: 0xc4c40030  lwc1        $f4, 0x30($a2)
    ctx->pc = 0x40e028u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x40e02c: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x40e02cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x40e030: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x40e030u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x40e034: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x40e034u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x40e038: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x40e038u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x40e03c: 0xe4800030  swc1        $f0, 0x30($a0)
    ctx->pc = 0x40e03cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 48), bits); }
    // 0x40e040: 0xc4c30004  lwc1        $f3, 0x4($a2)
    ctx->pc = 0x40e040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x40e044: 0xc4c40014  lwc1        $f4, 0x14($a2)
    ctx->pc = 0x40e044u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x40e048: 0xc4a10030  lwc1        $f1, 0x30($a1)
    ctx->pc = 0x40e048u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x40e04c: 0xc4a20034  lwc1        $f2, 0x34($a1)
    ctx->pc = 0x40e04cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x40e050: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x40e050u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x40e054: 0xc4a00038  lwc1        $f0, 0x38($a1)
    ctx->pc = 0x40e054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x40e058: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x40e058u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x40e05c: 0xc4c30024  lwc1        $f3, 0x24($a2)
    ctx->pc = 0x40e05cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x40e060: 0xc4c40034  lwc1        $f4, 0x34($a2)
    ctx->pc = 0x40e060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x40e064: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x40e064u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x40e068: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x40e068u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x40e06c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x40e06cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x40e070: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x40e070u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x40e074: 0xe4810034  swc1        $f1, 0x34($a0)
    ctx->pc = 0x40e074u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 52), bits); }
    // 0x40e078: 0xc4c30008  lwc1        $f3, 0x8($a2)
    ctx->pc = 0x40e078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x40e07c: 0xc4c40018  lwc1        $f4, 0x18($a2)
    ctx->pc = 0x40e07cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x40e080: 0xc4a00030  lwc1        $f0, 0x30($a1)
    ctx->pc = 0x40e080u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x40e084: 0xc4a20034  lwc1        $f2, 0x34($a1)
    ctx->pc = 0x40e084u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x40e088: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x40e088u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x40e08c: 0xc4a10038  lwc1        $f1, 0x38($a1)
    ctx->pc = 0x40e08cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x40e090: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x40e090u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x40e094: 0xc4c30028  lwc1        $f3, 0x28($a2)
    ctx->pc = 0x40e094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x40e098: 0xc4c40038  lwc1        $f4, 0x38($a2)
    ctx->pc = 0x40e098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x40e09c: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x40e09cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x40e0a0: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x40e0a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x40e0a4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x40e0a4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x40e0a8: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x40e0a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x40e0ac: 0x3e00008  jr          $ra
    ctx->pc = 0x40E0ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x40E0B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40E0ACu;
        // 0x40e0b0: 0xe4800038  swc1        $f0, 0x38($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 56), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40E0ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x40E0B4u;
    // 0x40e0b4: 0x0  nop
    ctx->pc = 0x40e0b4u;
    // NOP
    ctx->pc = 0x40e0b8u;
}
