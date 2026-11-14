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

// Function: sub_00424980
// Address: 0x424980 - 0x424aa8
void sub_00424980_0x424980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00424980_0x424980");
#endif

    ctx->pc = 0x424980u;

    // 0x424980: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x424980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x424984: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x424984u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x424988: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x424988u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x42498c: 0x46000881  sub.s       $f2, $f1, $f0
    ctx->pc = 0x42498cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x424990: 0xe4820000  swc1        $f2, 0x0($a0)
    ctx->pc = 0x424990u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x424994: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x424994u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x424998: 0xc4c00004  lwc1        $f0, 0x4($a2)
    ctx->pc = 0x424998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x42499c: 0x46000901  sub.s       $f4, $f1, $f0
    ctx->pc = 0x42499cu;
    ctx->f[4] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x4249a0: 0xe4840004  swc1        $f4, 0x4($a0)
    ctx->pc = 0x4249a0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x4249a4: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x4249a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4249a8: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x4249a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4249ac: 0x46000941  sub.s       $f5, $f1, $f0
    ctx->pc = 0x4249acu;
    ctx->f[5] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x4249b0: 0xe4850008  swc1        $f5, 0x8($a0)
    ctx->pc = 0x4249b0u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x4249b4: 0xc4a1000c  lwc1        $f1, 0xC($a1)
    ctx->pc = 0x4249b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4249b8: 0xc4c0000c  lwc1        $f0, 0xC($a2)
    ctx->pc = 0x4249b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4249bc: 0x46000981  sub.s       $f6, $f1, $f0
    ctx->pc = 0x4249bcu;
    ctx->f[6] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x4249c0: 0xe486000c  swc1        $f6, 0xC($a0)
    ctx->pc = 0x4249c0u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x4249c4: 0xc4a10010  lwc1        $f1, 0x10($a1)
    ctx->pc = 0x4249c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4249c8: 0xc4c00010  lwc1        $f0, 0x10($a2)
    ctx->pc = 0x4249c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4249cc: 0x460009c1  sub.s       $f7, $f1, $f0
    ctx->pc = 0x4249ccu;
    ctx->f[7] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x4249d0: 0xe4870010  swc1        $f7, 0x10($a0)
    ctx->pc = 0x4249d0u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x4249d4: 0xc4a10014  lwc1        $f1, 0x14($a1)
    ctx->pc = 0x4249d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4249d8: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x4249d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x4249dc: 0xc4c00014  lwc1        $f0, 0x14($a2)
    ctx->pc = 0x4249dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4249e0: 0x46021834  c.lt.s      $f3, $f2
    ctx->pc = 0x4249e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4249e4: 0x46000a81  sub.s       $f10, $f1, $f0
    ctx->pc = 0x4249e4u;
    ctx->f[10] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x4249e8: 0x4500002d  bc1f        . + 4 + (0x2D << 2)
    ctx->pc = 0x4249E8u;
    {
        const bool branch_taken_0x4249e8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x4249ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4249E8u;
        // 0x4249ec: 0xe48a0014  swc1        $f10, 0x14($a0) (Delay Slot)
        { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4249e8) {
            ctx->pc = 0x424AA0u;
            goto label_424aa0;
        }
    }
    ctx->pc = 0x4249F0u;
    // 0x4249f0: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x4249f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4249f4: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x4249f4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4249f8: 0x45000029  bc1f        . + 4 + (0x29 << 2)
    ctx->pc = 0x4249F8u;
    {
        const bool branch_taken_0x4249f8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4249f8) {
            ctx->pc = 0x424AA0u;
            goto label_424aa0;
        }
    }
    ctx->pc = 0x424A00u;
    // 0x424a00: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x424a00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x424a04: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x424a04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x424a08: 0x46024243  div.s       $f9, $f8, $f2
    ctx->pc = 0x424a08u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[9] = FPU_DIV_S(ctx->f[8], ctx->f[2]); }
    // 0x424a0c: 0x46004203  div.s       $f8, $f8, $f0
    ctx->pc = 0x424a0cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[8] = FPU_DIV_S(ctx->f[8], ctx->f[0]); }
    // 0x424a10: 0xc4c00004  lwc1        $f0, 0x4($a2)
    ctx->pc = 0x424a10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x424a14: 0xc4c30010  lwc1        $f3, 0x10($a2)
    ctx->pc = 0x424a14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x424a18: 0x46080002  mul.s       $f0, $f0, $f8
    ctx->pc = 0x424a18u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[8]);
    // 0x424a1c: 0xc4c10008  lwc1        $f1, 0x8($a2)
    ctx->pc = 0x424a1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x424a20: 0xc4c2000c  lwc1        $f2, 0xC($a2)
    ctx->pc = 0x424a20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x424a24: 0x460818c2  mul.s       $f3, $f3, $f8
    ctx->pc = 0x424a24u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[8]);
    // 0x424a28: 0x46080842  mul.s       $f1, $f1, $f8
    ctx->pc = 0x424a28u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[8]);
    // 0x424a2c: 0x46081082  mul.s       $f2, $f2, $f8
    ctx->pc = 0x424a2cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[8]);
    // 0x424a30: 0x46092102  mul.s       $f4, $f4, $f9
    ctx->pc = 0x424a30u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[9]);
    // 0x424a34: 0x46092942  mul.s       $f5, $f5, $f9
    ctx->pc = 0x424a34u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[9]);
    // 0x424a38: 0xe7a40010  swc1        $f4, 0x10($sp)
    ctx->pc = 0x424a38u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x424a3c: 0x46093182  mul.s       $f6, $f6, $f9
    ctx->pc = 0x424a3cu;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[9]);
    // 0x424a40: 0x460939c2  mul.s       $f7, $f7, $f9
    ctx->pc = 0x424a40u;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[9]);
    // 0x424a44: 0xe7a50014  swc1        $f5, 0x14($sp)
    ctx->pc = 0x424a44u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x424a48: 0xe7a60018  swc1        $f6, 0x18($sp)
    ctx->pc = 0x424a48u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x424a4c: 0xe7a7001c  swc1        $f7, 0x1C($sp)
    ctx->pc = 0x424a4cu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x424a50: 0x46040001  sub.s       $f0, $f0, $f4
    ctx->pc = 0x424a50u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x424a54: 0x46050841  sub.s       $f1, $f1, $f5
    ctx->pc = 0x424a54u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[5]);
    // 0x424a58: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x424a58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x424a5c: 0x46061081  sub.s       $f2, $f2, $f6
    ctx->pc = 0x424a5cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[6]);
    // 0x424a60: 0x460718c1  sub.s       $f3, $f3, $f7
    ctx->pc = 0x424a60u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[7]);
    // 0x424a64: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x424a64u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x424a68: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x424a68u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x424a6c: 0xe7a3000c  swc1        $f3, 0xC($sp)
    ctx->pc = 0x424a6cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x424a70: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x424a70u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x424a74: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x424a74u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x424a78: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x424a78u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x424a7c: 0x460318c2  mul.s       $f3, $f3, $f3
    ctx->pc = 0x424a7cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x424a80: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x424a80u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x424a84: 0x46094200  add.s       $f8, $f8, $f9
    ctx->pc = 0x424a84u;
    ctx->f[8] = FPU_ADD_S(ctx->f[8], ctx->f[9]);
    // 0x424a88: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x424a88u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x424a8c: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x424a8cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x424a90: 0x46080003  div.s       $f0, $f0, $f8
    ctx->pc = 0x424a90u;
    { if (ctx->f[8] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[8]); }
    // 0x424a94: 0x46005001  sub.s       $f0, $f10, $f0
    ctx->pc = 0x424a94u;
    ctx->f[0] = FPU_SUB_S(ctx->f[10], ctx->f[0]);
    // 0x424a98: 0xe4800014  swc1        $f0, 0x14($a0)
    ctx->pc = 0x424a98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x424a9c: 0x0  nop
    ctx->pc = 0x424a9cu;
    // NOP
label_424aa0:
    // 0x424aa0: 0x3e00008  jr          $ra
    ctx->pc = 0x424AA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x424AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x424AA0u;
        // 0x424aa4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x424AA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x424AA8u;
}
