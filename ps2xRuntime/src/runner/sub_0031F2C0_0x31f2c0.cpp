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

// Function: sub_0031F2C0
// Address: 0x31f2c0 - 0x31f780
void sub_0031F2C0_0x31f2c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031F2C0_0x31f2c0");
#endif

    ctx->pc = 0x31f2c0u;

    // 0x31f2c0: 0xc4c30008  lwc1        $f3, 0x8($a2)
    ctx->pc = 0x31f2c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x31f2c4: 0xc4c2000c  lwc1        $f2, 0xC($a2)
    ctx->pc = 0x31f2c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x31f2c8: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x31f2c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31f2cc: 0xc4a5000c  lwc1        $f5, 0xC($a1)
    ctx->pc = 0x31f2ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x31f2d0: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x31f2d0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x31f2d4: 0xc4a00010  lwc1        $f0, 0x10($a1)
    ctx->pc = 0x31f2d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31f2d8: 0x46022942  mul.s       $f5, $f5, $f2
    ctx->pc = 0x31f2d8u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x31f2dc: 0xc4c30010  lwc1        $f3, 0x10($a2)
    ctx->pc = 0x31f2dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x31f2e0: 0xc4a20014  lwc1        $f2, 0x14($a1)
    ctx->pc = 0x31f2e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x31f2e4: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x31f2e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x31f2e8: 0xc4c40014  lwc1        $f4, 0x14($a2)
    ctx->pc = 0x31f2e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x31f2ec: 0x46050840  add.s       $f1, $f1, $f5
    ctx->pc = 0x31f2ecu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[5]);
    // 0x31f2f0: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x31f2f0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x31f2f4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x31f2f4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x31f2f8: 0x46020a80  add.s       $f10, $f1, $f2
    ctx->pc = 0x31f2f8u;
    ctx->f[10] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x31f2fc: 0xc4c00018  lwc1        $f0, 0x18($a2)
    ctx->pc = 0x31f2fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31f300: 0xc4a10018  lwc1        $f1, 0x18($a1)
    ctx->pc = 0x31f300u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31f304: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x31f304u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x31f308: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x31f308u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x31f30c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x31f30cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x31f310: 0xe4810018  swc1        $f1, 0x18($a0)
    ctx->pc = 0x31f310u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x31f314: 0xc4a2001c  lwc1        $f2, 0x1C($a1)
    ctx->pc = 0x31f314u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x31f318: 0xc4c0001c  lwc1        $f0, 0x1C($a2)
    ctx->pc = 0x31f318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31f31c: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x31f31cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x31f320: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x31f320u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x31f324: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x31f324u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x31f328: 0xe482001c  swc1        $f2, 0x1C($a0)
    ctx->pc = 0x31f328u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 28), bits); }
    // 0x31f32c: 0xc4a10020  lwc1        $f1, 0x20($a1)
    ctx->pc = 0x31f32cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31f330: 0xc4c00020  lwc1        $f0, 0x20($a2)
    ctx->pc = 0x31f330u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31f334: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x31f334u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x31f338: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x31f338u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x31f33c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x31f33cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x31f340: 0xe4810020  swc1        $f1, 0x20($a0)
    ctx->pc = 0x31f340u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
    // 0x31f344: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x31f344u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x31f348: 0x46035034  c.lt.s      $f10, $f3
    ctx->pc = 0x31f348u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[10], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31f34c: 0x0  nop
    ctx->pc = 0x31f34cu;
    // NOP
    // 0x31f350: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x31F350u;
    {
        const bool branch_taken_0x31f350 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x31F354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F350u;
        // 0x31f354: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f350) {
            ctx->pc = 0x31F360u;
            goto label_31f360;
        }
    }
    ctx->pc = 0x31F358u;
    // 0x31f358: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x31f358u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31f35c: 0x0  nop
    ctx->pc = 0x31f35cu;
    // NOP
label_31f360:
    // 0x31f360: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x31F360u;
    {
        const bool branch_taken_0x31f360 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31f360) {
            ctx->pc = 0x31F3A0u;
            goto label_31f3a0;
        }
    }
    ctx->pc = 0x31F368u;
    // 0x31f368: 0x46005287  neg.s       $f10, $f10
    ctx->pc = 0x31f368u;
    ctx->f[10] = FPU_NEG_S(ctx->f[10]);
    // 0x31f36c: 0xc4c10008  lwc1        $f1, 0x8($a2)
    ctx->pc = 0x31f36cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31f370: 0xc4c2000c  lwc1        $f2, 0xC($a2)
    ctx->pc = 0x31f370u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x31f374: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x31f374u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x31f378: 0xc4c00010  lwc1        $f0, 0x10($a2)
    ctx->pc = 0x31f378u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31f37c: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x31f37cu;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x31f380: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x31f380u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x31f384: 0xe4c10008  swc1        $f1, 0x8($a2)
    ctx->pc = 0x31f384u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
    // 0x31f388: 0xe4c2000c  swc1        $f2, 0xC($a2)
    ctx->pc = 0x31f388u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 12), bits); }
    // 0x31f38c: 0xe4c00010  swc1        $f0, 0x10($a2)
    ctx->pc = 0x31f38cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 16), bits); }
    // 0x31f390: 0xc4c10014  lwc1        $f1, 0x14($a2)
    ctx->pc = 0x31f390u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31f394: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x31f394u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x31f398: 0xe4c10014  swc1        $f1, 0x14($a2)
    ctx->pc = 0x31f398u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 20), bits); }
    // 0x31f39c: 0x0  nop
    ctx->pc = 0x31f39cu;
    // NOP
label_31f3a0:
    // 0x31f3a0: 0xc7808220  lwc1        $f0, -0x7DE0($gp)
    ctx->pc = 0x31f3a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935072)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31f3a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x31f3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31f3a8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x31f3a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x31f3ac: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x31f3acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x31f3b0: 0x460a0036  c.le.s      $f0, $f10
    ctx->pc = 0x31f3b0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[10])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31f3b4: 0x0  nop
    ctx->pc = 0x31f3b4u;
    // NOP
    // 0x31f3b8: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x31F3B8u;
    {
        const bool branch_taken_0x31f3b8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x31F3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F3B8u;
        // 0x31f3bc: 0x460c7b81  sub.s       $f14, $f15, $f12 (Delay Slot)
        ctx->f[14] = FPU_SUB_S(ctx->f[15], ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f3b8) {
            ctx->pc = 0x31F3C4u;
            goto label_31f3c4;
        }
    }
    ctx->pc = 0x31F3C0u;
    // 0x31f3c0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x31f3c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31f3c4:
    // 0x31f3c4: 0x544000d6  bnel        $v0, $zero, . + 4 + (0xD6 << 2)
    ctx->pc = 0x31F3C4u;
    {
        const bool branch_taken_0x31f3c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31f3c4) {
            ctx->pc = 0x31F3C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31F3C4u;
            // 0x31f3c8: 0xc4a10008  lwc1        $f1, 0x8($a1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x31F720u;
            goto label_31f720;
        }
    }
    ctx->pc = 0x31F3CCu;
    // 0x31f3cc: 0x44025000  mfc1        $v0, $f10
    ctx->pc = 0x31f3ccu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[10], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x31f3d0: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x31f3d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31f3d4: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x31f3d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
    // 0x31f3d8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x31f3d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x31f3dc: 0x3c023f7f  lui         $v0, 0x3F7F
    ctx->pc = 0x31f3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16255 << 16));
    // 0x31f3e0: 0xe31824  and         $v1, $a3, $v1
    ctx->pc = 0x31f3e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
    // 0x31f3e4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x31f3e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x31f3e8: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x31f3e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x31f3ec: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x31F3ECu;
    {
        const bool branch_taken_0x31f3ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31f3ec) {
            ctx->pc = 0x31F3F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31F3ECu;
            // 0x31f3f0: 0x3c023eff  lui         $v0, 0x3EFF (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16127 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31F408u;
            goto label_31f408;
        }
    }
    ctx->pc = 0x31F3F4u;
    // 0x31f3f4: 0xc78a80b0  lwc1        $f10, -0x7F50($gp)
    ctx->pc = 0x31f3f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x31f3f8: 0x5ce0008f  bgtzl       $a3, . + 4 + (0x8F << 2)
    ctx->pc = 0x31F3F8u;
    {
        const bool branch_taken_0x31f3f8 = (GPR_S32(ctx, 7) > 0);
        if (branch_taken_0x31f3f8) {
            ctx->pc = 0x31F3FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31F3F8u;
            // 0x31f3fc: 0x46001a86  mov.s       $f10, $f3 (Delay Slot)
            ctx->f[10] = FPU_MOV_S(ctx->f[3]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x31F638u;
            goto label_31f638;
        }
    }
    ctx->pc = 0x31F400u;
    // 0x31f400: 0x1000008f  b           . + 4 + (0x8F << 2)
    ctx->pc = 0x31F400u;
    {
        const bool branch_taken_0x31f400 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31F404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F400u;
        // 0x31f404: 0x460a5042  mul.s       $f1, $f10, $f10 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[10], ctx->f[10]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f400) {
            ctx->pc = 0x31F640u;
            goto label_31f640;
        }
    }
    ctx->pc = 0x31F408u;
label_31f408:
    // 0x31f408: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x31f408u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x31f40c: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x31f40cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x31f410: 0x1440002c  bnez        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x31F410u;
    {
        const bool branch_taken_0x31f410 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31F414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F410u;
        // 0x31f414: 0x3c022300  lui         $v0, 0x2300 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8960 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f410) {
            ctx->pc = 0x31F4C4u;
            goto label_31f4c4;
        }
    }
    ctx->pc = 0x31F418u;
    // 0x31f418: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x31f418u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x31f41c: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x31F41Cu;
    {
        const bool branch_taken_0x31f41c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31f41c) {
            ctx->pc = 0x31F420u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31F41Cu;
            // 0x31f420: 0x460a52c2  mul.s       $f11, $f10, $f10 (Delay Slot)
            ctx->f[11] = FPU_MUL_S(ctx->f[10], ctx->f[10]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x31F430u;
            goto label_31f430;
        }
    }
    ctx->pc = 0x31F424u;
    // 0x31f424: 0xc78a80b4  lwc1        $f10, -0x7F4C($gp)
    ctx->pc = 0x31f424u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934708)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x31f428: 0x10000085  b           . + 4 + (0x85 << 2)
    ctx->pc = 0x31F428u;
    {
        const bool branch_taken_0x31f428 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31F42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F428u;
        // 0x31f42c: 0x460a5042  mul.s       $f1, $f10, $f10 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[10], ctx->f[10]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f428) {
            ctx->pc = 0x31F640u;
            goto label_31f640;
        }
    }
    ctx->pc = 0x31F430u;
label_31f430:
    // 0x31f430: 0xc7808224  lwc1        $f0, -0x7DDC($gp)
    ctx->pc = 0x31f430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935076)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31f434: 0xc78380bc  lwc1        $f3, -0x7F44($gp)
    ctx->pc = 0x31f434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934716)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x31f438: 0xc78780c0  lwc1        $f7, -0x7F40($gp)
    ctx->pc = 0x31f438u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934720)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x31f43c: 0x46005802  mul.s       $f0, $f11, $f0
    ctx->pc = 0x31f43cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[11], ctx->f[0]);
    // 0x31f440: 0xc78180c4  lwc1        $f1, -0x7F3C($gp)
    ctx->pc = 0x31f440u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934724)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31f444: 0xc78281d0  lwc1        $f2, -0x7E30($gp)
    ctx->pc = 0x31f444u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x31f448: 0x46015842  mul.s       $f1, $f11, $f1
    ctx->pc = 0x31f448u;
    ctx->f[1] = FPU_MUL_S(ctx->f[11], ctx->f[1]);
    // 0x31f44c: 0xc7858228  lwc1        $f5, -0x7DD8($gp)
    ctx->pc = 0x31f44cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935080)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x31f450: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x31f450u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x31f454: 0xc78481d8  lwc1        $f4, -0x7E28($gp)
    ctx->pc = 0x31f454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x31f458: 0xc78880d4  lwc1        $f8, -0x7F2C($gp)
    ctx->pc = 0x31f458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x31f45c: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x31f45cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x31f460: 0xc78380d8  lwc1        $f3, -0x7F28($gp)
    ctx->pc = 0x31f460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x31f464: 0x46005802  mul.s       $f0, $f11, $f0
    ctx->pc = 0x31f464u;
    ctx->f[0] = FPU_MUL_S(ctx->f[11], ctx->f[0]);
    // 0x31f468: 0xc78680dc  lwc1        $f6, -0x7F24($gp)
    ctx->pc = 0x31f468u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934748)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x31f46c: 0xc78280e0  lwc1        $f2, -0x7F20($gp)
    ctx->pc = 0x31f46cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x31f470: 0x46015842  mul.s       $f1, $f11, $f1
    ctx->pc = 0x31f470u;
    ctx->f[1] = FPU_MUL_S(ctx->f[11], ctx->f[1]);
    // 0x31f474: 0xc78980e4  lwc1        $f9, -0x7F1C($gp)
    ctx->pc = 0x31f474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934756)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x31f478: 0x46070000  add.s       $f0, $f0, $f7
    ctx->pc = 0x31f478u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[7]);
    // 0x31f47c: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x31f47cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x31f480: 0x46005802  mul.s       $f0, $f11, $f0
    ctx->pc = 0x31f480u;
    ctx->f[0] = FPU_MUL_S(ctx->f[11], ctx->f[0]);
    // 0x31f484: 0x46015842  mul.s       $f1, $f11, $f1
    ctx->pc = 0x31f484u;
    ctx->f[1] = FPU_MUL_S(ctx->f[11], ctx->f[1]);
    // 0x31f488: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x31f488u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x31f48c: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x31f48cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x31f490: 0x46005802  mul.s       $f0, $f11, $f0
    ctx->pc = 0x31f490u;
    ctx->f[0] = FPU_MUL_S(ctx->f[11], ctx->f[0]);
    // 0x31f494: 0x46015842  mul.s       $f1, $f11, $f1
    ctx->pc = 0x31f494u;
    ctx->f[1] = FPU_MUL_S(ctx->f[11], ctx->f[1]);
    // 0x31f498: 0x46080000  add.s       $f0, $f0, $f8
    ctx->pc = 0x31f498u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[8]);
    // 0x31f49c: 0x460f0840  add.s       $f1, $f1, $f15
    ctx->pc = 0x31f49cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[15]);
    // 0x31f4a0: 0x46005802  mul.s       $f0, $f11, $f0
    ctx->pc = 0x31f4a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[11], ctx->f[0]);
    // 0x31f4a4: 0x46060000  add.s       $f0, $f0, $f6
    ctx->pc = 0x31f4a4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[6]);
    // 0x31f4a8: 0x46005802  mul.s       $f0, $f11, $f0
    ctx->pc = 0x31f4a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[11], ctx->f[0]);
    // 0x31f4ac: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x31f4acu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x31f4b0: 0x46005002  mul.s       $f0, $f10, $f0
    ctx->pc = 0x31f4b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[10], ctx->f[0]);
    // 0x31f4b4: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x31f4b4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x31f4b8: 0x46025081  sub.s       $f2, $f10, $f2
    ctx->pc = 0x31f4b8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[10], ctx->f[2]);
    // 0x31f4bc: 0x1000005e  b           . + 4 + (0x5E << 2)
    ctx->pc = 0x31F4BCu;
    {
        const bool branch_taken_0x31f4bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31F4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F4BCu;
        // 0x31f4c0: 0x46024a81  sub.s       $f10, $f9, $f2 (Delay Slot)
        ctx->f[10] = FPU_SUB_S(ctx->f[9], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f4bc) {
            ctx->pc = 0x31F638u;
            goto label_31f638;
        }
    }
    ctx->pc = 0x31F4C4u;
label_31f4c4:
    // 0x31f4c4: 0x4e3002c  bgezl       $a3, . + 4 + (0x2C << 2)
    ctx->pc = 0x31F4C4u;
    {
        const bool branch_taken_0x31f4c4 = (GPR_S32(ctx, 7) >= 0);
        if (branch_taken_0x31f4c4) {
            ctx->pc = 0x31F4C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31F4C4u;
            // 0x31f4c8: 0x460a7841  sub.s       $f1, $f15, $f10 (Delay Slot)
            ctx->f[1] = FPU_SUB_S(ctx->f[15], ctx->f[10]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x31F578u;
            goto label_31f578;
        }
    }
    ctx->pc = 0x31F4CCu;
    // 0x31f4cc: 0x460f5080  add.s       $f2, $f10, $f15
    ctx->pc = 0x31f4ccu;
    ctx->f[2] = FPU_ADD_S(ctx->f[10], ctx->f[15]);
    // 0x31f4d0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x31f4d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x31f4d4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x31f4d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x31f4d8: 0xc7808224  lwc1        $f0, -0x7DDC($gp)
    ctx->pc = 0x31f4d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935076)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31f4dc: 0xc78480bc  lwc1        $f4, -0x7F44($gp)
    ctx->pc = 0x31f4dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934716)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x31f4e0: 0x460112c2  mul.s       $f11, $f2, $f1
    ctx->pc = 0x31f4e0u;
    ctx->f[11] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x31f4e4: 0xc78680c0  lwc1        $f6, -0x7F40($gp)
    ctx->pc = 0x31f4e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934720)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x31f4e8: 0xc78180c4  lwc1        $f1, -0x7F3C($gp)
    ctx->pc = 0x31f4e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934724)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31f4ec: 0xc78281d0  lwc1        $f2, -0x7E30($gp)
    ctx->pc = 0x31f4ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x31f4f0: 0x46005802  mul.s       $f0, $f11, $f0
    ctx->pc = 0x31f4f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[11], ctx->f[0]);
    // 0x31f4f4: 0xc7878228  lwc1        $f7, -0x7DD8($gp)
    ctx->pc = 0x31f4f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935080)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x31f4f8: 0x46015842  mul.s       $f1, $f11, $f1
    ctx->pc = 0x31f4f8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[11], ctx->f[1]);
    // 0x31f4fc: 0xc78381d8  lwc1        $f3, -0x7E28($gp)
    ctx->pc = 0x31f4fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x31f500: 0xc78880d4  lwc1        $f8, -0x7F2C($gp)
    ctx->pc = 0x31f500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x31f504: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x31f504u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x31f508: 0xc78580d8  lwc1        $f5, -0x7F28($gp)
    ctx->pc = 0x31f508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x31f50c: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x31f50cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x31f510: 0xc78480dc  lwc1        $f4, -0x7F24($gp)
    ctx->pc = 0x31f510u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934748)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x31f514: 0x46005802  mul.s       $f0, $f11, $f0
    ctx->pc = 0x31f514u;
    ctx->f[0] = FPU_MUL_S(ctx->f[11], ctx->f[0]);
    // 0x31f518: 0x46015842  mul.s       $f1, $f11, $f1
    ctx->pc = 0x31f518u;
    ctx->f[1] = FPU_MUL_S(ctx->f[11], ctx->f[1]);
    // 0x31f51c: 0x46060000  add.s       $f0, $f0, $f6
    ctx->pc = 0x31f51cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[6]);
    // 0x31f520: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x31f520u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x31f524: 0x46005802  mul.s       $f0, $f11, $f0
    ctx->pc = 0x31f524u;
    ctx->f[0] = FPU_MUL_S(ctx->f[11], ctx->f[0]);
    // 0x31f528: 0x46015842  mul.s       $f1, $f11, $f1
    ctx->pc = 0x31f528u;
    ctx->f[1] = FPU_MUL_S(ctx->f[11], ctx->f[1]);
    // 0x31f52c: 0x46070000  add.s       $f0, $f0, $f7
    ctx->pc = 0x31f52cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[7]);
    // 0x31f530: 0x46050840  add.s       $f1, $f1, $f5
    ctx->pc = 0x31f530u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[5]);
    // 0x31f534: 0x46005802  mul.s       $f0, $f11, $f0
    ctx->pc = 0x31f534u;
    ctx->f[0] = FPU_MUL_S(ctx->f[11], ctx->f[0]);
    // 0x31f538: 0x46015842  mul.s       $f1, $f11, $f1
    ctx->pc = 0x31f538u;
    ctx->f[1] = FPU_MUL_S(ctx->f[11], ctx->f[1]);
    // 0x31f53c: 0x46080000  add.s       $f0, $f0, $f8
    ctx->pc = 0x31f53cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[8]);
    // 0x31f540: 0x460f0840  add.s       $f1, $f1, $f15
    ctx->pc = 0x31f540u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[15]);
    // 0x31f544: 0x46005802  mul.s       $f0, $f11, $f0
    ctx->pc = 0x31f544u;
    ctx->f[0] = FPU_MUL_S(ctx->f[11], ctx->f[0]);
    // 0x31f548: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x31f548u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x31f54c: 0x46005802  mul.s       $f0, $f11, $f0
    ctx->pc = 0x31f54cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[11], ctx->f[0]);
    // 0x31f550: 0x460b0344  c1          0xB0344
    ctx->pc = 0x31f550u;
    ctx->f[13] = FPU_SQRT_S(ctx->f[0]);
    // 0x31f554: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x31f554u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x31f558: 0xc78280e0  lwc1        $f2, -0x7F20($gp)
    ctx->pc = 0x31f558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x31f55c: 0xc78380e8  lwc1        $f3, -0x7F18($gp)
    ctx->pc = 0x31f55cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934760)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x31f560: 0x460d0042  mul.s       $f1, $f0, $f13
    ctx->pc = 0x31f560u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[13]);
    // 0x31f564: 0x46020801  sub.s       $f0, $f1, $f2
    ctx->pc = 0x31f564u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x31f568: 0x46006800  add.s       $f0, $f13, $f0
    ctx->pc = 0x31f568u;
    ctx->f[0] = FPU_ADD_S(ctx->f[13], ctx->f[0]);
    // 0x31f56c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x31f56cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x31f570: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x31F570u;
    {
        const bool branch_taken_0x31f570 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31F574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F570u;
        // 0x31f574: 0x46001a81  sub.s       $f10, $f3, $f0 (Delay Slot)
        ctx->f[10] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f570) {
            ctx->pc = 0x31F638u;
            goto label_31f638;
        }
    }
    ctx->pc = 0x31F578u;
label_31f578:
    // 0x31f578: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x31f578u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x31f57c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x31f57cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31f580: 0x46000ac2  mul.s       $f11, $f1, $f0
    ctx->pc = 0x31f580u;
    ctx->f[11] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x31f584: 0x460b0344  c1          0xB0344
    ctx->pc = 0x31f584u;
    ctx->f[13] = FPU_SQRT_S(ctx->f[0]);
    // 0x31f588: 0x44026800  mfc1        $v0, $f13
    ctx->pc = 0x31f588u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[13], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x31f58c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x31f58cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31f590: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x31f590u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x31f594: 0x3442f000  ori         $v0, $v0, 0xF000
    ctx->pc = 0x31f594u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61440);
    // 0x31f598: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x31f598u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x31f59c: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x31f59cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x31f5a0: 0x46021142  mul.s       $f5, $f2, $f2
    ctx->pc = 0x31f5a0u;
    ctx->f[5] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x31f5a4: 0xc7808224  lwc1        $f0, -0x7DDC($gp)
    ctx->pc = 0x31f5a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935076)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31f5a8: 0xc78480bc  lwc1        $f4, -0x7F44($gp)
    ctx->pc = 0x31f5a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934716)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x31f5ac: 0x46005802  mul.s       $f0, $f11, $f0
    ctx->pc = 0x31f5acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[11], ctx->f[0]);
    // 0x31f5b0: 0xc78a80c0  lwc1        $f10, -0x7F40($gp)
    ctx->pc = 0x31f5b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934720)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x31f5b4: 0xc78180c4  lwc1        $f1, -0x7F3C($gp)
    ctx->pc = 0x31f5b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934724)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31f5b8: 0x460268c0  add.s       $f3, $f13, $f2
    ctx->pc = 0x31f5b8u;
    ctx->f[3] = FPU_ADD_S(ctx->f[13], ctx->f[2]);
    // 0x31f5bc: 0xc78681d0  lwc1        $f6, -0x7E30($gp)
    ctx->pc = 0x31f5bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x31f5c0: 0x46055941  sub.s       $f5, $f11, $f5
    ctx->pc = 0x31f5c0u;
    ctx->f[5] = FPU_SUB_S(ctx->f[11], ctx->f[5]);
    // 0x31f5c4: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x31f5c4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x31f5c8: 0xc7878228  lwc1        $f7, -0x7DD8($gp)
    ctx->pc = 0x31f5c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935080)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x31f5cc: 0x46015842  mul.s       $f1, $f11, $f1
    ctx->pc = 0x31f5ccu;
    ctx->f[1] = FPU_MUL_S(ctx->f[11], ctx->f[1]);
    // 0x31f5d0: 0xc78481d8  lwc1        $f4, -0x7E28($gp)
    ctx->pc = 0x31f5d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x31f5d4: 0xc78980d4  lwc1        $f9, -0x7F2C($gp)
    ctx->pc = 0x31f5d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x31f5d8: 0x46032943  div.s       $f5, $f5, $f3
    ctx->pc = 0x31f5d8u;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[5] = FPU_DIV_S(ctx->f[5], ctx->f[3]); }
    // 0x31f5dc: 0x46005802  mul.s       $f0, $f11, $f0
    ctx->pc = 0x31f5dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[11], ctx->f[0]);
    // 0x31f5e0: 0xc78380d8  lwc1        $f3, -0x7F28($gp)
    ctx->pc = 0x31f5e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x31f5e4: 0x46060840  add.s       $f1, $f1, $f6
    ctx->pc = 0x31f5e4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[6]);
    // 0x31f5e8: 0xc78880dc  lwc1        $f8, -0x7F24($gp)
    ctx->pc = 0x31f5e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934748)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x31f5ec: 0x460a0000  add.s       $f0, $f0, $f10
    ctx->pc = 0x31f5ecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[10]);
    // 0x31f5f0: 0x46015842  mul.s       $f1, $f11, $f1
    ctx->pc = 0x31f5f0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[11], ctx->f[1]);
    // 0x31f5f4: 0x46005802  mul.s       $f0, $f11, $f0
    ctx->pc = 0x31f5f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[11], ctx->f[0]);
    // 0x31f5f8: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x31f5f8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x31f5fc: 0x46070000  add.s       $f0, $f0, $f7
    ctx->pc = 0x31f5fcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[7]);
    // 0x31f600: 0x46015842  mul.s       $f1, $f11, $f1
    ctx->pc = 0x31f600u;
    ctx->f[1] = FPU_MUL_S(ctx->f[11], ctx->f[1]);
    // 0x31f604: 0x46005802  mul.s       $f0, $f11, $f0
    ctx->pc = 0x31f604u;
    ctx->f[0] = FPU_MUL_S(ctx->f[11], ctx->f[0]);
    // 0x31f608: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x31f608u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x31f60c: 0x46090000  add.s       $f0, $f0, $f9
    ctx->pc = 0x31f60cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[9]);
    // 0x31f610: 0x46015842  mul.s       $f1, $f11, $f1
    ctx->pc = 0x31f610u;
    ctx->f[1] = FPU_MUL_S(ctx->f[11], ctx->f[1]);
    // 0x31f614: 0x46005802  mul.s       $f0, $f11, $f0
    ctx->pc = 0x31f614u;
    ctx->f[0] = FPU_MUL_S(ctx->f[11], ctx->f[0]);
    // 0x31f618: 0x460f0840  add.s       $f1, $f1, $f15
    ctx->pc = 0x31f618u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[15]);
    // 0x31f61c: 0x46080000  add.s       $f0, $f0, $f8
    ctx->pc = 0x31f61cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[8]);
    // 0x31f620: 0x46005802  mul.s       $f0, $f11, $f0
    ctx->pc = 0x31f620u;
    ctx->f[0] = FPU_MUL_S(ctx->f[11], ctx->f[0]);
    // 0x31f624: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x31f624u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x31f628: 0x460d0002  mul.s       $f0, $f0, $f13
    ctx->pc = 0x31f628u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[13]);
    // 0x31f62c: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x31f62cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x31f630: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x31f630u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x31f634: 0x46021280  add.s       $f10, $f2, $f2
    ctx->pc = 0x31f634u;
    ctx->f[10] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_31f638:
    // 0x31f638: 0x460a5042  mul.s       $f1, $f10, $f10
    ctx->pc = 0x31f638u;
    ctx->f[1] = FPU_MUL_S(ctx->f[10], ctx->f[10]);
    // 0x31f63c: 0x0  nop
    ctx->pc = 0x31f63cu;
    // NOP
label_31f640:
    // 0x31f640: 0xc782822c  lwc1        $f2, -0x7DD4($gp)
    ctx->pc = 0x31f640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935084)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x31f644: 0xc78581e4  lwc1        $f5, -0x7E1C($gp)
    ctx->pc = 0x31f644u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935012)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x31f648: 0xc78681e8  lwc1        $f6, -0x7E18($gp)
    ctx->pc = 0x31f648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935016)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x31f64c: 0x46020802  mul.s       $f0, $f1, $f2
    ctx->pc = 0x31f64cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x31f650: 0xc78781ec  lwc1        $f7, -0x7E14($gp)
    ctx->pc = 0x31f650u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935020)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x31f654: 0xc78881f0  lwc1        $f8, -0x7E10($gp)
    ctx->pc = 0x31f654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935024)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x31f658: 0x460a0902  mul.s       $f4, $f1, $f10
    ctx->pc = 0x31f658u;
    ctx->f[4] = FPU_MUL_S(ctx->f[1], ctx->f[10]);
    // 0x31f65c: 0xc78981f4  lwc1        $f9, -0x7E0C($gp)
    ctx->pc = 0x31f65cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935028)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x31f660: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x31f660u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x31f664: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x31f664u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x31f668: 0x46060000  add.s       $f0, $f0, $f6
    ctx->pc = 0x31f668u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[6]);
    // 0x31f66c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x31f66cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x31f670: 0x46070000  add.s       $f0, $f0, $f7
    ctx->pc = 0x31f670u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[7]);
    // 0x31f674: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x31f674u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x31f678: 0x46080000  add.s       $f0, $f0, $f8
    ctx->pc = 0x31f678u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[8]);
    // 0x31f67c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x31f67cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x31f680: 0x46090840  add.s       $f1, $f1, $f9
    ctx->pc = 0x31f680u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[9]);
    // 0x31f684: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->pc = 0x31f684u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x31f688: 0x46045100  add.s       $f4, $f10, $f4
    ctx->pc = 0x31f688u;
    ctx->f[4] = FPU_ADD_S(ctx->f[10], ctx->f[4]);
    // 0x31f68c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x31f68cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x31f690: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x31f690u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31f694: 0x46040103  div.s       $f4, $f0, $f4
    ctx->pc = 0x31f694u;
    { if (ctx->f[4] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = FPU_DIV_S(ctx->f[0], ctx->f[4]); }
    // 0x31f698: 0x460a7382  mul.s       $f14, $f14, $f10
    ctx->pc = 0x31f698u;
    ctx->f[14] = FPU_MUL_S(ctx->f[14], ctx->f[10]);
    // 0x31f69c: 0x460e7042  mul.s       $f1, $f14, $f14
    ctx->pc = 0x31f69cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[14], ctx->f[14]);
    // 0x31f6a0: 0x46020802  mul.s       $f0, $f1, $f2
    ctx->pc = 0x31f6a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x31f6a4: 0x460e08c2  mul.s       $f3, $f1, $f14
    ctx->pc = 0x31f6a4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[14]);
    // 0x31f6a8: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x31f6a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x31f6ac: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x31f6acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x31f6b0: 0x46060000  add.s       $f0, $f0, $f6
    ctx->pc = 0x31f6b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[6]);
    // 0x31f6b4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x31f6b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x31f6b8: 0x46070000  add.s       $f0, $f0, $f7
    ctx->pc = 0x31f6b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[7]);
    // 0x31f6bc: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x31f6bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x31f6c0: 0x46080000  add.s       $f0, $f0, $f8
    ctx->pc = 0x31f6c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[8]);
    // 0x31f6c4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x31f6c4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x31f6c8: 0x46090840  add.s       $f1, $f1, $f9
    ctx->pc = 0x31f6c8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[9]);
    // 0x31f6cc: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x31f6ccu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x31f6d0: 0x46037380  add.s       $f14, $f14, $f3
    ctx->pc = 0x31f6d0u;
    ctx->f[14] = FPU_ADD_S(ctx->f[14], ctx->f[3]);
    // 0x31f6d4: 0x46047382  mul.s       $f14, $f14, $f4
    ctx->pc = 0x31f6d4u;
    ctx->f[14] = FPU_MUL_S(ctx->f[14], ctx->f[4]);
    // 0x31f6d8: 0x460a6302  mul.s       $f12, $f12, $f10
    ctx->pc = 0x31f6d8u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[10]);
    // 0x31f6dc: 0x460c6002  mul.s       $f0, $f12, $f12
    ctx->pc = 0x31f6dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x31f6e0: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x31f6e0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x31f6e4: 0x460c0042  mul.s       $f1, $f0, $f12
    ctx->pc = 0x31f6e4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x31f6e8: 0x46051080  add.s       $f2, $f2, $f5
    ctx->pc = 0x31f6e8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[5]);
    // 0x31f6ec: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x31f6ecu;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x31f6f0: 0x46061080  add.s       $f2, $f2, $f6
    ctx->pc = 0x31f6f0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[6]);
    // 0x31f6f4: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x31f6f4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x31f6f8: 0x46071080  add.s       $f2, $f2, $f7
    ctx->pc = 0x31f6f8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[7]);
    // 0x31f6fc: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x31f6fcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x31f700: 0x46081080  add.s       $f2, $f2, $f8
    ctx->pc = 0x31f700u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[8]);
    // 0x31f704: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x31f704u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x31f708: 0x46090000  add.s       $f0, $f0, $f9
    ctx->pc = 0x31f708u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[9]);
    // 0x31f70c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x31f70cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x31f710: 0x46016300  add.s       $f12, $f12, $f1
    ctx->pc = 0x31f710u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[1]);
    // 0x31f714: 0x46046302  mul.s       $f12, $f12, $f4
    ctx->pc = 0x31f714u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[4]);
    // 0x31f718: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x31f718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31f71c: 0x0  nop
    ctx->pc = 0x31f71cu;
    // NOP
label_31f720:
    // 0x31f720: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x31f720u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31f724: 0x46017042  mul.s       $f1, $f14, $f1
    ctx->pc = 0x31f724u;
    ctx->f[1] = FPU_MUL_S(ctx->f[14], ctx->f[1]);
    // 0x31f728: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x31f728u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x31f72c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x31f72cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x31f730: 0xe4810008  swc1        $f1, 0x8($a0)
    ctx->pc = 0x31f730u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x31f734: 0xc4a2000c  lwc1        $f2, 0xC($a1)
    ctx->pc = 0x31f734u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x31f738: 0xc4c0000c  lwc1        $f0, 0xC($a2)
    ctx->pc = 0x31f738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31f73c: 0x46027082  mul.s       $f2, $f14, $f2
    ctx->pc = 0x31f73cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[14], ctx->f[2]);
    // 0x31f740: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x31f740u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x31f744: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x31f744u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x31f748: 0xe482000c  swc1        $f2, 0xC($a0)
    ctx->pc = 0x31f748u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x31f74c: 0xc4a10010  lwc1        $f1, 0x10($a1)
    ctx->pc = 0x31f74cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31f750: 0xc4c00010  lwc1        $f0, 0x10($a2)
    ctx->pc = 0x31f750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31f754: 0x46017042  mul.s       $f1, $f14, $f1
    ctx->pc = 0x31f754u;
    ctx->f[1] = FPU_MUL_S(ctx->f[14], ctx->f[1]);
    // 0x31f758: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x31f758u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x31f75c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x31f75cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x31f760: 0xe4810010  swc1        $f1, 0x10($a0)
    ctx->pc = 0x31f760u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x31f764: 0xc4a20014  lwc1        $f2, 0x14($a1)
    ctx->pc = 0x31f764u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x31f768: 0xc4c00014  lwc1        $f0, 0x14($a2)
    ctx->pc = 0x31f768u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31f76c: 0x46027082  mul.s       $f2, $f14, $f2
    ctx->pc = 0x31f76cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[14], ctx->f[2]);
    // 0x31f770: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x31f770u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x31f774: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x31f774u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x31f778: 0x3e00008  jr          $ra
    ctx->pc = 0x31F778u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31F77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F778u;
        // 0x31f77c: 0xe4820014  swc1        $f2, 0x14($a0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31F778u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31F780u;
}
