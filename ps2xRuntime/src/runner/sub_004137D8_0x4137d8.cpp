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

// Function: sub_004137D8
// Address: 0x4137d8 - 0x4139f0
void sub_004137D8_0x4137d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004137D8_0x4137d8");
#endif

    switch (ctx->pc) {
        case 0x4138a8u: goto label_4138a8;
        default: break;
    }

    ctx->pc = 0x4137d8u;

    // 0x4137d8: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x4137d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x4137dc: 0x4c00082  bltz        $a2, . + 4 + (0x82 << 2)
    ctx->pc = 0x4137DCu;
    {
        const bool branch_taken_0x4137dc = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x4137E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4137DCu;
        // 0x4137e0: 0x61027  nor         $v0, $zero, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4137dc) {
            ctx->pc = 0x4139E8u;
            goto label_4139e8;
        }
    }
    ctx->pc = 0x4137E4u;
    // 0x4137e4: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x4137e4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4137e8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x4137e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x4137ec: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x4137ECu;
    {
        const bool branch_taken_0x4137ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4137F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4137ECu;
        // 0x4137f0: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4137ec) {
            ctx->pc = 0x413894u;
            goto label_413894;
        }
    }
    ctx->pc = 0x4137F4u;
    // 0x4137f4: 0xc4aa0000  lwc1        $f10, 0x0($a1)
    ctx->pc = 0x4137f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x4137f8: 0x24a8000c  addiu       $t0, $a1, 0xC
    ctx->pc = 0x4137f8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
    // 0x4137fc: 0xc4e10000  lwc1        $f1, 0x0($a3)
    ctx->pc = 0x4137fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x413800: 0x2483000c  addiu       $v1, $a0, 0xC
    ctx->pc = 0x413800u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
    // 0x413804: 0xc4e20004  lwc1        $f2, 0x4($a3)
    ctx->pc = 0x413804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x413808: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x413808u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x41380c: 0xc4e30008  lwc1        $f3, 0x8($a3)
    ctx->pc = 0x41380cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x413810: 0x46015042  mul.s       $f1, $f10, $f1
    ctx->pc = 0x413810u;
    ctx->f[1] = FPU_MUL_S(ctx->f[10], ctx->f[1]);
    // 0x413814: 0x46025082  mul.s       $f2, $f10, $f2
    ctx->pc = 0x413814u;
    ctx->f[2] = FPU_MUL_S(ctx->f[10], ctx->f[2]);
    // 0x413818: 0xc4e60010  lwc1        $f6, 0x10($a3)
    ctx->pc = 0x413818u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x41381c: 0x460350c2  mul.s       $f3, $f10, $f3
    ctx->pc = 0x41381cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[10], ctx->f[3]);
    // 0x413820: 0xc4e80014  lwc1        $f8, 0x14($a3)
    ctx->pc = 0x413820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x413824: 0xc4aa0004  lwc1        $f10, 0x4($a1)
    ctx->pc = 0x413824u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x413828: 0xc4e40018  lwc1        $f4, 0x18($a3)
    ctx->pc = 0x413828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x41382c: 0x46065182  mul.s       $f6, $f10, $f6
    ctx->pc = 0x41382cu;
    ctx->f[6] = FPU_MUL_S(ctx->f[10], ctx->f[6]);
    // 0x413830: 0xc4e70020  lwc1        $f7, 0x20($a3)
    ctx->pc = 0x413830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x413834: 0x46045102  mul.s       $f4, $f10, $f4
    ctx->pc = 0x413834u;
    ctx->f[4] = FPU_MUL_S(ctx->f[10], ctx->f[4]);
    // 0x413838: 0xc4e90030  lwc1        $f9, 0x30($a3)
    ctx->pc = 0x413838u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x41383c: 0x46085202  mul.s       $f8, $f10, $f8
    ctx->pc = 0x41383cu;
    ctx->f[8] = FPU_MUL_S(ctx->f[10], ctx->f[8]);
    // 0x413840: 0xc4e50024  lwc1        $f5, 0x24($a3)
    ctx->pc = 0x413840u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x413844: 0xc4aa0008  lwc1        $f10, 0x8($a1)
    ctx->pc = 0x413844u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x413848: 0x46060840  add.s       $f1, $f1, $f6
    ctx->pc = 0x413848u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[6]);
    // 0x41384c: 0xc4e00028  lwc1        $f0, 0x28($a3)
    ctx->pc = 0x41384cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x413850: 0x460418c0  add.s       $f3, $f3, $f4
    ctx->pc = 0x413850u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
    // 0x413854: 0x460751c2  mul.s       $f7, $f10, $f7
    ctx->pc = 0x413854u;
    ctx->f[7] = FPU_MUL_S(ctx->f[10], ctx->f[7]);
    // 0x413858: 0x46005002  mul.s       $f0, $f10, $f0
    ctx->pc = 0x413858u;
    ctx->f[0] = FPU_MUL_S(ctx->f[10], ctx->f[0]);
    // 0x41385c: 0x46081080  add.s       $f2, $f2, $f8
    ctx->pc = 0x41385cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[8]);
    // 0x413860: 0x46070840  add.s       $f1, $f1, $f7
    ctx->pc = 0x413860u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[7]);
    // 0x413864: 0x46055142  mul.s       $f5, $f10, $f5
    ctx->pc = 0x413864u;
    ctx->f[5] = FPU_MUL_S(ctx->f[10], ctx->f[5]);
    // 0x413868: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x413868u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x41386c: 0x46090840  add.s       $f1, $f1, $f9
    ctx->pc = 0x41386cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[9]);
    // 0x413870: 0x46051080  add.s       $f2, $f2, $f5
    ctx->pc = 0x413870u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[5]);
    // 0x413874: 0xe4810000  swc1        $f1, 0x0($a0)
    ctx->pc = 0x413874u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x413878: 0xc4e00034  lwc1        $f0, 0x34($a3)
    ctx->pc = 0x413878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x41387c: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x41387cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x413880: 0xe4820004  swc1        $f2, 0x4($a0)
    ctx->pc = 0x413880u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x413884: 0xc4e00038  lwc1        $f0, 0x38($a3)
    ctx->pc = 0x413884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x413888: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x413888u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x41388c: 0x4c00056  bltz        $a2, . + 4 + (0x56 << 2)
    ctx->pc = 0x41388Cu;
    {
        const bool branch_taken_0x41388c = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x413890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41388Cu;
        // 0x413890: 0xe4830008  swc1        $f3, 0x8($a0) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x41388c) {
            ctx->pc = 0x4139E8u;
            goto label_4139e8;
        }
    }
    ctx->pc = 0x413894u;
label_413894:
    // 0x413894: 0x100102d  daddu       $v0, $t0, $zero
    ctx->pc = 0x413894u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x413898: 0x60502d  daddu       $t2, $v1, $zero
    ctx->pc = 0x413898u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41389c: 0x60482d  daddu       $t1, $v1, $zero
    ctx->pc = 0x41389cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4138a0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4138a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4138a4: 0x0  nop
    ctx->pc = 0x4138a4u;
    // NOP
label_4138a8:
    // 0x4138a8: 0xc4aa0000  lwc1        $f10, 0x0($a1)
    ctx->pc = 0x4138a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x4138ac: 0x24c6fffe  addiu       $a2, $a2, -0x2
    ctx->pc = 0x4138acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967294));
    // 0x4138b0: 0xc4e10000  lwc1        $f1, 0x0($a3)
    ctx->pc = 0x4138b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4138b4: 0xc4e20004  lwc1        $f2, 0x4($a3)
    ctx->pc = 0x4138b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4138b8: 0xc4e30008  lwc1        $f3, 0x8($a3)
    ctx->pc = 0x4138b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x4138bc: 0x46015042  mul.s       $f1, $f10, $f1
    ctx->pc = 0x4138bcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[10], ctx->f[1]);
    // 0x4138c0: 0x46025082  mul.s       $f2, $f10, $f2
    ctx->pc = 0x4138c0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[10], ctx->f[2]);
    // 0x4138c4: 0xc4e60010  lwc1        $f6, 0x10($a3)
    ctx->pc = 0x4138c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x4138c8: 0x460350c2  mul.s       $f3, $f10, $f3
    ctx->pc = 0x4138c8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[10], ctx->f[3]);
    // 0x4138cc: 0xc4e80014  lwc1        $f8, 0x14($a3)
    ctx->pc = 0x4138ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x4138d0: 0xc50a0004  lwc1        $f10, 0x4($t0)
    ctx->pc = 0x4138d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x4138d4: 0xc4e40018  lwc1        $f4, 0x18($a3)
    ctx->pc = 0x4138d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x4138d8: 0x46065182  mul.s       $f6, $f10, $f6
    ctx->pc = 0x4138d8u;
    ctx->f[6] = FPU_MUL_S(ctx->f[10], ctx->f[6]);
    // 0x4138dc: 0xc4e70020  lwc1        $f7, 0x20($a3)
    ctx->pc = 0x4138dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x4138e0: 0x46045102  mul.s       $f4, $f10, $f4
    ctx->pc = 0x4138e0u;
    ctx->f[4] = FPU_MUL_S(ctx->f[10], ctx->f[4]);
    // 0x4138e4: 0xc4e90030  lwc1        $f9, 0x30($a3)
    ctx->pc = 0x4138e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x4138e8: 0x46085202  mul.s       $f8, $f10, $f8
    ctx->pc = 0x4138e8u;
    ctx->f[8] = FPU_MUL_S(ctx->f[10], ctx->f[8]);
    // 0x4138ec: 0xc4e50024  lwc1        $f5, 0x24($a3)
    ctx->pc = 0x4138ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x4138f0: 0xc44a0008  lwc1        $f10, 0x8($v0)
    ctx->pc = 0x4138f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x4138f4: 0x46060840  add.s       $f1, $f1, $f6
    ctx->pc = 0x4138f4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[6]);
    // 0x4138f8: 0xc4e00028  lwc1        $f0, 0x28($a3)
    ctx->pc = 0x4138f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4138fc: 0x460418c0  add.s       $f3, $f3, $f4
    ctx->pc = 0x4138fcu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
    // 0x413900: 0x460751c2  mul.s       $f7, $f10, $f7
    ctx->pc = 0x413900u;
    ctx->f[7] = FPU_MUL_S(ctx->f[10], ctx->f[7]);
    // 0x413904: 0x46055142  mul.s       $f5, $f10, $f5
    ctx->pc = 0x413904u;
    ctx->f[5] = FPU_MUL_S(ctx->f[10], ctx->f[5]);
    // 0x413908: 0x46005002  mul.s       $f0, $f10, $f0
    ctx->pc = 0x413908u;
    ctx->f[0] = FPU_MUL_S(ctx->f[10], ctx->f[0]);
    // 0x41390c: 0x46070840  add.s       $f1, $f1, $f7
    ctx->pc = 0x41390cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[7]);
    // 0x413910: 0x46081080  add.s       $f2, $f2, $f8
    ctx->pc = 0x413910u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[8]);
    // 0x413914: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x413914u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x413918: 0x46090840  add.s       $f1, $f1, $f9
    ctx->pc = 0x413918u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[9]);
    // 0x41391c: 0x46051080  add.s       $f2, $f2, $f5
    ctx->pc = 0x41391cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[5]);
    // 0x413920: 0xe5210000  swc1        $f1, 0x0($t1)
    ctx->pc = 0x413920u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 0), bits); }
    // 0x413924: 0xc4e00034  lwc1        $f0, 0x34($a3)
    ctx->pc = 0x413924u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x413928: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x413928u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x41392c: 0xe5420004  swc1        $f2, 0x4($t2)
    ctx->pc = 0x41392cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 4), bits); }
    // 0x413930: 0xc4e00038  lwc1        $f0, 0x38($a3)
    ctx->pc = 0x413930u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x413934: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x413934u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x413938: 0xe4630008  swc1        $f3, 0x8($v1)
    ctx->pc = 0x413938u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x41393c: 0xc4aa000c  lwc1        $f10, 0xC($a1)
    ctx->pc = 0x41393cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x413940: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x413940u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x413944: 0x24a50018  addiu       $a1, $a1, 0x18
    ctx->pc = 0x413944u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24));
    // 0x413948: 0xc4e10004  lwc1        $f1, 0x4($a3)
    ctx->pc = 0x413948u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x41394c: 0xc4e30008  lwc1        $f3, 0x8($a3)
    ctx->pc = 0x41394cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x413950: 0x46005002  mul.s       $f0, $f10, $f0
    ctx->pc = 0x413950u;
    ctx->f[0] = FPU_MUL_S(ctx->f[10], ctx->f[0]);
    // 0x413954: 0x46015042  mul.s       $f1, $f10, $f1
    ctx->pc = 0x413954u;
    ctx->f[1] = FPU_MUL_S(ctx->f[10], ctx->f[1]);
    // 0x413958: 0xc4e60010  lwc1        $f6, 0x10($a3)
    ctx->pc = 0x413958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x41395c: 0x460350c2  mul.s       $f3, $f10, $f3
    ctx->pc = 0x41395cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[10], ctx->f[3]);
    // 0x413960: 0xc4e80014  lwc1        $f8, 0x14($a3)
    ctx->pc = 0x413960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x413964: 0xc50a0010  lwc1        $f10, 0x10($t0)
    ctx->pc = 0x413964u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x413968: 0xc4e40018  lwc1        $f4, 0x18($a3)
    ctx->pc = 0x413968u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x41396c: 0x25080018  addiu       $t0, $t0, 0x18
    ctx->pc = 0x41396cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 24));
    // 0x413970: 0x46065182  mul.s       $f6, $f10, $f6
    ctx->pc = 0x413970u;
    ctx->f[6] = FPU_MUL_S(ctx->f[10], ctx->f[6]);
    // 0x413974: 0xc4e70020  lwc1        $f7, 0x20($a3)
    ctx->pc = 0x413974u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x413978: 0x46045102  mul.s       $f4, $f10, $f4
    ctx->pc = 0x413978u;
    ctx->f[4] = FPU_MUL_S(ctx->f[10], ctx->f[4]);
    // 0x41397c: 0xc4e90030  lwc1        $f9, 0x30($a3)
    ctx->pc = 0x41397cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x413980: 0x46085202  mul.s       $f8, $f10, $f8
    ctx->pc = 0x413980u;
    ctx->f[8] = FPU_MUL_S(ctx->f[10], ctx->f[8]);
    // 0x413984: 0xc4e50024  lwc1        $f5, 0x24($a3)
    ctx->pc = 0x413984u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x413988: 0xc44a0014  lwc1        $f10, 0x14($v0)
    ctx->pc = 0x413988u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x41398c: 0x46060000  add.s       $f0, $f0, $f6
    ctx->pc = 0x41398cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[6]);
    // 0x413990: 0xc4e20028  lwc1        $f2, 0x28($a3)
    ctx->pc = 0x413990u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x413994: 0x460418c0  add.s       $f3, $f3, $f4
    ctx->pc = 0x413994u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
    // 0x413998: 0x460751c2  mul.s       $f7, $f10, $f7
    ctx->pc = 0x413998u;
    ctx->f[7] = FPU_MUL_S(ctx->f[10], ctx->f[7]);
    // 0x41399c: 0x24420018  addiu       $v0, $v0, 0x18
    ctx->pc = 0x41399cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x4139a0: 0x46080840  add.s       $f1, $f1, $f8
    ctx->pc = 0x4139a0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[8]);
    // 0x4139a4: 0x46055142  mul.s       $f5, $f10, $f5
    ctx->pc = 0x4139a4u;
    ctx->f[5] = FPU_MUL_S(ctx->f[10], ctx->f[5]);
    // 0x4139a8: 0x46070000  add.s       $f0, $f0, $f7
    ctx->pc = 0x4139a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[7]);
    // 0x4139ac: 0x46025082  mul.s       $f2, $f10, $f2
    ctx->pc = 0x4139acu;
    ctx->f[2] = FPU_MUL_S(ctx->f[10], ctx->f[2]);
    // 0x4139b0: 0x46050840  add.s       $f1, $f1, $f5
    ctx->pc = 0x4139b0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[5]);
    // 0x4139b4: 0x46090000  add.s       $f0, $f0, $f9
    ctx->pc = 0x4139b4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[9]);
    // 0x4139b8: 0x460218c0  add.s       $f3, $f3, $f2
    ctx->pc = 0x4139b8u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x4139bc: 0xe520000c  swc1        $f0, 0xC($t1)
    ctx->pc = 0x4139bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 12), bits); }
    // 0x4139c0: 0x25290018  addiu       $t1, $t1, 0x18
    ctx->pc = 0x4139c0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 24));
    // 0x4139c4: 0xc4e00034  lwc1        $f0, 0x34($a3)
    ctx->pc = 0x4139c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4139c8: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x4139c8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x4139cc: 0xe5410010  swc1        $f1, 0x10($t2)
    ctx->pc = 0x4139ccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 16), bits); }
    // 0x4139d0: 0xc4e00038  lwc1        $f0, 0x38($a3)
    ctx->pc = 0x4139d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4139d4: 0x254a0018  addiu       $t2, $t2, 0x18
    ctx->pc = 0x4139d4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 24));
    // 0x4139d8: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x4139d8u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x4139dc: 0xe4630014  swc1        $f3, 0x14($v1)
    ctx->pc = 0x4139dcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
    // 0x4139e0: 0x4c1ffb1  bgez        $a2, . + 4 + (-0x4F << 2)
    ctx->pc = 0x4139E0u;
    {
        const bool branch_taken_0x4139e0 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x4139E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4139E0u;
        // 0x4139e4: 0x24630018  addiu       $v1, $v1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4139e0) {
            ctx->pc = 0x4138A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4138a8;
        }
    }
    ctx->pc = 0x4139E8u;
label_4139e8:
    // 0x4139e8: 0x3e00008  jr          $ra
    ctx->pc = 0x4139E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4139ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4139E8u;
        // 0x4139ec: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4139E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4139F0u;
}
