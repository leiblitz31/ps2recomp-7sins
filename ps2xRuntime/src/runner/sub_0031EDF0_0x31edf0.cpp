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

// Function: sub_0031EDF0
// Address: 0x31edf0 - 0x31f2c0
void sub_0031EDF0_0x31edf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031EDF0_0x31edf0");
#endif

    ctx->pc = 0x31edf0u;

    // 0x31edf0: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x31edf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31edf4: 0xc4c2000c  lwc1        $f2, 0xC($a2)
    ctx->pc = 0x31edf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x31edf8: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x31edf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31edfc: 0xc4a3000c  lwc1        $f3, 0xC($a1)
    ctx->pc = 0x31edfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x31ee00: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x31ee00u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x31ee04: 0xc4a60004  lwc1        $f6, 0x4($a1)
    ctx->pc = 0x31ee04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x31ee08: 0x460218c2  mul.s       $f3, $f3, $f2
    ctx->pc = 0x31ee08u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x31ee0c: 0xc4a40010  lwc1        $f4, 0x10($a1)
    ctx->pc = 0x31ee0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x31ee10: 0xc4c50010  lwc1        $f5, 0x10($a2)
    ctx->pc = 0x31ee10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x31ee14: 0x46066301  sub.s       $f12, $f12, $f6
    ctx->pc = 0x31ee14u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[6]);
    // 0x31ee18: 0xc4c00004  lwc1        $f0, 0x4($a2)
    ctx->pc = 0x31ee18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31ee1c: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x31ee1cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x31ee20: 0xc4a20014  lwc1        $f2, 0x14($a1)
    ctx->pc = 0x31ee20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x31ee24: 0x46052102  mul.s       $f4, $f4, $f5
    ctx->pc = 0x31ee24u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[5]);
    // 0x31ee28: 0xc4c30014  lwc1        $f3, 0x14($a2)
    ctx->pc = 0x31ee28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x31ee2c: 0x46060001  sub.s       $f0, $f0, $f6
    ctx->pc = 0x31ee2cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[6]);
    // 0x31ee30: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x31ee30u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x31ee34: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x31ee34u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x31ee38: 0x46006303  div.s       $f12, $f12, $f0
    ctx->pc = 0x31ee38u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[12], ctx->f[0]); }
    // 0x31ee3c: 0x46020a80  add.s       $f10, $f1, $f2
    ctx->pc = 0x31ee3cu;
    ctx->f[10] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x31ee40: 0xc4c00018  lwc1        $f0, 0x18($a2)
    ctx->pc = 0x31ee40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31ee44: 0xc4a10018  lwc1        $f1, 0x18($a1)
    ctx->pc = 0x31ee44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31ee48: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x31ee48u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x31ee4c: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x31ee4cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x31ee50: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x31ee50u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x31ee54: 0xe4810018  swc1        $f1, 0x18($a0)
    ctx->pc = 0x31ee54u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x31ee58: 0xc4a2001c  lwc1        $f2, 0x1C($a1)
    ctx->pc = 0x31ee58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x31ee5c: 0xc4c0001c  lwc1        $f0, 0x1C($a2)
    ctx->pc = 0x31ee5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31ee60: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x31ee60u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x31ee64: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x31ee64u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x31ee68: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x31ee68u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x31ee6c: 0xe482001c  swc1        $f2, 0x1C($a0)
    ctx->pc = 0x31ee6cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 28), bits); }
    // 0x31ee70: 0xc4a10020  lwc1        $f1, 0x20($a1)
    ctx->pc = 0x31ee70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31ee74: 0xc4c00020  lwc1        $f0, 0x20($a2)
    ctx->pc = 0x31ee74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31ee78: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x31ee78u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x31ee7c: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x31ee7cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x31ee80: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x31ee80u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x31ee84: 0xe4810020  swc1        $f1, 0x20($a0)
    ctx->pc = 0x31ee84u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
    // 0x31ee88: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x31ee88u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x31ee8c: 0x46035034  c.lt.s      $f10, $f3
    ctx->pc = 0x31ee8cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[10], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31ee90: 0x0  nop
    ctx->pc = 0x31ee90u;
    // NOP
    // 0x31ee94: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x31EE94u;
    {
        const bool branch_taken_0x31ee94 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x31EE98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EE94u;
        // 0x31ee98: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ee94) {
            ctx->pc = 0x31EEA0u;
            goto label_31eea0;
        }
    }
    ctx->pc = 0x31EE9Cu;
    // 0x31ee9c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x31ee9cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31eea0:
    // 0x31eea0: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x31EEA0u;
    {
        const bool branch_taken_0x31eea0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31eea0) {
            ctx->pc = 0x31EEE0u;
            goto label_31eee0;
        }
    }
    ctx->pc = 0x31EEA8u;
    // 0x31eea8: 0x46005287  neg.s       $f10, $f10
    ctx->pc = 0x31eea8u;
    ctx->f[10] = FPU_NEG_S(ctx->f[10]);
    // 0x31eeac: 0xc4c10008  lwc1        $f1, 0x8($a2)
    ctx->pc = 0x31eeacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31eeb0: 0xc4c2000c  lwc1        $f2, 0xC($a2)
    ctx->pc = 0x31eeb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x31eeb4: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x31eeb4u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x31eeb8: 0xc4c00010  lwc1        $f0, 0x10($a2)
    ctx->pc = 0x31eeb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31eebc: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x31eebcu;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x31eec0: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x31eec0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x31eec4: 0xe4c10008  swc1        $f1, 0x8($a2)
    ctx->pc = 0x31eec4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
    // 0x31eec8: 0xe4c2000c  swc1        $f2, 0xC($a2)
    ctx->pc = 0x31eec8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 12), bits); }
    // 0x31eecc: 0xe4c00010  swc1        $f0, 0x10($a2)
    ctx->pc = 0x31eeccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 16), bits); }
    // 0x31eed0: 0xc4c10014  lwc1        $f1, 0x14($a2)
    ctx->pc = 0x31eed0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31eed4: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x31eed4u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x31eed8: 0xe4c10014  swc1        $f1, 0x14($a2)
    ctx->pc = 0x31eed8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 20), bits); }
    // 0x31eedc: 0x0  nop
    ctx->pc = 0x31eedcu;
    // NOP
label_31eee0:
    // 0x31eee0: 0xc7808220  lwc1        $f0, -0x7DE0($gp)
    ctx->pc = 0x31eee0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935072)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31eee4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x31eee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31eee8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x31eee8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x31eeec: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x31eeecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x31eef0: 0x460a0036  c.le.s      $f0, $f10
    ctx->pc = 0x31eef0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[10])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31eef4: 0x0  nop
    ctx->pc = 0x31eef4u;
    // NOP
    // 0x31eef8: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x31EEF8u;
    {
        const bool branch_taken_0x31eef8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x31EEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EEF8u;
        // 0x31eefc: 0x460c7b81  sub.s       $f14, $f15, $f12 (Delay Slot)
        ctx->f[14] = FPU_SUB_S(ctx->f[15], ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31eef8) {
            ctx->pc = 0x31EF04u;
            goto label_31ef04;
        }
    }
    ctx->pc = 0x31EF00u;
    // 0x31ef00: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x31ef00u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31ef04:
    // 0x31ef04: 0x544000d6  bnel        $v0, $zero, . + 4 + (0xD6 << 2)
    ctx->pc = 0x31EF04u;
    {
        const bool branch_taken_0x31ef04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31ef04) {
            ctx->pc = 0x31EF08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31EF04u;
            // 0x31ef08: 0xc4a10008  lwc1        $f1, 0x8($a1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x31F260u;
            goto label_31f260;
        }
    }
    ctx->pc = 0x31EF0Cu;
    // 0x31ef0c: 0x44025000  mfc1        $v0, $f10
    ctx->pc = 0x31ef0cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[10], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x31ef10: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x31ef10u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ef14: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x31ef14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
    // 0x31ef18: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x31ef18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x31ef1c: 0x3c023f7f  lui         $v0, 0x3F7F
    ctx->pc = 0x31ef1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16255 << 16));
    // 0x31ef20: 0xe31824  and         $v1, $a3, $v1
    ctx->pc = 0x31ef20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
    // 0x31ef24: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x31ef24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x31ef28: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x31ef28u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x31ef2c: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x31EF2Cu;
    {
        const bool branch_taken_0x31ef2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31ef2c) {
            ctx->pc = 0x31EF30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31EF2Cu;
            // 0x31ef30: 0x3c023eff  lui         $v0, 0x3EFF (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16127 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31EF48u;
            goto label_31ef48;
        }
    }
    ctx->pc = 0x31EF34u;
    // 0x31ef34: 0xc78a80b0  lwc1        $f10, -0x7F50($gp)
    ctx->pc = 0x31ef34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x31ef38: 0x5ce0008f  bgtzl       $a3, . + 4 + (0x8F << 2)
    ctx->pc = 0x31EF38u;
    {
        const bool branch_taken_0x31ef38 = (GPR_S32(ctx, 7) > 0);
        if (branch_taken_0x31ef38) {
            ctx->pc = 0x31EF3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31EF38u;
            // 0x31ef3c: 0x46001a86  mov.s       $f10, $f3 (Delay Slot)
            ctx->f[10] = FPU_MOV_S(ctx->f[3]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x31F178u;
            goto label_31f178;
        }
    }
    ctx->pc = 0x31EF40u;
    // 0x31ef40: 0x1000008f  b           . + 4 + (0x8F << 2)
    ctx->pc = 0x31EF40u;
    {
        const bool branch_taken_0x31ef40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31EF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EF40u;
        // 0x31ef44: 0x460a5042  mul.s       $f1, $f10, $f10 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[10], ctx->f[10]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ef40) {
            ctx->pc = 0x31F180u;
            goto label_31f180;
        }
    }
    ctx->pc = 0x31EF48u;
label_31ef48:
    // 0x31ef48: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x31ef48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x31ef4c: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x31ef4cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x31ef50: 0x1440002c  bnez        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x31EF50u;
    {
        const bool branch_taken_0x31ef50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31EF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EF50u;
        // 0x31ef54: 0x3c022300  lui         $v0, 0x2300 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8960 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ef50) {
            ctx->pc = 0x31F004u;
            goto label_31f004;
        }
    }
    ctx->pc = 0x31EF58u;
    // 0x31ef58: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x31ef58u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x31ef5c: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x31EF5Cu;
    {
        const bool branch_taken_0x31ef5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31ef5c) {
            ctx->pc = 0x31EF60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31EF5Cu;
            // 0x31ef60: 0x460a52c2  mul.s       $f11, $f10, $f10 (Delay Slot)
            ctx->f[11] = FPU_MUL_S(ctx->f[10], ctx->f[10]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x31EF70u;
            goto label_31ef70;
        }
    }
    ctx->pc = 0x31EF64u;
    // 0x31ef64: 0xc78a80b4  lwc1        $f10, -0x7F4C($gp)
    ctx->pc = 0x31ef64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934708)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x31ef68: 0x10000085  b           . + 4 + (0x85 << 2)
    ctx->pc = 0x31EF68u;
    {
        const bool branch_taken_0x31ef68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31EF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EF68u;
        // 0x31ef6c: 0x460a5042  mul.s       $f1, $f10, $f10 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[10], ctx->f[10]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ef68) {
            ctx->pc = 0x31F180u;
            goto label_31f180;
        }
    }
    ctx->pc = 0x31EF70u;
label_31ef70:
    // 0x31ef70: 0xc7808224  lwc1        $f0, -0x7DDC($gp)
    ctx->pc = 0x31ef70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935076)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31ef74: 0xc78380bc  lwc1        $f3, -0x7F44($gp)
    ctx->pc = 0x31ef74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934716)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x31ef78: 0xc78780c0  lwc1        $f7, -0x7F40($gp)
    ctx->pc = 0x31ef78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934720)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x31ef7c: 0x46005802  mul.s       $f0, $f11, $f0
    ctx->pc = 0x31ef7cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[11], ctx->f[0]);
    // 0x31ef80: 0xc78180c4  lwc1        $f1, -0x7F3C($gp)
    ctx->pc = 0x31ef80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934724)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31ef84: 0xc78281d0  lwc1        $f2, -0x7E30($gp)
    ctx->pc = 0x31ef84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x31ef88: 0x46015842  mul.s       $f1, $f11, $f1
    ctx->pc = 0x31ef88u;
    ctx->f[1] = FPU_MUL_S(ctx->f[11], ctx->f[1]);
    // 0x31ef8c: 0xc7858228  lwc1        $f5, -0x7DD8($gp)
    ctx->pc = 0x31ef8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935080)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x31ef90: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x31ef90u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x31ef94: 0xc78481d8  lwc1        $f4, -0x7E28($gp)
    ctx->pc = 0x31ef94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x31ef98: 0xc78880d4  lwc1        $f8, -0x7F2C($gp)
    ctx->pc = 0x31ef98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x31ef9c: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x31ef9cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x31efa0: 0xc78380d8  lwc1        $f3, -0x7F28($gp)
    ctx->pc = 0x31efa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x31efa4: 0x46005802  mul.s       $f0, $f11, $f0
    ctx->pc = 0x31efa4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[11], ctx->f[0]);
    // 0x31efa8: 0xc78680dc  lwc1        $f6, -0x7F24($gp)
    ctx->pc = 0x31efa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934748)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x31efac: 0xc78280e0  lwc1        $f2, -0x7F20($gp)
    ctx->pc = 0x31efacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x31efb0: 0x46015842  mul.s       $f1, $f11, $f1
    ctx->pc = 0x31efb0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[11], ctx->f[1]);
    // 0x31efb4: 0xc78980e4  lwc1        $f9, -0x7F1C($gp)
    ctx->pc = 0x31efb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934756)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x31efb8: 0x46070000  add.s       $f0, $f0, $f7
    ctx->pc = 0x31efb8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[7]);
    // 0x31efbc: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x31efbcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x31efc0: 0x46005802  mul.s       $f0, $f11, $f0
    ctx->pc = 0x31efc0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[11], ctx->f[0]);
    // 0x31efc4: 0x46015842  mul.s       $f1, $f11, $f1
    ctx->pc = 0x31efc4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[11], ctx->f[1]);
    // 0x31efc8: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x31efc8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x31efcc: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x31efccu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x31efd0: 0x46005802  mul.s       $f0, $f11, $f0
    ctx->pc = 0x31efd0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[11], ctx->f[0]);
    // 0x31efd4: 0x46015842  mul.s       $f1, $f11, $f1
    ctx->pc = 0x31efd4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[11], ctx->f[1]);
    // 0x31efd8: 0x46080000  add.s       $f0, $f0, $f8
    ctx->pc = 0x31efd8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[8]);
    // 0x31efdc: 0x460f0840  add.s       $f1, $f1, $f15
    ctx->pc = 0x31efdcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[15]);
    // 0x31efe0: 0x46005802  mul.s       $f0, $f11, $f0
    ctx->pc = 0x31efe0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[11], ctx->f[0]);
    // 0x31efe4: 0x46060000  add.s       $f0, $f0, $f6
    ctx->pc = 0x31efe4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[6]);
    // 0x31efe8: 0x46005802  mul.s       $f0, $f11, $f0
    ctx->pc = 0x31efe8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[11], ctx->f[0]);
    // 0x31efec: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x31efecu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x31eff0: 0x46005002  mul.s       $f0, $f10, $f0
    ctx->pc = 0x31eff0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[10], ctx->f[0]);
    // 0x31eff4: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x31eff4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x31eff8: 0x46025081  sub.s       $f2, $f10, $f2
    ctx->pc = 0x31eff8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[10], ctx->f[2]);
    // 0x31effc: 0x1000005e  b           . + 4 + (0x5E << 2)
    ctx->pc = 0x31EFFCu;
    {
        const bool branch_taken_0x31effc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31F000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EFFCu;
        // 0x31f000: 0x46024a81  sub.s       $f10, $f9, $f2 (Delay Slot)
        ctx->f[10] = FPU_SUB_S(ctx->f[9], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31effc) {
            ctx->pc = 0x31F178u;
            goto label_31f178;
        }
    }
    ctx->pc = 0x31F004u;
label_31f004:
    // 0x31f004: 0x4e3002c  bgezl       $a3, . + 4 + (0x2C << 2)
    ctx->pc = 0x31F004u;
    {
        const bool branch_taken_0x31f004 = (GPR_S32(ctx, 7) >= 0);
        if (branch_taken_0x31f004) {
            ctx->pc = 0x31F008u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31F004u;
            // 0x31f008: 0x460a7841  sub.s       $f1, $f15, $f10 (Delay Slot)
            ctx->f[1] = FPU_SUB_S(ctx->f[15], ctx->f[10]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x31F0B8u;
            goto label_31f0b8;
        }
    }
    ctx->pc = 0x31F00Cu;
    // 0x31f00c: 0x460f5080  add.s       $f2, $f10, $f15
    ctx->pc = 0x31f00cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[10], ctx->f[15]);
    // 0x31f010: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x31f010u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x31f014: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x31f014u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x31f018: 0xc7808224  lwc1        $f0, -0x7DDC($gp)
    ctx->pc = 0x31f018u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935076)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31f01c: 0xc78480bc  lwc1        $f4, -0x7F44($gp)
    ctx->pc = 0x31f01cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934716)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x31f020: 0x460112c2  mul.s       $f11, $f2, $f1
    ctx->pc = 0x31f020u;
    ctx->f[11] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x31f024: 0xc78680c0  lwc1        $f6, -0x7F40($gp)
    ctx->pc = 0x31f024u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934720)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x31f028: 0xc78180c4  lwc1        $f1, -0x7F3C($gp)
    ctx->pc = 0x31f028u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934724)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31f02c: 0xc78281d0  lwc1        $f2, -0x7E30($gp)
    ctx->pc = 0x31f02cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x31f030: 0x46005802  mul.s       $f0, $f11, $f0
    ctx->pc = 0x31f030u;
    ctx->f[0] = FPU_MUL_S(ctx->f[11], ctx->f[0]);
    // 0x31f034: 0xc7878228  lwc1        $f7, -0x7DD8($gp)
    ctx->pc = 0x31f034u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935080)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x31f038: 0x46015842  mul.s       $f1, $f11, $f1
    ctx->pc = 0x31f038u;
    ctx->f[1] = FPU_MUL_S(ctx->f[11], ctx->f[1]);
    // 0x31f03c: 0xc78381d8  lwc1        $f3, -0x7E28($gp)
    ctx->pc = 0x31f03cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x31f040: 0xc78880d4  lwc1        $f8, -0x7F2C($gp)
    ctx->pc = 0x31f040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x31f044: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x31f044u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x31f048: 0xc78580d8  lwc1        $f5, -0x7F28($gp)
    ctx->pc = 0x31f048u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x31f04c: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x31f04cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x31f050: 0xc78480dc  lwc1        $f4, -0x7F24($gp)
    ctx->pc = 0x31f050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934748)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x31f054: 0x46005802  mul.s       $f0, $f11, $f0
    ctx->pc = 0x31f054u;
    ctx->f[0] = FPU_MUL_S(ctx->f[11], ctx->f[0]);
    // 0x31f058: 0x46015842  mul.s       $f1, $f11, $f1
    ctx->pc = 0x31f058u;
    ctx->f[1] = FPU_MUL_S(ctx->f[11], ctx->f[1]);
    // 0x31f05c: 0x46060000  add.s       $f0, $f0, $f6
    ctx->pc = 0x31f05cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[6]);
    // 0x31f060: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x31f060u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x31f064: 0x46005802  mul.s       $f0, $f11, $f0
    ctx->pc = 0x31f064u;
    ctx->f[0] = FPU_MUL_S(ctx->f[11], ctx->f[0]);
    // 0x31f068: 0x46015842  mul.s       $f1, $f11, $f1
    ctx->pc = 0x31f068u;
    ctx->f[1] = FPU_MUL_S(ctx->f[11], ctx->f[1]);
    // 0x31f06c: 0x46070000  add.s       $f0, $f0, $f7
    ctx->pc = 0x31f06cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[7]);
    // 0x31f070: 0x46050840  add.s       $f1, $f1, $f5
    ctx->pc = 0x31f070u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[5]);
    // 0x31f074: 0x46005802  mul.s       $f0, $f11, $f0
    ctx->pc = 0x31f074u;
    ctx->f[0] = FPU_MUL_S(ctx->f[11], ctx->f[0]);
    // 0x31f078: 0x46015842  mul.s       $f1, $f11, $f1
    ctx->pc = 0x31f078u;
    ctx->f[1] = FPU_MUL_S(ctx->f[11], ctx->f[1]);
    // 0x31f07c: 0x46080000  add.s       $f0, $f0, $f8
    ctx->pc = 0x31f07cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[8]);
    // 0x31f080: 0x460f0840  add.s       $f1, $f1, $f15
    ctx->pc = 0x31f080u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[15]);
    // 0x31f084: 0x46005802  mul.s       $f0, $f11, $f0
    ctx->pc = 0x31f084u;
    ctx->f[0] = FPU_MUL_S(ctx->f[11], ctx->f[0]);
    // 0x31f088: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x31f088u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x31f08c: 0x46005802  mul.s       $f0, $f11, $f0
    ctx->pc = 0x31f08cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[11], ctx->f[0]);
    // 0x31f090: 0x460b0344  c1          0xB0344
    ctx->pc = 0x31f090u;
    ctx->f[13] = FPU_SQRT_S(ctx->f[0]);
    // 0x31f094: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x31f094u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x31f098: 0xc78280e0  lwc1        $f2, -0x7F20($gp)
    ctx->pc = 0x31f098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x31f09c: 0xc78380e8  lwc1        $f3, -0x7F18($gp)
    ctx->pc = 0x31f09cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934760)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x31f0a0: 0x460d0042  mul.s       $f1, $f0, $f13
    ctx->pc = 0x31f0a0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[13]);
    // 0x31f0a4: 0x46020801  sub.s       $f0, $f1, $f2
    ctx->pc = 0x31f0a4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x31f0a8: 0x46006800  add.s       $f0, $f13, $f0
    ctx->pc = 0x31f0a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[13], ctx->f[0]);
    // 0x31f0ac: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x31f0acu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x31f0b0: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x31F0B0u;
    {
        const bool branch_taken_0x31f0b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31F0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F0B0u;
        // 0x31f0b4: 0x46001a81  sub.s       $f10, $f3, $f0 (Delay Slot)
        ctx->f[10] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f0b0) {
            ctx->pc = 0x31F178u;
            goto label_31f178;
        }
    }
    ctx->pc = 0x31F0B8u;
label_31f0b8:
    // 0x31f0b8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x31f0b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x31f0bc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x31f0bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31f0c0: 0x46000ac2  mul.s       $f11, $f1, $f0
    ctx->pc = 0x31f0c0u;
    ctx->f[11] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x31f0c4: 0x460b0344  c1          0xB0344
    ctx->pc = 0x31f0c4u;
    ctx->f[13] = FPU_SQRT_S(ctx->f[0]);
    // 0x31f0c8: 0x44026800  mfc1        $v0, $f13
    ctx->pc = 0x31f0c8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[13], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x31f0cc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x31f0ccu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31f0d0: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x31f0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x31f0d4: 0x3442f000  ori         $v0, $v0, 0xF000
    ctx->pc = 0x31f0d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61440);
    // 0x31f0d8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x31f0d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x31f0dc: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x31f0dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x31f0e0: 0x46021142  mul.s       $f5, $f2, $f2
    ctx->pc = 0x31f0e0u;
    ctx->f[5] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x31f0e4: 0xc7808224  lwc1        $f0, -0x7DDC($gp)
    ctx->pc = 0x31f0e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935076)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31f0e8: 0xc78480bc  lwc1        $f4, -0x7F44($gp)
    ctx->pc = 0x31f0e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934716)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x31f0ec: 0x46005802  mul.s       $f0, $f11, $f0
    ctx->pc = 0x31f0ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[11], ctx->f[0]);
    // 0x31f0f0: 0xc78a80c0  lwc1        $f10, -0x7F40($gp)
    ctx->pc = 0x31f0f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934720)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x31f0f4: 0xc78180c4  lwc1        $f1, -0x7F3C($gp)
    ctx->pc = 0x31f0f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934724)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31f0f8: 0x460268c0  add.s       $f3, $f13, $f2
    ctx->pc = 0x31f0f8u;
    ctx->f[3] = FPU_ADD_S(ctx->f[13], ctx->f[2]);
    // 0x31f0fc: 0xc78681d0  lwc1        $f6, -0x7E30($gp)
    ctx->pc = 0x31f0fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x31f100: 0x46055941  sub.s       $f5, $f11, $f5
    ctx->pc = 0x31f100u;
    ctx->f[5] = FPU_SUB_S(ctx->f[11], ctx->f[5]);
    // 0x31f104: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x31f104u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x31f108: 0xc7878228  lwc1        $f7, -0x7DD8($gp)
    ctx->pc = 0x31f108u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935080)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x31f10c: 0x46015842  mul.s       $f1, $f11, $f1
    ctx->pc = 0x31f10cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[11], ctx->f[1]);
    // 0x31f110: 0xc78481d8  lwc1        $f4, -0x7E28($gp)
    ctx->pc = 0x31f110u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x31f114: 0xc78980d4  lwc1        $f9, -0x7F2C($gp)
    ctx->pc = 0x31f114u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x31f118: 0x46032943  div.s       $f5, $f5, $f3
    ctx->pc = 0x31f118u;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[5] = FPU_DIV_S(ctx->f[5], ctx->f[3]); }
    // 0x31f11c: 0x46005802  mul.s       $f0, $f11, $f0
    ctx->pc = 0x31f11cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[11], ctx->f[0]);
    // 0x31f120: 0xc78380d8  lwc1        $f3, -0x7F28($gp)
    ctx->pc = 0x31f120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x31f124: 0x46060840  add.s       $f1, $f1, $f6
    ctx->pc = 0x31f124u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[6]);
    // 0x31f128: 0xc78880dc  lwc1        $f8, -0x7F24($gp)
    ctx->pc = 0x31f128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934748)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x31f12c: 0x460a0000  add.s       $f0, $f0, $f10
    ctx->pc = 0x31f12cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[10]);
    // 0x31f130: 0x46015842  mul.s       $f1, $f11, $f1
    ctx->pc = 0x31f130u;
    ctx->f[1] = FPU_MUL_S(ctx->f[11], ctx->f[1]);
    // 0x31f134: 0x46005802  mul.s       $f0, $f11, $f0
    ctx->pc = 0x31f134u;
    ctx->f[0] = FPU_MUL_S(ctx->f[11], ctx->f[0]);
    // 0x31f138: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x31f138u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x31f13c: 0x46070000  add.s       $f0, $f0, $f7
    ctx->pc = 0x31f13cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[7]);
    // 0x31f140: 0x46015842  mul.s       $f1, $f11, $f1
    ctx->pc = 0x31f140u;
    ctx->f[1] = FPU_MUL_S(ctx->f[11], ctx->f[1]);
    // 0x31f144: 0x46005802  mul.s       $f0, $f11, $f0
    ctx->pc = 0x31f144u;
    ctx->f[0] = FPU_MUL_S(ctx->f[11], ctx->f[0]);
    // 0x31f148: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x31f148u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x31f14c: 0x46090000  add.s       $f0, $f0, $f9
    ctx->pc = 0x31f14cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[9]);
    // 0x31f150: 0x46015842  mul.s       $f1, $f11, $f1
    ctx->pc = 0x31f150u;
    ctx->f[1] = FPU_MUL_S(ctx->f[11], ctx->f[1]);
    // 0x31f154: 0x46005802  mul.s       $f0, $f11, $f0
    ctx->pc = 0x31f154u;
    ctx->f[0] = FPU_MUL_S(ctx->f[11], ctx->f[0]);
    // 0x31f158: 0x460f0840  add.s       $f1, $f1, $f15
    ctx->pc = 0x31f158u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[15]);
    // 0x31f15c: 0x46080000  add.s       $f0, $f0, $f8
    ctx->pc = 0x31f15cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[8]);
    // 0x31f160: 0x46005802  mul.s       $f0, $f11, $f0
    ctx->pc = 0x31f160u;
    ctx->f[0] = FPU_MUL_S(ctx->f[11], ctx->f[0]);
    // 0x31f164: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x31f164u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x31f168: 0x460d0002  mul.s       $f0, $f0, $f13
    ctx->pc = 0x31f168u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[13]);
    // 0x31f16c: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x31f16cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x31f170: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x31f170u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x31f174: 0x46021280  add.s       $f10, $f2, $f2
    ctx->pc = 0x31f174u;
    ctx->f[10] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_31f178:
    // 0x31f178: 0x460a5042  mul.s       $f1, $f10, $f10
    ctx->pc = 0x31f178u;
    ctx->f[1] = FPU_MUL_S(ctx->f[10], ctx->f[10]);
    // 0x31f17c: 0x0  nop
    ctx->pc = 0x31f17cu;
    // NOP
label_31f180:
    // 0x31f180: 0xc782822c  lwc1        $f2, -0x7DD4($gp)
    ctx->pc = 0x31f180u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935084)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x31f184: 0xc78581e4  lwc1        $f5, -0x7E1C($gp)
    ctx->pc = 0x31f184u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935012)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x31f188: 0xc78681e8  lwc1        $f6, -0x7E18($gp)
    ctx->pc = 0x31f188u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935016)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x31f18c: 0x46020802  mul.s       $f0, $f1, $f2
    ctx->pc = 0x31f18cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x31f190: 0xc78781ec  lwc1        $f7, -0x7E14($gp)
    ctx->pc = 0x31f190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935020)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x31f194: 0xc78881f0  lwc1        $f8, -0x7E10($gp)
    ctx->pc = 0x31f194u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935024)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x31f198: 0x460a0902  mul.s       $f4, $f1, $f10
    ctx->pc = 0x31f198u;
    ctx->f[4] = FPU_MUL_S(ctx->f[1], ctx->f[10]);
    // 0x31f19c: 0xc78981f4  lwc1        $f9, -0x7E0C($gp)
    ctx->pc = 0x31f19cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935028)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x31f1a0: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x31f1a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x31f1a4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x31f1a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x31f1a8: 0x46060000  add.s       $f0, $f0, $f6
    ctx->pc = 0x31f1a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[6]);
    // 0x31f1ac: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x31f1acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x31f1b0: 0x46070000  add.s       $f0, $f0, $f7
    ctx->pc = 0x31f1b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[7]);
    // 0x31f1b4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x31f1b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x31f1b8: 0x46080000  add.s       $f0, $f0, $f8
    ctx->pc = 0x31f1b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[8]);
    // 0x31f1bc: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x31f1bcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x31f1c0: 0x46090840  add.s       $f1, $f1, $f9
    ctx->pc = 0x31f1c0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[9]);
    // 0x31f1c4: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->pc = 0x31f1c4u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x31f1c8: 0x46045100  add.s       $f4, $f10, $f4
    ctx->pc = 0x31f1c8u;
    ctx->f[4] = FPU_ADD_S(ctx->f[10], ctx->f[4]);
    // 0x31f1cc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x31f1ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x31f1d0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x31f1d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31f1d4: 0x46040103  div.s       $f4, $f0, $f4
    ctx->pc = 0x31f1d4u;
    { if (ctx->f[4] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = FPU_DIV_S(ctx->f[0], ctx->f[4]); }
    // 0x31f1d8: 0x460a7382  mul.s       $f14, $f14, $f10
    ctx->pc = 0x31f1d8u;
    ctx->f[14] = FPU_MUL_S(ctx->f[14], ctx->f[10]);
    // 0x31f1dc: 0x460e7042  mul.s       $f1, $f14, $f14
    ctx->pc = 0x31f1dcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[14], ctx->f[14]);
    // 0x31f1e0: 0x46020802  mul.s       $f0, $f1, $f2
    ctx->pc = 0x31f1e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x31f1e4: 0x460e08c2  mul.s       $f3, $f1, $f14
    ctx->pc = 0x31f1e4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[14]);
    // 0x31f1e8: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x31f1e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x31f1ec: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x31f1ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x31f1f0: 0x46060000  add.s       $f0, $f0, $f6
    ctx->pc = 0x31f1f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[6]);
    // 0x31f1f4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x31f1f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x31f1f8: 0x46070000  add.s       $f0, $f0, $f7
    ctx->pc = 0x31f1f8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[7]);
    // 0x31f1fc: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x31f1fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x31f200: 0x46080000  add.s       $f0, $f0, $f8
    ctx->pc = 0x31f200u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[8]);
    // 0x31f204: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x31f204u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x31f208: 0x46090840  add.s       $f1, $f1, $f9
    ctx->pc = 0x31f208u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[9]);
    // 0x31f20c: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x31f20cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x31f210: 0x46037380  add.s       $f14, $f14, $f3
    ctx->pc = 0x31f210u;
    ctx->f[14] = FPU_ADD_S(ctx->f[14], ctx->f[3]);
    // 0x31f214: 0x46047382  mul.s       $f14, $f14, $f4
    ctx->pc = 0x31f214u;
    ctx->f[14] = FPU_MUL_S(ctx->f[14], ctx->f[4]);
    // 0x31f218: 0x460a6302  mul.s       $f12, $f12, $f10
    ctx->pc = 0x31f218u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[10]);
    // 0x31f21c: 0x460c6002  mul.s       $f0, $f12, $f12
    ctx->pc = 0x31f21cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x31f220: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x31f220u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x31f224: 0x460c0042  mul.s       $f1, $f0, $f12
    ctx->pc = 0x31f224u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x31f228: 0x46051080  add.s       $f2, $f2, $f5
    ctx->pc = 0x31f228u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[5]);
    // 0x31f22c: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x31f22cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x31f230: 0x46061080  add.s       $f2, $f2, $f6
    ctx->pc = 0x31f230u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[6]);
    // 0x31f234: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x31f234u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x31f238: 0x46071080  add.s       $f2, $f2, $f7
    ctx->pc = 0x31f238u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[7]);
    // 0x31f23c: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x31f23cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x31f240: 0x46081080  add.s       $f2, $f2, $f8
    ctx->pc = 0x31f240u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[8]);
    // 0x31f244: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x31f244u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x31f248: 0x46090000  add.s       $f0, $f0, $f9
    ctx->pc = 0x31f248u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[9]);
    // 0x31f24c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x31f24cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x31f250: 0x46016300  add.s       $f12, $f12, $f1
    ctx->pc = 0x31f250u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[1]);
    // 0x31f254: 0x46046302  mul.s       $f12, $f12, $f4
    ctx->pc = 0x31f254u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[4]);
    // 0x31f258: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x31f258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31f25c: 0x0  nop
    ctx->pc = 0x31f25cu;
    // NOP
label_31f260:
    // 0x31f260: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x31f260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31f264: 0x46017042  mul.s       $f1, $f14, $f1
    ctx->pc = 0x31f264u;
    ctx->f[1] = FPU_MUL_S(ctx->f[14], ctx->f[1]);
    // 0x31f268: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x31f268u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x31f26c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x31f26cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x31f270: 0xe4810008  swc1        $f1, 0x8($a0)
    ctx->pc = 0x31f270u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x31f274: 0xc4a2000c  lwc1        $f2, 0xC($a1)
    ctx->pc = 0x31f274u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x31f278: 0xc4c0000c  lwc1        $f0, 0xC($a2)
    ctx->pc = 0x31f278u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31f27c: 0x46027082  mul.s       $f2, $f14, $f2
    ctx->pc = 0x31f27cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[14], ctx->f[2]);
    // 0x31f280: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x31f280u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x31f284: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x31f284u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x31f288: 0xe482000c  swc1        $f2, 0xC($a0)
    ctx->pc = 0x31f288u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x31f28c: 0xc4a10010  lwc1        $f1, 0x10($a1)
    ctx->pc = 0x31f28cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31f290: 0xc4c00010  lwc1        $f0, 0x10($a2)
    ctx->pc = 0x31f290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31f294: 0x46017042  mul.s       $f1, $f14, $f1
    ctx->pc = 0x31f294u;
    ctx->f[1] = FPU_MUL_S(ctx->f[14], ctx->f[1]);
    // 0x31f298: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x31f298u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x31f29c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x31f29cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x31f2a0: 0xe4810010  swc1        $f1, 0x10($a0)
    ctx->pc = 0x31f2a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x31f2a4: 0xc4a20014  lwc1        $f2, 0x14($a1)
    ctx->pc = 0x31f2a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x31f2a8: 0xc4c00014  lwc1        $f0, 0x14($a2)
    ctx->pc = 0x31f2a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31f2ac: 0x46027082  mul.s       $f2, $f14, $f2
    ctx->pc = 0x31f2acu;
    ctx->f[2] = FPU_MUL_S(ctx->f[14], ctx->f[2]);
    // 0x31f2b0: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x31f2b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x31f2b4: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x31f2b4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x31f2b8: 0x3e00008  jr          $ra
    ctx->pc = 0x31F2B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31F2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F2B8u;
        // 0x31f2bc: 0xe4820014  swc1        $f2, 0x14($a0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31F2B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31F2C0u;
}
