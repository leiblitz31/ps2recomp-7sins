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

// Function: sub_0040F458
// Address: 0x40f458 - 0x40f648
void sub_0040F458_0x40f458(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0040F458_0x40f458");
#endif

    switch (ctx->pc) {
        case 0x40f5dcu: goto label_40f5dc;
        case 0x40f5e8u: goto label_40f5e8;
        default: break;
    }

    ctx->pc = 0x40f458u;

    // 0x40f458: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x40f458u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x40f45c: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x40f45cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40f460: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x40f460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x40f464: 0x10c20022  beq         $a2, $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x40F464u;
    {
        const bool branch_taken_0x40f464 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x40F468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40F464u;
        // 0x40f468: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40f464) {
            ctx->pc = 0x40F4F0u;
            goto label_40f4f0;
        }
    }
    ctx->pc = 0x40F46Cu;
    // 0x40f46c: 0x10c00005  beqz        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x40F46Cu;
    {
        const bool branch_taken_0x40f46c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x40F470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40F46Cu;
        // 0x40f470: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40f46c) {
            ctx->pc = 0x40F484u;
            goto label_40f484;
        }
    }
    ctx->pc = 0x40F474u;
    // 0x40f474: 0x10c20047  beq         $a2, $v0, . + 4 + (0x47 << 2)
    ctx->pc = 0x40F474u;
    {
        const bool branch_taken_0x40f474 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x40F478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40F474u;
        // 0x40f478: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40f474) {
            ctx->pc = 0x40F594u;
            goto label_40f594;
        }
    }
    ctx->pc = 0x40F47Cu;
    // 0x40f47c: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x40F47Cu;
    {
        const bool branch_taken_0x40f47c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x40F480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40F47Cu;
        // 0x40f480: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40f47c) {
            ctx->pc = 0x40F5C8u;
            goto label_40f5c8;
        }
    }
    ctx->pc = 0x40F484u;
label_40f484:
    // 0x40f484: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x40f484u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x40f488: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x40f488u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x40f48c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x40f48cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x40f490: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x40f490u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x40f494: 0x34420003  ori         $v0, $v0, 0x3
    ctx->pc = 0x40f494u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
    // 0x40f498: 0x8ce3000c  lw          $v1, 0xC($a3)
    ctx->pc = 0x40f498u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x40f49c: 0xe4e10000  swc1        $f1, 0x0($a3)
    ctx->pc = 0x40f49cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
    // 0x40f4a0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x40f4a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x40f4a4: 0xe4e00030  swc1        $f0, 0x30($a3)
    ctx->pc = 0x40f4a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 48), bits); }
    // 0x40f4a8: 0xe4e10028  swc1        $f1, 0x28($a3)
    ctx->pc = 0x40f4a8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 40), bits); }
    // 0x40f4ac: 0xe4e10014  swc1        $f1, 0x14($a3)
    ctx->pc = 0x40f4acu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 20), bits); }
    // 0x40f4b0: 0xe4e00010  swc1        $f0, 0x10($a3)
    ctx->pc = 0x40f4b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 16), bits); }
    // 0x40f4b4: 0xe4e00008  swc1        $f0, 0x8($a3)
    ctx->pc = 0x40f4b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 8), bits); }
    // 0x40f4b8: 0xe4e00004  swc1        $f0, 0x4($a3)
    ctx->pc = 0x40f4b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
    // 0x40f4bc: 0xe4e00024  swc1        $f0, 0x24($a3)
    ctx->pc = 0x40f4bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 36), bits); }
    // 0x40f4c0: 0xe4e00020  swc1        $f0, 0x20($a3)
    ctx->pc = 0x40f4c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 32), bits); }
    // 0x40f4c4: 0xe4e00018  swc1        $f0, 0x18($a3)
    ctx->pc = 0x40f4c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 24), bits); }
    // 0x40f4c8: 0xe4e00038  swc1        $f0, 0x38($a3)
    ctx->pc = 0x40f4c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 56), bits); }
    // 0x40f4cc: 0xe4e00034  swc1        $f0, 0x34($a3)
    ctx->pc = 0x40f4ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 52), bits); }
    // 0x40f4d0: 0xace3000c  sw          $v1, 0xC($a3)
    ctx->pc = 0x40f4d0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 3));
    // 0x40f4d4: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x40f4d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x40f4d8: 0xe4e00030  swc1        $f0, 0x30($a3)
    ctx->pc = 0x40f4d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 48), bits); }
    // 0x40f4dc: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x40f4dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x40f4e0: 0xe4e10034  swc1        $f1, 0x34($a3)
    ctx->pc = 0x40f4e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 52), bits); }
    // 0x40f4e4: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x40f4e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x40f4e8: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x40F4E8u;
    {
        const bool branch_taken_0x40f4e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x40F4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40F4E8u;
        // 0x40f4ec: 0xe4e00038  swc1        $f0, 0x38($a3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 56), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x40f4e8) {
            ctx->pc = 0x40F5F0u;
            goto label_40f5f0;
        }
    }
    ctx->pc = 0x40F4F0u;
label_40f4f0:
    // 0x40f4f0: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x40f4f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x40f4f4: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x40f4f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x40f4f8: 0xc4e10000  lwc1        $f1, 0x0($a3)
    ctx->pc = 0x40f4f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x40f4fc: 0xc4e40010  lwc1        $f4, 0x10($a3)
    ctx->pc = 0x40f4fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x40f500: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x40f500u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x40f504: 0xc4a30008  lwc1        $f3, 0x8($a1)
    ctx->pc = 0x40f504u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x40f508: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x40f508u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x40f50c: 0xc4e10020  lwc1        $f1, 0x20($a3)
    ctx->pc = 0x40f50cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x40f510: 0xc4e40030  lwc1        $f4, 0x30($a3)
    ctx->pc = 0x40f510u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x40f514: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x40f514u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x40f518: 0xc4e60004  lwc1        $f6, 0x4($a3)
    ctx->pc = 0x40f518u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x40f51c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x40f51cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x40f520: 0xc4e70014  lwc1        $f7, 0x14($a3)
    ctx->pc = 0x40f520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x40f524: 0xc4e80024  lwc1        $f8, 0x24($a3)
    ctx->pc = 0x40f524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x40f528: 0xc4e50034  lwc1        $f5, 0x34($a3)
    ctx->pc = 0x40f528u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x40f52c: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x40f52cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x40f530: 0xc4e90008  lwc1        $f9, 0x8($a3)
    ctx->pc = 0x40f530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x40f534: 0xc4ea0018  lwc1        $f10, 0x18($a3)
    ctx->pc = 0x40f534u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x40f538: 0xc4eb0028  lwc1        $f11, 0x28($a3)
    ctx->pc = 0x40f538u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
    // 0x40f53c: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x40f53cu;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x40f540: 0xc4e30038  lwc1        $f3, 0x38($a3)
    ctx->pc = 0x40f540u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x40f544: 0xe4e40030  swc1        $f4, 0x30($a3)
    ctx->pc = 0x40f544u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 48), bits); }
    // 0x40f548: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x40f548u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x40f54c: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x40f54cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x40f550: 0x46060002  mul.s       $f0, $f0, $f6
    ctx->pc = 0x40f550u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x40f554: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x40f554u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x40f558: 0x46071082  mul.s       $f2, $f2, $f7
    ctx->pc = 0x40f558u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[7]);
    // 0x40f55c: 0x46080842  mul.s       $f1, $f1, $f8
    ctx->pc = 0x40f55cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[8]);
    // 0x40f560: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x40f560u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x40f564: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x40f564u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x40f568: 0x46002940  add.s       $f5, $f5, $f0
    ctx->pc = 0x40f568u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[0]);
    // 0x40f56c: 0xe4e50034  swc1        $f5, 0x34($a3)
    ctx->pc = 0x40f56cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 52), bits); }
    // 0x40f570: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x40f570u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x40f574: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x40f574u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x40f578: 0x46090002  mul.s       $f0, $f0, $f9
    ctx->pc = 0x40f578u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[9]);
    // 0x40f57c: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x40f57cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x40f580: 0x460a1082  mul.s       $f2, $f2, $f10
    ctx->pc = 0x40f580u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[10]);
    // 0x40f584: 0x460b0842  mul.s       $f1, $f1, $f11
    ctx->pc = 0x40f584u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[11]);
    // 0x40f588: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x40f588u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x40f58c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x40F58Cu;
    {
        const bool branch_taken_0x40f58c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x40F590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40F58Cu;
        // 0x40f590: 0x46010000  add.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x40f58c) {
            ctx->pc = 0x40F5BCu;
            goto label_40f5bc;
        }
    }
    ctx->pc = 0x40F594u;
label_40f594:
    // 0x40f594: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x40f594u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x40f598: 0xc4e00030  lwc1        $f0, 0x30($a3)
    ctx->pc = 0x40f598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x40f59c: 0xc4e20034  lwc1        $f2, 0x34($a3)
    ctx->pc = 0x40f59cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x40f5a0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x40f5a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x40f5a4: 0xc4e30038  lwc1        $f3, 0x38($a3)
    ctx->pc = 0x40f5a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x40f5a8: 0xe4e00030  swc1        $f0, 0x30($a3)
    ctx->pc = 0x40f5a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 48), bits); }
    // 0x40f5ac: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x40f5acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x40f5b0: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x40f5b0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x40f5b4: 0xe4e20034  swc1        $f2, 0x34($a3)
    ctx->pc = 0x40f5b4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 52), bits); }
    // 0x40f5b8: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x40f5b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_40f5bc:
    // 0x40f5bc: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x40f5bcu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x40f5c0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x40F5C0u;
    {
        const bool branch_taken_0x40f5c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x40F5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40F5C0u;
        // 0x40f5c4: 0xe4e30038  swc1        $f3, 0x38($a3) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 56), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x40f5c0) {
            ctx->pc = 0x40F5F0u;
            goto label_40f5f0;
        }
    }
    ctx->pc = 0x40F5C8u;
label_40f5c8:
    // 0x40f5c8: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x40f5c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x40f5cc: 0x24a50628  addiu       $a1, $a1, 0x628
    ctx->pc = 0x40f5ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1576));
    // 0x40f5d0: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x40f5d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x40f5d4: 0xc1035f6  jal         func_40D7D8
    ctx->pc = 0x40F5D4u;
    SET_GPR_U32(ctx, 31, 0x40F5DCu);
    ctx->pc = 0x40F5D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40F5D4u;
    // 0x40f5d8: 0x34840003  ori         $a0, $a0, 0x3 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)3);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x40F5D4u, 0x40F5DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40F5DCu;
label_40f5dc:
    // 0x40f5dc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x40f5dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40f5e0: 0xc103628  jal         func_40D8A0
    ctx->pc = 0x40F5E0u;
    SET_GPR_U32(ctx, 31, 0x40F5E8u);
    ctx->pc = 0x40F5E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40F5E0u;
    // 0x40f5e4: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x40F5E0u, 0x40F5E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40F5E8u;
label_40f5e8:
    // 0x40f5e8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x40f5e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40f5ec: 0x0  nop
    ctx->pc = 0x40f5ecu;
    // NOP
label_40f5f0:
    // 0x40f5f0: 0x8ce4000c  lw          $a0, 0xC($a3)
    ctx->pc = 0x40f5f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x40f5f4: 0x3c03fffd  lui         $v1, 0xFFFD
    ctx->pc = 0x40f5f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65533 << 16));
    // 0x40f5f8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x40f5f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x40f5fc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x40f5fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x40f600: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x40f600u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x40f604: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x40f604u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40f608: 0xace4000c  sw          $a0, 0xC($a3)
    ctx->pc = 0x40f608u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 4));
    // 0x40f60c: 0x3e00008  jr          $ra
    ctx->pc = 0x40F60Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x40F610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40F60Cu;
        // 0x40f610: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40F60Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x40F614u;
    // 0x40f614: 0x0  nop
    ctx->pc = 0x40f614u;
    // NOP
    // 0x40f618: 0x8f85bdc0  lw          $a1, -0x4240($gp)
    ctx->pc = 0x40f618u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950336)));
    // 0x40f61c: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x40f61cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x40f620: 0x2463e88c  addiu       $v1, $v1, -0x1774
    ctx->pc = 0x40f620u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961292));
    // 0x40f624: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x40f624u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x40f628: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x40f628u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x40f62c: 0x68a30007  ldl         $v1, 0x7($a1)
    ctx->pc = 0x40f62cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x40f630: 0x6ca30000  ldr         $v1, 0x0($a1)
    ctx->pc = 0x40f630u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x40f634: 0x8ca60008  lw          $a2, 0x8($a1)
    ctx->pc = 0x40f634u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x40f638: 0xb0830007  sdl         $v1, 0x7($a0)
    ctx->pc = 0x40f638u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x40f63c: 0xb4830000  sdr         $v1, 0x0($a0)
    ctx->pc = 0x40f63cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x40f640: 0x3e00008  jr          $ra
    ctx->pc = 0x40F640u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x40F644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40F640u;
        // 0x40f644: 0xac860008  sw          $a2, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40F640u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x40F648u;
}
