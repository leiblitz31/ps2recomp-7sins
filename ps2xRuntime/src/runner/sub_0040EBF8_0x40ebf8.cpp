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

// Function: sub_0040EBF8
// Address: 0x40ebf8 - 0x40ee18
void sub_0040EBF8_0x40ebf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0040EBF8_0x40ebf8");
#endif

    ctx->pc = 0x40ebf8u;

    // 0x40ebf8: 0x14a00005  bnez        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x40EBF8u;
    {
        const bool branch_taken_0x40ebf8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x40EBFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40EBF8u;
        // 0x40ebfc: 0x27bdffe0  addiu       $sp, $sp, -0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40ebf8) {
            ctx->pc = 0x40EC10u;
            goto label_40ec10;
        }
    }
    ctx->pc = 0x40EC00u;
    // 0x40ec00: 0x8f83bdc0  lw          $v1, -0x4240($gp)
    ctx->pc = 0x40ec00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950336)));
    // 0x40ec04: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x40ec04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x40ec08: 0x2442e88c  addiu       $v0, $v0, -0x1774
    ctx->pc = 0x40ec08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961292));
    // 0x40ec0c: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x40ec0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_40ec10:
    // 0x40ec10: 0x24820010  addiu       $v0, $a0, 0x10
    ctx->pc = 0x40ec10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x40ec14: 0xc4890004  lwc1        $f9, 0x4($a0)
    ctx->pc = 0x40ec14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x40ec18: 0xc44c0004  lwc1        $f12, 0x4($v0)
    ctx->pc = 0x40ec18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x40ec1c: 0x24830020  addiu       $v1, $a0, 0x20
    ctx->pc = 0x40ec1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x40ec20: 0xc4880010  lwc1        $f8, 0x10($a0)
    ctx->pc = 0x40ec20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x40ec24: 0x46094c82  mul.s       $f18, $f9, $f9
    ctx->pc = 0x40ec24u;
    ctx->f[18] = FPU_MUL_S(ctx->f[9], ctx->f[9]);
    // 0x40ec28: 0xc48d0000  lwc1        $f13, 0x0($a0)
    ctx->pc = 0x40ec28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x40ec2c: 0x460c6002  mul.s       $f0, $f12, $f12
    ctx->pc = 0x40ec2cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x40ec30: 0x46084442  mul.s       $f17, $f8, $f8
    ctx->pc = 0x40ec30u;
    ctx->f[17] = FPU_MUL_S(ctx->f[8], ctx->f[8]);
    // 0x40ec34: 0xc44a0008  lwc1        $f10, 0x8($v0)
    ctx->pc = 0x40ec34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x40ec38: 0x460d6882  mul.s       $f2, $f13, $f13
    ctx->pc = 0x40ec38u;
    ctx->f[2] = FPU_MUL_S(ctx->f[13], ctx->f[13]);
    // 0x40ec3c: 0xc4670004  lwc1        $f7, 0x4($v1)
    ctx->pc = 0x40ec3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x40ec40: 0xc4860008  lwc1        $f6, 0x8($a0)
    ctx->pc = 0x40ec40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x40ec44: 0x460a54c2  mul.s       $f19, $f10, $f10
    ctx->pc = 0x40ec44u;
    ctx->f[19] = FPU_MUL_S(ctx->f[10], ctx->f[10]);
    // 0x40ec48: 0xc4850020  lwc1        $f5, 0x20($a0)
    ctx->pc = 0x40ec48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x40ec4c: 0x46073842  mul.s       $f1, $f7, $f7
    ctx->pc = 0x40ec4cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[7], ctx->f[7]);
    // 0x40ec50: 0x46121080  add.s       $f2, $f2, $f18
    ctx->pc = 0x40ec50u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[18]);
    // 0x40ec54: 0xc46b0008  lwc1        $f11, 0x8($v1)
    ctx->pc = 0x40ec54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
    // 0x40ec58: 0x46052902  mul.s       $f4, $f5, $f5
    ctx->pc = 0x40ec58u;
    ctx->f[4] = FPU_MUL_S(ctx->f[5], ctx->f[5]);
    // 0x40ec5c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x40ec5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x40ec60: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x40ec60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x40ec64: 0x46063402  mul.s       $f16, $f6, $f6
    ctx->pc = 0x40ec64u;
    ctx->f[16] = FPU_MUL_S(ctx->f[6], ctx->f[6]);
    // 0x40ec68: 0x46008800  add.s       $f0, $f17, $f0
    ctx->pc = 0x40ec68u;
    ctx->f[0] = FPU_ADD_S(ctx->f[17], ctx->f[0]);
    // 0x40ec6c: 0x460123c0  add.s       $f15, $f4, $f1
    ctx->pc = 0x40ec6cu;
    ctx->f[15] = FPU_ADD_S(ctx->f[4], ctx->f[1]);
    // 0x40ec70: 0x460b58c2  mul.s       $f3, $f11, $f11
    ctx->pc = 0x40ec70u;
    ctx->f[3] = FPU_MUL_S(ctx->f[11], ctx->f[11]);
    // 0x40ec74: 0x46101080  add.s       $f2, $f2, $f16
    ctx->pc = 0x40ec74u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[16]);
    // 0x40ec78: 0x46130000  add.s       $f0, $f0, $f19
    ctx->pc = 0x40ec78u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[19]);
    // 0x40ec7c: 0x460378c0  add.s       $f3, $f15, $f3
    ctx->pc = 0x40ec7cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[15], ctx->f[3]);
    // 0x40ec80: 0x460e1081  sub.s       $f2, $f2, $f14
    ctx->pc = 0x40ec80u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[14]);
    // 0x40ec84: 0x460e0001  sub.s       $f0, $f0, $f14
    ctx->pc = 0x40ec84u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[14]);
    // 0x40ec88: 0x460e18c1  sub.s       $f3, $f3, $f14
    ctx->pc = 0x40ec88u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[14]);
    // 0x40ec8c: 0x46021042  mul.s       $f1, $f2, $f2
    ctx->pc = 0x40ec8cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x40ec90: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x40ec90u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x40ec94: 0x46000102  mul.s       $f4, $f0, $f0
    ctx->pc = 0x40ec94u;
    ctx->f[4] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x40ec98: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x40ec98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x40ec9c: 0x46031882  mul.s       $f2, $f3, $f3
    ctx->pc = 0x40ec9cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x40eca0: 0xe7a30008  swc1        $f3, 0x8($sp)
    ctx->pc = 0x40eca0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x40eca4: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x40eca4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x40eca8: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x40eca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x40ecac: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x40ecacu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x40ecb0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x40ecb0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x40ecb4: 0x0  nop
    ctx->pc = 0x40ecb4u;
    // NOP
    // 0x40ecb8: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x40ECB8u;
    {
        const bool branch_taken_0x40ecb8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x40ECBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40ECB8u;
        // 0x40ecbc: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40ecb8) {
            ctx->pc = 0x40ECC4u;
            goto label_40ecc4;
        }
    }
    ctx->pc = 0x40ECC0u;
    // 0x40ecc0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x40ecc0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_40ecc4:
    // 0x40ecc4: 0x460d2882  mul.s       $f2, $f5, $f13
    ctx->pc = 0x40ecc4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[13]);
    // 0x40ecc8: 0x460938c2  mul.s       $f3, $f7, $f9
    ctx->pc = 0x40ecc8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[7], ctx->f[9]);
    // 0x40eccc: 0x46054002  mul.s       $f0, $f8, $f5
    ctx->pc = 0x40ecccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[8], ctx->f[5]);
    // 0x40ecd0: 0x46076102  mul.s       $f4, $f12, $f7
    ctx->pc = 0x40ecd0u;
    ctx->f[4] = FPU_MUL_S(ctx->f[12], ctx->f[7]);
    // 0x40ecd4: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x40ecd4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x40ecd8: 0x460c48c2  mul.s       $f3, $f9, $f12
    ctx->pc = 0x40ecd8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[9], ctx->f[12]);
    // 0x40ecdc: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x40ecdcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x40ece0: 0x460b5102  mul.s       $f4, $f10, $f11
    ctx->pc = 0x40ece0u;
    ctx->f[4] = FPU_MUL_S(ctx->f[10], ctx->f[11]);
    // 0x40ece4: 0x46065942  mul.s       $f5, $f11, $f6
    ctx->pc = 0x40ece4u;
    ctx->f[5] = FPU_MUL_S(ctx->f[11], ctx->f[6]);
    // 0x40ece8: 0x46086842  mul.s       $f1, $f13, $f8
    ctx->pc = 0x40ece8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[13], ctx->f[8]);
    // 0x40ecec: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x40ececu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x40ecf0: 0x46051080  add.s       $f2, $f2, $f5
    ctx->pc = 0x40ecf0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[5]);
    // 0x40ecf4: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x40ecf4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x40ecf8: 0x460a3182  mul.s       $f6, $f6, $f10
    ctx->pc = 0x40ecf8u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[10]);
    // 0x40ecfc: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x40ecfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x40ed00: 0x460000c2  mul.s       $f3, $f0, $f0
    ctx->pc = 0x40ed00u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x40ed04: 0xe7a20014  swc1        $f2, 0x14($sp)
    ctx->pc = 0x40ed04u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x40ed08: 0x46021102  mul.s       $f4, $f2, $f2
    ctx->pc = 0x40ed08u;
    ctx->f[4] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x40ed0c: 0x46060840  add.s       $f1, $f1, $f6
    ctx->pc = 0x40ed0cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[6]);
    // 0x40ed10: 0x460418c0  add.s       $f3, $f3, $f4
    ctx->pc = 0x40ed10u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
    // 0x40ed14: 0x46010882  mul.s       $f2, $f1, $f1
    ctx->pc = 0x40ed14u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x40ed18: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x40ed18u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x40ed1c: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x40ed1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x40ed20: 0x460218c0  add.s       $f3, $f3, $f2
    ctx->pc = 0x40ed20u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x40ed24: 0x46001836  c.le.s      $f3, $f0
    ctx->pc = 0x40ed24u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x40ed28: 0x0  nop
    ctx->pc = 0x40ed28u;
    // NOP
    // 0x40ed2c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x40ED2Cu;
    {
        const bool branch_taken_0x40ed2c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x40ED30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40ED2Cu;
        // 0x40ed30: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40ed2c) {
            ctx->pc = 0x40ED38u;
            goto label_40ed38;
        }
    }
    ctx->pc = 0x40ED34u;
    // 0x40ed34: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x40ed34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_40ed38:
    // 0x40ed38: 0x10e0001e  beqz        $a3, . + 4 + (0x1E << 2)
    ctx->pc = 0x40ED38u;
    {
        const bool branch_taken_0x40ed38 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x40ED3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40ED38u;
        // 0x40ed3c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40ed38) {
            ctx->pc = 0x40EDB4u;
            goto label_40edb4;
        }
    }
    ctx->pc = 0x40ED40u;
    // 0x40ed40: 0x10c0001c  beqz        $a2, . + 4 + (0x1C << 2)
    ctx->pc = 0x40ED40u;
    {
        const bool branch_taken_0x40ed40 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x40ED44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40ED40u;
        // 0x40ed44: 0x24820030  addiu       $v0, $a0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40ed40) {
            ctx->pc = 0x40EDB4u;
            goto label_40edb4;
        }
    }
    ctx->pc = 0x40ED48u;
    // 0x40ed48: 0x460e6881  sub.s       $f2, $f13, $f14
    ctx->pc = 0x40ed48u;
    ctx->f[2] = FPU_SUB_S(ctx->f[13], ctx->f[14]);
    // 0x40ed4c: 0x460e6001  sub.s       $f0, $f12, $f14
    ctx->pc = 0x40ed4cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[14]);
    // 0x40ed50: 0xc4810030  lwc1        $f1, 0x30($a0)
    ctx->pc = 0x40ed50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x40ed54: 0x460e5941  sub.s       $f5, $f11, $f14
    ctx->pc = 0x40ed54u;
    ctx->f[5] = FPU_SUB_S(ctx->f[11], ctx->f[14]);
    // 0x40ed58: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x40ed58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x40ed5c: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x40ed5cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x40ed60: 0xc4440008  lwc1        $f4, 0x8($v0)
    ctx->pc = 0x40ed60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x40ed64: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x40ed64u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x40ed68: 0xc4a60008  lwc1        $f6, 0x8($a1)
    ctx->pc = 0x40ed68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x40ed6c: 0x46052942  mul.s       $f5, $f5, $f5
    ctx->pc = 0x40ed6cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[5]);
    // 0x40ed70: 0x46121080  add.s       $f2, $f2, $f18
    ctx->pc = 0x40ed70u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[18]);
    // 0x40ed74: 0x46008800  add.s       $f0, $f17, $f0
    ctx->pc = 0x40ed74u;
    ctx->f[0] = FPU_ADD_S(ctx->f[17], ctx->f[0]);
    // 0x40ed78: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x40ed78u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x40ed7c: 0x46101080  add.s       $f2, $f2, $f16
    ctx->pc = 0x40ed7cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[16]);
    // 0x40ed80: 0x46130000  add.s       $f0, $f0, $f19
    ctx->pc = 0x40ed80u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[19]);
    // 0x40ed84: 0x460318c2  mul.s       $f3, $f3, $f3
    ctx->pc = 0x40ed84u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x40ed88: 0x46057940  add.s       $f5, $f15, $f5
    ctx->pc = 0x40ed88u;
    ctx->f[5] = FPU_ADD_S(ctx->f[15], ctx->f[5]);
    // 0x40ed8c: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x40ed8cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x40ed90: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x40ed90u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x40ed94: 0x46042102  mul.s       $f4, $f4, $f4
    ctx->pc = 0x40ed94u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
    // 0x40ed98: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x40ed98u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x40ed9c: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x40ed9cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x40eda0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x40eda0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x40eda4: 0x46060036  c.le.s      $f0, $f6
    ctx->pc = 0x40eda4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x40eda8: 0x0  nop
    ctx->pc = 0x40eda8u;
    // NOP
    // 0x40edac: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x40EDACu;
    {
        const bool branch_taken_0x40edac = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x40edac) {
            ctx->pc = 0x40EDB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x40EDACu;
            // 0x40edb0: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x40EDB4u;
            goto label_40edb4;
        }
    }
    ctx->pc = 0x40EDB4u;
label_40edb4:
    // 0x40edb4: 0x10e00003  beqz        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x40EDB4u;
    {
        const bool branch_taken_0x40edb4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x40EDB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40EDB4u;
        // 0x40edb8: 0x8c83000c  lw          $v1, 0xC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40edb4) {
            ctx->pc = 0x40EDC4u;
            goto label_40edc4;
        }
    }
    ctx->pc = 0x40EDBCu;
    // 0x40edbc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x40EDBCu;
    {
        const bool branch_taken_0x40edbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x40EDC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40EDBCu;
        // 0x40edc0: 0x34630001  ori         $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x40edbc) {
            ctx->pc = 0x40EDD0u;
            goto label_40edd0;
        }
    }
    ctx->pc = 0x40EDC4u;
label_40edc4:
    // 0x40edc4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x40edc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x40edc8: 0x3442fffe  ori         $v0, $v0, 0xFFFE
    ctx->pc = 0x40edc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
    // 0x40edcc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x40edccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_40edd0:
    // 0x40edd0: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x40EDD0u;
    {
        const bool branch_taken_0x40edd0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x40edd0) {
            ctx->pc = 0x40EDE0u;
            goto label_40ede0;
        }
    }
    ctx->pc = 0x40EDD8u;
    // 0x40edd8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x40EDD8u;
    {
        const bool branch_taken_0x40edd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x40EDDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40EDD8u;
        // 0x40eddc: 0x34630002  ori         $v1, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x40edd8) {
            ctx->pc = 0x40EDECu;
            goto label_40edec;
        }
    }
    ctx->pc = 0x40EDE0u;
label_40ede0:
    // 0x40ede0: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x40ede0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x40ede4: 0x3442fffd  ori         $v0, $v0, 0xFFFD
    ctx->pc = 0x40ede4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65533);
    // 0x40ede8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x40ede8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_40edec:
    // 0x40edec: 0x11000003  beqz        $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x40EDECu;
    {
        const bool branch_taken_0x40edec = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x40EDF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40EDECu;
        // 0x40edf0: 0x3c020002  lui         $v0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40edec) {
            ctx->pc = 0x40EDFCu;
            goto label_40edfc;
        }
    }
    ctx->pc = 0x40EDF4u;
    // 0x40edf4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x40EDF4u;
    {
        const bool branch_taken_0x40edf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x40EDF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40EDF4u;
        // 0x40edf8: 0x621825  or          $v1, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40edf4) {
            ctx->pc = 0x40EE08u;
            goto label_40ee08;
        }
    }
    ctx->pc = 0x40EDFCu;
label_40edfc:
    // 0x40edfc: 0x3c02fffd  lui         $v0, 0xFFFD
    ctx->pc = 0x40edfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65533 << 16));
    // 0x40ee00: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x40ee00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x40ee04: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x40ee04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_40ee08:
    // 0x40ee08: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x40ee08u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x40ee0c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x40ee0cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40ee10: 0x3e00008  jr          $ra
    ctx->pc = 0x40EE10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x40EE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40EE10u;
        // 0x40ee14: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40EE10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x40EE18u;
}
