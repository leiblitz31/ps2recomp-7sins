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

// Function: sub_002963E0
// Address: 0x2963e0 - 0x296670
void sub_002963E0_0x2963e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002963E0_0x2963e0");
#endif

    switch (ctx->pc) {
        case 0x296410u: goto label_296410;
        case 0x296444u: goto label_296444;
        case 0x29645cu: goto label_29645c;
        case 0x296474u: goto label_296474;
        case 0x296650u: goto label_296650;
        default: break;
    }

    ctx->pc = 0x2963e0u;

    // 0x2963e0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2963e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2963e4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2963e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2963e8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2963e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2963ec: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2963ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2963f0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2963f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2963f4: 0xafa40070  sw          $a0, 0x70($sp)
    ctx->pc = 0x2963f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 4));
    // 0x2963f8: 0xafa50080  sw          $a1, 0x80($sp)
    ctx->pc = 0x2963f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 5));
    // 0x2963fc: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x2963fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x296400: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x296400u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x296404: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x296404u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x296408: 0xc085538  jal         func_2154E0
    ctx->pc = 0x296408u;
    SET_GPR_U32(ctx, 31, 0x296410u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x296408u, 0x296410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296410u;
label_296410:
    // 0x296410: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x296410u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296414: 0x1012008e  beq         $zero, $s2, . + 4 + (0x8E << 2)
    ctx->pc = 0x296414u;
    {
        const bool branch_taken_0x296414 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 18));
        if (branch_taken_0x296414) {
            ctx->pc = 0x296650u;
            goto label_296650;
        }
    }
    ctx->pc = 0x29641Cu;
    // 0x29641c: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x29641cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x296420: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x296420u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x296424: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x296424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x296428: 0x1002000d  beq         $zero, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x296428u;
    {
        const bool branch_taken_0x296428 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x296428) {
            ctx->pc = 0x296460u;
            goto label_296460;
        }
    }
    ctx->pc = 0x296430u;
    // 0x296430: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x296430u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x296434: 0x240503fb  addiu       $a1, $zero, 0x3FB
    ctx->pc = 0x296434u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1019));
    // 0x296438: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x296438u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29643c: 0xc040ab0  jal         func_102AC0
    ctx->pc = 0x29643Cu;
    SET_GPR_U32(ctx, 31, 0x296444u);
    ctx->pc = 0x102AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AC0u, 0x29643Cu, 0x296444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296444u;
label_296444:
    // 0x296444: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x296444u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296448: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x296448u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x29644c: 0x240503fc  addiu       $a1, $zero, 0x3FC
    ctx->pc = 0x29644cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1020));
    // 0x296450: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x296450u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296454: 0xc040ab0  jal         func_102AC0
    ctx->pc = 0x296454u;
    SET_GPR_U32(ctx, 31, 0x29645Cu);
    ctx->pc = 0x102AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AC0u, 0x296454u, 0x29645Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29645Cu;
label_29645c:
    // 0x29645c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x29645cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_296460:
    // 0x296460: 0x27a40058  addiu       $a0, $sp, 0x58
    ctx->pc = 0x296460u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x296464: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x296464u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x296468: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x296468u;
    {
        const bool branch_taken_0x296468 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x296468) {
            ctx->pc = 0x296490u;
            goto label_296490;
        }
    }
    ctx->pc = 0x296470u;
    // 0x296470: 0x801021  addu        $v0, $a0, $zero
    ctx->pc = 0x296470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 0)));
label_296474:
    // 0x296474: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x296474u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x296478: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x296478u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x29647c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x29647cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x296480: 0x0  nop
    ctx->pc = 0x296480u;
    // NOP
    // 0x296484: 0x0  nop
    ctx->pc = 0x296484u;
    // NOP
    // 0x296488: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x296488u;
    {
        const bool branch_taken_0x296488 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x296488) {
            ctx->pc = 0x296474u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_296474;
        }
    }
    ctx->pc = 0x296490u;
label_296490:
    // 0x296490: 0x6200006  bltz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x296490u;
    {
        const bool branch_taken_0x296490 = (GPR_S32(ctx, 17) < 0);
        if (branch_taken_0x296490) {
            ctx->pc = 0x2964ACu;
            goto label_2964ac;
        }
    }
    ctx->pc = 0x296498u;
    // 0x296498: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x296498u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29649c: 0x0  nop
    ctx->pc = 0x29649cu;
    // NOP
    // 0x2964a0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2964a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2964a4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2964A4u;
    {
        const bool branch_taken_0x2964a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2964a4) {
            ctx->pc = 0x2964C8u;
            goto label_2964c8;
        }
    }
    ctx->pc = 0x2964ACu;
label_2964ac:
    // 0x2964ac: 0x111842  srl         $v1, $s1, 1
    ctx->pc = 0x2964acu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
    // 0x2964b0: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x2964b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x2964b4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2964b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2964b8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2964b8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2964bc: 0x0  nop
    ctx->pc = 0x2964bcu;
    // NOP
    // 0x2964c0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2964c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2964c4: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2964c4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2964c8:
    // 0x2964c8: 0x46000047  neg.s       $f1, $f0
    ctx->pc = 0x2964c8u;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
    // 0x2964cc: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x2964ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x2964d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2964d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2964d4: 0x0  nop
    ctx->pc = 0x2964d4u;
    // NOP
    // 0x2964d8: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x2964d8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2964dc: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2964dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2964e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2964e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2964e4: 0x0  nop
    ctx->pc = 0x2964e4u;
    // NOP
    // 0x2964e8: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x2964e8u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x2964ec: 0x0  nop
    ctx->pc = 0x2964ecu;
    // NOP
    // 0x2964f0: 0x0  nop
    ctx->pc = 0x2964f0u;
    // NOP
    // 0x2964f4: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x2964f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x2964f8: 0x6000006  bltz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2964F8u;
    {
        const bool branch_taken_0x2964f8 = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x2964f8) {
            ctx->pc = 0x296514u;
            goto label_296514;
        }
    }
    ctx->pc = 0x296500u;
    // 0x296500: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x296500u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x296504: 0x0  nop
    ctx->pc = 0x296504u;
    // NOP
    // 0x296508: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x296508u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x29650c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x29650Cu;
    {
        const bool branch_taken_0x29650c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29650c) {
            ctx->pc = 0x296530u;
            goto label_296530;
        }
    }
    ctx->pc = 0x296514u;
label_296514:
    // 0x296514: 0x101842  srl         $v1, $s0, 1
    ctx->pc = 0x296514u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
    // 0x296518: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x296518u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x29651c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x29651cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x296520: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x296520u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x296524: 0x0  nop
    ctx->pc = 0x296524u;
    // NOP
    // 0x296528: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x296528u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x29652c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x29652cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_296530:
    // 0x296530: 0x46000047  neg.s       $f1, $f0
    ctx->pc = 0x296530u;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
    // 0x296534: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x296534u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x296538: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x296538u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29653c: 0x0  nop
    ctx->pc = 0x29653cu;
    // NOP
    // 0x296540: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x296540u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x296544: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x296544u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x296548: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x296548u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29654c: 0x0  nop
    ctx->pc = 0x29654cu;
    // NOP
    // 0x296550: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x296550u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x296554: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x296554u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x296558: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x296558u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x29655c: 0x3c04004f  lui         $a0, 0x4F
    ctx->pc = 0x29655cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)79 << 16));
    // 0x296560: 0x2484d598  addiu       $a0, $a0, -0x2A68
    ctx->pc = 0x296560u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956440));
    // 0x296564: 0x27a30048  addiu       $v1, $sp, 0x48
    ctx->pc = 0x296564u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x296568: 0xdc820000  ld          $v0, 0x0($a0)
    ctx->pc = 0x296568u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x4ED598u));
    // 0x29656c: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x29656cu;
    { uint32_t bits = FAST_READ32(0x4ED5A0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x296570: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x296570u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x296574: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x296574u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x296578: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x296578u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x29657c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x29657cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x296580: 0x6200006  bltz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x296580u;
    {
        const bool branch_taken_0x296580 = (GPR_S32(ctx, 17) < 0);
        if (branch_taken_0x296580) {
            ctx->pc = 0x29659Cu;
            goto label_29659c;
        }
    }
    ctx->pc = 0x296588u;
    // 0x296588: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x296588u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29658c: 0x0  nop
    ctx->pc = 0x29658cu;
    // NOP
    // 0x296590: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x296590u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x296594: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x296594u;
    {
        const bool branch_taken_0x296594 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x296594) {
            ctx->pc = 0x2965B8u;
            goto label_2965b8;
        }
    }
    ctx->pc = 0x29659Cu;
label_29659c:
    // 0x29659c: 0x111842  srl         $v1, $s1, 1
    ctx->pc = 0x29659cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
    // 0x2965a0: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x2965a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x2965a4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2965a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2965a8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2965a8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2965ac: 0x0  nop
    ctx->pc = 0x2965acu;
    // NOP
    // 0x2965b0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2965b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2965b4: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2965b4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2965b8:
    // 0x2965b8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2965b8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2965bc: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2965bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2965c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2965c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2965c4: 0x0  nop
    ctx->pc = 0x2965c4u;
    // NOP
    // 0x2965c8: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x2965c8u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x2965cc: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x2965ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x2965d0: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x2965d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x2965d4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2965d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2965d8: 0x6000006  bltz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2965D8u;
    {
        const bool branch_taken_0x2965d8 = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x2965d8) {
            ctx->pc = 0x2965F4u;
            goto label_2965f4;
        }
    }
    ctx->pc = 0x2965E0u;
    // 0x2965e0: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x2965e0u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2965e4: 0x0  nop
    ctx->pc = 0x2965e4u;
    // NOP
    // 0x2965e8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2965e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2965ec: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2965ECu;
    {
        const bool branch_taken_0x2965ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2965ec) {
            ctx->pc = 0x296610u;
            goto label_296610;
        }
    }
    ctx->pc = 0x2965F4u;
label_2965f4:
    // 0x2965f4: 0x101842  srl         $v1, $s0, 1
    ctx->pc = 0x2965f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
    // 0x2965f8: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x2965f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x2965fc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2965fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x296600: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x296600u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x296604: 0x0  nop
    ctx->pc = 0x296604u;
    // NOP
    // 0x296608: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x296608u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x29660c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x29660cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_296610:
    // 0x296610: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x296610u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x296614: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x296614u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x296618: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x296618u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29661c: 0x0  nop
    ctx->pc = 0x29661cu;
    // NOP
    // 0x296620: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x296620u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x296624: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x296624u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x296628: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x296628u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x29662c: 0x27a2006c  addiu       $v0, $sp, 0x6C
    ctx->pc = 0x29662cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
    // 0x296630: 0xc780a2d8  lwc1        $f0, -0x5D28($gp)
    ctx->pc = 0x296630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294943448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x296634: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x296634u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x296638: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x296638u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29663c: 0x27a50058  addiu       $a1, $sp, 0x58
    ctx->pc = 0x29663cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x296640: 0x27a60048  addiu       $a2, $sp, 0x48
    ctx->pc = 0x296640u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x296644: 0x27a7006c  addiu       $a3, $sp, 0x6C
    ctx->pc = 0x296644u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
    // 0x296648: 0xc0a43e4  jal         func_290F90
    ctx->pc = 0x296648u;
    SET_GPR_U32(ctx, 31, 0x296650u);
    ctx->pc = 0x290F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290F90u, 0x296648u, 0x296650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296650u;
label_296650:
    // 0x296650: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x296650u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x296654: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x296654u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x296658: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x296658u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29665c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29665cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x296660: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x296660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x296664: 0x3e00008  jr          $ra
    ctx->pc = 0x296664u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x296664u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29666Cu;
    // 0x29666c: 0x0  nop
    ctx->pc = 0x29666cu;
    // NOP
    ctx->pc = 0x296670u;
}
