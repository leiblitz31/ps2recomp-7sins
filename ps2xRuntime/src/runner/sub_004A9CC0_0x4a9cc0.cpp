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

// Function: sub_004A9CC0
// Address: 0x4a9cc0 - 0x4a9f78
void sub_004A9CC0_0x4a9cc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A9CC0_0x4a9cc0");
#endif

    switch (ctx->pc) {
        case 0x4a9e60u: goto label_4a9e60;
        case 0x4a9f10u: goto label_4a9f10;
        default: break;
    }

    ctx->pc = 0x4a9cc0u;

    // 0x4a9cc0: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x4a9cc0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a9cc4: 0xacc00058  sw          $zero, 0x58($a2)
    ctx->pc = 0x4a9cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 88), GPR_U32(ctx, 0));
    // 0x4a9cc8: 0xc4c00018  lwc1        $f0, 0x18($a2)
    ctx->pc = 0x4a9cc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4a9ccc: 0xc4c10058  lwc1        $f1, 0x58($a2)
    ctx->pc = 0x4a9cccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4a9cd0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x4a9cd0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4a9cd4: 0x0  nop
    ctx->pc = 0x4a9cd4u;
    // NOP
    // 0x4a9cd8: 0x4500005a  bc1f        . + 4 + (0x5A << 2)
    ctx->pc = 0x4A9CD8u;
    {
        const bool branch_taken_0x4a9cd8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x4A9CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A9CD8u;
        // 0x4a9cdc: 0x27bdfff0  addiu       $sp, $sp, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a9cd8) {
            ctx->pc = 0x4A9E44u;
            goto label_4a9e44;
        }
    }
    ctx->pc = 0x4A9CE0u;
    // 0x4a9ce0: 0x8cc30028  lw          $v1, 0x28($a2)
    ctx->pc = 0x4a9ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 40)));
    // 0x4a9ce4: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x4a9ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
    // 0x4a9ce8: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x4a9ce8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x4a9cec: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x4a9cecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x4a9cf0: 0x10400044  beqz        $v0, . + 4 + (0x44 << 2)
    ctx->pc = 0x4A9CF0u;
    {
        const bool branch_taken_0x4a9cf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A9CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A9CF0u;
        // 0x4a9cf4: 0x46000986  mov.s       $f6, $f1 (Delay Slot)
        ctx->f[6] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a9cf0) {
            ctx->pc = 0x4A9E04u;
            goto label_4a9e04;
        }
    }
    ctx->pc = 0x4A9CF8u;
    // 0x4a9cf8: 0xc4c7004c  lwc1        $f7, 0x4C($a2)
    ctx->pc = 0x4a9cf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x4a9cfc: 0xc4c80048  lwc1        $f8, 0x48($a2)
    ctx->pc = 0x4a9cfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x4a9d00: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x4a9d00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
    // 0x4a9d04: 0x244360e0  addiu       $v1, $v0, 0x60E0
    ctx->pc = 0x4a9d04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 24800));
    // 0x4a9d08: 0xc4c20030  lwc1        $f2, 0x30($a2)
    ctx->pc = 0x4a9d08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4a9d0c: 0xc4650008  lwc1        $f5, 0x8($v1)
    ctx->pc = 0x4a9d0cu;
    { uint32_t bits = FAST_READ32(0x5F60E8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x4a9d10: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x4a9d10u;
    { uint32_t bits = FAST_READ32(0x5F60E4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4a9d14: 0xc4c30034  lwc1        $f3, 0x34($a2)
    ctx->pc = 0x4a9d14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x4a9d18: 0xc4c00038  lwc1        $f0, 0x38($a2)
    ctx->pc = 0x4a9d18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4a9d1c: 0xc44460e0  lwc1        $f4, 0x60E0($v0)
    ctx->pc = 0x4a9d1cu;
    { uint32_t bits = FAST_READ32(0x5F60E0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x4a9d20: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x4a9d20u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x4a9d24: 0x46002941  sub.s       $f5, $f5, $f0
    ctx->pc = 0x4a9d24u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
    // 0x4a9d28: 0x46022101  sub.s       $f4, $f4, $f2
    ctx->pc = 0x4a9d28u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[2]);
    // 0x4a9d2c: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x4a9d2cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x4a9d30: 0xe7a50008  swc1        $f5, 0x8($sp)
    ctx->pc = 0x4a9d30u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x4a9d34: 0xe7a40000  swc1        $f4, 0x0($sp)
    ctx->pc = 0x4a9d34u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x4a9d38: 0x46042102  mul.s       $f4, $f4, $f4
    ctx->pc = 0x4a9d38u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
    // 0x4a9d3c: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x4a9d3cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x4a9d40: 0x46052942  mul.s       $f5, $f5, $f5
    ctx->pc = 0x4a9d40u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[5]);
    // 0x4a9d44: 0x46073802  mul.s       $f0, $f7, $f7
    ctx->pc = 0x4a9d44u;
    ctx->f[0] = FPU_MUL_S(ctx->f[7], ctx->f[7]);
    // 0x4a9d48: 0x46012100  add.s       $f4, $f4, $f1
    ctx->pc = 0x4a9d48u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[1]);
    // 0x4a9d4c: 0x46052100  add.s       $f4, $f4, $f5
    ctx->pc = 0x4a9d4cu;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[5]);
    // 0x4a9d50: 0x44022000  mfc1        $v0, $f4
    ctx->pc = 0x4a9d50u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[4], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x4a9d54: 0x46002034  c.lt.s      $f4, $f0
    ctx->pc = 0x4a9d54u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4a9d58: 0x4500002c  bc1f        . + 4 + (0x2C << 2)
    ctx->pc = 0x4A9D58u;
    {
        const bool branch_taken_0x4a9d58 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4a9d58) {
            ctx->pc = 0x4A9E0Cu;
            goto label_4a9e0c;
        }
    }
    ctx->pc = 0x4A9D60u;
    // 0x4a9d60: 0x46062032  c.eq.s      $f4, $f6
    ctx->pc = 0x4a9d60u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[4], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4a9d64: 0x0  nop
    ctx->pc = 0x4a9d64u;
    // NOP
    // 0x4a9d68: 0x45010016  bc1t        . + 4 + (0x16 << 2)
    ctx->pc = 0x4A9D68u;
    {
        const bool branch_taken_0x4a9d68 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x4A9D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A9D68u;
        // 0x4a9d6c: 0x225c2  srl         $a0, $v0, 23 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a9d68) {
            ctx->pc = 0x4A9DC4u;
            goto label_4a9dc4;
        }
    }
    ctx->pc = 0x4A9D70u;
    // 0x4a9d70: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4a9d70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4a9d74: 0x2484ff81  addiu       $a0, $a0, -0x7F
    ctx->pc = 0x4a9d74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967169));
    // 0x4a9d78: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4a9d78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4a9d7c: 0x431824  and         $v1, $v0, $v1
    ctx->pc = 0x4a9d7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4a9d80: 0x42c00  sll         $a1, $a0, 16
    ctx->pc = 0x4a9d80u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x4a9d84: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x4a9d84u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x4a9d88: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4A9D88u;
    {
        const bool branch_taken_0x4a9d88 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A9D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A9D88u;
        // 0x4a9d8c: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a9d88) {
            ctx->pc = 0x4A9D98u;
            goto label_4a9d98;
        }
    }
    ctx->pc = 0x4A9D90u;
    // 0x4a9d90: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x4a9d90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
    // 0x4a9d94: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x4a9d94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_4a9d98:
    // 0x4a9d98: 0x3c03005f  lui         $v1, 0x5F
    ctx->pc = 0x4a9d98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)95 << 16));
    // 0x4a9d9c: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x4a9d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x4a9da0: 0x24636100  addiu       $v1, $v1, 0x6100
    ctx->pc = 0x4a9da0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24832));
    // 0x4a9da4: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4a9da4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x4a9da8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4a9da8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4a9dac: 0x52443  sra         $a0, $a1, 17
    ctx->pc = 0x4a9dacu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 5), 17));
    // 0x4a9db0: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x4a9db0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4a9db4: 0x2484007f  addiu       $a0, $a0, 0x7F
    ctx->pc = 0x4a9db4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 127));
    // 0x4a9db8: 0x425c0  sll         $a0, $a0, 23
    ctx->pc = 0x4a9db8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 23));
    // 0x4a9dbc: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4a9dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4a9dc0: 0x641025  or          $v0, $v1, $a0
    ctx->pc = 0x4a9dc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_4a9dc4:
    // 0x4a9dc4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4a9dc4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4a9dc8: 0x46080034  c.lt.s      $f0, $f8
    ctx->pc = 0x4a9dc8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[8])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4a9dcc: 0x0  nop
    ctx->pc = 0x4a9dccu;
    // NOP
    // 0x4a9dd0: 0x4501000c  bc1t        . + 4 + (0xC << 2)
    ctx->pc = 0x4A9DD0u;
    {
        const bool branch_taken_0x4a9dd0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x4A9DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A9DD0u;
        // 0x4a9dd4: 0xc780b888  lwc1        $f0, -0x4778($gp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294949000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a9dd0) {
            ctx->pc = 0x4A9E04u;
            goto label_4a9e04;
        }
    }
    ctx->pc = 0x4A9DD8u;
    // 0x4a9dd8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x4a9dd8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x4a9ddc: 0x460839c1  sub.s       $f7, $f7, $f8
    ctx->pc = 0x4a9ddcu;
    ctx->f[7] = FPU_SUB_S(ctx->f[7], ctx->f[8]);
    // 0x4a9de0: 0x46080841  sub.s       $f1, $f1, $f8
    ctx->pc = 0x4a9de0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[8]);
    // 0x4a9de4: 0xc4c20018  lwc1        $f2, 0x18($a2)
    ctx->pc = 0x4a9de4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4a9de8: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x4a9de8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x4a9dec: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x4a9decu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x4a9df0: 0x46070000  add.s       $f0, $f0, $f7
    ctx->pc = 0x4a9df0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[7]);
    // 0x4a9df4: 0x46013841  sub.s       $f1, $f7, $f1
    ctx->pc = 0x4a9df4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[7], ctx->f[1]);
    // 0x4a9df8: 0x46000983  div.s       $f6, $f1, $f0
    ctx->pc = 0x4a9df8u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[6] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x4a9dfc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x4A9DFCu;
    {
        const bool branch_taken_0x4a9dfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A9E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A9DFCu;
        // 0x4a9e00: 0x46023182  mul.s       $f6, $f6, $f2 (Delay Slot)
        ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a9dfc) {
            ctx->pc = 0x4A9E0Cu;
            goto label_4a9e0c;
        }
    }
    ctx->pc = 0x4A9E04u;
label_4a9e04:
    // 0x4a9e04: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x4a9e04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x4a9e08: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x4a9e08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
label_4a9e0c:
    // 0x4a9e0c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x4a9e0cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4a9e10: 0x46060034  c.lt.s      $f0, $f6
    ctx->pc = 0x4a9e10u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4a9e14: 0x0  nop
    ctx->pc = 0x4a9e14u;
    // NOP
    // 0x4a9e18: 0x4502000b  bc1fl       . + 4 + (0xB << 2)
    ctx->pc = 0x4A9E18u;
    {
        const bool branch_taken_0x4a9e18 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4a9e18) {
            ctx->pc = 0x4A9E1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A9E18u;
            // 0x4a9e1c: 0x8cc2000c  lw          $v0, 0xC($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A9E48u;
            goto label_4a9e48;
        }
    }
    ctx->pc = 0x4A9E20u;
    // 0x4a9e20: 0xc4c00054  lwc1        $f0, 0x54($a2)
    ctx->pc = 0x4a9e20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4a9e24: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x4a9e24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x4a9e28: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x4a9e28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x4a9e2c: 0xc4c20050  lwc1        $f2, 0x50($a2)
    ctx->pc = 0x4a9e2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4a9e30: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x4a9e30u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x4a9e34: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x4a9e34u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x4a9e38: 0x46013042  mul.s       $f1, $f6, $f1
    ctx->pc = 0x4a9e38u;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[1]);
    // 0x4a9e3c: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x4a9e3cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x4a9e40: 0xe4c10058  swc1        $f1, 0x58($a2)
    ctx->pc = 0x4a9e40u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 88), bits); }
label_4a9e44:
    // 0x4a9e44: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x4a9e44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_4a9e48:
    // 0x4a9e48: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x4a9e48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x4a9e4c: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x4A9E4Cu;
    {
        const bool branch_taken_0x4a9e4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A9E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A9E4Cu;
        // 0x4a9e50: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a9e4c) {
            ctx->pc = 0x4A9EE0u;
            goto label_4a9ee0;
        }
    }
    ctx->pc = 0x4A9E54u;
    // 0x4a9e54: 0xc4c20058  lwc1        $f2, 0x58($a2)
    ctx->pc = 0x4a9e54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4a9e58: 0x2784c200  addiu       $a0, $gp, -0x3E00
    ctx->pc = 0x4a9e58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294951424));
    // 0x4a9e5c: 0x0  nop
    ctx->pc = 0x4a9e5cu;
    // NOP
label_4a9e60:
    // 0x4a9e60: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4a9e60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4a9e64: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x4a9e64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x4a9e68: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x4a9e68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x4a9e6c: 0x10440002  beq         $v0, $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x4A9E6Cu;
    {
        const bool branch_taken_0x4a9e6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x4A9E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A9E6Cu;
        // 0x4a9e70: 0x8ca30004  lw          $v1, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a9e6c) {
            ctx->pc = 0x4A9E78u;
            goto label_4a9e78;
        }
    }
    ctx->pc = 0x4A9E74u;
    // 0x4a9e74: 0xc4410058  lwc1        $f1, 0x58($v0)
    ctx->pc = 0x4a9e74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4a9e78:
    // 0x4a9e78: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x4a9e78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x4a9e7c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x4a9e7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4a9e80: 0x54640001  bnel        $v1, $a0, . + 4 + (0x1 << 2)
    ctx->pc = 0x4A9E80u;
    {
        const bool branch_taken_0x4a9e80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x4a9e80) {
            ctx->pc = 0x4A9E84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A9E80u;
            // 0x4a9e84: 0xc4600058  lwc1        $f0, 0x58($v1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A9E88u;
            goto label_4a9e88;
        }
    }
    ctx->pc = 0x4A9E88u;
label_4a9e88:
    // 0x4a9e88: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x4a9e88u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4a9e8c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x4A9E8Cu;
    {
        const bool branch_taken_0x4a9e8c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4a9e8c) {
            ctx->pc = 0x4A9E9Cu;
            goto label_4a9e9c;
        }
    }
    ctx->pc = 0x4A9E94u;
    // 0x4a9e94: 0x1000fff2  b           . + 4 + (-0xE << 2)
    ctx->pc = 0x4A9E94u;
    {
        const bool branch_taken_0x4a9e94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A9E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A9E94u;
        // 0x4a9e98: 0x8ca50000  lw          $a1, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a9e94) {
            ctx->pc = 0x4A9E60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a9e60;
        }
    }
    ctx->pc = 0x4A9E9Cu;
label_4a9e9c:
    // 0x4a9e9c: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x4a9e9cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4a9ea0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x4A9EA0u;
    {
        const bool branch_taken_0x4a9ea0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4a9ea0) {
            ctx->pc = 0x4A9EB0u;
            goto label_4a9eb0;
        }
    }
    ctx->pc = 0x4A9EA8u;
    // 0x4a9ea8: 0x1000ffed  b           . + 4 + (-0x13 << 2)
    ctx->pc = 0x4A9EA8u;
    {
        const bool branch_taken_0x4a9ea8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A9EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A9EA8u;
        // 0x4a9eac: 0x8ca50004  lw          $a1, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a9ea8) {
            ctx->pc = 0x4A9E60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a9e60;
        }
    }
    ctx->pc = 0x4A9EB0u;
label_4a9eb0:
    // 0x4a9eb0: 0x50a6002d  beql        $a1, $a2, . + 4 + (0x2D << 2)
    ctx->pc = 0x4A9EB0u;
    {
        const bool branch_taken_0x4a9eb0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 6));
        if (branch_taken_0x4a9eb0) {
            ctx->pc = 0x4A9EB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A9EB0u;
            // 0x4a9eb4: 0x8cc2000c  lw          $v0, 0xC($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A9F68u;
            goto label_4a9f68;
        }
    }
    ctx->pc = 0x4A9EB8u;
    // 0x4a9eb8: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x4a9eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x4a9ebc: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x4a9ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4a9ec0: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x4a9ec0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x4a9ec4: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x4a9ec4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4a9ec8: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x4a9ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x4a9ecc: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x4a9eccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x4a9ed0: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x4a9ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x4a9ed4: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x4a9ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
    // 0x4a9ed8: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x4A9ED8u;
    {
        const bool branch_taken_0x4a9ed8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A9EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A9ED8u;
        // 0x4a9edc: 0xacc50000  sw          $a1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a9ed8) {
            ctx->pc = 0x4A9F58u;
            goto label_4a9f58;
        }
    }
    ctx->pc = 0x4A9EE0u;
label_4a9ee0:
    // 0x4a9ee0: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x4a9ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4a9ee4: 0x2787c200  addiu       $a3, $gp, -0x3E00
    ctx->pc = 0x4a9ee4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 28), 4294951424));
    // 0x4a9ee8: 0x8cc40004  lw          $a0, 0x4($a2)
    ctx->pc = 0x4a9ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x4a9eec: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x4a9eecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x4a9ef0: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x4a9ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4a9ef4: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x4a9ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x4a9ef8: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x4a9ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x4a9efc: 0x8f85c200  lw          $a1, -0x3E00($gp)
    ctx->pc = 0x4a9efcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951424)));
    // 0x4a9f00: 0x50a7000d  beql        $a1, $a3, . + 4 + (0xD << 2)
    ctx->pc = 0x4A9F00u;
    {
        const bool branch_taken_0x4a9f00 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 7));
        if (branch_taken_0x4a9f00) {
            ctx->pc = 0x4A9F04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A9F00u;
            // 0x4a9f04: 0x8ce30004  lw          $v1, 0x4($a3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A9F38u;
            goto label_4a9f38;
        }
    }
    ctx->pc = 0x4A9F08u;
    // 0x4a9f08: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x4A9F08u;
    {
        const bool branch_taken_0x4a9f08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A9F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A9F08u;
        // 0x4a9f0c: 0xc4c10058  lwc1        $f1, 0x58($a2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a9f08) {
            ctx->pc = 0x4A9F18u;
            goto label_4a9f18;
        }
    }
    ctx->pc = 0x4A9F10u;
label_4a9f10:
    // 0x4a9f10: 0x50a70009  beql        $a1, $a3, . + 4 + (0x9 << 2)
    ctx->pc = 0x4A9F10u;
    {
        const bool branch_taken_0x4a9f10 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 7));
        if (branch_taken_0x4a9f10) {
            ctx->pc = 0x4A9F14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A9F10u;
            // 0x4a9f14: 0x8ce30004  lw          $v1, 0x4($a3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A9F38u;
            goto label_4a9f38;
        }
    }
    ctx->pc = 0x4A9F18u;
label_4a9f18:
    // 0x4a9f18: 0xc4a00058  lwc1        $f0, 0x58($a1)
    ctx->pc = 0x4a9f18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4a9f1c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x4a9f1cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4a9f20: 0x0  nop
    ctx->pc = 0x4a9f20u;
    // NOP
    // 0x4a9f24: 0x4502fffa  bc1fl       . + 4 + (-0x6 << 2)
    ctx->pc = 0x4A9F24u;
    {
        const bool branch_taken_0x4a9f24 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4a9f24) {
            ctx->pc = 0x4A9F28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A9F24u;
            // 0x4a9f28: 0x8ca50000  lw          $a1, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A9F10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a9f10;
        }
    }
    ctx->pc = 0x4A9F2Cu;
    // 0x4a9f2c: 0x54a70008  bnel        $a1, $a3, . + 4 + (0x8 << 2)
    ctx->pc = 0x4A9F2Cu;
    {
        const bool branch_taken_0x4a9f2c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 7));
        if (branch_taken_0x4a9f2c) {
            ctx->pc = 0x4A9F30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A9F2Cu;
            // 0x4a9f30: 0x8ca30004  lw          $v1, 0x4($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A9F50u;
            goto label_4a9f50;
        }
    }
    ctx->pc = 0x4A9F34u;
    // 0x4a9f34: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x4a9f34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_4a9f38:
    // 0x4a9f38: 0xacc70000  sw          $a3, 0x0($a2)
    ctx->pc = 0x4a9f38u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 7));
    // 0x4a9f3c: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x4a9f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
    // 0x4a9f40: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x4a9f40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x4a9f44: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x4a9f44u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
    // 0x4a9f48: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x4A9F48u;
    {
        const bool branch_taken_0x4a9f48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A9F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A9F48u;
        // 0x4a9f4c: 0xace60004  sw          $a2, 0x4($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a9f48) {
            ctx->pc = 0x4A9F64u;
            goto label_4a9f64;
        }
    }
    ctx->pc = 0x4A9F50u;
label_4a9f50:
    // 0x4a9f50: 0xacc50000  sw          $a1, 0x0($a2)
    ctx->pc = 0x4a9f50u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
    // 0x4a9f54: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x4a9f54u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
label_4a9f58:
    // 0x4a9f58: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x4a9f58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x4a9f5c: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x4a9f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
    // 0x4a9f60: 0xaca60004  sw          $a2, 0x4($a1)
    ctx->pc = 0x4a9f60u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 6));
label_4a9f64:
    // 0x4a9f64: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x4a9f64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_4a9f68:
    // 0x4a9f68: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x4a9f68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x4a9f6c: 0xacc2000c  sw          $v0, 0xC($a2)
    ctx->pc = 0x4a9f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 2));
    // 0x4a9f70: 0x3e00008  jr          $ra
    ctx->pc = 0x4A9F70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A9F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A9F70u;
        // 0x4a9f74: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A9F70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A9F78u;
}
