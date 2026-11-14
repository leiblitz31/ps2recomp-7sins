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

// Function: sub_001ECC20
// Address: 0x1ecc20 - 0x1ed590
void sub_001ECC20_0x1ecc20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001ECC20_0x1ecc20");
#endif

    switch (ctx->pc) {
        case 0x1ed1a0u: goto label_1ed1a0;
        case 0x1ed1b4u: goto label_1ed1b4;
        case 0x1ed438u: goto label_1ed438;
        case 0x1ed450u: goto label_1ed450;
        case 0x1ed460u: goto label_1ed460;
        case 0x1ed470u: goto label_1ed470;
        case 0x1ed480u: goto label_1ed480;
        case 0x1ed4a8u: goto label_1ed4a8;
        case 0x1ed4b4u: goto label_1ed4b4;
        case 0x1ed4c4u: goto label_1ed4c4;
        case 0x1ed4d4u: goto label_1ed4d4;
        case 0x1ed4e4u: goto label_1ed4e4;
        case 0x1ed50cu: goto label_1ed50c;
        case 0x1ed518u: goto label_1ed518;
        case 0x1ed528u: goto label_1ed528;
        case 0x1ed538u: goto label_1ed538;
        case 0x1ed548u: goto label_1ed548;
        case 0x1ed570u: goto label_1ed570;
        default: break;
    }

    ctx->pc = 0x1ecc20u;

    // 0x1ecc20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ecc20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ecc24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ecc24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ecc28: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x1ecc28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x1ecc2c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ecc2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ecc30: 0x8f82bb60  lw          $v0, -0x44A0($gp)
    ctx->pc = 0x1ecc30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949728)));
    // 0x1ecc34: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1ecc34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1ecc38: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1ecc38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ecc3c: 0x8f82bb60  lw          $v0, -0x44A0($gp)
    ctx->pc = 0x1ecc3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949728)));
    // 0x1ecc40: 0xac430014  sw          $v1, 0x14($v0)
    ctx->pc = 0x1ecc40u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 3));
    // 0x1ecc44: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1ecc44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1ecc48: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ecc48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ecc4c: 0x8f82bb60  lw          $v0, -0x44A0($gp)
    ctx->pc = 0x1ecc4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949728)));
    // 0x1ecc50: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x1ecc50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x1ecc54: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x1ecc54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x1ecc58: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ecc58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ecc5c: 0x8f82bb60  lw          $v0, -0x44A0($gp)
    ctx->pc = 0x1ecc5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949728)));
    // 0x1ecc60: 0xe440001c  swc1        $f0, 0x1C($v0)
    ctx->pc = 0x1ecc60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 28), bits); }
    // 0x1ecc64: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x1ecc64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x1ecc68: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ecc68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ecc6c: 0x8f82bb60  lw          $v0, -0x44A0($gp)
    ctx->pc = 0x1ecc6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949728)));
    // 0x1ecc70: 0xe4400034  swc1        $f0, 0x34($v0)
    ctx->pc = 0x1ecc70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 52), bits); }
    // 0x1ecc74: 0x8f82bb80  lw          $v0, -0x4480($gp)
    ctx->pc = 0x1ecc74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949760)));
    // 0x1ecc78: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x1ecc78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1ecc7c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1ECC7Cu;
    {
        const bool branch_taken_0x1ecc7c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1ecc7c) {
            ctx->pc = 0x1ECC98u;
            goto label_1ecc98;
        }
    }
    ctx->pc = 0x1ECC84u;
    // 0x1ecc84: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ecc84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ecc88: 0x0  nop
    ctx->pc = 0x1ecc88u;
    // NOP
    // 0x1ecc8c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1ecc8cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1ecc90: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1ECC90u;
    {
        const bool branch_taken_0x1ecc90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ecc90) {
            ctx->pc = 0x1ECCB4u;
            goto label_1eccb4;
        }
    }
    ctx->pc = 0x1ECC98u;
label_1ecc98:
    // 0x1ecc98: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1ecc98u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1ecc9c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1ecc9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1ecca0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1ecca0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1ecca4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ecca4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ecca8: 0x0  nop
    ctx->pc = 0x1ecca8u;
    // NOP
    // 0x1eccac: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1eccacu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1eccb0: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1eccb0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1eccb4:
    // 0x1eccb4: 0x3c024420  lui         $v0, 0x4420
    ctx->pc = 0x1eccb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17440 << 16));
    // 0x1eccb8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1eccb8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1eccbc: 0x0  nop
    ctx->pc = 0x1eccbcu;
    // NOP
    // 0x1eccc0: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1eccc0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1eccc4: 0x8f82bb60  lw          $v0, -0x44A0($gp)
    ctx->pc = 0x1eccc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949728)));
    // 0x1eccc8: 0xc4400034  lwc1        $f0, 0x34($v0)
    ctx->pc = 0x1eccc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ecccc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1eccccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1eccd0: 0xe4400034  swc1        $f0, 0x34($v0)
    ctx->pc = 0x1eccd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 52), bits); }
    // 0x1eccd4: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x1eccd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x1eccd8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1eccd8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1eccdc: 0x8f82bb60  lw          $v0, -0x44A0($gp)
    ctx->pc = 0x1eccdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949728)));
    // 0x1ecce0: 0xe4400038  swc1        $f0, 0x38($v0)
    ctx->pc = 0x1ecce0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
    // 0x1ecce4: 0x8f82bb80  lw          $v0, -0x4480($gp)
    ctx->pc = 0x1ecce4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949760)));
    // 0x1ecce8: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x1ecce8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1eccec: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1ECCECu;
    {
        const bool branch_taken_0x1eccec = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1eccec) {
            ctx->pc = 0x1ECD08u;
            goto label_1ecd08;
        }
    }
    ctx->pc = 0x1ECCF4u;
    // 0x1eccf4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1eccf4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1eccf8: 0x0  nop
    ctx->pc = 0x1eccf8u;
    // NOP
    // 0x1eccfc: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1eccfcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1ecd00: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1ECD00u;
    {
        const bool branch_taken_0x1ecd00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ecd00) {
            ctx->pc = 0x1ECD24u;
            goto label_1ecd24;
        }
    }
    ctx->pc = 0x1ECD08u;
label_1ecd08:
    // 0x1ecd08: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1ecd08u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1ecd0c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1ecd0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1ecd10: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1ecd10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1ecd14: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ecd14u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ecd18: 0x0  nop
    ctx->pc = 0x1ecd18u;
    // NOP
    // 0x1ecd1c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1ecd1cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1ecd20: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1ecd20u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1ecd24:
    // 0x1ecd24: 0x3c0243e0  lui         $v0, 0x43E0
    ctx->pc = 0x1ecd24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17376 << 16));
    // 0x1ecd28: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ecd28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ecd2c: 0x0  nop
    ctx->pc = 0x1ecd2cu;
    // NOP
    // 0x1ecd30: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1ecd30u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1ecd34: 0x8f82bb60  lw          $v0, -0x44A0($gp)
    ctx->pc = 0x1ecd34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949728)));
    // 0x1ecd38: 0xc4400038  lwc1        $f0, 0x38($v0)
    ctx->pc = 0x1ecd38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ecd3c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1ecd3cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1ecd40: 0xe4400038  swc1        $f0, 0x38($v0)
    ctx->pc = 0x1ecd40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
    // 0x1ecd44: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x1ecd44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x1ecd48: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ecd48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ecd4c: 0x8f82bb60  lw          $v0, -0x44A0($gp)
    ctx->pc = 0x1ecd4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949728)));
    // 0x1ecd50: 0xe440003c  swc1        $f0, 0x3C($v0)
    ctx->pc = 0x1ecd50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
    // 0x1ecd54: 0x8f82bb80  lw          $v0, -0x4480($gp)
    ctx->pc = 0x1ecd54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949760)));
    // 0x1ecd58: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x1ecd58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1ecd5c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1ECD5Cu;
    {
        const bool branch_taken_0x1ecd5c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1ecd5c) {
            ctx->pc = 0x1ECD78u;
            goto label_1ecd78;
        }
    }
    ctx->pc = 0x1ECD64u;
    // 0x1ecd64: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ecd64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ecd68: 0x0  nop
    ctx->pc = 0x1ecd68u;
    // NOP
    // 0x1ecd6c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1ecd6cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1ecd70: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1ECD70u;
    {
        const bool branch_taken_0x1ecd70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ecd70) {
            ctx->pc = 0x1ECD94u;
            goto label_1ecd94;
        }
    }
    ctx->pc = 0x1ECD78u;
label_1ecd78:
    // 0x1ecd78: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1ecd78u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1ecd7c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1ecd7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1ecd80: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1ecd80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1ecd84: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ecd84u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ecd88: 0x0  nop
    ctx->pc = 0x1ecd88u;
    // NOP
    // 0x1ecd8c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1ecd8cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1ecd90: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1ecd90u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1ecd94:
    // 0x1ecd94: 0x3c024420  lui         $v0, 0x4420
    ctx->pc = 0x1ecd94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17440 << 16));
    // 0x1ecd98: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ecd98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ecd9c: 0x0  nop
    ctx->pc = 0x1ecd9cu;
    // NOP
    // 0x1ecda0: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1ecda0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1ecda4: 0x8f82bb60  lw          $v0, -0x44A0($gp)
    ctx->pc = 0x1ecda4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949728)));
    // 0x1ecda8: 0xc440003c  lwc1        $f0, 0x3C($v0)
    ctx->pc = 0x1ecda8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ecdac: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1ecdacu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1ecdb0: 0xe440003c  swc1        $f0, 0x3C($v0)
    ctx->pc = 0x1ecdb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
    // 0x1ecdb4: 0x3c0242b4  lui         $v0, 0x42B4
    ctx->pc = 0x1ecdb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17076 << 16));
    // 0x1ecdb8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ecdb8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ecdbc: 0x8f82bb60  lw          $v0, -0x44A0($gp)
    ctx->pc = 0x1ecdbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949728)));
    // 0x1ecdc0: 0xe4400040  swc1        $f0, 0x40($v0)
    ctx->pc = 0x1ecdc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 64), bits); }
    // 0x1ecdc4: 0x8f82bb80  lw          $v0, -0x4480($gp)
    ctx->pc = 0x1ecdc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949760)));
    // 0x1ecdc8: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x1ecdc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1ecdcc: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1ECDCCu;
    {
        const bool branch_taken_0x1ecdcc = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1ecdcc) {
            ctx->pc = 0x1ECDE8u;
            goto label_1ecde8;
        }
    }
    ctx->pc = 0x1ECDD4u;
    // 0x1ecdd4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ecdd4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ecdd8: 0x0  nop
    ctx->pc = 0x1ecdd8u;
    // NOP
    // 0x1ecddc: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1ecddcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1ecde0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1ECDE0u;
    {
        const bool branch_taken_0x1ecde0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ecde0) {
            ctx->pc = 0x1ECE04u;
            goto label_1ece04;
        }
    }
    ctx->pc = 0x1ECDE8u;
label_1ecde8:
    // 0x1ecde8: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1ecde8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1ecdec: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1ecdecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1ecdf0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1ecdf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1ecdf4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ecdf4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ecdf8: 0x0  nop
    ctx->pc = 0x1ecdf8u;
    // NOP
    // 0x1ecdfc: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1ecdfcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1ece00: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1ece00u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1ece04:
    // 0x1ece04: 0x3c0243e0  lui         $v0, 0x43E0
    ctx->pc = 0x1ece04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17376 << 16));
    // 0x1ece08: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ece08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ece0c: 0x0  nop
    ctx->pc = 0x1ece0cu;
    // NOP
    // 0x1ece10: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1ece10u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1ece14: 0x8f82bb60  lw          $v0, -0x44A0($gp)
    ctx->pc = 0x1ece14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949728)));
    // 0x1ece18: 0xc4400040  lwc1        $f0, 0x40($v0)
    ctx->pc = 0x1ece18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ece1c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1ece1cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1ece20: 0xe4400040  swc1        $f0, 0x40($v0)
    ctx->pc = 0x1ece20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 64), bits); }
    // 0x1ece24: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x1ece24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x1ece28: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ece28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ece2c: 0x8f82bb60  lw          $v0, -0x44A0($gp)
    ctx->pc = 0x1ece2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949728)));
    // 0x1ece30: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x1ece30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x1ece34: 0x8f82bb80  lw          $v0, -0x4480($gp)
    ctx->pc = 0x1ece34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949760)));
    // 0x1ece38: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x1ece38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1ece3c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1ECE3Cu;
    {
        const bool branch_taken_0x1ece3c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1ece3c) {
            ctx->pc = 0x1ECE58u;
            goto label_1ece58;
        }
    }
    ctx->pc = 0x1ECE44u;
    // 0x1ece44: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ece44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ece48: 0x0  nop
    ctx->pc = 0x1ece48u;
    // NOP
    // 0x1ece4c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1ece4cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1ece50: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1ECE50u;
    {
        const bool branch_taken_0x1ece50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ece50) {
            ctx->pc = 0x1ECE74u;
            goto label_1ece74;
        }
    }
    ctx->pc = 0x1ECE58u;
label_1ece58:
    // 0x1ece58: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1ece58u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1ece5c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1ece5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1ece60: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1ece60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1ece64: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ece64u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ece68: 0x0  nop
    ctx->pc = 0x1ece68u;
    // NOP
    // 0x1ece6c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1ece6cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1ece70: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1ece70u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1ece74:
    // 0x1ece74: 0x3c024420  lui         $v0, 0x4420
    ctx->pc = 0x1ece74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17440 << 16));
    // 0x1ece78: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ece78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ece7c: 0x0  nop
    ctx->pc = 0x1ece7cu;
    // NOP
    // 0x1ece80: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1ece80u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1ece84: 0x8f82bb60  lw          $v0, -0x44A0($gp)
    ctx->pc = 0x1ece84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949728)));
    // 0x1ece88: 0xc4400020  lwc1        $f0, 0x20($v0)
    ctx->pc = 0x1ece88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ece8c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1ece8cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1ece90: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x1ece90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x1ece94: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x1ece94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x1ece98: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ece98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ece9c: 0x8f82bb60  lw          $v0, -0x44A0($gp)
    ctx->pc = 0x1ece9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949728)));
    // 0x1ecea0: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x1ecea0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x1ecea4: 0x8f82bb80  lw          $v0, -0x4480($gp)
    ctx->pc = 0x1ecea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949760)));
    // 0x1ecea8: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x1ecea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1eceac: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1ECEACu;
    {
        const bool branch_taken_0x1eceac = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1eceac) {
            ctx->pc = 0x1ECEC8u;
            goto label_1ecec8;
        }
    }
    ctx->pc = 0x1ECEB4u;
    // 0x1eceb4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1eceb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1eceb8: 0x0  nop
    ctx->pc = 0x1eceb8u;
    // NOP
    // 0x1ecebc: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1ecebcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1ecec0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1ECEC0u;
    {
        const bool branch_taken_0x1ecec0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ecec0) {
            ctx->pc = 0x1ECEE4u;
            goto label_1ecee4;
        }
    }
    ctx->pc = 0x1ECEC8u;
label_1ecec8:
    // 0x1ecec8: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1ecec8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1ececc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1ececcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1eced0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1eced0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1eced4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1eced4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1eced8: 0x0  nop
    ctx->pc = 0x1eced8u;
    // NOP
    // 0x1ecedc: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1ecedcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1ecee0: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1ecee0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1ecee4:
    // 0x1ecee4: 0x3c0243e0  lui         $v0, 0x43E0
    ctx->pc = 0x1ecee4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17376 << 16));
    // 0x1ecee8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ecee8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1eceec: 0x0  nop
    ctx->pc = 0x1eceecu;
    // NOP
    // 0x1ecef0: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1ecef0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1ecef4: 0x8f82bb60  lw          $v0, -0x44A0($gp)
    ctx->pc = 0x1ecef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949728)));
    // 0x1ecef8: 0xc4400024  lwc1        $f0, 0x24($v0)
    ctx->pc = 0x1ecef8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ecefc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1ecefcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1ecf00: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x1ecf00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x1ecf04: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x1ecf04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x1ecf08: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ecf08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ecf0c: 0x8f82bb60  lw          $v0, -0x44A0($gp)
    ctx->pc = 0x1ecf0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949728)));
    // 0x1ecf10: 0xe44000a8  swc1        $f0, 0xA8($v0)
    ctx->pc = 0x1ecf10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 168), bits); }
    // 0x1ecf14: 0x8f82bb80  lw          $v0, -0x4480($gp)
    ctx->pc = 0x1ecf14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949760)));
    // 0x1ecf18: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x1ecf18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1ecf1c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1ECF1Cu;
    {
        const bool branch_taken_0x1ecf1c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1ecf1c) {
            ctx->pc = 0x1ECF38u;
            goto label_1ecf38;
        }
    }
    ctx->pc = 0x1ECF24u;
    // 0x1ecf24: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ecf24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ecf28: 0x0  nop
    ctx->pc = 0x1ecf28u;
    // NOP
    // 0x1ecf2c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1ecf2cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1ecf30: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1ECF30u;
    {
        const bool branch_taken_0x1ecf30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ecf30) {
            ctx->pc = 0x1ECF54u;
            goto label_1ecf54;
        }
    }
    ctx->pc = 0x1ECF38u;
label_1ecf38:
    // 0x1ecf38: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1ecf38u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1ecf3c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1ecf3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1ecf40: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1ecf40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1ecf44: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ecf44u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ecf48: 0x0  nop
    ctx->pc = 0x1ecf48u;
    // NOP
    // 0x1ecf4c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1ecf4cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1ecf50: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1ecf50u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1ecf54:
    // 0x1ecf54: 0x3c0243e0  lui         $v0, 0x43E0
    ctx->pc = 0x1ecf54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17376 << 16));
    // 0x1ecf58: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ecf58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ecf5c: 0x0  nop
    ctx->pc = 0x1ecf5cu;
    // NOP
    // 0x1ecf60: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1ecf60u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1ecf64: 0x8f82bb60  lw          $v0, -0x44A0($gp)
    ctx->pc = 0x1ecf64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949728)));
    // 0x1ecf68: 0xc44000a8  lwc1        $f0, 0xA8($v0)
    ctx->pc = 0x1ecf68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ecf6c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1ecf6cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1ecf70: 0xe44000a8  swc1        $f0, 0xA8($v0)
    ctx->pc = 0x1ecf70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 168), bits); }
    // 0x1ecf74: 0xc7808278  lwc1        $f0, -0x7D88($gp)
    ctx->pc = 0x1ecf74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ecf78: 0x8f82bb60  lw          $v0, -0x44A0($gp)
    ctx->pc = 0x1ecf78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949728)));
    // 0x1ecf7c: 0xe4400068  swc1        $f0, 0x68($v0)
    ctx->pc = 0x1ecf7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 104), bits); }
    // 0x1ecf80: 0x3c024296  lui         $v0, 0x4296
    ctx->pc = 0x1ecf80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17046 << 16));
    // 0x1ecf84: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ecf84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ecf88: 0x8f82bb60  lw          $v0, -0x44A0($gp)
    ctx->pc = 0x1ecf88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949728)));
    // 0x1ecf8c: 0xe4400070  swc1        $f0, 0x70($v0)
    ctx->pc = 0x1ecf8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 112), bits); }
    // 0x1ecf90: 0x8f82bb80  lw          $v0, -0x4480($gp)
    ctx->pc = 0x1ecf90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949760)));
    // 0x1ecf94: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x1ecf94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1ecf98: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1ECF98u;
    {
        const bool branch_taken_0x1ecf98 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1ecf98) {
            ctx->pc = 0x1ECFB4u;
            goto label_1ecfb4;
        }
    }
    ctx->pc = 0x1ECFA0u;
    // 0x1ecfa0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ecfa0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ecfa4: 0x0  nop
    ctx->pc = 0x1ecfa4u;
    // NOP
    // 0x1ecfa8: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1ecfa8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1ecfac: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1ECFACu;
    {
        const bool branch_taken_0x1ecfac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ecfac) {
            ctx->pc = 0x1ECFD0u;
            goto label_1ecfd0;
        }
    }
    ctx->pc = 0x1ECFB4u;
label_1ecfb4:
    // 0x1ecfb4: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1ecfb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1ecfb8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1ecfb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1ecfbc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1ecfbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1ecfc0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ecfc0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ecfc4: 0x0  nop
    ctx->pc = 0x1ecfc4u;
    // NOP
    // 0x1ecfc8: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1ecfc8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1ecfcc: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1ecfccu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1ecfd0:
    // 0x1ecfd0: 0x3c0243e0  lui         $v0, 0x43E0
    ctx->pc = 0x1ecfd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17376 << 16));
    // 0x1ecfd4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ecfd4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ecfd8: 0x0  nop
    ctx->pc = 0x1ecfd8u;
    // NOP
    // 0x1ecfdc: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1ecfdcu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1ecfe0: 0x8f82bb60  lw          $v0, -0x44A0($gp)
    ctx->pc = 0x1ecfe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949728)));
    // 0x1ecfe4: 0xc4400070  lwc1        $f0, 0x70($v0)
    ctx->pc = 0x1ecfe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ecfe8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1ecfe8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1ecfec: 0xe4400070  swc1        $f0, 0x70($v0)
    ctx->pc = 0x1ecfecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 112), bits); }
    // 0x1ecff0: 0x3c024296  lui         $v0, 0x4296
    ctx->pc = 0x1ecff0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17046 << 16));
    // 0x1ecff4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ecff4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ecff8: 0x8f82bb60  lw          $v0, -0x44A0($gp)
    ctx->pc = 0x1ecff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949728)));
    // 0x1ecffc: 0xe440006c  swc1        $f0, 0x6C($v0)
    ctx->pc = 0x1ecffcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 108), bits); }
    // 0x1ed000: 0x8f82bb80  lw          $v0, -0x4480($gp)
    ctx->pc = 0x1ed000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949760)));
    // 0x1ed004: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x1ed004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1ed008: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1ED008u;
    {
        const bool branch_taken_0x1ed008 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1ed008) {
            ctx->pc = 0x1ED024u;
            goto label_1ed024;
        }
    }
    ctx->pc = 0x1ED010u;
    // 0x1ed010: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ed010u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ed014: 0x0  nop
    ctx->pc = 0x1ed014u;
    // NOP
    // 0x1ed018: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1ed018u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1ed01c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1ED01Cu;
    {
        const bool branch_taken_0x1ed01c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ed01c) {
            ctx->pc = 0x1ED040u;
            goto label_1ed040;
        }
    }
    ctx->pc = 0x1ED024u;
label_1ed024:
    // 0x1ed024: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1ed024u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1ed028: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1ed028u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1ed02c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1ed02cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1ed030: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ed030u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ed034: 0x0  nop
    ctx->pc = 0x1ed034u;
    // NOP
    // 0x1ed038: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1ed038u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1ed03c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1ed03cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1ed040:
    // 0x1ed040: 0x3c024420  lui         $v0, 0x4420
    ctx->pc = 0x1ed040u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17440 << 16));
    // 0x1ed044: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ed044u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ed048: 0x0  nop
    ctx->pc = 0x1ed048u;
    // NOP
    // 0x1ed04c: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1ed04cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1ed050: 0x8f82bb60  lw          $v0, -0x44A0($gp)
    ctx->pc = 0x1ed050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949728)));
    // 0x1ed054: 0xc440006c  lwc1        $f0, 0x6C($v0)
    ctx->pc = 0x1ed054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ed058: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1ed058u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1ed05c: 0xe440006c  swc1        $f0, 0x6C($v0)
    ctx->pc = 0x1ed05cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 108), bits); }
    // 0x1ed060: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1ed060u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1ed064: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ed064u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ed068: 0x8f82bb60  lw          $v0, -0x44A0($gp)
    ctx->pc = 0x1ed068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949728)));
    // 0x1ed06c: 0xe4400074  swc1        $f0, 0x74($v0)
    ctx->pc = 0x1ed06cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 116), bits); }
    // 0x1ed070: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x1ed070u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x1ed074: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ed074u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ed078: 0x8f82bb60  lw          $v0, -0x44A0($gp)
    ctx->pc = 0x1ed078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949728)));
    // 0x1ed07c: 0xe440007c  swc1        $f0, 0x7C($v0)
    ctx->pc = 0x1ed07cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 124), bits); }
    // 0x1ed080: 0x8f82bb80  lw          $v0, -0x4480($gp)
    ctx->pc = 0x1ed080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949760)));
    // 0x1ed084: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x1ed084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1ed088: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1ED088u;
    {
        const bool branch_taken_0x1ed088 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1ed088) {
            ctx->pc = 0x1ED0A4u;
            goto label_1ed0a4;
        }
    }
    ctx->pc = 0x1ED090u;
    // 0x1ed090: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ed090u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ed094: 0x0  nop
    ctx->pc = 0x1ed094u;
    // NOP
    // 0x1ed098: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1ed098u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1ed09c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1ED09Cu;
    {
        const bool branch_taken_0x1ed09c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ed09c) {
            ctx->pc = 0x1ED0C0u;
            goto label_1ed0c0;
        }
    }
    ctx->pc = 0x1ED0A4u;
label_1ed0a4:
    // 0x1ed0a4: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1ed0a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1ed0a8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1ed0a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1ed0ac: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1ed0acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1ed0b0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ed0b0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ed0b4: 0x0  nop
    ctx->pc = 0x1ed0b4u;
    // NOP
    // 0x1ed0b8: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1ed0b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1ed0bc: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1ed0bcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1ed0c0:
    // 0x1ed0c0: 0x3c0243e0  lui         $v0, 0x43E0
    ctx->pc = 0x1ed0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17376 << 16));
    // 0x1ed0c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ed0c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ed0c8: 0x0  nop
    ctx->pc = 0x1ed0c8u;
    // NOP
    // 0x1ed0cc: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1ed0ccu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1ed0d0: 0x8f82bb60  lw          $v0, -0x44A0($gp)
    ctx->pc = 0x1ed0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949728)));
    // 0x1ed0d4: 0xc440007c  lwc1        $f0, 0x7C($v0)
    ctx->pc = 0x1ed0d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ed0d8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1ed0d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1ed0dc: 0xe440007c  swc1        $f0, 0x7C($v0)
    ctx->pc = 0x1ed0dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 124), bits); }
    // 0x1ed0e0: 0x3c024296  lui         $v0, 0x4296
    ctx->pc = 0x1ed0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17046 << 16));
    // 0x1ed0e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ed0e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ed0e8: 0x8f82bb60  lw          $v0, -0x44A0($gp)
    ctx->pc = 0x1ed0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949728)));
    // 0x1ed0ec: 0xe4400078  swc1        $f0, 0x78($v0)
    ctx->pc = 0x1ed0ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 120), bits); }
    // 0x1ed0f0: 0x8f82bb80  lw          $v0, -0x4480($gp)
    ctx->pc = 0x1ed0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949760)));
    // 0x1ed0f4: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x1ed0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1ed0f8: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1ED0F8u;
    {
        const bool branch_taken_0x1ed0f8 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1ed0f8) {
            ctx->pc = 0x1ED114u;
            goto label_1ed114;
        }
    }
    ctx->pc = 0x1ED100u;
    // 0x1ed100: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ed100u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ed104: 0x0  nop
    ctx->pc = 0x1ed104u;
    // NOP
    // 0x1ed108: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1ed108u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1ed10c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1ED10Cu;
    {
        const bool branch_taken_0x1ed10c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ed10c) {
            ctx->pc = 0x1ED130u;
            goto label_1ed130;
        }
    }
    ctx->pc = 0x1ED114u;
label_1ed114:
    // 0x1ed114: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1ed114u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1ed118: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1ed118u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1ed11c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1ed11cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1ed120: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ed120u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ed124: 0x0  nop
    ctx->pc = 0x1ed124u;
    // NOP
    // 0x1ed128: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1ed128u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1ed12c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1ed12cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1ed130:
    // 0x1ed130: 0x3c024420  lui         $v0, 0x4420
    ctx->pc = 0x1ed130u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17440 << 16));
    // 0x1ed134: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ed134u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ed138: 0x0  nop
    ctx->pc = 0x1ed138u;
    // NOP
    // 0x1ed13c: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1ed13cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1ed140: 0x8f82bb60  lw          $v0, -0x44A0($gp)
    ctx->pc = 0x1ed140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949728)));
    // 0x1ed144: 0xc4400078  lwc1        $f0, 0x78($v0)
    ctx->pc = 0x1ed144u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ed148: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1ed148u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1ed14c: 0xe4400078  swc1        $f0, 0x78($v0)
    ctx->pc = 0x1ed14cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 120), bits); }
    // 0x1ed150: 0x3c023e80  lui         $v0, 0x3E80
    ctx->pc = 0x1ed150u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16000 << 16));
    // 0x1ed154: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ed154u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ed158: 0x8f82bb60  lw          $v0, -0x44A0($gp)
    ctx->pc = 0x1ed158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949728)));
    // 0x1ed15c: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x1ed15cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1ed160: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1ed160u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ed164: 0x8f82bb60  lw          $v0, -0x44A0($gp)
    ctx->pc = 0x1ed164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949728)));
    // 0x1ed168: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x1ed168u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x1ed16c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ed16cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ed170: 0x8f82bb60  lw          $v0, -0x44A0($gp)
    ctx->pc = 0x1ed170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949728)));
    // 0x1ed174: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x1ed174u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
    // 0x1ed178: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1ed178u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ed17c: 0x8f82bb60  lw          $v0, -0x44A0($gp)
    ctx->pc = 0x1ed17cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949728)));
    // 0x1ed180: 0xac430010  sw          $v1, 0x10($v0)
    ctx->pc = 0x1ed180u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 3));
    // 0x1ed184: 0x8f82bb60  lw          $v0, -0x44A0($gp)
    ctx->pc = 0x1ed184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949728)));
    // 0x1ed188: 0xac400030  sw          $zero, 0x30($v0)
    ctx->pc = 0x1ed188u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 0));
    // 0x1ed18c: 0x8f82bb60  lw          $v0, -0x44A0($gp)
    ctx->pc = 0x1ed18cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949728)));
    // 0x1ed190: 0x24440080  addiu       $a0, $v0, 0x80
    ctx->pc = 0x1ed190u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x1ed194: 0x278598a0  addiu       $a1, $gp, -0x6760
    ctx->pc = 0x1ed194u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294940832));
    // 0x1ed198: 0xc041ba4  jal         func_106E90
    ctx->pc = 0x1ED198u;
    SET_GPR_U32(ctx, 31, 0x1ED1A0u);
    ctx->pc = 0x106E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106E90u, 0x1ED198u, 0x1ED1A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED1A0u;
label_1ed1a0:
    // 0x1ed1a0: 0x8f82bb60  lw          $v0, -0x44A0($gp)
    ctx->pc = 0x1ed1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949728)));
    // 0x1ed1a4: 0x2444008c  addiu       $a0, $v0, 0x8C
    ctx->pc = 0x1ed1a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 140));
    // 0x1ed1a8: 0x278598a8  addiu       $a1, $gp, -0x6758
    ctx->pc = 0x1ed1a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294940840));
    // 0x1ed1ac: 0xc041ba4  jal         func_106E90
    ctx->pc = 0x1ED1ACu;
    SET_GPR_U32(ctx, 31, 0x1ED1B4u);
    ctx->pc = 0x106E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106E90u, 0x1ED1ACu, 0x1ED1B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED1B4u;
label_1ed1b4:
    // 0x1ed1b4: 0x3c033fc0  lui         $v1, 0x3FC0
    ctx->pc = 0x1ed1b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16320 << 16));
    // 0x1ed1b8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ed1b8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ed1bc: 0x8f83bb60  lw          $v1, -0x44A0($gp)
    ctx->pc = 0x1ed1bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949728)));
    // 0x1ed1c0: 0xe46000a4  swc1        $f0, 0xA4($v1)
    ctx->pc = 0x1ed1c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 164), bits); }
    // 0x1ed1c4: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1ed1c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x1ed1c8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ed1c8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ed1cc: 0x8f83bb60  lw          $v1, -0x44A0($gp)
    ctx->pc = 0x1ed1ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949728)));
    // 0x1ed1d0: 0xe46000ac  swc1        $f0, 0xAC($v1)
    ctx->pc = 0x1ed1d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 172), bits); }
    // 0x1ed1d4: 0xc78081b0  lwc1        $f0, -0x7E50($gp)
    ctx->pc = 0x1ed1d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934960)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ed1d8: 0x8f83bb60  lw          $v1, -0x44A0($gp)
    ctx->pc = 0x1ed1d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949728)));
    // 0x1ed1dc: 0xe46000b0  swc1        $f0, 0xB0($v1)
    ctx->pc = 0x1ed1dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 176), bits); }
    // 0x1ed1e0: 0x3c0341a0  lui         $v1, 0x41A0
    ctx->pc = 0x1ed1e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16800 << 16));
    // 0x1ed1e4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ed1e4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ed1e8: 0x8f83bb60  lw          $v1, -0x44A0($gp)
    ctx->pc = 0x1ed1e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949728)));
    // 0x1ed1ec: 0xe46000b4  swc1        $f0, 0xB4($v1)
    ctx->pc = 0x1ed1ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 180), bits); }
    // 0x1ed1f0: 0x3c034220  lui         $v1, 0x4220
    ctx->pc = 0x1ed1f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16928 << 16));
    // 0x1ed1f4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ed1f4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ed1f8: 0x8f83bb60  lw          $v1, -0x44A0($gp)
    ctx->pc = 0x1ed1f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949728)));
    // 0x1ed1fc: 0xe46000b8  swc1        $f0, 0xB8($v1)
    ctx->pc = 0x1ed1fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 184), bits); }
    // 0x1ed200: 0x3c03c0f0  lui         $v1, 0xC0F0
    ctx->pc = 0x1ed200u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49392 << 16));
    // 0x1ed204: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ed204u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ed208: 0x8f83bb60  lw          $v1, -0x44A0($gp)
    ctx->pc = 0x1ed208u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949728)));
    // 0x1ed20c: 0xe4600050  swc1        $f0, 0x50($v1)
    ctx->pc = 0x1ed20cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 80), bits); }
    // 0x1ed210: 0x8f83bb80  lw          $v1, -0x4480($gp)
    ctx->pc = 0x1ed210u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949760)));
    // 0x1ed214: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x1ed214u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x1ed218: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1ED218u;
    {
        const bool branch_taken_0x1ed218 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x1ed218) {
            ctx->pc = 0x1ED234u;
            goto label_1ed234;
        }
    }
    ctx->pc = 0x1ED220u;
    // 0x1ed220: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ed220u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ed224: 0x0  nop
    ctx->pc = 0x1ed224u;
    // NOP
    // 0x1ed228: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1ed228u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1ed22c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1ED22Cu;
    {
        const bool branch_taken_0x1ed22c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ed22c) {
            ctx->pc = 0x1ED250u;
            goto label_1ed250;
        }
    }
    ctx->pc = 0x1ED234u;
label_1ed234:
    // 0x1ed234: 0x32042  srl         $a0, $v1, 1
    ctx->pc = 0x1ed234u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x1ed238: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1ed238u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1ed23c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1ed23cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1ed240: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1ed240u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ed244: 0x0  nop
    ctx->pc = 0x1ed244u;
    // NOP
    // 0x1ed248: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1ed248u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1ed24c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1ed24cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1ed250:
    // 0x1ed250: 0x3c034420  lui         $v1, 0x4420
    ctx->pc = 0x1ed250u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17440 << 16));
    // 0x1ed254: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ed254u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ed258: 0x0  nop
    ctx->pc = 0x1ed258u;
    // NOP
    // 0x1ed25c: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1ed25cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1ed260: 0x8f83bb60  lw          $v1, -0x44A0($gp)
    ctx->pc = 0x1ed260u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949728)));
    // 0x1ed264: 0xc4600050  lwc1        $f0, 0x50($v1)
    ctx->pc = 0x1ed264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ed268: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1ed268u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1ed26c: 0xe4600050  swc1        $f0, 0x50($v1)
    ctx->pc = 0x1ed26cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 80), bits); }
    // 0x1ed270: 0x3c0341c8  lui         $v1, 0x41C8
    ctx->pc = 0x1ed270u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16840 << 16));
    // 0x1ed274: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ed274u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ed278: 0x8f83bb60  lw          $v1, -0x44A0($gp)
    ctx->pc = 0x1ed278u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949728)));
    // 0x1ed27c: 0xe4600054  swc1        $f0, 0x54($v1)
    ctx->pc = 0x1ed27cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 84), bits); }
    // 0x1ed280: 0x8f83bb80  lw          $v1, -0x4480($gp)
    ctx->pc = 0x1ed280u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949760)));
    // 0x1ed284: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x1ed284u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1ed288: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1ED288u;
    {
        const bool branch_taken_0x1ed288 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x1ed288) {
            ctx->pc = 0x1ED2A4u;
            goto label_1ed2a4;
        }
    }
    ctx->pc = 0x1ED290u;
    // 0x1ed290: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ed290u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ed294: 0x0  nop
    ctx->pc = 0x1ed294u;
    // NOP
    // 0x1ed298: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1ed298u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1ed29c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1ED29Cu;
    {
        const bool branch_taken_0x1ed29c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ed29c) {
            ctx->pc = 0x1ED2C0u;
            goto label_1ed2c0;
        }
    }
    ctx->pc = 0x1ED2A4u;
label_1ed2a4:
    // 0x1ed2a4: 0x32042  srl         $a0, $v1, 1
    ctx->pc = 0x1ed2a4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x1ed2a8: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1ed2a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1ed2ac: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1ed2acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1ed2b0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1ed2b0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ed2b4: 0x0  nop
    ctx->pc = 0x1ed2b4u;
    // NOP
    // 0x1ed2b8: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1ed2b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1ed2bc: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1ed2bcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1ed2c0:
    // 0x1ed2c0: 0x3c0343e0  lui         $v1, 0x43E0
    ctx->pc = 0x1ed2c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17376 << 16));
    // 0x1ed2c4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ed2c4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ed2c8: 0x0  nop
    ctx->pc = 0x1ed2c8u;
    // NOP
    // 0x1ed2cc: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1ed2ccu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1ed2d0: 0x8f83bb60  lw          $v1, -0x44A0($gp)
    ctx->pc = 0x1ed2d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949728)));
    // 0x1ed2d4: 0xc4600054  lwc1        $f0, 0x54($v1)
    ctx->pc = 0x1ed2d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ed2d8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1ed2d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1ed2dc: 0xe4600054  swc1        $f0, 0x54($v1)
    ctx->pc = 0x1ed2dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 84), bits); }
    // 0x1ed2e0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1ed2e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ed2e4: 0x8f83bb60  lw          $v1, -0x44A0($gp)
    ctx->pc = 0x1ed2e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949728)));
    // 0x1ed2e8: 0xe4600058  swc1        $f0, 0x58($v1)
    ctx->pc = 0x1ed2e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 88), bits); }
    // 0x1ed2ec: 0x8f83bb80  lw          $v1, -0x4480($gp)
    ctx->pc = 0x1ed2ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949760)));
    // 0x1ed2f0: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x1ed2f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x1ed2f4: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1ED2F4u;
    {
        const bool branch_taken_0x1ed2f4 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x1ed2f4) {
            ctx->pc = 0x1ED310u;
            goto label_1ed310;
        }
    }
    ctx->pc = 0x1ED2FCu;
    // 0x1ed2fc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ed2fcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ed300: 0x0  nop
    ctx->pc = 0x1ed300u;
    // NOP
    // 0x1ed304: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1ed304u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1ed308: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1ED308u;
    {
        const bool branch_taken_0x1ed308 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ed308) {
            ctx->pc = 0x1ED32Cu;
            goto label_1ed32c;
        }
    }
    ctx->pc = 0x1ED310u;
label_1ed310:
    // 0x1ed310: 0x32042  srl         $a0, $v1, 1
    ctx->pc = 0x1ed310u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x1ed314: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1ed314u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1ed318: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1ed318u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1ed31c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1ed31cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ed320: 0x0  nop
    ctx->pc = 0x1ed320u;
    // NOP
    // 0x1ed324: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1ed324u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1ed328: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1ed328u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1ed32c:
    // 0x1ed32c: 0x3c034420  lui         $v1, 0x4420
    ctx->pc = 0x1ed32cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17440 << 16));
    // 0x1ed330: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ed330u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ed334: 0x0  nop
    ctx->pc = 0x1ed334u;
    // NOP
    // 0x1ed338: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1ed338u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1ed33c: 0x8f83bb60  lw          $v1, -0x44A0($gp)
    ctx->pc = 0x1ed33cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949728)));
    // 0x1ed340: 0xc4600058  lwc1        $f0, 0x58($v1)
    ctx->pc = 0x1ed340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ed344: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1ed344u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1ed348: 0xe4600058  swc1        $f0, 0x58($v1)
    ctx->pc = 0x1ed348u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 88), bits); }
    // 0x1ed34c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1ed34cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ed350: 0x8f83bb60  lw          $v1, -0x44A0($gp)
    ctx->pc = 0x1ed350u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949728)));
    // 0x1ed354: 0xe460005c  swc1        $f0, 0x5C($v1)
    ctx->pc = 0x1ed354u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 92), bits); }
    // 0x1ed358: 0x8f83bb80  lw          $v1, -0x4480($gp)
    ctx->pc = 0x1ed358u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949760)));
    // 0x1ed35c: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x1ed35cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1ed360: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1ED360u;
    {
        const bool branch_taken_0x1ed360 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x1ed360) {
            ctx->pc = 0x1ED37Cu;
            goto label_1ed37c;
        }
    }
    ctx->pc = 0x1ED368u;
    // 0x1ed368: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ed368u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ed36c: 0x0  nop
    ctx->pc = 0x1ed36cu;
    // NOP
    // 0x1ed370: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1ed370u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1ed374: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1ED374u;
    {
        const bool branch_taken_0x1ed374 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ed374) {
            ctx->pc = 0x1ED398u;
            goto label_1ed398;
        }
    }
    ctx->pc = 0x1ED37Cu;
label_1ed37c:
    // 0x1ed37c: 0x32042  srl         $a0, $v1, 1
    ctx->pc = 0x1ed37cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x1ed380: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1ed380u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1ed384: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1ed384u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1ed388: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1ed388u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ed38c: 0x0  nop
    ctx->pc = 0x1ed38cu;
    // NOP
    // 0x1ed390: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1ed390u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1ed394: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1ed394u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1ed398:
    // 0x1ed398: 0x3c0343e0  lui         $v1, 0x43E0
    ctx->pc = 0x1ed398u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17376 << 16));
    // 0x1ed39c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ed39cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ed3a0: 0x0  nop
    ctx->pc = 0x1ed3a0u;
    // NOP
    // 0x1ed3a4: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1ed3a4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1ed3a8: 0x8f83bb60  lw          $v1, -0x44A0($gp)
    ctx->pc = 0x1ed3a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949728)));
    // 0x1ed3ac: 0xc460005c  lwc1        $f0, 0x5C($v1)
    ctx->pc = 0x1ed3acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ed3b0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1ed3b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1ed3b4: 0xe460005c  swc1        $f0, 0x5C($v1)
    ctx->pc = 0x1ed3b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 92), bits); }
    // 0x1ed3b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ed3b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ed3bc: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1ed3bcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1ed3c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1ED3C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ED3C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ED3C8u;
    // 0x1ed3c8: 0x0  nop
    ctx->pc = 0x1ed3c8u;
    // NOP
    // 0x1ed3cc: 0x0  nop
    ctx->pc = 0x1ed3ccu;
    // NOP
    // 0x1ed3d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ed3d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ed3d4: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x1ed3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
    // 0x1ed3d8: 0x24428440  addiu       $v0, $v0, -0x7BC0
    ctx->pc = 0x1ed3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935616));
    // 0x1ed3dc: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1ed3dcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1ed3e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1ED3E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ED3E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ED3E8u;
    // 0x1ed3e8: 0x0  nop
    ctx->pc = 0x1ed3e8u;
    // NOP
    // 0x1ed3ec: 0x0  nop
    ctx->pc = 0x1ed3ecu;
    // NOP
    // 0x1ed3f0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1ed3f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1ed3f4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1ed3f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1ed3f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1ed3f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1ed3fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1ed3fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1ed400: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x1ed400u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x1ed404: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1ed404u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ed408: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1ed408u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ed40c: 0x14600058  bnez        $v1, . + 4 + (0x58 << 2)
    ctx->pc = 0x1ED40Cu;
    {
        const bool branch_taken_0x1ed40c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ed40c) {
            ctx->pc = 0x1ED570u;
            goto label_1ed570;
        }
    }
    ctx->pc = 0x1ED414u;
    // 0x1ed414: 0x8f83bcc4  lw          $v1, -0x433C($gp)
    ctx->pc = 0x1ed414u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
    // 0x1ed418: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1ed418u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ed41c: 0x10030054  beq         $zero, $v1, . + 4 + (0x54 << 2)
    ctx->pc = 0x1ED41Cu;
    {
        const bool branch_taken_0x1ed41c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 3));
        if (branch_taken_0x1ed41c) {
            ctx->pc = 0x1ED570u;
            goto label_1ed570;
        }
    }
    ctx->pc = 0x1ED424u;
    // 0x1ed424: 0x8f82bcc4  lw          $v0, -0x433C($gp)
    ctx->pc = 0x1ed424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
    // 0x1ed428: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1ed428u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ed42c: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x1ed42cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x1ed430: 0xc085538  jal         func_2154E0
    ctx->pc = 0x1ED430u;
    SET_GPR_U32(ctx, 31, 0x1ED438u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x1ED430u, 0x1ED438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED438u;
label_1ed438:
    // 0x1ed438: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1ed438u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed43c: 0x1010004c  beq         $zero, $s0, . + 4 + (0x4C << 2)
    ctx->pc = 0x1ED43Cu;
    {
        const bool branch_taken_0x1ed43c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 16));
        if (branch_taken_0x1ed43c) {
            ctx->pc = 0x1ED570u;
            goto label_1ed570;
        }
    }
    ctx->pc = 0x1ED444u;
    // 0x1ed444: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ed444u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed448: 0xc040aa8  jal         func_102AA0
    ctx->pc = 0x1ED448u;
    SET_GPR_U32(ctx, 31, 0x1ED450u);
    ctx->pc = 0x102AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AA0u, 0x1ED448u, 0x1ED450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED450u;
label_1ed450:
    // 0x1ed450: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ed450u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed454: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ed454u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed458: 0xc040a90  jal         func_102A40
    ctx->pc = 0x1ED458u;
    SET_GPR_U32(ctx, 31, 0x1ED460u);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x1ED458u, 0x1ED460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED460u;
label_1ed460:
    // 0x1ed460: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1ed460u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed464: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ed464u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed468: 0xc040aa8  jal         func_102AA0
    ctx->pc = 0x1ED468u;
    SET_GPR_U32(ctx, 31, 0x1ED470u);
    ctx->pc = 0x102AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AA0u, 0x1ED468u, 0x1ED470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED470u;
label_1ed470:
    // 0x1ed470: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ed470u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed474: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ed474u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed478: 0xc040a90  jal         func_102A40
    ctx->pc = 0x1ED478u;
    SET_GPR_U32(ctx, 31, 0x1ED480u);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x1ED478u, 0x1ED480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED480u;
label_1ed480:
    // 0x1ed480: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1ed480u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ed484: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x1ed484u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x1ed488: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ed488u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ed48c: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x1ed48cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ed490: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x1ed490u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1ed494: 0x0  nop
    ctx->pc = 0x1ed494u;
    // NOP
    // 0x1ed498: 0x0  nop
    ctx->pc = 0x1ed498u;
    // NOP
    // 0x1ed49c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1ed49cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1ed4a0: 0xc094de0  jal         func_253780
    ctx->pc = 0x1ED4A0u;
    SET_GPR_U32(ctx, 31, 0x1ED4A8u);
    ctx->pc = 0x253780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253780u, 0x1ED4A0u, 0x1ED4A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED4A8u;
label_1ed4a8:
    // 0x1ed4a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ed4a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed4ac: 0xc040aa8  jal         func_102AA0
    ctx->pc = 0x1ED4ACu;
    SET_GPR_U32(ctx, 31, 0x1ED4B4u);
    ctx->pc = 0x102AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AA0u, 0x1ED4ACu, 0x1ED4B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED4B4u;
label_1ed4b4:
    // 0x1ed4b4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ed4b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed4b8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1ed4b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ed4bc: 0xc040a90  jal         func_102A40
    ctx->pc = 0x1ED4BCu;
    SET_GPR_U32(ctx, 31, 0x1ED4C4u);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x1ED4BCu, 0x1ED4C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED4C4u;
label_1ed4c4:
    // 0x1ed4c4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1ed4c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed4c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ed4c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed4cc: 0xc040aa8  jal         func_102AA0
    ctx->pc = 0x1ED4CCu;
    SET_GPR_U32(ctx, 31, 0x1ED4D4u);
    ctx->pc = 0x102AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AA0u, 0x1ED4CCu, 0x1ED4D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED4D4u;
label_1ed4d4:
    // 0x1ed4d4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ed4d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed4d8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1ed4d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ed4dc: 0xc040a90  jal         func_102A40
    ctx->pc = 0x1ED4DCu;
    SET_GPR_U32(ctx, 31, 0x1ED4E4u);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x1ED4DCu, 0x1ED4E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED4E4u;
label_1ed4e4:
    // 0x1ed4e4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1ed4e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ed4e8: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x1ed4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x1ed4ec: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ed4ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ed4f0: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x1ed4f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ed4f4: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x1ed4f4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1ed4f8: 0x0  nop
    ctx->pc = 0x1ed4f8u;
    // NOP
    // 0x1ed4fc: 0x0  nop
    ctx->pc = 0x1ed4fcu;
    // NOP
    // 0x1ed500: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1ed500u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1ed504: 0xc094de0  jal         func_253780
    ctx->pc = 0x1ED504u;
    SET_GPR_U32(ctx, 31, 0x1ED50Cu);
    ctx->pc = 0x253780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253780u, 0x1ED504u, 0x1ED50Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED50Cu;
label_1ed50c:
    // 0x1ed50c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ed50cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed510: 0xc040aa8  jal         func_102AA0
    ctx->pc = 0x1ED510u;
    SET_GPR_U32(ctx, 31, 0x1ED518u);
    ctx->pc = 0x102AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AA0u, 0x1ED510u, 0x1ED518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED518u;
label_1ed518:
    // 0x1ed518: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ed518u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed51c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1ed51cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1ed520: 0xc040a90  jal         func_102A40
    ctx->pc = 0x1ED520u;
    SET_GPR_U32(ctx, 31, 0x1ED528u);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x1ED520u, 0x1ED528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED528u;
label_1ed528:
    // 0x1ed528: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1ed528u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed52c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ed52cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed530: 0xc040aa8  jal         func_102AA0
    ctx->pc = 0x1ED530u;
    SET_GPR_U32(ctx, 31, 0x1ED538u);
    ctx->pc = 0x102AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AA0u, 0x1ED530u, 0x1ED538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED538u;
label_1ed538:
    // 0x1ed538: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ed538u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed53c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1ed53cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1ed540: 0xc040a90  jal         func_102A40
    ctx->pc = 0x1ED540u;
    SET_GPR_U32(ctx, 31, 0x1ED548u);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x1ED540u, 0x1ED548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED548u;
label_1ed548:
    // 0x1ed548: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1ed548u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ed54c: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x1ed54cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x1ed550: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ed550u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ed554: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x1ed554u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ed558: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x1ed558u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1ed55c: 0x0  nop
    ctx->pc = 0x1ed55cu;
    // NOP
    // 0x1ed560: 0x0  nop
    ctx->pc = 0x1ed560u;
    // NOP
    // 0x1ed564: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1ed564u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1ed568: 0xc094de0  jal         func_253780
    ctx->pc = 0x1ED568u;
    SET_GPR_U32(ctx, 31, 0x1ED570u);
    ctx->pc = 0x253780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253780u, 0x1ED568u, 0x1ED570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED570u;
label_1ed570:
    // 0x1ed570: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1ed570u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ed574: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1ed574u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ed578: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ed578u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ed57c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x1ed57cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1ed580: 0x3e00008  jr          $ra
    ctx->pc = 0x1ED580u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ED580u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ED588u;
    // 0x1ed588: 0x0  nop
    ctx->pc = 0x1ed588u;
    // NOP
    // 0x1ed58c: 0x0  nop
    ctx->pc = 0x1ed58cu;
    // NOP
    ctx->pc = 0x1ed590u;
}
