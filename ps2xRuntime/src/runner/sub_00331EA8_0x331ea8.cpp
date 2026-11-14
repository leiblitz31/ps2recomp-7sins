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

// Function: sub_00331EA8
// Address: 0x331ea8 - 0x334fc8
void sub_00331EA8_0x331ea8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00331EA8_0x331ea8");
#endif

    switch (ctx->pc) {
        case 0x331f70u: goto label_331f70;
        case 0x332034u: goto label_332034;
        case 0x332054u: goto label_332054;
        case 0x332310u: goto label_332310;
        case 0x3323b0u: goto label_3323b0;
        case 0x3324a4u: goto label_3324a4;
        case 0x332870u: goto label_332870;
        case 0x3328b4u: goto label_3328b4;
        case 0x3328e8u: goto label_3328e8;
        case 0x3329a0u: goto label_3329a0;
        case 0x332a08u: goto label_332a08;
        case 0x332af0u: goto label_332af0;
        case 0x332b64u: goto label_332b64;
        case 0x333020u: goto label_333020;
        case 0x333068u: goto label_333068;
        case 0x33319cu: goto label_33319c;
        case 0x3331c8u: goto label_3331c8;
        case 0x3331d4u: goto label_3331d4;
        case 0x3331e8u: goto label_3331e8;
        case 0x33320cu: goto label_33320c;
        case 0x333230u: goto label_333230;
        case 0x333258u: goto label_333258;
        case 0x333268u: goto label_333268;
        case 0x3332e8u: goto label_3332e8;
        case 0x3332f8u: goto label_3332f8;
        case 0x333370u: goto label_333370;
        case 0x333990u: goto label_333990;
        case 0x3339d8u: goto label_3339d8;
        case 0x3339e4u: goto label_3339e4;
        case 0x333b44u: goto label_333b44;
        case 0x333cb8u: goto label_333cb8;
        case 0x333cc8u: goto label_333cc8;
        case 0x333cdcu: goto label_333cdc;
        case 0x333cf8u: goto label_333cf8;
        case 0x333dc4u: goto label_333dc4;
        case 0x333dd4u: goto label_333dd4;
        case 0x333e00u: goto label_333e00;
        case 0x333e7cu: goto label_333e7c;
        case 0x333e90u: goto label_333e90;
        case 0x333ea8u: goto label_333ea8;
        case 0x333edcu: goto label_333edc;
        case 0x333ee8u: goto label_333ee8;
        case 0x333f5cu: goto label_333f5c;
        case 0x33400cu: goto label_33400c;
        case 0x3340e8u: goto label_3340e8;
        case 0x334278u: goto label_334278;
        case 0x334288u: goto label_334288;
        case 0x3342bcu: goto label_3342bc;
        case 0x3343e4u: goto label_3343e4;
        case 0x3343f4u: goto label_3343f4;
        case 0x334408u: goto label_334408;
        case 0x334434u: goto label_334434;
        case 0x334440u: goto label_334440;
        case 0x334454u: goto label_334454;
        case 0x334478u: goto label_334478;
        case 0x33449cu: goto label_33449c;
        case 0x3344c4u: goto label_3344c4;
        case 0x3344d4u: goto label_3344d4;
        case 0x334554u: goto label_334554;
        case 0x334564u: goto label_334564;
        case 0x3345f0u: goto label_3345f0;
        case 0x33485cu: goto label_33485c;
        case 0x334b58u: goto label_334b58;
        case 0x334ba0u: goto label_334ba0;
        case 0x334c48u: goto label_334c48;
        case 0x334c58u: goto label_334c58;
        case 0x334c6cu: goto label_334c6c;
        case 0x334d60u: goto label_334d60;
        case 0x334e28u: goto label_334e28;
        case 0x334f48u: goto label_334f48;
        case 0x334f60u: goto label_334f60;
        case 0x334f80u: goto label_334f80;
        case 0x334f90u: goto label_334f90;
        default: break;
    }

    ctx->pc = 0x331ea8u;

label_331ea8:
    // 0x331ea8: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x331ea8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x331eac: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x331eacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x331eb0: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x331eb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x331eb4: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x331eb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x331eb8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x331eb8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x331ebc: 0x2442ce80  addiu       $v0, $v0, -0x3180
    ctx->pc = 0x331ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954624));
    // 0x331ec0: 0x8c430764  lw          $v1, 0x764($v0)
    ctx->pc = 0x331ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x61D5E4u));
    // 0x331ec4: 0x8c49073c  lw          $t1, 0x73C($v0)
    ctx->pc = 0x331ec4u;
    SET_GPR_S32(ctx, 9, (int32_t)FAST_READ32(0x61D5BCu));
    // 0x331ec8: 0x8c470738  lw          $a3, 0x738($v0)
    ctx->pc = 0x331ec8u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x61D5B8u));
    // 0x331ecc: 0x31043  sra         $v0, $v1, 1
    ctx->pc = 0x331eccu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
    // 0x331ed0: 0x18400055  blez        $v0, . + 4 + (0x55 << 2)
    ctx->pc = 0x331ED0u;
    {
        const bool branch_taken_0x331ed0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x331ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x331ED0u;
        // 0x331ed4: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x331ed0) {
            ctx->pc = 0x332028u;
            goto label_332028;
        }
    }
    ctx->pc = 0x331ED8u;
    // 0x331ed8: 0x25280010  addiu       $t0, $t1, 0x10
    ctx->pc = 0x331ed8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
    // 0x331edc: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x331edcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x331ee0: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x331EE0u;
    {
        const bool branch_taken_0x331ee0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x331EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x331EE0u;
        // 0x331ee4: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x331ee0) {
            ctx->pc = 0x331F5Cu;
            goto label_331f5c;
        }
    }
    ctx->pc = 0x331EE8u;
    // 0x331ee8: 0x24e60010  addiu       $a2, $a3, 0x10
    ctx->pc = 0x331ee8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x331eec: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x331eecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x331ef0: 0xc4c0fff4  lwc1        $f0, -0xC($a2)
    ctx->pc = 0x331ef0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4294967284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x331ef4: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x331ef4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x331ef8: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x331ef8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x331efc: 0xc4c0fff8  lwc1        $f0, -0x8($a2)
    ctx->pc = 0x331efcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4294967288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x331f00: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x331f00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x331f04: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x331f04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x331f08: 0xc4c0fffc  lwc1        $f0, -0x4($a2)
    ctx->pc = 0x331f08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x331f0c: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x331f0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x331f10: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x331f10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x331f14: 0xc4e00010  lwc1        $f0, 0x10($a3)
    ctx->pc = 0x331f14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x331f18: 0x24e70018  addiu       $a3, $a3, 0x18
    ctx->pc = 0x331f18u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 24));
    // 0x331f1c: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x331f1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x331f20: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x331f20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x331f24: 0xc500fff4  lwc1        $f0, -0xC($t0)
    ctx->pc = 0x331f24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4294967284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x331f28: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x331f28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x331f2c: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x331f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x331f30: 0xc500fff8  lwc1        $f0, -0x8($t0)
    ctx->pc = 0x331f30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4294967288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x331f34: 0x24860004  addiu       $a2, $a0, 0x4
    ctx->pc = 0x331f34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x331f38: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x331f38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x331f3c: 0xc501fffc  lwc1        $f1, -0x4($t0)
    ctx->pc = 0x331f3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x331f40: 0x2528fff8  addiu       $t0, $t1, -0x8
    ctx->pc = 0x331f40u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967288));
    // 0x331f44: 0xe4a10000  swc1        $f1, 0x0($a1)
    ctx->pc = 0x331f44u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x331f48: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x331f48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x331f4c: 0xc5200010  lwc1        $f0, 0x10($t1)
    ctx->pc = 0x331f4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x331f50: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x331f50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x331f54: 0x10600034  beqz        $v1, . + 4 + (0x34 << 2)
    ctx->pc = 0x331F54u;
    {
        const bool branch_taken_0x331f54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x331F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x331F54u;
        // 0x331f58: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x331f54) {
            ctx->pc = 0x332028u;
            goto label_332028;
        }
    }
    ctx->pc = 0x331F5Cu;
label_331f5c:
    // 0x331f5c: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x331f5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x331f60: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x331f60u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x331f64: 0x80502d  daddu       $t2, $a0, $zero
    ctx->pc = 0x331f64u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x331f68: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x331f68u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x331f6c: 0x0  nop
    ctx->pc = 0x331f6cu;
    // NOP
label_331f70:
    // 0x331f70: 0x24e60010  addiu       $a2, $a3, 0x10
    ctx->pc = 0x331f70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x331f74: 0x2463fffe  addiu       $v1, $v1, -0x2
    ctx->pc = 0x331f74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
    // 0x331f78: 0xc4c0fff4  lwc1        $f0, -0xC($a2)
    ctx->pc = 0x331f78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4294967284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x331f7c: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x331f7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x331f80: 0xc4c1fff8  lwc1        $f1, -0x8($a2)
    ctx->pc = 0x331f80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4294967288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x331f84: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x331f84u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x331f88: 0xc4c2fffc  lwc1        $f2, -0x4($a2)
    ctx->pc = 0x331f88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x331f8c: 0x24e60028  addiu       $a2, $a3, 0x28
    ctx->pc = 0x331f8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 40));
    // 0x331f90: 0xe4a20000  swc1        $f2, 0x0($a1)
    ctx->pc = 0x331f90u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x331f94: 0xc4e00010  lwc1        $f0, 0x10($a3)
    ctx->pc = 0x331f94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x331f98: 0xe4a00004  swc1        $f0, 0x4($a1)
    ctx->pc = 0x331f98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x331f9c: 0xc501fff4  lwc1        $f1, -0xC($t0)
    ctx->pc = 0x331f9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4294967284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x331fa0: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x331fa0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x331fa4: 0xc520fff8  lwc1        $f0, -0x8($t1)
    ctx->pc = 0x331fa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4294967288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x331fa8: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x331fa8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x331fac: 0xc541fffc  lwc1        $f1, -0x4($t2)
    ctx->pc = 0x331facu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x331fb0: 0xe4a10008  swc1        $f1, 0x8($a1)
    ctx->pc = 0x331fb0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x331fb4: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x331fb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x331fb8: 0xe4a0000c  swc1        $f0, 0xC($a1)
    ctx->pc = 0x331fb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
    // 0x331fbc: 0xc4c1fff4  lwc1        $f1, -0xC($a2)
    ctx->pc = 0x331fbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4294967284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x331fc0: 0xe4410010  swc1        $f1, 0x10($v0)
    ctx->pc = 0x331fc0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x331fc4: 0x24420014  addiu       $v0, $v0, 0x14
    ctx->pc = 0x331fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x331fc8: 0xc4c0fff8  lwc1        $f0, -0x8($a2)
    ctx->pc = 0x331fc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4294967288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x331fcc: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x331fccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x331fd0: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x331fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x331fd4: 0xc4c0fffc  lwc1        $f0, -0x4($a2)
    ctx->pc = 0x331fd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x331fd8: 0xe4a00010  swc1        $f0, 0x10($a1)
    ctx->pc = 0x331fd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 16), bits); }
    // 0x331fdc: 0xc4e10028  lwc1        $f1, 0x28($a3)
    ctx->pc = 0x331fdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x331fe0: 0x24e70030  addiu       $a3, $a3, 0x30
    ctx->pc = 0x331fe0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 48));
    // 0x331fe4: 0xe4a10014  swc1        $f1, 0x14($a1)
    ctx->pc = 0x331fe4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 20), bits); }
    // 0x331fe8: 0xc500ffdc  lwc1        $f0, -0x24($t0)
    ctx->pc = 0x331fe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4294967260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x331fec: 0x2508ffd0  addiu       $t0, $t0, -0x30
    ctx->pc = 0x331fecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967248));
    // 0x331ff0: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x331ff0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x331ff4: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x331ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x331ff8: 0xc520ffe0  lwc1        $f0, -0x20($t1)
    ctx->pc = 0x331ff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4294967264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x331ffc: 0x2529ffd0  addiu       $t1, $t1, -0x30
    ctx->pc = 0x331ffcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967248));
    // 0x332000: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x332000u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x332004: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x332004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x332008: 0xc540ffe4  lwc1        $f0, -0x1C($t2)
    ctx->pc = 0x332008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 4294967268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33200c: 0x254affd0  addiu       $t2, $t2, -0x30
    ctx->pc = 0x33200cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967248));
    // 0x332010: 0xe4a00018  swc1        $f0, 0x18($a1)
    ctx->pc = 0x332010u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 24), bits); }
    // 0x332014: 0xc481ffe8  lwc1        $f1, -0x18($a0)
    ctx->pc = 0x332014u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294967272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x332018: 0x2484ffd0  addiu       $a0, $a0, -0x30
    ctx->pc = 0x332018u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967248));
    // 0x33201c: 0xe4a1001c  swc1        $f1, 0x1C($a1)
    ctx->pc = 0x33201cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 28), bits); }
    // 0x332020: 0x1460ffd3  bnez        $v1, . + 4 + (-0x2D << 2)
    ctx->pc = 0x332020u;
    {
        const bool branch_taken_0x332020 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x332024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332020u;
        // 0x332024: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x332020) {
            ctx->pc = 0x331F70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_331f70;
        }
    }
    ctx->pc = 0x332028u;
label_332028:
    // 0x332028: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x332028u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33202c: 0xc10a322  jal         func_428C88
    ctx->pc = 0x33202Cu;
    SET_GPR_U32(ctx, 31, 0x332034u);
    ctx->pc = 0x332030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33202Cu;
    // 0x332030: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x428C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x428C88u, 0x33202Cu, 0x332034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x332034u;
label_332034:
    // 0x332034: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x332034u;
    {
        const bool branch_taken_0x332034 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x332038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332034u;
        // 0x332038: 0x3c026c0a  lui         $v0, 0x6C0A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27658 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x332034) {
            ctx->pc = 0x33205Cu;
            goto label_33205c;
        }
    }
    ctx->pc = 0x33203Cu;
    // 0x33203c: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x33203cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x332040: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x332040u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x332044: 0x2484b8f0  addiu       $a0, $a0, -0x4710
    ctx->pc = 0x332044u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949104));
    // 0x332048: 0x24a5b910  addiu       $a1, $a1, -0x46F0
    ctx->pc = 0x332048u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949136));
    // 0x33204c: 0xc0bbc80  jal         func_2EF200
    ctx->pc = 0x33204Cu;
    SET_GPR_U32(ctx, 31, 0x332054u);
    ctx->pc = 0x332050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33204Cu;
    // 0x332050: 0x240600f3  addiu       $a2, $zero, 0xF3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 243));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EF200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EF200u, 0x33204Cu, 0x332054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x332054u;
label_332054:
    // 0x332054: 0x1000009a  b           . + 4 + (0x9A << 2)
    ctx->pc = 0x332054u;
    {
        const bool branch_taken_0x332054 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x332058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332054u;
        // 0x332058: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x332054) {
            ctx->pc = 0x3322C0u;
            goto label_3322c0;
        }
    }
    ctx->pc = 0x33205Cu;
label_33205c:
    // 0x33205c: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x33205cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x332060: 0x344203cf  ori         $v0, $v0, 0x3CF
    ctx->pc = 0x332060u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)975);
    // 0x332064: 0x34840101  ori         $a0, $a0, 0x101
    ctx->pc = 0x332064u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)257);
    // 0x332068: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x332068u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33206c: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x33206cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x332070: 0x34a5000a  ori         $a1, $a1, 0xA
    ctx->pc = 0x332070u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)10);
    // 0x332074: 0x704414c8  ppacw       $v0, $v0, $a0
    ctx->pc = 0x332074u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x332078: 0x70651cc8  ppacw       $v1, $v1, $a1
    ctx->pc = 0x332078u;
    SET_GPR_VEC(ctx, 3, PS2_PPACW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 5)));
    // 0x33207c: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x33207cu;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x332080: 0x8f84be20  lw          $a0, -0x41E0($gp)
    ctx->pc = 0x332080u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
    // 0x332084: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x332084u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x332088: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x332088u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x33208c: 0xaf84be20  sw          $a0, -0x41E0($gp)
    ctx->pc = 0x33208cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 4));
    // 0x332090: 0x2606ce80  addiu       $a2, $s0, -0x3180
    ctx->pc = 0x332090u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 4294954624));
    // 0x332094: 0x8cc50728  lw          $a1, 0x728($a2)
    ctx->pc = 0x332094u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 1832)));
    // 0x332098: 0xc4c30740  lwc1        $f3, 0x740($a2)
    ctx->pc = 0x332098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 1856)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x33209c: 0xc4a00070  lwc1        $f0, 0x70($a1)
    ctx->pc = 0x33209cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3320a0: 0xc4c106f8  lwc1        $f1, 0x6F8($a2)
    ctx->pc = 0x3320a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 1784)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3320a4: 0xc4c20744  lwc1        $f2, 0x744($a2)
    ctx->pc = 0x3320a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 1860)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3320a8: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x3320a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x3320ac: 0xe7a30004  swc1        $f3, 0x4($sp)
    ctx->pc = 0x3320acu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x3320b0: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x3320b0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x3320b4: 0xe7a2000c  swc1        $f2, 0xC($sp)
    ctx->pc = 0x3320b4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x3320b8: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x3320b8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3320bc: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x3320bcu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x3320c0: 0x24820010  addiu       $v0, $a0, 0x10
    ctx->pc = 0x3320c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x3320c4: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x3320c4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
    // 0x3320c8: 0x8ca30068  lw          $v1, 0x68($a1)
    ctx->pc = 0x3320c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 104)));
    // 0x3320cc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3320ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x3320d0: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x3320d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3320d4: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x3320D4u;
    {
        const bool branch_taken_0x3320d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3320D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3320D4u;
        // 0x3320d8: 0xc4a10000  lwc1        $f1, 0x0($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3320d4) {
            ctx->pc = 0x3320E0u;
            goto label_3320e0;
        }
    }
    ctx->pc = 0x3320DCu;
    // 0x3320dc: 0xc7838438  lwc1        $f3, -0x7BC8($gp)
    ctx->pc = 0x3320dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3320e0:
    // 0x3320e0: 0xc7828438  lwc1        $f2, -0x7BC8($gp)
    ctx->pc = 0x3320e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3320e4: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x3320e4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x3320e8: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x3320e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x3320ec: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x3320ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3320f0: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x3320f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x3320f4: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x3320f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x3320f8: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x3320f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3320fc: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x3320fcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x332100: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x332100u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x332104: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x332104u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x332108: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x332108u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x33210c: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x33210cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x332110: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x332110u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x332114: 0x7c820010  sq          $v0, 0x10($a0)
    ctx->pc = 0x332114u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 2));
    // 0x332118: 0x24820020  addiu       $v0, $a0, 0x20
    ctx->pc = 0x332118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x33211c: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x33211cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
    // 0x332120: 0xc4a00018  lwc1        $f0, 0x18($a1)
    ctx->pc = 0x332120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x332124: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x332124u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x332128: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x332128u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x33212c: 0xc4a1001c  lwc1        $f1, 0x1C($a1)
    ctx->pc = 0x33212cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x332130: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x332130u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x332134: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x332134u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x332138: 0xc4a00020  lwc1        $f0, 0x20($a1)
    ctx->pc = 0x332138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33213c: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x33213cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x332140: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x332140u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x332144: 0xc4a10024  lwc1        $f1, 0x24($a1)
    ctx->pc = 0x332144u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x332148: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x332148u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x33214c: 0xe7a1002c  swc1        $f1, 0x2C($sp)
    ctx->pc = 0x33214cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x332150: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x332150u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x332154: 0x7c820020  sq          $v0, 0x20($a0)
    ctx->pc = 0x332154u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 2));
    // 0x332158: 0x24820030  addiu       $v0, $a0, 0x30
    ctx->pc = 0x332158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x33215c: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x33215cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
    // 0x332160: 0xc4a00030  lwc1        $f0, 0x30($a1)
    ctx->pc = 0x332160u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x332164: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x332164u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x332168: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x332168u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x33216c: 0xc4a10034  lwc1        $f1, 0x34($a1)
    ctx->pc = 0x33216cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x332170: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x332170u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x332174: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x332174u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x332178: 0xc4a00038  lwc1        $f0, 0x38($a1)
    ctx->pc = 0x332178u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33217c: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x33217cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x332180: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x332180u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x332184: 0xc4a1003c  lwc1        $f1, 0x3C($a1)
    ctx->pc = 0x332184u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x332188: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x332188u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x33218c: 0xe7a1003c  swc1        $f1, 0x3C($sp)
    ctx->pc = 0x33218cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x332190: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x332190u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x332194: 0x7c820030  sq          $v0, 0x30($a0)
    ctx->pc = 0x332194u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 2));
    // 0x332198: 0x24820040  addiu       $v0, $a0, 0x40
    ctx->pc = 0x332198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x33219c: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x33219cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
    // 0x3321a0: 0xc4a00048  lwc1        $f0, 0x48($a1)
    ctx->pc = 0x3321a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3321a4: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x3321a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x3321a8: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x3321a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x3321ac: 0xc4a1004c  lwc1        $f1, 0x4C($a1)
    ctx->pc = 0x3321acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3321b0: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x3321b0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x3321b4: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x3321b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x3321b8: 0xc4a00050  lwc1        $f0, 0x50($a1)
    ctx->pc = 0x3321b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3321bc: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x3321bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x3321c0: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x3321c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x3321c4: 0xc4a10054  lwc1        $f1, 0x54($a1)
    ctx->pc = 0x3321c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3321c8: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3321c8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3321cc: 0xe7a1004c  swc1        $f1, 0x4C($sp)
    ctx->pc = 0x3321ccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x3321d0: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x3321d0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3321d4: 0x7c820040  sq          $v0, 0x40($a0)
    ctx->pc = 0x3321d4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 64), GPR_VEC(ctx, 2));
    // 0x3321d8: 0x24820050  addiu       $v0, $a0, 0x50
    ctx->pc = 0x3321d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
    // 0x3321dc: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x3321dcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
    // 0x3321e0: 0xafa00058  sw          $zero, 0x58($sp)
    ctx->pc = 0x3321e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 0));
    // 0x3321e4: 0xafa0005c  sw          $zero, 0x5C($sp)
    ctx->pc = 0x3321e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
    // 0x3321e8: 0xc4a00010  lwc1        $f0, 0x10($a1)
    ctx->pc = 0x3321e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3321ec: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x3321ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x3321f0: 0xc4a10014  lwc1        $f1, 0x14($a1)
    ctx->pc = 0x3321f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3321f4: 0xafa00058  sw          $zero, 0x58($sp)
    ctx->pc = 0x3321f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 0));
    // 0x3321f8: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x3321f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x3321fc: 0xafa0005c  sw          $zero, 0x5C($sp)
    ctx->pc = 0x3321fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
    // 0x332200: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x332200u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x332204: 0x7c820050  sq          $v0, 0x50($a0)
    ctx->pc = 0x332204u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 80), GPR_VEC(ctx, 2));
    // 0x332208: 0x24820060  addiu       $v0, $a0, 0x60
    ctx->pc = 0x332208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
    // 0x33220c: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x33220cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
    // 0x332210: 0xc4a00028  lwc1        $f0, 0x28($a1)
    ctx->pc = 0x332210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x332214: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x332214u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x332218: 0xc4a1002c  lwc1        $f1, 0x2C($a1)
    ctx->pc = 0x332218u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33221c: 0xafa00068  sw          $zero, 0x68($sp)
    ctx->pc = 0x33221cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 0));
    // 0x332220: 0xe7a10064  swc1        $f1, 0x64($sp)
    ctx->pc = 0x332220u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x332224: 0xafa0006c  sw          $zero, 0x6C($sp)
    ctx->pc = 0x332224u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
    // 0x332228: 0x7ba20060  lq          $v0, 0x60($sp)
    ctx->pc = 0x332228u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x33222c: 0x7c820060  sq          $v0, 0x60($a0)
    ctx->pc = 0x33222cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 96), GPR_VEC(ctx, 2));
    // 0x332230: 0x24820070  addiu       $v0, $a0, 0x70
    ctx->pc = 0x332230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
    // 0x332234: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x332234u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
    // 0x332238: 0xc4a00040  lwc1        $f0, 0x40($a1)
    ctx->pc = 0x332238u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33223c: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x33223cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x332240: 0xc4a10044  lwc1        $f1, 0x44($a1)
    ctx->pc = 0x332240u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x332244: 0xafa00078  sw          $zero, 0x78($sp)
    ctx->pc = 0x332244u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 0));
    // 0x332248: 0xe7a10074  swc1        $f1, 0x74($sp)
    ctx->pc = 0x332248u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x33224c: 0xafa0007c  sw          $zero, 0x7C($sp)
    ctx->pc = 0x33224cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 0));
    // 0x332250: 0x7ba20070  lq          $v0, 0x70($sp)
    ctx->pc = 0x332250u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x332254: 0x7c820070  sq          $v0, 0x70($a0)
    ctx->pc = 0x332254u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 112), GPR_VEC(ctx, 2));
    // 0x332258: 0x24820080  addiu       $v0, $a0, 0x80
    ctx->pc = 0x332258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 128));
    // 0x33225c: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x33225cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
    // 0x332260: 0xc4a00058  lwc1        $f0, 0x58($a1)
    ctx->pc = 0x332260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x332264: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x332264u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x332268: 0xc4a1005c  lwc1        $f1, 0x5C($a1)
    ctx->pc = 0x332268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33226c: 0xafa00088  sw          $zero, 0x88($sp)
    ctx->pc = 0x33226cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 0));
    // 0x332270: 0xe7a10084  swc1        $f1, 0x84($sp)
    ctx->pc = 0x332270u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x332274: 0xafa0008c  sw          $zero, 0x8C($sp)
    ctx->pc = 0x332274u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 0));
    // 0x332278: 0x7ba20080  lq          $v0, 0x80($sp)
    ctx->pc = 0x332278u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x33227c: 0x7c820080  sq          $v0, 0x80($a0)
    ctx->pc = 0x33227cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 128), GPR_VEC(ctx, 2));
    // 0x332280: 0x24820090  addiu       $v0, $a0, 0x90
    ctx->pc = 0x332280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 144));
    // 0x332284: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x332284u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
    // 0x332288: 0xc4c2074c  lwc1        $f2, 0x74C($a2)
    ctx->pc = 0x332288u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 1868)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x33228c: 0xc4c30760  lwc1        $f3, 0x760($a2)
    ctx->pc = 0x33228cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 1888)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x332290: 0xc4c00750  lwc1        $f0, 0x750($a2)
    ctx->pc = 0x332290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 1872)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x332294: 0xc4c1075c  lwc1        $f1, 0x75C($a2)
    ctx->pc = 0x332294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 1884)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x332298: 0xe7a20090  swc1        $f2, 0x90($sp)
    ctx->pc = 0x332298u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x33229c: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x33229cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x3322a0: 0xe7a10098  swc1        $f1, 0x98($sp)
    ctx->pc = 0x3322a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x3322a4: 0xe7a3009c  swc1        $f3, 0x9C($sp)
    ctx->pc = 0x3322a4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x3322a8: 0x7ba20090  lq          $v0, 0x90($sp)
    ctx->pc = 0x3322a8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x3322ac: 0x7c820090  sq          $v0, 0x90($a0)
    ctx->pc = 0x3322acu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 144), GPR_VEC(ctx, 2));
    // 0x3322b0: 0x248200a0  addiu       $v0, $a0, 0xA0
    ctx->pc = 0x3322b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 160));
    // 0x3322b4: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x3322b4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
    // 0x3322b8: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x3322b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x3322bc: 0x0  nop
    ctx->pc = 0x3322bcu;
    // NOP
label_3322c0:
    // 0x3322c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3322c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3322c4: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x3322c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x3322c8: 0x3e00008  jr          $ra
    ctx->pc = 0x3322C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3322CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3322C8u;
        // 0x3322cc: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3322C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3322D0u;
    // 0x3322d0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3322d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3322d4: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x3322d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x3322d8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x3322d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x3322dc: 0x3c100062  lui         $s0, 0x62
    ctx->pc = 0x3322dcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)98 << 16));
    // 0x3322e0: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x3322e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x3322e4: 0x2610ce80  addiu       $s0, $s0, -0x3180
    ctx->pc = 0x3322e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294954624));
    // 0x3322e8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3322e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3322ec: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3322ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3322f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3322f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3322f4: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x3322f4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3322f8: 0x8e320008  lw          $s2, 0x8($s1)
    ctx->pc = 0x3322f8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3322fc: 0x96030764  lhu         $v1, 0x764($s0)
    ctx->pc = 0x3322fcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x61D5E4u));
    // 0x332300: 0xae43002c  sw          $v1, 0x2C($s2)
    ctx->pc = 0x332300u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 3));
    // 0x332304: 0x96020764  lhu         $v0, 0x764($s0)
    ctx->pc = 0x332304u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x61D5E4u));
    // 0x332308: 0xc0eb85a  jal         func_3AE168
    ctx->pc = 0x332308u;
    SET_GPR_U32(ctx, 31, 0x332310u);
    ctx->pc = 0x33230Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x332308u;
    // 0x33230c: 0xae420008  sw          $v0, 0x8($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AE168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AE168u, 0x332308u, 0x332310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x332310u;
label_332310:
    // 0x332310: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x332310u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x332314: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x332314u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x332318: 0x8e0206f4  lw          $v0, 0x6F4($s0)
    ctx->pc = 0x332318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1780)));
    // 0x33231c: 0xae4a0004  sw          $t2, 0x4($s2)
    ctx->pc = 0x33231cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 10));
    // 0x332320: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x332320u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x332324: 0xae430024  sw          $v1, 0x24($s2)
    ctx->pc = 0x332324u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 3));
    // 0x332328: 0xae400020  sw          $zero, 0x20($s2)
    ctx->pc = 0x332328u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 0));
    // 0x33232c: 0xae400028  sw          $zero, 0x28($s2)
    ctx->pc = 0x33232cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 0));
    // 0x332330: 0x2788aa28  addiu       $t0, $gp, -0x55D8
    ctx->pc = 0x332330u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 28), 4294945320));
    // 0x332334: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x332334u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
    // 0x332338: 0x8f83bd50  lw          $v1, -0x42B0($gp)
    ctx->pc = 0x332338u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950224)));
    // 0x33233c: 0x24e6af20  addiu       $a2, $a3, -0x50E0
    ctx->pc = 0x33233cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 4294946592));
    // 0x332340: 0x3c090062  lui         $t1, 0x62
    ctx->pc = 0x332340u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)98 << 16));
    // 0x332344: 0x2522e880  addiu       $v0, $t1, -0x1780
    ctx->pc = 0x332344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 4294961280));
    // 0x332348: 0xae280010  sw          $t0, 0x10($s1)
    ctx->pc = 0x332348u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 8));
    // 0x33234c: 0xae26000c  sw          $a2, 0xC($s1)
    ctx->pc = 0x33234cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 6));
    // 0x332350: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x332350u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x332354: 0x8e45002c  lw          $a1, 0x2C($s2)
    ctx->pc = 0x332354u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
    // 0x332358: 0x3c04004f  lui         $a0, 0x4F
    ctx->pc = 0x332358u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)79 << 16));
    // 0x33235c: 0x9062002b  lbu         $v0, 0x2B($v1)
    ctx->pc = 0x33235cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 43)));
    // 0x332360: 0x24842f00  addiu       $a0, $a0, 0x2F00
    ctx->pc = 0x332360u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12032));
    // 0x332364: 0xacc50008  sw          $a1, 0x8($a2)
    ctx->pc = 0x332364u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x5DAF28u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5DAF28u, _value); } while (0);
    // 0x332368: 0x24c30010  addiu       $v1, $a2, 0x10
    ctx->pc = 0x332368u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x33236c: 0xacc0000c  sw          $zero, 0xC($a2)
    ctx->pc = 0x33236cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5DAF2Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5DAF2Cu, _value); } while (0);
    // 0x332370: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x332370u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x332374: 0xace2af20  sw          $v0, -0x50E0($a3)
    ctx->pc = 0x332374u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5DAF20u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5DAF20u, _value); } while (0);
    // 0x332378: 0xad000004  sw          $zero, 0x4($t0)
    ctx->pc = 0x332378u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 0));
    // 0x33237c: 0x8e42002c  lw          $v0, 0x2C($s2)
    ctx->pc = 0x33237cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
    // 0x332380: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x332380u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x5DAF38u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5DAF38u, _value); } while (0);
    // 0x332384: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x332384u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5DAF34u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5DAF34u, _value); } while (0);
    // 0x332388: 0xacc00010  sw          $zero, 0x10($a2)
    ctx->pc = 0x332388u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5DAF30u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5DAF30u, _value); } while (0);
    // 0x33238c: 0x3c020007  lui         $v0, 0x7
    ctx->pc = 0x33238cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7 << 16));
    // 0x332390: 0x3442fff8  ori         $v0, $v0, 0xFFF8
    ctx->pc = 0x332390u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65528);
    // 0x332394: 0xae220014  sw          $v0, 0x14($s1)
    ctx->pc = 0x332394u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
    // 0x332398: 0x8d23e880  lw          $v1, -0x1780($t1)
    ctx->pc = 0x332398u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x61E880u));
    // 0x33239c: 0x11400006  beqz        $t2, . + 4 + (0x6 << 2)
    ctx->pc = 0x33239Cu;
    {
        const bool branch_taken_0x33239c = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x3323A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33239Cu;
        // 0x3323a0: 0x24660020  addiu       $a2, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33239c) {
            ctx->pc = 0x3323B8u;
            goto label_3323b8;
        }
    }
    ctx->pc = 0x3323A4u;
    // 0x3323a4: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x3323a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x3323a8: 0xc103dd4  jal         func_40F750
    ctx->pc = 0x3323A8u;
    SET_GPR_U32(ctx, 31, 0x3323B0u);
    ctx->pc = 0x3323ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3323A8u;
    // 0x3323ac: 0x140282d  daddu       $a1, $t2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40F750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40F750u, 0x3323A8u, 0x3323B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3323B0u;
label_3323b0:
    // 0x3323b0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3323B0u;
    {
        const bool branch_taken_0x3323b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3323B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3323B0u;
        // 0x3323b4: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3323b0) {
            ctx->pc = 0x3323C0u;
            goto label_3323c0;
        }
    }
    ctx->pc = 0x3323B8u;
label_3323b8:
    // 0x3323b8: 0xae660000  sw          $a2, 0x0($s3)
    ctx->pc = 0x3323b8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 6));
    // 0x3323bc: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x3323bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3323c0:
    // 0x3323c0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3323c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3323c4: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x3323c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x3323c8: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3323C8u;
    {
        const bool branch_taken_0x3323c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3323CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3323C8u;
        // 0x3323cc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3323c8) {
            ctx->pc = 0x3323D4u;
            goto label_3323d4;
        }
    }
    ctx->pc = 0x3323D0u;
    // 0x3323d0: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x3323d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3323d4:
    // 0x3323d4: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x3323d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x3323d8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3323d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3323dc: 0x30830001  andi        $v1, $a0, 0x1
    ctx->pc = 0x3323dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x3323e0: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x3323E0u;
    {
        const bool branch_taken_0x3323e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3323E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3323E0u;
        // 0x3323e4: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3323e0) {
            ctx->pc = 0x332418u;
            goto label_332418;
        }
    }
    ctx->pc = 0x3323E8u;
    // 0x3323e8: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x3323e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x3323ec: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3323ECu;
    {
        const bool branch_taken_0x3323ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3323F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3323ECu;
        // 0x3323f0: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3323ec) {
            ctx->pc = 0x332400u;
            goto label_332400;
        }
    }
    ctx->pc = 0x3323F4u;
    // 0x3323f4: 0x30820002  andi        $v0, $a0, 0x2
    ctx->pc = 0x3323f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
    // 0x3323f8: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3323F8u;
    {
        const bool branch_taken_0x3323f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3323f8) {
            ctx->pc = 0x3323FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3323F8u;
            // 0x3323fc: 0x30820010  andi        $v0, $a0, 0x10 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16);
            ctx->in_delay_slot = false;
            ctx->pc = 0x332410u;
            goto label_332410;
        }
    }
    ctx->pc = 0x332400u;
label_332400:
    // 0x332400: 0xa2230029  sb          $v1, 0x29($s1)
    ctx->pc = 0x332400u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 41), (uint8_t)GPR_U32(ctx, 3));
    // 0x332404: 0x9382aed0  lbu         $v0, -0x5130($gp)
    ctx->pc = 0x332404u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294946512)));
    // 0x332408: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x332408u;
    {
        const bool branch_taken_0x332408 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33240Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332408u;
        // 0x33240c: 0x34420004  ori         $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x332408) {
            ctx->pc = 0x332450u;
            goto label_332450;
        }
    }
    ctx->pc = 0x332410u;
label_332410:
    // 0x332410: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x332410u;
    {
        const bool branch_taken_0x332410 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x332414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332410u;
        // 0x332414: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x332410) {
            ctx->pc = 0x332428u;
            goto label_332428;
        }
    }
    ctx->pc = 0x332418u;
label_332418:
    // 0x332418: 0xa2220029  sb          $v0, 0x29($s1)
    ctx->pc = 0x332418u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 41), (uint8_t)GPR_U32(ctx, 2));
    // 0x33241c: 0x9383aed0  lbu         $v1, -0x5130($gp)
    ctx->pc = 0x33241cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294946512)));
    // 0x332420: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x332420u;
    {
        const bool branch_taken_0x332420 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x332424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332420u;
        // 0x332424: 0xa2230028  sb          $v1, 0x28($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 40), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x332420) {
            ctx->pc = 0x332454u;
            goto label_332454;
        }
    }
    ctx->pc = 0x332428u;
label_332428:
    // 0x332428: 0x30820008  andi        $v0, $a0, 0x8
    ctx->pc = 0x332428u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)8);
    // 0x33242c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x33242Cu;
    {
        const bool branch_taken_0x33242c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x332430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33242Cu;
        // 0x332430: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33242c) {
            ctx->pc = 0x332444u;
            goto label_332444;
        }
    }
    ctx->pc = 0x332434u;
    // 0x332434: 0xa2230029  sb          $v1, 0x29($s1)
    ctx->pc = 0x332434u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 41), (uint8_t)GPR_U32(ctx, 3));
    // 0x332438: 0x9382aed0  lbu         $v0, -0x5130($gp)
    ctx->pc = 0x332438u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294946512)));
    // 0x33243c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x33243Cu;
    {
        const bool branch_taken_0x33243c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x332440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33243Cu;
        // 0x332440: 0x34420010  ori         $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x33243c) {
            ctx->pc = 0x332450u;
            goto label_332450;
        }
    }
    ctx->pc = 0x332444u;
label_332444:
    // 0x332444: 0xa2250029  sb          $a1, 0x29($s1)
    ctx->pc = 0x332444u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 41), (uint8_t)GPR_U32(ctx, 5));
    // 0x332448: 0x9382aed0  lbu         $v0, -0x5130($gp)
    ctx->pc = 0x332448u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294946512)));
    // 0x33244c: 0x34420014  ori         $v0, $v0, 0x14
    ctx->pc = 0x33244cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20);
label_332450:
    // 0x332450: 0xa2220028  sb          $v0, 0x28($s1)
    ctx->pc = 0x332450u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 40), (uint8_t)GPR_U32(ctx, 2));
label_332454:
    // 0x332454: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x332454u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x332458: 0x10c20004  beq         $a2, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x332458u;
    {
        const bool branch_taken_0x332458 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x33245Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332458u;
        // 0x33245c: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x332458) {
            ctx->pc = 0x33246Cu;
            goto label_33246c;
        }
    }
    ctx->pc = 0x332460u;
    // 0x332460: 0x92220028  lbu         $v0, 0x28($s1)
    ctx->pc = 0x332460u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x332464: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x332464u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x332468: 0xa2220028  sb          $v0, 0x28($s1)
    ctx->pc = 0x332468u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 40), (uint8_t)GPR_U32(ctx, 2));
label_33246c:
    // 0x33246c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x33246cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x332470: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x332470u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x332474: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x332474u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x332478: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x332478u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33247c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x33247cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x332480: 0x3e00008  jr          $ra
    ctx->pc = 0x332480u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x332484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332480u;
        // 0x332484: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x332480u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x332488u;
    // 0x332488: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x332488u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x33248c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x33248cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x332490: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x332490u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x332494: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x332494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x332498: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x332498u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33249c: 0xc10a322  jal         func_428C88
    ctx->pc = 0x33249Cu;
    SET_GPR_U32(ctx, 31, 0x3324A4u);
    ctx->pc = 0x3324A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33249Cu;
    // 0x3324a0: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x428C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x428C88u, 0x33249Cu, 0x3324A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3324A4u;
label_3324a4:
    // 0x3324a4: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x3324a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x3324a8: 0x3463000a  ori         $v1, $v1, 0xA
    ctx->pc = 0x3324a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)10);
    // 0x3324ac: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3324acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3324b0: 0x70831b89  pcpyld      $v1, $a0, $v1
    ctx->pc = 0x3324b0u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 3)));
    // 0x3324b4: 0x8f82be20  lw          $v0, -0x41E0($gp)
    ctx->pc = 0x3324b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
    // 0x3324b8: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x3324b8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x3324bc: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x3324bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x3324c0: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x3324c0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
    // 0x3324c4: 0x240300fe  addiu       $v1, $zero, 0xFE
    ctx->pc = 0x3324c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 254));
    // 0x3324c8: 0xa2030047  sb          $v1, 0x47($s0)
    ctx->pc = 0x3324c8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 71), (uint8_t)GPR_U32(ctx, 3));
    // 0x3324cc: 0x3c066c01  lui         $a2, 0x6C01
    ctx->pc = 0x3324ccu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)27649 << 16));
    // 0x3324d0: 0x34c603fa  ori         $a2, $a2, 0x3FA
    ctx->pc = 0x3324d0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)1018);
    // 0x3324d4: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x3324d4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x3324d8: 0x34c60100  ori         $a2, $a2, 0x100
    ctx->pc = 0x3324d8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)256);
    // 0x3324dc: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x3324dcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x3324e0: 0x34c60404  ori         $a2, $a2, 0x404
    ctx->pc = 0x3324e0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)1028);
    // 0x3324e4: 0x70c42389  pcpyld      $a0, $a2, $a0
    ctx->pc = 0x3324e4u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 6), GPR_VEC(ctx, 4)));
    // 0x3324e8: 0x8f82be20  lw          $v0, -0x41E0($gp)
    ctx->pc = 0x3324e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
    // 0x3324ec: 0x7c440000  sq          $a0, 0x0($v0)
    ctx->pc = 0x3324ecu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 4));
    // 0x3324f0: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x3324f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x3324f4: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x3324f4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
    // 0x3324f8: 0x92030047  lbu         $v1, 0x47($s0)
    ctx->pc = 0x3324f8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 71)));
    // 0x3324fc: 0x8f82bec4  lw          $v0, -0x413C($gp)
    ctx->pc = 0x3324fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950596)));
    // 0x332500: 0x386300ff  xori        $v1, $v1, 0xFF
    ctx->pc = 0x332500u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)255);
    // 0x332504: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x332504u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x332508: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x332508u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x33250c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x33250Cu;
    {
        const bool branch_taken_0x33250c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x332510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33250Cu;
        // 0x332510: 0xaf83bec8  sw          $v1, -0x4138($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294950600), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33250c) {
            ctx->pc = 0x332528u;
            goto label_332528;
        }
    }
    ctx->pc = 0x332514u;
    // 0x332514: 0xdf82ae80  ld          $v0, -0x5180($gp)
    ctx->pc = 0x332514u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946432)));
    // 0x332518: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x332518u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x33251c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x33251Cu;
    {
        const bool branch_taken_0x33251c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x332520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33251Cu;
        // 0x332520: 0x431025  or          $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33251c) {
            ctx->pc = 0x332534u;
            goto label_332534;
        }
    }
    ctx->pc = 0x332524u;
    // 0x332524: 0x0  nop
    ctx->pc = 0x332524u;
    // NOP
label_332528:
    // 0x332528: 0xdf82ae80  ld          $v0, -0x5180($gp)
    ctx->pc = 0x332528u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946432)));
    // 0x33252c: 0x2403ffbf  addiu       $v1, $zero, -0x41
    ctx->pc = 0x33252cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
    // 0x332530: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x332530u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_332534:
    // 0x332534: 0xff82ae80  sd          $v0, -0x5180($gp)
    ctx->pc = 0x332534u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294946432), GPR_U64(ctx, 2));
    // 0x332538: 0x92060029  lbu         $a2, 0x29($s0)
    ctx->pc = 0x332538u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 41)));
    // 0x33253c: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x33253cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x332540: 0x8f82ae80  lw          $v0, -0x5180($gp)
    ctx->pc = 0x332540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946432)));
    // 0x332544: 0x3c07fc00  lui         $a3, 0xFC00
    ctx->pc = 0x332544u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)64512 << 16));
    // 0x332548: 0x34e77fff  ori         $a3, $a3, 0x7FFF
    ctx->pc = 0x332548u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)32767);
    // 0x33254c: 0x73c38  dsll        $a3, $a3, 16
    ctx->pc = 0x33254cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
    // 0x332550: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x332550u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x332554: 0x73c38  dsll        $a3, $a3, 16
    ctx->pc = 0x332554u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
    // 0x332558: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x332558u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x33255c: 0xdc64d5d0  ld          $a0, -0x2A30($v1)
    ctx->pc = 0x33255cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 4294956496)));
    // 0x332560: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x332560u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x332564: 0x2463d5d0  addiu       $v1, $v1, -0x2A30
    ctx->pc = 0x332564u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956496));
    // 0x332568: 0x304207ff  andi        $v0, $v0, 0x7FF
    ctx->pc = 0x332568u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2047);
    // 0x33256c: 0x873024  and         $a2, $a0, $a3
    ctx->pc = 0x33256cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & GPR_U64(ctx, 7));
    // 0x332570: 0x213fc  dsll32      $v0, $v0, 15
    ctx->pc = 0x332570u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 15));
    // 0x332574: 0xdc650008  ld          $a1, 0x8($v1)
    ctx->pc = 0x332574u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x332578: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x332578u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x33257c: 0x70a62389  pcpyld      $a0, $a1, $a2
    ctx->pc = 0x33257cu;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 5), GPR_VEC(ctx, 6)));
    // 0x332580: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x332580u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x332584: 0x8f86be20  lw          $a2, -0x41E0($gp)
    ctx->pc = 0x332584u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
    // 0x332588: 0x7cc40000  sq          $a0, 0x0($a2)
    ctx->pc = 0x332588u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 4));
    // 0x33258c: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x33258cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x332590: 0xaf86be20  sw          $a2, -0x41E0($gp)
    ctx->pc = 0x332590u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 6));
    // 0x332594: 0x3c026c01  lui         $v0, 0x6C01
    ctx->pc = 0x332594u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27649 << 16));
    // 0x332598: 0x344203fb  ori         $v0, $v0, 0x3FB
    ctx->pc = 0x332598u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1019);
    // 0x33259c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x33259cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x3325a0: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x3325a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x3325a4: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x3325a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x3325a8: 0x34420404  ori         $v0, $v0, 0x404
    ctx->pc = 0x3325a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1028);
    // 0x3325ac: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3325acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3325b0: 0x70471389  pcpyld      $v0, $v0, $a3
    ctx->pc = 0x3325b0u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 7)));
    // 0x3325b4: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x3325b4u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x3325b8: 0x24c30010  addiu       $v1, $a2, 0x10
    ctx->pc = 0x3325b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x3325bc: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x3325bcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
    // 0x3325c0: 0xdf82ae80  ld          $v0, -0x5180($gp)
    ctx->pc = 0x3325c0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946432)));
    // 0x3325c4: 0xc7858054  lwc1        $f5, -0x7FAC($gp)
    ctx->pc = 0x3325c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x3325c8: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x3325c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x3325cc: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3325CCu;
    {
        const bool branch_taken_0x3325cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3325D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3325CCu;
        // 0x3325d0: 0x92020044  lbu         $v0, 0x44($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3325cc) {
            ctx->pc = 0x3325D8u;
            goto label_3325d8;
        }
    }
    ctx->pc = 0x3325D4u;
    // 0x3325d4: 0xc7858434  lwc1        $f5, -0x7BCC($gp)
    ctx->pc = 0x3325d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935604)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_3325d8:
    // 0x3325d8: 0x92030045  lbu         $v1, 0x45($s0)
    ctx->pc = 0x3325d8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 69)));
    // 0x3325dc: 0x92040046  lbu         $a0, 0x46($s0)
    ctx->pc = 0x3325dcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 70)));
    // 0x3325e0: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x3325e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x3325e4: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x3325e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x3325e8: 0x92050047  lbu         $a1, 0x47($s0)
    ctx->pc = 0x3325e8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 71)));
    // 0x3325ec: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x3325ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3325f0: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x3325f0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x3325f4: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x3325f4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3325f8: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x3325f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x3325fc: 0xc7818434  lwc1        $f1, -0x7BCC($gp)
    ctx->pc = 0x3325fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935604)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x332600: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x332600u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x332604: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x332604u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x332608: 0x46010182  mul.s       $f6, $f0, $f1
    ctx->pc = 0x332608u;
    ctx->f[6] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x33260c: 0x460519c2  mul.s       $f7, $f3, $f5
    ctx->pc = 0x33260cu;
    ctx->f[7] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
    // 0x332610: 0x44023000  mfc1        $v0, $f6
    ctx->pc = 0x332610u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[6], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x332614: 0x44033800  mfc1        $v1, $f7
    ctx->pc = 0x332614u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[7], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x332618: 0x70021789  pexew       $v0, $v0
    ctx->pc = 0x332618u;
    SET_GPR_VEC(ctx, 2, PS2_PEXEW(GPR_VEC(ctx, 2)));
    // 0x33261c: 0x70031f89  pexew       $v1, $v1
    ctx->pc = 0x33261cu;
    SET_GPR_VEC(ctx, 3, PS2_PEXEW(GPR_VEC(ctx, 3)));
    // 0x332620: 0x46051182  mul.s       $f6, $f2, $f5
    ctx->pc = 0x332620u;
    ctx->f[6] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
    // 0x332624: 0x460521c2  mul.s       $f7, $f4, $f5
    ctx->pc = 0x332624u;
    ctx->f[7] = FPU_MUL_S(ctx->f[4], ctx->f[5]);
    // 0x332628: 0x44023000  mfc1        $v0, $f6
    ctx->pc = 0x332628u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[6], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x33262c: 0x44033800  mfc1        $v1, $f7
    ctx->pc = 0x33262cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[7], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x332630: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x332630u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x332634: 0x7cc20010  sq          $v0, 0x10($a2)
    ctx->pc = 0x332634u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 16), GPR_VEC(ctx, 2));
    // 0x332638: 0x24c30020  addiu       $v1, $a2, 0x20
    ctx->pc = 0x332638u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x33263c: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x33263cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
    // 0x332640: 0x3c026c01  lui         $v0, 0x6C01
    ctx->pc = 0x332640u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27649 << 16));
    // 0x332644: 0x344203fc  ori         $v0, $v0, 0x3FC
    ctx->pc = 0x332644u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1020);
    // 0x332648: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x332648u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x33264c: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x33264cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x332650: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x332650u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x332654: 0x34420404  ori         $v0, $v0, 0x404
    ctx->pc = 0x332654u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1028);
    // 0x332658: 0x70471389  pcpyld      $v0, $v0, $a3
    ctx->pc = 0x332658u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 7)));
    // 0x33265c: 0x7cc20020  sq          $v0, 0x20($a2)
    ctx->pc = 0x33265cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 32), GPR_VEC(ctx, 2));
    // 0x332660: 0x24c30030  addiu       $v1, $a2, 0x30
    ctx->pc = 0x332660u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 48));
    // 0x332664: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x332664u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
    // 0x332668: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x332668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x33266c: 0xc7848240  lwc1        $f4, -0x7DC0($gp)
    ctx->pc = 0x33266cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x332670: 0xc4430008  lwc1        $f3, 0x8($v0)
    ctx->pc = 0x332670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x332674: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x332674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x332678: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x332678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33267c: 0xc600001c  lwc1        $f0, 0x1C($s0)
    ctx->pc = 0x33267cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x332680: 0x46040942  mul.s       $f5, $f1, $f4
    ctx->pc = 0x332680u;
    ctx->f[5] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x332684: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x332684u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x332688: 0x44032800  mfc1        $v1, $f5
    ctx->pc = 0x332688u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[5], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x33268c: 0x70021789  pexew       $v0, $v0
    ctx->pc = 0x33268cu;
    SET_GPR_VEC(ctx, 2, PS2_PEXEW(GPR_VEC(ctx, 2)));
    // 0x332690: 0x70031f89  pexew       $v1, $v1
    ctx->pc = 0x332690u;
    SET_GPR_VEC(ctx, 3, PS2_PEXEW(GPR_VEC(ctx, 3)));
    // 0x332694: 0x46041982  mul.s       $f6, $f3, $f4
    ctx->pc = 0x332694u;
    ctx->f[6] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x332698: 0x46041142  mul.s       $f5, $f2, $f4
    ctx->pc = 0x332698u;
    ctx->f[5] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x33269c: 0x44023000  mfc1        $v0, $f6
    ctx->pc = 0x33269cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[6], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x3326a0: 0x44032800  mfc1        $v1, $f5
    ctx->pc = 0x3326a0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[5], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x3326a4: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x3326a4u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x3326a8: 0x7cc20030  sq          $v0, 0x30($a2)
    ctx->pc = 0x3326a8u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 48), GPR_VEC(ctx, 2));
    // 0x3326ac: 0x24c30040  addiu       $v1, $a2, 0x40
    ctx->pc = 0x3326acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
    // 0x3326b0: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x3326b0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
    // 0x3326b4: 0x92020028  lbu         $v0, 0x28($s0)
    ctx->pc = 0x3326b4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x3326b8: 0x3c046c03  lui         $a0, 0x6C03
    ctx->pc = 0x3326b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)27651 << 16));
    // 0x3326bc: 0x348403fd  ori         $a0, $a0, 0x3FD
    ctx->pc = 0x3326bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1021);
    // 0x3326c0: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x3326c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x3326c4: 0x34840100  ori         $a0, $a0, 0x100
    ctx->pc = 0x3326c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)256);
    // 0x3326c8: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x3326c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x3326cc: 0x34840404  ori         $a0, $a0, 0x404
    ctx->pc = 0x3326ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1028);
    // 0x3326d0: 0x70871b89  pcpyld      $v1, $a0, $a3
    ctx->pc = 0x3326d0u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 7)));
    // 0x3326d4: 0x30470007  andi        $a3, $v0, 0x7
    ctx->pc = 0x3326d4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x3326d8: 0x7cc30040  sq          $v1, 0x40($a2)
    ctx->pc = 0x3326d8u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 64), GPR_VEC(ctx, 3));
    // 0x3326dc: 0x24c20050  addiu       $v0, $a2, 0x50
    ctx->pc = 0x3326dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 80));
    // 0x3326e0: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x3326e0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
    // 0x3326e4: 0x8f83aee0  lw          $v1, -0x5120($gp)
    ctx->pc = 0x3326e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946528)));
    // 0x3326e8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3326E8u;
    {
        const bool branch_taken_0x3326e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3326ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3326E8u;
        // 0x3326ec: 0x30e20004  andi        $v0, $a3, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3326e8) {
            ctx->pc = 0x3326F8u;
            goto label_3326f8;
        }
    }
    ctx->pc = 0x3326F0u;
    // 0x3326f0: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x3326F0u;
    {
        const bool branch_taken_0x3326f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3326f0) {
            ctx->pc = 0x3326F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3326F0u;
            // 0x3326f4: 0x34e70008  ori         $a3, $a3, 0x8 (Delay Slot)
            SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)8);
            ctx->in_delay_slot = false;
            ctx->pc = 0x332710u;
            goto label_332710;
        }
    }
    ctx->pc = 0x3326F8u;
label_3326f8:
    // 0x3326f8: 0x8f82aee4  lw          $v0, -0x511C($gp)
    ctx->pc = 0x3326f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946532)));
    // 0x3326fc: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x3326FCu;
    {
        const bool branch_taken_0x3326fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x332700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3326FCu;
        // 0x332700: 0x30e20004  andi        $v0, $a3, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3326fc) {
            ctx->pc = 0x332738u;
            goto label_332738;
        }
    }
    ctx->pc = 0x332704u;
    // 0x332704: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x332704u;
    {
        const bool branch_taken_0x332704 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x332704) {
            ctx->pc = 0x332708u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x332704u;
            // 0x332708: 0x3c03005e  lui         $v1, 0x5E (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x332740u;
            goto label_332740;
        }
    }
    ctx->pc = 0x33270Cu;
    // 0x33270c: 0x34e70008  ori         $a3, $a3, 0x8
    ctx->pc = 0x33270cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)8);
label_332710:
    // 0x332710: 0x8f84be20  lw          $a0, -0x41E0($gp)
    ctx->pc = 0x332710u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
    // 0x332714: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x332714u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x332718: 0x2463d670  addiu       $v1, $v1, -0x2990
    ctx->pc = 0x332718u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956656));
    // 0x33271c: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x33271cu;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x5DD670u));
    // 0x332720: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x332720u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x332724: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x332724u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x332728: 0xaf84be20  sw          $a0, -0x41E0($gp)
    ctx->pc = 0x332728u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 4));
    // 0x33272c: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x33272cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x332730: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x332730u;
    {
        const bool branch_taken_0x332730 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x332734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332730u;
        // 0x332734: 0x2463d680  addiu       $v1, $v1, -0x2980 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956672));
        ctx->in_delay_slot = false;
        if (branch_taken_0x332730) {
            ctx->pc = 0x332760u;
            goto label_332760;
        }
    }
    ctx->pc = 0x332738u;
label_332738:
    // 0x332738: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x332738u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x33273c: 0x0  nop
    ctx->pc = 0x33273cu;
    // NOP
label_332740:
    // 0x332740: 0x8f84be20  lw          $a0, -0x41E0($gp)
    ctx->pc = 0x332740u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
    // 0x332744: 0x2463d650  addiu       $v1, $v1, -0x29B0
    ctx->pc = 0x332744u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956624));
    // 0x332748: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x332748u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x33274c: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x33274cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x332750: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x332750u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x332754: 0xaf84be20  sw          $a0, -0x41E0($gp)
    ctx->pc = 0x332754u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 4));
    // 0x332758: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x332758u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x33275c: 0x2463d660  addiu       $v1, $v1, -0x29A0
    ctx->pc = 0x33275cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956640));
label_332760:
    // 0x332760: 0x24850010  addiu       $a1, $a0, 0x10
    ctx->pc = 0x332760u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x332764: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x332764u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x332768: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x332768u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x33276c: 0xaf85be20  sw          $a1, -0x41E0($gp)
    ctx->pc = 0x33276cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 5));
    // 0x332770: 0x8f83becc  lw          $v1, -0x4134($gp)
    ctx->pc = 0x332770u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950604)));
    // 0x332774: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x332774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x332778: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x332778u;
    {
        const bool branch_taken_0x332778 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x33277Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332778u;
        // 0x33277c: 0xaf80aed8  sw          $zero, -0x5128($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294946520), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x332778) {
            ctx->pc = 0x332788u;
            goto label_332788;
        }
    }
    ctx->pc = 0x332780u;
    // 0x332780: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x332780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x332784: 0xaf82aed8  sw          $v0, -0x5128($gp)
    ctx->pc = 0x332784u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294946520), GPR_U32(ctx, 2));
label_332788:
    // 0x332788: 0x9f82aedc  lwu         $v0, -0x5124($gp)
    ctx->pc = 0x332788u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294946524)));
    // 0x33278c: 0x7183c  dsll32      $v1, $a3, 0
    ctx->pc = 0x33278cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) << (32 + 0));
    // 0x332790: 0x9f84aed8  lwu         $a0, -0x5128($gp)
    ctx->pc = 0x332790u;
    SET_GPR_ZE32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294946520)));
    // 0x332794: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x332794u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x332798: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x332798u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x33279c: 0x442025  or          $a0, $v0, $a0
    ctx->pc = 0x33279cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x3327a0: 0x70831b89  pcpyld      $v1, $a0, $v1
    ctx->pc = 0x3327a0u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 3)));
    // 0x3327a4: 0x8f82be20  lw          $v0, -0x41E0($gp)
    ctx->pc = 0x3327a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
    // 0x3327a8: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x3327a8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x3327ac: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x3327acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x3327b0: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x3327b0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
    // 0x3327b4: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x3327b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x3327b8: 0x8c64d5a4  lw          $a0, -0x2A5C($v1)
    ctx->pc = 0x3327b8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x61D5A4u));
    // 0x3327bc: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x3327bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x3327c0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x3327c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x3327c4: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x3327c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3327c8: 0xa202002b  sb          $v0, 0x2B($s0)
    ctx->pc = 0x3327c8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 43), (uint8_t)GPR_U32(ctx, 2));
    // 0x3327cc: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x3327ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3327d0: 0x8f85aed4  lw          $a1, -0x512C($gp)
    ctx->pc = 0x3327d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946516)));
    // 0x3327d4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3327d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3327d8: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x3327d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x3327dc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3327dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3327e0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3327e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3327e4: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x3327e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3327e8: 0x10a6000b  beq         $a1, $a2, . + 4 + (0xB << 2)
    ctx->pc = 0x3327E8u;
    {
        const bool branch_taken_0x3327e8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 6));
        ctx->pc = 0x3327ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3327E8u;
        // 0x3327ec: 0x6203c  dsll32      $a0, $a2, 0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3327e8) {
            ctx->pc = 0x332818u;
            goto label_332818;
        }
    }
    ctx->pc = 0x3327F0u;
    // 0x3327f0: 0x3c035000  lui         $v1, 0x5000
    ctx->pc = 0x3327f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20480 << 16));
    // 0x3327f4: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3327f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x3327f8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3327f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3327fc: 0x70441389  pcpyld      $v0, $v0, $a0
    ctx->pc = 0x3327fcu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x332800: 0x8f83be20  lw          $v1, -0x41E0($gp)
    ctx->pc = 0x332800u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
    // 0x332804: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x332804u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x332808: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x332808u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x33280c: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x33280cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
    // 0x332810: 0xaf86aed4  sw          $a2, -0x512C($gp)
    ctx->pc = 0x332810u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294946516), GPR_U32(ctx, 6));
    // 0x332814: 0x0  nop
    ctx->pc = 0x332814u;
    // NOP
label_332818:
    // 0x332818: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x332818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x33281c: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x33281cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x332820: 0x8c480000  lw          $t0, 0x0($v0)
    ctx->pc = 0x332820u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x332824: 0x250a0018  addiu       $t2, $t0, 0x18
    ctx->pc = 0x332824u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 8), 24));
    // 0x332828: 0xad490004  sw          $t1, 0x4($t2)
    ctx->pc = 0x332828u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 4), GPR_U32(ctx, 9));
    // 0x33282c: 0x9d440008  lwu         $a0, 0x8($t2)
    ctx->pc = 0x33282cu;
    SET_GPR_ZE32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 10), 8)));
    // 0x332830: 0x3c070200  lui         $a3, 0x200
    ctx->pc = 0x332830u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)512 << 16));
    // 0x332834: 0x3c035000  lui         $v1, 0x5000
    ctx->pc = 0x332834u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20480 << 16));
    // 0x332838: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x332838u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x33283c: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x33283cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x332840: 0x3c060300  lui         $a2, 0x300
    ctx->pc = 0x332840u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)768 << 16));
    // 0x332844: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x332844u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x332848: 0x8ca20014  lw          $v0, 0x14($a1)
    ctx->pc = 0x332848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x33284c: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x33284cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x332850: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x332850u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x332854: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x332854u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x332858: 0x70441389  pcpyld      $v0, $v0, $a0
    ctx->pc = 0x332858u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x33285c: 0x8f83be20  lw          $v1, -0x41E0($gp)
    ctx->pc = 0x33285cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
    // 0x332860: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x332860u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x332864: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x332864u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x332868: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x332868u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
    // 0x33286c: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x33286cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_332870:
    // 0x332870: 0x42000039  di
    ctx->pc = 0x332870u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x332874: 0x40f  sync.p
    ctx->pc = 0x332874u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x332878: 0x40036000  mfc0        $v1, Status
    ctx->pc = 0x332878u;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_status);
    // 0x33287c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x33287cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x332880: 0x0  nop
    ctx->pc = 0x332880u;
    // NOP
    // 0x332884: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x332884u;
    {
        const bool branch_taken_0x332884 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x332884) {
            ctx->pc = 0x332870u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_332870;
        }
    }
    ctx->pc = 0x33288Cu;
    // 0x33288c: 0x8d030018  lw          $v1, 0x18($t0)
    ctx->pc = 0x33288cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 24)));
    // 0x332890: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x332890u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x332894: 0xad030018  sw          $v1, 0x18($t0)
    ctx->pc = 0x332894u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 24), GPR_U32(ctx, 3));
    // 0x332898: 0x42000038  ei
    ctx->pc = 0x332898u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x33289c: 0x8d420004  lw          $v0, 0x4($t2)
    ctx->pc = 0x33289cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4)));
    // 0x3328a0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3328a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3328a4: 0x14490004  bne         $v0, $t1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3328A4u;
    {
        const bool branch_taken_0x3328a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 9));
        ctx->pc = 0x3328A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3328A4u;
        // 0x3328a8: 0xad420004  sw          $v0, 0x4($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3328a4) {
            ctx->pc = 0x3328B8u;
            goto label_3328b8;
        }
    }
    ctx->pc = 0x3328ACu;
    // 0x3328ac: 0xc10a762  jal         func_429D88
    ctx->pc = 0x3328ACu;
    SET_GPR_U32(ctx, 31, 0x3328B4u);
    ctx->pc = 0x3328B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3328ACu;
    // 0x3328b0: 0x140202d  daddu       $a0, $t2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x429D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x429D88u, 0x3328ACu, 0x3328B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3328B4u;
label_3328b4:
    // 0x3328b4: 0x0  nop
    ctx->pc = 0x3328b4u;
    // NOP
label_3328b8:
    // 0x3328b8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3328b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3328bc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3328bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3328c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3328c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3328c4: 0x3e00008  jr          $ra
    ctx->pc = 0x3328C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3328C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3328C4u;
        // 0x3328c8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3328C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3328CCu;
    // 0x3328cc: 0x0  nop
    ctx->pc = 0x3328ccu;
    // NOP
    // 0x3328d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3328d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3328d4: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x3328d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3328d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3328d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3328dc: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x3328dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x3328e0: 0xc0cc7aa  jal         func_331EA8
    ctx->pc = 0x3328E0u;
    SET_GPR_U32(ctx, 31, 0x3328E8u);
    ctx->pc = 0x3328E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3328E0u;
    // 0x3328e4: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x331EA8u;
    goto label_331ea8;
    ctx->pc = 0x3328E8u;
label_3328e8:
    // 0x3328e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3328e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3328ec: 0x3e00008  jr          $ra
    ctx->pc = 0x3328ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3328F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3328ECu;
        // 0x3328f0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3328ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3328F4u;
    // 0x3328f4: 0x0  nop
    ctx->pc = 0x3328f4u;
    // NOP
    // 0x3328f8: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x3328f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x3328fc: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x3328fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x332900: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x332900u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x332904: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x332904u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x332908: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x332908u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x33290c: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x33290cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x332910: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x332910u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x332914: 0x8f84a634  lw          $a0, -0x59CC($gp)
    ctx->pc = 0x332914u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944308)));
    // 0x332918: 0x8e43002c  lw          $v1, 0x2C($s2)
    ctx->pc = 0x332918u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
    // 0x33291c: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x33291cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x332920: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x332920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x332924: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x332924u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x332928: 0x8c730000  lw          $s3, 0x0($v1)
    ctx->pc = 0x332928u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x33292c: 0x56600018  bnel        $s3, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x33292Cu;
    {
        const bool branch_taken_0x33292c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x33292c) {
            ctx->pc = 0x332930u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33292Cu;
            // 0x332930: 0x8e440040  lw          $a0, 0x40($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x332990u;
            goto label_332990;
        }
    }
    ctx->pc = 0x332934u;
    // 0x332934: 0x3a0982d  daddu       $s3, $sp, $zero
    ctx->pc = 0x332934u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x332938: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x332938u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x33293c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x33293cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x332940: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x332940u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x332944: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x332944u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x332948: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x332948u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x33294c: 0x34420003  ori         $v0, $v0, 0x3
    ctx->pc = 0x33294cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
    // 0x332950: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x332950u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x332954: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x332954u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x332958: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x332958u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x33295c: 0xafa3000c  sw          $v1, 0xC($sp)
    ctx->pc = 0x33295cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 3));
    // 0x332960: 0xe7a10028  swc1        $f1, 0x28($sp)
    ctx->pc = 0x332960u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x332964: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x332964u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x332968: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x332968u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x33296c: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x33296cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x332970: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x332970u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x332974: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x332974u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x332978: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x332978u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x33297c: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x33297cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x332980: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x332980u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x332984: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x332984u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x332988: 0x8e440040  lw          $a0, 0x40($s2)
    ctx->pc = 0x332988u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x33298c: 0x0  nop
    ctx->pc = 0x33298cu;
    // NOP
label_332990:
    // 0x332990: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x332990u;
    {
        const bool branch_taken_0x332990 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x332990) {
            ctx->pc = 0x332994u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x332990u;
            // 0x332994: 0x8e510040  lw          $s1, 0x40($s2) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3329A8u;
            goto label_3329a8;
        }
    }
    ctx->pc = 0x332998u;
    // 0x332998: 0xc110e98  jal         func_443A60
    ctx->pc = 0x332998u;
    SET_GPR_U32(ctx, 31, 0x3329A0u);
    ctx->pc = 0x33299Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x332998u;
    // 0x33299c: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x443A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x443A60u, 0x332998u, 0x3329A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3329A0u;
label_3329a0:
    // 0x3329a0: 0x8e510040  lw          $s1, 0x40($s2)
    ctx->pc = 0x3329a0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x3329a4: 0x0  nop
    ctx->pc = 0x3329a4u;
    // NOP
label_3329a8:
    // 0x3329a8: 0x12200002  beqz        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x3329A8u;
    {
        const bool branch_taken_0x3329a8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3329ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3329A8u;
        // 0x3329ac: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3329a8) {
            ctx->pc = 0x3329B4u;
            goto label_3329b4;
        }
    }
    ctx->pc = 0x3329B0u;
    // 0x3329b0: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x3329b0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3329b4:
    // 0x3329b4: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3329B4u;
    {
        const bool branch_taken_0x3329b4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3329B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3329B4u;
        // 0x3329b8: 0xaf80bec4  sw          $zero, -0x413C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294950596), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3329b4) {
            ctx->pc = 0x3329DCu;
            goto label_3329dc;
        }
    }
    ctx->pc = 0x3329BCu;
    // 0x3329bc: 0x92020023  lbu         $v0, 0x23($s0)
    ctx->pc = 0x3329bcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 35)));
    // 0x3329c0: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x3329c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x3329c4: 0x38430005  xori        $v1, $v0, 0x5
    ctx->pc = 0x3329c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)5);
    // 0x3329c8: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x3329c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x3329cc: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x3329ccu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x3329d0: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x3329d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x3329d4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3329d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3329d8: 0xaf82bec4  sw          $v0, -0x413C($gp)
    ctx->pc = 0x3329d8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950596), GPR_U32(ctx, 2));
label_3329dc:
    // 0x3329dc: 0x8f82bec0  lw          $v0, -0x4140($gp)
    ctx->pc = 0x3329dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950592)));
    // 0x3329e0: 0x12020038  beq         $s0, $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x3329E0u;
    {
        const bool branch_taken_0x3329e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3329E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3329E0u;
        // 0x3329e4: 0x8f82bec4  lw          $v0, -0x413C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950596)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3329e0) {
            ctx->pc = 0x332AC4u;
            goto label_332ac4;
        }
    }
    ctx->pc = 0x3329E8u;
    // 0x3329e8: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3329E8u;
    {
        const bool branch_taken_0x3329e8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3329ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3329E8u;
        // 0x3329ec: 0xdf82ae80  ld          $v0, -0x5180($gp) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946432)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3329e8) {
            ctx->pc = 0x332A10u;
            goto label_332a10;
        }
    }
    ctx->pc = 0x3329F0u;
    // 0x3329f0: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x3329f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3329f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3329f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3329f8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3329f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3329fc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3329fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x332a00: 0xc110b7e  jal         func_442DF8
    ctx->pc = 0x332A00u;
    SET_GPR_U32(ctx, 31, 0x332A08u);
    ctx->pc = 0x332A04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x332A00u;
    // 0x332a04: 0xff82ae80  sd          $v0, -0x5180($gp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294946432), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x442DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x442DF8u, 0x332A00u, 0x332A08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x332A08u;
label_332a08:
    // 0x332a08: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x332A08u;
    {
        const bool branch_taken_0x332a08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x332A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332A08u;
        // 0x332a0c: 0xaf90bec0  sw          $s0, -0x4140($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294950592), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x332a08) {
            ctx->pc = 0x332A20u;
            goto label_332a20;
        }
    }
    ctx->pc = 0x332A10u;
label_332a10:
    // 0x332a10: 0x2403ffef  addiu       $v1, $zero, -0x11
    ctx->pc = 0x332a10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
    // 0x332a14: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x332a14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x332a18: 0xff82ae80  sd          $v0, -0x5180($gp)
    ctx->pc = 0x332a18u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294946432), GPR_U64(ctx, 2));
    // 0x332a1c: 0xaf90bec0  sw          $s0, -0x4140($gp)
    ctx->pc = 0x332a1cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950592), GPR_U32(ctx, 16));
label_332a20:
    // 0x332a20: 0x12200027  beqz        $s1, . + 4 + (0x27 << 2)
    ctx->pc = 0x332A20u;
    {
        const bool branch_taken_0x332a20 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x332A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332A20u;
        // 0x332a24: 0x2404fe1f  addiu       $a0, $zero, -0x1E1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966815));
        ctx->in_delay_slot = false;
        if (branch_taken_0x332a20) {
            ctx->pc = 0x332AC0u;
            goto label_332ac0;
        }
    }
    ctx->pc = 0x332A28u;
    // 0x332a28: 0x8e250050  lw          $a1, 0x50($s1)
    ctx->pc = 0x332a28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x332a2c: 0xdf82ae68  ld          $v0, -0x5198($gp)
    ctx->pc = 0x332a2cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946408)));
    // 0x332a30: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x332a30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x332a34: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x332a34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x332a38: 0x34010006  ori         $at, $zero, 0x6
    ctx->pc = 0x332a38u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)6);
    // 0x332a3c: 0x5023000e  beql        $at, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x332A3Cu;
    {
        const bool branch_taken_0x332a3c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 3));
        if (branch_taken_0x332a3c) {
            ctx->pc = 0x332A40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x332A3Cu;
            // 0x332a40: 0x34420160  ori         $v0, $v0, 0x160 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)352);
            ctx->in_delay_slot = false;
            ctx->pc = 0x332A78u;
            goto label_332a78;
        }
    }
    ctx->pc = 0x332A44u;
    // 0x332a44: 0x34010005  ori         $at, $zero, 0x5
    ctx->pc = 0x332a44u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)5);
    // 0x332a48: 0x5023000b  beql        $at, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x332A48u;
    {
        const bool branch_taken_0x332a48 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 3));
        if (branch_taken_0x332a48) {
            ctx->pc = 0x332A4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x332A48u;
            // 0x332a4c: 0x344200c0  ori         $v0, $v0, 0xC0 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)192);
            ctx->in_delay_slot = false;
            ctx->pc = 0x332A78u;
            goto label_332a78;
        }
    }
    ctx->pc = 0x332A50u;
    // 0x332a50: 0x34010004  ori         $at, $zero, 0x4
    ctx->pc = 0x332a50u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)4);
    // 0x332a54: 0x50230008  beql        $at, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x332A54u;
    {
        const bool branch_taken_0x332a54 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 3));
        if (branch_taken_0x332a54) {
            ctx->pc = 0x332A58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x332A54u;
            // 0x332a58: 0x34420120  ori         $v0, $v0, 0x120 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)288);
            ctx->in_delay_slot = false;
            ctx->pc = 0x332A78u;
            goto label_332a78;
        }
    }
    ctx->pc = 0x332A5Cu;
    // 0x332a5c: 0x34010003  ori         $at, $zero, 0x3
    ctx->pc = 0x332a5cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)3);
    // 0x332a60: 0x50230005  beql        $at, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x332A60u;
    {
        const bool branch_taken_0x332a60 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 3));
        if (branch_taken_0x332a60) {
            ctx->pc = 0x332A64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x332A60u;
            // 0x332a64: 0x34420080  ori         $v0, $v0, 0x80 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
            ctx->in_delay_slot = false;
            ctx->pc = 0x332A78u;
            goto label_332a78;
        }
    }
    ctx->pc = 0x332A68u;
    // 0x332a68: 0x34010002  ori         $at, $zero, 0x2
    ctx->pc = 0x332a68u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)2);
    // 0x332a6c: 0x50230002  beql        $at, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x332A6Cu;
    {
        const bool branch_taken_0x332a6c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 3));
        if (branch_taken_0x332a6c) {
            ctx->pc = 0x332A70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x332A6Cu;
            // 0x332a70: 0x34420060  ori         $v0, $v0, 0x60 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)96);
            ctx->in_delay_slot = false;
            ctx->pc = 0x332A78u;
            goto label_332a78;
        }
    }
    ctx->pc = 0x332A74u;
    // 0x332a74: 0x34420000  ori         $v0, $v0, 0x0
    ctx->pc = 0x332a74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)0);
label_332a78:
    // 0x332a78: 0x0  nop
    ctx->pc = 0x332a78u;
    // NOP
    // 0x332a7c: 0xff82ae68  sd          $v0, -0x5198($gp)
    ctx->pc = 0x332a7cu;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294946408), GPR_U64(ctx, 2));
    // 0x332a80: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x332a80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x332a84: 0x30a20f00  andi        $v0, $a1, 0xF00
    ctx->pc = 0x332a84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)3840);
    // 0x332a88: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x332a88u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x332a8c: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x332A8Cu;
    {
        const bool branch_taken_0x332a8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x332A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332A8Cu;
        // 0x332a90: 0xff80ae60  sd          $zero, -0x51A0($gp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 28), 4294946400), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x332a8c) {
            ctx->pc = 0x332AA0u;
            goto label_332aa0;
        }
    }
    ctx->pc = 0x332A94u;
    // 0x332a94: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x332a94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x332a98: 0xff82ae60  sd          $v0, -0x51A0($gp)
    ctx->pc = 0x332a98u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294946400), GPR_U64(ctx, 2));
    // 0x332a9c: 0x0  nop
    ctx->pc = 0x332a9cu;
    // NOP
label_332aa0:
    // 0x332aa0: 0x30a2f000  andi        $v0, $a1, 0xF000
    ctx->pc = 0x332aa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)61440);
    // 0x332aa4: 0x21302  srl         $v0, $v0, 12
    ctx->pc = 0x332aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
    // 0x332aa8: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x332AA8u;
    {
        const bool branch_taken_0x332aa8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x332AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332AA8u;
        // 0x332aac: 0x8f82bec4  lw          $v0, -0x413C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950596)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x332aa8) {
            ctx->pc = 0x332AC4u;
            goto label_332ac4;
        }
    }
    ctx->pc = 0x332AB0u;
    // 0x332ab0: 0xdf82ae60  ld          $v0, -0x51A0($gp)
    ctx->pc = 0x332ab0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946400)));
    // 0x332ab4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x332ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x332ab8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x332ab8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x332abc: 0xff82ae60  sd          $v0, -0x51A0($gp)
    ctx->pc = 0x332abcu;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294946400), GPR_U64(ctx, 2));
label_332ac0:
    // 0x332ac0: 0x8f82bec4  lw          $v0, -0x413C($gp)
    ctx->pc = 0x332ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950596)));
label_332ac4:
    // 0x332ac4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x332AC4u;
    {
        const bool branch_taken_0x332ac4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x332AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332AC4u;
        // 0x332ac8: 0xdf82ae48  ld          $v0, -0x51B8($gp) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946376)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x332ac4) {
            ctx->pc = 0x332AD8u;
            goto label_332ad8;
        }
    }
    ctx->pc = 0x332ACCu;
    // 0x332acc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x332accu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x332ad0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x332AD0u;
    {
        const bool branch_taken_0x332ad0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x332AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332AD0u;
        // 0x332ad4: 0x431025  or          $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x332ad0) {
            ctx->pc = 0x332AE0u;
            goto label_332ae0;
        }
    }
    ctx->pc = 0x332AD8u;
label_332ad8:
    // 0x332ad8: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x332ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x332adc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x332adcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_332ae0:
    // 0x332ae0: 0xff82ae48  sd          $v0, -0x51B8($gp)
    ctx->pc = 0x332ae0u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294946376), GPR_U64(ctx, 2));
    // 0x332ae4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x332ae4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x332ae8: 0xc10a322  jal         func_428C88
    ctx->pc = 0x332AE8u;
    SET_GPR_U32(ctx, 31, 0x332AF0u);
    ctx->pc = 0x332AECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x332AE8u;
    // 0x332aec: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x428C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x428C88u, 0x332AE8u, 0x332AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x332AF0u;
label_332af0:
    // 0x332af0: 0x8f83be20  lw          $v1, -0x41E0($gp)
    ctx->pc = 0x332af0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
    // 0x332af4: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x332af4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x332af8: 0x34840003  ori         $a0, $a0, 0x3
    ctx->pc = 0x332af8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)3);
    // 0x332afc: 0x3c026c03  lui         $v0, 0x6C03
    ctx->pc = 0x332afcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27651 << 16));
    // 0x332b00: 0x344203bc  ori         $v0, $v0, 0x3BC
    ctx->pc = 0x332b00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)956);
    // 0x332b04: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x332b04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x332b08: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x332b08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x332b0c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x332b0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x332b10: 0x34420404  ori         $v0, $v0, 0x404
    ctx->pc = 0x332b10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1028);
    // 0x332b14: 0x70441389  pcpyld      $v0, $v0, $a0
    ctx->pc = 0x332b14u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x332b18: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x332b18u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x332b1c: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x332b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x332b20: 0xde640000  ld          $a0, 0x0($s3)
    ctx->pc = 0x332b20u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x332b24: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x332b24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x332b28: 0x72041389  pcpyld      $v0, $s0, $a0
    ctx->pc = 0x332b28u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 16), GPR_VEC(ctx, 4)));
    // 0x332b2c: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x332b2cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x332b30: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x332b30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x332b34: 0xde640010  ld          $a0, 0x10($s3)
    ctx->pc = 0x332b34u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x332b38: 0x72041389  pcpyld      $v0, $s0, $a0
    ctx->pc = 0x332b38u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 16), GPR_VEC(ctx, 4)));
    // 0x332b3c: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x332b3cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x332b40: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x332b40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x332b44: 0xde640030  ld          $a0, 0x30($s3)
    ctx->pc = 0x332b44u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 19), 48)));
    // 0x332b48: 0x72041389  pcpyld      $v0, $s0, $a0
    ctx->pc = 0x332b48u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 16), GPR_VEC(ctx, 4)));
    // 0x332b4c: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x332b4cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x332b50: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x332b50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x332b54: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x332b54u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
    // 0x332b58: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x332b58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x332b5c: 0xc10a322  jal         func_428C88
    ctx->pc = 0x332B5Cu;
    SET_GPR_U32(ctx, 31, 0x332B64u);
    ctx->pc = 0x332B60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x332B5Cu;
    // 0x332b60: 0x24050012  addiu       $a1, $zero, 0x12 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x428C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x428C88u, 0x332B5Cu, 0x332B64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x332B64u;
label_332b64:
    // 0x332b64: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x332b64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x332b68: 0x3463000f  ori         $v1, $v1, 0xF
    ctx->pc = 0x332b68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)15);
    // 0x332b6c: 0x72031b89  pcpyld      $v1, $s0, $v1
    ctx->pc = 0x332b6cu;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 16), GPR_VEC(ctx, 3)));
    // 0x332b70: 0x8f82be20  lw          $v0, -0x41E0($gp)
    ctx->pc = 0x332b70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
    // 0x332b74: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x332b74u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x332b78: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x332b78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x332b7c: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x332b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
    // 0x332b80: 0x3c046c01  lui         $a0, 0x6C01
    ctx->pc = 0x332b80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)27649 << 16));
    // 0x332b84: 0x348403fa  ori         $a0, $a0, 0x3FA
    ctx->pc = 0x332b84u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1018);
    // 0x332b88: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x332b88u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x332b8c: 0x34840100  ori         $a0, $a0, 0x100
    ctx->pc = 0x332b8cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)256);
    // 0x332b90: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x332b90u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x332b94: 0x34840404  ori         $a0, $a0, 0x404
    ctx->pc = 0x332b94u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1028);
    // 0x332b98: 0x70902389  pcpyld      $a0, $a0, $s0
    ctx->pc = 0x332b98u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 16)));
    // 0x332b9c: 0x7c440000  sq          $a0, 0x0($v0)
    ctx->pc = 0x332b9cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 4));
    // 0x332ba0: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x332ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x332ba4: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x332ba4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
    // 0x332ba8: 0x92430047  lbu         $v1, 0x47($s2)
    ctx->pc = 0x332ba8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 71)));
    // 0x332bac: 0x8f82bec4  lw          $v0, -0x413C($gp)
    ctx->pc = 0x332bacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950596)));
    // 0x332bb0: 0x386300ff  xori        $v1, $v1, 0xFF
    ctx->pc = 0x332bb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)255);
    // 0x332bb4: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x332bb4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x332bb8: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x332bb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x332bbc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x332BBCu;
    {
        const bool branch_taken_0x332bbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x332BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332BBCu;
        // 0x332bc0: 0xaf83bec8  sw          $v1, -0x4138($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294950600), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x332bbc) {
            ctx->pc = 0x332BD8u;
            goto label_332bd8;
        }
    }
    ctx->pc = 0x332BC4u;
    // 0x332bc4: 0xdf82ae80  ld          $v0, -0x5180($gp)
    ctx->pc = 0x332bc4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946432)));
    // 0x332bc8: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x332bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x332bcc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x332BCCu;
    {
        const bool branch_taken_0x332bcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x332BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332BCCu;
        // 0x332bd0: 0x431025  or          $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x332bcc) {
            ctx->pc = 0x332BE4u;
            goto label_332be4;
        }
    }
    ctx->pc = 0x332BD4u;
    // 0x332bd4: 0x0  nop
    ctx->pc = 0x332bd4u;
    // NOP
label_332bd8:
    // 0x332bd8: 0xdf82ae80  ld          $v0, -0x5180($gp)
    ctx->pc = 0x332bd8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946432)));
    // 0x332bdc: 0x2403ffbf  addiu       $v1, $zero, -0x41
    ctx->pc = 0x332bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
    // 0x332be0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x332be0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_332be4:
    // 0x332be4: 0xff82ae80  sd          $v0, -0x5180($gp)
    ctx->pc = 0x332be4u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294946432), GPR_U64(ctx, 2));
    // 0x332be8: 0x92460029  lbu         $a2, 0x29($s2)
    ctx->pc = 0x332be8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 41)));
    // 0x332bec: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x332becu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x332bf0: 0x8f82ae80  lw          $v0, -0x5180($gp)
    ctx->pc = 0x332bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946432)));
    // 0x332bf4: 0x3c07fc00  lui         $a3, 0xFC00
    ctx->pc = 0x332bf4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)64512 << 16));
    // 0x332bf8: 0x34e77fff  ori         $a3, $a3, 0x7FFF
    ctx->pc = 0x332bf8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)32767);
    // 0x332bfc: 0x73c38  dsll        $a3, $a3, 16
    ctx->pc = 0x332bfcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
    // 0x332c00: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x332c00u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x332c04: 0x73c38  dsll        $a3, $a3, 16
    ctx->pc = 0x332c04u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
    // 0x332c08: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x332c08u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x332c0c: 0xdc64d5d0  ld          $a0, -0x2A30($v1)
    ctx->pc = 0x332c0cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 4294956496)));
    // 0x332c10: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x332c10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x332c14: 0x2463d5d0  addiu       $v1, $v1, -0x2A30
    ctx->pc = 0x332c14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956496));
    // 0x332c18: 0x304207ff  andi        $v0, $v0, 0x7FF
    ctx->pc = 0x332c18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2047);
    // 0x332c1c: 0x872024  and         $a0, $a0, $a3
    ctx->pc = 0x332c1cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 7));
    // 0x332c20: 0x213fc  dsll32      $v0, $v0, 15
    ctx->pc = 0x332c20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 15));
    // 0x332c24: 0xdc650008  ld          $a1, 0x8($v1)
    ctx->pc = 0x332c24u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x332c28: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x332c28u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x332c2c: 0x70a42389  pcpyld      $a0, $a1, $a0
    ctx->pc = 0x332c2cu;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x332c30: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x332c30u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x332c34: 0x8f86be20  lw          $a2, -0x41E0($gp)
    ctx->pc = 0x332c34u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
    // 0x332c38: 0x7cc40000  sq          $a0, 0x0($a2)
    ctx->pc = 0x332c38u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 4));
    // 0x332c3c: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x332c3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x332c40: 0xaf86be20  sw          $a2, -0x41E0($gp)
    ctx->pc = 0x332c40u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 6));
    // 0x332c44: 0x3c026c01  lui         $v0, 0x6C01
    ctx->pc = 0x332c44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27649 << 16));
    // 0x332c48: 0x344203fb  ori         $v0, $v0, 0x3FB
    ctx->pc = 0x332c48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1019);
    // 0x332c4c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x332c4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x332c50: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x332c50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x332c54: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x332c54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x332c58: 0x34420404  ori         $v0, $v0, 0x404
    ctx->pc = 0x332c58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1028);
    // 0x332c5c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x332c5cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x332c60: 0x70471389  pcpyld      $v0, $v0, $a3
    ctx->pc = 0x332c60u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 7)));
    // 0x332c64: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x332c64u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x332c68: 0x24c30010  addiu       $v1, $a2, 0x10
    ctx->pc = 0x332c68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x332c6c: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x332c6cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
    // 0x332c70: 0xdf82ae80  ld          $v0, -0x5180($gp)
    ctx->pc = 0x332c70u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946432)));
    // 0x332c74: 0xc7858054  lwc1        $f5, -0x7FAC($gp)
    ctx->pc = 0x332c74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x332c78: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x332c78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x332c7c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x332C7Cu;
    {
        const bool branch_taken_0x332c7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x332C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332C7Cu;
        // 0x332c80: 0x92420044  lbu         $v0, 0x44($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x332c7c) {
            ctx->pc = 0x332C88u;
            goto label_332c88;
        }
    }
    ctx->pc = 0x332C84u;
    // 0x332c84: 0xc7858434  lwc1        $f5, -0x7BCC($gp)
    ctx->pc = 0x332c84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935604)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_332c88:
    // 0x332c88: 0x92430045  lbu         $v1, 0x45($s2)
    ctx->pc = 0x332c88u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 69)));
    // 0x332c8c: 0x92440046  lbu         $a0, 0x46($s2)
    ctx->pc = 0x332c8cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 70)));
    // 0x332c90: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x332c90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x332c94: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x332c94u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x332c98: 0x92450047  lbu         $a1, 0x47($s2)
    ctx->pc = 0x332c98u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 71)));
    // 0x332c9c: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x332c9cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x332ca0: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x332ca0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x332ca4: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x332ca4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x332ca8: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x332ca8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x332cac: 0xc7818434  lwc1        $f1, -0x7BCC($gp)
    ctx->pc = 0x332cacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935604)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x332cb0: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x332cb0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x332cb4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x332cb4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x332cb8: 0x46010182  mul.s       $f6, $f0, $f1
    ctx->pc = 0x332cb8u;
    ctx->f[6] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x332cbc: 0x460519c2  mul.s       $f7, $f3, $f5
    ctx->pc = 0x332cbcu;
    ctx->f[7] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
    // 0x332cc0: 0x44023000  mfc1        $v0, $f6
    ctx->pc = 0x332cc0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[6], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x332cc4: 0x44033800  mfc1        $v1, $f7
    ctx->pc = 0x332cc4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[7], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x332cc8: 0x70021789  pexew       $v0, $v0
    ctx->pc = 0x332cc8u;
    SET_GPR_VEC(ctx, 2, PS2_PEXEW(GPR_VEC(ctx, 2)));
    // 0x332ccc: 0x70031f89  pexew       $v1, $v1
    ctx->pc = 0x332cccu;
    SET_GPR_VEC(ctx, 3, PS2_PEXEW(GPR_VEC(ctx, 3)));
    // 0x332cd0: 0x46051182  mul.s       $f6, $f2, $f5
    ctx->pc = 0x332cd0u;
    ctx->f[6] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
    // 0x332cd4: 0x460521c2  mul.s       $f7, $f4, $f5
    ctx->pc = 0x332cd4u;
    ctx->f[7] = FPU_MUL_S(ctx->f[4], ctx->f[5]);
    // 0x332cd8: 0x44023000  mfc1        $v0, $f6
    ctx->pc = 0x332cd8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[6], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x332cdc: 0x44033800  mfc1        $v1, $f7
    ctx->pc = 0x332cdcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[7], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x332ce0: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x332ce0u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x332ce4: 0x7cc20010  sq          $v0, 0x10($a2)
    ctx->pc = 0x332ce4u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 16), GPR_VEC(ctx, 2));
    // 0x332ce8: 0x24c30020  addiu       $v1, $a2, 0x20
    ctx->pc = 0x332ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x332cec: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x332cecu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
    // 0x332cf0: 0x3c026c01  lui         $v0, 0x6C01
    ctx->pc = 0x332cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27649 << 16));
    // 0x332cf4: 0x344203fc  ori         $v0, $v0, 0x3FC
    ctx->pc = 0x332cf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1020);
    // 0x332cf8: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x332cf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x332cfc: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x332cfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x332d00: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x332d00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x332d04: 0x34420404  ori         $v0, $v0, 0x404
    ctx->pc = 0x332d04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1028);
    // 0x332d08: 0x70471389  pcpyld      $v0, $v0, $a3
    ctx->pc = 0x332d08u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 7)));
    // 0x332d0c: 0x7cc20020  sq          $v0, 0x20($a2)
    ctx->pc = 0x332d0cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 32), GPR_VEC(ctx, 2));
    // 0x332d10: 0x24c30030  addiu       $v1, $a2, 0x30
    ctx->pc = 0x332d10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 48));
    // 0x332d14: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x332d14u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
    // 0x332d18: 0x8e42003c  lw          $v0, 0x3C($s2)
    ctx->pc = 0x332d18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
    // 0x332d1c: 0xc7848240  lwc1        $f4, -0x7DC0($gp)
    ctx->pc = 0x332d1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x332d20: 0xc4430008  lwc1        $f3, 0x8($v0)
    ctx->pc = 0x332d20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x332d24: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x332d24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x332d28: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x332d28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x332d2c: 0xc640001c  lwc1        $f0, 0x1C($s2)
    ctx->pc = 0x332d2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x332d30: 0x46040942  mul.s       $f5, $f1, $f4
    ctx->pc = 0x332d30u;
    ctx->f[5] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x332d34: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x332d34u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x332d38: 0x44032800  mfc1        $v1, $f5
    ctx->pc = 0x332d38u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[5], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x332d3c: 0x70021789  pexew       $v0, $v0
    ctx->pc = 0x332d3cu;
    SET_GPR_VEC(ctx, 2, PS2_PEXEW(GPR_VEC(ctx, 2)));
    // 0x332d40: 0x70031f89  pexew       $v1, $v1
    ctx->pc = 0x332d40u;
    SET_GPR_VEC(ctx, 3, PS2_PEXEW(GPR_VEC(ctx, 3)));
    // 0x332d44: 0x46041982  mul.s       $f6, $f3, $f4
    ctx->pc = 0x332d44u;
    ctx->f[6] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x332d48: 0x46041142  mul.s       $f5, $f2, $f4
    ctx->pc = 0x332d48u;
    ctx->f[5] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x332d4c: 0x44023000  mfc1        $v0, $f6
    ctx->pc = 0x332d4cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[6], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x332d50: 0x44032800  mfc1        $v1, $f5
    ctx->pc = 0x332d50u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[5], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x332d54: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x332d54u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x332d58: 0x7cc20030  sq          $v0, 0x30($a2)
    ctx->pc = 0x332d58u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 48), GPR_VEC(ctx, 2));
    // 0x332d5c: 0x24c30040  addiu       $v1, $a2, 0x40
    ctx->pc = 0x332d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
    // 0x332d60: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x332d60u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
    // 0x332d64: 0x92420028  lbu         $v0, 0x28($s2)
    ctx->pc = 0x332d64u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x332d68: 0x3c046c03  lui         $a0, 0x6C03
    ctx->pc = 0x332d68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)27651 << 16));
    // 0x332d6c: 0x348403fd  ori         $a0, $a0, 0x3FD
    ctx->pc = 0x332d6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1021);
    // 0x332d70: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x332d70u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x332d74: 0x34840100  ori         $a0, $a0, 0x100
    ctx->pc = 0x332d74u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)256);
    // 0x332d78: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x332d78u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x332d7c: 0x34840404  ori         $a0, $a0, 0x404
    ctx->pc = 0x332d7cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1028);
    // 0x332d80: 0x70871b89  pcpyld      $v1, $a0, $a3
    ctx->pc = 0x332d80u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 7)));
    // 0x332d84: 0x30470007  andi        $a3, $v0, 0x7
    ctx->pc = 0x332d84u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x332d88: 0x7cc30040  sq          $v1, 0x40($a2)
    ctx->pc = 0x332d88u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 64), GPR_VEC(ctx, 3));
    // 0x332d8c: 0x24c20050  addiu       $v0, $a2, 0x50
    ctx->pc = 0x332d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 80));
    // 0x332d90: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x332d90u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
    // 0x332d94: 0x8f83aee0  lw          $v1, -0x5120($gp)
    ctx->pc = 0x332d94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946528)));
    // 0x332d98: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x332D98u;
    {
        const bool branch_taken_0x332d98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x332D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332D98u;
        // 0x332d9c: 0x30e20004  andi        $v0, $a3, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x332d98) {
            ctx->pc = 0x332DA8u;
            goto label_332da8;
        }
    }
    ctx->pc = 0x332DA0u;
    // 0x332da0: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x332DA0u;
    {
        const bool branch_taken_0x332da0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x332da0) {
            ctx->pc = 0x332DA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x332DA0u;
            // 0x332da4: 0x34e70008  ori         $a3, $a3, 0x8 (Delay Slot)
            SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)8);
            ctx->in_delay_slot = false;
            ctx->pc = 0x332DC0u;
            goto label_332dc0;
        }
    }
    ctx->pc = 0x332DA8u;
label_332da8:
    // 0x332da8: 0x8f82aee4  lw          $v0, -0x511C($gp)
    ctx->pc = 0x332da8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946532)));
    // 0x332dac: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x332DACu;
    {
        const bool branch_taken_0x332dac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x332DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332DACu;
        // 0x332db0: 0x30e20004  andi        $v0, $a3, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x332dac) {
            ctx->pc = 0x332DE8u;
            goto label_332de8;
        }
    }
    ctx->pc = 0x332DB4u;
    // 0x332db4: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x332DB4u;
    {
        const bool branch_taken_0x332db4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x332db4) {
            ctx->pc = 0x332DB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x332DB4u;
            // 0x332db8: 0x3c03005e  lui         $v1, 0x5E (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x332DF0u;
            goto label_332df0;
        }
    }
    ctx->pc = 0x332DBCu;
    // 0x332dbc: 0x34e70008  ori         $a3, $a3, 0x8
    ctx->pc = 0x332dbcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)8);
label_332dc0:
    // 0x332dc0: 0x8f84be20  lw          $a0, -0x41E0($gp)
    ctx->pc = 0x332dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
    // 0x332dc4: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x332dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x332dc8: 0x2463d670  addiu       $v1, $v1, -0x2990
    ctx->pc = 0x332dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956656));
    // 0x332dcc: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x332dccu;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x5DD670u));
    // 0x332dd0: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x332dd0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x332dd4: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x332dd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x332dd8: 0xaf84be20  sw          $a0, -0x41E0($gp)
    ctx->pc = 0x332dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 4));
    // 0x332ddc: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x332ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x332de0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x332DE0u;
    {
        const bool branch_taken_0x332de0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x332DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332DE0u;
        // 0x332de4: 0x2463d680  addiu       $v1, $v1, -0x2980 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956672));
        ctx->in_delay_slot = false;
        if (branch_taken_0x332de0) {
            ctx->pc = 0x332E10u;
            goto label_332e10;
        }
    }
    ctx->pc = 0x332DE8u;
label_332de8:
    // 0x332de8: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x332de8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x332dec: 0x0  nop
    ctx->pc = 0x332decu;
    // NOP
label_332df0:
    // 0x332df0: 0x8f84be20  lw          $a0, -0x41E0($gp)
    ctx->pc = 0x332df0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
    // 0x332df4: 0x2463d650  addiu       $v1, $v1, -0x29B0
    ctx->pc = 0x332df4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956624));
    // 0x332df8: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x332df8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x332dfc: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x332dfcu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x332e00: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x332e00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x332e04: 0xaf84be20  sw          $a0, -0x41E0($gp)
    ctx->pc = 0x332e04u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 4));
    // 0x332e08: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x332e08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x332e0c: 0x2463d660  addiu       $v1, $v1, -0x29A0
    ctx->pc = 0x332e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956640));
label_332e10:
    // 0x332e10: 0x24850010  addiu       $a1, $a0, 0x10
    ctx->pc = 0x332e10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x332e14: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x332e14u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x332e18: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x332e18u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x332e1c: 0xaf85be20  sw          $a1, -0x41E0($gp)
    ctx->pc = 0x332e1cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 5));
    // 0x332e20: 0x8f83becc  lw          $v1, -0x4134($gp)
    ctx->pc = 0x332e20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950604)));
    // 0x332e24: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x332e24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x332e28: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x332E28u;
    {
        const bool branch_taken_0x332e28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x332E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332E28u;
        // 0x332e2c: 0xaf80aed8  sw          $zero, -0x5128($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294946520), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x332e28) {
            ctx->pc = 0x332E38u;
            goto label_332e38;
        }
    }
    ctx->pc = 0x332E30u;
    // 0x332e30: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x332e30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x332e34: 0xaf82aed8  sw          $v0, -0x5128($gp)
    ctx->pc = 0x332e34u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294946520), GPR_U32(ctx, 2));
label_332e38:
    // 0x332e38: 0x9f82aedc  lwu         $v0, -0x5124($gp)
    ctx->pc = 0x332e38u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294946524)));
    // 0x332e3c: 0x7183c  dsll32      $v1, $a3, 0
    ctx->pc = 0x332e3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) << (32 + 0));
    // 0x332e40: 0x9f84aed8  lwu         $a0, -0x5128($gp)
    ctx->pc = 0x332e40u;
    SET_GPR_ZE32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294946520)));
    // 0x332e44: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x332e44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x332e48: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x332e48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x332e4c: 0x442025  or          $a0, $v0, $a0
    ctx->pc = 0x332e4cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x332e50: 0x70831b89  pcpyld      $v1, $a0, $v1
    ctx->pc = 0x332e50u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 3)));
    // 0x332e54: 0x8f84be20  lw          $a0, -0x41E0($gp)
    ctx->pc = 0x332e54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
    // 0x332e58: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x332e58u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x332e5c: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x332e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x332e60: 0xaf84be20  sw          $a0, -0x41E0($gp)
    ctx->pc = 0x332e60u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 4));
    // 0x332e64: 0x8e420040  lw          $v0, 0x40($s2)
    ctx->pc = 0x332e64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x332e68: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x332E68u;
    {
        const bool branch_taken_0x332e68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x332E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332E68u;
        // 0x332e6c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x332e68) {
            ctx->pc = 0x332EE8u;
            goto label_332ee8;
        }
    }
    ctx->pc = 0x332E70u;
    // 0x332e70: 0x3c035000  lui         $v1, 0x5000
    ctx->pc = 0x332e70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20480 << 16));
    // 0x332e74: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x332e74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
    // 0x332e78: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x332e78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x332e7c: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x332e7cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x332e80: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x332e80u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x332e84: 0x24820010  addiu       $v0, $a0, 0x10
    ctx->pc = 0x332e84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x332e88: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x332e88u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
    // 0x332e8c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x332e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x332e90: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x332e90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x332e94: 0x34428003  ori         $v0, $v0, 0x8003
    ctx->pc = 0x332e94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32771);
    // 0x332e98: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x332e98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x332e9c: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x332e9cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x332ea0: 0x7c820010  sq          $v0, 0x10($a0)
    ctx->pc = 0x332ea0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 2));
    // 0x332ea4: 0x24820020  addiu       $v0, $a0, 0x20
    ctx->pc = 0x332ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x332ea8: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x332ea8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
    // 0x332eac: 0xdf82ae48  ld          $v0, -0x51B8($gp)
    ctx->pc = 0x332eacu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946376)));
    // 0x332eb0: 0x24030047  addiu       $v1, $zero, 0x47
    ctx->pc = 0x332eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x332eb4: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x332eb4u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x332eb8: 0x7c820020  sq          $v0, 0x20($a0)
    ctx->pc = 0x332eb8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 2));
    // 0x332ebc: 0x24820030  addiu       $v0, $a0, 0x30
    ctx->pc = 0x332ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x332ec0: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x332ec0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
    // 0x332ec4: 0xdf82ae68  ld          $v0, -0x5198($gp)
    ctx->pc = 0x332ec4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946408)));
    // 0x332ec8: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x332ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x332ecc: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x332eccu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x332ed0: 0x7c820030  sq          $v0, 0x30($a0)
    ctx->pc = 0x332ed0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 2));
    // 0x332ed4: 0x24820040  addiu       $v0, $a0, 0x40
    ctx->pc = 0x332ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x332ed8: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x332ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
    // 0x332edc: 0xdf82ae60  ld          $v0, -0x51A0($gp)
    ctx->pc = 0x332edcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946400)));
    // 0x332ee0: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x332EE0u;
    {
        const bool branch_taken_0x332ee0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x332EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332EE0u;
        // 0x332ee4: 0x24030008  addiu       $v1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x332ee0) {
            ctx->pc = 0x332F50u;
            goto label_332f50;
        }
    }
    ctx->pc = 0x332EE8u;
label_332ee8:
    // 0x332ee8: 0x700014a9  por         $v0, $zero, $zero
    ctx->pc = 0x332ee8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x332eec: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x332eecu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x332ef0: 0x24820010  addiu       $v0, $a0, 0x10
    ctx->pc = 0x332ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x332ef4: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x332ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
    // 0x332ef8: 0x70001ca9  por         $v1, $zero, $zero
    ctx->pc = 0x332ef8u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x332efc: 0x7c830010  sq          $v1, 0x10($a0)
    ctx->pc = 0x332efcu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 3));
    // 0x332f00: 0x24820020  addiu       $v0, $a0, 0x20
    ctx->pc = 0x332f00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x332f04: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x332f04u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
    // 0x332f08: 0x3c035000  lui         $v1, 0x5000
    ctx->pc = 0x332f08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20480 << 16));
    // 0x332f0c: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x332f0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x332f10: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x332f10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x332f14: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x332f14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x332f18: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x332f18u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x332f1c: 0x7c820020  sq          $v0, 0x20($a0)
    ctx->pc = 0x332f1cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 2));
    // 0x332f20: 0x24820030  addiu       $v0, $a0, 0x30
    ctx->pc = 0x332f20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x332f24: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x332f24u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
    // 0x332f28: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x332f28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x332f2c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x332f2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x332f30: 0x34428001  ori         $v0, $v0, 0x8001
    ctx->pc = 0x332f30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32769);
    // 0x332f34: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x332f34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x332f38: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x332f38u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x332f3c: 0x7c820030  sq          $v0, 0x30($a0)
    ctx->pc = 0x332f3cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 2));
    // 0x332f40: 0x24820040  addiu       $v0, $a0, 0x40
    ctx->pc = 0x332f40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x332f44: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x332f44u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
    // 0x332f48: 0xdf82ae48  ld          $v0, -0x51B8($gp)
    ctx->pc = 0x332f48u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946376)));
    // 0x332f4c: 0x24030047  addiu       $v1, $zero, 0x47
    ctx->pc = 0x332f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
label_332f50:
    // 0x332f50: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x332f50u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x332f54: 0x7c820040  sq          $v0, 0x40($a0)
    ctx->pc = 0x332f54u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 64), GPR_VEC(ctx, 2));
    // 0x332f58: 0x24820050  addiu       $v0, $a0, 0x50
    ctx->pc = 0x332f58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
    // 0x332f5c: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x332f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
    // 0x332f60: 0x92430028  lbu         $v1, 0x28($s2)
    ctx->pc = 0x332f60u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x332f64: 0x30640010  andi        $a0, $v1, 0x10
    ctx->pc = 0x332f64u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x332f68: 0x30620008  andi        $v0, $v1, 0x8
    ctx->pc = 0x332f68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x332f6c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x332f6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x332f70: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x332f70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x332f74: 0x21082  srl         $v0, $v0, 2
    ctx->pc = 0x332f74u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x332f78: 0x31942  srl         $v1, $v1, 5
    ctx->pc = 0x332f78u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 5));
    // 0x332f7c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x332f7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x332f80: 0xa242002b  sb          $v0, 0x2B($s2)
    ctx->pc = 0x332f80u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 43), (uint8_t)GPR_U32(ctx, 2));
    // 0x332f84: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x332f84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x332f88: 0x8f85aed4  lw          $a1, -0x512C($gp)
    ctx->pc = 0x332f88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946516)));
    // 0x332f8c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x332f8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x332f90: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x332f90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x332f94: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x332f94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x332f98: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x332f98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x332f9c: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x332f9cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x332fa0: 0x10a6000b  beq         $a1, $a2, . + 4 + (0xB << 2)
    ctx->pc = 0x332FA0u;
    {
        const bool branch_taken_0x332fa0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 6));
        ctx->pc = 0x332FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332FA0u;
        // 0x332fa4: 0x6203c  dsll32      $a0, $a2, 0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x332fa0) {
            ctx->pc = 0x332FD0u;
            goto label_332fd0;
        }
    }
    ctx->pc = 0x332FA8u;
    // 0x332fa8: 0x3c035000  lui         $v1, 0x5000
    ctx->pc = 0x332fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20480 << 16));
    // 0x332fac: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x332facu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x332fb0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x332fb0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x332fb4: 0x70441389  pcpyld      $v0, $v0, $a0
    ctx->pc = 0x332fb4u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x332fb8: 0x8f83be20  lw          $v1, -0x41E0($gp)
    ctx->pc = 0x332fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
    // 0x332fbc: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x332fbcu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x332fc0: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x332fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x332fc4: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x332fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
    // 0x332fc8: 0xaf86aed4  sw          $a2, -0x512C($gp)
    ctx->pc = 0x332fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294946516), GPR_U32(ctx, 6));
    // 0x332fcc: 0x0  nop
    ctx->pc = 0x332fccu;
    // NOP
label_332fd0:
    // 0x332fd0: 0x8e420030  lw          $v0, 0x30($s2)
    ctx->pc = 0x332fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x332fd4: 0x3c070200  lui         $a3, 0x200
    ctx->pc = 0x332fd4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)512 << 16));
    // 0x332fd8: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x332fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x332fdc: 0x3c085000  lui         $t0, 0x5000
    ctx->pc = 0x332fdcu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)20480 << 16));
    // 0x332fe0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x332fe0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x332fe4: 0x3c060300  lui         $a2, 0x300
    ctx->pc = 0x332fe4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)768 << 16));
    // 0x332fe8: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x332fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x332fec: 0x24a90018  addiu       $t1, $a1, 0x18
    ctx->pc = 0x332fecu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), 24));
    // 0x332ff0: 0x9d240008  lwu         $a0, 0x8($t1)
    ctx->pc = 0x332ff0u;
    SET_GPR_ZE32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x332ff4: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x332ff4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x332ff8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x332ff8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x332ffc: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x332ffcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x333000: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x333000u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x333004: 0x882025  or          $a0, $a0, $t0
    ctx->pc = 0x333004u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 8));
    // 0x333008: 0x70441389  pcpyld      $v0, $v0, $a0
    ctx->pc = 0x333008u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x33300c: 0x8f83be20  lw          $v1, -0x41E0($gp)
    ctx->pc = 0x33300cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
    // 0x333010: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x333010u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x333014: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x333014u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x333018: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x333018u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
    // 0x33301c: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x33301cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_333020:
    // 0x333020: 0x42000039  di
    ctx->pc = 0x333020u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x333024: 0x40f  sync.p
    ctx->pc = 0x333024u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x333028: 0x40036000  mfc0        $v1, Status
    ctx->pc = 0x333028u;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_status);
    // 0x33302c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x33302cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x333030: 0x0  nop
    ctx->pc = 0x333030u;
    // NOP
    // 0x333034: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x333034u;
    {
        const bool branch_taken_0x333034 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x333034) {
            ctx->pc = 0x333020u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_333020;
        }
    }
    ctx->pc = 0x33303Cu;
    // 0x33303c: 0x8ca30018  lw          $v1, 0x18($a1)
    ctx->pc = 0x33303cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x333040: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x333040u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x333044: 0xaca30018  sw          $v1, 0x18($a1)
    ctx->pc = 0x333044u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 3));
    // 0x333048: 0x42000038  ei
    ctx->pc = 0x333048u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x33304c: 0x8d220004  lw          $v0, 0x4($t1)
    ctx->pc = 0x33304cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x333050: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x333050u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x333054: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x333054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x333058: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x333058u;
    {
        const bool branch_taken_0x333058 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x33305Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333058u;
        // 0x33305c: 0xad220004  sw          $v0, 0x4($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333058) {
            ctx->pc = 0x333068u;
            goto label_333068;
        }
    }
    ctx->pc = 0x333060u;
    // 0x333060: 0xc10a762  jal         func_429D88
    ctx->pc = 0x333060u;
    SET_GPR_U32(ctx, 31, 0x333068u);
    ctx->pc = 0x333064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333060u;
    // 0x333064: 0x120202d  daddu       $a0, $t1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x429D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x429D88u, 0x333060u, 0x333068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333068u;
label_333068:
    // 0x333068: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x333068u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x33306c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x33306cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x333070: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x333070u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x333074: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x333074u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x333078: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x333078u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x33307c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x33307cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x333080: 0x3e00008  jr          $ra
    ctx->pc = 0x333080u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x333084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333080u;
        // 0x333084: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x333080u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x333088u;
    // 0x333088: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x333088u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x33308c: 0x8f87a634  lw          $a3, -0x59CC($gp)
    ctx->pc = 0x33308cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944308)));
    // 0x333090: 0x7fb300d0  sq          $s3, 0xD0($sp)
    ctx->pc = 0x333090u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 19));
    // 0x333094: 0x3c050007  lui         $a1, 0x7
    ctx->pc = 0x333094u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)7 << 16));
    // 0x333098: 0x7fb600a0  sq          $s6, 0xA0($sp)
    ctx->pc = 0x333098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 22));
    // 0x33309c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x33309cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3330a0: 0x7fb00100  sq          $s0, 0x100($sp)
    ctx->pc = 0x3330a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 16));
    // 0x3330a4: 0x3c060100  lui         $a2, 0x100
    ctx->pc = 0x3330a4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)256 << 16));
    // 0x3330a8: 0x7fb100f0  sq          $s1, 0xF0($sp)
    ctx->pc = 0x3330a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 17));
    // 0x3330ac: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x3330acu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3330b0: 0x7fb200e0  sq          $s2, 0xE0($sp)
    ctx->pc = 0x3330b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 18));
    // 0x3330b4: 0x7fb400c0  sq          $s4, 0xC0($sp)
    ctx->pc = 0x3330b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 20));
    // 0x3330b8: 0x7fb500b0  sq          $s5, 0xB0($sp)
    ctx->pc = 0x3330b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 21));
    // 0x3330bc: 0x7fb70090  sq          $s7, 0x90($sp)
    ctx->pc = 0x3330bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 23));
    // 0x3330c0: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x3330c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x3330c4: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x3330c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x3330c8: 0xdf84ae48  ld          $a0, -0x51B8($gp)
    ctx->pc = 0x3330c8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 28), 4294946376)));
    // 0x3330cc: 0x8e63002c  lw          $v1, 0x2C($s3)
    ctx->pc = 0x3330ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 44)));
    // 0x3330d0: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x3330d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x3330d4: 0xdf88ae58  ld          $t0, -0x51A8($gp)
    ctx->pc = 0x3330d4u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 28), 4294946392)));
    // 0x3330d8: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x3330d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x3330dc: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x3330dcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3330e0: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x3330e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x3330e4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3330e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3330e8: 0xdf82ae38  ld          $v0, -0x51C8($gp)
    ctx->pc = 0x3330e8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946360)));
    // 0x3330ec: 0xffa20060  sd          $v0, 0x60($sp)
    ctx->pc = 0x3330ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 2));
    // 0x3330f0: 0xdc620078  ld          $v0, 0x78($v1)
    ctx->pc = 0x3330f0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 120)));
    // 0x3330f4: 0xdc770070  ld          $s7, 0x70($v1)
    ctx->pc = 0x3330f4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 3), 112)));
    // 0x3330f8: 0x8c720040  lw          $s2, 0x40($v1)
    ctx->pc = 0x3330f8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x3330fc: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x3330fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x333100: 0xdc7e0068  ld          $fp, 0x68($v1)
    ctx->pc = 0x333100u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 3), 104)));
    // 0x333104: 0x2e63026  xor         $a2, $s7, $a2
    ctx->pc = 0x333104u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 23) ^ GPR_U64(ctx, 6));
    // 0x333108: 0x8c750000  lw          $s5, 0x0($v1)
    ctx->pc = 0x333108u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x33310c: 0x106b80a  movz        $s7, $t0, $a2
    ctx->pc = 0x33310cu;
    if (GPR_U64(ctx, 6) == 0) SET_GPR_VEC(ctx, 23, GPR_VEC(ctx, 8));
    // 0x333110: 0xffa40058  sd          $a0, 0x58($sp)
    ctx->pc = 0x333110u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 4));
    // 0x333114: 0x8c740004  lw          $s4, 0x4($v1)
    ctx->pc = 0x333114u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x333118: 0x12a00003  beqz        $s5, . + 4 + (0x3 << 2)
    ctx->pc = 0x333118u;
    {
        const bool branch_taken_0x333118 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x33311Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333118u;
        // 0x33311c: 0xffa00050  sd          $zero, 0x50($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333118) {
            ctx->pc = 0x333128u;
            goto label_333128;
        }
    }
    ctx->pc = 0x333120u;
    // 0x333120: 0x56800019  bnel        $s4, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x333120u;
    {
        const bool branch_taken_0x333120 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x333120) {
            ctx->pc = 0x333124u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x333120u;
            // 0x333124: 0xffa00040  sd          $zero, 0x40($sp) (Delay Slot)
            WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x333188u;
            goto label_333188;
        }
    }
    ctx->pc = 0x333128u;
label_333128:
    // 0x333128: 0x3b5a80a  movz        $s5, $sp, $s5
    ctx->pc = 0x333128u;
    if (GPR_U64(ctx, 21) == 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 29));
    // 0x33312c: 0x3b4a00a  movz        $s4, $sp, $s4
    ctx->pc = 0x33312cu;
    if (GPR_U64(ctx, 20) == 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 29));
    // 0x333130: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x333130u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x333134: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x333134u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x333138: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x333138u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x33313c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x33313cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x333140: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x333140u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x333144: 0x34420003  ori         $v0, $v0, 0x3
    ctx->pc = 0x333144u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
    // 0x333148: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x333148u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x33314c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x33314cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x333150: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x333150u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x333154: 0xafa3000c  sw          $v1, 0xC($sp)
    ctx->pc = 0x333154u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 3));
    // 0x333158: 0xe7a10028  swc1        $f1, 0x28($sp)
    ctx->pc = 0x333158u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x33315c: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x33315cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x333160: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x333160u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x333164: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x333164u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x333168: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x333168u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x33316c: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x33316cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x333170: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x333170u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x333174: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x333174u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x333178: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x333178u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x33317c: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x33317cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x333180: 0xffa00040  sd          $zero, 0x40($sp)
    ctx->pc = 0x333180u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 0));
    // 0x333184: 0x0  nop
    ctx->pc = 0x333184u;
    // NOP
label_333188:
    // 0x333188: 0xffa00048  sd          $zero, 0x48($sp)
    ctx->pc = 0x333188u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 0));
    // 0x33318c: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x33318Cu;
    {
        const bool branch_taken_0x33318c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x333190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33318Cu;
        // 0x333190: 0xaf80bec4  sw          $zero, -0x413C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294950596), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33318c) {
            ctx->pc = 0x3331B8u;
            goto label_3331b8;
        }
    }
    ctx->pc = 0x333194u;
    // 0x333194: 0xc110e98  jal         func_443A60
    ctx->pc = 0x333194u;
    SET_GPR_U32(ctx, 31, 0x33319Cu);
    ctx->pc = 0x333198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333194u;
    // 0x333198: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x443A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x443A60u, 0x333194u, 0x33319Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33319Cu;
label_33319c:
    // 0x33319c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x33319cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3331a0: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x3331a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x3331a4: 0x90430023  lbu         $v1, 0x23($v0)
    ctx->pc = 0x3331a4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 35)));
    // 0x3331a8: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x3331a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x3331ac: 0x10640002  beq         $v1, $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3331ACu;
    {
        const bool branch_taken_0x3331ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x3331B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3331ACu;
        // 0x3331b0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3331ac) {
            ctx->pc = 0x3331B8u;
            goto label_3331b8;
        }
    }
    ctx->pc = 0x3331B4u;
    // 0x3331b4: 0xaf82bec4  sw          $v0, -0x413C($gp)
    ctx->pc = 0x3331b4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950596), GPR_U32(ctx, 2));
label_3331b8:
    // 0x3331b8: 0x12400006  beqz        $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x3331B8u;
    {
        const bool branch_taken_0x3331b8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x3331b8) {
            ctx->pc = 0x3331D4u;
            goto label_3331d4;
        }
    }
    ctx->pc = 0x3331C0u;
    // 0x3331c0: 0xc110e98  jal         func_443A60
    ctx->pc = 0x3331C0u;
    SET_GPR_U32(ctx, 31, 0x3331C8u);
    ctx->pc = 0x3331C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3331C0u;
    // 0x3331c4: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x443A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x443A60u, 0x3331C0u, 0x3331C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3331C8u;
label_3331c8:
    // 0x3331c8: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x3331c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3331cc: 0xc110b7e  jal         func_442DF8
    ctx->pc = 0x3331CCu;
    SET_GPR_U32(ctx, 31, 0x3331D4u);
    ctx->pc = 0x3331D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3331CCu;
    // 0x3331d0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x442DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x442DF8u, 0x3331CCu, 0x3331D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3331D4u;
label_3331d4:
    // 0x3331d4: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3331D4u;
    {
        const bool branch_taken_0x3331d4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3331d4) {
            ctx->pc = 0x3331E8u;
            goto label_3331e8;
        }
    }
    ctx->pc = 0x3331DCu;
    // 0x3331dc: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x3331dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3331e0: 0xc110b7e  jal         func_442DF8
    ctx->pc = 0x3331E0u;
    SET_GPR_U32(ctx, 31, 0x3331E8u);
    ctx->pc = 0x3331E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3331E0u;
    // 0x3331e4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x442DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x442DF8u, 0x3331E0u, 0x3331E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3331E8u;
label_3331e8:
    // 0x3331e8: 0x12400008  beqz        $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x3331E8u;
    {
        const bool branch_taken_0x3331e8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x3331ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3331E8u;
        // 0x3331ec: 0x8f82beb8  lw          $v0, -0x4148($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950584)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3331e8) {
            ctx->pc = 0x33320Cu;
            goto label_33320c;
        }
    }
    ctx->pc = 0x3331F0u;
    // 0x3331f0: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x3331f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3331f4: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x3331f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x3331f8: 0x8c430058  lw          $v1, 0x58($v0)
    ctx->pc = 0x3331f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x3331fc: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3331FCu;
    {
        const bool branch_taken_0x3331fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3331fc) {
            ctx->pc = 0x33320Cu;
            goto label_33320c;
        }
    }
    ctx->pc = 0x333204u;
    // 0x333204: 0xc110b7e  jal         func_442DF8
    ctx->pc = 0x333204u;
    SET_GPR_U32(ctx, 31, 0x33320Cu);
    ctx->pc = 0x333208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333204u;
    // 0x333208: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x442DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x442DF8u, 0x333204u, 0x33320Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33320Cu;
label_33320c:
    // 0x33320c: 0x12000027  beqz        $s0, . + 4 + (0x27 << 2)
    ctx->pc = 0x33320Cu;
    {
        const bool branch_taken_0x33320c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x333210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33320Cu;
        // 0x333210: 0x8f82beb8  lw          $v0, -0x4148($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950584)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33320c) {
            ctx->pc = 0x3332ACu;
            goto label_3332ac;
        }
    }
    ctx->pc = 0x333214u;
    // 0x333214: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x333214u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x333218: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x333218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x33321c: 0x8c430058  lw          $v1, 0x58($v0)
    ctx->pc = 0x33321cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x333220: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x333220u;
    {
        const bool branch_taken_0x333220 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x333224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333220u;
        // 0x333224: 0xdf82ae80  ld          $v0, -0x5180($gp) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946432)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333220) {
            ctx->pc = 0x333234u;
            goto label_333234;
        }
    }
    ctx->pc = 0x333228u;
    // 0x333228: 0xc110b7e  jal         func_442DF8
    ctx->pc = 0x333228u;
    SET_GPR_U32(ctx, 31, 0x333230u);
    ctx->pc = 0x33322Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333228u;
    // 0x33322c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x442DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x442DF8u, 0x333228u, 0x333230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333230u;
label_333230:
    // 0x333230: 0xdf82ae80  ld          $v0, -0x5180($gp)
    ctx->pc = 0x333230u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946432)));
label_333234:
    // 0x333234: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x333234u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x333238: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x333238u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x33323c: 0x27a50044  addiu       $a1, $sp, 0x44
    ctx->pc = 0x33323cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x333240: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x333240u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x333244: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x333244u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x333248: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x333248u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33324c: 0xaf87bec0  sw          $a3, -0x4140($gp)
    ctx->pc = 0x33324cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950592), GPR_U32(ctx, 7));
    // 0x333250: 0xc110f4c  jal         func_443D30
    ctx->pc = 0x333250u;
    SET_GPR_U32(ctx, 31, 0x333258u);
    ctx->pc = 0x333254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333250u;
    // 0x333254: 0xff82ae80  sd          $v0, -0x5180($gp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294946432), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x443D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x443D30u, 0x333250u, 0x333258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333258u;
label_333258:
    // 0x333258: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x333258u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x33325c: 0x2785ae68  addiu       $a1, $gp, -0x5198
    ctx->pc = 0x33325cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294946408));
    // 0x333260: 0xc110f54  jal         func_443D50
    ctx->pc = 0x333260u;
    SET_GPR_U32(ctx, 31, 0x333268u);
    ctx->pc = 0x333264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333260u;
    // 0x333264: 0x92060050  lbu         $a2, 0x50($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 80)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x443D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x443D50u, 0x333260u, 0x333268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333268u;
label_333268:
    // 0x333268: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x333268u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x33326c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x33326cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x333270: 0x30620f00  andi        $v0, $v1, 0xF00
    ctx->pc = 0x333270u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3840);
    // 0x333274: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x333274u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x333278: 0x14440003  bne         $v0, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x333278u;
    {
        const bool branch_taken_0x333278 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x33327Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333278u;
        // 0x33327c: 0xff80ae60  sd          $zero, -0x51A0($gp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 28), 4294946400), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333278) {
            ctx->pc = 0x333288u;
            goto label_333288;
        }
    }
    ctx->pc = 0x333280u;
    // 0x333280: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x333280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x333284: 0xff82ae60  sd          $v0, -0x51A0($gp)
    ctx->pc = 0x333284u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294946400), GPR_U64(ctx, 2));
label_333288:
    // 0x333288: 0x3062f000  andi        $v0, $v1, 0xF000
    ctx->pc = 0x333288u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)61440);
    // 0x33328c: 0x21302  srl         $v0, $v0, 12
    ctx->pc = 0x33328cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
    // 0x333290: 0x1444000c  bne         $v0, $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x333290u;
    {
        const bool branch_taken_0x333290 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x333294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333290u;
        // 0x333294: 0xdf82ae48  ld          $v0, -0x51B8($gp) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946376)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333290) {
            ctx->pc = 0x3332C4u;
            goto label_3332c4;
        }
    }
    ctx->pc = 0x333298u;
    // 0x333298: 0xdf82ae60  ld          $v0, -0x51A0($gp)
    ctx->pc = 0x333298u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946400)));
    // 0x33329c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x33329cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3332a0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3332a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3332a4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3332A4u;
    {
        const bool branch_taken_0x3332a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3332A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3332A4u;
        // 0x3332a8: 0xff82ae60  sd          $v0, -0x51A0($gp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 28), 4294946400), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3332a4) {
            ctx->pc = 0x3332C0u;
            goto label_3332c0;
        }
    }
    ctx->pc = 0x3332ACu;
label_3332ac:
    // 0x3332ac: 0xdf82ae80  ld          $v0, -0x5180($gp)
    ctx->pc = 0x3332acu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946432)));
    // 0x3332b0: 0x2403ffef  addiu       $v1, $zero, -0x11
    ctx->pc = 0x3332b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
    // 0x3332b4: 0xaf80bec0  sw          $zero, -0x4140($gp)
    ctx->pc = 0x3332b4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950592), GPR_U32(ctx, 0));
    // 0x3332b8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3332b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x3332bc: 0xff82ae80  sd          $v0, -0x5180($gp)
    ctx->pc = 0x3332bcu;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294946432), GPR_U64(ctx, 2));
label_3332c0:
    // 0x3332c0: 0xdf82ae48  ld          $v0, -0x51B8($gp)
    ctx->pc = 0x3332c0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946376)));
label_3332c4:
    // 0x3332c4: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x3332c4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3332c8: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x3332c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x3332cc: 0x12400015  beqz        $s2, . + 4 + (0x15 << 2)
    ctx->pc = 0x3332CCu;
    {
        const bool branch_taken_0x3332cc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x3332D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3332CCu;
        // 0x3332d0: 0xff82ae48  sd          $v0, -0x51B8($gp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 28), 4294946376), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3332cc) {
            ctx->pc = 0x333324u;
            goto label_333324;
        }
    }
    ctx->pc = 0x3332D4u;
    // 0x3332d4: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x3332d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3332d8: 0x27a5004c  addiu       $a1, $sp, 0x4C
    ctx->pc = 0x3332d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x3332dc: 0x27a60048  addiu       $a2, $sp, 0x48
    ctx->pc = 0x3332dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x3332e0: 0xc110f4c  jal         func_443D30
    ctx->pc = 0x3332E0u;
    SET_GPR_U32(ctx, 31, 0x3332E8u);
    ctx->pc = 0x3332E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3332E0u;
    // 0x3332e4: 0x220b02d  daddu       $s6, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x443D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x443D30u, 0x3332E0u, 0x3332E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3332E8u;
label_3332e8:
    // 0x3332e8: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x3332e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3332ec: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x3332ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3332f0: 0xc110f54  jal         func_443D50
    ctx->pc = 0x3332F0u;
    SET_GPR_U32(ctx, 31, 0x3332F8u);
    ctx->pc = 0x3332F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3332F0u;
    // 0x3332f4: 0x92460050  lbu         $a2, 0x50($s2) (Delay Slot)
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 80)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x443D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x443D50u, 0x3332F0u, 0x3332F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3332F8u;
label_3332f8:
    // 0x3332f8: 0x8e430050  lw          $v1, 0x50($s2)
    ctx->pc = 0x3332f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
    // 0x3332fc: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3332fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x333300: 0x30620f00  andi        $v0, $v1, 0xF00
    ctx->pc = 0x333300u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3840);
    // 0x333304: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x333304u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x333308: 0x3063f000  andi        $v1, $v1, 0xF000
    ctx->pc = 0x333308u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)61440);
    // 0x33330c: 0x38420003  xori        $v0, $v0, 0x3
    ctx->pc = 0x33330cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)3);
    // 0x333310: 0x31b02  srl         $v1, $v1, 12
    ctx->pc = 0x333310u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 12));
    // 0x333314: 0x14640003  bne         $v1, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x333314u;
    {
        const bool branch_taken_0x333314 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x333318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333314u;
        // 0x333318: 0x2b00b  movn        $s6, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 22, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333314) {
            ctx->pc = 0x333324u;
            goto label_333324;
        }
    }
    ctx->pc = 0x33331Cu;
    // 0x33331c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x33331cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x333320: 0x2c2b025  or          $s6, $s6, $v0
    ctx->pc = 0x333320u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) | GPR_U64(ctx, 2));
label_333324:
    // 0x333324: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
    ctx->pc = 0x333324u;
    {
        const bool branch_taken_0x333324 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x333328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333324u;
        // 0x333328: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333324) {
            ctx->pc = 0x333368u;
            goto label_333368;
        }
    }
    ctx->pc = 0x33332Cu;
    // 0x33332c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x33332cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x333330: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x333330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x333334: 0x28420009  slti        $v0, $v0, 0x9
    ctx->pc = 0x333334u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x333338: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x333338u;
    {
        const bool branch_taken_0x333338 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x333338) {
            ctx->pc = 0x333368u;
            goto label_333368;
        }
    }
    ctx->pc = 0x333340u;
    // 0x333340: 0x12400009  beqz        $s2, . + 4 + (0x9 << 2)
    ctx->pc = 0x333340u;
    {
        const bool branch_taken_0x333340 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x333340) {
            ctx->pc = 0x333368u;
            goto label_333368;
        }
    }
    ctx->pc = 0x333348u;
    // 0x333348: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x333348u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x33334c: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x33334cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x333350: 0x28420009  slti        $v0, $v0, 0x9
    ctx->pc = 0x333350u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x333354: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x333354u;
    {
        const bool branch_taken_0x333354 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x333354) {
            ctx->pc = 0x333368u;
            goto label_333368;
        }
    }
    ctx->pc = 0x33335Cu;
    // 0x33335c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x33335cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x333360: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x333360u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x333364: 0xaf82bec0  sw          $v0, -0x4140($gp)
    ctx->pc = 0x333364u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950592), GPR_U32(ctx, 2));
label_333368:
    // 0x333368: 0xc10a322  jal         func_428C88
    ctx->pc = 0x333368u;
    SET_GPR_U32(ctx, 31, 0x333370u);
    ctx->pc = 0x33336Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333368u;
    // 0x33336c: 0x24050027  addiu       $a1, $zero, 0x27 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
    ctx->in_delay_slot = false;
    ctx->pc = 0x428C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x428C88u, 0x333368u, 0x333370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333370u;
label_333370:
    // 0x333370: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x333370u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x333374: 0x34630021  ori         $v1, $v1, 0x21
    ctx->pc = 0x333374u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)33);
    // 0x333378: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x333378u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33337c: 0x71231b89  pcpyld      $v1, $t1, $v1
    ctx->pc = 0x33337cu;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 3)));
    // 0x333380: 0x8f85be20  lw          $a1, -0x41E0($gp)
    ctx->pc = 0x333380u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
    // 0x333384: 0x7ca30000  sq          $v1, 0x0($a1)
    ctx->pc = 0x333384u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
    // 0x333388: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x333388u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x33338c: 0xaf85be20  sw          $a1, -0x41E0($gp)
    ctx->pc = 0x33338cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 5));
    // 0x333390: 0x3c026c0a  lui         $v0, 0x6C0A
    ctx->pc = 0x333390u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27658 << 16));
    // 0x333394: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x333394u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x333398: 0x344203bc  ori         $v0, $v0, 0x3BC
    ctx->pc = 0x333398u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)956);
    // 0x33339c: 0x34840101  ori         $a0, $a0, 0x101
    ctx->pc = 0x33339cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)257);
    // 0x3333a0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3333a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3333a4: 0x704414c8  ppacw       $v0, $v0, $a0
    ctx->pc = 0x3333a4u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x3333a8: 0x70c61cc8  ppacw       $v1, $a2, $a2
    ctx->pc = 0x3333a8u;
    SET_GPR_VEC(ctx, 3, PS2_PPACW(GPR_VEC(ctx, 6), GPR_VEC(ctx, 6)));
    // 0x3333ac: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x3333acu;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x3333b0: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x3333b0u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    // 0x3333b4: 0x92630029  lbu         $v1, 0x29($s3)
    ctx->pc = 0x3333b4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 41)));
    // 0x3333b8: 0x24040258  addiu       $a0, $zero, 0x258
    ctx->pc = 0x3333b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 600));
    // 0x3333bc: 0x3c083000  lui         $t0, 0x3000
    ctx->pc = 0x3333bcu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)12288 << 16));
    // 0x3333c0: 0x35084000  ori         $t0, $t0, 0x4000
    ctx->pc = 0x3333c0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)16384);
    // 0x3333c4: 0x92620028  lbu         $v0, 0x28($s3)
    ctx->pc = 0x3333c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 40)));
    // 0x3333c8: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x3333c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x3333cc: 0x24070412  addiu       $a3, $zero, 0x412
    ctx->pc = 0x3333ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1042));
    // 0x3333d0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3333d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3333d4: 0x21178  dsll        $v0, $v0, 5
    ctx->pc = 0x3333d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 5);
    // 0x3333d8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3333d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3333dc: 0x213f8  dsll        $v0, $v0, 15
    ctx->pc = 0x3333dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 15);
    // 0x3333e0: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x3333e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x3333e4: 0x2403c  dsll32      $t0, $v0, 0
    ctx->pc = 0x3333e4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3333e8: 0x70e81389  pcpyld      $v0, $a3, $t0
    ctx->pc = 0x3333e8u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 8)));
    // 0x3333ec: 0x7ca20010  sq          $v0, 0x10($a1)
    ctx->pc = 0x3333ecu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), GPR_VEC(ctx, 2));
    // 0x3333f0: 0x3c081000  lui         $t0, 0x1000
    ctx->pc = 0x3333f0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)4096 << 16));
    // 0x3333f4: 0x8403c  dsll32      $t0, $t0, 0
    ctx->pc = 0x3333f4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 0));
    // 0x3333f8: 0x35088002  ori         $t0, $t0, 0x8002
    ctx->pc = 0x3333f8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)32770);
    // 0x3333fc: 0x2407000e  addiu       $a3, $zero, 0xE
    ctx->pc = 0x3333fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x333400: 0x70e81389  pcpyld      $v0, $a3, $t0
    ctx->pc = 0x333400u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 8)));
    // 0x333404: 0x7ca20020  sq          $v0, 0x20($a1)
    ctx->pc = 0x333404u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 32), GPR_VEC(ctx, 2));
    // 0x333408: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x333408u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x33340c: 0xdfa20040  ld          $v0, 0x40($sp)
    ctx->pc = 0x33340cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x333410: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x333410u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x333414: 0x7ca20030  sq          $v0, 0x30($a1)
    ctx->pc = 0x333414u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 48), GPR_VEC(ctx, 2));
    // 0x333418: 0x2404003d  addiu       $a0, $zero, 0x3D
    ctx->pc = 0x333418u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
    // 0x33341c: 0xdf82ae58  ld          $v0, -0x51A8($gp)
    ctx->pc = 0x33341cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946392)));
    // 0x333420: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x333420u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x333424: 0x7ca20040  sq          $v0, 0x40($a1)
    ctx->pc = 0x333424u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 64), GPR_VEC(ctx, 2));
    // 0x333428: 0x70e81389  pcpyld      $v0, $a3, $t0
    ctx->pc = 0x333428u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 8)));
    // 0x33342c: 0x7ca20050  sq          $v0, 0x50($a1)
    ctx->pc = 0x33342cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 80), GPR_VEC(ctx, 2));
    // 0x333430: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x333430u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x333434: 0xdfa20048  ld          $v0, 0x48($sp)
    ctx->pc = 0x333434u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x333438: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x333438u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x33343c: 0x7ca20060  sq          $v0, 0x60($a1)
    ctx->pc = 0x33343cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 96), GPR_VEC(ctx, 2));
    // 0x333440: 0x70971389  pcpyld      $v0, $a0, $s7
    ctx->pc = 0x333440u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 23)));
    // 0x333444: 0x7ca20070  sq          $v0, 0x70($a1)
    ctx->pc = 0x333444u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 112), GPR_VEC(ctx, 2));
    // 0x333448: 0xdea80000  ld          $t0, 0x0($s5)
    ctx->pc = 0x333448u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x33344c: 0xde820000  ld          $v0, 0x0($s4)
    ctx->pc = 0x33344cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x333450: 0x70481389  pcpyld      $v0, $v0, $t0
    ctx->pc = 0x333450u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 8)));
    // 0x333454: 0x7ca20080  sq          $v0, 0x80($a1)
    ctx->pc = 0x333454u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 128), GPR_VEC(ctx, 2));
    // 0x333458: 0xdea80010  ld          $t0, 0x10($s5)
    ctx->pc = 0x333458u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x33345c: 0xde820010  ld          $v0, 0x10($s4)
    ctx->pc = 0x33345cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x333460: 0x70481389  pcpyld      $v0, $v0, $t0
    ctx->pc = 0x333460u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 8)));
    // 0x333464: 0x7ca20090  sq          $v0, 0x90($a1)
    ctx->pc = 0x333464u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 144), GPR_VEC(ctx, 2));
    // 0x333468: 0xdea80030  ld          $t0, 0x30($s5)
    ctx->pc = 0x333468u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 21), 48)));
    // 0x33346c: 0xde820030  ld          $v0, 0x30($s4)
    ctx->pc = 0x33346cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 20), 48)));
    // 0x333470: 0x70481389  pcpyld      $v0, $v0, $t0
    ctx->pc = 0x333470u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 8)));
    // 0x333474: 0x7ca200a0  sq          $v0, 0xA0($a1)
    ctx->pc = 0x333474u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 160), GPR_VEC(ctx, 2));
    // 0x333478: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x333478u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
    // 0x33347c: 0x34420006  ori         $v0, $v0, 0x6
    ctx->pc = 0x33347cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6);
    // 0x333480: 0x70c61cc8  ppacw       $v1, $a2, $a2
    ctx->pc = 0x333480u;
    SET_GPR_VEC(ctx, 3, PS2_PPACW(GPR_VEC(ctx, 6), GPR_VEC(ctx, 6)));
    // 0x333484: 0x704614c8  ppacw       $v0, $v0, $a2
    ctx->pc = 0x333484u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 6)));
    // 0x333488: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x333488u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x33348c: 0x7ca200b0  sq          $v0, 0xB0($a1)
    ctx->pc = 0x33348cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 176), GPR_VEC(ctx, 2));
    // 0x333490: 0x3c081000  lui         $t0, 0x1000
    ctx->pc = 0x333490u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)4096 << 16));
    // 0x333494: 0x8403c  dsll32      $t0, $t0, 0
    ctx->pc = 0x333494u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 0));
    // 0x333498: 0x35088005  ori         $t0, $t0, 0x8005
    ctx->pc = 0x333498u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)32773);
    // 0x33349c: 0x70e81389  pcpyld      $v0, $a3, $t0
    ctx->pc = 0x33349cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 8)));
    // 0x3334a0: 0x7ca200c0  sq          $v0, 0xC0($a1)
    ctx->pc = 0x3334a0u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 192), GPR_VEC(ctx, 2));
    // 0x3334a4: 0x24020043  addiu       $v0, $zero, 0x43
    ctx->pc = 0x3334a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x3334a8: 0x705e1389  pcpyld      $v0, $v0, $fp
    ctx->pc = 0x3334a8u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 30)));
    // 0x3334ac: 0x7ca200d0  sq          $v0, 0xD0($a1)
    ctx->pc = 0x3334acu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 208), GPR_VEC(ctx, 2));
    // 0x3334b0: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x3334b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x3334b4: 0x70561389  pcpyld      $v0, $v0, $s6
    ctx->pc = 0x3334b4u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 22)));
    // 0x3334b8: 0x7ca200e0  sq          $v0, 0xE0($a1)
    ctx->pc = 0x3334b8u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 224), GPR_VEC(ctx, 2));
    // 0x3334bc: 0x24020048  addiu       $v0, $zero, 0x48
    ctx->pc = 0x3334bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x3334c0: 0xdfa30058  ld          $v1, 0x58($sp)
    ctx->pc = 0x3334c0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x3334c4: 0x70431389  pcpyld      $v0, $v0, $v1
    ctx->pc = 0x3334c4u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x3334c8: 0x7ca200f0  sq          $v0, 0xF0($a1)
    ctx->pc = 0x3334c8u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 240), GPR_VEC(ctx, 2));
    // 0x3334cc: 0x24030015  addiu       $v1, $zero, 0x15
    ctx->pc = 0x3334ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x3334d0: 0xdfa20050  ld          $v0, 0x50($sp)
    ctx->pc = 0x3334d0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3334d4: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x3334d4u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x3334d8: 0x7ca20100  sq          $v0, 0x100($a1)
    ctx->pc = 0x3334d8u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 256), GPR_VEC(ctx, 2));
    // 0x3334dc: 0x2402004f  addiu       $v0, $zero, 0x4F
    ctx->pc = 0x3334dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    // 0x3334e0: 0xdfa30060  ld          $v1, 0x60($sp)
    ctx->pc = 0x3334e0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3334e4: 0x70431389  pcpyld      $v0, $v0, $v1
    ctx->pc = 0x3334e4u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x3334e8: 0x7ca20110  sq          $v0, 0x110($a1)
    ctx->pc = 0x3334e8u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 272), GPR_VEC(ctx, 2));
    // 0x3334ec: 0x24a20120  addiu       $v0, $a1, 0x120
    ctx->pc = 0x3334ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 288));
    // 0x3334f0: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x3334f0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
    // 0x3334f4: 0x3c046c01  lui         $a0, 0x6C01
    ctx->pc = 0x3334f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)27649 << 16));
    // 0x3334f8: 0x348403fa  ori         $a0, $a0, 0x3FA
    ctx->pc = 0x3334f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1018);
    // 0x3334fc: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x3334fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x333500: 0x34840100  ori         $a0, $a0, 0x100
    ctx->pc = 0x333500u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)256);
    // 0x333504: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x333504u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x333508: 0x34840404  ori         $a0, $a0, 0x404
    ctx->pc = 0x333508u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1028);
    // 0x33350c: 0x70892389  pcpyld      $a0, $a0, $t1
    ctx->pc = 0x33350cu;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 9)));
    // 0x333510: 0x7ca40120  sq          $a0, 0x120($a1)
    ctx->pc = 0x333510u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 288), GPR_VEC(ctx, 4));
    // 0x333514: 0x24a50130  addiu       $a1, $a1, 0x130
    ctx->pc = 0x333514u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 304));
    // 0x333518: 0xaf85be20  sw          $a1, -0x41E0($gp)
    ctx->pc = 0x333518u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 5));
    // 0x33351c: 0x92620047  lbu         $v0, 0x47($s3)
    ctx->pc = 0x33351cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 71)));
    // 0x333520: 0x8f83bec4  lw          $v1, -0x413C($gp)
    ctx->pc = 0x333520u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950596)));
    // 0x333524: 0x384200ff  xori        $v0, $v0, 0xFF
    ctx->pc = 0x333524u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)255);
    // 0x333528: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x333528u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x33352c: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x33352cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x333530: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x333530u;
    {
        const bool branch_taken_0x333530 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x333534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333530u;
        // 0x333534: 0xaf82bec8  sw          $v0, -0x4138($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294950600), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333530) {
            ctx->pc = 0x333548u;
            goto label_333548;
        }
    }
    ctx->pc = 0x333538u;
    // 0x333538: 0xdf82ae80  ld          $v0, -0x5180($gp)
    ctx->pc = 0x333538u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946432)));
    // 0x33353c: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x33353cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x333540: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x333540u;
    {
        const bool branch_taken_0x333540 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x333544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333540u;
        // 0x333544: 0x431025  or          $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333540) {
            ctx->pc = 0x333554u;
            goto label_333554;
        }
    }
    ctx->pc = 0x333548u;
label_333548:
    // 0x333548: 0xdf82ae80  ld          $v0, -0x5180($gp)
    ctx->pc = 0x333548u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946432)));
    // 0x33354c: 0x2403ffbf  addiu       $v1, $zero, -0x41
    ctx->pc = 0x33354cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
    // 0x333550: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x333550u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_333554:
    // 0x333554: 0xff82ae80  sd          $v0, -0x5180($gp)
    ctx->pc = 0x333554u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294946432), GPR_U64(ctx, 2));
    // 0x333558: 0x92660029  lbu         $a2, 0x29($s3)
    ctx->pc = 0x333558u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 41)));
    // 0x33355c: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x33355cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x333560: 0x8f82ae80  lw          $v0, -0x5180($gp)
    ctx->pc = 0x333560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946432)));
    // 0x333564: 0x3c07fc00  lui         $a3, 0xFC00
    ctx->pc = 0x333564u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)64512 << 16));
    // 0x333568: 0x34e77fff  ori         $a3, $a3, 0x7FFF
    ctx->pc = 0x333568u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)32767);
    // 0x33356c: 0x73c38  dsll        $a3, $a3, 16
    ctx->pc = 0x33356cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
    // 0x333570: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x333570u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x333574: 0x73c38  dsll        $a3, $a3, 16
    ctx->pc = 0x333574u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
    // 0x333578: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x333578u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x33357c: 0xdc64d5d0  ld          $a0, -0x2A30($v1)
    ctx->pc = 0x33357cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 4294956496)));
    // 0x333580: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x333580u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x333584: 0x2463d5d0  addiu       $v1, $v1, -0x2A30
    ctx->pc = 0x333584u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956496));
    // 0x333588: 0x304207ff  andi        $v0, $v0, 0x7FF
    ctx->pc = 0x333588u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2047);
    // 0x33358c: 0x872024  and         $a0, $a0, $a3
    ctx->pc = 0x33358cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 7));
    // 0x333590: 0x213fc  dsll32      $v0, $v0, 15
    ctx->pc = 0x333590u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 15));
    // 0x333594: 0xdc650008  ld          $a1, 0x8($v1)
    ctx->pc = 0x333594u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x333598: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x333598u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x33359c: 0x70a42389  pcpyld      $a0, $a1, $a0
    ctx->pc = 0x33359cu;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x3335a0: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x3335a0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x3335a4: 0x8f86be20  lw          $a2, -0x41E0($gp)
    ctx->pc = 0x3335a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
    // 0x3335a8: 0x7cc40000  sq          $a0, 0x0($a2)
    ctx->pc = 0x3335a8u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 4));
    // 0x3335ac: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x3335acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x3335b0: 0xaf86be20  sw          $a2, -0x41E0($gp)
    ctx->pc = 0x3335b0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 6));
    // 0x3335b4: 0x3c026c01  lui         $v0, 0x6C01
    ctx->pc = 0x3335b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27649 << 16));
    // 0x3335b8: 0x344203fb  ori         $v0, $v0, 0x3FB
    ctx->pc = 0x3335b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1019);
    // 0x3335bc: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x3335bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x3335c0: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x3335c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x3335c4: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x3335c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x3335c8: 0x34420404  ori         $v0, $v0, 0x404
    ctx->pc = 0x3335c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1028);
    // 0x3335cc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3335ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3335d0: 0x70471389  pcpyld      $v0, $v0, $a3
    ctx->pc = 0x3335d0u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 7)));
    // 0x3335d4: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x3335d4u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x3335d8: 0x24c30010  addiu       $v1, $a2, 0x10
    ctx->pc = 0x3335d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x3335dc: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x3335dcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
    // 0x3335e0: 0xdf82ae80  ld          $v0, -0x5180($gp)
    ctx->pc = 0x3335e0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946432)));
    // 0x3335e4: 0xc7858054  lwc1        $f5, -0x7FAC($gp)
    ctx->pc = 0x3335e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x3335e8: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x3335e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x3335ec: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3335ECu;
    {
        const bool branch_taken_0x3335ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3335F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3335ECu;
        // 0x3335f0: 0x92620044  lbu         $v0, 0x44($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3335ec) {
            ctx->pc = 0x3335F8u;
            goto label_3335f8;
        }
    }
    ctx->pc = 0x3335F4u;
    // 0x3335f4: 0xc7858434  lwc1        $f5, -0x7BCC($gp)
    ctx->pc = 0x3335f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935604)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_3335f8:
    // 0x3335f8: 0x92630045  lbu         $v1, 0x45($s3)
    ctx->pc = 0x3335f8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 69)));
    // 0x3335fc: 0x92640046  lbu         $a0, 0x46($s3)
    ctx->pc = 0x3335fcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 70)));
    // 0x333600: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x333600u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x333604: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x333604u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x333608: 0x92650047  lbu         $a1, 0x47($s3)
    ctx->pc = 0x333608u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 71)));
    // 0x33360c: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x33360cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x333610: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x333610u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x333614: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x333614u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x333618: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x333618u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x33361c: 0xc7818434  lwc1        $f1, -0x7BCC($gp)
    ctx->pc = 0x33361cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935604)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x333620: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x333620u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x333624: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x333624u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x333628: 0x46010182  mul.s       $f6, $f0, $f1
    ctx->pc = 0x333628u;
    ctx->f[6] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x33362c: 0x460519c2  mul.s       $f7, $f3, $f5
    ctx->pc = 0x33362cu;
    ctx->f[7] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
    // 0x333630: 0x44023000  mfc1        $v0, $f6
    ctx->pc = 0x333630u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[6], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x333634: 0x44033800  mfc1        $v1, $f7
    ctx->pc = 0x333634u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[7], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x333638: 0x70021789  pexew       $v0, $v0
    ctx->pc = 0x333638u;
    SET_GPR_VEC(ctx, 2, PS2_PEXEW(GPR_VEC(ctx, 2)));
    // 0x33363c: 0x70031f89  pexew       $v1, $v1
    ctx->pc = 0x33363cu;
    SET_GPR_VEC(ctx, 3, PS2_PEXEW(GPR_VEC(ctx, 3)));
    // 0x333640: 0x46051182  mul.s       $f6, $f2, $f5
    ctx->pc = 0x333640u;
    ctx->f[6] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
    // 0x333644: 0x460521c2  mul.s       $f7, $f4, $f5
    ctx->pc = 0x333644u;
    ctx->f[7] = FPU_MUL_S(ctx->f[4], ctx->f[5]);
    // 0x333648: 0x44023000  mfc1        $v0, $f6
    ctx->pc = 0x333648u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[6], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x33364c: 0x44033800  mfc1        $v1, $f7
    ctx->pc = 0x33364cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[7], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x333650: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x333650u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x333654: 0x7cc20010  sq          $v0, 0x10($a2)
    ctx->pc = 0x333654u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 16), GPR_VEC(ctx, 2));
    // 0x333658: 0x24c30020  addiu       $v1, $a2, 0x20
    ctx->pc = 0x333658u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x33365c: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x33365cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
    // 0x333660: 0x3c026c01  lui         $v0, 0x6C01
    ctx->pc = 0x333660u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27649 << 16));
    // 0x333664: 0x344203fc  ori         $v0, $v0, 0x3FC
    ctx->pc = 0x333664u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1020);
    // 0x333668: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x333668u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x33366c: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x33366cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x333670: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x333670u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x333674: 0x34420404  ori         $v0, $v0, 0x404
    ctx->pc = 0x333674u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1028);
    // 0x333678: 0x70471389  pcpyld      $v0, $v0, $a3
    ctx->pc = 0x333678u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 7)));
    // 0x33367c: 0x7cc20020  sq          $v0, 0x20($a2)
    ctx->pc = 0x33367cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 32), GPR_VEC(ctx, 2));
    // 0x333680: 0x24c30030  addiu       $v1, $a2, 0x30
    ctx->pc = 0x333680u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 48));
    // 0x333684: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x333684u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
    // 0x333688: 0x8e62003c  lw          $v0, 0x3C($s3)
    ctx->pc = 0x333688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 60)));
    // 0x33368c: 0xc7848240  lwc1        $f4, -0x7DC0($gp)
    ctx->pc = 0x33368cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x333690: 0xc4430008  lwc1        $f3, 0x8($v0)
    ctx->pc = 0x333690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x333694: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x333694u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x333698: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x333698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33369c: 0xc660001c  lwc1        $f0, 0x1C($s3)
    ctx->pc = 0x33369cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3336a0: 0x46040942  mul.s       $f5, $f1, $f4
    ctx->pc = 0x3336a0u;
    ctx->f[5] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x3336a4: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x3336a4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x3336a8: 0x44032800  mfc1        $v1, $f5
    ctx->pc = 0x3336a8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[5], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x3336ac: 0x70021789  pexew       $v0, $v0
    ctx->pc = 0x3336acu;
    SET_GPR_VEC(ctx, 2, PS2_PEXEW(GPR_VEC(ctx, 2)));
    // 0x3336b0: 0x70031f89  pexew       $v1, $v1
    ctx->pc = 0x3336b0u;
    SET_GPR_VEC(ctx, 3, PS2_PEXEW(GPR_VEC(ctx, 3)));
    // 0x3336b4: 0x46041982  mul.s       $f6, $f3, $f4
    ctx->pc = 0x3336b4u;
    ctx->f[6] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x3336b8: 0x46041142  mul.s       $f5, $f2, $f4
    ctx->pc = 0x3336b8u;
    ctx->f[5] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x3336bc: 0x44023000  mfc1        $v0, $f6
    ctx->pc = 0x3336bcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[6], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x3336c0: 0x44032800  mfc1        $v1, $f5
    ctx->pc = 0x3336c0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[5], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x3336c4: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x3336c4u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x3336c8: 0x7cc20030  sq          $v0, 0x30($a2)
    ctx->pc = 0x3336c8u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 48), GPR_VEC(ctx, 2));
    // 0x3336cc: 0x24c30040  addiu       $v1, $a2, 0x40
    ctx->pc = 0x3336ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
    // 0x3336d0: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x3336d0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
    // 0x3336d4: 0x92620028  lbu         $v0, 0x28($s3)
    ctx->pc = 0x3336d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 40)));
    // 0x3336d8: 0x3c046c03  lui         $a0, 0x6C03
    ctx->pc = 0x3336d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)27651 << 16));
    // 0x3336dc: 0x348403fd  ori         $a0, $a0, 0x3FD
    ctx->pc = 0x3336dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1021);
    // 0x3336e0: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x3336e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x3336e4: 0x34840100  ori         $a0, $a0, 0x100
    ctx->pc = 0x3336e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)256);
    // 0x3336e8: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x3336e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x3336ec: 0x34840404  ori         $a0, $a0, 0x404
    ctx->pc = 0x3336ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1028);
    // 0x3336f0: 0x70871b89  pcpyld      $v1, $a0, $a3
    ctx->pc = 0x3336f0u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 7)));
    // 0x3336f4: 0x30470007  andi        $a3, $v0, 0x7
    ctx->pc = 0x3336f4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x3336f8: 0x7cc30040  sq          $v1, 0x40($a2)
    ctx->pc = 0x3336f8u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 64), GPR_VEC(ctx, 3));
    // 0x3336fc: 0x24c20050  addiu       $v0, $a2, 0x50
    ctx->pc = 0x3336fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 80));
    // 0x333700: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x333700u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
    // 0x333704: 0x8f83aee0  lw          $v1, -0x5120($gp)
    ctx->pc = 0x333704u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946528)));
    // 0x333708: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x333708u;
    {
        const bool branch_taken_0x333708 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x33370Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333708u;
        // 0x33370c: 0x30e20004  andi        $v0, $a3, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x333708) {
            ctx->pc = 0x333718u;
            goto label_333718;
        }
    }
    ctx->pc = 0x333710u;
    // 0x333710: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x333710u;
    {
        const bool branch_taken_0x333710 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x333710) {
            ctx->pc = 0x333714u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x333710u;
            // 0x333714: 0x34e70008  ori         $a3, $a3, 0x8 (Delay Slot)
            SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)8);
            ctx->in_delay_slot = false;
            ctx->pc = 0x333730u;
            goto label_333730;
        }
    }
    ctx->pc = 0x333718u;
label_333718:
    // 0x333718: 0x8f82aee4  lw          $v0, -0x511C($gp)
    ctx->pc = 0x333718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946532)));
    // 0x33371c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x33371Cu;
    {
        const bool branch_taken_0x33371c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x333720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33371Cu;
        // 0x333720: 0x30e20004  andi        $v0, $a3, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x33371c) {
            ctx->pc = 0x333758u;
            goto label_333758;
        }
    }
    ctx->pc = 0x333724u;
    // 0x333724: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x333724u;
    {
        const bool branch_taken_0x333724 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x333724) {
            ctx->pc = 0x333728u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x333724u;
            // 0x333728: 0x3c03005e  lui         $v1, 0x5E (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x333760u;
            goto label_333760;
        }
    }
    ctx->pc = 0x33372Cu;
    // 0x33372c: 0x34e70008  ori         $a3, $a3, 0x8
    ctx->pc = 0x33372cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)8);
label_333730:
    // 0x333730: 0x8f84be20  lw          $a0, -0x41E0($gp)
    ctx->pc = 0x333730u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
    // 0x333734: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x333734u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x333738: 0x2463d670  addiu       $v1, $v1, -0x2990
    ctx->pc = 0x333738u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956656));
    // 0x33373c: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x33373cu;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x5DD670u));
    // 0x333740: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x333740u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x333744: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x333744u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x333748: 0xaf84be20  sw          $a0, -0x41E0($gp)
    ctx->pc = 0x333748u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 4));
    // 0x33374c: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x33374cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x333750: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x333750u;
    {
        const bool branch_taken_0x333750 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x333754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333750u;
        // 0x333754: 0x2463d680  addiu       $v1, $v1, -0x2980 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956672));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333750) {
            ctx->pc = 0x333780u;
            goto label_333780;
        }
    }
    ctx->pc = 0x333758u;
label_333758:
    // 0x333758: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x333758u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x33375c: 0x0  nop
    ctx->pc = 0x33375cu;
    // NOP
label_333760:
    // 0x333760: 0x8f84be20  lw          $a0, -0x41E0($gp)
    ctx->pc = 0x333760u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
    // 0x333764: 0x2463d650  addiu       $v1, $v1, -0x29B0
    ctx->pc = 0x333764u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956624));
    // 0x333768: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x333768u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x33376c: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x33376cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x333770: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x333770u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x333774: 0xaf84be20  sw          $a0, -0x41E0($gp)
    ctx->pc = 0x333774u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 4));
    // 0x333778: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x333778u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x33377c: 0x2463d660  addiu       $v1, $v1, -0x29A0
    ctx->pc = 0x33377cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956640));
label_333780:
    // 0x333780: 0x24850010  addiu       $a1, $a0, 0x10
    ctx->pc = 0x333780u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x333784: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x333784u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x333788: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x333788u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x33378c: 0xaf85be20  sw          $a1, -0x41E0($gp)
    ctx->pc = 0x33378cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 5));
    // 0x333790: 0x8f83becc  lw          $v1, -0x4134($gp)
    ctx->pc = 0x333790u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950604)));
    // 0x333794: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x333794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x333798: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x333798u;
    {
        const bool branch_taken_0x333798 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x33379Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333798u;
        // 0x33379c: 0xaf80aed8  sw          $zero, -0x5128($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294946520), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333798) {
            ctx->pc = 0x3337A8u;
            goto label_3337a8;
        }
    }
    ctx->pc = 0x3337A0u;
    // 0x3337a0: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x3337a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x3337a4: 0xaf82aed8  sw          $v0, -0x5128($gp)
    ctx->pc = 0x3337a4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294946520), GPR_U32(ctx, 2));
label_3337a8:
    // 0x3337a8: 0x9f82aedc  lwu         $v0, -0x5124($gp)
    ctx->pc = 0x3337a8u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294946524)));
    // 0x3337ac: 0x7183c  dsll32      $v1, $a3, 0
    ctx->pc = 0x3337acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) << (32 + 0));
    // 0x3337b0: 0x9f84aed8  lwu         $a0, -0x5128($gp)
    ctx->pc = 0x3337b0u;
    SET_GPR_ZE32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294946520)));
    // 0x3337b4: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x3337b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x3337b8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3337b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3337bc: 0x442025  or          $a0, $v0, $a0
    ctx->pc = 0x3337bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x3337c0: 0x70831b89  pcpyld      $v1, $a0, $v1
    ctx->pc = 0x3337c0u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 3)));
    // 0x3337c4: 0x8f84be20  lw          $a0, -0x41E0($gp)
    ctx->pc = 0x3337c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
    // 0x3337c8: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x3337c8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x3337cc: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x3337ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x3337d0: 0xaf84be20  sw          $a0, -0x41E0($gp)
    ctx->pc = 0x3337d0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 4));
    // 0x3337d4: 0x8e620040  lw          $v0, 0x40($s3)
    ctx->pc = 0x3337d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
    // 0x3337d8: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x3337D8u;
    {
        const bool branch_taken_0x3337d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3337DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3337D8u;
        // 0x3337dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3337d8) {
            ctx->pc = 0x333858u;
            goto label_333858;
        }
    }
    ctx->pc = 0x3337E0u;
    // 0x3337e0: 0x3c035000  lui         $v1, 0x5000
    ctx->pc = 0x3337e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20480 << 16));
    // 0x3337e4: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x3337e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
    // 0x3337e8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x3337e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x3337ec: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x3337ecu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x3337f0: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x3337f0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x3337f4: 0x24820010  addiu       $v0, $a0, 0x10
    ctx->pc = 0x3337f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x3337f8: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x3337f8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
    // 0x3337fc: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x3337fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x333800: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x333800u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x333804: 0x34428003  ori         $v0, $v0, 0x8003
    ctx->pc = 0x333804u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32771);
    // 0x333808: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x333808u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x33380c: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x33380cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x333810: 0x7c820010  sq          $v0, 0x10($a0)
    ctx->pc = 0x333810u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 2));
    // 0x333814: 0x24820020  addiu       $v0, $a0, 0x20
    ctx->pc = 0x333814u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x333818: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x333818u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
    // 0x33381c: 0xdf82ae48  ld          $v0, -0x51B8($gp)
    ctx->pc = 0x33381cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946376)));
    // 0x333820: 0x24030047  addiu       $v1, $zero, 0x47
    ctx->pc = 0x333820u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x333824: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x333824u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x333828: 0x7c820020  sq          $v0, 0x20($a0)
    ctx->pc = 0x333828u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 2));
    // 0x33382c: 0x24820030  addiu       $v0, $a0, 0x30
    ctx->pc = 0x33382cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x333830: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x333830u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
    // 0x333834: 0xdf82ae68  ld          $v0, -0x5198($gp)
    ctx->pc = 0x333834u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946408)));
    // 0x333838: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x333838u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x33383c: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x33383cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x333840: 0x7c820030  sq          $v0, 0x30($a0)
    ctx->pc = 0x333840u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 2));
    // 0x333844: 0x24820040  addiu       $v0, $a0, 0x40
    ctx->pc = 0x333844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x333848: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x333848u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
    // 0x33384c: 0xdf82ae60  ld          $v0, -0x51A0($gp)
    ctx->pc = 0x33384cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946400)));
    // 0x333850: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x333850u;
    {
        const bool branch_taken_0x333850 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x333854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333850u;
        // 0x333854: 0x24030008  addiu       $v1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333850) {
            ctx->pc = 0x3338C0u;
            goto label_3338c0;
        }
    }
    ctx->pc = 0x333858u;
label_333858:
    // 0x333858: 0x700014a9  por         $v0, $zero, $zero
    ctx->pc = 0x333858u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x33385c: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x33385cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x333860: 0x24820010  addiu       $v0, $a0, 0x10
    ctx->pc = 0x333860u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x333864: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x333864u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
    // 0x333868: 0x70001ca9  por         $v1, $zero, $zero
    ctx->pc = 0x333868u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x33386c: 0x7c830010  sq          $v1, 0x10($a0)
    ctx->pc = 0x33386cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 3));
    // 0x333870: 0x24820020  addiu       $v0, $a0, 0x20
    ctx->pc = 0x333870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x333874: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x333874u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
    // 0x333878: 0x3c035000  lui         $v1, 0x5000
    ctx->pc = 0x333878u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20480 << 16));
    // 0x33387c: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x33387cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x333880: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x333880u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x333884: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x333884u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x333888: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x333888u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x33388c: 0x7c820020  sq          $v0, 0x20($a0)
    ctx->pc = 0x33388cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 2));
    // 0x333890: 0x24820030  addiu       $v0, $a0, 0x30
    ctx->pc = 0x333890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x333894: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x333894u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
    // 0x333898: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x333898u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x33389c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x33389cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3338a0: 0x34428001  ori         $v0, $v0, 0x8001
    ctx->pc = 0x3338a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32769);
    // 0x3338a4: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x3338a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x3338a8: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x3338a8u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x3338ac: 0x7c820030  sq          $v0, 0x30($a0)
    ctx->pc = 0x3338acu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 2));
    // 0x3338b0: 0x24820040  addiu       $v0, $a0, 0x40
    ctx->pc = 0x3338b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x3338b4: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x3338b4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
    // 0x3338b8: 0xdf82ae48  ld          $v0, -0x51B8($gp)
    ctx->pc = 0x3338b8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946376)));
    // 0x3338bc: 0x24030047  addiu       $v1, $zero, 0x47
    ctx->pc = 0x3338bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
label_3338c0:
    // 0x3338c0: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x3338c0u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x3338c4: 0x7c820040  sq          $v0, 0x40($a0)
    ctx->pc = 0x3338c4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 64), GPR_VEC(ctx, 2));
    // 0x3338c8: 0x24820050  addiu       $v0, $a0, 0x50
    ctx->pc = 0x3338c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
    // 0x3338cc: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x3338ccu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
    // 0x3338d0: 0x92630028  lbu         $v1, 0x28($s3)
    ctx->pc = 0x3338d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 40)));
    // 0x3338d4: 0x30640010  andi        $a0, $v1, 0x10
    ctx->pc = 0x3338d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x3338d8: 0x30620008  andi        $v0, $v1, 0x8
    ctx->pc = 0x3338d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x3338dc: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x3338dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x3338e0: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x3338e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x3338e4: 0x21082  srl         $v0, $v0, 2
    ctx->pc = 0x3338e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x3338e8: 0x31942  srl         $v1, $v1, 5
    ctx->pc = 0x3338e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 5));
    // 0x3338ec: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3338ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3338f0: 0xa262002b  sb          $v0, 0x2B($s3)
    ctx->pc = 0x3338f0u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 43), (uint8_t)GPR_U32(ctx, 2));
    // 0x3338f4: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x3338f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x3338f8: 0x8f85aed4  lw          $a1, -0x512C($gp)
    ctx->pc = 0x3338f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946516)));
    // 0x3338fc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3338fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x333900: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x333900u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x333904: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x333904u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x333908: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x333908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33390c: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x33390cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x333910: 0x10a6000b  beq         $a1, $a2, . + 4 + (0xB << 2)
    ctx->pc = 0x333910u;
    {
        const bool branch_taken_0x333910 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 6));
        ctx->pc = 0x333914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333910u;
        // 0x333914: 0x6203c  dsll32      $a0, $a2, 0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333910) {
            ctx->pc = 0x333940u;
            goto label_333940;
        }
    }
    ctx->pc = 0x333918u;
    // 0x333918: 0x3c035000  lui         $v1, 0x5000
    ctx->pc = 0x333918u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20480 << 16));
    // 0x33391c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x33391cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x333920: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x333920u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x333924: 0x70441389  pcpyld      $v0, $v0, $a0
    ctx->pc = 0x333924u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x333928: 0x8f83be20  lw          $v1, -0x41E0($gp)
    ctx->pc = 0x333928u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
    // 0x33392c: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x33392cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x333930: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x333930u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x333934: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x333934u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
    // 0x333938: 0xaf86aed4  sw          $a2, -0x512C($gp)
    ctx->pc = 0x333938u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294946516), GPR_U32(ctx, 6));
    // 0x33393c: 0x0  nop
    ctx->pc = 0x33393cu;
    // NOP
label_333940:
    // 0x333940: 0x8e620030  lw          $v0, 0x30($s3)
    ctx->pc = 0x333940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 48)));
    // 0x333944: 0x3c070200  lui         $a3, 0x200
    ctx->pc = 0x333944u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)512 << 16));
    // 0x333948: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x333948u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x33394c: 0x3c085000  lui         $t0, 0x5000
    ctx->pc = 0x33394cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)20480 << 16));
    // 0x333950: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x333950u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x333954: 0x3c060300  lui         $a2, 0x300
    ctx->pc = 0x333954u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)768 << 16));
    // 0x333958: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x333958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x33395c: 0x24a90018  addiu       $t1, $a1, 0x18
    ctx->pc = 0x33395cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), 24));
    // 0x333960: 0x9d240008  lwu         $a0, 0x8($t1)
    ctx->pc = 0x333960u;
    SET_GPR_ZE32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x333964: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x333964u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x333968: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x333968u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x33396c: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x33396cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x333970: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x333970u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x333974: 0x882025  or          $a0, $a0, $t0
    ctx->pc = 0x333974u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 8));
    // 0x333978: 0x70441389  pcpyld      $v0, $v0, $a0
    ctx->pc = 0x333978u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x33397c: 0x8f83be20  lw          $v1, -0x41E0($gp)
    ctx->pc = 0x33397cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
    // 0x333980: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x333980u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x333984: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x333984u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x333988: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x333988u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
    // 0x33398c: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x33398cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_333990:
    // 0x333990: 0x42000039  di
    ctx->pc = 0x333990u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x333994: 0x40f  sync.p
    ctx->pc = 0x333994u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x333998: 0x40036000  mfc0        $v1, Status
    ctx->pc = 0x333998u;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_status);
    // 0x33399c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x33399cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3339a0: 0x0  nop
    ctx->pc = 0x3339a0u;
    // NOP
    // 0x3339a4: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3339A4u;
    {
        const bool branch_taken_0x3339a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3339a4) {
            ctx->pc = 0x333990u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_333990;
        }
    }
    ctx->pc = 0x3339ACu;
    // 0x3339ac: 0x8ca30018  lw          $v1, 0x18($a1)
    ctx->pc = 0x3339acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x3339b0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3339b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3339b4: 0xaca30018  sw          $v1, 0x18($a1)
    ctx->pc = 0x3339b4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 3));
    // 0x3339b8: 0x42000038  ei
    ctx->pc = 0x3339b8u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x3339bc: 0x8d220004  lw          $v0, 0x4($t1)
    ctx->pc = 0x3339bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x3339c0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3339c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3339c4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3339c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3339c8: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3339C8u;
    {
        const bool branch_taken_0x3339c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3339CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3339C8u;
        // 0x3339cc: 0xad220004  sw          $v0, 0x4($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3339c8) {
            ctx->pc = 0x3339D8u;
            goto label_3339d8;
        }
    }
    ctx->pc = 0x3339D0u;
    // 0x3339d0: 0xc10a762  jal         func_429D88
    ctx->pc = 0x3339D0u;
    SET_GPR_U32(ctx, 31, 0x3339D8u);
    ctx->pc = 0x3339D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3339D0u;
    // 0x3339d4: 0x120202d  daddu       $a0, $t1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x429D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x429D88u, 0x3339D0u, 0x3339D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3339D8u;
label_3339d8:
    // 0x3339d8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3339d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3339dc: 0xc10a322  jal         func_428C88
    ctx->pc = 0x3339DCu;
    SET_GPR_U32(ctx, 31, 0x3339E4u);
    ctx->pc = 0x3339E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3339DCu;
    // 0x3339e0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x428C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x428C88u, 0x3339DCu, 0x3339E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3339E4u;
label_3339e4:
    // 0x3339e4: 0x3c035000  lui         $v1, 0x5000
    ctx->pc = 0x3339e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20480 << 16));
    // 0x3339e8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3339e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3339ec: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x3339ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x3339f0: 0x70621cc8  ppacw       $v1, $v1, $v0
    ctx->pc = 0x3339f0u;
    SET_GPR_VEC(ctx, 3, PS2_PPACW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x3339f4: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x3339f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x3339f8: 0x34840002  ori         $a0, $a0, 0x2
    ctx->pc = 0x3339f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)2);
    // 0x3339fc: 0x704414c8  ppacw       $v0, $v0, $a0
    ctx->pc = 0x3339fcu;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x333a00: 0x70621cc8  ppacw       $v1, $v1, $v0
    ctx->pc = 0x333a00u;
    SET_GPR_VEC(ctx, 3, PS2_PPACW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x333a04: 0x8f84be20  lw          $a0, -0x41E0($gp)
    ctx->pc = 0x333a04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
    // 0x333a08: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x333a08u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x333a0c: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x333a0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x333a10: 0xaf84be20  sw          $a0, -0x41E0($gp)
    ctx->pc = 0x333a10u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 4));
    // 0x333a14: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x333a14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x333a18: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x333a18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x333a1c: 0x34638001  ori         $v1, $v1, 0x8001
    ctx->pc = 0x333a1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32769);
    // 0x333a20: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x333a20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x333a24: 0x70431389  pcpyld      $v0, $v0, $v1
    ctx->pc = 0x333a24u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x333a28: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x333a28u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x333a2c: 0x24820010  addiu       $v0, $a0, 0x10
    ctx->pc = 0x333a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x333a30: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x333a30u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
    // 0x333a34: 0x2403003d  addiu       $v1, $zero, 0x3D
    ctx->pc = 0x333a34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
    // 0x333a38: 0xdf82ae58  ld          $v0, -0x51A8($gp)
    ctx->pc = 0x333a38u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946392)));
    // 0x333a3c: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x333a3cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x333a40: 0x7c820010  sq          $v0, 0x10($a0)
    ctx->pc = 0x333a40u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 2));
    // 0x333a44: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x333a44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x333a48: 0xaf84be20  sw          $a0, -0x41E0($gp)
    ctx->pc = 0x333a48u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 4));
    // 0x333a4c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x333a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x333a50: 0x7bb00100  lq          $s0, 0x100($sp)
    ctx->pc = 0x333a50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x333a54: 0x7bb100f0  lq          $s1, 0xF0($sp)
    ctx->pc = 0x333a54u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x333a58: 0x7bb200e0  lq          $s2, 0xE0($sp)
    ctx->pc = 0x333a58u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x333a5c: 0x7bb300d0  lq          $s3, 0xD0($sp)
    ctx->pc = 0x333a5cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x333a60: 0x7bb400c0  lq          $s4, 0xC0($sp)
    ctx->pc = 0x333a60u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x333a64: 0x7bb500b0  lq          $s5, 0xB0($sp)
    ctx->pc = 0x333a64u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x333a68: 0x7bb600a0  lq          $s6, 0xA0($sp)
    ctx->pc = 0x333a68u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x333a6c: 0x7bb70090  lq          $s7, 0x90($sp)
    ctx->pc = 0x333a6cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x333a70: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x333a70u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x333a74: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x333a74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x333a78: 0x3e00008  jr          $ra
    ctx->pc = 0x333A78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x333A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333A78u;
        // 0x333a7c: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x333A78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x333A80u;
    // 0x333a80: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x333a80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x333a84: 0x7fb200e0  sq          $s2, 0xE0($sp)
    ctx->pc = 0x333a84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 18));
    // 0x333a88: 0x7fb400c0  sq          $s4, 0xC0($sp)
    ctx->pc = 0x333a88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 20));
    // 0x333a8c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x333a8cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x333a90: 0x7fb00100  sq          $s0, 0x100($sp)
    ctx->pc = 0x333a90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 16));
    // 0x333a94: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x333a94u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x333a98: 0x7fb100f0  sq          $s1, 0xF0($sp)
    ctx->pc = 0x333a98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 17));
    // 0x333a9c: 0x7fb500b0  sq          $s5, 0xB0($sp)
    ctx->pc = 0x333a9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 21));
    // 0x333aa0: 0x7fb600a0  sq          $s6, 0xA0($sp)
    ctx->pc = 0x333aa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 22));
    // 0x333aa4: 0x7fb70090  sq          $s7, 0x90($sp)
    ctx->pc = 0x333aa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 23));
    // 0x333aa8: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x333aa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x333aac: 0x7fb300d0  sq          $s3, 0xD0($sp)
    ctx->pc = 0x333aacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 19));
    // 0x333ab0: 0x8e530008  lw          $s3, 0x8($s2)
    ctx->pc = 0x333ab0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x333ab4: 0x8e660018  lw          $a2, 0x18($s3)
    ctx->pc = 0x333ab4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x333ab8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x333ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x333abc: 0x8cc30054  lw          $v1, 0x54($a2)
    ctx->pc = 0x333abcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 84)));
    // 0x333ac0: 0x8cc40018  lw          $a0, 0x18($a2)
    ctx->pc = 0x333ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x333ac4: 0x1082000f  beq         $a0, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x333AC4u;
    {
        const bool branch_taken_0x333ac4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x333AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333AC4u;
        // 0x333ac8: 0xae43000c  sw          $v1, 0xC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333ac4) {
            ctx->pc = 0x333B04u;
            goto label_333b04;
        }
    }
    ctx->pc = 0x333ACCu;
    // 0x333acc: 0x8f82bd7c  lw          $v0, -0x4284($gp)
    ctx->pc = 0x333accu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950268)));
    // 0x333ad0: 0x8cc40054  lw          $a0, 0x54($a2)
    ctx->pc = 0x333ad0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 84)));
    // 0x333ad4: 0x2622821  addu        $a1, $s3, $v0
    ctx->pc = 0x333ad4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x333ad8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x333ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x333adc: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x333ADCu;
    {
        const bool branch_taken_0x333adc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x333AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333ADCu;
        // 0x333ae0: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333adc) {
            ctx->pc = 0x333AF8u;
            goto label_333af8;
        }
    }
    ctx->pc = 0x333AE4u;
    // 0x333ae4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x333ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x333ae8: 0x94820004  lhu         $v0, 0x4($a0)
    ctx->pc = 0x333ae8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x333aec: 0x10620015  beq         $v1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x333AECu;
    {
        const bool branch_taken_0x333aec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x333AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333AECu;
        // 0x333af0: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333aec) {
            ctx->pc = 0x333B44u;
            goto label_333b44;
        }
    }
    ctx->pc = 0x333AF4u;
    // 0x333af4: 0x0  nop
    ctx->pc = 0x333af4u;
    // NOP
label_333af8:
    // 0x333af8: 0x94850004  lhu         $a1, 0x4($a0)
    ctx->pc = 0x333af8u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x333afc: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x333AFCu;
    {
        const bool branch_taken_0x333afc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x333B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333AFCu;
        // 0x333b00: 0x2662021  addu        $a0, $s3, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333afc) {
            ctx->pc = 0x333B3Cu;
            goto label_333b3c;
        }
    }
    ctx->pc = 0x333B04u;
label_333b04:
    // 0x333b04: 0x8f82bd78  lw          $v0, -0x4288($gp)
    ctx->pc = 0x333b04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950264)));
    // 0x333b08: 0x8cc40054  lw          $a0, 0x54($a2)
    ctx->pc = 0x333b08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 84)));
    // 0x333b0c: 0xc22821  addu        $a1, $a2, $v0
    ctx->pc = 0x333b0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x333b10: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x333b10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x333b14: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x333B14u;
    {
        const bool branch_taken_0x333b14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x333B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333B14u;
        // 0x333b18: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333b14) {
            ctx->pc = 0x333B34u;
            goto label_333b34;
        }
    }
    ctx->pc = 0x333B1Cu;
    // 0x333b1c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x333b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x333b20: 0x94820004  lhu         $v0, 0x4($a0)
    ctx->pc = 0x333b20u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x333b24: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x333B24u;
    {
        const bool branch_taken_0x333b24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x333b24) {
            ctx->pc = 0x333B28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x333B24u;
            // 0x333b28: 0x94850004  lhu         $a1, 0x4($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x333B38u;
            goto label_333b38;
        }
    }
    ctx->pc = 0x333B2Cu;
    // 0x333b2c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x333B2Cu;
    {
        const bool branch_taken_0x333b2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x333B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333B2Cu;
        // 0x333b30: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333b2c) {
            ctx->pc = 0x333B44u;
            goto label_333b44;
        }
    }
    ctx->pc = 0x333B34u;
label_333b34:
    // 0x333b34: 0x94850004  lhu         $a1, 0x4($a0)
    ctx->pc = 0x333b34u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_333b38:
    // 0x333b38: 0xc72021  addu        $a0, $a2, $a3
    ctx->pc = 0x333b38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_333b3c:
    // 0x333b3c: 0xc0e7eec  jal         func_39FBB0
    ctx->pc = 0x333B3Cu;
    SET_GPR_U32(ctx, 31, 0x333B44u);
    ctx->pc = 0x39FBB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39FBB0u, 0x333B3Cu, 0x333B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333B44u;
label_333b44:
    // 0x333b44: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x333b44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x333b48: 0xae420010  sw          $v0, 0x10($s2)
    ctx->pc = 0x333b48u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
    // 0x333b4c: 0x8e620018  lw          $v0, 0x18($s3)
    ctx->pc = 0x333b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x333b50: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x333b50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x333b54: 0x28640002  slti        $a0, $v1, 0x2
    ctx->pc = 0x333b54u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x333b58: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x333B58u;
    {
        const bool branch_taken_0x333b58 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x333B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333B58u;
        // 0x333b5c: 0xae430020  sw          $v1, 0x20($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333b58) {
            ctx->pc = 0x333B78u;
            goto label_333b78;
        }
    }
    ctx->pc = 0x333B60u;
    // 0x333b60: 0x2662004c  addiu       $v0, $s3, 0x4C
    ctx->pc = 0x333b60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 76));
    // 0x333b64: 0xc4410010  lwc1        $f1, 0x10($v0)
    ctx->pc = 0x333b64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x333b68: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x333b68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x333b6c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x333b6cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x333b70: 0xe640001c  swc1        $f0, 0x1C($s2)
    ctx->pc = 0x333b70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 28), bits); }
    // 0x333b74: 0x0  nop
    ctx->pc = 0x333b74u;
    // NOP
label_333b78:
    // 0x333b78: 0x8e680018  lw          $t0, 0x18($s3)
    ctx->pc = 0x333b78u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x333b7c: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x333b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x333b80: 0x8d020008  lw          $v0, 0x8($t0)
    ctx->pc = 0x333b80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x333b84: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x333b84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x333b88: 0x54400041  bnel        $v0, $zero, . + 4 + (0x41 << 2)
    ctx->pc = 0x333B88u;
    {
        const bool branch_taken_0x333b88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x333b88) {
            ctx->pc = 0x333B8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x333B88u;
            // 0x333b8c: 0x8e62004c  lw          $v0, 0x4C($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 76)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x333C90u;
            goto label_333c90;
        }
    }
    ctx->pc = 0x333B90u;
    // 0x333b90: 0x8e46000c  lw          $a2, 0xC($s2)
    ctx->pc = 0x333b90u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x333b94: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x333b94u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x333b98: 0x91030008  lbu         $v1, 0x8($t0)
    ctx->pc = 0x333b98u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x333b9c: 0x34a5fffe  ori         $a1, $a1, 0xFFFE
    ctx->pc = 0x333b9cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65534);
    // 0x333ba0: 0x94c20006  lhu         $v0, 0x6($a2)
    ctx->pc = 0x333ba0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
    // 0x333ba4: 0x91040018  lbu         $a0, 0x18($t0)
    ctx->pc = 0x333ba4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 24)));
    // 0x333ba8: 0x3063009f  andi        $v1, $v1, 0x9F
    ctx->pc = 0x333ba8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)159);
    // 0x333bac: 0x8e460014  lw          $a2, 0x14($s2)
    ctx->pc = 0x333bacu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x333bb0: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x333bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x333bb4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x333bb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x333bb8: 0x42600  sll         $a0, $a0, 24
    ctx->pc = 0x333bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
    // 0x333bbc: 0xc53024  and         $a2, $a2, $a1
    ctx->pc = 0x333bbcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
    // 0x333bc0: 0x8e470010  lw          $a3, 0x10($s2)
    ctx->pc = 0x333bc0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x333bc4: 0x442825  or          $a1, $v0, $a0
    ctx->pc = 0x333bc4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x333bc8: 0xae460014  sw          $a2, 0x14($s2)
    ctx->pc = 0x333bc8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 6));
    // 0x333bcc: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x333bccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x333bd0: 0x1040002d  beqz        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x333BD0u;
    {
        const bool branch_taken_0x333bd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x333BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333BD0u;
        // 0x333bd4: 0xae450018  sw          $a1, 0x18($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333bd0) {
            ctx->pc = 0x333C88u;
            goto label_333c88;
        }
    }
    ctx->pc = 0x333BD8u;
    // 0x333bd8: 0x24490018  addiu       $t1, $v0, 0x18
    ctx->pc = 0x333bd8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x333bdc: 0x8d240010  lw          $a0, 0x10($t1)
    ctx->pc = 0x333bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 16)));
    // 0x333be0: 0x10a4000e  beq         $a1, $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x333BE0u;
    {
        const bool branch_taken_0x333be0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x333BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333BE0u;
        // 0x333be4: 0x2667004c  addiu       $a3, $s3, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 76));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333be0) {
            ctx->pc = 0x333C1Cu;
            goto label_333c1c;
        }
    }
    ctx->pc = 0x333BE8u;
    // 0x333be8: 0x51c02  srl         $v1, $a1, 16
    ctx->pc = 0x333be8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 16));
    // 0x333bec: 0x41402  srl         $v0, $a0, 16
    ctx->pc = 0x333becu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
    // 0x333bf0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x333bf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x333bf4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x333bf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x333bf8: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x333BF8u;
    {
        const bool branch_taken_0x333bf8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x333BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333BF8u;
        // 0x333bfc: 0x34c20008  ori         $v0, $a2, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x333bf8) {
            ctx->pc = 0x333C18u;
            goto label_333c18;
        }
    }
    ctx->pc = 0x333C00u;
    // 0x333c00: 0x51e02  srl         $v1, $a1, 24
    ctx->pc = 0x333c00u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 24));
    // 0x333c04: 0x41602  srl         $v0, $a0, 24
    ctx->pc = 0x333c04u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 24));
    // 0x333c08: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x333C08u;
    {
        const bool branch_taken_0x333c08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x333C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333C08u;
        // 0x333c0c: 0x34c20008  ori         $v0, $a2, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x333c08) {
            ctx->pc = 0x333C18u;
            goto label_333c18;
        }
    }
    ctx->pc = 0x333C10u;
    // 0x333c10: 0x34c20004  ori         $v0, $a2, 0x4
    ctx->pc = 0x333c10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)4);
    // 0x333c14: 0x0  nop
    ctx->pc = 0x333c14u;
    // NOP
label_333c18:
    // 0x333c18: 0xae420014  sw          $v0, 0x14($s2)
    ctx->pc = 0x333c18u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 2));
label_333c1c:
    // 0x333c1c: 0x9502000c  lhu         $v0, 0xC($t0)
    ctx->pc = 0x333c1cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 12)));
    // 0x333c20: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x333C20u;
    {
        const bool branch_taken_0x333c20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x333C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333C20u;
        // 0x333c24: 0x30420001  andi        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x333c20) {
            ctx->pc = 0x333C4Cu;
            goto label_333c4c;
        }
    }
    ctx->pc = 0x333C28u;
    // 0x333c28: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x333C28u;
    {
        const bool branch_taken_0x333c28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x333C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333C28u;
        // 0x333c2c: 0x8e420014  lw          $v0, 0x14($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333c28) {
            ctx->pc = 0x333C38u;
            goto label_333c38;
        }
    }
    ctx->pc = 0x333C30u;
    // 0x333c30: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x333C30u;
    {
        const bool branch_taken_0x333c30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x333C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333C30u;
        // 0x333c34: 0x34420008  ori         $v0, $v0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x333c30) {
            ctx->pc = 0x333C48u;
            goto label_333c48;
        }
    }
    ctx->pc = 0x333C38u;
label_333c38:
    // 0x333c38: 0x9503000c  lhu         $v1, 0xC($t0)
    ctx->pc = 0x333c38u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 12)));
    // 0x333c3c: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x333c3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x333c40: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x333c40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x333c44: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x333c44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_333c48:
    // 0x333c48: 0xae420014  sw          $v0, 0x14($s2)
    ctx->pc = 0x333c48u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 2));
label_333c4c:
    // 0x333c4c: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x333c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x333c50: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x333c50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x333c54: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x333C54u;
    {
        const bool branch_taken_0x333c54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x333c54) {
            ctx->pc = 0x333C58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x333C54u;
            // 0x333c58: 0x8e62004c  lw          $v0, 0x4C($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 76)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x333C90u;
            goto label_333c90;
        }
    }
    ctx->pc = 0x333C5Cu;
    // 0x333c5c: 0x84e30006  lh          $v1, 0x6($a3)
    ctx->pc = 0x333c5cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 6)));
    // 0x333c60: 0x8d220028  lw          $v0, 0x28($t1)
    ctx->pc = 0x333c60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 40)));
    // 0x333c64: 0x54430006  bnel        $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x333C64u;
    {
        const bool branch_taken_0x333c64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x333c64) {
            ctx->pc = 0x333C68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x333C64u;
            // 0x333c68: 0x8e420014  lw          $v0, 0x14($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x333C80u;
            goto label_333c80;
        }
    }
    ctx->pc = 0x333C6Cu;
    // 0x333c6c: 0x84e30004  lh          $v1, 0x4($a3)
    ctx->pc = 0x333c6cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x333c70: 0x8d220024  lw          $v0, 0x24($t1)
    ctx->pc = 0x333c70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 36)));
    // 0x333c74: 0x50430006  beql        $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x333C74u;
    {
        const bool branch_taken_0x333c74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x333c74) {
            ctx->pc = 0x333C78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x333C74u;
            // 0x333c78: 0x8e62004c  lw          $v0, 0x4C($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 76)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x333C90u;
            goto label_333c90;
        }
    }
    ctx->pc = 0x333C7Cu;
    // 0x333c7c: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x333c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_333c80:
    // 0x333c80: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x333c80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x333c84: 0xae420014  sw          $v0, 0x14($s2)
    ctx->pc = 0x333c84u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 2));
label_333c88:
    // 0x333c88: 0x8e62004c  lw          $v0, 0x4C($s3)
    ctx->pc = 0x333c88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 76)));
    // 0x333c8c: 0x0  nop
    ctx->pc = 0x333c8cu;
    // NOP
label_333c90:
    // 0x333c90: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x333c90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x333c94: 0x8e640018  lw          $a0, 0x18($s3)
    ctx->pc = 0x333c94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x333c98: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x333c98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x333c9c: 0xa480000c  sh          $zero, 0xC($a0)
    ctx->pc = 0x333c9cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 12), (uint16_t)GPR_U32(ctx, 0));
    // 0x333ca0: 0xae62004c  sw          $v0, 0x4C($s3)
    ctx->pc = 0x333ca0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 76), GPR_U32(ctx, 2));
    // 0x333ca4: 0x3c110062  lui         $s1, 0x62
    ctx->pc = 0x333ca4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)98 << 16));
    // 0x333ca8: 0x8e30e880  lw          $s0, -0x1780($s1)
    ctx->pc = 0x333ca8u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x61E880u));
    // 0x333cac: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x333cacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x333cb0: 0xc106784  jal         func_419E10
    ctx->pc = 0x333CB0u;
    SET_GPR_U32(ctx, 31, 0x333CB8u);
    ctx->pc = 0x333CB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333CB0u;
    // 0x333cb4: 0x26100020  addiu       $s0, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x419E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419E10u, 0x333CB0u, 0x333CB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333CB8u;
label_333cb8:
    // 0x333cb8: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x333cb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x333cbc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x333cbcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x333cc0: 0xc103dd4  jal         func_40F750
    ctx->pc = 0x333CC0u;
    SET_GPR_U32(ctx, 31, 0x333CC8u);
    ctx->pc = 0x333CC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333CC0u;
    // 0x333cc4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40F750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40F750u, 0x333CC0u, 0x333CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333CC8u;
label_333cc8:
    // 0x333cc8: 0x27b00070  addiu       $s0, $sp, 0x70
    ctx->pc = 0x333cc8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x333ccc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x333cccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x333cd0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x333cd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x333cd4: 0xc0e2048  jal         func_388120
    ctx->pc = 0x333CD4u;
    SET_GPR_U32(ctx, 31, 0x333CDCu);
    ctx->pc = 0x333CD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333CD4u;
    // 0x333cd8: 0xafa20070  sw          $v0, 0x70($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x388120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x388120u, 0x333CD4u, 0x333CDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333CDCu;
label_333cdc:
    // 0x333cdc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x333cdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x333ce0: 0x8f83bebc  lw          $v1, -0x4144($gp)
    ctx->pc = 0x333ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950588)));
    // 0x333ce4: 0x8e22e880  lw          $v0, -0x1780($s1)
    ctx->pc = 0x333ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294961280)));
    // 0x333ce8: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x333ce8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x333cec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x333cecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x333cf0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x333CF0u;
    {
        const bool branch_taken_0x333cf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x333CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333CF0u;
        // 0x333cf4: 0x24430060  addiu       $v1, $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333cf0) {
            ctx->pc = 0x333CFCu;
            goto label_333cfc;
        }
    }
    ctx->pc = 0x333CF8u;
label_333cf8:
    // 0x333cf8: 0x24630014  addiu       $v1, $v1, 0x14
    ctx->pc = 0x333cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
label_333cfc:
    // 0x333cfc: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x333cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x333d00: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x333d00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x333d04: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x333d04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x333d08: 0x10a20016  beq         $a1, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x333D08u;
    {
        const bool branch_taken_0x333d08 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x333D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333D08u;
        // 0x333d0c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333d08) {
            ctx->pc = 0x333D64u;
            goto label_333d64;
        }
    }
    ctx->pc = 0x333D10u;
    // 0x333d10: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x333d10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x333d14: 0xc4650004  lwc1        $f5, 0x4($v1)
    ctx->pc = 0x333d14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x333d18: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x333d18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x333d1c: 0xc4840004  lwc1        $f4, 0x4($a0)
    ctx->pc = 0x333d1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x333d20: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x333d20u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x333d24: 0xc4830008  lwc1        $f3, 0x8($a0)
    ctx->pc = 0x333d24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x333d28: 0x46052102  mul.s       $f4, $f4, $f5
    ctx->pc = 0x333d28u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[5]);
    // 0x333d2c: 0xc4620008  lwc1        $f2, 0x8($v1)
    ctx->pc = 0x333d2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x333d30: 0xc465000c  lwc1        $f5, 0xC($v1)
    ctx->pc = 0x333d30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x333d34: 0x460218c2  mul.s       $f3, $f3, $f2
    ctx->pc = 0x333d34u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x333d38: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x333d38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x333d3c: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x333d3cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x333d40: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x333d40u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x333d44: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x333d44u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x333d48: 0x46050001  sub.s       $f0, $f0, $f5
    ctx->pc = 0x333d48u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
    // 0x333d4c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x333d4cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x333d50: 0x0  nop
    ctx->pc = 0x333d50u;
    // NOP
    // 0x333d54: 0x4500ffe8  bc1f        . + 4 + (-0x18 << 2)
    ctx->pc = 0x333D54u;
    {
        const bool branch_taken_0x333d54 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x333D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333D54u;
        // 0x333d58: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333d54) {
            ctx->pc = 0x333CF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_333cf8;
        }
    }
    ctx->pc = 0x333D5Cu;
    // 0x333d5c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x333d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x333d60: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x333d60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_333d64:
    // 0x333d64: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x333d64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x333d68: 0xa2420029  sb          $v0, 0x29($s2)
    ctx->pc = 0x333d68u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 41), (uint8_t)GPR_U32(ctx, 2));
    // 0x333d6c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x333d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x333d70: 0x9382aed0  lbu         $v0, -0x5130($gp)
    ctx->pc = 0x333d70u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294946512)));
    // 0x333d74: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x333D74u;
    {
        const bool branch_taken_0x333d74 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x333D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333D74u;
        // 0x333d78: 0xa2420028  sb          $v0, 0x28($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 40), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333d74) {
            ctx->pc = 0x333D84u;
            goto label_333d84;
        }
    }
    ctx->pc = 0x333D7Cu;
    // 0x333d7c: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x333d7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x333d80: 0xa2420028  sb          $v0, 0x28($s2)
    ctx->pc = 0x333d80u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 40), (uint8_t)GPR_U32(ctx, 2));
label_333d84:
    // 0x333d84: 0x8e630018  lw          $v1, 0x18($s3)
    ctx->pc = 0x333d84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x333d88: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x333d88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x333d8c: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x333d8cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
    // 0x333d90: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x333d90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x333d94: 0xa242002a  sb          $v0, 0x2A($s2)
    ctx->pc = 0x333d94u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 42), (uint8_t)GPR_U32(ctx, 2));
    // 0x333d98: 0x8e540008  lw          $s4, 0x8($s2)
    ctx->pc = 0x333d98u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x333d9c: 0x8e920018  lw          $s2, 0x18($s4)
    ctx->pc = 0x333d9cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x333da0: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x333da0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x333da4: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x333da4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x333da8: 0x10400072  beqz        $v0, . + 4 + (0x72 << 2)
    ctx->pc = 0x333DA8u;
    {
        const bool branch_taken_0x333da8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x333DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333DA8u;
        // 0x333dac: 0x2623e880  addiu       $v1, $s1, -0x1780 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294961280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333da8) {
            ctx->pc = 0x333F74u;
            goto label_333f74;
        }
    }
    ctx->pc = 0x333DB0u;
    // 0x333db0: 0x8e840004  lw          $a0, 0x4($s4)
    ctx->pc = 0x333db0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x333db4: 0x9462000a  lhu         $v0, 0xA($v1)
    ctx->pc = 0x333db4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 10)));
    // 0x333db8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x333db8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x333dbc: 0xc106784  jal         func_419E10
    ctx->pc = 0x333DBCu;
    SET_GPR_U32(ctx, 31, 0x333DC4u);
    ctx->pc = 0x333DC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333DBCu;
    // 0x333dc0: 0xa462000a  sh          $v0, 0xA($v1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 3), 10), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x419E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419E10u, 0x333DBCu, 0x333DC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333DC4u;
label_333dc4:
    // 0x333dc4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x333dc4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x333dc8: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x333dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x333dcc: 0xc103c28  jal         func_40F0A0
    ctx->pc = 0x333DCCu;
    SET_GPR_U32(ctx, 31, 0x333DD4u);
    ctx->pc = 0x333DD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333DCCu;
    // 0x333dd0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40F0A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40F0A0u, 0x333DCCu, 0x333DD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333DD4u;
label_333dd4:
    // 0x333dd4: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x333dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x333dd8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x333dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x333ddc: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x333ddcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x333de0: 0x1462000c  bne         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x333DE0u;
    {
        const bool branch_taken_0x333de0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x333DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333DE0u;
        // 0x333de4: 0xc7a00030  lwc1        $f0, 0x30($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x333de0) {
            ctx->pc = 0x333E14u;
            goto label_333e14;
        }
    }
    ctx->pc = 0x333DE8u;
    // 0x333de8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x333de8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x333dec: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x333decu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x333df0: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x333df0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x333df4: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x333DF4u;
    {
        const bool branch_taken_0x333df4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x333DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333DF4u;
        // 0x333df8: 0xe7a00050  swc1        $f0, 0x50($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x333df4) {
            ctx->pc = 0x333E50u;
            goto label_333e50;
        }
    }
    ctx->pc = 0x333DFCu;
    // 0x333dfc: 0x0  nop
    ctx->pc = 0x333dfcu;
    // NOP
label_333e00:
    // 0x333e00: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x333e00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x333e04: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x333e04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x333e08: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x333e08u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x333e0c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x333E0Cu;
    {
        const bool branch_taken_0x333e0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x333E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333E0Cu;
        // 0x333e10: 0xe7a00054  swc1        $f0, 0x54($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x333e0c) {
            ctx->pc = 0x333E50u;
            goto label_333e50;
        }
    }
    ctx->pc = 0x333E14u;
label_333e14:
    // 0x333e14: 0xc7a20034  lwc1        $f2, 0x34($sp)
    ctx->pc = 0x333e14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x333e18: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x333e18u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x333e1c: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x333e1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x333e20: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x333e20u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x333e24: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x333e24u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x333e28: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x333e28u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x333e2c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x333e2cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x333e30: 0x46000084  c1          0x84
    ctx->pc = 0x333e30u;
    ctx->f[2] = FPU_SQRT_S(ctx->f[0]);
    // 0x333e34: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x333e34u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x333e38: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x333e38u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x333e3c: 0x0  nop
    ctx->pc = 0x333e3cu;
    // NOP
    // 0x333e40: 0x4501ffef  bc1t        . + 4 + (-0x11 << 2)
    ctx->pc = 0x333E40u;
    {
        const bool branch_taken_0x333e40 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x333E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333E40u;
        // 0x333e44: 0xe7a20050  swc1        $f2, 0x50($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x333e40) {
            ctx->pc = 0x333E00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_333e00;
        }
    }
    ctx->pc = 0x333E48u;
    // 0x333e48: 0xe7a20054  swc1        $f2, 0x54($sp)
    ctx->pc = 0x333e48u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x333e4c: 0x0  nop
    ctx->pc = 0x333e4cu;
    // NOP
label_333e50:
    // 0x333e50: 0x8e460054  lw          $a2, 0x54($s2)
    ctx->pc = 0x333e50u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
    // 0x333e54: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x333e54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x333e58: 0x24843b60  addiu       $a0, $a0, 0x3B60
    ctx->pc = 0x333e58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15200));
    // 0x333e5c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x333e5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x333e60: 0x8cc3000c  lw          $v1, 0xC($a2)
    ctx->pc = 0x333e60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x333e64: 0x26950064  addiu       $s5, $s4, 0x64
    ctx->pc = 0x333e64u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 20), 100));
    // 0x333e68: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x333e68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x333e6c: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x333e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x333e70: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x333e70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x333e74: 0xc0e67d6  jal         func_399F58
    ctx->pc = 0x333E74u;
    SET_GPR_U32(ctx, 31, 0x333E7Cu);
    ctx->pc = 0x333E78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333E74u;
    // 0x333e78: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x399F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x399F58u, 0x333E74u, 0x333E7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333E7Cu;
label_333e7c:
    // 0x333e7c: 0x8e920064  lw          $s2, 0x64($s4)
    ctx->pc = 0x333e7cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 100)));
    // 0x333e80: 0x1255003c  beq         $s2, $s5, . + 4 + (0x3C << 2)
    ctx->pc = 0x333E80u;
    {
        const bool branch_taken_0x333e80 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 21));
        ctx->pc = 0x333E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333E80u;
        // 0x333e84: 0x3c170062  lui         $s7, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333e80) {
            ctx->pc = 0x333F74u;
            goto label_333f74;
        }
    }
    ctx->pc = 0x333E88u;
    // 0x333e88: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x333e88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x333e8c: 0x0  nop
    ctx->pc = 0x333e8cu;
    // NOP
label_333e90:
    // 0x333e90: 0x8c510040  lw          $s1, 0x40($v0)
    ctx->pc = 0x333e90u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x333e94: 0x24530040  addiu       $s3, $v0, 0x40
    ctx->pc = 0x333e94u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x333e98: 0x52330034  beql        $s1, $s3, . + 4 + (0x34 << 2)
    ctx->pc = 0x333E98u;
    {
        const bool branch_taken_0x333e98 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 19));
        if (branch_taken_0x333e98) {
            ctx->pc = 0x333E9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x333E98u;
            // 0x333e9c: 0x8e520000  lw          $s2, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x333F6Cu;
            goto label_333f6c;
        }
    }
    ctx->pc = 0x333EA0u;
    // 0x333ea0: 0x26f6e880  addiu       $s6, $s7, -0x1780
    ctx->pc = 0x333ea0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 23), 4294961280));
    // 0x333ea4: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x333ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_333ea8:
    // 0x333ea8: 0x5060002d  beql        $v1, $zero, . + 4 + (0x2D << 2)
    ctx->pc = 0x333EA8u;
    {
        const bool branch_taken_0x333ea8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x333ea8) {
            ctx->pc = 0x333EACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x333EA8u;
            // 0x333eac: 0x8e310000  lw          $s1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x333F60u;
            goto label_333f60;
        }
    }
    ctx->pc = 0x333EB0u;
    // 0x333eb0: 0x96c5000a  lhu         $a1, 0xA($s6)
    ctx->pc = 0x333eb0u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 10)));
    // 0x333eb4: 0x9462003c  lhu         $v0, 0x3C($v1)
    ctx->pc = 0x333eb4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 60)));
    // 0x333eb8: 0x50450029  beql        $v0, $a1, . + 4 + (0x29 << 2)
    ctx->pc = 0x333EB8u;
    {
        const bool branch_taken_0x333eb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x333eb8) {
            ctx->pc = 0x333EBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x333EB8u;
            // 0x333ebc: 0x8e310000  lw          $s1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x333F60u;
            goto label_333f60;
        }
    }
    ctx->pc = 0x333EC0u;
    // 0x333ec0: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x333ec0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x333ec4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x333ec4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x333ec8: 0x50400025  beql        $v0, $zero, . + 4 + (0x25 << 2)
    ctx->pc = 0x333EC8u;
    {
        const bool branch_taken_0x333ec8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x333ec8) {
            ctx->pc = 0x333ECCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x333EC8u;
            // 0x333ecc: 0x8e310000  lw          $s1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x333F60u;
            goto label_333f60;
        }
    }
    ctx->pc = 0x333ED0u;
    // 0x333ed0: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x333ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x333ed4: 0xc106784  jal         func_419E10
    ctx->pc = 0x333ED4u;
    SET_GPR_U32(ctx, 31, 0x333EDCu);
    ctx->pc = 0x333ED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333ED4u;
    // 0x333ed8: 0xa465003c  sh          $a1, 0x3C($v1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 3), 60), (uint16_t)GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x419E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419E10u, 0x333ED4u, 0x333EDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333EDCu;
label_333edc:
    // 0x333edc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x333edcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x333ee0: 0xc0e2048  jal         func_388120
    ctx->pc = 0x333EE0u;
    SET_GPR_U32(ctx, 31, 0x333EE8u);
    ctx->pc = 0x333EE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333EE0u;
    // 0x333ee4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x388120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x388120u, 0x333EE0u, 0x333EE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333EE8u;
label_333ee8:
    // 0x333ee8: 0x26030030  addiu       $v1, $s0, 0x30
    ctx->pc = 0x333ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x333eec: 0xc4440000  lwc1        $f4, 0x0($v0)
    ctx->pc = 0x333eecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x333ef0: 0xc6000030  lwc1        $f0, 0x30($s0)
    ctx->pc = 0x333ef0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x333ef4: 0x46002101  sub.s       $f4, $f4, $f0
    ctx->pc = 0x333ef4u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
    // 0x333ef8: 0xe7a40060  swc1        $f4, 0x60($sp)
    ctx->pc = 0x333ef8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x333efc: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x333efcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x333f00: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x333f00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x333f04: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x333f04u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x333f08: 0xe7a20064  swc1        $f2, 0x64($sp)
    ctx->pc = 0x333f08u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x333f0c: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x333f0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x333f10: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x333f10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x333f14: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x333f14u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x333f18: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x333f18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x333f1c: 0x46042102  mul.s       $f4, $f4, $f4
    ctx->pc = 0x333f1cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
    // 0x333f20: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x333f20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x333f24: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x333f24u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x333f28: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x333f28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x333f2c: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x333f2cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x333f30: 0xc4830014  lwc1        $f3, 0x14($a0)
    ctx->pc = 0x333f30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x333f34: 0x46022100  add.s       $f4, $f4, $f2
    ctx->pc = 0x333f34u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[2]);
    // 0x333f38: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x333f38u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x333f3c: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x333f3cu;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x333f40: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x333f40u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x333f44: 0x46012034  c.lt.s      $f4, $f1
    ctx->pc = 0x333f44u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x333f48: 0x0  nop
    ctx->pc = 0x333f48u;
    // NOP
    // 0x333f4c: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x333F4Cu;
    {
        const bool branch_taken_0x333f4c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x333f4c) {
            ctx->pc = 0x333F50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x333F4Cu;
            // 0x333f50: 0x8e310000  lw          $s1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x333F60u;
            goto label_333f60;
        }
    }
    ctx->pc = 0x333F54u;
    // 0x333f54: 0xc0e8ed8  jal         func_3A3B60
    ctx->pc = 0x333F54u;
    SET_GPR_U32(ctx, 31, 0x333F5Cu);
    ctx->pc = 0x333F58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333F54u;
    // 0x333f58: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3B60u, 0x333F54u, 0x333F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333F5Cu;
label_333f5c:
    // 0x333f5c: 0x8e310000  lw          $s1, 0x0($s1)
    ctx->pc = 0x333f5cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_333f60:
    // 0x333f60: 0x5633ffd1  bnel        $s1, $s3, . + 4 + (-0x2F << 2)
    ctx->pc = 0x333F60u;
    {
        const bool branch_taken_0x333f60 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 19));
        if (branch_taken_0x333f60) {
            ctx->pc = 0x333F64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x333F60u;
            // 0x333f64: 0x8e230008  lw          $v1, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x333EA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_333ea8;
        }
    }
    ctx->pc = 0x333F68u;
    // 0x333f68: 0x8e520000  lw          $s2, 0x0($s2)
    ctx->pc = 0x333f68u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_333f6c:
    // 0x333f6c: 0x5655ffc8  bnel        $s2, $s5, . + 4 + (-0x38 << 2)
    ctx->pc = 0x333F6Cu;
    {
        const bool branch_taken_0x333f6c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 21));
        if (branch_taken_0x333f6c) {
            ctx->pc = 0x333F70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x333F6Cu;
            // 0x333f70: 0x8e420008  lw          $v0, 0x8($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x333E90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_333e90;
        }
    }
    ctx->pc = 0x333F74u;
label_333f74:
    // 0x333f74: 0x7bb00100  lq          $s0, 0x100($sp)
    ctx->pc = 0x333f74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x333f78: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x333f78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x333f7c: 0x7bb100f0  lq          $s1, 0xF0($sp)
    ctx->pc = 0x333f7cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x333f80: 0x7bb200e0  lq          $s2, 0xE0($sp)
    ctx->pc = 0x333f80u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x333f84: 0x7bb300d0  lq          $s3, 0xD0($sp)
    ctx->pc = 0x333f84u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x333f88: 0x7bb400c0  lq          $s4, 0xC0($sp)
    ctx->pc = 0x333f88u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x333f8c: 0x7bb500b0  lq          $s5, 0xB0($sp)
    ctx->pc = 0x333f8cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x333f90: 0x7bb600a0  lq          $s6, 0xA0($sp)
    ctx->pc = 0x333f90u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x333f94: 0x7bb70090  lq          $s7, 0x90($sp)
    ctx->pc = 0x333f94u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x333f98: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x333f98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x333f9c: 0x3e00008  jr          $ra
    ctx->pc = 0x333F9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x333FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333F9Cu;
        // 0x333fa0: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x333F9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x333FA4u;
    // 0x333fa4: 0x0  nop
    ctx->pc = 0x333fa4u;
    // NOP
    // 0x333fa8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x333fa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x333fac: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x333facu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x333fb0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x333fb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x333fb4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x333fb4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x333fb8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x333fb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x333fbc: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x333fbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x333fc0: 0x8e300008  lw          $s0, 0x8($s1)
    ctx->pc = 0x333fc0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x333fc4: 0x8e030078  lw          $v1, 0x78($s0)
    ctx->pc = 0x333fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
    // 0x333fc8: 0x8f82bd80  lw          $v0, -0x4280($gp)
    ctx->pc = 0x333fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950272)));
    // 0x333fcc: 0xae23000c  sw          $v1, 0xC($s1)
    ctx->pc = 0x333fccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
    // 0x333fd0: 0x2022021  addu        $a0, $s0, $v0
    ctx->pc = 0x333fd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x333fd4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x333fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x333fd8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x333FD8u;
    {
        const bool branch_taken_0x333fd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x333FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333FD8u;
        // 0x333fdc: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333fd8) {
            ctx->pc = 0x333FF8u;
            goto label_333ff8;
        }
    }
    ctx->pc = 0x333FE0u;
    // 0x333fe0: 0x94630004  lhu         $v1, 0x4($v1)
    ctx->pc = 0x333fe0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x333fe4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x333fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x333fe8: 0x54430004  bnel        $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x333FE8u;
    {
        const bool branch_taken_0x333fe8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x333fe8) {
            ctx->pc = 0x333FECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x333FE8u;
            // 0x333fec: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x333FFCu;
            goto label_333ffc;
        }
    }
    ctx->pc = 0x333FF0u;
    // 0x333ff0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x333FF0u;
    {
        const bool branch_taken_0x333ff0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x333FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333FF0u;
        // 0x333ff4: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333ff0) {
            ctx->pc = 0x33400Cu;
            goto label_33400c;
        }
    }
    ctx->pc = 0x333FF8u;
label_333ff8:
    // 0x333ff8: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x333ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_333ffc:
    // 0x333ffc: 0x8f84bd80  lw          $a0, -0x4280($gp)
    ctx->pc = 0x333ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950272)));
    // 0x334000: 0x94450004  lhu         $a1, 0x4($v0)
    ctx->pc = 0x334000u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x334004: 0xc0e7eec  jal         func_39FBB0
    ctx->pc = 0x334004u;
    SET_GPR_U32(ctx, 31, 0x33400Cu);
    ctx->pc = 0x334008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334004u;
    // 0x334008: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39FBB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39FBB0u, 0x334004u, 0x33400Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33400Cu;
label_33400c:
    // 0x33400c: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x33400cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x334010: 0xae270010  sw          $a3, 0x10($s1)
    ctx->pc = 0x334010u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 7));
    // 0x334014: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x334014u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x334018: 0x2462e880  addiu       $v0, $v1, -0x1780
    ctx->pc = 0x334018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961280));
    // 0x33401c: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x33401cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x334020: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x334020u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x61E884u));
    // 0x334024: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x334024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x334028: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x334028u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x33402c: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x33402Cu;
    {
        const bool branch_taken_0x33402c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x334030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33402Cu;
        // 0x334030: 0x60782d  daddu       $t7, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33402c) {
            ctx->pc = 0x334094u;
            goto label_334094;
        }
    }
    ctx->pc = 0x334034u;
    // 0x334034: 0x90a20008  lbu         $v0, 0x8($a1)
    ctx->pc = 0x334034u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x334038: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x334038u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x33403c: 0x8e25000c  lw          $a1, 0xC($s1)
    ctx->pc = 0x33403cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x334040: 0x3463fffe  ori         $v1, $v1, 0xFFFE
    ctx->pc = 0x334040u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65534);
    // 0x334044: 0x8e240014  lw          $a0, 0x14($s1)
    ctx->pc = 0x334044u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x334048: 0x3042009d  andi        $v0, $v0, 0x9D
    ctx->pc = 0x334048u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)157);
    // 0x33404c: 0x94a60006  lhu         $a2, 0x6($a1)
    ctx->pc = 0x33404cu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 6)));
    // 0x334050: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x334050u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x334054: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x334054u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x334058: 0x8ce50004  lw          $a1, 0x4($a3)
    ctx->pc = 0x334058u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x33405c: 0xc21825  or          $v1, $a2, $v0
    ctx->pc = 0x33405cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x334060: 0xae240014  sw          $a0, 0x14($s1)
    ctx->pc = 0x334060u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 4));
    // 0x334064: 0x10a0000b  beqz        $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x334064u;
    {
        const bool branch_taken_0x334064 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x334068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334064u;
        // 0x334068: 0xae230018  sw          $v1, 0x18($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334064) {
            ctx->pc = 0x334094u;
            goto label_334094;
        }
    }
    ctx->pc = 0x33406Cu;
    // 0x33406c: 0x8ca20028  lw          $v0, 0x28($a1)
    ctx->pc = 0x33406cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
    // 0x334070: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x334070u;
    {
        const bool branch_taken_0x334070 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x334074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334070u;
        // 0x334074: 0x21402  srl         $v0, $v0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334070) {
            ctx->pc = 0x334094u;
            goto label_334094;
        }
    }
    ctx->pc = 0x334078u;
    // 0x334078: 0x31c02  srl         $v1, $v1, 16
    ctx->pc = 0x334078u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
    // 0x33407c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x33407cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x334080: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x334080u;
    {
        const bool branch_taken_0x334080 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x334084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334080u;
        // 0x334084: 0x34820008  ori         $v0, $a0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x334080) {
            ctx->pc = 0x334090u;
            goto label_334090;
        }
    }
    ctx->pc = 0x334088u;
    // 0x334088: 0x34820004  ori         $v0, $a0, 0x4
    ctx->pc = 0x334088u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
    // 0x33408c: 0x0  nop
    ctx->pc = 0x33408cu;
    // NOP
label_334090:
    // 0x334090: 0xae220014  sw          $v0, 0x14($s1)
    ctx->pc = 0x334090u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
label_334094:
    // 0x334094: 0x8de3e880  lw          $v1, -0x1780($t7)
    ctx->pc = 0x334094u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4294961280)));
    // 0x334098: 0x24620020  addiu       $v0, $v1, 0x20
    ctx->pc = 0x334098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x33409c: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x33409cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x3340a0: 0x27ae0010  addiu       $t6, $sp, 0x10
    ctx->pc = 0x3340a0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3340a4: 0x8f84bebc  lw          $a0, -0x4144($gp)
    ctx->pc = 0x3340a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950588)));
    // 0x3340a8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3340a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3340ac: 0x3c0dffff  lui         $t5, 0xFFFF
    ctx->pc = 0x3340acu;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)65535 << 16));
    // 0x3340b0: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x3340b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x3340b4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3340b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3340b8: 0x44803000  mtc1        $zero, $f6
    ctx->pc = 0x3340b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x3340bc: 0x24630060  addiu       $v1, $v1, 0x60
    ctx->pc = 0x3340bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
    // 0x3340c0: 0x240c0005  addiu       $t4, $zero, 0x5
    ctx->pc = 0x3340c0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x3340c4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3340c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3340c8: 0x240b000c  addiu       $t3, $zero, 0xC
    ctx->pc = 0x3340c8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x3340cc: 0x35adffff  ori         $t5, $t5, 0xFFFF
    ctx->pc = 0x3340ccu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | (uint64_t)(uint16_t)65535);
    // 0x3340d0: 0x60502d  daddu       $t2, $v1, $zero
    ctx->pc = 0x3340d0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3340d4: 0x60482d  daddu       $t1, $v1, $zero
    ctx->pc = 0x3340d4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3340d8: 0x60402d  daddu       $t0, $v1, $zero
    ctx->pc = 0x3340d8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3340dc: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x3340dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3340e0: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x3340e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3340e4: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x3340e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_3340e8:
    // 0x3340e8: 0x90a20010  lbu         $v0, 0x10($a1)
    ctx->pc = 0x3340e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x3340ec: 0x821023  subu        $v0, $a0, $v0
    ctx->pc = 0x3340ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x3340f0: 0x4b9018  mult        $s2, $v0, $t3
    ctx->pc = 0x3340f0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 18, (int32_t)result); }
    // 0x3340f4: 0x2501021  addu        $v0, $s2, $s0
    ctx->pc = 0x3340f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x3340f8: 0xc4400060  lwc1        $f0, 0x60($v0)
    ctx->pc = 0x3340f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3340fc: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x3340fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x334100: 0x90c20011  lbu         $v0, 0x11($a2)
    ctx->pc = 0x334100u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 17)));
    // 0x334104: 0x821023  subu        $v0, $a0, $v0
    ctx->pc = 0x334104u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x334108: 0x4b9018  mult        $s2, $v0, $t3
    ctx->pc = 0x334108u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 18, (int32_t)result); }
    // 0x33410c: 0x2501021  addu        $v0, $s2, $s0
    ctx->pc = 0x33410cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x334110: 0xc4450064  lwc1        $f5, 0x64($v0)
    ctx->pc = 0x334110u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x334114: 0xe7a50004  swc1        $f5, 0x4($sp)
    ctx->pc = 0x334114u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x334118: 0x90e20012  lbu         $v0, 0x12($a3)
    ctx->pc = 0x334118u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 18)));
    // 0x33411c: 0x821023  subu        $v0, $a0, $v0
    ctx->pc = 0x33411cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x334120: 0x4b9018  mult        $s2, $v0, $t3
    ctx->pc = 0x334120u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 18, (int32_t)result); }
    // 0x334124: 0x2501021  addu        $v0, $s2, $s0
    ctx->pc = 0x334124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x334128: 0xc4420068  lwc1        $f2, 0x68($v0)
    ctx->pc = 0x334128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x33412c: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x33412cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x334130: 0xc5010000  lwc1        $f1, 0x0($t0)
    ctx->pc = 0x334130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x334134: 0xc5230004  lwc1        $f3, 0x4($t1)
    ctx->pc = 0x334134u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x334138: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x334138u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x33413c: 0xc5440008  lwc1        $f4, 0x8($t2)
    ctx->pc = 0x33413cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x334140: 0x46032942  mul.s       $f5, $f5, $f3
    ctx->pc = 0x334140u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[3]);
    // 0x334144: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x334144u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x334148: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x334148u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x33414c: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x33414cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x334150: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x334150u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x334154: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x334154u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x334158: 0x46003034  c.lt.s      $f6, $f0
    ctx->pc = 0x334158u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[6], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x33415c: 0x0  nop
    ctx->pc = 0x33415cu;
    // NOP
    // 0x334160: 0x4503002c  bc1tl       . + 4 + (0x2C << 2)
    ctx->pc = 0x334160u;
    {
        const bool branch_taken_0x334160 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x334160) {
            ctx->pc = 0x334164u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x334160u;
            // 0x334164: 0xadc40000  sw          $a0, 0x0($t6) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x334214u;
            goto label_334214;
        }
    }
    ctx->pc = 0x334168u;
    // 0x334168: 0x90a20024  lbu         $v0, 0x24($a1)
    ctx->pc = 0x334168u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x33416c: 0x821023  subu        $v0, $a0, $v0
    ctx->pc = 0x33416cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x334170: 0x4b9018  mult        $s2, $v0, $t3
    ctx->pc = 0x334170u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 18, (int32_t)result); }
    // 0x334174: 0x2501021  addu        $v0, $s2, $s0
    ctx->pc = 0x334174u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x334178: 0xc4400060  lwc1        $f0, 0x60($v0)
    ctx->pc = 0x334178u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33417c: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x33417cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x334180: 0x90c20025  lbu         $v0, 0x25($a2)
    ctx->pc = 0x334180u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 37)));
    // 0x334184: 0x821023  subu        $v0, $a0, $v0
    ctx->pc = 0x334184u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x334188: 0x4b9018  mult        $s2, $v0, $t3
    ctx->pc = 0x334188u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 18, (int32_t)result); }
    // 0x33418c: 0x2501021  addu        $v0, $s2, $s0
    ctx->pc = 0x33418cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x334190: 0xc4450064  lwc1        $f5, 0x64($v0)
    ctx->pc = 0x334190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x334194: 0xe7a50004  swc1        $f5, 0x4($sp)
    ctx->pc = 0x334194u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x334198: 0x90e20026  lbu         $v0, 0x26($a3)
    ctx->pc = 0x334198u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 38)));
    // 0x33419c: 0x821023  subu        $v0, $a0, $v0
    ctx->pc = 0x33419cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x3341a0: 0x4b9018  mult        $s2, $v0, $t3
    ctx->pc = 0x3341a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 18, (int32_t)result); }
    // 0x3341a4: 0x2501021  addu        $v0, $s2, $s0
    ctx->pc = 0x3341a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x3341a8: 0xc4420068  lwc1        $f2, 0x68($v0)
    ctx->pc = 0x3341a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3341ac: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x3341acu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x3341b0: 0xc5010014  lwc1        $f1, 0x14($t0)
    ctx->pc = 0x3341b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3341b4: 0xc5230018  lwc1        $f3, 0x18($t1)
    ctx->pc = 0x3341b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3341b8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3341b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x3341bc: 0xc544001c  lwc1        $f4, 0x1C($t2)
    ctx->pc = 0x3341bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x3341c0: 0x46032942  mul.s       $f5, $f5, $f3
    ctx->pc = 0x3341c0u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[3]);
    // 0x3341c4: 0xc4610020  lwc1        $f1, 0x20($v1)
    ctx->pc = 0x3341c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3341c8: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x3341c8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x3341cc: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x3341ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x3341d0: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x3341d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x3341d4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x3341d4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x3341d8: 0x46003034  c.lt.s      $f6, $f0
    ctx->pc = 0x3341d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[6], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3341dc: 0x0  nop
    ctx->pc = 0x3341dcu;
    // NOP
    // 0x3341e0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x3341E0u;
    {
        const bool branch_taken_0x3341e0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3341E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3341E0u;
        // 0x3341e4: 0x258cffff  addiu       $t4, $t4, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3341e0) {
            ctx->pc = 0x3341F0u;
            goto label_3341f0;
        }
    }
    ctx->pc = 0x3341E8u;
    // 0x3341e8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x3341E8u;
    {
        const bool branch_taken_0x3341e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3341ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3341E8u;
        // 0x3341ec: 0xadc40000  sw          $a0, 0x0($t6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3341e8) {
            ctx->pc = 0x334214u;
            goto label_334214;
        }
    }
    ctx->pc = 0x3341F0u;
label_3341f0:
    // 0x3341f0: 0x24630028  addiu       $v1, $v1, 0x28
    ctx->pc = 0x3341f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
    // 0x3341f4: 0x254a0028  addiu       $t2, $t2, 0x28
    ctx->pc = 0x3341f4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 40));
    // 0x3341f8: 0x25290028  addiu       $t1, $t1, 0x28
    ctx->pc = 0x3341f8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 40));
    // 0x3341fc: 0x25080028  addiu       $t0, $t0, 0x28
    ctx->pc = 0x3341fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 40));
    // 0x334200: 0x24e70028  addiu       $a3, $a3, 0x28
    ctx->pc = 0x334200u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 40));
    // 0x334204: 0x24c60028  addiu       $a2, $a2, 0x28
    ctx->pc = 0x334204u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 40));
    // 0x334208: 0x258cffff  addiu       $t4, $t4, -0x1
    ctx->pc = 0x334208u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967295));
    // 0x33420c: 0x158dffb6  bne         $t4, $t5, . + 4 + (-0x4A << 2)
    ctx->pc = 0x33420Cu;
    {
        const bool branch_taken_0x33420c = (GPR_U64(ctx, 12) != GPR_U64(ctx, 13));
        ctx->pc = 0x334210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33420Cu;
        // 0x334210: 0x24a50028  addiu       $a1, $a1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33420c) {
            ctx->pc = 0x3340E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3340e8;
        }
    }
    ctx->pc = 0x334214u;
label_334214:
    // 0x334214: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x334214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x334218: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x334218u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33421c: 0xa2220029  sb          $v0, 0x29($s1)
    ctx->pc = 0x33421cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 41), (uint8_t)GPR_U32(ctx, 2));
    // 0x334220: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x334220u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x334224: 0x9382aed0  lbu         $v0, -0x5130($gp)
    ctx->pc = 0x334224u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294946512)));
    // 0x334228: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x334228u;
    {
        const bool branch_taken_0x334228 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x33422Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334228u;
        // 0x33422c: 0xa2220028  sb          $v0, 0x28($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 40), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334228) {
            ctx->pc = 0x334238u;
            goto label_334238;
        }
    }
    ctx->pc = 0x334230u;
    // 0x334230: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x334230u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x334234: 0xa2220028  sb          $v0, 0x28($s1)
    ctx->pc = 0x334234u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 40), (uint8_t)GPR_U32(ctx, 2));
label_334238:
    // 0x334238: 0x25e4e880  addiu       $a0, $t7, -0x1780
    ctx->pc = 0x334238u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 15), 4294961280));
    // 0x33423c: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x33423cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x334240: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x334240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x334244: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x334244u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
    // 0x334248: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x334248u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x33424c: 0xa222002a  sb          $v0, 0x2A($s1)
    ctx->pc = 0x33424cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 42), (uint8_t)GPR_U32(ctx, 2));
    // 0x334250: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x334250u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x334254: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x334254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x334258: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x334258u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x33425c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x33425Cu;
    {
        const bool branch_taken_0x33425c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x334260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33425Cu;
        // 0x334260: 0x8e310008  lw          $s1, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33425c) {
            ctx->pc = 0x334288u;
            goto label_334288;
        }
    }
    ctx->pc = 0x334264u;
    // 0x334264: 0x3c10003a  lui         $s0, 0x3A
    ctx->pc = 0x334264u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)58 << 16));
    // 0x334268: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x334268u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33426c: 0x261066a0  addiu       $s0, $s0, 0x66A0
    ctx->pc = 0x33426cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 26272));
    // 0x334270: 0xc0e67d6  jal         func_399F58
    ctx->pc = 0x334270u;
    SET_GPR_U32(ctx, 31, 0x334278u);
    ctx->pc = 0x334274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334270u;
    // 0x334274: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x399F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x399F58u, 0x334270u, 0x334278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334278u;
label_334278:
    // 0x334278: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x334278u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33427c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x33427cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334280: 0xc0e67f6  jal         func_399FD8
    ctx->pc = 0x334280u;
    SET_GPR_U32(ctx, 31, 0x334288u);
    ctx->pc = 0x334284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334280u;
    // 0x334284: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x399FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x399FD8u, 0x334280u, 0x334288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334288u;
label_334288:
    // 0x334288: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x334288u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x33428c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x33428cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x334290: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x334290u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x334294: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x334294u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x334298: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x334298u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x33429c: 0x3e00008  jr          $ra
    ctx->pc = 0x33429Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3342A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33429Cu;
        // 0x3342a0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33429Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3342A4u;
    // 0x3342a4: 0x0  nop
    ctx->pc = 0x3342a4u;
    // NOP
    // 0x3342a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3342a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3342ac: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x3342acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x3342b0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3342b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3342b4: 0xc10a322  jal         func_428C88
    ctx->pc = 0x3342B4u;
    SET_GPR_U32(ctx, 31, 0x3342BCu);
    ctx->pc = 0x3342B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3342B4u;
    // 0x3342b8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x428C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x428C88u, 0x3342B4u, 0x3342BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3342BCu;
label_3342bc:
    // 0x3342bc: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x3342bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x3342c0: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x3342c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x3342c4: 0x34848003  ori         $a0, $a0, 0x8003
    ctx->pc = 0x3342c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32771);
    // 0x3342c8: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x3342c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x3342cc: 0x70441389  pcpyld      $v0, $v0, $a0
    ctx->pc = 0x3342ccu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x3342d0: 0x8f83be20  lw          $v1, -0x41E0($gp)
    ctx->pc = 0x3342d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
    // 0x3342d4: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x3342d4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x3342d8: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x3342d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x3342dc: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x3342dcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
    // 0x3342e0: 0x24040042  addiu       $a0, $zero, 0x42
    ctx->pc = 0x3342e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x3342e4: 0xdf82ae70  ld          $v0, -0x5190($gp)
    ctx->pc = 0x3342e4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946416)));
    // 0x3342e8: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x3342e8u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x3342ec: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x3342ecu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x3342f0: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x3342f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x3342f4: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x3342f4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
    // 0x3342f8: 0x24040047  addiu       $a0, $zero, 0x47
    ctx->pc = 0x3342f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x3342fc: 0xdf82ae48  ld          $v0, -0x51B8($gp)
    ctx->pc = 0x3342fcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946376)));
    // 0x334300: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x334300u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x334304: 0x7c620010  sq          $v0, 0x10($v1)
    ctx->pc = 0x334304u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), GPR_VEC(ctx, 2));
    // 0x334308: 0x24620020  addiu       $v0, $v1, 0x20
    ctx->pc = 0x334308u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x33430c: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x33430cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
    // 0x334310: 0x2404003d  addiu       $a0, $zero, 0x3D
    ctx->pc = 0x334310u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
    // 0x334314: 0xdf82ae58  ld          $v0, -0x51A8($gp)
    ctx->pc = 0x334314u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946392)));
    // 0x334318: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x334318u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x33431c: 0x7c620020  sq          $v0, 0x20($v1)
    ctx->pc = 0x33431cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), GPR_VEC(ctx, 2));
    // 0x334320: 0x24630030  addiu       $v1, $v1, 0x30
    ctx->pc = 0x334320u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x334324: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x334324u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
    // 0x334328: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x334328u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33432c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x33432cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x334330: 0x3e00008  jr          $ra
    ctx->pc = 0x334330u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x334334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334330u;
        // 0x334334: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x334330u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x334338u;
    // 0x334338: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x334338u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x33433c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x33433cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x334340: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x334340u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x334344: 0x2446b1e0  addiu       $a2, $v0, -0x4E20
    ctx->pc = 0x334344u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947296));
    // 0x334348: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x334348u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x33434c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x33434cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x334350: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x334350u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x334354: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x334354u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334358: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x334358u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x33435c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x33435cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334360: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x334360u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x334364: 0x24150004  addiu       $s5, $zero, 0x4
    ctx->pc = 0x334364u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x334368: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x334368u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x33436c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x33436cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334370: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x334370u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x334374: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x334374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x334378: 0x92640028  lbu         $a0, 0x28($s3)
    ctx->pc = 0x334378u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 40)));
    // 0x33437c: 0x8cc50028  lw          $a1, 0x28($a2)
    ctx->pc = 0x33437cu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x61B208u));
    // 0x334380: 0x30830004  andi        $v1, $a0, 0x4
    ctx->pc = 0x334380u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
    // 0x334384: 0x30960001  andi        $s6, $a0, 0x1
    ctx->pc = 0x334384u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x334388: 0x43a80b  movn        $s5, $v0, $v1
    ctx->pc = 0x334388u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 2));
    // 0x33438c: 0xffa00008  sd          $zero, 0x8($sp)
    ctx->pc = 0x33438cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 0));
    // 0x334390: 0xffa00018  sd          $zero, 0x18($sp)
    ctx->pc = 0x334390u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 0));
    // 0x334394: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x334394u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x334398: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x334398u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x33439c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x33439Cu;
    {
        const bool branch_taken_0x33439c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3343A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33439Cu;
        // 0x3343a0: 0xffa00010  sd          $zero, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33439c) {
            ctx->pc = 0x3343A8u;
            goto label_3343a8;
        }
    }
    ctx->pc = 0x3343A4u;
    // 0x3343a4: 0x8e720040  lw          $s2, 0x40($s3)
    ctx->pc = 0x3343a4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
label_3343a8:
    // 0x3343a8: 0x52400001  beql        $s2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3343A8u;
    {
        const bool branch_taken_0x3343a8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x3343a8) {
            ctx->pc = 0x3343ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3343A8u;
            // 0x3343ac: 0x8cd20050  lw          $s2, 0x50($a2) (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3343B0u;
            goto label_3343b0;
        }
    }
    ctx->pc = 0x3343B0u;
label_3343b0:
    // 0x3343b0: 0x30a20002  andi        $v0, $a1, 0x2
    ctx->pc = 0x3343b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2);
    // 0x3343b4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3343B4u;
    {
        const bool branch_taken_0x3343b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3343B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3343B4u;
        // 0x3343b8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3343b4) {
            ctx->pc = 0x3343C4u;
            goto label_3343c4;
        }
    }
    ctx->pc = 0x3343BCu;
    // 0x3343bc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3343BCu;
    {
        const bool branch_taken_0x3343bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3343C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3343BCu;
        // 0x3343c0: 0xaf80aedc  sw          $zero, -0x5124($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294946524), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3343bc) {
            ctx->pc = 0x3343C8u;
            goto label_3343c8;
        }
    }
    ctx->pc = 0x3343C4u;
label_3343c4:
    // 0x3343c4: 0xaf82aedc  sw          $v0, -0x5124($gp)
    ctx->pc = 0x3343c4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294946524), GPR_U32(ctx, 2));
label_3343c8:
    // 0x3343c8: 0x8e640008  lw          $a0, 0x8($s3)
    ctx->pc = 0x3343c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x3343cc: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x3343ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x3343d0: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x3343d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3343d4: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3343D4u;
    {
        const bool branch_taken_0x3343d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x3343d4) {
            ctx->pc = 0x3343ECu;
            goto label_3343ec;
        }
    }
    ctx->pc = 0x3343DCu;
    // 0x3343dc: 0xc0c8ea8  jal         func_323AA0
    ctx->pc = 0x3343DCu;
    SET_GPR_U32(ctx, 31, 0x3343E4u);
    ctx->pc = 0x323AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323AA0u, 0x3343DCu, 0x3343E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3343E4u;
label_3343e4:
    // 0x3343e4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3343E4u;
    {
        const bool branch_taken_0x3343e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3343E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3343E4u;
        // 0x3343e8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3343e4) {
            ctx->pc = 0x3343F8u;
            goto label_3343f8;
        }
    }
    ctx->pc = 0x3343ECu;
label_3343ec:
    // 0x3343ec: 0xc0c8ecc  jal         func_323B30
    ctx->pc = 0x3343ECu;
    SET_GPR_U32(ctx, 31, 0x3343F4u);
    ctx->pc = 0x323B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323B30u, 0x3343ECu, 0x3343F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3343F4u;
label_3343f4:
    // 0x3343f4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3343f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3343f8:
    // 0x3343f8: 0x1240000a  beqz        $s2, . + 4 + (0xA << 2)
    ctx->pc = 0x3343F8u;
    {
        const bool branch_taken_0x3343f8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x3343FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3343F8u;
        // 0x3343fc: 0xaf80bec4  sw          $zero, -0x413C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294950596), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3343f8) {
            ctx->pc = 0x334424u;
            goto label_334424;
        }
    }
    ctx->pc = 0x334400u;
    // 0x334400: 0xc110e98  jal         func_443A60
    ctx->pc = 0x334400u;
    SET_GPR_U32(ctx, 31, 0x334408u);
    ctx->pc = 0x334404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334400u;
    // 0x334404: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x443A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x443A60u, 0x334400u, 0x334408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334408u;
label_334408:
    // 0x334408: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x334408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x33440c: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x33440cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x334410: 0x90430023  lbu         $v1, 0x23($v0)
    ctx->pc = 0x334410u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 35)));
    // 0x334414: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x334414u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x334418: 0x10640002  beq         $v1, $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x334418u;
    {
        const bool branch_taken_0x334418 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x33441Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334418u;
        // 0x33441c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334418) {
            ctx->pc = 0x334424u;
            goto label_334424;
        }
    }
    ctx->pc = 0x334420u;
    // 0x334420: 0xaf82bec4  sw          $v0, -0x413C($gp)
    ctx->pc = 0x334420u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950596), GPR_U32(ctx, 2));
label_334424:
    // 0x334424: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x334424u;
    {
        const bool branch_taken_0x334424 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x334424) {
            ctx->pc = 0x334440u;
            goto label_334440;
        }
    }
    ctx->pc = 0x33442Cu;
    // 0x33442c: 0xc110e98  jal         func_443A60
    ctx->pc = 0x33442Cu;
    SET_GPR_U32(ctx, 31, 0x334434u);
    ctx->pc = 0x334430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33442Cu;
    // 0x334430: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x443A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x443A60u, 0x33442Cu, 0x334434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334434u;
label_334434:
    // 0x334434: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x334434u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x334438: 0xc110b7e  jal         func_442DF8
    ctx->pc = 0x334438u;
    SET_GPR_U32(ctx, 31, 0x334440u);
    ctx->pc = 0x33443Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334438u;
    // 0x33443c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x442DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x442DF8u, 0x334438u, 0x334440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334440u;
label_334440:
    // 0x334440: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x334440u;
    {
        const bool branch_taken_0x334440 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x334440) {
            ctx->pc = 0x334454u;
            goto label_334454;
        }
    }
    ctx->pc = 0x334448u;
    // 0x334448: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x334448u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x33444c: 0xc110b7e  jal         func_442DF8
    ctx->pc = 0x33444Cu;
    SET_GPR_U32(ctx, 31, 0x334454u);
    ctx->pc = 0x334450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33444Cu;
    // 0x334450: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x442DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x442DF8u, 0x33444Cu, 0x334454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334454u;
label_334454:
    // 0x334454: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x334454u;
    {
        const bool branch_taken_0x334454 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x334458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334454u;
        // 0x334458: 0x8f82beb8  lw          $v0, -0x4148($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950584)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334454) {
            ctx->pc = 0x334478u;
            goto label_334478;
        }
    }
    ctx->pc = 0x33445Cu;
    // 0x33445c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x33445cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x334460: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x334460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x334464: 0x8c430058  lw          $v1, 0x58($v0)
    ctx->pc = 0x334464u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x334468: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x334468u;
    {
        const bool branch_taken_0x334468 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x334468) {
            ctx->pc = 0x334478u;
            goto label_334478;
        }
    }
    ctx->pc = 0x334470u;
    // 0x334470: 0xc110b7e  jal         func_442DF8
    ctx->pc = 0x334470u;
    SET_GPR_U32(ctx, 31, 0x334478u);
    ctx->pc = 0x334474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334470u;
    // 0x334474: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x442DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x442DF8u, 0x334470u, 0x334478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334478u;
label_334478:
    // 0x334478: 0x12400027  beqz        $s2, . + 4 + (0x27 << 2)
    ctx->pc = 0x334478u;
    {
        const bool branch_taken_0x334478 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x33447Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334478u;
        // 0x33447c: 0x8f82beb8  lw          $v0, -0x4148($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950584)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334478) {
            ctx->pc = 0x334518u;
            goto label_334518;
        }
    }
    ctx->pc = 0x334480u;
    // 0x334480: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x334480u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x334484: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x334484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x334488: 0x8c430058  lw          $v1, 0x58($v0)
    ctx->pc = 0x334488u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x33448c: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x33448Cu;
    {
        const bool branch_taken_0x33448c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x334490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33448Cu;
        // 0x334490: 0xdf82ae80  ld          $v0, -0x5180($gp) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946432)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33448c) {
            ctx->pc = 0x3344A0u;
            goto label_3344a0;
        }
    }
    ctx->pc = 0x334494u;
    // 0x334494: 0xc110b7e  jal         func_442DF8
    ctx->pc = 0x334494u;
    SET_GPR_U32(ctx, 31, 0x33449Cu);
    ctx->pc = 0x334498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334494u;
    // 0x334498: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x442DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x442DF8u, 0x334494u, 0x33449Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33449Cu;
label_33449c:
    // 0x33449c: 0xdf82ae80  ld          $v0, -0x5180($gp)
    ctx->pc = 0x33449cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946432)));
label_3344a0:
    // 0x3344a0: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x3344a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3344a4: 0x8e470000  lw          $a3, 0x0($s2)
    ctx->pc = 0x3344a4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3344a8: 0x37a50004  ori         $a1, $sp, 0x4
    ctx->pc = 0x3344a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    // 0x3344ac: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3344acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3344b0: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x3344b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3344b4: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x3344b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3344b8: 0xaf87bec0  sw          $a3, -0x4140($gp)
    ctx->pc = 0x3344b8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950592), GPR_U32(ctx, 7));
    // 0x3344bc: 0xc110f4c  jal         func_443D30
    ctx->pc = 0x3344BCu;
    SET_GPR_U32(ctx, 31, 0x3344C4u);
    ctx->pc = 0x3344C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3344BCu;
    // 0x3344c0: 0xff82ae80  sd          $v0, -0x5180($gp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294946432), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x443D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x443D30u, 0x3344BCu, 0x3344C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3344C4u;
label_3344c4:
    // 0x3344c4: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x3344c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3344c8: 0x37a50008  ori         $a1, $sp, 0x8
    ctx->pc = 0x3344c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)8);
    // 0x3344cc: 0xc110f54  jal         func_443D50
    ctx->pc = 0x3344CCu;
    SET_GPR_U32(ctx, 31, 0x3344D4u);
    ctx->pc = 0x3344D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3344CCu;
    // 0x3344d0: 0x92460050  lbu         $a2, 0x50($s2) (Delay Slot)
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 80)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x443D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x443D50u, 0x3344CCu, 0x3344D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3344D4u;
label_3344d4:
    // 0x3344d4: 0x8e430050  lw          $v1, 0x50($s2)
    ctx->pc = 0x3344d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
    // 0x3344d8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3344d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3344dc: 0x30620f00  andi        $v0, $v1, 0xF00
    ctx->pc = 0x3344dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3840);
    // 0x3344e0: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x3344e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x3344e4: 0x14440003  bne         $v0, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3344E4u;
    {
        const bool branch_taken_0x3344e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x3344E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3344E4u;
        // 0x3344e8: 0xff80ae60  sd          $zero, -0x51A0($gp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 28), 4294946400), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3344e4) {
            ctx->pc = 0x3344F4u;
            goto label_3344f4;
        }
    }
    ctx->pc = 0x3344ECu;
    // 0x3344ec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3344ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3344f0: 0xff82ae60  sd          $v0, -0x51A0($gp)
    ctx->pc = 0x3344f0u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294946400), GPR_U64(ctx, 2));
label_3344f4:
    // 0x3344f4: 0x3062f000  andi        $v0, $v1, 0xF000
    ctx->pc = 0x3344f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)61440);
    // 0x3344f8: 0x21302  srl         $v0, $v0, 12
    ctx->pc = 0x3344f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
    // 0x3344fc: 0x1444000c  bne         $v0, $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x3344FCu;
    {
        const bool branch_taken_0x3344fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x334500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3344FCu;
        // 0x334500: 0xdf82ae48  ld          $v0, -0x51B8($gp) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946376)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3344fc) {
            ctx->pc = 0x334530u;
            goto label_334530;
        }
    }
    ctx->pc = 0x334504u;
    // 0x334504: 0xdf82ae60  ld          $v0, -0x51A0($gp)
    ctx->pc = 0x334504u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946400)));
    // 0x334508: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x334508u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x33450c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x33450cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x334510: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x334510u;
    {
        const bool branch_taken_0x334510 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x334514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334510u;
        // 0x334514: 0xff82ae60  sd          $v0, -0x51A0($gp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 28), 4294946400), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334510) {
            ctx->pc = 0x33452Cu;
            goto label_33452c;
        }
    }
    ctx->pc = 0x334518u;
label_334518:
    // 0x334518: 0xdf82ae80  ld          $v0, -0x5180($gp)
    ctx->pc = 0x334518u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946432)));
    // 0x33451c: 0x2403ffef  addiu       $v1, $zero, -0x11
    ctx->pc = 0x33451cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
    // 0x334520: 0xaf80bec0  sw          $zero, -0x4140($gp)
    ctx->pc = 0x334520u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950592), GPR_U32(ctx, 0));
    // 0x334524: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x334524u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x334528: 0xff82ae80  sd          $v0, -0x5180($gp)
    ctx->pc = 0x334528u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294946432), GPR_U64(ctx, 2));
label_33452c:
    // 0x33452c: 0xdf82ae48  ld          $v0, -0x51B8($gp)
    ctx->pc = 0x33452cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946376)));
label_334530:
    // 0x334530: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x334530u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x334534: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x334534u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x334538: 0x12000015  beqz        $s0, . + 4 + (0x15 << 2)
    ctx->pc = 0x334538u;
    {
        const bool branch_taken_0x334538 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x33453Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334538u;
        // 0x33453c: 0xff82ae48  sd          $v0, -0x51B8($gp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 28), 4294946376), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334538) {
            ctx->pc = 0x334590u;
            goto label_334590;
        }
    }
    ctx->pc = 0x334540u;
    // 0x334540: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x334540u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x334544: 0x27a50014  addiu       $a1, $sp, 0x14
    ctx->pc = 0x334544u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    // 0x334548: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x334548u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x33454c: 0xc110f4c  jal         func_443D30
    ctx->pc = 0x33454Cu;
    SET_GPR_U32(ctx, 31, 0x334554u);
    ctx->pc = 0x334550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33454Cu;
    // 0x334550: 0x220a02d  daddu       $s4, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x443D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x443D30u, 0x33454Cu, 0x334554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334554u;
label_334554:
    // 0x334554: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x334554u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x334558: 0x27a50018  addiu       $a1, $sp, 0x18
    ctx->pc = 0x334558u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x33455c: 0xc110f54  jal         func_443D50
    ctx->pc = 0x33455Cu;
    SET_GPR_U32(ctx, 31, 0x334564u);
    ctx->pc = 0x334560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33455Cu;
    // 0x334560: 0x92060050  lbu         $a2, 0x50($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 80)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x443D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x443D50u, 0x33455Cu, 0x334564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334564u;
label_334564:
    // 0x334564: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x334564u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x334568: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x334568u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x33456c: 0x30620f00  andi        $v0, $v1, 0xF00
    ctx->pc = 0x33456cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3840);
    // 0x334570: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x334570u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x334574: 0x3063f000  andi        $v1, $v1, 0xF000
    ctx->pc = 0x334574u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)61440);
    // 0x334578: 0x38420003  xori        $v0, $v0, 0x3
    ctx->pc = 0x334578u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)3);
    // 0x33457c: 0x31b02  srl         $v1, $v1, 12
    ctx->pc = 0x33457cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 12));
    // 0x334580: 0x14640003  bne         $v1, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x334580u;
    {
        const bool branch_taken_0x334580 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x334584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334580u;
        // 0x334584: 0x2a00b  movn        $s4, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334580) {
            ctx->pc = 0x334590u;
            goto label_334590;
        }
    }
    ctx->pc = 0x334588u;
    // 0x334588: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x334588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x33458c: 0x282a025  or          $s4, $s4, $v0
    ctx->pc = 0x33458cu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | GPR_U64(ctx, 2));
label_334590:
    // 0x334590: 0x12400011  beqz        $s2, . + 4 + (0x11 << 2)
    ctx->pc = 0x334590u;
    {
        const bool branch_taken_0x334590 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x334594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334590u;
        // 0x334594: 0xdf82ae80  ld          $v0, -0x5180($gp) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946432)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334590) {
            ctx->pc = 0x3345D8u;
            goto label_3345d8;
        }
    }
    ctx->pc = 0x334598u;
    // 0x334598: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x334598u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x33459c: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x33459cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x3345a0: 0x28420009  slti        $v0, $v0, 0x9
    ctx->pc = 0x3345a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x3345a4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x3345A4u;
    {
        const bool branch_taken_0x3345a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3345A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3345A4u;
        // 0x3345a8: 0xdf82ae80  ld          $v0, -0x5180($gp) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946432)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3345a4) {
            ctx->pc = 0x3345D8u;
            goto label_3345d8;
        }
    }
    ctx->pc = 0x3345ACu;
    // 0x3345ac: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x3345ACu;
    {
        const bool branch_taken_0x3345ac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3345B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3345ACu;
        // 0x3345b0: 0x24030040  addiu       $v1, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3345ac) {
            ctx->pc = 0x3345DCu;
            goto label_3345dc;
        }
    }
    ctx->pc = 0x3345B4u;
    // 0x3345b4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3345b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3345b8: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x3345b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x3345bc: 0x28420009  slti        $v0, $v0, 0x9
    ctx->pc = 0x3345bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x3345c0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3345C0u;
    {
        const bool branch_taken_0x3345c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3345C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3345C0u;
        // 0x3345c4: 0xdf82ae80  ld          $v0, -0x5180($gp) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946432)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3345c0) {
            ctx->pc = 0x3345D8u;
            goto label_3345d8;
        }
    }
    ctx->pc = 0x3345C8u;
    // 0x3345c8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x3345c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x3345cc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3345ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3345d0: 0xaf82bec0  sw          $v0, -0x4140($gp)
    ctx->pc = 0x3345d0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950592), GPR_U32(ctx, 2));
    // 0x3345d4: 0xdf82ae80  ld          $v0, -0x5180($gp)
    ctx->pc = 0x3345d4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946432)));
label_3345d8:
    // 0x3345d8: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x3345d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_3345dc:
    // 0x3345dc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3345dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3345e0: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x3345e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x3345e4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3345e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3345e8: 0xc10a322  jal         func_428C88
    ctx->pc = 0x3345E8u;
    SET_GPR_U32(ctx, 31, 0x3345F0u);
    ctx->pc = 0x3345ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3345E8u;
    // 0x3345ec: 0xff82ae80  sd          $v0, -0x5180($gp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294946432), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x428C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x428C88u, 0x3345E8u, 0x3345F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3345F0u;
label_3345f0:
    // 0x3345f0: 0x3c036c08  lui         $v1, 0x6C08
    ctx->pc = 0x3345f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)27656 << 16));
    // 0x3345f4: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x3345f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x3345f8: 0x346303c8  ori         $v1, $v1, 0x3C8
    ctx->pc = 0x3345f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)968);
    // 0x3345fc: 0x34840101  ori         $a0, $a0, 0x101
    ctx->pc = 0x3345fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)257);
    // 0x334600: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x334600u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334604: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x334604u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x334608: 0x34420012  ori         $v0, $v0, 0x12
    ctx->pc = 0x334608u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)18);
    // 0x33460c: 0x70641cc8  ppacw       $v1, $v1, $a0
    ctx->pc = 0x33460cu;
    SET_GPR_VEC(ctx, 3, PS2_PPACW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x334610: 0x70a214c8  ppacw       $v0, $a1, $v0
    ctx->pc = 0x334610u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 2)));
    // 0x334614: 0x70621cc8  ppacw       $v1, $v1, $v0
    ctx->pc = 0x334614u;
    SET_GPR_VEC(ctx, 3, PS2_PPACW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x334618: 0x8f84be20  lw          $a0, -0x41E0($gp)
    ctx->pc = 0x334618u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
    // 0x33461c: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x33461cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x334620: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x334620u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x334624: 0xaf84be20  sw          $a0, -0x41E0($gp)
    ctx->pc = 0x334624u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 4));
    // 0x334628: 0x163178  dsll        $a2, $s6, 5
    ctx->pc = 0x334628u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 22) << 5);
    // 0x33462c: 0x24030050  addiu       $v1, $zero, 0x50
    ctx->pc = 0x33462cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x334630: 0x3c073000  lui         $a3, 0x3000
    ctx->pc = 0x334630u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)12288 << 16));
    // 0x334634: 0x34e74000  ori         $a3, $a3, 0x4000
    ctx->pc = 0x334634u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)16384);
    // 0x334638: 0x2a31825  or          $v1, $s5, $v1
    ctx->pc = 0x334638u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) | GPR_U64(ctx, 3));
    // 0x33463c: 0x24080412  addiu       $t0, $zero, 0x412
    ctx->pc = 0x33463cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1042));
    // 0x334640: 0xc31025  or          $v0, $a2, $v1
    ctx->pc = 0x334640u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x334644: 0x213f8  dsll        $v0, $v0, 15
    ctx->pc = 0x334644u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 15);
    // 0x334648: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x334648u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x33464c: 0x2483c  dsll32      $t1, $v0, 0
    ctx->pc = 0x33464cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) << (32 + 0));
    // 0x334650: 0x71091389  pcpyld      $v0, $t0, $t1
    ctx->pc = 0x334650u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 8), GPR_VEC(ctx, 9)));
    // 0x334654: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x334654u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x334658: 0x24820010  addiu       $v0, $a0, 0x10
    ctx->pc = 0x334658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x33465c: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x33465cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
    // 0x334660: 0x24030258  addiu       $v1, $zero, 0x258
    ctx->pc = 0x334660u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 600));
    // 0x334664: 0x2a31825  or          $v1, $s5, $v1
    ctx->pc = 0x334664u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) | GPR_U64(ctx, 3));
    // 0x334668: 0xc31025  or          $v0, $a2, $v1
    ctx->pc = 0x334668u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x33466c: 0x213f8  dsll        $v0, $v0, 15
    ctx->pc = 0x33466cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 15);
    // 0x334670: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x334670u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x334674: 0x2483c  dsll32      $t1, $v0, 0
    ctx->pc = 0x334674u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) << (32 + 0));
    // 0x334678: 0x71091389  pcpyld      $v0, $t0, $t1
    ctx->pc = 0x334678u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 8), GPR_VEC(ctx, 9)));
    // 0x33467c: 0x7c820010  sq          $v0, 0x10($a0)
    ctx->pc = 0x33467cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 2));
    // 0x334680: 0x24820020  addiu       $v0, $a0, 0x20
    ctx->pc = 0x334680u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x334684: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x334684u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
    // 0x334688: 0x3c091000  lui         $t1, 0x1000
    ctx->pc = 0x334688u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4096 << 16));
    // 0x33468c: 0x9483c  dsll32      $t1, $t1, 0
    ctx->pc = 0x33468cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << (32 + 0));
    // 0x334690: 0x35298002  ori         $t1, $t1, 0x8002
    ctx->pc = 0x334690u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)32770);
    // 0x334694: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x334694u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x334698: 0x70c91389  pcpyld      $v0, $a2, $t1
    ctx->pc = 0x334698u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 6), GPR_VEC(ctx, 9)));
    // 0x33469c: 0x7c820020  sq          $v0, 0x20($a0)
    ctx->pc = 0x33469cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 2));
    // 0x3346a0: 0x24820030  addiu       $v0, $a0, 0x30
    ctx->pc = 0x3346a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x3346a4: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x3346a4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
    // 0x3346a8: 0x2407003d  addiu       $a3, $zero, 0x3D
    ctx->pc = 0x3346a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
    // 0x3346ac: 0xdf82ae58  ld          $v0, -0x51A8($gp)
    ctx->pc = 0x3346acu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946392)));
    // 0x3346b0: 0x70e21389  pcpyld      $v0, $a3, $v0
    ctx->pc = 0x3346b0u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 2)));
    // 0x3346b4: 0x7c820030  sq          $v0, 0x30($a0)
    ctx->pc = 0x3346b4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 2));
    // 0x3346b8: 0x24820040  addiu       $v0, $a0, 0x40
    ctx->pc = 0x3346b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x3346bc: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x3346bcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
    // 0x3346c0: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x3346c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x3346c4: 0xdfa20000  ld          $v0, 0x0($sp)
    ctx->pc = 0x3346c4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3346c8: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x3346c8u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x3346cc: 0x7c820040  sq          $v0, 0x40($a0)
    ctx->pc = 0x3346ccu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 64), GPR_VEC(ctx, 2));
    // 0x3346d0: 0x24820050  addiu       $v0, $a0, 0x50
    ctx->pc = 0x3346d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
    // 0x3346d4: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x3346d4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
    // 0x3346d8: 0x70c91389  pcpyld      $v0, $a2, $t1
    ctx->pc = 0x3346d8u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 6), GPR_VEC(ctx, 9)));
    // 0x3346dc: 0x7c820050  sq          $v0, 0x50($a0)
    ctx->pc = 0x3346dcu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 80), GPR_VEC(ctx, 2));
    // 0x3346e0: 0x24820060  addiu       $v0, $a0, 0x60
    ctx->pc = 0x3346e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
    // 0x3346e4: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x3346e4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
    // 0x3346e8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x3346e8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3346ec: 0x70e31389  pcpyld      $v0, $a3, $v1
    ctx->pc = 0x3346ecu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 3)));
    // 0x3346f0: 0x7c820060  sq          $v0, 0x60($a0)
    ctx->pc = 0x3346f0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 96), GPR_VEC(ctx, 2));
    // 0x3346f4: 0x24820070  addiu       $v0, $a0, 0x70
    ctx->pc = 0x3346f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
    // 0x3346f8: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x3346f8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
    // 0x3346fc: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x3346fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x334700: 0xdfa20010  ld          $v0, 0x10($sp)
    ctx->pc = 0x334700u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x334704: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x334704u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x334708: 0x7c820070  sq          $v0, 0x70($a0)
    ctx->pc = 0x334708u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 112), GPR_VEC(ctx, 2));
    // 0x33470c: 0x24830080  addiu       $v1, $a0, 0x80
    ctx->pc = 0x33470cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 128));
    // 0x334710: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x334710u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
    // 0x334714: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x334714u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
    // 0x334718: 0x34420009  ori         $v0, $v0, 0x9
    ctx->pc = 0x334718u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9);
    // 0x33471c: 0x70a51cc8  ppacw       $v1, $a1, $a1
    ctx->pc = 0x33471cu;
    SET_GPR_VEC(ctx, 3, PS2_PPACW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 5)));
    // 0x334720: 0x704514c8  ppacw       $v0, $v0, $a1
    ctx->pc = 0x334720u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 5)));
    // 0x334724: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x334724u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x334728: 0x7c820080  sq          $v0, 0x80($a0)
    ctx->pc = 0x334728u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 128), GPR_VEC(ctx, 2));
    // 0x33472c: 0x24830090  addiu       $v1, $a0, 0x90
    ctx->pc = 0x33472cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 144));
    // 0x334730: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x334730u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
    // 0x334734: 0x3c091000  lui         $t1, 0x1000
    ctx->pc = 0x334734u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4096 << 16));
    // 0x334738: 0x9483c  dsll32      $t1, $t1, 0
    ctx->pc = 0x334738u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << (32 + 0));
    // 0x33473c: 0x35298008  ori         $t1, $t1, 0x8008
    ctx->pc = 0x33473cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)32776);
    // 0x334740: 0x70c91389  pcpyld      $v0, $a2, $t1
    ctx->pc = 0x334740u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 6), GPR_VEC(ctx, 9)));
    // 0x334744: 0x7c820090  sq          $v0, 0x90($a0)
    ctx->pc = 0x334744u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 144), GPR_VEC(ctx, 2));
    // 0x334748: 0x248400a0  addiu       $a0, $a0, 0xA0
    ctx->pc = 0x334748u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 160));
    // 0x33474c: 0xaf84be20  sw          $a0, -0x41E0($gp)
    ctx->pc = 0x33474cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 4));
    // 0x334750: 0x92620047  lbu         $v0, 0x47($s3)
    ctx->pc = 0x334750u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 71)));
    // 0x334754: 0x2c4200ff  sltiu       $v0, $v0, 0xFF
    ctx->pc = 0x334754u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)255) ? 1 : 0);
    // 0x334758: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x334758u;
    {
        const bool branch_taken_0x334758 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33475Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334758u;
        // 0x33475c: 0x24030042  addiu       $v1, $zero, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334758) {
            ctx->pc = 0x334778u;
            goto label_334778;
        }
    }
    ctx->pc = 0x334760u;
    // 0x334760: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x334760u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x334764: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x334764u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x334768: 0x34420044  ori         $v0, $v0, 0x44
    ctx->pc = 0x334768u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)68);
    // 0x33476c: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x33476cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x334770: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x334770u;
    {
        const bool branch_taken_0x334770 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x334774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334770u;
        // 0x334774: 0x8f83be20  lw          $v1, -0x41E0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334770) {
            ctx->pc = 0x334790u;
            goto label_334790;
        }
    }
    ctx->pc = 0x334778u;
label_334778:
    // 0x334778: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x334778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x33477c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x33477cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x334780: 0x3442002a  ori         $v0, $v0, 0x2A
    ctx->pc = 0x334780u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)42);
    // 0x334784: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x334784u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x334788: 0x8f83be20  lw          $v1, -0x41E0($gp)
    ctx->pc = 0x334788u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
    // 0x33478c: 0x0  nop
    ctx->pc = 0x33478cu;
    // NOP
label_334790:
    // 0x334790: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x334790u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x334794: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x334794u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x334798: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x334798u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
    // 0x33479c: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x33479cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3347a0: 0xdf82ae60  ld          $v0, -0x51A0($gp)
    ctx->pc = 0x3347a0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946400)));
    // 0x3347a4: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x3347a4u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x3347a8: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x3347a8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x3347ac: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x3347acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x3347b0: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x3347b0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
    // 0x3347b4: 0x24040047  addiu       $a0, $zero, 0x47
    ctx->pc = 0x3347b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x3347b8: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x3347b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
    // 0x3347bc: 0x3442000d  ori         $v0, $v0, 0xD
    ctx->pc = 0x3347bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13);
    // 0x3347c0: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x3347c0u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x3347c4: 0x7c620010  sq          $v0, 0x10($v1)
    ctx->pc = 0x3347c4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), GPR_VEC(ctx, 2));
    // 0x3347c8: 0x24620020  addiu       $v0, $v1, 0x20
    ctx->pc = 0x3347c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x3347cc: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x3347ccu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
    // 0x3347d0: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x3347d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x3347d4: 0xdfa20008  ld          $v0, 0x8($sp)
    ctx->pc = 0x3347d4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3347d8: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x3347d8u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x3347dc: 0x7c620020  sq          $v0, 0x20($v1)
    ctx->pc = 0x3347dcu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), GPR_VEC(ctx, 2));
    // 0x3347e0: 0x24620030  addiu       $v0, $v1, 0x30
    ctx->pc = 0x3347e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x3347e4: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x3347e4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
    // 0x3347e8: 0x24040043  addiu       $a0, $zero, 0x43
    ctx->pc = 0x3347e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x3347ec: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x3347ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x3347f0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3347f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3347f4: 0x34420052  ori         $v0, $v0, 0x52
    ctx->pc = 0x3347f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)82);
    // 0x3347f8: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x3347f8u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x3347fc: 0x7c620030  sq          $v0, 0x30($v1)
    ctx->pc = 0x3347fcu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), GPR_VEC(ctx, 2));
    // 0x334800: 0x24620040  addiu       $v0, $v1, 0x40
    ctx->pc = 0x334800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    // 0x334804: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x334804u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
    // 0x334808: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x334808u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x33480c: 0x70941389  pcpyld      $v0, $a0, $s4
    ctx->pc = 0x33480cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 20)));
    // 0x334810: 0x7c620040  sq          $v0, 0x40($v1)
    ctx->pc = 0x334810u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 64), GPR_VEC(ctx, 2));
    // 0x334814: 0x24620050  addiu       $v0, $v1, 0x50
    ctx->pc = 0x334814u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
    // 0x334818: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x334818u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
    // 0x33481c: 0x24040048  addiu       $a0, $zero, 0x48
    ctx->pc = 0x33481cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x334820: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x334820u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
    // 0x334824: 0x34421001  ori         $v0, $v0, 0x1001
    ctx->pc = 0x334824u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4097);
    // 0x334828: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x334828u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x33482c: 0x7c620050  sq          $v0, 0x50($v1)
    ctx->pc = 0x33482cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 80), GPR_VEC(ctx, 2));
    // 0x334830: 0x24620060  addiu       $v0, $v1, 0x60
    ctx->pc = 0x334830u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
    // 0x334834: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x334834u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
    // 0x334838: 0x24040015  addiu       $a0, $zero, 0x15
    ctx->pc = 0x334838u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x33483c: 0xdfa20018  ld          $v0, 0x18($sp)
    ctx->pc = 0x33483cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x334840: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x334840u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x334844: 0x7c620060  sq          $v0, 0x60($v1)
    ctx->pc = 0x334844u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 96), GPR_VEC(ctx, 2));
    // 0x334848: 0x24630070  addiu       $v1, $v1, 0x70
    ctx->pc = 0x334848u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
    // 0x33484c: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x33484cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
    // 0x334850: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x334850u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334854: 0xc10a322  jal         func_428C88
    ctx->pc = 0x334854u;
    SET_GPR_U32(ctx, 31, 0x33485Cu);
    ctx->pc = 0x334858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334854u;
    // 0x334858: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x428C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x428C88u, 0x334854u, 0x33485Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33485Cu;
label_33485c:
    // 0x33485c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x33485cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334860: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x334860u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x334864: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x334864u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x334868: 0x70e21389  pcpyld      $v0, $a3, $v0
    ctx->pc = 0x334868u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 2)));
    // 0x33486c: 0x8f86be20  lw          $a2, -0x41E0($gp)
    ctx->pc = 0x33486cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
    // 0x334870: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x334870u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x334874: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x334874u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x334878: 0xaf86be20  sw          $a2, -0x41E0($gp)
    ctx->pc = 0x334878u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 6));
    // 0x33487c: 0x3c026c01  lui         $v0, 0x6C01
    ctx->pc = 0x33487cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27649 << 16));
    // 0x334880: 0x344203fb  ori         $v0, $v0, 0x3FB
    ctx->pc = 0x334880u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1019);
    // 0x334884: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x334884u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x334888: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x334888u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x33488c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x33488cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x334890: 0x34420404  ori         $v0, $v0, 0x404
    ctx->pc = 0x334890u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1028);
    // 0x334894: 0x70471389  pcpyld      $v0, $v0, $a3
    ctx->pc = 0x334894u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 7)));
    // 0x334898: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x334898u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x33489c: 0x24c30010  addiu       $v1, $a2, 0x10
    ctx->pc = 0x33489cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x3348a0: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x3348a0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
    // 0x3348a4: 0xdf82ae80  ld          $v0, -0x5180($gp)
    ctx->pc = 0x3348a4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946432)));
    // 0x3348a8: 0xc7858054  lwc1        $f5, -0x7FAC($gp)
    ctx->pc = 0x3348a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x3348ac: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x3348acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x3348b0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3348B0u;
    {
        const bool branch_taken_0x3348b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3348B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3348B0u;
        // 0x3348b4: 0x92620044  lbu         $v0, 0x44($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3348b0) {
            ctx->pc = 0x3348C0u;
            goto label_3348c0;
        }
    }
    ctx->pc = 0x3348B8u;
    // 0x3348b8: 0xc7858434  lwc1        $f5, -0x7BCC($gp)
    ctx->pc = 0x3348b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935604)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x3348bc: 0x0  nop
    ctx->pc = 0x3348bcu;
    // NOP
label_3348c0:
    // 0x3348c0: 0x92630045  lbu         $v1, 0x45($s3)
    ctx->pc = 0x3348c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 69)));
    // 0x3348c4: 0x92640046  lbu         $a0, 0x46($s3)
    ctx->pc = 0x3348c4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 70)));
    // 0x3348c8: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x3348c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x3348cc: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x3348ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x3348d0: 0x92650047  lbu         $a1, 0x47($s3)
    ctx->pc = 0x3348d0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 71)));
    // 0x3348d4: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x3348d4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3348d8: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x3348d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x3348dc: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x3348dcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3348e0: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x3348e0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x3348e4: 0xc7818434  lwc1        $f1, -0x7BCC($gp)
    ctx->pc = 0x3348e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935604)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3348e8: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x3348e8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3348ec: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3348ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3348f0: 0x46010182  mul.s       $f6, $f0, $f1
    ctx->pc = 0x3348f0u;
    ctx->f[6] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x3348f4: 0x460519c2  mul.s       $f7, $f3, $f5
    ctx->pc = 0x3348f4u;
    ctx->f[7] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
    // 0x3348f8: 0x44023000  mfc1        $v0, $f6
    ctx->pc = 0x3348f8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[6], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x3348fc: 0x44033800  mfc1        $v1, $f7
    ctx->pc = 0x3348fcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[7], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x334900: 0x70021789  pexew       $v0, $v0
    ctx->pc = 0x334900u;
    SET_GPR_VEC(ctx, 2, PS2_PEXEW(GPR_VEC(ctx, 2)));
    // 0x334904: 0x70031f89  pexew       $v1, $v1
    ctx->pc = 0x334904u;
    SET_GPR_VEC(ctx, 3, PS2_PEXEW(GPR_VEC(ctx, 3)));
    // 0x334908: 0x46051182  mul.s       $f6, $f2, $f5
    ctx->pc = 0x334908u;
    ctx->f[6] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
    // 0x33490c: 0x460521c2  mul.s       $f7, $f4, $f5
    ctx->pc = 0x33490cu;
    ctx->f[7] = FPU_MUL_S(ctx->f[4], ctx->f[5]);
    // 0x334910: 0x44023000  mfc1        $v0, $f6
    ctx->pc = 0x334910u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[6], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x334914: 0x44033800  mfc1        $v1, $f7
    ctx->pc = 0x334914u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[7], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x334918: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x334918u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x33491c: 0x7cc20010  sq          $v0, 0x10($a2)
    ctx->pc = 0x33491cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 16), GPR_VEC(ctx, 2));
    // 0x334920: 0x24c30020  addiu       $v1, $a2, 0x20
    ctx->pc = 0x334920u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x334924: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x334924u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
    // 0x334928: 0x3c026c01  lui         $v0, 0x6C01
    ctx->pc = 0x334928u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27649 << 16));
    // 0x33492c: 0x344203fc  ori         $v0, $v0, 0x3FC
    ctx->pc = 0x33492cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1020);
    // 0x334930: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x334930u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x334934: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x334934u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x334938: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x334938u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x33493c: 0x34420404  ori         $v0, $v0, 0x404
    ctx->pc = 0x33493cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1028);
    // 0x334940: 0x70471389  pcpyld      $v0, $v0, $a3
    ctx->pc = 0x334940u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 7)));
    // 0x334944: 0x7cc20020  sq          $v0, 0x20($a2)
    ctx->pc = 0x334944u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 32), GPR_VEC(ctx, 2));
    // 0x334948: 0x24c30030  addiu       $v1, $a2, 0x30
    ctx->pc = 0x334948u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 48));
    // 0x33494c: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x33494cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
    // 0x334950: 0x8e62003c  lw          $v0, 0x3C($s3)
    ctx->pc = 0x334950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 60)));
    // 0x334954: 0xc7848240  lwc1        $f4, -0x7DC0($gp)
    ctx->pc = 0x334954u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x334958: 0xc4430008  lwc1        $f3, 0x8($v0)
    ctx->pc = 0x334958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x33495c: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x33495cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x334960: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x334960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x334964: 0xc660001c  lwc1        $f0, 0x1C($s3)
    ctx->pc = 0x334964u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x334968: 0x46040942  mul.s       $f5, $f1, $f4
    ctx->pc = 0x334968u;
    ctx->f[5] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x33496c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x33496cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x334970: 0x44032800  mfc1        $v1, $f5
    ctx->pc = 0x334970u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[5], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x334974: 0x70021789  pexew       $v0, $v0
    ctx->pc = 0x334974u;
    SET_GPR_VEC(ctx, 2, PS2_PEXEW(GPR_VEC(ctx, 2)));
    // 0x334978: 0x70031f89  pexew       $v1, $v1
    ctx->pc = 0x334978u;
    SET_GPR_VEC(ctx, 3, PS2_PEXEW(GPR_VEC(ctx, 3)));
    // 0x33497c: 0x46041982  mul.s       $f6, $f3, $f4
    ctx->pc = 0x33497cu;
    ctx->f[6] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x334980: 0x46041142  mul.s       $f5, $f2, $f4
    ctx->pc = 0x334980u;
    ctx->f[5] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x334984: 0x44023000  mfc1        $v0, $f6
    ctx->pc = 0x334984u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[6], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x334988: 0x44032800  mfc1        $v1, $f5
    ctx->pc = 0x334988u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[5], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x33498c: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x33498cu;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x334990: 0x7cc20030  sq          $v0, 0x30($a2)
    ctx->pc = 0x334990u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 48), GPR_VEC(ctx, 2));
    // 0x334994: 0x24c30040  addiu       $v1, $a2, 0x40
    ctx->pc = 0x334994u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
    // 0x334998: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x334998u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
    // 0x33499c: 0x92620028  lbu         $v0, 0x28($s3)
    ctx->pc = 0x33499cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 40)));
    // 0x3349a0: 0x3c046c03  lui         $a0, 0x6C03
    ctx->pc = 0x3349a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)27651 << 16));
    // 0x3349a4: 0x348403fd  ori         $a0, $a0, 0x3FD
    ctx->pc = 0x3349a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1021);
    // 0x3349a8: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x3349a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x3349ac: 0x34840100  ori         $a0, $a0, 0x100
    ctx->pc = 0x3349acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)256);
    // 0x3349b0: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x3349b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x3349b4: 0x34840404  ori         $a0, $a0, 0x404
    ctx->pc = 0x3349b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1028);
    // 0x3349b8: 0x70871b89  pcpyld      $v1, $a0, $a3
    ctx->pc = 0x3349b8u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 7)));
    // 0x3349bc: 0x30470007  andi        $a3, $v0, 0x7
    ctx->pc = 0x3349bcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x3349c0: 0x7cc30040  sq          $v1, 0x40($a2)
    ctx->pc = 0x3349c0u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 64), GPR_VEC(ctx, 3));
    // 0x3349c4: 0x24c20050  addiu       $v0, $a2, 0x50
    ctx->pc = 0x3349c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 80));
    // 0x3349c8: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x3349c8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
    // 0x3349cc: 0x8f83aee0  lw          $v1, -0x5120($gp)
    ctx->pc = 0x3349ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946528)));
    // 0x3349d0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3349D0u;
    {
        const bool branch_taken_0x3349d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3349D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3349D0u;
        // 0x3349d4: 0x30e20004  andi        $v0, $a3, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3349d0) {
            ctx->pc = 0x3349E0u;
            goto label_3349e0;
        }
    }
    ctx->pc = 0x3349D8u;
    // 0x3349d8: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x3349D8u;
    {
        const bool branch_taken_0x3349d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3349d8) {
            ctx->pc = 0x3349DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3349D8u;
            // 0x3349dc: 0x34e70008  ori         $a3, $a3, 0x8 (Delay Slot)
            SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)8);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3349F8u;
            goto label_3349f8;
        }
    }
    ctx->pc = 0x3349E0u;
label_3349e0:
    // 0x3349e0: 0x8f82aee4  lw          $v0, -0x511C($gp)
    ctx->pc = 0x3349e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946532)));
    // 0x3349e4: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x3349E4u;
    {
        const bool branch_taken_0x3349e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3349E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3349E4u;
        // 0x3349e8: 0x30e20004  andi        $v0, $a3, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3349e4) {
            ctx->pc = 0x334A20u;
            goto label_334a20;
        }
    }
    ctx->pc = 0x3349ECu;
    // 0x3349ec: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x3349ECu;
    {
        const bool branch_taken_0x3349ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3349ec) {
            ctx->pc = 0x3349F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3349ECu;
            // 0x3349f0: 0x3c03005e  lui         $v1, 0x5E (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x334A28u;
            goto label_334a28;
        }
    }
    ctx->pc = 0x3349F4u;
    // 0x3349f4: 0x34e70008  ori         $a3, $a3, 0x8
    ctx->pc = 0x3349f4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)8);
label_3349f8:
    // 0x3349f8: 0x8f84be20  lw          $a0, -0x41E0($gp)
    ctx->pc = 0x3349f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
    // 0x3349fc: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x3349fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x334a00: 0x2463d670  addiu       $v1, $v1, -0x2990
    ctx->pc = 0x334a00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956656));
    // 0x334a04: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x334a04u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x5DD670u));
    // 0x334a08: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x334a08u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x334a0c: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x334a0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x334a10: 0xaf84be20  sw          $a0, -0x41E0($gp)
    ctx->pc = 0x334a10u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 4));
    // 0x334a14: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x334a14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x334a18: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x334A18u;
    {
        const bool branch_taken_0x334a18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x334A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334A18u;
        // 0x334a1c: 0x2463d680  addiu       $v1, $v1, -0x2980 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956672));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334a18) {
            ctx->pc = 0x334A48u;
            goto label_334a48;
        }
    }
    ctx->pc = 0x334A20u;
label_334a20:
    // 0x334a20: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x334a20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x334a24: 0x0  nop
    ctx->pc = 0x334a24u;
    // NOP
label_334a28:
    // 0x334a28: 0x8f84be20  lw          $a0, -0x41E0($gp)
    ctx->pc = 0x334a28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
    // 0x334a2c: 0x2463d650  addiu       $v1, $v1, -0x29B0
    ctx->pc = 0x334a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956624));
    // 0x334a30: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x334a30u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x334a34: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x334a34u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x334a38: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x334a38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x334a3c: 0xaf84be20  sw          $a0, -0x41E0($gp)
    ctx->pc = 0x334a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 4));
    // 0x334a40: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x334a40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x334a44: 0x2463d660  addiu       $v1, $v1, -0x29A0
    ctx->pc = 0x334a44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956640));
label_334a48:
    // 0x334a48: 0x24850010  addiu       $a1, $a0, 0x10
    ctx->pc = 0x334a48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x334a4c: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x334a4cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x334a50: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x334a50u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x334a54: 0xaf85be20  sw          $a1, -0x41E0($gp)
    ctx->pc = 0x334a54u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 5));
    // 0x334a58: 0x8f83becc  lw          $v1, -0x4134($gp)
    ctx->pc = 0x334a58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950604)));
    // 0x334a5c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x334a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x334a60: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x334A60u;
    {
        const bool branch_taken_0x334a60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x334A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334A60u;
        // 0x334a64: 0xaf80aed8  sw          $zero, -0x5128($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294946520), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334a60) {
            ctx->pc = 0x334A70u;
            goto label_334a70;
        }
    }
    ctx->pc = 0x334A68u;
    // 0x334a68: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x334a68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x334a6c: 0xaf82aed8  sw          $v0, -0x5128($gp)
    ctx->pc = 0x334a6cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294946520), GPR_U32(ctx, 2));
label_334a70:
    // 0x334a70: 0x9f82aedc  lwu         $v0, -0x5124($gp)
    ctx->pc = 0x334a70u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294946524)));
    // 0x334a74: 0x7183c  dsll32      $v1, $a3, 0
    ctx->pc = 0x334a74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) << (32 + 0));
    // 0x334a78: 0x9f84aed8  lwu         $a0, -0x5128($gp)
    ctx->pc = 0x334a78u;
    SET_GPR_ZE32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294946520)));
    // 0x334a7c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x334a7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x334a80: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x334a80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x334a84: 0x442025  or          $a0, $v0, $a0
    ctx->pc = 0x334a84u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x334a88: 0x70831b89  pcpyld      $v1, $a0, $v1
    ctx->pc = 0x334a88u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 3)));
    // 0x334a8c: 0x8f82be20  lw          $v0, -0x41E0($gp)
    ctx->pc = 0x334a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
    // 0x334a90: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x334a90u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x334a94: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x334a94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x334a98: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x334a98u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
    // 0x334a9c: 0x92630028  lbu         $v1, 0x28($s3)
    ctx->pc = 0x334a9cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 40)));
    // 0x334aa0: 0x30640010  andi        $a0, $v1, 0x10
    ctx->pc = 0x334aa0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x334aa4: 0x30620008  andi        $v0, $v1, 0x8
    ctx->pc = 0x334aa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x334aa8: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x334aa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x334aac: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x334aacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x334ab0: 0x21082  srl         $v0, $v0, 2
    ctx->pc = 0x334ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x334ab4: 0x31942  srl         $v1, $v1, 5
    ctx->pc = 0x334ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 5));
    // 0x334ab8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x334ab8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x334abc: 0xa262002b  sb          $v0, 0x2B($s3)
    ctx->pc = 0x334abcu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 43), (uint8_t)GPR_U32(ctx, 2));
    // 0x334ac0: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x334ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x334ac4: 0x8f85aed4  lw          $a1, -0x512C($gp)
    ctx->pc = 0x334ac4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946516)));
    // 0x334ac8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x334ac8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x334acc: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x334accu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x334ad0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x334ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x334ad4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x334ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x334ad8: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x334ad8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x334adc: 0x10a6000a  beq         $a1, $a2, . + 4 + (0xA << 2)
    ctx->pc = 0x334ADCu;
    {
        const bool branch_taken_0x334adc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 6));
        ctx->pc = 0x334AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334ADCu;
        // 0x334ae0: 0x6203c  dsll32      $a0, $a2, 0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334adc) {
            ctx->pc = 0x334B08u;
            goto label_334b08;
        }
    }
    ctx->pc = 0x334AE4u;
    // 0x334ae4: 0x3c035000  lui         $v1, 0x5000
    ctx->pc = 0x334ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20480 << 16));
    // 0x334ae8: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x334ae8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x334aec: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x334aecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334af0: 0x70441389  pcpyld      $v0, $v0, $a0
    ctx->pc = 0x334af0u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x334af4: 0x8f83be20  lw          $v1, -0x41E0($gp)
    ctx->pc = 0x334af4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
    // 0x334af8: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x334af8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x334afc: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x334afcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x334b00: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x334b00u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
    // 0x334b04: 0xaf86aed4  sw          $a2, -0x512C($gp)
    ctx->pc = 0x334b04u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294946516), GPR_U32(ctx, 6));
label_334b08:
    // 0x334b08: 0x8e620030  lw          $v0, 0x30($s3)
    ctx->pc = 0x334b08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 48)));
    // 0x334b0c: 0x3c070200  lui         $a3, 0x200
    ctx->pc = 0x334b0cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)512 << 16));
    // 0x334b10: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x334b10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x334b14: 0x3c085000  lui         $t0, 0x5000
    ctx->pc = 0x334b14u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)20480 << 16));
    // 0x334b18: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x334b18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x334b1c: 0x3c060300  lui         $a2, 0x300
    ctx->pc = 0x334b1cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)768 << 16));
    // 0x334b20: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x334b20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x334b24: 0x24a90018  addiu       $t1, $a1, 0x18
    ctx->pc = 0x334b24u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), 24));
    // 0x334b28: 0x9d240008  lwu         $a0, 0x8($t1)
    ctx->pc = 0x334b28u;
    SET_GPR_ZE32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x334b2c: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x334b2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x334b30: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x334b30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x334b34: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x334b34u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x334b38: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x334b38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x334b3c: 0x882025  or          $a0, $a0, $t0
    ctx->pc = 0x334b3cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 8));
    // 0x334b40: 0x70441389  pcpyld      $v0, $v0, $a0
    ctx->pc = 0x334b40u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x334b44: 0x8f83be20  lw          $v1, -0x41E0($gp)
    ctx->pc = 0x334b44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
    // 0x334b48: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x334b48u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x334b4c: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x334b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x334b50: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x334b50u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
    // 0x334b54: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x334b54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_334b58:
    // 0x334b58: 0x42000039  di
    ctx->pc = 0x334b58u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x334b5c: 0x40f  sync.p
    ctx->pc = 0x334b5cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x334b60: 0x40036000  mfc0        $v1, Status
    ctx->pc = 0x334b60u;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_status);
    // 0x334b64: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x334b64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x334b68: 0x0  nop
    ctx->pc = 0x334b68u;
    // NOP
    // 0x334b6c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x334B6Cu;
    {
        const bool branch_taken_0x334b6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x334b6c) {
            ctx->pc = 0x334B58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_334b58;
        }
    }
    ctx->pc = 0x334B74u;
    // 0x334b74: 0x8ca30018  lw          $v1, 0x18($a1)
    ctx->pc = 0x334b74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x334b78: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x334b78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x334b7c: 0xaca30018  sw          $v1, 0x18($a1)
    ctx->pc = 0x334b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 3));
    // 0x334b80: 0x42000038  ei
    ctx->pc = 0x334b80u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x334b84: 0x8d220004  lw          $v0, 0x4($t1)
    ctx->pc = 0x334b84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x334b88: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x334b88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x334b8c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x334b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x334b90: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x334B90u;
    {
        const bool branch_taken_0x334b90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x334B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334B90u;
        // 0x334b94: 0xad220004  sw          $v0, 0x4($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334b90) {
            ctx->pc = 0x334BA0u;
            goto label_334ba0;
        }
    }
    ctx->pc = 0x334B98u;
    // 0x334b98: 0xc10a762  jal         func_429D88
    ctx->pc = 0x334B98u;
    SET_GPR_U32(ctx, 31, 0x334BA0u);
    ctx->pc = 0x334B9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334B98u;
    // 0x334b9c: 0x120202d  daddu       $a0, $t1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x429D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x429D88u, 0x334B98u, 0x334BA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334BA0u;
label_334ba0:
    // 0x334ba0: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x334ba0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x334ba4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x334ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x334ba8: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x334ba8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x334bac: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x334bacu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x334bb0: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x334bb0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x334bb4: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x334bb4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x334bb8: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x334bb8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x334bbc: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x334bbcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x334bc0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x334bc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x334bc4: 0x3e00008  jr          $ra
    ctx->pc = 0x334BC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x334BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334BC4u;
        // 0x334bc8: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x334BC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x334BCCu;
    // 0x334bcc: 0x0  nop
    ctx->pc = 0x334bccu;
    // NOP
    // 0x334bd0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x334bd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x334bd4: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x334bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x334bd8: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x334bd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x334bdc: 0x7fb70040  sq          $s7, 0x40($sp)
    ctx->pc = 0x334bdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 23));
    // 0x334be0: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x334be0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334be4: 0x7fbe0030  sq          $fp, 0x30($sp)
    ctx->pc = 0x334be4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 30));
    // 0x334be8: 0xe0b82d  daddu       $s7, $a3, $zero
    ctx->pc = 0x334be8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334bec: 0xafa60018  sw          $a2, 0x18($sp)
    ctx->pc = 0x334becu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 6));
    // 0x334bf0: 0x245eb310  addiu       $fp, $v0, -0x4CF0
    ctx->pc = 0x334bf0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947600));
    // 0x334bf4: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x334bf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x334bf8: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x334bf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x334bfc: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x334bfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
    // 0x334c00: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x334c00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
    // 0x334c04: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x334c04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
    // 0x334c08: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x334c08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
    // 0x334c0c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x334c0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x334c10: 0x10c000df  beqz        $a2, . + 4 + (0xDF << 2)
    ctx->pc = 0x334C10u;
    {
        const bool branch_taken_0x334c10 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x334C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334C10u;
        // 0x334c14: 0xafa50014  sw          $a1, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334c10) {
            ctx->pc = 0x334F90u;
            goto label_334f90;
        }
    }
    ctx->pc = 0x334C18u;
    // 0x334c18: 0x8ea2006c  lw          $v0, 0x6C($s5)
    ctx->pc = 0x334c18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 108)));
    // 0x334c1c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x334c1cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334c20: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x334c20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x334c24: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x334c24u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334c28: 0x106000d1  beqz        $v1, . + 4 + (0xD1 << 2)
    ctx->pc = 0x334C28u;
    {
        const bool branch_taken_0x334c28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x334C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334C28u;
        // 0x334c2c: 0xafa2001c  sw          $v0, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334c28) {
            ctx->pc = 0x334F70u;
            goto label_334f70;
        }
    }
    ctx->pc = 0x334C30u;
    // 0x334c30: 0x3c16ffff  lui         $s6, 0xFFFF
    ctx->pc = 0x334c30u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)65535 << 16));
    // 0x334c34: 0x27b10010  addiu       $s1, $sp, 0x10
    ctx->pc = 0x334c34u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x334c38: 0x26b4001c  addiu       $s4, $s5, 0x1C
    ctx->pc = 0x334c38u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 21), 28));
    // 0x334c3c: 0x36d6ffff  ori         $s6, $s6, 0xFFFF
    ctx->pc = 0x334c3cu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) | (uint64_t)(uint16_t)65535);
    // 0x334c40: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x334c40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x334c44: 0x0  nop
    ctx->pc = 0x334c44u;
    // NOP
label_334c48:
    // 0x334c48: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x334c48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x334c4c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x334c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x334c50: 0xc106784  jal         func_419E10
    ctx->pc = 0x334C50u;
    SET_GPR_U32(ctx, 31, 0x334C58u);
    ctx->pc = 0x334C54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334C50u;
    // 0x334c54: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x419E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419E10u, 0x334C50u, 0x334C58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334C58u;
label_334c58:
    // 0x334c58: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x334c58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334c5c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x334c5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334c60: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x334c60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334c64: 0xc104d64  jal         func_413590
    ctx->pc = 0x334C64u;
    SET_GPR_U32(ctx, 31, 0x334C6Cu);
    ctx->pc = 0x334C68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334C64u;
    // 0x334c68: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x413590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413590u, 0x334C64u, 0x334C6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334C6Cu;
label_334c6c:
    // 0x334c6c: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x334c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x334c70: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x334c70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x334c74: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x334c74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x334c78: 0x10620021  beq         $v1, $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x334C78u;
    {
        const bool branch_taken_0x334c78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x334C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334C78u;
        // 0x334c7c: 0x26020010  addiu       $v0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334c78) {
            ctx->pc = 0x334D00u;
            goto label_334d00;
        }
    }
    ctx->pc = 0x334C80u;
    // 0x334c80: 0x26030020  addiu       $v1, $s0, 0x20
    ctx->pc = 0x334c80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x334c84: 0xc6000010  lwc1        $f0, 0x10($s0)
    ctx->pc = 0x334c84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x334c88: 0xc4480004  lwc1        $f8, 0x4($v0)
    ctx->pc = 0x334c88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x334c8c: 0xc6020020  lwc1        $f2, 0x20($s0)
    ctx->pc = 0x334c8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x334c90: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x334c90u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x334c94: 0xc4670004  lwc1        $f7, 0x4($v1)
    ctx->pc = 0x334c94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x334c98: 0x46084202  mul.s       $f8, $f8, $f8
    ctx->pc = 0x334c98u;
    ctx->f[8] = FPU_MUL_S(ctx->f[8], ctx->f[8]);
    // 0x334c9c: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x334c9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x334ca0: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x334ca0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x334ca4: 0xc6060004  lwc1        $f6, 0x4($s0)
    ctx->pc = 0x334ca4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x334ca8: 0x460739c2  mul.s       $f7, $f7, $f7
    ctx->pc = 0x334ca8u;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[7]);
    // 0x334cac: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x334cacu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x334cb0: 0xc4450008  lwc1        $f5, 0x8($v0)
    ctx->pc = 0x334cb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x334cb4: 0x46063182  mul.s       $f6, $f6, $f6
    ctx->pc = 0x334cb4u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[6]);
    // 0x334cb8: 0xc4630008  lwc1        $f3, 0x8($v1)
    ctx->pc = 0x334cb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x334cbc: 0xc6040008  lwc1        $f4, 0x8($s0)
    ctx->pc = 0x334cbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x334cc0: 0x46080000  add.s       $f0, $f0, $f8
    ctx->pc = 0x334cc0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[8]);
    // 0x334cc4: 0x46071080  add.s       $f2, $f2, $f7
    ctx->pc = 0x334cc4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[7]);
    // 0x334cc8: 0x46052942  mul.s       $f5, $f5, $f5
    ctx->pc = 0x334cc8u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[5]);
    // 0x334ccc: 0x460318c2  mul.s       $f3, $f3, $f3
    ctx->pc = 0x334cccu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x334cd0: 0x46060840  add.s       $f1, $f1, $f6
    ctx->pc = 0x334cd0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[6]);
    // 0x334cd4: 0x46042102  mul.s       $f4, $f4, $f4
    ctx->pc = 0x334cd4u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
    // 0x334cd8: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x334cd8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x334cdc: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x334cdcu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x334ce0: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x334ce0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x334ce4: 0x46020028  max.s       $f0, $f0, $f2
    ctx->pc = 0x334ce4u;
    ctx->f[0] = std::max(ctx->f[0], ctx->f[2]);
    // 0x334ce8: 0x46000868  max.s       $f1, $f1, $f0
    ctx->pc = 0x334ce8u;
    ctx->f[1] = std::max(ctx->f[1], ctx->f[0]);
    // 0x334cec: 0x46010044  c1          0x10044
    ctx->pc = 0x334cecu;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x334cf0: 0xc680000c  lwc1        $f0, 0xC($s4)
    ctx->pc = 0x334cf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x334cf4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x334CF4u;
    {
        const bool branch_taken_0x334cf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x334CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334CF4u;
        // 0x334cf8: 0x46010002  mul.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x334cf4) {
            ctx->pc = 0x334D04u;
            goto label_334d04;
        }
    }
    ctx->pc = 0x334CFCu;
    // 0x334cfc: 0x0  nop
    ctx->pc = 0x334cfcu;
    // NOP
label_334d00:
    // 0x334d00: 0xc680000c  lwc1        $f0, 0xC($s4)
    ctx->pc = 0x334d00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_334d04:
    // 0x334d04: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x334d04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x334d08: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x334d08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x334d0c: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x334d0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x334d10: 0x8c62e880  lw          $v0, -0x1780($v1)
    ctx->pc = 0x334d10u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x61E880u));
    // 0x334d14: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x334d14u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x334d18: 0xc7a40004  lwc1        $f4, 0x4($sp)
    ctx->pc = 0x334d18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x334d1c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x334d1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x334d20: 0x24430094  addiu       $v1, $v0, 0x94
    ctx->pc = 0x334d20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 148));
    // 0x334d24: 0xc4410094  lwc1        $f1, 0x94($v0)
    ctx->pc = 0x334d24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x334d28: 0xc4630004  lwc1        $f3, 0x4($v1)
    ctx->pc = 0x334d28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x334d2c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x334d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x334d30: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x334d30u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x334d34: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x334d34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x334d38: 0x46032102  mul.s       $f4, $f4, $f3
    ctx->pc = 0x334d38u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x334d3c: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x334d3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x334d40: 0xc465000c  lwc1        $f5, 0xC($v1)
    ctx->pc = 0x334d40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x334d44: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x334d44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
    // 0x334d48: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x334d48u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x334d4c: 0xc7a3000c  lwc1        $f3, 0xC($sp)
    ctx->pc = 0x334d4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x334d50: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x334d50u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x334d54: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x334D54u;
    {
        const bool branch_taken_0x334d54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x334D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334D54u;
        // 0x334d58: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334d54) {
            ctx->pc = 0x334D98u;
            goto label_334d98;
        }
    }
    ctx->pc = 0x334D5Cu;
    // 0x334d5c: 0x0  nop
    ctx->pc = 0x334d5cu;
    // NOP
label_334d60:
    // 0x334d60: 0x10b60014  beq         $a1, $s6, . + 4 + (0x14 << 2)
    ctx->pc = 0x334D60u;
    {
        const bool branch_taken_0x334d60 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 22));
        ctx->pc = 0x334D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334D60u;
        // 0x334d64: 0x24630014  addiu       $v1, $v1, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334d60) {
            ctx->pc = 0x334DB4u;
            goto label_334db4;
        }
    }
    ctx->pc = 0x334D68u;
    // 0x334d68: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x334d68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x334d6c: 0xc4630004  lwc1        $f3, 0x4($v1)
    ctx->pc = 0x334d6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x334d70: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x334d70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x334d74: 0xc7a40004  lwc1        $f4, 0x4($sp)
    ctx->pc = 0x334d74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x334d78: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x334d78u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x334d7c: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x334d7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x334d80: 0x46032102  mul.s       $f4, $f4, $f3
    ctx->pc = 0x334d80u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x334d84: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x334d84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x334d88: 0xc465000c  lwc1        $f5, 0xC($v1)
    ctx->pc = 0x334d88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x334d8c: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x334d8cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x334d90: 0xc7a3000c  lwc1        $f3, 0xC($sp)
    ctx->pc = 0x334d90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x334d94: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x334d94u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
label_334d98:
    // 0x334d98: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x334d98u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x334d9c: 0x46050001  sub.s       $f0, $f0, $f5
    ctx->pc = 0x334d9cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
    // 0x334da0: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x334da0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x334da4: 0x0  nop
    ctx->pc = 0x334da4u;
    // NOP
    // 0x334da8: 0x4502ffed  bc1fl       . + 4 + (-0x13 << 2)
    ctx->pc = 0x334DA8u;
    {
        const bool branch_taken_0x334da8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x334da8) {
            ctx->pc = 0x334DACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x334DA8u;
            // 0x334dac: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x334D60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_334d60;
        }
    }
    ctx->pc = 0x334DB0u;
    // 0x334db0: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x334db0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_334db4:
    // 0x334db4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x334db4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x334db8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x334db8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x334dbc: 0x1443002c  bne         $v0, $v1, . + 4 + (0x2C << 2)
    ctx->pc = 0x334DBCu;
    {
        const bool branch_taken_0x334dbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x334DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334DBCu;
        // 0x334dc0: 0x8c82e880  lw          $v0, -0x1780($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294961280)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334dbc) {
            ctx->pc = 0x334E70u;
            goto label_334e70;
        }
    }
    ctx->pc = 0x334DC4u;
    // 0x334dc4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x334dc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x334dc8: 0x8f83bebc  lw          $v1, -0x4144($gp)
    ctx->pc = 0x334dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950588)));
    // 0x334dcc: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x334dccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x334dd0: 0xc7a80000  lwc1        $f8, 0x0($sp)
    ctx->pc = 0x334dd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x334dd4: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x334dd4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x334dd8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x334dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x334ddc: 0xc7a70004  lwc1        $f7, 0x4($sp)
    ctx->pc = 0x334ddcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x334de0: 0x24430060  addiu       $v1, $v0, 0x60
    ctx->pc = 0x334de0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x334de4: 0xc4400060  lwc1        $f0, 0x60($v0)
    ctx->pc = 0x334de4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x334de8: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x334de8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x334dec: 0x46004002  mul.s       $f0, $f8, $f0
    ctx->pc = 0x334decu;
    ctx->f[0] = FPU_MUL_S(ctx->f[8], ctx->f[0]);
    // 0x334df0: 0xc7a60008  lwc1        $f6, 0x8($sp)
    ctx->pc = 0x334df0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x334df4: 0x46023882  mul.s       $f2, $f7, $f2
    ctx->pc = 0x334df4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[7], ctx->f[2]);
    // 0x334df8: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x334df8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x334dfc: 0xc7a5000c  lwc1        $f5, 0xC($sp)
    ctx->pc = 0x334dfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x334e00: 0x46013042  mul.s       $f1, $f6, $f1
    ctx->pc = 0x334e00u;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[1]);
    // 0x334e04: 0xc464000c  lwc1        $f4, 0xC($v1)
    ctx->pc = 0x334e04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x334e08: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x334e08u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x334e0c: 0x460028c7  neg.s       $f3, $f5
    ctx->pc = 0x334e0cu;
    ctx->f[3] = FPU_NEG_S(ctx->f[5]);
    // 0x334e10: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x334e10u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x334e14: 0x46040001  sub.s       $f0, $f0, $f4
    ctx->pc = 0x334e14u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x334e18: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x334e18u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x334e1c: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x334E1Cu;
    {
        const bool branch_taken_0x334e1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x334E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334E1Cu;
        // 0x334e20: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334e1c) {
            ctx->pc = 0x334E64u;
            goto label_334e64;
        }
    }
    ctx->pc = 0x334E24u;
    // 0x334e24: 0x0  nop
    ctx->pc = 0x334e24u;
    // NOP
label_334e28:
    // 0x334e28: 0x10a40011  beq         $a1, $a0, . + 4 + (0x11 << 2)
    ctx->pc = 0x334E28u;
    {
        const bool branch_taken_0x334e28 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x334E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334E28u;
        // 0x334e2c: 0x24630014  addiu       $v1, $v1, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334e28) {
            ctx->pc = 0x334E70u;
            goto label_334e70;
        }
    }
    ctx->pc = 0x334E30u;
    // 0x334e30: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x334e30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x334e34: 0x46002907  neg.s       $f4, $f5
    ctx->pc = 0x334e34u;
    ctx->f[4] = FPU_NEG_S(ctx->f[5]);
    // 0x334e38: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x334e38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x334e3c: 0x46004002  mul.s       $f0, $f8, $f0
    ctx->pc = 0x334e3cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[8], ctx->f[0]);
    // 0x334e40: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x334e40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x334e44: 0x46023882  mul.s       $f2, $f7, $f2
    ctx->pc = 0x334e44u;
    ctx->f[2] = FPU_MUL_S(ctx->f[7], ctx->f[2]);
    // 0x334e48: 0xc463000c  lwc1        $f3, 0xC($v1)
    ctx->pc = 0x334e48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x334e4c: 0x46013042  mul.s       $f1, $f6, $f1
    ctx->pc = 0x334e4cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[1]);
    // 0x334e50: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x334e50u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x334e54: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x334e54u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x334e58: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x334e58u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x334e5c: 0x46002034  c.lt.s      $f4, $f0
    ctx->pc = 0x334e5cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x334e60: 0x0  nop
    ctx->pc = 0x334e60u;
    // NOP
label_334e64:
    // 0x334e64: 0x4502fff0  bc1fl       . + 4 + (-0x10 << 2)
    ctx->pc = 0x334E64u;
    {
        const bool branch_taken_0x334e64 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x334e64) {
            ctx->pc = 0x334E68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x334E64u;
            // 0x334e68: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x334E28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_334e28;
        }
    }
    ctx->pc = 0x334E6Cu;
    // 0x334e6c: 0xae260000  sw          $a2, 0x0($s1)
    ctx->pc = 0x334e6cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 6));
label_334e70:
    // 0x334e70: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x334e70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x334e74: 0x1040003a  beqz        $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x334E74u;
    {
        const bool branch_taken_0x334e74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x334E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334E74u;
        // 0x334e78: 0x24020050  addiu       $v0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334e74) {
            ctx->pc = 0x334F60u;
            goto label_334f60;
        }
    }
    ctx->pc = 0x334E7Cu;
    // 0x334e7c: 0x2621018  mult        $v0, $s3, $v0
    ctx->pc = 0x334e7cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x334e80: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x334e80u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x334e84: 0x5e2021  addu        $a0, $v0, $fp
    ctx->pc = 0x334e84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
    // 0x334e88: 0x7a020000  lq          $v0, 0x0($s0)
    ctx->pc = 0x334e88u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x334e8c: 0x24850010  addiu       $a1, $a0, 0x10
    ctx->pc = 0x334e8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x334e90: 0x24860020  addiu       $a2, $a0, 0x20
    ctx->pc = 0x334e90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x334e94: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x334e94u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x334e98: 0x7a020010  lq          $v0, 0x10($s0)
    ctx->pc = 0x334e98u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x334e9c: 0xc4880000  lwc1        $f8, 0x0($a0)
    ctx->pc = 0x334e9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x334ea0: 0x7c820010  sq          $v0, 0x10($a0)
    ctx->pc = 0x334ea0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 2));
    // 0x334ea4: 0xc48a0004  lwc1        $f10, 0x4($a0)
    ctx->pc = 0x334ea4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x334ea8: 0x7a020020  lq          $v0, 0x20($s0)
    ctx->pc = 0x334ea8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x334eac: 0xc4860010  lwc1        $f6, 0x10($a0)
    ctx->pc = 0x334eacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x334eb0: 0x7c820020  sq          $v0, 0x20($a0)
    ctx->pc = 0x334eb0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 2));
    // 0x334eb4: 0xc48b0008  lwc1        $f11, 0x8($a0)
    ctx->pc = 0x334eb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
    // 0x334eb8: 0x7a030030  lq          $v1, 0x30($s0)
    ctx->pc = 0x334eb8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x334ebc: 0xc4840020  lwc1        $f4, 0x20($a0)
    ctx->pc = 0x334ebcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x334ec0: 0x7c830030  sq          $v1, 0x30($a0)
    ctx->pc = 0x334ec0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 3));
    // 0x334ec4: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x334ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x334ec8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x334ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x334ecc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x334eccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x334ed0: 0xac82003c  sw          $v0, 0x3C($a0)
    ctx->pc = 0x334ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 2));
    // 0x334ed4: 0xc6e10000  lwc1        $f1, 0x0($s7)
    ctx->pc = 0x334ed4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x334ed8: 0xc6e50004  lwc1        $f5, 0x4($s7)
    ctx->pc = 0x334ed8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x334edc: 0xc4a70004  lwc1        $f7, 0x4($a1)
    ctx->pc = 0x334edcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x334ee0: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->pc = 0x334ee0u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x334ee4: 0xc4c20004  lwc1        $f2, 0x4($a2)
    ctx->pc = 0x334ee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x334ee8: 0x46014202  mul.s       $f8, $f8, $f1
    ctx->pc = 0x334ee8u;
    ctx->f[8] = FPU_MUL_S(ctx->f[8], ctx->f[1]);
    // 0x334eec: 0x46055282  mul.s       $f10, $f10, $f5
    ctx->pc = 0x334eecu;
    ctx->f[10] = FPU_MUL_S(ctx->f[10], ctx->f[5]);
    // 0x334ef0: 0xc6e00008  lwc1        $f0, 0x8($s7)
    ctx->pc = 0x334ef0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x334ef4: 0x46051082  mul.s       $f2, $f2, $f5
    ctx->pc = 0x334ef4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
    // 0x334ef8: 0xc4a90008  lwc1        $f9, 0x8($a1)
    ctx->pc = 0x334ef8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x334efc: 0x46013182  mul.s       $f6, $f6, $f1
    ctx->pc = 0x334efcu;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[1]);
    // 0x334f00: 0xc4c30008  lwc1        $f3, 0x8($a2)
    ctx->pc = 0x334f00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x334f04: 0x460539c2  mul.s       $f7, $f7, $f5
    ctx->pc = 0x334f04u;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[5]);
    // 0x334f08: 0x460a4200  add.s       $f8, $f8, $f10
    ctx->pc = 0x334f08u;
    ctx->f[8] = FPU_ADD_S(ctx->f[8], ctx->f[10]);
    // 0x334f0c: 0x46022100  add.s       $f4, $f4, $f2
    ctx->pc = 0x334f0cu;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[2]);
    // 0x334f10: 0x46073180  add.s       $f6, $f6, $f7
    ctx->pc = 0x334f10u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[7]);
    // 0x334f14: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x334f14u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x334f18: 0x46005ac2  mul.s       $f11, $f11, $f0
    ctx->pc = 0x334f18u;
    ctx->f[11] = FPU_MUL_S(ctx->f[11], ctx->f[0]);
    // 0x334f1c: 0x46004a42  mul.s       $f9, $f9, $f0
    ctx->pc = 0x334f1cu;
    ctx->f[9] = FPU_MUL_S(ctx->f[9], ctx->f[0]);
    // 0x334f20: 0x46032100  add.s       $f4, $f4, $f3
    ctx->pc = 0x334f20u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[3]);
    // 0x334f24: 0x460b4200  add.s       $f8, $f8, $f11
    ctx->pc = 0x334f24u;
    ctx->f[8] = FPU_ADD_S(ctx->f[8], ctx->f[11]);
    // 0x334f28: 0x46093180  add.s       $f6, $f6, $f9
    ctx->pc = 0x334f28u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[9]);
    // 0x334f2c: 0xe4840048  swc1        $f4, 0x48($a0)
    ctx->pc = 0x334f2cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 72), bits); }
    // 0x334f30: 0xe4880040  swc1        $f8, 0x40($a0)
    ctx->pc = 0x334f30u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 64), bits); }
    // 0x334f34: 0x1663000a  bne         $s3, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x334F34u;
    {
        const bool branch_taken_0x334f34 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 3));
        ctx->pc = 0x334F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334F34u;
        // 0x334f38: 0xe4860044  swc1        $f6, 0x44($a0) (Delay Slot)
        { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 68), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x334f34) {
            ctx->pc = 0x334F60u;
            goto label_334f60;
        }
    }
    ctx->pc = 0x334F3Cu;
    // 0x334f3c: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x334f3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334f40: 0xc0cb58c  jal         func_32D630
    ctx->pc = 0x334F40u;
    SET_GPR_U32(ctx, 31, 0x334F48u);
    ctx->pc = 0x334F44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334F40u;
    // 0x334f44: 0x24050030  addiu       $a1, $zero, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32D630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32D630u, 0x334F40u, 0x334F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334F48u;
label_334f48:
    // 0x334f48: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x334f48u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334f4c: 0x8fa4001c  lw          $a0, 0x1C($sp)
    ctx->pc = 0x334f4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x334f50: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x334f50u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334f54: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x334f54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334f58: 0xc111718  jal         func_445C60
    ctx->pc = 0x334F58u;
    SET_GPR_U32(ctx, 31, 0x334F60u);
    ctx->pc = 0x334F5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334F58u;
    // 0x334f5c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x445C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x445C60u, 0x334F58u, 0x334F60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334F60u;
label_334f60:
    // 0x334f60: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x334f60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x334f64: 0x243102b  sltu        $v0, $s2, $v1
    ctx->pc = 0x334f64u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x334f68: 0x1440ff37  bnez        $v0, . + 4 + (-0xC9 << 2)
    ctx->pc = 0x334F68u;
    {
        const bool branch_taken_0x334f68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x334F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334F68u;
        // 0x334f6c: 0x8fa30014  lw          $v1, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334f68) {
            ctx->pc = 0x334C48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_334c48;
        }
    }
    ctx->pc = 0x334F70u;
label_334f70:
    // 0x334f70: 0x12600007  beqz        $s3, . + 4 + (0x7 << 2)
    ctx->pc = 0x334F70u;
    {
        const bool branch_taken_0x334f70 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x334F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334F70u;
        // 0x334f74: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334f70) {
            ctx->pc = 0x334F90u;
            goto label_334f90;
        }
    }
    ctx->pc = 0x334F78u;
    // 0x334f78: 0xc0cb58c  jal         func_32D630
    ctx->pc = 0x334F78u;
    SET_GPR_U32(ctx, 31, 0x334F80u);
    ctx->pc = 0x334F7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334F78u;
    // 0x334f7c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32D630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32D630u, 0x334F78u, 0x334F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334F80u;
label_334f80:
    // 0x334f80: 0x8fa4001c  lw          $a0, 0x1C($sp)
    ctx->pc = 0x334f80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x334f84: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x334f84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334f88: 0xc111718  jal         func_445C60
    ctx->pc = 0x334F88u;
    SET_GPR_U32(ctx, 31, 0x334F90u);
    ctx->pc = 0x334F8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334F88u;
    // 0x334f8c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x445C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x445C60u, 0x334F88u, 0x334F90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334F90u;
label_334f90:
    // 0x334f90: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x334f90u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334f94: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x334f94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x334f98: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x334f98u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x334f9c: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x334f9cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x334fa0: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x334fa0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x334fa4: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x334fa4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x334fa8: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x334fa8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x334fac: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x334facu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x334fb0: 0x7bb70040  lq          $s7, 0x40($sp)
    ctx->pc = 0x334fb0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x334fb4: 0x7bbe0030  lq          $fp, 0x30($sp)
    ctx->pc = 0x334fb4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x334fb8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x334fb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x334fbc: 0x3e00008  jr          $ra
    ctx->pc = 0x334FBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x334FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334FBCu;
        // 0x334fc0: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x334FBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x334FC4u;
    // 0x334fc4: 0x0  nop
    ctx->pc = 0x334fc4u;
    // NOP
    ctx->pc = 0x334fc8u;
}
