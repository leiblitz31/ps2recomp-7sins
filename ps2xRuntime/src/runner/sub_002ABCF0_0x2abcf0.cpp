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

// Function: sub_002ABCF0
// Address: 0x2abcf0 - 0x2ac1b0
void sub_002ABCF0_0x2abcf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002ABCF0_0x2abcf0");
#endif

    ctx->pc = 0x2abcf0u;

    // 0x2abcf0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2abcf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2abcf4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2abcf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2abcf8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2abcf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2abcfc: 0xafa50050  sw          $a1, 0x50($sp)
    ctx->pc = 0x2abcfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 5));
    // 0x2abd00: 0xafa60060  sw          $a2, 0x60($sp)
    ctx->pc = 0x2abd00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 6));
    // 0x2abd04: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x2abd04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2abd08: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x2abd08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2abd0c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2abd0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2abd10: 0x0  nop
    ctx->pc = 0x2abd10u;
    // NOP
    // 0x2abd14: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2abd14u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2abd18: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x2abd18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x2abd1c: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x2abd1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2abd20: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x2abd20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2abd24: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2abd24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2abd28: 0x0  nop
    ctx->pc = 0x2abd28u;
    // NOP
    // 0x2abd2c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2abd2cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2abd30: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x2abd30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2abd34: 0x8f82bc58  lw          $v0, -0x43A8($gp)
    ctx->pc = 0x2abd34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949976)));
    // 0x2abd38: 0x8c51000c  lw          $s1, 0xC($v0)
    ctx->pc = 0x2abd38u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2abd3c: 0x8f82bc58  lw          $v0, -0x43A8($gp)
    ctx->pc = 0x2abd3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949976)));
    // 0x2abd40: 0x8c500010  lw          $s0, 0x10($v0)
    ctx->pc = 0x2abd40u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2abd44: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x2abd44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x2abd48: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2abd48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2abd4c: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x2abd4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2abd50: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2abd50u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2abd54: 0x6200006  bltz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2ABD54u;
    {
        const bool branch_taken_0x2abd54 = (GPR_S32(ctx, 17) < 0);
        if (branch_taken_0x2abd54) {
            ctx->pc = 0x2ABD70u;
            goto label_2abd70;
        }
    }
    ctx->pc = 0x2ABD5Cu;
    // 0x2abd5c: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x2abd5cu;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2abd60: 0x0  nop
    ctx->pc = 0x2abd60u;
    // NOP
    // 0x2abd64: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2abd64u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2abd68: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2ABD68u;
    {
        const bool branch_taken_0x2abd68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2abd68) {
            ctx->pc = 0x2ABD8Cu;
            goto label_2abd8c;
        }
    }
    ctx->pc = 0x2ABD70u;
label_2abd70:
    // 0x2abd70: 0x111842  srl         $v1, $s1, 1
    ctx->pc = 0x2abd70u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
    // 0x2abd74: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x2abd74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x2abd78: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2abd78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2abd7c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2abd7cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2abd80: 0x0  nop
    ctx->pc = 0x2abd80u;
    // NOP
    // 0x2abd84: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2abd84u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2abd88: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2abd88u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2abd8c:
    // 0x2abd8c: 0x0  nop
    ctx->pc = 0x2abd8cu;
    // NOP
    // 0x2abd90: 0x0  nop
    ctx->pc = 0x2abd90u;
    // NOP
    // 0x2abd94: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x2abd94u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x2abd98: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x2abd98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x2abd9c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x2abd9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x2abda0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2abda0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2abda4: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x2abda4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2abda8: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2abda8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2abdac: 0x6000006  bltz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2ABDACu;
    {
        const bool branch_taken_0x2abdac = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x2abdac) {
            ctx->pc = 0x2ABDC8u;
            goto label_2abdc8;
        }
    }
    ctx->pc = 0x2ABDB4u;
    // 0x2abdb4: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x2abdb4u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2abdb8: 0x0  nop
    ctx->pc = 0x2abdb8u;
    // NOP
    // 0x2abdbc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2abdbcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2abdc0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2ABDC0u;
    {
        const bool branch_taken_0x2abdc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2abdc0) {
            ctx->pc = 0x2ABDE4u;
            goto label_2abde4;
        }
    }
    ctx->pc = 0x2ABDC8u;
label_2abdc8:
    // 0x2abdc8: 0x101842  srl         $v1, $s0, 1
    ctx->pc = 0x2abdc8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
    // 0x2abdcc: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x2abdccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x2abdd0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2abdd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2abdd4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2abdd4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2abdd8: 0x0  nop
    ctx->pc = 0x2abdd8u;
    // NOP
    // 0x2abddc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2abddcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2abde0: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2abde0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2abde4:
    // 0x2abde4: 0x0  nop
    ctx->pc = 0x2abde4u;
    // NOP
    // 0x2abde8: 0x0  nop
    ctx->pc = 0x2abde8u;
    // NOP
    // 0x2abdec: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x2abdecu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x2abdf0: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x2abdf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2abdf4: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x2abdf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x2abdf8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2abdf8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2abdfc: 0x6200006  bltz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2ABDFCu;
    {
        const bool branch_taken_0x2abdfc = (GPR_S32(ctx, 17) < 0);
        if (branch_taken_0x2abdfc) {
            ctx->pc = 0x2ABE18u;
            goto label_2abe18;
        }
    }
    ctx->pc = 0x2ABE04u;
    // 0x2abe04: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x2abe04u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2abe08: 0x0  nop
    ctx->pc = 0x2abe08u;
    // NOP
    // 0x2abe0c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2abe0cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2abe10: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2ABE10u;
    {
        const bool branch_taken_0x2abe10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2abe10) {
            ctx->pc = 0x2ABE34u;
            goto label_2abe34;
        }
    }
    ctx->pc = 0x2ABE18u;
label_2abe18:
    // 0x2abe18: 0x111842  srl         $v1, $s1, 1
    ctx->pc = 0x2abe18u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
    // 0x2abe1c: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x2abe1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x2abe20: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2abe20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2abe24: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2abe24u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2abe28: 0x0  nop
    ctx->pc = 0x2abe28u;
    // NOP
    // 0x2abe2c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2abe2cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2abe30: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2abe30u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2abe34:
    // 0x2abe34: 0x0  nop
    ctx->pc = 0x2abe34u;
    // NOP
    // 0x2abe38: 0x0  nop
    ctx->pc = 0x2abe38u;
    // NOP
    // 0x2abe3c: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x2abe3cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x2abe40: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x2abe40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x2abe44: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x2abe44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x2abe48: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2abe48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2abe4c: 0x6000006  bltz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2ABE4Cu;
    {
        const bool branch_taken_0x2abe4c = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x2abe4c) {
            ctx->pc = 0x2ABE68u;
            goto label_2abe68;
        }
    }
    ctx->pc = 0x2ABE54u;
    // 0x2abe54: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x2abe54u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2abe58: 0x0  nop
    ctx->pc = 0x2abe58u;
    // NOP
    // 0x2abe5c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2abe5cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2abe60: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2ABE60u;
    {
        const bool branch_taken_0x2abe60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2abe60) {
            ctx->pc = 0x2ABE84u;
            goto label_2abe84;
        }
    }
    ctx->pc = 0x2ABE68u;
label_2abe68:
    // 0x2abe68: 0x101842  srl         $v1, $s0, 1
    ctx->pc = 0x2abe68u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
    // 0x2abe6c: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x2abe6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x2abe70: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2abe70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2abe74: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2abe74u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2abe78: 0x0  nop
    ctx->pc = 0x2abe78u;
    // NOP
    // 0x2abe7c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2abe7cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2abe80: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2abe80u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2abe84:
    // 0x2abe84: 0x0  nop
    ctx->pc = 0x2abe84u;
    // NOP
    // 0x2abe88: 0x0  nop
    ctx->pc = 0x2abe88u;
    // NOP
    // 0x2abe8c: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x2abe8cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x2abe90: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x2abe90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2abe94: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2abe94u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2abe98: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x2abe98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x2abe9c: 0xe440c1d0  swc1        $f0, -0x3E30($v0)
    ctx->pc = 0x2abe9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x60C1D0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x60C1D0u, _value); } while (0); }
    // 0x2abea0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2abea0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2abea4: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x2abea4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x2abea8: 0xe440c1d4  swc1        $f0, -0x3E2C($v0)
    ctx->pc = 0x2abea8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x60C1D4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x60C1D4u, _value); } while (0); }
    // 0x2abeac: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x2abeacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x2abeb0: 0xc440e898  lwc1        $f0, -0x1768($v0)
    ctx->pc = 0x2abeb0u;
    { uint32_t bits = FAST_READ32(0x61E898u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2abeb4: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x2abeb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x2abeb8: 0xe440c1d8  swc1        $f0, -0x3E28($v0)
    ctx->pc = 0x2abeb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x60C1D8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x60C1D8u, _value); } while (0); }
    // 0x2abebc: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2abebcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2abec0: 0xc4400080  lwc1        $f0, 0x80($v0)
    ctx->pc = 0x2abec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2abec4: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x2abec4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x2abec8: 0xe440c1dc  swc1        $f0, -0x3E24($v0)
    ctx->pc = 0x2abec8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x60C1DCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x60C1DCu, _value); } while (0); }
    // 0x2abecc: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x2abeccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2abed0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2abed0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2abed4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2abed4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2abed8: 0xc4600080  lwc1        $f0, 0x80($v1)
    ctx->pc = 0x2abed8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2abedc: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x2abedcu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x2abee0: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x2abee0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x2abee4: 0xe440c1e8  swc1        $f0, -0x3E18($v0)
    ctx->pc = 0x2abee4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x60C1E8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x60C1E8u, _value); } while (0); }
    // 0x2abee8: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x2abee8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2abeec: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x2abeecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x2abef0: 0xe440c1e0  swc1        $f0, -0x3E20($v0)
    ctx->pc = 0x2abef0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x60C1E0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x60C1E0u, _value); } while (0); }
    // 0x2abef4: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x2abef4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2abef8: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x2abef8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x2abefc: 0xe440c1e4  swc1        $f0, -0x3E1C($v0)
    ctx->pc = 0x2abefcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x60C1E4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x60C1E4u, _value); } while (0); }
    // 0x2abf00: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x2abf00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
    // 0x2abf04: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2abf04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2abf08: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x2abf08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x2abf0c: 0xe440c1f0  swc1        $f0, -0x3E10($v0)
    ctx->pc = 0x2abf0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x60C1F0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x60C1F0u, _value); } while (0); }
    // 0x2abf10: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x2abf10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
    // 0x2abf14: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2abf14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2abf18: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x2abf18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x2abf1c: 0xe440c1f4  swc1        $f0, -0x3E0C($v0)
    ctx->pc = 0x2abf1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x60C1F4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x60C1F4u, _value); } while (0); }
    // 0x2abf20: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x2abf20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
    // 0x2abf24: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2abf24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2abf28: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x2abf28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x2abf2c: 0xe440c1f8  swc1        $f0, -0x3E08($v0)
    ctx->pc = 0x2abf2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x60C1F8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x60C1F8u, _value); } while (0); }
    // 0x2abf30: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x2abf30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
    // 0x2abf34: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2abf34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2abf38: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x2abf38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x2abf3c: 0xe440c1fc  swc1        $f0, -0x3E04($v0)
    ctx->pc = 0x2abf3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x60C1FCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x60C1FCu, _value); } while (0); }
    // 0x2abf40: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2abf40u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2abf44: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x2abf44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x2abf48: 0xe440c210  swc1        $f0, -0x3DF0($v0)
    ctx->pc = 0x2abf48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x60C210u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x60C210u, _value); } while (0); }
    // 0x2abf4c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2abf4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2abf50: 0x8c420060  lw          $v0, 0x60($v0)
    ctx->pc = 0x2abf50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x2abf54: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x2abf54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2abf58: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2abf58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2abf5c: 0x0  nop
    ctx->pc = 0x2abf5cu;
    // NOP
    // 0x2abf60: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2abf60u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2abf64: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x2abf64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x2abf68: 0xe440c214  swc1        $f0, -0x3DEC($v0)
    ctx->pc = 0x2abf68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x60C214u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x60C214u, _value); } while (0); }
    // 0x2abf6c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x2abf6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x2abf70: 0xc440e898  lwc1        $f0, -0x1768($v0)
    ctx->pc = 0x2abf70u;
    { uint32_t bits = FAST_READ32(0x61E898u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2abf74: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x2abf74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x2abf78: 0xe440c218  swc1        $f0, -0x3DE8($v0)
    ctx->pc = 0x2abf78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x60C218u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x60C218u, _value); } while (0); }
    // 0x2abf7c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2abf7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2abf80: 0xc4400080  lwc1        $f0, 0x80($v0)
    ctx->pc = 0x2abf80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2abf84: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x2abf84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x2abf88: 0xe440c21c  swc1        $f0, -0x3DE4($v0)
    ctx->pc = 0x2abf88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x60C21Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x60C21Cu, _value); } while (0); }
    // 0x2abf8c: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x2abf8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2abf90: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2abf90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2abf94: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2abf94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2abf98: 0xc4600080  lwc1        $f0, 0x80($v1)
    ctx->pc = 0x2abf98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2abf9c: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x2abf9cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x2abfa0: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x2abfa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x2abfa4: 0xe440c228  swc1        $f0, -0x3DD8($v0)
    ctx->pc = 0x2abfa4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x60C228u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x60C228u, _value); } while (0); }
    // 0x2abfa8: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x2abfa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2abfac: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x2abfacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x2abfb0: 0xe440c220  swc1        $f0, -0x3DE0($v0)
    ctx->pc = 0x2abfb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x60C220u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x60C220u, _value); } while (0); }
    // 0x2abfb4: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x2abfb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2abfb8: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x2abfb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x2abfbc: 0xe440c224  swc1        $f0, -0x3DDC($v0)
    ctx->pc = 0x2abfbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x60C224u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x60C224u, _value); } while (0); }
    // 0x2abfc0: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x2abfc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
    // 0x2abfc4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2abfc4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2abfc8: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x2abfc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x2abfcc: 0xe440c230  swc1        $f0, -0x3DD0($v0)
    ctx->pc = 0x2abfccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x60C230u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x60C230u, _value); } while (0); }
    // 0x2abfd0: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x2abfd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
    // 0x2abfd4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2abfd4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2abfd8: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x2abfd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x2abfdc: 0xe440c234  swc1        $f0, -0x3DCC($v0)
    ctx->pc = 0x2abfdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x60C234u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x60C234u, _value); } while (0); }
    // 0x2abfe0: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x2abfe0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
    // 0x2abfe4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2abfe4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2abfe8: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x2abfe8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x2abfec: 0xe440c238  swc1        $f0, -0x3DC8($v0)
    ctx->pc = 0x2abfecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x60C238u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x60C238u, _value); } while (0); }
    // 0x2abff0: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x2abff0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
    // 0x2abff4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2abff4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2abff8: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x2abff8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x2abffc: 0xe440c23c  swc1        $f0, -0x3DC4($v0)
    ctx->pc = 0x2abffcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x60C23Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x60C23Cu, _value); } while (0); }
    // 0x2ac000: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2ac000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2ac004: 0x8c420060  lw          $v0, 0x60($v0)
    ctx->pc = 0x2ac004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x2ac008: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x2ac008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2ac00c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ac00cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ac010: 0x0  nop
    ctx->pc = 0x2ac010u;
    // NOP
    // 0x2ac014: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2ac014u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2ac018: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x2ac018u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x2ac01c: 0xe440c250  swc1        $f0, -0x3DB0($v0)
    ctx->pc = 0x2ac01cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x60C250u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x60C250u, _value); } while (0); }
    // 0x2ac020: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2ac020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2ac024: 0x8c420060  lw          $v0, 0x60($v0)
    ctx->pc = 0x2ac024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x2ac028: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x2ac028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2ac02c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ac02cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ac030: 0x0  nop
    ctx->pc = 0x2ac030u;
    // NOP
    // 0x2ac034: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2ac034u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2ac038: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x2ac038u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x2ac03c: 0xe440c254  swc1        $f0, -0x3DAC($v0)
    ctx->pc = 0x2ac03cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x60C254u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x60C254u, _value); } while (0); }
    // 0x2ac040: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x2ac040u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x2ac044: 0xc440e898  lwc1        $f0, -0x1768($v0)
    ctx->pc = 0x2ac044u;
    { uint32_t bits = FAST_READ32(0x61E898u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ac048: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x2ac048u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x2ac04c: 0xe440c258  swc1        $f0, -0x3DA8($v0)
    ctx->pc = 0x2ac04cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x60C258u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x60C258u, _value); } while (0); }
    // 0x2ac050: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2ac050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2ac054: 0xc4400080  lwc1        $f0, 0x80($v0)
    ctx->pc = 0x2ac054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ac058: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x2ac058u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x2ac05c: 0xe440c25c  swc1        $f0, -0x3DA4($v0)
    ctx->pc = 0x2ac05cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x60C25Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x60C25Cu, _value); } while (0); }
    // 0x2ac060: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x2ac060u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2ac064: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2ac064u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2ac068: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ac068u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ac06c: 0xc4600080  lwc1        $f0, 0x80($v1)
    ctx->pc = 0x2ac06cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ac070: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x2ac070u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x2ac074: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x2ac074u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x2ac078: 0xe440c268  swc1        $f0, -0x3D98($v0)
    ctx->pc = 0x2ac078u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x60C268u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x60C268u, _value); } while (0); }
    // 0x2ac07c: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x2ac07cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ac080: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x2ac080u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x2ac084: 0xe440c260  swc1        $f0, -0x3DA0($v0)
    ctx->pc = 0x2ac084u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x60C260u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x60C260u, _value); } while (0); }
    // 0x2ac088: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x2ac088u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ac08c: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x2ac08cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x2ac090: 0xe440c264  swc1        $f0, -0x3D9C($v0)
    ctx->pc = 0x2ac090u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x60C264u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x60C264u, _value); } while (0); }
    // 0x2ac094: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x2ac094u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
    // 0x2ac098: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ac098u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ac09c: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x2ac09cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x2ac0a0: 0xe440c270  swc1        $f0, -0x3D90($v0)
    ctx->pc = 0x2ac0a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x60C270u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x60C270u, _value); } while (0); }
    // 0x2ac0a4: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x2ac0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
    // 0x2ac0a8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ac0a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ac0ac: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x2ac0acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x2ac0b0: 0xe440c274  swc1        $f0, -0x3D8C($v0)
    ctx->pc = 0x2ac0b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x60C274u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x60C274u, _value); } while (0); }
    // 0x2ac0b4: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x2ac0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
    // 0x2ac0b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ac0b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ac0bc: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x2ac0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x2ac0c0: 0xe440c278  swc1        $f0, -0x3D88($v0)
    ctx->pc = 0x2ac0c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x60C278u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x60C278u, _value); } while (0); }
    // 0x2ac0c4: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x2ac0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
    // 0x2ac0c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ac0c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ac0cc: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x2ac0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x2ac0d0: 0xe440c27c  swc1        $f0, -0x3D84($v0)
    ctx->pc = 0x2ac0d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x60C27Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x60C27Cu, _value); } while (0); }
    // 0x2ac0d4: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2ac0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2ac0d8: 0x8c420060  lw          $v0, 0x60($v0)
    ctx->pc = 0x2ac0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x2ac0dc: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x2ac0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2ac0e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ac0e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ac0e4: 0x0  nop
    ctx->pc = 0x2ac0e4u;
    // NOP
    // 0x2ac0e8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2ac0e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2ac0ec: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x2ac0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x2ac0f0: 0xe440c290  swc1        $f0, -0x3D70($v0)
    ctx->pc = 0x2ac0f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x60C290u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x60C290u, _value); } while (0); }
    // 0x2ac0f4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2ac0f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ac0f8: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x2ac0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x2ac0fc: 0xe440c294  swc1        $f0, -0x3D6C($v0)
    ctx->pc = 0x2ac0fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x60C294u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x60C294u, _value); } while (0); }
    // 0x2ac100: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x2ac100u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x2ac104: 0xc440e898  lwc1        $f0, -0x1768($v0)
    ctx->pc = 0x2ac104u;
    { uint32_t bits = FAST_READ32(0x61E898u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ac108: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x2ac108u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x2ac10c: 0xe440c298  swc1        $f0, -0x3D68($v0)
    ctx->pc = 0x2ac10cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x60C298u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x60C298u, _value); } while (0); }
    // 0x2ac110: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2ac110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2ac114: 0xc4400080  lwc1        $f0, 0x80($v0)
    ctx->pc = 0x2ac114u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ac118: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x2ac118u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x2ac11c: 0xe440c29c  swc1        $f0, -0x3D64($v0)
    ctx->pc = 0x2ac11cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x60C29Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x60C29Cu, _value); } while (0); }
    // 0x2ac120: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x2ac120u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2ac124: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2ac124u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2ac128: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ac128u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ac12c: 0xc4600080  lwc1        $f0, 0x80($v1)
    ctx->pc = 0x2ac12cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ac130: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x2ac130u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x2ac134: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x2ac134u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x2ac138: 0xe440c2a8  swc1        $f0, -0x3D58($v0)
    ctx->pc = 0x2ac138u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x60C2A8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x60C2A8u, _value); } while (0); }
    // 0x2ac13c: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x2ac13cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ac140: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x2ac140u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x2ac144: 0xe440c2a0  swc1        $f0, -0x3D60($v0)
    ctx->pc = 0x2ac144u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x60C2A0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x60C2A0u, _value); } while (0); }
    // 0x2ac148: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x2ac148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ac14c: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x2ac14cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x2ac150: 0xe440c2a4  swc1        $f0, -0x3D5C($v0)
    ctx->pc = 0x2ac150u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x60C2A4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x60C2A4u, _value); } while (0); }
    // 0x2ac154: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x2ac154u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
    // 0x2ac158: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ac158u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ac15c: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x2ac15cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x2ac160: 0xe440c2b0  swc1        $f0, -0x3D50($v0)
    ctx->pc = 0x2ac160u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x60C2B0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x60C2B0u, _value); } while (0); }
    // 0x2ac164: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x2ac164u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
    // 0x2ac168: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ac168u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ac16c: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x2ac16cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x2ac170: 0xe440c2b4  swc1        $f0, -0x3D4C($v0)
    ctx->pc = 0x2ac170u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x60C2B4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x60C2B4u, _value); } while (0); }
    // 0x2ac174: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x2ac174u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
    // 0x2ac178: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ac178u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ac17c: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x2ac17cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x2ac180: 0xe440c2b8  swc1        $f0, -0x3D48($v0)
    ctx->pc = 0x2ac180u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x60C2B8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x60C2B8u, _value); } while (0); }
    // 0x2ac184: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x2ac184u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
    // 0x2ac188: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ac188u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ac18c: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x2ac18cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x2ac190: 0xe440c2bc  swc1        $f0, -0x3D44($v0)
    ctx->pc = 0x2ac190u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x60C2BCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x60C2BCu, _value); } while (0); }
    // 0x2ac194: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ac194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ac198: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2ac198u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ac19c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2ac19cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ac1a0: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x2ac1a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2ac1a4: 0x3e00008  jr          $ra
    ctx->pc = 0x2AC1A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AC1A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AC1ACu;
    // 0x2ac1ac: 0x0  nop
    ctx->pc = 0x2ac1acu;
    // NOP
    ctx->pc = 0x2ac1b0u;
}
