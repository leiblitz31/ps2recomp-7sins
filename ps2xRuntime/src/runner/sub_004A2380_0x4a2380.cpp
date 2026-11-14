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

// Function: sub_004A2380
// Address: 0x4a2380 - 0x4a28b0
void sub_004A2380_0x4a2380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A2380_0x4a2380");
#endif

    switch (ctx->pc) {
        case 0x4a23d0u: goto label_4a23d0;
        case 0x4a25f4u: goto label_4a25f4;
        case 0x4a2628u: goto label_4a2628;
        case 0x4a26d8u: goto label_4a26d8;
        case 0x4a2760u: goto label_4a2760;
        case 0x4a2860u: goto label_4a2860;
        default: break;
    }

    ctx->pc = 0x4a2380u;

    // 0x4a2380: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x4a2380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x4a2384: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x4a2384u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
    // 0x4a2388: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x4a2388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
    // 0x4a238c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x4a238cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a2390: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x4a2390u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
    // 0x4a2394: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x4a2394u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a2398: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x4a2398u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
    // 0x4a239c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x4a239cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a23a0: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x4a23a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
    // 0x4a23a4: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x4a23a4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a23a8: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x4a23a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
    // 0x4a23ac: 0x27b50030  addiu       $s5, $sp, 0x30
    ctx->pc = 0x4a23acu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x4a23b0: 0x129a80b  movn        $s5, $t1, $t1
    ctx->pc = 0x4a23b0u;
    if (GPR_U64(ctx, 9) != 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 9));
    // 0x4a23b4: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x4a23b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x4a23b8: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x4a23b8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a23bc: 0x7fb70050  sq          $s7, 0x50($sp)
    ctx->pc = 0x4a23bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 23));
    // 0x4a23c0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4a23c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a23c4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x4a23c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x4a23c8: 0xc128758  jal         func_4A1D60
    ctx->pc = 0x4A23C8u;
    SET_GPR_U32(ctx, 31, 0x4A23D0u);
    ctx->pc = 0x4A23CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A23C8u;
    // 0x4a23cc: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A1D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A1D60u, 0x4A23C8u, 0x4A23D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A23D0u;
label_4a23d0:
    // 0x4a23d0: 0x290a021  addu        $s4, $s4, $s0
    ctx->pc = 0x4a23d0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
    // 0x4a23d4: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x4a23d4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
    // 0x4a23d8: 0x9222000c  lbu         $v0, 0xC($s1)
    ctx->pc = 0x4a23d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x4a23dc: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x4a23dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x4a23e0: 0x4800005  bltz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4A23E0u;
    {
        const bool branch_taken_0x4a23e0 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x4A23E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A23E0u;
        // 0x4a23e4: 0x238c2  srl         $a3, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a23e0) {
            ctx->pc = 0x4A23F8u;
            goto label_4a23f8;
        }
    }
    ctx->pc = 0x4A23E8u;
    // 0x4a23e8: 0x44842000  mtc1        $a0, $f4
    ctx->pc = 0x4a23e8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x4a23ec: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x4a23ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x4a23f0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x4A23F0u;
    {
        const bool branch_taken_0x4a23f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A23F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A23F0u;
        // 0x4a23f4: 0x9225000d  lbu         $a1, 0xD($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 13)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a23f0) {
            ctx->pc = 0x4A2414u;
            goto label_4a2414;
        }
    }
    ctx->pc = 0x4A23F8u;
label_4a23f8:
    // 0x4a23f8: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x4a23f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x4a23fc: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x4a23fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x4a2400: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x4a2400u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x4a2404: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x4a2404u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x4a2408: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x4a2408u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x4a240c: 0x46042100  add.s       $f4, $f4, $f4
    ctx->pc = 0x4a240cu;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[4]);
    // 0x4a2410: 0x9225000d  lbu         $a1, 0xD($s1)
    ctx->pc = 0x4a2410u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 13)));
label_4a2414:
    // 0x4a2414: 0x9223000c  lbu         $v1, 0xC($s1)
    ctx->pc = 0x4a2414u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x4a2418: 0x9242000c  lbu         $v0, 0xC($s2)
    ctx->pc = 0x4a2418u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x4a241c: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x4a241cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4a2420: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x4a2420u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x4a2424: 0x9244000d  lbu         $a0, 0xD($s2)
    ctx->pc = 0x4a2424u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 13)));
    // 0x4a2428: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x4a2428u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x4a242c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x4a242cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x4a2430: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x4a2430u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x4a2434: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x4a2434u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x4a2438: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x4a2438u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4a243c: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x4a243cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x4a2440: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x4a2440u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x4a2444: 0xa0c02d  daddu       $t8, $a1, $zero
    ctx->pc = 0x4a2444u;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a2448: 0x46030843  div.s       $f1, $f1, $f3
    ctx->pc = 0x4a2448u;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[3]); }
    // 0x4a244c: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x4a244cu;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x4a2450: 0x4c00005  bltz        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x4A2450u;
    {
        const bool branch_taken_0x4a2450 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x4A2454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A2450u;
        // 0x4a2454: 0x46000842  mul.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a2450) {
            ctx->pc = 0x4A2468u;
            goto label_4a2468;
        }
    }
    ctx->pc = 0x4A2458u;
    // 0x4a2458: 0x44861000  mtc1        $a2, $f2
    ctx->pc = 0x4a2458u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x4a245c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x4a245cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x4a2460: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x4A2460u;
    {
        const bool branch_taken_0x4a2460 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A2464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A2460u;
        // 0x4a2464: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a2460) {
            ctx->pc = 0x4A2484u;
            goto label_4a2484;
        }
    }
    ctx->pc = 0x4A2468u;
label_4a2468:
    // 0x4a2468: 0x30c20001  andi        $v0, $a2, 0x1
    ctx->pc = 0x4a2468u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
    // 0x4a246c: 0x61842  srl         $v1, $a2, 1
    ctx->pc = 0x4a246cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 6), 1));
    // 0x4a2470: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x4a2470u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x4a2474: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x4a2474u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x4a2478: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x4a2478u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x4a247c: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x4a247cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
    // 0x4a2480: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x4a2480u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_4a2484:
    // 0x4a2484: 0x4800005  bltz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4A2484u;
    {
        const bool branch_taken_0x4a2484 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x4A2488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A2484u;
        // 0x4a2488: 0x30820001  andi        $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a2484) {
            ctx->pc = 0x4A249Cu;
            goto label_4a249c;
        }
    }
    ctx->pc = 0x4A248Cu;
    // 0x4a248c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x4a248cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4a2490: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x4a2490u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x4a2494: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x4A2494u;
    {
        const bool branch_taken_0x4a2494 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a2494) {
            ctx->pc = 0x4A24B0u;
            goto label_4a24b0;
        }
    }
    ctx->pc = 0x4A249Cu;
label_4a249c:
    // 0x4a249c: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x4a249cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x4a24a0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x4a24a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x4a24a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4a24a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4a24a8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x4a24a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x4a24ac: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x4a24acu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_4a24b0:
    // 0x4a24b0: 0x46001003  div.s       $f0, $f2, $f0
    ctx->pc = 0x4a24b0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[2], ctx->f[0]); }
    // 0x4a24b4: 0x71823  negu        $v1, $a3
    ctx->pc = 0x4a24b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 7)));
    // 0x4a24b8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x4a24b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x4a24bc: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x4a24bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x4a24c0: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4a24c0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x4a24c4: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x4a24c4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x4a24c8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x4a24c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x4a24cc: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x4a24ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x4a24d0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4a24d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4a24d4: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4A24D4u;
    {
        const bool branch_taken_0x4a24d4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x4A24D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A24D4u;
        // 0x4a24d8: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a24d4) {
            ctx->pc = 0x4A24ECu;
            goto label_4a24ec;
        }
    }
    ctx->pc = 0x4A24DCu;
    // 0x4a24dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4a24dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4a24e0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x4a24e0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x4a24e4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x4A24E4u;
    {
        const bool branch_taken_0x4a24e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A24E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A24E4u;
        // 0x4a24e8: 0x8ea50000  lw          $a1, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a24e4) {
            ctx->pc = 0x4A2504u;
            goto label_4a2504;
        }
    }
    ctx->pc = 0x4A24ECu;
label_4a24ec:
    // 0x4a24ec: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x4a24ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x4a24f0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x4a24f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x4a24f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4a24f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4a24f8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x4a24f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x4a24fc: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x4a24fcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x4a2500: 0x8ea50000  lw          $a1, 0x0($s5)
    ctx->pc = 0x4a2500u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_4a2504:
    // 0x4a2504: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4a2504u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x4a2508: 0x44160800  mfc1        $s6, $f1
    ctx->pc = 0x4a2508u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 22, bits); }
    // 0x4a250c: 0x56600001  bnel        $s3, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x4A250Cu;
    {
        const bool branch_taken_0x4a250c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x4a250c) {
            ctx->pc = 0x4A2510u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A250Cu;
            // 0x4a2510: 0x2659821  addu        $s3, $s3, $a1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A2514u;
            goto label_4a2514;
        }
    }
    ctx->pc = 0x4A2514u;
label_4a2514:
    // 0x4a2514: 0x9222000c  lbu         $v0, 0xC($s1)
    ctx->pc = 0x4a2514u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x4a2518: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x4a2518u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x4a251c: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x4A251Cu;
    {
        const bool branch_taken_0x4a251c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x4A2520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A251Cu;
        // 0x4a2520: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a251c) {
            ctx->pc = 0x4A2534u;
            goto label_4a2534;
        }
    }
    ctx->pc = 0x4A2524u;
    // 0x4a2524: 0x92220018  lbu         $v0, 0x18($s1)
    ctx->pc = 0x4a2524u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x4a2528: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x4a2528u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4a252c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4A252Cu;
    {
        const bool branch_taken_0x4a252c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A2530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A252Cu;
        // 0x4a2530: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a252c) {
            ctx->pc = 0x4A2540u;
            goto label_4a2540;
        }
    }
    ctx->pc = 0x4A2534u;
label_4a2534:
    // 0x4a2534: 0x92220018  lbu         $v0, 0x18($s1)
    ctx->pc = 0x4a2534u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x4a2538: 0x24090004  addiu       $t1, $zero, 0x4
    ctx->pc = 0x4a2538u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4a253c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x4a253cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4a2540:
    // 0x4a2540: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x4a2540u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x4a2544: 0x62480b  movn        $t1, $v1, $v0
    ctx->pc = 0x4a2544u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 3));
    // 0x4a2548: 0x710c2  srl         $v0, $a3, 3
    ctx->pc = 0x4a2548u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), 3));
    // 0x4a254c: 0x2c51823  subu        $v1, $s6, $a1
    ctx->pc = 0x4a254cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 5)));
    // 0x4a2550: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x4a2550u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x4a2554: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x4A2554u;
    {
        const bool branch_taken_0x4a2554 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a2554) {
            ctx->pc = 0x4A2558u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A2554u;
            // 0x4a2558: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A255Cu;
            goto label_4a255c;
        }
    }
    ctx->pc = 0x4A255Cu;
label_4a255c:
    // 0x4a255c: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x4a255cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x4a2560: 0x300b82d  daddu       $s7, $t8, $zero
    ctx->pc = 0x4a2560u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a2564: 0x2812  mflo        $a1
    ctx->pc = 0x4a2564u;
    SET_GPR_U64(ctx, 5, ctx->lo);
    // 0x4a2568: 0x4800005  bltz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4A2568u;
    {
        const bool branch_taken_0x4a2568 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x4A256Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A2568u;
        // 0x4a256c: 0xa0c82d  daddu       $t9, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a2568) {
            ctx->pc = 0x4A2580u;
            goto label_4a2580;
        }
    }
    ctx->pc = 0x4A2570u;
    // 0x4a2570: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x4a2570u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x4a2574: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x4a2574u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x4a2578: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x4A2578u;
    {
        const bool branch_taken_0x4a2578 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a2578) {
            ctx->pc = 0x4A2598u;
            goto label_4a2598;
        }
    }
    ctx->pc = 0x4A2580u;
label_4a2580:
    // 0x4a2580: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x4a2580u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x4a2584: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x4a2584u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x4a2588: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x4a2588u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x4a258c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x4a258cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x4a2590: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x4a2590u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x4a2594: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x4a2594u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_4a2598:
    // 0x4a2598: 0x4c00005  bltz        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x4A2598u;
    {
        const bool branch_taken_0x4a2598 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x4A259Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A2598u;
        // 0x4a259c: 0x30c20001  andi        $v0, $a2, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a2598) {
            ctx->pc = 0x4A25B0u;
            goto label_4a25b0;
        }
    }
    ctx->pc = 0x4A25A0u;
    // 0x4a25a0: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x4a25a0u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4a25a4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x4a25a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x4a25a8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x4A25A8u;
    {
        const bool branch_taken_0x4a25a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a25a8) {
            ctx->pc = 0x4A25C4u;
            goto label_4a25c4;
        }
    }
    ctx->pc = 0x4A25B0u;
label_4a25b0:
    // 0x4a25b0: 0x61842  srl         $v1, $a2, 1
    ctx->pc = 0x4a25b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 6), 1));
    // 0x4a25b4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x4a25b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x4a25b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4a25b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4a25bc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x4a25bcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x4a25c0: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x4a25c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_4a25c4:
    // 0x4a25c4: 0x460009c3  div.s       $f7, $f1, $f0
    ctx->pc = 0x4a25c4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[7] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x4a25c8: 0x2f020002  sltiu       $v0, $t8, 0x2
    ctx->pc = 0x4a25c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 24) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x4a25cc: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x4A25CCu;
    {
        const bool branch_taken_0x4a25cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A25D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A25CCu;
        // 0x4a25d0: 0x181023  negu        $v0, $t8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a25cc) {
            ctx->pc = 0x4A25D8u;
            goto label_4a25d8;
        }
    }
    ctx->pc = 0x4A25D4u;
    // 0x4a25d4: 0xa2c824  and         $t9, $a1, $v0
    ctx->pc = 0x4a25d4u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
label_4a25d8:
    // 0x4a25d8: 0x52600007  beql        $s3, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x4A25D8u;
    {
        const bool branch_taken_0x4a25d8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a25d8) {
            ctx->pc = 0x4A25DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A25D8u;
            // 0x4a25dc: 0x8ea20000  lw          $v0, 0x0($s5) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A25F8u;
            goto label_4a25f8;
        }
    }
    ctx->pc = 0x4A25E0u;
    // 0x4a25e0: 0x14860007  bne         $a0, $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x4A25E0u;
    {
        const bool branch_taken_0x4a25e0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 6));
        ctx->pc = 0x4A25E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A25E0u;
        // 0x4a25e4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a25e0) {
            ctx->pc = 0x4A2600u;
            goto label_4a2600;
        }
    }
    ctx->pc = 0x4A25E8u;
    // 0x4a25e8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x4a25e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a25ec: 0xc0bb778  jal         func_2EDDE0
    ctx->pc = 0x4A25ECu;
    SET_GPR_U32(ctx, 31, 0x4A25F4u);
    ctx->pc = 0x4A25F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A25ECu;
    // 0x4a25f0: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDDE0u, 0x4A25ECu, 0x4A25F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A25F4u;
label_4a25f4:
    // 0x4a25f4: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x4a25f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_4a25f8:
    // 0x4a25f8: 0x100000a1  b           . + 4 + (0xA1 << 2)
    ctx->pc = 0x4A25F8u;
    {
        const bool branch_taken_0x4a25f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A25FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A25F8u;
        // 0x4a25fc: 0x2c21023  subu        $v0, $s6, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a25f8) {
            ctx->pc = 0x4A2880u;
            goto label_4a2880;
        }
    }
    ctx->pc = 0x4A2600u;
label_4a2600:
    // 0x4a2600: 0x1300002e  beqz        $t8, . + 4 + (0x2E << 2)
    ctx->pc = 0x4A2600u;
    {
        const bool branch_taken_0x4a2600 = (GPR_U64(ctx, 24) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A2604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A2600u;
        // 0x4a2604: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a2600) {
            ctx->pc = 0x4A26BCu;
            goto label_4a26bc;
        }
    }
    ctx->pc = 0x4A2608u;
    // 0x4a2608: 0x240c0002  addiu       $t4, $zero, 0x2
    ctx->pc = 0x4a2608u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4a260c: 0x2d260003  sltiu       $a2, $t1, 0x3
    ctx->pc = 0x4a260cu;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x4a2610: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x4a2610u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4a2614: 0x240a0003  addiu       $t2, $zero, 0x3
    ctx->pc = 0x4a2614u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x4a2618: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x4a2618u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4a261c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x4a261cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a2620: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4a2620u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a2624: 0x280182d  daddu       $v1, $s4, $zero
    ctx->pc = 0x4a2624u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4a2628:
    // 0x4a2628: 0x512c0012  beql        $t1, $t4, . + 4 + (0x12 << 2)
    ctx->pc = 0x4A2628u;
    {
        const bool branch_taken_0x4a2628 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 12));
        if (branch_taken_0x4a2628) {
            ctx->pc = 0x4A262Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A2628u;
            // 0x4a262c: 0x80620000  lb          $v0, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A2674u;
            goto label_4a2674;
        }
    }
    ctx->pc = 0x4A2630u;
    // 0x4a2630: 0x10c00005  beqz        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x4A2630u;
    {
        const bool branch_taken_0x4a2630 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a2630) {
            ctx->pc = 0x4A2648u;
            goto label_4a2648;
        }
    }
    ctx->pc = 0x4A2638u;
    // 0x4a2638: 0x112b0009  beq         $t1, $t3, . + 4 + (0x9 << 2)
    ctx->pc = 0x4A2638u;
    {
        const bool branch_taken_0x4a2638 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 11));
        ctx->pc = 0x4A263Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A2638u;
        // 0x4a263c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a2638) {
            ctx->pc = 0x4A2660u;
            goto label_4a2660;
        }
    }
    ctx->pc = 0x4A2640u;
    // 0x4a2640: 0x10000090  b           . + 4 + (0x90 << 2)
    ctx->pc = 0x4A2640u;
    {
        const bool branch_taken_0x4a2640 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A2644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A2640u;
        // 0x4a2644: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a2640) {
            ctx->pc = 0x4A2884u;
            goto label_4a2884;
        }
    }
    ctx->pc = 0x4A2648u;
label_4a2648:
    // 0x4a2648: 0x512a000e  beql        $t1, $t2, . + 4 + (0xE << 2)
    ctx->pc = 0x4A2648u;
    {
        const bool branch_taken_0x4a2648 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 10));
        if (branch_taken_0x4a2648) {
            ctx->pc = 0x4A264Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A2648u;
            // 0x4a264c: 0x94820000  lhu         $v0, 0x0($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A2684u;
            goto label_4a2684;
        }
    }
    ctx->pc = 0x4A2650u;
    // 0x4a2650: 0x11280010  beq         $t1, $t0, . + 4 + (0x10 << 2)
    ctx->pc = 0x4A2650u;
    {
        const bool branch_taken_0x4a2650 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 8));
        ctx->pc = 0x4A2654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A2650u;
        // 0x4a2654: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a2650) {
            ctx->pc = 0x4A2694u;
            goto label_4a2694;
        }
    }
    ctx->pc = 0x4A2658u;
    // 0x4a2658: 0x1000008a  b           . + 4 + (0x8A << 2)
    ctx->pc = 0x4A2658u;
    {
        const bool branch_taken_0x4a2658 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A265Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A2658u;
        // 0x4a265c: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a2658) {
            ctx->pc = 0x4A2884u;
            goto label_4a2884;
        }
    }
    ctx->pc = 0x4A2660u;
label_4a2660:
    // 0x4a2660: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x4a2660u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4a2664: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x4a2664u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x4a2668: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x4a2668u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x4a266c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x4A266Cu;
    {
        const bool branch_taken_0x4a266c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A2670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A266Cu;
        // 0x4a2670: 0xe4a30000  swc1        $f3, 0x0($a1) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a266c) {
            ctx->pc = 0x4A26A4u;
            goto label_4a26a4;
        }
    }
    ctx->pc = 0x4A2674u;
label_4a2674:
    // 0x4a2674: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x4a2674u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x4a2678: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x4a2678u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x4a267c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x4A267Cu;
    {
        const bool branch_taken_0x4a267c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A2680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A267Cu;
        // 0x4a2680: 0xe4a30000  swc1        $f3, 0x0($a1) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a267c) {
            ctx->pc = 0x4A26A4u;
            goto label_4a26a4;
        }
    }
    ctx->pc = 0x4A2684u;
label_4a2684:
    // 0x4a2684: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x4a2684u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x4a2688: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x4a2688u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x4a268c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x4A268Cu;
    {
        const bool branch_taken_0x4a268c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A2690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A268Cu;
        // 0x4a2690: 0xe4a30000  swc1        $f3, 0x0($a1) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a268c) {
            ctx->pc = 0x4A26A4u;
            goto label_4a26a4;
        }
    }
    ctx->pc = 0x4A2694u;
label_4a2694:
    // 0x4a2694: 0x84820000  lh          $v0, 0x0($a0)
    ctx->pc = 0x4a2694u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4a2698: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x4a2698u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x4a269c: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x4a269cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x4a26a0: 0xe4a30000  swc1        $f3, 0x0($a1)
    ctx->pc = 0x4a26a0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
label_4a26a4:
    // 0x4a26a4: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x4a26a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x4a26a8: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x4a26a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x4a26ac: 0x24840002  addiu       $a0, $a0, 0x2
    ctx->pc = 0x4a26acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x4a26b0: 0xf8102b  sltu        $v0, $a3, $t8
    ctx->pc = 0x4a26b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 24)) ? 1 : 0);
    // 0x4a26b4: 0x1440ffdc  bnez        $v0, . + 4 + (-0x24 << 2)
    ctx->pc = 0x4A26B4u;
    {
        const bool branch_taken_0x4a26b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A26B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A26B4u;
        // 0x4a26b8: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a26b4) {
            ctx->pc = 0x4A2628u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a2628;
        }
    }
    ctx->pc = 0x4A26BCu;
label_4a26bc:
    // 0x4a26bc: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x4a26bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x4a26c0: 0x1320006e  beqz        $t9, . + 4 + (0x6E << 2)
    ctx->pc = 0x4A26C0u;
    {
        const bool branch_taken_0x4a26c0 = (GPR_U64(ctx, 25) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A26C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A26C0u;
        // 0x4a26c4: 0x682d  daddu       $t5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a26c0) {
            ctx->pc = 0x4A287Cu;
            goto label_4a287c;
        }
    }
    ctx->pc = 0x4A26C8u;
    // 0x4a26c8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x4a26c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x4a26cc: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x4a26ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x4a26d0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x4a26d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a26d4: 0x0  nop
    ctx->pc = 0x4a26d4u;
    // NOP
label_4a26d8:
    // 0x4a26d8: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4a26d8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x4a26dc: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x4a26dcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x4a26e0: 0x0  nop
    ctx->pc = 0x4a26e0u;
    // NOP
    // 0x4a26e4: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4A26E4u;
    {
        const bool branch_taken_0x4a26e4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x4A26E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A26E4u;
        // 0x4a26e8: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a26e4) {
            ctx->pc = 0x4A26FCu;
            goto label_4a26fc;
        }
    }
    ctx->pc = 0x4A26ECu;
    // 0x4a26ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4a26ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4a26f0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x4a26f0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x4a26f4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x4A26F4u;
    {
        const bool branch_taken_0x4a26f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A26F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A26F4u;
        // 0x4a26f8: 0x46000901  sub.s       $f4, $f1, $f0 (Delay Slot)
        ctx->f[4] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a26f4) {
            ctx->pc = 0x4A2714u;
            goto label_4a2714;
        }
    }
    ctx->pc = 0x4A26FCu;
label_4a26fc:
    // 0x4a26fc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x4a26fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x4a2700: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x4a2700u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x4a2704: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4a2704u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4a2708: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x4a2708u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x4a270c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x4a270cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x4a2710: 0x46000901  sub.s       $f4, $f1, $f0
    ctx->pc = 0x4a2710u;
    ctx->f[4] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_4a2714:
    // 0x4a2714: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4a2714u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a2718: 0x13000049  beqz        $t8, . + 4 + (0x49 << 2)
    ctx->pc = 0x4A2718u;
    {
        const bool branch_taken_0x4a2718 = (GPR_U64(ctx, 24) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A271Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A2718u;
        // 0x4a271c: 0x46070940  add.s       $f5, $f1, $f7 (Delay Slot)
        ctx->f[5] = FPU_ADD_S(ctx->f[1], ctx->f[7]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a2718) {
            ctx->pc = 0x4A2840u;
            goto label_4a2840;
        }
    }
    ctx->pc = 0x4A2720u;
    // 0x4a2720: 0x121040  sll         $v0, $s2, 1
    ctx->pc = 0x4a2720u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x4a2724: 0xd1840  sll         $v1, $t5, 1
    ctx->pc = 0x4a2724u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 13), 1));
    // 0x4a2728: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x4a2728u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x4a272c: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x4a272cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x4a2730: 0x544021  addu        $t0, $v0, $s4
    ctx->pc = 0x4a2730u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x4a2734: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x4a2734u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x4a2738: 0x24110002  addiu       $s1, $zero, 0x2
    ctx->pc = 0x4a2738u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4a273c: 0x2d2b0003  sltiu       $t3, $t1, 0x3
    ctx->pc = 0x4a273cu;
    SET_GPR_U64(ctx, 11, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x4a2740: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x4a2740u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4a2744: 0x240f0003  addiu       $t7, $zero, 0x3
    ctx->pc = 0x4a2744u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x4a2748: 0x240e0004  addiu       $t6, $zero, 0x4
    ctx->pc = 0x4a2748u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4a274c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x4a274cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a2750: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x4a2750u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a2754: 0x2543021  addu        $a2, $s2, $s4
    ctx->pc = 0x4a2754u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 20)));
    // 0x4a2758: 0x1b32821  addu        $a1, $t5, $s3
    ctx->pc = 0x4a2758u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 19)));
    // 0x4a275c: 0x0  nop
    ctx->pc = 0x4a275cu;
    // NOP
label_4a2760:
    // 0x4a2760: 0x5131000d  beql        $t1, $s1, . + 4 + (0xD << 2)
    ctx->pc = 0x4A2760u;
    {
        const bool branch_taken_0x4a2760 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 17));
        if (branch_taken_0x4a2760) {
            ctx->pc = 0x4A2764u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A2760u;
            // 0x4a2764: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A2798u;
            goto label_4a2798;
        }
    }
    ctx->pc = 0x4A2768u;
    // 0x4a2768: 0x11600005  beqz        $t3, . + 4 + (0x5 << 2)
    ctx->pc = 0x4A2768u;
    {
        const bool branch_taken_0x4a2768 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a2768) {
            ctx->pc = 0x4A2780u;
            goto label_4a2780;
        }
    }
    ctx->pc = 0x4A2770u;
    // 0x4a2770: 0x51300009  beql        $t1, $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x4A2770u;
    {
        const bool branch_taken_0x4a2770 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 16));
        if (branch_taken_0x4a2770) {
            ctx->pc = 0x4A2774u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A2770u;
            // 0x4a2774: 0x90c20000  lbu         $v0, 0x0($a2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A2798u;
            goto label_4a2798;
        }
    }
    ctx->pc = 0x4A2778u;
    // 0x4a2778: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x4A2778u;
    {
        const bool branch_taken_0x4a2778 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A277Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A2778u;
        // 0x4a277c: 0x46043001  sub.s       $f0, $f6, $f4 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[6], ctx->f[4]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a2778) {
            ctx->pc = 0x4A27A4u;
            goto label_4a27a4;
        }
    }
    ctx->pc = 0x4A2780u;
label_4a2780:
    // 0x4a2780: 0x512f0005  beql        $t1, $t7, . + 4 + (0x5 << 2)
    ctx->pc = 0x4A2780u;
    {
        const bool branch_taken_0x4a2780 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 15));
        if (branch_taken_0x4a2780) {
            ctx->pc = 0x4A2784u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A2780u;
            // 0x4a2784: 0x95020000  lhu         $v0, 0x0($t0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A2798u;
            goto label_4a2798;
        }
    }
    ctx->pc = 0x4A2788u;
    // 0x4a2788: 0x512e0003  beql        $t1, $t6, . + 4 + (0x3 << 2)
    ctx->pc = 0x4A2788u;
    {
        const bool branch_taken_0x4a2788 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 14));
        if (branch_taken_0x4a2788) {
            ctx->pc = 0x4A278Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A2788u;
            // 0x4a278c: 0x85020000  lh          $v0, 0x0($t0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A2798u;
            goto label_4a2798;
        }
    }
    ctx->pc = 0x4A2790u;
    // 0x4a2790: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4A2790u;
    {
        const bool branch_taken_0x4a2790 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A2794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A2790u;
        // 0x4a2794: 0x46043001  sub.s       $f0, $f6, $f4 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[6], ctx->f[4]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a2790) {
            ctx->pc = 0x4A27A4u;
            goto label_4a27a4;
        }
    }
    ctx->pc = 0x4A2798u;
label_4a2798:
    // 0x4a2798: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x4a2798u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x4a279c: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x4a279cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x4a27a0: 0x46043001  sub.s       $f0, $f6, $f4
    ctx->pc = 0x4a27a0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[6], ctx->f[4]);
label_4a27a4:
    // 0x4a27a4: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x4a27a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4a27a8: 0x46041882  mul.s       $f2, $f3, $f4
    ctx->pc = 0x4a27a8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x4a27ac: 0xe4830018  swc1        $f3, 0x18($a0)
    ctx->pc = 0x4a27acu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x4a27b0: 0x27aa0018  addiu       $t2, $sp, 0x18
    ctx->pc = 0x4a27b0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x4a27b4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x4a27b4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x4a27b8: 0x1131000d  beq         $t1, $s1, . + 4 + (0xD << 2)
    ctx->pc = 0x4A27B8u;
    {
        const bool branch_taken_0x4a27b8 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 17));
        ctx->pc = 0x4A27BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A27B8u;
        // 0x4a27bc: 0x46011080  add.s       $f2, $f2, $f1 (Delay Slot)
        ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a27b8) {
            ctx->pc = 0x4A27F0u;
            goto label_4a27f0;
        }
    }
    ctx->pc = 0x4A27C0u;
    // 0x4a27c0: 0x11600005  beqz        $t3, . + 4 + (0x5 << 2)
    ctx->pc = 0x4A27C0u;
    {
        const bool branch_taken_0x4a27c0 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a27c0) {
            ctx->pc = 0x4A27D8u;
            goto label_4a27d8;
        }
    }
    ctx->pc = 0x4A27C8u;
    // 0x4a27c8: 0x11300009  beq         $t1, $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x4A27C8u;
    {
        const bool branch_taken_0x4a27c8 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 16));
        ctx->pc = 0x4A27CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A27C8u;
        // 0x4a27cc: 0x14c1021  addu        $v0, $t2, $t4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a27c8) {
            ctx->pc = 0x4A27F0u;
            goto label_4a27f0;
        }
    }
    ctx->pc = 0x4A27D0u;
    // 0x4a27d0: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x4A27D0u;
    {
        const bool branch_taken_0x4a27d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A27D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A27D0u;
        // 0x4a27d4: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a27d0) {
            ctx->pc = 0x4A2814u;
            goto label_4a2814;
        }
    }
    ctx->pc = 0x4A27D8u;
label_4a27d8:
    // 0x4a27d8: 0x112f0009  beq         $t1, $t7, . + 4 + (0x9 << 2)
    ctx->pc = 0x4A27D8u;
    {
        const bool branch_taken_0x4a27d8 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 15));
        if (branch_taken_0x4a27d8) {
            ctx->pc = 0x4A2800u;
            goto label_4a2800;
        }
    }
    ctx->pc = 0x4A27E0u;
    // 0x4a27e0: 0x112e0007  beq         $t1, $t6, . + 4 + (0x7 << 2)
    ctx->pc = 0x4A27E0u;
    {
        const bool branch_taken_0x4a27e0 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 14));
        ctx->pc = 0x4A27E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A27E0u;
        // 0x4a27e4: 0x14c1021  addu        $v0, $t2, $t4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a27e0) {
            ctx->pc = 0x4A2800u;
            goto label_4a2800;
        }
    }
    ctx->pc = 0x4A27E8u;
    // 0x4a27e8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x4A27E8u;
    {
        const bool branch_taken_0x4a27e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A27ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A27E8u;
        // 0x4a27ec: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a27e8) {
            ctx->pc = 0x4A2814u;
            goto label_4a2814;
        }
    }
    ctx->pc = 0x4A27F0u;
label_4a27f0:
    // 0x4a27f0: 0x46001024  .word       0x46001024                   # cvt.w.s     $f0, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4a27f0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x4a27f4: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x4a27f4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x4a27f8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4A27F8u;
    {
        const bool branch_taken_0x4a27f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A27FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A27F8u;
        // 0x4a27fc: 0xa0a20000  sb          $v0, 0x0($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a27f8) {
            ctx->pc = 0x4A280Cu;
            goto label_4a280c;
        }
    }
    ctx->pc = 0x4A2800u;
label_4a2800:
    // 0x4a2800: 0x46001024  .word       0x46001024                   # cvt.w.s     $f0, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4a2800u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x4a2804: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x4a2804u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x4a2808: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x4a2808u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
label_4a280c:
    // 0x4a280c: 0x14c1021  addu        $v0, $t2, $t4
    ctx->pc = 0x4a280cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 12)));
    // 0x4a2810: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x4a2810u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_4a2814:
    // 0x4a2814: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x4a2814u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4a2818: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x4a2818u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x4a281c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x4a281cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x4a2820: 0x25ad0001  addiu       $t5, $t5, 0x1
    ctx->pc = 0x4a2820u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
    // 0x4a2824: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x4a2824u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x4a2828: 0x258c0004  addiu       $t4, $t4, 0x4
    ctx->pc = 0x4a2828u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
    // 0x4a282c: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x4a282cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x4a2830: 0x25080002  addiu       $t0, $t0, 0x2
    ctx->pc = 0x4a2830u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
    // 0x4a2834: 0xf8102b  sltu        $v0, $a3, $t8
    ctx->pc = 0x4a2834u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 24)) ? 1 : 0);
    // 0x4a2838: 0x1440ffc9  bnez        $v0, . + 4 + (-0x37 << 2)
    ctx->pc = 0x4A2838u;
    {
        const bool branch_taken_0x4a2838 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A283Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A2838u;
        // 0x4a283c: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a2838) {
            ctx->pc = 0x4A2760u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a2760;
        }
    }
    ctx->pc = 0x4A2840u;
label_4a2840:
    // 0x4a2840: 0x46002846  mov.s       $f1, $f5
    ctx->pc = 0x4a2840u;
    ctx->f[1] = FPU_MOV_S(ctx->f[5]);
    // 0x4a2844: 0x46014034  c.lt.s      $f8, $f1
    ctx->pc = 0x4a2844u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[8], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4a2848: 0x0  nop
    ctx->pc = 0x4a2848u;
    // NOP
    // 0x4a284c: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x4A284Cu;
    {
        const bool branch_taken_0x4a284c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x4A2850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A284Cu;
        // 0x4a2850: 0x1b9102b  sltu        $v0, $t5, $t9 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)GPR_U64(ctx, 25)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a284c) {
            ctx->pc = 0x4A2874u;
            goto label_4a2874;
        }
    }
    ctx->pc = 0x4A2854u;
    // 0x4a2854: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x4a2854u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x4a2858: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x4a2858u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4a285c: 0x0  nop
    ctx->pc = 0x4a285cu;
    // NOP
label_4a2860:
    // 0x4a2860: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x4a2860u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x4a2864: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x4a2864u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4a2868: 0x0  nop
    ctx->pc = 0x4a2868u;
    // NOP
    // 0x4a286c: 0x4501fffc  bc1t        . + 4 + (-0x4 << 2)
    ctx->pc = 0x4A286Cu;
    {
        const bool branch_taken_0x4a286c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x4A2870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A286Cu;
        // 0x4a2870: 0x2579021  addu        $s2, $s2, $s7 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 23)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a286c) {
            ctx->pc = 0x4A2860u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a2860;
        }
    }
    ctx->pc = 0x4A2874u;
label_4a2874:
    // 0x4a2874: 0x1440ff98  bnez        $v0, . + 4 + (-0x68 << 2)
    ctx->pc = 0x4A2874u;
    {
        const bool branch_taken_0x4a2874 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4a2874) {
            ctx->pc = 0x4A26D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a26d8;
        }
    }
    ctx->pc = 0x4A287Cu;
label_4a287c:
    // 0x4a287c: 0x2c0102d  daddu       $v0, $s6, $zero
    ctx->pc = 0x4a287cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_4a2880:
    // 0x4a2880: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x4a2880u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_4a2884:
    // 0x4a2884: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x4a2884u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x4a2888: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x4a2888u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x4a288c: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x4a288cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x4a2890: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x4a2890u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x4a2894: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x4a2894u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x4a2898: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x4a2898u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x4a289c: 0x7bb70050  lq          $s7, 0x50($sp)
    ctx->pc = 0x4a289cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4a28a0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4a28a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4a28a4: 0x3e00008  jr          $ra
    ctx->pc = 0x4A28A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A28A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A28A4u;
        // 0x4a28a8: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A28A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A28ACu;
    // 0x4a28ac: 0x0  nop
    ctx->pc = 0x4a28acu;
    // NOP
    ctx->pc = 0x4a28b0u;
}
