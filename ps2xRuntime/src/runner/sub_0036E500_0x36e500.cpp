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

// Function: sub_0036E500
// Address: 0x36e500 - 0x36e7a0
void sub_0036E500_0x36e500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036E500_0x36e500");
#endif

    switch (ctx->pc) {
        case 0x36e578u: goto label_36e578;
        default: break;
    }

    ctx->pc = 0x36e500u;

    // 0x36e500: 0xc504006c  lwc1        $f4, 0x6C($t0)
    ctx->pc = 0x36e500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x36e504: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x36e504u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x36e508: 0xc5000068  lwc1        $f0, 0x68($t0)
    ctx->pc = 0x36e508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36e50c: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x36e50cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36e510: 0xc4c20004  lwc1        $f2, 0x4($a2)
    ctx->pc = 0x36e510u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x36e514: 0xc4a30000  lwc1        $f3, 0x0($a1)
    ctx->pc = 0x36e514u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x36e518: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x36e518u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x36e51c: 0xc4c50000  lwc1        $f5, 0x0($a2)
    ctx->pc = 0x36e51cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x36e520: 0x46022082  mul.s       $f2, $f4, $f2
    ctx->pc = 0x36e520u;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x36e524: 0xc4a60008  lwc1        $f6, 0x8($a1)
    ctx->pc = 0x36e524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x36e528: 0x460300c2  mul.s       $f3, $f0, $f3
    ctx->pc = 0x36e528u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x36e52c: 0xc4c70008  lwc1        $f7, 0x8($a2)
    ctx->pc = 0x36e52cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x36e530: 0x46052142  mul.s       $f5, $f4, $f5
    ctx->pc = 0x36e530u;
    ctx->f[5] = FPU_MUL_S(ctx->f[4], ctx->f[5]);
    // 0x36e534: 0x46060002  mul.s       $f0, $f0, $f6
    ctx->pc = 0x36e534u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x36e538: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x36e538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x36e53c: 0x46072102  mul.s       $f4, $f4, $f7
    ctx->pc = 0x36e53cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[7]);
    // 0x36e540: 0x8d0a0008  lw          $t2, 0x8($t0)
    ctx->pc = 0x36e540u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x36e544: 0x8d03001c  lw          $v1, 0x1C($t0)
    ctx->pc = 0x36e544u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 28)));
    // 0x36e548: 0x460518c0  add.s       $f3, $f3, $f5
    ctx->pc = 0x36e548u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[5]);
    // 0x36e54c: 0x8d090020  lw          $t1, 0x20($t0)
    ctx->pc = 0x36e54cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 32)));
    // 0x36e550: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x36e550u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x36e554: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x36e554u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x36e558: 0x8c880004  lw          $t0, 0x4($a0)
    ctx->pc = 0x36e558u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x36e55c: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x36e55cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x36e560: 0xe7a30020  swc1        $f3, 0x20($sp)
    ctx->pc = 0x36e560u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x36e564: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x36e564u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x36e568: 0x18e0008a  blez        $a3, . + 4 + (0x8A << 2)
    ctx->pc = 0x36E568u;
    {
        const bool branch_taken_0x36e568 = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x36E56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E568u;
        // 0x36e56c: 0xe7a00028  swc1        $f0, 0x28($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x36e568) {
            ctx->pc = 0x36E794u;
            goto label_36e794;
        }
    }
    ctx->pc = 0x36E570u;
    // 0x36e570: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x36e570u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x36e574: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x36e574u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
label_36e578:
    // 0x36e578: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x36e578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36e57c: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x36e57cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x36e580: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x36e580u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36e584: 0x46080842  mul.s       $f1, $f1, $f8
    ctx->pc = 0x36e584u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[8]);
    // 0x36e588: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x36e588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x36e58c: 0xc4a40008  lwc1        $f4, 0x8($a1)
    ctx->pc = 0x36e58cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x36e590: 0xc4c50004  lwc1        $f5, 0x4($a2)
    ctx->pc = 0x36e590u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x36e594: 0x46081082  mul.s       $f2, $f2, $f8
    ctx->pc = 0x36e594u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[8]);
    // 0x36e598: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x36e598u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x36e59c: 0xc4c60008  lwc1        $f6, 0x8($a2)
    ctx->pc = 0x36e59cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x36e5a0: 0x46082102  mul.s       $f4, $f4, $f8
    ctx->pc = 0x36e5a0u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[8]);
    // 0x36e5a4: 0xc4c30000  lwc1        $f3, 0x0($a2)
    ctx->pc = 0x36e5a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x36e5a8: 0x46082942  mul.s       $f5, $f5, $f8
    ctx->pc = 0x36e5a8u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[8]);
    // 0x36e5ac: 0xc7a70020  lwc1        $f7, 0x20($sp)
    ctx->pc = 0x36e5acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x36e5b0: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x36e5b0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x36e5b4: 0x460818c2  mul.s       $f3, $f3, $f8
    ctx->pc = 0x36e5b4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[8]);
    // 0x36e5b8: 0x46083182  mul.s       $f6, $f6, $f8
    ctx->pc = 0x36e5b8u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[8]);
    // 0x36e5bc: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x36e5bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36e5c0: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x36e5c0u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x36e5c4: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x36e5c4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x36e5c8: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x36e5c8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x36e5cc: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x36e5ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36e5d0: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x36e5d0u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x36e5d4: 0xe7a40008  swc1        $f4, 0x8($sp)
    ctx->pc = 0x36e5d4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x36e5d8: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x36e5d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36e5dc: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x36e5dcu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x36e5e0: 0xe7a30010  swc1        $f3, 0x10($sp)
    ctx->pc = 0x36e5e0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x36e5e4: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x36e5e4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x36e5e8: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x36e5e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36e5ec: 0x46002942  mul.s       $f5, $f5, $f0
    ctx->pc = 0x36e5ecu;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x36e5f0: 0xe7a50014  swc1        $f5, 0x14($sp)
    ctx->pc = 0x36e5f0u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x36e5f4: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x36e5f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36e5f8: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x36e5f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x36e5fc: 0x46003182  mul.s       $f6, $f6, $f0
    ctx->pc = 0x36e5fcu;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x36e600: 0xe7a60018  swc1        $f6, 0x18($sp)
    ctx->pc = 0x36e600u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x36e604: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x36e604u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36e608: 0x46070000  add.s       $f0, $f0, $f7
    ctx->pc = 0x36e608u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[7]);
    // 0x36e60c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x36e60cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x36e610: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x36e610u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x36e614: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x36e614u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36e618: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x36e618u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36e61c: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x36e61cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x36e620: 0xc7a20024  lwc1        $f2, 0x24($sp)
    ctx->pc = 0x36e620u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x36e624: 0xc7a30014  lwc1        $f3, 0x14($sp)
    ctx->pc = 0x36e624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x36e628: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x36e628u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x36e62c: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x36e62cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x36e630: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x36e630u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x36e634: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x36e634u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x36e638: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x36e638u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36e63c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x36e63cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36e640: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x36e640u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x36e644: 0xc7a20028  lwc1        $f2, 0x28($sp)
    ctx->pc = 0x36e644u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x36e648: 0xc7a30018  lwc1        $f3, 0x18($sp)
    ctx->pc = 0x36e648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x36e64c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x36e64cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x36e650: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x36e650u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x36e654: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x36e654u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x36e658: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x36e658u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x36e65c: 0x882021  addu        $a0, $a0, $t0
    ctx->pc = 0x36e65cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x36e660: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x36e660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36e664: 0xc7a30020  lwc1        $f3, 0x20($sp)
    ctx->pc = 0x36e664u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x36e668: 0xc7a20010  lwc1        $f2, 0x10($sp)
    ctx->pc = 0x36e668u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x36e66c: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x36e66cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36e670: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x36e670u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x36e674: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x36e674u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x36e678: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x36e678u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x36e67c: 0xe4810000  swc1        $f1, 0x0($a0)
    ctx->pc = 0x36e67cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x36e680: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x36e680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x36e684: 0xc7a30024  lwc1        $f3, 0x24($sp)
    ctx->pc = 0x36e684u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x36e688: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x36e688u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36e68c: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x36e68cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36e690: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x36e690u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x36e694: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x36e694u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x36e698: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x36e698u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x36e69c: 0xe4820004  swc1        $f2, 0x4($a0)
    ctx->pc = 0x36e69cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x36e6a0: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x36e6a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36e6a4: 0xc7a30028  lwc1        $f3, 0x28($sp)
    ctx->pc = 0x36e6a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x36e6a8: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x36e6a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x36e6ac: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x36e6acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36e6b0: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x36e6b0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x36e6b4: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x36e6b4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x36e6b8: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x36e6b8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x36e6bc: 0xe4810008  swc1        $f1, 0x8($a0)
    ctx->pc = 0x36e6bcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x36e6c0: 0x882021  addu        $a0, $a0, $t0
    ctx->pc = 0x36e6c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x36e6c4: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x36e6c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36e6c8: 0xc7a30020  lwc1        $f3, 0x20($sp)
    ctx->pc = 0x36e6c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x36e6cc: 0xc7a20010  lwc1        $f2, 0x10($sp)
    ctx->pc = 0x36e6ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x36e6d0: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x36e6d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36e6d4: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x36e6d4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x36e6d8: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x36e6d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x36e6dc: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x36e6dcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x36e6e0: 0xe4810000  swc1        $f1, 0x0($a0)
    ctx->pc = 0x36e6e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x36e6e4: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x36e6e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x36e6e8: 0xc7a30024  lwc1        $f3, 0x24($sp)
    ctx->pc = 0x36e6e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x36e6ec: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x36e6ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36e6f0: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x36e6f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36e6f4: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x36e6f4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x36e6f8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x36e6f8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x36e6fc: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x36e6fcu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x36e700: 0xe4820004  swc1        $f2, 0x4($a0)
    ctx->pc = 0x36e700u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x36e704: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x36e704u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36e708: 0xc7a30028  lwc1        $f3, 0x28($sp)
    ctx->pc = 0x36e708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x36e70c: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x36e70cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x36e710: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x36e710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36e714: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x36e714u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x36e718: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x36e718u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x36e71c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x36e71cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x36e720: 0xe4810008  swc1        $f1, 0x8($a0)
    ctx->pc = 0x36e720u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x36e724: 0x882021  addu        $a0, $a0, $t0
    ctx->pc = 0x36e724u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x36e728: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x36e728u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36e72c: 0xc7a20020  lwc1        $f2, 0x20($sp)
    ctx->pc = 0x36e72cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x36e730: 0xc7a30000  lwc1        $f3, 0x0($sp)
    ctx->pc = 0x36e730u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x36e734: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x36e734u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36e738: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x36e738u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x36e73c: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x36e73cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x36e740: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x36e740u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x36e744: 0xe4810000  swc1        $f1, 0x0($a0)
    ctx->pc = 0x36e744u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x36e748: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x36e748u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x36e74c: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x36e74cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36e750: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x36e750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x36e754: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x36e754u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36e758: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x36e758u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x36e75c: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x36e75cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x36e760: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x36e760u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x36e764: 0xe4820004  swc1        $f2, 0x4($a0)
    ctx->pc = 0x36e764u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x36e768: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x36e768u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36e76c: 0xc7a30028  lwc1        $f3, 0x28($sp)
    ctx->pc = 0x36e76cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x36e770: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x36e770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x36e774: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x36e774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x36e778: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x36e778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36e77c: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x36e77cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x36e780: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x36e780u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x36e784: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x36e784u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x36e788: 0xe4810008  swc1        $f1, 0x8($a0)
    ctx->pc = 0x36e788u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x36e78c: 0x14e0ff7a  bnez        $a3, . + 4 + (-0x86 << 2)
    ctx->pc = 0x36E78Cu;
    {
        const bool branch_taken_0x36e78c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x36E790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E78Cu;
        // 0x36e790: 0x882021  addu        $a0, $a0, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36e78c) {
            ctx->pc = 0x36E578u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36e578;
        }
    }
    ctx->pc = 0x36E794u;
label_36e794:
    // 0x36e794: 0x3e00008  jr          $ra
    ctx->pc = 0x36E794u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36E798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E794u;
        // 0x36e798: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36E794u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36E79Cu;
    // 0x36e79c: 0x0  nop
    ctx->pc = 0x36e79cu;
    // NOP
    ctx->pc = 0x36e7a0u;
}
