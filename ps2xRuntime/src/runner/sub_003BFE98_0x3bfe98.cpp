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

// Function: sub_003BFE98
// Address: 0x3bfe98 - 0x3c0358
void sub_003BFE98_0x3bfe98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003BFE98_0x3bfe98");
#endif

    ctx->pc = 0x3bfe98u;

    // 0x3bfe98: 0xc4c30008  lwc1        $f3, 0x8($a2)
    ctx->pc = 0x3bfe98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3bfe9c: 0xc4c2000c  lwc1        $f2, 0xC($a2)
    ctx->pc = 0x3bfe9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3bfea0: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x3bfea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3bfea4: 0xc4a5000c  lwc1        $f5, 0xC($a1)
    ctx->pc = 0x3bfea4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x3bfea8: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x3bfea8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x3bfeac: 0xc4a00010  lwc1        $f0, 0x10($a1)
    ctx->pc = 0x3bfeacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3bfeb0: 0x46022942  mul.s       $f5, $f5, $f2
    ctx->pc = 0x3bfeb0u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x3bfeb4: 0xc4c30010  lwc1        $f3, 0x10($a2)
    ctx->pc = 0x3bfeb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3bfeb8: 0xc4a20014  lwc1        $f2, 0x14($a1)
    ctx->pc = 0x3bfeb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3bfebc: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x3bfebcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x3bfec0: 0xc4c40014  lwc1        $f4, 0x14($a2)
    ctx->pc = 0x3bfec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x3bfec4: 0x46050840  add.s       $f1, $f1, $f5
    ctx->pc = 0x3bfec4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[5]);
    // 0x3bfec8: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x3bfec8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x3bfecc: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x3bfeccu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x3bfed0: 0x46020a80  add.s       $f10, $f1, $f2
    ctx->pc = 0x3bfed0u;
    ctx->f[10] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x3bfed4: 0xc4c00018  lwc1        $f0, 0x18($a2)
    ctx->pc = 0x3bfed4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3bfed8: 0xc4a10018  lwc1        $f1, 0x18($a1)
    ctx->pc = 0x3bfed8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3bfedc: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x3bfedcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x3bfee0: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x3bfee0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x3bfee4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x3bfee4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x3bfee8: 0xe4810018  swc1        $f1, 0x18($a0)
    ctx->pc = 0x3bfee8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x3bfeec: 0xc4a2001c  lwc1        $f2, 0x1C($a1)
    ctx->pc = 0x3bfeecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3bfef0: 0xc4c0001c  lwc1        $f0, 0x1C($a2)
    ctx->pc = 0x3bfef0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3bfef4: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x3bfef4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x3bfef8: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x3bfef8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x3bfefc: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x3bfefcu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x3bff00: 0xe482001c  swc1        $f2, 0x1C($a0)
    ctx->pc = 0x3bff00u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 28), bits); }
    // 0x3bff04: 0xc4a10020  lwc1        $f1, 0x20($a1)
    ctx->pc = 0x3bff04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3bff08: 0xc4c00020  lwc1        $f0, 0x20($a2)
    ctx->pc = 0x3bff08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3bff0c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x3bff0cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x3bff10: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x3bff10u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x3bff14: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x3bff14u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x3bff18: 0xe4810020  swc1        $f1, 0x20($a0)
    ctx->pc = 0x3bff18u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
    // 0x3bff1c: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x3bff1cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3bff20: 0x46035034  c.lt.s      $f10, $f3
    ctx->pc = 0x3bff20u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[10], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3bff24: 0x0  nop
    ctx->pc = 0x3bff24u;
    // NOP
    // 0x3bff28: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x3BFF28u;
    {
        const bool branch_taken_0x3bff28 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3BFF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BFF28u;
        // 0x3bff2c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bff28) {
            ctx->pc = 0x3BFF38u;
            goto label_3bff38;
        }
    }
    ctx->pc = 0x3BFF30u;
    // 0x3bff30: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3bff30u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bff34: 0x0  nop
    ctx->pc = 0x3bff34u;
    // NOP
label_3bff38:
    // 0x3bff38: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x3BFF38u;
    {
        const bool branch_taken_0x3bff38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3bff38) {
            ctx->pc = 0x3BFF78u;
            goto label_3bff78;
        }
    }
    ctx->pc = 0x3BFF40u;
    // 0x3bff40: 0x46005287  neg.s       $f10, $f10
    ctx->pc = 0x3bff40u;
    ctx->f[10] = FPU_NEG_S(ctx->f[10]);
    // 0x3bff44: 0xc4c10008  lwc1        $f1, 0x8($a2)
    ctx->pc = 0x3bff44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3bff48: 0xc4c2000c  lwc1        $f2, 0xC($a2)
    ctx->pc = 0x3bff48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3bff4c: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x3bff4cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x3bff50: 0xc4c00010  lwc1        $f0, 0x10($a2)
    ctx->pc = 0x3bff50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3bff54: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x3bff54u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x3bff58: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x3bff58u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x3bff5c: 0xe4c10008  swc1        $f1, 0x8($a2)
    ctx->pc = 0x3bff5cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
    // 0x3bff60: 0xe4c2000c  swc1        $f2, 0xC($a2)
    ctx->pc = 0x3bff60u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 12), bits); }
    // 0x3bff64: 0xe4c00010  swc1        $f0, 0x10($a2)
    ctx->pc = 0x3bff64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 16), bits); }
    // 0x3bff68: 0xc4c10014  lwc1        $f1, 0x14($a2)
    ctx->pc = 0x3bff68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3bff6c: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x3bff6cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x3bff70: 0xe4c10014  swc1        $f1, 0x14($a2)
    ctx->pc = 0x3bff70u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 20), bits); }
    // 0x3bff74: 0x0  nop
    ctx->pc = 0x3bff74u;
    // NOP
label_3bff78:
    // 0x3bff78: 0xc7808220  lwc1        $f0, -0x7DE0($gp)
    ctx->pc = 0x3bff78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935072)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3bff7c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3bff7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3bff80: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3bff80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x3bff84: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x3bff84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x3bff88: 0x460a0036  c.le.s      $f0, $f10
    ctx->pc = 0x3bff88u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[10])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3bff8c: 0x0  nop
    ctx->pc = 0x3bff8cu;
    // NOP
    // 0x3bff90: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x3BFF90u;
    {
        const bool branch_taken_0x3bff90 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3BFF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BFF90u;
        // 0x3bff94: 0x460c7b81  sub.s       $f14, $f15, $f12 (Delay Slot)
        ctx->f[14] = FPU_SUB_S(ctx->f[15], ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bff90) {
            ctx->pc = 0x3BFF9Cu;
            goto label_3bff9c;
        }
    }
    ctx->pc = 0x3BFF98u;
    // 0x3bff98: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3bff98u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3bff9c:
    // 0x3bff9c: 0x544000d6  bnel        $v0, $zero, . + 4 + (0xD6 << 2)
    ctx->pc = 0x3BFF9Cu;
    {
        const bool branch_taken_0x3bff9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3bff9c) {
            ctx->pc = 0x3BFFA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3BFF9Cu;
            // 0x3bffa0: 0xc4a10008  lwc1        $f1, 0x8($a1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C02F8u;
            goto label_3c02f8;
        }
    }
    ctx->pc = 0x3BFFA4u;
    // 0x3bffa4: 0x44025000  mfc1        $v0, $f10
    ctx->pc = 0x3bffa4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[10], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x3bffa8: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x3bffa8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bffac: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x3bffacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
    // 0x3bffb0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x3bffb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x3bffb4: 0x3c023f7f  lui         $v0, 0x3F7F
    ctx->pc = 0x3bffb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16255 << 16));
    // 0x3bffb8: 0xe31824  and         $v1, $a3, $v1
    ctx->pc = 0x3bffb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
    // 0x3bffbc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3bffbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3bffc0: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x3bffc0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x3bffc4: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x3BFFC4u;
    {
        const bool branch_taken_0x3bffc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3bffc4) {
            ctx->pc = 0x3BFFC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3BFFC4u;
            // 0x3bffc8: 0x3c023eff  lui         $v0, 0x3EFF (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16127 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3BFFE0u;
            goto label_3bffe0;
        }
    }
    ctx->pc = 0x3BFFCCu;
    // 0x3bffcc: 0xc78a80b0  lwc1        $f10, -0x7F50($gp)
    ctx->pc = 0x3bffccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x3bffd0: 0x5ce0008f  bgtzl       $a3, . + 4 + (0x8F << 2)
    ctx->pc = 0x3BFFD0u;
    {
        const bool branch_taken_0x3bffd0 = (GPR_S32(ctx, 7) > 0);
        if (branch_taken_0x3bffd0) {
            ctx->pc = 0x3BFFD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3BFFD0u;
            // 0x3bffd4: 0x46001a86  mov.s       $f10, $f3 (Delay Slot)
            ctx->f[10] = FPU_MOV_S(ctx->f[3]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C0210u;
            goto label_3c0210;
        }
    }
    ctx->pc = 0x3BFFD8u;
    // 0x3bffd8: 0x1000008f  b           . + 4 + (0x8F << 2)
    ctx->pc = 0x3BFFD8u;
    {
        const bool branch_taken_0x3bffd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BFFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BFFD8u;
        // 0x3bffdc: 0x460a5042  mul.s       $f1, $f10, $f10 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[10], ctx->f[10]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bffd8) {
            ctx->pc = 0x3C0218u;
            goto label_3c0218;
        }
    }
    ctx->pc = 0x3BFFE0u;
label_3bffe0:
    // 0x3bffe0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3bffe0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3bffe4: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x3bffe4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x3bffe8: 0x1440002c  bnez        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x3BFFE8u;
    {
        const bool branch_taken_0x3bffe8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3BFFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BFFE8u;
        // 0x3bffec: 0x3c022300  lui         $v0, 0x2300 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8960 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bffe8) {
            ctx->pc = 0x3C009Cu;
            goto label_3c009c;
        }
    }
    ctx->pc = 0x3BFFF0u;
    // 0x3bfff0: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x3bfff0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x3bfff4: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3BFFF4u;
    {
        const bool branch_taken_0x3bfff4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3bfff4) {
            ctx->pc = 0x3BFFF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3BFFF4u;
            // 0x3bfff8: 0x460a52c2  mul.s       $f11, $f10, $f10 (Delay Slot)
            ctx->f[11] = FPU_MUL_S(ctx->f[10], ctx->f[10]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C0008u;
            goto label_3c0008;
        }
    }
    ctx->pc = 0x3BFFFCu;
    // 0x3bfffc: 0xc78a80b4  lwc1        $f10, -0x7F4C($gp)
    ctx->pc = 0x3bfffcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934708)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x3c0000: 0x10000085  b           . + 4 + (0x85 << 2)
    ctx->pc = 0x3C0000u;
    {
        const bool branch_taken_0x3c0000 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C0004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0000u;
        // 0x3c0004: 0x460a5042  mul.s       $f1, $f10, $f10 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[10], ctx->f[10]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c0000) {
            ctx->pc = 0x3C0218u;
            goto label_3c0218;
        }
    }
    ctx->pc = 0x3C0008u;
label_3c0008:
    // 0x3c0008: 0xc7808224  lwc1        $f0, -0x7DDC($gp)
    ctx->pc = 0x3c0008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935076)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c000c: 0xc78380bc  lwc1        $f3, -0x7F44($gp)
    ctx->pc = 0x3c000cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934716)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3c0010: 0xc78780c0  lwc1        $f7, -0x7F40($gp)
    ctx->pc = 0x3c0010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934720)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x3c0014: 0x46005802  mul.s       $f0, $f11, $f0
    ctx->pc = 0x3c0014u;
    ctx->f[0] = FPU_MUL_S(ctx->f[11], ctx->f[0]);
    // 0x3c0018: 0xc78180c4  lwc1        $f1, -0x7F3C($gp)
    ctx->pc = 0x3c0018u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934724)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3c001c: 0xc78281d0  lwc1        $f2, -0x7E30($gp)
    ctx->pc = 0x3c001cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3c0020: 0x46015842  mul.s       $f1, $f11, $f1
    ctx->pc = 0x3c0020u;
    ctx->f[1] = FPU_MUL_S(ctx->f[11], ctx->f[1]);
    // 0x3c0024: 0xc7858228  lwc1        $f5, -0x7DD8($gp)
    ctx->pc = 0x3c0024u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935080)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x3c0028: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x3c0028u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x3c002c: 0xc78481d8  lwc1        $f4, -0x7E28($gp)
    ctx->pc = 0x3c002cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x3c0030: 0xc78880d4  lwc1        $f8, -0x7F2C($gp)
    ctx->pc = 0x3c0030u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x3c0034: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x3c0034u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x3c0038: 0xc78380d8  lwc1        $f3, -0x7F28($gp)
    ctx->pc = 0x3c0038u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3c003c: 0x46005802  mul.s       $f0, $f11, $f0
    ctx->pc = 0x3c003cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[11], ctx->f[0]);
    // 0x3c0040: 0xc78680dc  lwc1        $f6, -0x7F24($gp)
    ctx->pc = 0x3c0040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934748)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x3c0044: 0xc78280e0  lwc1        $f2, -0x7F20($gp)
    ctx->pc = 0x3c0044u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3c0048: 0x46015842  mul.s       $f1, $f11, $f1
    ctx->pc = 0x3c0048u;
    ctx->f[1] = FPU_MUL_S(ctx->f[11], ctx->f[1]);
    // 0x3c004c: 0xc78980e4  lwc1        $f9, -0x7F1C($gp)
    ctx->pc = 0x3c004cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934756)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x3c0050: 0x46070000  add.s       $f0, $f0, $f7
    ctx->pc = 0x3c0050u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[7]);
    // 0x3c0054: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x3c0054u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x3c0058: 0x46005802  mul.s       $f0, $f11, $f0
    ctx->pc = 0x3c0058u;
    ctx->f[0] = FPU_MUL_S(ctx->f[11], ctx->f[0]);
    // 0x3c005c: 0x46015842  mul.s       $f1, $f11, $f1
    ctx->pc = 0x3c005cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[11], ctx->f[1]);
    // 0x3c0060: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x3c0060u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x3c0064: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x3c0064u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x3c0068: 0x46005802  mul.s       $f0, $f11, $f0
    ctx->pc = 0x3c0068u;
    ctx->f[0] = FPU_MUL_S(ctx->f[11], ctx->f[0]);
    // 0x3c006c: 0x46015842  mul.s       $f1, $f11, $f1
    ctx->pc = 0x3c006cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[11], ctx->f[1]);
    // 0x3c0070: 0x46080000  add.s       $f0, $f0, $f8
    ctx->pc = 0x3c0070u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[8]);
    // 0x3c0074: 0x460f0840  add.s       $f1, $f1, $f15
    ctx->pc = 0x3c0074u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[15]);
    // 0x3c0078: 0x46005802  mul.s       $f0, $f11, $f0
    ctx->pc = 0x3c0078u;
    ctx->f[0] = FPU_MUL_S(ctx->f[11], ctx->f[0]);
    // 0x3c007c: 0x46060000  add.s       $f0, $f0, $f6
    ctx->pc = 0x3c007cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[6]);
    // 0x3c0080: 0x46005802  mul.s       $f0, $f11, $f0
    ctx->pc = 0x3c0080u;
    ctx->f[0] = FPU_MUL_S(ctx->f[11], ctx->f[0]);
    // 0x3c0084: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x3c0084u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x3c0088: 0x46005002  mul.s       $f0, $f10, $f0
    ctx->pc = 0x3c0088u;
    ctx->f[0] = FPU_MUL_S(ctx->f[10], ctx->f[0]);
    // 0x3c008c: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x3c008cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x3c0090: 0x46025081  sub.s       $f2, $f10, $f2
    ctx->pc = 0x3c0090u;
    ctx->f[2] = FPU_SUB_S(ctx->f[10], ctx->f[2]);
    // 0x3c0094: 0x1000005e  b           . + 4 + (0x5E << 2)
    ctx->pc = 0x3C0094u;
    {
        const bool branch_taken_0x3c0094 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C0098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0094u;
        // 0x3c0098: 0x46024a81  sub.s       $f10, $f9, $f2 (Delay Slot)
        ctx->f[10] = FPU_SUB_S(ctx->f[9], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c0094) {
            ctx->pc = 0x3C0210u;
            goto label_3c0210;
        }
    }
    ctx->pc = 0x3C009Cu;
label_3c009c:
    // 0x3c009c: 0x4e3002c  bgezl       $a3, . + 4 + (0x2C << 2)
    ctx->pc = 0x3C009Cu;
    {
        const bool branch_taken_0x3c009c = (GPR_S32(ctx, 7) >= 0);
        if (branch_taken_0x3c009c) {
            ctx->pc = 0x3C00A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C009Cu;
            // 0x3c00a0: 0x460a7841  sub.s       $f1, $f15, $f10 (Delay Slot)
            ctx->f[1] = FPU_SUB_S(ctx->f[15], ctx->f[10]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C0150u;
            goto label_3c0150;
        }
    }
    ctx->pc = 0x3C00A4u;
    // 0x3c00a4: 0x460f5080  add.s       $f2, $f10, $f15
    ctx->pc = 0x3c00a4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[10], ctx->f[15]);
    // 0x3c00a8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x3c00a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x3c00ac: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3c00acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3c00b0: 0xc7808224  lwc1        $f0, -0x7DDC($gp)
    ctx->pc = 0x3c00b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935076)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c00b4: 0xc78480bc  lwc1        $f4, -0x7F44($gp)
    ctx->pc = 0x3c00b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934716)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x3c00b8: 0x460112c2  mul.s       $f11, $f2, $f1
    ctx->pc = 0x3c00b8u;
    ctx->f[11] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x3c00bc: 0xc78680c0  lwc1        $f6, -0x7F40($gp)
    ctx->pc = 0x3c00bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934720)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x3c00c0: 0xc78180c4  lwc1        $f1, -0x7F3C($gp)
    ctx->pc = 0x3c00c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934724)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3c00c4: 0xc78281d0  lwc1        $f2, -0x7E30($gp)
    ctx->pc = 0x3c00c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3c00c8: 0x46005802  mul.s       $f0, $f11, $f0
    ctx->pc = 0x3c00c8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[11], ctx->f[0]);
    // 0x3c00cc: 0xc7878228  lwc1        $f7, -0x7DD8($gp)
    ctx->pc = 0x3c00ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935080)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x3c00d0: 0x46015842  mul.s       $f1, $f11, $f1
    ctx->pc = 0x3c00d0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[11], ctx->f[1]);
    // 0x3c00d4: 0xc78381d8  lwc1        $f3, -0x7E28($gp)
    ctx->pc = 0x3c00d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3c00d8: 0xc78880d4  lwc1        $f8, -0x7F2C($gp)
    ctx->pc = 0x3c00d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x3c00dc: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x3c00dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x3c00e0: 0xc78580d8  lwc1        $f5, -0x7F28($gp)
    ctx->pc = 0x3c00e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x3c00e4: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x3c00e4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x3c00e8: 0xc78480dc  lwc1        $f4, -0x7F24($gp)
    ctx->pc = 0x3c00e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934748)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x3c00ec: 0x46005802  mul.s       $f0, $f11, $f0
    ctx->pc = 0x3c00ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[11], ctx->f[0]);
    // 0x3c00f0: 0x46015842  mul.s       $f1, $f11, $f1
    ctx->pc = 0x3c00f0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[11], ctx->f[1]);
    // 0x3c00f4: 0x46060000  add.s       $f0, $f0, $f6
    ctx->pc = 0x3c00f4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[6]);
    // 0x3c00f8: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x3c00f8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x3c00fc: 0x46005802  mul.s       $f0, $f11, $f0
    ctx->pc = 0x3c00fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[11], ctx->f[0]);
    // 0x3c0100: 0x46015842  mul.s       $f1, $f11, $f1
    ctx->pc = 0x3c0100u;
    ctx->f[1] = FPU_MUL_S(ctx->f[11], ctx->f[1]);
    // 0x3c0104: 0x46070000  add.s       $f0, $f0, $f7
    ctx->pc = 0x3c0104u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[7]);
    // 0x3c0108: 0x46050840  add.s       $f1, $f1, $f5
    ctx->pc = 0x3c0108u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[5]);
    // 0x3c010c: 0x46005802  mul.s       $f0, $f11, $f0
    ctx->pc = 0x3c010cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[11], ctx->f[0]);
    // 0x3c0110: 0x46015842  mul.s       $f1, $f11, $f1
    ctx->pc = 0x3c0110u;
    ctx->f[1] = FPU_MUL_S(ctx->f[11], ctx->f[1]);
    // 0x3c0114: 0x46080000  add.s       $f0, $f0, $f8
    ctx->pc = 0x3c0114u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[8]);
    // 0x3c0118: 0x460f0840  add.s       $f1, $f1, $f15
    ctx->pc = 0x3c0118u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[15]);
    // 0x3c011c: 0x46005802  mul.s       $f0, $f11, $f0
    ctx->pc = 0x3c011cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[11], ctx->f[0]);
    // 0x3c0120: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x3c0120u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x3c0124: 0x46005802  mul.s       $f0, $f11, $f0
    ctx->pc = 0x3c0124u;
    ctx->f[0] = FPU_MUL_S(ctx->f[11], ctx->f[0]);
    // 0x3c0128: 0x460b0344  c1          0xB0344
    ctx->pc = 0x3c0128u;
    ctx->f[13] = FPU_SQRT_S(ctx->f[0]);
    // 0x3c012c: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x3c012cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x3c0130: 0xc78280e0  lwc1        $f2, -0x7F20($gp)
    ctx->pc = 0x3c0130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3c0134: 0xc78380e8  lwc1        $f3, -0x7F18($gp)
    ctx->pc = 0x3c0134u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934760)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3c0138: 0x460d0042  mul.s       $f1, $f0, $f13
    ctx->pc = 0x3c0138u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[13]);
    // 0x3c013c: 0x46020801  sub.s       $f0, $f1, $f2
    ctx->pc = 0x3c013cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x3c0140: 0x46006800  add.s       $f0, $f13, $f0
    ctx->pc = 0x3c0140u;
    ctx->f[0] = FPU_ADD_S(ctx->f[13], ctx->f[0]);
    // 0x3c0144: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x3c0144u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x3c0148: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x3C0148u;
    {
        const bool branch_taken_0x3c0148 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C014Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0148u;
        // 0x3c014c: 0x46001a81  sub.s       $f10, $f3, $f0 (Delay Slot)
        ctx->f[10] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c0148) {
            ctx->pc = 0x3C0210u;
            goto label_3c0210;
        }
    }
    ctx->pc = 0x3C0150u;
label_3c0150:
    // 0x3c0150: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x3c0150u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x3c0154: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3c0154u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3c0158: 0x46000ac2  mul.s       $f11, $f1, $f0
    ctx->pc = 0x3c0158u;
    ctx->f[11] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3c015c: 0x460b0344  c1          0xB0344
    ctx->pc = 0x3c015cu;
    ctx->f[13] = FPU_SQRT_S(ctx->f[0]);
    // 0x3c0160: 0x44026800  mfc1        $v0, $f13
    ctx->pc = 0x3c0160u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[13], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x3c0164: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x3c0164u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c0168: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x3c0168u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x3c016c: 0x3442f000  ori         $v0, $v0, 0xF000
    ctx->pc = 0x3c016cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61440);
    // 0x3c0170: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x3c0170u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3c0174: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x3c0174u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3c0178: 0x46021142  mul.s       $f5, $f2, $f2
    ctx->pc = 0x3c0178u;
    ctx->f[5] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x3c017c: 0xc7808224  lwc1        $f0, -0x7DDC($gp)
    ctx->pc = 0x3c017cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935076)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c0180: 0xc78480bc  lwc1        $f4, -0x7F44($gp)
    ctx->pc = 0x3c0180u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934716)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x3c0184: 0x46005802  mul.s       $f0, $f11, $f0
    ctx->pc = 0x3c0184u;
    ctx->f[0] = FPU_MUL_S(ctx->f[11], ctx->f[0]);
    // 0x3c0188: 0xc78a80c0  lwc1        $f10, -0x7F40($gp)
    ctx->pc = 0x3c0188u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934720)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x3c018c: 0xc78180c4  lwc1        $f1, -0x7F3C($gp)
    ctx->pc = 0x3c018cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934724)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3c0190: 0x460268c0  add.s       $f3, $f13, $f2
    ctx->pc = 0x3c0190u;
    ctx->f[3] = FPU_ADD_S(ctx->f[13], ctx->f[2]);
    // 0x3c0194: 0xc78681d0  lwc1        $f6, -0x7E30($gp)
    ctx->pc = 0x3c0194u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x3c0198: 0x46055941  sub.s       $f5, $f11, $f5
    ctx->pc = 0x3c0198u;
    ctx->f[5] = FPU_SUB_S(ctx->f[11], ctx->f[5]);
    // 0x3c019c: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x3c019cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x3c01a0: 0xc7878228  lwc1        $f7, -0x7DD8($gp)
    ctx->pc = 0x3c01a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935080)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x3c01a4: 0x46015842  mul.s       $f1, $f11, $f1
    ctx->pc = 0x3c01a4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[11], ctx->f[1]);
    // 0x3c01a8: 0xc78481d8  lwc1        $f4, -0x7E28($gp)
    ctx->pc = 0x3c01a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x3c01ac: 0xc78980d4  lwc1        $f9, -0x7F2C($gp)
    ctx->pc = 0x3c01acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x3c01b0: 0x46032943  div.s       $f5, $f5, $f3
    ctx->pc = 0x3c01b0u;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[5] = FPU_DIV_S(ctx->f[5], ctx->f[3]); }
    // 0x3c01b4: 0x46005802  mul.s       $f0, $f11, $f0
    ctx->pc = 0x3c01b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[11], ctx->f[0]);
    // 0x3c01b8: 0xc78380d8  lwc1        $f3, -0x7F28($gp)
    ctx->pc = 0x3c01b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3c01bc: 0x46060840  add.s       $f1, $f1, $f6
    ctx->pc = 0x3c01bcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[6]);
    // 0x3c01c0: 0xc78880dc  lwc1        $f8, -0x7F24($gp)
    ctx->pc = 0x3c01c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934748)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x3c01c4: 0x460a0000  add.s       $f0, $f0, $f10
    ctx->pc = 0x3c01c4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[10]);
    // 0x3c01c8: 0x46015842  mul.s       $f1, $f11, $f1
    ctx->pc = 0x3c01c8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[11], ctx->f[1]);
    // 0x3c01cc: 0x46005802  mul.s       $f0, $f11, $f0
    ctx->pc = 0x3c01ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[11], ctx->f[0]);
    // 0x3c01d0: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x3c01d0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x3c01d4: 0x46070000  add.s       $f0, $f0, $f7
    ctx->pc = 0x3c01d4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[7]);
    // 0x3c01d8: 0x46015842  mul.s       $f1, $f11, $f1
    ctx->pc = 0x3c01d8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[11], ctx->f[1]);
    // 0x3c01dc: 0x46005802  mul.s       $f0, $f11, $f0
    ctx->pc = 0x3c01dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[11], ctx->f[0]);
    // 0x3c01e0: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x3c01e0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x3c01e4: 0x46090000  add.s       $f0, $f0, $f9
    ctx->pc = 0x3c01e4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[9]);
    // 0x3c01e8: 0x46015842  mul.s       $f1, $f11, $f1
    ctx->pc = 0x3c01e8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[11], ctx->f[1]);
    // 0x3c01ec: 0x46005802  mul.s       $f0, $f11, $f0
    ctx->pc = 0x3c01ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[11], ctx->f[0]);
    // 0x3c01f0: 0x460f0840  add.s       $f1, $f1, $f15
    ctx->pc = 0x3c01f0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[15]);
    // 0x3c01f4: 0x46080000  add.s       $f0, $f0, $f8
    ctx->pc = 0x3c01f4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[8]);
    // 0x3c01f8: 0x46005802  mul.s       $f0, $f11, $f0
    ctx->pc = 0x3c01f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[11], ctx->f[0]);
    // 0x3c01fc: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x3c01fcu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x3c0200: 0x460d0002  mul.s       $f0, $f0, $f13
    ctx->pc = 0x3c0200u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[13]);
    // 0x3c0204: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x3c0204u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x3c0208: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x3c0208u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x3c020c: 0x46021280  add.s       $f10, $f2, $f2
    ctx->pc = 0x3c020cu;
    ctx->f[10] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_3c0210:
    // 0x3c0210: 0x460a5042  mul.s       $f1, $f10, $f10
    ctx->pc = 0x3c0210u;
    ctx->f[1] = FPU_MUL_S(ctx->f[10], ctx->f[10]);
    // 0x3c0214: 0x0  nop
    ctx->pc = 0x3c0214u;
    // NOP
label_3c0218:
    // 0x3c0218: 0xc782822c  lwc1        $f2, -0x7DD4($gp)
    ctx->pc = 0x3c0218u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935084)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3c021c: 0xc78581e4  lwc1        $f5, -0x7E1C($gp)
    ctx->pc = 0x3c021cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935012)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x3c0220: 0xc78681e8  lwc1        $f6, -0x7E18($gp)
    ctx->pc = 0x3c0220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935016)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x3c0224: 0x46020802  mul.s       $f0, $f1, $f2
    ctx->pc = 0x3c0224u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3c0228: 0xc78781ec  lwc1        $f7, -0x7E14($gp)
    ctx->pc = 0x3c0228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935020)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x3c022c: 0xc78881f0  lwc1        $f8, -0x7E10($gp)
    ctx->pc = 0x3c022cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935024)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x3c0230: 0x460a0902  mul.s       $f4, $f1, $f10
    ctx->pc = 0x3c0230u;
    ctx->f[4] = FPU_MUL_S(ctx->f[1], ctx->f[10]);
    // 0x3c0234: 0xc78981f4  lwc1        $f9, -0x7E0C($gp)
    ctx->pc = 0x3c0234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935028)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x3c0238: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x3c0238u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x3c023c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x3c023cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3c0240: 0x46060000  add.s       $f0, $f0, $f6
    ctx->pc = 0x3c0240u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[6]);
    // 0x3c0244: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x3c0244u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3c0248: 0x46070000  add.s       $f0, $f0, $f7
    ctx->pc = 0x3c0248u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[7]);
    // 0x3c024c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x3c024cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3c0250: 0x46080000  add.s       $f0, $f0, $f8
    ctx->pc = 0x3c0250u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[8]);
    // 0x3c0254: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x3c0254u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3c0258: 0x46090840  add.s       $f1, $f1, $f9
    ctx->pc = 0x3c0258u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[9]);
    // 0x3c025c: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->pc = 0x3c025cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x3c0260: 0x46045100  add.s       $f4, $f10, $f4
    ctx->pc = 0x3c0260u;
    ctx->f[4] = FPU_ADD_S(ctx->f[10], ctx->f[4]);
    // 0x3c0264: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3c0264u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x3c0268: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3c0268u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3c026c: 0x46040103  div.s       $f4, $f0, $f4
    ctx->pc = 0x3c026cu;
    { if (ctx->f[4] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = FPU_DIV_S(ctx->f[0], ctx->f[4]); }
    // 0x3c0270: 0x460a7382  mul.s       $f14, $f14, $f10
    ctx->pc = 0x3c0270u;
    ctx->f[14] = FPU_MUL_S(ctx->f[14], ctx->f[10]);
    // 0x3c0274: 0x460e7042  mul.s       $f1, $f14, $f14
    ctx->pc = 0x3c0274u;
    ctx->f[1] = FPU_MUL_S(ctx->f[14], ctx->f[14]);
    // 0x3c0278: 0x46020802  mul.s       $f0, $f1, $f2
    ctx->pc = 0x3c0278u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3c027c: 0x460e08c2  mul.s       $f3, $f1, $f14
    ctx->pc = 0x3c027cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[14]);
    // 0x3c0280: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x3c0280u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x3c0284: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x3c0284u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3c0288: 0x46060000  add.s       $f0, $f0, $f6
    ctx->pc = 0x3c0288u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[6]);
    // 0x3c028c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x3c028cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3c0290: 0x46070000  add.s       $f0, $f0, $f7
    ctx->pc = 0x3c0290u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[7]);
    // 0x3c0294: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x3c0294u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3c0298: 0x46080000  add.s       $f0, $f0, $f8
    ctx->pc = 0x3c0298u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[8]);
    // 0x3c029c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x3c029cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3c02a0: 0x46090840  add.s       $f1, $f1, $f9
    ctx->pc = 0x3c02a0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[9]);
    // 0x3c02a4: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x3c02a4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x3c02a8: 0x46037380  add.s       $f14, $f14, $f3
    ctx->pc = 0x3c02a8u;
    ctx->f[14] = FPU_ADD_S(ctx->f[14], ctx->f[3]);
    // 0x3c02ac: 0x46047382  mul.s       $f14, $f14, $f4
    ctx->pc = 0x3c02acu;
    ctx->f[14] = FPU_MUL_S(ctx->f[14], ctx->f[4]);
    // 0x3c02b0: 0x460a6302  mul.s       $f12, $f12, $f10
    ctx->pc = 0x3c02b0u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[10]);
    // 0x3c02b4: 0x460c6002  mul.s       $f0, $f12, $f12
    ctx->pc = 0x3c02b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x3c02b8: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x3c02b8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x3c02bc: 0x460c0042  mul.s       $f1, $f0, $f12
    ctx->pc = 0x3c02bcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x3c02c0: 0x46051080  add.s       $f2, $f2, $f5
    ctx->pc = 0x3c02c0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[5]);
    // 0x3c02c4: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x3c02c4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x3c02c8: 0x46061080  add.s       $f2, $f2, $f6
    ctx->pc = 0x3c02c8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[6]);
    // 0x3c02cc: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x3c02ccu;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x3c02d0: 0x46071080  add.s       $f2, $f2, $f7
    ctx->pc = 0x3c02d0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[7]);
    // 0x3c02d4: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x3c02d4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x3c02d8: 0x46081080  add.s       $f2, $f2, $f8
    ctx->pc = 0x3c02d8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[8]);
    // 0x3c02dc: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x3c02dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x3c02e0: 0x46090000  add.s       $f0, $f0, $f9
    ctx->pc = 0x3c02e0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[9]);
    // 0x3c02e4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x3c02e4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3c02e8: 0x46016300  add.s       $f12, $f12, $f1
    ctx->pc = 0x3c02e8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[1]);
    // 0x3c02ec: 0x46046302  mul.s       $f12, $f12, $f4
    ctx->pc = 0x3c02ecu;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[4]);
    // 0x3c02f0: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x3c02f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3c02f4: 0x0  nop
    ctx->pc = 0x3c02f4u;
    // NOP
label_3c02f8:
    // 0x3c02f8: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x3c02f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c02fc: 0x46017042  mul.s       $f1, $f14, $f1
    ctx->pc = 0x3c02fcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[14], ctx->f[1]);
    // 0x3c0300: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x3c0300u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x3c0304: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x3c0304u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x3c0308: 0xe4810008  swc1        $f1, 0x8($a0)
    ctx->pc = 0x3c0308u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x3c030c: 0xc4a2000c  lwc1        $f2, 0xC($a1)
    ctx->pc = 0x3c030cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3c0310: 0xc4c0000c  lwc1        $f0, 0xC($a2)
    ctx->pc = 0x3c0310u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c0314: 0x46027082  mul.s       $f2, $f14, $f2
    ctx->pc = 0x3c0314u;
    ctx->f[2] = FPU_MUL_S(ctx->f[14], ctx->f[2]);
    // 0x3c0318: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x3c0318u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x3c031c: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x3c031cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x3c0320: 0xe482000c  swc1        $f2, 0xC($a0)
    ctx->pc = 0x3c0320u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x3c0324: 0xc4a10010  lwc1        $f1, 0x10($a1)
    ctx->pc = 0x3c0324u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3c0328: 0xc4c00010  lwc1        $f0, 0x10($a2)
    ctx->pc = 0x3c0328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c032c: 0x46017042  mul.s       $f1, $f14, $f1
    ctx->pc = 0x3c032cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[14], ctx->f[1]);
    // 0x3c0330: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x3c0330u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x3c0334: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x3c0334u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x3c0338: 0xe4810010  swc1        $f1, 0x10($a0)
    ctx->pc = 0x3c0338u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x3c033c: 0xc4a20014  lwc1        $f2, 0x14($a1)
    ctx->pc = 0x3c033cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3c0340: 0xc4c00014  lwc1        $f0, 0x14($a2)
    ctx->pc = 0x3c0340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c0344: 0x46027082  mul.s       $f2, $f14, $f2
    ctx->pc = 0x3c0344u;
    ctx->f[2] = FPU_MUL_S(ctx->f[14], ctx->f[2]);
    // 0x3c0348: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x3c0348u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x3c034c: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x3c034cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x3c0350: 0x3e00008  jr          $ra
    ctx->pc = 0x3C0350u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C0354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0350u;
        // 0x3c0354: 0xe4820014  swc1        $f2, 0x14($a0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C0350u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C0358u;
}
