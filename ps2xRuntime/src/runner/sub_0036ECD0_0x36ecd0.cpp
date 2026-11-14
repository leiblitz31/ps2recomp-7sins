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

// Function: sub_0036ECD0
// Address: 0x36ecd0 - 0x36eeb8
void sub_0036ECD0_0x36ecd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036ECD0_0x36ecd0");
#endif

    switch (ctx->pc) {
        case 0x36ed00u: goto label_36ed00;
        default: break;
    }

    ctx->pc = 0x36ecd0u;

    // 0x36ecd0: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x36ecd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x36ecd4: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x36ecd4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x36ecd8: 0x8d050010  lw          $a1, 0x10($t0)
    ctx->pc = 0x36ecd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x36ecdc: 0xc5070068  lwc1        $f7, 0x68($t0)
    ctx->pc = 0x36ecdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x36ece0: 0xc506006c  lwc1        $f6, 0x6C($t0)
    ctx->pc = 0x36ece0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x36ece4: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x36ece4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x36ece8: 0x18e00071  blez        $a3, . + 4 + (0x71 << 2)
    ctx->pc = 0x36ECE8u;
    {
        const bool branch_taken_0x36ece8 = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x36ECECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36ECE8u;
        // 0x36ecec: 0x8d02000c  lw          $v0, 0xC($t0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36ece8) {
            ctx->pc = 0x36EEB0u;
            goto label_36eeb0;
        }
    }
    ctx->pc = 0x36ECF0u;
    // 0x36ecf0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x36ecf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x36ecf4: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x36ecf4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x36ecf8: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x36ecf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x36ecfc: 0x0  nop
    ctx->pc = 0x36ecfcu;
    // NOP
label_36ed00:
    // 0x36ed00: 0xc441ffe0  lwc1        $f1, -0x20($v0)
    ctx->pc = 0x36ed00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36ed04: 0xc440ffd0  lwc1        $f0, -0x30($v0)
    ctx->pc = 0x36ed04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36ed08: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x36ed08u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x36ed0c: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x36ed0cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x36ed10: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x36ed10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x36ed14: 0xc440ffe4  lwc1        $f0, -0x1C($v0)
    ctx->pc = 0x36ed14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36ed18: 0xc441ffd4  lwc1        $f1, -0x2C($v0)
    ctx->pc = 0x36ed18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36ed1c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x36ed1cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x36ed20: 0x46050842  mul.s       $f1, $f1, $f5
    ctx->pc = 0x36ed20u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x36ed24: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x36ed24u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x36ed28: 0xc441ffe8  lwc1        $f1, -0x18($v0)
    ctx->pc = 0x36ed28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36ed2c: 0xc440ffd8  lwc1        $f0, -0x28($v0)
    ctx->pc = 0x36ed2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36ed30: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x36ed30u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x36ed34: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x36ed34u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x36ed38: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x36ed38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x36ed3c: 0xc440ffe0  lwc1        $f0, -0x20($v0)
    ctx->pc = 0x36ed3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36ed40: 0xc444ffd0  lwc1        $f4, -0x30($v0)
    ctx->pc = 0x36ed40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x36ed44: 0x46002101  sub.s       $f4, $f4, $f0
    ctx->pc = 0x36ed44u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
    // 0x36ed48: 0x46052102  mul.s       $f4, $f4, $f5
    ctx->pc = 0x36ed48u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[5]);
    // 0x36ed4c: 0xe7a40010  swc1        $f4, 0x10($sp)
    ctx->pc = 0x36ed4cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x36ed50: 0xc441ffe4  lwc1        $f1, -0x1C($v0)
    ctx->pc = 0x36ed50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36ed54: 0xc440ffd4  lwc1        $f0, -0x2C($v0)
    ctx->pc = 0x36ed54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36ed58: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x36ed58u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x36ed5c: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x36ed5cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x36ed60: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x36ed60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x36ed64: 0xc440ffe8  lwc1        $f0, -0x18($v0)
    ctx->pc = 0x36ed64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36ed68: 0xc441ffd8  lwc1        $f1, -0x28($v0)
    ctx->pc = 0x36ed68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36ed6c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x36ed6cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x36ed70: 0x46050842  mul.s       $f1, $f1, $f5
    ctx->pc = 0x36ed70u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x36ed74: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x36ed74u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x36ed78: 0xc442ffd0  lwc1        $f2, -0x30($v0)
    ctx->pc = 0x36ed78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x36ed7c: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x36ed7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x36ed80: 0x46071082  mul.s       $f2, $f2, $f7
    ctx->pc = 0x36ed80u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[7]);
    // 0x36ed84: 0xc440ffe0  lwc1        $f0, -0x20($v0)
    ctx->pc = 0x36ed84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36ed88: 0x46060002  mul.s       $f0, $f0, $f6
    ctx->pc = 0x36ed88u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x36ed8c: 0x460218c0  add.s       $f3, $f3, $f2
    ctx->pc = 0x36ed8cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x36ed90: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x36ed90u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x36ed94: 0xe7a30020  swc1        $f3, 0x20($sp)
    ctx->pc = 0x36ed94u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x36ed98: 0xc442ffd4  lwc1        $f2, -0x2C($v0)
    ctx->pc = 0x36ed98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x36ed9c: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x36ed9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36eda0: 0x46071082  mul.s       $f2, $f2, $f7
    ctx->pc = 0x36eda0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[7]);
    // 0x36eda4: 0xc440ffe4  lwc1        $f0, -0x1C($v0)
    ctx->pc = 0x36eda4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36eda8: 0x46060002  mul.s       $f0, $f0, $f6
    ctx->pc = 0x36eda8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x36edac: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x36edacu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x36edb0: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x36edb0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x36edb4: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x36edb4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x36edb8: 0xc442ffd8  lwc1        $f2, -0x28($v0)
    ctx->pc = 0x36edb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x36edbc: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x36edbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36edc0: 0x46071082  mul.s       $f2, $f2, $f7
    ctx->pc = 0x36edc0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[7]);
    // 0x36edc4: 0xc440ffe8  lwc1        $f0, -0x18($v0)
    ctx->pc = 0x36edc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36edc8: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x36edc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x36edcc: 0x46060002  mul.s       $f0, $f0, $f6
    ctx->pc = 0x36edccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x36edd0: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x36edd0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x36edd4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x36edd4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x36edd8: 0xe7a10028  swc1        $f1, 0x28($sp)
    ctx->pc = 0x36edd8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x36eddc: 0x460418c0  add.s       $f3, $f3, $f4
    ctx->pc = 0x36eddcu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
    // 0x36ede0: 0xe4830000  swc1        $f3, 0x0($a0)
    ctx->pc = 0x36ede0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x36ede4: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x36ede4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36ede8: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x36ede8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36edec: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x36edecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x36edf0: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x36edf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x36edf4: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x36edf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36edf8: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x36edf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36edfc: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x36edfcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x36ee00: 0xe4810008  swc1        $f1, 0x8($a0)
    ctx->pc = 0x36ee00u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x36ee04: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x36ee04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x36ee08: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x36ee08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36ee0c: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x36ee0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36ee10: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x36ee10u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x36ee14: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x36ee14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x36ee18: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x36ee18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36ee1c: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x36ee1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36ee20: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x36ee20u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x36ee24: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x36ee24u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x36ee28: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x36ee28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36ee2c: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x36ee2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36ee30: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x36ee30u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x36ee34: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x36ee34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x36ee38: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x36ee38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x36ee3c: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x36ee3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36ee40: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x36ee40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36ee44: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x36ee44u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x36ee48: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x36ee48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x36ee4c: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x36ee4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36ee50: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x36ee50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36ee54: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x36ee54u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x36ee58: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x36ee58u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x36ee5c: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x36ee5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36ee60: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x36ee60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36ee64: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x36ee64u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x36ee68: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x36ee68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x36ee6c: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x36ee6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x36ee70: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x36ee70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36ee74: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x36ee74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36ee78: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x36ee78u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x36ee7c: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x36ee7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x36ee80: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x36ee80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36ee84: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x36ee84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36ee88: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x36ee88u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x36ee8c: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x36ee8cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x36ee90: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x36ee90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36ee94: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x36ee94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36ee98: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x36ee98u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x36ee9c: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x36ee9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x36eea0: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x36eea0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x36eea4: 0x14e0ff96  bnez        $a3, . + 4 + (-0x6A << 2)
    ctx->pc = 0x36EEA4u;
    {
        const bool branch_taken_0x36eea4 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x36EEA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36EEA4u;
        // 0x36eea8: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36eea4) {
            ctx->pc = 0x36ED00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36ed00;
        }
    }
    ctx->pc = 0x36EEACu;
    // 0x36eeac: 0x0  nop
    ctx->pc = 0x36eeacu;
    // NOP
label_36eeb0:
    // 0x36eeb0: 0x3e00008  jr          $ra
    ctx->pc = 0x36EEB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36EEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36EEB0u;
        // 0x36eeb4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36EEB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36EEB8u;
}
