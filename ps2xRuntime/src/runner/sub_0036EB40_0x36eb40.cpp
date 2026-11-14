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

// Function: sub_0036EB40
// Address: 0x36eb40 - 0x36ecd0
void sub_0036EB40_0x36eb40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036EB40_0x36eb40");
#endif

    switch (ctx->pc) {
        case 0x36eb70u: goto label_36eb70;
        default: break;
    }

    ctx->pc = 0x36eb40u;

    // 0x36eb40: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x36eb40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x36eb44: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x36eb44u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x36eb48: 0x8d060010  lw          $a2, 0x10($t0)
    ctx->pc = 0x36eb48u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x36eb4c: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x36eb4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x36eb50: 0x18e0005d  blez        $a3, . + 4 + (0x5D << 2)
    ctx->pc = 0x36EB50u;
    {
        const bool branch_taken_0x36eb50 = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x36EB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36EB50u;
        // 0x36eb54: 0x8d03000c  lw          $v1, 0xC($t0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36eb50) {
            ctx->pc = 0x36ECC8u;
            goto label_36ecc8;
        }
    }
    ctx->pc = 0x36EB58u;
    // 0x36eb58: 0x24620038  addiu       $v0, $v1, 0x38
    ctx->pc = 0x36eb58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 56));
    // 0x36eb5c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x36eb5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x36eb60: 0x44814800  mtc1        $at, $f9
    ctx->pc = 0x36eb60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
    // 0x36eb64: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x36eb64u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x36eb68: 0x24630030  addiu       $v1, $v1, 0x30
    ctx->pc = 0x36eb68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x36eb6c: 0x0  nop
    ctx->pc = 0x36eb6cu;
    // NOP
label_36eb70:
    // 0x36eb70: 0xc468ffd0  lwc1        $f8, -0x30($v1)
    ctx->pc = 0x36eb70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294967248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x36eb74: 0x46094202  mul.s       $f8, $f8, $f9
    ctx->pc = 0x36eb74u;
    ctx->f[8] = FPU_MUL_S(ctx->f[8], ctx->f[9]);
    // 0x36eb78: 0xe7a80000  swc1        $f8, 0x0($sp)
    ctx->pc = 0x36eb78u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x36eb7c: 0xc467ffd4  lwc1        $f7, -0x2C($v1)
    ctx->pc = 0x36eb7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294967252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x36eb80: 0x460939c2  mul.s       $f7, $f7, $f9
    ctx->pc = 0x36eb80u;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[9]);
    // 0x36eb84: 0xe7a70004  swc1        $f7, 0x4($sp)
    ctx->pc = 0x36eb84u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x36eb88: 0xc465ffd8  lwc1        $f5, -0x28($v1)
    ctx->pc = 0x36eb88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294967256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x36eb8c: 0x46092942  mul.s       $f5, $f5, $f9
    ctx->pc = 0x36eb8cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[9]);
    // 0x36eb90: 0xe7a50008  swc1        $f5, 0x8($sp)
    ctx->pc = 0x36eb90u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x36eb94: 0xc464ffe0  lwc1        $f4, -0x20($v1)
    ctx->pc = 0x36eb94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294967264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x36eb98: 0x46092102  mul.s       $f4, $f4, $f9
    ctx->pc = 0x36eb98u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[9]);
    // 0x36eb9c: 0xe7a40010  swc1        $f4, 0x10($sp)
    ctx->pc = 0x36eb9cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x36eba0: 0xc463ffe4  lwc1        $f3, -0x1C($v1)
    ctx->pc = 0x36eba0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294967268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x36eba4: 0x460918c2  mul.s       $f3, $f3, $f9
    ctx->pc = 0x36eba4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[9]);
    // 0x36eba8: 0xe7a30014  swc1        $f3, 0x14($sp)
    ctx->pc = 0x36eba8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x36ebac: 0xc460ffe8  lwc1        $f0, -0x18($v1)
    ctx->pc = 0x36ebacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294967272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36ebb0: 0x46090002  mul.s       $f0, $f0, $f9
    ctx->pc = 0x36ebb0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[9]);
    // 0x36ebb4: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x36ebb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x36ebb8: 0x46044040  add.s       $f1, $f8, $f4
    ctx->pc = 0x36ebb8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[8], ctx->f[4]);
    // 0x36ebbc: 0x46033980  add.s       $f6, $f7, $f3
    ctx->pc = 0x36ebbcu;
    ctx->f[6] = FPU_ADD_S(ctx->f[7], ctx->f[3]);
    // 0x36ebc0: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x36ebc0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x36ebc4: 0x46002880  add.s       $f2, $f5, $f0
    ctx->pc = 0x36ebc4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[5], ctx->f[0]);
    // 0x36ebc8: 0xe7a60024  swc1        $f6, 0x24($sp)
    ctx->pc = 0x36ebc8u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x36ebcc: 0xe7a20028  swc1        $f2, 0x28($sp)
    ctx->pc = 0x36ebccu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x36ebd0: 0x46044201  sub.s       $f8, $f8, $f4
    ctx->pc = 0x36ebd0u;
    ctx->f[8] = FPU_SUB_S(ctx->f[8], ctx->f[4]);
    // 0x36ebd4: 0x460339c1  sub.s       $f7, $f7, $f3
    ctx->pc = 0x36ebd4u;
    ctx->f[7] = FPU_SUB_S(ctx->f[7], ctx->f[3]);
    // 0x36ebd8: 0xe7a80030  swc1        $f8, 0x30($sp)
    ctx->pc = 0x36ebd8u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x36ebdc: 0x46002941  sub.s       $f5, $f5, $f0
    ctx->pc = 0x36ebdcu;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
    // 0x36ebe0: 0xe7a70034  swc1        $f7, 0x34($sp)
    ctx->pc = 0x36ebe0u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x36ebe4: 0xe7a50038  swc1        $f5, 0x38($sp)
    ctx->pc = 0x36ebe4u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x36ebe8: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x36ebe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x36ebec: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x36ebecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x36ebf0: 0xc440fff8  lwc1        $f0, -0x8($v0)
    ctx->pc = 0x36ebf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36ebf4: 0x46080000  add.s       $f0, $f0, $f8
    ctx->pc = 0x36ebf4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[8]);
    // 0x36ebf8: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x36ebf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x36ebfc: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x36ebfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36ec00: 0xc441fffc  lwc1        $f1, -0x4($v0)
    ctx->pc = 0x36ec00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36ec04: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x36ec04u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x36ec08: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x36ec08u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x36ec0c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x36ec0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36ec10: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x36ec10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36ec14: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x36ec14u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x36ec18: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x36ec18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x36ec1c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x36ec1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x36ec20: 0xc440fff8  lwc1        $f0, -0x8($v0)
    ctx->pc = 0x36ec20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36ec24: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x36ec24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36ec28: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x36ec28u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x36ec2c: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x36ec2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x36ec30: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x36ec30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36ec34: 0xc441fffc  lwc1        $f1, -0x4($v0)
    ctx->pc = 0x36ec34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36ec38: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x36ec38u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x36ec3c: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x36ec3cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x36ec40: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x36ec40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36ec44: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x36ec44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36ec48: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x36ec48u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x36ec4c: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x36ec4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x36ec50: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x36ec50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x36ec54: 0xc440fff8  lwc1        $f0, -0x8($v0)
    ctx->pc = 0x36ec54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36ec58: 0xc7a10030  lwc1        $f1, 0x30($sp)
    ctx->pc = 0x36ec58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36ec5c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x36ec5cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x36ec60: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x36ec60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x36ec64: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x36ec64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36ec68: 0xc441fffc  lwc1        $f1, -0x4($v0)
    ctx->pc = 0x36ec68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36ec6c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x36ec6cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x36ec70: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x36ec70u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x36ec74: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x36ec74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36ec78: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x36ec78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36ec7c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x36ec7cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x36ec80: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x36ec80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x36ec84: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x36ec84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x36ec88: 0xc440fff8  lwc1        $f0, -0x8($v0)
    ctx->pc = 0x36ec88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36ec8c: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x36ec8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36ec90: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x36ec90u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x36ec94: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x36ec94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x36ec98: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x36ec98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36ec9c: 0xc441fffc  lwc1        $f1, -0x4($v0)
    ctx->pc = 0x36ec9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36eca0: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x36eca0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x36eca4: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x36eca4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x36eca8: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x36eca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36ecac: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x36ecacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36ecb0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x36ecb0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x36ecb4: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x36ecb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x36ecb8: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x36ecb8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x36ecbc: 0x14e0ffac  bnez        $a3, . + 4 + (-0x54 << 2)
    ctx->pc = 0x36ECBCu;
    {
        const bool branch_taken_0x36ecbc = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x36ECC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36ECBCu;
        // 0x36ecc0: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36ecbc) {
            ctx->pc = 0x36EB70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36eb70;
        }
    }
    ctx->pc = 0x36ECC4u;
    // 0x36ecc4: 0x0  nop
    ctx->pc = 0x36ecc4u;
    // NOP
label_36ecc8:
    // 0x36ecc8: 0x3e00008  jr          $ra
    ctx->pc = 0x36ECC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36ECCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36ECC8u;
        // 0x36eccc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36ECC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36ECD0u;
}
