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

// Function: sub_003B1FF8
// Address: 0x3b1ff8 - 0x3b2370
void sub_003B1FF8_0x3b1ff8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B1FF8_0x3b1ff8");
#endif

    switch (ctx->pc) {
        case 0x3b2028u: goto label_3b2028;
        case 0x3b204cu: goto label_3b204c;
        case 0x3b21c0u: goto label_3b21c0;
        default: break;
    }

    ctx->pc = 0x3b1ff8u;

    // 0x3b1ff8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3b1ff8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3b1ffc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3b1ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3b2000: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x3b2000u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x3b2004: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3b2004u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3b2008: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x3b2008u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x3b200c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3b200cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b2010: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3b2010u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3b2014: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x3b2014u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3b2018: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3B2018u;
    {
        const bool branch_taken_0x3b2018 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3B201Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2018u;
        // 0x3b201c: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b2018) {
            ctx->pc = 0x3B2030u;
            goto label_3b2030;
        }
    }
    ctx->pc = 0x3B2020u;
    // 0x3b2020: 0xc1036d2  jal         func_40DB48
    ctx->pc = 0x3B2020u;
    SET_GPR_U32(ctx, 31, 0x3B2028u);
    ctx->pc = 0x3B2024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B2020u;
    // 0x3b2024: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB48u, 0x3B2020u, 0x3B2028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B2028u;
label_3b2028:
    // 0x3b2028: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3B2028u;
    {
        const bool branch_taken_0x3b2028 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B202Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2028u;
        // 0x3b202c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b2028) {
            ctx->pc = 0x3B2034u;
            goto label_3b2034;
        }
    }
    ctx->pc = 0x3B2030u;
label_3b2030:
    // 0x3b2030: 0x8e320000  lw          $s2, 0x0($s1)
    ctx->pc = 0x3b2030u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3b2034:
    // 0x3b2034: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x3b2034u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3b2038: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3b2038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3b203c: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3B203Cu;
    {
        const bool branch_taken_0x3b203c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3B2040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B203Cu;
        // 0x3b2040: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b203c) {
            ctx->pc = 0x3B204Cu;
            goto label_3b204c;
        }
    }
    ctx->pc = 0x3B2044u;
    // 0x3b2044: 0xc10376a  jal         func_40DDA8
    ctx->pc = 0x3B2044u;
    SET_GPR_U32(ctx, 31, 0x3B204Cu);
    ctx->pc = 0x3B2048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B2044u;
    // 0x3b2048: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DDA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DDA8u, 0x3B2044u, 0x3B204Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B204Cu;
label_3b204c:
    // 0x3b204c: 0x584000c1  blezl       $v0, . + 4 + (0xC1 << 2)
    ctx->pc = 0x3B204Cu;
    {
        const bool branch_taken_0x3b204c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x3b204c) {
            ctx->pc = 0x3B2050u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B204Cu;
            // 0x3b2050: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B2354u;
            goto label_3b2354;
        }
    }
    ctx->pc = 0x3B2054u;
    // 0x3b2054: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3b2054u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b2058: 0x51023  negu        $v0, $a1
    ctx->pc = 0x3b2058u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 5)));
    // 0x3b205c: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x3b205cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x3b2060: 0x10600054  beqz        $v1, . + 4 + (0x54 << 2)
    ctx->pc = 0x3B2060u;
    {
        const bool branch_taken_0x3b2060 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B2064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2060u;
        // 0x3b2064: 0x26440008  addiu       $a0, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b2060) {
            ctx->pc = 0x3B21B4u;
            goto label_3b21b4;
        }
    }
    ctx->pc = 0x3B2068u;
    // 0x3b2068: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x3b2068u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x3b206c: 0x10400036  beqz        $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x3B206Cu;
    {
        const bool branch_taken_0x3b206c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B2070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B206Cu;
        // 0x3b2070: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b206c) {
            ctx->pc = 0x3B2148u;
            goto label_3b2148;
        }
    }
    ctx->pc = 0x3B2074u;
    // 0x3b2074: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x3B2074u;
    {
        const bool branch_taken_0x3b2074 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B2078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2074u;
        // 0x3b2078: 0xc481fffc  lwc1        $f1, -0x4($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b2074) {
            ctx->pc = 0x3B20E4u;
            goto label_3b20e4;
        }
    }
    ctx->pc = 0x3B207Cu;
    // 0x3b207c: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x3b207cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3b2080: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3b2080u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3b2084: 0x0  nop
    ctx->pc = 0x3b2084u;
    // NOP
    // 0x3b2088: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x3B2088u;
    {
        const bool branch_taken_0x3b2088 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3b2088) {
            ctx->pc = 0x3B208Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B2088u;
            // 0x3b208c: 0xc6000008  lwc1        $f0, 0x8($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B2098u;
            goto label_3b2098;
        }
    }
    ctx->pc = 0x3B2090u;
    // 0x3b2090: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3B2090u;
    {
        const bool branch_taken_0x3b2090 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B2094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2090u;
        // 0x3b2094: 0xe6010000  swc1        $f1, 0x0($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b2090) {
            ctx->pc = 0x3B20A8u;
            goto label_3b20a8;
        }
    }
    ctx->pc = 0x3B2098u;
label_3b2098:
    // 0x3b2098: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3b2098u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3b209c: 0x0  nop
    ctx->pc = 0x3b209cu;
    // NOP
    // 0x3b20a0: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x3B20A0u;
    {
        const bool branch_taken_0x3b20a0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3b20a0) {
            ctx->pc = 0x3B20A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B20A0u;
            // 0x3b20a4: 0xe6010008  swc1        $f1, 0x8($s0) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B20A8u;
            goto label_3b20a8;
        }
    }
    ctx->pc = 0x3B20A8u;
label_3b20a8:
    // 0x3b20a8: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x3b20a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3b20ac: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x3b20acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3b20b0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3b20b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3b20b4: 0x0  nop
    ctx->pc = 0x3b20b4u;
    // NOP
    // 0x3b20b8: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x3B20B8u;
    {
        const bool branch_taken_0x3b20b8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3b20b8) {
            ctx->pc = 0x3B20BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B20B8u;
            // 0x3b20bc: 0xc600000c  lwc1        $f0, 0xC($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B20C8u;
            goto label_3b20c8;
        }
    }
    ctx->pc = 0x3B20C0u;
    // 0x3b20c0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3B20C0u;
    {
        const bool branch_taken_0x3b20c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B20C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B20C0u;
        // 0x3b20c4: 0xe6010004  swc1        $f1, 0x4($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b20c0) {
            ctx->pc = 0x3B20D8u;
            goto label_3b20d8;
        }
    }
    ctx->pc = 0x3B20C8u;
label_3b20c8:
    // 0x3b20c8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3b20c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3b20cc: 0x0  nop
    ctx->pc = 0x3b20ccu;
    // NOP
    // 0x3b20d0: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x3B20D0u;
    {
        const bool branch_taken_0x3b20d0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3b20d0) {
            ctx->pc = 0x3B20D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B20D0u;
            // 0x3b20d4: 0xe601000c  swc1        $f1, 0xC($s0) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B20D8u;
            goto label_3b20d8;
        }
    }
    ctx->pc = 0x3B20D8u;
label_3b20d8:
    // 0x3b20d8: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x3b20d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x3b20dc: 0x24840018  addiu       $a0, $a0, 0x18
    ctx->pc = 0x3b20dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
    // 0x3b20e0: 0xc481fffc  lwc1        $f1, -0x4($a0)
    ctx->pc = 0x3b20e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3b20e4:
    // 0x3b20e4: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x3b20e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3b20e8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3b20e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3b20ec: 0x0  nop
    ctx->pc = 0x3b20ecu;
    // NOP
    // 0x3b20f0: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x3B20F0u;
    {
        const bool branch_taken_0x3b20f0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3b20f0) {
            ctx->pc = 0x3B20F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B20F0u;
            // 0x3b20f4: 0xc6000008  lwc1        $f0, 0x8($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B2100u;
            goto label_3b2100;
        }
    }
    ctx->pc = 0x3B20F8u;
    // 0x3b20f8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3B20F8u;
    {
        const bool branch_taken_0x3b20f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B20FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B20F8u;
        // 0x3b20fc: 0xe6010000  swc1        $f1, 0x0($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b20f8) {
            ctx->pc = 0x3B2110u;
            goto label_3b2110;
        }
    }
    ctx->pc = 0x3B2100u;
label_3b2100:
    // 0x3b2100: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3b2100u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3b2104: 0x0  nop
    ctx->pc = 0x3b2104u;
    // NOP
    // 0x3b2108: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x3B2108u;
    {
        const bool branch_taken_0x3b2108 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3b2108) {
            ctx->pc = 0x3B210Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B2108u;
            // 0x3b210c: 0xe6010008  swc1        $f1, 0x8($s0) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B2110u;
            goto label_3b2110;
        }
    }
    ctx->pc = 0x3B2110u;
label_3b2110:
    // 0x3b2110: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x3b2110u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3b2114: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x3b2114u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3b2118: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3b2118u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3b211c: 0x0  nop
    ctx->pc = 0x3b211cu;
    // NOP
    // 0x3b2120: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x3B2120u;
    {
        const bool branch_taken_0x3b2120 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3b2120) {
            ctx->pc = 0x3B2124u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B2120u;
            // 0x3b2124: 0xc600000c  lwc1        $f0, 0xC($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B2130u;
            goto label_3b2130;
        }
    }
    ctx->pc = 0x3B2128u;
    // 0x3b2128: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3B2128u;
    {
        const bool branch_taken_0x3b2128 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B212Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2128u;
        // 0x3b212c: 0xe6010004  swc1        $f1, 0x4($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b2128) {
            ctx->pc = 0x3B2140u;
            goto label_3b2140;
        }
    }
    ctx->pc = 0x3B2130u;
label_3b2130:
    // 0x3b2130: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3b2130u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3b2134: 0x0  nop
    ctx->pc = 0x3b2134u;
    // NOP
    // 0x3b2138: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x3B2138u;
    {
        const bool branch_taken_0x3b2138 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3b2138) {
            ctx->pc = 0x3B213Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B2138u;
            // 0x3b213c: 0xe601000c  swc1        $f1, 0xC($s0) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B2140u;
            goto label_3b2140;
        }
    }
    ctx->pc = 0x3B2140u;
label_3b2140:
    // 0x3b2140: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x3b2140u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x3b2144: 0x24840018  addiu       $a0, $a0, 0x18
    ctx->pc = 0x3b2144u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
label_3b2148:
    // 0x3b2148: 0xc481fffc  lwc1        $f1, -0x4($a0)
    ctx->pc = 0x3b2148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3b214c: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x3b214cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3b2150: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3b2150u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3b2154: 0x0  nop
    ctx->pc = 0x3b2154u;
    // NOP
    // 0x3b2158: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x3B2158u;
    {
        const bool branch_taken_0x3b2158 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3b2158) {
            ctx->pc = 0x3B215Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B2158u;
            // 0x3b215c: 0xc6000008  lwc1        $f0, 0x8($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B2168u;
            goto label_3b2168;
        }
    }
    ctx->pc = 0x3B2160u;
    // 0x3b2160: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3B2160u;
    {
        const bool branch_taken_0x3b2160 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B2164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2160u;
        // 0x3b2164: 0xe6010000  swc1        $f1, 0x0($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b2160) {
            ctx->pc = 0x3B2178u;
            goto label_3b2178;
        }
    }
    ctx->pc = 0x3B2168u;
label_3b2168:
    // 0x3b2168: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3b2168u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3b216c: 0x0  nop
    ctx->pc = 0x3b216cu;
    // NOP
    // 0x3b2170: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x3B2170u;
    {
        const bool branch_taken_0x3b2170 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3b2170) {
            ctx->pc = 0x3B2174u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B2170u;
            // 0x3b2174: 0xe6010008  swc1        $f1, 0x8($s0) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B2178u;
            goto label_3b2178;
        }
    }
    ctx->pc = 0x3B2178u;
label_3b2178:
    // 0x3b2178: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x3b2178u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3b217c: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x3b217cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3b2180: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3b2180u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3b2184: 0x0  nop
    ctx->pc = 0x3b2184u;
    // NOP
    // 0x3b2188: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x3B2188u;
    {
        const bool branch_taken_0x3b2188 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3b2188) {
            ctx->pc = 0x3B218Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B2188u;
            // 0x3b218c: 0xc600000c  lwc1        $f0, 0xC($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B2198u;
            goto label_3b2198;
        }
    }
    ctx->pc = 0x3B2190u;
    // 0x3b2190: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3B2190u;
    {
        const bool branch_taken_0x3b2190 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B2194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2190u;
        // 0x3b2194: 0xe6010004  swc1        $f1, 0x4($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b2190) {
            ctx->pc = 0x3B21A8u;
            goto label_3b21a8;
        }
    }
    ctx->pc = 0x3B2198u;
label_3b2198:
    // 0x3b2198: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3b2198u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3b219c: 0x0  nop
    ctx->pc = 0x3b219cu;
    // NOP
    // 0x3b21a0: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x3B21A0u;
    {
        const bool branch_taken_0x3b21a0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3b21a0) {
            ctx->pc = 0x3B21A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B21A0u;
            // 0x3b21a4: 0xe601000c  swc1        $f1, 0xC($s0) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B21A8u;
            goto label_3b21a8;
        }
    }
    ctx->pc = 0x3B21A8u;
label_3b21a8:
    // 0x3b21a8: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x3b21a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x3b21ac: 0x10a00068  beqz        $a1, . + 4 + (0x68 << 2)
    ctx->pc = 0x3B21ACu;
    {
        const bool branch_taken_0x3b21ac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B21B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B21ACu;
        // 0x3b21b0: 0x24840018  addiu       $a0, $a0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b21ac) {
            ctx->pc = 0x3B2350u;
            goto label_3b2350;
        }
    }
    ctx->pc = 0x3B21B4u;
label_3b21b4:
    // 0x3b21b4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x3b21b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b21b8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x3b21b8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b21bc: 0x0  nop
    ctx->pc = 0x3b21bcu;
    // NOP
label_3b21c0:
    // 0x3b21c0: 0xc461fffc  lwc1        $f1, -0x4($v1)
    ctx->pc = 0x3b21c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3b21c4: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x3b21c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3b21c8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3b21c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3b21cc: 0x0  nop
    ctx->pc = 0x3b21ccu;
    // NOP
    // 0x3b21d0: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x3B21D0u;
    {
        const bool branch_taken_0x3b21d0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3b21d0) {
            ctx->pc = 0x3B21D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B21D0u;
            // 0x3b21d4: 0xc6000008  lwc1        $f0, 0x8($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B21E0u;
            goto label_3b21e0;
        }
    }
    ctx->pc = 0x3B21D8u;
    // 0x3b21d8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3B21D8u;
    {
        const bool branch_taken_0x3b21d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B21DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B21D8u;
        // 0x3b21dc: 0xe6010000  swc1        $f1, 0x0($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b21d8) {
            ctx->pc = 0x3B21F0u;
            goto label_3b21f0;
        }
    }
    ctx->pc = 0x3B21E0u;
label_3b21e0:
    // 0x3b21e0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3b21e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3b21e4: 0x0  nop
    ctx->pc = 0x3b21e4u;
    // NOP
    // 0x3b21e8: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x3B21E8u;
    {
        const bool branch_taken_0x3b21e8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3b21e8) {
            ctx->pc = 0x3B21ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B21E8u;
            // 0x3b21ec: 0xe6010008  swc1        $f1, 0x8($s0) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B21F0u;
            goto label_3b21f0;
        }
    }
    ctx->pc = 0x3B21F0u;
label_3b21f0:
    // 0x3b21f0: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x3b21f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3b21f4: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x3b21f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3b21f8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3b21f8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3b21fc: 0x0  nop
    ctx->pc = 0x3b21fcu;
    // NOP
    // 0x3b2200: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x3B2200u;
    {
        const bool branch_taken_0x3b2200 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3b2200) {
            ctx->pc = 0x3B2204u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B2200u;
            // 0x3b2204: 0xc600000c  lwc1        $f0, 0xC($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B2210u;
            goto label_3b2210;
        }
    }
    ctx->pc = 0x3B2208u;
    // 0x3b2208: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3B2208u;
    {
        const bool branch_taken_0x3b2208 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B220Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2208u;
        // 0x3b220c: 0xe6010004  swc1        $f1, 0x4($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b2208) {
            ctx->pc = 0x3B2220u;
            goto label_3b2220;
        }
    }
    ctx->pc = 0x3B2210u;
label_3b2210:
    // 0x3b2210: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3b2210u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3b2214: 0x0  nop
    ctx->pc = 0x3b2214u;
    // NOP
    // 0x3b2218: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x3B2218u;
    {
        const bool branch_taken_0x3b2218 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3b2218) {
            ctx->pc = 0x3B221Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B2218u;
            // 0x3b221c: 0xe601000c  swc1        $f1, 0xC($s0) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B2220u;
            goto label_3b2220;
        }
    }
    ctx->pc = 0x3B2220u;
label_3b2220:
    // 0x3b2220: 0xc4610014  lwc1        $f1, 0x14($v1)
    ctx->pc = 0x3b2220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3b2224: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x3b2224u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3b2228: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3b2228u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3b222c: 0x0  nop
    ctx->pc = 0x3b222cu;
    // NOP
    // 0x3b2230: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x3B2230u;
    {
        const bool branch_taken_0x3b2230 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3b2230) {
            ctx->pc = 0x3B2234u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B2230u;
            // 0x3b2234: 0xc6000008  lwc1        $f0, 0x8($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B2240u;
            goto label_3b2240;
        }
    }
    ctx->pc = 0x3B2238u;
    // 0x3b2238: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3B2238u;
    {
        const bool branch_taken_0x3b2238 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B223Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2238u;
        // 0x3b223c: 0xe6010000  swc1        $f1, 0x0($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b2238) {
            ctx->pc = 0x3B2250u;
            goto label_3b2250;
        }
    }
    ctx->pc = 0x3B2240u;
label_3b2240:
    // 0x3b2240: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3b2240u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3b2244: 0x0  nop
    ctx->pc = 0x3b2244u;
    // NOP
    // 0x3b2248: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x3B2248u;
    {
        const bool branch_taken_0x3b2248 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3b2248) {
            ctx->pc = 0x3B224Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B2248u;
            // 0x3b224c: 0xe6010008  swc1        $f1, 0x8($s0) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B2250u;
            goto label_3b2250;
        }
    }
    ctx->pc = 0x3B2250u;
label_3b2250:
    // 0x3b2250: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x3b2250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3b2254: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x3b2254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3b2258: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3b2258u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3b225c: 0x0  nop
    ctx->pc = 0x3b225cu;
    // NOP
    // 0x3b2260: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x3B2260u;
    {
        const bool branch_taken_0x3b2260 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3b2260) {
            ctx->pc = 0x3B2264u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B2260u;
            // 0x3b2264: 0xc600000c  lwc1        $f0, 0xC($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B2270u;
            goto label_3b2270;
        }
    }
    ctx->pc = 0x3B2268u;
    // 0x3b2268: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3B2268u;
    {
        const bool branch_taken_0x3b2268 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B226Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2268u;
        // 0x3b226c: 0xe6010004  swc1        $f1, 0x4($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b2268) {
            ctx->pc = 0x3B2280u;
            goto label_3b2280;
        }
    }
    ctx->pc = 0x3B2270u;
label_3b2270:
    // 0x3b2270: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3b2270u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3b2274: 0x0  nop
    ctx->pc = 0x3b2274u;
    // NOP
    // 0x3b2278: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x3B2278u;
    {
        const bool branch_taken_0x3b2278 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3b2278) {
            ctx->pc = 0x3B227Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B2278u;
            // 0x3b227c: 0xe601000c  swc1        $f1, 0xC($s0) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B2280u;
            goto label_3b2280;
        }
    }
    ctx->pc = 0x3B2280u;
label_3b2280:
    // 0x3b2280: 0xc461002c  lwc1        $f1, 0x2C($v1)
    ctx->pc = 0x3b2280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3b2284: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x3b2284u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3b2288: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3b2288u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3b228c: 0x0  nop
    ctx->pc = 0x3b228cu;
    // NOP
    // 0x3b2290: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x3B2290u;
    {
        const bool branch_taken_0x3b2290 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3b2290) {
            ctx->pc = 0x3B2294u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B2290u;
            // 0x3b2294: 0xc6000008  lwc1        $f0, 0x8($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B22A0u;
            goto label_3b22a0;
        }
    }
    ctx->pc = 0x3B2298u;
    // 0x3b2298: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3B2298u;
    {
        const bool branch_taken_0x3b2298 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B229Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2298u;
        // 0x3b229c: 0xe6010000  swc1        $f1, 0x0($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b2298) {
            ctx->pc = 0x3B22B0u;
            goto label_3b22b0;
        }
    }
    ctx->pc = 0x3B22A0u;
label_3b22a0:
    // 0x3b22a0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3b22a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3b22a4: 0x0  nop
    ctx->pc = 0x3b22a4u;
    // NOP
    // 0x3b22a8: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x3B22A8u;
    {
        const bool branch_taken_0x3b22a8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3b22a8) {
            ctx->pc = 0x3B22ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B22A8u;
            // 0x3b22ac: 0xe6010008  swc1        $f1, 0x8($s0) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B22B0u;
            goto label_3b22b0;
        }
    }
    ctx->pc = 0x3B22B0u;
label_3b22b0:
    // 0x3b22b0: 0xc4410030  lwc1        $f1, 0x30($v0)
    ctx->pc = 0x3b22b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3b22b4: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x3b22b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3b22b8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3b22b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3b22bc: 0x0  nop
    ctx->pc = 0x3b22bcu;
    // NOP
    // 0x3b22c0: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x3B22C0u;
    {
        const bool branch_taken_0x3b22c0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3b22c0) {
            ctx->pc = 0x3B22C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B22C0u;
            // 0x3b22c4: 0xc600000c  lwc1        $f0, 0xC($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B22D0u;
            goto label_3b22d0;
        }
    }
    ctx->pc = 0x3B22C8u;
    // 0x3b22c8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3B22C8u;
    {
        const bool branch_taken_0x3b22c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B22CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B22C8u;
        // 0x3b22cc: 0xe6010004  swc1        $f1, 0x4($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b22c8) {
            ctx->pc = 0x3B22E0u;
            goto label_3b22e0;
        }
    }
    ctx->pc = 0x3B22D0u;
label_3b22d0:
    // 0x3b22d0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3b22d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3b22d4: 0x0  nop
    ctx->pc = 0x3b22d4u;
    // NOP
    // 0x3b22d8: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x3B22D8u;
    {
        const bool branch_taken_0x3b22d8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3b22d8) {
            ctx->pc = 0x3B22DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B22D8u;
            // 0x3b22dc: 0xe601000c  swc1        $f1, 0xC($s0) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B22E0u;
            goto label_3b22e0;
        }
    }
    ctx->pc = 0x3B22E0u;
label_3b22e0:
    // 0x3b22e0: 0xc4610044  lwc1        $f1, 0x44($v1)
    ctx->pc = 0x3b22e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3b22e4: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x3b22e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3b22e8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3b22e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3b22ec: 0x0  nop
    ctx->pc = 0x3b22ecu;
    // NOP
    // 0x3b22f0: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x3B22F0u;
    {
        const bool branch_taken_0x3b22f0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3b22f0) {
            ctx->pc = 0x3B22F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B22F0u;
            // 0x3b22f4: 0xc6000008  lwc1        $f0, 0x8($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B2300u;
            goto label_3b2300;
        }
    }
    ctx->pc = 0x3B22F8u;
    // 0x3b22f8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3B22F8u;
    {
        const bool branch_taken_0x3b22f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B22FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B22F8u;
        // 0x3b22fc: 0xe6010000  swc1        $f1, 0x0($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b22f8) {
            ctx->pc = 0x3B2310u;
            goto label_3b2310;
        }
    }
    ctx->pc = 0x3B2300u;
label_3b2300:
    // 0x3b2300: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3b2300u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3b2304: 0x0  nop
    ctx->pc = 0x3b2304u;
    // NOP
    // 0x3b2308: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x3B2308u;
    {
        const bool branch_taken_0x3b2308 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3b2308) {
            ctx->pc = 0x3B230Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B2308u;
            // 0x3b230c: 0xe6010008  swc1        $f1, 0x8($s0) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B2310u;
            goto label_3b2310;
        }
    }
    ctx->pc = 0x3B2310u;
label_3b2310:
    // 0x3b2310: 0xc4410048  lwc1        $f1, 0x48($v0)
    ctx->pc = 0x3b2310u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3b2314: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x3b2314u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3b2318: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3b2318u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3b231c: 0x0  nop
    ctx->pc = 0x3b231cu;
    // NOP
    // 0x3b2320: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x3B2320u;
    {
        const bool branch_taken_0x3b2320 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3b2320) {
            ctx->pc = 0x3B2324u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B2320u;
            // 0x3b2324: 0xc600000c  lwc1        $f0, 0xC($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B2330u;
            goto label_3b2330;
        }
    }
    ctx->pc = 0x3B2328u;
    // 0x3b2328: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3B2328u;
    {
        const bool branch_taken_0x3b2328 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B232Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2328u;
        // 0x3b232c: 0xe6010004  swc1        $f1, 0x4($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b2328) {
            ctx->pc = 0x3B2340u;
            goto label_3b2340;
        }
    }
    ctx->pc = 0x3B2330u;
label_3b2330:
    // 0x3b2330: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3b2330u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3b2334: 0x0  nop
    ctx->pc = 0x3b2334u;
    // NOP
    // 0x3b2338: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x3B2338u;
    {
        const bool branch_taken_0x3b2338 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3b2338) {
            ctx->pc = 0x3B233Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B2338u;
            // 0x3b233c: 0xe601000c  swc1        $f1, 0xC($s0) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B2340u;
            goto label_3b2340;
        }
    }
    ctx->pc = 0x3B2340u;
label_3b2340:
    // 0x3b2340: 0x24a5fffc  addiu       $a1, $a1, -0x4
    ctx->pc = 0x3b2340u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967292));
    // 0x3b2344: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x3b2344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x3b2348: 0x14a0ff9d  bnez        $a1, . + 4 + (-0x63 << 2)
    ctx->pc = 0x3B2348u;
    {
        const bool branch_taken_0x3b2348 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B234Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2348u;
        // 0x3b234c: 0x24630060  addiu       $v1, $v1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b2348) {
            ctx->pc = 0x3B21C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b21c0;
        }
    }
    ctx->pc = 0x3B2350u;
label_3b2350:
    // 0x3b2350: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3b2350u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3b2354:
    // 0x3b2354: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3b2354u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3b2358: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x3b2358u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3b235c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x3b235cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b2360: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3b2360u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b2364: 0x3e00008  jr          $ra
    ctx->pc = 0x3B2364u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B2368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2364u;
        // 0x3b2368: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B2364u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B236Cu;
    // 0x3b236c: 0x0  nop
    ctx->pc = 0x3b236cu;
    // NOP
    ctx->pc = 0x3b2370u;
}
