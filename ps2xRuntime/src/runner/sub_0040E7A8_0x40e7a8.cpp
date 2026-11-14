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

// Function: sub_0040E7A8
// Address: 0x40e7a8 - 0x40e920
void sub_0040E7A8_0x40e7a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0040E7A8_0x40e7a8");
#endif

    ctx->pc = 0x40e7a8u;

    // 0x40e7a8: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x40e7a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40e7ac: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x40e7acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x40e7b0: 0xc4410014  lwc1        $f1, 0x14($v0)
    ctx->pc = 0x40e7b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x40e7b4: 0x46030834  c.lt.s      $f1, $f3
    ctx->pc = 0x40e7b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x40e7b8: 0x0  nop
    ctx->pc = 0x40e7b8u;
    // NOP
    // 0x40e7bc: 0x4500001a  bc1f        . + 4 + (0x1A << 2)
    ctx->pc = 0x40E7BCu;
    {
        const bool branch_taken_0x40e7bc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x40E7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40E7BCu;
        // 0x40e7c0: 0x27bdfff0  addiu       $sp, $sp, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40e7bc) {
            ctx->pc = 0x40E828u;
            goto label_40e828;
        }
    }
    ctx->pc = 0x40E7C4u;
    // 0x40e7c4: 0xc4410028  lwc1        $f1, 0x28($v0)
    ctx->pc = 0x40e7c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x40e7c8: 0x46030834  c.lt.s      $f1, $f3
    ctx->pc = 0x40e7c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x40e7cc: 0x0  nop
    ctx->pc = 0x40e7ccu;
    // NOP
    // 0x40e7d0: 0x4502000f  bc1fl       . + 4 + (0xF << 2)
    ctx->pc = 0x40E7D0u;
    {
        const bool branch_taken_0x40e7d0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x40e7d0) {
            ctx->pc = 0x40E7D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x40E7D0u;
            // 0x40e7d4: 0xc4420020  lwc1        $f2, 0x20($v0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x40E810u;
            goto label_40e810;
        }
    }
    ctx->pc = 0x40E7D8u;
    // 0x40e7d8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x40e7d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x40e7dc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x40e7dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x40e7e0: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x40e7e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x40e7e4: 0x46001800  add.s       $f0, $f3, $f0
    ctx->pc = 0x40e7e4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x40e7e8: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x40e7e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x40e7ec: 0xc4430010  lwc1        $f3, 0x10($v0)
    ctx->pc = 0x40e7ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x40e7f0: 0xc4440020  lwc1        $f4, 0x20($v0)
    ctx->pc = 0x40e7f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x40e7f4: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x40e7f4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x40e7f8: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x40e7f8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x40e7fc: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x40e7fcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x40e800: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x40e800u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x40e804: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x40e804u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x40e808: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x40E808u;
    {
        const bool branch_taken_0x40e808 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x40E80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40E808u;
        // 0x40e80c: 0xe7a10008  swc1        $f1, 0x8($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x40e808) {
            ctx->pc = 0x40E8A4u;
            goto label_40e8a4;
        }
    }
    ctx->pc = 0x40E810u;
label_40e810:
    // 0x40e810: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x40e810u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x40e814: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x40e814u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x40e818: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x40e818u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x40e81c: 0xc4430008  lwc1        $f3, 0x8($v0)
    ctx->pc = 0x40e81cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x40e820: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x40E820u;
    {
        const bool branch_taken_0x40e820 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x40E824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40E820u;
        // 0x40e824: 0xc4410024  lwc1        $f1, 0x24($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x40e820) {
            ctx->pc = 0x40E888u;
            goto label_40e888;
        }
    }
    ctx->pc = 0x40E828u;
label_40e828:
    // 0x40e828: 0xc4430028  lwc1        $f3, 0x28($v0)
    ctx->pc = 0x40e828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x40e82c: 0x46011834  c.lt.s      $f3, $f1
    ctx->pc = 0x40e82cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x40e830: 0x0  nop
    ctx->pc = 0x40e830u;
    // NOP
    // 0x40e834: 0x4502000f  bc1fl       . + 4 + (0xF << 2)
    ctx->pc = 0x40E834u;
    {
        const bool branch_taken_0x40e834 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x40e834) {
            ctx->pc = 0x40E838u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x40E834u;
            // 0x40e838: 0xc4420020  lwc1        $f2, 0x20($v0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x40E874u;
            goto label_40e874;
        }
    }
    ctx->pc = 0x40E83Cu;
    // 0x40e83c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x40e83cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x40e840: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x40e840u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x40e844: 0xc4420018  lwc1        $f2, 0x18($v0)
    ctx->pc = 0x40e844u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x40e848: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x40e848u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x40e84c: 0xc4430024  lwc1        $f3, 0x24($v0)
    ctx->pc = 0x40e84cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x40e850: 0xc4410010  lwc1        $f1, 0x10($v0)
    ctx->pc = 0x40e850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x40e854: 0xc4440004  lwc1        $f4, 0x4($v0)
    ctx->pc = 0x40e854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x40e858: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x40e858u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x40e85c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x40e85cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x40e860: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x40e860u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x40e864: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x40e864u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x40e868: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x40e868u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x40e86c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x40E86Cu;
    {
        const bool branch_taken_0x40e86c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x40E870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40E86Cu;
        // 0x40e870: 0xe7a10000  swc1        $f1, 0x0($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x40e86c) {
            ctx->pc = 0x40E8A4u;
            goto label_40e8a4;
        }
    }
    ctx->pc = 0x40E874u;
label_40e874:
    // 0x40e874: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x40e874u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x40e878: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x40e878u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x40e87c: 0x46001800  add.s       $f0, $f3, $f0
    ctx->pc = 0x40e87cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x40e880: 0xc4410024  lwc1        $f1, 0x24($v0)
    ctx->pc = 0x40e880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x40e884: 0xc4430008  lwc1        $f3, 0x8($v0)
    ctx->pc = 0x40e884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_40e888:
    // 0x40e888: 0xc4440018  lwc1        $f4, 0x18($v0)
    ctx->pc = 0x40e888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x40e88c: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x40e88cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x40e890: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x40e890u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x40e894: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x40e894u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x40e898: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x40e898u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x40e89c: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x40e89cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x40e8a0: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x40e8a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_40e8a4:
    // 0x40e8a4: 0xc7a30000  lwc1        $f3, 0x0($sp)
    ctx->pc = 0x40e8a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x40e8a8: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x40e8a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x40e8ac: 0x46031842  mul.s       $f1, $f3, $f3
    ctx->pc = 0x40e8acu;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x40e8b0: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x40e8b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x40e8b4: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x40e8b4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x40e8b8: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x40e8b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x40e8bc: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x40e8bcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x40e8c0: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x40e8c0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x40e8c4: 0x46010044  c1          0x10044
    ctx->pc = 0x40e8c4u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x40e8c8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x40e8c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x40e8cc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x40e8ccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x40e8d0: 0x0  nop
    ctx->pc = 0x40e8d0u;
    // NOP
    // 0x40e8d4: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x40E8D4u;
    {
        const bool branch_taken_0x40e8d4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x40E8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40E8D4u;
        // 0x40e8d8: 0x46000906  mov.s       $f4, $f1 (Delay Slot)
        ctx->f[4] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x40e8d4) {
            ctx->pc = 0x40E8F0u;
            goto label_40e8f0;
        }
    }
    ctx->pc = 0x40E8DCu;
    // 0x40e8dc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x40e8dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x40e8e0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x40e8e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x40e8e4: 0x46010103  div.s       $f4, $f0, $f1
    ctx->pc = 0x40e8e4u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x40e8e8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x40E8E8u;
    {
        const bool branch_taken_0x40e8e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x40E8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40E8E8u;
        // 0x40e8ec: 0xc7a00004  lwc1        $f0, 0x4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x40e8e8) {
            ctx->pc = 0x40E8F8u;
            goto label_40e8f8;
        }
    }
    ctx->pc = 0x40E8F0u;
label_40e8f0:
    // 0x40e8f0: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x40e8f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x40e8f4: 0x0  nop
    ctx->pc = 0x40e8f4u;
    // NOP
label_40e8f8:
    // 0x40e8f8: 0x46041882  mul.s       $f2, $f3, $f4
    ctx->pc = 0x40e8f8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x40e8fc: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x40e8fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x40e900: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x40e900u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x40e904: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x40e904u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x40e908: 0xe4a20000  swc1        $f2, 0x0($a1)
    ctx->pc = 0x40e908u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x40e90c: 0xe4a00004  swc1        $f0, 0x4($a1)
    ctx->pc = 0x40e90cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x40e910: 0xe4a10008  swc1        $f1, 0x8($a1)
    ctx->pc = 0x40e910u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x40e914: 0x3e00008  jr          $ra
    ctx->pc = 0x40E914u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x40E918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40E914u;
        // 0x40e918: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40E914u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x40E91Cu;
    // 0x40e91c: 0x0  nop
    ctx->pc = 0x40e91cu;
    // NOP
    ctx->pc = 0x40e920u;
}
