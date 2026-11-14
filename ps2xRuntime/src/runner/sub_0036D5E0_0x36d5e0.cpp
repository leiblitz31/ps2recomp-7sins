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

// Function: sub_0036D5E0
// Address: 0x36d5e0 - 0x36d7c0
void sub_0036D5E0_0x36d5e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036D5E0_0x36d5e0");
#endif

    switch (ctx->pc) {
        case 0x36d6d8u: goto label_36d6d8;
        default: break;
    }

    ctx->pc = 0x36d5e0u;

    // 0x36d5e0: 0xc4a60000  lwc1        $f6, 0x0($a1)
    ctx->pc = 0x36d5e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x36d5e4: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x36d5e4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x36d5e8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x36d5e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x36d5ec: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x36d5ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x36d5f0: 0xc4a70008  lwc1        $f7, 0x8($a1)
    ctx->pc = 0x36d5f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x36d5f4: 0xc4a50004  lwc1        $f5, 0x4($a1)
    ctx->pc = 0x36d5f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x36d5f8: 0x46013182  mul.s       $f6, $f6, $f1
    ctx->pc = 0x36d5f8u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[1]);
    // 0x36d5fc: 0x460139c2  mul.s       $f7, $f7, $f1
    ctx->pc = 0x36d5fcu;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[1]);
    // 0x36d600: 0xc5000070  lwc1        $f0, 0x70($t0)
    ctx->pc = 0x36d600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36d604: 0x46012942  mul.s       $f5, $f5, $f1
    ctx->pc = 0x36d604u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
    // 0x36d608: 0x46003182  mul.s       $f6, $f6, $f0
    ctx->pc = 0x36d608u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x36d60c: 0x460039c2  mul.s       $f7, $f7, $f0
    ctx->pc = 0x36d60cu;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[0]);
    // 0x36d610: 0x46002942  mul.s       $f5, $f5, $f0
    ctx->pc = 0x36d610u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x36d614: 0xe7a60030  swc1        $f6, 0x30($sp)
    ctx->pc = 0x36d614u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x36d618: 0xe7a70038  swc1        $f7, 0x38($sp)
    ctx->pc = 0x36d618u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x36d61c: 0xe7a50034  swc1        $f5, 0x34($sp)
    ctx->pc = 0x36d61cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x36d620: 0xc4c30000  lwc1        $f3, 0x0($a2)
    ctx->pc = 0x36d620u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x36d624: 0xc4c40008  lwc1        $f4, 0x8($a2)
    ctx->pc = 0x36d624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x36d628: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x36d628u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x36d62c: 0xc4c20004  lwc1        $f2, 0x4($a2)
    ctx->pc = 0x36d62cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x36d630: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->pc = 0x36d630u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x36d634: 0xc5000074  lwc1        $f0, 0x74($t0)
    ctx->pc = 0x36d634u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36d638: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x36d638u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x36d63c: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x36d63cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x36d640: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x36d640u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x36d644: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x36d644u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x36d648: 0xe7a30040  swc1        $f3, 0x40($sp)
    ctx->pc = 0x36d648u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x36d64c: 0xe7a40048  swc1        $f4, 0x48($sp)
    ctx->pc = 0x36d64cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x36d650: 0xe7a20044  swc1        $f2, 0x44($sp)
    ctx->pc = 0x36d650u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x36d654: 0x46003007  neg.s       $f0, $f6
    ctx->pc = 0x36d654u;
    ctx->f[0] = FPU_NEG_S(ctx->f[6]);
    // 0x36d658: 0x46030240  add.s       $f9, $f0, $f3
    ctx->pc = 0x36d658u;
    ctx->f[9] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x36d65c: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x36d65cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x36d660: 0x46002847  neg.s       $f1, $f5
    ctx->pc = 0x36d660u;
    ctx->f[1] = FPU_NEG_S(ctx->f[5]);
    // 0x36d664: 0x8d050008  lw          $a1, 0x8($t0)
    ctx->pc = 0x36d664u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x36d668: 0x46003a07  neg.s       $f8, $f7
    ctx->pc = 0x36d668u;
    ctx->f[8] = FPU_NEG_S(ctx->f[7]);
    // 0x36d66c: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x36d66cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x36d670: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x36d670u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x36d674: 0x46033300  add.s       $f12, $f6, $f3
    ctx->pc = 0x36d674u;
    ctx->f[12] = FPU_ADD_S(ctx->f[6], ctx->f[3]);
    // 0x36d678: 0xe7a90024  swc1        $f9, 0x24($sp)
    ctx->pc = 0x36d678u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x36d67c: 0x46020a80  add.s       $f10, $f1, $f2
    ctx->pc = 0x36d67cu;
    ctx->f[10] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x36d680: 0x460442c0  add.s       $f11, $f8, $f4
    ctx->pc = 0x36d680u;
    ctx->f[11] = FPU_ADD_S(ctx->f[8], ctx->f[4]);
    // 0x36d684: 0x46022b40  add.s       $f13, $f5, $f2
    ctx->pc = 0x36d684u;
    ctx->f[13] = FPU_ADD_S(ctx->f[5], ctx->f[2]);
    // 0x36d688: 0xe7ac0018  swc1        $f12, 0x18($sp)
    ctx->pc = 0x36d688u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x36d68c: 0x46043a40  add.s       $f9, $f7, $f4
    ctx->pc = 0x36d68cu;
    ctx->f[9] = FPU_ADD_S(ctx->f[7], ctx->f[4]);
    // 0x36d690: 0xe7aa0028  swc1        $f10, 0x28($sp)
    ctx->pc = 0x36d690u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x36d694: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x36d694u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x36d698: 0xe7ab002c  swc1        $f11, 0x2C($sp)
    ctx->pc = 0x36d698u;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x36d69c: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x36d69cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x36d6a0: 0xe7ad001c  swc1        $f13, 0x1C($sp)
    ctx->pc = 0x36d6a0u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x36d6a4: 0x46044201  sub.s       $f8, $f8, $f4
    ctx->pc = 0x36d6a4u;
    ctx->f[8] = FPU_SUB_S(ctx->f[8], ctx->f[4]);
    // 0x36d6a8: 0xe7a90020  swc1        $f9, 0x20($sp)
    ctx->pc = 0x36d6a8u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x36d6ac: 0x46033181  sub.s       $f6, $f6, $f3
    ctx->pc = 0x36d6acu;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[3]);
    // 0x36d6b0: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x36d6b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x36d6b4: 0x46022941  sub.s       $f5, $f5, $f2
    ctx->pc = 0x36d6b4u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[2]);
    // 0x36d6b8: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x36d6b8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x36d6bc: 0x460439c1  sub.s       $f7, $f7, $f4
    ctx->pc = 0x36d6bcu;
    ctx->f[7] = FPU_SUB_S(ctx->f[7], ctx->f[4]);
    // 0x36d6c0: 0xe7a80008  swc1        $f8, 0x8($sp)
    ctx->pc = 0x36d6c0u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x36d6c4: 0xe7a6000c  swc1        $f6, 0xC($sp)
    ctx->pc = 0x36d6c4u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x36d6c8: 0xe7a50010  swc1        $f5, 0x10($sp)
    ctx->pc = 0x36d6c8u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x36d6cc: 0x18e00039  blez        $a3, . + 4 + (0x39 << 2)
    ctx->pc = 0x36D6CCu;
    {
        const bool branch_taken_0x36d6cc = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x36D6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36D6CCu;
        // 0x36d6d0: 0xe7a70014  swc1        $f7, 0x14($sp) (Delay Slot)
        { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x36d6cc) {
            ctx->pc = 0x36D7B4u;
            goto label_36d7b4;
        }
    }
    ctx->pc = 0x36D6D4u;
    // 0x36d6d4: 0x0  nop
    ctx->pc = 0x36d6d4u;
    // NOP
label_36d6d8:
    // 0x36d6d8: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x36d6d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36d6dc: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x36d6dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x36d6e0: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x36d6e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36d6e4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x36d6e4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x36d6e8: 0xe4810000  swc1        $f1, 0x0($a0)
    ctx->pc = 0x36d6e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x36d6ec: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x36d6ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36d6f0: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x36d6f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36d6f4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x36d6f4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x36d6f8: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x36d6f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x36d6fc: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x36d6fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36d700: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x36d700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36d704: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x36d704u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x36d708: 0xe4810008  swc1        $f1, 0x8($a0)
    ctx->pc = 0x36d708u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x36d70c: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x36d70cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x36d710: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x36d710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36d714: 0xc7a1000c  lwc1        $f1, 0xC($sp)
    ctx->pc = 0x36d714u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36d718: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x36d718u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x36d71c: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x36d71cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x36d720: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x36d720u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36d724: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x36d724u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36d728: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x36d728u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x36d72c: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x36d72cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x36d730: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x36d730u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36d734: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x36d734u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36d738: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x36d738u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x36d73c: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x36d73cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x36d740: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x36d740u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x36d744: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x36d744u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36d748: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x36d748u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36d74c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x36d74cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x36d750: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x36d750u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x36d754: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x36d754u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36d758: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x36d758u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36d75c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x36d75cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x36d760: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x36d760u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x36d764: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x36d764u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36d768: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x36d768u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36d76c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x36d76cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x36d770: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x36d770u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x36d774: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x36d774u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x36d778: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x36d778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36d77c: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x36d77cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36d780: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x36d780u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x36d784: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x36d784u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x36d788: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x36d788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36d78c: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x36d78cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36d790: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x36d790u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x36d794: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x36d794u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x36d798: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x36d798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36d79c: 0xc7a1002c  lwc1        $f1, 0x2C($sp)
    ctx->pc = 0x36d79cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36d7a0: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x36d7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x36d7a4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x36d7a4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x36d7a8: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x36d7a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x36d7ac: 0x14e0ffca  bnez        $a3, . + 4 + (-0x36 << 2)
    ctx->pc = 0x36D7ACu;
    {
        const bool branch_taken_0x36d7ac = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x36D7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36D7ACu;
        // 0x36d7b0: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36d7ac) {
            ctx->pc = 0x36D6D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36d6d8;
        }
    }
    ctx->pc = 0x36D7B4u;
label_36d7b4:
    // 0x36d7b4: 0x3e00008  jr          $ra
    ctx->pc = 0x36D7B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36D7B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36D7B4u;
        // 0x36d7b8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36D7B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36D7BCu;
    // 0x36d7bc: 0x0  nop
    ctx->pc = 0x36d7bcu;
    // NOP
    ctx->pc = 0x36d7c0u;
}
