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

// Function: sub_003740A8
// Address: 0x3740a8 - 0x3742d0
void sub_003740A8_0x3740a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003740A8_0x3740a8");
#endif

    switch (ctx->pc) {
        case 0x3740f0u: goto label_3740f0;
        case 0x374158u: goto label_374158;
        case 0x3741dcu: goto label_3741dc;
        case 0x3741f0u: goto label_3741f0;
        case 0x374224u: goto label_374224;
        case 0x37427cu: goto label_37427c;
        case 0x374288u: goto label_374288;
        case 0x374294u: goto label_374294;
        default: break;
    }

    ctx->pc = 0x3740a8u;

    // 0x3740a8: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x3740a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x3740ac: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x3740acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x3740b0: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x3740b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x3740b4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3740b4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3740b8: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x3740b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x3740bc: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x3740bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x3740c0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3740c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x3740c4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3740c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x3740c8: 0xe7b700a8  swc1        $f23, 0xA8($sp)
    ctx->pc = 0x3740c8u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x3740cc: 0xe7b600a0  swc1        $f22, 0xA0($sp)
    ctx->pc = 0x3740ccu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x3740d0: 0xe7b50098  swc1        $f21, 0x98($sp)
    ctx->pc = 0x3740d0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x3740d4: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x3740d4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x3740d8: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x3740d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x3740dc: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x3740DCu;
    {
        const bool branch_taken_0x3740dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3740E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3740DCu;
        // 0x3740e0: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3740dc) {
            ctx->pc = 0x37410Cu;
            goto label_37410c;
        }
    }
    ctx->pc = 0x3740E4u;
    // 0x3740e4: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x3740e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x3740e8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3740e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3740ec: 0x0  nop
    ctx->pc = 0x3740ecu;
    // NOP
label_3740f0:
    // 0x3740f0: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x3740f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x3740f4: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x3740f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x3740f8: 0x0  nop
    ctx->pc = 0x3740f8u;
    // NOP
    // 0x3740fc: 0x0  nop
    ctx->pc = 0x3740fcu;
    // NOP
    // 0x374100: 0x0  nop
    ctx->pc = 0x374100u;
    // NOP
    // 0x374104: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x374104u;
    {
        const bool branch_taken_0x374104 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x374108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374104u;
        // 0x374108: 0xe4400054  swc1        $f0, 0x54($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 84), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x374104) {
            ctx->pc = 0x3740F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3740f0;
        }
    }
    ctx->pc = 0x37410Cu;
label_37410c:
    // 0x37410c: 0x8e720000  lw          $s2, 0x0($s3)
    ctx->pc = 0x37410cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x374110: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x374110u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x374114: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x374114u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x374118: 0x8e430028  lw          $v1, 0x28($s2)
    ctx->pc = 0x374118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x37411c: 0x310c3  sra         $v0, $v1, 3
    ctx->pc = 0x37411cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 3));
    // 0x374120: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x374120u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x374124: 0x30630007  andi        $v1, $v1, 0x7
    ctx->pc = 0x374124u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x374128: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x374128u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x37412c: 0x652804  sllv        $a1, $a1, $v1
    ctx->pc = 0x37412cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 3) & 0x1F));
    // 0x374130: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x374130u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x374134: 0x1240005a  beqz        $s2, . + 4 + (0x5A << 2)
    ctx->pc = 0x374134u;
    {
        const bool branch_taken_0x374134 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x374138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374134u;
        // 0x374138: 0xa0820000  sb          $v0, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x374134) {
            ctx->pc = 0x3742A0u;
            goto label_3742a0;
        }
    }
    ctx->pc = 0x37413Cu;
    // 0x37413c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x37413cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x374140: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x374140u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x374144: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x374144u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x374148: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x374148u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x37414c: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x37414cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x374150: 0x2454c430  addiu       $s4, $v0, -0x3BD0
    ctx->pc = 0x374150u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951984));
    // 0x374154: 0x8e510008  lw          $s1, 0x8($s2)
    ctx->pc = 0x374154u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_374158:
    // 0x374158: 0x8e220034  lw          $v0, 0x34($s1)
    ctx->pc = 0x374158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x37415c: 0x5440004e  bnel        $v0, $zero, . + 4 + (0x4E << 2)
    ctx->pc = 0x37415Cu;
    {
        const bool branch_taken_0x37415c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x37415c) {
            ctx->pc = 0x374160u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37415Cu;
            // 0x374160: 0x8e520058  lw          $s2, 0x58($s2) (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x374298u;
            goto label_374298;
        }
    }
    ctx->pc = 0x374164u;
    // 0x374164: 0x8e220030  lw          $v0, 0x30($s1)
    ctx->pc = 0x374164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x374168: 0x5440004b  bnel        $v0, $zero, . + 4 + (0x4B << 2)
    ctx->pc = 0x374168u;
    {
        const bool branch_taken_0x374168 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x374168) {
            ctx->pc = 0x37416Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x374168u;
            // 0x37416c: 0x8e520058  lw          $s2, 0x58($s2) (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x374298u;
            goto label_374298;
        }
    }
    ctx->pc = 0x374170u;
    // 0x374170: 0xc6200054  lwc1        $f0, 0x54($s1)
    ctx->pc = 0x374170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x374174: 0x46170032  c.eq.s      $f0, $f23
    ctx->pc = 0x374174u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x374178: 0x0  nop
    ctx->pc = 0x374178u;
    // NOP
    // 0x37417c: 0x45020043  bc1fl       . + 4 + (0x43 << 2)
    ctx->pc = 0x37417Cu;
    {
        const bool branch_taken_0x37417c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x37417c) {
            ctx->pc = 0x374180u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37417Cu;
            // 0x374180: 0x8e440008  lw          $a0, 0x8($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x37428Cu;
            goto label_37428c;
        }
    }
    ctx->pc = 0x374184u;
    // 0x374184: 0x6a82002b  ldl         $v0, 0x2B($s4)
    ctx->pc = 0x374184u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 43); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x374188: 0x6e820024  ldr         $v0, 0x24($s4)
    ctx->pc = 0x374188u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 36); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x37418c: 0x8e83002c  lw          $v1, 0x2C($s4)
    ctx->pc = 0x37418cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 44)));
    // 0x374190: 0xb3a20027  sdl         $v0, 0x27($sp)
    ctx->pc = 0x374190u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x374194: 0xb7a20020  sdr         $v0, 0x20($sp)
    ctx->pc = 0x374194u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x374198: 0xafa30028  sw          $v1, 0x28($sp)
    ctx->pc = 0x374198u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 3));
    // 0x37419c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x37419cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x3741a0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x3741a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x3741a4: 0xc6210038  lwc1        $f1, 0x38($s1)
    ctx->pc = 0x3741a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3741a8: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x3741a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3741ac: 0xc7a20024  lwc1        $f2, 0x24($sp)
    ctx->pc = 0x3741acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3741b0: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3741b0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3741b4: 0xc7a30028  lwc1        $f3, 0x28($sp)
    ctx->pc = 0x3741b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3741b8: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x3741b8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x3741bc: 0xc620003c  lwc1        $f0, 0x3C($s1)
    ctx->pc = 0x3741bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3741c0: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x3741c0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x3741c4: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x3741c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x3741c8: 0xc6210040  lwc1        $f1, 0x40($s1)
    ctx->pc = 0x3741c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3741cc: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x3741ccu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x3741d0: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x3741d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x3741d4: 0xc104d24  jal         func_413490
    ctx->pc = 0x3741D4u;
    SET_GPR_U32(ctx, 31, 0x3741DCu);
    ctx->pc = 0x3741D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3741D4u;
    // 0x3741d8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x413490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413490u, 0x3741D4u, 0x3741DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3741DCu;
label_3741dc:
    // 0x3741dc: 0x8e30000c  lw          $s0, 0xC($s1)
    ctx->pc = 0x3741dcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x3741e0: 0x12000024  beqz        $s0, . + 4 + (0x24 << 2)
    ctx->pc = 0x3741E0u;
    {
        const bool branch_taken_0x3741e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3741E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3741E0u;
        // 0x3741e4: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3741e0) {
            ctx->pc = 0x374274u;
            goto label_374274;
        }
    }
    ctx->pc = 0x3741E8u;
    // 0x3741e8: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x3741e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3741ec: 0x0  nop
    ctx->pc = 0x3741ecu;
    // NOP
label_3741f0:
    // 0x3741f0: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x3741f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3741f4: 0xc7a20024  lwc1        $f2, 0x24($sp)
    ctx->pc = 0x3741f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3741f8: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3741f8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3741fc: 0xc7a30028  lwc1        $f3, 0x28($sp)
    ctx->pc = 0x3741fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x374200: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x374200u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x374204: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x374204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x374208: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x374208u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x37420c: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x37420cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x374210: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x374210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x374214: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x374214u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x374218: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x374218u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x37421c: 0xc104d24  jal         func_413490
    ctx->pc = 0x37421Cu;
    SET_GPR_U32(ctx, 31, 0x374224u);
    ctx->pc = 0x374220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37421Cu;
    // 0x374220: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x413490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413490u, 0x37421Cu, 0x374224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x374224u;
label_374224:
    // 0x374224: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x374224u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x374228: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x374228u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x37422c: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x37422cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x374230: 0xc7a40004  lwc1        $f4, 0x4($sp)
    ctx->pc = 0x374230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x374234: 0xc7a50014  lwc1        $f5, 0x14($sp)
    ctx->pc = 0x374234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x374238: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x374238u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x37423c: 0xc7a30008  lwc1        $f3, 0x8($sp)
    ctx->pc = 0x37423cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x374240: 0x46052102  mul.s       $f4, $f4, $f5
    ctx->pc = 0x374240u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[5]);
    // 0x374244: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x374244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x374248: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x374248u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x37424c: 0x46041080  add.s       $f2, $f2, $f4
    ctx->pc = 0x37424cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[4]);
    // 0x374250: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x374250u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x374254: 0x46001083  div.s       $f2, $f2, $f0
    ctx->pc = 0x374254u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[2], ctx->f[0]); }
    // 0x374258: 0x46141034  c.lt.s      $f2, $f20
    ctx->pc = 0x374258u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x37425c: 0x0  nop
    ctx->pc = 0x37425cu;
    // NOP
    // 0x374260: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x374260u;
    {
        const bool branch_taken_0x374260 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x374260) {
            ctx->pc = 0x374264u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x374260u;
            // 0x374264: 0x46001506  mov.s       $f20, $f2 (Delay Slot)
            ctx->f[20] = FPU_MOV_S(ctx->f[2]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x374268u;
            goto label_374268;
        }
    }
    ctx->pc = 0x374268u;
label_374268:
    // 0x374268: 0x8e10000c  lw          $s0, 0xC($s0)
    ctx->pc = 0x374268u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x37426c: 0x5600ffe0  bnel        $s0, $zero, . + 4 + (-0x20 << 2)
    ctx->pc = 0x37426Cu;
    {
        const bool branch_taken_0x37426c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x37426c) {
            ctx->pc = 0x374270u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37426Cu;
            // 0x374270: 0xc6010000  lwc1        $f1, 0x0($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x3741F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3741f0;
        }
    }
    ctx->pc = 0x374274u;
label_374274:
    // 0x374274: 0xc0c39ca  jal         func_30E728
    ctx->pc = 0x374274u;
    SET_GPR_U32(ctx, 31, 0x37427Cu);
    ctx->pc = 0x374278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x374274u;
    // 0x374278: 0x4616a329  min.s       $f12, $f20, $f22 (Delay Slot)
    ctx->f[12] = std::min(ctx->f[20], ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x30E728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E728u, 0x374274u, 0x37427Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37427Cu;
label_37427c:
    // 0x37427c: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x37427cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x374280: 0xc0dcf7a  jal         func_373DE8
    ctx->pc = 0x374280u;
    SET_GPR_U32(ctx, 31, 0x374288u);
    ctx->pc = 0x374284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x374280u;
    // 0x374284: 0xe6200054  swc1        $f0, 0x54($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 84), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x373DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x373DE8u, 0x374280u, 0x374288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x374288u;
label_374288:
    // 0x374288: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x374288u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_37428c:
    // 0x37428c: 0xc0dc6cc  jal         func_371B30
    ctx->pc = 0x37428Cu;
    SET_GPR_U32(ctx, 31, 0x374294u);
    ctx->pc = 0x374290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37428Cu;
    // 0x374290: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x371B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x371B30u, 0x37428Cu, 0x374294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x374294u;
label_374294:
    // 0x374294: 0x8e520058  lw          $s2, 0x58($s2)
    ctx->pc = 0x374294u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
label_374298:
    // 0x374298: 0x5640ffaf  bnel        $s2, $zero, . + 4 + (-0x51 << 2)
    ctx->pc = 0x374298u;
    {
        const bool branch_taken_0x374298 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x374298) {
            ctx->pc = 0x37429Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x374298u;
            // 0x37429c: 0x8e510008  lw          $s1, 0x8($s2) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x374158u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_374158;
        }
    }
    ctx->pc = 0x3742A0u;
label_3742a0:
    // 0x3742a0: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x3742a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3742a4: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x3742a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3742a8: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x3742a8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3742ac: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x3742acu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3742b0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3742b0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3742b4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3742b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3742b8: 0xc7b700a8  lwc1        $f23, 0xA8($sp)
    ctx->pc = 0x3742b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x3742bc: 0xc7b600a0  lwc1        $f22, 0xA0($sp)
    ctx->pc = 0x3742bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x3742c0: 0xc7b50098  lwc1        $f21, 0x98($sp)
    ctx->pc = 0x3742c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x3742c4: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x3742c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3742c8: 0x3e00008  jr          $ra
    ctx->pc = 0x3742C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3742CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3742C8u;
        // 0x3742cc: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3742C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3742D0u;
}
