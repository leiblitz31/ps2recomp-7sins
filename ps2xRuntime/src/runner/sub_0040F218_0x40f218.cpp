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

// Function: sub_0040F218
// Address: 0x40f218 - 0x40f458
void sub_0040F218_0x40f218(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0040F218_0x40f218");
#endif

    switch (ctx->pc) {
        case 0x40f420u: goto label_40f420;
        case 0x40f42cu: goto label_40f42c;
        default: break;
    }

    ctx->pc = 0x40f218u;

    // 0x40f218: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x40f218u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x40f21c: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x40f21cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40f220: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x40f220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x40f224: 0x10c20022  beq         $a2, $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x40F224u;
    {
        const bool branch_taken_0x40f224 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x40F228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40F224u;
        // 0x40f228: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40f224) {
            ctx->pc = 0x40F2B0u;
            goto label_40f2b0;
        }
    }
    ctx->pc = 0x40F22Cu;
    // 0x40f22c: 0x10c00005  beqz        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x40F22Cu;
    {
        const bool branch_taken_0x40f22c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x40F230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40F22Cu;
        // 0x40f230: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40f22c) {
            ctx->pc = 0x40F244u;
            goto label_40f244;
        }
    }
    ctx->pc = 0x40F234u;
    // 0x40f234: 0x10c20044  beq         $a2, $v0, . + 4 + (0x44 << 2)
    ctx->pc = 0x40F234u;
    {
        const bool branch_taken_0x40f234 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x40F238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40F234u;
        // 0x40f238: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40f234) {
            ctx->pc = 0x40F348u;
            goto label_40f348;
        }
    }
    ctx->pc = 0x40F23Cu;
    // 0x40f23c: 0x10000073  b           . + 4 + (0x73 << 2)
    ctx->pc = 0x40F23Cu;
    {
        const bool branch_taken_0x40f23c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x40F240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40F23Cu;
        // 0x40f240: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40f23c) {
            ctx->pc = 0x40F40Cu;
            goto label_40f40c;
        }
    }
    ctx->pc = 0x40F244u;
label_40f244:
    // 0x40f244: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x40f244u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x40f248: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x40f248u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x40f24c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x40f24cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x40f250: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x40f250u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x40f254: 0x34420003  ori         $v0, $v0, 0x3
    ctx->pc = 0x40f254u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
    // 0x40f258: 0x8ce3000c  lw          $v1, 0xC($a3)
    ctx->pc = 0x40f258u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x40f25c: 0xe4e10000  swc1        $f1, 0x0($a3)
    ctx->pc = 0x40f25cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
    // 0x40f260: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x40f260u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x40f264: 0xe4e00030  swc1        $f0, 0x30($a3)
    ctx->pc = 0x40f264u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 48), bits); }
    // 0x40f268: 0xe4e10028  swc1        $f1, 0x28($a3)
    ctx->pc = 0x40f268u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 40), bits); }
    // 0x40f26c: 0xe4e10014  swc1        $f1, 0x14($a3)
    ctx->pc = 0x40f26cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 20), bits); }
    // 0x40f270: 0xe4e00010  swc1        $f0, 0x10($a3)
    ctx->pc = 0x40f270u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 16), bits); }
    // 0x40f274: 0xe4e00008  swc1        $f0, 0x8($a3)
    ctx->pc = 0x40f274u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 8), bits); }
    // 0x40f278: 0xe4e00004  swc1        $f0, 0x4($a3)
    ctx->pc = 0x40f278u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
    // 0x40f27c: 0xe4e00024  swc1        $f0, 0x24($a3)
    ctx->pc = 0x40f27cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 36), bits); }
    // 0x40f280: 0xe4e00020  swc1        $f0, 0x20($a3)
    ctx->pc = 0x40f280u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 32), bits); }
    // 0x40f284: 0xe4e00018  swc1        $f0, 0x18($a3)
    ctx->pc = 0x40f284u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 24), bits); }
    // 0x40f288: 0xe4e00038  swc1        $f0, 0x38($a3)
    ctx->pc = 0x40f288u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 56), bits); }
    // 0x40f28c: 0xe4e00034  swc1        $f0, 0x34($a3)
    ctx->pc = 0x40f28cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 52), bits); }
    // 0x40f290: 0xace3000c  sw          $v1, 0xC($a3)
    ctx->pc = 0x40f290u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 3));
    // 0x40f294: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x40f294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x40f298: 0xe4e00000  swc1        $f0, 0x0($a3)
    ctx->pc = 0x40f298u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
    // 0x40f29c: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x40f29cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x40f2a0: 0xe4e10014  swc1        $f1, 0x14($a3)
    ctx->pc = 0x40f2a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 20), bits); }
    // 0x40f2a4: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x40f2a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x40f2a8: 0x10000061  b           . + 4 + (0x61 << 2)
    ctx->pc = 0x40F2A8u;
    {
        const bool branch_taken_0x40f2a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x40F2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40F2A8u;
        // 0x40f2ac: 0xe4e00028  swc1        $f0, 0x28($a3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 40), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x40f2a8) {
            ctx->pc = 0x40F430u;
            goto label_40f430;
        }
    }
    ctx->pc = 0x40F2B0u;
label_40f2b0:
    // 0x40f2b0: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x40f2b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x40f2b4: 0xc4e10000  lwc1        $f1, 0x0($a3)
    ctx->pc = 0x40f2b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x40f2b8: 0xc4e20004  lwc1        $f2, 0x4($a3)
    ctx->pc = 0x40f2b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x40f2bc: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x40f2bcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x40f2c0: 0xc4e30008  lwc1        $f3, 0x8($a3)
    ctx->pc = 0x40f2c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x40f2c4: 0xe4e10000  swc1        $f1, 0x0($a3)
    ctx->pc = 0x40f2c4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
    // 0x40f2c8: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x40f2c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x40f2cc: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x40f2ccu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x40f2d0: 0xe4e20004  swc1        $f2, 0x4($a3)
    ctx->pc = 0x40f2d0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
    // 0x40f2d4: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x40f2d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x40f2d8: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x40f2d8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x40f2dc: 0xe4e30008  swc1        $f3, 0x8($a3)
    ctx->pc = 0x40f2dcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 8), bits); }
    // 0x40f2e0: 0xc4e10010  lwc1        $f1, 0x10($a3)
    ctx->pc = 0x40f2e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x40f2e4: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x40f2e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x40f2e8: 0xc4e20014  lwc1        $f2, 0x14($a3)
    ctx->pc = 0x40f2e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x40f2ec: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x40f2ecu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x40f2f0: 0xc4e30018  lwc1        $f3, 0x18($a3)
    ctx->pc = 0x40f2f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x40f2f4: 0xe4e10010  swc1        $f1, 0x10($a3)
    ctx->pc = 0x40f2f4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 16), bits); }
    // 0x40f2f8: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x40f2f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x40f2fc: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x40f2fcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x40f300: 0xe4e20014  swc1        $f2, 0x14($a3)
    ctx->pc = 0x40f300u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 20), bits); }
    // 0x40f304: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x40f304u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x40f308: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x40f308u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x40f30c: 0xe4e30018  swc1        $f3, 0x18($a3)
    ctx->pc = 0x40f30cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 24), bits); }
    // 0x40f310: 0xc4e10020  lwc1        $f1, 0x20($a3)
    ctx->pc = 0x40f310u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x40f314: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x40f314u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x40f318: 0xc4e20024  lwc1        $f2, 0x24($a3)
    ctx->pc = 0x40f318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x40f31c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x40f31cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x40f320: 0xc4e30028  lwc1        $f3, 0x28($a3)
    ctx->pc = 0x40f320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x40f324: 0xe4e10020  swc1        $f1, 0x20($a3)
    ctx->pc = 0x40f324u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 32), bits); }
    // 0x40f328: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x40f328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x40f32c: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x40f32cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x40f330: 0xe4e20024  swc1        $f2, 0x24($a3)
    ctx->pc = 0x40f330u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 36), bits); }
    // 0x40f334: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x40f334u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x40f338: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x40f338u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x40f33c: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x40F33Cu;
    {
        const bool branch_taken_0x40f33c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x40F340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40F33Cu;
        // 0x40f340: 0xe4e30028  swc1        $f3, 0x28($a3) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 40), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x40f33c) {
            ctx->pc = 0x40F430u;
            goto label_40f430;
        }
    }
    ctx->pc = 0x40F344u;
    // 0x40f344: 0x0  nop
    ctx->pc = 0x40f344u;
    // NOP
label_40f348:
    // 0x40f348: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x40f348u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x40f34c: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x40f34cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x40f350: 0xc4e20004  lwc1        $f2, 0x4($a3)
    ctx->pc = 0x40f350u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x40f354: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x40f354u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x40f358: 0xc4e30008  lwc1        $f3, 0x8($a3)
    ctx->pc = 0x40f358u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x40f35c: 0xc4e10010  lwc1        $f1, 0x10($a3)
    ctx->pc = 0x40f35cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x40f360: 0xc4e40014  lwc1        $f4, 0x14($a3)
    ctx->pc = 0x40f360u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x40f364: 0xe4e00000  swc1        $f0, 0x0($a3)
    ctx->pc = 0x40f364u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
    // 0x40f368: 0xc4e50018  lwc1        $f5, 0x18($a3)
    ctx->pc = 0x40f368u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x40f36c: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x40f36cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x40f370: 0xc4e60020  lwc1        $f6, 0x20($a3)
    ctx->pc = 0x40f370u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x40f374: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x40f374u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x40f378: 0xc4e70024  lwc1        $f7, 0x24($a3)
    ctx->pc = 0x40f378u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x40f37c: 0xc4e80028  lwc1        $f8, 0x28($a3)
    ctx->pc = 0x40f37cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x40f380: 0xc4e90030  lwc1        $f9, 0x30($a3)
    ctx->pc = 0x40f380u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x40f384: 0xe4e20004  swc1        $f2, 0x4($a3)
    ctx->pc = 0x40f384u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
    // 0x40f388: 0xc4ea0034  lwc1        $f10, 0x34($a3)
    ctx->pc = 0x40f388u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x40f38c: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x40f38cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x40f390: 0xc4e20038  lwc1        $f2, 0x38($a3)
    ctx->pc = 0x40f390u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x40f394: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x40f394u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x40f398: 0xe4e30008  swc1        $f3, 0x8($a3)
    ctx->pc = 0x40f398u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 8), bits); }
    // 0x40f39c: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x40f39cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x40f3a0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x40f3a0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x40f3a4: 0xe4e10010  swc1        $f1, 0x10($a3)
    ctx->pc = 0x40f3a4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 16), bits); }
    // 0x40f3a8: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x40f3a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x40f3ac: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x40f3acu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x40f3b0: 0xe4e40014  swc1        $f4, 0x14($a3)
    ctx->pc = 0x40f3b0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 20), bits); }
    // 0x40f3b4: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x40f3b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x40f3b8: 0x46002942  mul.s       $f5, $f5, $f0
    ctx->pc = 0x40f3b8u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x40f3bc: 0xe4e50018  swc1        $f5, 0x18($a3)
    ctx->pc = 0x40f3bcu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 24), bits); }
    // 0x40f3c0: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x40f3c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x40f3c4: 0x46003182  mul.s       $f6, $f6, $f0
    ctx->pc = 0x40f3c4u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x40f3c8: 0xe4e60020  swc1        $f6, 0x20($a3)
    ctx->pc = 0x40f3c8u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 32), bits); }
    // 0x40f3cc: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x40f3ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x40f3d0: 0x460039c2  mul.s       $f7, $f7, $f0
    ctx->pc = 0x40f3d0u;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[0]);
    // 0x40f3d4: 0xe4e70024  swc1        $f7, 0x24($a3)
    ctx->pc = 0x40f3d4u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 36), bits); }
    // 0x40f3d8: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x40f3d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x40f3dc: 0x46004202  mul.s       $f8, $f8, $f0
    ctx->pc = 0x40f3dcu;
    ctx->f[8] = FPU_MUL_S(ctx->f[8], ctx->f[0]);
    // 0x40f3e0: 0xe4e80028  swc1        $f8, 0x28($a3)
    ctx->pc = 0x40f3e0u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 40), bits); }
    // 0x40f3e4: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x40f3e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x40f3e8: 0x46004a42  mul.s       $f9, $f9, $f0
    ctx->pc = 0x40f3e8u;
    ctx->f[9] = FPU_MUL_S(ctx->f[9], ctx->f[0]);
    // 0x40f3ec: 0xe4e90030  swc1        $f9, 0x30($a3)
    ctx->pc = 0x40f3ecu;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 48), bits); }
    // 0x40f3f0: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x40f3f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x40f3f4: 0x46005282  mul.s       $f10, $f10, $f0
    ctx->pc = 0x40f3f4u;
    ctx->f[10] = FPU_MUL_S(ctx->f[10], ctx->f[0]);
    // 0x40f3f8: 0xe4ea0034  swc1        $f10, 0x34($a3)
    ctx->pc = 0x40f3f8u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 52), bits); }
    // 0x40f3fc: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x40f3fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x40f400: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x40f400u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x40f404: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x40F404u;
    {
        const bool branch_taken_0x40f404 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x40F408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40F404u;
        // 0x40f408: 0xe4e20038  swc1        $f2, 0x38($a3) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 56), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x40f404) {
            ctx->pc = 0x40F430u;
            goto label_40f430;
        }
    }
    ctx->pc = 0x40F40Cu;
label_40f40c:
    // 0x40f40c: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x40f40cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x40f410: 0x24a50628  addiu       $a1, $a1, 0x628
    ctx->pc = 0x40f410u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1576));
    // 0x40f414: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x40f414u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x40f418: 0xc1035f6  jal         func_40D7D8
    ctx->pc = 0x40F418u;
    SET_GPR_U32(ctx, 31, 0x40F420u);
    ctx->pc = 0x40F41Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40F418u;
    // 0x40f41c: 0x34840003  ori         $a0, $a0, 0x3 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)3);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x40F418u, 0x40F420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40F420u;
label_40f420:
    // 0x40f420: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x40f420u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40f424: 0xc103628  jal         func_40D8A0
    ctx->pc = 0x40F424u;
    SET_GPR_U32(ctx, 31, 0x40F42Cu);
    ctx->pc = 0x40F428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40F424u;
    // 0x40f428: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x40F424u, 0x40F42Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40F42Cu;
label_40f42c:
    // 0x40f42c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x40f42cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_40f430:
    // 0x40f430: 0x8ce4000c  lw          $a0, 0xC($a3)
    ctx->pc = 0x40f430u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x40f434: 0x3c03fffd  lui         $v1, 0xFFFD
    ctx->pc = 0x40f434u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65533 << 16));
    // 0x40f438: 0x3463fffc  ori         $v1, $v1, 0xFFFC
    ctx->pc = 0x40f438u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65532);
    // 0x40f43c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x40f43cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x40f440: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x40f440u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x40f444: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x40f444u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40f448: 0xace4000c  sw          $a0, 0xC($a3)
    ctx->pc = 0x40f448u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 4));
    // 0x40f44c: 0x3e00008  jr          $ra
    ctx->pc = 0x40F44Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x40F450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40F44Cu;
        // 0x40f450: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40F44Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x40F454u;
    // 0x40f454: 0x0  nop
    ctx->pc = 0x40f454u;
    // NOP
    ctx->pc = 0x40f458u;
}
