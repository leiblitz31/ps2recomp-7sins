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

// Function: sub_0040E578
// Address: 0x40e578 - 0x40e7a8
void sub_0040E578_0x40e578(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0040E578_0x40e578");
#endif

    ctx->pc = 0x40e578u;

    // 0x40e578: 0xc4a40014  lwc1        $f4, 0x14($a1)
    ctx->pc = 0x40e578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x40e57c: 0xc4a20028  lwc1        $f2, 0x28($a1)
    ctx->pc = 0x40e57cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x40e580: 0xc4a10024  lwc1        $f1, 0x24($a1)
    ctx->pc = 0x40e580u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x40e584: 0xc4a00018  lwc1        $f0, 0x18($a1)
    ctx->pc = 0x40e584u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x40e588: 0x46022102  mul.s       $f4, $f4, $f2
    ctx->pc = 0x40e588u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x40e58c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x40e58cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x40e590: 0x46002101  sub.s       $f4, $f4, $f0
    ctx->pc = 0x40e590u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
    // 0x40e594: 0xe4840000  swc1        $f4, 0x0($a0)
    ctx->pc = 0x40e594u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x40e598: 0xc4a20028  lwc1        $f2, 0x28($a1)
    ctx->pc = 0x40e598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x40e59c: 0xc4a10024  lwc1        $f1, 0x24($a1)
    ctx->pc = 0x40e59cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x40e5a0: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x40e5a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x40e5a4: 0xc4a30008  lwc1        $f3, 0x8($a1)
    ctx->pc = 0x40e5a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x40e5a8: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x40e5a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x40e5ac: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x40e5acu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x40e5b0: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x40e5b0u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x40e5b4: 0xe4830004  swc1        $f3, 0x4($a0)
    ctx->pc = 0x40e5b4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x40e5b8: 0xc4a50018  lwc1        $f5, 0x18($a1)
    ctx->pc = 0x40e5b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x40e5bc: 0xc4a20014  lwc1        $f2, 0x14($a1)
    ctx->pc = 0x40e5bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x40e5c0: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x40e5c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x40e5c4: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x40e5c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x40e5c8: 0x46050842  mul.s       $f1, $f1, $f5
    ctx->pc = 0x40e5c8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x40e5cc: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x40e5ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x40e5d0: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x40e5d0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x40e5d4: 0xe4810008  swc1        $f1, 0x8($a0)
    ctx->pc = 0x40e5d4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x40e5d8: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x40e5d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x40e5dc: 0xc4a50010  lwc1        $f5, 0x10($a1)
    ctx->pc = 0x40e5dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x40e5e0: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x40e5e0u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x40e5e4: 0xc4a20020  lwc1        $f2, 0x20($a1)
    ctx->pc = 0x40e5e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x40e5e8: 0x460518c2  mul.s       $f3, $f3, $f5
    ctx->pc = 0x40e5e8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
    // 0x40e5ec: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x40e5ecu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x40e5f0: 0x46032100  add.s       $f4, $f4, $f3
    ctx->pc = 0x40e5f0u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[3]);
    // 0x40e5f4: 0x46012100  add.s       $f4, $f4, $f1
    ctx->pc = 0x40e5f4u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[1]);
    // 0x40e5f8: 0x44022000  mfc1        $v0, $f4
    ctx->pc = 0x40e5f8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[4], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x40e5fc: 0x0  nop
    ctx->pc = 0x40e5fcu;
    // NOP
    // 0x40e600: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x40E600u;
    {
        const bool branch_taken_0x40e600 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x40E604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40E600u;
        // 0x40e604: 0xc4890000  lwc1        $f9, 0x0($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x40e600) {
            ctx->pc = 0x40E620u;
            goto label_40e620;
        }
    }
    ctx->pc = 0x40E608u;
    // 0x40e608: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x40e608u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x40e60c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x40e60cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x40e610: 0x46040303  div.s       $f12, $f0, $f4
    ctx->pc = 0x40e610u;
    { if (ctx->f[4] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[0], ctx->f[4]); }
    // 0x40e614: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x40E614u;
    {
        const bool branch_taken_0x40e614 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x40E618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40E614u;
        // 0x40e618: 0xc48a0004  lwc1        $f10, 0x4($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x40e614) {
            ctx->pc = 0x40E62Cu;
            goto label_40e62c;
        }
    }
    ctx->pc = 0x40E61Cu;
    // 0x40e61c: 0x0  nop
    ctx->pc = 0x40e61cu;
    // NOP
label_40e620:
    // 0x40e620: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x40e620u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x40e624: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x40e624u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x40e628: 0xc48a0004  lwc1        $f10, 0x4($a0)
    ctx->pc = 0x40e628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
label_40e62c:
    // 0x40e62c: 0xc48b0008  lwc1        $f11, 0x8($a0)
    ctx->pc = 0x40e62cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
    // 0x40e630: 0x460c4a42  mul.s       $f9, $f9, $f12
    ctx->pc = 0x40e630u;
    ctx->f[9] = FPU_MUL_S(ctx->f[9], ctx->f[12]);
    // 0x40e634: 0x460c5282  mul.s       $f10, $f10, $f12
    ctx->pc = 0x40e634u;
    ctx->f[10] = FPU_MUL_S(ctx->f[10], ctx->f[12]);
    // 0x40e638: 0x460c5ac2  mul.s       $f11, $f11, $f12
    ctx->pc = 0x40e638u;
    ctx->f[11] = FPU_MUL_S(ctx->f[11], ctx->f[12]);
    // 0x40e63c: 0xe4890000  swc1        $f9, 0x0($a0)
    ctx->pc = 0x40e63cu;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x40e640: 0xe48a0004  swc1        $f10, 0x4($a0)
    ctx->pc = 0x40e640u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x40e644: 0xe48b0008  swc1        $f11, 0x8($a0)
    ctx->pc = 0x40e644u;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x40e648: 0xc4a20028  lwc1        $f2, 0x28($a1)
    ctx->pc = 0x40e648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x40e64c: 0xc4a10020  lwc1        $f1, 0x20($a1)
    ctx->pc = 0x40e64cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x40e650: 0xc4a00010  lwc1        $f0, 0x10($a1)
    ctx->pc = 0x40e650u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x40e654: 0xc4a60018  lwc1        $f6, 0x18($a1)
    ctx->pc = 0x40e654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x40e658: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x40e658u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x40e65c: 0x46013182  mul.s       $f6, $f6, $f1
    ctx->pc = 0x40e65cu;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[1]);
    // 0x40e660: 0x46003181  sub.s       $f6, $f6, $f0
    ctx->pc = 0x40e660u;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[0]);
    // 0x40e664: 0x460c3182  mul.s       $f6, $f6, $f12
    ctx->pc = 0x40e664u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[12]);
    // 0x40e668: 0xe4860010  swc1        $f6, 0x10($a0)
    ctx->pc = 0x40e668u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x40e66c: 0xc4a20028  lwc1        $f2, 0x28($a1)
    ctx->pc = 0x40e66cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x40e670: 0xc4a10020  lwc1        $f1, 0x20($a1)
    ctx->pc = 0x40e670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x40e674: 0xc4a80000  lwc1        $f8, 0x0($a1)
    ctx->pc = 0x40e674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x40e678: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x40e678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x40e67c: 0x46024202  mul.s       $f8, $f8, $f2
    ctx->pc = 0x40e67cu;
    ctx->f[8] = FPU_MUL_S(ctx->f[8], ctx->f[2]);
    // 0x40e680: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x40e680u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x40e684: 0x46004201  sub.s       $f8, $f8, $f0
    ctx->pc = 0x40e684u;
    ctx->f[8] = FPU_SUB_S(ctx->f[8], ctx->f[0]);
    // 0x40e688: 0x460c4202  mul.s       $f8, $f8, $f12
    ctx->pc = 0x40e688u;
    ctx->f[8] = FPU_MUL_S(ctx->f[8], ctx->f[12]);
    // 0x40e68c: 0xe4880014  swc1        $f8, 0x14($a0)
    ctx->pc = 0x40e68cu;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x40e690: 0xc4a20018  lwc1        $f2, 0x18($a1)
    ctx->pc = 0x40e690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x40e694: 0xc4a10010  lwc1        $f1, 0x10($a1)
    ctx->pc = 0x40e694u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x40e698: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x40e698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x40e69c: 0xc4a70008  lwc1        $f7, 0x8($a1)
    ctx->pc = 0x40e69cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x40e6a0: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x40e6a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x40e6a4: 0x460139c2  mul.s       $f7, $f7, $f1
    ctx->pc = 0x40e6a4u;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[1]);
    // 0x40e6a8: 0x460039c1  sub.s       $f7, $f7, $f0
    ctx->pc = 0x40e6a8u;
    ctx->f[7] = FPU_SUB_S(ctx->f[7], ctx->f[0]);
    // 0x40e6ac: 0x460c39c2  mul.s       $f7, $f7, $f12
    ctx->pc = 0x40e6acu;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[12]);
    // 0x40e6b0: 0xe4870018  swc1        $f7, 0x18($a0)
    ctx->pc = 0x40e6b0u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x40e6b4: 0xc4a20024  lwc1        $f2, 0x24($a1)
    ctx->pc = 0x40e6b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x40e6b8: 0xc4a10020  lwc1        $f1, 0x20($a1)
    ctx->pc = 0x40e6b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x40e6bc: 0xc4a40010  lwc1        $f4, 0x10($a1)
    ctx->pc = 0x40e6bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x40e6c0: 0xc4a00014  lwc1        $f0, 0x14($a1)
    ctx->pc = 0x40e6c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x40e6c4: 0x46022102  mul.s       $f4, $f4, $f2
    ctx->pc = 0x40e6c4u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x40e6c8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x40e6c8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x40e6cc: 0x46002101  sub.s       $f4, $f4, $f0
    ctx->pc = 0x40e6ccu;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
    // 0x40e6d0: 0x460c2102  mul.s       $f4, $f4, $f12
    ctx->pc = 0x40e6d0u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[12]);
    // 0x40e6d4: 0xe4840020  swc1        $f4, 0x20($a0)
    ctx->pc = 0x40e6d4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
    // 0x40e6d8: 0xc4a20024  lwc1        $f2, 0x24($a1)
    ctx->pc = 0x40e6d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x40e6dc: 0xc4a10020  lwc1        $f1, 0x20($a1)
    ctx->pc = 0x40e6dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x40e6e0: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x40e6e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x40e6e4: 0xc4a30004  lwc1        $f3, 0x4($a1)
    ctx->pc = 0x40e6e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x40e6e8: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x40e6e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x40e6ec: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x40e6ecu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x40e6f0: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x40e6f0u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x40e6f4: 0x460c18c2  mul.s       $f3, $f3, $f12
    ctx->pc = 0x40e6f4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[12]);
    // 0x40e6f8: 0xe4830024  swc1        $f3, 0x24($a0)
    ctx->pc = 0x40e6f8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
    // 0x40e6fc: 0xc4a50000  lwc1        $f5, 0x0($a1)
    ctx->pc = 0x40e6fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x40e700: 0xc4a20014  lwc1        $f2, 0x14($a1)
    ctx->pc = 0x40e700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x40e704: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x40e704u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x40e708: 0xc4a10010  lwc1        $f1, 0x10($a1)
    ctx->pc = 0x40e708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x40e70c: 0x46022942  mul.s       $f5, $f5, $f2
    ctx->pc = 0x40e70cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x40e710: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x40e710u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x40e714: 0x46002941  sub.s       $f5, $f5, $f0
    ctx->pc = 0x40e714u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
    // 0x40e718: 0x460c2942  mul.s       $f5, $f5, $f12
    ctx->pc = 0x40e718u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[12]);
    // 0x40e71c: 0xe4850028  swc1        $f5, 0x28($a0)
    ctx->pc = 0x40e71cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 40), bits); }
    // 0x40e720: 0xc4a10030  lwc1        $f1, 0x30($a1)
    ctx->pc = 0x40e720u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x40e724: 0xc4a20034  lwc1        $f2, 0x34($a1)
    ctx->pc = 0x40e724u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x40e728: 0x46090842  mul.s       $f1, $f1, $f9
    ctx->pc = 0x40e728u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[9]);
    // 0x40e72c: 0xc4a00038  lwc1        $f0, 0x38($a1)
    ctx->pc = 0x40e72cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x40e730: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x40e730u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40e734: 0x46061082  mul.s       $f2, $f2, $f6
    ctx->pc = 0x40e734u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[6]);
    // 0x40e738: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x40e738u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x40e73c: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x40e73cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x40e740: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x40e740u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x40e744: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x40e744u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x40e748: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x40e748u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x40e74c: 0xe4810030  swc1        $f1, 0x30($a0)
    ctx->pc = 0x40e74cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 48), bits); }
    // 0x40e750: 0xc4a00030  lwc1        $f0, 0x30($a1)
    ctx->pc = 0x40e750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x40e754: 0xc4a20034  lwc1        $f2, 0x34($a1)
    ctx->pc = 0x40e754u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x40e758: 0x460a0002  mul.s       $f0, $f0, $f10
    ctx->pc = 0x40e758u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[10]);
    // 0x40e75c: 0xc4a10038  lwc1        $f1, 0x38($a1)
    ctx->pc = 0x40e75cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x40e760: 0x46081082  mul.s       $f2, $f2, $f8
    ctx->pc = 0x40e760u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[8]);
    // 0x40e764: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x40e764u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x40e768: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x40e768u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x40e76c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x40e76cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x40e770: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x40e770u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x40e774: 0xe4800034  swc1        $f0, 0x34($a0)
    ctx->pc = 0x40e774u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 52), bits); }
    // 0x40e778: 0xc4a10030  lwc1        $f1, 0x30($a1)
    ctx->pc = 0x40e778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x40e77c: 0xc4a20034  lwc1        $f2, 0x34($a1)
    ctx->pc = 0x40e77cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x40e780: 0x460b0842  mul.s       $f1, $f1, $f11
    ctx->pc = 0x40e780u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[11]);
    // 0x40e784: 0xc4a00038  lwc1        $f0, 0x38($a1)
    ctx->pc = 0x40e784u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x40e788: 0x46071082  mul.s       $f2, $f2, $f7
    ctx->pc = 0x40e788u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[7]);
    // 0x40e78c: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x40e78cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x40e790: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x40e790u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x40e794: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x40e794u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x40e798: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x40e798u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x40e79c: 0x3e00008  jr          $ra
    ctx->pc = 0x40E79Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x40E7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40E79Cu;
        // 0x40e7a0: 0xe4810038  swc1        $f1, 0x38($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 56), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40E79Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x40E7A4u;
    // 0x40e7a4: 0x0  nop
    ctx->pc = 0x40e7a4u;
    // NOP
    ctx->pc = 0x40e7a8u;
}
