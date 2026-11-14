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

// Function: sub_003842E0
// Address: 0x3842e0 - 0x3845a0
void sub_003842E0_0x3842e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003842E0_0x3842e0");
#endif

    switch (ctx->pc) {
        case 0x384364u: goto label_384364;
        case 0x384378u: goto label_384378;
        case 0x384394u: goto label_384394;
        case 0x3843a8u: goto label_3843a8;
        default: break;
    }

    ctx->pc = 0x3842e0u;

    // 0x3842e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3842e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3842e4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x3842e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x3842e8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3842e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3842ec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3842ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3842f0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3842f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3842f4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3842f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3842f8: 0x26230008  addiu       $v1, $s1, 0x8
    ctx->pc = 0x3842f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x3842fc: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x3842fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x384300: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x384300u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x384304: 0x2448ba10  addiu       $t0, $v0, -0x45F0
    ctx->pc = 0x384304u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949392));
    // 0x384308: 0x69050007  ldl         $a1, 0x7($t0)
    ctx->pc = 0x384308u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x38430c: 0x6d050000  ldr         $a1, 0x0($t0)
    ctx->pc = 0x38430cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x384310: 0x8d060008  lw          $a2, 0x8($t0)
    ctx->pc = 0x384310u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x5FBA18u));
    // 0x384314: 0xb3a50007  sdl         $a1, 0x7($sp)
    ctx->pc = 0x384314u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x384318: 0xb7a50000  sdr         $a1, 0x0($sp)
    ctx->pc = 0x384318u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x38431c: 0xafa60008  sw          $a2, 0x8($sp)
    ctx->pc = 0x38431cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 6));
    // 0x384320: 0xe6010000  swc1        $f1, 0x0($s0)
    ctx->pc = 0x384320u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x384324: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x384324u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x384328: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x384328u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x38432c: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x38432cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x384330: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x384330u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x384334: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x384334u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x384338: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x384338u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x38433c: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x38433cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x384340: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x384340u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x384344: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x384344u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x384348: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x384348u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    // 0x38434c: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x38434cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x384350: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x384350u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x384354: 0xc4610014  lwc1        $f1, 0x14($v1)
    ctx->pc = 0x384354u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x384358: 0xae000038  sw          $zero, 0x38($s0)
    ctx->pc = 0x384358u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 0));
    // 0x38435c: 0xc103eb2  jal         func_40FAC8
    ctx->pc = 0x38435Cu;
    SET_GPR_U32(ctx, 31, 0x384364u);
    ctx->pc = 0x384360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38435Cu;
    // 0x384360: 0xe6010034  swc1        $f1, 0x34($s0) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x40FAC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40FAC8u, 0x38435Cu, 0x384364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x384364u;
label_384364:
    // 0x384364: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x384364u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x384368: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x384368u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38436c: 0x24a5ba20  addiu       $a1, $a1, -0x45E0
    ctx->pc = 0x38436cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949408));
    // 0x384370: 0xc103d16  jal         func_40F458
    ctx->pc = 0x384370u;
    SET_GPR_U32(ctx, 31, 0x384378u);
    ctx->pc = 0x384374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x384370u;
    // 0x384374: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40F458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40F458u, 0x384370u, 0x384378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x384378u;
label_384378:
    // 0x384378: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x384378u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x38437c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x38437cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x384380: 0xc78c8154  lwc1        $f12, -0x7EAC($gp)
    ctx->pc = 0x384380u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934868)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x384384: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x384384u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x384388: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x384388u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x38438c: 0xc103e6c  jal         func_40F9B0
    ctx->pc = 0x38438Cu;
    SET_GPR_U32(ctx, 31, 0x384394u);
    ctx->pc = 0x384390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38438Cu;
    // 0x384390: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40F9B0u, 0x38438Cu, 0x384394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x384394u;
label_384394:
    // 0x384394: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x384394u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x384398: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x384398u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38439c: 0x24a5ba30  addiu       $a1, $a1, -0x45D0
    ctx->pc = 0x38439cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949424));
    // 0x3843a0: 0xc103d16  jal         func_40F458
    ctx->pc = 0x3843A0u;
    SET_GPR_U32(ctx, 31, 0x3843A8u);
    ctx->pc = 0x3843A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3843A0u;
    // 0x3843a4: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40F458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40F458u, 0x3843A0u, 0x3843A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3843A8u;
label_3843a8:
    // 0x3843a8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x3843a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3843ac: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3843acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3843b0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3843b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3843b4: 0x3e00008  jr          $ra
    ctx->pc = 0x3843B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3843B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3843B4u;
        // 0x3843b8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3843B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3843BCu;
    // 0x3843bc: 0x0  nop
    ctx->pc = 0x3843bcu;
    // NOP
    // 0x3843c0: 0x24a20008  addiu       $v0, $a1, 0x8
    ctx->pc = 0x3843c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x3843c4: 0x24c30008  addiu       $v1, $a2, 0x8
    ctx->pc = 0x3843c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x3843c8: 0xc4c10008  lwc1        $f1, 0x8($a2)
    ctx->pc = 0x3843c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3843cc: 0xc7828158  lwc1        $f2, -0x7EA8($gp)
    ctx->pc = 0x3843ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934872)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3843d0: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x3843d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3843d4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3843d4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3843d8: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x3843d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3843dc: 0x0  nop
    ctx->pc = 0x3843dcu;
    // NOP
    // 0x3843e0: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x3843E0u;
    {
        const bool branch_taken_0x3843e0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3843E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3843E0u;
        // 0x3843e4: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3843e0) {
            ctx->pc = 0x3843F8u;
            goto label_3843f8;
        }
    }
    ctx->pc = 0x3843E8u;
    // 0x3843e8: 0xc780815c  lwc1        $f0, -0x7EA4($gp)
    ctx->pc = 0x3843e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934876)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3843ec: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x3843ECu;
    {
        const bool branch_taken_0x3843ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3843F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3843ECu;
        // 0x3843f0: 0x46000840  add.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3843ec) {
            ctx->pc = 0x384414u;
            goto label_384414;
        }
    }
    ctx->pc = 0x3843F4u;
    // 0x3843f4: 0x0  nop
    ctx->pc = 0x3843f4u;
    // NOP
label_3843f8:
    // 0x3843f8: 0xc78080b0  lwc1        $f0, -0x7F50($gp)
    ctx->pc = 0x3843f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3843fc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3843fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x384400: 0x0  nop
    ctx->pc = 0x384400u;
    // NOP
    // 0x384404: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x384404u;
    {
        const bool branch_taken_0x384404 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x384404) {
            ctx->pc = 0x384408u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x384404u;
            // 0x384408: 0x46016042  mul.s       $f1, $f12, $f1 (Delay Slot)
            ctx->f[1] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x384418u;
            goto label_384418;
        }
    }
    ctx->pc = 0x38440Cu;
    // 0x38440c: 0xc780815c  lwc1        $f0, -0x7EA4($gp)
    ctx->pc = 0x38440cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934876)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x384410: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x384410u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_384414:
    // 0x384414: 0x46016042  mul.s       $f1, $f12, $f1
    ctx->pc = 0x384414u;
    ctx->f[1] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
label_384418:
    // 0x384418: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x384418u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x38441c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x38441cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x384420: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x384420u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x384424: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x384424u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x384428: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x384428u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x38442c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x38442cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x384430: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x384430u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x384434: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x384434u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x384438: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x384438u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x38443c: 0xc4420008  lwc1        $f2, 0x8($v0)
    ctx->pc = 0x38443cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x384440: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x384440u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x384444: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x384444u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x384448: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x384448u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x38444c: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x38444cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x384450: 0xe4820008  swc1        $f2, 0x8($a0)
    ctx->pc = 0x384450u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x384454: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x384454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x384458: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x384458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x38445c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x38445cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x384460: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x384460u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x384464: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x384464u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x384468: 0xe481000c  swc1        $f1, 0xC($a0)
    ctx->pc = 0x384468u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x38446c: 0xc4420010  lwc1        $f2, 0x10($v0)
    ctx->pc = 0x38446cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x384470: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x384470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x384474: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x384474u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x384478: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x384478u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x38447c: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x38447cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x384480: 0xe4820010  swc1        $f2, 0x10($a0)
    ctx->pc = 0x384480u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x384484: 0xc4410014  lwc1        $f1, 0x14($v0)
    ctx->pc = 0x384484u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x384488: 0xc4600014  lwc1        $f0, 0x14($v1)
    ctx->pc = 0x384488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x38448c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x38448cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x384490: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x384490u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x384494: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x384494u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x384498: 0x3e00008  jr          $ra
    ctx->pc = 0x384498u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38449Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384498u;
        // 0x38449c: 0xe4810014  swc1        $f1, 0x14($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x384498u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3844A0u;
    // 0x3844a0: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x3844a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3844a4: 0x24a20008  addiu       $v0, $a1, 0x8
    ctx->pc = 0x3844a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x3844a8: 0xc4c00004  lwc1        $f0, 0x4($a2)
    ctx->pc = 0x3844a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3844ac: 0x24c30008  addiu       $v1, $a2, 0x8
    ctx->pc = 0x3844acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x3844b0: 0x46016301  sub.s       $f12, $f12, $f1
    ctx->pc = 0x3844b0u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[1]);
    // 0x3844b4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x3844b4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x3844b8: 0x46006303  div.s       $f12, $f12, $f0
    ctx->pc = 0x3844b8u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[12], ctx->f[0]); }
    // 0x3844bc: 0xc4c10008  lwc1        $f1, 0x8($a2)
    ctx->pc = 0x3844bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3844c0: 0xc7828160  lwc1        $f2, -0x7EA0($gp)
    ctx->pc = 0x3844c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934880)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3844c4: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x3844c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3844c8: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3844c8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3844cc: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x3844ccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3844d0: 0x0  nop
    ctx->pc = 0x3844d0u;
    // NOP
    // 0x3844d4: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x3844D4u;
    {
        const bool branch_taken_0x3844d4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3844D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3844D4u;
        // 0x3844d8: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3844d4) {
            ctx->pc = 0x3844E8u;
            goto label_3844e8;
        }
    }
    ctx->pc = 0x3844DCu;
    // 0x3844dc: 0xc7808164  lwc1        $f0, -0x7E9C($gp)
    ctx->pc = 0x3844dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934884)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3844e0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3844E0u;
    {
        const bool branch_taken_0x3844e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3844E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3844E0u;
        // 0x3844e4: 0x46000840  add.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3844e0) {
            ctx->pc = 0x384504u;
            goto label_384504;
        }
    }
    ctx->pc = 0x3844E8u;
label_3844e8:
    // 0x3844e8: 0xc78080b0  lwc1        $f0, -0x7F50($gp)
    ctx->pc = 0x3844e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3844ec: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3844ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3844f0: 0x0  nop
    ctx->pc = 0x3844f0u;
    // NOP
    // 0x3844f4: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x3844F4u;
    {
        const bool branch_taken_0x3844f4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3844f4) {
            ctx->pc = 0x3844F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3844F4u;
            // 0x3844f8: 0x46016042  mul.s       $f1, $f12, $f1 (Delay Slot)
            ctx->f[1] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x384508u;
            goto label_384508;
        }
    }
    ctx->pc = 0x3844FCu;
    // 0x3844fc: 0xc7808164  lwc1        $f0, -0x7E9C($gp)
    ctx->pc = 0x3844fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934884)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x384500: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x384500u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_384504:
    // 0x384504: 0x46016042  mul.s       $f1, $f12, $f1
    ctx->pc = 0x384504u;
    ctx->f[1] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
label_384508:
    // 0x384508: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x384508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x38450c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x38450cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x384510: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x384510u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x384514: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x384514u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x384518: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x384518u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x38451c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x38451cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x384520: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x384520u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x384524: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x384524u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x384528: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x384528u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x38452c: 0xc4420008  lwc1        $f2, 0x8($v0)
    ctx->pc = 0x38452cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x384530: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x384530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x384534: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x384534u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x384538: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x384538u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x38453c: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x38453cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x384540: 0xe4820008  swc1        $f2, 0x8($a0)
    ctx->pc = 0x384540u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x384544: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x384544u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x384548: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x384548u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x38454c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x38454cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x384550: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x384550u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x384554: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x384554u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x384558: 0xe481000c  swc1        $f1, 0xC($a0)
    ctx->pc = 0x384558u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x38455c: 0xc4420010  lwc1        $f2, 0x10($v0)
    ctx->pc = 0x38455cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x384560: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x384560u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x384564: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x384564u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x384568: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x384568u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x38456c: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x38456cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x384570: 0xe4820010  swc1        $f2, 0x10($a0)
    ctx->pc = 0x384570u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x384574: 0xc4410014  lwc1        $f1, 0x14($v0)
    ctx->pc = 0x384574u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x384578: 0xc4600014  lwc1        $f0, 0x14($v1)
    ctx->pc = 0x384578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x38457c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x38457cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x384580: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x384580u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x384584: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x384584u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x384588: 0x3e00008  jr          $ra
    ctx->pc = 0x384588u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38458Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384588u;
        // 0x38458c: 0xe4810014  swc1        $f1, 0x14($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x384588u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x384590u;
    // 0x384590: 0x3e00008  jr          $ra
    ctx->pc = 0x384590u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x384590u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x384598u;
    // 0x384598: 0x3e00008  jr          $ra
    ctx->pc = 0x384598u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x384598u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3845A0u;
}
