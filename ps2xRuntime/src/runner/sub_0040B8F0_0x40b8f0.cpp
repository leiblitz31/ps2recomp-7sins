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

// Function: sub_0040B8F0
// Address: 0x40b8f0 - 0x40bc70
void sub_0040B8F0_0x40b8f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0040B8F0_0x40b8f0");
#endif

    switch (ctx->pc) {
        case 0x40bb70u: goto label_40bb70;
        case 0x40bb7cu: goto label_40bb7c;
        case 0x40bb88u: goto label_40bb88;
        case 0x40bc0cu: goto label_40bc0c;
        default: break;
    }

    ctx->pc = 0x40b8f0u;

    // 0x40b8f0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x40b8f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x40b8f4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x40b8f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x40b8f8: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x40b8f8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x40b8fc: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x40b8fcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40b900: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x40b900u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x40b904: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x40b904u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x40b908: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x40b908u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x40b90c: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x40b90cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x40b910: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x40B910u;
    {
        const bool branch_taken_0x40b910 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x40B914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40B910u;
        // 0x40b914: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40b910) {
            ctx->pc = 0x40B920u;
            goto label_40b920;
        }
    }
    ctx->pc = 0x40B918u;
    // 0x40b918: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x40B918u;
    {
        const bool branch_taken_0x40b918 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x40B91Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40B918u;
        // 0x40b91c: 0x8d040004  lw          $a0, 0x4($t0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40b918) {
            ctx->pc = 0x40B93Cu;
            goto label_40b93c;
        }
    }
    ctx->pc = 0x40B920u;
label_40b920:
    // 0x40b920: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x40b920u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x40b924: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x40b924u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x40b928: 0x46140836  c.le.s      $f1, $f20
    ctx->pc = 0x40b928u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x40b92c: 0x0  nop
    ctx->pc = 0x40b92cu;
    // NOP
    // 0x40b930: 0x4502000d  bc1fl       . + 4 + (0xD << 2)
    ctx->pc = 0x40B930u;
    {
        const bool branch_taken_0x40b930 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x40b930) {
            ctx->pc = 0x40B934u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x40B930u;
            // 0x40b934: 0x8d02001c  lw          $v0, 0x1C($t0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x40B968u;
            goto label_40b968;
        }
    }
    ctx->pc = 0x40B938u;
    // 0x40b938: 0x8d040008  lw          $a0, 0x8($t0)
    ctx->pc = 0x40b938u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
label_40b93c:
    // 0x40b93c: 0x120400c7  beq         $s0, $a0, . + 4 + (0xC7 << 2)
    ctx->pc = 0x40B93Cu;
    {
        const bool branch_taken_0x40b93c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 4));
        ctx->pc = 0x40B940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40B93Cu;
        // 0x40b940: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40b93c) {
            ctx->pc = 0x40BC5Cu;
            goto label_40bc5c;
        }
    }
    ctx->pc = 0x40B944u;
    // 0x40b944: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x40b944u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x40b948: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x40b948u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
    // 0x40b94c: 0x78830010  lq          $v1, 0x10($a0)
    ctx->pc = 0x40b94cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x40b950: 0x7e030010  sq          $v1, 0x10($s0)
    ctx->pc = 0x40b950u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 3));
    // 0x40b954: 0x78820020  lq          $v0, 0x20($a0)
    ctx->pc = 0x40b954u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x40b958: 0x7e020020  sq          $v0, 0x20($s0)
    ctx->pc = 0x40b958u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), GPR_VEC(ctx, 2));
    // 0x40b95c: 0x78830030  lq          $v1, 0x30($a0)
    ctx->pc = 0x40b95cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x40b960: 0x100000bd  b           . + 4 + (0xBD << 2)
    ctx->pc = 0x40B960u;
    {
        const bool branch_taken_0x40b960 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x40B964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40B960u;
        // 0x40b964: 0x7e030030  sq          $v1, 0x30($s0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 16), 48), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40b960) {
            ctx->pc = 0x40BC58u;
            goto label_40bc58;
        }
    }
    ctx->pc = 0x40B968u;
label_40b968:
    // 0x40b968: 0x10400089  beqz        $v0, . + 4 + (0x89 << 2)
    ctx->pc = 0x40B968u;
    {
        const bool branch_taken_0x40b968 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x40B96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40B968u;
        // 0x40b96c: 0x8fa3000c  lw          $v1, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40b968) {
            ctx->pc = 0x40BB90u;
            goto label_40bb90;
        }
    }
    ctx->pc = 0x40B970u;
    // 0x40b970: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x40b970u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x40b974: 0x34420003  ori         $v0, $v0, 0x3
    ctx->pc = 0x40b974u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
    // 0x40b978: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x40b978u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x40b97c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x40b97cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x40b980: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x40b980u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x40b984: 0xafa3000c  sw          $v1, 0xC($sp)
    ctx->pc = 0x40b984u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 3));
    // 0x40b988: 0xe7a10028  swc1        $f1, 0x28($sp)
    ctx->pc = 0x40b988u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x40b98c: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x40b98cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x40b990: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x40b990u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x40b994: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x40b994u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x40b998: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x40b998u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x40b99c: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x40b99cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x40b9a0: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x40b9a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x40b9a4: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x40b9a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x40b9a8: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x40b9a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x40b9ac: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x40b9acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x40b9b0: 0x8d030008  lw          $v1, 0x8($t0)
    ctx->pc = 0x40b9b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x40b9b4: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x40b9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x40b9b8: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x40b9b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x40b9bc: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x40b9bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x40b9c0: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x40b9c0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x40b9c4: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x40b9c4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x40b9c8: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x40b9c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x40b9cc: 0xc46b0004  lwc1        $f11, 0x4($v1)
    ctx->pc = 0x40b9ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
    // 0x40b9d0: 0x46005ac1  sub.s       $f11, $f11, $f0
    ctx->pc = 0x40b9d0u;
    ctx->f[11] = FPU_SUB_S(ctx->f[11], ctx->f[0]);
    // 0x40b9d4: 0xe7ab0004  swc1        $f11, 0x4($sp)
    ctx->pc = 0x40b9d4u;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x40b9d8: 0xc46a0008  lwc1        $f10, 0x8($v1)
    ctx->pc = 0x40b9d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x40b9dc: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x40b9dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x40b9e0: 0x46005281  sub.s       $f10, $f10, $f0
    ctx->pc = 0x40b9e0u;
    ctx->f[10] = FPU_SUB_S(ctx->f[10], ctx->f[0]);
    // 0x40b9e4: 0xe7aa0008  swc1        $f10, 0x8($sp)
    ctx->pc = 0x40b9e4u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x40b9e8: 0xc4690010  lwc1        $f9, 0x10($v1)
    ctx->pc = 0x40b9e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x40b9ec: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x40b9ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x40b9f0: 0x46004a41  sub.s       $f9, $f9, $f0
    ctx->pc = 0x40b9f0u;
    ctx->f[9] = FPU_SUB_S(ctx->f[9], ctx->f[0]);
    // 0x40b9f4: 0xe7a90010  swc1        $f9, 0x10($sp)
    ctx->pc = 0x40b9f4u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x40b9f8: 0xc4400014  lwc1        $f0, 0x14($v0)
    ctx->pc = 0x40b9f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x40b9fc: 0xc4680014  lwc1        $f8, 0x14($v1)
    ctx->pc = 0x40b9fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x40ba00: 0x46004201  sub.s       $f8, $f8, $f0
    ctx->pc = 0x40ba00u;
    ctx->f[8] = FPU_SUB_S(ctx->f[8], ctx->f[0]);
    // 0x40ba04: 0xe7a80014  swc1        $f8, 0x14($sp)
    ctx->pc = 0x40ba04u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x40ba08: 0xc4670018  lwc1        $f7, 0x18($v1)
    ctx->pc = 0x40ba08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x40ba0c: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x40ba0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x40ba10: 0x460039c1  sub.s       $f7, $f7, $f0
    ctx->pc = 0x40ba10u;
    ctx->f[7] = FPU_SUB_S(ctx->f[7], ctx->f[0]);
    // 0x40ba14: 0xe7a70018  swc1        $f7, 0x18($sp)
    ctx->pc = 0x40ba14u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x40ba18: 0xc4660020  lwc1        $f6, 0x20($v1)
    ctx->pc = 0x40ba18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x40ba1c: 0xc4400020  lwc1        $f0, 0x20($v0)
    ctx->pc = 0x40ba1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x40ba20: 0x46003181  sub.s       $f6, $f6, $f0
    ctx->pc = 0x40ba20u;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[0]);
    // 0x40ba24: 0xe7a60020  swc1        $f6, 0x20($sp)
    ctx->pc = 0x40ba24u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x40ba28: 0xc4400024  lwc1        $f0, 0x24($v0)
    ctx->pc = 0x40ba28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x40ba2c: 0xc4650024  lwc1        $f5, 0x24($v1)
    ctx->pc = 0x40ba2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x40ba30: 0x46002941  sub.s       $f5, $f5, $f0
    ctx->pc = 0x40ba30u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
    // 0x40ba34: 0xe7a50024  swc1        $f5, 0x24($sp)
    ctx->pc = 0x40ba34u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x40ba38: 0xc4640028  lwc1        $f4, 0x28($v1)
    ctx->pc = 0x40ba38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x40ba3c: 0xc4400028  lwc1        $f0, 0x28($v0)
    ctx->pc = 0x40ba3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x40ba40: 0x46002101  sub.s       $f4, $f4, $f0
    ctx->pc = 0x40ba40u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
    // 0x40ba44: 0xe7a40028  swc1        $f4, 0x28($sp)
    ctx->pc = 0x40ba44u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x40ba48: 0xc4630030  lwc1        $f3, 0x30($v1)
    ctx->pc = 0x40ba48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x40ba4c: 0xc4400030  lwc1        $f0, 0x30($v0)
    ctx->pc = 0x40ba4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x40ba50: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x40ba50u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x40ba54: 0xe7a30030  swc1        $f3, 0x30($sp)
    ctx->pc = 0x40ba54u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x40ba58: 0xc4400034  lwc1        $f0, 0x34($v0)
    ctx->pc = 0x40ba58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x40ba5c: 0xc4620034  lwc1        $f2, 0x34($v1)
    ctx->pc = 0x40ba5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x40ba60: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x40ba60u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x40ba64: 0xe7a20034  swc1        $f2, 0x34($sp)
    ctx->pc = 0x40ba64u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x40ba68: 0xc46c0038  lwc1        $f12, 0x38($v1)
    ctx->pc = 0x40ba68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x40ba6c: 0xc4400038  lwc1        $f0, 0x38($v0)
    ctx->pc = 0x40ba6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x40ba70: 0x46006301  sub.s       $f12, $f12, $f0
    ctx->pc = 0x40ba70u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    // 0x40ba74: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x40ba74u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x40ba78: 0x46145ac2  mul.s       $f11, $f11, $f20
    ctx->pc = 0x40ba78u;
    ctx->f[11] = FPU_MUL_S(ctx->f[11], ctx->f[20]);
    // 0x40ba7c: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x40ba7cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x40ba80: 0x46145282  mul.s       $f10, $f10, $f20
    ctx->pc = 0x40ba80u;
    ctx->f[10] = FPU_MUL_S(ctx->f[10], ctx->f[20]);
    // 0x40ba84: 0xe7ab0004  swc1        $f11, 0x4($sp)
    ctx->pc = 0x40ba84u;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x40ba88: 0xe7aa0008  swc1        $f10, 0x8($sp)
    ctx->pc = 0x40ba88u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x40ba8c: 0x46144a42  mul.s       $f9, $f9, $f20
    ctx->pc = 0x40ba8cu;
    ctx->f[9] = FPU_MUL_S(ctx->f[9], ctx->f[20]);
    // 0x40ba90: 0x46144202  mul.s       $f8, $f8, $f20
    ctx->pc = 0x40ba90u;
    ctx->f[8] = FPU_MUL_S(ctx->f[8], ctx->f[20]);
    // 0x40ba94: 0xe7a90010  swc1        $f9, 0x10($sp)
    ctx->pc = 0x40ba94u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x40ba98: 0x461439c2  mul.s       $f7, $f7, $f20
    ctx->pc = 0x40ba98u;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[20]);
    // 0x40ba9c: 0xe7a80014  swc1        $f8, 0x14($sp)
    ctx->pc = 0x40ba9cu;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x40baa0: 0xe7a70018  swc1        $f7, 0x18($sp)
    ctx->pc = 0x40baa0u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x40baa4: 0x46143182  mul.s       $f6, $f6, $f20
    ctx->pc = 0x40baa4u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[20]);
    // 0x40baa8: 0x46142942  mul.s       $f5, $f5, $f20
    ctx->pc = 0x40baa8u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[20]);
    // 0x40baac: 0xe7a60020  swc1        $f6, 0x20($sp)
    ctx->pc = 0x40baacu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x40bab0: 0x46142102  mul.s       $f4, $f4, $f20
    ctx->pc = 0x40bab0u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[20]);
    // 0x40bab4: 0xe7a50024  swc1        $f5, 0x24($sp)
    ctx->pc = 0x40bab4u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x40bab8: 0xe7a40028  swc1        $f4, 0x28($sp)
    ctx->pc = 0x40bab8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x40babc: 0x461418c2  mul.s       $f3, $f3, $f20
    ctx->pc = 0x40babcu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[20]);
    // 0x40bac0: 0x46146302  mul.s       $f12, $f12, $f20
    ctx->pc = 0x40bac0u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[20]);
    // 0x40bac4: 0xe7a30030  swc1        $f3, 0x30($sp)
    ctx->pc = 0x40bac4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x40bac8: 0x46141082  mul.s       $f2, $f2, $f20
    ctx->pc = 0x40bac8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[20]);
    // 0x40bacc: 0xe7ac0038  swc1        $f12, 0x38($sp)
    ctx->pc = 0x40baccu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x40bad0: 0xe7a20034  swc1        $f2, 0x34($sp)
    ctx->pc = 0x40bad0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x40bad4: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x40bad4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x40bad8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x40bad8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x40badc: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x40badcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x40bae0: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x40bae0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x40bae4: 0x460b0840  add.s       $f1, $f1, $f11
    ctx->pc = 0x40bae4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[11]);
    // 0x40bae8: 0xe6010004  swc1        $f1, 0x4($s0)
    ctx->pc = 0x40bae8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x40baec: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x40baecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x40baf0: 0x460a0000  add.s       $f0, $f0, $f10
    ctx->pc = 0x40baf0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[10]);
    // 0x40baf4: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x40baf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x40baf8: 0xc4410010  lwc1        $f1, 0x10($v0)
    ctx->pc = 0x40baf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x40bafc: 0x46090840  add.s       $f1, $f1, $f9
    ctx->pc = 0x40bafcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[9]);
    // 0x40bb00: 0xe6010010  swc1        $f1, 0x10($s0)
    ctx->pc = 0x40bb00u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x40bb04: 0xc4400014  lwc1        $f0, 0x14($v0)
    ctx->pc = 0x40bb04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x40bb08: 0x46080000  add.s       $f0, $f0, $f8
    ctx->pc = 0x40bb08u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[8]);
    // 0x40bb0c: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x40bb0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x40bb10: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x40bb10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x40bb14: 0x46070840  add.s       $f1, $f1, $f7
    ctx->pc = 0x40bb14u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[7]);
    // 0x40bb18: 0xe6010018  swc1        $f1, 0x18($s0)
    ctx->pc = 0x40bb18u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x40bb1c: 0xc4400020  lwc1        $f0, 0x20($v0)
    ctx->pc = 0x40bb1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x40bb20: 0x46060000  add.s       $f0, $f0, $f6
    ctx->pc = 0x40bb20u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[6]);
    // 0x40bb24: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x40bb24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x40bb28: 0xc4410024  lwc1        $f1, 0x24($v0)
    ctx->pc = 0x40bb28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x40bb2c: 0x46050840  add.s       $f1, $f1, $f5
    ctx->pc = 0x40bb2cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[5]);
    // 0x40bb30: 0xe6010024  swc1        $f1, 0x24($s0)
    ctx->pc = 0x40bb30u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x40bb34: 0xc4400028  lwc1        $f0, 0x28($v0)
    ctx->pc = 0x40bb34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x40bb38: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x40bb38u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x40bb3c: 0xe6000028  swc1        $f0, 0x28($s0)
    ctx->pc = 0x40bb3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
    // 0x40bb40: 0xc4410030  lwc1        $f1, 0x30($v0)
    ctx->pc = 0x40bb40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x40bb44: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x40bb44u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x40bb48: 0xe6010030  swc1        $f1, 0x30($s0)
    ctx->pc = 0x40bb48u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x40bb4c: 0xc4400034  lwc1        $f0, 0x34($v0)
    ctx->pc = 0x40bb4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x40bb50: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x40bb50u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x40bb54: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x40bb54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x40bb58: 0xc4410038  lwc1        $f1, 0x38($v0)
    ctx->pc = 0x40bb58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x40bb5c: 0x460c0840  add.s       $f1, $f1, $f12
    ctx->pc = 0x40bb5cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[12]);
    // 0x40bb60: 0xe6010038  swc1        $f1, 0x38($s0)
    ctx->pc = 0x40bb60u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x40bb64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40bb64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40bb68: 0xc104cf2  jal         func_4133C8
    ctx->pc = 0x40BB68u;
    SET_GPR_U32(ctx, 31, 0x40BB70u);
    ctx->pc = 0x40BB6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40BB68u;
    // 0x40bb6c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4133C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4133C8u, 0x40BB68u, 0x40BB70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40BB70u;
label_40bb70:
    // 0x40bb70: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x40bb70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x40bb74: 0xc104cf2  jal         func_4133C8
    ctx->pc = 0x40BB74u;
    SET_GPR_U32(ctx, 31, 0x40BB7Cu);
    ctx->pc = 0x40BB78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40BB74u;
    // 0x40bb78: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4133C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4133C8u, 0x40BB74u, 0x40BB7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40BB7Cu;
label_40bb7c:
    // 0x40bb7c: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x40bb7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x40bb80: 0xc104cf2  jal         func_4133C8
    ctx->pc = 0x40BB80u;
    SET_GPR_U32(ctx, 31, 0x40BB88u);
    ctx->pc = 0x40BB84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40BB80u;
    // 0x40bb84: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4133C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4133C8u, 0x40BB80u, 0x40BB88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40BB88u;
label_40bb88:
    // 0x40bb88: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x40BB88u;
    {
        const bool branch_taken_0x40bb88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x40BB8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40BB88u;
        // 0x40bb8c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40bb88) {
            ctx->pc = 0x40BC5Cu;
            goto label_40bc5c;
        }
    }
    ctx->pc = 0x40BB90u;
label_40bb90:
    // 0x40bb90: 0x8d070004  lw          $a3, 0x4($t0)
    ctx->pc = 0x40bb90u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x40bb94: 0x2505000c  addiu       $a1, $t0, 0xC
    ctx->pc = 0x40bb94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), 12));
    // 0x40bb98: 0x8d030008  lw          $v1, 0x8($t0)
    ctx->pc = 0x40bb98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x40bb9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40bb9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40bba0: 0x68e20037  ldl         $v0, 0x37($a3)
    ctx->pc = 0x40bba0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x40bba4: 0x6ce20030  ldr         $v0, 0x30($a3)
    ctx->pc = 0x40bba4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x40bba8: 0x8ce60038  lw          $a2, 0x38($a3)
    ctx->pc = 0x40bba8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 56)));
    // 0x40bbac: 0xb3a20047  sdl         $v0, 0x47($sp)
    ctx->pc = 0x40bbacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x40bbb0: 0xb7a20040  sdr         $v0, 0x40($sp)
    ctx->pc = 0x40bbb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x40bbb4: 0xafa60048  sw          $a2, 0x48($sp)
    ctx->pc = 0x40bbb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 6));
    // 0x40bbb8: 0x686b0037  ldl         $t3, 0x37($v1)
    ctx->pc = 0x40bbb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
    // 0x40bbbc: 0x6c6b0030  ldr         $t3, 0x30($v1)
    ctx->pc = 0x40bbbcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
    // 0x40bbc0: 0x8c620038  lw          $v0, 0x38($v1)
    ctx->pc = 0x40bbc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
    // 0x40bbc4: 0xb3ab0057  sdl         $t3, 0x57($sp)
    ctx->pc = 0x40bbc4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x40bbc8: 0xb7ab0050  sdr         $t3, 0x50($sp)
    ctx->pc = 0x40bbc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x40bbcc: 0xafa20058  sw          $v0, 0x58($sp)
    ctx->pc = 0x40bbccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
    // 0x40bbd0: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x40bbd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x40bbd4: 0x78e20000  lq          $v0, 0x0($a3)
    ctx->pc = 0x40bbd4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x40bbd8: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x40bbd8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
    // 0x40bbdc: 0x78e30010  lq          $v1, 0x10($a3)
    ctx->pc = 0x40bbdcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x40bbe0: 0x7e030010  sq          $v1, 0x10($s0)
    ctx->pc = 0x40bbe0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 3));
    // 0x40bbe4: 0x78e20020  lq          $v0, 0x20($a3)
    ctx->pc = 0x40bbe4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x40bbe8: 0x7e020020  sq          $v0, 0x20($s0)
    ctx->pc = 0x40bbe8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), GPR_VEC(ctx, 2));
    // 0x40bbec: 0x78e30030  lq          $v1, 0x30($a3)
    ctx->pc = 0x40bbecu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 7), 48)));
    // 0x40bbf0: 0x7e030030  sq          $v1, 0x30($s0)
    ctx->pc = 0x40bbf0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), GPR_VEC(ctx, 3));
    // 0x40bbf4: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x40bbf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x40bbf8: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x40bbf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x40bbfc: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x40bbfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x40bc00: 0xc50c0018  lwc1        $f12, 0x18($t0)
    ctx->pc = 0x40bc00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x40bc04: 0xc103e6c  jal         func_40F9B0
    ctx->pc = 0x40BC04u;
    SET_GPR_U32(ctx, 31, 0x40BC0Cu);
    ctx->pc = 0x40BC08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40BC04u;
    // 0x40bc08: 0x46146302  mul.s       $f12, $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40F9B0u, 0x40BC04u, 0x40BC0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40BC0Cu;
label_40bc0c:
    // 0x40bc0c: 0xc7a10050  lwc1        $f1, 0x50($sp)
    ctx->pc = 0x40bc0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x40bc10: 0xc7a50040  lwc1        $f5, 0x40($sp)
    ctx->pc = 0x40bc10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x40bc14: 0xc7a20054  lwc1        $f2, 0x54($sp)
    ctx->pc = 0x40bc14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x40bc18: 0xc7a40044  lwc1        $f4, 0x44($sp)
    ctx->pc = 0x40bc18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x40bc1c: 0x46050841  sub.s       $f1, $f1, $f5
    ctx->pc = 0x40bc1cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[5]);
    // 0x40bc20: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x40bc20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x40bc24: 0xc7a30048  lwc1        $f3, 0x48($sp)
    ctx->pc = 0x40bc24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x40bc28: 0x46041081  sub.s       $f2, $f2, $f4
    ctx->pc = 0x40bc28u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
    // 0x40bc2c: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x40bc2cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x40bc30: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x40bc30u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x40bc34: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x40bc34u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x40bc38: 0x46141082  mul.s       $f2, $f2, $f20
    ctx->pc = 0x40bc38u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[20]);
    // 0x40bc3c: 0x46050840  add.s       $f1, $f1, $f5
    ctx->pc = 0x40bc3cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[5]);
    // 0x40bc40: 0x46041080  add.s       $f2, $f2, $f4
    ctx->pc = 0x40bc40u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[4]);
    // 0x40bc44: 0xe6010030  swc1        $f1, 0x30($s0)
    ctx->pc = 0x40bc44u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x40bc48: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x40bc48u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x40bc4c: 0xe6020034  swc1        $f2, 0x34($s0)
    ctx->pc = 0x40bc4cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x40bc50: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x40bc50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x40bc54: 0x0  nop
    ctx->pc = 0x40bc54u;
    // NOP
label_40bc58:
    // 0x40bc58: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x40bc58u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_40bc5c:
    // 0x40bc5c: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x40bc5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x40bc60: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x40bc60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x40bc64: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x40bc64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x40bc68: 0x3e00008  jr          $ra
    ctx->pc = 0x40BC68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x40BC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40BC68u;
        // 0x40bc6c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40BC68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x40BC70u;
}
