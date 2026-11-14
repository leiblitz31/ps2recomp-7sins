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

// Function: sub_00417490
// Address: 0x417490 - 0x4179d0
void sub_00417490_0x417490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00417490_0x417490");
#endif

    switch (ctx->pc) {
        case 0x4175a4u: goto label_4175a4;
        default: break;
    }

    ctx->pc = 0x417490u;

    // 0x417490: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x417490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x417494: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x417494u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x417498: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x417498u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x41749c: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x41749cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x4174a0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4174a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4174a4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4174a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x4174a8: 0x26070148  addiu       $a3, $s0, 0x148
    ctx->pc = 0x4174a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 328));
    // 0x4174ac: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x4174acu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x4174b0: 0x26030130  addiu       $v1, $s0, 0x130
    ctx->pc = 0x4174b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 304));
    // 0x4174b4: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x4174b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x4174b8: 0x26130124  addiu       $s3, $s0, 0x124
    ctx->pc = 0x4174b8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 292));
    // 0x4174bc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4174bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x4174c0: 0x26080178  addiu       $t0, $s0, 0x178
    ctx->pc = 0x4174c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 376));
    // 0x4174c4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x4174c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x4174c8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x4174c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x4174cc: 0x26020160  addiu       $v0, $s0, 0x160
    ctx->pc = 0x4174ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 352));
    // 0x4174d0: 0xc6010080  lwc1        $f1, 0x80($s0)
    ctx->pc = 0x4174d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4174d4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4174d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4174d8: 0xc6020078  lwc1        $f2, 0x78($s0)
    ctx->pc = 0x4174d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4174dc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x4174dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4174e0: 0x4601a201  sub.s       $f8, $f20, $f1
    ctx->pc = 0x4174e0u;
    ctx->f[8] = FPU_SUB_S(ctx->f[20], ctx->f[1]);
    // 0x4174e4: 0xc6030068  lwc1        $f3, 0x68($s0)
    ctx->pc = 0x4174e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x4174e8: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x4174e8u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x4174ec: 0xc605006c  lwc1        $f5, 0x6C($s0)
    ctx->pc = 0x4174ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x4174f0: 0xc6000084  lwc1        $f0, 0x84($s0)
    ctx->pc = 0x4174f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4174f4: 0x46001907  neg.s       $f4, $f3
    ctx->pc = 0x4174f4u;
    ctx->f[4] = FPU_NEG_S(ctx->f[3]);
    // 0x4174f8: 0xc60a007c  lwc1        $f10, 0x7C($s0)
    ctx->pc = 0x4174f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x4174fc: 0x26120094  addiu       $s2, $s0, 0x94
    ctx->pc = 0x4174fcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 148));
    // 0x417500: 0xe4e10008  swc1        $f1, 0x8($a3)
    ctx->pc = 0x417500u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 8), bits); }
    // 0x417504: 0x460242c2  mul.s       $f11, $f8, $f2
    ctx->pc = 0x417504u;
    ctx->f[11] = FPU_MUL_S(ctx->f[8], ctx->f[2]);
    // 0x417508: 0xe6010144  swc1        $f1, 0x144($s0)
    ctx->pc = 0x417508u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 324), bits); }
    // 0x41750c: 0x4600a241  sub.s       $f9, $f20, $f0
    ctx->pc = 0x41750cu;
    ctx->f[9] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x417510: 0xe4610008  swc1        $f1, 0x8($v1)
    ctx->pc = 0x417510u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x417514: 0xe6610008  swc1        $f1, 0x8($s3)
    ctx->pc = 0x417514u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
    // 0x417518: 0x460b21c0  add.s       $f7, $f4, $f11
    ctx->pc = 0x417518u;
    ctx->f[7] = FPU_ADD_S(ctx->f[4], ctx->f[11]);
    // 0x41751c: 0x460b1980  add.s       $f6, $f3, $f11
    ctx->pc = 0x41751cu;
    ctx->f[6] = FPU_ADD_S(ctx->f[3], ctx->f[11]);
    // 0x417520: 0xe5000008  swc1        $f0, 0x8($t0)
    ctx->pc = 0x417520u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 8), bits); }
    // 0x417524: 0x46024ac2  mul.s       $f11, $f9, $f2
    ctx->pc = 0x417524u;
    ctx->f[11] = FPU_MUL_S(ctx->f[9], ctx->f[2]);
    // 0x417528: 0xe6000174  swc1        $f0, 0x174($s0)
    ctx->pc = 0x417528u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 372), bits); }
    // 0x41752c: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x41752cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x417530: 0x46002847  neg.s       $f1, $f5
    ctx->pc = 0x417530u;
    ctx->f[1] = FPU_NEG_S(ctx->f[5]);
    // 0x417534: 0xe6600038  swc1        $f0, 0x38($s3)
    ctx->pc = 0x417534u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 56), bits); }
    // 0x417538: 0x460b2100  add.s       $f4, $f4, $f11
    ctx->pc = 0x417538u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[11]);
    // 0x41753c: 0xe6060124  swc1        $f6, 0x124($s0)
    ctx->pc = 0x41753cu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 292), bits); }
    // 0x417540: 0x460b18c0  add.s       $f3, $f3, $f11
    ctx->pc = 0x417540u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[11]);
    // 0x417544: 0xe6060148  swc1        $f6, 0x148($s0)
    ctx->pc = 0x417544u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 328), bits); }
    // 0x417548: 0xe607013c  swc1        $f7, 0x13C($s0)
    ctx->pc = 0x417548u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 316), bits); }
    // 0x41754c: 0x460a42c2  mul.s       $f11, $f8, $f10
    ctx->pc = 0x41754cu;
    ctx->f[11] = FPU_MUL_S(ctx->f[8], ctx->f[10]);
    // 0x417550: 0xe667000c  swc1        $f7, 0xC($s3)
    ctx->pc = 0x417550u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12), bits); }
    // 0x417554: 0xe6030178  swc1        $f3, 0x178($s0)
    ctx->pc = 0x417554u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 376), bits); }
    // 0x417558: 0xe6630030  swc1        $f3, 0x30($s3)
    ctx->pc = 0x417558u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 48), bits); }
    // 0x41755c: 0x460b0880  add.s       $f2, $f1, $f11
    ctx->pc = 0x41755cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[1], ctx->f[11]);
    // 0x417560: 0x460b2800  add.s       $f0, $f5, $f11
    ctx->pc = 0x417560u;
    ctx->f[0] = FPU_ADD_S(ctx->f[5], ctx->f[11]);
    // 0x417564: 0xe604016c  swc1        $f4, 0x16C($s0)
    ctx->pc = 0x417564u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 364), bits); }
    // 0x417568: 0x460a4ac2  mul.s       $f11, $f9, $f10
    ctx->pc = 0x417568u;
    ctx->f[11] = FPU_MUL_S(ctx->f[9], ctx->f[10]);
    // 0x41756c: 0xe664003c  swc1        $f4, 0x3C($s3)
    ctx->pc = 0x41756cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 60), bits); }
    // 0x417570: 0x8e110004  lw          $s1, 0x4($s0)
    ctx->pc = 0x417570u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x417574: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x417574u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x417578: 0xe6600004  swc1        $f0, 0x4($s3)
    ctx->pc = 0x417578u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
    // 0x41757c: 0x460b2940  add.s       $f5, $f5, $f11
    ctx->pc = 0x41757cu;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[11]);
    // 0x417580: 0xe4e20004  swc1        $f2, 0x4($a3)
    ctx->pc = 0x417580u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
    // 0x417584: 0x460b0840  add.s       $f1, $f1, $f11
    ctx->pc = 0x417584u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[11]);
    // 0x417588: 0xe662001c  swc1        $f2, 0x1C($s3)
    ctx->pc = 0x417588u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 28), bits); }
    // 0x41758c: 0x26270050  addiu       $a3, $s1, 0x50
    ctx->pc = 0x41758cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    // 0x417590: 0xe4450004  swc1        $f5, 0x4($v0)
    ctx->pc = 0x417590u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x417594: 0xe6650034  swc1        $f5, 0x34($s3)
    ctx->pc = 0x417594u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 52), bits); }
    // 0x417598: 0xe5010004  swc1        $f1, 0x4($t0)
    ctx->pc = 0x417598u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4), bits); }
    // 0x41759c: 0xc104d74  jal         func_4135D0
    ctx->pc = 0x41759Cu;
    SET_GPR_U32(ctx, 31, 0x4175A4u);
    ctx->pc = 0x4175A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41759Cu;
    // 0x4175a0: 0xe661004c  swc1        $f1, 0x4C($s3) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 76), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4135D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4135D0u, 0x41759Cu, 0x4175A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4175A4u;
label_4175a4:
    // 0x4175a4: 0x6a220077  ldl         $v0, 0x77($s1)
    ctx->pc = 0x4175a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 119); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x4175a8: 0x6e220070  ldr         $v0, 0x70($s1)
    ctx->pc = 0x4175a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 112); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x4175ac: 0x8e230078  lw          $v1, 0x78($s1)
    ctx->pc = 0x4175acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
    // 0x4175b0: 0xb202009b  sdl         $v0, 0x9B($s0)
    ctx->pc = 0x4175b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 155); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4175b4: 0xb6020094  sdr         $v0, 0x94($s0)
    ctx->pc = 0x4175b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 148); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4175b8: 0xae03009c  sw          $v1, 0x9C($s0)
    ctx->pc = 0x4175b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 3));
    // 0x4175bc: 0xc6020094  lwc1        $f2, 0x94($s0)
    ctx->pc = 0x4175bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4175c0: 0xc6600030  lwc1        $f0, 0x30($s3)
    ctx->pc = 0x4175c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4175c4: 0xc6610034  lwc1        $f1, 0x34($s3)
    ctx->pc = 0x4175c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4175c8: 0xc6440004  lwc1        $f4, 0x4($s2)
    ctx->pc = 0x4175c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x4175cc: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x4175ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x4175d0: 0xc6630038  lwc1        $f3, 0x38($s3)
    ctx->pc = 0x4175d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x4175d4: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x4175d4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x4175d8: 0xc6420008  lwc1        $f2, 0x8($s2)
    ctx->pc = 0x4175d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4175dc: 0x8e040094  lw          $a0, 0x94($s0)
    ctx->pc = 0x4175dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
    // 0x4175e0: 0x460218c2  mul.s       $f3, $f3, $f2
    ctx->pc = 0x4175e0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x4175e4: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x4175e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x4175e8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x4175e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x4175ec: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x4175ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x4175f0: 0x427c3  sra         $a0, $a0, 31
    ctx->pc = 0x4175f0u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 31));
    // 0x4175f4: 0x217c3  sra         $v0, $v0, 31
    ctx->pc = 0x4175f4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 31));
    // 0x4175f8: 0x31fc3  sra         $v1, $v1, 31
    ctx->pc = 0x4175f8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 31));
    // 0x4175fc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x4175fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x417600: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x417600u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x417604: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x417604u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x417608: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x417608u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x41760c: 0xa2440010  sb          $a0, 0x10($s2)
    ctx->pc = 0x41760cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 16), (uint8_t)GPR_U32(ctx, 4));
    // 0x417610: 0xa2420011  sb          $v0, 0x11($s2)
    ctx->pc = 0x417610u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 17), (uint8_t)GPR_U32(ctx, 2));
    // 0x417614: 0xe640000c  swc1        $f0, 0xC($s2)
    ctx->pc = 0x417614u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
    // 0x417618: 0xa2430012  sb          $v1, 0x12($s2)
    ctx->pc = 0x417618u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 18), (uint8_t)GPR_U32(ctx, 3));
    // 0x41761c: 0xc6000094  lwc1        $f0, 0x94($s0)
    ctx->pc = 0x41761cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x417620: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x417620u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x417624: 0x46002107  neg.s       $f4, $f4
    ctx->pc = 0x417624u;
    ctx->f[4] = FPU_NEG_S(ctx->f[4]);
    // 0x417628: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x417628u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x41762c: 0xe6400014  swc1        $f0, 0x14($s2)
    ctx->pc = 0x41762cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 20), bits); }
    // 0x417630: 0xe6440018  swc1        $f4, 0x18($s2)
    ctx->pc = 0x417630u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 24), bits); }
    // 0x417634: 0xe642001c  swc1        $f2, 0x1C($s2)
    ctx->pc = 0x417634u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 28), bits); }
    // 0x417638: 0xc6010124  lwc1        $f1, 0x124($s0)
    ctx->pc = 0x417638u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x41763c: 0xc6630004  lwc1        $f3, 0x4($s3)
    ctx->pc = 0x41763cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x417640: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x417640u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x417644: 0xc6650008  lwc1        $f5, 0x8($s3)
    ctx->pc = 0x417644u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x417648: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x417648u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x41764c: 0x8e440014  lw          $a0, 0x14($s2)
    ctx->pc = 0x41764cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x417650: 0x46022942  mul.s       $f5, $f5, $f2
    ctx->pc = 0x417650u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x417654: 0x8e420018  lw          $v0, 0x18($s2)
    ctx->pc = 0x417654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x417658: 0x8e43001c  lw          $v1, 0x1C($s2)
    ctx->pc = 0x417658u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x41765c: 0x427c3  sra         $a0, $a0, 31
    ctx->pc = 0x41765cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 31));
    // 0x417660: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x417660u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x417664: 0x217c3  sra         $v0, $v0, 31
    ctx->pc = 0x417664u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 31));
    // 0x417668: 0x31fc3  sra         $v1, $v1, 31
    ctx->pc = 0x417668u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 31));
    // 0x41766c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x41766cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x417670: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x417670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x417674: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x417674u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x417678: 0x46050840  add.s       $f1, $f1, $f5
    ctx->pc = 0x417678u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[5]);
    // 0x41767c: 0xa2440024  sb          $a0, 0x24($s2)
    ctx->pc = 0x41767cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 36), (uint8_t)GPR_U32(ctx, 4));
    // 0x417680: 0xa2420025  sb          $v0, 0x25($s2)
    ctx->pc = 0x417680u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 37), (uint8_t)GPR_U32(ctx, 2));
    // 0x417684: 0xa2430026  sb          $v1, 0x26($s2)
    ctx->pc = 0x417684u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 38), (uint8_t)GPR_U32(ctx, 3));
    // 0x417688: 0xe6410020  swc1        $f1, 0x20($s2)
    ctx->pc = 0x417688u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 32), bits); }
    // 0x41768c: 0xc667000c  lwc1        $f7, 0xC($s3)
    ctx->pc = 0x41768cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x417690: 0xc662003c  lwc1        $f2, 0x3C($s3)
    ctx->pc = 0x417690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x417694: 0xc6660010  lwc1        $f6, 0x10($s3)
    ctx->pc = 0x417694u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x417698: 0xc6680040  lwc1        $f8, 0x40($s3)
    ctx->pc = 0x417698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x41769c: 0x460239c1  sub.s       $f7, $f7, $f2
    ctx->pc = 0x41769cu;
    ctx->f[7] = FPU_SUB_S(ctx->f[7], ctx->f[2]);
    // 0x4176a0: 0xc6650014  lwc1        $f5, 0x14($s3)
    ctx->pc = 0x4176a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x4176a4: 0xc6610044  lwc1        $f1, 0x44($s3)
    ctx->pc = 0x4176a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4176a8: 0x46083181  sub.s       $f6, $f6, $f8
    ctx->pc = 0x4176a8u;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[8]);
    // 0x4176ac: 0xe7a70000  swc1        $f7, 0x0($sp)
    ctx->pc = 0x4176acu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x4176b0: 0x46012941  sub.s       $f5, $f5, $f1
    ctx->pc = 0x4176b0u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[1]);
    // 0x4176b4: 0xe7a60004  swc1        $f6, 0x4($sp)
    ctx->pc = 0x4176b4u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x4176b8: 0xe7a50008  swc1        $f5, 0x8($sp)
    ctx->pc = 0x4176b8u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x4176bc: 0xc6600048  lwc1        $f0, 0x48($s3)
    ctx->pc = 0x4176bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4176c0: 0xc664004c  lwc1        $f4, 0x4C($s3)
    ctx->pc = 0x4176c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x4176c4: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x4176c4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x4176c8: 0xc6630050  lwc1        $f3, 0x50($s3)
    ctx->pc = 0x4176c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x4176cc: 0x46082101  sub.s       $f4, $f4, $f8
    ctx->pc = 0x4176ccu;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[8]);
    // 0x4176d0: 0x460118c1  sub.s       $f3, $f3, $f1
    ctx->pc = 0x4176d0u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
    // 0x4176d4: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x4176d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x4176d8: 0xe7a40014  swc1        $f4, 0x14($sp)
    ctx->pc = 0x4176d8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x4176dc: 0xe7a30018  swc1        $f3, 0x18($sp)
    ctx->pc = 0x4176dcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x4176e0: 0x46033042  mul.s       $f1, $f6, $f3
    ctx->pc = 0x4176e0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[3]);
    // 0x4176e4: 0x46003182  mul.s       $f6, $f6, $f0
    ctx->pc = 0x4176e4u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x4176e8: 0x46043882  mul.s       $f2, $f7, $f4
    ctx->pc = 0x4176e8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[7], ctx->f[4]);
    // 0x4176ec: 0x46002802  mul.s       $f0, $f5, $f0
    ctx->pc = 0x4176ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x4176f0: 0x460339c2  mul.s       $f7, $f7, $f3
    ctx->pc = 0x4176f0u;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[3]);
    // 0x4176f4: 0x46042942  mul.s       $f5, $f5, $f4
    ctx->pc = 0x4176f4u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
    // 0x4176f8: 0x46061081  sub.s       $f2, $f2, $f6
    ctx->pc = 0x4176f8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[6]);
    // 0x4176fc: 0x46070001  sub.s       $f0, $f0, $f7
    ctx->pc = 0x4176fcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[7]);
    // 0x417700: 0x46050841  sub.s       $f1, $f1, $f5
    ctx->pc = 0x417700u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[5]);
    // 0x417704: 0xe6420030  swc1        $f2, 0x30($s2)
    ctx->pc = 0x417704u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 48), bits); }
    // 0x417708: 0xe640002c  swc1        $f0, 0x2C($s2)
    ctx->pc = 0x417708u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 44), bits); }
    // 0x41770c: 0xe6410028  swc1        $f1, 0x28($s2)
    ctx->pc = 0x41770cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 40), bits); }
    // 0x417710: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x417710u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x417714: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x417714u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x417718: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x417718u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x41771c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x41771cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x417720: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x417720u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x417724: 0x46010204  c1          0x10204
    ctx->pc = 0x417724u;
    ctx->f[8] = FPU_SQRT_S(ctx->f[0]);
    // 0x417728: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x417728u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x41772c: 0x46080034  c.lt.s      $f0, $f8
    ctx->pc = 0x41772cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[8])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x417730: 0x0  nop
    ctx->pc = 0x417730u;
    // NOP
    // 0x417734: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x417734u;
    {
        const bool branch_taken_0x417734 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x417738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x417734u;
        // 0x417738: 0xc6400028  lwc1        $f0, 0x28($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x417734) {
            ctx->pc = 0x417740u;
            goto label_417740;
        }
    }
    ctx->pc = 0x41773Cu;
    // 0x41773c: 0x4608a203  div.s       $f8, $f20, $f8
    ctx->pc = 0x41773cu;
    { if (ctx->f[8] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[8] = FPU_DIV_S(ctx->f[20], ctx->f[8]); }
label_417740:
    // 0x417740: 0xc641002c  lwc1        $f1, 0x2C($s2)
    ctx->pc = 0x417740u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x417744: 0xc6420030  lwc1        $f2, 0x30($s2)
    ctx->pc = 0x417744u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x417748: 0x46080002  mul.s       $f0, $f0, $f8
    ctx->pc = 0x417748u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[8]);
    // 0x41774c: 0x46080842  mul.s       $f1, $f1, $f8
    ctx->pc = 0x41774cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[8]);
    // 0x417750: 0x46081082  mul.s       $f2, $f2, $f8
    ctx->pc = 0x417750u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[8]);
    // 0x417754: 0xe6400028  swc1        $f0, 0x28($s2)
    ctx->pc = 0x417754u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 40), bits); }
    // 0x417758: 0xe641002c  swc1        $f1, 0x2C($s2)
    ctx->pc = 0x417758u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 44), bits); }
    // 0x41775c: 0xe6420030  swc1        $f2, 0x30($s2)
    ctx->pc = 0x41775cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 48), bits); }
    // 0x417760: 0xc663000c  lwc1        $f3, 0xC($s3)
    ctx->pc = 0x417760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x417764: 0xc6640010  lwc1        $f4, 0x10($s3)
    ctx->pc = 0x417764u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x417768: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x417768u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x41776c: 0xc6650014  lwc1        $f5, 0x14($s3)
    ctx->pc = 0x41776cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x417770: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->pc = 0x417770u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x417774: 0x8e440028  lw          $a0, 0x28($s2)
    ctx->pc = 0x417774u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x417778: 0x46022942  mul.s       $f5, $f5, $f2
    ctx->pc = 0x417778u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x41777c: 0x8e42002c  lw          $v0, 0x2C($s2)
    ctx->pc = 0x41777cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
    // 0x417780: 0x8e430030  lw          $v1, 0x30($s2)
    ctx->pc = 0x417780u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x417784: 0x427c3  sra         $a0, $a0, 31
    ctx->pc = 0x417784u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 31));
    // 0x417788: 0x460418c0  add.s       $f3, $f3, $f4
    ctx->pc = 0x417788u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
    // 0x41778c: 0x217c3  sra         $v0, $v0, 31
    ctx->pc = 0x41778cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 31));
    // 0x417790: 0x31fc3  sra         $v1, $v1, 31
    ctx->pc = 0x417790u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 31));
    // 0x417794: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x417794u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x417798: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x417798u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x41779c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x41779cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x4177a0: 0x460518c0  add.s       $f3, $f3, $f5
    ctx->pc = 0x4177a0u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[5]);
    // 0x4177a4: 0xa2440038  sb          $a0, 0x38($s2)
    ctx->pc = 0x4177a4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 56), (uint8_t)GPR_U32(ctx, 4));
    // 0x4177a8: 0xa2420039  sb          $v0, 0x39($s2)
    ctx->pc = 0x4177a8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 57), (uint8_t)GPR_U32(ctx, 2));
    // 0x4177ac: 0xa243003a  sb          $v1, 0x3A($s2)
    ctx->pc = 0x4177acu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 58), (uint8_t)GPR_U32(ctx, 3));
    // 0x4177b0: 0xe6430034  swc1        $f3, 0x34($s2)
    ctx->pc = 0x4177b0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 52), bits); }
    // 0x4177b4: 0xc6620030  lwc1        $f2, 0x30($s3)
    ctx->pc = 0x4177b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4177b8: 0xc660003c  lwc1        $f0, 0x3C($s3)
    ctx->pc = 0x4177b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4177bc: 0xc6640034  lwc1        $f4, 0x34($s3)
    ctx->pc = 0x4177bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x4177c0: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x4177c0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x4177c4: 0xc6610040  lwc1        $f1, 0x40($s3)
    ctx->pc = 0x4177c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4177c8: 0xc6630038  lwc1        $f3, 0x38($s3)
    ctx->pc = 0x4177c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x4177cc: 0xc6600044  lwc1        $f0, 0x44($s3)
    ctx->pc = 0x4177ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4177d0: 0x46012101  sub.s       $f4, $f4, $f1
    ctx->pc = 0x4177d0u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[1]);
    // 0x4177d4: 0xe7a20010  swc1        $f2, 0x10($sp)
    ctx->pc = 0x4177d4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x4177d8: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x4177d8u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x4177dc: 0xe7a40014  swc1        $f4, 0x14($sp)
    ctx->pc = 0x4177dcu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x4177e0: 0xe7a30018  swc1        $f3, 0x18($sp)
    ctx->pc = 0x4177e0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x4177e4: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x4177e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4177e8: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x4177e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4177ec: 0x46011182  mul.s       $f6, $f2, $f1
    ctx->pc = 0x4177ecu;
    ctx->f[6] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x4177f0: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x4177f0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x4177f4: 0xc7a50004  lwc1        $f5, 0x4($sp)
    ctx->pc = 0x4177f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x4177f8: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x4177f8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x4177fc: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x4177fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x417800: 0x46051082  mul.s       $f2, $f2, $f5
    ctx->pc = 0x417800u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
    // 0x417804: 0x460518c2  mul.s       $f3, $f3, $f5
    ctx->pc = 0x417804u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
    // 0x417808: 0x46060001  sub.s       $f0, $f0, $f6
    ctx->pc = 0x417808u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[6]);
    // 0x41780c: 0x46041081  sub.s       $f2, $f2, $f4
    ctx->pc = 0x41780cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
    // 0x417810: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x417810u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x417814: 0xe6400040  swc1        $f0, 0x40($s2)
    ctx->pc = 0x417814u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 64), bits); }
    // 0x417818: 0xe6420044  swc1        $f2, 0x44($s2)
    ctx->pc = 0x417818u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 68), bits); }
    // 0x41781c: 0xe641003c  swc1        $f1, 0x3C($s2)
    ctx->pc = 0x41781cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 60), bits); }
    // 0x417820: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x417820u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x417824: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x417824u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x417828: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x417828u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x41782c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x41782cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x417830: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x417830u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x417834: 0x46010204  c1          0x10204
    ctx->pc = 0x417834u;
    ctx->f[8] = FPU_SQRT_S(ctx->f[0]);
    // 0x417838: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x417838u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x41783c: 0x46080034  c.lt.s      $f0, $f8
    ctx->pc = 0x41783cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[8])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x417840: 0x0  nop
    ctx->pc = 0x417840u;
    // NOP
    // 0x417844: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x417844u;
    {
        const bool branch_taken_0x417844 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x417848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x417844u;
        // 0x417848: 0xc644003c  lwc1        $f4, 0x3C($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x417844) {
            ctx->pc = 0x417858u;
            goto label_417858;
        }
    }
    ctx->pc = 0x41784Cu;
    // 0x41784c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x41784cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x417850: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x417850u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x417854: 0x46080203  div.s       $f8, $f0, $f8
    ctx->pc = 0x417854u;
    { if (ctx->f[8] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[8] = FPU_DIV_S(ctx->f[0], ctx->f[8]); }
label_417858:
    // 0x417858: 0xc6450040  lwc1        $f5, 0x40($s2)
    ctx->pc = 0x417858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x41785c: 0xc6460044  lwc1        $f6, 0x44($s2)
    ctx->pc = 0x41785cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x417860: 0x46082102  mul.s       $f4, $f4, $f8
    ctx->pc = 0x417860u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[8]);
    // 0x417864: 0x46082942  mul.s       $f5, $f5, $f8
    ctx->pc = 0x417864u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[8]);
    // 0x417868: 0x46083182  mul.s       $f6, $f6, $f8
    ctx->pc = 0x417868u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[8]);
    // 0x41786c: 0xe644003c  swc1        $f4, 0x3C($s2)
    ctx->pc = 0x41786cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 60), bits); }
    // 0x417870: 0xe6450040  swc1        $f5, 0x40($s2)
    ctx->pc = 0x417870u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 64), bits); }
    // 0x417874: 0xe6460044  swc1        $f6, 0x44($s2)
    ctx->pc = 0x417874u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 68), bits); }
    // 0x417878: 0xc661000c  lwc1        $f1, 0xC($s3)
    ctx->pc = 0x417878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x41787c: 0xc6600010  lwc1        $f0, 0x10($s3)
    ctx->pc = 0x41787cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x417880: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x417880u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x417884: 0xc6620014  lwc1        $f2, 0x14($s3)
    ctx->pc = 0x417884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x417888: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x417888u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x41788c: 0x8e44003c  lw          $a0, 0x3C($s2)
    ctx->pc = 0x41788cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
    // 0x417890: 0x46061082  mul.s       $f2, $f2, $f6
    ctx->pc = 0x417890u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[6]);
    // 0x417894: 0x8e420040  lw          $v0, 0x40($s2)
    ctx->pc = 0x417894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x417898: 0x8e430044  lw          $v1, 0x44($s2)
    ctx->pc = 0x417898u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 68)));
    // 0x41789c: 0x427c3  sra         $a0, $a0, 31
    ctx->pc = 0x41789cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 31));
    // 0x4178a0: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x4178a0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x4178a4: 0x217c3  sra         $v0, $v0, 31
    ctx->pc = 0x4178a4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 31));
    // 0x4178a8: 0x31fc3  sra         $v1, $v1, 31
    ctx->pc = 0x4178a8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 31));
    // 0x4178ac: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x4178acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x4178b0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x4178b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x4178b4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x4178b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x4178b8: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x4178b8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x4178bc: 0xa244004c  sb          $a0, 0x4C($s2)
    ctx->pc = 0x4178bcu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 76), (uint8_t)GPR_U32(ctx, 4));
    // 0x4178c0: 0xa242004d  sb          $v0, 0x4D($s2)
    ctx->pc = 0x4178c0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 77), (uint8_t)GPR_U32(ctx, 2));
    // 0x4178c4: 0xa243004e  sb          $v1, 0x4E($s2)
    ctx->pc = 0x4178c4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 78), (uint8_t)GPR_U32(ctx, 3));
    // 0x4178c8: 0xe6410048  swc1        $f1, 0x48($s2)
    ctx->pc = 0x4178c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 72), bits); }
    // 0x4178cc: 0xc6400028  lwc1        $f0, 0x28($s2)
    ctx->pc = 0x4178ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4178d0: 0xc641002c  lwc1        $f1, 0x2C($s2)
    ctx->pc = 0x4178d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4178d4: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x4178d4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x4178d8: 0xc6420030  lwc1        $f2, 0x30($s2)
    ctx->pc = 0x4178d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4178dc: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x4178dcu;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x4178e0: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x4178e0u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x4178e4: 0xe6400050  swc1        $f0, 0x50($s2)
    ctx->pc = 0x4178e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 80), bits); }
    // 0x4178e8: 0xe6410054  swc1        $f1, 0x54($s2)
    ctx->pc = 0x4178e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 84), bits); }
    // 0x4178ec: 0xe6420058  swc1        $f2, 0x58($s2)
    ctx->pc = 0x4178ecu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 88), bits); }
    // 0x4178f0: 0xc6630024  lwc1        $f3, 0x24($s3)
    ctx->pc = 0x4178f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x4178f4: 0xc6670028  lwc1        $f7, 0x28($s3)
    ctx->pc = 0x4178f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x4178f8: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x4178f8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x4178fc: 0xc668002c  lwc1        $f8, 0x2C($s3)
    ctx->pc = 0x4178fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x417900: 0x460139c2  mul.s       $f7, $f7, $f1
    ctx->pc = 0x417900u;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[1]);
    // 0x417904: 0x8e440050  lw          $a0, 0x50($s2)
    ctx->pc = 0x417904u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
    // 0x417908: 0x46024202  mul.s       $f8, $f8, $f2
    ctx->pc = 0x417908u;
    ctx->f[8] = FPU_MUL_S(ctx->f[8], ctx->f[2]);
    // 0x41790c: 0x8e420054  lw          $v0, 0x54($s2)
    ctx->pc = 0x41790cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
    // 0x417910: 0x8e430058  lw          $v1, 0x58($s2)
    ctx->pc = 0x417910u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
    // 0x417914: 0x427c3  sra         $a0, $a0, 31
    ctx->pc = 0x417914u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 31));
    // 0x417918: 0x460718c0  add.s       $f3, $f3, $f7
    ctx->pc = 0x417918u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[7]);
    // 0x41791c: 0x217c3  sra         $v0, $v0, 31
    ctx->pc = 0x41791cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 31));
    // 0x417920: 0x31fc3  sra         $v1, $v1, 31
    ctx->pc = 0x417920u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 31));
    // 0x417924: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x417924u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x417928: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x417928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x41792c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x41792cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x417930: 0x460818c0  add.s       $f3, $f3, $f8
    ctx->pc = 0x417930u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[8]);
    // 0x417934: 0xa2440060  sb          $a0, 0x60($s2)
    ctx->pc = 0x417934u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 96), (uint8_t)GPR_U32(ctx, 4));
    // 0x417938: 0xa2420061  sb          $v0, 0x61($s2)
    ctx->pc = 0x417938u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 97), (uint8_t)GPR_U32(ctx, 2));
    // 0x41793c: 0xa2430062  sb          $v1, 0x62($s2)
    ctx->pc = 0x41793cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 98), (uint8_t)GPR_U32(ctx, 3));
    // 0x417940: 0xe643005c  swc1        $f3, 0x5C($s2)
    ctx->pc = 0x417940u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 92), bits); }
    // 0x417944: 0x46002107  neg.s       $f4, $f4
    ctx->pc = 0x417944u;
    ctx->f[4] = FPU_NEG_S(ctx->f[4]);
    // 0x417948: 0x46002947  neg.s       $f5, $f5
    ctx->pc = 0x417948u;
    ctx->f[5] = FPU_NEG_S(ctx->f[5]);
    // 0x41794c: 0xe6440064  swc1        $f4, 0x64($s2)
    ctx->pc = 0x41794cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 100), bits); }
    // 0x417950: 0x46003187  neg.s       $f6, $f6
    ctx->pc = 0x417950u;
    ctx->f[6] = FPU_NEG_S(ctx->f[6]);
    // 0x417954: 0xe6450068  swc1        $f5, 0x68($s2)
    ctx->pc = 0x417954u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 104), bits); }
    // 0x417958: 0xe646006c  swc1        $f6, 0x6C($s2)
    ctx->pc = 0x417958u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 108), bits); }
    // 0x41795c: 0xc6600024  lwc1        $f0, 0x24($s3)
    ctx->pc = 0x41795cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x417960: 0xc6610028  lwc1        $f1, 0x28($s3)
    ctx->pc = 0x417960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x417964: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x417964u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x417968: 0xc662002c  lwc1        $f2, 0x2C($s3)
    ctx->pc = 0x417968u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x41796c: 0x46050842  mul.s       $f1, $f1, $f5
    ctx->pc = 0x41796cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x417970: 0x8e440064  lw          $a0, 0x64($s2)
    ctx->pc = 0x417970u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 100)));
    // 0x417974: 0x46061082  mul.s       $f2, $f2, $f6
    ctx->pc = 0x417974u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[6]);
    // 0x417978: 0x8e430068  lw          $v1, 0x68($s2)
    ctx->pc = 0x417978u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 104)));
    // 0x41797c: 0x8e42006c  lw          $v0, 0x6C($s2)
    ctx->pc = 0x41797cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 108)));
    // 0x417980: 0x427c3  sra         $a0, $a0, 31
    ctx->pc = 0x417980u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 31));
    // 0x417984: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x417984u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x417988: 0x31fc3  sra         $v1, $v1, 31
    ctx->pc = 0x417988u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 31));
    // 0x41798c: 0x217c3  sra         $v0, $v0, 31
    ctx->pc = 0x41798cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 31));
    // 0x417990: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x417990u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x417994: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x417994u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x417998: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x417998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x41799c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x41799cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x4179a0: 0xa2420076  sb          $v0, 0x76($s2)
    ctx->pc = 0x4179a0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 118), (uint8_t)GPR_U32(ctx, 2));
    // 0x4179a4: 0xa2440074  sb          $a0, 0x74($s2)
    ctx->pc = 0x4179a4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 116), (uint8_t)GPR_U32(ctx, 4));
    // 0x4179a8: 0xa2430075  sb          $v1, 0x75($s2)
    ctx->pc = 0x4179a8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 117), (uint8_t)GPR_U32(ctx, 3));
    // 0x4179ac: 0xe6400070  swc1        $f0, 0x70($s2)
    ctx->pc = 0x4179acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 112), bits); }
    // 0x4179b0: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x4179b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x4179b4: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x4179b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4179b8: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x4179b8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4179bc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4179bcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4179c0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4179c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4179c4: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x4179c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x4179c8: 0x3e00008  jr          $ra
    ctx->pc = 0x4179C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4179CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4179C8u;
        // 0x4179cc: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4179C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4179D0u;
}
